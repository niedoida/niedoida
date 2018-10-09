/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_pdps_AB.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
void second_derivative_ee_1210_12(const double ae,
                                  const double xA,
                                  const double yA,
                                  const double zA,
                                  const double be,
                                  const double xB,
                                  const double yB,
                                  const double zB,
                                  const double ce,
                                  const double xC,
                                  const double yC,
                                  const double zC,
                                  const double de,
                                  const double xD,
                                  const double yD,
                                  const double zD,
                                  const double* const bs,
                                  double* const d2eexx,
                                  double* const d2eexy,
                                  double* const d2eexz,
                                  double* const d2eeyx,
                                  double* const d2eeyy,
                                  double* const d2eeyz,
                                  double* const d2eezx,
                                  double* const d2eezy,
                                  double* const d2eezz)
{
    const double p = ae + be;
    const double q = ce + de;
    const double xP = (ae * xA + be * xB) / p;
    const double yP = (ae * yA + be * yB) / p;
    const double zP = (ae * zA + be * zB) / p;
    const double xQ = (ce * xC + de * xD) / q;
    const double yQ = (ce * yC + de * yD) / q;
    const double zQ = (ce * zC + de * zD) / q;
    const double C26708 = 0 * ae;
    const double C26707 = ae * be;
    const double C26706 = 0 * be;
    const double C26705 = ae + be;
    const double C26704 = 0 * be;
    const double C26703 = xA - xB;
    const double C26765 = yA - yB;
    const double C26768 = zA - zB;
    const double C26783 = 0 * be;
    const double C26809 = 0 * be;
    const double C26890 = 0 * ae;
    const double C26886 = 0 * be;
    const double C26961 = 0 * ae;
    const double C26957 = 0 * be;
    const double C27009 = p + q;
    const double C27008 = p * q;
    const double C27014 = xP - xQ;
    const double C27013 = bs[2];
    const double C27019 = bs[3];
    const double C27030 = bs[4];
    const double C27051 = bs[5];
    const double C27083 = yP - yQ;
    const double C27109 = zP - zQ;
    const double C91 = bs[0];
    const double C27903 = ce + de;
    const double C27902 = xC - xD;
    const double C27908 = yC - yD;
    const double C27915 = zC - zD;
    const double C28077 = ce * de;
    const double C26737 = 2 * C26707;
    const double C26735 = -2 * C26706;
    const double C26713 = C26708 / C26705;
    const double C26710 = 2 * C26705;
    const double C26709 = std::pow(C26705, 2);
    const double C26712 = C26707 * C26703;
    const double C26711 = C26703 * C26706;
    const double C27878 = C26703 * be;
    const double C27877 = C26703 * ae;
    const double C27876 = std::pow(C26703, 2);
    const double C26784 = C26707 * C26765;
    const double C27924 = std::pow(C26765, 2);
    const double C27973 = C26765 * be;
    const double C27972 = C26765 * ae;
    const double C26810 = C26707 * C26768;
    const double C27935 = std::pow(C26768, 2);
    const double C27999 = C26768 * be;
    const double C27998 = C26768 * ae;
    const double C26887 = C26765 * C26783;
    const double C26911 = -2 * C26783;
    const double C26958 = C26768 * C26809;
    const double C26982 = -2 * C26809;
    const double C26895 = C26890 / C26705;
    const double C26966 = C26961 / C26705;
    const double C27010 = 2 * C27008;
    const double C27022 = C27014 * ae;
    const double C27021 = C27014 * be;
    const double C27018 = std::pow(C27014, 2);
    const double C27086 = C27083 * be;
    const double C27085 = C27014 * C27083;
    const double C27137 = C27083 * ae;
    const double C27136 = C27083 * C27014;
    const double C27161 = std::pow(C27083, 2);
    const double C27112 = C27109 * be;
    const double C27111 = C27014 * C27109;
    const double C27175 = C27083 * C27109;
    const double C27188 = C27109 * ae;
    const double C27187 = C27109 * C27014;
    const double C27212 = C27109 * C27083;
    const double C27224 = std::pow(C27109, 2);
    const double C28080 = 2 * C27903;
    const double C28079 = std::pow(C27902, 2);
    const double C28078 = std::pow(C27908, 2);
    const double C28076 = std::pow(C27915, 2);
    const double C26738 = ae * C26735;
    const double C27886 = std::pow(C26710, -1);
    const double C28082 = std::pow(C26710, -2);
    const double C26714 = 2 * C26709;
    const double C26734 = C26709 * C26710;
    const double C28075 = 4 * C26709;
    const double C26715 = C26711 / C26705;
    const double C27879 = C27876 * C26707;
    const double C27925 = C27924 * C26707;
    const double C27936 = C27935 * C26707;
    const double C26892 = C26887 / C26705;
    const double C26914 = ae * C26911;
    const double C26963 = C26958 / C26705;
    const double C26985 = ae * C26982;
    const double C27012 = C27010 / C27009;
    const double C106 =
        ((std::pow(xP - xQ, 2) * bs[2] * std::pow(C27010 / C27009, 2) -
          (bs[1] * C27010) / C27009) *
         C26707) /
        C26709;
    const double C92 = -(C27014 * bs[1] * C27010) / C27009;
    const double C568 = -(C27083 * bs[1] * C27010) / C27009;
    const double C940 = -(C27109 * bs[1] * C27010) / C27009;
    const double C27025 = C27019 * C27022;
    const double C27036 = C27030 * C27022;
    const double C27059 = C27051 * C27022;
    const double C97 = (-(bs[1] * C27022 * C27010) / C27009) / C26705;
    const double C27024 = C27019 * C27021;
    const double C27033 = C27030 * C27021;
    const double C27055 = C27051 * C27021;
    const double C96 = (-(bs[1] * C27021 * C27010) / C27009) / C26705;
    const double C27032 = C27018 * C27030;
    const double C27054 = C27018 * C27051;
    const double C27088 = C27019 * C27086;
    const double C27093 = C27030 * C27086;
    const double C27100 = C27051 * C27086;
    const double C146 = (-(bs[1] * C27086 * C27010) / C27009) / C26705;
    const double C27087 = C27085 * ae;
    const double C27139 = C27019 * C27137;
    const double C27144 = C27030 * C27137;
    const double C27151 = C27051 * C27137;
    const double C259 = (-(bs[1] * C27137 * C27010) / C27009) / C26705;
    const double C27138 = C27136 * ae;
    const double C27163 = C27161 * C27030;
    const double C27168 = C27161 * C27051;
    const double C27114 = C27019 * C27112;
    const double C27119 = C27030 * C27112;
    const double C27126 = C27051 * C27112;
    const double C203 = (-(bs[1] * C27112 * C27010) / C27009) / C26705;
    const double C27113 = C27111 * ae;
    const double C27176 = C27175 * ae;
    const double C27190 = C27019 * C27188;
    const double C27195 = C27030 * C27188;
    const double C27202 = C27051 * C27188;
    const double C409 = (-(bs[1] * C27188 * C27010) / C27009) / C26705;
    const double C27189 = C27187 * ae;
    const double C27213 = C27212 * ae;
    const double C27226 = C27224 * C27030;
    const double C27231 = C27224 * C27051;
    const double C28100 = std::pow(C28080, -1);
    const double C28099 = C28079 * C28077;
    const double C28098 = C28078 * C28077;
    const double C28097 = C28076 * C28077;
    const double C26720 = C26706 / C26714;
    const double C26718 = C26704 / C26714;
    const double C26889 = C26783 / C26714;
    const double C26893 = C26886 / C26714;
    const double C26960 = C26809 / C26714;
    const double C26964 = C26957 / C26714;
    const double C26717 = 0 - C26715;
    const double C27880 = C27879 / C26705;
    const double C27926 = C27925 / C26705;
    const double C27937 = C27936 / C26705;
    const double C26896 = 0 - C26892;
    const double C26967 = 0 - C26963;
    const double C27015 = std::pow(C27012, 2);
    const double C27020 = -C27012;
    const double C27031 = std::pow(C27012, 4);
    const double C27089 = C27087 * be;
    const double C27140 = C27138 * be;
    const double C27115 = C27113 * be;
    const double C27177 = C27176 * be;
    const double C27191 = C27189 * be;
    const double C27214 = C27213 * be;
    const double C28111 = C28099 / C27903;
    const double C28110 = C28098 / C27903;
    const double C28109 = C28097 / C27903;
    const double C26722 = C26717 * ae;
    const double C27881 = -C27880;
    const double C27927 = -C27926;
    const double C27938 = -C27937;
    const double C26899 = C26896 * ae;
    const double C26970 = C26967 * ae;
    const double C27017 = C27013 * C27015;
    const double C107 = (ae * C27015 * C27013 * C27014 * be +
                         be * C27015 * C27013 * C27014 * ae +
                         C27014 *
                             (C27013 * C27015 + std::pow(C27014, 2) * bs[3] *
                                                    std::pow(-C27012, 3)) *
                             C26707) /
                        C26709;
    const double C151 =
        (C27015 * C27013 * C27014 * (yP - yQ) * ae * be) / C26709;
    const double C208 =
        (C27015 * C27013 * C27014 * (zP - zQ) * ae * be) / C26709;
    const double C264 = (C27015 * C27013 * C27083 * C27014 * ae * be) / C26709;
    const double C304 =
        ((std::pow(C27083, 2) * C27013 * C27015 - (bs[1] * C27010) / C27009) *
         C26707) /
        C26709;
    const double C364 = (C27015 * C27013 * C27083 * C27109 * ae * be) / C26709;
    const double C414 = (C27015 * C27013 * C27109 * C27014 * ae * be) / C26709;
    const double C453 = (C27015 * C27013 * C27109 * C27083 * ae * be) / C26709;
    const double C499 =
        ((std::pow(C27109, 2) * C27013 * C27015 - (bs[1] * C27010) / C27009) *
         C26707) /
        C26709;
    const double C98 = (C27014 * C27015 * C27013 * C27021) / C26705 -
                       (be * bs[1] * C27010) / (C27009 * C26705);
    const double C99 = (C27014 * C27015 * C27013 * C27022) / C26705 -
                       (ae * bs[1] * C27010) / (C27009 * C26705);
    const double C147 = (C27014 * C27015 * C27013 * C27086) / C26705;
    const double C204 = (C27014 * C27015 * C27013 * C27112) / C26705;
    const double C260 = (C27014 * C27015 * C27013 * C27137) / C26705;
    const double C410 = (C27014 * C27015 * C27013 * C27188) / C26705;
    const double C575 = (C27083 * C27015 * C27013 * C27021) / C26705;
    const double C576 = (C27083 * C27015 * C27013 * C27022) / C26705;
    const double C615 = (C27083 * C27015 * C27013 * C27086) / C26705 -
                        (be * bs[1] * C27010) / (C27009 * C26705);
    const double C657 = (C27083 * C27015 * C27013 * C27112) / C26705;
    const double C699 = (C27083 * C27015 * C27013 * C27137) / C26705 -
                        (ae * bs[1] * C27010) / (C27009 * C26705);
    const double C817 = (C27083 * C27015 * C27013 * C27188) / C26705;
    const double C947 = (C27109 * C27015 * C27013 * C27021) / C26705;
    const double C948 = (C27109 * C27015 * C27013 * C27022) / C26705;
    const double C987 = (C27109 * C27015 * C27013 * C27086) / C26705;
    const double C1029 = (C27109 * C27015 * C27013 * C27112) / C26705 -
                         (be * bs[1] * C27010) / (C27009 * C26705);
    const double C1071 = (C27109 * C27015 * C27013 * C27137) / C26705;
    const double C1189 = (C27109 * C27015 * C27013 * C27188) / C26705 -
                         (ae * bs[1] * C27010) / (C27009 * C26705);
    const double C27023 = std::pow(C27020, 3);
    const double C27052 = std::pow(C27020, 5);
    const double C27040 = C27031 * C27036;
    const double C27039 = C27031 * C27033;
    const double C27038 = C27032 * C27031;
    const double C27050 = C27030 * C27031;
    const double C27095 = C27031 * C27093;
    const double C27121 = C27031 * C27119;
    const double C27146 = C27031 * C27144;
    const double C27164 = C27163 * C27031;
    const double C27197 = C27031 * C27195;
    const double C27227 = C27226 * C27031;
    const double C27092 = C27030 * C27089;
    const double C27099 = C27051 * C27089;
    const double C27143 = C27030 * C27140;
    const double C27150 = C27051 * C27140;
    const double C27118 = C27030 * C27115;
    const double C27125 = C27051 * C27115;
    const double C27179 = C27030 * C27177;
    const double C27182 = C27051 * C27177;
    const double C27194 = C27030 * C27191;
    const double C27201 = C27051 * C27191;
    const double C27216 = C27030 * C27214;
    const double C27219 = C27051 * C27214;
    const double C28118 = -C28111;
    const double C28117 = -C28110;
    const double C28116 = -C28109;
    const double C26725 = C26722 / C26705;
    const double C27882 = std::exp(C27881);
    const double C27928 = std::exp(C27927);
    const double C27939 = std::exp(C27938);
    const double C26900 = C26899 / C26705;
    const double C26971 = C26970 / C26705;
    const double C93 = C27017 * C27018 - (bs[1] * C27010) / C27009;
    const double C567 = C27083 * C27014 * C27017;
    const double C939 = C27109 * C27014 * C27017;
    const double C1332 = C27017 * C27161 - (bs[1] * C27010) / C27009;
    const double C2467 = C27109 * C27083 * C27017;
    const double C2981 = C27017 * C27224 - (bs[1] * C27010) / C27009;
    const double C27027 = C27023 * C27025;
    const double C27026 = C27023 * C27024;
    const double C27029 = C27019 * C27023;
    const double C27090 = C27023 * C27088;
    const double C27116 = C27023 * C27114;
    const double C27141 = C27023 * C27139;
    const double C27192 = C27023 * C27190;
    const double C152 = (ae * C27015 * C27013 * C27083 * be +
                         C27014 * C27023 * C27019 * C27014 * C27083 * ae * be) /
                        C26709;
    const double C209 = (ae * C27015 * C27013 * C27109 * be +
                         C27014 * C27023 * C27019 * C27014 * C27109 * ae * be) /
                        C26709;
    const double C265 = (be * C27015 * C27013 * C27083 * ae +
                         C27014 * C27023 * C27019 * C27083 * C27014 * ae * be) /
                        C26709;
    const double C305 =
        (C27014 * (C27017 + std::pow(C27083, 2) * C27019 * C27023) * C26707) /
        C26709;
    const double C365 =
        (C27014 * C27023 * C27019 * C27083 * C27109 * ae * be) / C26709;
    const double C366 =
        (C27023 * C27019 * C27177 + C27031 * C27030 * C27177 * C27018) / C26709;
    const double C415 = (be * C27015 * C27013 * C27109 * ae +
                         C27014 * C27023 * C27019 * C27109 * C27014 * ae * be) /
                        C26709;
    const double C454 =
        (C27014 * C27023 * C27019 * C27109 * C27083 * ae * be) / C26709;
    const double C455 =
        (C27023 * C27019 * C27214 + C27031 * C27030 * C27214 * C27018) / C26709;
    const double C500 =
        (C27014 * (C27017 + std::pow(C27109, 2) * C27019 * C27023) * C26707) /
        C26709;
    const double C580 =
        (C27083 * (C27017 + C27018 * C27019 * C27023) * C26707) / C26709;
    const double C619 =
        (be * C27015 * C27013 * C27022 + C27083 * C27023 * C27019 * C27089) /
        C26709;
    const double C661 = (C27083 * C27023 * C27019 * C27115) / C26709;
    const double C703 =
        (ae * C27015 * C27013 * C27021 + C27083 * C27023 * C27019 * C27140) /
        C26709;
    const double C744 =
        (ae * C27015 * C27013 * C27086 + be * C27015 * C27013 * C27137 +
         C27083 * (C27017 + C27161 * C27019 * C27023) * C26707) /
        C26709;
    const double C779 =
        (ae * C27015 * C27013 * C27112 + C27083 * C27023 * C27019 * C27177) /
        C26709;
    const double C821 = (C27083 * C27023 * C27019 * C27191) / C26709;
    const double C859 =
        (be * C27015 * C27013 * C27188 + C27083 * C27023 * C27019 * C27214) /
        C26709;
    const double C900 =
        (C27083 * (C27017 + C27224 * C27019 * C27023) * C26707) / C26709;
    const double C952 =
        (C27109 * (C27017 + C27018 * C27019 * C27023) * C26707) / C26709;
    const double C991 = (C27109 * C27023 * C27019 * C27089) / C26709;
    const double C1033 =
        (be * C27015 * C27013 * C27022 + C27109 * C27023 * C27019 * C27115) /
        C26709;
    const double C1075 = (C27109 * C27023 * C27019 * C27140) / C26709;
    const double C1116 =
        (C27109 * (C27017 + C27161 * C27019 * C27023) * C26707) / C26709;
    const double C1151 =
        (be * C27015 * C27013 * C27137 + C27109 * C27023 * C27019 * C27177) /
        C26709;
    const double C1193 =
        (ae * C27015 * C27013 * C27021 + C27109 * C27023 * C27019 * C27191) /
        C26709;
    const double C1231 =
        (ae * C27015 * C27013 * C27086 + C27109 * C27023 * C27019 * C27214) /
        C26709;
    const double C1272 =
        (ae * C27015 * C27013 * C27112 + be * C27015 * C27013 * C27188 +
         C27109 * (C27017 + C27224 * C27019 * C27023) * C26707) /
        C26709;
    const double C27065 = C27052 * C27059;
    const double C27062 = C27052 * C27055;
    const double C27061 = C27054 * C27052;
    const double C27102 = C27052 * C27100;
    const double C27128 = C27052 * C27126;
    const double C27153 = C27052 * C27151;
    const double C27169 = C27168 * C27052;
    const double C27204 = C27052 * C27202;
    const double C27232 = C27231 * C27052;
    const double C27043 = C27014 * C27040;
    const double C27049 = be * C27040;
    const double C27440 = C27083 * C27040;
    const double C27587 = C27109 * C27040;
    const double C27042 = C27014 * C27039;
    const double C27048 = ae * C27039;
    const double C27450 = C27083 * C27039;
    const double C27599 = C27109 * C27039;
    const double C27060 = C27050 * ae;
    const double C27058 = C27050 * C27018;
    const double C27057 = C27014 * C27050;
    const double C27056 = C27050 * be;
    const double C27515 = C27050 * C27161;
    const double C27514 = C27083 * C27050;
    const double C27615 = C27050 * C27224;
    const double C27614 = C27109 * C27050;
    const double C27098 = ae * C27095;
    const double C27097 = C27014 * C27095;
    const double C27354 = C27083 * C27095;
    const double C27605 = C27109 * C27095;
    const double C27124 = ae * C27121;
    const double C27123 = C27014 * C27121;
    const double C27459 = C27083 * C27121;
    const double C27484 = C27109 * C27121;
    const double C27149 = be * C27146;
    const double C27148 = C27014 * C27146;
    const double C27356 = C27083 * C27146;
    const double C27595 = C27109 * C27146;
    const double C27200 = be * C27197;
    const double C27199 = C27014 * C27197;
    const double C27460 = C27083 * C27197;
    const double C27486 = C27109 * C27197;
    const double C27094 = C27031 * C27092;
    const double C27101 = C27052 * C27099;
    const double C27145 = C27031 * C27143;
    const double C27152 = C27052 * C27150;
    const double C27120 = C27031 * C27118;
    const double C27127 = C27052 * C27125;
    const double C27180 = C27031 * C27179;
    const double C27183 = C27052 * C27182;
    const double C27196 = C27031 * C27194;
    const double C27203 = C27052 * C27201;
    const double C27217 = C27031 * C27216;
    const double C27220 = C27052 * C27219;
    const double C28121 = std::exp(C28118);
    const double C28120 = std::exp(C28117);
    const double C28119 = std::exp(C28116);
    const double C26727 = C26725 - C26718;
    const double C11366 = C27882 * C575;
    const double C13115 = C27882 * C947;
    const double C26716 = C26712 * C27882;
    const double C27883 = C27882 * C27877;
    const double C27887 = C27886 * C27882;
    const double C28072 = C27882 * C27878;
    const double C28069 = C27882 / C26710;
    const double C9462 = C28082 * C27882;
    const double C157 = C27928 * C147;
    const double C4123 = C27928 * C987;
    const double C26785 = C26784 * C27928;
    const double C145 = -(2 * C26707 * (yA - yB) * C27928) / C26705;
    const double C303 =
        -((C27928 - (C26765 * 2 * C26707 * C26765 * C27928) / C26705) *
          C26737) /
        C26705;
    const double C27974 = C27928 * C27972;
    const double C27977 = C27886 * C27928;
    const double C28086 = C27928 * C27973;
    const double C28081 = C27928 / C26710;
    const double C1327 = C28082 * C27928;
    const double C214 = C27939 * C204;
    const double C2049 = C27939 * C657;
    const double C26811 = C26810 * C27939;
    const double C202 = -(2 * C26707 * (zA - zB) * C27939) / C26705;
    const double C498 =
        -((C27939 - (C26768 * 2 * C26707 * C26768 * C27939) / C26705) *
          C26737) /
        C26705;
    const double C28000 = C27939 * C27998;
    const double C28003 = C27886 * C27939;
    const double C28090 = C27939 * C27999;
    const double C28083 = C27939 / C26710;
    const double C2980 = C28082 * C27939;
    const double C26901 = C26900 - C26893;
    const double C26972 = C26971 - C26964;
    const double C101 =
        (C27015 * C27013 * C27022 + C27014 * (C27014 * C27027 + C27017 * ae) +
         C27014 * C27017 * ae) /
        C26705;
    const double C574 = (C27083 * (C27014 * C27027 + C27017 * ae)) / C26705;
    const double C946 = (C27109 * (C27014 * C27027 + C27017 * ae)) / C26705;
    const double C1336 = (C27015 * C27013 * C27022 + C27027 * C27161) / C26705;
    const double C1909 =
        (2 * C27083 * C27027 + C27083 * (C27027 + C27040 * C27161)) / C26705;
    const double C2471 = (C27109 * (C27027 + C27040 * C27161)) / C26705;
    const double C2475 = (C27109 * C27083 * C27027) / C26705;
    const double C2985 = (C27015 * C27013 * C27022 + C27027 * C27224) / C26705;
    const double C4037 =
        (2 * C27109 * C27027 + C27109 * (C27027 + C27040 * C27224)) / C26705;
    const double C108 =
        ((C27017 + C27018 * C27019 * C27023) * C26707 +
         ae * (C27014 * C27026 + C27017 * be) +
         be * (C27014 * C27027 + C27017 * ae) +
         C27014 *
             (ae * C27026 + be * C27027 +
              C27014 *
                  (C27019 * C27023 + C27018 * bs[4] * std::pow(C27012, 4)) *
                  C26707)) /
        C26709;
    const double C100 =
        (C27015 * C27013 * C27021 + C27014 * (C27014 * C27026 + C27017 * be) +
         C27014 * C27017 * be) /
        C26705;
    const double C573 = (C27083 * (C27014 * C27026 + C27017 * be)) / C26705;
    const double C945 = (C27109 * (C27014 * C27026 + C27017 * be)) / C26705;
    const double C1335 = (C27015 * C27013 * C27021 + C27026 * C27161) / C26705;
    const double C1908 =
        (2 * C27083 * C27026 + C27083 * (C27026 + C27039 * C27161)) / C26705;
    const double C2470 = (C27109 * (C27026 + C27039 * C27161)) / C26705;
    const double C2474 = (C27109 * C27083 * C27026) / C26705;
    const double C2984 = (C27015 * C27013 * C27021 + C27026 * C27224) / C26705;
    const double C4036 =
        (2 * C27109 * C27026 + C27109 * (C27026 + C27039 * C27224)) / C26705;
    const double C27037 = C27029 * ae;
    const double C27035 = C27014 * C27029;
    const double C27034 = C27029 * be;
    const double C27041 = C27029 + C27038;
    const double C27165 = C27029 + C27164;
    const double C27228 = C27029 + C27227;
    const double C27355 = C27083 * C27029;
    const double C27485 = C27109 * C27029;
    const double C306 =
        ((C27017 + C27161 * C27019 * C27023) * C26707 +
         (C27029 + C27161 * C27030 * C27031) * C26707 * C27018) /
        C26709;
    const double C501 =
        ((C27017 + C27224 * C27019 * C27023) * C26707 +
         (C27029 + C27224 * C27030 * C27031) * C26707 * C27018) /
        C26709;
    const double C94 =
        2 * C27014 * C27017 + C27014 * (C27017 + C27029 * C27018);
    const double C566 = C27083 * (C27017 + C27029 * C27018);
    const double C938 = C27109 * (C27017 + C27029 * C27018);
    const double C1905 =
        2 * C27083 * C27017 + C27083 * (C27017 + C27029 * C27161);
    const double C2465 = C27109 * (C27017 + C27029 * C27161);
    const double C4033 =
        2 * C27109 * C27017 + C27109 * (C27017 + C27029 * C27224);
    const double C153 =
        (C27023 * C27019 * C27089 + ae * C27014 * C27090 +
         C27014 * (ae * C27090 + C27014 * C27031 * C27030 * C27089)) /
        C26709;
    const double C148 = (C27015 * C27013 * C27086 + C27090 * C27018) / C26705;
    const double C149 =
        (2 * C27014 * C27090 + C27014 * (C27090 + C27095 * C27018)) / C26705;
    const double C616 =
        (C27083 * C27014 * C27090 + C27014 * C27017 * be) / C26705;
    const double C617 = (C27083 * (C27090 + C27095 * C27018) +
                         (C27017 + C27029 * C27018) * be) /
                        C26705;
    const double C988 = (C27109 * C27014 * C27090) / C26705;
    const double C989 = (C27109 * (C27090 + C27095 * C27018)) / C26705;
    const double C1397 =
        (C27015 * C27013 * C27086 + C27083 * (C27083 * C27090 + C27017 * be) +
         C27083 * C27017 * be) /
        C26705;
    const double C2530 = (C27109 * (C27083 * C27090 + C27017 * be)) / C26705;
    const double C3043 = (C27015 * C27013 * C27086 + C27090 * C27224) / C26705;
    const double C4118 =
        (2 * C27109 * C27090 + C27109 * (C27090 + C27095 * C27224)) / C26705;
    const double C210 =
        (C27023 * C27019 * C27115 + ae * C27014 * C27116 +
         C27014 * (ae * C27116 + C27014 * C27031 * C27030 * C27115)) /
        C26709;
    const double C205 = (C27015 * C27013 * C27112 + C27116 * C27018) / C26705;
    const double C206 =
        (2 * C27014 * C27116 + C27014 * (C27116 + C27121 * C27018)) / C26705;
    const double C658 = (C27083 * C27014 * C27116) / C26705;
    const double C659 = (C27083 * (C27116 + C27121 * C27018)) / C26705;
    const double C1030 =
        (C27109 * C27014 * C27116 + C27014 * C27017 * be) / C26705;
    const double C1031 = (C27109 * (C27116 + C27121 * C27018) +
                          (C27017 + C27029 * C27018) * be) /
                         C26705;
    const double C1465 = (C27015 * C27013 * C27112 + C27116 * C27161) / C26705;
    const double C2044 =
        (2 * C27083 * C27116 + C27083 * (C27116 + C27121 * C27161)) / C26705;
    const double C2588 =
        (C27109 * C27083 * C27116 + C27083 * C27017 * be) / C26705;
    const double C2590 = (C27109 * (C27116 + C27121 * C27161) +
                          (C27017 + C27029 * C27161) * be) /
                         C26705;
    const double C3110 =
        (C27015 * C27013 * C27112 + C27109 * (C27109 * C27116 + C27017 * be) +
         C27109 * C27017 * be) /
        C26705;
    const double C266 =
        (C27023 * C27019 * C27140 + be * C27014 * C27141 +
         C27014 * (be * C27141 + C27014 * C27031 * C27030 * C27140)) /
        C26709;
    const double C261 = (C27015 * C27013 * C27137 + C27141 * C27018) / C26705;
    const double C262 =
        (2 * C27014 * C27141 + C27014 * (C27141 + C27146 * C27018)) / C26705;
    const double C700 =
        (C27083 * C27014 * C27141 + C27014 * C27017 * ae) / C26705;
    const double C701 = (C27083 * (C27141 + C27146 * C27018) +
                         (C27017 + C27029 * C27018) * ae) /
                        C26705;
    const double C1072 = (C27109 * C27014 * C27141) / C26705;
    const double C1073 = (C27109 * (C27141 + C27146 * C27018)) / C26705;
    const double C1529 =
        (C27015 * C27013 * C27137 + C27083 * (C27083 * C27141 + C27017 * ae) +
         C27083 * C27017 * ae) /
        C26705;
    const double C2646 = (C27109 * (C27083 * C27141 + C27017 * ae)) / C26705;
    const double C3178 = (C27015 * C27013 * C27137 + C27141 * C27224) / C26705;
    const double C4234 =
        (2 * C27109 * C27141 + C27109 * (C27141 + C27146 * C27224)) / C26705;
    const double C416 =
        (C27023 * C27019 * C27191 + be * C27014 * C27192 +
         C27014 * (be * C27192 + C27014 * C27031 * C27030 * C27191)) /
        C26709;
    const double C411 = (C27015 * C27013 * C27188 + C27192 * C27018) / C26705;
    const double C412 =
        (2 * C27014 * C27192 + C27014 * (C27192 + C27197 * C27018)) / C26705;
    const double C818 = (C27083 * C27014 * C27192) / C26705;
    const double C819 = (C27083 * (C27192 + C27197 * C27018)) / C26705;
    const double C1190 =
        (C27109 * C27014 * C27192 + C27014 * C27017 * ae) / C26705;
    const double C1191 = (C27109 * (C27192 + C27197 * C27018) +
                          (C27017 + C27029 * C27018) * ae) /
                         C26705;
    const double C1719 = (C27015 * C27013 * C27188 + C27192 * C27161) / C26705;
    const double C2284 =
        (2 * C27083 * C27192 + C27083 * (C27192 + C27197 * C27161)) / C26705;
    const double C2812 =
        (C27109 * C27083 * C27192 + C27083 * C27017 * ae) / C26705;
    const double C2814 = (C27109 * (C27192 + C27197 * C27161) +
                          (C27017 + C27029 * C27161) * ae) /
                         C26705;
    const double C3360 =
        (C27015 * C27013 * C27188 + C27109 * (C27109 * C27192 + C27017 * ae) +
         C27109 * C27017 * ae) /
        C26705;
    const double C159 = C27928 * C152;
    const double C216 = C27939 * C209;
    const double C313 = C27928 * C305;
    const double C370 = C27939 * C365;
    const double C372 = C27939 * C366;
    const double C459 = C27928 * C454;
    const double C461 = C27928 * C455;
    const double C508 = C27939 * C500;
    const double C11233 = C27882 * C580;
    const double C2051 = C27939 * C661;
    const double C11368 = C27882 * C703;
    const double C2231 = C27939 * C779;
    const double C11486 = C27882 * C821;
    const double C2404 = C27939 * C900;
    const double C12932 = C27882 * C952;
    const double C4125 = C27928 * C991;
    const double C13117 = C27882 * C1075;
    const double C4310 = C27928 * C1116;
    const double C13305 = C27882 * C1193;
    const double C4491 = C27928 * C1231;
    const double C27069 = C27014 * C27065;
    const double C27501 = C27065 * C27161;
    const double C27567 = C27083 * C27065;
    const double C27589 = C27065 * C27224;
    const double C27068 = C27014 * C27062;
    const double C27507 = C27062 * C27161;
    const double C27573 = C27083 * C27062;
    const double C27601 = C27062 * C27224;
    const double C27067 = C27050 + C27061;
    const double C27104 = C27102 * C27018;
    const double C27346 = C27014 * C27102;
    const double C27513 = C27083 * C27102;
    const double C27607 = C27102 * C27224;
    const double C27130 = C27128 * C27018;
    const double C27362 = C27014 * C27128;
    const double C27531 = C27128 * C27161;
    const double C27577 = C27083 * C27128;
    const double C27613 = C27109 * C27128;
    const double C27155 = C27153 * C27018;
    const double C27348 = C27014 * C27153;
    const double C27516 = C27083 * C27153;
    const double C27596 = C27153 * C27224;
    const double C27170 = C27050 + C27169;
    const double C27206 = C27204 * C27018;
    const double C27368 = C27014 * C27204;
    const double C27537 = C27204 * C27161;
    const double C27579 = C27083 * C27204;
    const double C27616 = C27109 * C27204;
    const double C27233 = C27050 + C27232;
    const double C3555 = (C27083 * C27027 + C27440 * C27224) / C26705;
    const double C27053 = C27048 + C27049;
    const double C3554 = (C27083 * C27026 + C27450 * C27224) / C26705;
    const double C27064 = C27029 + C27058;
    const double C27066 = C27057 * ae;
    const double C27063 = C27057 * be;
    const double C27347 = C27083 * C27057;
    const double C27479 = C27109 * C27057;
    const double C27520 = C27029 + C27515;
    const double C27522 = C27514 * ae;
    const double C27519 = C27514 * be;
    const double C27578 = C27109 * C27514;
    const double C27620 = C27029 + C27615;
    const double C27622 = C27614 * ae;
    const double C27619 = C27614 * be;
    const double C3044 = (C27014 * C27090 + C27097 * C27224) / C26705;
    const double C1466 = (C27014 * C27116 + C27123 * C27161) / C26705;
    const double C27511 = C27098 + C27149;
    const double C3179 = (C27014 * C27141 + C27148 * C27224) / C26705;
    const double C27611 = C27124 + C27200;
    const double C1720 = (C27014 * C27192 + C27199 * C27161) / C26705;
    const double C154 =
        (2 * (ae * C27090 + C27014 * C27094) + ae * (C27090 + C27095 * C27018) +
         C27014 *
             (C27094 + ae * C27014 * C27095 +
              C27014 * (ae * C27095 + C27014 * C27052 * C27051 * C27089))) /
        C26709;
    const double C620 = (be * (C27014 * C27027 + C27017 * ae) +
                         C27083 * (ae * C27090 + C27014 * C27094)) /
                        C26709;
    const double C992 = (C27109 * (ae * C27090 + C27014 * C27094)) / C26709;
    const double C1400 = (C27023 * C27019 * C27089 + be * C27083 * C27027 +
                          C27083 * (be * C27027 + C27083 * C27094)) /
                         C26709;
    const double C2534 = (C27109 * (be * C27027 + C27083 * C27094)) / C26709;
    const double C3046 = (C27023 * C27019 * C27089 + C27094 * C27224) / C26709;
    const double C27103 = C27014 * C27101;
    const double C27500 = C27083 * C27101;
    const double C1992 =
        (2 * (be * C27027 + C27083 * C27094) + be * (C27027 + C27040 * C27161) +
         C27083 * (C27094 + be * C27083 * C27040 +
                   C27083 * (C27049 + C27083 * C27101))) /
        C26709;
    const double C2535 = (C27109 * (C27094 + be * C27083 * C27040 +
                                    C27083 * (C27049 + C27083 * C27101))) /
                         C26709;
    const double C3610 =
        (be * C27027 + C27083 * C27094 + (C27049 + C27083 * C27101) * C27224) /
        C26709;
    const double C4120 =
        (2 * C27109 * C27094 + C27109 * (C27094 + C27101 * C27224)) / C26709;
    const double C21768 =
        (3 * (C27094 + C27101 * C27224) +
         C27109 * (2 * C27109 * C27101 +
                   C27109 * (C27101 +
                             std::pow(C27012, 6) * bs[6] * C27089 * C27224))) /
        C26709;
    const double C267 =
        (2 * (be * C27141 + C27014 * C27145) + be * (C27141 + C27146 * C27018) +
         C27014 *
             (C27145 + be * C27014 * C27146 +
              C27014 * (be * C27146 + C27014 * C27052 * C27051 * C27140))) /
        C26709;
    const double C704 = (ae * (C27014 * C27026 + C27017 * be) +
                         C27083 * (be * C27141 + C27014 * C27145)) /
                        C26709;
    const double C1076 = (C27109 * (be * C27141 + C27014 * C27145)) / C26709;
    const double C1532 = (C27023 * C27019 * C27140 + ae * C27083 * C27026 +
                          C27083 * (ae * C27026 + C27083 * C27145)) /
                         C26709;
    const double C2650 =
        (ae * C27109 * C27026 + C27083 * C27109 * C27145) / C26709;
    const double C3181 = (C27023 * C27019 * C27140 + C27145 * C27224) / C26709;
    const double C27154 = C27014 * C27152;
    const double C27506 = C27083 * C27152;
    const double C27545 = C27109 * C27152;
    const double C2108 =
        (2 * (ae * C27026 + C27083 * C27145) + ae * (C27026 + C27039 * C27161) +
         C27083 * (C27145 + ae * C27083 * C27039 +
                   C27083 * (C27048 + C27083 * C27152))) /
        C26709;
    const double C2652 =
        (C27109 * C27145 + ae * C27109 * C27083 * C27039 +
         C27083 * (ae * C27109 * C27039 + C27083 * C27109 * C27152)) /
        C26709;
    const double C3718 = (ae * (C27026 + C27039 * C27224) +
                          C27083 * (C27145 + C27152 * C27224)) /
                         C26709;
    const double C4236 =
        (2 * C27109 * C27145 + C27109 * (C27145 + C27152 * C27224)) / C26709;
    const double C12578 =
        (C27145 + C27152 * C27224 + ae * (C27450 + C27083 * C27062 * C27224) +
         C27083 * (ae * (C27039 + C27062 * C27224) +
                   C27083 * (C27152 +
                             std::pow(C27012, 6) * bs[6] * C27140 * C27224))) /
        C26709;
    const double C211 =
        (2 * (ae * C27116 + C27014 * C27120) + ae * (C27116 + C27121 * C27018) +
         C27014 *
             (C27120 + ae * C27014 * C27121 +
              C27014 * (ae * C27121 + C27014 * C27052 * C27051 * C27115))) /
        C26709;
    const double C662 = (C27083 * (ae * C27116 + C27014 * C27120)) / C26709;
    const double C1034 = (be * (C27014 * C27027 + C27017 * ae) +
                          C27109 * (ae * C27116 + C27014 * C27120)) /
                         C26709;
    const double C1468 = (C27023 * C27019 * C27115 + C27120 * C27161) / C26709;
    const double C2592 =
        (be * C27083 * C27027 + C27109 * C27083 * C27120) / C26709;
    const double C3113 = (C27023 * C27019 * C27115 + be * C27109 * C27027 +
                          C27109 * (be * C27027 + C27109 * C27120)) /
                         C26709;
    const double C27129 = C27014 * C27127;
    const double C27566 = C27083 * C27127;
    const double C27588 = C27109 * C27127;
    const double C2046 =
        (2 * C27083 * C27120 + C27083 * (C27120 + C27127 * C27161)) / C26709;
    const double C2594 = (be * (C27027 + C27040 * C27161) +
                          C27109 * (C27120 + C27127 * C27161)) /
                         C26709;
    const double C3664 = (C27083 * C27120 + be * C27109 * C27440 +
                          C27109 * (be * C27440 + C27109 * C27083 * C27127)) /
                         C26709;
    const double C4182 =
        (2 * (be * C27027 + C27109 * C27120) + be * (C27027 + C27040 * C27224) +
         C27109 * (C27120 + be * C27109 * C27040 +
                   C27109 * (C27049 + C27109 * C27127))) /
        C26709;
    const double C11324 =
        (3 * (C27120 + C27127 * C27161) +
         C27083 * (2 * C27083 * C27127 +
                   C27083 * (C27127 +
                             std::pow(C27012, 6) * bs[6] * C27115 * C27161))) /
        C26709;
    const double C367 =
        (2 * C27014 * C27180 +
         C27014 * (C27180 + C27052 * C27051 * C27177 * C27018)) /
        C26709;
    const double C780 =
        (ae * C27014 * C27116 + C27083 * C27014 * C27180) / C26709;
    const double C1152 =
        (be * C27014 * C27141 + C27109 * C27014 * C27180) / C26709;
    const double C1662 = (C27023 * C27019 * C27177 + ae * C27083 * C27116 +
                          C27083 * (ae * C27116 + C27083 * C27180)) /
                         C26709;
    const double C2758 = (ae * (C27109 * C27116 + C27017 * be) +
                          C27083 * (be * C27141 + C27109 * C27180)) /
                         C26709;
    const double C3301 = (C27023 * C27019 * C27177 + be * C27109 * C27141 +
                          C27109 * (be * C27141 + C27109 * C27180)) /
                         C26709;
    const double C27361 = C27014 * C27183;
    const double C27530 = C27083 * C27183;
    const double C27549 = C27109 * C27183;
    const double C368 =
        (3 * (C27180 + C27183 * C27018) +
         C27014 * (2 * C27014 * C27183 +
                   C27014 * (C27183 +
                             std::pow(C27012, 6) * bs[6] * C27177 * C27018))) /
        C26709;
    const double C781 = (ae * (C27116 + C27121 * C27018) +
                         C27083 * (C27180 + C27183 * C27018)) /
                        C26709;
    const double C1153 = (be * (C27141 + C27146 * C27018) +
                          C27109 * (C27180 + C27183 * C27018)) /
                         C26709;
    const double C1663 = (C27014 * C27180 + ae * C27083 * C27123 +
                          C27083 * (ae * C27123 + C27083 * C27014 * C27183)) /
                         C26709;
    const double C2228 =
        (2 * (ae * C27116 + C27083 * C27180) + ae * (C27116 + C27121 * C27161) +
         C27083 * (C27180 + ae * C27083 * C27121 +
                   C27083 * (C27124 + C27083 * C27183))) /
        C26709;
    const double C4374 =
        (2 * (be * C27141 + C27109 * C27180) + be * (C27141 + C27146 * C27224) +
         C27109 * (C27180 + be * C27109 * C27146 +
                   C27109 * (C27149 + C27109 * C27183))) /
        C26709;
    const double C417 =
        (2 * (be * C27192 + C27014 * C27196) + be * (C27192 + C27197 * C27018) +
         C27014 *
             (C27196 + be * C27014 * C27197 +
              C27014 * (be * C27197 + C27014 * C27052 * C27051 * C27191))) /
        C26709;
    const double C822 = (C27083 * (be * C27192 + C27014 * C27196)) / C26709;
    const double C1194 = (ae * (C27014 * C27026 + C27017 * be) +
                          C27109 * (be * C27192 + C27014 * C27196)) /
                         C26709;
    const double C1722 = (C27023 * C27019 * C27191 + C27196 * C27161) / C26709;
    const double C2816 =
        (ae * C27083 * C27026 + C27109 * C27083 * C27196) / C26709;
    const double C3363 = (C27023 * C27019 * C27191 + ae * C27109 * C27026 +
                          C27109 * (ae * C27026 + C27109 * C27196)) /
                         C26709;
    const double C27205 = C27014 * C27203;
    const double C27572 = C27083 * C27203;
    const double C27600 = C27109 * C27203;
    const double C2286 =
        (2 * C27083 * C27196 + C27083 * (C27196 + C27203 * C27161)) / C26709;
    const double C2818 = (ae * (C27026 + C27039 * C27161) +
                          C27109 * (C27196 + C27203 * C27161)) /
                         C26709;
    const double C3876 = (C27083 * C27196 + ae * C27109 * C27450 +
                          C27109 * (ae * C27450 + C27109 * C27083 * C27203)) /
                         C26709;
    const double C4428 =
        (2 * (ae * C27026 + C27109 * C27196) + ae * (C27026 + C27039 * C27224) +
         C27109 * (C27196 + ae * C27109 * C27039 +
                   C27109 * (C27048 + C27109 * C27203))) /
        C26709;
    const double C11484 =
        (3 * (C27196 + C27203 * C27161) +
         C27083 * (2 * C27083 * C27203 +
                   C27083 * (C27203 +
                             std::pow(C27012, 6) * bs[6] * C27191 * C27161))) /
        C26709;
    const double C456 =
        (2 * C27014 * C27217 +
         C27014 * (C27217 + C27052 * C27051 * C27214 * C27018)) /
        C26709;
    const double C860 =
        (be * C27014 * C27192 + C27083 * C27014 * C27217) / C26709;
    const double C1232 =
        (ae * C27014 * C27090 + C27109 * C27014 * C27217) / C26709;
    const double C1775 = (C27023 * C27019 * C27214 + be * C27083 * C27192 +
                          C27083 * (be * C27192 + C27083 * C27217)) /
                         C26709;
    const double C2870 = (ae * (C27083 * C27090 + C27017 * be) +
                          C27109 * (be * C27192 + C27083 * C27217)) /
                         C26709;
    const double C3416 = (C27023 * C27019 * C27214 + ae * C27109 * C27090 +
                          C27109 * (ae * C27090 + C27109 * C27217)) /
                         C26709;
    const double C27367 = C27014 * C27220;
    const double C27536 = C27083 * C27220;
    const double C27606 = C27109 * C27220;
    const double C457 =
        (3 * (C27217 + C27220 * C27018) +
         C27014 * (2 * C27014 * C27220 +
                   C27014 * (C27220 +
                             std::pow(C27012, 6) * bs[6] * C27214 * C27018))) /
        C26709;
    const double C861 = (be * (C27192 + C27197 * C27018) +
                         C27083 * (C27217 + C27220 * C27018)) /
                        C26709;
    const double C1233 = (ae * (C27090 + C27095 * C27018) +
                          C27109 * (C27217 + C27220 * C27018)) /
                         C26709;
    const double C1776 = (C27014 * C27217 + be * C27083 * C27199 +
                          C27083 * (be * C27199 + C27083 * C27014 * C27220)) /
                         C26709;
    const double C2346 =
        (2 * (be * C27192 + C27083 * C27217) + be * (C27192 + C27197 * C27161) +
         C27083 * (C27217 + be * C27083 * C27197 +
                   C27083 * (C27200 + C27083 * C27220))) /
        C26709;
    const double C4488 =
        (2 * (ae * C27090 + C27109 * C27217) + ae * (C27090 + C27095 * C27224) +
         C27109 * (C27217 + ae * C27109 * C27095 +
                   C27109 * (C27098 + C27109 * C27220))) /
        C26709;
    const double C81 = -(C28121 * C27902 * de) / C27903;
    const double C82 = C28100 * C28121;
    const double C562 = -(C28120 * C27908 * de) / C27903;
    const double C563 = C28100 * C28120;
    const double C935 = -(C28119 * C27915 * de) / C27903;
    const double C936 = C28100 * C28119;
    const double C26721 = C26716 / C26709;
    const double C26719 = 2 * C26716;
    const double C26736 = -4 * C26716;
    const double C28073 = C27883 / C26714;
    const double C28071 = C27883 / C26705;
    const double C28070 = C27883 * C27878;
    const double C9461 = (2 * C27886 * C27883) / C26705;
    const double C28074 = C27887 * C27878;
    const double C76 = C27887 / C28075;
    const double C4598 = C27887 / C26710;
    const double C28095 = C28072 / C26705;
    const double C9460 = (C27882 * std::pow(C27877, 2)) / C26709 + C28069;
    const double C26793 = 2 * C26785;
    const double C26891 = C26785 / C26709;
    const double C26912 = -4 * C26785;
    const double C1396 =
        ((0 * ae) / C26705 - C26785 / C26709) / C26710 + (0 * ae) / C26705;
    const double C4658 = (0 * ae) / C26705 - C26785 / C26709;
    const double C162 = C145 * C93;
    const double C160 = C145 * C99;
    const double C158 = C145 * C92;
    const double C312 = C145 * C260;
    const double C310 = C145 * C147;
    const double C460 = C145 * C410;
    const double C3051 = C145 * C939;
    const double C4128 = C145 * C2981;
    const double C4126 = C145 * C948;
    const double C4124 = C145 * C940;
    const double C4309 = C145 * C1071;
    const double C4307 = C145 * C987;
    const double C4492 = C145 * C1189;
    const double C315 = C303 * C93;
    const double C311 = C303 * C92;
    const double C3239 = C303 * C939;
    const double C4313 = C303 * C2981;
    const double C4308 = C303 * C940;
    const double C28088 = C27974 / C26714;
    const double C28087 = C27974 * C27973;
    const double C28084 = C27974 / C26705;
    const double C1326 = (2 * C27886 * C27974) / C26705;
    const double C1395 =
        (((C27928 - (C26765 * 2 * C26785) / C26705) * ae) / C26705 -
         C26783 / C26714) /
            C26710 +
        ((C26765 * ((0 * ae) / C26705 - C26785 / C26709) + C27977) * ae) /
            C26705;
    const double C28089 = C27977 * C27973;
    const double C10908 = C27977 / C28075;
    const double C13472 = C27977 / C26710;
    const double C28101 = C28086 / C26705;
    const double C1325 = (C27928 * std::pow(C27972, 2)) / C26709 + C28081;
    const double C26819 = 2 * C26811;
    const double C26962 = C26811 / C26709;
    const double C26983 = -4 * C26811;
    const double C3109 =
        ((0 * ae) / C26705 - C26811 / C26709) / C26710 + (0 * ae) / C26705;
    const double C6192 = (0 * ae) / C26705 - C26811 / C26709;
    const double C219 = C202 * C93;
    const double C217 = C202 * C99;
    const double C215 = C202 * C92;
    const double C371 = C202 * C260;
    const double C507 = C202 * C410;
    const double C505 = C202 * C204;
    const double C1473 = C202 * C567;
    const double C2054 = C202 * C1332;
    const double C2052 = C202 * C576;
    const double C2050 = C202 * C568;
    const double C2232 = C202 * C699;
    const double C2403 = C202 * C817;
    const double C2401 = C202 * C657;
    const double C510 = C498 * C93;
    const double C506 = C498 * C92;
    const double C1840 = C498 * C567;
    const double C2406 = C498 * C1332;
    const double C2402 = C498 * C568;
    const double C28092 = C28000 / C26714;
    const double C28091 = C28000 * C27999;
    const double C28085 = C28000 / C26705;
    const double C2979 = (2 * C27886 * C28000) / C26705;
    const double C3108 =
        (((C27939 - (C26768 * 2 * C26811) / C26705) * ae) / C26705 -
         C26809 / C26714) /
            C26710 +
        ((C26768 * ((0 * ae) / C26705 - C26811 / C26709) + C28003) * ae) /
            C26705;
    const double C28093 = C28003 * C27999;
    const double C21101 = C28003 / C28075;
    const double C23899 = C28003 / C26710;
    const double C28104 = C28090 / C26705;
    const double C2978 = (C27939 * std::pow(C27998, 2)) / C26709 + C28083;
    const double C164 = C145 * C101;
    const double C221 = C202 * C101;
    const double C1475 = C202 * C574;
    const double C3053 = C145 * C946;
    const double C2056 = C202 * C1336;
    const double C11329 = C202 * C1909;
    const double C4130 = C145 * C2985;
    const double C21773 = C145 * C4037;
    const double C2113 = C27887 * C573;
    const double C14156 = C27887 * C573;
    const double C4241 = C27887 * C945;
    const double C16398 = C27887 * C945;
    const double C11370 = C27882 * C1335;
    const double C11374 = C27882 * C1908;
    const double C17407 = C27882 * C2470;
    const double C12580 = C27882 * C2474;
    const double C13119 = C27882 * C2984;
    const double C21846 = C27882 * C4036;
    const double C27046 = C27043 + C27037;
    const double C27358 = C27356 + C27037;
    const double C27488 = C27486 + C27037;
    const double C1398 =
        (C27014 * C27090 + C27083 * (C27083 * C27097 + C27035 * be) +
         C27083 * C27035 * be) /
        C26705;
    const double C1530 =
        (C27014 * C27141 + C27083 * (C27083 * C27148 + C27035 * ae) +
         C27083 * C27035 * ae) /
        C26705;
    const double C2532 = (C27109 * (C27083 * C27097 + C27035 * be)) / C26705;
    const double C2589 =
        (C27109 * C27083 * C27123 + C27083 * C27035 * be) / C26705;
    const double C2647 = (C27109 * (C27083 * C27148 + C27035 * ae)) / C26705;
    const double C2813 =
        (C27109 * C27083 * C27199 + C27083 * C27035 * ae) / C26705;
    const double C3111 =
        (C27014 * C27116 + C27109 * (C27109 * C27123 + C27035 * be) +
         C27109 * C27035 * be) /
        C26705;
    const double C3361 =
        (C27014 * C27192 + C27109 * (C27109 * C27199 + C27035 * ae) +
         C27109 * C27035 * ae) /
        C26705;
    const double C1333 = C27014 * C27017 + C27035 * C27161;
    const double C1904 =
        2 * C27083 * C27035 + C27083 * (C27035 + C27057 * C27161);
    const double C2464 = C27109 * (C27035 + C27057 * C27161);
    const double C2466 = C27109 * C27083 * C27035;
    const double C2982 = C27014 * C27017 + C27035 * C27224;
    const double C4032 =
        2 * C27109 * C27035 + C27109 * (C27035 + C27057 * C27224);
    const double C27045 = C27042 + C27034;
    const double C27357 = C27354 + C27034;
    const double C27487 = C27484 + C27034;
    const double C3822 = (ae * (C27116 + C27109 * (C27109 * C27121 + C27034) +
                                C27109 * C27029 * be) +
                          C27083 * (C27180 + be * C27109 * C27146 +
                                    C27109 * (C27149 + C27109 * C27183))) /
                         C26709;
    const double C27044 = C27041 * C26707;
    const double C27166 = C27165 * C26707;
    const double C27229 = C27228 * C26707;
    const double C2759 = (be * C27141 + C27109 * C27180 +
                          ae * (C27109 * C27083 * C27121 + C27355 * be) +
                          C27083 * (ae * (C27109 * C27121 + C27034) +
                                    C27083 * (C27149 + C27109 * C27183))) /
                         C26709;
    const double C3662 =
        (C27083 * C27116 + C27109 * (C27109 * C27459 + C27355 * be) +
         C27109 * C27355 * be) /
        C26705;
    const double C3874 =
        (C27083 * C27192 + C27109 * (C27109 * C27460 + C27355 * ae) +
         C27109 * C27355 * ae) /
        C26705;
    const double C3551 = C27083 * C27017 + C27355 * C27224;
    const double C12924 =
        2 * C27109 * C27355 + C27109 * (C27355 + C27514 * C27224);
    const double C317 = C27928 * C306;
    const double C512 = C27939 * C501;
    const double C166 = C145 * C94;
    const double C223 = C202 * C94;
    const double C319 = C303 * C94;
    const double C514 = C498 * C94;
    const double C4727 = C202 * C566;
    const double C5074 = C498 * C566;
    const double C6139 = C145 * C938;
    const double C6311 = C303 * C938;
    const double C11327 = C202 * C1905;
    const double C11563 = C498 * C1905;
    const double C21771 = C145 * C4033;
    const double C21888 = C303 * C4033;
    const double C163 = C27928 * C153;
    const double C161 = C27928 * C148;
    const double C314 = C145 * C148;
    const double C165 = C27928 * C149;
    const double C318 = C145 * C149;
    const double C4662 = C27977 * C616;
    const double C9526 = C27977 * C616;
    const double C4670 = C27977 * C617;
    const double C9534 = C27977 * C617;
    const double C3050 = C27928 * C988;
    const double C3238 = C145 * C988;
    const double C6138 = C27928 * C989;
    const double C6310 = C145 * C989;
    const double C8925 = C27977 * C2530;
    const double C12997 = C27977 * C2530;
    const double C4127 = C27928 * C3043;
    const double C4312 = C145 * C3043;
    const double C21770 = C27928 * C4118;
    const double C21887 = C145 * C4118;
    const double C220 = C27939 * C210;
    const double C218 = C27939 * C205;
    const double C509 = C202 * C205;
    const double C222 = C27939 * C206;
    const double C513 = C202 * C206;
    const double C1472 = C27939 * C658;
    const double C1839 = C202 * C658;
    const double C4726 = C27939 * C659;
    const double C5073 = C202 * C659;
    const double C6196 = C28003 * C1030;
    const double C18326 = C28003 * C1030;
    const double C6204 = C28003 * C1031;
    const double C18334 = C28003 * C1031;
    const double C2053 = C27939 * C1465;
    const double C2405 = C202 * C1465;
    const double C11326 = C27939 * C2044;
    const double C11562 = C202 * C2044;
    const double C8359 = C28003 * C2588;
    const double C20226 = C28003 * C2588;
    const double C17351 = C28003 * C2590;
    const double C20234 = C28003 * C2590;
    const double C316 = C145 * C261;
    const double C373 = C202 * C261;
    const double C320 = C145 * C262;
    const double C375 = C202 * C262;
    const double C1667 = C202 * C700;
    const double C4911 = C202 * C701;
    const double C3240 = C145 * C1072;
    const double C6312 = C145 * C1073;
    const double C2234 = C202 * C1529;
    const double C4314 = C145 * C3178;
    const double C21889 = C145 * C4234;
    const double C462 = C145 * C411;
    const double C511 = C202 * C411;
    const double C464 = C145 * C412;
    const double C515 = C202 * C412;
    const double C1841 = C202 * C818;
    const double C5075 = C202 * C819;
    const double C3421 = C145 * C1190;
    const double C6476 = C145 * C1191;
    const double C2407 = C202 * C1719;
    const double C11564 = C202 * C2284;
    const double C4494 = C145 * C3360;
    const double C27072 = C27069 + C27060;
    const double C27503 = C27040 + C27501;
    const double C12926 =
        (2 * C27109 * C27440 + C27109 * (C27440 + C27567 * C27224)) / C26705;
    const double C27591 = C27040 + C27589;
    const double C27071 = C27068 + C27056;
    const double C27509 = C27039 + C27507;
    const double C12925 =
        (2 * C27109 * C27450 + C27109 * (C27450 + C27573 * C27224)) / C26705;
    const double C27603 = C27039 + C27601;
    const double C27070 = C27067 * C26707;
    const double C27106 = C27095 + C27104;
    const double C27349 = C27083 * C27346;
    const double C4119 =
        (2 * C27109 * C27097 + C27109 * (C27097 + C27346 * C27224)) / C26705;
    const double C27518 = C27513 + C27056;
    const double C27609 = C27095 + C27607;
    const double C27132 = C27121 + C27130;
    const double C27456 = C27083 * C27362;
    const double C27478 = C27109 * C27362;
    const double C2045 =
        (2 * C27083 * C27123 + C27083 * (C27123 + C27362 * C27161)) / C26705;
    const double C2591 = (C27109 * (C27123 + C27362 * C27161) +
                          (C27035 + C27057 * C27161) * be) /
                         C26705;
    const double C27533 = C27121 + C27531;
    const double C27580 = C27109 * C27577;
    const double C27618 = C27613 + C27056;
    const double C27157 = C27146 + C27155;
    const double C27350 = C27083 * C27348;
    const double C4235 =
        (2 * C27109 * C27148 + C27109 * (C27148 + C27348 * C27224)) / C26705;
    const double C27521 = C27516 + C27060;
    const double C27597 = C27146 + C27596;
    const double C27171 = C27170 * C26707;
    const double C27208 = C27197 + C27206;
    const double C27457 = C27083 * C27368;
    const double C27480 = C27109 * C27368;
    const double C2285 =
        (2 * C27083 * C27199 + C27083 * (C27199 + C27368 * C27161)) / C26705;
    const double C2815 = (C27109 * (C27199 + C27368 * C27161) +
                          (C27035 + C27057 * C27161) * ae) /
                         C26705;
    const double C27539 = C27197 + C27537;
    const double C27581 = C27109 * C27579;
    const double C27621 = C27616 + C27060;
    const double C27234 = C27233 * C26707;
    const double C12584 = C27882 * C3554;
    const double C95 = 3 * (C27017 + C27029 * C27018) +
                       C27014 * (2 * C27035 + C27014 * C27064);
    const double C565 = C27083 * (2 * C27035 + C27014 * C27064);
    const double C937 = C27109 * (2 * C27035 + C27014 * C27064);
    const double C1334 = C27017 + C27029 * C27018 + C27064 * C27161;
    const double C2983 = C27017 + C27029 * C27018 + C27064 * C27224;
    const double C5619 = C27109 * C27083 * C27064;
    const double C3550 = C27083 * C27035 + C27347 * C27224;
    const double C11225 = 3 * (C27017 + C27029 * C27161) +
                          C27083 * (2 * C27355 + C27083 * C27520);
    const double C11602 = C27109 * (2 * C27355 + C27083 * C27520);
    const double C12390 = C27017 + C27029 * C27161 + C27520 * C27224;
    const double C21722 = 3 * (C27017 + C27029 * C27224) +
                          C27109 * (2 * C27485 + C27109 * C27620);
    const double C3054 = C27928 * C3044;
    const double C3242 = C145 * C3044;
    const double C1476 = C27939 * C1466;
    const double C1843 = C202 * C1466;
    const double C3244 = C145 * C3179;
    const double C1845 = C202 * C1720;
    const double C167 = C27928 * C154;
    const double C4666 = C27977 * C620;
    const double C9530 = C27977 * C620;
    const double C3052 = C27928 * C992;
    const double C8929 = C27977 * C2534;
    const double C13001 = C27977 * C2534;
    const double C4129 = C27928 * C3046;
    const double C27105 = C27098 + C27103;
    const double C27502 = C27049 + C27500;
    const double C20686 = C1327 * C2535;
    const double C13009 = C27977 * C3610;
    const double C26324 = C27977 * C3610;
    const double C21772 = C27928 * C4120;
    const double C2117 = C27887 * C704;
    const double C14160 = C27887 * C704;
    const double C4245 = C27887 * C1076;
    const double C16402 = C27887 * C1076;
    const double C11372 = C27882 * C1532;
    const double C12582 = C27882 * C2650;
    const double C13121 = C27882 * C3181;
    const double C27156 = C27149 + C27154;
    const double C27508 = C27048 + C27506;
    const double C13113 =
        (ae * (2 * C27109 * C27039 + C27109 * (C27039 + C27062 * C27224)) +
         C27083 * (2 * C27545 + C27109 * (C27152 + std::pow(C27012, 6) * bs[6] *
                                                       C27140 * C27224))) /
        C26709;
    const double C21844 =
        (3 * (C27145 + C27152 * C27224) +
         C27109 * (2 * C27545 + C27109 * (C27152 + std::pow(C27012, 6) * bs[6] *
                                                       C27140 * C27224))) /
        C26709;
    const double C11376 = C27882 * C2108;
    const double C17409 = C27882 * C2652;
    const double C12586 = C27882 * C3718;
    const double C21848 = C27882 * C4236;
    const double C224 = C27939 * C211;
    const double C1474 = C27939 * C662;
    const double C6200 = C28003 * C1034;
    const double C18330 = C28003 * C1034;
    const double C2055 = C27939 * C1468;
    const double C8363 = C28003 * C2592;
    const double C20230 = C28003 * C2592;
    const double C27131 = C27124 + C27129;
    const double C13061 =
        (2 * (be * C27440 + C27109 * C27566) + be * (C27440 + C27567 * C27224) +
         C27109 *
             (C27566 + be * C27109 * C27567 +
              C27109 * (be * C27567 + C27109 * C27083 * std::pow(C27012, 6) *
                                          bs[6] * C27115))) /
        C26709;
    const double C27590 = C27049 + C27588;
    const double C11328 = C27939 * C2046;
    const double C17355 = C28003 * C2594;
    const double C20238 = C28003 * C2594;
    const double C12526 = C2980 * C3664;
    const double C374 = C27939 * C367;
    const double C1666 = C27939 * C780;
    const double C6369 = C28003 * C1152;
    const double C18492 = C28003 * C1152;
    const double C2233 = C27939 * C1662;
    const double C8573 = C28003 * C2758;
    const double C20392 = C28003 * C2758;
    const double C2229 =
        (2 * (ae * C27123 + C27083 * C27361) + ae * (C27123 + C27362 * C27161) +
         C27083 *
             (C27361 + ae * C27083 * C27362 +
              C27083 * (ae * C27362 + C27083 * C27014 * std::pow(C27012, 6) *
                                          bs[6] * C27177))) /
        C26709;
    const double C2760 = (ae * (C27109 * C27123 + C27035 * be) +
                          C27083 * (be * C27148 + C27109 * C27361)) /
                         C26709;
    const double C2761 =
        (be * C27148 + C27109 * C27361 +
         ae * (C27109 * C27083 * C27362 + C27347 * be) +
         C27083 *
             (ae * (C27109 * C27362 + C27063) +
              C27083 * (be * C27348 + C27109 * C27014 * std::pow(C27012, 6) *
                                          bs[6] * C27177))) /
        C26709;
    const double C3302 = (C27014 * C27180 + be * C27109 * C27148 +
                          C27109 * (be * C27148 + C27109 * C27361)) /
                         C26709;
    const double C3823 =
        (ae * (C27123 + C27109 * (C27109 * C27362 + C27063) +
               C27109 * C27057 * be) +
         C27083 *
             (C27361 + be * C27109 * C27348 +
              C27109 * (be * C27348 + C27109 * C27014 * std::pow(C27012, 6) *
                                          bs[6] * C27177))) /
        C26709;
    const double C4375 =
        (2 * (be * C27148 + C27109 * C27361) + be * (C27148 + C27348 * C27224) +
         C27109 *
             (C27361 + be * C27109 * C27348 +
              C27109 * (be * C27348 + C27109 * C27014 * std::pow(C27012, 6) *
                                          bs[6] * C27177))) /
        C26709;
    const double C27532 = C27124 + C27530;
    const double C27550 = C27149 + C27549;
    const double C4910 = C27939 * C781;
    const double C6373 = C28003 * C1153;
    const double C18496 = C28003 * C1153;
    const double C1668 = C27939 * C1663;
    const double C11448 = C27939 * C2228;
    const double C2291 = C27887 * C822;
    const double C14322 = C27887 * C822;
    const double C4433 = C27887 * C1194;
    const double C16604 = C27887 * C1194;
    const double C11488 = C27882 * C1722;
    const double C12748 = C27882 * C2816;
    const double C13307 = C27882 * C3363;
    const double C27207 = C27200 + C27205;
    const double C13303 =
        (2 * (ae * C27450 + C27109 * C27572) + ae * (C27450 + C27573 * C27224) +
         C27109 *
             (C27572 + ae * C27109 * C27573 +
              C27109 * (ae * C27573 + C27109 * C27083 * std::pow(C27012, 6) *
                                          bs[6] * C27191))) /
        C26709;
    const double C27602 = C27048 + C27600;
    const double C11490 = C27882 * C2286;
    const double C17565 = C27882 * C2818;
    const double C12750 = C27882 * C3876;
    const double C21966 = C27882 * C4428;
    const double C463 = C27928 * C456;
    const double C5014 = C27977 * C860;
    const double C9872 = C27977 * C860;
    const double C3420 = C27928 * C1232;
    const double C9343 = C27977 * C2870;
    const double C13362 = C27977 * C2870;
    const double C4493 = C27928 * C3416;
    const double C2347 =
        (2 * (be * C27199 + C27083 * C27367) + be * (C27199 + C27368 * C27161) +
         C27083 *
             (C27367 + be * C27083 * C27368 +
              C27083 * (be * C27368 + C27083 * C27014 * std::pow(C27012, 6) *
                                          bs[6] * C27214))) /
        C26709;
    const double C2872 = (ae * (C27083 * C27097 + C27035 * be) +
                          C27109 * (be * C27199 + C27083 * C27367)) /
                         C26709;
    const double C3417 = (C27014 * C27217 + ae * C27109 * C27097 +
                          C27109 * (ae * C27097 + C27109 * C27367)) /
                         C26709;
    const double C4489 =
        (2 * (ae * C27097 + C27109 * C27367) + ae * (C27097 + C27346 * C27224) +
         C27109 *
             (C27367 + ae * C27109 * C27346 +
              C27109 * (ae * C27346 + C27109 * C27014 * std::pow(C27012, 6) *
                                          bs[6] * C27214))) /
        C26709;
    const double C27538 = C27200 + C27536;
    const double C27608 = C27098 + C27606;
    const double C5018 = C27977 * C861;
    const double C9876 = C27977 * C861;
    const double C6475 = C27928 * C1233;
    const double C1783 = C1327 * C1776;
    const double C22003 = C27928 * C4488;
    const double C26724 = C26713 - C26721;
    const double C26723 = C26703 * C26719;
    const double C1330 = (-C26719 / C26705) / C26710 - (0 * be) / C26705;
    const double C10909 = -C26719 / C26705;
    const double C26739 = C26736 / C26705;
    const double C13979 = C28071 * C580;
    const double C14166 = C28071 * C1532;
    const double C14162 = C28071 * C1335;
    const double C14158 = C28071 * C703;
    const double C14154 = C28071 * C575;
    const double C14324 = C28071 * C1722;
    const double C14320 = C28071 * C821;
    const double C15780 = C28071 * C2650;
    const double C15776 = C28071 * C2474;
    const double C15982 = C28071 * C2816;
    const double C16187 = C28071 * C952;
    const double C16400 = C28071 * C1075;
    const double C16396 = C28071 * C947;
    const double C16602 = C28071 * C1193;
    const double C25014 = C28071 * C3181;
    const double C25010 = C28071 * C2984;
    const double C25172 = C28071 * C3363;
    const double C28094 = C28070 / C26709;
    const double C10161 = C9461 * C704;
    const double C10155 = C9461 * C573;
    const double C10317 = C9461 * C822;
    const double C19357 = C9461 * C1076;
    const double C19351 = C9461 * C945;
    const double C19516 = C9461 * C1194;
    const double C28096 = C28074 / C26705;
    const double C1323 = -C28095;
    const double C9985 = C9460 * C580;
    const double C10159 = C9460 * C703;
    const double C10153 = C9460 * C575;
    const double C10315 = C9460 * C821;
    const double C19181 = C9460 * C952;
    const double C19355 = C9460 * C1075;
    const double C19349 = C9460 * C947;
    const double C19514 = C9460 * C1193;
    const double C26794 = C26765 * C26793;
    const double C9522 = (-C26793 / C26705) / C26710 - (0 * be) / C26705;
    const double C26898 = C26895 - C26891;
    const double C26915 = C26912 / C26705;
    const double C1784 = C1396 * C1720;
    const double C20687 = C1396 * C2471;
    const double C20681 = C1396 * C2465;
    const double C21014 = C1396 * C2814;
    const double C4671 = C4658 * C566;
    const double C4667 = C4658 * C574;
    const double C4663 = C4658 * C567;
    const double C4846 = C4658 * C701;
    const double C4844 = C4658 * C617;
    const double C4838 = C4658 * C700;
    const double C4836 = C4658 * C616;
    const double C5019 = C4658 * C819;
    const double C5015 = C4658 * C818;
    const double C8930 = C4658 * C2475;
    const double C8926 = C4658 * C2467;
    const double C9135 = C4658 * C2646;
    const double C9133 = C4658 * C2530;
    const double C9344 = C4658 * C2812;
    const double C26325 = C4658 * C3555;
    const double C322 = C310 - C311;
    const double C4317 = C4307 - C4308;
    const double C28102 = C28087 / C26709;
    const double C4672 = C28084 * C153;
    const double C4668 = C28084 * C148;
    const double C4664 = C28084 * C152;
    const double C4660 = C28084 * C147;
    const double C4843 = C28084 * C306;
    const double C4835 = C28084 * C305;
    const double C5016 = C28084 * C455;
    const double C5012 = C28084 * C454;
    const double C7635 = C28084 * C992;
    const double C7631 = C28084 * C988;
    const double C8061 = C28084 * C1232;
    const double C8927 = C28084 * C991;
    const double C8923 = C28084 * C987;
    const double C9132 = C28084 * C1116;
    const double C9341 = C28084 * C1231;
    const double C26322 = C28084 * C3046;
    const double C26318 = C28084 * C3043;
    const double C26640 = C28084 * C3416;
    const double C1394 =
        (((0 - (C26765 * C26783) / C26705) * ae) / C26705 - (0 * be) / C26714) /
            C26710 +
        ((C26765 * (((C27928 - (C26765 * 2 * C26785) / C26705) * ae) / C26705 -
                    C26783 / C26714) +
          C28084) *
         ae) /
            C26705 +
        (0 * ae) / C26705 - C26785 / C26709;
    const double C1412 = C1326 * C620;
    const double C1406 = C1326 * C616;
    const double C1781 = C1326 * C860;
    const double C20684 = C1326 * C2534;
    const double C20678 = C1326 * C2530;
    const double C21011 = C1326 * C2870;
    const double C1413 = C1395 * C574;
    const double C1407 = C1395 * C567;
    const double C1598 = C1395 * C700;
    const double C1596 = C1395 * C616;
    const double C1782 = C1395 * C818;
    const double C20685 = C1395 * C2475;
    const double C20679 = C1395 * C2467;
    const double C20844 = C1395 * C2646;
    const double C20842 = C1395 * C2530;
    const double C21012 = C1395 * C2812;
    const double C28103 = C28089 / C26705;
    const double C13871 = C13472 * C1776;
    const double C17791 = C13472 * C2535;
    const double C9463 = -C28101;
    const double C1410 = C1325 * C152;
    const double C1404 = C1325 * C147;
    const double C1595 = C1325 * C305;
    const double C1779 = C1325 * C454;
    const double C20682 = C1325 * C991;
    const double C20676 = C1325 * C987;
    const double C20841 = C1325 * C1116;
    const double C21009 = C1325 * C1231;
    const double C26820 = C26768 * C26819;
    const double C18322 = (-C26819 / C26705) / C26710 - (0 * be) / C26705;
    const double C26969 = C26966 - C26962;
    const double C26986 = C26983 / C26705;
    const double C3310 = C3109 * C3179;
    const double C12527 = C3109 * C3555;
    const double C6205 = C6192 * C938;
    const double C6201 = C6192 * C946;
    const double C6197 = C6192 * C939;
    const double C6374 = C6192 * C1073;
    const double C6370 = C6192 * C1072;
    const double C6543 = C6192 * C1191;
    const double C6541 = C6192 * C1031;
    const double C6535 = C6192 * C1190;
    const double C6533 = C6192 * C1030;
    const double C8364 = C6192 * C2475;
    const double C8360 = C6192 * C2467;
    const double C8574 = C6192 * C2646;
    const double C8783 = C6192 * C2812;
    const double C8781 = C6192 * C2588;
    const double C17356 = C6192 * C2471;
    const double C17352 = C6192 * C2465;
    const double C17673 = C6192 * C2814;
    const double C17671 = C6192 * C2590;
    const double C517 = C505 - C506;
    const double C2409 = C2401 - C2402;
    const double C28105 = C28091 / C26709;
    const double C6206 = C28085 * C210;
    const double C6202 = C28085 * C205;
    const double C6198 = C28085 * C209;
    const double C6194 = C28085 * C204;
    const double C6371 = C28085 * C366;
    const double C6367 = C28085 * C365;
    const double C6540 = C28085 * C501;
    const double C6532 = C28085 * C500;
    const double C7709 = C28085 * C662;
    const double C7705 = C28085 * C658;
    const double C7925 = C28085 * C780;
    const double C8361 = C28085 * C661;
    const double C8357 = C28085 * C657;
    const double C8571 = C28085 * C779;
    const double C8780 = C28085 * C900;
    const double C17353 = C28085 * C1468;
    const double C17349 = C28085 * C1465;
    const double C17511 = C28085 * C1662;
    const double C3107 =
        (((0 - (C26768 * C26809) / C26705) * ae) / C26705 - (0 * be) / C26714) /
            C26710 +
        ((C26768 * (((C27939 - (C26768 * 2 * C26811) / C26705) * ae) / C26705 -
                    C26809 / C26714) +
          C28085) *
         ae) /
            C26705 +
        (0 * ae) / C26705 - C26811 / C26709;
    const double C3125 = C2979 * C1034;
    const double C3119 = C2979 * C1030;
    const double C3307 = C2979 * C1152;
    const double C12524 = C2979 * C2592;
    const double C12518 = C2979 * C2588;
    const double C12692 = C2979 * C2758;
    const double C3126 = C3108 * C946;
    const double C3120 = C3108 * C939;
    const double C3308 = C3108 * C1072;
    const double C3486 = C3108 * C1190;
    const double C3484 = C3108 * C1030;
    const double C12525 = C3108 * C2475;
    const double C12519 = C3108 * C2467;
    const double C12693 = C3108 * C2646;
    const double C12860 = C3108 * C2812;
    const double C12858 = C3108 * C2588;
    const double C28106 = C28093 / C26705;
    const double C25889 = C23899 * C3664;
    const double C18219 = -C28104;
    const double C3123 = C2978 * C209;
    const double C3117 = C2978 * C204;
    const double C3305 = C2978 * C365;
    const double C3483 = C2978 * C500;
    const double C12522 = C2978 * C661;
    const double C12516 = C2978 * C657;
    const double C12690 = C2978 * C779;
    const double C12857 = C2978 * C900;
    const double C103 = (2 * (C27014 * C27027 + C27017 * ae) +
                         C27014 * (C27027 + C27014 * C27046 + C27035 * ae) +
                         (C27017 + C27029 * C27018) * ae) /
                        C26705;
    const double C572 =
        (C27083 * (C27027 + C27014 * C27046 + C27035 * ae)) / C26705;
    const double C944 =
        (C27109 * (C27027 + C27014 * C27046 + C27035 * ae)) / C26705;
    const double C1338 =
        (C27014 * C27027 + C27017 * ae + C27046 * C27161) / C26705;
    const double C2473 = (C27109 * C27083 * C27046) / C26705;
    const double C2987 =
        (C27014 * C27027 + C27017 * ae + C27046 * C27224) / C26705;
    const double C2106 = (2 * (C27083 * C27141 + C27017 * ae) +
                          C27083 * (C27141 + C27083 * C27358 + C27355 * ae) +
                          (C27017 + C27029 * C27161) * ae) /
                         C26705;
    const double C2648 =
        (C27109 * (C27141 + C27083 * C27358 + C27355 * ae)) / C26705;
    const double C3716 =
        (C27083 * C27141 + C27017 * ae + C27358 * C27224) / C26705;
    const double C4426 = (2 * (C27109 * C27192 + C27017 * ae) +
                          C27109 * (C27192 + C27109 * C27488 + C27485 * ae) +
                          (C27017 + C27029 * C27224) * ae) /
                         C26705;
    const double C1408 = C1327 * C1398;
    const double C1600 = C1396 * C1398;
    const double C13535 = C13472 * C1398;
    const double C1602 = C1396 * C1530;
    const double C1669 = C202 * C1530;
    const double C7633 = C27977 * C2532;
    const double C7849 = C4658 * C2532;
    const double C15012 = C27977 * C2532;
    const double C7707 = C28003 * C2589;
    const double C8135 = C6192 * C2589;
    const double C22240 = C28003 * C2589;
    const double C7851 = C4658 * C2647;
    const double C7928 = C6192 * C2647;
    const double C8064 = C4658 * C2813;
    const double C8137 = C6192 * C2813;
    const double C3121 = C2980 * C3111;
    const double C3488 = C3109 * C3111;
    const double C24008 = C23899 * C3111;
    const double C3423 = C145 * C3361;
    const double C3490 = C3109 * C3361;
    const double C1409 = C1396 * C1333;
    const double C1477 = C202 * C1333;
    const double C1844 = C498 * C1333;
    const double C7634 = C4658 * C2466;
    const double C7708 = C6192 * C2466;
    const double C3055 = C145 * C2982;
    const double C3122 = C3109 * C2982;
    const double C3243 = C303 * C2982;
    const double C102 = (2 * (C27014 * C27026 + C27017 * be) +
                         C27014 * (C27026 + C27014 * C27045 + C27035 * be) +
                         (C27017 + C27029 * C27018) * be) /
                        C26705;
    const double C571 =
        (C27083 * (C27026 + C27014 * C27045 + C27035 * be)) / C26705;
    const double C943 =
        (C27109 * (C27026 + C27014 * C27045 + C27035 * be)) / C26705;
    const double C1337 =
        (C27014 * C27026 + C27017 * be + C27045 * C27161) / C26705;
    const double C2472 = (C27109 * C27083 * C27045) / C26705;
    const double C2986 =
        (C27014 * C27026 + C27017 * be + C27045 * C27224) / C26705;
    const double C2871 = (ae * (C27090 + C27083 * C27357 + C27355 * be) +
                          C27109 * (C27217 + be * C27083 * C27197 +
                                    C27083 * (C27200 + C27083 * C27220))) /
                         C26709;
    const double C3928 =
        (be * C27192 + C27083 * C27217 + ae * C27109 * C27357 +
         C27109 * (ae * C27357 + C27109 * (C27200 + C27083 * C27220))) /
        C26709;
    const double C1990 = (2 * (C27083 * C27090 + C27017 * be) +
                          C27083 * (C27090 + C27083 * C27357 + C27355 * be) +
                          (C27017 + C27029 * C27161) * be) /
                         C26705;
    const double C2531 =
        (C27109 * (C27090 + C27083 * C27357 + C27355 * be)) / C26705;
    const double C3608 =
        (C27083 * C27090 + C27017 * be + C27357 * C27224) / C26705;
    const double C4180 = (2 * (C27109 * C27116 + C27017 * be) +
                          C27109 * (C27116 + C27109 * C27487 + C27485 * be) +
                          (C27017 + C27029 * C27224) * be) /
                         C26705;
    const double C12694 = C2980 * C3822;
    const double C26045 = C23899 * C3822;
    const double C109 =
        (2 * (ae * C27026 + be * C27027 + C27014 * C27044) +
         ae * (C27026 + C27014 * C27045 + C27035 * be) +
         be * (C27027 + C27014 * C27046 + C27035 * ae) +
         C27014 * (C27044 + ae * C27045 + be * C27046 +
                   C27014 * (ae * C27039 + be * C27040 +
                             C27014 *
                                 (C27030 * C27031 +
                                  C27018 * bs[5] * std::pow(C27020, 5)) *
                                 C26707))) /
        C26709;
    const double C579 = (ae * C27083 * C27026 + be * C27083 * C27027 +
                         C27014 * C27083 * C27044) /
                        C26709;
    const double C951 = (ae * C27109 * C27026 + be * C27109 * C27027 +
                         C27014 * C27109 * C27044) /
                        C26709;
    const double C1341 =
        ((C27017 + C27018 * C27019 * C27023) * C26707 + C27044 * C27161) /
        C26709;
    const double C2479 = (C27109 * C27083 * C27044) / C26709;
    const double C2990 =
        ((C27017 + C27018 * C27019 * C27023) * C26707 + C27044 * C27224) /
        C26709;
    const double C307 =
        (2 * C27014 * C27166 +
         C27014 *
             (C27166 + (C27050 + C27161 * C27051 * C27052) * C26707 * C27018)) /
        C26709;
    const double C743 = (ae * C27014 * C27090 + be * C27014 * C27141 +
                         C27083 * C27014 * C27166) /
                        C26709;
    const double C1115 = (C27109 * C27014 * C27166) / C26709;
    const double C1588 =
        ((C27017 + C27161 * C27019 * C27023) * C26707 +
         ae * (C27083 * C27090 + C27017 * be) +
         be * (C27083 * C27141 + C27017 * ae) +
         C27083 * (ae * C27090 + be * C27141 + C27083 * C27166)) /
        C26709;
    const double C2707 = (ae * C27109 * C27090 + be * C27109 * C27141 +
                          C27083 * C27109 * C27166) /
                         C26709;
    const double C3234 =
        ((C27017 + C27161 * C27019 * C27023) * C26707 + C27166 * C27224) /
        C26709;
    const double C502 =
        (2 * C27014 * C27229 +
         C27014 *
             (C27229 + (C27050 + C27224 * C27051 * C27052) * C26707 * C27018)) /
        C26709;
    const double C899 = (C27083 * C27014 * C27229) / C26709;
    const double C1271 = (ae * C27014 * C27116 + be * C27014 * C27192 +
                          C27109 * C27014 * C27229) /
                         C26709;
    const double C1834 =
        ((C27017 + C27224 * C27019 * C27023) * C26707 + C27229 * C27161) /
        C26709;
    const double C2927 = (ae * C27083 * C27116 + be * C27083 * C27192 +
                          C27109 * C27083 * C27229) /
                         C26709;
    const double C3476 =
        ((C27017 + C27224 * C27019 * C27023) * C26707 +
         ae * (C27109 * C27116 + C27017 * be) +
         be * (C27109 * C27192 + C27017 * ae) +
         C27109 * (ae * C27116 + be * C27192 + C27109 * C27229)) /
        C26709;
    const double C17513 = C28003 * C2759;
    const double C20396 = C28003 * C2759;
    const double C12520 = C2980 * C3662;
    const double C12862 = C3109 * C3662;
    const double C25883 = C23899 * C3662;
    const double C12864 = C3109 * C3874;
    const double C26643 = C4658 * C3874;
    const double C12521 = C3109 * C3551;
    const double C26321 = C4658 * C3551;
    const double C323 = C314 - C315;
    const double C324 = C318 - C319;
    const double C3246 = C3238 - C3239;
    const double C6314 = C6310 - C6311;
    const double C4318 = C4312 - C4313;
    const double C21891 = C21887 - C21888;
    const double C518 = C509 - C510;
    const double C519 = C513 - C514;
    const double C1847 = C1839 - C1840;
    const double C5077 = C5073 - C5074;
    const double C2410 = C2405 - C2406;
    const double C11566 = C11562 - C11563;
    const double C27075 = C27014 * C27072;
    const double C27442 = C27083 * C27072;
    const double C1907 =
        (2 * C27083 * C27046 + C27083 * (C27046 + C27072 * C27161)) / C26705;
    const double C2469 = (C27109 * (C27046 + C27072 * C27161)) / C26705;
    const double C4035 =
        (2 * C27109 * C27046 + C27109 * (C27046 + C27072 * C27224)) / C26705;
    const double C11677 =
        (be * (2 * C27440 + C27083 * C27503) +
         C27109 * (2 * C27083 * C27127 +
                   C27083 * (C27127 +
                             std::pow(C27012, 6) * bs[6] * C27115 * C27161))) /
        C26709;
    const double C12514 =
        (C27120 + C27127 * C27161 + be * C27109 * C27503 +
         C27109 *
             (be * C27503 + C27109 * (C27127 + std::pow(C27012, 6) * bs[6] *
                                                   C27115 * C27161))) /
        C26709;
    const double C11227 = (3 * (C27027 + C27040 * C27161) +
                           C27083 * (2 * C27440 + C27083 * C27503)) /
                          C26705;
    const double C11604 = (C27109 * (2 * C27440 + C27083 * C27503)) / C26705;
    const double C12392 = (C27027 + C27040 * C27161 + C27503 * C27224) / C26705;
    const double C21724 = (3 * (C27027 + C27040 * C27224) +
                           C27109 * (2 * C27587 + C27109 * C27591)) /
                          C26705;
    const double C27074 = C27014 * C27071;
    const double C27452 = C27083 * C27071;
    const double C1906 =
        (2 * C27083 * C27045 + C27083 * (C27045 + C27071 * C27161)) / C26705;
    const double C2468 = (C27109 * (C27045 + C27071 * C27161)) / C26705;
    const double C4034 =
        (2 * C27109 * C27045 + C27109 * (C27045 + C27071 * C27224)) / C26705;
    const double C11713 =
        (2 * (ae * C27109 * C27039 + C27083 * C27545) + ae * C27109 * C27509 +
         C27083 * (C27545 + ae * C27109 * C27083 * C27062 +
                   C27083 * (ae * C27109 * C27062 + C27083 * C27109 *
                                                        std::pow(C27012, 6) *
                                                        bs[6] * C27140))) /
        C26709;
    const double C11819 =
        (ae * (2 * C27450 + C27083 * C27509) +
         C27109 * (2 * C27083 * C27203 +
                   C27083 * (C27203 +
                             std::pow(C27012, 6) * bs[6] * C27191 * C27161))) /
        C26709;
    const double C12746 =
        (C27196 + C27203 * C27161 + ae * C27109 * C27509 +
         C27109 *
             (ae * C27509 + C27109 * (C27203 + std::pow(C27012, 6) * bs[6] *
                                                   C27191 * C27161))) /
        C26709;
    const double C11226 = (3 * (C27026 + C27039 * C27161) +
                           C27083 * (2 * C27450 + C27083 * C27509)) /
                          C26705;
    const double C11603 = (C27109 * (2 * C27450 + C27083 * C27509)) / C26705;
    const double C12391 = (C27026 + C27039 * C27161 + C27509 * C27224) / C26705;
    const double C21723 = (3 * (C27026 + C27039 * C27224) +
                           C27109 * (2 * C27599 + C27109 * C27603)) /
                          C26705;
    const double C27073 = C27014 * C27070;
    const double C27236 = C27083 * C27070;
    const double C27273 = C27109 * C27070;
    const double C1342 =
        (ae * (C27026 + C27039 * C27161) + be * (C27027 + C27040 * C27161) +
         C27014 * (C27044 + C27070 * C27161)) /
        C26709;
    const double C1343 =
        (C27044 + C27070 * C27161 + ae * (C27045 + C27071 * C27161) +
         be * (C27046 + C27072 * C27161) +
         C27014 * (ae * (C27039 + C27062 * C27161) +
                   be * (C27040 + C27065 * C27161) +
                   C27014 * (C27070 + (C27051 * C27052 +
                                       C27018 * bs[6] * std::pow(C27012, 6)) *
                                          C26707 * C27161))) /
        C26709;
    const double C1911 =
        (2 * C27083 * C27044 + C27083 * (C27044 + C27070 * C27161)) / C26709;
    const double C2476 = (ae * C27109 * (C27039 + C27062 * C27161) +
                          be * C27109 * (C27040 + C27065 * C27161) +
                          C27014 * C27109 *
                              (C27070 + (C27051 * C27052 +
                                         C27018 * bs[6] * std::pow(C27012, 6)) *
                                            C26707 * C27161)) /
                         C26709;
    const double C2477 = (C27109 * (C27044 + C27070 * C27161)) / C26709;
    const double C2991 =
        (ae * (C27026 + C27039 * C27224) + be * (C27027 + C27040 * C27224) +
         C27014 * (C27044 + C27070 * C27224)) /
        C26709;
    const double C2992 =
        (C27044 + C27070 * C27224 + ae * (C27045 + C27071 * C27224) +
         be * (C27046 + C27072 * C27224) +
         C27014 * (ae * (C27039 + C27062 * C27224) +
                   be * (C27040 + C27065 * C27224) +
                   C27014 * (C27070 + (C27051 * C27052 +
                                       C27018 * bs[6] * std::pow(C27012, 6)) *
                                          C26707 * C27224))) /
        C26709;
    const double C4039 =
        (2 * C27109 * C27044 + C27109 * (C27044 + C27070 * C27224)) / C26709;
    const double C12393 =
        (C27044 + C27070 * C27161 +
         (C27070 + (C27051 * C27052 + C27018 * bs[6] * std::pow(C27012, 6)) *
                       C26707 * C27161) *
             C27224) /
        C26709;
    const double C1234 =
        (ae * (2 * C27097 + C27014 * C27106) +
         C27109 * (2 * C27014 * C27220 +
                   C27014 * (C27220 +
                             std::pow(C27012, 6) * bs[6] * C27214 * C27018))) /
        C26709;
    const double C3418 =
        (C27217 + C27220 * C27018 + ae * C27109 * C27106 +
         C27109 *
             (ae * C27106 + C27109 * (C27220 + std::pow(C27012, 6) * bs[6] *
                                                   C27214 * C27018))) /
        C26709;
    const double C150 = (3 * (C27090 + C27095 * C27018) +
                         C27014 * (2 * C27097 + C27014 * C27106)) /
                        C26705;
    const double C618 = (C27083 * (2 * C27097 + C27014 * C27106) +
                         (2 * C27035 + C27014 * C27064) * be) /
                        C26705;
    const double C990 = (C27109 * (2 * C27097 + C27014 * C27106)) / C26705;
    const double C1399 =
        (C27090 + C27095 * C27018 + C27083 * (C27083 * C27106 + C27064 * be) +
         C27083 * C27064 * be) /
        C26705;
    const double C3045 = (C27090 + C27095 * C27018 + C27106 * C27224) / C26705;
    const double C5673 = (C27109 * (C27083 * C27106 + C27064 * be)) / C26705;
    const double C27351 = C27349 + C27063;
    const double C27523 = C27083 * C27518;
    const double C12992 =
        (2 * C27109 * C27357 + C27109 * (C27357 + C27518 * C27224)) / C26705;
    const double C21767 = (3 * (C27090 + C27095 * C27224) +
                           C27109 * (2 * C27605 + C27109 * C27609)) /
                          C26705;
    const double C782 =
        (ae * (2 * C27123 + C27014 * C27132) +
         C27083 * (2 * C27014 * C27183 +
                   C27014 * (C27183 +
                             std::pow(C27012, 6) * bs[6] * C27177 * C27018))) /
        C26709;
    const double C1664 =
        (C27180 + C27183 * C27018 + ae * C27083 * C27132 +
         C27083 *
             (ae * C27132 + C27083 * (C27183 + std::pow(C27012, 6) * bs[6] *
                                                   C27177 * C27018))) /
        C26709;
    const double C207 = (3 * (C27116 + C27121 * C27018) +
                         C27014 * (2 * C27123 + C27014 * C27132)) /
                        C26705;
    const double C660 = (C27083 * (2 * C27123 + C27014 * C27132)) / C26705;
    const double C1032 = (C27109 * (2 * C27123 + C27014 * C27132) +
                          (2 * C27035 + C27014 * C27064) * be) /
                         C26705;
    const double C1467 = (C27116 + C27121 * C27018 + C27132 * C27161) / C26705;
    const double C3112 =
        (C27116 + C27121 * C27018 + C27109 * (C27109 * C27132 + C27064 * be) +
         C27109 * C27064 * be) /
        C26705;
    const double C5725 =
        (C27109 * C27083 * C27132 + C27083 * C27064 * be) / C26705;
    const double C3663 =
        (C27083 * C27123 + C27109 * (C27109 * C27456 + C27347 * be) +
         C27109 * C27347 * be) /
        C26705;
    const double C27481 = C27478 + C27063;
    const double C11323 = (3 * (C27116 + C27121 * C27161) +
                           C27083 * (2 * C27459 + C27083 * C27533)) /
                          C26705;
    const double C11676 = (C27109 * (2 * C27459 + C27083 * C27533) +
                           (2 * C27355 + C27083 * C27520) * be) /
                          C26705;
    const double C12513 =
        (C27116 + C27121 * C27161 + C27109 * (C27109 * C27533 + C27520 * be) +
         C27109 * C27520 * be) /
        C26705;
    const double C27582 = C27580 + C27519;
    const double C27623 = C27109 * C27618;
    const double C1154 =
        (be * (2 * C27148 + C27014 * C27157) +
         C27109 * (2 * C27014 * C27183 +
                   C27014 * (C27183 +
                             std::pow(C27012, 6) * bs[6] * C27177 * C27018))) /
        C26709;
    const double C3303 =
        (C27180 + C27183 * C27018 + be * C27109 * C27157 +
         C27109 *
             (be * C27157 + C27109 * (C27183 + std::pow(C27012, 6) * bs[6] *
                                                   C27177 * C27018))) /
        C26709;
    const double C5880 =
        (ae * (C27109 * C27132 + C27064 * be) +
         C27083 *
             (be * C27157 + C27109 * (C27183 + std::pow(C27012, 6) * bs[6] *
                                                   C27177 * C27018))) /
        C26709;
    const double C263 = (3 * (C27141 + C27146 * C27018) +
                         C27014 * (2 * C27148 + C27014 * C27157)) /
                        C26705;
    const double C702 = (C27083 * (2 * C27148 + C27014 * C27157) +
                         (2 * C27035 + C27014 * C27064) * ae) /
                        C26705;
    const double C1074 = (C27109 * (2 * C27148 + C27014 * C27157)) / C26705;
    const double C1531 =
        (C27141 + C27146 * C27018 + C27083 * (C27083 * C27157 + C27064 * ae) +
         C27083 * C27064 * ae) /
        C26705;
    const double C3180 = (C27141 + C27146 * C27018 + C27157 * C27224) / C26705;
    const double C5777 = (C27109 * (C27083 * C27157 + C27064 * ae)) / C26705;
    const double C27352 = C27350 + C27066;
    const double C27524 = C27083 * C27521;
    const double C13112 =
        (2 * C27109 * C27358 + C27109 * (C27358 + C27521 * C27224)) / C26705;
    const double C21843 = (3 * (C27141 + C27146 * C27224) +
                           C27109 * (2 * C27595 + C27109 * C27597)) /
                          C26705;
    const double C27345 = C27014 * C27171;
    const double C27512 = C27083 * C27171;
    const double C27547 = C27109 * C27171;
    const double C308 =
        (3 * (C27166 + C27171 * C27018) +
         C27014 * (2 * C27014 * C27171 +
                   C27014 * (C27171 + (C27051 * C27052 +
                                       C27161 * bs[6] * std::pow(C27012, 6)) *
                                          C26707 * C27018))) /
        C26709;
    const double C741 =
        (ae * (2 * C27097 + C27014 * C27106) +
         be * (2 * C27148 + C27014 * C27157) +
         C27083 * (2 * C27014 * C27171 +
                   C27014 * (C27171 + (C27051 * C27052 +
                                       C27161 * bs[6] * std::pow(C27012, 6)) *
                                          C26707 * C27018))) /
        C26709;
    const double C742 =
        (ae * (C27090 + C27095 * C27018) + be * (C27141 + C27146 * C27018) +
         C27083 * (C27166 + C27171 * C27018)) /
        C26709;
    const double C1113 =
        (C27109 * (2 * C27014 * C27171 +
                   C27014 * (C27171 + (C27051 * C27052 +
                                       C27161 * bs[6] * std::pow(C27012, 6)) *
                                          C26707 * C27018))) /
        C26709;
    const double C1114 = (C27109 * (C27166 + C27171 * C27018)) / C26709;
    const double C1589 =
        (C27014 * C27166 + ae * (C27083 * C27097 + C27035 * be) +
         be * (C27083 * C27148 + C27035 * ae) +
         C27083 * (ae * C27097 + be * C27148 + C27083 * C27014 * C27171)) /
        C26709;
    const double C1590 =
        (C27166 + C27171 * C27018 + ae * (C27083 * C27106 + C27064 * be) +
         be * (C27083 * C27157 + C27064 * ae) +
         C27083 * (ae * C27106 + be * C27157 +
                   C27083 * (C27171 + (C27051 * C27052 +
                                       C27161 * bs[6] * std::pow(C27012, 6)) *
                                          C26707 * C27018))) /
        C26709;
    const double C2177 =
        (2 * (ae * C27090 + be * C27141 + C27083 * C27166) +
         ae * (C27090 + C27083 * C27357 + C27355 * be) +
         be * (C27141 + C27083 * C27358 + C27355 * ae) +
         C27083 * (C27166 + ae * C27357 + be * C27358 +
                   C27083 * (C27098 + C27149 + C27083 * C27171))) /
        C26709;
    const double C2706 =
        (C27109 * C27166 + ae * C27109 * C27357 + be * C27109 * C27358 +
         C27083 * (ae * C27109 * C27095 + be * C27109 * C27146 +
                   C27083 * C27109 * C27171)) /
        C26709;
    const double C3236 =
        (C27166 + C27171 * C27018 +
         (C27171 + (C27051 * C27052 + C27161 * bs[6] * std::pow(C27012, 6)) *
                       C26707 * C27018) *
             C27224) /
        C26709;
    const double C3771 =
        (ae * (C27090 + C27095 * C27224) + be * (C27141 + C27146 * C27224) +
         C27083 * (C27166 + C27171 * C27224)) /
        C26709;
    const double C4305 =
        (2 * C27109 * C27166 + C27109 * (C27166 + C27171 * C27224)) / C26709;
    const double C5829 = (ae * C27109 * C27106 + be * C27109 * C27157 +
                          C27083 * C27109 *
                              (C27171 + (C27051 * C27052 +
                                         C27161 * bs[6] * std::pow(C27012, 6)) *
                                            C26707 * C27018)) /
                         C26709;
    const double C12637 =
        (C27166 + C27171 * C27224 + ae * (C27357 + C27518 * C27224) +
         be * (C27358 + C27521 * C27224) +
         C27083 * (ae * (C27095 + C27102 * C27224) +
                   be * (C27146 + C27153 * C27224) +
                   C27083 * (C27171 + (C27051 * C27052 +
                                       C27161 * bs[6] * std::pow(C27012, 6)) *
                                          C26707 * C27224))) /
        C26709;
    const double C862 =
        (be * (2 * C27199 + C27014 * C27208) +
         C27083 * (2 * C27014 * C27220 +
                   C27014 * (C27220 +
                             std::pow(C27012, 6) * bs[6] * C27214 * C27018))) /
        C26709;
    const double C1777 =
        (C27217 + C27220 * C27018 + be * C27083 * C27208 +
         C27083 *
             (be * C27208 + C27083 * (C27220 + std::pow(C27012, 6) * bs[6] *
                                                   C27214 * C27018))) /
        C26709;
    const double C5983 =
        (ae * (C27083 * C27106 + C27064 * be) +
         C27109 *
             (be * C27208 + C27083 * (C27220 + std::pow(C27012, 6) * bs[6] *
                                                   C27214 * C27018))) /
        C26709;
    const double C413 = (3 * (C27192 + C27197 * C27018) +
                         C27014 * (2 * C27199 + C27014 * C27208)) /
                        C26705;
    const double C820 = (C27083 * (2 * C27199 + C27014 * C27208)) / C26705;
    const double C1192 = (C27109 * (2 * C27199 + C27014 * C27208) +
                          (2 * C27035 + C27014 * C27064) * ae) /
                         C26705;
    const double C1721 = (C27192 + C27197 * C27018 + C27208 * C27161) / C26705;
    const double C3362 =
        (C27192 + C27197 * C27018 + C27109 * (C27109 * C27208 + C27064 * ae) +
         C27109 * C27064 * ae) /
        C26705;
    const double C5931 =
        (C27109 * C27083 * C27208 + C27083 * C27064 * ae) / C26705;
    const double C3875 =
        (C27083 * C27199 + C27109 * (C27109 * C27457 + C27347 * ae) +
         C27109 * C27347 * ae) /
        C26705;
    const double C27482 = C27480 + C27066;
    const double C11483 = (3 * (C27192 + C27197 * C27161) +
                           C27083 * (2 * C27460 + C27083 * C27539)) /
                          C26705;
    const double C11818 = (C27109 * (2 * C27460 + C27083 * C27539) +
                           (2 * C27355 + C27083 * C27520) * ae) /
                          C26705;
    const double C12745 =
        (C27192 + C27197 * C27161 + C27109 * (C27109 * C27539 + C27520 * ae) +
         C27109 * C27520 * ae) /
        C26705;
    const double C27583 = C27581 + C27522;
    const double C27624 = C27109 * C27621;
    const double C27370 = C27014 * C27234;
    const double C27576 = C27083 * C27234;
    const double C27612 = C27109 * C27234;
    const double C503 =
        (3 * (C27229 + C27234 * C27018) +
         C27014 * (2 * C27014 * C27234 +
                   C27014 * (C27234 + (C27051 * C27052 +
                                       C27224 * bs[6] * std::pow(C27012, 6)) *
                                          C26707 * C27018))) /
        C26709;
    const double C897 =
        (C27083 * (2 * C27014 * C27234 +
                   C27014 * (C27234 + (C27051 * C27052 +
                                       C27224 * bs[6] * std::pow(C27012, 6)) *
                                          C26707 * C27018))) /
        C26709;
    const double C898 = (C27083 * (C27229 + C27234 * C27018)) / C26709;
    const double C1269 =
        (ae * (2 * C27123 + C27014 * C27132) +
         be * (2 * C27199 + C27014 * C27208) +
         C27109 * (2 * C27014 * C27234 +
                   C27014 * (C27234 + (C27051 * C27052 +
                                       C27224 * bs[6] * std::pow(C27012, 6)) *
                                          C26707 * C27018))) /
        C26709;
    const double C1270 =
        (ae * (C27116 + C27121 * C27018) + be * (C27192 + C27197 * C27018) +
         C27109 * (C27229 + C27234 * C27018)) /
        C26709;
    const double C1835 = (C27014 * C27229 + C27014 * C27234 * C27161) / C26709;
    const double C1836 =
        (C27229 + C27234 * C27018 +
         (C27234 + (C27051 * C27052 + C27224 * bs[6] * std::pow(C27012, 6)) *
                       C26707 * C27018) *
             C27161) /
        C26709;
    const double C2399 =
        (2 * C27083 * C27229 + C27083 * (C27229 + C27234 * C27161)) / C26709;
    const double C2926 =
        (ae * (C27116 + C27121 * C27161) + be * (C27192 + C27197 * C27161) +
         C27109 * (C27229 + C27234 * C27161)) /
        C26709;
    const double C3478 =
        (C27229 + C27234 * C27018 + ae * (C27109 * C27132 + C27064 * be) +
         be * (C27109 * C27208 + C27064 * ae) +
         C27109 * (ae * C27132 + be * C27208 +
                   C27109 * (C27234 + (C27051 * C27052 +
                                       C27224 * bs[6] * std::pow(C27012, 6)) *
                                          C26707 * C27018))) /
        C26709;
    const double C3981 =
        (C27083 * C27229 + ae * (C27109 * C27459 + C27355 * be) +
         be * (C27109 * C27460 + C27355 * ae) +
         C27109 * (ae * C27459 + be * C27460 + C27109 * C27083 * C27234)) /
        C26709;
    const double C4545 =
        (2 * (ae * C27116 + be * C27192 + C27109 * C27229) +
         ae * (C27116 + C27109 * C27487 + C27485 * be) +
         be * (C27192 + C27109 * C27488 + C27485 * ae) +
         C27109 * (C27229 + ae * C27487 + be * C27488 +
                   C27109 * (C27124 + C27200 + C27109 * C27234))) /
        C26709;
    const double C6034 = (ae * C27083 * C27132 + be * C27083 * C27208 +
                          C27109 * C27083 *
                              (C27234 + (C27051 * C27052 +
                                         C27224 * bs[6] * std::pow(C27012, 6)) *
                                            C26707 * C27018)) /
                         C26709;
    const double C11560 =
        (3 * (C27229 + C27234 * C27161) +
         C27083 * (2 * C27083 * C27234 +
                   C27083 * (C27234 + (C27051 * C27052 +
                                       C27224 * bs[6] * std::pow(C27012, 6)) *
                                          C26707 * C27161))) /
        C26709;
    const double C11889 =
        (ae * (2 * C27459 + C27083 * C27533) +
         be * (2 * C27460 + C27083 * C27539) +
         C27109 * (2 * C27083 * C27234 +
                   C27083 * (C27234 + (C27051 * C27052 +
                                       C27224 * bs[6] * std::pow(C27012, 6)) *
                                          C26707 * C27161))) /
        C26709;
    const double C12852 =
        (C27229 + C27234 * C27161 + ae * (C27109 * C27533 + C27520 * be) +
         be * (C27109 * C27539 + C27520 * ae) +
         C27109 * (ae * C27533 + be * C27539 +
                   C27109 * (C27234 + (C27051 * C27052 +
                                       C27224 * bs[6] * std::pow(C27012, 6)) *
                                          C26707 * C27161))) /
        C26709;
    const double C155 =
        (3 * (C27094 + ae * C27097 + C27014 * C27105) +
         ae * (2 * C27097 + C27014 * C27106) +
         C27014 *
             (2 * C27105 + ae * C27106 +
              C27014 * (C27101 + ae * C27014 * C27102 +
                        C27014 * (ae * C27102 + C27014 * std::pow(C27012, 6) *
                                                    bs[6] * C27089)))) /
        C26709;
    const double C621 = (be * (C27027 + C27014 * C27046 + C27035 * ae) +
                         C27083 * (C27094 + ae * C27097 + C27014 * C27105)) /
                        C26709;
    const double C993 =
        (C27109 * (C27094 + ae * C27097 + C27014 * C27105)) / C26709;
    const double C994 =
        (C27109 *
         (2 * C27105 + ae * C27106 +
          C27014 * (C27101 + ae * C27014 * C27102 +
                    C27014 * (ae * C27102 + C27014 * std::pow(C27012, 6) *
                                                bs[6] * C27089)))) /
        C26709;
    const double C1401 = (ae * C27090 + C27014 * C27094 + be * C27083 * C27046 +
                          C27083 * (be * C27046 + C27083 * C27105)) /
                         C26709;
    const double C1993 =
        (2 * (be * C27046 + C27083 * C27105) + be * (C27046 + C27072 * C27161) +
         C27083 *
             (C27105 + be * C27083 * C27072 +
              C27083 * (be * C27072 +
                        C27083 * (ae * C27102 + C27014 * std::pow(C27012, 6) *
                                                    bs[6] * C27089)))) /
        C26709;
    const double C2536 = (C27109 * (be * C27046 + C27083 * C27105)) / C26709;
    const double C2537 =
        (C27109 *
         (C27105 + be * C27083 * C27072 +
          C27083 * (be * C27072 +
                    C27083 * (ae * C27102 + C27014 * std::pow(C27012, 6) *
                                                bs[6] * C27089)))) /
        C26709;
    const double C3047 =
        (ae * C27090 + C27014 * C27094 + C27105 * C27224) / C26709;
    const double C3048 =
        (C27094 + ae * C27097 + C27014 * C27105 +
         (C27101 + ae * C27346 +
          C27014 *
              (ae * C27102 + C27014 * std::pow(C27012, 6) * bs[6] * C27089)) *
             C27224) /
        C26709;
    const double C3611 =
        (be * C27046 + C27083 * C27105 +
         (be * C27072 + C27083 * (ae * C27102 + C27014 * std::pow(C27012, 6) *
                                                    bs[6] * C27089)) *
             C27224) /
        C26709;
    const double C4121 =
        (2 * C27109 * C27105 +
         C27109 * (C27105 + (ae * C27102 +
                             C27014 * std::pow(C27012, 6) * bs[6] * C27089) *
                                C27224)) /
        C26709;
    const double C11288 =
        (3 * (C27094 + be * C27440 + C27083 * C27502) +
         be * (2 * C27440 + C27083 * C27503) +
         C27083 *
             (2 * C27502 + be * C27503 +
              C27083 * (C27101 + be * C27083 * C27065 +
                        C27083 * (be * C27065 + C27083 * std::pow(C27012, 6) *
                                                    bs[6] * C27089)))) /
        C26709;
    const double C11641 =
        (C27109 *
         (2 * C27502 + be * C27503 +
          C27083 * (C27101 + be * C27083 * C27065 +
                    C27083 * (be * C27065 + C27083 * std::pow(C27012, 6) *
                                                bs[6] * C27089)))) /
        C26709;
    const double C12462 =
        (C27094 + be * C27440 + C27083 * C27502 +
         (C27101 + be * C27083 * C27065 +
          C27083 *
              (be * C27065 + C27083 * std::pow(C27012, 6) * bs[6] * C27089)) *
             C27224) /
        C26709;
    const double C12993 =
        (2 * C27109 * C27502 +
         C27109 * (C27502 + (be * C27065 +
                             C27083 * std::pow(C27012, 6) * bs[6] * C27089) *
                                C27224)) /
        C26709;
    const double C268 =
        (3 * (C27145 + be * C27148 + C27014 * C27156) +
         be * (2 * C27148 + C27014 * C27157) +
         C27014 *
             (2 * C27156 + be * C27157 +
              C27014 * (C27152 + be * C27014 * C27153 +
                        C27014 * (be * C27153 + C27014 * std::pow(C27012, 6) *
                                                    bs[6] * C27140)))) /
        C26709;
    const double C705 = (ae * (C27026 + C27014 * C27045 + C27035 * be) +
                         C27083 * (C27145 + be * C27148 + C27014 * C27156)) /
                        C26709;
    const double C1077 =
        (C27109 * (C27145 + be * C27148 + C27014 * C27156)) / C26709;
    const double C1078 =
        (C27109 *
         (2 * C27156 + be * C27157 +
          C27014 * (C27152 + be * C27014 * C27153 +
                    C27014 * (be * C27153 + C27014 * std::pow(C27012, 6) *
                                                bs[6] * C27140)))) /
        C26709;
    const double C1533 = (be * C27141 + C27014 * C27145 + ae * C27083 * C27045 +
                          C27083 * (ae * C27045 + C27083 * C27156)) /
                         C26709;
    const double C2109 =
        (2 * (ae * C27045 + C27083 * C27156) + ae * (C27045 + C27071 * C27161) +
         C27083 *
             (C27156 + ae * C27083 * C27071 +
              C27083 * (ae * C27071 +
                        C27083 * (be * C27153 + C27014 * std::pow(C27012, 6) *
                                                    bs[6] * C27140)))) /
        C26709;
    const double C2651 =
        (ae * C27109 * C27045 + C27083 * C27109 * C27156) / C26709;
    const double C2653 =
        (C27109 * C27156 + ae * C27109 * C27083 * C27071 +
         C27083 * (ae * C27109 * C27071 +
                   C27083 * C27109 *
                       (be * C27153 +
                        C27014 * std::pow(C27012, 6) * bs[6] * C27140))) /
        C26709;
    const double C3182 =
        (be * C27141 + C27014 * C27145 + C27156 * C27224) / C26709;
    const double C3183 =
        (C27145 + be * C27148 + C27014 * C27156 +
         (C27152 + be * C27348 +
          C27014 *
              (be * C27153 + C27014 * std::pow(C27012, 6) * bs[6] * C27140)) *
             C27224) /
        C26709;
    const double C3719 =
        (ae * (C27045 + C27071 * C27224) +
         C27083 * (C27156 + (be * C27153 +
                             C27014 * std::pow(C27012, 6) * bs[6] * C27140) *
                                C27224)) /
        C26709;
    const double C4237 =
        (2 * C27109 * C27156 +
         C27109 * (C27156 + (be * C27153 +
                             C27014 * std::pow(C27012, 6) * bs[6] * C27140) *
                                C27224)) /
        C26709;
    const double C11364 =
        (3 * (C27145 + ae * C27450 + C27083 * C27508) +
         ae * (2 * C27450 + C27083 * C27509) +
         C27083 *
             (2 * C27508 + ae * C27509 +
              C27083 * (C27152 + ae * C27083 * C27062 +
                        C27083 * (ae * C27062 + C27083 * std::pow(C27012, 6) *
                                                    bs[6] * C27140)))) /
        C26709;
    const double C212 =
        (3 * (C27120 + ae * C27123 + C27014 * C27131) +
         ae * (2 * C27123 + C27014 * C27132) +
         C27014 *
             (2 * C27131 + ae * C27132 +
              C27014 * (C27127 + ae * C27014 * C27128 +
                        C27014 * (ae * C27128 + C27014 * std::pow(C27012, 6) *
                                                    bs[6] * C27115)))) /
        C26709;
    const double C663 =
        (C27083 * (C27120 + ae * C27123 + C27014 * C27131)) / C26709;
    const double C664 =
        (C27083 *
         (2 * C27131 + ae * C27132 +
          C27014 * (C27127 + ae * C27014 * C27128 +
                    C27014 * (ae * C27128 + C27014 * std::pow(C27012, 6) *
                                                bs[6] * C27115)))) /
        C26709;
    const double C1035 = (be * (C27027 + C27014 * C27046 + C27035 * ae) +
                          C27109 * (C27120 + ae * C27123 + C27014 * C27131)) /
                         C26709;
    const double C1469 =
        (ae * C27116 + C27014 * C27120 + C27131 * C27161) / C26709;
    const double C1470 =
        (C27120 + ae * C27123 + C27014 * C27131 +
         (C27127 + ae * C27014 * C27128 +
          C27014 *
              (ae * C27128 + C27014 * std::pow(C27012, 6) * bs[6] * C27115)) *
             C27161) /
        C26709;
    const double C2047 =
        (2 * C27083 * C27131 +
         C27083 * (C27131 + (ae * C27128 +
                             C27014 * std::pow(C27012, 6) * bs[6] * C27115) *
                                C27161)) /
        C26709;
    const double C2593 =
        (be * C27083 * C27046 + C27109 * C27083 * C27131) / C26709;
    const double C2595 =
        (be * (C27046 + C27072 * C27161) +
         C27109 * (C27131 + (ae * C27128 +
                             C27014 * std::pow(C27012, 6) * bs[6] * C27115) *
                                C27161)) /
        C26709;
    const double C3114 = (ae * C27116 + C27014 * C27120 + be * C27109 * C27046 +
                          C27109 * (be * C27046 + C27109 * C27131)) /
                         C26709;
    const double C4183 =
        (2 * (be * C27046 + C27109 * C27131) + be * (C27046 + C27072 * C27224) +
         C27109 *
             (C27131 + be * C27109 * C27072 +
              C27109 * (be * C27072 +
                        C27109 * (ae * C27128 + C27014 * std::pow(C27012, 6) *
                                                    bs[6] * C27115)))) /
        C26709;
    const double C21808 =
        (3 * (C27120 + be * C27587 + C27109 * C27590) +
         be * (2 * C27587 + C27109 * C27591) +
         C27109 *
             (2 * C27590 + be * C27591 +
              C27109 * (C27127 + be * C27109 * C27065 +
                        C27109 * (be * C27065 + C27109 * std::pow(C27012, 6) *
                                                    bs[6] * C27115)))) /
        C26709;
    const double C7927 = C28003 * C2760;
    const double C22446 = C28003 * C2760;
    const double C3309 = C2980 * C3302;
    const double C24170 = C23899 * C3302;
    const double C11446 =
        (3 * (C27180 + ae * C27459 + C27083 * C27532) +
         ae * (2 * C27459 + C27083 * C27533) +
         C27083 *
             (2 * C27532 + ae * C27533 +
              C27083 * (C27183 + ae * C27083 * C27128 +
                        C27083 * (ae * C27128 + C27083 * std::pow(C27012, 6) *
                                                    bs[6] * C27177)))) /
        C26709;
    const double C11783 =
        (2 * (ae * C27487 + C27083 * C27550) +
         ae * (C27109 * C27533 + C27520 * be) +
         C27083 *
             (C27550 + ae * (C27109 * C27083 * C27128 + C27519) +
              C27083 * (ae * (C27109 * C27128 + C27056) +
                        C27083 * (be * C27153 + C27109 * std::pow(C27012, 6) *
                                                    bs[6] * C27177)))) /
        C26709;
    const double C12688 =
        (C27180 + be * C27109 * C27146 + C27109 * C27550 +
         ae * (C27459 + C27109 * (C27109 * C27083 * C27128 + C27519) +
               C27109 * C27514 * be) +
         C27083 *
             (ae * (C27121 + C27109 * (C27109 * C27128 + C27056) +
                    C27109 * C27050 * be) +
              C27083 * (C27183 + be * C27109 * C27153 +
                        C27109 * (be * C27153 + C27109 * std::pow(C27012, 6) *
                                                    bs[6] * C27177)))) /
        C26709;
    const double C13251 =
        (ae * (2 * C27487 +
               C27109 * (C27121 + C27109 * (C27109 * C27128 + C27056) +
                         C27109 * C27050 * be) +
               (C27029 + C27050 * C27224) * be) +
         C27083 *
             (2 * C27550 + be * (C27146 + C27153 * C27224) +
              C27109 * (C27183 + be * C27109 * C27153 +
                        C27109 * (be * C27153 + C27109 * std::pow(C27012, 6) *
                                                    bs[6] * C27177)))) /
        C26709;
    const double C21928 =
        (3 * (C27180 + be * C27595 + C27109 * C27550) +
         be * (2 * C27595 + C27109 * C27597) +
         C27109 *
             (2 * C27550 + be * C27597 +
              C27109 * (C27183 + be * C27109 * C27153 +
                        C27109 * (be * C27153 + C27109 * std::pow(C27012, 6) *
                                                    bs[6] * C27177)))) /
        C26709;
    const double C418 =
        (3 * (C27196 + be * C27199 + C27014 * C27207) +
         be * (2 * C27199 + C27014 * C27208) +
         C27014 *
             (2 * C27207 + be * C27208 +
              C27014 * (C27203 + be * C27014 * C27204 +
                        C27014 * (be * C27204 + C27014 * std::pow(C27012, 6) *
                                                    bs[6] * C27191)))) /
        C26709;
    const double C823 =
        (C27083 * (C27196 + be * C27199 + C27014 * C27207)) / C26709;
    const double C824 =
        (C27083 *
         (2 * C27207 + be * C27208 +
          C27014 * (C27203 + be * C27014 * C27204 +
                    C27014 * (be * C27204 + C27014 * std::pow(C27012, 6) *
                                                bs[6] * C27191)))) /
        C26709;
    const double C1195 = (ae * (C27026 + C27014 * C27045 + C27035 * be) +
                          C27109 * (C27196 + be * C27199 + C27014 * C27207)) /
                         C26709;
    const double C1723 =
        (be * C27192 + C27014 * C27196 + C27207 * C27161) / C26709;
    const double C1724 =
        (C27196 + be * C27199 + C27014 * C27207 +
         (C27203 + be * C27014 * C27204 +
          C27014 *
              (be * C27204 + C27014 * std::pow(C27012, 6) * bs[6] * C27191)) *
             C27161) /
        C26709;
    const double C2287 =
        (2 * C27083 * C27207 +
         C27083 * (C27207 + (be * C27204 +
                             C27014 * std::pow(C27012, 6) * bs[6] * C27191) *
                                C27161)) /
        C26709;
    const double C2817 =
        (ae * C27083 * C27045 + C27109 * C27083 * C27207) / C26709;
    const double C2819 =
        (ae * (C27045 + C27071 * C27161) +
         C27109 * (C27207 + (be * C27204 +
                             C27014 * std::pow(C27012, 6) * bs[6] * C27191) *
                                C27161)) /
        C26709;
    const double C3364 = (be * C27192 + C27014 * C27196 + ae * C27109 * C27045 +
                          C27109 * (ae * C27045 + C27109 * C27207)) /
                         C26709;
    const double C4429 =
        (2 * (ae * C27045 + C27109 * C27207) + ae * (C27045 + C27071 * C27224) +
         C27109 *
             (C27207 + ae * C27109 * C27071 +
              C27109 * (ae * C27071 +
                        C27109 * (be * C27204 + C27014 * std::pow(C27012, 6) *
                                                    bs[6] * C27191)))) /
        C26709;
    const double C21964 =
        (3 * (C27196 + ae * C27599 + C27109 * C27602) +
         ae * (2 * C27599 + C27109 * C27603) +
         C27109 *
             (2 * C27602 + ae * C27603 +
              C27109 * (C27203 + ae * C27109 * C27062 +
                        C27109 * (ae * C27062 + C27109 * std::pow(C27012, 6) *
                                                    bs[6] * C27191)))) /
        C26709;
    const double C8063 = C27977 * C2872;
    const double C15430 = C27977 * C2872;
    const double C3422 = C27928 * C3417;
    const double C11525 =
        (3 * (C27217 + be * C27460 + C27083 * C27538) +
         be * (2 * C27460 + C27083 * C27539) +
         C27083 *
             (2 * C27538 + be * C27539 +
              C27083 * (C27220 + be * C27083 * C27204 +
                        C27083 * (be * C27204 + C27083 * std::pow(C27012, 6) *
                                                    bs[6] * C27214)))) /
        C26709;
    const double C13358 =
        (2 * (ae * C27357 + C27109 * C27538) + ae * (C27357 + C27518 * C27224) +
         C27109 *
             (C27538 + ae * C27109 * C27518 +
              C27109 * (ae * C27518 +
                        C27109 * (be * C27204 + C27083 * std::pow(C27012, 6) *
                                                    bs[6] * C27214)))) /
        C26709;
    const double C22001 =
        (3 * (C27217 + ae * C27605 + C27109 * C27608) +
         ae * (2 * C27605 + C27109 * C27609) +
         C27109 *
             (2 * C27608 + ae * C27609 +
              C27109 * (C27220 + ae * C27109 * C27102 +
                        C27109 * (ae * C27102 + C27109 * std::pow(C27012, 6) *
                                                    bs[6] * C27214)))) /
        C26709;
    const double C13982 = C26724 * C574;
    const double C13980 = C26724 * C573;
    const double C14169 = C26724 * C1530;
    const double C14165 = C26724 * C1333;
    const double C14161 = C26724 * C700;
    const double C14157 = C26724 * C567;
    const double C14327 = C26724 * C1720;
    const double C14323 = C26724 * C818;
    const double C15783 = C26724 * C2647;
    const double C15779 = C26724 * C2466;
    const double C15985 = C26724 * C2813;
    const double C16190 = C26724 * C946;
    const double C16188 = C26724 * C945;
    const double C16403 = C26724 * C1072;
    const double C16399 = C26724 * C939;
    const double C16605 = C26724 * C1190;
    const double C25017 = C26724 * C3179;
    const double C25013 = C26724 * C2982;
    const double C25175 = C26724 * C3361;
    const double C89 =
        (C26724 / C26710 - (0 * be) / C26705) / C26710 + (0 * ae) / C26705;
    const double C4605 = C26724 / C26710 - (0 * be) / C26705;
    const double C9469 = C26724 / C26710 + (0 * ae) / C26705;
    const double C26726 = C26723 / C26705;
    const double C1919 = C1330 * C574;
    const double C1917 = C1330 * C573;
    const double C2126 = C1330 * C1530;
    const double C2122 = C1330 * C1333;
    const double C2118 = C1330 * C700;
    const double C2114 = C1330 * C567;
    const double C2296 = C1330 * C1720;
    const double C2292 = C1330 * C818;
    const double C4047 = C1330 * C946;
    const double C4045 = C1330 * C945;
    const double C4254 = C1330 * C3179;
    const double C4250 = C1330 * C2982;
    const double C4246 = C1330 * C1072;
    const double C4242 = C1330 * C939;
    const double C4438 = C1330 * C3361;
    const double C4434 = C1330 * C1190;
    const double C8438 = C1330 * C2647;
    const double C8434 = C1330 * C2466;
    const double C8644 = C1330 * C2813;
    const double C11240 = C10909 * C1909;
    const double C11238 = C10909 * C1908;
    const double C11236 = C10909 * C1336;
    const double C11234 = C10909 * C1335;
    const double C11232 = C10909 * C576;
    const double C11230 = C10909 * C575;
    const double C11375 = C10909 * C1905;
    const double C11373 = C10909 * C1529;
    const double C11371 = C10909 * C1332;
    const double C11369 = C10909 * C699;
    const double C11367 = C10909 * C568;
    const double C11491 = C10909 * C2284;
    const double C11489 = C10909 * C1719;
    const double C11487 = C10909 * C817;
    const double C12402 = C10909 * C3555;
    const double C12400 = C10909 * C3554;
    const double C12398 = C10909 * C2475;
    const double C12396 = C10909 * C2474;
    const double C12585 = C10909 * C3551;
    const double C12583 = C10909 * C2646;
    const double C12581 = C10909 * C2467;
    const double C12751 = C10909 * C3874;
    const double C12749 = C10909 * C2812;
    const double C12935 = C10909 * C2985;
    const double C12933 = C10909 * C2984;
    const double C12931 = C10909 * C948;
    const double C12929 = C10909 * C947;
    const double C13122 = C10909 * C3178;
    const double C13120 = C10909 * C2981;
    const double C13118 = C10909 * C1071;
    const double C13116 = C10909 * C940;
    const double C13308 = C10909 * C3360;
    const double C13306 = C10909 * C1189;
    const double C17243 = C10909 * C2471;
    const double C17241 = C10909 * C2470;
    const double C17408 = C10909 * C2465;
    const double C17566 = C10909 * C2814;
    const double C21729 = C10909 * C4037;
    const double C21727 = C10909 * C4036;
    const double C21849 = C10909 * C4234;
    const double C21847 = C10909 * C4033;
    const double C28107 = C28069 - C28094;
    const double C28108 = C28073 - C28096;
    const double C1916 = C1323 * C580;
    const double C2123 = C1323 * C1532;
    const double C2119 = C1323 * C1335;
    const double C2115 = C1323 * C703;
    const double C2111 = C1323 * C575;
    const double C2293 = C1323 * C1722;
    const double C2289 = C1323 * C821;
    const double C4044 = C1323 * C952;
    const double C4251 = C1323 * C3181;
    const double C4247 = C1323 * C2984;
    const double C4243 = C1323 * C1075;
    const double C4239 = C1323 * C947;
    const double C4435 = C1323 * C3363;
    const double C4431 = C1323 * C1193;
    const double C8435 = C1323 * C2650;
    const double C8431 = C1323 * C2474;
    const double C8641 = C1323 * C2816;
    const double C26795 = C26794 / C26705;
    const double C9535 = C9522 * C566;
    const double C9531 = C9522 * C574;
    const double C9527 = C9522 * C567;
    const double C9706 = C9522 * C701;
    const double C9704 = C9522 * C617;
    const double C9698 = C9522 * C700;
    const double C9696 = C9522 * C616;
    const double C9877 = C9522 * C819;
    const double C9873 = C9522 * C818;
    const double C13010 = C9522 * C3555;
    const double C13006 = C9522 * C3551;
    const double C13002 = C9522 * C2475;
    const double C12998 = C9522 * C2467;
    const double C13180 = C9522 * C2646;
    const double C13178 = C9522 * C2530;
    const double C13367 = C9522 * C3874;
    const double C13363 = C9522 * C2812;
    const double C15013 = C9522 * C2466;
    const double C15222 = C9522 * C2647;
    const double C15220 = C9522 * C2532;
    const double C15431 = C9522 * C2813;
    const double C10948 =
        (C26898 / C26710 - (0 * be) / C26705) / C26710 + (0 * ae) / C26705;
    const double C13529 = C26898 / C26710 - (0 * be) / C26705;
    const double C325 = C322 - C312;
    const double C4319 = C4317 - C4309;
    const double C28112 = C28081 - C28102;
    const double C1411 = C1394 * C99;
    const double C1405 = C1394 * C92;
    const double C1594 = C1394 * C260;
    const double C1592 = C1394 * C147;
    const double C1780 = C1394 * C410;
    const double C20683 = C1394 * C948;
    const double C20677 = C1394 * C940;
    const double C20840 = C1394 * C1071;
    const double C20838 = C1394 * C987;
    const double C21010 = C1394 * C1189;
    const double C28113 = C28088 - C28103;
    const double C9536 = C9463 * C153;
    const double C9532 = C9463 * C148;
    const double C9528 = C9463 * C152;
    const double C9524 = C9463 * C147;
    const double C9703 = C9463 * C306;
    const double C9695 = C9463 * C305;
    const double C9874 = C9463 * C455;
    const double C9870 = C9463 * C454;
    const double C13007 = C9463 * C3046;
    const double C13003 = C9463 * C3043;
    const double C12999 = C9463 * C991;
    const double C12995 = C9463 * C987;
    const double C13177 = C9463 * C1116;
    const double C13364 = C9463 * C3416;
    const double C13360 = C9463 * C1231;
    const double C15014 = C9463 * C992;
    const double C15010 = C9463 * C988;
    const double C15428 = C9463 * C1232;
    const double C26821 = C26820 / C26705;
    const double C18335 = C18322 * C938;
    const double C18331 = C18322 * C946;
    const double C18327 = C18322 * C939;
    const double C18497 = C18322 * C1073;
    const double C18493 = C18322 * C1072;
    const double C18664 = C18322 * C1191;
    const double C18662 = C18322 * C1031;
    const double C18656 = C18322 * C1190;
    const double C18654 = C18322 * C1030;
    const double C20239 = C18322 * C2471;
    const double C20235 = C18322 * C2465;
    const double C20231 = C18322 * C2475;
    const double C20227 = C18322 * C2467;
    const double C20393 = C18322 * C2646;
    const double C20562 = C18322 * C2814;
    const double C20560 = C18322 * C2590;
    const double C20554 = C18322 * C2812;
    const double C20552 = C18322 * C2588;
    const double C22241 = C18322 * C2466;
    const double C22447 = C18322 * C2647;
    const double C22652 = C18322 * C2813;
    const double C22650 = C18322 * C2589;
    const double C21173 =
        (C26969 / C26710 - (0 * be) / C26705) / C26710 + (0 * ae) / C26705;
    const double C24002 = C26969 / C26710 - (0 * be) / C26705;
    const double C520 = C517 - C507;
    const double C2411 = C2409 - C2403;
    const double C28114 = C28083 - C28105;
    const double C3124 = C3107 * C99;
    const double C3118 = C3107 * C92;
    const double C3306 = C3107 * C260;
    const double C3482 = C3107 * C410;
    const double C3480 = C3107 * C204;
    const double C12523 = C3107 * C576;
    const double C12517 = C3107 * C568;
    const double C12691 = C3107 * C699;
    const double C12856 = C3107 * C817;
    const double C12854 = C3107 * C657;
    const double C28115 = C28092 - C28106;
    const double C18336 = C18219 * C210;
    const double C18332 = C18219 * C205;
    const double C18328 = C18219 * C209;
    const double C18324 = C18219 * C204;
    const double C18494 = C18219 * C366;
    const double C18490 = C18219 * C365;
    const double C18661 = C18219 * C501;
    const double C18653 = C18219 * C500;
    const double C20236 = C18219 * C1468;
    const double C20232 = C18219 * C1465;
    const double C20228 = C18219 * C661;
    const double C20224 = C18219 * C657;
    const double C20394 = C18219 * C1662;
    const double C20390 = C18219 * C779;
    const double C20551 = C18219 * C900;
    const double C22242 = C18219 * C662;
    const double C22238 = C18219 * C658;
    const double C22444 = C18219 * C780;
    const double C168 = C145 * C103;
    const double C225 = C202 * C103;
    const double C4675 = C4658 * C572;
    const double C4729 = C202 * C572;
    const double C9539 = C9522 * C572;
    const double C6141 = C145 * C944;
    const double C6209 = C6192 * C944;
    const double C18339 = C18322 * C944;
    const double C1415 = C1396 * C1338;
    const double C1479 = C202 * C1338;
    const double C1927 = C1330 * C1338;
    const double C13990 = C26724 * C1338;
    const double C7638 = C4658 * C2473;
    const double C7712 = C6192 * C2473;
    const double C8217 = C1330 * C2473;
    const double C15017 = C9522 * C2473;
    const double C15570 = C26724 * C2473;
    const double C22245 = C18322 * C2473;
    const double C3057 = C145 * C2987;
    const double C3128 = C3109 * C2987;
    const double C4055 = C1330 * C2987;
    const double C24852 = C26724 * C2987;
    const double C11377 = C10909 * C2106;
    const double C11449 = C202 * C2106;
    const double C17410 = C10909 * C2648;
    const double C17514 = C6192 * C2648;
    const double C20397 = C18322 * C2648;
    const double C20848 = C1396 * C2648;
    const double C12587 = C10909 * C3716;
    const double C12695 = C3109 * C3716;
    const double C13188 = C9522 * C3716;
    const double C26482 = C4658 * C3716;
    const double C21967 = C10909 * C4426;
    const double C22004 = C145 * C4426;
    const double C1848 = C1843 - C1844;
    const double C3247 = C3242 - C3243;
    const double C5306 = C4598 * C571;
    const double C10157 = C9462 * C571;
    const double C7232 = C4598 * C943;
    const double C19353 = C9462 * C943;
    const double C1925 = C1330 * C1337;
    const double C2121 = C27887 * C1337;
    const double C13988 = C26724 * C1337;
    const double C14164 = C27887 * C1337;
    const double C8215 = C1330 * C2472;
    const double C8433 = C27887 * C2472;
    const double C15568 = C26724 * C2472;
    const double C15778 = C27887 * C2472;
    const double C4053 = C1330 * C2986;
    const double C4249 = C27887 * C2986;
    const double C24850 = C26724 * C2986;
    const double C25012 = C27887 * C2986;
    const double C18118 = C13472 * C2871;
    const double C21013 = C1327 * C2871;
    const double C13366 = C27977 * C3928;
    const double C26642 = C27977 * C3928;
    const double C17785 = C13472 * C2531;
    const double C20680 = C1327 * C2531;
    const double C20846 = C1396 * C2531;
    const double C13005 = C27977 * C3608;
    const double C13186 = C9522 * C3608;
    const double C26320 = C27977 * C3608;
    const double C26480 = C4658 * C3608;
    const double C1920 = C27887 * C579;
    const double C9989 = C9461 * C579;
    const double C13983 = C27887 * C579;
    const double C4048 = C27887 * C951;
    const double C16191 = C27887 * C951;
    const double C19185 = C9461 * C951;
    const double C1924 = C1323 * C1341;
    const double C11237 = C27882 * C1341;
    const double C13987 = C28071 * C1341;
    const double C8214 = C1323 * C2479;
    const double C12399 = C27882 * C2479;
    const double C15567 = C28071 * C2479;
    const double C4052 = C1323 * C2990;
    const double C12936 = C27882 * C2990;
    const double C24849 = C28071 * C2990;
    const double C321 = C27928 * C307;
    const double C1599 = C1326 * C743;
    const double C4839 = C27977 * C743;
    const double C9699 = C27977 * C743;
    const double C3241 = C27928 * C1115;
    const double C7848 = C28084 * C1115;
    const double C15219 = C9463 * C1115;
    const double C9136 = C27977 * C2707;
    const double C13181 = C27977 * C2707;
    const double C20845 = C1326 * C2707;
    const double C4315 = C27928 * C3234;
    const double C13185 = C9463 * C3234;
    const double C26479 = C28084 * C3234;
    const double C516 = C27939 * C502;
    const double C1842 = C27939 * C899;
    const double C8134 = C28085 * C899;
    const double C22649 = C18219 * C899;
    const double C3487 = C2979 * C1271;
    const double C6536 = C28003 * C1271;
    const double C18657 = C28003 * C1271;
    const double C2408 = C27939 * C1834;
    const double C17670 = C28085 * C1834;
    const double C20559 = C18219 * C1834;
    const double C8784 = C28003 * C2927;
    const double C12861 = C2979 * C2927;
    const double C20555 = C28003 * C2927;
    const double C326 = C323 - C316;
    const double C327 = C324 - C320;
    const double C3248 = C3246 - C3240;
    const double C6315 = C6314 - C6312;
    const double C4320 = C4318 - C4314;
    const double C21892 = C21891 - C21889;
    const double C521 = C518 - C511;
    const double C522 = C519 - C515;
    const double C1849 = C1847 - C1841;
    const double C5078 = C5077 - C5075;
    const double C2412 = C2410 - C2407;
    const double C11567 = C11566 - C11564;
    const double C27078 = C27040 + C27075;
    const double C3665 =
        (C27083 * C27131 + be * C27109 * C27442 +
         C27109 *
             (be * C27442 + C27109 * C27083 *
                                (ae * C27128 + C27014 * std::pow(C27012, 6) *
                                                   bs[6] * C27115))) /
        C26709;
    const double C3553 = (C27083 * C27046 + C27442 * C27224) / C26705;
    const double C27077 = C27039 + C27074;
    const double C3877 =
        (C27083 * C27207 + ae * C27109 * C27452 +
         C27109 *
             (ae * C27452 + C27109 * C27083 *
                                (be * C27204 + C27014 * std::pow(C27012, 6) *
                                                   bs[6] * C27191))) /
        C26709;
    const double C3552 = (C27083 * C27045 + C27452 * C27224) / C26705;
    const double C27076 = C27053 + C27073;
    const double C578 =
        (C27083 * C27044 + ae * C27083 * C27045 + be * C27083 * C27046 +
         C27014 *
             (ae * C27083 * C27039 + be * C27083 * C27040 + C27014 * C27236)) /
        C26709;
    const double C1910 =
        (ae * (2 * C27083 * C27039 + C27083 * (C27039 + C27062 * C27161)) +
         be * (2 * C27083 * C27040 + C27083 * (C27040 + C27065 * C27161)) +
         C27014 * (2 * C27236 +
                   C27083 * (C27070 + (C27051 * C27052 +
                                       C27018 * bs[6] * std::pow(C27012, 6)) *
                                          C26707 * C27161))) /
        C26709;
    const double C2478 =
        (ae * C27109 * C27083 * C27039 + be * C27109 * C27083 * C27040 +
         C27014 * C27109 * C27236) /
        C26709;
    const double C3556 =
        (ae * (C27083 * C27039 + C27083 * C27062 * C27224) +
         be * (C27083 * C27040 + C27083 * C27065 * C27224) +
         C27014 * (C27236 + C27083 *
                                (C27051 * C27052 +
                                 C27018 * bs[6] * std::pow(C27012, 6)) *
                                C26707 * C27224)) /
        C26709;
    const double C3557 = (C27083 * C27044 + C27236 * C27224) / C26709;
    const double C5622 =
        (C27109 * C27236 + ae * C27109 * C27452 + be * C27109 * C27442 +
         C27014 *
             (ae * C27109 * C27083 * C27062 + be * C27109 * C27083 * C27065 +
              C27014 * C27109 * C27083 *
                  (C27051 * C27052 + C27018 * bs[6] * std::pow(C27012, 6)) *
                  C26707)) /
        C26709;
    const double C11228 =
        (3 * (C27044 + C27070 * C27161) +
         C27083 * (2 * C27236 +
                   C27083 * (C27070 + (C27051 * C27052 +
                                       C27018 * bs[6] * std::pow(C27012, 6)) *
                                          C26707 * C27161))) /
        C26709;
    const double C11605 =
        (C27109 * (2 * C27236 +
                   C27083 * (C27070 + (C27051 * C27052 +
                                       C27018 * bs[6] * std::pow(C27012, 6)) *
                                          C26707 * C27161))) /
        C26709;
    const double C12927 =
        (2 * C27109 * C27236 +
         C27109 * (C27236 + C27083 *
                                (C27051 * C27052 +
                                 C27018 * bs[6] * std::pow(C27012, 6)) *
                                C26707 * C27224)) /
        C26709;
    const double C950 =
        (C27109 * C27044 + ae * C27109 * C27045 + be * C27109 * C27046 +
         C27014 *
             (ae * C27109 * C27039 + be * C27109 * C27040 + C27014 * C27273)) /
        C26709;
    const double C4038 =
        (ae * (2 * C27109 * C27039 + C27109 * (C27039 + C27062 * C27224)) +
         be * (2 * C27109 * C27040 + C27109 * (C27040 + C27065 * C27224)) +
         C27014 * (2 * C27273 +
                   C27109 * (C27070 + (C27051 * C27052 +
                                       C27018 * bs[6] * std::pow(C27012, 6)) *
                                          C26707 * C27224))) /
        C26709;
    const double C21725 =
        (3 * (C27044 + C27070 * C27224) +
         C27109 * (2 * C27273 +
                   C27109 * (C27070 + (C27051 * C27052 +
                                       C27018 * bs[6] * std::pow(C27012, 6)) *
                                          C26707 * C27224))) /
        C26709;
    const double C1928 = C27887 * C1342;
    const double C13991 = C27887 * C1342;
    const double C11241 = C27882 * C1911;
    const double C17244 = C27882 * C2477;
    const double C4056 = C27887 * C2991;
    const double C24853 = C27887 * C2991;
    const double C21730 = C27882 * C4039;
    const double C2873 =
        (ae * (C27097 + C27083 * C27351 + C27347 * be) +
         C27109 *
             (C27367 + be * C27083 * C27368 +
              C27083 * (be * C27368 + C27083 * C27014 * std::pow(C27012, 6) *
                                          bs[6] * C27214))) /
        C26709;
    const double C3929 =
        (be * C27199 + C27083 * C27367 + ae * C27109 * C27351 +
         C27109 *
             (ae * C27351 +
              C27109 * (be * C27368 + C27083 * C27014 * std::pow(C27012, 6) *
                                          bs[6] * C27214))) /
        C26709;
    const double C1991 = (2 * (C27083 * C27097 + C27035 * be) +
                          C27083 * (C27097 + C27083 * C27351 + C27347 * be) +
                          (C27035 + C27057 * C27161) * be) /
                         C26705;
    const double C2533 =
        (C27109 * (C27097 + C27083 * C27351 + C27347 * be)) / C26705;
    const double C3609 =
        (C27083 * C27097 + C27035 * be + C27351 * C27224) / C26705;
    const double C27525 = C27095 + C27523;
    const double C4181 = (2 * (C27109 * C27123 + C27035 * be) +
                          C27109 * (C27123 + C27109 * C27481 + C27479 * be) +
                          (C27035 + C27057 * C27224) * be) /
                         C26705;
    const double C13060 = (2 * (C27109 * C27459 + C27355 * be) +
                           C27109 * (C27459 + C27109 * C27582 + C27578 * be) +
                           (C27355 + C27514 * C27224) * be) /
                          C26705;
    const double C27625 = C27121 + C27623;
    const double C2107 = (2 * (C27083 * C27148 + C27035 * ae) +
                          C27083 * (C27148 + C27083 * C27352 + C27347 * ae) +
                          (C27035 + C27057 * C27161) * ae) /
                         C26705;
    const double C2649 =
        (C27109 * (C27148 + C27083 * C27352 + C27347 * ae)) / C26705;
    const double C3717 =
        (C27083 * C27148 + C27035 * ae + C27352 * C27224) / C26705;
    const double C27526 = C27146 + C27524;
    const double C2176 =
        (2 * (ae * C27097 + be * C27148 + C27083 * C27345) +
         ae * (C27097 + C27083 * C27351 + C27347 * be) +
         be * (C27148 + C27083 * C27352 + C27347 * ae) +
         C27083 * (C27345 + ae * C27351 + be * C27352 +
                   C27083 * (ae * C27346 + be * C27348 +
                             C27083 * C27014 *
                                 (C27051 * C27052 +
                                  C27161 * bs[6] * std::pow(C27012, 6)) *
                                 C26707))) /
        C26709;
    const double C2704 =
        (C27109 * C27345 + ae * C27109 * C27351 + be * C27109 * C27352 +
         C27083 *
             (ae * C27109 * C27346 + be * C27109 * C27348 +
              C27083 * C27109 * C27014 *
                  (C27051 * C27052 + C27161 * bs[6] * std::pow(C27012, 6)) *
                  C26707)) /
        C26709;
    const double C2705 = (ae * C27109 * C27097 + be * C27109 * C27148 +
                          C27083 * C27109 * C27345) /
                         C26709;
    const double C3235 = (C27014 * C27166 + C27345 * C27224) / C26709;
    const double C3770 =
        (ae * (C27097 + C27346 * C27224) + be * (C27148 + C27348 * C27224) +
         C27083 * (C27345 + C27014 *
                                (C27051 * C27052 +
                                 C27161 * bs[6] * std::pow(C27012, 6)) *
                                C26707 * C27224)) /
        C26709;
    const double C4304 =
        (2 * C27109 * C27345 +
         C27109 * (C27345 + C27014 *
                                (C27051 * C27052 +
                                 C27161 * bs[6] * std::pow(C27012, 6)) *
                                C26707 * C27224)) /
        C26709;
    const double C27517 = C27511 + C27512;
    const double C13172 =
        (ae * (2 * C27109 * C27095 + C27109 * (C27095 + C27102 * C27224)) +
         be * (2 * C27109 * C27146 + C27109 * (C27146 + C27153 * C27224)) +
         C27083 * (2 * C27547 +
                   C27109 * (C27171 + (C27051 * C27052 +
                                       C27161 * bs[6] * std::pow(C27012, 6)) *
                                          C26707 * C27224))) /
        C26709;
    const double C21883 =
        (3 * (C27166 + C27171 * C27224) +
         C27109 * (2 * C27547 +
                   C27109 * (C27171 + (C27051 * C27052 +
                                       C27161 * bs[6] * std::pow(C27012, 6)) *
                                          C26707 * C27224))) /
        C26709;
    const double C4847 = C27977 * C742;
    const double C9707 = C27977 * C742;
    const double C6313 = C27928 * C1114;
    const double C1603 = C1327 * C1589;
    const double C13707 = C13472 * C1589;
    const double C17954 = C13472 * C2706;
    const double C20849 = C1327 * C2706;
    const double C13189 = C27977 * C3771;
    const double C26483 = C27977 * C3771;
    const double C21890 = C27928 * C4305;
    const double C4427 = (2 * (C27109 * C27199 + C27035 * ae) +
                          C27109 * (C27199 + C27109 * C27482 + C27479 * ae) +
                          (C27035 + C27057 * C27224) * ae) /
                         C26705;
    const double C13302 = (2 * (C27109 * C27460 + C27355 * ae) +
                           C27109 * (C27460 + C27109 * C27583 + C27578 * ae) +
                           (C27355 + C27514 * C27224) * ae) /
                          C26705;
    const double C27626 = C27197 + C27624;
    const double C2398 =
        (2 * C27083 * C27370 +
         C27083 * (C27370 + C27014 *
                                (C27051 * C27052 +
                                 C27224 * bs[6] * std::pow(C27012, 6)) *
                                C26707 * C27161)) /
        C26709;
    const double C2924 =
        (ae * (C27123 + C27362 * C27161) + be * (C27199 + C27368 * C27161) +
         C27109 * (C27370 + C27014 *
                                (C27051 * C27052 +
                                 C27224 * bs[6] * std::pow(C27012, 6)) *
                                C26707 * C27161)) /
        C26709;
    const double C2925 = (ae * C27083 * C27123 + be * C27083 * C27199 +
                          C27109 * C27083 * C27370) /
                         C26709;
    const double C3477 =
        (C27014 * C27229 + ae * (C27109 * C27123 + C27035 * be) +
         be * (C27109 * C27199 + C27035 * ae) +
         C27109 * (ae * C27123 + be * C27199 + C27109 * C27370)) /
        C26709;
    const double C3980 =
        (C27083 * C27370 + ae * (C27109 * C27456 + C27347 * be) +
         be * (C27109 * C27457 + C27347 * ae) +
         C27109 *
             (ae * C27456 + be * C27457 +
              C27109 * C27083 * C27014 *
                  (C27051 * C27052 + C27224 * bs[6] * std::pow(C27012, 6)) *
                  C26707)) /
        C26709;
    const double C4544 =
        (2 * (ae * C27123 + be * C27199 + C27109 * C27370) +
         ae * (C27123 + C27109 * C27481 + C27479 * be) +
         be * (C27199 + C27109 * C27482 + C27479 * ae) +
         C27109 * (C27370 + ae * C27481 + be * C27482 +
                   C27109 * (ae * C27362 + be * C27368 +
                             C27109 * C27014 *
                                 (C27051 * C27052 +
                                  C27224 * bs[6] * std::pow(C27012, 6)) *
                                 C26707))) /
        C26709;
    const double C13417 =
        (2 * (ae * C27459 + be * C27460 + C27109 * C27576) +
         ae * (C27459 + C27109 * C27582 + C27578 * be) +
         be * (C27460 + C27109 * C27583 + C27578 * ae) +
         C27109 * (C27576 + ae * C27582 + be * C27583 +
                   C27109 * (ae * C27577 + be * C27579 +
                             C27109 * C27083 *
                                 (C27051 * C27052 +
                                  C27224 * bs[6] * std::pow(C27012, 6)) *
                                 C26707))) /
        C26709;
    const double C27617 = C27611 + C27612;
    const double C5076 = C27939 * C898;
    const double C6544 = C28003 * C1270;
    const double C18665 = C28003 * C1270;
    const double C1846 = C27939 * C1835;
    const double C11565 = C27939 * C2399;
    const double C17674 = C28003 * C2926;
    const double C20563 = C28003 * C2926;
    const double C12865 = C2980 * C3981;
    const double C26208 = C23899 * C3981;
    const double C4674 = C27977 * C621;
    const double C9538 = C27977 * C621;
    const double C6140 = C27928 * C993;
    const double C1414 = C1327 * C1401;
    const double C13541 = C13472 * C1401;
    const double C7637 = C27977 * C2536;
    const double C15016 = C27977 * C2536;
    const double C3056 = C27928 * C3047;
    const double C5312 = C4598 * C705;
    const double C10163 = C9462 * C705;
    const double C7238 = C4598 * C1077;
    const double C19359 = C9462 * C1077;
    const double C2125 = C27887 * C1533;
    const double C14168 = C27887 * C1533;
    const double C8437 = C27887 * C2651;
    const double C15782 = C27887 * C2651;
    const double C4253 = C27887 * C3182;
    const double C25016 = C27887 * C3182;
    const double C4728 = C27939 * C663;
    const double C6208 = C28003 * C1035;
    const double C18338 = C28003 * C1035;
    const double C1478 = C27939 * C1469;
    const double C7711 = C28003 * C2593;
    const double C22244 = C28003 * C2593;
    const double C3127 = C2980 * C3114;
    const double C24014 = C23899 * C3114;
    const double C5468 = C4598 * C823;
    const double C10319 = C9462 * C823;
    const double C7397 = C4598 * C1195;
    const double C19518 = C9462 * C1195;
    const double C2295 = C27887 * C1723;
    const double C14326 = C27887 * C1723;
    const double C8643 = C27887 * C2817;
    const double C15984 = C27887 * C2817;
    const double C4437 = C27887 * C3364;
    const double C25174 = C27887 * C3364;
    const double C5141 = C4605 * C572;
    const double C5139 = C4605 * C571;
    const double C5313 = C4605 * C701;
    const double C5307 = C4605 * C566;
    const double C5469 = C4605 * C819;
    const double C7067 = C4605 * C944;
    const double C7065 = C4605 * C943;
    const double C7239 = C4605 * C1073;
    const double C7233 = C4605 * C938;
    const double C7398 = C4605 * C1191;
    const double C9992 = C9469 * C572;
    const double C9990 = C9469 * C571;
    const double C10164 = C9469 * C701;
    const double C10158 = C9469 * C566;
    const double C10320 = C9469 * C819;
    const double C19188 = C9469 * C944;
    const double C19186 = C9469 * C943;
    const double C19360 = C9469 * C1073;
    const double C19354 = C9469 * C938;
    const double C19519 = C9469 * C1191;
    const double C26728 = C27882 - C26726;
    const double C5134 = C28107 * C580;
    const double C5308 = C28107 * C703;
    const double C5302 = C28107 * C575;
    const double C5464 = C28107 * C821;
    const double C7060 = C28107 * C952;
    const double C7234 = C28107 * C1075;
    const double C7228 = C28107 * C947;
    const double C7393 = C28107 * C1193;
    const double C73 = (C28107 * C27877) / C26705 + (C28071 - C28095) / C26710;
    const double C5138 = C28108 * C579;
    const double C5310 = C28108 * C704;
    const double C5304 = C28108 * C573;
    const double C5466 = C28108 * C822;
    const double C7064 = C28108 * C951;
    const double C7236 = C28108 * C1076;
    const double C7230 = C28108 * C945;
    const double C7395 = C28108 * C1194;
    const double C74 =
        (C28108 * C27877) / C26705 + (2 * C27887 + C28107) / C26710;
    const double C75 = (C27877 * C27887) / C26714 + C28108 / C26710;
    const double C26796 = C27928 - C26795;
    const double C13542 = C13529 * C1338;
    const double C13536 = C13529 * C1333;
    const double C13706 = C13529 * C1530;
    const double C13704 = C13529 * C1398;
    const double C13872 = C13529 * C1720;
    const double C17792 = C13529 * C2471;
    const double C17786 = C13529 * C2465;
    const double C17953 = C13529 * C2648;
    const double C17951 = C13529 * C2531;
    const double C18119 = C13529 * C2814;
    const double C328 = C325 + C313;
    const double C4321 = C4319 + C4310;
    const double C13537 = C28112 * C152;
    const double C13531 = C28112 * C147;
    const double C13699 = C28112 * C305;
    const double C13867 = C28112 * C454;
    const double C17787 = C28112 * C991;
    const double C17781 = C28112 * C987;
    const double C17946 = C28112 * C1116;
    const double C18114 = C28112 * C1231;
    const double C10905 =
        (C28112 * C27972) / C26705 + (C28084 - C28101) / C26710;
    const double C13539 = C28113 * C620;
    const double C13533 = C28113 * C616;
    const double C13703 = C28113 * C743;
    const double C13869 = C28113 * C860;
    const double C17789 = C28113 * C2534;
    const double C17783 = C28113 * C2530;
    const double C17950 = C28113 * C2707;
    const double C18116 = C28113 * C2870;
    const double C10906 =
        (C28113 * C27972) / C26705 + (2 * C27977 + C28112) / C26710;
    const double C10907 = (C27972 * C27977) / C26714 + C28113 / C26710;
    const double C26822 = C27939 - C26821;
    const double C24015 = C24002 * C2987;
    const double C24009 = C24002 * C2982;
    const double C24171 = C24002 * C3179;
    const double C24335 = C24002 * C3361;
    const double C24333 = C24002 * C3111;
    const double C25890 = C24002 * C3555;
    const double C25884 = C24002 * C3551;
    const double C26046 = C24002 * C3716;
    const double C26207 = C24002 * C3874;
    const double C26205 = C24002 * C3662;
    const double C523 = C520 + C508;
    const double C2413 = C2411 + C2404;
    const double C24010 = C28114 * C209;
    const double C24004 = C28114 * C204;
    const double C24166 = C28114 * C365;
    const double C24328 = C28114 * C500;
    const double C25885 = C28114 * C661;
    const double C25879 = C28114 * C657;
    const double C26041 = C28114 * C779;
    const double C26200 = C28114 * C900;
    const double C21098 =
        (C28114 * C27998) / C26705 + (C28085 - C28104) / C26710;
    const double C24012 = C28115 * C1034;
    const double C24006 = C28115 * C1030;
    const double C24168 = C28115 * C1152;
    const double C24332 = C28115 * C1271;
    const double C25887 = C28115 * C2592;
    const double C25881 = C28115 * C2588;
    const double C26043 = C28115 * C2758;
    const double C26204 = C28115 * C2927;
    const double C21099 =
        (C28115 * C27998) / C26705 + (2 * C28003 + C28114) / C26710;
    const double C21100 = (C27998 * C28003) / C26714 + C28115 / C26710;
    const double C1850 = C1848 - C1845;
    const double C3249 = C3247 - C3244;
    const double C329 = C326 + C317;
    const double C330 = C327 + C321;
    const double C3250 = C3248 + C3241;
    const double C4322 = C4320 + C4315;
    const double C524 = C521 + C512;
    const double C525 = C522 + C516;
    const double C1851 = C1849 + C1842;
    const double C2414 = C2412 + C2408;
    const double C27080 = C27078 + C27066;
    const double C27079 = C27077 + C27063;
    const double C5142 = C4598 * C578;
    const double C9993 = C9462 * C578;
    const double C8218 = C27887 * C2478;
    const double C15571 = C27887 * C2478;
    const double C12403 = C27882 * C3557;
    const double C7068 = C4598 * C950;
    const double C19189 = C9462 * C950;
    const double C27527 = C27525 + C27519;
    const double C27627 = C27625 + C27619;
    const double C27528 = C27526 + C27522;
    const double C7852 = C27977 * C2705;
    const double C15223 = C27977 * C2705;
    const double C3245 = C27928 * C3235;
    const double C6316 = C6315 + C6313;
    const double C21893 = C21892 + C21890;
    const double C27628 = C27626 + C27622;
    const double C8138 = C28003 * C2925;
    const double C22653 = C28003 * C2925;
    const double C3491 = C2980 * C3477;
    const double C24336 = C23899 * C3477;
    const double C5079 = C5078 + C5076;
    const double C11568 = C11567 + C11565;
    const double C26729 = C26728 * ae;
    const double C26740 = C26728 * C26737;
    const double C1328 = (-C26706 / C26705) / C26710 - (C26728 * be) / C26705;
    const double C26797 = C26796 * C26737;
    const double C26888 = C26796 * ae;
    const double C4657 = (C26796 * ae) / C26705 - C26783 / C26714;
    const double C9521 = (-C26783 / C26705) / C26710 - (C26796 * be) / C26705;
    const double C4323 = C4321 * C1323;
    const double C7290 = C4321 * C28107;
    const double C19411 = C4321 * C9460;
    const double C21885 = C4321 * C27882;
    const double C25068 = C4321 * C28071;
    const double C26823 = C26822 * C26737;
    const double C26959 = C26822 * ae;
    const double C6191 = (C26822 * ae) / C26705 - C26809 / C26714;
    const double C18321 = (-C26809 / C26705) / C26710 - (C26822 * be) / C26705;
    const double C526 = C523 * C27928;
    const double C1838 = C523 * C1325;
    const double C5070 = C523 * C28084;
    const double C9928 = C523 * C9463;
    const double C13923 = C523 * C28112;
    const double C1852 = C1850 + C1846;
    const double C4311 = C3250 * C27887;
    const double C7291 = C3250 * C28108;
    const double C19412 = C3250 * C9461;
    const double C25069 = C3250 * C27887;
    const double C4324 = C4322 * C1323;
    const double C21886 = C4322 * C27882;
    const double C25070 = C4322 * C28071;
    const double C527 = C524 * C27928;
    const double C5072 = C524 * C28084;
    const double C9930 = C524 * C9463;
    const double C528 = C525 * C27928;
    const double C1853 = C1851 * C1326;
    const double C5071 = C1851 * C27977;
    const double C9929 = C1851 * C27977;
    const double C13924 = C1851 * C28113;
    const double C622 =
        (be * (2 * C27046 + C27014 * C27080 + C27064 * ae) +
         C27083 *
             (2 * C27105 + ae * C27106 +
              C27014 * (C27101 + ae * C27014 * C27102 +
                        C27014 * (ae * C27102 + C27014 * std::pow(C27012, 6) *
                                                    bs[6] * C27089)))) /
        C26709;
    const double C1036 =
        (be * (2 * C27046 + C27014 * C27080 + C27064 * ae) +
         C27109 *
             (2 * C27131 + ae * C27132 +
              C27014 * (C27127 + ae * C27014 * C27128 +
                        C27014 * (ae * C27128 + C27014 * std::pow(C27012, 6) *
                                                    bs[6] * C27115)))) /
        C26709;
    const double C1402 =
        (C27094 + ae * C27097 + C27014 * C27105 + be * C27083 * C27080 +
         C27083 *
             (be * C27080 +
              C27083 * (C27101 + ae * C27014 * C27102 +
                        C27014 * (ae * C27102 + C27014 * std::pow(C27012, 6) *
                                                    bs[6] * C27089)))) /
        C26709;
    const double C3115 =
        (C27120 + ae * C27123 + C27014 * C27131 + be * C27109 * C27080 +
         C27109 *
             (be * C27080 +
              C27109 * (C27127 + ae * C27362 +
                        C27014 * (ae * C27128 + C27014 * std::pow(C27012, 6) *
                                                    bs[6] * C27115)))) /
        C26709;
    const double C5674 =
        (C27109 *
         (be * C27080 +
          C27083 * (C27101 + ae * C27346 +
                    C27014 * (ae * C27102 + C27014 * std::pow(C27012, 6) *
                                                bs[6] * C27089)))) /
        C26709;
    const double C5726 =
        (be * C27083 * C27080 +
         C27109 * C27083 *
             (C27127 + ae * C27362 +
              C27014 * (ae * C27128 +
                        C27014 * std::pow(C27012, 6) * bs[6] * C27115))) /
        C26709;
    const double C105 = (3 * (C27027 + C27014 * C27046 + C27035 * ae) +
                         C27014 * (2 * C27046 + C27014 * C27080 + C27064 * ae) +
                         (2 * C27035 + C27014 * C27064) * ae) /
                        C26705;
    const double C570 =
        (C27083 * (2 * C27046 + C27014 * C27080 + C27064 * ae)) / C26705;
    const double C942 =
        (C27109 * (2 * C27046 + C27014 * C27080 + C27064 * ae)) / C26705;
    const double C1340 =
        (C27027 + C27014 * C27046 + C27035 * ae + C27080 * C27161) / C26705;
    const double C2989 =
        (C27027 + C27014 * C27046 + C27035 * ae + C27080 * C27224) / C26705;
    const double C5621 = (C27109 * C27083 * C27080) / C26705;
    const double C110 =
        (3 * (C27044 + ae * C27045 + be * C27046 + C27014 * C27076) +
         ae * (2 * C27045 + C27014 * C27079 + C27064 * be) +
         be * (2 * C27046 + C27014 * C27080 + C27064 * ae) +
         C27014 *
             (2 * C27076 + ae * C27079 + be * C27080 +
              C27014 * (C27070 + ae * C27071 + be * C27072 +
                        C27014 * (ae * C27062 + be * C27065 +
                                  C27014 *
                                      (C27051 * C27052 +
                                       C27018 * bs[6] * std::pow(C27012, 6)) *
                                      C26707)))) /
        C26709;
    const double C577 =
        (2 * (ae * C27083 * C27039 + be * C27083 * C27040 + C27014 * C27236) +
         ae * C27083 * C27079 + be * C27083 * C27080 +
         C27014 * (C27236 + ae * C27083 * C27071 + be * C27083 * C27072 +
                   C27014 * (ae * C27083 * C27062 + be * C27083 * C27065 +
                             C27014 * C27083 *
                                 (C27051 * C27052 +
                                  C27018 * bs[6] * std::pow(C27012, 6)) *
                                 C26707))) /
        C26709;
    const double C706 =
        (ae * (2 * C27045 + C27014 * C27079 + C27064 * be) +
         C27083 *
             (2 * C27156 + be * C27157 +
              C27014 * (C27152 + be * C27014 * C27153 +
                        C27014 * (be * C27153 + C27014 * std::pow(C27012, 6) *
                                                    bs[6] * C27140)))) /
        C26709;
    const double C949 =
        (2 * (ae * C27109 * C27039 + be * C27109 * C27040 + C27014 * C27273) +
         ae * C27109 * C27079 + be * C27109 * C27080 +
         C27014 * (C27273 + ae * C27109 * C27071 + be * C27109 * C27072 +
                   C27014 * (ae * C27109 * C27062 + be * C27109 * C27065 +
                             C27014 * C27109 *
                                 (C27051 * C27052 +
                                  C27018 * bs[6] * std::pow(C27012, 6)) *
                                 C26707))) /
        C26709;
    const double C1196 =
        (ae * (2 * C27045 + C27014 * C27079 + C27064 * be) +
         C27109 *
             (2 * C27207 + be * C27208 +
              C27014 * (C27203 + be * C27014 * C27204 +
                        C27014 * (be * C27204 + C27014 * std::pow(C27012, 6) *
                                                    bs[6] * C27191)))) /
        C26709;
    const double C1534 =
        (C27145 + be * C27148 + C27014 * C27156 + ae * C27083 * C27079 +
         C27083 *
             (ae * C27079 +
              C27083 * (C27152 + be * C27014 * C27153 +
                        C27014 * (be * C27153 + C27014 * std::pow(C27012, 6) *
                                                    bs[6] * C27140)))) /
        C26709;
    const double C3365 =
        (C27196 + be * C27199 + C27014 * C27207 + ae * C27109 * C27079 +
         C27109 *
             (ae * C27079 +
              C27109 * (C27203 + be * C27368 +
                        C27014 * (be * C27204 + C27014 * std::pow(C27012, 6) *
                                                    bs[6] * C27191)))) /
        C26709;
    const double C5778 =
        (ae * C27109 * C27079 +
         C27083 * C27109 *
             (C27152 + be * C27348 +
              C27014 * (be * C27153 +
                        C27014 * std::pow(C27012, 6) * bs[6] * C27140))) /
        C26709;
    const double C5932 =
        (ae * C27083 * C27079 +
         C27109 * C27083 *
             (C27203 + be * C27368 +
              C27014 * (be * C27204 +
                        C27014 * std::pow(C27012, 6) * bs[6] * C27191))) /
        C26709;
    const double C104 = (3 * (C27026 + C27014 * C27045 + C27035 * be) +
                         C27014 * (2 * C27045 + C27014 * C27079 + C27064 * be) +
                         (2 * C27035 + C27014 * C27064) * be) /
                        C26705;
    const double C569 =
        (C27083 * (2 * C27045 + C27014 * C27079 + C27064 * be)) / C26705;
    const double C941 =
        (C27109 * (2 * C27045 + C27014 * C27079 + C27064 * be)) / C26705;
    const double C1339 =
        (C27026 + C27014 * C27045 + C27035 * be + C27079 * C27161) / C26705;
    const double C2988 =
        (C27026 + C27014 * C27045 + C27035 * be + C27079 * C27224) / C26705;
    const double C5620 = (C27109 * C27083 * C27079) / C26705;
    const double C11854 =
        (ae * (2 * C27357 + C27083 * C27527 + C27520 * be) +
         C27109 *
             (2 * C27538 + be * C27539 +
              C27083 * (C27220 + be * C27083 * C27204 +
                        C27083 * (be * C27204 + C27083 * std::pow(C27012, 6) *
                                                    bs[6] * C27214)))) /
        C26709;
    const double C12801 =
        (C27217 + be * C27460 + C27083 * C27538 + ae * C27109 * C27527 +
         C27109 *
             (ae * C27527 +
              C27109 * (C27220 + be * C27083 * C27204 +
                        C27083 * (be * C27204 + C27083 * std::pow(C27012, 6) *
                                                    bs[6] * C27214)))) /
        C26709;
    const double C11287 =
        (3 * (C27090 + C27083 * C27357 + C27355 * be) +
         C27083 * (2 * C27357 + C27083 * C27527 + C27520 * be) +
         (2 * C27355 + C27083 * C27520) * be) /
        C26705;
    const double C11640 =
        (C27109 * (2 * C27357 + C27083 * C27527 + C27520 * be)) / C26705;
    const double C12461 =
        (C27090 + C27083 * C27357 + C27355 * be + C27527 * C27224) / C26705;
    const double C21807 =
        (3 * (C27116 + C27109 * C27487 + C27485 * be) +
         C27109 * (2 * C27487 + C27109 * C27627 + C27620 * be) +
         (2 * C27485 + C27109 * C27620) * be) /
        C26705;
    const double C11411 =
        (3 * (C27166 + ae * C27357 + be * C27358 + C27083 * C27517) +
         ae * (2 * C27357 + C27083 * C27527 + C27520 * be) +
         be * (2 * C27358 + C27083 * C27528 + C27520 * ae) +
         C27083 *
             (2 * C27517 + ae * C27527 + be * C27528 +
              C27083 * (C27171 + ae * C27518 + be * C27521 +
                        C27083 * (ae * C27102 + be * C27153 +
                                  C27083 *
                                      (C27051 * C27052 +
                                       C27161 * bs[6] * std::pow(C27012, 6)) *
                                      C26707)))) /
        C26709;
    const double C11748 =
        (2 * (ae * C27109 * C27095 + be * C27109 * C27146 + C27083 * C27547) +
         ae * C27109 * C27527 + be * C27109 * C27528 +
         C27083 * (C27547 + ae * C27109 * C27518 + be * C27109 * C27521 +
                   C27083 * (ae * C27109 * C27102 + be * C27109 * C27153 +
                             C27083 * C27109 *
                                 (C27051 * C27052 +
                                  C27161 * bs[6] * std::pow(C27012, 6)) *
                                 C26707))) /
        C26709;
    const double C11363 =
        (3 * (C27141 + C27083 * C27358 + C27355 * ae) +
         C27083 * (2 * C27358 + C27083 * C27528 + C27520 * ae) +
         (2 * C27355 + C27083 * C27520) * ae) /
        C26705;
    const double C11712 =
        (C27109 * (2 * C27358 + C27083 * C27528 + C27520 * ae)) / C26705;
    const double C12577 =
        (C27141 + C27083 * C27358 + C27355 * ae + C27528 * C27224) / C26705;
    const double C3251 = C3249 + C3245;
    const double C7292 = C6316 * C4598;
    const double C19413 = C6316 * C9462;
    const double C21894 = C21893 * C27882;
    const double C22038 =
        (3 * (C27229 + ae * C27487 + be * C27488 + C27109 * C27617) +
         ae * (2 * C27487 + C27109 * C27627 + C27620 * be) +
         be * (2 * C27488 + C27109 * C27628 + C27620 * ae) +
         C27109 *
             (2 * C27617 + ae * C27627 + be * C27628 +
              C27109 * (C27234 + ae * C27618 + be * C27621 +
                        C27109 * (ae * C27128 + be * C27204 +
                                  C27109 *
                                      (C27051 * C27052 +
                                       C27224 * bs[6] * std::pow(C27012, 6)) *
                                      C26707)))) /
        C26709;
    const double C21963 =
        (3 * (C27192 + C27109 * C27488 + C27485 * ae) +
         C27109 * (2 * C27488 + C27109 * C27628 + C27620 * ae) +
         (2 * C27485 + C27109 * C27620) * ae) /
        C26705;
    const double C5080 = C5079 * C27977;
    const double C9931 = C5079 * C27977;
    const double C26730 = C26729 / C26705;
    const double C26741 = C26703 * C26740;
    const double C90 = (-C26740 / C26705) / (4 * C26734);
    const double C1331 = (-C26740 / C26705) / C26710;
    const double C4606 = (-C26740 / C26705) / (4 * C26709);
    const double C9470 = (-C26740 / C26705) / (4 * C26709);
    const double C10910 = -C26740 / C26705;
    const double C13476 = (-C26740 / C26705) / C26710;
    const double C1923 = C1328 * C1336;
    const double C1921 = C1328 * C1335;
    const double C1915 = C1328 * C576;
    const double C1913 = C1328 * C575;
    const double C2124 = C1328 * C1529;
    const double C2120 = C1328 * C1332;
    const double C2116 = C1328 * C699;
    const double C2112 = C1328 * C568;
    const double C2294 = C1328 * C1719;
    const double C2290 = C1328 * C817;
    const double C4051 = C1328 * C2985;
    const double C4049 = C1328 * C2984;
    const double C4043 = C1328 * C948;
    const double C4041 = C1328 * C947;
    const double C4252 = C1328 * C3178;
    const double C4248 = C1328 * C2981;
    const double C4244 = C1328 * C1071;
    const double C4240 = C1328 * C940;
    const double C4436 = C1328 * C3360;
    const double C4432 = C1328 * C1189;
    const double C8213 = C1328 * C2475;
    const double C8211 = C1328 * C2474;
    const double C8436 = C1328 * C2646;
    const double C8432 = C1328 * C2467;
    const double C8642 = C1328 * C2812;
    const double C26800 = C26765 * C26797;
    const double C1585 =
        (ae * -2 * C26783) / C26734 +
        (((C26765 * ((-4 * C26785) / C26705 - (C26765 * C26797) / C26705) *
           ae) /
              C26705 +
          2 * ((C26796 * ae) / C26705 - C26783 / C26714)) *
         ae) /
            C26705 -
        C26797 / C26714;
    const double C1587 = (-C26797 / C26705) / (4 * C26709);
    const double C4830 = (-C26797 / C26705) / C26710;
    const double C9690 = (-C26797 / C26705) / C26710;
    const double C11054 = (-C26797 / C26705) / (4 * C26734);
    const double C13694 = (-C26797 / C26705) / (4 * C26709);
    const double C26894 = C26888 / C26705;
    const double C4673 = C4657 * C101;
    const double C4669 = C4657 * C93;
    const double C4665 = C4657 * C99;
    const double C4661 = C4657 * C92;
    const double C4842 = C4657 * C261;
    const double C4840 = C4657 * C148;
    const double C4834 = C4657 * C260;
    const double C4832 = C4657 * C147;
    const double C5017 = C4657 * C411;
    const double C5013 = C4657 * C410;
    const double C7636 = C4657 * C946;
    const double C7632 = C4657 * C939;
    const double C7847 = C4657 * C1072;
    const double C7845 = C4657 * C988;
    const double C8062 = C4657 * C1190;
    const double C8928 = C4657 * C948;
    const double C8924 = C4657 * C940;
    const double C9131 = C4657 * C1071;
    const double C9129 = C4657 * C987;
    const double C9342 = C4657 * C1189;
    const double C26323 = C4657 * C2985;
    const double C26319 = C4657 * C2981;
    const double C26478 = C4657 * C3178;
    const double C26476 = C4657 * C3043;
    const double C26641 = C4657 * C3360;
    const double C9537 = C9521 * C101;
    const double C9533 = C9521 * C93;
    const double C9529 = C9521 * C99;
    const double C9525 = C9521 * C92;
    const double C9702 = C9521 * C261;
    const double C9700 = C9521 * C148;
    const double C9694 = C9521 * C260;
    const double C9692 = C9521 * C147;
    const double C9875 = C9521 * C411;
    const double C9871 = C9521 * C410;
    const double C13008 = C9521 * C2985;
    const double C13004 = C9521 * C2981;
    const double C13000 = C9521 * C948;
    const double C12996 = C9521 * C940;
    const double C13184 = C9521 * C3178;
    const double C13182 = C9521 * C3043;
    const double C13176 = C9521 * C1071;
    const double C13174 = C9521 * C987;
    const double C13365 = C9521 * C3360;
    const double C13361 = C9521 * C1189;
    const double C15015 = C9521 * C946;
    const double C15011 = C9521 * C939;
    const double C15218 = C9521 * C1072;
    const double C15216 = C9521 * C988;
    const double C15429 = C9521 * C1190;
    const double C26826 = C26768 * C26823;
    const double C3473 =
        (ae * -2 * C26809) / C26734 +
        (((C26768 * ((-4 * C26811) / C26705 - (C26768 * C26823) / C26705) *
           ae) /
              C26705 +
          2 * ((C26822 * ae) / C26705 - C26809 / C26714)) *
         ae) /
            C26705 -
        C26823 / C26714;
    const double C3475 = (-C26823 / C26705) / (4 * C26709);
    const double C6527 = (-C26823 / C26705) / C26710;
    const double C18648 = (-C26823 / C26705) / C26710;
    const double C21381 = (-C26823 / C26705) / (4 * C26734);
    const double C24323 = (-C26823 / C26705) / (4 * C26709);
    const double C26965 = C26959 / C26705;
    const double C6207 = C6191 * C101;
    const double C6203 = C6191 * C93;
    const double C6199 = C6191 * C99;
    const double C6195 = C6191 * C92;
    const double C6372 = C6191 * C261;
    const double C6368 = C6191 * C260;
    const double C6539 = C6191 * C411;
    const double C6537 = C6191 * C205;
    const double C6531 = C6191 * C410;
    const double C6529 = C6191 * C204;
    const double C7710 = C6191 * C574;
    const double C7706 = C6191 * C567;
    const double C7926 = C6191 * C700;
    const double C8133 = C6191 * C818;
    const double C8131 = C6191 * C658;
    const double C8362 = C6191 * C576;
    const double C8358 = C6191 * C568;
    const double C8572 = C6191 * C699;
    const double C8779 = C6191 * C817;
    const double C8777 = C6191 * C657;
    const double C17354 = C6191 * C1336;
    const double C17350 = C6191 * C1332;
    const double C17512 = C6191 * C1529;
    const double C17669 = C6191 * C1719;
    const double C17667 = C6191 * C1465;
    const double C18337 = C18321 * C101;
    const double C18333 = C18321 * C93;
    const double C18329 = C18321 * C99;
    const double C18325 = C18321 * C92;
    const double C18495 = C18321 * C261;
    const double C18491 = C18321 * C260;
    const double C18660 = C18321 * C411;
    const double C18658 = C18321 * C205;
    const double C18652 = C18321 * C410;
    const double C18650 = C18321 * C204;
    const double C20237 = C18321 * C1336;
    const double C20233 = C18321 * C1332;
    const double C20229 = C18321 * C576;
    const double C20225 = C18321 * C568;
    const double C20395 = C18321 * C1529;
    const double C20391 = C18321 * C699;
    const double C20558 = C18321 * C1719;
    const double C20556 = C18321 * C1465;
    const double C20550 = C18321 * C817;
    const double C20548 = C18321 * C657;
    const double C22243 = C18321 * C574;
    const double C22239 = C18321 * C567;
    const double C22445 = C18321 * C700;
    const double C22648 = C18321 * C818;
    const double C22646 = C18321 * C658;
    const double C1854 = C1852 * C1327;
    const double C13925 = C1852 * C13472;
    const double C4316 = C3251 * C27887;
    const double C25071 = C3251 * C27887;
    const double C26731 = C26730 - C26720;
    const double C26742 = C26741 / C26705;
    const double C1926 = C1331 * C1333;
    const double C1918 = C1331 * C567;
    const double C4054 = C1331 * C2982;
    const double C4046 = C1331 * C939;
    const double C8216 = C1331 * C2466;
    const double C5140 = C4606 * C566;
    const double C7066 = C4606 * C938;
    const double C9991 = C9470 * C566;
    const double C19187 = C9470 * C938;
    const double C11239 = C10910 * C1905;
    const double C11235 = C10910 * C1332;
    const double C11231 = C10910 * C568;
    const double C12401 = C10910 * C3551;
    const double C12397 = C10910 * C2467;
    const double C12934 = C10910 * C2981;
    const double C12930 = C10910 * C940;
    const double C17242 = C10910 * C2465;
    const double C21728 = C10910 * C4033;
    const double C13989 = C13476 * C1333;
    const double C13981 = C13476 * C567;
    const double C15569 = C13476 * C2466;
    const double C16189 = C13476 * C939;
    const double C24851 = C13476 * C2982;
    const double C26913 = C26800 / C26705;
    const double C1586 =
        (((-4 * C26785) / C26705 - C26800 / C26705) * ae) / C26714 +
        ((2 * ((0 * ae) / C26705 - C26785 / C26709) - C26800 / C26714) * ae) /
            C26705;
    const double C4829 =
        (((-4 * C26785) / C26705 - C26800 / C26705) * ae) / C26705;
    const double C9689 =
        -(((-4 * C26785) / C26705 - C26800 / C26705) * be) / C26705;
    const double C1593 = C1585 * C92;
    const double C20839 = C1585 * C940;
    const double C1601 = C1587 * C1333;
    const double C20847 = C1587 * C2465;
    const double C4845 = C4830 * C566;
    const double C4837 = C4830 * C567;
    const double C7850 = C4830 * C2466;
    const double C9134 = C4830 * C2467;
    const double C26481 = C4830 * C3551;
    const double C9705 = C9690 * C566;
    const double C9697 = C9690 * C567;
    const double C13187 = C9690 * C3551;
    const double C13179 = C9690 * C2467;
    const double C15221 = C9690 * C2466;
    const double C13705 = C13694 * C1333;
    const double C17952 = C13694 * C2465;
    const double C26897 = C26894 - C26889;
    const double C26984 = C26826 / C26705;
    const double C3474 =
        (((-4 * C26811) / C26705 - C26826 / C26705) * ae) / C26714 +
        ((2 * ((0 * ae) / C26705 - C26811 / C26709) - C26826 / C26714) * ae) /
            C26705;
    const double C6526 =
        (((-4 * C26811) / C26705 - C26826 / C26705) * ae) / C26705;
    const double C18647 =
        -(((-4 * C26811) / C26705 - C26826 / C26705) * be) / C26705;
    const double C3481 = C3473 * C92;
    const double C12855 = C3473 * C568;
    const double C3489 = C3475 * C2982;
    const double C12863 = C3475 * C3551;
    const double C6542 = C6527 * C938;
    const double C6534 = C6527 * C939;
    const double C8136 = C6527 * C2466;
    const double C8782 = C6527 * C2467;
    const double C17672 = C6527 * C2465;
    const double C18663 = C18648 * C938;
    const double C18655 = C18648 * C939;
    const double C20561 = C18648 * C2465;
    const double C20553 = C18648 * C2467;
    const double C22651 = C18648 * C2466;
    const double C24334 = C24323 * C2982;
    const double C26206 = C24323 * C3551;
    const double C26968 = C26965 - C26960;
    const double C13986 = C26731 * C1336;
    const double C13984 = C26731 * C1335;
    const double C13978 = C26731 * C576;
    const double C13976 = C26731 * C575;
    const double C14167 = C26731 * C1529;
    const double C14163 = C26731 * C1332;
    const double C14159 = C26731 * C699;
    const double C14155 = C26731 * C568;
    const double C14325 = C26731 * C1719;
    const double C14321 = C26731 * C817;
    const double C15566 = C26731 * C2475;
    const double C15564 = C26731 * C2474;
    const double C15781 = C26731 * C2646;
    const double C15777 = C26731 * C2467;
    const double C15983 = C26731 * C2812;
    const double C16186 = C26731 * C948;
    const double C16184 = C26731 * C947;
    const double C16401 = C26731 * C1071;
    const double C16397 = C26731 * C940;
    const double C16603 = C26731 * C1189;
    const double C24848 = C26731 * C2985;
    const double C24846 = C26731 * C2984;
    const double C25015 = C26731 * C3178;
    const double C25011 = C26731 * C2981;
    const double C25173 = C26731 * C3360;
    const double C83 =
        ((((0 - (C26703 * C26704) / C26705) * ae) / C26705 - (0 * be) / C26714 +
          C26706 / C26705) /
             C26710 -
         ((C26703 * C26727 + 0) * be) / C26705) /
            C26710 +
        ((C26703 * (C26727 / C26710 -
                    ((C26703 * C26731 + C28071) * be) / C26705 + C26724) +
          C28107) *
         ae) /
            C26705 +
        C26731 / C26710 - ((C26703 * C26724 + C27887) * be) / C26705;
    const double C85 = (C26727 / C26710 -
                        ((C26703 * C26731 + C28071) * be) / C26705 + C26724) /
                           C26710 +
                       ((C26703 * (C26731 / C26710 -
                                   ((C26703 * C26724 + C27887) * be) / C26705) +
                         C28108) *
                        ae) /
                           C26705 +
                       2 * (C26724 / C26710 - (0 * be) / C26705);
    const double C87 =
        (C26731 / C26710 - ((C26703 * C26724 + C27887) * be) / C26705) /
            C26710 +
        ((C26703 * (C26724 / C26710 - (0 * be) / C26705) + C4598) * ae) /
            C26705;
    const double C4601 =
        C26727 / C26710 - ((C26703 * C26731 + C28071) * be) / C26705 + C26724;
    const double C4603 =
        C26731 / C26710 - ((C26703 * C26724 + C27887) * be) / C26705;
    const double C9465 =
        C26727 / C26710 + ((C26703 * C26731 + C28071) * ae) / C26705 + C26724;
    const double C9467 =
        C26731 / C26710 + ((C26703 * C26724 + C27887) * ae) / C26705;
    const double C26743 = C26739 - C26742;
    const double C1932 = C1925 - C1926;
    const double C1930 = C1917 - C1918;
    const double C4060 = C4053 - C4054;
    const double C4058 = C4045 - C4046;
    const double C8220 = C8215 - C8216;
    const double C5145 = C5139 - C5140;
    const double C7071 = C7065 - C7066;
    const double C9996 = C9990 - C9991;
    const double C19192 = C19186 - C19187;
    const double C11244 = C11238 - C11239;
    const double C11243 = C11234 - C11235;
    const double C11242 = C11230 - C11231;
    const double C12405 = C12400 - C12401;
    const double C12404 = C12396 - C12397;
    const double C12938 = C12933 - C12934;
    const double C12937 = C12929 - C12930;
    const double C17245 = C17241 - C17242;
    const double C21731 = C21727 - C21728;
    const double C13995 = C13988 - C13989;
    const double C13993 = C13980 - C13981;
    const double C15573 = C15568 - C15569;
    const double C16193 = C16188 - C16189;
    const double C24855 = C24850 - C24851;
    const double C26916 = C26915 - C26913;
    const double C1597 = C1586 * C567;
    const double C20843 = C1586 * C2467;
    const double C4841 = C4829 * C93;
    const double C4833 = C4829 * C92;
    const double C7846 = C4829 * C939;
    const double C9130 = C4829 * C940;
    const double C26477 = C4829 * C2981;
    const double C9701 = C9689 * C93;
    const double C9693 = C9689 * C92;
    const double C13183 = C9689 * C2981;
    const double C13175 = C9689 * C940;
    const double C15217 = C9689 * C939;
    const double C1604 = C1592 - C1593;
    const double C20850 = C20838 - C20839;
    const double C1606 = C1600 - C1601;
    const double C20852 = C20846 - C20847;
    const double C4851 = C4844 - C4845;
    const double C4849 = C4836 - C4837;
    const double C7854 = C7849 - C7850;
    const double C9138 = C9133 - C9134;
    const double C26485 = C26480 - C26481;
    const double C9711 = C9704 - C9705;
    const double C9709 = C9696 - C9697;
    const double C13193 = C13186 - C13187;
    const double C13191 = C13178 - C13179;
    const double C15225 = C15220 - C15221;
    const double C13710 = C13704 - C13705;
    const double C17957 = C17951 - C17952;
    const double C10945 =
        ((((0 - (C26765 * C26886) / C26705) * ae) / C26705 - (0 * be) / C26714 +
          C26783 / C26705) /
             C26710 -
         ((C26765 * C26901 + 0) * be) / C26705) /
            C26710 +
        ((C26765 * (C26901 / C26710 -
                    ((C26765 * C26897 + C28084) * be) / C26705 + C26898) +
          C28112) *
         ae) /
            C26705 +
        C26897 / C26710 - ((C26765 * C26898 + C27977) * be) / C26705;
    const double C10946 =
        (C26901 / C26710 - ((C26765 * C26897 + C28084) * be) / C26705 +
         C26898) /
            C26710 +
        ((C26765 *
              (C26897 / C26710 - ((C26765 * C26898 + C27977) * be) / C26705) +
          C28113) *
         ae) /
            C26705 +
        2 * (C26898 / C26710 - (0 * be) / C26705);
    const double C10947 =
        (C26897 / C26710 - ((C26765 * C26898 + C27977) * be) / C26705) /
            C26710 +
        ((C26765 * (C26898 / C26710 - (0 * be) / C26705) + C13472) * ae) /
            C26705;
    const double C13527 =
        C26901 / C26710 - ((C26765 * C26897 + C28084) * be) / C26705 + C26898;
    const double C13528 =
        C26897 / C26710 - ((C26765 * C26898 + C27977) * be) / C26705;
    const double C26987 = C26986 - C26984;
    const double C3485 = C3474 * C939;
    const double C12859 = C3474 * C2467;
    const double C6538 = C6526 * C93;
    const double C6530 = C6526 * C92;
    const double C8132 = C6526 * C567;
    const double C8778 = C6526 * C568;
    const double C17668 = C6526 * C1332;
    const double C18659 = C18647 * C93;
    const double C18651 = C18647 * C92;
    const double C20557 = C18647 * C1332;
    const double C20549 = C18647 * C568;
    const double C22647 = C18647 * C567;
    const double C3492 = C3480 - C3481;
    const double C12866 = C12854 - C12855;
    const double C3494 = C3488 - C3489;
    const double C12868 = C12862 - C12863;
    const double C6548 = C6541 - C6542;
    const double C6546 = C6533 - C6534;
    const double C8140 = C8135 - C8136;
    const double C8786 = C8781 - C8782;
    const double C17676 = C17671 - C17672;
    const double C18669 = C18662 - C18663;
    const double C18667 = C18654 - C18655;
    const double C20567 = C20560 - C20561;
    const double C20565 = C20552 - C20553;
    const double C22655 = C22650 - C22651;
    const double C24339 = C24333 - C24334;
    const double C26211 = C26205 - C26206;
    const double C21170 =
        ((((0 - (C26768 * C26957) / C26705) * ae) / C26705 - (0 * be) / C26714 +
          C26809 / C26705) /
             C26710 -
         ((C26768 * C26972 + 0) * be) / C26705) /
            C26710 +
        ((C26768 * (C26972 / C26710 -
                    ((C26768 * C26968 + C28085) * be) / C26705 + C26969) +
          C28114) *
         ae) /
            C26705 +
        C26968 / C26710 - ((C26768 * C26969 + C28003) * be) / C26705;
    const double C21171 =
        (C26972 / C26710 - ((C26768 * C26968 + C28085) * be) / C26705 +
         C26969) /
            C26710 +
        ((C26768 *
              (C26968 / C26710 - ((C26768 * C26969 + C28003) * be) / C26705) +
          C28115) *
         ae) /
            C26705 +
        2 * (C26969 / C26710 - (0 * be) / C26705);
    const double C21172 =
        (C26968 / C26710 - ((C26768 * C26969 + C28003) * be) / C26705) /
            C26710 +
        ((C26768 * (C26969 / C26710 - (0 * be) / C26705) + C23899) * ae) /
            C26705;
    const double C24000 =
        C26972 / C26710 - ((C26768 * C26968 + C28085) * be) / C26705 + C26969;
    const double C24001 =
        C26968 / C26710 - ((C26768 * C26969 + C28003) * be) / C26705;
    const double C5133 = C4601 * C576;
    const double C5131 = C4601 * C575;
    const double C5309 = C4601 * C699;
    const double C5303 = C4601 * C568;
    const double C5465 = C4601 * C817;
    const double C7059 = C4601 * C948;
    const double C7057 = C4601 * C947;
    const double C7235 = C4601 * C1071;
    const double C7229 = C4601 * C940;
    const double C7394 = C4601 * C1189;
    const double C5137 = C4603 * C574;
    const double C5135 = C4603 * C573;
    const double C5311 = C4603 * C700;
    const double C5305 = C4603 * C567;
    const double C5467 = C4603 * C818;
    const double C7063 = C4603 * C946;
    const double C7061 = C4603 * C945;
    const double C7237 = C4603 * C1072;
    const double C7231 = C4603 * C939;
    const double C7396 = C4603 * C1190;
    const double C9984 = C9465 * C576;
    const double C9982 = C9465 * C575;
    const double C10160 = C9465 * C699;
    const double C10154 = C9465 * C568;
    const double C10316 = C9465 * C817;
    const double C19180 = C9465 * C948;
    const double C19178 = C9465 * C947;
    const double C19356 = C9465 * C1071;
    const double C19350 = C9465 * C940;
    const double C19515 = C9465 * C1189;
    const double C9988 = C9467 * C574;
    const double C9986 = C9467 * C573;
    const double C10162 = C9467 * C700;
    const double C10156 = C9467 * C567;
    const double C10318 = C9467 * C818;
    const double C19184 = C9467 * C946;
    const double C19182 = C9467 * C945;
    const double C19358 = C9467 * C1072;
    const double C19352 = C9467 * C939;
    const double C19517 = C9467 * C1190;
    const double C26744 = C26743 * ae;
    const double C1329 = -(C26743 * be) / C26705;
    const double C1936 = C1932 - C1927;
    const double C1934 = C1930 - C1919;
    const double C4064 = C4060 - C4055;
    const double C4062 = C4058 - C4047;
    const double C8222 = C8220 - C8217;
    const double C5148 = C5145 - C5141;
    const double C7074 = C7071 - C7067;
    const double C9999 = C9996 - C9992;
    const double C19195 = C19192 - C19188;
    const double C11247 = C11244 - C11240;
    const double C11246 = C11243 - C11236;
    const double C11245 = C11242 - C11232;
    const double C12407 = C12405 - C12402;
    const double C12406 = C12404 - C12398;
    const double C12940 = C12938 - C12935;
    const double C12939 = C12937 - C12931;
    const double C17246 = C17245 - C17243;
    const double C21732 = C21731 - C21729;
    const double C13999 = C13995 - C13990;
    const double C13997 = C13993 - C13982;
    const double C15575 = C15573 - C15570;
    const double C16195 = C16193 - C16190;
    const double C24857 = C24855 - C24852;
    const double C26917 = C26916 * ae;
    const double C1605 = C1596 - C1597;
    const double C20851 = C20842 - C20843;
    const double C4850 = C4840 - C4841;
    const double C4848 = C4832 - C4833;
    const double C7853 = C7845 - C7846;
    const double C9137 = C9129 - C9130;
    const double C26484 = C26476 - C26477;
    const double C9710 = C9700 - C9701;
    const double C9708 = C9692 - C9693;
    const double C13192 = C13182 - C13183;
    const double C13190 = C13174 - C13175;
    const double C15224 = C15216 - C15217;
    const double C1607 = C1604 - C1594;
    const double C20853 = C20850 - C20840;
    const double C1609 = C1606 - C1602;
    const double C20855 = C20852 - C20848;
    const double C4855 = C4851 - C4846;
    const double C4853 = C4849 - C4838;
    const double C7856 = C7854 - C7851;
    const double C9140 = C9138 - C9135;
    const double C26487 = C26485 - C26482;
    const double C9715 = C9711 - C9706;
    const double C9713 = C9709 - C9698;
    const double C13197 = C13193 - C13188;
    const double C13195 = C13191 - C13180;
    const double C15227 = C15225 - C15222;
    const double C13713 = C13710 - C13706;
    const double C17960 = C17957 - C17953;
    const double C13538 = C13527 * C99;
    const double C13532 = C13527 * C92;
    const double C13698 = C13527 * C260;
    const double C13696 = C13527 * C147;
    const double C13868 = C13527 * C410;
    const double C17788 = C13527 * C948;
    const double C17782 = C13527 * C940;
    const double C17945 = C13527 * C1071;
    const double C17943 = C13527 * C987;
    const double C18115 = C13527 * C1189;
    const double C13540 = C13528 * C574;
    const double C13534 = C13528 * C567;
    const double C13702 = C13528 * C700;
    const double C13700 = C13528 * C616;
    const double C13870 = C13528 * C818;
    const double C17790 = C13528 * C2475;
    const double C17784 = C13528 * C2467;
    const double C17949 = C13528 * C2646;
    const double C17947 = C13528 * C2530;
    const double C18117 = C13528 * C2812;
    const double C26988 = C26987 * ae;
    const double C3493 = C3484 - C3485;
    const double C12867 = C12858 - C12859;
    const double C6547 = C6537 - C6538;
    const double C6545 = C6529 - C6530;
    const double C8139 = C8131 - C8132;
    const double C8785 = C8777 - C8778;
    const double C17675 = C17667 - C17668;
    const double C18668 = C18658 - C18659;
    const double C18666 = C18650 - C18651;
    const double C20566 = C20556 - C20557;
    const double C20564 = C20548 - C20549;
    const double C22654 = C22646 - C22647;
    const double C3495 = C3492 - C3482;
    const double C12869 = C12866 - C12856;
    const double C3497 = C3494 - C3490;
    const double C12871 = C12868 - C12864;
    const double C6552 = C6548 - C6543;
    const double C6550 = C6546 - C6535;
    const double C8142 = C8140 - C8137;
    const double C8788 = C8786 - C8783;
    const double C17678 = C17676 - C17673;
    const double C18673 = C18669 - C18664;
    const double C18671 = C18667 - C18656;
    const double C20571 = C20567 - C20562;
    const double C20569 = C20565 - C20554;
    const double C22657 = C22655 - C22652;
    const double C24342 = C24339 - C24335;
    const double C26214 = C26211 - C26207;
    const double C24011 = C24000 * C99;
    const double C24005 = C24000 * C92;
    const double C24167 = C24000 * C260;
    const double C24327 = C24000 * C410;
    const double C24325 = C24000 * C204;
    const double C25886 = C24000 * C576;
    const double C25880 = C24000 * C568;
    const double C26042 = C24000 * C699;
    const double C26199 = C24000 * C817;
    const double C26197 = C24000 * C657;
    const double C24013 = C24001 * C946;
    const double C24007 = C24001 * C939;
    const double C24169 = C24001 * C1072;
    const double C24331 = C24001 * C1190;
    const double C24329 = C24001 * C1030;
    const double C25888 = C24001 * C2475;
    const double C25882 = C24001 * C2467;
    const double C26044 = C24001 * C2646;
    const double C26203 = C24001 * C2812;
    const double C26201 = C24001 * C2588;
    const double C84 =
        ((ae * -2 * C26704) / C26734 -
         (((C26703 * C26738) / C26709 + 2 * C26727) * be) / C26705) /
            C26710 +
        ((C26703 * (C26738 / C26734 -
                    (((C26703 * C26744) / C26705 + 2 * C26731) * be) / C26705 -
                    C26740 / C26714) +
          2 * (C26727 / C26710 - ((C26703 * C26731 + C28071) * be) / C26705 +
               C26724)) *
         ae) /
            C26705 +
        C26744 / C26714 - ((2 * C26724 - C26741 / C26714) * be) / C26705;
    const double C86 =
        (C26738 / C26734 -
         (((C26703 * C26744) / C26705 + 2 * C26731) * be) / C26705 -
         C26740 / C26714) /
            C26710 +
        ((C26703 * (C26744 / C26714 -
                    ((2 * C26724 - C26741 / C26714) * be) / C26705) +
          2 * (C26731 / C26710 - ((C26703 * C26724 + C27887) * be) / C26705)) *
         ae) /
            C26705 +
        (-2 * C26740) / (C26705 * 4 * C26709);
    const double C88 =
        (C26744 / C26714 - ((2 * C26724 - C26741 / C26714) * be) / C26705) /
            C26710 +
        ((2 * (C26724 / C26710 - (0 * be) / C26705) -
          C26741 / (C26705 * 4 * C26709)) *
         ae) /
            C26705;
    const double C4602 =
        C26738 / C26734 -
        (((C26703 * C26744) / C26705 + 2 * C26731) * be) / C26705 -
        C26740 / C26714;
    const double C4604 =
        C26744 / C26714 - ((2 * C26724 - C26741 / C26714) * be) / C26705;
    const double C9466 =
        C26738 / C26734 +
        (((C26703 * C26744) / C26705 + 2 * C26731) * ae) / C26705 -
        C26740 / C26714;
    const double C9468 =
        C26744 / C26714 + ((2 * C26724 - C26741 / C26714) * ae) / C26705;
    const double C13474 = C26744 / C26705;
    const double C1922 = C1329 * C1332;
    const double C1914 = C1329 * C568;
    const double C4050 = C1329 * C2981;
    const double C4042 = C1329 * C940;
    const double C8212 = C1329 * C2467;
    const double C1940 = C1936 + C1928;
    const double C1938 = C1934 + C1920;
    const double C4068 = C4064 + C4056;
    const double C4066 = C4062 + C4048;
    const double C8224 = C8222 + C8218;
    const double C5151 = C5148 + C5142;
    const double C7077 = C7074 + C7068;
    const double C10002 = C9999 + C9993;
    const double C19198 = C19195 + C19189;
    const double C11250 = C11247 + C11241;
    const double C11249 = C11246 + C11237;
    const double C11248 = C11245 + C11233;
    const double C12409 = C12407 + C12403;
    const double C12408 = C12406 + C12399;
    const double C12942 = C12940 + C12936;
    const double C12941 = C12939 + C12932;
    const double C17247 = C17246 + C17244;
    const double C21733 = C21732 + C21730;
    const double C14003 = C13999 + C13991;
    const double C14001 = C13997 + C13983;
    const double C15577 = C15575 + C15571;
    const double C16197 = C16195 + C16191;
    const double C24859 = C24857 + C24853;
    const double C11051 =
        ((ae * -2 * C26886) / C26734 -
         (((C26765 * C26914) / C26709 + 2 * C26901) * be) / C26705) /
            C26710 +
        ((C26765 * (C26914 / C26734 -
                    (((C26765 * C26917) / C26705 + 2 * C26897) * be) / C26705 -
                    C26797 / C26714) +
          2 * (C26901 / C26710 - ((C26765 * C26897 + C28084) * be) / C26705 +
               C26898)) *
         ae) /
            C26705 +
        C26917 / C26714 - ((2 * C26898 - C26800 / C26714) * be) / C26705;
    const double C11052 =
        (C26914 / C26734 -
         (((C26765 * C26917) / C26705 + 2 * C26897) * be) / C26705 -
         C26797 / C26714) /
            C26710 +
        ((C26765 * (C26917 / C26714 -
                    ((2 * C26898 - C26800 / C26714) * be) / C26705) +
          2 * (C26897 / C26710 - ((C26765 * C26898 + C27977) * be) / C26705)) *
         ae) /
            C26705 +
        (-2 * C26797) / (C26705 * 4 * C26709);
    const double C11053 =
        (C26917 / C26714 - ((2 * C26898 - C26800 / C26714) * be) / C26705) /
            C26710 +
        ((2 * (C26898 / C26710 - (0 * be) / C26705) -
          C26800 / (C26705 * 4 * C26709)) *
         ae) /
            C26705;
    const double C13692 =
        C26914 / C26734 -
        (((C26765 * C26917) / C26705 + 2 * C26897) * be) / C26705 -
        C26797 / C26714;
    const double C13693 =
        C26917 / C26714 - ((2 * C26898 - C26800 / C26714) * be) / C26705;
    const double C1608 = C1605 - C1598;
    const double C20854 = C20851 - C20844;
    const double C4854 = C4850 - C4842;
    const double C4852 = C4848 - C4834;
    const double C7855 = C7853 - C7847;
    const double C9139 = C9137 - C9131;
    const double C26486 = C26484 - C26478;
    const double C9714 = C9710 - C9702;
    const double C9712 = C9708 - C9694;
    const double C13196 = C13192 - C13184;
    const double C13194 = C13190 - C13176;
    const double C15226 = C15224 - C15218;
    const double C1610 = C1607 + C1595;
    const double C20856 = C20853 + C20841;
    const double C1612 = C1609 + C1603;
    const double C20858 = C20855 + C20849;
    const double C4859 = C4855 + C4847;
    const double C4857 = C4853 + C4839;
    const double C7858 = C7856 + C7852;
    const double C9142 = C9140 + C9136;
    const double C26489 = C26487 + C26483;
    const double C9719 = C9715 + C9707;
    const double C9717 = C9713 + C9699;
    const double C13201 = C13197 + C13189;
    const double C13199 = C13195 + C13181;
    const double C15229 = C15227 + C15223;
    const double C13716 = C13713 + C13707;
    const double C17963 = C17960 + C17954;
    const double C21378 =
        ((ae * -2 * C26957) / C26734 -
         (((C26768 * C26985) / C26709 + 2 * C26972) * be) / C26705) /
            C26710 +
        ((C26768 * (C26985 / C26734 -
                    (((C26768 * C26988) / C26705 + 2 * C26968) * be) / C26705 -
                    C26823 / C26714) +
          2 * (C26972 / C26710 - ((C26768 * C26968 + C28085) * be) / C26705 +
               C26969)) *
         ae) /
            C26705 +
        C26988 / C26714 - ((2 * C26969 - C26826 / C26714) * be) / C26705;
    const double C21379 =
        (C26985 / C26734 -
         (((C26768 * C26988) / C26705 + 2 * C26968) * be) / C26705 -
         C26823 / C26714) /
            C26710 +
        ((C26768 * (C26988 / C26714 -
                    ((2 * C26969 - C26826 / C26714) * be) / C26705) +
          2 * (C26968 / C26710 - ((C26768 * C26969 + C28003) * be) / C26705)) *
         ae) /
            C26705 +
        (-2 * C26823) / (C26705 * 4 * C26709);
    const double C21380 =
        (C26988 / C26714 - ((2 * C26969 - C26826 / C26714) * be) / C26705) /
            C26710 +
        ((2 * (C26969 / C26710 - (0 * be) / C26705) -
          C26826 / (C26705 * 4 * C26709)) *
         ae) /
            C26705;
    const double C24321 =
        C26985 / C26734 -
        (((C26768 * C26988) / C26705 + 2 * C26968) * be) / C26705 -
        C26823 / C26714;
    const double C24322 =
        C26988 / C26714 - ((2 * C26969 - C26826 / C26714) * be) / C26705;
    const double C3496 = C3493 - C3486;
    const double C12870 = C12867 - C12860;
    const double C6551 = C6547 - C6539;
    const double C6549 = C6545 - C6531;
    const double C8141 = C8139 - C8133;
    const double C8787 = C8785 - C8779;
    const double C17677 = C17675 - C17669;
    const double C18672 = C18668 - C18660;
    const double C18670 = C18666 - C18652;
    const double C20570 = C20566 - C20558;
    const double C20568 = C20564 - C20550;
    const double C22656 = C22654 - C22648;
    const double C3498 = C3495 + C3483;
    const double C12872 = C12869 + C12857;
    const double C3500 = C3497 + C3491;
    const double C12874 = C12871 + C12865;
    const double C6556 = C6552 + C6544;
    const double C6554 = C6550 + C6536;
    const double C8144 = C8142 + C8138;
    const double C8790 = C8788 + C8784;
    const double C17680 = C17678 + C17674;
    const double C18677 = C18673 + C18665;
    const double C18675 = C18671 + C18657;
    const double C20575 = C20571 + C20563;
    const double C20573 = C20569 + C20555;
    const double C22659 = C22657 + C22653;
    const double C24345 = C24342 + C24336;
    const double C26217 = C26214 + C26208;
    const double C5132 = C4602 * C568;
    const double C7058 = C4602 * C940;
    const double C5136 = C4604 * C567;
    const double C7062 = C4604 * C939;
    const double C9983 = C9466 * C568;
    const double C19179 = C9466 * C940;
    const double C9987 = C9468 * C567;
    const double C19183 = C9468 * C939;
    const double C13985 = C13474 * C1332;
    const double C13977 = C13474 * C568;
    const double C15565 = C13474 * C2467;
    const double C16185 = C13474 * C940;
    const double C24847 = C13474 * C2981;
    const double C1931 = C1921 - C1922;
    const double C1929 = C1913 - C1914;
    const double C4059 = C4049 - C4050;
    const double C4057 = C4041 - C4042;
    const double C8219 = C8211 - C8212;
    const double C11253 = C11250 * C27939;
    const double C11252 = C11249 * C27939;
    const double C17240 = C11249 * C28085;
    const double C20122 = C11249 * C18219;
    const double C11251 = C11248 * C27939;
    const double C12395 = C11248 * C2978;
    const double C17238 = C11248 * C28085;
    const double C20120 = C11248 * C18219;
    const double C25776 = C11248 * C28114;
    const double C12411 = C12409 * C2980;
    const double C25778 = C12409 * C23899;
    const double C12410 = C12408 * C2979;
    const double C17239 = C12408 * C28003;
    const double C20121 = C12408 * C28003;
    const double C25777 = C12408 * C28115;
    const double C17248 = C17247 * C28003;
    const double C20123 = C17247 * C28003;
    const double C13697 = C13692 * C92;
    const double C17944 = C13692 * C940;
    const double C13701 = C13693 * C567;
    const double C17948 = C13693 * C2467;
    const double C1611 = C1608 + C1599;
    const double C20857 = C20854 + C20845;
    const double C4858 = C4854 + C4843;
    const double C4856 = C4852 + C4835;
    const double C7857 = C7855 + C7848;
    const double C9141 = C9139 + C9132;
    const double C26488 = C26486 + C26479;
    const double C9718 = C9714 + C9703;
    const double C9716 = C9712 + C9695;
    const double C13200 = C13196 + C13185;
    const double C13198 = C13194 + C13177;
    const double C15228 = C15226 + C15219;
    const double C24326 = C24321 * C92;
    const double C26198 = C24321 * C568;
    const double C24330 = C24322 * C939;
    const double C26202 = C24322 * C2467;
    const double C3499 = C3496 + C3487;
    const double C12873 = C12870 + C12861;
    const double C6555 = C6551 + C6540;
    const double C6553 = C6549 + C6532;
    const double C8143 = C8141 + C8134;
    const double C8789 = C8787 + C8780;
    const double C17679 = C17677 + C17670;
    const double C18676 = C18672 + C18661;
    const double C18674 = C18670 + C18653;
    const double C20574 = C20570 + C20559;
    const double C20572 = C20568 + C20551;
    const double C22658 = C22656 + C22649;
    const double C5143 = C5131 - C5132;
    const double C7069 = C7057 - C7058;
    const double C5144 = C5135 - C5136;
    const double C7070 = C7061 - C7062;
    const double C9994 = C9982 - C9983;
    const double C19190 = C19178 - C19179;
    const double C9995 = C9986 - C9987;
    const double C19191 = C19182 - C19183;
    const double C13994 = C13984 - C13985;
    const double C13992 = C13976 - C13977;
    const double C15572 = C15564 - C15565;
    const double C16192 = C16184 - C16185;
    const double C24854 = C24846 - C24847;
    const double C1935 = C1931 - C1923;
    const double C1933 = C1929 - C1915;
    const double C4063 = C4059 - C4051;
    const double C4061 = C4057 - C4043;
    const double C8221 = C8219 - C8213;
    const double C13708 = C13696 - C13697;
    const double C17955 = C17943 - C17944;
    const double C13709 = C13700 - C13701;
    const double C17956 = C17947 - C17948;
    const double C24337 = C24325 - C24326;
    const double C26209 = C26197 - C26198;
    const double C24338 = C24329 - C24330;
    const double C26210 = C26201 - C26202;
    const double C5146 = C5143 - C5133;
    const double C7072 = C7069 - C7059;
    const double C5147 = C5144 - C5137;
    const double C7073 = C7070 - C7063;
    const double C9997 = C9994 - C9984;
    const double C19193 = C19190 - C19180;
    const double C9998 = C9995 - C9988;
    const double C19194 = C19191 - C19184;
    const double C13998 = C13994 - C13986;
    const double C13996 = C13992 - C13978;
    const double C15574 = C15572 - C15566;
    const double C16194 = C16192 - C16186;
    const double C24856 = C24854 - C24848;
    const double C1939 = C1935 + C1924;
    const double C1937 = C1933 + C1916;
    const double C4067 = C4063 + C4052;
    const double C4065 = C4061 + C4044;
    const double C8223 = C8221 + C8214;
    const double C13711 = C13708 - C13698;
    const double C17958 = C17955 - C17945;
    const double C13712 = C13709 - C13702;
    const double C17959 = C17956 - C17949;
    const double C24340 = C24337 - C24327;
    const double C26212 = C26209 - C26199;
    const double C24341 = C24338 - C24331;
    const double C26213 = C26210 - C26203;
    const double C5149 = C5146 + C5134;
    const double C7075 = C7072 + C7060;
    const double C5150 = C5147 + C5138;
    const double C7076 = C7073 + C7064;
    const double C10000 = C9997 + C9985;
    const double C19196 = C19193 + C19181;
    const double C10001 = C9998 + C9989;
    const double C19197 = C19194 + C19185;
    const double C14002 = C13998 + C13987;
    const double C14000 = C13996 + C13979;
    const double C15576 = C15574 + C15567;
    const double C16196 = C16194 + C16187;
    const double C24858 = C24856 + C24849;
    const double C13714 = C13711 + C13699;
    const double C17961 = C17958 + C17946;
    const double C13715 = C13712 + C13703;
    const double C17962 = C17959 + C17950;
    const double C24343 = C24340 + C24328;
    const double C26215 = C26212 + C26200;
    const double C24344 = C24341 + C24332;
    const double C26216 = C26213 + C26204;
    d2eexx[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C4601 * C96 - C4602 * C91 - C4601 * C97 + C28107 * C106 +
            C4603 * C98 - C4604 * C92 - C4603 * C99 + C28108 * C107 +
            C4605 * C100 - C4606 * C93 - C4605 * C101 + C4598 * C108) *
               C27939 * C28084 +
           (C4601 * C575 - C4602 * C568 - C4601 * C576 + C28107 * C580 +
            C4603 * C573 - C4604 * C567 - C4603 * C574 + C28108 * C579 +
            C4605 * C571 - C4606 * C566 - C4605 * C572 + C4598 * C578) *
               C27939 * C27977) *
              C28119 * C28120 * C81 -
          ((C4605 * C569 - C4606 * C565 - C4605 * C570 + C4598 * C577 +
            C4603 * C571 - C4604 * C566 - C4603 * C572 + C28108 * C578 +
            C4601 * C573 - C4602 * C567 - C4601 * C574 + C28107 * C579) *
               C27939 * C27977 +
           (C4605 * C102 - C4606 * C94 - C4605 * C103 + C4598 * C109 +
            C4603 * C100 - C4604 * C93 - C4603 * C101 + C28108 * C108 +
            C4601 * C98 - C4602 * C92 - C4601 * C99 + C28107 * C107) *
               C27939 * C28084) *
              C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eexy[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C28084 * C146 - C4657 * C91 + C27977 * C615 - C4658 * C568) *
               C4601 +
           (C28084 * C151 - C4657 * C97 + C27977 * C619 - C4658 * C576) *
               C28107 +
           (C4660 - C4661 + C4662 - C4663) * C4603 +
           (C4664 - C4665 + C4666 - C4667) * C28108 +
           (C4668 - C4669 + C4670 - C4671) * C4605 +
           (C4672 - C4673 + C4674 - C4675) * C4598) *
              C27939 * C28119 * C28120 * C81 +
          ((C4661 - C4660 + C4663 - C4662) * C4601 +
           (C4665 - C4664 + C4667 - C4666) * C28107 +
           (C4669 - C4668 + C4671 - C4670) * C4603 +
           (C4673 - C4672 + C4675 - C4674) * C28108 +
           (C4657 * C94 - C28084 * C149 + C4658 * C565 - C27977 * C618) *
               C4605 +
           (C4657 * C103 - C28084 * C154 + C4658 * C570 - C27977 * C622) *
               C4598) *
              C27939 * C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eexz[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C27939 * C203 - C202 * C91) * C4601 +
                     (C27939 * C208 - C202 * C97) * C28107 +
                     (C214 - C215) * C4603 + (C216 - C217) * C28108 +
                     (C218 - C219) * C4605 + (C220 - C221) * C4598) *
                        C28084 +
                    ((C2049 - C2050) * C4601 + (C2051 - C2052) * C28107 +
                     (C1472 - C1473) * C4603 + (C1474 - C1475) * C28108 +
                     (C4726 - C4727) * C4605 + (C4728 - C4729) * C4598) *
                        C27977) *
                       C28119 * C28120 * C81 +
                   (((C215 - C214) * C4601 + (C217 - C216) * C28107 +
                     (C219 - C218) * C4603 + (C221 - C220) * C28108 +
                     (C223 - C222) * C4605 + (C225 - C224) * C4598) *
                        C28084 +
                    ((C1473 - C1472) * C4601 + (C1475 - C1474) * C28107 +
                     (C4727 - C4726) * C4603 + (C4729 - C4728) * C28108 +
                     (C202 * C565 - C27939 * C660) * C4605 +
                     (C202 * C570 - C27939 * C664) * C4598) *
                        C27977) *
                       C28119 * C28120 * C82)) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C28107 * C96 - C4601 * C91 + C28108 * C98 - C4603 * C92 +
                     C4598 * C100 - C4605 * C93) *
                        C4657 +
                    (C28107 * C264 - C4601 * C259 + C28108 * C265 -
                     C4603 * C260 + C4598 * C266 - C4605 * C261) *
                        C28084 +
                    (C28107 * C575 - C4601 * C568 + C28108 * C573 -
                     C4603 * C567 + C4598 * C571 - C4605 * C566) *
                        C4658 +
                    (C28107 * C703 - C4601 * C699 + C28108 * C704 -
                     C4603 * C700 + C4598 * C705 - C4605 * C701) *
                        C27977) *
                       C27939 * C28119 * C28120 * C81 +
                   ((C4601 * C92 - C28107 * C98 + C4603 * C93 - C28108 * C100 +
                     C4605 * C94 - C4598 * C102) *
                        C4657 +
                    (C4601 * C260 - C28107 * C265 + C4603 * C261 -
                     C28108 * C266 + C4605 * C262 - C4598 * C267) *
                        C28084 +
                    (C4601 * C567 - C28107 * C573 + C4603 * C566 -
                     C28108 * C571 + C4605 * C565 - C4598 * C569) *
                        C4658 +
                    (C4601 * C700 - C28107 * C704 + C4603 * C701 -
                     C28108 * C705 + C4605 * C702 - C4598 * C706) *
                        C27977) *
                       C27939 * C28119 * C28120 * C82)) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C4657 * C146 - C4829 * C91 - C4657 * C259 + C28084 * C304 +
            C4658 * C615 - C4830 * C568 - C4658 * C699 + C27977 * C744) *
               C28107 +
           (C4856 + C4857) * C28108 + (C4858 + C4859) * C4598) *
              C27939 * C28119 * C28120 * C81 -
          ((C4658 * C618 - C4830 * C565 - C4658 * C702 + C27977 * C741 +
            C4657 * C149 - C4829 * C94 - C4657 * C262 + C28084 * C307) *
               C4598 +
           (C4859 + C4858) * C28108 + (C4857 + C4856) * C28107) *
              C27939 * C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C27939 * C203 - C202 * C91) * C4657 +
                     (C27939 * C364 - C202 * C259) * C28084 +
                     (C2049 - C2050) * C4658 + (C2231 - C2232) * C27977) *
                        C28107 +
                    ((C214 - C215) * C4657 + (C370 - C371) * C28084 +
                     (C1472 - C1473) * C4658 + (C1666 - C1667) * C27977) *
                        C28108 +
                    ((C218 - C219) * C4657 + (C372 - C373) * C28084 +
                     (C4726 - C4727) * C4658 + (C4910 - C4911) * C27977) *
                        C4598) *
                       C28119 * C28120 * C81 +
                   (((C215 - C214) * C4657 + (C371 - C370) * C28084 +
                     (C1473 - C1472) * C4658 + (C1667 - C1666) * C27977) *
                        C28107 +
                    ((C219 - C218) * C4657 + (C373 - C372) * C28084 +
                     (C4727 - C4726) * C4658 + (C4911 - C4910) * C27977) *
                        C28108 +
                    ((C223 - C222) * C4657 + (C375 - C374) * C28084 +
                     (C202 * C565 - C27939 * C660) * C4658 +
                     (C202 * C702 - C27939 * C782) * C27977) *
                        C4598) *
                       C28119 * C28120 * C82)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C28107 * C96 - C4601 * C91 + C28108 * C98 - C4603 * C92 +
                      C4598 * C100 - C4605 * C93) *
                         C202 +
                     (C28107 * C414 - C4601 * C409 + C28108 * C415 -
                      C4603 * C410 + C4598 * C416 - C4605 * C411) *
                         C27939) *
                        C28084 +
                    ((C28107 * C575 - C4601 * C568 + C28108 * C573 -
                      C4603 * C567 + C4598 * C571 - C4605 * C566) *
                         C202 +
                     (C28107 * C821 - C4601 * C817 + C28108 * C822 -
                      C4603 * C818 + C4598 * C823 - C4605 * C819) *
                         C27939) *
                        C27977) *
                       C28119 * C28120 * C81 +
                   (((C4601 * C92 - C28107 * C98 + C4603 * C93 - C28108 * C100 +
                      C4605 * C94 - C4598 * C102) *
                         C202 +
                     (C4601 * C410 - C28107 * C415 + C4603 * C411 -
                      C28108 * C416 + C4605 * C412 - C4598 * C417) *
                         C27939) *
                        C28084 +
                    ((C4601 * C567 - C28107 * C573 + C4603 * C566 -
                      C28108 * C571 + C4605 * C565 - C4598 * C569) *
                         C202 +
                     (C4601 * C818 - C28107 * C822 + C4603 * C819 -
                      C28108 * C823 + C4605 * C820 - C4598 * C824) *
                         C27939) *
                        C27977) *
                       C28119 * C28120 * C82)) /
                 (p * q * std::sqrt(p + q));
    d2eezy[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28084 * C146 - C4657 * C91 + C27977 * C615 - C4658 * C568) *
                C202 +
            (C28084 * C453 - C4657 * C409 + C27977 * C859 - C4658 * C817) *
                C27939) *
               C28107 +
           ((C4660 - C4661 + C4662 - C4663) * C202 +
            (C5012 - C5013 + C5014 - C5015) * C27939) *
               C28108 +
           ((C4668 - C4669 + C4670 - C4671) * C202 +
            (C5016 - C5017 + C5018 - C5019) * C27939) *
               C4598) *
              C28119 * C28120 * C81 +
          (((C4661 - C4660 + C4663 - C4662) * C202 +
            (C5013 - C5012 + C5015 - C5014) * C27939) *
               C28107 +
           ((C4669 - C4668 + C4671 - C4670) * C202 +
            (C5017 - C5016 + C5019 - C5018) * C27939) *
               C28108 +
           ((C4657 * C94 - C28084 * C149 + C4658 * C565 - C27977 * C618) *
                C202 +
            (C4657 * C412 - C28084 * C456 + C4658 * C820 - C27977 * C862) *
                C27939) *
               C4598) *
              C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eezz[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C202 * C203 - C498 * C91 - C202 * C409 + C27939 * C499) * C28084 +
            C2413 * C27977) *
               C28107 +
           (C5070 + C5071) * C28108 + (C5072 + C5080) * C4598) *
              C28119 * C28120 * C81 -
          (((C202 * C660 - C498 * C565 - C202 * C820 + C27939 * C897) * C27977 +
            C525 * C28084) *
               C4598 +
           (C5080 + C5072) * C28108 + (C5071 + C5070) * C28107) *
              C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eexx[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C4601 * C96 - C4602 * C91 - C4601 * C97 + C28107 * C106 +
            C4603 * C98 - C4604 * C92 - C4603 * C99 + C28108 * C107 +
            C4605 * C100 - C4606 * C93 - C4605 * C101 + C4598 * C108) *
               C27939 * C28084 +
           (C5149 + C5150 + C5151) * C27939 * C27977) *
              C28119 * C562 -
          ((C4605 * C1339 - C4606 * C1334 - C4605 * C1340 + C4598 * C1343 +
            C4603 * C1337 - C4604 * C1333 - C4603 * C1338 + C28108 * C1342 +
            C4601 * C1335 - C4602 * C1332 - C4601 * C1336 + C28107 * C1341) *
               C27939 * C27977 +
           (C5151 + C5150 + C5149) * C27939 * C28084) *
              C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eexy[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C28084 * C146 - C4657 * C91 + C27977 * C615 - C4658 * C568) *
               C4601 +
           (C28084 * C151 - C4657 * C97 + C27977 * C619 - C4658 * C576) *
               C28107 +
           (C4660 - C4661 + C4662 - C4663) * C4603 +
           (C4664 - C4665 + C4666 - C4667) * C28108 +
           (C4668 - C4669 + C4670 - C4671) * C4605 +
           (C4672 - C4673 + C4674 - C4675) * C4598) *
              C27939 * C28119 * C562 +
          ((C4657 * C568 - C28084 * C615 + C4658 * C1332 - C27977 * C1397) *
               C4601 +
           (C4657 * C576 - C28084 * C619 + C4658 * C1336 - C27977 * C1400) *
               C28107 +
           (C4657 * C567 - C28084 * C616 + C4658 * C1333 - C27977 * C1398) *
               C4603 +
           (C4657 * C574 - C28084 * C620 + C4658 * C1338 - C27977 * C1401) *
               C28108 +
           (C4657 * C566 - C28084 * C617 + C4658 * C1334 - C27977 * C1399) *
               C4605 +
           (C4657 * C572 - C28084 * C621 + C4658 * C1340 - C27977 * C1402) *
               C4598) *
              C27939 * C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eexz[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C27939 * C203 - C202 * C91) * C4601 +
                     (C27939 * C208 - C202 * C97) * C28107 +
                     (C214 - C215) * C4603 + (C216 - C217) * C28108 +
                     (C218 - C219) * C4605 + (C220 - C221) * C4598) *
                        C28084 +
                    ((C2049 - C2050) * C4601 + (C2051 - C2052) * C28107 +
                     (C1472 - C1473) * C4603 + (C1474 - C1475) * C28108 +
                     (C4726 - C4727) * C4605 + (C4728 - C4729) * C4598) *
                        C27977) *
                       C28119 * C562 +
                   (((C2050 - C2049) * C4601 + (C2052 - C2051) * C28107 +
                     (C1473 - C1472) * C4603 + (C1475 - C1474) * C28108 +
                     (C4727 - C4726) * C4605 + (C4729 - C4728) * C4598) *
                        C28084 +
                    ((C2054 - C2053) * C4601 + (C2056 - C2055) * C28107 +
                     (C1477 - C1476) * C4603 + (C1479 - C1478) * C28108 +
                     (C202 * C1334 - C27939 * C1467) * C4605 +
                     (C202 * C1340 - C27939 * C1470) * C4598) *
                        C27977) *
                       C28119 * C563) *
                  C28121) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C28107 * C96 - C4601 * C91 + C28108 * C98 - C4603 * C92 +
                     C4598 * C100 - C4605 * C93) *
                        C4657 +
                    (C28107 * C264 - C4601 * C259 + C28108 * C265 -
                     C4603 * C260 + C4598 * C266 - C4605 * C261) *
                        C28084 +
                    (C5302 - C5303 + C5304 - C5305 + C5306 - C5307) * C4658 +
                    (C5308 - C5309 + C5310 - C5311 + C5312 - C5313) * C27977) *
                       C27939 * C28119 * C562 +
                   ((C5303 - C5302 + C5305 - C5304 + C5307 - C5306) * C4657 +
                    (C5309 - C5308 + C5311 - C5310 + C5313 - C5312) * C28084 +
                    (C4601 * C1332 - C28107 * C1335 + C4603 * C1333 -
                     C28108 * C1337 + C4605 * C1334 - C4598 * C1339) *
                        C4658 +
                    (C4601 * C1529 - C28107 * C1532 + C4603 * C1530 -
                     C28108 * C1533 + C4605 * C1531 - C4598 * C1534) *
                        C27977) *
                       C27939 * C28119 * C563) *
                  C28121) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C4657 * C146 - C4829 * C91 - C4657 * C259 + C28084 * C304 +
            C4658 * C615 - C4830 * C568 - C4658 * C699 + C27977 * C744) *
               C28107 +
           (C4856 + C4857) * C28108 + (C4858 + C4859) * C4598) *
              C27939 * C28119 * C562 -
          ((C4658 * C1399 - C4830 * C1334 - C4658 * C1531 + C27977 * C1590 +
            C4657 * C617 - C4829 * C566 - C4657 * C701 + C28084 * C742) *
               C4598 +
           (C4658 * C1398 - C4830 * C1333 - C4658 * C1530 + C27977 * C1589 +
            C4657 * C616 - C4829 * C567 - C4657 * C700 + C28084 * C743) *
               C28108 +
           (C4658 * C1397 - C4830 * C1332 - C4658 * C1529 + C27977 * C1588 +
            C4657 * C615 - C4829 * C568 - C4657 * C699 + C28084 * C744) *
               C28107) *
              C27939 * C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eeyz[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C27939 * C203 - C202 * C91) * C4657 +
                     (C27939 * C364 - C202 * C259) * C28084 +
                     (C2049 - C2050) * C4658 + (C2231 - C2232) * C27977) *
                        C28107 +
                    ((C214 - C215) * C4657 + (C370 - C371) * C28084 +
                     (C1472 - C1473) * C4658 + (C1666 - C1667) * C27977) *
                        C28108 +
                    ((C218 - C219) * C4657 + (C372 - C373) * C28084 +
                     (C4726 - C4727) * C4658 + (C4910 - C4911) * C27977) *
                        C4598) *
                       C28119 * C562 +
                   (((C2050 - C2049) * C4657 + (C2232 - C2231) * C28084 +
                     (C2054 - C2053) * C4658 + (C2234 - C2233) * C27977) *
                        C28107 +
                    ((C1473 - C1472) * C4657 + (C1667 - C1666) * C28084 +
                     (C1477 - C1476) * C4658 + (C1669 - C1668) * C27977) *
                        C28108 +
                    ((C4727 - C4726) * C4657 + (C4911 - C4910) * C28084 +
                     (C202 * C1334 - C27939 * C1467) * C4658 +
                     (C202 * C1531 - C27939 * C1664) * C27977) *
                        C4598) *
                       C28119 * C563) *
                  C28121) /
                 (p * q * std::sqrt(p + q));
    d2eezx[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C28107 * C96 - C4601 * C91 + C28108 * C98 - C4603 * C92 +
                      C4598 * C100 - C4605 * C93) *
                         C202 +
                     (C28107 * C414 - C4601 * C409 + C28108 * C415 -
                      C4603 * C410 + C4598 * C416 - C4605 * C411) *
                         C27939) *
                        C28084 +
                    ((C5302 - C5303 + C5304 - C5305 + C5306 - C5307) * C202 +
                     (C5464 - C5465 + C5466 - C5467 + C5468 - C5469) * C27939) *
                        C27977) *
                       C28119 * C562 +
                   (((C5303 - C5302 + C5305 - C5304 + C5307 - C5306) * C202 +
                     (C5465 - C5464 + C5467 - C5466 + C5469 - C5468) * C27939) *
                        C28084 +
                    ((C4601 * C1332 - C28107 * C1335 + C4603 * C1333 -
                      C28108 * C1337 + C4605 * C1334 - C4598 * C1339) *
                         C202 +
                     (C4601 * C1719 - C28107 * C1722 + C4603 * C1720 -
                      C28108 * C1723 + C4605 * C1721 - C4598 * C1724) *
                         C27939) *
                        C27977) *
                       C28119 * C563) *
                  C28121) /
                 (p * q * std::sqrt(p + q));
    d2eezy[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28084 * C146 - C4657 * C91 + C27977 * C615 - C4658 * C568) *
                C202 +
            (C28084 * C453 - C4657 * C409 + C27977 * C859 - C4658 * C817) *
                C27939) *
               C28107 +
           ((C4660 - C4661 + C4662 - C4663) * C202 +
            (C5012 - C5013 + C5014 - C5015) * C27939) *
               C28108 +
           ((C4668 - C4669 + C4670 - C4671) * C202 +
            (C5016 - C5017 + C5018 - C5019) * C27939) *
               C4598) *
              C28119 * C562 +
          (((C4657 * C568 - C28084 * C615 + C4658 * C1332 - C27977 * C1397) *
                C202 +
            (C4657 * C817 - C28084 * C859 + C4658 * C1719 - C27977 * C1775) *
                C27939) *
               C28107 +
           ((C4657 * C567 - C28084 * C616 + C4658 * C1333 - C27977 * C1398) *
                C202 +
            (C4657 * C818 - C28084 * C860 + C4658 * C1720 - C27977 * C1776) *
                C27939) *
               C28108 +
           ((C4657 * C566 - C28084 * C617 + C4658 * C1334 - C27977 * C1399) *
                C202 +
            (C4657 * C819 - C28084 * C861 + C4658 * C1721 - C27977 * C1777) *
                C27939) *
               C4598) *
              C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eezz[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C202 * C203 - C498 * C91 - C202 * C409 + C27939 * C499) * C28084 +
            C2413 * C27977) *
               C28107 +
           (C5070 + C5071) * C28108 + (C5072 + C5080) * C4598) *
              C28119 * C562 -
          (((C202 * C1467 - C498 * C1334 - C202 * C1721 + C27939 * C1836) *
                C27977 +
            C5079 * C28084) *
               C4598 +
           (C1852 * C27977 + C1851 * C28084) * C28108 +
           (C2414 * C27977 + C2413 * C28084) * C28107) *
              C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eexx[2] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C4601 * C96 - C4602 * C91 - C4601 * C97 + C28107 * C106 +
            C4603 * C98 - C4604 * C92 - C4603 * C99 + C28108 * C107 +
            C4605 * C100 - C4606 * C93 - C4605 * C101 + C4598 * C108) *
               C27939 * C28084 +
           (C5149 + C5150 + C5151) * C27939 * C27977) *
              C935 -
          ((C4605 * C5620 - C4606 * C5619 - C4605 * C5621 + C4598 * C5622 +
            C4603 * C2472 - C4604 * C2466 - C4603 * C2473 + C28108 * C2478 +
            C4601 * C2474 - C4602 * C2467 - C4601 * C2475 + C28107 * C2479) *
               C27939 * C27977 +
           (C4605 * C943 - C4606 * C938 - C4605 * C944 + C4598 * C950 +
            C4603 * C945 - C4604 * C939 - C4603 * C946 + C28108 * C951 +
            C4601 * C947 - C4602 * C940 - C4601 * C948 + C28107 * C952) *
               C27939 * C28084) *
              C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eexy[2] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C28084 * C146 - C4657 * C91 + C27977 * C615 - C4658 * C568) *
               C4601 +
           (C28084 * C151 - C4657 * C97 + C27977 * C619 - C4658 * C576) *
               C28107 +
           (C4660 - C4661 + C4662 - C4663) * C4603 +
           (C4664 - C4665 + C4666 - C4667) * C28108 +
           (C4668 - C4669 + C4670 - C4671) * C4605 +
           (C4672 - C4673 + C4674 - C4675) * C4598) *
              C27939 * C935 +
          ((C4657 * C940 - C28084 * C987 + C4658 * C2467 - C27977 * C2530) *
               C4601 +
           (C4657 * C948 - C28084 * C991 + C4658 * C2475 - C27977 * C2534) *
               C28107 +
           (C4657 * C939 - C28084 * C988 + C4658 * C2466 - C27977 * C2532) *
               C4603 +
           (C4657 * C946 - C28084 * C992 + C4658 * C2473 - C27977 * C2536) *
               C28108 +
           (C4657 * C938 - C28084 * C989 + C4658 * C5619 - C27977 * C5673) *
               C4605 +
           (C4657 * C944 - C28084 * C993 + C4658 * C5621 - C27977 * C5674) *
               C4598) *
              C27939 * C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eexz[2] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C27939 * C203 - C202 * C91) * C4601 +
                     (C27939 * C208 - C202 * C97) * C28107 +
                     (C214 - C215) * C4603 + (C216 - C217) * C28108 +
                     (C218 - C219) * C4605 + (C220 - C221) * C4598) *
                        C28084 +
                    ((C2049 - C2050) * C4601 + (C2051 - C2052) * C28107 +
                     (C1472 - C1473) * C4603 + (C1474 - C1475) * C28108 +
                     (C4726 - C4727) * C4605 + (C4728 - C4729) * C4598) *
                        C27977) *
                       C935 +
                   (((C202 * C940 - C27939 * C1029) * C4601 +
                     (C202 * C948 - C27939 * C1033) * C28107 +
                     (C202 * C939 - C27939 * C1030) * C4603 +
                     (C202 * C946 - C27939 * C1034) * C28108 +
                     (C202 * C938 - C27939 * C1031) * C4605 +
                     (C202 * C944 - C27939 * C1035) * C4598) *
                        C28084 +
                    ((C202 * C2467 - C27939 * C2588) * C4601 +
                     (C202 * C2475 - C27939 * C2592) * C28107 +
                     (C202 * C2466 - C27939 * C2589) * C4603 +
                     (C202 * C2473 - C27939 * C2593) * C28108 +
                     (C202 * C5619 - C27939 * C5725) * C4605 +
                     (C202 * C5621 - C27939 * C5726) * C4598) *
                        C27977) *
                       C936) *
                  C28120 * C28121) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[2] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C28107 * C96 - C4601 * C91 + C28108 * C98 - C4603 * C92 +
                     C4598 * C100 - C4605 * C93) *
                        C4657 +
                    (C28107 * C264 - C4601 * C259 + C28108 * C265 -
                     C4603 * C260 + C4598 * C266 - C4605 * C261) *
                        C28084 +
                    (C5302 - C5303 + C5304 - C5305 + C5306 - C5307) * C4658 +
                    (C5308 - C5309 + C5310 - C5311 + C5312 - C5313) * C27977) *
                       C27939 * C935 +
                   ((C4601 * C940 - C28107 * C947 + C4603 * C939 -
                     C28108 * C945 + C4605 * C938 - C4598 * C943) *
                        C4657 +
                    (C4601 * C1071 - C28107 * C1075 + C4603 * C1072 -
                     C28108 * C1076 + C4605 * C1073 - C4598 * C1077) *
                        C28084 +
                    (C4601 * C2467 - C28107 * C2474 + C4603 * C2466 -
                     C28108 * C2472 + C4605 * C5619 - C4598 * C5620) *
                        C4658 +
                    (C4601 * C2646 - C28107 * C2650 + C4603 * C2647 -
                     C28108 * C2651 + C4605 * C5777 - C4598 * C5778) *
                        C27977) *
                       C27939 * C936) *
                  C28120 * C28121) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[2] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C4657 * C146 - C4829 * C91 - C4657 * C259 + C28084 * C304 +
            C4658 * C615 - C4830 * C568 - C4658 * C699 + C27977 * C744) *
               C28107 +
           (C4856 + C4857) * C28108 + (C4858 + C4859) * C4598) *
              C27939 * C935 -
          ((C4658 * C5673 - C4830 * C5619 - C4658 * C5777 + C27977 * C5829 +
            C4657 * C989 - C4829 * C938 - C4657 * C1073 + C28084 * C1114) *
               C4598 +
           (C4658 * C2532 - C4830 * C2466 - C4658 * C2647 + C27977 * C2705 +
            C4657 * C988 - C4829 * C939 - C4657 * C1072 + C28084 * C1115) *
               C28108 +
           (C4658 * C2530 - C4830 * C2467 - C4658 * C2646 + C27977 * C2707 +
            C4657 * C987 - C4829 * C940 - C4657 * C1071 + C28084 * C1116) *
               C28107) *
              C27939 * C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eeyz[2] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C27939 * C203 - C202 * C91) * C4657 +
                     (C27939 * C364 - C202 * C259) * C28084 +
                     (C2049 - C2050) * C4658 + (C2231 - C2232) * C27977) *
                        C28107 +
                    ((C214 - C215) * C4657 + (C370 - C371) * C28084 +
                     (C1472 - C1473) * C4658 + (C1666 - C1667) * C27977) *
                        C28108 +
                    ((C218 - C219) * C4657 + (C372 - C373) * C28084 +
                     (C4726 - C4727) * C4658 + (C4910 - C4911) * C27977) *
                        C4598) *
                       C935 +
                   (((C202 * C940 - C27939 * C1029) * C4657 +
                     (C202 * C1071 - C27939 * C1151) * C28084 +
                     (C202 * C2467 - C27939 * C2588) * C4658 +
                     (C202 * C2646 - C27939 * C2758) * C27977) *
                        C28107 +
                    ((C202 * C939 - C27939 * C1030) * C4657 +
                     (C202 * C1072 - C27939 * C1152) * C28084 +
                     (C202 * C2466 - C27939 * C2589) * C4658 +
                     (C202 * C2647 - C27939 * C2760) * C27977) *
                        C28108 +
                    ((C202 * C938 - C27939 * C1031) * C4657 +
                     (C202 * C1073 - C27939 * C1153) * C28084 +
                     (C202 * C5619 - C27939 * C5725) * C4658 +
                     (C202 * C5777 - C27939 * C5880) * C27977) *
                        C4598) *
                       C936) *
                  C28120 * C28121) /
                 (p * q * std::sqrt(p + q));
    d2eezx[2] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C28107 * C96 - C4601 * C91 + C28108 * C98 - C4603 * C92 +
                      C4598 * C100 - C4605 * C93) *
                         C202 +
                     (C28107 * C414 - C4601 * C409 + C28108 * C415 -
                      C4603 * C410 + C4598 * C416 - C4605 * C411) *
                         C27939) *
                        C28084 +
                    ((C5302 - C5303 + C5304 - C5305 + C5306 - C5307) * C202 +
                     (C5464 - C5465 + C5466 - C5467 + C5468 - C5469) * C27939) *
                        C27977) *
                       C935 +
                   (((C4601 * C940 - C28107 * C947 + C4603 * C939 -
                      C28108 * C945 + C4605 * C938 - C4598 * C943) *
                         C202 +
                     (C4601 * C1189 - C28107 * C1193 + C4603 * C1190 -
                      C28108 * C1194 + C4605 * C1191 - C4598 * C1195) *
                         C27939) *
                        C28084 +
                    ((C4601 * C2467 - C28107 * C2474 + C4603 * C2466 -
                      C28108 * C2472 + C4605 * C5619 - C4598 * C5620) *
                         C202 +
                     (C4601 * C2812 - C28107 * C2816 + C4603 * C2813 -
                      C28108 * C2817 + C4605 * C5931 - C4598 * C5932) *
                         C27939) *
                        C27977) *
                       C936) *
                  C28120 * C28121) /
                 (p * q * std::sqrt(p + q));
    d2eezy[2] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28084 * C146 - C4657 * C91 + C27977 * C615 - C4658 * C568) *
                C202 +
            (C28084 * C453 - C4657 * C409 + C27977 * C859 - C4658 * C817) *
                C27939) *
               C28107 +
           ((C4660 - C4661 + C4662 - C4663) * C202 +
            (C5012 - C5013 + C5014 - C5015) * C27939) *
               C28108 +
           ((C4668 - C4669 + C4670 - C4671) * C202 +
            (C5016 - C5017 + C5018 - C5019) * C27939) *
               C4598) *
              C935 +
          (((C4657 * C940 - C28084 * C987 + C4658 * C2467 - C27977 * C2530) *
                C202 +
            (C4657 * C1189 - C28084 * C1231 + C4658 * C2812 - C27977 * C2870) *
                C27939) *
               C28107 +
           ((C4657 * C939 - C28084 * C988 + C4658 * C2466 - C27977 * C2532) *
                C202 +
            (C4657 * C1190 - C28084 * C1232 + C4658 * C2813 - C27977 * C2872) *
                C27939) *
               C28108 +
           ((C4657 * C938 - C28084 * C989 + C4658 * C5619 - C27977 * C5673) *
                C202 +
            (C4657 * C1191 - C28084 * C1233 + C4658 * C5931 - C27977 * C5983) *
                C27939) *
               C4598) *
              C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eezz[2] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C202 * C203 - C498 * C91 - C202 * C409 + C27939 * C499) * C28084 +
            C2413 * C27977) *
               C28107 +
           (C5070 + C5071) * C28108 + (C5072 + C5080) * C4598) *
              C935 -
          (((C202 * C5725 - C498 * C5619 - C202 * C5931 + C27939 * C6034) *
                C27977 +
            (C202 * C1031 - C498 * C938 - C202 * C1191 + C27939 * C1270) *
                C28084) *
               C4598 +
           ((C202 * C2589 - C498 * C2466 - C202 * C2813 + C27939 * C2925) *
                C27977 +
            (C202 * C1030 - C498 * C939 - C202 * C1190 + C27939 * C1271) *
                C28084) *
               C28108 +
           ((C202 * C2588 - C498 * C2467 - C202 * C2812 + C27939 * C2927) *
                C27977 +
            (C202 * C1029 - C498 * C940 - C202 * C1189 + C27939 * C1272) *
                C28084) *
               C28107) *
              C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eexx[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C1328 * C96 - C1329 * C91 - C1328 * C97 + C1323 * C106 +
             C1330 * C98 - C1331 * C92 - C1330 * C99 + C27887 * C107) *
                C28085 +
            (C4065 + C4066) * C28003) *
               C28084 +
           ((C1937 + C1938) * C28085 +
            (C1328 * C2474 - C1329 * C2467 - C1328 * C2475 + C1323 * C2479 +
             C1330 * C2472 - C1331 * C2466 - C1330 * C2473 + C27887 * C2478) *
                C28003) *
               C27977) *
              C28119 * C28120 * C81 -
          (((C1330 * C5620 - C1331 * C5619 - C1330 * C5621 + C27887 * C5622 +
             C1328 * C2472 - C1329 * C2466 - C1328 * C2473 + C1323 * C2478) *
                C28003 +
            (C1330 * C571 - C1331 * C566 - C1330 * C572 + C27887 * C578 +
             C1328 * C573 - C1329 * C567 - C1328 * C574 + C1323 * C579) *
                C28085) *
               C27977 +
           ((C1330 * C943 - C1331 * C938 - C1330 * C944 + C27887 * C950 +
             C1328 * C945 - C1329 * C939 - C1328 * C946 + C1323 * C951) *
                C28003 +
            (C1330 * C100 - C1331 * C93 - C1330 * C101 + C27887 * C108 +
             C1328 * C98 - C1329 * C92 - C1328 * C99 + C1323 * C107) *
                C28085) *
               C28084) *
              C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eexy[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28084 * C146 - C4657 * C91 + C27977 * C615 - C4658 * C568) *
                C1328 +
            (C28084 * C151 - C4657 * C97 + C27977 * C619 - C4658 * C576) *
                C1323 +
            (C4660 - C4661 + C4662 - C4663) * C1330 +
            (C4664 - C4665 + C4666 - C4667) * C27887) *
               C28085 +
           ((C28084 * C987 - C4657 * C940 + C27977 * C2530 - C4658 * C2467) *
                C1328 +
            (C28084 * C991 - C4657 * C948 + C27977 * C2534 - C4658 * C2475) *
                C1323 +
            (C7631 - C7632 + C7633 - C7634) * C1330 +
            (C7635 - C7636 + C7637 - C7638) * C27887) *
               C28003) *
              C28119 * C28120 * C81 +
          (((C4661 - C4660 + C4663 - C4662) * C1328 +
            (C4665 - C4664 + C4667 - C4666) * C1323 +
            (C4669 - C4668 + C4671 - C4670) * C1330 +
            (C4673 - C4672 + C4675 - C4674) * C27887) *
               C28085 +
           ((C7632 - C7631 + C7634 - C7633) * C1328 +
            (C7636 - C7635 + C7638 - C7637) * C1323 +
            (C4657 * C938 - C28084 * C989 + C4658 * C5619 - C27977 * C5673) *
                C1330 +
            (C4657 * C944 - C28084 * C993 + C4658 * C5621 - C27977 * C5674) *
                C27887) *
               C28003) *
              C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eexz[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28085 * C203 - C6191 * C91 + C28003 * C1029 - C6192 * C940) *
                C1328 +
            (C28085 * C208 - C6191 * C97 + C28003 * C1033 - C6192 * C948) *
                C1323 +
            (C6194 - C6195 + C6196 - C6197) * C1330 +
            (C6198 - C6199 + C6200 - C6201) * C27887) *
               C28084 +
           ((C28085 * C657 - C6191 * C568 + C28003 * C2588 - C6192 * C2467) *
                C1328 +
            (C28085 * C661 - C6191 * C576 + C28003 * C2592 - C6192 * C2475) *
                C1323 +
            (C7705 - C7706 + C7707 - C7708) * C1330 +
            (C7709 - C7710 + C7711 - C7712) * C27887) *
               C27977) *
              C28119 * C28120 * C81 +
          (((C6195 - C6194 + C6197 - C6196) * C1328 +
            (C6199 - C6198 + C6201 - C6200) * C1323 +
            (C6203 - C6202 + C6205 - C6204) * C1330 +
            (C6207 - C6206 + C6209 - C6208) * C27887) *
               C28084 +
           ((C7706 - C7705 + C7708 - C7707) * C1328 +
            (C7710 - C7709 + C7712 - C7711) * C1323 +
            (C6191 * C566 - C28085 * C659 + C6192 * C5619 - C28003 * C5725) *
                C1330 +
            (C6191 * C572 - C28085 * C663 + C6192 * C5621 - C28003 * C5726) *
                C27887) *
               C27977) *
              C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C1323 * C96 - C1328 * C91 + C27887 * C98 - C1330 * C92) * C4657 +
            (C1323 * C264 - C1328 * C259 + C27887 * C265 - C1330 * C260) *
                C28084 +
            (C2111 - C2112 + C2113 - C2114) * C4658 +
            (C2115 - C2116 + C2117 - C2118) * C27977) *
               C28085 +
           ((C4239 - C4240 + C4241 - C4242) * C4657 +
            (C4243 - C4244 + C4245 - C4246) * C28084 +
            (C1323 * C2474 - C1328 * C2467 + C27887 * C2472 - C1330 * C2466) *
                C4658 +
            (C1323 * C2650 - C1328 * C2646 + C27887 * C2651 - C1330 * C2647) *
                C27977) *
               C28003) *
              C28119 * C28120 * C81 +
          (((C1328 * C92 - C1323 * C98 + C1330 * C93 - C27887 * C100) * C4657 +
            (C1328 * C260 - C1323 * C265 + C1330 * C261 - C27887 * C266) *
                C28084 +
            (C1328 * C567 - C1323 * C573 + C1330 * C566 - C27887 * C571) *
                C4658 +
            (C1328 * C700 - C1323 * C704 + C1330 * C701 - C27887 * C705) *
                C27977) *
               C28085 +
           ((C1328 * C939 - C1323 * C945 + C1330 * C938 - C27887 * C943) *
                C4657 +
            (C1328 * C1072 - C1323 * C1076 + C1330 * C1073 - C27887 * C1077) *
                C28084 +
            (C1328 * C2466 - C1323 * C2472 + C1330 * C5619 - C27887 * C5620) *
                C4658 +
            (C1328 * C2647 - C1323 * C2651 + C1330 * C5777 - C27887 * C5778) *
                C27977) *
               C28003) *
              C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4657 * C146 - C4829 * C91 - C4657 * C259 + C28084 * C304 +
             C4658 * C615 - C4830 * C568 - C4658 * C699 + C27977 * C744) *
                C1323 +
            (C4856 + C4857) * C27887) *
               C28085 +
           ((C4657 * C987 - C4829 * C940 - C4657 * C1071 + C28084 * C1116 +
             C4658 * C2530 - C4830 * C2467 - C4658 * C2646 + C27977 * C2707) *
                C1323 +
            (C7857 + C7858) * C27887) *
               C28003) *
              C28119 * C28120 * C81 -
          (((C4658 * C5673 - C4830 * C5619 - C4658 * C5777 + C27977 * C5829 +
             C4657 * C989 - C4829 * C938 - C4657 * C1073 + C28084 * C1114) *
                C27887 +
            (C7858 + C7857) * C1323) *
               C28003 +
           ((C4859 + C4858) * C27887 + (C4857 + C4856) * C1323) * C28085) *
              C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28085 * C203 - C6191 * C91 + C28003 * C1029 - C6192 * C940) *
                C4657 +
            (C28085 * C364 - C6191 * C259 + C28003 * C1151 - C6192 * C1071) *
                C28084 +
            (C28085 * C657 - C6191 * C568 + C28003 * C2588 - C6192 * C2467) *
                C4658 +
            (C28085 * C779 - C6191 * C699 + C28003 * C2758 - C6192 * C2646) *
                C27977) *
               C1323 +
           ((C6194 - C6195 + C6196 - C6197) * C4657 +
            (C6367 - C6368 + C6369 - C6370) * C28084 +
            (C7705 - C7706 + C7707 - C7708) * C4658 +
            (C7925 - C7926 + C7927 - C7928) * C27977) *
               C27887) *
              C28119 * C28120 * C81 +
          (((C6195 - C6194 + C6197 - C6196) * C4657 +
            (C6368 - C6367 + C6370 - C6369) * C28084 +
            (C7706 - C7705 + C7708 - C7707) * C4658 +
            (C7926 - C7925 + C7928 - C7927) * C27977) *
               C1323 +
           ((C6203 - C6202 + C6205 - C6204) * C4657 +
            (C6372 - C6371 + C6374 - C6373) * C28084 +
            (C6191 * C566 - C28085 * C659 + C6192 * C5619 - C28003 * C5725) *
                C4658 +
            (C6191 * C701 - C28085 * C781 + C6192 * C5777 - C28003 * C5880) *
                C27977) *
               C27887) *
              C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eezx[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C1323 * C96 - C1328 * C91 + C27887 * C98 - C1330 * C92) * C6191 +
            (C1323 * C414 - C1328 * C409 + C27887 * C415 - C1330 * C410) *
                C28085 +
            (C4239 - C4240 + C4241 - C4242) * C6192 +
            (C4431 - C4432 + C4433 - C4434) * C28003) *
               C28084 +
           ((C2111 - C2112 + C2113 - C2114) * C6191 +
            (C2289 - C2290 + C2291 - C2292) * C28085 +
            (C1323 * C2474 - C1328 * C2467 + C27887 * C2472 - C1330 * C2466) *
                C6192 +
            (C1323 * C2816 - C1328 * C2812 + C27887 * C2817 - C1330 * C2813) *
                C28003) *
               C27977) *
              C28119 * C28120 * C81 +
          (((C1328 * C92 - C1323 * C98 + C1330 * C93 - C27887 * C100) * C6191 +
            (C1328 * C410 - C1323 * C415 + C1330 * C411 - C27887 * C416) *
                C28085 +
            (C1328 * C939 - C1323 * C945 + C1330 * C938 - C27887 * C943) *
                C6192 +
            (C1328 * C1190 - C1323 * C1194 + C1330 * C1191 - C27887 * C1195) *
                C28003) *
               C28084 +
           ((C1328 * C567 - C1323 * C573 + C1330 * C566 - C27887 * C571) *
                C6191 +
            (C1328 * C818 - C1323 * C822 + C1330 * C819 - C27887 * C823) *
                C28085 +
            (C1328 * C2466 - C1323 * C2472 + C1330 * C5619 - C27887 * C5620) *
                C6192 +
            (C1328 * C2813 - C1323 * C2817 + C1330 * C5931 - C27887 * C5932) *
                C28003) *
               C27977) *
              C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eezy[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28084 * C146 - C4657 * C91 + C27977 * C615 - C4658 * C568) *
                C6191 +
            (C28084 * C453 - C4657 * C409 + C27977 * C859 - C4658 * C817) *
                C28085 +
            (C28084 * C987 - C4657 * C940 + C27977 * C2530 - C4658 * C2467) *
                C6192 +
            (C28084 * C1231 - C4657 * C1189 + C27977 * C2870 - C4658 * C2812) *
                C28003) *
               C1323 +
           ((C4660 - C4661 + C4662 - C4663) * C6191 +
            (C5012 - C5013 + C5014 - C5015) * C28085 +
            (C7631 - C7632 + C7633 - C7634) * C6192 +
            (C8061 - C8062 + C8063 - C8064) * C28003) *
               C27887) *
              C28119 * C28120 * C81 +
          (((C4661 - C4660 + C4663 - C4662) * C6191 +
            (C5013 - C5012 + C5015 - C5014) * C28085 +
            (C7632 - C7631 + C7634 - C7633) * C6192 +
            (C8062 - C8061 + C8064 - C8063) * C28003) *
               C1323 +
           ((C4669 - C4668 + C4671 - C4670) * C6191 +
            (C5017 - C5016 + C5019 - C5018) * C28085 +
            (C4657 * C938 - C28084 * C989 + C4658 * C5619 - C27977 * C5673) *
                C6192 +
            (C4657 * C1191 - C28084 * C1233 + C4658 * C5931 - C27977 * C5983) *
                C28003) *
               C27887) *
              C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eezz[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6191 * C203 - C6526 * C91 - C6191 * C409 + C28085 * C499 +
             C6192 * C1029 - C6527 * C940 - C6192 * C1189 + C28003 * C1272) *
                C28084 +
            (C6191 * C657 - C6526 * C568 - C6191 * C817 + C28085 * C900 +
             C6192 * C2588 - C6527 * C2467 - C6192 * C2812 + C28003 * C2927) *
                C27977) *
               C1323 +
           ((C6553 + C6554) * C28084 + (C8143 + C8144) * C27977) * C27887) *
              C28119 * C28120 * C81 -
          (((C6192 * C5725 - C6527 * C5619 - C6192 * C5931 + C28003 * C6034 +
             C6191 * C659 - C6526 * C566 - C6191 * C819 + C28085 * C898) *
                C27977 +
            (C6556 + C6555) * C28084) *
               C27887 +
           ((C8144 + C8143) * C27977 + (C6554 + C6553) * C28084) * C1323) *
              C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eexx[4] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C1328 * C96 - C1329 * C91 - C1328 * C97 + C1323 * C106 +
             C1330 * C98 - C1331 * C92 - C1330 * C99 + C27887 * C107) *
                C28085 +
            (C4065 + C4066) * C28003) *
               C28084 +
           ((C1937 + C1938) * C28085 + (C8223 + C8224) * C28003) * C27977) *
              C28119 * C562 -
          (((C1330 * C2468 - C1331 * C2464 - C1330 * C2469 + C27887 * C2476 +
             C1328 * C2470 - C1329 * C2465 - C1328 * C2471 + C1323 * C2477) *
                C28003 +
            (C1940 + C1939) * C28085) *
               C27977 +
           ((C8224 + C8223) * C28003 + (C1938 + C1937) * C28085) * C28084) *
              C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eexy[4] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28084 * C146 - C4657 * C91 + C27977 * C615 - C4658 * C568) *
                C1328 +
            (C28084 * C151 - C4657 * C97 + C27977 * C619 - C4658 * C576) *
                C1323 +
            (C4660 - C4661 + C4662 - C4663) * C1330 +
            (C4664 - C4665 + C4666 - C4667) * C27887) *
               C28085 +
           ((C28084 * C987 - C4657 * C940 + C27977 * C2530 - C4658 * C2467) *
                C1328 +
            (C28084 * C991 - C4657 * C948 + C27977 * C2534 - C4658 * C2475) *
                C1323 +
            (C7631 - C7632 + C7633 - C7634) * C1330 +
            (C7635 - C7636 + C7637 - C7638) * C27887) *
               C28003) *
              C28119 * C562 +
          (((C4657 * C568 - C28084 * C615 + C4658 * C1332 - C27977 * C1397) *
                C1328 +
            (C4657 * C576 - C28084 * C619 + C4658 * C1336 - C27977 * C1400) *
                C1323 +
            (C4657 * C567 - C28084 * C616 + C4658 * C1333 - C27977 * C1398) *
                C1330 +
            (C4657 * C574 - C28084 * C620 + C4658 * C1338 - C27977 * C1401) *
                C27887) *
               C28085 +
           ((C4657 * C2467 - C28084 * C2530 + C4658 * C2465 - C27977 * C2531) *
                C1328 +
            (C4657 * C2475 - C28084 * C2534 + C4658 * C2471 - C27977 * C2535) *
                C1323 +
            (C4657 * C2466 - C28084 * C2532 + C4658 * C2464 - C27977 * C2533) *
                C1330 +
            (C4657 * C2473 - C28084 * C2536 + C4658 * C2469 - C27977 * C2537) *
                C27887) *
               C28003) *
              C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eexz[4] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28085 * C203 - C6191 * C91 + C28003 * C1029 - C6192 * C940) *
                C1328 +
            (C28085 * C208 - C6191 * C97 + C28003 * C1033 - C6192 * C948) *
                C1323 +
            (C6194 - C6195 + C6196 - C6197) * C1330 +
            (C6198 - C6199 + C6200 - C6201) * C27887) *
               C28084 +
           ((C8357 - C8358 + C8359 - C8360) * C1328 +
            (C8361 - C8362 + C8363 - C8364) * C1323 +
            (C7705 - C7706 + C7707 - C7708) * C1330 +
            (C7709 - C7710 + C7711 - C7712) * C27887) *
               C27977) *
              C28119 * C562 +
          (((C8358 - C8357 + C8360 - C8359) * C1328 +
            (C8362 - C8361 + C8364 - C8363) * C1323 +
            (C7706 - C7705 + C7708 - C7707) * C1330 +
            (C7710 - C7709 + C7712 - C7711) * C27887) *
               C28084 +
           ((C6191 * C1332 - C28085 * C1465 + C6192 * C2465 - C28003 * C2590) *
                C1328 +
            (C6191 * C1336 - C28085 * C1468 + C6192 * C2471 - C28003 * C2594) *
                C1323 +
            (C6191 * C1333 - C28085 * C1466 + C6192 * C2464 - C28003 * C2591) *
                C1330 +
            (C6191 * C1338 - C28085 * C1469 + C6192 * C2469 - C28003 * C2595) *
                C27887) *
               C27977) *
              C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eeyx[4] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C1323 * C96 - C1328 * C91 + C27887 * C98 - C1330 * C92) * C4657 +
            (C1323 * C264 - C1328 * C259 + C27887 * C265 - C1330 * C260) *
                C28084 +
            (C2111 - C2112 + C2113 - C2114) * C4658 +
            (C2115 - C2116 + C2117 - C2118) * C27977) *
               C28085 +
           ((C4239 - C4240 + C4241 - C4242) * C4657 +
            (C4243 - C4244 + C4245 - C4246) * C28084 +
            (C8431 - C8432 + C8433 - C8434) * C4658 +
            (C8435 - C8436 + C8437 - C8438) * C27977) *
               C28003) *
              C28119 * C562 +
          (((C2112 - C2111 + C2114 - C2113) * C4657 +
            (C2116 - C2115 + C2118 - C2117) * C28084 +
            (C2120 - C2119 + C2122 - C2121) * C4658 +
            (C2124 - C2123 + C2126 - C2125) * C27977) *
               C28085 +
           ((C8432 - C8431 + C8434 - C8433) * C4657 +
            (C8436 - C8435 + C8438 - C8437) * C28084 +
            (C1328 * C2465 - C1323 * C2470 + C1330 * C2464 - C27887 * C2468) *
                C4658 +
            (C1328 * C2648 - C1323 * C2652 + C1330 * C2649 - C27887 * C2653) *
                C27977) *
               C28003) *
              C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eeyy[4] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4657 * C146 - C4829 * C91 - C4657 * C259 + C28084 * C304 +
             C4658 * C615 - C4830 * C568 - C4658 * C699 + C27977 * C744) *
                C1323 +
            (C4856 + C4857) * C27887) *
               C28085 +
           ((C4657 * C987 - C4829 * C940 - C4657 * C1071 + C28084 * C1116 +
             C4658 * C2530 - C4830 * C2467 - C4658 * C2646 + C27977 * C2707) *
                C1323 +
            (C7857 + C7858) * C27887) *
               C28003) *
              C28119 * C562 -
          (((C4658 * C2533 - C4830 * C2464 - C4658 * C2649 + C27977 * C2704 +
             C4657 * C2532 - C4829 * C2466 - C4657 * C2647 + C28084 * C2705) *
                C27887 +
            (C4658 * C2531 - C4830 * C2465 - C4658 * C2648 + C27977 * C2706 +
             C4657 * C2530 - C4829 * C2467 - C4657 * C2646 + C28084 * C2707) *
                C1323) *
               C28003 +
           ((C4658 * C1398 - C4830 * C1333 - C4658 * C1530 + C27977 * C1589 +
             C4657 * C616 - C4829 * C567 - C4657 * C700 + C28084 * C743) *
                C27887 +
            (C4658 * C1397 - C4830 * C1332 - C4658 * C1529 + C27977 * C1588 +
             C4657 * C615 - C4829 * C568 - C4657 * C699 + C28084 * C744) *
                C1323) *
               C28085) *
              C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eeyz[4] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28085 * C203 - C6191 * C91 + C28003 * C1029 - C6192 * C940) *
                C4657 +
            (C28085 * C364 - C6191 * C259 + C28003 * C1151 - C6192 * C1071) *
                C28084 +
            (C8357 - C8358 + C8359 - C8360) * C4658 +
            (C8571 - C8572 + C8573 - C8574) * C27977) *
               C1323 +
           ((C6194 - C6195 + C6196 - C6197) * C4657 +
            (C6367 - C6368 + C6369 - C6370) * C28084 +
            (C7705 - C7706 + C7707 - C7708) * C4658 +
            (C7925 - C7926 + C7927 - C7928) * C27977) *
               C27887) *
              C28119 * C562 +
          (((C8358 - C8357 + C8360 - C8359) * C4657 +
            (C8572 - C8571 + C8574 - C8573) * C28084 +
            (C6191 * C1332 - C28085 * C1465 + C6192 * C2465 - C28003 * C2590) *
                C4658 +
            (C6191 * C1529 - C28085 * C1662 + C6192 * C2648 - C28003 * C2759) *
                C27977) *
               C1323 +
           ((C7706 - C7705 + C7708 - C7707) * C4657 +
            (C7926 - C7925 + C7928 - C7927) * C28084 +
            (C6191 * C1333 - C28085 * C1466 + C6192 * C2464 - C28003 * C2591) *
                C4658 +
            (C6191 * C1530 - C28085 * C1663 + C6192 * C2649 - C28003 * C2761) *
                C27977) *
               C27887) *
              C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eezx[4] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C1323 * C96 - C1328 * C91 + C27887 * C98 - C1330 * C92) * C6191 +
            (C1323 * C414 - C1328 * C409 + C27887 * C415 - C1330 * C410) *
                C28085 +
            (C4239 - C4240 + C4241 - C4242) * C6192 +
            (C4431 - C4432 + C4433 - C4434) * C28003) *
               C28084 +
           ((C2111 - C2112 + C2113 - C2114) * C6191 +
            (C2289 - C2290 + C2291 - C2292) * C28085 +
            (C8431 - C8432 + C8433 - C8434) * C6192 +
            (C8641 - C8642 + C8643 - C8644) * C28003) *
               C27977) *
              C28119 * C562 +
          (((C2112 - C2111 + C2114 - C2113) * C6191 +
            (C2290 - C2289 + C2292 - C2291) * C28085 +
            (C8432 - C8431 + C8434 - C8433) * C6192 +
            (C8642 - C8641 + C8644 - C8643) * C28003) *
               C28084 +
           ((C2120 - C2119 + C2122 - C2121) * C6191 +
            (C2294 - C2293 + C2296 - C2295) * C28085 +
            (C1328 * C2465 - C1323 * C2470 + C1330 * C2464 - C27887 * C2468) *
                C6192 +
            (C1328 * C2814 - C1323 * C2818 + C1330 * C2815 - C27887 * C2819) *
                C28003) *
               C27977) *
              C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eezy[4] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28084 * C146 - C4657 * C91 + C27977 * C615 - C4658 * C568) *
                C6191 +
            (C28084 * C453 - C4657 * C409 + C27977 * C859 - C4658 * C817) *
                C28085 +
            (C28084 * C987 - C4657 * C940 + C27977 * C2530 - C4658 * C2467) *
                C6192 +
            (C28084 * C1231 - C4657 * C1189 + C27977 * C2870 - C4658 * C2812) *
                C28003) *
               C1323 +
           ((C4660 - C4661 + C4662 - C4663) * C6191 +
            (C5012 - C5013 + C5014 - C5015) * C28085 +
            (C7631 - C7632 + C7633 - C7634) * C6192 +
            (C8061 - C8062 + C8063 - C8064) * C28003) *
               C27887) *
              C28119 * C562 +
          (((C4657 * C568 - C28084 * C615 + C4658 * C1332 - C27977 * C1397) *
                C6191 +
            (C4657 * C817 - C28084 * C859 + C4658 * C1719 - C27977 * C1775) *
                C28085 +
            (C4657 * C2467 - C28084 * C2530 + C4658 * C2465 - C27977 * C2531) *
                C6192 +
            (C4657 * C2812 - C28084 * C2870 + C4658 * C2814 - C27977 * C2871) *
                C28003) *
               C1323 +
           ((C4657 * C567 - C28084 * C616 + C4658 * C1333 - C27977 * C1398) *
                C6191 +
            (C4657 * C818 - C28084 * C860 + C4658 * C1720 - C27977 * C1776) *
                C28085 +
            (C4657 * C2466 - C28084 * C2532 + C4658 * C2464 - C27977 * C2533) *
                C6192 +
            (C4657 * C2813 - C28084 * C2872 + C4658 * C2815 - C27977 * C2873) *
                C28003) *
               C27887) *
              C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eezz[4] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6191 * C203 - C6526 * C91 - C6191 * C409 + C28085 * C499 +
             C6192 * C1029 - C6527 * C940 - C6192 * C1189 + C28003 * C1272) *
                C28084 +
            (C8789 + C8790) * C27977) *
               C1323 +
           ((C6553 + C6554) * C28084 + (C8143 + C8144) * C27977) * C27887) *
              C28119 * C562 -
          (((C6192 * C2591 - C6527 * C2464 - C6192 * C2815 + C28003 * C2924 +
             C6191 * C1466 - C6526 * C1333 - C6191 * C1720 + C28085 * C1835) *
                C27977 +
            (C8144 + C8143) * C28084) *
               C27887 +
           ((C6192 * C2590 - C6527 * C2465 - C6192 * C2814 + C28003 * C2926 +
             C6191 * C1465 - C6526 * C1332 - C6191 * C1719 + C28085 * C1834) *
                C27977 +
            (C8790 + C8789) * C28084) *
               C1323) *
              C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eexx[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C1328 * C96 - C1329 * C91 - C1328 * C97 + C1323 * C106 +
             C1330 * C98 - C1331 * C92 - C1330 * C99 + C27887 * C107) *
                C28085 +
            (C4065 + C4066) * C28003) *
               C28084 +
           ((C1937 + C1938) * C28085 + (C8223 + C8224) * C28003) * C27977) *
              C935 -
          (((C1330 * C3552 - C1331 * C3550 - C1330 * C3553 + C27887 * C3556 +
             C1328 * C3554 - C1329 * C3551 - C1328 * C3555 + C1323 * C3557) *
                C28003 +
            (C8224 + C8223) * C28085) *
               C27977 +
           ((C4068 + C4067) * C28003 + (C4066 + C4065) * C28085) * C28084) *
              C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eexy[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28084 * C146 - C4657 * C91 + C27977 * C615 - C4658 * C568) *
                C1328 +
            (C28084 * C151 - C4657 * C97 + C27977 * C619 - C4658 * C576) *
                C1323 +
            (C4660 - C4661 + C4662 - C4663) * C1330 +
            (C4664 - C4665 + C4666 - C4667) * C27887) *
               C28085 +
           ((C8923 - C8924 + C8925 - C8926) * C1328 +
            (C8927 - C8928 + C8929 - C8930) * C1323 +
            (C7631 - C7632 + C7633 - C7634) * C1330 +
            (C7635 - C7636 + C7637 - C7638) * C27887) *
               C28003) *
              C935 +
          (((C8924 - C8923 + C8926 - C8925) * C1328 +
            (C8928 - C8927 + C8930 - C8929) * C1323 +
            (C7632 - C7631 + C7634 - C7633) * C1330 +
            (C7636 - C7635 + C7638 - C7637) * C27887) *
               C28085 +
           ((C4657 * C2981 - C28084 * C3043 + C4658 * C3551 - C27977 * C3608) *
                C1328 +
            (C4657 * C2985 - C28084 * C3046 + C4658 * C3555 - C27977 * C3610) *
                C1323 +
            (C4657 * C2982 - C28084 * C3044 + C4658 * C3550 - C27977 * C3609) *
                C1330 +
            (C4657 * C2987 - C28084 * C3047 + C4658 * C3553 - C27977 * C3611) *
                C27887) *
               C28003) *
              C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eexz[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28085 * C203 - C6191 * C91 + C28003 * C1029 - C6192 * C940) *
                C1328 +
            (C28085 * C208 - C6191 * C97 + C28003 * C1033 - C6192 * C948) *
                C1323 +
            (C6194 - C6195 + C6196 - C6197) * C1330 +
            (C6198 - C6199 + C6200 - C6201) * C27887) *
               C28084 +
           ((C8357 - C8358 + C8359 - C8360) * C1328 +
            (C8361 - C8362 + C8363 - C8364) * C1323 +
            (C7705 - C7706 + C7707 - C7708) * C1330 +
            (C7709 - C7710 + C7711 - C7712) * C27887) *
               C27977) *
              C935 +
          (((C6191 * C940 - C28085 * C1029 + C6192 * C2981 - C28003 * C3110) *
                C1328 +
            (C6191 * C948 - C28085 * C1033 + C6192 * C2985 - C28003 * C3113) *
                C1323 +
            (C6191 * C939 - C28085 * C1030 + C6192 * C2982 - C28003 * C3111) *
                C1330 +
            (C6191 * C946 - C28085 * C1034 + C6192 * C2987 - C28003 * C3114) *
                C27887) *
               C28084 +
           ((C6191 * C2467 - C28085 * C2588 + C6192 * C3551 - C28003 * C3662) *
                C1328 +
            (C6191 * C2475 - C28085 * C2592 + C6192 * C3555 - C28003 * C3664) *
                C1323 +
            (C6191 * C2466 - C28085 * C2589 + C6192 * C3550 - C28003 * C3663) *
                C1330 +
            (C6191 * C2473 - C28085 * C2593 + C6192 * C3553 - C28003 * C3665) *
                C27887) *
               C27977) *
              C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eeyx[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C1323 * C96 - C1328 * C91 + C27887 * C98 - C1330 * C92) * C4657 +
            (C1323 * C264 - C1328 * C259 + C27887 * C265 - C1330 * C260) *
                C28084 +
            (C2111 - C2112 + C2113 - C2114) * C4658 +
            (C2115 - C2116 + C2117 - C2118) * C27977) *
               C28085 +
           ((C4239 - C4240 + C4241 - C4242) * C4657 +
            (C4243 - C4244 + C4245 - C4246) * C28084 +
            (C8431 - C8432 + C8433 - C8434) * C4658 +
            (C8435 - C8436 + C8437 - C8438) * C27977) *
               C28003) *
              C935 +
          (((C4240 - C4239 + C4242 - C4241) * C4657 +
            (C4244 - C4243 + C4246 - C4245) * C28084 +
            (C8432 - C8431 + C8434 - C8433) * C4658 +
            (C8436 - C8435 + C8438 - C8437) * C27977) *
               C28085 +
           ((C4248 - C4247 + C4250 - C4249) * C4657 +
            (C4252 - C4251 + C4254 - C4253) * C28084 +
            (C1328 * C3551 - C1323 * C3554 + C1330 * C3550 - C27887 * C3552) *
                C4658 +
            (C1328 * C3716 - C1323 * C3718 + C1330 * C3717 - C27887 * C3719) *
                C27977) *
               C28003) *
              C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eeyy[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4657 * C146 - C4829 * C91 - C4657 * C259 + C28084 * C304 +
             C4658 * C615 - C4830 * C568 - C4658 * C699 + C27977 * C744) *
                C1323 +
            (C4856 + C4857) * C27887) *
               C28085 +
           ((C9141 + C9142) * C1323 + (C7857 + C7858) * C27887) * C28003) *
              C935 -
          (((C4658 * C3609 - C4830 * C3550 - C4658 * C3717 + C27977 * C3770 +
             C4657 * C3044 - C4829 * C2982 - C4657 * C3179 + C28084 * C3235) *
                C27887 +
            (C4658 * C3608 - C4830 * C3551 - C4658 * C3716 + C27977 * C3771 +
             C4657 * C3043 - C4829 * C2981 - C4657 * C3178 + C28084 * C3234) *
                C1323) *
               C28003 +
           ((C7858 + C7857) * C27887 + (C9142 + C9141) * C1323) * C28085) *
              C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eeyz[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28085 * C203 - C6191 * C91 + C28003 * C1029 - C6192 * C940) *
                C4657 +
            (C28085 * C364 - C6191 * C259 + C28003 * C1151 - C6192 * C1071) *
                C28084 +
            (C8357 - C8358 + C8359 - C8360) * C4658 +
            (C8571 - C8572 + C8573 - C8574) * C27977) *
               C1323 +
           ((C6194 - C6195 + C6196 - C6197) * C4657 +
            (C6367 - C6368 + C6369 - C6370) * C28084 +
            (C7705 - C7706 + C7707 - C7708) * C4658 +
            (C7925 - C7926 + C7927 - C7928) * C27977) *
               C27887) *
              C935 +
          (((C6191 * C940 - C28085 * C1029 + C6192 * C2981 - C28003 * C3110) *
                C4657 +
            (C6191 * C1071 - C28085 * C1151 + C6192 * C3178 - C28003 * C3301) *
                C28084 +
            (C6191 * C2467 - C28085 * C2588 + C6192 * C3551 - C28003 * C3662) *
                C4658 +
            (C6191 * C2646 - C28085 * C2758 + C6192 * C3716 - C28003 * C3822) *
                C27977) *
               C1323 +
           ((C6191 * C939 - C28085 * C1030 + C6192 * C2982 - C28003 * C3111) *
                C4657 +
            (C6191 * C1072 - C28085 * C1152 + C6192 * C3179 - C28003 * C3302) *
                C28084 +
            (C6191 * C2466 - C28085 * C2589 + C6192 * C3550 - C28003 * C3663) *
                C4658 +
            (C6191 * C2647 - C28085 * C2760 + C6192 * C3717 - C28003 * C3823) *
                C27977) *
               C27887) *
              C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eezx[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C1323 * C96 - C1328 * C91 + C27887 * C98 - C1330 * C92) * C6191 +
            (C1323 * C414 - C1328 * C409 + C27887 * C415 - C1330 * C410) *
                C28085 +
            (C4239 - C4240 + C4241 - C4242) * C6192 +
            (C4431 - C4432 + C4433 - C4434) * C28003) *
               C28084 +
           ((C2111 - C2112 + C2113 - C2114) * C6191 +
            (C2289 - C2290 + C2291 - C2292) * C28085 +
            (C8431 - C8432 + C8433 - C8434) * C6192 +
            (C8641 - C8642 + C8643 - C8644) * C28003) *
               C27977) *
              C935 +
          (((C4240 - C4239 + C4242 - C4241) * C6191 +
            (C4432 - C4431 + C4434 - C4433) * C28085 +
            (C4248 - C4247 + C4250 - C4249) * C6192 +
            (C4436 - C4435 + C4438 - C4437) * C28003) *
               C28084 +
           ((C8432 - C8431 + C8434 - C8433) * C6191 +
            (C8642 - C8641 + C8644 - C8643) * C28085 +
            (C1328 * C3551 - C1323 * C3554 + C1330 * C3550 - C27887 * C3552) *
                C6192 +
            (C1328 * C3874 - C1323 * C3876 + C1330 * C3875 - C27887 * C3877) *
                C28003) *
               C27977) *
              C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eezy[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28084 * C146 - C4657 * C91 + C27977 * C615 - C4658 * C568) *
                C6191 +
            (C28084 * C453 - C4657 * C409 + C27977 * C859 - C4658 * C817) *
                C28085 +
            (C8923 - C8924 + C8925 - C8926) * C6192 +
            (C9341 - C9342 + C9343 - C9344) * C28003) *
               C1323 +
           ((C4660 - C4661 + C4662 - C4663) * C6191 +
            (C5012 - C5013 + C5014 - C5015) * C28085 +
            (C7631 - C7632 + C7633 - C7634) * C6192 +
            (C8061 - C8062 + C8063 - C8064) * C28003) *
               C27887) *
              C935 +
          (((C8924 - C8923 + C8926 - C8925) * C6191 +
            (C9342 - C9341 + C9344 - C9343) * C28085 +
            (C4657 * C2981 - C28084 * C3043 + C4658 * C3551 - C27977 * C3608) *
                C6192 +
            (C4657 * C3360 - C28084 * C3416 + C4658 * C3874 - C27977 * C3928) *
                C28003) *
               C1323 +
           ((C7632 - C7631 + C7634 - C7633) * C6191 +
            (C8062 - C8061 + C8064 - C8063) * C28085 +
            (C4657 * C2982 - C28084 * C3044 + C4658 * C3550 - C27977 * C3609) *
                C6192 +
            (C4657 * C3361 - C28084 * C3417 + C4658 * C3875 - C27977 * C3929) *
                C28003) *
               C27887) *
              C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eezz[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6191 * C203 - C6526 * C91 - C6191 * C409 + C28085 * C499 +
             C6192 * C1029 - C6527 * C940 - C6192 * C1189 + C28003 * C1272) *
                C28084 +
            (C8789 + C8790) * C27977) *
               C1323 +
           ((C6553 + C6554) * C28084 + (C8143 + C8144) * C27977) * C27887) *
              C935 -
          (((C6192 * C3663 - C6527 * C3550 - C6192 * C3875 + C28003 * C3980 +
             C6191 * C2589 - C6526 * C2466 - C6191 * C2813 + C28085 * C2925) *
                C27977 +
            (C6192 * C3111 - C6527 * C2982 - C6192 * C3361 + C28003 * C3477 +
             C6191 * C1030 - C6526 * C939 - C6191 * C1190 + C28085 * C1271) *
                C28084) *
               C27887 +
           ((C6192 * C3662 - C6527 * C3551 - C6192 * C3874 + C28003 * C3981 +
             C6191 * C2588 - C6526 * C2467 - C6191 * C2812 + C28085 * C2927) *
                C27977 +
            (C6192 * C3110 - C6527 * C2981 - C6192 * C3360 + C28003 * C3476 +
             C6191 * C1029 - C6526 * C940 - C6191 * C1189 + C28085 * C1272) *
                C28084) *
               C1323) *
              C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eexx[6] +=
        (-std::pow(Pi, 2.5) *
         (((C1328 * C96 - C1329 * C91 - C1328 * C97 + C1323 * C106 +
            C1330 * C98 - C1331 * C92 - C1330 * C99 + C27887 * C107) *
               C27939 * C1325 +
           (C1328 * C575 - C1329 * C568 - C1328 * C576 + C1323 * C580 +
            C1330 * C573 - C1331 * C567 - C1330 * C574 + C27887 * C579) *
               C27939 * C1326 +
           (C1328 * C1335 - C1329 * C1332 - C1328 * C1336 + C1323 * C1341 +
            C1330 * C1337 - C1331 * C1333 - C1330 * C1338 + C27887 * C1342) *
               C27939 * C1327) *
              C28119 * C28120 * C81 -
          ((C1330 * C1339 - C1331 * C1334 - C1330 * C1340 + C27887 * C1343 +
            C1328 * C1337 - C1329 * C1333 - C1328 * C1338 + C1323 * C1342) *
               C27939 * C1327 +
           (C1330 * C571 - C1331 * C566 - C1330 * C572 + C27887 * C578 +
            C1328 * C573 - C1329 * C567 - C1328 * C574 + C1323 * C579) *
               C27939 * C1326 +
           (C1330 * C100 - C1331 * C93 - C1330 * C101 + C27887 * C108 +
            C1328 * C98 - C1329 * C92 - C1328 * C99 + C1323 * C107) *
               C27939 * C1325) *
              C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C83 * C96 - C84 * C91 - C83 * C97 + C73 * C106 + C85 * C98 -
           C86 * C92 - C85 * C99 + C74 * C107 + C87 * C100 - C88 * C93 -
           C87 * C101 + C75 * C108 + C89 * C102 - C90 * C94 - C89 * C103 +
           C76 * C109) *
              C27939 * C27928 * C28119 * C28120 * C81 -
          (C89 * C104 - C90 * C95 - C89 * C105 + C76 * C110 + C87 * C102 -
           C88 * C94 - C87 * C103 + C75 * C109 + C85 * C100 - C86 * C93 -
           C85 * C101 + C74 * C108 + C83 * C98 - C84 * C92 - C83 * C99 +
           C73 * C107) *
              C27939 * C27928 * C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C1328 * C96 - C1329 * C91 - C1328 * C97 + C1323 * C106 +
            C1330 * C98 - C1331 * C92 - C1330 * C99 + C27887 * C107) *
               C2978 +
           (C1328 * C947 - C1329 * C940 - C1328 * C948 + C1323 * C952 +
            C1330 * C945 - C1331 * C939 - C1330 * C946 + C27887 * C951) *
               C2979 +
           (C1328 * C2984 - C1329 * C2981 - C1328 * C2985 + C1323 * C2990 +
            C1330 * C2986 - C1331 * C2982 - C1330 * C2987 + C27887 * C2991) *
               C2980) *
              C27928 * C28119 * C28120 * C81 -
          ((C1330 * C2988 - C1331 * C2983 - C1330 * C2989 + C27887 * C2992 +
            C1328 * C2986 - C1329 * C2982 - C1328 * C2987 + C1323 * C2991) *
               C2980 +
           (C1330 * C943 - C1331 * C938 - C1330 * C944 + C27887 * C950 +
            C1328 * C945 - C1329 * C939 - C1328 * C946 + C1323 * C951) *
               C2979 +
           (C1330 * C100 - C1331 * C93 - C1330 * C101 + C27887 * C108 +
            C1328 * C98 - C1329 * C92 - C1328 * C99 + C1323 * C107) *
               C2978) *
              C27928 * C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eexy[6] +=
        (-std::pow(Pi, 2.5) *
         (((C1325 * C146 - C1394 * C91 + C1326 * C615 - C1395 * C568 +
            C1327 * C1397 - C1396 * C1332) *
               C1328 +
           (C1325 * C151 - C1394 * C97 + C1326 * C619 - C1395 * C576 +
            C1327 * C1400 - C1396 * C1336) *
               C1323 +
           (C1404 - C1405 + C1406 - C1407 + C1408 - C1409) * C1330 +
           (C1410 - C1411 + C1412 - C1413 + C1414 - C1415) * C27887) *
              C27939 * C28119 * C28120 * C81 +
          ((C1405 - C1404 + C1407 - C1406 + C1409 - C1408) * C1328 +
           (C1411 - C1410 + C1413 - C1412 + C1415 - C1414) * C1323 +
           (C1394 * C93 - C1325 * C148 + C1395 * C566 - C1326 * C617 +
            C1396 * C1334 - C1327 * C1399) *
               C1330 +
           (C1394 * C101 - C1325 * C153 + C1395 * C572 - C1326 * C621 +
            C1396 * C1340 - C1327 * C1402) *
               C27887) *
              C27939 * C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C27928 * C146 - C145 * C91) * C83 +
           (C27928 * C151 - C145 * C97) * C73 + (C157 - C158) * C85 +
           (C159 - C160) * C74 + (C161 - C162) * C87 + (C163 - C164) * C75 +
           (C165 - C166) * C89 + (C167 - C168) * C76) *
              C27939 * C28119 * C28120 * C81 +
          ((C158 - C157) * C83 + (C160 - C159) * C73 + (C162 - C161) * C85 +
           (C164 - C163) * C74 + (C166 - C165) * C87 + (C168 - C167) * C75 +
           (C145 * C95 - C27928 * C150) * C89 +
           (C145 * C105 - C27928 * C155) * C76) *
              C27939 * C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C27928 * C146 - C145 * C91) * C1328 +
            (C27928 * C151 - C145 * C97) * C1323 + (C157 - C158) * C1330 +
            (C159 - C160) * C27887) *
               C2978 +
           ((C27928 * C987 - C145 * C940) * C1328 +
            (C27928 * C991 - C145 * C948) * C1323 + (C3050 - C3051) * C1330 +
            (C3052 - C3053) * C27887) *
               C2979 +
           ((C27928 * C3043 - C145 * C2981) * C1328 +
            (C27928 * C3046 - C145 * C2985) * C1323 + (C3054 - C3055) * C1330 +
            (C3056 - C3057) * C27887) *
               C2980) *
              C28119 * C28120 * C81 +
          (((C158 - C157) * C1328 + (C160 - C159) * C1323 +
            (C162 - C161) * C1330 + (C164 - C163) * C27887) *
               C2978 +
           ((C3051 - C3050) * C1328 + (C3053 - C3052) * C1323 +
            (C145 * C938 - C27928 * C989) * C1330 +
            (C145 * C944 - C27928 * C993) * C27887) *
               C2979 +
           ((C3055 - C3054) * C1328 + (C3057 - C3056) * C1323 +
            (C145 * C2983 - C27928 * C3045) * C1330 +
            (C145 * C2989 - C27928 * C3048) * C27887) *
               C2980) *
              C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eexz[6] +=
        (-std::pow(Pi, 2.5) *
         ((((C27939 * C203 - C202 * C91) * C1328 +
            (C27939 * C208 - C202 * C97) * C1323 + (C214 - C215) * C1330 +
            (C216 - C217) * C27887) *
               C1325 +
           ((C27939 * C657 - C202 * C568) * C1328 +
            (C27939 * C661 - C202 * C576) * C1323 + (C1472 - C1473) * C1330 +
            (C1474 - C1475) * C27887) *
               C1326 +
           ((C27939 * C1465 - C202 * C1332) * C1328 +
            (C27939 * C1468 - C202 * C1336) * C1323 + (C1476 - C1477) * C1330 +
            (C1478 - C1479) * C27887) *
               C1327) *
              C28119 * C28120 * C81 +
          (((C215 - C214) * C1328 + (C217 - C216) * C1323 +
            (C219 - C218) * C1330 + (C221 - C220) * C27887) *
               C1325 +
           ((C1473 - C1472) * C1328 + (C1475 - C1474) * C1323 +
            (C202 * C566 - C27939 * C659) * C1330 +
            (C202 * C572 - C27939 * C663) * C27887) *
               C1326 +
           ((C1477 - C1476) * C1328 + (C1479 - C1478) * C1323 +
            (C202 * C1334 - C27939 * C1467) * C1330 +
            (C202 * C1340 - C27939 * C1470) * C27887) *
               C1327) *
              C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C27939 * C203 - C202 * C91) * C83 +
           (C27939 * C208 - C202 * C97) * C73 + (C214 - C215) * C85 +
           (C216 - C217) * C74 + (C218 - C219) * C87 + (C220 - C221) * C75 +
           (C222 - C223) * C89 + (C224 - C225) * C76) *
              C27928 * C28119 * C28120 * C81 +
          ((C215 - C214) * C83 + (C217 - C216) * C73 + (C219 - C218) * C85 +
           (C221 - C220) * C74 + (C223 - C222) * C87 + (C225 - C224) * C75 +
           (C202 * C95 - C27939 * C207) * C89 +
           (C202 * C105 - C27939 * C212) * C76) *
              C27928 * C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C2978 * C203 - C3107 * C91 + C2979 * C1029 - C3108 * C940 +
            C2980 * C3110 - C3109 * C2981) *
               C1328 +
           (C2978 * C208 - C3107 * C97 + C2979 * C1033 - C3108 * C948 +
            C2980 * C3113 - C3109 * C2985) *
               C1323 +
           (C3117 - C3118 + C3119 - C3120 + C3121 - C3122) * C1330 +
           (C3123 - C3124 + C3125 - C3126 + C3127 - C3128) * C27887) *
              C27928 * C28119 * C28120 * C81 +
          ((C3118 - C3117 + C3120 - C3119 + C3122 - C3121) * C1328 +
           (C3124 - C3123 + C3126 - C3125 + C3128 - C3127) * C1323 +
           (C3107 * C93 - C2978 * C205 + C3108 * C938 - C2979 * C1031 +
            C3109 * C2983 - C2980 * C3112) *
               C1330 +
           (C3107 * C101 - C2978 * C210 + C3108 * C944 - C2979 * C1035 +
            C3109 * C2989 - C2980 * C3115) *
               C27887) *
              C27928 * C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[6] +=
        (-std::pow(Pi, 2.5) *
         (((C1323 * C96 - C1328 * C91 + C27887 * C98 - C1330 * C92) * C1394 +
           (C1323 * C264 - C1328 * C259 + C27887 * C265 - C1330 * C260) *
               C1325 +
           (C1323 * C575 - C1328 * C568 + C27887 * C573 - C1330 * C567) *
               C1395 +
           (C1323 * C703 - C1328 * C699 + C27887 * C704 - C1330 * C700) *
               C1326 +
           (C1323 * C1335 - C1328 * C1332 + C27887 * C1337 - C1330 * C1333) *
               C1396 +
           (C1323 * C1532 - C1328 * C1529 + C27887 * C1533 - C1330 * C1530) *
               C1327) *
              C27939 * C28119 * C28120 * C81 +
          ((C1328 * C92 - C1323 * C98 + C1330 * C93 - C27887 * C100) * C1394 +
           (C1328 * C260 - C1323 * C265 + C1330 * C261 - C27887 * C266) *
               C1325 +
           (C1328 * C567 - C1323 * C573 + C1330 * C566 - C27887 * C571) *
               C1395 +
           (C1328 * C700 - C1323 * C704 + C1330 * C701 - C27887 * C705) *
               C1326 +
           (C1328 * C1333 - C1323 * C1337 + C1330 * C1334 - C27887 * C1339) *
               C1396 +
           (C1328 * C1530 - C1323 * C1533 + C1330 * C1531 - C27887 * C1534) *
               C1327) *
              C27939 * C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C73 * C96 - C83 * C91 + C74 * C98 - C85 * C92 + C75 * C100 -
            C87 * C93 + C76 * C102 - C89 * C94) *
               C145 +
           (C73 * C264 - C83 * C259 + C74 * C265 - C85 * C260 + C75 * C266 -
            C87 * C261 + C76 * C267 - C89 * C262) *
               C27928) *
              C27939 * C28119 * C28120 * C81 +
          ((C83 * C92 - C73 * C98 + C85 * C93 - C74 * C100 + C87 * C94 -
            C75 * C102 + C89 * C95 - C76 * C104) *
               C145 +
           (C83 * C260 - C73 * C265 + C85 * C261 - C74 * C266 + C87 * C262 -
            C75 * C267 + C89 * C263 - C76 * C268) *
               C27928) *
              C27939 * C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C1323 * C96 - C1328 * C91 + C27887 * C98 - C1330 * C92) * C145 +
            (C1323 * C264 - C1328 * C259 + C27887 * C265 - C1330 * C260) *
                C27928) *
               C2978 +
           ((C1323 * C947 - C1328 * C940 + C27887 * C945 - C1330 * C939) *
                C145 +
            (C1323 * C1075 - C1328 * C1071 + C27887 * C1076 - C1330 * C1072) *
                C27928) *
               C2979 +
           ((C1323 * C2984 - C1328 * C2981 + C27887 * C2986 - C1330 * C2982) *
                C145 +
            (C1323 * C3181 - C1328 * C3178 + C27887 * C3182 - C1330 * C3179) *
                C27928) *
               C2980) *
              C28119 * C28120 * C81 +
          (((C1328 * C92 - C1323 * C98 + C1330 * C93 - C27887 * C100) * C145 +
            (C1328 * C260 - C1323 * C265 + C1330 * C261 - C27887 * C266) *
                C27928) *
               C2978 +
           ((C1328 * C939 - C1323 * C945 + C1330 * C938 - C27887 * C943) *
                C145 +
            (C1328 * C1072 - C1323 * C1076 + C1330 * C1073 - C27887 * C1077) *
                C27928) *
               C2979 +
           ((C1328 * C2982 - C1323 * C2986 + C1330 * C2983 - C27887 * C2988) *
                C145 +
            (C1328 * C3179 - C1323 * C3182 + C1330 * C3180 - C27887 * C3183) *
                C27928) *
               C2980) *
              C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[6] +=
        (-std::pow(Pi, 2.5) *
         (((C1394 * C146 - C1585 * C91 - C1394 * C259 + C1325 * C304 +
            C1395 * C615 - C1586 * C568 - C1395 * C699 + C1326 * C744 +
            C1396 * C1397 - C1587 * C1332 - C1396 * C1529 + C1327 * C1588) *
               C1323 +
           (C1610 + C1611 + C1612) * C27887) *
              C27939 * C28119 * C28120 * C81 -
          ((C1396 * C1399 - C1587 * C1334 - C1396 * C1531 + C1327 * C1590 +
            C1395 * C617 - C1586 * C566 - C1395 * C701 + C1326 * C742 +
            C1394 * C148 - C1585 * C93 - C1394 * C261 + C1325 * C306) *
               C27887 +
           (C1612 + C1611 + C1610) * C1323) *
              C27939 * C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C145 * C146 - C303 * C91 - C145 * C259 + C27928 * C304) * C73 +
           C328 * C74 + C329 * C75 + C330 * C76) *
              C27939 * C28119 * C28120 * C81 -
          ((C145 * C150 - C303 * C95 - C145 * C263 + C27928 * C308) * C76 +
           C330 * C75 + C329 * C74 + C328 * C73) *
              C27939 * C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C145 * C146 - C303 * C91 - C145 * C259 + C27928 * C304) * C1323 +
            C328 * C27887) *
               C2978 +
           ((C145 * C987 - C303 * C940 - C145 * C1071 + C27928 * C1116) *
                C1323 +
            C3250 * C27887) *
               C2979 +
           ((C145 * C3043 - C303 * C2981 - C145 * C3178 + C27928 * C3234) *
                C1323 +
            C3251 * C27887) *
               C2980) *
              C28119 * C28120 * C81 -
          (((C145 * C3045 - C303 * C2983 - C145 * C3180 + C27928 * C3236) *
                C27887 +
            C3251 * C1323) *
               C2980 +
           ((C145 * C989 - C303 * C938 - C145 * C1073 + C27928 * C1114) *
                C27887 +
            C3250 * C1323) *
               C2979 +
           (C329 * C27887 + C328 * C1323) * C2978) *
              C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[6] += (-std::pow(Pi, 2.5) *
                  ((((C27939 * C203 - C202 * C91) * C1394 +
                     (C27939 * C364 - C202 * C259) * C1325 +
                     (C27939 * C657 - C202 * C568) * C1395 +
                     (C27939 * C779 - C202 * C699) * C1326 +
                     (C27939 * C1465 - C202 * C1332) * C1396 +
                     (C27939 * C1662 - C202 * C1529) * C1327) *
                        C1323 +
                    ((C214 - C215) * C1394 + (C370 - C371) * C1325 +
                     (C1472 - C1473) * C1395 + (C1666 - C1667) * C1326 +
                     (C1476 - C1477) * C1396 + (C1668 - C1669) * C1327) *
                        C27887) *
                       C28119 * C28120 * C81 +
                   (((C215 - C214) * C1394 + (C371 - C370) * C1325 +
                     (C1473 - C1472) * C1395 + (C1667 - C1666) * C1326 +
                     (C1477 - C1476) * C1396 + (C1669 - C1668) * C1327) *
                        C1323 +
                    ((C219 - C218) * C1394 + (C373 - C372) * C1325 +
                     (C202 * C566 - C27939 * C659) * C1395 +
                     (C202 * C701 - C27939 * C781) * C1326 +
                     (C202 * C1334 - C27939 * C1467) * C1396 +
                     (C202 * C1531 - C27939 * C1664) * C1327) *
                        C27887) *
                       C28119 * C28120 * C82)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  ((((C27939 * C203 - C202 * C91) * C145 +
                     (C27939 * C364 - C202 * C259) * C27928) *
                        C73 +
                    ((C214 - C215) * C145 + (C370 - C371) * C27928) * C74 +
                    ((C218 - C219) * C145 + (C372 - C373) * C27928) * C75 +
                    ((C222 - C223) * C145 + (C374 - C375) * C27928) * C76) *
                       C28119 * C28120 * C81 +
                   (((C215 - C214) * C145 + (C371 - C370) * C27928) * C73 +
                    ((C219 - C218) * C145 + (C373 - C372) * C27928) * C74 +
                    ((C223 - C222) * C145 + (C375 - C374) * C27928) * C75 +
                    ((C202 * C95 - C27939 * C207) * C145 +
                     (C202 * C263 - C27939 * C368) * C27928) *
                        C76) *
                       C28119 * C28120 * C82)) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((((C2978 * C203 - C3107 * C91 + C2979 * C1029 -
                      C3108 * C940 + C2980 * C3110 - C3109 * C2981) *
                         C145 +
                     (C2978 * C364 - C3107 * C259 + C2979 * C1151 -
                      C3108 * C1071 + C2980 * C3301 - C3109 * C3178) *
                         C27928) *
                        C1323 +
                    ((C3117 - C3118 + C3119 - C3120 + C3121 - C3122) * C145 +
                     (C3305 - C3306 + C3307 - C3308 + C3309 - C3310) * C27928) *
                        C27887) *
                       C28119 * C28120 * C81 +
                   (((C3118 - C3117 + C3120 - C3119 + C3122 - C3121) * C145 +
                     (C3306 - C3305 + C3308 - C3307 + C3310 - C3309) * C27928) *
                        C1323 +
                    ((C3107 * C93 - C2978 * C205 + C3108 * C938 -
                      C2979 * C1031 + C3109 * C2983 - C2980 * C3112) *
                         C145 +
                     (C3107 * C261 - C2978 * C366 + C3108 * C1073 -
                      C2979 * C1153 + C3109 * C3180 - C2980 * C3303) *
                         C27928) *
                        C27887) *
                       C28119 * C28120 * C82)) /
                     (p * q * std::sqrt(p + q));
    d2eezx[6] +=
        (-std::pow(Pi, 2.5) *
         ((((C1323 * C96 - C1328 * C91 + C27887 * C98 - C1330 * C92) * C202 +
            (C1323 * C414 - C1328 * C409 + C27887 * C415 - C1330 * C410) *
                C27939) *
               C1325 +
           ((C1323 * C575 - C1328 * C568 + C27887 * C573 - C1330 * C567) *
                C202 +
            (C1323 * C821 - C1328 * C817 + C27887 * C822 - C1330 * C818) *
                C27939) *
               C1326 +
           ((C1323 * C1335 - C1328 * C1332 + C27887 * C1337 - C1330 * C1333) *
                C202 +
            (C1323 * C1722 - C1328 * C1719 + C27887 * C1723 - C1330 * C1720) *
                C27939) *
               C1327) *
              C28119 * C28120 * C81 +
          (((C1328 * C92 - C1323 * C98 + C1330 * C93 - C27887 * C100) * C202 +
            (C1328 * C410 - C1323 * C415 + C1330 * C411 - C27887 * C416) *
                C27939) *
               C1325 +
           ((C1328 * C567 - C1323 * C573 + C1330 * C566 - C27887 * C571) *
                C202 +
            (C1328 * C818 - C1323 * C822 + C1330 * C819 - C27887 * C823) *
                C27939) *
               C1326 +
           ((C1328 * C1333 - C1323 * C1337 + C1330 * C1334 - C27887 * C1339) *
                C202 +
            (C1328 * C1720 - C1323 * C1723 + C1330 * C1721 - C27887 * C1724) *
                C27939) *
               C1327) *
              C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C73 * C96 - C83 * C91 + C74 * C98 - C85 * C92 + C75 * C100 -
            C87 * C93 + C76 * C102 - C89 * C94) *
               C202 +
           (C73 * C414 - C83 * C409 + C74 * C415 - C85 * C410 + C75 * C416 -
            C87 * C411 + C76 * C417 - C89 * C412) *
               C27939) *
              C27928 * C28119 * C28120 * C81 +
          ((C83 * C92 - C73 * C98 + C85 * C93 - C74 * C100 + C87 * C94 -
            C75 * C102 + C89 * C95 - C76 * C104) *
               C202 +
           (C83 * C410 - C73 * C415 + C85 * C411 - C74 * C416 + C87 * C412 -
            C75 * C417 + C89 * C413 - C76 * C418) *
               C27939) *
              C27928 * C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C1323 * C96 - C1328 * C91 + C27887 * C98 - C1330 * C92) * C3107 +
           (C1323 * C414 - C1328 * C409 + C27887 * C415 - C1330 * C410) *
               C2978 +
           (C1323 * C947 - C1328 * C940 + C27887 * C945 - C1330 * C939) *
               C3108 +
           (C1323 * C1193 - C1328 * C1189 + C27887 * C1194 - C1330 * C1190) *
               C2979 +
           (C1323 * C2984 - C1328 * C2981 + C27887 * C2986 - C1330 * C2982) *
               C3109 +
           (C1323 * C3363 - C1328 * C3360 + C27887 * C3364 - C1330 * C3361) *
               C2980) *
              C27928 * C28119 * C28120 * C81 +
          ((C1328 * C92 - C1323 * C98 + C1330 * C93 - C27887 * C100) * C3107 +
           (C1328 * C410 - C1323 * C415 + C1330 * C411 - C27887 * C416) *
               C2978 +
           (C1328 * C939 - C1323 * C945 + C1330 * C938 - C27887 * C943) *
               C3108 +
           (C1328 * C1190 - C1323 * C1194 + C1330 * C1191 - C27887 * C1195) *
               C2979 +
           (C1328 * C2982 - C1323 * C2986 + C1330 * C2983 - C27887 * C2988) *
               C3109 +
           (C1328 * C3361 - C1323 * C3364 + C1330 * C3362 - C27887 * C3365) *
               C2980) *
              C27928 * C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eezy[6] += (-std::pow(Pi, 2.5) *
                  ((((C1325 * C146 - C1394 * C91 + C1326 * C615 - C1395 * C568 +
                      C1327 * C1397 - C1396 * C1332) *
                         C202 +
                     (C1325 * C453 - C1394 * C409 + C1326 * C859 -
                      C1395 * C817 + C1327 * C1775 - C1396 * C1719) *
                         C27939) *
                        C1323 +
                    ((C1404 - C1405 + C1406 - C1407 + C1408 - C1409) * C202 +
                     (C1779 - C1780 + C1781 - C1782 + C1783 - C1784) * C27939) *
                        C27887) *
                       C28119 * C28120 * C81 +
                   (((C1405 - C1404 + C1407 - C1406 + C1409 - C1408) * C202 +
                     (C1780 - C1779 + C1782 - C1781 + C1784 - C1783) * C27939) *
                        C1323 +
                    ((C1394 * C93 - C1325 * C148 + C1395 * C566 - C1326 * C617 +
                      C1396 * C1334 - C1327 * C1399) *
                         C202 +
                     (C1394 * C411 - C1325 * C455 + C1395 * C819 -
                      C1326 * C861 + C1396 * C1721 - C1327 * C1777) *
                         C27939) *
                        C27887) *
                       C28119 * C28120 * C82)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  ((((C27928 * C146 - C145 * C91) * C202 +
                     (C27928 * C453 - C145 * C409) * C27939) *
                        C73 +
                    ((C157 - C158) * C202 + (C459 - C460) * C27939) * C74 +
                    ((C161 - C162) * C202 + (C461 - C462) * C27939) * C75 +
                    ((C165 - C166) * C202 + (C463 - C464) * C27939) * C76) *
                       C28119 * C28120 * C81 +
                   (((C158 - C157) * C202 + (C460 - C459) * C27939) * C73 +
                    ((C162 - C161) * C202 + (C462 - C461) * C27939) * C74 +
                    ((C166 - C165) * C202 + (C464 - C463) * C27939) * C75 +
                    ((C145 * C95 - C27928 * C150) * C202 +
                     (C145 * C413 - C27928 * C457) * C27939) *
                        C76) *
                       C28119 * C28120 * C82)) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((((C27928 * C146 - C145 * C91) * C3107 +
                     (C27928 * C453 - C145 * C409) * C2978 +
                     (C27928 * C987 - C145 * C940) * C3108 +
                     (C27928 * C1231 - C145 * C1189) * C2979 +
                     (C27928 * C3043 - C145 * C2981) * C3109 +
                     (C27928 * C3416 - C145 * C3360) * C2980) *
                        C1323 +
                    ((C157 - C158) * C3107 + (C459 - C460) * C2978 +
                     (C3050 - C3051) * C3108 + (C3420 - C3421) * C2979 +
                     (C3054 - C3055) * C3109 + (C3422 - C3423) * C2980) *
                        C27887) *
                       C28119 * C28120 * C81 +
                   (((C158 - C157) * C3107 + (C460 - C459) * C2978 +
                     (C3051 - C3050) * C3108 + (C3421 - C3420) * C2979 +
                     (C3055 - C3054) * C3109 + (C3423 - C3422) * C2980) *
                        C1323 +
                    ((C162 - C161) * C3107 + (C462 - C461) * C2978 +
                     (C145 * C938 - C27928 * C989) * C3108 +
                     (C145 * C1191 - C27928 * C1233) * C2979 +
                     (C145 * C2983 - C27928 * C3045) * C3109 +
                     (C145 * C3362 - C27928 * C3418) * C2980) *
                        C27887) *
                       C28119 * C28120 * C82)) /
                     (p * q * std::sqrt(p + q));
    d2eezz[6] +=
        (-std::pow(Pi, 2.5) *
         ((((C202 * C203 - C498 * C91 - C202 * C409 + C27939 * C499) * C1325 +
            (C202 * C657 - C498 * C568 - C202 * C817 + C27939 * C900) * C1326 +
            (C202 * C1465 - C498 * C1332 - C202 * C1719 + C27939 * C1834) *
                C1327) *
               C1323 +
           (C1838 + C1853 + C1854) * C27887) *
              C28119 * C28120 * C81 -
          (((C202 * C1467 - C498 * C1334 - C202 * C1721 + C27939 * C1836) *
                C1327 +
            (C202 * C659 - C498 * C566 - C202 * C819 + C27939 * C898) * C1326 +
            C524 * C1325) *
               C27887 +
           (C1854 + C1853 + C1838) * C1323) *
              C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C202 * C203 - C498 * C91 - C202 * C409 + C27939 * C499) * C27928 *
               C73 +
           C526 * C74 + C527 * C75 + C528 * C76) *
              C28119 * C28120 * C81 -
          ((C202 * C207 - C498 * C95 - C202 * C413 + C27939 * C503) * C27928 *
               C76 +
           C528 * C75 + C527 * C74 + C526 * C73) *
              C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C3107 * C203 - C3473 * C91 - C3107 * C409 + C2978 * C499 +
            C3108 * C1029 - C3474 * C940 - C3108 * C1189 + C2979 * C1272 +
            C3109 * C3110 - C3475 * C2981 - C3109 * C3360 + C2980 * C3476) *
               C27928 * C1323 +
           (C3498 + C3499 + C3500) * C27928 * C27887) *
              C28119 * C28120 * C81 -
          ((C3109 * C3112 - C3475 * C2983 - C3109 * C3362 + C2980 * C3478 +
            C3108 * C1031 - C3474 * C938 - C3108 * C1191 + C2979 * C1270 +
            C3107 * C205 - C3473 * C93 - C3107 * C411 + C2978 * C501) *
               C27928 * C27887 +
           (C3500 + C3499 + C3498) * C27928 * C1323) *
              C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eexx[7] +=
        (-std::pow(Pi, 2.5) *
         (((C1328 * C96 - C1329 * C91 - C1328 * C97 + C1323 * C106 +
            C1330 * C98 - C1331 * C92 - C1330 * C99 + C27887 * C107) *
               C27939 * C1325 +
           (C1937 + C1938) * C27939 * C1326 +
           (C1939 + C1940) * C27939 * C1327) *
              C28119 * C562 -
          ((C1330 * C1906 - C1331 * C1904 - C1330 * C1907 + C27887 * C1910 +
            C1328 * C1908 - C1329 * C1905 - C1328 * C1909 + C1323 * C1911) *
               C27939 * C1327 +
           (C1940 + C1939) * C27939 * C1326 +
           (C1938 + C1937) * C27939 * C1325) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C83 * C96 - C84 * C91 - C83 * C97 + C73 * C106 + C85 * C98 -
           C86 * C92 - C85 * C99 + C74 * C107 + C87 * C100 - C88 * C93 -
           C87 * C101 + C75 * C108 + C89 * C102 - C90 * C94 - C89 * C103 +
           C76 * C109) *
              C27939 * C27928 * C28119 * C562 -
          (C89 * C569 - C90 * C565 - C89 * C570 + C76 * C577 + C87 * C571 -
           C88 * C566 - C87 * C572 + C75 * C578 + C85 * C573 - C86 * C567 -
           C85 * C574 + C74 * C579 + C83 * C575 - C84 * C568 - C83 * C576 +
           C73 * C580) *
              C27939 * C27928 * C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C1328 * C96 - C1329 * C91 - C1328 * C97 + C1323 * C106 +
            C1330 * C98 - C1331 * C92 - C1330 * C99 + C27887 * C107) *
               C2978 +
           (C1328 * C947 - C1329 * C940 - C1328 * C948 + C1323 * C952 +
            C1330 * C945 - C1331 * C939 - C1330 * C946 + C27887 * C951) *
               C2979 +
           (C1328 * C2984 - C1329 * C2981 - C1328 * C2985 + C1323 * C2990 +
            C1330 * C2986 - C1331 * C2982 - C1330 * C2987 + C27887 * C2991) *
               C2980) *
              C27928 * C28119 * C562 -
          ((C1330 * C3552 - C1331 * C3550 - C1330 * C3553 + C27887 * C3556 +
            C1328 * C3554 - C1329 * C3551 - C1328 * C3555 + C1323 * C3557) *
               C2980 +
           (C1330 * C2472 - C1331 * C2466 - C1330 * C2473 + C27887 * C2478 +
            C1328 * C2474 - C1329 * C2467 - C1328 * C2475 + C1323 * C2479) *
               C2979 +
           (C1938 + C1937) * C2978) *
              C27928 * C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q));
    d2eexy[7] +=
        (-std::pow(Pi, 2.5) *
         (((C1325 * C146 - C1394 * C91 + C1326 * C615 - C1395 * C568 +
            C1327 * C1397 - C1396 * C1332) *
               C1328 +
           (C1325 * C151 - C1394 * C97 + C1326 * C619 - C1395 * C576 +
            C1327 * C1400 - C1396 * C1336) *
               C1323 +
           (C1404 - C1405 + C1406 - C1407 + C1408 - C1409) * C1330 +
           (C1410 - C1411 + C1412 - C1413 + C1414 - C1415) * C27887) *
              C27939 * C28119 * C562 +
          ((C1394 * C568 - C1325 * C615 + C1395 * C1332 - C1326 * C1397 +
            C1396 * C1905 - C1327 * C1990) *
               C1328 +
           (C1394 * C576 - C1325 * C619 + C1395 * C1336 - C1326 * C1400 +
            C1396 * C1909 - C1327 * C1992) *
               C1323 +
           (C1394 * C567 - C1325 * C616 + C1395 * C1333 - C1326 * C1398 +
            C1396 * C1904 - C1327 * C1991) *
               C1330 +
           (C1394 * C574 - C1325 * C620 + C1395 * C1338 - C1326 * C1401 +
            C1396 * C1907 - C1327 * C1993) *
               C27887) *
              C27939 * C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C27928 * C146 - C145 * C91) * C83 +
           (C27928 * C151 - C145 * C97) * C73 + (C157 - C158) * C85 +
           (C159 - C160) * C74 + (C161 - C162) * C87 + (C163 - C164) * C75 +
           (C165 - C166) * C89 + (C167 - C168) * C76) *
              C27939 * C28119 * C562 +
          ((C145 * C568 - C27928 * C615) * C83 +
           (C145 * C576 - C27928 * C619) * C73 +
           (C145 * C567 - C27928 * C616) * C85 +
           (C145 * C574 - C27928 * C620) * C74 +
           (C145 * C566 - C27928 * C617) * C87 +
           (C145 * C572 - C27928 * C621) * C75 +
           (C145 * C565 - C27928 * C618) * C89 +
           (C145 * C570 - C27928 * C622) * C76) *
              C27939 * C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C27928 * C146 - C145 * C91) * C1328 +
            (C27928 * C151 - C145 * C97) * C1323 + (C157 - C158) * C1330 +
            (C159 - C160) * C27887) *
               C2978 +
           ((C27928 * C987 - C145 * C940) * C1328 +
            (C27928 * C991 - C145 * C948) * C1323 + (C3050 - C3051) * C1330 +
            (C3052 - C3053) * C27887) *
               C2979 +
           ((C27928 * C3043 - C145 * C2981) * C1328 +
            (C27928 * C3046 - C145 * C2985) * C1323 + (C3054 - C3055) * C1330 +
            (C3056 - C3057) * C27887) *
               C2980) *
              C28119 * C562 +
          (((C145 * C568 - C27928 * C615) * C1328 +
            (C145 * C576 - C27928 * C619) * C1323 +
            (C145 * C567 - C27928 * C616) * C1330 +
            (C145 * C574 - C27928 * C620) * C27887) *
               C2978 +
           ((C145 * C2467 - C27928 * C2530) * C1328 +
            (C145 * C2475 - C27928 * C2534) * C1323 +
            (C145 * C2466 - C27928 * C2532) * C1330 +
            (C145 * C2473 - C27928 * C2536) * C27887) *
               C2979 +
           ((C145 * C3551 - C27928 * C3608) * C1328 +
            (C145 * C3555 - C27928 * C3610) * C1323 +
            (C145 * C3550 - C27928 * C3609) * C1330 +
            (C145 * C3553 - C27928 * C3611) * C27887) *
               C2980) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q));
    d2eexz[7] +=
        (-std::pow(Pi, 2.5) *
         ((((C27939 * C203 - C202 * C91) * C1328 +
            (C27939 * C208 - C202 * C97) * C1323 + (C214 - C215) * C1330 +
            (C216 - C217) * C27887) *
               C1325 +
           ((C2049 - C2050) * C1328 + (C2051 - C2052) * C1323 +
            (C1472 - C1473) * C1330 + (C1474 - C1475) * C27887) *
               C1326 +
           ((C2053 - C2054) * C1328 + (C2055 - C2056) * C1323 +
            (C1476 - C1477) * C1330 + (C1478 - C1479) * C27887) *
               C1327) *
              C28119 * C562 +
          (((C2050 - C2049) * C1328 + (C2052 - C2051) * C1323 +
            (C1473 - C1472) * C1330 + (C1475 - C1474) * C27887) *
               C1325 +
           ((C2054 - C2053) * C1328 + (C2056 - C2055) * C1323 +
            (C1477 - C1476) * C1330 + (C1479 - C1478) * C27887) *
               C1326 +
           ((C202 * C1905 - C27939 * C2044) * C1328 +
            (C202 * C1909 - C27939 * C2046) * C1323 +
            (C202 * C1904 - C27939 * C2045) * C1330 +
            (C202 * C1907 - C27939 * C2047) * C27887) *
               C1327) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C27939 * C203 - C202 * C91) * C83 +
           (C27939 * C208 - C202 * C97) * C73 + (C214 - C215) * C85 +
           (C216 - C217) * C74 + (C218 - C219) * C87 + (C220 - C221) * C75 +
           (C222 - C223) * C89 + (C224 - C225) * C76) *
              C27928 * C28119 * C562 +
          ((C202 * C568 - C27939 * C657) * C83 +
           (C202 * C576 - C27939 * C661) * C73 +
           (C202 * C567 - C27939 * C658) * C85 +
           (C202 * C574 - C27939 * C662) * C74 +
           (C202 * C566 - C27939 * C659) * C87 +
           (C202 * C572 - C27939 * C663) * C75 +
           (C202 * C565 - C27939 * C660) * C89 +
           (C202 * C570 - C27939 * C664) * C76) *
              C27928 * C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C2978 * C203 - C3107 * C91 + C2979 * C1029 - C3108 * C940 +
            C2980 * C3110 - C3109 * C2981) *
               C1328 +
           (C2978 * C208 - C3107 * C97 + C2979 * C1033 - C3108 * C948 +
            C2980 * C3113 - C3109 * C2985) *
               C1323 +
           (C3117 - C3118 + C3119 - C3120 + C3121 - C3122) * C1330 +
           (C3123 - C3124 + C3125 - C3126 + C3127 - C3128) * C27887) *
              C27928 * C28119 * C562 +
          ((C3107 * C568 - C2978 * C657 + C3108 * C2467 - C2979 * C2588 +
            C3109 * C3551 - C2980 * C3662) *
               C1328 +
           (C3107 * C576 - C2978 * C661 + C3108 * C2475 - C2979 * C2592 +
            C3109 * C3555 - C2980 * C3664) *
               C1323 +
           (C3107 * C567 - C2978 * C658 + C3108 * C2466 - C2979 * C2589 +
            C3109 * C3550 - C2980 * C3663) *
               C1330 +
           (C3107 * C574 - C2978 * C662 + C3108 * C2473 - C2979 * C2593 +
            C3109 * C3553 - C2980 * C3665) *
               C27887) *
              C27928 * C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q));
    d2eeyx[7] +=
        (-std::pow(Pi, 2.5) *
         (((C1323 * C96 - C1328 * C91 + C27887 * C98 - C1330 * C92) * C1394 +
           (C1323 * C264 - C1328 * C259 + C27887 * C265 - C1330 * C260) *
               C1325 +
           (C2111 - C2112 + C2113 - C2114) * C1395 +
           (C2115 - C2116 + C2117 - C2118) * C1326 +
           (C2119 - C2120 + C2121 - C2122) * C1396 +
           (C2123 - C2124 + C2125 - C2126) * C1327) *
              C27939 * C28119 * C562 +
          ((C2112 - C2111 + C2114 - C2113) * C1394 +
           (C2116 - C2115 + C2118 - C2117) * C1325 +
           (C2120 - C2119 + C2122 - C2121) * C1395 +
           (C2124 - C2123 + C2126 - C2125) * C1326 +
           (C1328 * C1905 - C1323 * C1908 + C1330 * C1904 - C27887 * C1906) *
               C1396 +
           (C1328 * C2106 - C1323 * C2108 + C1330 * C2107 - C27887 * C2109) *
               C1327) *
              C27939 * C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C73 * C96 - C83 * C91 + C74 * C98 - C85 * C92 + C75 * C100 -
            C87 * C93 + C76 * C102 - C89 * C94) *
               C145 +
           (C73 * C264 - C83 * C259 + C74 * C265 - C85 * C260 + C75 * C266 -
            C87 * C261 + C76 * C267 - C89 * C262) *
               C27928) *
              C27939 * C28119 * C562 +
          ((C83 * C568 - C73 * C575 + C85 * C567 - C74 * C573 + C87 * C566 -
            C75 * C571 + C89 * C565 - C76 * C569) *
               C145 +
           (C83 * C699 - C73 * C703 + C85 * C700 - C74 * C704 + C87 * C701 -
            C75 * C705 + C89 * C702 - C76 * C706) *
               C27928) *
              C27939 * C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C1323 * C96 - C1328 * C91 + C27887 * C98 - C1330 * C92) * C145 +
            (C1323 * C264 - C1328 * C259 + C27887 * C265 - C1330 * C260) *
                C27928) *
               C2978 +
           ((C1323 * C947 - C1328 * C940 + C27887 * C945 - C1330 * C939) *
                C145 +
            (C1323 * C1075 - C1328 * C1071 + C27887 * C1076 - C1330 * C1072) *
                C27928) *
               C2979 +
           ((C1323 * C2984 - C1328 * C2981 + C27887 * C2986 - C1330 * C2982) *
                C145 +
            (C1323 * C3181 - C1328 * C3178 + C27887 * C3182 - C1330 * C3179) *
                C27928) *
               C2980) *
              C28119 * C562 +
          (((C2112 - C2111 + C2114 - C2113) * C145 +
            (C2116 - C2115 + C2118 - C2117) * C27928) *
               C2978 +
           ((C1328 * C2467 - C1323 * C2474 + C1330 * C2466 - C27887 * C2472) *
                C145 +
            (C1328 * C2646 - C1323 * C2650 + C1330 * C2647 - C27887 * C2651) *
                C27928) *
               C2979 +
           ((C1328 * C3551 - C1323 * C3554 + C1330 * C3550 - C27887 * C3552) *
                C145 +
            (C1328 * C3716 - C1323 * C3718 + C1330 * C3717 - C27887 * C3719) *
                C27928) *
               C2980) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q));
    d2eeyy[7] +=
        (-std::pow(Pi, 2.5) *
         (((C1394 * C146 - C1585 * C91 - C1394 * C259 + C1325 * C304 +
            C1395 * C615 - C1586 * C568 - C1395 * C699 + C1326 * C744 +
            C1396 * C1397 - C1587 * C1332 - C1396 * C1529 + C1327 * C1588) *
               C1323 +
           (C1610 + C1611 + C1612) * C27887) *
              C27939 * C28119 * C562 -
          ((C1396 * C1991 - C1587 * C1904 - C1396 * C2107 + C1327 * C2176 +
            C1395 * C1398 - C1586 * C1333 - C1395 * C1530 + C1326 * C1589 +
            C1394 * C616 - C1585 * C567 - C1394 * C700 + C1325 * C743) *
               C27887 +
           (C1396 * C1990 - C1587 * C1905 - C1396 * C2106 + C1327 * C2177 +
            C1395 * C1397 - C1586 * C1332 - C1395 * C1529 + C1326 * C1588 +
            C1394 * C615 - C1585 * C568 - C1394 * C699 + C1325 * C744) *
               C1323) *
              C27939 * C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C145 * C146 - C303 * C91 - C145 * C259 + C27928 * C304) * C73 +
           C328 * C74 + C329 * C75 + C330 * C76) *
              C27939 * C28119 * C562 -
          ((C145 * C618 - C303 * C565 - C145 * C702 + C27928 * C741) * C76 +
           (C145 * C617 - C303 * C566 - C145 * C701 + C27928 * C742) * C75 +
           (C145 * C616 - C303 * C567 - C145 * C700 + C27928 * C743) * C74 +
           (C145 * C615 - C303 * C568 - C145 * C699 + C27928 * C744) * C73) *
              C27939 * C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C145 * C146 - C303 * C91 - C145 * C259 + C27928 * C304) * C1323 +
            C328 * C27887) *
               C2978 +
           ((C145 * C987 - C303 * C940 - C145 * C1071 + C27928 * C1116) *
                C1323 +
            C3250 * C27887) *
               C2979 +
           ((C145 * C3043 - C303 * C2981 - C145 * C3178 + C27928 * C3234) *
                C1323 +
            C3251 * C27887) *
               C2980) *
              C28119 * C562 -
          (((C145 * C3609 - C303 * C3550 - C145 * C3717 + C27928 * C3770) *
                C27887 +
            (C145 * C3608 - C303 * C3551 - C145 * C3716 + C27928 * C3771) *
                C1323) *
               C2980 +
           ((C145 * C2532 - C303 * C2466 - C145 * C2647 + C27928 * C2705) *
                C27887 +
            (C145 * C2530 - C303 * C2467 - C145 * C2646 + C27928 * C2707) *
                C1323) *
               C2979 +
           ((C145 * C616 - C303 * C567 - C145 * C700 + C27928 * C743) * C27887 +
            (C145 * C615 - C303 * C568 - C145 * C699 + C27928 * C744) * C1323) *
               C2978) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q));
    d2eeyz[7] += (-std::pow(Pi, 2.5) *
                  ((((C27939 * C203 - C202 * C91) * C1394 +
                     (C27939 * C364 - C202 * C259) * C1325 +
                     (C2049 - C2050) * C1395 + (C2231 - C2232) * C1326 +
                     (C2053 - C2054) * C1396 + (C2233 - C2234) * C1327) *
                        C1323 +
                    ((C214 - C215) * C1394 + (C370 - C371) * C1325 +
                     (C1472 - C1473) * C1395 + (C1666 - C1667) * C1326 +
                     (C1476 - C1477) * C1396 + (C1668 - C1669) * C1327) *
                        C27887) *
                       C28119 * C562 +
                   (((C2050 - C2049) * C1394 + (C2232 - C2231) * C1325 +
                     (C2054 - C2053) * C1395 + (C2234 - C2233) * C1326 +
                     (C202 * C1905 - C27939 * C2044) * C1396 +
                     (C202 * C2106 - C27939 * C2228) * C1327) *
                        C1323 +
                    ((C1473 - C1472) * C1394 + (C1667 - C1666) * C1325 +
                     (C1477 - C1476) * C1395 + (C1669 - C1668) * C1326 +
                     (C202 * C1904 - C27939 * C2045) * C1396 +
                     (C202 * C2107 - C27939 * C2229) * C1327) *
                        C27887) *
                       C28119 * C563) *
                  C28121) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  ((((C27939 * C203 - C202 * C91) * C145 +
                     (C27939 * C364 - C202 * C259) * C27928) *
                        C73 +
                    ((C214 - C215) * C145 + (C370 - C371) * C27928) * C74 +
                    ((C218 - C219) * C145 + (C372 - C373) * C27928) * C75 +
                    ((C222 - C223) * C145 + (C374 - C375) * C27928) * C76) *
                       C28119 * C562 +
                   (((C202 * C568 - C27939 * C657) * C145 +
                     (C202 * C699 - C27939 * C779) * C27928) *
                        C73 +
                    ((C202 * C567 - C27939 * C658) * C145 +
                     (C202 * C700 - C27939 * C780) * C27928) *
                        C74 +
                    ((C202 * C566 - C27939 * C659) * C145 +
                     (C202 * C701 - C27939 * C781) * C27928) *
                        C75 +
                    ((C202 * C565 - C27939 * C660) * C145 +
                     (C202 * C702 - C27939 * C782) * C27928) *
                        C76) *
                       C28119 * C563) *
                  C28121) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((((C2978 * C203 - C3107 * C91 + C2979 * C1029 -
                      C3108 * C940 + C2980 * C3110 - C3109 * C2981) *
                         C145 +
                     (C2978 * C364 - C3107 * C259 + C2979 * C1151 -
                      C3108 * C1071 + C2980 * C3301 - C3109 * C3178) *
                         C27928) *
                        C1323 +
                    ((C3117 - C3118 + C3119 - C3120 + C3121 - C3122) * C145 +
                     (C3305 - C3306 + C3307 - C3308 + C3309 - C3310) * C27928) *
                        C27887) *
                       C28119 * C562 +
                   (((C3107 * C568 - C2978 * C657 + C3108 * C2467 -
                      C2979 * C2588 + C3109 * C3551 - C2980 * C3662) *
                         C145 +
                     (C3107 * C699 - C2978 * C779 + C3108 * C2646 -
                      C2979 * C2758 + C3109 * C3716 - C2980 * C3822) *
                         C27928) *
                        C1323 +
                    ((C3107 * C567 - C2978 * C658 + C3108 * C2466 -
                      C2979 * C2589 + C3109 * C3550 - C2980 * C3663) *
                         C145 +
                     (C3107 * C700 - C2978 * C780 + C3108 * C2647 -
                      C2979 * C2760 + C3109 * C3717 - C2980 * C3823) *
                         C27928) *
                        C27887) *
                       C28119 * C563) *
                  C28121) /
                     (p * q * std::sqrt(p + q));
    d2eezx[7] +=
        (-std::pow(Pi, 2.5) *
         ((((C1323 * C96 - C1328 * C91 + C27887 * C98 - C1330 * C92) * C202 +
            (C1323 * C414 - C1328 * C409 + C27887 * C415 - C1330 * C410) *
                C27939) *
               C1325 +
           ((C2111 - C2112 + C2113 - C2114) * C202 +
            (C2289 - C2290 + C2291 - C2292) * C27939) *
               C1326 +
           ((C2119 - C2120 + C2121 - C2122) * C202 +
            (C2293 - C2294 + C2295 - C2296) * C27939) *
               C1327) *
              C28119 * C562 +
          (((C2112 - C2111 + C2114 - C2113) * C202 +
            (C2290 - C2289 + C2292 - C2291) * C27939) *
               C1325 +
           ((C2120 - C2119 + C2122 - C2121) * C202 +
            (C2294 - C2293 + C2296 - C2295) * C27939) *
               C1326 +
           ((C1328 * C1905 - C1323 * C1908 + C1330 * C1904 - C27887 * C1906) *
                C202 +
            (C1328 * C2284 - C1323 * C2286 + C1330 * C2285 - C27887 * C2287) *
                C27939) *
               C1327) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C73 * C96 - C83 * C91 + C74 * C98 - C85 * C92 + C75 * C100 -
            C87 * C93 + C76 * C102 - C89 * C94) *
               C202 +
           (C73 * C414 - C83 * C409 + C74 * C415 - C85 * C410 + C75 * C416 -
            C87 * C411 + C76 * C417 - C89 * C412) *
               C27939) *
              C27928 * C28119 * C562 +
          ((C83 * C568 - C73 * C575 + C85 * C567 - C74 * C573 + C87 * C566 -
            C75 * C571 + C89 * C565 - C76 * C569) *
               C202 +
           (C83 * C817 - C73 * C821 + C85 * C818 - C74 * C822 + C87 * C819 -
            C75 * C823 + C89 * C820 - C76 * C824) *
               C27939) *
              C27928 * C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C1323 * C96 - C1328 * C91 + C27887 * C98 - C1330 * C92) * C3107 +
           (C1323 * C414 - C1328 * C409 + C27887 * C415 - C1330 * C410) *
               C2978 +
           (C1323 * C947 - C1328 * C940 + C27887 * C945 - C1330 * C939) *
               C3108 +
           (C1323 * C1193 - C1328 * C1189 + C27887 * C1194 - C1330 * C1190) *
               C2979 +
           (C1323 * C2984 - C1328 * C2981 + C27887 * C2986 - C1330 * C2982) *
               C3109 +
           (C1323 * C3363 - C1328 * C3360 + C27887 * C3364 - C1330 * C3361) *
               C2980) *
              C27928 * C28119 * C562 +
          ((C2112 - C2111 + C2114 - C2113) * C3107 +
           (C2290 - C2289 + C2292 - C2291) * C2978 +
           (C1328 * C2467 - C1323 * C2474 + C1330 * C2466 - C27887 * C2472) *
               C3108 +
           (C1328 * C2812 - C1323 * C2816 + C1330 * C2813 - C27887 * C2817) *
               C2979 +
           (C1328 * C3551 - C1323 * C3554 + C1330 * C3550 - C27887 * C3552) *
               C3109 +
           (C1328 * C3874 - C1323 * C3876 + C1330 * C3875 - C27887 * C3877) *
               C2980) *
              C27928 * C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q));
    d2eezy[7] += (-std::pow(Pi, 2.5) *
                  ((((C1325 * C146 - C1394 * C91 + C1326 * C615 - C1395 * C568 +
                      C1327 * C1397 - C1396 * C1332) *
                         C202 +
                     (C1325 * C453 - C1394 * C409 + C1326 * C859 -
                      C1395 * C817 + C1327 * C1775 - C1396 * C1719) *
                         C27939) *
                        C1323 +
                    ((C1404 - C1405 + C1406 - C1407 + C1408 - C1409) * C202 +
                     (C1779 - C1780 + C1781 - C1782 + C1783 - C1784) * C27939) *
                        C27887) *
                       C28119 * C562 +
                   (((C1394 * C568 - C1325 * C615 + C1395 * C1332 -
                      C1326 * C1397 + C1396 * C1905 - C1327 * C1990) *
                         C202 +
                     (C1394 * C817 - C1325 * C859 + C1395 * C1719 -
                      C1326 * C1775 + C1396 * C2284 - C1327 * C2346) *
                         C27939) *
                        C1323 +
                    ((C1394 * C567 - C1325 * C616 + C1395 * C1333 -
                      C1326 * C1398 + C1396 * C1904 - C1327 * C1991) *
                         C202 +
                     (C1394 * C818 - C1325 * C860 + C1395 * C1720 -
                      C1326 * C1776 + C1396 * C2285 - C1327 * C2347) *
                         C27939) *
                        C27887) *
                       C28119 * C563) *
                  C28121) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  ((((C27928 * C146 - C145 * C91) * C202 +
                     (C27928 * C453 - C145 * C409) * C27939) *
                        C73 +
                    ((C157 - C158) * C202 + (C459 - C460) * C27939) * C74 +
                    ((C161 - C162) * C202 + (C461 - C462) * C27939) * C75 +
                    ((C165 - C166) * C202 + (C463 - C464) * C27939) * C76) *
                       C28119 * C562 +
                   (((C145 * C568 - C27928 * C615) * C202 +
                     (C145 * C817 - C27928 * C859) * C27939) *
                        C73 +
                    ((C145 * C567 - C27928 * C616) * C202 +
                     (C145 * C818 - C27928 * C860) * C27939) *
                        C74 +
                    ((C145 * C566 - C27928 * C617) * C202 +
                     (C145 * C819 - C27928 * C861) * C27939) *
                        C75 +
                    ((C145 * C565 - C27928 * C618) * C202 +
                     (C145 * C820 - C27928 * C862) * C27939) *
                        C76) *
                       C28119 * C563) *
                  C28121) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((((C27928 * C146 - C145 * C91) * C3107 +
                     (C27928 * C453 - C145 * C409) * C2978 +
                     (C27928 * C987 - C145 * C940) * C3108 +
                     (C27928 * C1231 - C145 * C1189) * C2979 +
                     (C27928 * C3043 - C145 * C2981) * C3109 +
                     (C27928 * C3416 - C145 * C3360) * C2980) *
                        C1323 +
                    ((C157 - C158) * C3107 + (C459 - C460) * C2978 +
                     (C3050 - C3051) * C3108 + (C3420 - C3421) * C2979 +
                     (C3054 - C3055) * C3109 + (C3422 - C3423) * C2980) *
                        C27887) *
                       C28119 * C562 +
                   (((C145 * C568 - C27928 * C615) * C3107 +
                     (C145 * C817 - C27928 * C859) * C2978 +
                     (C145 * C2467 - C27928 * C2530) * C3108 +
                     (C145 * C2812 - C27928 * C2870) * C2979 +
                     (C145 * C3551 - C27928 * C3608) * C3109 +
                     (C145 * C3874 - C27928 * C3928) * C2980) *
                        C1323 +
                    ((C145 * C567 - C27928 * C616) * C3107 +
                     (C145 * C818 - C27928 * C860) * C2978 +
                     (C145 * C2466 - C27928 * C2532) * C3108 +
                     (C145 * C2813 - C27928 * C2872) * C2979 +
                     (C145 * C3550 - C27928 * C3609) * C3109 +
                     (C145 * C3875 - C27928 * C3929) * C2980) *
                        C27887) *
                       C28119 * C563) *
                  C28121) /
                     (p * q * std::sqrt(p + q));
    d2eezz[7] +=
        (-std::pow(Pi, 2.5) *
         ((((C202 * C203 - C498 * C91 - C202 * C409 + C27939 * C499) * C1325 +
            C2413 * C1326 + C2414 * C1327) *
               C1323 +
           (C1838 + C1853 + C1854) * C27887) *
              C28119 * C562 -
          (((C202 * C2045 - C498 * C1904 - C202 * C2285 + C27939 * C2398) *
                C1327 +
            C1852 * C1326 + C1851 * C1325) *
               C27887 +
           ((C202 * C2044 - C498 * C1905 - C202 * C2284 + C27939 * C2399) *
                C1327 +
            C2414 * C1326 + C2413 * C1325) *
               C1323) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C202 * C203 - C498 * C91 - C202 * C409 + C27939 * C499) * C27928 *
               C73 +
           C526 * C74 + C527 * C75 + C528 * C76) *
              C28119 * C562 -
          ((C202 * C660 - C498 * C565 - C202 * C820 + C27939 * C897) * C27928 *
               C76 +
           (C202 * C659 - C498 * C566 - C202 * C819 + C27939 * C898) * C27928 *
               C75 +
           (C202 * C658 - C498 * C567 - C202 * C818 + C27939 * C899) * C27928 *
               C74 +
           (C202 * C657 - C498 * C568 - C202 * C817 + C27939 * C900) * C27928 *
               C73) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C3107 * C203 - C3473 * C91 - C3107 * C409 + C2978 * C499 +
            C3108 * C1029 - C3474 * C940 - C3108 * C1189 + C2979 * C1272 +
            C3109 * C3110 - C3475 * C2981 - C3109 * C3360 + C2980 * C3476) *
               C27928 * C1323 +
           (C3498 + C3499 + C3500) * C27928 * C27887) *
              C28119 * C562 -
          ((C3109 * C3663 - C3475 * C3550 - C3109 * C3875 + C2980 * C3980 +
            C3108 * C2589 - C3474 * C2466 - C3108 * C2813 + C2979 * C2925 +
            C3107 * C658 - C3473 * C567 - C3107 * C818 + C2978 * C899) *
               C27928 * C27887 +
           (C3109 * C3662 - C3475 * C3551 - C3109 * C3874 + C2980 * C3981 +
            C3108 * C2588 - C3474 * C2467 - C3108 * C2812 + C2979 * C2927 +
            C3107 * C657 - C3473 * C568 - C3107 * C817 + C2978 * C900) *
               C27928 * C1323) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q));
    d2eexx[8] +=
        (-std::pow(Pi, 2.5) *
         (((C1328 * C96 - C1329 * C91 - C1328 * C97 + C1323 * C106 +
            C1330 * C98 - C1331 * C92 - C1330 * C99 + C27887 * C107) *
               C27939 * C1325 +
           (C1937 + C1938) * C27939 * C1326 +
           (C1939 + C1940) * C27939 * C1327) *
              C935 -
          ((C1330 * C2468 - C1331 * C2464 - C1330 * C2469 + C27887 * C2476 +
            C1328 * C2470 - C1329 * C2465 - C1328 * C2471 + C1323 * C2477) *
               C27939 * C1327 +
           (C1330 * C2472 - C1331 * C2466 - C1330 * C2473 + C27887 * C2478 +
            C1328 * C2474 - C1329 * C2467 - C1328 * C2475 + C1323 * C2479) *
               C27939 * C1326 +
           (C1330 * C945 - C1331 * C939 - C1330 * C946 + C27887 * C951 +
            C1328 * C947 - C1329 * C940 - C1328 * C948 + C1323 * C952) *
               C27939 * C1325) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C83 * C96 - C84 * C91 - C83 * C97 + C73 * C106 + C85 * C98 -
           C86 * C92 - C85 * C99 + C74 * C107 + C87 * C100 - C88 * C93 -
           C87 * C101 + C75 * C108 + C89 * C102 - C90 * C94 - C89 * C103 +
           C76 * C109) *
              C27939 * C27928 * C935 -
          (C89 * C941 - C90 * C937 - C89 * C942 + C76 * C949 + C87 * C943 -
           C88 * C938 - C87 * C944 + C75 * C950 + C85 * C945 - C86 * C939 -
           C85 * C946 + C74 * C951 + C83 * C947 - C84 * C940 - C83 * C948 +
           C73 * C952) *
              C27939 * C27928 * C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C1328 * C96 - C1329 * C91 - C1328 * C97 + C1323 * C106 +
            C1330 * C98 - C1331 * C92 - C1330 * C99 + C27887 * C107) *
               C2978 +
           (C4065 + C4066) * C2979 + (C4067 + C4068) * C2980) *
              C27928 * C935 -
          ((C1330 * C4034 - C1331 * C4032 - C1330 * C4035 + C27887 * C4038 +
            C1328 * C4036 - C1329 * C4033 - C1328 * C4037 + C1323 * C4039) *
               C2980 +
           (C4068 + C4067) * C2979 + (C4066 + C4065) * C2978) *
              C27928 * C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q));
    d2eexy[8] +=
        (-std::pow(Pi, 2.5) *
         (((C1325 * C146 - C1394 * C91 + C1326 * C615 - C1395 * C568 +
            C1327 * C1397 - C1396 * C1332) *
               C1328 +
           (C1325 * C151 - C1394 * C97 + C1326 * C619 - C1395 * C576 +
            C1327 * C1400 - C1396 * C1336) *
               C1323 +
           (C1404 - C1405 + C1406 - C1407 + C1408 - C1409) * C1330 +
           (C1410 - C1411 + C1412 - C1413 + C1414 - C1415) * C27887) *
              C27939 * C935 +
          ((C1394 * C940 - C1325 * C987 + C1395 * C2467 - C1326 * C2530 +
            C1396 * C2465 - C1327 * C2531) *
               C1328 +
           (C1394 * C948 - C1325 * C991 + C1395 * C2475 - C1326 * C2534 +
            C1396 * C2471 - C1327 * C2535) *
               C1323 +
           (C1394 * C939 - C1325 * C988 + C1395 * C2466 - C1326 * C2532 +
            C1396 * C2464 - C1327 * C2533) *
               C1330 +
           (C1394 * C946 - C1325 * C992 + C1395 * C2473 - C1326 * C2536 +
            C1396 * C2469 - C1327 * C2537) *
               C27887) *
              C27939 * C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C27928 * C146 - C145 * C91) * C83 +
           (C27928 * C151 - C145 * C97) * C73 + (C157 - C158) * C85 +
           (C159 - C160) * C74 + (C161 - C162) * C87 + (C163 - C164) * C75 +
           (C165 - C166) * C89 + (C167 - C168) * C76) *
              C27939 * C935 +
          ((C145 * C940 - C27928 * C987) * C83 +
           (C145 * C948 - C27928 * C991) * C73 +
           (C145 * C939 - C27928 * C988) * C85 +
           (C145 * C946 - C27928 * C992) * C74 +
           (C145 * C938 - C27928 * C989) * C87 +
           (C145 * C944 - C27928 * C993) * C75 +
           (C145 * C937 - C27928 * C990) * C89 +
           (C145 * C942 - C27928 * C994) * C76) *
              C27939 * C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C27928 * C146 - C145 * C91) * C1328 +
            (C27928 * C151 - C145 * C97) * C1323 + (C157 - C158) * C1330 +
            (C159 - C160) * C27887) *
               C2978 +
           ((C4123 - C4124) * C1328 + (C4125 - C4126) * C1323 +
            (C3050 - C3051) * C1330 + (C3052 - C3053) * C27887) *
               C2979 +
           ((C4127 - C4128) * C1328 + (C4129 - C4130) * C1323 +
            (C3054 - C3055) * C1330 + (C3056 - C3057) * C27887) *
               C2980) *
              C935 +
          (((C4124 - C4123) * C1328 + (C4126 - C4125) * C1323 +
            (C3051 - C3050) * C1330 + (C3053 - C3052) * C27887) *
               C2978 +
           ((C4128 - C4127) * C1328 + (C4130 - C4129) * C1323 +
            (C3055 - C3054) * C1330 + (C3057 - C3056) * C27887) *
               C2979 +
           ((C145 * C4033 - C27928 * C4118) * C1328 +
            (C145 * C4037 - C27928 * C4120) * C1323 +
            (C145 * C4032 - C27928 * C4119) * C1330 +
            (C145 * C4035 - C27928 * C4121) * C27887) *
               C2980) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q));
    d2eexz[8] +=
        (-std::pow(Pi, 2.5) *
         ((((C27939 * C203 - C202 * C91) * C1328 +
            (C27939 * C208 - C202 * C97) * C1323 + (C214 - C215) * C1330 +
            (C216 - C217) * C27887) *
               C1325 +
           ((C2049 - C2050) * C1328 + (C2051 - C2052) * C1323 +
            (C1472 - C1473) * C1330 + (C1474 - C1475) * C27887) *
               C1326 +
           ((C2053 - C2054) * C1328 + (C2055 - C2056) * C1323 +
            (C1476 - C1477) * C1330 + (C1478 - C1479) * C27887) *
               C1327) *
              C935 +
          (((C202 * C940 - C27939 * C1029) * C1328 +
            (C202 * C948 - C27939 * C1033) * C1323 +
            (C202 * C939 - C27939 * C1030) * C1330 +
            (C202 * C946 - C27939 * C1034) * C27887) *
               C1325 +
           ((C202 * C2467 - C27939 * C2588) * C1328 +
            (C202 * C2475 - C27939 * C2592) * C1323 +
            (C202 * C2466 - C27939 * C2589) * C1330 +
            (C202 * C2473 - C27939 * C2593) * C27887) *
               C1326 +
           ((C202 * C2465 - C27939 * C2590) * C1328 +
            (C202 * C2471 - C27939 * C2594) * C1323 +
            (C202 * C2464 - C27939 * C2591) * C1330 +
            (C202 * C2469 - C27939 * C2595) * C27887) *
               C1327) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C27939 * C203 - C202 * C91) * C83 +
           (C27939 * C208 - C202 * C97) * C73 + (C214 - C215) * C85 +
           (C216 - C217) * C74 + (C218 - C219) * C87 + (C220 - C221) * C75 +
           (C222 - C223) * C89 + (C224 - C225) * C76) *
              C27928 * C935 +
          ((C202 * C940 - C27939 * C1029) * C83 +
           (C202 * C948 - C27939 * C1033) * C73 +
           (C202 * C939 - C27939 * C1030) * C85 +
           (C202 * C946 - C27939 * C1034) * C74 +
           (C202 * C938 - C27939 * C1031) * C87 +
           (C202 * C944 - C27939 * C1035) * C75 +
           (C202 * C937 - C27939 * C1032) * C89 +
           (C202 * C942 - C27939 * C1036) * C76) *
              C27928 * C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C2978 * C203 - C3107 * C91 + C2979 * C1029 - C3108 * C940 +
            C2980 * C3110 - C3109 * C2981) *
               C1328 +
           (C2978 * C208 - C3107 * C97 + C2979 * C1033 - C3108 * C948 +
            C2980 * C3113 - C3109 * C2985) *
               C1323 +
           (C3117 - C3118 + C3119 - C3120 + C3121 - C3122) * C1330 +
           (C3123 - C3124 + C3125 - C3126 + C3127 - C3128) * C27887) *
              C27928 * C935 +
          ((C3107 * C940 - C2978 * C1029 + C3108 * C2981 - C2979 * C3110 +
            C3109 * C4033 - C2980 * C4180) *
               C1328 +
           (C3107 * C948 - C2978 * C1033 + C3108 * C2985 - C2979 * C3113 +
            C3109 * C4037 - C2980 * C4182) *
               C1323 +
           (C3107 * C939 - C2978 * C1030 + C3108 * C2982 - C2979 * C3111 +
            C3109 * C4032 - C2980 * C4181) *
               C1330 +
           (C3107 * C946 - C2978 * C1034 + C3108 * C2987 - C2979 * C3114 +
            C3109 * C4035 - C2980 * C4183) *
               C27887) *
              C27928 * C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q));
    d2eeyx[8] +=
        (-std::pow(Pi, 2.5) *
         (((C1323 * C96 - C1328 * C91 + C27887 * C98 - C1330 * C92) * C1394 +
           (C1323 * C264 - C1328 * C259 + C27887 * C265 - C1330 * C260) *
               C1325 +
           (C2111 - C2112 + C2113 - C2114) * C1395 +
           (C2115 - C2116 + C2117 - C2118) * C1326 +
           (C2119 - C2120 + C2121 - C2122) * C1396 +
           (C2123 - C2124 + C2125 - C2126) * C1327) *
              C27939 * C935 +
          ((C1328 * C940 - C1323 * C947 + C1330 * C939 - C27887 * C945) *
               C1394 +
           (C1328 * C1071 - C1323 * C1075 + C1330 * C1072 - C27887 * C1076) *
               C1325 +
           (C1328 * C2467 - C1323 * C2474 + C1330 * C2466 - C27887 * C2472) *
               C1395 +
           (C1328 * C2646 - C1323 * C2650 + C1330 * C2647 - C27887 * C2651) *
               C1326 +
           (C1328 * C2465 - C1323 * C2470 + C1330 * C2464 - C27887 * C2468) *
               C1396 +
           (C1328 * C2648 - C1323 * C2652 + C1330 * C2649 - C27887 * C2653) *
               C1327) *
              C27939 * C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C73 * C96 - C83 * C91 + C74 * C98 - C85 * C92 + C75 * C100 -
            C87 * C93 + C76 * C102 - C89 * C94) *
               C145 +
           (C73 * C264 - C83 * C259 + C74 * C265 - C85 * C260 + C75 * C266 -
            C87 * C261 + C76 * C267 - C89 * C262) *
               C27928) *
              C27939 * C935 +
          ((C83 * C940 - C73 * C947 + C85 * C939 - C74 * C945 + C87 * C938 -
            C75 * C943 + C89 * C937 - C76 * C941) *
               C145 +
           (C83 * C1071 - C73 * C1075 + C85 * C1072 - C74 * C1076 +
            C87 * C1073 - C75 * C1077 + C89 * C1074 - C76 * C1078) *
               C27928) *
              C27939 * C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C1323 * C96 - C1328 * C91 + C27887 * C98 - C1330 * C92) * C145 +
            (C1323 * C264 - C1328 * C259 + C27887 * C265 - C1330 * C260) *
                C27928) *
               C2978 +
           ((C4239 - C4240 + C4241 - C4242) * C145 +
            (C4243 - C4244 + C4245 - C4246) * C27928) *
               C2979 +
           ((C4247 - C4248 + C4249 - C4250) * C145 +
            (C4251 - C4252 + C4253 - C4254) * C27928) *
               C2980) *
              C935 +
          (((C4240 - C4239 + C4242 - C4241) * C145 +
            (C4244 - C4243 + C4246 - C4245) * C27928) *
               C2978 +
           ((C4248 - C4247 + C4250 - C4249) * C145 +
            (C4252 - C4251 + C4254 - C4253) * C27928) *
               C2979 +
           ((C1328 * C4033 - C1323 * C4036 + C1330 * C4032 - C27887 * C4034) *
                C145 +
            (C1328 * C4234 - C1323 * C4236 + C1330 * C4235 - C27887 * C4237) *
                C27928) *
               C2980) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q));
    d2eeyy[8] +=
        (-std::pow(Pi, 2.5) *
         (((C1394 * C146 - C1585 * C91 - C1394 * C259 + C1325 * C304 +
            C1395 * C615 - C1586 * C568 - C1395 * C699 + C1326 * C744 +
            C1396 * C1397 - C1587 * C1332 - C1396 * C1529 + C1327 * C1588) *
               C1323 +
           (C1610 + C1611 + C1612) * C27887) *
              C27939 * C935 -
          ((C1396 * C2533 - C1587 * C2464 - C1396 * C2649 + C1327 * C2704 +
            C1395 * C2532 - C1586 * C2466 - C1395 * C2647 + C1326 * C2705 +
            C1394 * C988 - C1585 * C939 - C1394 * C1072 + C1325 * C1115) *
               C27887 +
           (C1396 * C2531 - C1587 * C2465 - C1396 * C2648 + C1327 * C2706 +
            C1395 * C2530 - C1586 * C2467 - C1395 * C2646 + C1326 * C2707 +
            C1394 * C987 - C1585 * C940 - C1394 * C1071 + C1325 * C1116) *
               C1323) *
              C27939 * C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C145 * C146 - C303 * C91 - C145 * C259 + C27928 * C304) * C73 +
           C328 * C74 + C329 * C75 + C330 * C76) *
              C27939 * C935 -
          ((C145 * C990 - C303 * C937 - C145 * C1074 + C27928 * C1113) * C76 +
           (C145 * C989 - C303 * C938 - C145 * C1073 + C27928 * C1114) * C75 +
           (C145 * C988 - C303 * C939 - C145 * C1072 + C27928 * C1115) * C74 +
           (C145 * C987 - C303 * C940 - C145 * C1071 + C27928 * C1116) * C73) *
              C27939 * C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C145 * C146 - C303 * C91 - C145 * C259 + C27928 * C304) * C1323 +
            C328 * C27887) *
               C2978 +
           (C4323 + C4311) * C2979 + (C4324 + C4316) * C2980) *
              C935 -
          (((C145 * C4119 - C303 * C4032 - C145 * C4235 + C27928 * C4304) *
                C27887 +
            (C145 * C4118 - C303 * C4033 - C145 * C4234 + C27928 * C4305) *
                C1323) *
               C2980 +
           (C4316 + C4324) * C2979 + (C4311 + C4323) * C2978) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q));
    d2eeyz[8] += (-std::pow(Pi, 2.5) *
                  ((((C27939 * C203 - C202 * C91) * C1394 +
                     (C27939 * C364 - C202 * C259) * C1325 +
                     (C2049 - C2050) * C1395 + (C2231 - C2232) * C1326 +
                     (C2053 - C2054) * C1396 + (C2233 - C2234) * C1327) *
                        C1323 +
                    ((C214 - C215) * C1394 + (C370 - C371) * C1325 +
                     (C1472 - C1473) * C1395 + (C1666 - C1667) * C1326 +
                     (C1476 - C1477) * C1396 + (C1668 - C1669) * C1327) *
                        C27887) *
                       C935 +
                   (((C202 * C940 - C27939 * C1029) * C1394 +
                     (C202 * C1071 - C27939 * C1151) * C1325 +
                     (C202 * C2467 - C27939 * C2588) * C1395 +
                     (C202 * C2646 - C27939 * C2758) * C1326 +
                     (C202 * C2465 - C27939 * C2590) * C1396 +
                     (C202 * C2648 - C27939 * C2759) * C1327) *
                        C1323 +
                    ((C202 * C939 - C27939 * C1030) * C1394 +
                     (C202 * C1072 - C27939 * C1152) * C1325 +
                     (C202 * C2466 - C27939 * C2589) * C1395 +
                     (C202 * C2647 - C27939 * C2760) * C1326 +
                     (C202 * C2464 - C27939 * C2591) * C1396 +
                     (C202 * C2649 - C27939 * C2761) * C1327) *
                        C27887) *
                       C936) *
                  C28120 * C28121) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  ((((C27939 * C203 - C202 * C91) * C145 +
                     (C27939 * C364 - C202 * C259) * C27928) *
                        C73 +
                    ((C214 - C215) * C145 + (C370 - C371) * C27928) * C74 +
                    ((C218 - C219) * C145 + (C372 - C373) * C27928) * C75 +
                    ((C222 - C223) * C145 + (C374 - C375) * C27928) * C76) *
                       C935 +
                   (((C202 * C940 - C27939 * C1029) * C145 +
                     (C202 * C1071 - C27939 * C1151) * C27928) *
                        C73 +
                    ((C202 * C939 - C27939 * C1030) * C145 +
                     (C202 * C1072 - C27939 * C1152) * C27928) *
                        C74 +
                    ((C202 * C938 - C27939 * C1031) * C145 +
                     (C202 * C1073 - C27939 * C1153) * C27928) *
                        C75 +
                    ((C202 * C937 - C27939 * C1032) * C145 +
                     (C202 * C1074 - C27939 * C1154) * C27928) *
                        C76) *
                       C936) *
                  C28120 * C28121) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((((C2978 * C203 - C3107 * C91 + C2979 * C1029 -
                      C3108 * C940 + C2980 * C3110 - C3109 * C2981) *
                         C145 +
                     (C2978 * C364 - C3107 * C259 + C2979 * C1151 -
                      C3108 * C1071 + C2980 * C3301 - C3109 * C3178) *
                         C27928) *
                        C1323 +
                    ((C3117 - C3118 + C3119 - C3120 + C3121 - C3122) * C145 +
                     (C3305 - C3306 + C3307 - C3308 + C3309 - C3310) * C27928) *
                        C27887) *
                       C935 +
                   (((C3107 * C940 - C2978 * C1029 + C3108 * C2981 -
                      C2979 * C3110 + C3109 * C4033 - C2980 * C4180) *
                         C145 +
                     (C3107 * C1071 - C2978 * C1151 + C3108 * C3178 -
                      C2979 * C3301 + C3109 * C4234 - C2980 * C4374) *
                         C27928) *
                        C1323 +
                    ((C3107 * C939 - C2978 * C1030 + C3108 * C2982 -
                      C2979 * C3111 + C3109 * C4032 - C2980 * C4181) *
                         C145 +
                     (C3107 * C1072 - C2978 * C1152 + C3108 * C3179 -
                      C2979 * C3302 + C3109 * C4235 - C2980 * C4375) *
                         C27928) *
                        C27887) *
                       C936) *
                  C28120 * C28121) /
                     (p * q * std::sqrt(p + q));
    d2eezx[8] +=
        (-std::pow(Pi, 2.5) *
         ((((C1323 * C96 - C1328 * C91 + C27887 * C98 - C1330 * C92) * C202 +
            (C1323 * C414 - C1328 * C409 + C27887 * C415 - C1330 * C410) *
                C27939) *
               C1325 +
           ((C2111 - C2112 + C2113 - C2114) * C202 +
            (C2289 - C2290 + C2291 - C2292) * C27939) *
               C1326 +
           ((C2119 - C2120 + C2121 - C2122) * C202 +
            (C2293 - C2294 + C2295 - C2296) * C27939) *
               C1327) *
              C935 +
          (((C1328 * C940 - C1323 * C947 + C1330 * C939 - C27887 * C945) *
                C202 +
            (C1328 * C1189 - C1323 * C1193 + C1330 * C1190 - C27887 * C1194) *
                C27939) *
               C1325 +
           ((C1328 * C2467 - C1323 * C2474 + C1330 * C2466 - C27887 * C2472) *
                C202 +
            (C1328 * C2812 - C1323 * C2816 + C1330 * C2813 - C27887 * C2817) *
                C27939) *
               C1326 +
           ((C1328 * C2465 - C1323 * C2470 + C1330 * C2464 - C27887 * C2468) *
                C202 +
            (C1328 * C2814 - C1323 * C2818 + C1330 * C2815 - C27887 * C2819) *
                C27939) *
               C1327) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C73 * C96 - C83 * C91 + C74 * C98 - C85 * C92 + C75 * C100 -
            C87 * C93 + C76 * C102 - C89 * C94) *
               C202 +
           (C73 * C414 - C83 * C409 + C74 * C415 - C85 * C410 + C75 * C416 -
            C87 * C411 + C76 * C417 - C89 * C412) *
               C27939) *
              C27928 * C935 +
          ((C83 * C940 - C73 * C947 + C85 * C939 - C74 * C945 + C87 * C938 -
            C75 * C943 + C89 * C937 - C76 * C941) *
               C202 +
           (C83 * C1189 - C73 * C1193 + C85 * C1190 - C74 * C1194 +
            C87 * C1191 - C75 * C1195 + C89 * C1192 - C76 * C1196) *
               C27939) *
              C27928 * C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C1323 * C96 - C1328 * C91 + C27887 * C98 - C1330 * C92) * C3107 +
           (C1323 * C414 - C1328 * C409 + C27887 * C415 - C1330 * C410) *
               C2978 +
           (C4239 - C4240 + C4241 - C4242) * C3108 +
           (C4431 - C4432 + C4433 - C4434) * C2979 +
           (C4247 - C4248 + C4249 - C4250) * C3109 +
           (C4435 - C4436 + C4437 - C4438) * C2980) *
              C27928 * C935 +
          ((C4240 - C4239 + C4242 - C4241) * C3107 +
           (C4432 - C4431 + C4434 - C4433) * C2978 +
           (C4248 - C4247 + C4250 - C4249) * C3108 +
           (C4436 - C4435 + C4438 - C4437) * C2979 +
           (C1328 * C4033 - C1323 * C4036 + C1330 * C4032 - C27887 * C4034) *
               C3109 +
           (C1328 * C4426 - C1323 * C4428 + C1330 * C4427 - C27887 * C4429) *
               C2980) *
              C27928 * C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q));
    d2eezy[8] += (-std::pow(Pi, 2.5) *
                  ((((C1325 * C146 - C1394 * C91 + C1326 * C615 - C1395 * C568 +
                      C1327 * C1397 - C1396 * C1332) *
                         C202 +
                     (C1325 * C453 - C1394 * C409 + C1326 * C859 -
                      C1395 * C817 + C1327 * C1775 - C1396 * C1719) *
                         C27939) *
                        C1323 +
                    ((C1404 - C1405 + C1406 - C1407 + C1408 - C1409) * C202 +
                     (C1779 - C1780 + C1781 - C1782 + C1783 - C1784) * C27939) *
                        C27887) *
                       C935 +
                   (((C1394 * C940 - C1325 * C987 + C1395 * C2467 -
                      C1326 * C2530 + C1396 * C2465 - C1327 * C2531) *
                         C202 +
                     (C1394 * C1189 - C1325 * C1231 + C1395 * C2812 -
                      C1326 * C2870 + C1396 * C2814 - C1327 * C2871) *
                         C27939) *
                        C1323 +
                    ((C1394 * C939 - C1325 * C988 + C1395 * C2466 -
                      C1326 * C2532 + C1396 * C2464 - C1327 * C2533) *
                         C202 +
                     (C1394 * C1190 - C1325 * C1232 + C1395 * C2813 -
                      C1326 * C2872 + C1396 * C2815 - C1327 * C2873) *
                         C27939) *
                        C27887) *
                       C936) *
                  C28120 * C28121) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  ((((C27928 * C146 - C145 * C91) * C202 +
                     (C27928 * C453 - C145 * C409) * C27939) *
                        C73 +
                    ((C157 - C158) * C202 + (C459 - C460) * C27939) * C74 +
                    ((C161 - C162) * C202 + (C461 - C462) * C27939) * C75 +
                    ((C165 - C166) * C202 + (C463 - C464) * C27939) * C76) *
                       C935 +
                   (((C145 * C940 - C27928 * C987) * C202 +
                     (C145 * C1189 - C27928 * C1231) * C27939) *
                        C73 +
                    ((C145 * C939 - C27928 * C988) * C202 +
                     (C145 * C1190 - C27928 * C1232) * C27939) *
                        C74 +
                    ((C145 * C938 - C27928 * C989) * C202 +
                     (C145 * C1191 - C27928 * C1233) * C27939) *
                        C75 +
                    ((C145 * C937 - C27928 * C990) * C202 +
                     (C145 * C1192 - C27928 * C1234) * C27939) *
                        C76) *
                       C936) *
                  C28120 * C28121) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((((C27928 * C146 - C145 * C91) * C3107 +
                     (C27928 * C453 - C145 * C409) * C2978 +
                     (C4123 - C4124) * C3108 + (C4491 - C4492) * C2979 +
                     (C4127 - C4128) * C3109 + (C4493 - C4494) * C2980) *
                        C1323 +
                    ((C157 - C158) * C3107 + (C459 - C460) * C2978 +
                     (C3050 - C3051) * C3108 + (C3420 - C3421) * C2979 +
                     (C3054 - C3055) * C3109 + (C3422 - C3423) * C2980) *
                        C27887) *
                       C935 +
                   (((C4124 - C4123) * C3107 + (C4492 - C4491) * C2978 +
                     (C4128 - C4127) * C3108 + (C4494 - C4493) * C2979 +
                     (C145 * C4033 - C27928 * C4118) * C3109 +
                     (C145 * C4426 - C27928 * C4488) * C2980) *
                        C1323 +
                    ((C3051 - C3050) * C3107 + (C3421 - C3420) * C2978 +
                     (C3055 - C3054) * C3108 + (C3423 - C3422) * C2979 +
                     (C145 * C4032 - C27928 * C4119) * C3109 +
                     (C145 * C4427 - C27928 * C4489) * C2980) *
                        C27887) *
                       C936) *
                  C28120 * C28121) /
                     (p * q * std::sqrt(p + q));
    d2eezz[8] +=
        (-std::pow(Pi, 2.5) *
         ((((C202 * C203 - C498 * C91 - C202 * C409 + C27939 * C499) * C1325 +
            C2413 * C1326 + C2414 * C1327) *
               C1323 +
           (C1838 + C1853 + C1854) * C27887) *
              C935 -
          (((C202 * C2591 - C498 * C2464 - C202 * C2815 + C27939 * C2924) *
                C1327 +
            (C202 * C2589 - C498 * C2466 - C202 * C2813 + C27939 * C2925) *
                C1326 +
            (C202 * C1030 - C498 * C939 - C202 * C1190 + C27939 * C1271) *
                C1325) *
               C27887 +
           ((C202 * C2590 - C498 * C2465 - C202 * C2814 + C27939 * C2926) *
                C1327 +
            (C202 * C2588 - C498 * C2467 - C202 * C2812 + C27939 * C2927) *
                C1326 +
            (C202 * C1029 - C498 * C940 - C202 * C1189 + C27939 * C1272) *
                C1325) *
               C1323) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C202 * C203 - C498 * C91 - C202 * C409 + C27939 * C499) * C27928 *
               C73 +
           C526 * C74 + C527 * C75 + C528 * C76) *
              C935 -
          ((C202 * C1032 - C498 * C937 - C202 * C1192 + C27939 * C1269) *
               C27928 * C76 +
           (C202 * C1031 - C498 * C938 - C202 * C1191 + C27939 * C1270) *
               C27928 * C75 +
           (C202 * C1030 - C498 * C939 - C202 * C1190 + C27939 * C1271) *
               C27928 * C74 +
           (C202 * C1029 - C498 * C940 - C202 * C1189 + C27939 * C1272) *
               C27928 * C73) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C3107 * C203 - C3473 * C91 - C3107 * C409 + C2978 * C499 +
            C3108 * C1029 - C3474 * C940 - C3108 * C1189 + C2979 * C1272 +
            C3109 * C3110 - C3475 * C2981 - C3109 * C3360 + C2980 * C3476) *
               C27928 * C1323 +
           (C3498 + C3499 + C3500) * C27928 * C27887) *
              C935 -
          ((C3109 * C4181 - C3475 * C4032 - C3109 * C4427 + C2980 * C4544 +
            C3108 * C3111 - C3474 * C2982 - C3108 * C3361 + C2979 * C3477 +
            C3107 * C1030 - C3473 * C939 - C3107 * C1190 + C2978 * C1271) *
               C27928 * C27887 +
           (C3109 * C4180 - C3475 * C4033 - C3109 * C4426 + C2980 * C4545 +
            C3108 * C3110 - C3474 * C2981 - C3108 * C3360 + C2979 * C3476 +
            C3107 * C1029 - C3473 * C940 - C3107 * C1189 + C2978 * C1272) *
               C27928 * C1323) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q));
    d2eexx[9] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C4601 * C96 - C4602 * C91 - C4601 * C97 + C28107 * C106 +
            C4603 * C98 - C4604 * C92 - C4603 * C99 + C28108 * C107 +
            C4605 * C100 - C4606 * C93 - C4605 * C101 + C4598 * C108) *
               C28085 +
           (C4601 * C947 - C4602 * C940 - C4601 * C948 + C28107 * C952 +
            C4603 * C945 - C4604 * C939 - C4603 * C946 + C28108 * C951 +
            C4605 * C943 - C4606 * C938 - C4605 * C944 + C4598 * C950) *
               C28003) *
              C27928 * C28119 * C28120 * C81 -
          ((C4605 * C941 - C4606 * C937 - C4605 * C942 + C4598 * C949 +
            C4603 * C943 - C4604 * C938 - C4603 * C944 + C28108 * C950 +
            C4601 * C945 - C4602 * C939 - C4601 * C946 + C28107 * C951) *
               C28003 +
           (C4605 * C102 - C4606 * C94 - C4605 * C103 + C4598 * C109 +
            C4603 * C100 - C4604 * C93 - C4603 * C101 + C28108 * C108 +
            C4601 * C98 - C4602 * C92 - C4601 * C99 + C28107 * C107) *
               C28085) *
              C27928 * C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eexy[9] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C27928 * C146 - C145 * C91) * C4601 +
                     (C27928 * C151 - C145 * C97) * C28107 +
                     (C157 - C158) * C4603 + (C159 - C160) * C28108 +
                     (C161 - C162) * C4605 + (C163 - C164) * C4598) *
                        C28085 +
                    ((C4123 - C4124) * C4601 + (C4125 - C4126) * C28107 +
                     (C3050 - C3051) * C4603 + (C3052 - C3053) * C28108 +
                     (C6138 - C6139) * C4605 + (C6140 - C6141) * C4598) *
                        C28003) *
                       C28119 * C28120 * C81 +
                   (((C158 - C157) * C4601 + (C160 - C159) * C28107 +
                     (C162 - C161) * C4603 + (C164 - C163) * C28108 +
                     (C166 - C165) * C4605 + (C168 - C167) * C4598) *
                        C28085 +
                    ((C3051 - C3050) * C4601 + (C3053 - C3052) * C28107 +
                     (C6139 - C6138) * C4603 + (C6141 - C6140) * C28108 +
                     (C145 * C937 - C27928 * C990) * C4605 +
                     (C145 * C942 - C27928 * C994) * C4598) *
                        C28003) *
                       C28119 * C28120 * C82)) /
                 (p * q * std::sqrt(p + q));
    d2eexz[9] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C28085 * C203 - C6191 * C91 + C28003 * C1029 - C6192 * C940) *
               C4601 +
           (C28085 * C208 - C6191 * C97 + C28003 * C1033 - C6192 * C948) *
               C28107 +
           (C6194 - C6195 + C6196 - C6197) * C4603 +
           (C6198 - C6199 + C6200 - C6201) * C28108 +
           (C6202 - C6203 + C6204 - C6205) * C4605 +
           (C6206 - C6207 + C6208 - C6209) * C4598) *
              C27928 * C28119 * C28120 * C81 +
          ((C6195 - C6194 + C6197 - C6196) * C4601 +
           (C6199 - C6198 + C6201 - C6200) * C28107 +
           (C6203 - C6202 + C6205 - C6204) * C4603 +
           (C6207 - C6206 + C6209 - C6208) * C28108 +
           (C6191 * C94 - C28085 * C206 + C6192 * C937 - C28003 * C1032) *
               C4605 +
           (C6191 * C103 - C28085 * C211 + C6192 * C942 - C28003 * C1036) *
               C4598) *
              C27928 * C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[9] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C28107 * C96 - C4601 * C91 + C28108 * C98 - C4603 * C92 +
                      C4598 * C100 - C4605 * C93) *
                         C145 +
                     (C28107 * C264 - C4601 * C259 + C28108 * C265 -
                      C4603 * C260 + C4598 * C266 - C4605 * C261) *
                         C27928) *
                        C28085 +
                    ((C28107 * C947 - C4601 * C940 + C28108 * C945 -
                      C4603 * C939 + C4598 * C943 - C4605 * C938) *
                         C145 +
                     (C28107 * C1075 - C4601 * C1071 + C28108 * C1076 -
                      C4603 * C1072 + C4598 * C1077 - C4605 * C1073) *
                         C27928) *
                        C28003) *
                       C28119 * C28120 * C81 +
                   (((C4601 * C92 - C28107 * C98 + C4603 * C93 - C28108 * C100 +
                      C4605 * C94 - C4598 * C102) *
                         C145 +
                     (C4601 * C260 - C28107 * C265 + C4603 * C261 -
                      C28108 * C266 + C4605 * C262 - C4598 * C267) *
                         C27928) *
                        C28085 +
                    ((C4601 * C939 - C28107 * C945 + C4603 * C938 -
                      C28108 * C943 + C4605 * C937 - C4598 * C941) *
                         C145 +
                     (C4601 * C1072 - C28107 * C1076 + C4603 * C1073 -
                      C28108 * C1077 + C4605 * C1074 - C4598 * C1078) *
                         C27928) *
                        C28003) *
                       C28119 * C28120 * C82)) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[9] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C145 * C146 - C303 * C91 - C145 * C259 + C27928 * C304) * C28107 +
            C328 * C28108 + C329 * C4598) *
               C28085 +
           (C4321 * C28107 + C3250 * C28108 + C6316 * C4598) * C28003) *
              C28119 * C28120 * C81 -
          (((C145 * C990 - C303 * C937 - C145 * C1074 + C27928 * C1113) *
                C4598 +
            C6316 * C28108 + C3250 * C28107) *
               C28003 +
           (C330 * C4598 + C329 * C28108 + C328 * C28107) * C28085) *
              C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[9] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28085 * C203 - C6191 * C91 + C28003 * C1029 - C6192 * C940) *
                C145 +
            (C28085 * C364 - C6191 * C259 + C28003 * C1151 - C6192 * C1071) *
                C27928) *
               C28107 +
           ((C6194 - C6195 + C6196 - C6197) * C145 +
            (C6367 - C6368 + C6369 - C6370) * C27928) *
               C28108 +
           ((C6202 - C6203 + C6204 - C6205) * C145 +
            (C6371 - C6372 + C6373 - C6374) * C27928) *
               C4598) *
              C28119 * C28120 * C81 +
          (((C6195 - C6194 + C6197 - C6196) * C145 +
            (C6368 - C6367 + C6370 - C6369) * C27928) *
               C28107 +
           ((C6203 - C6202 + C6205 - C6204) * C145 +
            (C6372 - C6371 + C6374 - C6373) * C27928) *
               C28108 +
           ((C6191 * C94 - C28085 * C206 + C6192 * C937 - C28003 * C1032) *
                C145 +
            (C6191 * C262 - C28085 * C367 + C6192 * C1074 - C28003 * C1154) *
                C27928) *
               C4598) *
              C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eezx[9] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C28107 * C96 - C4601 * C91 + C28108 * C98 - C4603 * C92 +
                     C4598 * C100 - C4605 * C93) *
                        C6191 +
                    (C28107 * C414 - C4601 * C409 + C28108 * C415 -
                     C4603 * C410 + C4598 * C416 - C4605 * C411) *
                        C28085 +
                    (C28107 * C947 - C4601 * C940 + C28108 * C945 -
                     C4603 * C939 + C4598 * C943 - C4605 * C938) *
                        C6192 +
                    (C28107 * C1193 - C4601 * C1189 + C28108 * C1194 -
                     C4603 * C1190 + C4598 * C1195 - C4605 * C1191) *
                        C28003) *
                       C27928 * C28119 * C28120 * C81 +
                   ((C4601 * C92 - C28107 * C98 + C4603 * C93 - C28108 * C100 +
                     C4605 * C94 - C4598 * C102) *
                        C6191 +
                    (C4601 * C410 - C28107 * C415 + C4603 * C411 -
                     C28108 * C416 + C4605 * C412 - C4598 * C417) *
                        C28085 +
                    (C4601 * C939 - C28107 * C945 + C4603 * C938 -
                     C28108 * C943 + C4605 * C937 - C4598 * C941) *
                        C6192 +
                    (C4601 * C1190 - C28107 * C1194 + C4603 * C1191 -
                     C28108 * C1195 + C4605 * C1192 - C4598 * C1196) *
                        C28003) *
                       C27928 * C28119 * C28120 * C82)) /
                 (p * q * std::sqrt(p + q));
    d2eezy[9] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C27928 * C146 - C145 * C91) * C6191 +
                     (C27928 * C453 - C145 * C409) * C28085 +
                     (C4123 - C4124) * C6192 + (C4491 - C4492) * C28003) *
                        C28107 +
                    ((C157 - C158) * C6191 + (C459 - C460) * C28085 +
                     (C3050 - C3051) * C6192 + (C3420 - C3421) * C28003) *
                        C28108 +
                    ((C161 - C162) * C6191 + (C461 - C462) * C28085 +
                     (C6138 - C6139) * C6192 + (C6475 - C6476) * C28003) *
                        C4598) *
                       C28119 * C28120 * C81 +
                   (((C158 - C157) * C6191 + (C460 - C459) * C28085 +
                     (C3051 - C3050) * C6192 + (C3421 - C3420) * C28003) *
                        C28107 +
                    ((C162 - C161) * C6191 + (C462 - C461) * C28085 +
                     (C6139 - C6138) * C6192 + (C6476 - C6475) * C28003) *
                        C28108 +
                    ((C166 - C165) * C6191 + (C464 - C463) * C28085 +
                     (C145 * C937 - C27928 * C990) * C6192 +
                     (C145 * C1192 - C27928 * C1234) * C28003) *
                        C4598) *
                       C28119 * C28120 * C82)) /
                 (p * q * std::sqrt(p + q));
    d2eezz[9] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C6191 * C203 - C6526 * C91 - C6191 * C409 + C28085 * C499 +
            C6192 * C1029 - C6527 * C940 - C6192 * C1189 + C28003 * C1272) *
               C27928 * C28107 +
           (C6553 + C6554) * C27928 * C28108 +
           (C6555 + C6556) * C27928 * C4598) *
              C28119 * C28120 * C81 -
          ((C6192 * C1032 - C6527 * C937 - C6192 * C1192 + C28003 * C1269 +
            C6191 * C206 - C6526 * C94 - C6191 * C412 + C28085 * C502) *
               C27928 * C4598 +
           (C6556 + C6555) * C27928 * C28108 +
           (C6554 + C6553) * C27928 * C28107) *
              C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eexx[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C4601 * C96 - C4602 * C91 - C4601 * C97 + C28107 * C106 +
            C4603 * C98 - C4604 * C92 - C4603 * C99 + C28108 * C107 +
            C4605 * C100 - C4606 * C93 - C4605 * C101 + C4598 * C108) *
               C28085 +
           (C4601 * C947 - C4602 * C940 - C4601 * C948 + C28107 * C952 +
            C4603 * C945 - C4604 * C939 - C4603 * C946 + C28108 * C951 +
            C4605 * C943 - C4606 * C938 - C4605 * C944 + C4598 * C950) *
               C28003) *
              C27928 * C28119 * C562 -
          ((C4605 * C5620 - C4606 * C5619 - C4605 * C5621 + C4598 * C5622 +
            C4603 * C2472 - C4604 * C2466 - C4603 * C2473 + C28108 * C2478 +
            C4601 * C2474 - C4602 * C2467 - C4601 * C2475 + C28107 * C2479) *
               C28003 +
           (C5151 + C5150 + C5149) * C28085) *
              C27928 * C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eexy[10] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C27928 * C146 - C145 * C91) * C4601 +
                      (C27928 * C151 - C145 * C97) * C28107 +
                      (C157 - C158) * C4603 + (C159 - C160) * C28108 +
                      (C161 - C162) * C4605 + (C163 - C164) * C4598) *
                         C28085 +
                     ((C4123 - C4124) * C4601 + (C4125 - C4126) * C28107 +
                      (C3050 - C3051) * C4603 + (C3052 - C3053) * C28108 +
                      (C6138 - C6139) * C4605 + (C6140 - C6141) * C4598) *
                         C28003) *
                        C28119 * C562 +
                    (((C145 * C568 - C27928 * C615) * C4601 +
                      (C145 * C576 - C27928 * C619) * C28107 +
                      (C145 * C567 - C27928 * C616) * C4603 +
                      (C145 * C574 - C27928 * C620) * C28108 +
                      (C145 * C566 - C27928 * C617) * C4605 +
                      (C145 * C572 - C27928 * C621) * C4598) *
                         C28085 +
                     ((C145 * C2467 - C27928 * C2530) * C4601 +
                      (C145 * C2475 - C27928 * C2534) * C28107 +
                      (C145 * C2466 - C27928 * C2532) * C4603 +
                      (C145 * C2473 - C27928 * C2536) * C28108 +
                      (C145 * C5619 - C27928 * C5673) * C4605 +
                      (C145 * C5621 - C27928 * C5674) * C4598) *
                         C28003) *
                        C28119 * C563) *
                   C28121) /
                  (p * q * std::sqrt(p + q));
    d2eexz[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C28085 * C203 - C6191 * C91 + C28003 * C1029 - C6192 * C940) *
               C4601 +
           (C28085 * C208 - C6191 * C97 + C28003 * C1033 - C6192 * C948) *
               C28107 +
           (C6194 - C6195 + C6196 - C6197) * C4603 +
           (C6198 - C6199 + C6200 - C6201) * C28108 +
           (C6202 - C6203 + C6204 - C6205) * C4605 +
           (C6206 - C6207 + C6208 - C6209) * C4598) *
              C27928 * C28119 * C562 +
          ((C6191 * C568 - C28085 * C657 + C6192 * C2467 - C28003 * C2588) *
               C4601 +
           (C6191 * C576 - C28085 * C661 + C6192 * C2475 - C28003 * C2592) *
               C28107 +
           (C6191 * C567 - C28085 * C658 + C6192 * C2466 - C28003 * C2589) *
               C4603 +
           (C6191 * C574 - C28085 * C662 + C6192 * C2473 - C28003 * C2593) *
               C28108 +
           (C6191 * C566 - C28085 * C659 + C6192 * C5619 - C28003 * C5725) *
               C4605 +
           (C6191 * C572 - C28085 * C663 + C6192 * C5621 - C28003 * C5726) *
               C4598) *
              C27928 * C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eeyx[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28107 * C96 - C4601 * C91 + C28108 * C98 - C4603 * C92 +
             C4598 * C100 - C4605 * C93) *
                C145 +
            (C28107 * C264 - C4601 * C259 + C28108 * C265 - C4603 * C260 +
             C4598 * C266 - C4605 * C261) *
                C27928) *
               C28085 +
           ((C28107 * C947 - C4601 * C940 + C28108 * C945 - C4603 * C939 +
             C4598 * C943 - C4605 * C938) *
                C145 +
            (C28107 * C1075 - C4601 * C1071 + C28108 * C1076 - C4603 * C1072 +
             C4598 * C1077 - C4605 * C1073) *
                C27928) *
               C28003) *
              C28119 * C562 +
          (((C5303 - C5302 + C5305 - C5304 + C5307 - C5306) * C145 +
            (C5309 - C5308 + C5311 - C5310 + C5313 - C5312) * C27928) *
               C28085 +
           ((C4601 * C2467 - C28107 * C2474 + C4603 * C2466 - C28108 * C2472 +
             C4605 * C5619 - C4598 * C5620) *
                C145 +
            (C4601 * C2646 - C28107 * C2650 + C4603 * C2647 - C28108 * C2651 +
             C4605 * C5777 - C4598 * C5778) *
                C27928) *
               C28003) *
              C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eeyy[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C145 * C146 - C303 * C91 - C145 * C259 + C27928 * C304) * C28107 +
            C328 * C28108 + C329 * C4598) *
               C28085 +
           (C4321 * C28107 + C3250 * C28108 + C6316 * C4598) * C28003) *
              C28119 * C562 -
          (((C145 * C5673 - C303 * C5619 - C145 * C5777 + C27928 * C5829) *
                C4598 +
            (C145 * C2532 - C303 * C2466 - C145 * C2647 + C27928 * C2705) *
                C28108 +
            (C145 * C2530 - C303 * C2467 - C145 * C2646 + C27928 * C2707) *
                C28107) *
               C28003 +
           ((C145 * C617 - C303 * C566 - C145 * C701 + C27928 * C742) * C4598 +
            (C145 * C616 - C303 * C567 - C145 * C700 + C27928 * C743) * C28108 +
            (C145 * C615 - C303 * C568 - C145 * C699 + C27928 * C744) *
                C28107) *
               C28085) *
              C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eeyz[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28085 * C203 - C6191 * C91 + C28003 * C1029 - C6192 * C940) *
                C145 +
            (C28085 * C364 - C6191 * C259 + C28003 * C1151 - C6192 * C1071) *
                C27928) *
               C28107 +
           ((C6194 - C6195 + C6196 - C6197) * C145 +
            (C6367 - C6368 + C6369 - C6370) * C27928) *
               C28108 +
           ((C6202 - C6203 + C6204 - C6205) * C145 +
            (C6371 - C6372 + C6373 - C6374) * C27928) *
               C4598) *
              C28119 * C562 +
          (((C6191 * C568 - C28085 * C657 + C6192 * C2467 - C28003 * C2588) *
                C145 +
            (C6191 * C699 - C28085 * C779 + C6192 * C2646 - C28003 * C2758) *
                C27928) *
               C28107 +
           ((C6191 * C567 - C28085 * C658 + C6192 * C2466 - C28003 * C2589) *
                C145 +
            (C6191 * C700 - C28085 * C780 + C6192 * C2647 - C28003 * C2760) *
                C27928) *
               C28108 +
           ((C6191 * C566 - C28085 * C659 + C6192 * C5619 - C28003 * C5725) *
                C145 +
            (C6191 * C701 - C28085 * C781 + C6192 * C5777 - C28003 * C5880) *
                C27928) *
               C4598) *
              C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eezx[10] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C28107 * C96 - C4601 * C91 + C28108 * C98 - C4603 * C92 +
                      C4598 * C100 - C4605 * C93) *
                         C6191 +
                     (C28107 * C414 - C4601 * C409 + C28108 * C415 -
                      C4603 * C410 + C4598 * C416 - C4605 * C411) *
                         C28085 +
                     (C28107 * C947 - C4601 * C940 + C28108 * C945 -
                      C4603 * C939 + C4598 * C943 - C4605 * C938) *
                         C6192 +
                     (C28107 * C1193 - C4601 * C1189 + C28108 * C1194 -
                      C4603 * C1190 + C4598 * C1195 - C4605 * C1191) *
                         C28003) *
                        C27928 * C28119 * C562 +
                    ((C5303 - C5302 + C5305 - C5304 + C5307 - C5306) * C6191 +
                     (C5465 - C5464 + C5467 - C5466 + C5469 - C5468) * C28085 +
                     (C4601 * C2467 - C28107 * C2474 + C4603 * C2466 -
                      C28108 * C2472 + C4605 * C5619 - C4598 * C5620) *
                         C6192 +
                     (C4601 * C2812 - C28107 * C2816 + C4603 * C2813 -
                      C28108 * C2817 + C4605 * C5931 - C4598 * C5932) *
                         C28003) *
                        C27928 * C28119 * C563) *
                   C28121) /
                  (p * q * std::sqrt(p + q));
    d2eezy[10] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C27928 * C146 - C145 * C91) * C6191 +
                      (C27928 * C453 - C145 * C409) * C28085 +
                      (C4123 - C4124) * C6192 + (C4491 - C4492) * C28003) *
                         C28107 +
                     ((C157 - C158) * C6191 + (C459 - C460) * C28085 +
                      (C3050 - C3051) * C6192 + (C3420 - C3421) * C28003) *
                         C28108 +
                     ((C161 - C162) * C6191 + (C461 - C462) * C28085 +
                      (C6138 - C6139) * C6192 + (C6475 - C6476) * C28003) *
                         C4598) *
                        C28119 * C562 +
                    (((C145 * C568 - C27928 * C615) * C6191 +
                      (C145 * C817 - C27928 * C859) * C28085 +
                      (C145 * C2467 - C27928 * C2530) * C6192 +
                      (C145 * C2812 - C27928 * C2870) * C28003) *
                         C28107 +
                     ((C145 * C567 - C27928 * C616) * C6191 +
                      (C145 * C818 - C27928 * C860) * C28085 +
                      (C145 * C2466 - C27928 * C2532) * C6192 +
                      (C145 * C2813 - C27928 * C2872) * C28003) *
                         C28108 +
                     ((C145 * C566 - C27928 * C617) * C6191 +
                      (C145 * C819 - C27928 * C861) * C28085 +
                      (C145 * C5619 - C27928 * C5673) * C6192 +
                      (C145 * C5931 - C27928 * C5983) * C28003) *
                         C4598) *
                        C28119 * C563) *
                   C28121) /
                  (p * q * std::sqrt(p + q));
    d2eezz[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C6191 * C203 - C6526 * C91 - C6191 * C409 + C28085 * C499 +
            C6192 * C1029 - C6527 * C940 - C6192 * C1189 + C28003 * C1272) *
               C27928 * C28107 +
           (C6553 + C6554) * C27928 * C28108 +
           (C6555 + C6556) * C27928 * C4598) *
              C28119 * C562 -
          ((C6192 * C5725 - C6527 * C5619 - C6192 * C5931 + C28003 * C6034 +
            C6191 * C659 - C6526 * C566 - C6191 * C819 + C28085 * C898) *
               C27928 * C4598 +
           (C6192 * C2589 - C6527 * C2466 - C6192 * C2813 + C28003 * C2925 +
            C6191 * C658 - C6526 * C567 - C6191 * C818 + C28085 * C899) *
               C27928 * C28108 +
           (C6192 * C2588 - C6527 * C2467 - C6192 * C2812 + C28003 * C2927 +
            C6191 * C657 - C6526 * C568 - C6191 * C817 + C28085 * C900) *
               C27928 * C28107) *
              C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eexx[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C4601 * C96 - C4602 * C91 - C4601 * C97 + C28107 * C106 +
            C4603 * C98 - C4604 * C92 - C4603 * C99 + C28108 * C107 +
            C4605 * C100 - C4606 * C93 - C4605 * C101 + C4598 * C108) *
               C28085 +
           (C7075 + C7076 + C7077) * C28003) *
              C27928 * C935 -
          ((C4605 * C2988 - C4606 * C2983 - C4605 * C2989 + C4598 * C2992 +
            C4603 * C2986 - C4604 * C2982 - C4603 * C2987 + C28108 * C2991 +
            C4601 * C2984 - C4602 * C2981 - C4601 * C2985 + C28107 * C2990) *
               C28003 +
           (C7077 + C7076 + C7075) * C28085) *
              C27928 * C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eexy[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C27928 * C146 - C145 * C91) * C4601 +
                      (C27928 * C151 - C145 * C97) * C28107 +
                      (C157 - C158) * C4603 + (C159 - C160) * C28108 +
                      (C161 - C162) * C4605 + (C163 - C164) * C4598) *
                         C28085 +
                     ((C4123 - C4124) * C4601 + (C4125 - C4126) * C28107 +
                      (C3050 - C3051) * C4603 + (C3052 - C3053) * C28108 +
                      (C6138 - C6139) * C4605 + (C6140 - C6141) * C4598) *
                         C28003) *
                        C935 +
                    (((C4124 - C4123) * C4601 + (C4126 - C4125) * C28107 +
                      (C3051 - C3050) * C4603 + (C3053 - C3052) * C28108 +
                      (C6139 - C6138) * C4605 + (C6141 - C6140) * C4598) *
                         C28085 +
                     ((C4128 - C4127) * C4601 + (C4130 - C4129) * C28107 +
                      (C3055 - C3054) * C4603 + (C3057 - C3056) * C28108 +
                      (C145 * C2983 - C27928 * C3045) * C4605 +
                      (C145 * C2989 - C27928 * C3048) * C4598) *
                         C28003) *
                        C936) *
                   C28120 * C28121) /
                  (p * q * std::sqrt(p + q));
    d2eexz[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C28085 * C203 - C6191 * C91 + C28003 * C1029 - C6192 * C940) *
               C4601 +
           (C28085 * C208 - C6191 * C97 + C28003 * C1033 - C6192 * C948) *
               C28107 +
           (C6194 - C6195 + C6196 - C6197) * C4603 +
           (C6198 - C6199 + C6200 - C6201) * C28108 +
           (C6202 - C6203 + C6204 - C6205) * C4605 +
           (C6206 - C6207 + C6208 - C6209) * C4598) *
              C27928 * C935 +
          ((C6191 * C940 - C28085 * C1029 + C6192 * C2981 - C28003 * C3110) *
               C4601 +
           (C6191 * C948 - C28085 * C1033 + C6192 * C2985 - C28003 * C3113) *
               C28107 +
           (C6191 * C939 - C28085 * C1030 + C6192 * C2982 - C28003 * C3111) *
               C4603 +
           (C6191 * C946 - C28085 * C1034 + C6192 * C2987 - C28003 * C3114) *
               C28108 +
           (C6191 * C938 - C28085 * C1031 + C6192 * C2983 - C28003 * C3112) *
               C4605 +
           (C6191 * C944 - C28085 * C1035 + C6192 * C2989 - C28003 * C3115) *
               C4598) *
              C27928 * C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eeyx[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28107 * C96 - C4601 * C91 + C28108 * C98 - C4603 * C92 +
             C4598 * C100 - C4605 * C93) *
                C145 +
            (C28107 * C264 - C4601 * C259 + C28108 * C265 - C4603 * C260 +
             C4598 * C266 - C4605 * C261) *
                C27928) *
               C28085 +
           ((C7228 - C7229 + C7230 - C7231 + C7232 - C7233) * C145 +
            (C7234 - C7235 + C7236 - C7237 + C7238 - C7239) * C27928) *
               C28003) *
              C935 +
          (((C7229 - C7228 + C7231 - C7230 + C7233 - C7232) * C145 +
            (C7235 - C7234 + C7237 - C7236 + C7239 - C7238) * C27928) *
               C28085 +
           ((C4601 * C2981 - C28107 * C2984 + C4603 * C2982 - C28108 * C2986 +
             C4605 * C2983 - C4598 * C2988) *
                C145 +
            (C4601 * C3178 - C28107 * C3181 + C4603 * C3179 - C28108 * C3182 +
             C4605 * C3180 - C4598 * C3183) *
                C27928) *
               C28003) *
              C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eeyy[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C145 * C146 - C303 * C91 - C145 * C259 + C27928 * C304) * C28107 +
            C328 * C28108 + C329 * C4598) *
               C28085 +
           (C7290 + C7291 + C7292) * C28003) *
              C935 -
          (((C145 * C3045 - C303 * C2983 - C145 * C3180 + C27928 * C3236) *
                C4598 +
            C3251 * C28108 + C4322 * C28107) *
               C28003 +
           (C7292 + C7291 + C7290) * C28085) *
              C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eeyz[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28085 * C203 - C6191 * C91 + C28003 * C1029 - C6192 * C940) *
                C145 +
            (C28085 * C364 - C6191 * C259 + C28003 * C1151 - C6192 * C1071) *
                C27928) *
               C28107 +
           ((C6194 - C6195 + C6196 - C6197) * C145 +
            (C6367 - C6368 + C6369 - C6370) * C27928) *
               C28108 +
           ((C6202 - C6203 + C6204 - C6205) * C145 +
            (C6371 - C6372 + C6373 - C6374) * C27928) *
               C4598) *
              C935 +
          (((C6191 * C940 - C28085 * C1029 + C6192 * C2981 - C28003 * C3110) *
                C145 +
            (C6191 * C1071 - C28085 * C1151 + C6192 * C3178 - C28003 * C3301) *
                C27928) *
               C28107 +
           ((C6191 * C939 - C28085 * C1030 + C6192 * C2982 - C28003 * C3111) *
                C145 +
            (C6191 * C1072 - C28085 * C1152 + C6192 * C3179 - C28003 * C3302) *
                C27928) *
               C28108 +
           ((C6191 * C938 - C28085 * C1031 + C6192 * C2983 - C28003 * C3112) *
                C145 +
            (C6191 * C1073 - C28085 * C1153 + C6192 * C3180 - C28003 * C3303) *
                C27928) *
               C4598) *
              C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eezx[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C28107 * C96 - C4601 * C91 + C28108 * C98 - C4603 * C92 +
                      C4598 * C100 - C4605 * C93) *
                         C6191 +
                     (C28107 * C414 - C4601 * C409 + C28108 * C415 -
                      C4603 * C410 + C4598 * C416 - C4605 * C411) *
                         C28085 +
                     (C7228 - C7229 + C7230 - C7231 + C7232 - C7233) * C6192 +
                     (C7393 - C7394 + C7395 - C7396 + C7397 - C7398) * C28003) *
                        C27928 * C935 +
                    ((C7229 - C7228 + C7231 - C7230 + C7233 - C7232) * C6191 +
                     (C7394 - C7393 + C7396 - C7395 + C7398 - C7397) * C28085 +
                     (C4601 * C2981 - C28107 * C2984 + C4603 * C2982 -
                      C28108 * C2986 + C4605 * C2983 - C4598 * C2988) *
                         C6192 +
                     (C4601 * C3360 - C28107 * C3363 + C4603 * C3361 -
                      C28108 * C3364 + C4605 * C3362 - C4598 * C3365) *
                         C28003) *
                        C27928 * C936) *
                   C28120 * C28121) /
                  (p * q * std::sqrt(p + q));
    d2eezy[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C27928 * C146 - C145 * C91) * C6191 +
                      (C27928 * C453 - C145 * C409) * C28085 +
                      (C4123 - C4124) * C6192 + (C4491 - C4492) * C28003) *
                         C28107 +
                     ((C157 - C158) * C6191 + (C459 - C460) * C28085 +
                      (C3050 - C3051) * C6192 + (C3420 - C3421) * C28003) *
                         C28108 +
                     ((C161 - C162) * C6191 + (C461 - C462) * C28085 +
                      (C6138 - C6139) * C6192 + (C6475 - C6476) * C28003) *
                         C4598) *
                        C935 +
                    (((C4124 - C4123) * C6191 + (C4492 - C4491) * C28085 +
                      (C4128 - C4127) * C6192 + (C4494 - C4493) * C28003) *
                         C28107 +
                     ((C3051 - C3050) * C6191 + (C3421 - C3420) * C28085 +
                      (C3055 - C3054) * C6192 + (C3423 - C3422) * C28003) *
                         C28108 +
                     ((C6139 - C6138) * C6191 + (C6476 - C6475) * C28085 +
                      (C145 * C2983 - C27928 * C3045) * C6192 +
                      (C145 * C3362 - C27928 * C3418) * C28003) *
                         C4598) *
                        C936) *
                   C28120 * C28121) /
                  (p * q * std::sqrt(p + q));
    d2eezz[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C6191 * C203 - C6526 * C91 - C6191 * C409 + C28085 * C499 +
            C6192 * C1029 - C6527 * C940 - C6192 * C1189 + C28003 * C1272) *
               C27928 * C28107 +
           (C6553 + C6554) * C27928 * C28108 +
           (C6555 + C6556) * C27928 * C4598) *
              C935 -
          ((C6192 * C3112 - C6527 * C2983 - C6192 * C3362 + C28003 * C3478 +
            C6191 * C1031 - C6526 * C938 - C6191 * C1191 + C28085 * C1270) *
               C27928 * C4598 +
           (C6192 * C3111 - C6527 * C2982 - C6192 * C3361 + C28003 * C3477 +
            C6191 * C1030 - C6526 * C939 - C6191 * C1190 + C28085 * C1271) *
               C27928 * C28108 +
           (C6192 * C3110 - C6527 * C2981 - C6192 * C3360 + C28003 * C3476 +
            C6191 * C1029 - C6526 * C940 - C6191 * C1189 + C28085 * C1272) *
               C27928 * C28107) *
              C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eexx[12] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C83 * C96 - C84 * C91 - C83 * C97 + C73 * C106 + C85 * C98 -
           C86 * C92 - C85 * C99 + C74 * C107 + C87 * C100 - C88 * C93 -
           C87 * C101 + C75 * C108 + C89 * C102 - C90 * C94 - C89 * C103 +
           C76 * C109) *
              C27939 * C27928 * C28119 * C28120 * C81 -
          (C89 * C104 - C90 * C95 - C89 * C105 + C76 * C110 + C87 * C102 -
           C88 * C94 - C87 * C103 + C75 * C109 + C85 * C100 - C86 * C93 -
           C85 * C101 + C74 * C108 + C83 * C98 - C84 * C92 - C83 * C99 +
           C73 * C107) *
              C27939 * C27928 * C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1328 * C96 - C1329 * C91 - C1328 * C97 + C1323 * C106 +
            C1330 * C98 - C1331 * C92 - C1330 * C99 + C27887 * C107) *
               C27939 * C1325 +
           (C1328 * C575 - C1329 * C568 - C1328 * C576 + C1323 * C580 +
            C1330 * C573 - C1331 * C567 - C1330 * C574 + C27887 * C579) *
               C27939 * C1326 +
           (C1328 * C1335 - C1329 * C1332 - C1328 * C1336 + C1323 * C1341 +
            C1330 * C1337 - C1331 * C1333 - C1330 * C1338 + C27887 * C1342) *
               C27939 * C1327) *
              C28119 * C28120 * C81 -
          ((C1330 * C1339 - C1331 * C1334 - C1330 * C1340 + C27887 * C1343 +
            C1328 * C1337 - C1329 * C1333 - C1328 * C1338 + C1323 * C1342) *
               C27939 * C1327 +
           (C1330 * C571 - C1331 * C566 - C1330 * C572 + C27887 * C578 +
            C1328 * C573 - C1329 * C567 - C1328 * C574 + C1323 * C579) *
               C27939 * C1326 +
           (C1330 * C100 - C1331 * C93 - C1330 * C101 + C27887 * C108 +
            C1328 * C98 - C1329 * C92 - C1328 * C99 + C1323 * C107) *
               C27939 * C1325) *
              C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eexy[12] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C27928 * C146 - C145 * C91) * C83 +
           (C27928 * C151 - C145 * C97) * C73 + (C157 - C158) * C85 +
           (C159 - C160) * C74 + (C161 - C162) * C87 + (C163 - C164) * C75 +
           (C165 - C166) * C89 + (C167 - C168) * C76) *
              C27939 * C28119 * C28120 * C81 +
          ((C158 - C157) * C83 + (C160 - C159) * C73 + (C162 - C161) * C85 +
           (C164 - C163) * C74 + (C166 - C165) * C87 + (C168 - C167) * C75 +
           (C145 * C95 - C27928 * C150) * C89 +
           (C145 * C105 - C27928 * C155) * C76) *
              C27939 * C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1325 * C146 - C1394 * C91 + C1326 * C615 - C1395 * C568 +
            C1327 * C1397 - C1396 * C1332) *
               C1328 +
           (C1325 * C151 - C1394 * C97 + C1326 * C619 - C1395 * C576 +
            C1327 * C1400 - C1396 * C1336) *
               C1323 +
           (C1404 - C1405 + C1406 - C1407 + C1408 - C1409) * C1330 +
           (C1410 - C1411 + C1412 - C1413 + C1414 - C1415) * C27887) *
              C27939 * C28119 * C28120 * C81 +
          ((C1405 - C1404 + C1407 - C1406 + C1409 - C1408) * C1328 +
           (C1411 - C1410 + C1413 - C1412 + C1415 - C1414) * C1323 +
           (C1394 * C93 - C1325 * C148 + C1395 * C566 - C1326 * C617 +
            C1396 * C1334 - C1327 * C1399) *
               C1330 +
           (C1394 * C101 - C1325 * C153 + C1395 * C572 - C1326 * C621 +
            C1396 * C1340 - C1327 * C1402) *
               C27887) *
              C27939 * C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eexz[12] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C27939 * C203 - C202 * C91) * C83 +
           (C27939 * C208 - C202 * C97) * C73 + (C214 - C215) * C85 +
           (C216 - C217) * C74 + (C218 - C219) * C87 + (C220 - C221) * C75 +
           (C222 - C223) * C89 + (C224 - C225) * C76) *
              C27928 * C28119 * C28120 * C81 +
          ((C215 - C214) * C83 + (C217 - C216) * C73 + (C219 - C218) * C85 +
           (C221 - C220) * C74 + (C223 - C222) * C87 + (C225 - C224) * C75 +
           (C202 * C95 - C27939 * C207) * C89 +
           (C202 * C105 - C27939 * C212) * C76) *
              C27928 * C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C27939 * C203 - C202 * C91) * C1328 +
            (C27939 * C208 - C202 * C97) * C1323 + (C214 - C215) * C1330 +
            (C216 - C217) * C27887) *
               C1325 +
           ((C27939 * C657 - C202 * C568) * C1328 +
            (C27939 * C661 - C202 * C576) * C1323 + (C1472 - C1473) * C1330 +
            (C1474 - C1475) * C27887) *
               C1326 +
           ((C27939 * C1465 - C202 * C1332) * C1328 +
            (C27939 * C1468 - C202 * C1336) * C1323 + (C1476 - C1477) * C1330 +
            (C1478 - C1479) * C27887) *
               C1327) *
              C28119 * C28120 * C81 +
          (((C215 - C214) * C1328 + (C217 - C216) * C1323 +
            (C219 - C218) * C1330 + (C221 - C220) * C27887) *
               C1325 +
           ((C1473 - C1472) * C1328 + (C1475 - C1474) * C1323 +
            (C202 * C566 - C27939 * C659) * C1330 +
            (C202 * C572 - C27939 * C663) * C27887) *
               C1326 +
           ((C1477 - C1476) * C1328 + (C1479 - C1478) * C1323 +
            (C202 * C1334 - C27939 * C1467) * C1330 +
            (C202 * C1340 - C27939 * C1470) * C27887) *
               C1327) *
              C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[12] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C73 * C96 - C83 * C91 + C74 * C98 - C85 * C92 + C75 * C100 -
            C87 * C93 + C76 * C102 - C89 * C94) *
               C145 +
           (C73 * C264 - C83 * C259 + C74 * C265 - C85 * C260 + C75 * C266 -
            C87 * C261 + C76 * C267 - C89 * C262) *
               C27928) *
              C27939 * C28119 * C28120 * C81 +
          ((C83 * C92 - C73 * C98 + C85 * C93 - C74 * C100 + C87 * C94 -
            C75 * C102 + C89 * C95 - C76 * C104) *
               C145 +
           (C83 * C260 - C73 * C265 + C85 * C261 - C74 * C266 + C87 * C262 -
            C75 * C267 + C89 * C263 - C76 * C268) *
               C27928) *
              C27939 * C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1323 * C96 - C1328 * C91 + C27887 * C98 - C1330 * C92) * C1394 +
           (C1323 * C264 - C1328 * C259 + C27887 * C265 - C1330 * C260) *
               C1325 +
           (C1323 * C575 - C1328 * C568 + C27887 * C573 - C1330 * C567) *
               C1395 +
           (C1323 * C703 - C1328 * C699 + C27887 * C704 - C1330 * C700) *
               C1326 +
           (C1323 * C1335 - C1328 * C1332 + C27887 * C1337 - C1330 * C1333) *
               C1396 +
           (C1323 * C1532 - C1328 * C1529 + C27887 * C1533 - C1330 * C1530) *
               C1327) *
              C27939 * C28119 * C28120 * C81 +
          ((C1328 * C92 - C1323 * C98 + C1330 * C93 - C27887 * C100) * C1394 +
           (C1328 * C260 - C1323 * C265 + C1330 * C261 - C27887 * C266) *
               C1325 +
           (C1328 * C567 - C1323 * C573 + C1330 * C566 - C27887 * C571) *
               C1395 +
           (C1328 * C700 - C1323 * C704 + C1330 * C701 - C27887 * C705) *
               C1326 +
           (C1328 * C1333 - C1323 * C1337 + C1330 * C1334 - C27887 * C1339) *
               C1396 +
           (C1328 * C1530 - C1323 * C1533 + C1330 * C1531 - C27887 * C1534) *
               C1327) *
              C27939 * C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[12] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C145 * C146 - C303 * C91 - C145 * C259 + C27928 * C304) * C73 +
           C328 * C74 + C329 * C75 + C330 * C76) *
              C27939 * C28119 * C28120 * C81 -
          ((C145 * C150 - C303 * C95 - C145 * C263 + C27928 * C308) * C76 +
           C330 * C75 + C329 * C74 + C328 * C73) *
              C27939 * C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1394 * C146 - C1585 * C91 - C1394 * C259 + C1325 * C304 +
            C1395 * C615 - C1586 * C568 - C1395 * C699 + C1326 * C744 +
            C1396 * C1397 - C1587 * C1332 - C1396 * C1529 + C1327 * C1588) *
               C1323 +
           (C1610 + C1611 + C1612) * C27887) *
              C27939 * C28119 * C28120 * C81 -
          ((C1396 * C1399 - C1587 * C1334 - C1396 * C1531 + C1327 * C1590 +
            C1395 * C617 - C1586 * C566 - C1395 * C701 + C1326 * C742 +
            C1394 * C148 - C1585 * C93 - C1394 * C261 + C1325 * C306) *
               C27887 +
           (C1612 + C1611 + C1610) * C1323) *
              C27939 * C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[12] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C27939 * C203 - C202 * C91) * C145 +
                      (C27939 * C364 - C202 * C259) * C27928) *
                         C73 +
                     ((C214 - C215) * C145 + (C370 - C371) * C27928) * C74 +
                     ((C218 - C219) * C145 + (C372 - C373) * C27928) * C75 +
                     ((C222 - C223) * C145 + (C374 - C375) * C27928) * C76) *
                        C28119 * C28120 * C81 +
                    (((C215 - C214) * C145 + (C371 - C370) * C27928) * C73 +
                     ((C219 - C218) * C145 + (C373 - C372) * C27928) * C74 +
                     ((C223 - C222) * C145 + (C375 - C374) * C27928) * C75 +
                     ((C202 * C95 - C27939 * C207) * C145 +
                      (C202 * C263 - C27939 * C368) * C27928) *
                         C76) *
                        C28119 * C28120 * C82)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C27939 * C203 - C202 * C91) * C1394 +
                      (C27939 * C364 - C202 * C259) * C1325 +
                      (C27939 * C657 - C202 * C568) * C1395 +
                      (C27939 * C779 - C202 * C699) * C1326 +
                      (C27939 * C1465 - C202 * C1332) * C1396 +
                      (C27939 * C1662 - C202 * C1529) * C1327) *
                         C1323 +
                     ((C214 - C215) * C1394 + (C370 - C371) * C1325 +
                      (C1472 - C1473) * C1395 + (C1666 - C1667) * C1326 +
                      (C1476 - C1477) * C1396 + (C1668 - C1669) * C1327) *
                         C27887) *
                        C28119 * C28120 * C81 +
                    (((C215 - C214) * C1394 + (C371 - C370) * C1325 +
                      (C1473 - C1472) * C1395 + (C1667 - C1666) * C1326 +
                      (C1477 - C1476) * C1396 + (C1669 - C1668) * C1327) *
                         C1323 +
                     ((C219 - C218) * C1394 + (C373 - C372) * C1325 +
                      (C202 * C566 - C27939 * C659) * C1395 +
                      (C202 * C701 - C27939 * C781) * C1326 +
                      (C202 * C1334 - C27939 * C1467) * C1396 +
                      (C202 * C1531 - C27939 * C1664) * C1327) *
                         C27887) *
                        C28119 * C28120 * C82)) /
                      (p * q * std::sqrt(p + q));
    d2eezx[12] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C73 * C96 - C83 * C91 + C74 * C98 - C85 * C92 + C75 * C100 -
            C87 * C93 + C76 * C102 - C89 * C94) *
               C202 +
           (C73 * C414 - C83 * C409 + C74 * C415 - C85 * C410 + C75 * C416 -
            C87 * C411 + C76 * C417 - C89 * C412) *
               C27939) *
              C27928 * C28119 * C28120 * C81 +
          ((C83 * C92 - C73 * C98 + C85 * C93 - C74 * C100 + C87 * C94 -
            C75 * C102 + C89 * C95 - C76 * C104) *
               C202 +
           (C83 * C410 - C73 * C415 + C85 * C411 - C74 * C416 + C87 * C412 -
            C75 * C417 + C89 * C413 - C76 * C418) *
               C27939) *
              C27928 * C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1323 * C96 - C1328 * C91 + C27887 * C98 - C1330 * C92) * C202 +
            (C1323 * C414 - C1328 * C409 + C27887 * C415 - C1330 * C410) *
                C27939) *
               C1325 +
           ((C1323 * C575 - C1328 * C568 + C27887 * C573 - C1330 * C567) *
                C202 +
            (C1323 * C821 - C1328 * C817 + C27887 * C822 - C1330 * C818) *
                C27939) *
               C1326 +
           ((C1323 * C1335 - C1328 * C1332 + C27887 * C1337 - C1330 * C1333) *
                C202 +
            (C1323 * C1722 - C1328 * C1719 + C27887 * C1723 - C1330 * C1720) *
                C27939) *
               C1327) *
              C28119 * C28120 * C81 +
          (((C1328 * C92 - C1323 * C98 + C1330 * C93 - C27887 * C100) * C202 +
            (C1328 * C410 - C1323 * C415 + C1330 * C411 - C27887 * C416) *
                C27939) *
               C1325 +
           ((C1328 * C567 - C1323 * C573 + C1330 * C566 - C27887 * C571) *
                C202 +
            (C1328 * C818 - C1323 * C822 + C1330 * C819 - C27887 * C823) *
                C27939) *
               C1326 +
           ((C1328 * C1333 - C1323 * C1337 + C1330 * C1334 - C27887 * C1339) *
                C202 +
            (C1328 * C1720 - C1323 * C1723 + C1330 * C1721 - C27887 * C1724) *
                C27939) *
               C1327) *
              C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eezy[12] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C27928 * C146 - C145 * C91) * C202 +
            (C27928 * C453 - C145 * C409) * C27939) *
               C73 +
           ((C157 - C158) * C202 + (C459 - C460) * C27939) * C74 +
           ((C161 - C162) * C202 + (C461 - C462) * C27939) * C75 +
           ((C165 - C166) * C202 + (C463 - C464) * C27939) * C76) *
              C28119 * C28120 * C81 +
          (((C158 - C157) * C202 + (C460 - C459) * C27939) * C73 +
           ((C162 - C161) * C202 + (C462 - C461) * C27939) * C74 +
           ((C166 - C165) * C202 + (C464 - C463) * C27939) * C75 +
           ((C145 * C95 - C27928 * C150) * C202 +
            (C145 * C413 - C27928 * C457) * C27939) *
               C76) *
              C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1325 * C146 - C1394 * C91 + C1326 * C615 - C1395 * C568 +
             C1327 * C1397 - C1396 * C1332) *
                C202 +
            (C1325 * C453 - C1394 * C409 + C1326 * C859 - C1395 * C817 +
             C1327 * C1775 - C1396 * C1719) *
                C27939) *
               C1323 +
           ((C1404 - C1405 + C1406 - C1407 + C1408 - C1409) * C202 +
            (C1779 - C1780 + C1781 - C1782 + C1783 - C1784) * C27939) *
               C27887) *
              C28119 * C28120 * C81 +
          (((C1405 - C1404 + C1407 - C1406 + C1409 - C1408) * C202 +
            (C1780 - C1779 + C1782 - C1781 + C1784 - C1783) * C27939) *
               C1323 +
           ((C1394 * C93 - C1325 * C148 + C1395 * C566 - C1326 * C617 +
             C1396 * C1334 - C1327 * C1399) *
                C202 +
            (C1394 * C411 - C1325 * C455 + C1395 * C819 - C1326 * C861 +
             C1396 * C1721 - C1327 * C1777) *
                C27939) *
               C27887) *
              C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eezz[12] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C202 * C203 - C498 * C91 - C202 * C409 + C27939 * C499) * C27928 *
               C73 +
           C526 * C74 + C527 * C75 + C528 * C76) *
              C28119 * C28120 * C81 -
          ((C202 * C207 - C498 * C95 - C202 * C413 + C27939 * C503) * C27928 *
               C76 +
           C528 * C75 + C527 * C74 + C526 * C73) *
              C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C202 * C203 - C498 * C91 - C202 * C409 + C27939 * C499) * C1325 +
            (C202 * C657 - C498 * C568 - C202 * C817 + C27939 * C900) * C1326 +
            (C202 * C1465 - C498 * C1332 - C202 * C1719 + C27939 * C1834) *
                C1327) *
               C1323 +
           (C1838 + C1853 + C1854) * C27887) *
              C28119 * C28120 * C81 -
          (((C202 * C1467 - C498 * C1334 - C202 * C1721 + C27939 * C1836) *
                C1327 +
            (C202 * C659 - C498 * C566 - C202 * C819 + C27939 * C898) * C1326 +
            C524 * C1325) *
               C27887 +
           (C1854 + C1853 + C1838) * C1323) *
              C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eexx[13] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C83 * C96 - C84 * C91 - C83 * C97 + C73 * C106 + C85 * C98 -
           C86 * C92 - C85 * C99 + C74 * C107 + C87 * C100 - C88 * C93 -
           C87 * C101 + C75 * C108 + C89 * C102 - C90 * C94 - C89 * C103 +
           C76 * C109) *
              C27939 * C27928 * C28119 * C562 -
          (C89 * C569 - C90 * C565 - C89 * C570 + C76 * C577 + C87 * C571 -
           C88 * C566 - C87 * C572 + C75 * C578 + C85 * C573 - C86 * C567 -
           C85 * C574 + C74 * C579 + C83 * C575 - C84 * C568 - C83 * C576 +
           C73 * C580) *
              C27939 * C27928 * C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1328 * C96 - C1329 * C91 - C1328 * C97 + C1323 * C106 +
            C1330 * C98 - C1331 * C92 - C1330 * C99 + C27887 * C107) *
               C27939 * C1325 +
           (C1937 + C1938) * C27939 * C1326 +
           (C1939 + C1940) * C27939 * C1327) *
              C28119 * C562 -
          ((C1330 * C1906 - C1331 * C1904 - C1330 * C1907 + C27887 * C1910 +
            C1328 * C1908 - C1329 * C1905 - C1328 * C1909 + C1323 * C1911) *
               C27939 * C1327 +
           (C1940 + C1939) * C27939 * C1326 +
           (C1938 + C1937) * C27939 * C1325) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q));
    d2eexy[13] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C27928 * C146 - C145 * C91) * C83 +
           (C27928 * C151 - C145 * C97) * C73 + (C157 - C158) * C85 +
           (C159 - C160) * C74 + (C161 - C162) * C87 + (C163 - C164) * C75 +
           (C165 - C166) * C89 + (C167 - C168) * C76) *
              C27939 * C28119 * C562 +
          ((C145 * C568 - C27928 * C615) * C83 +
           (C145 * C576 - C27928 * C619) * C73 +
           (C145 * C567 - C27928 * C616) * C85 +
           (C145 * C574 - C27928 * C620) * C74 +
           (C145 * C566 - C27928 * C617) * C87 +
           (C145 * C572 - C27928 * C621) * C75 +
           (C145 * C565 - C27928 * C618) * C89 +
           (C145 * C570 - C27928 * C622) * C76) *
              C27939 * C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1325 * C146 - C1394 * C91 + C1326 * C615 - C1395 * C568 +
            C1327 * C1397 - C1396 * C1332) *
               C1328 +
           (C1325 * C151 - C1394 * C97 + C1326 * C619 - C1395 * C576 +
            C1327 * C1400 - C1396 * C1336) *
               C1323 +
           (C1404 - C1405 + C1406 - C1407 + C1408 - C1409) * C1330 +
           (C1410 - C1411 + C1412 - C1413 + C1414 - C1415) * C27887) *
              C27939 * C28119 * C562 +
          ((C1394 * C568 - C1325 * C615 + C1395 * C1332 - C1326 * C1397 +
            C1396 * C1905 - C1327 * C1990) *
               C1328 +
           (C1394 * C576 - C1325 * C619 + C1395 * C1336 - C1326 * C1400 +
            C1396 * C1909 - C1327 * C1992) *
               C1323 +
           (C1394 * C567 - C1325 * C616 + C1395 * C1333 - C1326 * C1398 +
            C1396 * C1904 - C1327 * C1991) *
               C1330 +
           (C1394 * C574 - C1325 * C620 + C1395 * C1338 - C1326 * C1401 +
            C1396 * C1907 - C1327 * C1993) *
               C27887) *
              C27939 * C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q));
    d2eexz[13] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C27939 * C203 - C202 * C91) * C83 +
           (C27939 * C208 - C202 * C97) * C73 + (C214 - C215) * C85 +
           (C216 - C217) * C74 + (C218 - C219) * C87 + (C220 - C221) * C75 +
           (C222 - C223) * C89 + (C224 - C225) * C76) *
              C27928 * C28119 * C562 +
          ((C202 * C568 - C27939 * C657) * C83 +
           (C202 * C576 - C27939 * C661) * C73 +
           (C202 * C567 - C27939 * C658) * C85 +
           (C202 * C574 - C27939 * C662) * C74 +
           (C202 * C566 - C27939 * C659) * C87 +
           (C202 * C572 - C27939 * C663) * C75 +
           (C202 * C565 - C27939 * C660) * C89 +
           (C202 * C570 - C27939 * C664) * C76) *
              C27928 * C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C27939 * C203 - C202 * C91) * C1328 +
            (C27939 * C208 - C202 * C97) * C1323 + (C214 - C215) * C1330 +
            (C216 - C217) * C27887) *
               C1325 +
           ((C2049 - C2050) * C1328 + (C2051 - C2052) * C1323 +
            (C1472 - C1473) * C1330 + (C1474 - C1475) * C27887) *
               C1326 +
           ((C2053 - C2054) * C1328 + (C2055 - C2056) * C1323 +
            (C1476 - C1477) * C1330 + (C1478 - C1479) * C27887) *
               C1327) *
              C28119 * C562 +
          (((C2050 - C2049) * C1328 + (C2052 - C2051) * C1323 +
            (C1473 - C1472) * C1330 + (C1475 - C1474) * C27887) *
               C1325 +
           ((C2054 - C2053) * C1328 + (C2056 - C2055) * C1323 +
            (C1477 - C1476) * C1330 + (C1479 - C1478) * C27887) *
               C1326 +
           ((C202 * C1905 - C27939 * C2044) * C1328 +
            (C202 * C1909 - C27939 * C2046) * C1323 +
            (C202 * C1904 - C27939 * C2045) * C1330 +
            (C202 * C1907 - C27939 * C2047) * C27887) *
               C1327) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q));
    d2eeyx[13] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C73 * C96 - C83 * C91 + C74 * C98 - C85 * C92 + C75 * C100 -
            C87 * C93 + C76 * C102 - C89 * C94) *
               C145 +
           (C73 * C264 - C83 * C259 + C74 * C265 - C85 * C260 + C75 * C266 -
            C87 * C261 + C76 * C267 - C89 * C262) *
               C27928) *
              C27939 * C28119 * C562 +
          ((C83 * C568 - C73 * C575 + C85 * C567 - C74 * C573 + C87 * C566 -
            C75 * C571 + C89 * C565 - C76 * C569) *
               C145 +
           (C83 * C699 - C73 * C703 + C85 * C700 - C74 * C704 + C87 * C701 -
            C75 * C705 + C89 * C702 - C76 * C706) *
               C27928) *
              C27939 * C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1323 * C96 - C1328 * C91 + C27887 * C98 - C1330 * C92) * C1394 +
           (C1323 * C264 - C1328 * C259 + C27887 * C265 - C1330 * C260) *
               C1325 +
           (C2111 - C2112 + C2113 - C2114) * C1395 +
           (C2115 - C2116 + C2117 - C2118) * C1326 +
           (C2119 - C2120 + C2121 - C2122) * C1396 +
           (C2123 - C2124 + C2125 - C2126) * C1327) *
              C27939 * C28119 * C562 +
          ((C2112 - C2111 + C2114 - C2113) * C1394 +
           (C2116 - C2115 + C2118 - C2117) * C1325 +
           (C2120 - C2119 + C2122 - C2121) * C1395 +
           (C2124 - C2123 + C2126 - C2125) * C1326 +
           (C1328 * C1905 - C1323 * C1908 + C1330 * C1904 - C27887 * C1906) *
               C1396 +
           (C1328 * C2106 - C1323 * C2108 + C1330 * C2107 - C27887 * C2109) *
               C1327) *
              C27939 * C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q));
    d2eeyy[13] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C145 * C146 - C303 * C91 - C145 * C259 + C27928 * C304) * C73 +
           C328 * C74 + C329 * C75 + C330 * C76) *
              C27939 * C28119 * C562 -
          ((C145 * C618 - C303 * C565 - C145 * C702 + C27928 * C741) * C76 +
           (C145 * C617 - C303 * C566 - C145 * C701 + C27928 * C742) * C75 +
           (C145 * C616 - C303 * C567 - C145 * C700 + C27928 * C743) * C74 +
           (C145 * C615 - C303 * C568 - C145 * C699 + C27928 * C744) * C73) *
              C27939 * C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1394 * C146 - C1585 * C91 - C1394 * C259 + C1325 * C304 +
            C1395 * C615 - C1586 * C568 - C1395 * C699 + C1326 * C744 +
            C1396 * C1397 - C1587 * C1332 - C1396 * C1529 + C1327 * C1588) *
               C1323 +
           (C1610 + C1611 + C1612) * C27887) *
              C27939 * C28119 * C562 -
          ((C1396 * C1991 - C1587 * C1904 - C1396 * C2107 + C1327 * C2176 +
            C1395 * C1398 - C1586 * C1333 - C1395 * C1530 + C1326 * C1589 +
            C1394 * C616 - C1585 * C567 - C1394 * C700 + C1325 * C743) *
               C27887 +
           (C1396 * C1990 - C1587 * C1905 - C1396 * C2106 + C1327 * C2177 +
            C1395 * C1397 - C1586 * C1332 - C1395 * C1529 + C1326 * C1588 +
            C1394 * C615 - C1585 * C568 - C1394 * C699 + C1325 * C744) *
               C1323) *
              C27939 * C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q));
    d2eeyz[13] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C27939 * C203 - C202 * C91) * C145 +
                      (C27939 * C364 - C202 * C259) * C27928) *
                         C73 +
                     ((C214 - C215) * C145 + (C370 - C371) * C27928) * C74 +
                     ((C218 - C219) * C145 + (C372 - C373) * C27928) * C75 +
                     ((C222 - C223) * C145 + (C374 - C375) * C27928) * C76) *
                        C28119 * C562 +
                    (((C202 * C568 - C27939 * C657) * C145 +
                      (C202 * C699 - C27939 * C779) * C27928) *
                         C73 +
                     ((C202 * C567 - C27939 * C658) * C145 +
                      (C202 * C700 - C27939 * C780) * C27928) *
                         C74 +
                     ((C202 * C566 - C27939 * C659) * C145 +
                      (C202 * C701 - C27939 * C781) * C27928) *
                         C75 +
                     ((C202 * C565 - C27939 * C660) * C145 +
                      (C202 * C702 - C27939 * C782) * C27928) *
                         C76) *
                        C28119 * C563) *
                   C28121) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C27939 * C203 - C202 * C91) * C1394 +
                      (C27939 * C364 - C202 * C259) * C1325 +
                      (C2049 - C2050) * C1395 + (C2231 - C2232) * C1326 +
                      (C2053 - C2054) * C1396 + (C2233 - C2234) * C1327) *
                         C1323 +
                     ((C214 - C215) * C1394 + (C370 - C371) * C1325 +
                      (C1472 - C1473) * C1395 + (C1666 - C1667) * C1326 +
                      (C1476 - C1477) * C1396 + (C1668 - C1669) * C1327) *
                         C27887) *
                        C28119 * C562 +
                    (((C2050 - C2049) * C1394 + (C2232 - C2231) * C1325 +
                      (C2054 - C2053) * C1395 + (C2234 - C2233) * C1326 +
                      (C202 * C1905 - C27939 * C2044) * C1396 +
                      (C202 * C2106 - C27939 * C2228) * C1327) *
                         C1323 +
                     ((C1473 - C1472) * C1394 + (C1667 - C1666) * C1325 +
                      (C1477 - C1476) * C1395 + (C1669 - C1668) * C1326 +
                      (C202 * C1904 - C27939 * C2045) * C1396 +
                      (C202 * C2107 - C27939 * C2229) * C1327) *
                         C27887) *
                        C28119 * C563) *
                   C28121) /
                      (p * q * std::sqrt(p + q));
    d2eezx[13] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C73 * C96 - C83 * C91 + C74 * C98 - C85 * C92 + C75 * C100 -
            C87 * C93 + C76 * C102 - C89 * C94) *
               C202 +
           (C73 * C414 - C83 * C409 + C74 * C415 - C85 * C410 + C75 * C416 -
            C87 * C411 + C76 * C417 - C89 * C412) *
               C27939) *
              C27928 * C28119 * C562 +
          ((C83 * C568 - C73 * C575 + C85 * C567 - C74 * C573 + C87 * C566 -
            C75 * C571 + C89 * C565 - C76 * C569) *
               C202 +
           (C83 * C817 - C73 * C821 + C85 * C818 - C74 * C822 + C87 * C819 -
            C75 * C823 + C89 * C820 - C76 * C824) *
               C27939) *
              C27928 * C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1323 * C96 - C1328 * C91 + C27887 * C98 - C1330 * C92) * C202 +
            (C1323 * C414 - C1328 * C409 + C27887 * C415 - C1330 * C410) *
                C27939) *
               C1325 +
           ((C2111 - C2112 + C2113 - C2114) * C202 +
            (C2289 - C2290 + C2291 - C2292) * C27939) *
               C1326 +
           ((C2119 - C2120 + C2121 - C2122) * C202 +
            (C2293 - C2294 + C2295 - C2296) * C27939) *
               C1327) *
              C28119 * C562 +
          (((C2112 - C2111 + C2114 - C2113) * C202 +
            (C2290 - C2289 + C2292 - C2291) * C27939) *
               C1325 +
           ((C2120 - C2119 + C2122 - C2121) * C202 +
            (C2294 - C2293 + C2296 - C2295) * C27939) *
               C1326 +
           ((C1328 * C1905 - C1323 * C1908 + C1330 * C1904 - C27887 * C1906) *
                C202 +
            (C1328 * C2284 - C1323 * C2286 + C1330 * C2285 - C27887 * C2287) *
                C27939) *
               C1327) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q));
    d2eezy[13] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C27928 * C146 - C145 * C91) * C202 +
            (C27928 * C453 - C145 * C409) * C27939) *
               C73 +
           ((C157 - C158) * C202 + (C459 - C460) * C27939) * C74 +
           ((C161 - C162) * C202 + (C461 - C462) * C27939) * C75 +
           ((C165 - C166) * C202 + (C463 - C464) * C27939) * C76) *
              C28119 * C562 +
          (((C145 * C568 - C27928 * C615) * C202 +
            (C145 * C817 - C27928 * C859) * C27939) *
               C73 +
           ((C145 * C567 - C27928 * C616) * C202 +
            (C145 * C818 - C27928 * C860) * C27939) *
               C74 +
           ((C145 * C566 - C27928 * C617) * C202 +
            (C145 * C819 - C27928 * C861) * C27939) *
               C75 +
           ((C145 * C565 - C27928 * C618) * C202 +
            (C145 * C820 - C27928 * C862) * C27939) *
               C76) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1325 * C146 - C1394 * C91 + C1326 * C615 - C1395 * C568 +
             C1327 * C1397 - C1396 * C1332) *
                C202 +
            (C1325 * C453 - C1394 * C409 + C1326 * C859 - C1395 * C817 +
             C1327 * C1775 - C1396 * C1719) *
                C27939) *
               C1323 +
           ((C1404 - C1405 + C1406 - C1407 + C1408 - C1409) * C202 +
            (C1779 - C1780 + C1781 - C1782 + C1783 - C1784) * C27939) *
               C27887) *
              C28119 * C562 +
          (((C1394 * C568 - C1325 * C615 + C1395 * C1332 - C1326 * C1397 +
             C1396 * C1905 - C1327 * C1990) *
                C202 +
            (C1394 * C817 - C1325 * C859 + C1395 * C1719 - C1326 * C1775 +
             C1396 * C2284 - C1327 * C2346) *
                C27939) *
               C1323 +
           ((C1394 * C567 - C1325 * C616 + C1395 * C1333 - C1326 * C1398 +
             C1396 * C1904 - C1327 * C1991) *
                C202 +
            (C1394 * C818 - C1325 * C860 + C1395 * C1720 - C1326 * C1776 +
             C1396 * C2285 - C1327 * C2347) *
                C27939) *
               C27887) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q));
    d2eezz[13] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C202 * C203 - C498 * C91 - C202 * C409 + C27939 * C499) * C27928 *
               C73 +
           C526 * C74 + C527 * C75 + C528 * C76) *
              C28119 * C562 -
          ((C202 * C660 - C498 * C565 - C202 * C820 + C27939 * C897) * C27928 *
               C76 +
           (C202 * C659 - C498 * C566 - C202 * C819 + C27939 * C898) * C27928 *
               C75 +
           (C202 * C658 - C498 * C567 - C202 * C818 + C27939 * C899) * C27928 *
               C74 +
           (C202 * C657 - C498 * C568 - C202 * C817 + C27939 * C900) * C27928 *
               C73) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C202 * C203 - C498 * C91 - C202 * C409 + C27939 * C499) * C1325 +
            C2413 * C1326 + C2414 * C1327) *
               C1323 +
           (C1838 + C1853 + C1854) * C27887) *
              C28119 * C562 -
          (((C202 * C2045 - C498 * C1904 - C202 * C2285 + C27939 * C2398) *
                C1327 +
            C1852 * C1326 + C1851 * C1325) *
               C27887 +
           ((C202 * C2044 - C498 * C1905 - C202 * C2284 + C27939 * C2399) *
                C1327 +
            C2414 * C1326 + C2413 * C1325) *
               C1323) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q));
    d2eexx[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C83 * C96 - C84 * C91 - C83 * C97 + C73 * C106 + C85 * C98 -
           C86 * C92 - C85 * C99 + C74 * C107 + C87 * C100 - C88 * C93 -
           C87 * C101 + C75 * C108 + C89 * C102 - C90 * C94 - C89 * C103 +
           C76 * C109) *
              C27939 * C27928 * C935 -
          (C89 * C941 - C90 * C937 - C89 * C942 + C76 * C949 + C87 * C943 -
           C88 * C938 - C87 * C944 + C75 * C950 + C85 * C945 - C86 * C939 -
           C85 * C946 + C74 * C951 + C83 * C947 - C84 * C940 - C83 * C948 +
           C73 * C952) *
              C27939 * C27928 * C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1328 * C96 - C1329 * C91 - C1328 * C97 + C1323 * C106 +
            C1330 * C98 - C1331 * C92 - C1330 * C99 + C27887 * C107) *
               C27939 * C1325 +
           (C1937 + C1938) * C27939 * C1326 +
           (C1939 + C1940) * C27939 * C1327) *
              C935 -
          ((C1330 * C2468 - C1331 * C2464 - C1330 * C2469 + C27887 * C2476 +
            C1328 * C2470 - C1329 * C2465 - C1328 * C2471 + C1323 * C2477) *
               C27939 * C1327 +
           (C1330 * C2472 - C1331 * C2466 - C1330 * C2473 + C27887 * C2478 +
            C1328 * C2474 - C1329 * C2467 - C1328 * C2475 + C1323 * C2479) *
               C27939 * C1326 +
           (C1330 * C945 - C1331 * C939 - C1330 * C946 + C27887 * C951 +
            C1328 * C947 - C1329 * C940 - C1328 * C948 + C1323 * C952) *
               C27939 * C1325) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q));
    d2eexy[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C27928 * C146 - C145 * C91) * C83 +
           (C27928 * C151 - C145 * C97) * C73 + (C157 - C158) * C85 +
           (C159 - C160) * C74 + (C161 - C162) * C87 + (C163 - C164) * C75 +
           (C165 - C166) * C89 + (C167 - C168) * C76) *
              C27939 * C935 +
          ((C145 * C940 - C27928 * C987) * C83 +
           (C145 * C948 - C27928 * C991) * C73 +
           (C145 * C939 - C27928 * C988) * C85 +
           (C145 * C946 - C27928 * C992) * C74 +
           (C145 * C938 - C27928 * C989) * C87 +
           (C145 * C944 - C27928 * C993) * C75 +
           (C145 * C937 - C27928 * C990) * C89 +
           (C145 * C942 - C27928 * C994) * C76) *
              C27939 * C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1325 * C146 - C1394 * C91 + C1326 * C615 - C1395 * C568 +
            C1327 * C1397 - C1396 * C1332) *
               C1328 +
           (C1325 * C151 - C1394 * C97 + C1326 * C619 - C1395 * C576 +
            C1327 * C1400 - C1396 * C1336) *
               C1323 +
           (C1404 - C1405 + C1406 - C1407 + C1408 - C1409) * C1330 +
           (C1410 - C1411 + C1412 - C1413 + C1414 - C1415) * C27887) *
              C27939 * C935 +
          ((C1394 * C940 - C1325 * C987 + C1395 * C2467 - C1326 * C2530 +
            C1396 * C2465 - C1327 * C2531) *
               C1328 +
           (C1394 * C948 - C1325 * C991 + C1395 * C2475 - C1326 * C2534 +
            C1396 * C2471 - C1327 * C2535) *
               C1323 +
           (C1394 * C939 - C1325 * C988 + C1395 * C2466 - C1326 * C2532 +
            C1396 * C2464 - C1327 * C2533) *
               C1330 +
           (C1394 * C946 - C1325 * C992 + C1395 * C2473 - C1326 * C2536 +
            C1396 * C2469 - C1327 * C2537) *
               C27887) *
              C27939 * C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q));
    d2eexz[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C27939 * C203 - C202 * C91) * C83 +
           (C27939 * C208 - C202 * C97) * C73 + (C214 - C215) * C85 +
           (C216 - C217) * C74 + (C218 - C219) * C87 + (C220 - C221) * C75 +
           (C222 - C223) * C89 + (C224 - C225) * C76) *
              C27928 * C935 +
          ((C202 * C940 - C27939 * C1029) * C83 +
           (C202 * C948 - C27939 * C1033) * C73 +
           (C202 * C939 - C27939 * C1030) * C85 +
           (C202 * C946 - C27939 * C1034) * C74 +
           (C202 * C938 - C27939 * C1031) * C87 +
           (C202 * C944 - C27939 * C1035) * C75 +
           (C202 * C937 - C27939 * C1032) * C89 +
           (C202 * C942 - C27939 * C1036) * C76) *
              C27928 * C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C27939 * C203 - C202 * C91) * C1328 +
            (C27939 * C208 - C202 * C97) * C1323 + (C214 - C215) * C1330 +
            (C216 - C217) * C27887) *
               C1325 +
           ((C2049 - C2050) * C1328 + (C2051 - C2052) * C1323 +
            (C1472 - C1473) * C1330 + (C1474 - C1475) * C27887) *
               C1326 +
           ((C2053 - C2054) * C1328 + (C2055 - C2056) * C1323 +
            (C1476 - C1477) * C1330 + (C1478 - C1479) * C27887) *
               C1327) *
              C935 +
          (((C202 * C940 - C27939 * C1029) * C1328 +
            (C202 * C948 - C27939 * C1033) * C1323 +
            (C202 * C939 - C27939 * C1030) * C1330 +
            (C202 * C946 - C27939 * C1034) * C27887) *
               C1325 +
           ((C202 * C2467 - C27939 * C2588) * C1328 +
            (C202 * C2475 - C27939 * C2592) * C1323 +
            (C202 * C2466 - C27939 * C2589) * C1330 +
            (C202 * C2473 - C27939 * C2593) * C27887) *
               C1326 +
           ((C202 * C2465 - C27939 * C2590) * C1328 +
            (C202 * C2471 - C27939 * C2594) * C1323 +
            (C202 * C2464 - C27939 * C2591) * C1330 +
            (C202 * C2469 - C27939 * C2595) * C27887) *
               C1327) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q));
    d2eeyx[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C73 * C96 - C83 * C91 + C74 * C98 - C85 * C92 + C75 * C100 -
            C87 * C93 + C76 * C102 - C89 * C94) *
               C145 +
           (C73 * C264 - C83 * C259 + C74 * C265 - C85 * C260 + C75 * C266 -
            C87 * C261 + C76 * C267 - C89 * C262) *
               C27928) *
              C27939 * C935 +
          ((C83 * C940 - C73 * C947 + C85 * C939 - C74 * C945 + C87 * C938 -
            C75 * C943 + C89 * C937 - C76 * C941) *
               C145 +
           (C83 * C1071 - C73 * C1075 + C85 * C1072 - C74 * C1076 +
            C87 * C1073 - C75 * C1077 + C89 * C1074 - C76 * C1078) *
               C27928) *
              C27939 * C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1323 * C96 - C1328 * C91 + C27887 * C98 - C1330 * C92) * C1394 +
           (C1323 * C264 - C1328 * C259 + C27887 * C265 - C1330 * C260) *
               C1325 +
           (C2111 - C2112 + C2113 - C2114) * C1395 +
           (C2115 - C2116 + C2117 - C2118) * C1326 +
           (C2119 - C2120 + C2121 - C2122) * C1396 +
           (C2123 - C2124 + C2125 - C2126) * C1327) *
              C27939 * C935 +
          ((C1328 * C940 - C1323 * C947 + C1330 * C939 - C27887 * C945) *
               C1394 +
           (C1328 * C1071 - C1323 * C1075 + C1330 * C1072 - C27887 * C1076) *
               C1325 +
           (C1328 * C2467 - C1323 * C2474 + C1330 * C2466 - C27887 * C2472) *
               C1395 +
           (C1328 * C2646 - C1323 * C2650 + C1330 * C2647 - C27887 * C2651) *
               C1326 +
           (C1328 * C2465 - C1323 * C2470 + C1330 * C2464 - C27887 * C2468) *
               C1396 +
           (C1328 * C2648 - C1323 * C2652 + C1330 * C2649 - C27887 * C2653) *
               C1327) *
              C27939 * C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q));
    d2eeyy[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C145 * C146 - C303 * C91 - C145 * C259 + C27928 * C304) * C73 +
           C328 * C74 + C329 * C75 + C330 * C76) *
              C27939 * C935 -
          ((C145 * C990 - C303 * C937 - C145 * C1074 + C27928 * C1113) * C76 +
           (C145 * C989 - C303 * C938 - C145 * C1073 + C27928 * C1114) * C75 +
           (C145 * C988 - C303 * C939 - C145 * C1072 + C27928 * C1115) * C74 +
           (C145 * C987 - C303 * C940 - C145 * C1071 + C27928 * C1116) * C73) *
              C27939 * C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1394 * C146 - C1585 * C91 - C1394 * C259 + C1325 * C304 +
            C1395 * C615 - C1586 * C568 - C1395 * C699 + C1326 * C744 +
            C1396 * C1397 - C1587 * C1332 - C1396 * C1529 + C1327 * C1588) *
               C1323 +
           (C1610 + C1611 + C1612) * C27887) *
              C27939 * C935 -
          ((C1396 * C2533 - C1587 * C2464 - C1396 * C2649 + C1327 * C2704 +
            C1395 * C2532 - C1586 * C2466 - C1395 * C2647 + C1326 * C2705 +
            C1394 * C988 - C1585 * C939 - C1394 * C1072 + C1325 * C1115) *
               C27887 +
           (C1396 * C2531 - C1587 * C2465 - C1396 * C2648 + C1327 * C2706 +
            C1395 * C2530 - C1586 * C2467 - C1395 * C2646 + C1326 * C2707 +
            C1394 * C987 - C1585 * C940 - C1394 * C1071 + C1325 * C1116) *
               C1323) *
              C27939 * C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q));
    d2eeyz[14] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C27939 * C203 - C202 * C91) * C145 +
                      (C27939 * C364 - C202 * C259) * C27928) *
                         C73 +
                     ((C214 - C215) * C145 + (C370 - C371) * C27928) * C74 +
                     ((C218 - C219) * C145 + (C372 - C373) * C27928) * C75 +
                     ((C222 - C223) * C145 + (C374 - C375) * C27928) * C76) *
                        C935 +
                    (((C202 * C940 - C27939 * C1029) * C145 +
                      (C202 * C1071 - C27939 * C1151) * C27928) *
                         C73 +
                     ((C202 * C939 - C27939 * C1030) * C145 +
                      (C202 * C1072 - C27939 * C1152) * C27928) *
                         C74 +
                     ((C202 * C938 - C27939 * C1031) * C145 +
                      (C202 * C1073 - C27939 * C1153) * C27928) *
                         C75 +
                     ((C202 * C937 - C27939 * C1032) * C145 +
                      (C202 * C1074 - C27939 * C1154) * C27928) *
                         C76) *
                        C936) *
                   C28120 * C28121) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C27939 * C203 - C202 * C91) * C1394 +
                      (C27939 * C364 - C202 * C259) * C1325 +
                      (C2049 - C2050) * C1395 + (C2231 - C2232) * C1326 +
                      (C2053 - C2054) * C1396 + (C2233 - C2234) * C1327) *
                         C1323 +
                     ((C214 - C215) * C1394 + (C370 - C371) * C1325 +
                      (C1472 - C1473) * C1395 + (C1666 - C1667) * C1326 +
                      (C1476 - C1477) * C1396 + (C1668 - C1669) * C1327) *
                         C27887) *
                        C935 +
                    (((C202 * C940 - C27939 * C1029) * C1394 +
                      (C202 * C1071 - C27939 * C1151) * C1325 +
                      (C202 * C2467 - C27939 * C2588) * C1395 +
                      (C202 * C2646 - C27939 * C2758) * C1326 +
                      (C202 * C2465 - C27939 * C2590) * C1396 +
                      (C202 * C2648 - C27939 * C2759) * C1327) *
                         C1323 +
                     ((C202 * C939 - C27939 * C1030) * C1394 +
                      (C202 * C1072 - C27939 * C1152) * C1325 +
                      (C202 * C2466 - C27939 * C2589) * C1395 +
                      (C202 * C2647 - C27939 * C2760) * C1326 +
                      (C202 * C2464 - C27939 * C2591) * C1396 +
                      (C202 * C2649 - C27939 * C2761) * C1327) *
                         C27887) *
                        C936) *
                   C28120 * C28121) /
                      (p * q * std::sqrt(p + q));
    d2eezx[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C73 * C96 - C83 * C91 + C74 * C98 - C85 * C92 + C75 * C100 -
            C87 * C93 + C76 * C102 - C89 * C94) *
               C202 +
           (C73 * C414 - C83 * C409 + C74 * C415 - C85 * C410 + C75 * C416 -
            C87 * C411 + C76 * C417 - C89 * C412) *
               C27939) *
              C27928 * C935 +
          ((C83 * C940 - C73 * C947 + C85 * C939 - C74 * C945 + C87 * C938 -
            C75 * C943 + C89 * C937 - C76 * C941) *
               C202 +
           (C83 * C1189 - C73 * C1193 + C85 * C1190 - C74 * C1194 +
            C87 * C1191 - C75 * C1195 + C89 * C1192 - C76 * C1196) *
               C27939) *
              C27928 * C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1323 * C96 - C1328 * C91 + C27887 * C98 - C1330 * C92) * C202 +
            (C1323 * C414 - C1328 * C409 + C27887 * C415 - C1330 * C410) *
                C27939) *
               C1325 +
           ((C2111 - C2112 + C2113 - C2114) * C202 +
            (C2289 - C2290 + C2291 - C2292) * C27939) *
               C1326 +
           ((C2119 - C2120 + C2121 - C2122) * C202 +
            (C2293 - C2294 + C2295 - C2296) * C27939) *
               C1327) *
              C935 +
          (((C1328 * C940 - C1323 * C947 + C1330 * C939 - C27887 * C945) *
                C202 +
            (C1328 * C1189 - C1323 * C1193 + C1330 * C1190 - C27887 * C1194) *
                C27939) *
               C1325 +
           ((C1328 * C2467 - C1323 * C2474 + C1330 * C2466 - C27887 * C2472) *
                C202 +
            (C1328 * C2812 - C1323 * C2816 + C1330 * C2813 - C27887 * C2817) *
                C27939) *
               C1326 +
           ((C1328 * C2465 - C1323 * C2470 + C1330 * C2464 - C27887 * C2468) *
                C202 +
            (C1328 * C2814 - C1323 * C2818 + C1330 * C2815 - C27887 * C2819) *
                C27939) *
               C1327) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q));
    d2eezy[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C27928 * C146 - C145 * C91) * C202 +
            (C27928 * C453 - C145 * C409) * C27939) *
               C73 +
           ((C157 - C158) * C202 + (C459 - C460) * C27939) * C74 +
           ((C161 - C162) * C202 + (C461 - C462) * C27939) * C75 +
           ((C165 - C166) * C202 + (C463 - C464) * C27939) * C76) *
              C935 +
          (((C145 * C940 - C27928 * C987) * C202 +
            (C145 * C1189 - C27928 * C1231) * C27939) *
               C73 +
           ((C145 * C939 - C27928 * C988) * C202 +
            (C145 * C1190 - C27928 * C1232) * C27939) *
               C74 +
           ((C145 * C938 - C27928 * C989) * C202 +
            (C145 * C1191 - C27928 * C1233) * C27939) *
               C75 +
           ((C145 * C937 - C27928 * C990) * C202 +
            (C145 * C1192 - C27928 * C1234) * C27939) *
               C76) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1325 * C146 - C1394 * C91 + C1326 * C615 - C1395 * C568 +
             C1327 * C1397 - C1396 * C1332) *
                C202 +
            (C1325 * C453 - C1394 * C409 + C1326 * C859 - C1395 * C817 +
             C1327 * C1775 - C1396 * C1719) *
                C27939) *
               C1323 +
           ((C1404 - C1405 + C1406 - C1407 + C1408 - C1409) * C202 +
            (C1779 - C1780 + C1781 - C1782 + C1783 - C1784) * C27939) *
               C27887) *
              C935 +
          (((C1394 * C940 - C1325 * C987 + C1395 * C2467 - C1326 * C2530 +
             C1396 * C2465 - C1327 * C2531) *
                C202 +
            (C1394 * C1189 - C1325 * C1231 + C1395 * C2812 - C1326 * C2870 +
             C1396 * C2814 - C1327 * C2871) *
                C27939) *
               C1323 +
           ((C1394 * C939 - C1325 * C988 + C1395 * C2466 - C1326 * C2532 +
             C1396 * C2464 - C1327 * C2533) *
                C202 +
            (C1394 * C1190 - C1325 * C1232 + C1395 * C2813 - C1326 * C2872 +
             C1396 * C2815 - C1327 * C2873) *
                C27939) *
               C27887) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q));
    d2eezz[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C202 * C203 - C498 * C91 - C202 * C409 + C27939 * C499) * C27928 *
               C73 +
           C526 * C74 + C527 * C75 + C528 * C76) *
              C935 -
          ((C202 * C1032 - C498 * C937 - C202 * C1192 + C27939 * C1269) *
               C27928 * C76 +
           (C202 * C1031 - C498 * C938 - C202 * C1191 + C27939 * C1270) *
               C27928 * C75 +
           (C202 * C1030 - C498 * C939 - C202 * C1190 + C27939 * C1271) *
               C27928 * C74 +
           (C202 * C1029 - C498 * C940 - C202 * C1189 + C27939 * C1272) *
               C27928 * C73) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C202 * C203 - C498 * C91 - C202 * C409 + C27939 * C499) * C1325 +
            C2413 * C1326 + C2414 * C1327) *
               C1323 +
           (C1838 + C1853 + C1854) * C27887) *
              C935 -
          (((C202 * C2591 - C498 * C2464 - C202 * C2815 + C27939 * C2924) *
                C1327 +
            (C202 * C2589 - C498 * C2466 - C202 * C2813 + C27939 * C2925) *
                C1326 +
            (C202 * C1030 - C498 * C939 - C202 * C1190 + C27939 * C1271) *
                C1325) *
               C27887 +
           ((C202 * C2590 - C498 * C2465 - C202 * C2814 + C27939 * C2926) *
                C1327 +
            (C202 * C2588 - C498 * C2467 - C202 * C2812 + C27939 * C2927) *
                C1326 +
            (C202 * C1029 - C498 * C940 - C202 * C1189 + C27939 * C1272) *
                C1325) *
               C1323) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q));
    d2eexx[15] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C26731 * C96 - C13474 * C91 - C26731 * C97 + C28071 * C106 +
            C26724 * C98 - C13476 * C92 - C26724 * C99 + C27887 * C107) *
               C27939 * C28112 +
           (C26731 * C575 - C13474 * C568 - C26731 * C576 + C28071 * C580 +
            C26724 * C573 - C13476 * C567 - C26724 * C574 + C27887 * C579) *
               C27939 * C28113 +
           (C26731 * C1335 - C13474 * C1332 - C26731 * C1336 + C28071 * C1341 +
            C26724 * C1337 - C13476 * C1333 - C26724 * C1338 + C27887 * C1342) *
               C27939 * C13472) *
              C28119 * C28120 * C81 -
          ((C26724 * C1339 - C13476 * C1334 - C26724 * C1340 + C27887 * C1343 +
            C26731 * C1337 - C13474 * C1333 - C26731 * C1338 + C28071 * C1342) *
               C27939 * C13472 +
           (C26724 * C571 - C13476 * C566 - C26724 * C572 + C27887 * C578 +
            C26731 * C573 - C13474 * C567 - C26731 * C574 + C28071 * C579) *
               C27939 * C28113 +
           (C26724 * C100 - C13476 * C93 - C26724 * C101 + C27887 * C108 +
            C26731 * C98 - C13474 * C92 - C26731 * C99 + C28071 * C107) *
               C27939 * C28112) *
              C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eexy[15] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C28112 * C146 - C13527 * C91 + C28113 * C615 - C13528 * C568 +
            C13472 * C1397 - C13529 * C1332) *
               C26731 +
           (C28112 * C151 - C13527 * C97 + C28113 * C619 - C13528 * C576 +
            C13472 * C1400 - C13529 * C1336) *
               C28071 +
           (C13531 - C13532 + C13533 - C13534 + C13535 - C13536) * C26724 +
           (C13537 - C13538 + C13539 - C13540 + C13541 - C13542) * C27887) *
              C27939 * C28119 * C28120 * C81 +
          ((C13532 - C13531 + C13534 - C13533 + C13536 - C13535) * C26731 +
           (C13538 - C13537 + C13540 - C13539 + C13542 - C13541) * C28071 +
           (C13527 * C93 - C28112 * C148 + C13528 * C566 - C28113 * C617 +
            C13529 * C1334 - C13472 * C1399) *
               C26724 +
           (C13527 * C101 - C28112 * C153 + C13528 * C572 - C28113 * C621 +
            C13529 * C1340 - C13472 * C1402) *
               C27887) *
              C27939 * C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eexz[15] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C27939 * C203 - C202 * C91) * C26731 +
                      (C27939 * C208 - C202 * C97) * C28071 +
                      (C214 - C215) * C26724 + (C216 - C217) * C27887) *
                         C28112 +
                     ((C2049 - C2050) * C26731 + (C2051 - C2052) * C28071 +
                      (C1472 - C1473) * C26724 + (C1474 - C1475) * C27887) *
                         C28113 +
                     ((C2053 - C2054) * C26731 + (C2055 - C2056) * C28071 +
                      (C1476 - C1477) * C26724 + (C1478 - C1479) * C27887) *
                         C13472) *
                        C28119 * C28120 * C81 +
                    (((C215 - C214) * C26731 + (C217 - C216) * C28071 +
                      (C219 - C218) * C26724 + (C221 - C220) * C27887) *
                         C28112 +
                     ((C1473 - C1472) * C26731 + (C1475 - C1474) * C28071 +
                      (C4727 - C4726) * C26724 + (C4729 - C4728) * C27887) *
                         C28113 +
                     ((C1477 - C1476) * C26731 + (C1479 - C1478) * C28071 +
                      (C202 * C1334 - C27939 * C1467) * C26724 +
                      (C202 * C1340 - C27939 * C1470) * C27887) *
                         C13472) *
                        C28119 * C28120 * C82)) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[15] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C28071 * C96 - C26731 * C91 + C27887 * C98 - C26724 * C92) *
               C13527 +
           (C28071 * C264 - C26731 * C259 + C27887 * C265 - C26724 * C260) *
               C28112 +
           (C28071 * C575 - C26731 * C568 + C27887 * C573 - C26724 * C567) *
               C13528 +
           (C28071 * C703 - C26731 * C699 + C27887 * C704 - C26724 * C700) *
               C28113 +
           (C28071 * C1335 - C26731 * C1332 + C27887 * C1337 - C26724 * C1333) *
               C13529 +
           (C28071 * C1532 - C26731 * C1529 + C27887 * C1533 - C26724 * C1530) *
               C13472) *
              C27939 * C28119 * C28120 * C81 +
          ((C26731 * C92 - C28071 * C98 + C26724 * C93 - C27887 * C100) *
               C13527 +
           (C26731 * C260 - C28071 * C265 + C26724 * C261 - C27887 * C266) *
               C28112 +
           (C26731 * C567 - C28071 * C573 + C26724 * C566 - C27887 * C571) *
               C13528 +
           (C26731 * C700 - C28071 * C704 + C26724 * C701 - C27887 * C705) *
               C28113 +
           (C26731 * C1333 - C28071 * C1337 + C26724 * C1334 - C27887 * C1339) *
               C13529 +
           (C26731 * C1530 - C28071 * C1533 + C26724 * C1531 - C27887 * C1534) *
               C13472) *
              C27939 * C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[15] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C13527 * C146 - C13692 * C91 - C13527 * C259 + C28112 * C304 +
            C13528 * C615 - C13693 * C568 - C13528 * C699 + C28113 * C744 +
            C13529 * C1397 - C13694 * C1332 - C13529 * C1529 + C13472 * C1588) *
               C28071 +
           (C13714 + C13715 + C13716) * C27887) *
              C27939 * C28119 * C28120 * C81 -
          ((C13529 * C1399 - C13694 * C1334 - C13529 * C1531 + C13472 * C1590 +
            C13528 * C617 - C13693 * C566 - C13528 * C701 + C28113 * C742 +
            C13527 * C148 - C13692 * C93 - C13527 * C261 + C28112 * C306) *
               C27887 +
           (C13716 + C13715 + C13714) * C28071) *
              C27939 * C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[15] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C27939 * C203 - C202 * C91) * C13527 +
                      (C27939 * C364 - C202 * C259) * C28112 +
                      (C2049 - C2050) * C13528 + (C2231 - C2232) * C28113 +
                      (C2053 - C2054) * C13529 + (C2233 - C2234) * C13472) *
                         C28071 +
                     ((C214 - C215) * C13527 + (C370 - C371) * C28112 +
                      (C1472 - C1473) * C13528 + (C1666 - C1667) * C28113 +
                      (C1476 - C1477) * C13529 + (C1668 - C1669) * C13472) *
                         C27887) *
                        C28119 * C28120 * C81 +
                    (((C215 - C214) * C13527 + (C371 - C370) * C28112 +
                      (C1473 - C1472) * C13528 + (C1667 - C1666) * C28113 +
                      (C1477 - C1476) * C13529 + (C1669 - C1668) * C13472) *
                         C28071 +
                     ((C219 - C218) * C13527 + (C373 - C372) * C28112 +
                      (C4727 - C4726) * C13528 + (C4911 - C4910) * C28113 +
                      (C202 * C1334 - C27939 * C1467) * C13529 +
                      (C202 * C1531 - C27939 * C1664) * C13472) *
                         C27887) *
                        C28119 * C28120 * C82)) /
                  (p * q * std::sqrt(p + q));
    d2eezx[15] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28071 * C96 - C26731 * C91 + C27887 * C98 - C26724 * C92) * C202 +
            (C28071 * C414 - C26731 * C409 + C27887 * C415 - C26724 * C410) *
                C27939) *
               C28112 +
           ((C28071 * C575 - C26731 * C568 + C27887 * C573 - C26724 * C567) *
                C202 +
            (C28071 * C821 - C26731 * C817 + C27887 * C822 - C26724 * C818) *
                C27939) *
               C28113 +
           ((C28071 * C1335 - C26731 * C1332 + C27887 * C1337 -
             C26724 * C1333) *
                C202 +
            (C28071 * C1722 - C26731 * C1719 + C27887 * C1723 -
             C26724 * C1720) *
                C27939) *
               C13472) *
              C28119 * C28120 * C81 +
          (((C26731 * C92 - C28071 * C98 + C26724 * C93 - C27887 * C100) *
                C202 +
            (C26731 * C410 - C28071 * C415 + C26724 * C411 - C27887 * C416) *
                C27939) *
               C28112 +
           ((C26731 * C567 - C28071 * C573 + C26724 * C566 - C27887 * C571) *
                C202 +
            (C26731 * C818 - C28071 * C822 + C26724 * C819 - C27887 * C823) *
                C27939) *
               C28113 +
           ((C26731 * C1333 - C28071 * C1337 + C26724 * C1334 -
             C27887 * C1339) *
                C202 +
            (C26731 * C1720 - C28071 * C1723 + C26724 * C1721 -
             C27887 * C1724) *
                C27939) *
               C13472) *
              C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eezy[15] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28112 * C146 - C13527 * C91 + C28113 * C615 - C13528 * C568 +
             C13472 * C1397 - C13529 * C1332) *
                C202 +
            (C28112 * C453 - C13527 * C409 + C28113 * C859 - C13528 * C817 +
             C13472 * C1775 - C13529 * C1719) *
                C27939) *
               C28071 +
           ((C13531 - C13532 + C13533 - C13534 + C13535 - C13536) * C202 +
            (C13867 - C13868 + C13869 - C13870 + C13871 - C13872) * C27939) *
               C27887) *
              C28119 * C28120 * C81 +
          (((C13532 - C13531 + C13534 - C13533 + C13536 - C13535) * C202 +
            (C13868 - C13867 + C13870 - C13869 + C13872 - C13871) * C27939) *
               C28071 +
           ((C13527 * C93 - C28112 * C148 + C13528 * C566 - C28113 * C617 +
             C13529 * C1334 - C13472 * C1399) *
                C202 +
            (C13527 * C411 - C28112 * C455 + C13528 * C819 - C28113 * C861 +
             C13529 * C1721 - C13472 * C1777) *
                C27939) *
               C27887) *
              C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eezz[15] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C202 * C203 - C498 * C91 - C202 * C409 + C27939 * C499) * C28112 +
            C2413 * C28113 + C2414 * C13472) *
               C28071 +
           (C13923 + C13924 + C13925) * C27887) *
              C28119 * C28120 * C81 -
          (((C202 * C1467 - C498 * C1334 - C202 * C1721 + C27939 * C1836) *
                C13472 +
            C5079 * C28113 + C524 * C28112) *
               C27887 +
           (C13925 + C13924 + C13923) * C28071) *
              C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eexx[16] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C26731 * C96 - C13474 * C91 - C26731 * C97 + C28071 * C106 +
            C26724 * C98 - C13476 * C92 - C26724 * C99 + C27887 * C107) *
               C27939 * C28112 +
           (C14000 + C14001) * C27939 * C28113 +
           (C14002 + C14003) * C27939 * C13472) *
              C28119 * C562 -
          ((C26724 * C1906 - C13476 * C1904 - C26724 * C1907 + C27887 * C1910 +
            C26731 * C1908 - C13474 * C1905 - C26731 * C1909 + C28071 * C1911) *
               C27939 * C13472 +
           (C14003 + C14002) * C27939 * C28113 +
           (C14001 + C14000) * C27939 * C28112) *
              C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eexy[16] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C28112 * C146 - C13527 * C91 + C28113 * C615 - C13528 * C568 +
            C13472 * C1397 - C13529 * C1332) *
               C26731 +
           (C28112 * C151 - C13527 * C97 + C28113 * C619 - C13528 * C576 +
            C13472 * C1400 - C13529 * C1336) *
               C28071 +
           (C13531 - C13532 + C13533 - C13534 + C13535 - C13536) * C26724 +
           (C13537 - C13538 + C13539 - C13540 + C13541 - C13542) * C27887) *
              C27939 * C28119 * C562 +
          ((C13527 * C568 - C28112 * C615 + C13528 * C1332 - C28113 * C1397 +
            C13529 * C1905 - C13472 * C1990) *
               C26731 +
           (C13527 * C576 - C28112 * C619 + C13528 * C1336 - C28113 * C1400 +
            C13529 * C1909 - C13472 * C1992) *
               C28071 +
           (C13527 * C567 - C28112 * C616 + C13528 * C1333 - C28113 * C1398 +
            C13529 * C1904 - C13472 * C1991) *
               C26724 +
           (C13527 * C574 - C28112 * C620 + C13528 * C1338 - C28113 * C1401 +
            C13529 * C1907 - C13472 * C1993) *
               C27887) *
              C27939 * C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eexz[16] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C27939 * C203 - C202 * C91) * C26731 +
                      (C27939 * C208 - C202 * C97) * C28071 +
                      (C214 - C215) * C26724 + (C216 - C217) * C27887) *
                         C28112 +
                     ((C2049 - C2050) * C26731 + (C2051 - C2052) * C28071 +
                      (C1472 - C1473) * C26724 + (C1474 - C1475) * C27887) *
                         C28113 +
                     ((C2053 - C2054) * C26731 + (C2055 - C2056) * C28071 +
                      (C1476 - C1477) * C26724 + (C1478 - C1479) * C27887) *
                         C13472) *
                        C28119 * C562 +
                    (((C2050 - C2049) * C26731 + (C2052 - C2051) * C28071 +
                      (C1473 - C1472) * C26724 + (C1475 - C1474) * C27887) *
                         C28112 +
                     ((C2054 - C2053) * C26731 + (C2056 - C2055) * C28071 +
                      (C1477 - C1476) * C26724 + (C1479 - C1478) * C27887) *
                         C28113 +
                     ((C11327 - C11326) * C26731 + (C11329 - C11328) * C28071 +
                      (C202 * C1904 - C27939 * C2045) * C26724 +
                      (C202 * C1907 - C27939 * C2047) * C27887) *
                         C13472) *
                        C28119 * C563) *
                   C28121) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[16] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C28071 * C96 - C26731 * C91 + C27887 * C98 - C26724 * C92) *
               C13527 +
           (C28071 * C264 - C26731 * C259 + C27887 * C265 - C26724 * C260) *
               C28112 +
           (C14154 - C14155 + C14156 - C14157) * C13528 +
           (C14158 - C14159 + C14160 - C14161) * C28113 +
           (C14162 - C14163 + C14164 - C14165) * C13529 +
           (C14166 - C14167 + C14168 - C14169) * C13472) *
              C27939 * C28119 * C562 +
          ((C14155 - C14154 + C14157 - C14156) * C13527 +
           (C14159 - C14158 + C14161 - C14160) * C28112 +
           (C14163 - C14162 + C14165 - C14164) * C13528 +
           (C14167 - C14166 + C14169 - C14168) * C28113 +
           (C26731 * C1905 - C28071 * C1908 + C26724 * C1904 - C27887 * C1906) *
               C13529 +
           (C26731 * C2106 - C28071 * C2108 + C26724 * C2107 - C27887 * C2109) *
               C13472) *
              C27939 * C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eeyy[16] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C13527 * C146 - C13692 * C91 - C13527 * C259 + C28112 * C304 +
            C13528 * C615 - C13693 * C568 - C13528 * C699 + C28113 * C744 +
            C13529 * C1397 - C13694 * C1332 - C13529 * C1529 + C13472 * C1588) *
               C28071 +
           (C13714 + C13715 + C13716) * C27887) *
              C27939 * C28119 * C562 -
          ((C13529 * C1991 - C13694 * C1904 - C13529 * C2107 + C13472 * C2176 +
            C13528 * C1398 - C13693 * C1333 - C13528 * C1530 + C28113 * C1589 +
            C13527 * C616 - C13692 * C567 - C13527 * C700 + C28112 * C743) *
               C27887 +
           (C13529 * C1990 - C13694 * C1905 - C13529 * C2106 + C13472 * C2177 +
            C13528 * C1397 - C13693 * C1332 - C13528 * C1529 + C28113 * C1588 +
            C13527 * C615 - C13692 * C568 - C13527 * C699 + C28112 * C744) *
               C28071) *
              C27939 * C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eeyz[16] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C27939 * C203 - C202 * C91) * C13527 +
                      (C27939 * C364 - C202 * C259) * C28112 +
                      (C2049 - C2050) * C13528 + (C2231 - C2232) * C28113 +
                      (C2053 - C2054) * C13529 + (C2233 - C2234) * C13472) *
                         C28071 +
                     ((C214 - C215) * C13527 + (C370 - C371) * C28112 +
                      (C1472 - C1473) * C13528 + (C1666 - C1667) * C28113 +
                      (C1476 - C1477) * C13529 + (C1668 - C1669) * C13472) *
                         C27887) *
                        C28119 * C562 +
                    (((C2050 - C2049) * C13527 + (C2232 - C2231) * C28112 +
                      (C2054 - C2053) * C13528 + (C2234 - C2233) * C28113 +
                      (C11327 - C11326) * C13529 + (C11449 - C11448) * C13472) *
                         C28071 +
                     ((C1473 - C1472) * C13527 + (C1667 - C1666) * C28112 +
                      (C1477 - C1476) * C13528 + (C1669 - C1668) * C28113 +
                      (C202 * C1904 - C27939 * C2045) * C13529 +
                      (C202 * C2107 - C27939 * C2229) * C13472) *
                         C27887) *
                        C28119 * C563) *
                   C28121) /
                  (p * q * std::sqrt(p + q));
    d2eezx[16] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28071 * C96 - C26731 * C91 + C27887 * C98 - C26724 * C92) * C202 +
            (C28071 * C414 - C26731 * C409 + C27887 * C415 - C26724 * C410) *
                C27939) *
               C28112 +
           ((C14154 - C14155 + C14156 - C14157) * C202 +
            (C14320 - C14321 + C14322 - C14323) * C27939) *
               C28113 +
           ((C14162 - C14163 + C14164 - C14165) * C202 +
            (C14324 - C14325 + C14326 - C14327) * C27939) *
               C13472) *
              C28119 * C562 +
          (((C14155 - C14154 + C14157 - C14156) * C202 +
            (C14321 - C14320 + C14323 - C14322) * C27939) *
               C28112 +
           ((C14163 - C14162 + C14165 - C14164) * C202 +
            (C14325 - C14324 + C14327 - C14326) * C27939) *
               C28113 +
           ((C26731 * C1905 - C28071 * C1908 + C26724 * C1904 -
             C27887 * C1906) *
                C202 +
            (C26731 * C2284 - C28071 * C2286 + C26724 * C2285 -
             C27887 * C2287) *
                C27939) *
               C13472) *
              C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eezy[16] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28112 * C146 - C13527 * C91 + C28113 * C615 - C13528 * C568 +
             C13472 * C1397 - C13529 * C1332) *
                C202 +
            (C28112 * C453 - C13527 * C409 + C28113 * C859 - C13528 * C817 +
             C13472 * C1775 - C13529 * C1719) *
                C27939) *
               C28071 +
           ((C13531 - C13532 + C13533 - C13534 + C13535 - C13536) * C202 +
            (C13867 - C13868 + C13869 - C13870 + C13871 - C13872) * C27939) *
               C27887) *
              C28119 * C562 +
          (((C13527 * C568 - C28112 * C615 + C13528 * C1332 - C28113 * C1397 +
             C13529 * C1905 - C13472 * C1990) *
                C202 +
            (C13527 * C817 - C28112 * C859 + C13528 * C1719 - C28113 * C1775 +
             C13529 * C2284 - C13472 * C2346) *
                C27939) *
               C28071 +
           ((C13527 * C567 - C28112 * C616 + C13528 * C1333 - C28113 * C1398 +
             C13529 * C1904 - C13472 * C1991) *
                C202 +
            (C13527 * C818 - C28112 * C860 + C13528 * C1720 - C28113 * C1776 +
             C13529 * C2285 - C13472 * C2347) *
                C27939) *
               C27887) *
              C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eezz[16] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C202 * C203 - C498 * C91 - C202 * C409 + C27939 * C499) * C28112 +
            C2413 * C28113 + C2414 * C13472) *
               C28071 +
           (C13923 + C13924 + C13925) * C27887) *
              C28119 * C562 -
          (((C202 * C2045 - C498 * C1904 - C202 * C2285 + C27939 * C2398) *
                C13472 +
            C1852 * C28113 + C1851 * C28112) *
               C27887 +
           (C11568 * C13472 + C2414 * C28113 + C2413 * C28112) * C28071) *
              C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eexx[17] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C26731 * C96 - C13474 * C91 - C26731 * C97 + C28071 * C106 +
            C26724 * C98 - C13476 * C92 - C26724 * C99 + C27887 * C107) *
               C27939 * C28112 +
           (C14000 + C14001) * C27939 * C28113 +
           (C14002 + C14003) * C27939 * C13472) *
              C935 -
          ((C26724 * C2468 - C13476 * C2464 - C26724 * C2469 + C27887 * C2476 +
            C26731 * C2470 - C13474 * C2465 - C26731 * C2471 + C28071 * C2477) *
               C27939 * C13472 +
           (C26724 * C2472 - C13476 * C2466 - C26724 * C2473 + C27887 * C2478 +
            C26731 * C2474 - C13474 * C2467 - C26731 * C2475 + C28071 * C2479) *
               C27939 * C28113 +
           (C26724 * C945 - C13476 * C939 - C26724 * C946 + C27887 * C951 +
            C26731 * C947 - C13474 * C940 - C26731 * C948 + C28071 * C952) *
               C27939 * C28112) *
              C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eexy[17] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C28112 * C146 - C13527 * C91 + C28113 * C615 - C13528 * C568 +
            C13472 * C1397 - C13529 * C1332) *
               C26731 +
           (C28112 * C151 - C13527 * C97 + C28113 * C619 - C13528 * C576 +
            C13472 * C1400 - C13529 * C1336) *
               C28071 +
           (C13531 - C13532 + C13533 - C13534 + C13535 - C13536) * C26724 +
           (C13537 - C13538 + C13539 - C13540 + C13541 - C13542) * C27887) *
              C27939 * C935 +
          ((C13527 * C940 - C28112 * C987 + C13528 * C2467 - C28113 * C2530 +
            C13529 * C2465 - C13472 * C2531) *
               C26731 +
           (C13527 * C948 - C28112 * C991 + C13528 * C2475 - C28113 * C2534 +
            C13529 * C2471 - C13472 * C2535) *
               C28071 +
           (C13527 * C939 - C28112 * C988 + C13528 * C2466 - C28113 * C2532 +
            C13529 * C2464 - C13472 * C2533) *
               C26724 +
           (C13527 * C946 - C28112 * C992 + C13528 * C2473 - C28113 * C2536 +
            C13529 * C2469 - C13472 * C2537) *
               C27887) *
              C27939 * C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eexz[17] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C27939 * C203 - C202 * C91) * C26731 +
                      (C27939 * C208 - C202 * C97) * C28071 +
                      (C214 - C215) * C26724 + (C216 - C217) * C27887) *
                         C28112 +
                     ((C2049 - C2050) * C26731 + (C2051 - C2052) * C28071 +
                      (C1472 - C1473) * C26724 + (C1474 - C1475) * C27887) *
                         C28113 +
                     ((C2053 - C2054) * C26731 + (C2055 - C2056) * C28071 +
                      (C1476 - C1477) * C26724 + (C1478 - C1479) * C27887) *
                         C13472) *
                        C935 +
                    (((C202 * C940 - C27939 * C1029) * C26731 +
                      (C202 * C948 - C27939 * C1033) * C28071 +
                      (C202 * C939 - C27939 * C1030) * C26724 +
                      (C202 * C946 - C27939 * C1034) * C27887) *
                         C28112 +
                     ((C202 * C2467 - C27939 * C2588) * C26731 +
                      (C202 * C2475 - C27939 * C2592) * C28071 +
                      (C202 * C2466 - C27939 * C2589) * C26724 +
                      (C202 * C2473 - C27939 * C2593) * C27887) *
                         C28113 +
                     ((C202 * C2465 - C27939 * C2590) * C26731 +
                      (C202 * C2471 - C27939 * C2594) * C28071 +
                      (C202 * C2464 - C27939 * C2591) * C26724 +
                      (C202 * C2469 - C27939 * C2595) * C27887) *
                         C13472) *
                        C936) *
                   C28120 * C28121) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[17] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C28071 * C96 - C26731 * C91 + C27887 * C98 - C26724 * C92) *
               C13527 +
           (C28071 * C264 - C26731 * C259 + C27887 * C265 - C26724 * C260) *
               C28112 +
           (C14154 - C14155 + C14156 - C14157) * C13528 +
           (C14158 - C14159 + C14160 - C14161) * C28113 +
           (C14162 - C14163 + C14164 - C14165) * C13529 +
           (C14166 - C14167 + C14168 - C14169) * C13472) *
              C27939 * C935 +
          ((C26731 * C940 - C28071 * C947 + C26724 * C939 - C27887 * C945) *
               C13527 +
           (C26731 * C1071 - C28071 * C1075 + C26724 * C1072 - C27887 * C1076) *
               C28112 +
           (C26731 * C2467 - C28071 * C2474 + C26724 * C2466 - C27887 * C2472) *
               C13528 +
           (C26731 * C2646 - C28071 * C2650 + C26724 * C2647 - C27887 * C2651) *
               C28113 +
           (C26731 * C2465 - C28071 * C2470 + C26724 * C2464 - C27887 * C2468) *
               C13529 +
           (C26731 * C2648 - C28071 * C2652 + C26724 * C2649 - C27887 * C2653) *
               C13472) *
              C27939 * C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eeyy[17] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C13527 * C146 - C13692 * C91 - C13527 * C259 + C28112 * C304 +
            C13528 * C615 - C13693 * C568 - C13528 * C699 + C28113 * C744 +
            C13529 * C1397 - C13694 * C1332 - C13529 * C1529 + C13472 * C1588) *
               C28071 +
           (C13714 + C13715 + C13716) * C27887) *
              C27939 * C935 -
          ((C13529 * C2533 - C13694 * C2464 - C13529 * C2649 + C13472 * C2704 +
            C13528 * C2532 - C13693 * C2466 - C13528 * C2647 + C28113 * C2705 +
            C13527 * C988 - C13692 * C939 - C13527 * C1072 + C28112 * C1115) *
               C27887 +
           (C13529 * C2531 - C13694 * C2465 - C13529 * C2648 + C13472 * C2706 +
            C13528 * C2530 - C13693 * C2467 - C13528 * C2646 + C28113 * C2707 +
            C13527 * C987 - C13692 * C940 - C13527 * C1071 + C28112 * C1116) *
               C28071) *
              C27939 * C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eeyz[17] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C27939 * C203 - C202 * C91) * C13527 +
                      (C27939 * C364 - C202 * C259) * C28112 +
                      (C2049 - C2050) * C13528 + (C2231 - C2232) * C28113 +
                      (C2053 - C2054) * C13529 + (C2233 - C2234) * C13472) *
                         C28071 +
                     ((C214 - C215) * C13527 + (C370 - C371) * C28112 +
                      (C1472 - C1473) * C13528 + (C1666 - C1667) * C28113 +
                      (C1476 - C1477) * C13529 + (C1668 - C1669) * C13472) *
                         C27887) *
                        C935 +
                    (((C202 * C940 - C27939 * C1029) * C13527 +
                      (C202 * C1071 - C27939 * C1151) * C28112 +
                      (C202 * C2467 - C27939 * C2588) * C13528 +
                      (C202 * C2646 - C27939 * C2758) * C28113 +
                      (C202 * C2465 - C27939 * C2590) * C13529 +
                      (C202 * C2648 - C27939 * C2759) * C13472) *
                         C28071 +
                     ((C202 * C939 - C27939 * C1030) * C13527 +
                      (C202 * C1072 - C27939 * C1152) * C28112 +
                      (C202 * C2466 - C27939 * C2589) * C13528 +
                      (C202 * C2647 - C27939 * C2760) * C28113 +
                      (C202 * C2464 - C27939 * C2591) * C13529 +
                      (C202 * C2649 - C27939 * C2761) * C13472) *
                         C27887) *
                        C936) *
                   C28120 * C28121) /
                  (p * q * std::sqrt(p + q));
    d2eezx[17] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28071 * C96 - C26731 * C91 + C27887 * C98 - C26724 * C92) * C202 +
            (C28071 * C414 - C26731 * C409 + C27887 * C415 - C26724 * C410) *
                C27939) *
               C28112 +
           ((C14154 - C14155 + C14156 - C14157) * C202 +
            (C14320 - C14321 + C14322 - C14323) * C27939) *
               C28113 +
           ((C14162 - C14163 + C14164 - C14165) * C202 +
            (C14324 - C14325 + C14326 - C14327) * C27939) *
               C13472) *
              C935 +
          (((C26731 * C940 - C28071 * C947 + C26724 * C939 - C27887 * C945) *
                C202 +
            (C26731 * C1189 - C28071 * C1193 + C26724 * C1190 -
             C27887 * C1194) *
                C27939) *
               C28112 +
           ((C26731 * C2467 - C28071 * C2474 + C26724 * C2466 -
             C27887 * C2472) *
                C202 +
            (C26731 * C2812 - C28071 * C2816 + C26724 * C2813 -
             C27887 * C2817) *
                C27939) *
               C28113 +
           ((C26731 * C2465 - C28071 * C2470 + C26724 * C2464 -
             C27887 * C2468) *
                C202 +
            (C26731 * C2814 - C28071 * C2818 + C26724 * C2815 -
             C27887 * C2819) *
                C27939) *
               C13472) *
              C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eezy[17] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28112 * C146 - C13527 * C91 + C28113 * C615 - C13528 * C568 +
             C13472 * C1397 - C13529 * C1332) *
                C202 +
            (C28112 * C453 - C13527 * C409 + C28113 * C859 - C13528 * C817 +
             C13472 * C1775 - C13529 * C1719) *
                C27939) *
               C28071 +
           ((C13531 - C13532 + C13533 - C13534 + C13535 - C13536) * C202 +
            (C13867 - C13868 + C13869 - C13870 + C13871 - C13872) * C27939) *
               C27887) *
              C935 +
          (((C13527 * C940 - C28112 * C987 + C13528 * C2467 - C28113 * C2530 +
             C13529 * C2465 - C13472 * C2531) *
                C202 +
            (C13527 * C1189 - C28112 * C1231 + C13528 * C2812 - C28113 * C2870 +
             C13529 * C2814 - C13472 * C2871) *
                C27939) *
               C28071 +
           ((C13527 * C939 - C28112 * C988 + C13528 * C2466 - C28113 * C2532 +
             C13529 * C2464 - C13472 * C2533) *
                C202 +
            (C13527 * C1190 - C28112 * C1232 + C13528 * C2813 - C28113 * C2872 +
             C13529 * C2815 - C13472 * C2873) *
                C27939) *
               C27887) *
              C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eezz[17] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C202 * C203 - C498 * C91 - C202 * C409 + C27939 * C499) * C28112 +
            C2413 * C28113 + C2414 * C13472) *
               C28071 +
           (C13923 + C13924 + C13925) * C27887) *
              C935 -
          (((C202 * C2591 - C498 * C2464 - C202 * C2815 + C27939 * C2924) *
                C13472 +
            (C202 * C2589 - C498 * C2466 - C202 * C2813 + C27939 * C2925) *
                C28113 +
            (C202 * C1030 - C498 * C939 - C202 * C1190 + C27939 * C1271) *
                C28112) *
               C27887 +
           ((C202 * C2590 - C498 * C2465 - C202 * C2814 + C27939 * C2926) *
                C13472 +
            (C202 * C2588 - C498 * C2467 - C202 * C2812 + C27939 * C2927) *
                C28113 +
            (C202 * C1029 - C498 * C940 - C202 * C1189 + C27939 * C1272) *
                C28112) *
               C28071) *
              C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eexx[18] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C10909 * C96 - C10910 * C91 - C10909 * C97 + C27882 * C106) *
                C28085 +
            C12941 * C28003) *
               C28112 +
           (C11248 * C28085 + C12408 * C28003) * C28113 +
           (C11249 * C28085 + (C10909 * C2470 - C10910 * C2465 -
                               C10909 * C2471 + C27882 * C2477) *
                                  C28003) *
               C13472) *
              C28119 * C28120 * C81 -
          (((C10909 * C2468 - C10910 * C2464 - C10909 * C2469 +
             C27882 * C2476) *
                C28003 +
            (C10909 * C1337 - C10910 * C1333 - C10909 * C1338 +
             C27882 * C1342) *
                C28085) *
               C13472 +
           ((C10909 * C2472 - C10910 * C2466 - C10909 * C2473 +
             C27882 * C2478) *
                C28003 +
            (C10909 * C573 - C10910 * C567 - C10909 * C574 + C27882 * C579) *
                C28085) *
               C28113 +
           ((C10909 * C945 - C10910 * C939 - C10909 * C946 + C27882 * C951) *
                C28003 +
            (C10909 * C98 - C10910 * C92 - C10909 * C99 + C27882 * C107) *
                C28085) *
               C28112) *
              C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eexy[18] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28112 * C146 - C13527 * C91 + C28113 * C615 - C13528 * C568 +
             C13472 * C1397 - C13529 * C1332) *
                C10909 +
            (C28112 * C151 - C13527 * C97 + C28113 * C619 - C13528 * C576 +
             C13472 * C1400 - C13529 * C1336) *
                C27882) *
               C28085 +
           ((C28112 * C987 - C13527 * C940 + C28113 * C2530 - C13528 * C2467 +
             C13472 * C2531 - C13529 * C2465) *
                C10909 +
            (C28112 * C991 - C13527 * C948 + C28113 * C2534 - C13528 * C2475 +
             C13472 * C2535 - C13529 * C2471) *
                C27882) *
               C28003) *
              C28119 * C28120 * C81 +
          (((C13532 - C13531 + C13534 - C13533 + C13536 - C13535) * C10909 +
            (C13538 - C13537 + C13540 - C13539 + C13542 - C13541) * C27882) *
               C28085 +
           ((C13527 * C939 - C28112 * C988 + C13528 * C2466 - C28113 * C2532 +
             C13529 * C2464 - C13472 * C2533) *
                C10909 +
            (C13527 * C946 - C28112 * C992 + C13528 * C2473 - C28113 * C2536 +
             C13529 * C2469 - C13472 * C2537) *
                C27882) *
               C28003) *
              C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eexz[18] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28085 * C203 - C6191 * C91 + C28003 * C1029 - C6192 * C940) *
                C10909 +
            (C28085 * C208 - C6191 * C97 + C28003 * C1033 - C6192 * C948) *
                C27882) *
               C28112 +
           ((C8357 - C8358 + C8359 - C8360) * C10909 +
            (C8361 - C8362 + C8363 - C8364) * C27882) *
               C28113 +
           ((C28085 * C1465 - C6191 * C1332 + C28003 * C2590 - C6192 * C2465) *
                C10909 +
            (C28085 * C1468 - C6191 * C1336 + C28003 * C2594 - C6192 * C2471) *
                C27882) *
               C13472) *
              C28119 * C28120 * C81 +
          (((C6195 - C6194 + C6197 - C6196) * C10909 +
            (C6199 - C6198 + C6201 - C6200) * C27882) *
               C28112 +
           ((C7706 - C7705 + C7708 - C7707) * C10909 +
            (C7710 - C7709 + C7712 - C7711) * C27882) *
               C28113 +
           ((C6191 * C1333 - C28085 * C1466 + C6192 * C2464 - C28003 * C2591) *
                C10909 +
            (C6191 * C1338 - C28085 * C1469 + C6192 * C2469 - C28003 * C2595) *
                C27882) *
               C13472) *
              C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[18] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C27882 * C96 - C10909 * C91) * C13527 +
                      (C27882 * C264 - C10909 * C259) * C28112 +
                      (C11366 - C11367) * C13528 + (C11368 - C11369) * C28113 +
                      (C11370 - C11371) * C13529 + (C11372 - C11373) * C13472) *
                         C28085 +
                     ((C13115 - C13116) * C13527 + (C13117 - C13118) * C28112 +
                      (C12580 - C12581) * C13528 + (C12582 - C12583) * C28113 +
                      (C27882 * C2470 - C10909 * C2465) * C13529 +
                      (C27882 * C2652 - C10909 * C2648) * C13472) *
                         C28003) *
                        C28119 * C28120 * C81 +
                    (((C10909 * C92 - C27882 * C98) * C13527 +
                      (C10909 * C260 - C27882 * C265) * C28112 +
                      (C10909 * C567 - C27882 * C573) * C13528 +
                      (C10909 * C700 - C27882 * C704) * C28113 +
                      (C10909 * C1333 - C27882 * C1337) * C13529 +
                      (C10909 * C1530 - C27882 * C1533) * C13472) *
                         C28085 +
                     ((C10909 * C939 - C27882 * C945) * C13527 +
                      (C10909 * C1072 - C27882 * C1076) * C28112 +
                      (C10909 * C2466 - C27882 * C2472) * C13528 +
                      (C10909 * C2647 - C27882 * C2651) * C28113 +
                      (C10909 * C2464 - C27882 * C2468) * C13529 +
                      (C10909 * C2649 - C27882 * C2653) * C13472) *
                         C28003) *
                        C28119 * C28120 * C82)) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[18] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C13527 * C146 - C13692 * C91 - C13527 * C259 + C28112 * C304 +
            C13528 * C615 - C13693 * C568 - C13528 * C699 + C28113 * C744 +
            C13529 * C1397 - C13694 * C1332 - C13529 * C1529 + C13472 * C1588) *
               C27882 * C28085 +
           (C13527 * C987 - C13692 * C940 - C13527 * C1071 + C28112 * C1116 +
            C13528 * C2530 - C13693 * C2467 - C13528 * C2646 + C28113 * C2707 +
            C13529 * C2531 - C13694 * C2465 - C13529 * C2648 + C13472 * C2706) *
               C27882 * C28003) *
              C28119 * C28120 * C81 -
          ((C13529 * C2533 - C13694 * C2464 - C13529 * C2649 + C13472 * C2704 +
            C13528 * C2532 - C13693 * C2466 - C13528 * C2647 + C28113 * C2705 +
            C13527 * C988 - C13692 * C939 - C13527 * C1072 + C28112 * C1115) *
               C27882 * C28003 +
           (C13716 + C13715 + C13714) * C27882 * C28085) *
              C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[18] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C28085 * C203 - C6191 * C91 + C28003 * C1029 - C6192 * C940) *
               C13527 +
           (C28085 * C364 - C6191 * C259 + C28003 * C1151 - C6192 * C1071) *
               C28112 +
           (C8357 - C8358 + C8359 - C8360) * C13528 +
           (C8571 - C8572 + C8573 - C8574) * C28113 +
           (C28085 * C1465 - C6191 * C1332 + C28003 * C2590 - C6192 * C2465) *
               C13529 +
           (C28085 * C1662 - C6191 * C1529 + C28003 * C2759 - C6192 * C2648) *
               C13472) *
              C27882 * C28119 * C28120 * C81 +
          ((C6195 - C6194 + C6197 - C6196) * C13527 +
           (C6368 - C6367 + C6370 - C6369) * C28112 +
           (C7706 - C7705 + C7708 - C7707) * C13528 +
           (C7926 - C7925 + C7928 - C7927) * C28113 +
           (C6191 * C1333 - C28085 * C1466 + C6192 * C2464 - C28003 * C2591) *
               C13529 +
           (C6191 * C1530 - C28085 * C1663 + C6192 * C2649 - C28003 * C2761) *
               C13472) *
              C27882 * C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eezx[18] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C27882 * C96 - C10909 * C91) * C6191 +
                      (C27882 * C414 - C10909 * C409) * C28085 +
                      (C13115 - C13116) * C6192 + (C13305 - C13306) * C28003) *
                         C28112 +
                     ((C11366 - C11367) * C6191 + (C11486 - C11487) * C28085 +
                      (C12580 - C12581) * C6192 + (C12748 - C12749) * C28003) *
                         C28113 +
                     ((C11370 - C11371) * C6191 + (C11488 - C11489) * C28085 +
                      (C27882 * C2470 - C10909 * C2465) * C6192 +
                      (C27882 * C2818 - C10909 * C2814) * C28003) *
                         C13472) *
                        C28119 * C28120 * C81 +
                    (((C10909 * C92 - C27882 * C98) * C6191 +
                      (C10909 * C410 - C27882 * C415) * C28085 +
                      (C10909 * C939 - C27882 * C945) * C6192 +
                      (C10909 * C1190 - C27882 * C1194) * C28003) *
                         C28112 +
                     ((C10909 * C567 - C27882 * C573) * C6191 +
                      (C10909 * C818 - C27882 * C822) * C28085 +
                      (C10909 * C2466 - C27882 * C2472) * C6192 +
                      (C10909 * C2813 - C27882 * C2817) * C28003) *
                         C28113 +
                     ((C10909 * C1333 - C27882 * C1337) * C6191 +
                      (C10909 * C1720 - C27882 * C1723) * C28085 +
                      (C10909 * C2464 - C27882 * C2468) * C6192 +
                      (C10909 * C2815 - C27882 * C2819) * C28003) *
                         C13472) *
                        C28119 * C28120 * C82)) /
                  (p * q * std::sqrt(p + q));
    d2eezy[18] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C28112 * C146 - C13527 * C91 + C28113 * C615 - C13528 * C568 +
            C13472 * C1397 - C13529 * C1332) *
               C6191 +
           (C28112 * C453 - C13527 * C409 + C28113 * C859 - C13528 * C817 +
            C13472 * C1775 - C13529 * C1719) *
               C28085 +
           (C28112 * C987 - C13527 * C940 + C28113 * C2530 - C13528 * C2467 +
            C13472 * C2531 - C13529 * C2465) *
               C6192 +
           (C28112 * C1231 - C13527 * C1189 + C28113 * C2870 - C13528 * C2812 +
            C13472 * C2871 - C13529 * C2814) *
               C28003) *
              C27882 * C28119 * C28120 * C81 +
          ((C13532 - C13531 + C13534 - C13533 + C13536 - C13535) * C6191 +
           (C13868 - C13867 + C13870 - C13869 + C13872 - C13871) * C28085 +
           (C13527 * C939 - C28112 * C988 + C13528 * C2466 - C28113 * C2532 +
            C13529 * C2464 - C13472 * C2533) *
               C6192 +
           (C13527 * C1190 - C28112 * C1232 + C13528 * C2813 - C28113 * C2872 +
            C13529 * C2815 - C13472 * C2873) *
               C28003) *
              C27882 * C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eezz[18] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C6191 * C203 - C6526 * C91 - C6191 * C409 + C28085 * C499 +
            C6192 * C1029 - C6527 * C940 - C6192 * C1189 + C28003 * C1272) *
               C28112 +
           (C8789 + C8790) * C28113 +
           (C6191 * C1465 - C6526 * C1332 - C6191 * C1719 + C28085 * C1834 +
            C6192 * C2590 - C6527 * C2465 - C6192 * C2814 + C28003 * C2926) *
               C13472) *
              C27882 * C28119 * C28120 * C81 -
          ((C6192 * C2591 - C6527 * C2464 - C6192 * C2815 + C28003 * C2924 +
            C6191 * C1466 - C6526 * C1333 - C6191 * C1720 + C28085 * C1835) *
               C13472 +
           (C8144 + C8143) * C28113 + (C6554 + C6553) * C28112) *
              C27882 * C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eexx[19] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C10909 * C96 - C10910 * C91 - C10909 * C97 + C27882 * C106) *
                C28085 +
            C12941 * C28003) *
               C28112 +
           (C17238 + C17239) * C28113 + (C17240 + C17248) * C13472) *
              C28119 * C562 -
          (((C10909 * C11603 - C10910 * C11602 - C10909 * C11604 +
             C27882 * C11605) *
                C28003 +
            C11250 * C28085) *
               C13472 +
           (C17248 + C17240) * C28113 + (C17239 + C17238) * C28112) *
              C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eexy[19] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C28112 * C146 - C13527 * C91 + C28113 * C615 -
                       C13528 * C568 + C13472 * C1397 - C13529 * C1332) *
                          C10909 +
                      (C28112 * C151 - C13527 * C97 + C28113 * C619 -
                       C13528 * C576 + C13472 * C1400 - C13529 * C1336) *
                          C27882) *
                         C28085 +
                     ((C28112 * C987 - C13527 * C940 + C28113 * C2530 -
                       C13528 * C2467 + C13472 * C2531 - C13529 * C2465) *
                          C10909 +
                      (C28112 * C991 - C13527 * C948 + C28113 * C2534 -
                       C13528 * C2475 + C13472 * C2535 - C13529 * C2471) *
                          C27882) *
                         C28003) *
                        C28119 * C562 +
                    (((C13527 * C568 - C28112 * C615 + C13528 * C1332 -
                       C28113 * C1397 + C13529 * C1905 - C13472 * C1990) *
                          C10909 +
                      (C13527 * C576 - C28112 * C619 + C13528 * C1336 -
                       C28113 * C1400 + C13529 * C1909 - C13472 * C1992) *
                          C27882) *
                         C28085 +
                     ((C13527 * C2467 - C28112 * C2530 + C13528 * C2465 -
                       C28113 * C2531 + C13529 * C11602 - C13472 * C11640) *
                          C10909 +
                      (C13527 * C2475 - C28112 * C2534 + C13528 * C2471 -
                       C28113 * C2535 + C13529 * C11604 - C13472 * C11641) *
                          C27882) *
                         C28003) *
                        C28119 * C563) *
                   C28121) /
                  (p * q * std::sqrt(p + q));
    d2eexz[19] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28085 * C203 - C6191 * C91 + C28003 * C1029 - C6192 * C940) *
                C10909 +
            (C28085 * C208 - C6191 * C97 + C28003 * C1033 - C6192 * C948) *
                C27882) *
               C28112 +
           ((C8357 - C8358 + C8359 - C8360) * C10909 +
            (C8361 - C8362 + C8363 - C8364) * C27882) *
               C28113 +
           ((C17349 - C17350 + C17351 - C17352) * C10909 +
            (C17353 - C17354 + C17355 - C17356) * C27882) *
               C13472) *
              C28119 * C562 +
          (((C8358 - C8357 + C8360 - C8359) * C10909 +
            (C8362 - C8361 + C8364 - C8363) * C27882) *
               C28112 +
           ((C17350 - C17349 + C17352 - C17351) * C10909 +
            (C17354 - C17353 + C17356 - C17355) * C27882) *
               C28113 +
           ((C6191 * C1905 - C28085 * C2044 + C6192 * C11602 -
             C28003 * C11676) *
                C10909 +
            (C6191 * C1909 - C28085 * C2046 + C6192 * C11604 -
             C28003 * C11677) *
                C27882) *
               C13472) *
              C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eeyx[19] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C27882 * C96 - C10909 * C91) * C13527 +
                      (C27882 * C264 - C10909 * C259) * C28112 +
                      (C11366 - C11367) * C13528 + (C11368 - C11369) * C28113 +
                      (C11370 - C11371) * C13529 + (C11372 - C11373) * C13472) *
                         C28085 +
                     ((C13115 - C13116) * C13527 + (C13117 - C13118) * C28112 +
                      (C12580 - C12581) * C13528 + (C12582 - C12583) * C28113 +
                      (C17407 - C17408) * C13529 + (C17409 - C17410) * C13472) *
                         C28003) *
                        C28119 * C562 +
                    (((C11367 - C11366) * C13527 + (C11369 - C11368) * C28112 +
                      (C11371 - C11370) * C13528 + (C11373 - C11372) * C28113 +
                      (C11375 - C11374) * C13529 + (C11377 - C11376) * C13472) *
                         C28085 +
                     ((C12581 - C12580) * C13527 + (C12583 - C12582) * C28112 +
                      (C17408 - C17407) * C13528 + (C17410 - C17409) * C28113 +
                      (C10909 * C11602 - C27882 * C11603) * C13529 +
                      (C10909 * C11712 - C27882 * C11713) * C13472) *
                         C28003) *
                        C28119 * C563) *
                   C28121) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[19] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C13527 * C146 - C13692 * C91 - C13527 * C259 + C28112 * C304 +
            C13528 * C615 - C13693 * C568 - C13528 * C699 + C28113 * C744 +
            C13529 * C1397 - C13694 * C1332 - C13529 * C1529 + C13472 * C1588) *
               C27882 * C28085 +
           (C13527 * C987 - C13692 * C940 - C13527 * C1071 + C28112 * C1116 +
            C13528 * C2530 - C13693 * C2467 - C13528 * C2646 + C28113 * C2707 +
            C13529 * C2531 - C13694 * C2465 - C13529 * C2648 + C13472 * C2706) *
               C27882 * C28003) *
              C28119 * C562 -
          ((C13529 * C11640 - C13694 * C11602 - C13529 * C11712 +
            C13472 * C11748 + C13528 * C2531 - C13693 * C2465 - C13528 * C2648 +
            C28113 * C2706 + C13527 * C2530 - C13692 * C2467 - C13527 * C2646 +
            C28112 * C2707) *
               C27882 * C28003 +
           (C13529 * C1990 - C13694 * C1905 - C13529 * C2106 + C13472 * C2177 +
            C13528 * C1397 - C13693 * C1332 - C13528 * C1529 + C28113 * C1588 +
            C13527 * C615 - C13692 * C568 - C13527 * C699 + C28112 * C744) *
               C27882 * C28085) *
              C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eeyz[19] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C28085 * C203 - C6191 * C91 + C28003 * C1029 - C6192 * C940) *
               C13527 +
           (C28085 * C364 - C6191 * C259 + C28003 * C1151 - C6192 * C1071) *
               C28112 +
           (C8357 - C8358 + C8359 - C8360) * C13528 +
           (C8571 - C8572 + C8573 - C8574) * C28113 +
           (C17349 - C17350 + C17351 - C17352) * C13529 +
           (C17511 - C17512 + C17513 - C17514) * C13472) *
              C27882 * C28119 * C562 +
          ((C8358 - C8357 + C8360 - C8359) * C13527 +
           (C8572 - C8571 + C8574 - C8573) * C28112 +
           (C17350 - C17349 + C17352 - C17351) * C13528 +
           (C17512 - C17511 + C17514 - C17513) * C28113 +
           (C6191 * C1905 - C28085 * C2044 + C6192 * C11602 - C28003 * C11676) *
               C13529 +
           (C6191 * C2106 - C28085 * C2228 + C6192 * C11712 - C28003 * C11783) *
               C13472) *
              C27882 * C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eezx[19] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C27882 * C96 - C10909 * C91) * C6191 +
                      (C27882 * C414 - C10909 * C409) * C28085 +
                      (C13115 - C13116) * C6192 + (C13305 - C13306) * C28003) *
                         C28112 +
                     ((C11366 - C11367) * C6191 + (C11486 - C11487) * C28085 +
                      (C12580 - C12581) * C6192 + (C12748 - C12749) * C28003) *
                         C28113 +
                     ((C11370 - C11371) * C6191 + (C11488 - C11489) * C28085 +
                      (C17407 - C17408) * C6192 + (C17565 - C17566) * C28003) *
                         C13472) *
                        C28119 * C562 +
                    (((C11367 - C11366) * C6191 + (C11487 - C11486) * C28085 +
                      (C12581 - C12580) * C6192 + (C12749 - C12748) * C28003) *
                         C28112 +
                     ((C11371 - C11370) * C6191 + (C11489 - C11488) * C28085 +
                      (C17408 - C17407) * C6192 + (C17566 - C17565) * C28003) *
                         C28113 +
                     ((C11375 - C11374) * C6191 + (C11491 - C11490) * C28085 +
                      (C10909 * C11602 - C27882 * C11603) * C6192 +
                      (C10909 * C11818 - C27882 * C11819) * C28003) *
                         C13472) *
                        C28119 * C563) *
                   C28121) /
                  (p * q * std::sqrt(p + q));
    d2eezy[19] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C28112 * C146 - C13527 * C91 + C28113 * C615 -
                      C13528 * C568 + C13472 * C1397 - C13529 * C1332) *
                         C6191 +
                     (C28112 * C453 - C13527 * C409 + C28113 * C859 -
                      C13528 * C817 + C13472 * C1775 - C13529 * C1719) *
                         C28085 +
                     (C28112 * C987 - C13527 * C940 + C28113 * C2530 -
                      C13528 * C2467 + C13472 * C2531 - C13529 * C2465) *
                         C6192 +
                     (C28112 * C1231 - C13527 * C1189 + C28113 * C2870 -
                      C13528 * C2812 + C13472 * C2871 - C13529 * C2814) *
                         C28003) *
                        C27882 * C28119 * C562 +
                    ((C13527 * C568 - C28112 * C615 + C13528 * C1332 -
                      C28113 * C1397 + C13529 * C1905 - C13472 * C1990) *
                         C6191 +
                     (C13527 * C817 - C28112 * C859 + C13528 * C1719 -
                      C28113 * C1775 + C13529 * C2284 - C13472 * C2346) *
                         C28085 +
                     (C13527 * C2467 - C28112 * C2530 + C13528 * C2465 -
                      C28113 * C2531 + C13529 * C11602 - C13472 * C11640) *
                         C6192 +
                     (C13527 * C2812 - C28112 * C2870 + C13528 * C2814 -
                      C28113 * C2871 + C13529 * C11818 - C13472 * C11854) *
                         C28003) *
                        C27882 * C28119 * C563) *
                   C28121) /
                  (p * q * std::sqrt(p + q));
    d2eezz[19] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C6191 * C203 - C6526 * C91 - C6191 * C409 + C28085 * C499 +
            C6192 * C1029 - C6527 * C940 - C6192 * C1189 + C28003 * C1272) *
               C28112 +
           (C8789 + C8790) * C28113 + (C17679 + C17680) * C13472) *
              C27882 * C28119 * C562 -
          ((C6192 * C11676 - C6527 * C11602 - C6192 * C11818 + C28003 * C11889 +
            C6191 * C2044 - C6526 * C1905 - C6191 * C2284 + C28085 * C2399) *
               C13472 +
           (C17680 + C17679) * C28113 + (C8790 + C8789) * C28112) *
              C27882 * C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eexx[20] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C10909 * C96 - C10910 * C91 - C10909 * C97 + C27882 * C106) *
                C28085 +
            C12941 * C28003) *
               C28112 +
           (C17238 + C17239) * C28113 + (C17240 + C17248) * C13472) *
              C935 -
          (((C10909 * C12391 - C10910 * C12390 - C10909 * C12392 +
             C27882 * C12393) *
                C28003 +
            C17247 * C28085) *
               C13472 +
           (C12409 * C28003 + C12408 * C28085) * C28113 +
           (C12942 * C28003 + C12941 * C28085) * C28112) *
              C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eexy[20] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28112 * C146 - C13527 * C91 + C28113 * C615 - C13528 * C568 +
             C13472 * C1397 - C13529 * C1332) *
                C10909 +
            (C28112 * C151 - C13527 * C97 + C28113 * C619 - C13528 * C576 +
             C13472 * C1400 - C13529 * C1336) *
                C27882) *
               C28085 +
           ((C17781 - C17782 + C17783 - C17784 + C17785 - C17786) * C10909 +
            (C17787 - C17788 + C17789 - C17790 + C17791 - C17792) * C27882) *
               C28003) *
              C935 +
          (((C17782 - C17781 + C17784 - C17783 + C17786 - C17785) * C10909 +
            (C17788 - C17787 + C17790 - C17789 + C17792 - C17791) * C27882) *
               C28085 +
           ((C13527 * C2981 - C28112 * C3043 + C13528 * C3551 - C28113 * C3608 +
             C13529 * C12390 - C13472 * C12461) *
                C10909 +
            (C13527 * C2985 - C28112 * C3046 + C13528 * C3555 - C28113 * C3610 +
             C13529 * C12392 - C13472 * C12462) *
                C27882) *
               C28003) *
              C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eexz[20] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28085 * C203 - C6191 * C91 + C28003 * C1029 - C6192 * C940) *
                C10909 +
            (C28085 * C208 - C6191 * C97 + C28003 * C1033 - C6192 * C948) *
                C27882) *
               C28112 +
           ((C8357 - C8358 + C8359 - C8360) * C10909 +
            (C8361 - C8362 + C8363 - C8364) * C27882) *
               C28113 +
           ((C17349 - C17350 + C17351 - C17352) * C10909 +
            (C17353 - C17354 + C17355 - C17356) * C27882) *
               C13472) *
              C935 +
          (((C6191 * C940 - C28085 * C1029 + C6192 * C2981 - C28003 * C3110) *
                C10909 +
            (C6191 * C948 - C28085 * C1033 + C6192 * C2985 - C28003 * C3113) *
                C27882) *
               C28112 +
           ((C6191 * C2467 - C28085 * C2588 + C6192 * C3551 - C28003 * C3662) *
                C10909 +
            (C6191 * C2475 - C28085 * C2592 + C6192 * C3555 - C28003 * C3664) *
                C27882) *
               C28113 +
           ((C6191 * C2465 - C28085 * C2590 + C6192 * C12390 -
             C28003 * C12513) *
                C10909 +
            (C6191 * C2471 - C28085 * C2594 + C6192 * C12392 -
             C28003 * C12514) *
                C27882) *
               C13472) *
              C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eeyx[20] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C27882 * C96 - C10909 * C91) * C13527 +
                      (C27882 * C264 - C10909 * C259) * C28112 +
                      (C11366 - C11367) * C13528 + (C11368 - C11369) * C28113 +
                      (C11370 - C11371) * C13529 + (C11372 - C11373) * C13472) *
                         C28085 +
                     ((C13115 - C13116) * C13527 + (C13117 - C13118) * C28112 +
                      (C12580 - C12581) * C13528 + (C12582 - C12583) * C28113 +
                      (C17407 - C17408) * C13529 + (C17409 - C17410) * C13472) *
                         C28003) *
                        C935 +
                    (((C13116 - C13115) * C13527 + (C13118 - C13117) * C28112 +
                      (C12581 - C12580) * C13528 + (C12583 - C12582) * C28113 +
                      (C17408 - C17407) * C13529 + (C17410 - C17409) * C13472) *
                         C28085 +
                     ((C13120 - C13119) * C13527 + (C13122 - C13121) * C28112 +
                      (C12585 - C12584) * C13528 + (C12587 - C12586) * C28113 +
                      (C10909 * C12390 - C27882 * C12391) * C13529 +
                      (C10909 * C12577 - C27882 * C12578) * C13472) *
                         C28003) *
                        C936) *
                   C28120 * C28121) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[20] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C13527 * C146 - C13692 * C91 - C13527 * C259 + C28112 * C304 +
            C13528 * C615 - C13693 * C568 - C13528 * C699 + C28113 * C744 +
            C13529 * C1397 - C13694 * C1332 - C13529 * C1529 + C13472 * C1588) *
               C27882 * C28085 +
           (C17961 + C17962 + C17963) * C27882 * C28003) *
              C935 -
          ((C13529 * C12461 - C13694 * C12390 - C13529 * C12577 +
            C13472 * C12637 + C13528 * C3608 - C13693 * C3551 - C13528 * C3716 +
            C28113 * C3771 + C13527 * C3043 - C13692 * C2981 - C13527 * C3178 +
            C28112 * C3234) *
               C27882 * C28003 +
           (C17963 + C17962 + C17961) * C27882 * C28085) *
              C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eeyz[20] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C28085 * C203 - C6191 * C91 + C28003 * C1029 - C6192 * C940) *
               C13527 +
           (C28085 * C364 - C6191 * C259 + C28003 * C1151 - C6192 * C1071) *
               C28112 +
           (C8357 - C8358 + C8359 - C8360) * C13528 +
           (C8571 - C8572 + C8573 - C8574) * C28113 +
           (C17349 - C17350 + C17351 - C17352) * C13529 +
           (C17511 - C17512 + C17513 - C17514) * C13472) *
              C27882 * C935 +
          ((C6191 * C940 - C28085 * C1029 + C6192 * C2981 - C28003 * C3110) *
               C13527 +
           (C6191 * C1071 - C28085 * C1151 + C6192 * C3178 - C28003 * C3301) *
               C28112 +
           (C6191 * C2467 - C28085 * C2588 + C6192 * C3551 - C28003 * C3662) *
               C13528 +
           (C6191 * C2646 - C28085 * C2758 + C6192 * C3716 - C28003 * C3822) *
               C28113 +
           (C6191 * C2465 - C28085 * C2590 + C6192 * C12390 - C28003 * C12513) *
               C13529 +
           (C6191 * C2648 - C28085 * C2759 + C6192 * C12577 - C28003 * C12688) *
               C13472) *
              C27882 * C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eezx[20] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C27882 * C96 - C10909 * C91) * C6191 +
                      (C27882 * C414 - C10909 * C409) * C28085 +
                      (C13115 - C13116) * C6192 + (C13305 - C13306) * C28003) *
                         C28112 +
                     ((C11366 - C11367) * C6191 + (C11486 - C11487) * C28085 +
                      (C12580 - C12581) * C6192 + (C12748 - C12749) * C28003) *
                         C28113 +
                     ((C11370 - C11371) * C6191 + (C11488 - C11489) * C28085 +
                      (C17407 - C17408) * C6192 + (C17565 - C17566) * C28003) *
                         C13472) *
                        C935 +
                    (((C13116 - C13115) * C6191 + (C13306 - C13305) * C28085 +
                      (C13120 - C13119) * C6192 + (C13308 - C13307) * C28003) *
                         C28112 +
                     ((C12581 - C12580) * C6191 + (C12749 - C12748) * C28085 +
                      (C12585 - C12584) * C6192 + (C12751 - C12750) * C28003) *
                         C28113 +
                     ((C17408 - C17407) * C6191 + (C17566 - C17565) * C28085 +
                      (C10909 * C12390 - C27882 * C12391) * C6192 +
                      (C10909 * C12745 - C27882 * C12746) * C28003) *
                         C13472) *
                        C936) *
                   C28120 * C28121) /
                  (p * q * std::sqrt(p + q));
    d2eezy[20] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C28112 * C146 - C13527 * C91 + C28113 * C615 - C13528 * C568 +
            C13472 * C1397 - C13529 * C1332) *
               C6191 +
           (C28112 * C453 - C13527 * C409 + C28113 * C859 - C13528 * C817 +
            C13472 * C1775 - C13529 * C1719) *
               C28085 +
           (C17781 - C17782 + C17783 - C17784 + C17785 - C17786) * C6192 +
           (C18114 - C18115 + C18116 - C18117 + C18118 - C18119) * C28003) *
              C27882 * C935 +
          ((C17782 - C17781 + C17784 - C17783 + C17786 - C17785) * C6191 +
           (C18115 - C18114 + C18117 - C18116 + C18119 - C18118) * C28085 +
           (C13527 * C2981 - C28112 * C3043 + C13528 * C3551 - C28113 * C3608 +
            C13529 * C12390 - C13472 * C12461) *
               C6192 +
           (C13527 * C3360 - C28112 * C3416 + C13528 * C3874 - C28113 * C3928 +
            C13529 * C12745 - C13472 * C12801) *
               C28003) *
              C27882 * C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eezz[20] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C6191 * C203 - C6526 * C91 - C6191 * C409 + C28085 * C499 +
            C6192 * C1029 - C6527 * C940 - C6192 * C1189 + C28003 * C1272) *
               C28112 +
           (C8789 + C8790) * C28113 + (C17679 + C17680) * C13472) *
              C27882 * C935 -
          ((C6192 * C12513 - C6527 * C12390 - C6192 * C12745 + C28003 * C12852 +
            C6191 * C2590 - C6526 * C2465 - C6191 * C2814 + C28085 * C2926) *
               C13472 +
           (C6192 * C3662 - C6527 * C3551 - C6192 * C3874 + C28003 * C3981 +
            C6191 * C2588 - C6526 * C2467 - C6191 * C2812 + C28085 * C2927) *
               C28113 +
           (C6192 * C3110 - C6527 * C2981 - C6192 * C3360 + C28003 * C3476 +
            C6191 * C1029 - C6526 * C940 - C6191 * C1189 + C28085 * C1272) *
               C28112) *
              C27882 * C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eexx[21] +=
        (-std::pow(Pi, 2.5) *
         (((C10909 * C96 - C10910 * C91 - C10909 * C97 + C27882 * C106) *
               C27939 * C10905 +
           (C10909 * C575 - C10910 * C568 - C10909 * C576 + C27882 * C580) *
               C27939 * C10906 +
           (C10909 * C1335 - C10910 * C1332 - C10909 * C1336 + C27882 * C1341) *
               C27939 * C10907 +
           (C10909 * C1908 - C10910 * C1905 - C10909 * C1909 + C27882 * C1911) *
               C27939 * C10908) *
              C28119 * C28120 * C81 -
          ((C10909 * C1906 - C10910 * C1904 - C10909 * C1907 + C27882 * C1910) *
               C27939 * C10908 +
           (C10909 * C1337 - C10910 * C1333 - C10909 * C1338 + C27882 * C1342) *
               C27939 * C10907 +
           (C10909 * C573 - C10910 * C567 - C10909 * C574 + C27882 * C579) *
               C27939 * C10906 +
           (C10909 * C98 - C10910 * C92 - C10909 * C99 + C27882 * C107) *
               C27939 * C10905) *
              C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C9465 * C96 - C9466 * C91 - C9465 * C97 + C9460 * C106 +
            C9467 * C98 - C9468 * C92 - C9467 * C99 + C9461 * C107 +
            C9469 * C100 - C9470 * C93 - C9469 * C101 + C9462 * C108) *
               C27939 * C9463 +
           (C9465 * C575 - C9466 * C568 - C9465 * C576 + C9460 * C580 +
            C9467 * C573 - C9468 * C567 - C9467 * C574 + C9461 * C579 +
            C9469 * C571 - C9470 * C566 - C9469 * C572 + C9462 * C578) *
               C27939 * C27977) *
              C28119 * C28120 * C81 -
          ((C9469 * C569 - C9470 * C565 - C9469 * C570 + C9462 * C577 +
            C9467 * C571 - C9468 * C566 - C9467 * C572 + C9461 * C578 +
            C9465 * C573 - C9466 * C567 - C9465 * C574 + C9460 * C579) *
               C27939 * C27977 +
           (C9469 * C102 - C9470 * C94 - C9469 * C103 + C9462 * C109 +
            C9467 * C100 - C9468 * C93 - C9467 * C101 + C9461 * C108 +
            C9465 * C98 - C9466 * C92 - C9465 * C99 + C9460 * C107) *
               C27939 * C9463) *
              C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C10909 * C96 - C10910 * C91 - C10909 * C97 + C27882 * C106) *
                C2978 +
            (C10909 * C947 - C10910 * C940 - C10909 * C948 + C27882 * C952) *
                C2979 +
            (C10909 * C2984 - C10910 * C2981 - C10909 * C2985 +
             C27882 * C2990) *
                C2980) *
               C9463 +
           (C11248 * C2978 +
            (C10909 * C2474 - C10910 * C2467 - C10909 * C2475 +
             C27882 * C2479) *
                C2979 +
            (C10909 * C3554 - C10910 * C3551 - C10909 * C3555 +
             C27882 * C3557) *
                C2980) *
               C27977) *
              C28119 * C28120 * C81 -
          (((C10909 * C3552 - C10910 * C3550 - C10909 * C3553 +
             C27882 * C3556) *
                C2980 +
            (C10909 * C2472 - C10910 * C2466 - C10909 * C2473 +
             C27882 * C2478) *
                C2979 +
            (C10909 * C573 - C10910 * C567 - C10909 * C574 + C27882 * C579) *
                C2978) *
               C27977 +
           ((C10909 * C2986 - C10910 * C2982 - C10909 * C2987 +
             C27882 * C2991) *
                C2980 +
            (C10909 * C945 - C10910 * C939 - C10909 * C946 + C27882 * C951) *
                C2979 +
            (C10909 * C98 - C10910 * C92 - C10909 * C99 + C27882 * C107) *
                C2978) *
               C9463) *
              C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eexy[21] +=
        (-std::pow(Pi, 2.5) *
         (((C10905 * C146 - C10945 * C91 + C10906 * C615 - C10946 * C568 +
            C10907 * C1397 - C10947 * C1332 + C10908 * C1990 - C10948 * C1905) *
               C10909 +
           (C10905 * C151 - C10945 * C97 + C10906 * C619 - C10946 * C576 +
            C10907 * C1400 - C10947 * C1336 + C10908 * C1992 - C10948 * C1909) *
               C27882) *
              C27939 * C28119 * C28120 * C81 +
          ((C10945 * C92 - C10905 * C147 + C10946 * C567 - C10906 * C616 +
            C10947 * C1333 - C10907 * C1398 + C10948 * C1904 - C10908 * C1991) *
               C10909 +
           (C10945 * C99 - C10905 * C152 + C10946 * C574 - C10906 * C620 +
            C10947 * C1338 - C10907 * C1401 + C10948 * C1907 - C10908 * C1993) *
               C27882) *
              C27939 * C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C9463 * C146 - C9521 * C91 + C27977 * C615 - C9522 * C568) * C9465 +
           (C9463 * C151 - C9521 * C97 + C27977 * C619 - C9522 * C576) * C9460 +
           (C9524 - C9525 + C9526 - C9527) * C9467 +
           (C9528 - C9529 + C9530 - C9531) * C9461 +
           (C9532 - C9533 + C9534 - C9535) * C9469 +
           (C9536 - C9537 + C9538 - C9539) * C9462) *
              C27939 * C28119 * C28120 * C81 +
          ((C9525 - C9524 + C9527 - C9526) * C9465 +
           (C9529 - C9528 + C9531 - C9530) * C9460 +
           (C9533 - C9532 + C9535 - C9534) * C9467 +
           (C9537 - C9536 + C9539 - C9538) * C9461 +
           (C9521 * C94 - C9463 * C149 + C9522 * C565 - C27977 * C618) * C9469 +
           (C9521 * C103 - C9463 * C154 + C9522 * C570 - C27977 * C622) *
               C9462) *
              C27939 * C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C9463 * C146 - C9521 * C91 + C27977 * C615 - C9522 * C568) *
                C10909 +
            (C9463 * C151 - C9521 * C97 + C27977 * C619 - C9522 * C576) *
                C27882) *
               C2978 +
           ((C9463 * C987 - C9521 * C940 + C27977 * C2530 - C9522 * C2467) *
                C10909 +
            (C9463 * C991 - C9521 * C948 + C27977 * C2534 - C9522 * C2475) *
                C27882) *
               C2979 +
           ((C9463 * C3043 - C9521 * C2981 + C27977 * C3608 - C9522 * C3551) *
                C10909 +
            (C9463 * C3046 - C9521 * C2985 + C27977 * C3610 - C9522 * C3555) *
                C27882) *
               C2980) *
              C28119 * C28120 * C81 +
          (((C9525 - C9524 + C9527 - C9526) * C10909 +
            (C9529 - C9528 + C9531 - C9530) * C27882) *
               C2978 +
           ((C9521 * C939 - C9463 * C988 + C9522 * C2466 - C27977 * C2532) *
                C10909 +
            (C9521 * C946 - C9463 * C992 + C9522 * C2473 - C27977 * C2536) *
                C27882) *
               C2979 +
           ((C9521 * C2982 - C9463 * C3044 + C9522 * C3550 - C27977 * C3609) *
                C10909 +
            (C9521 * C2987 - C9463 * C3047 + C9522 * C3553 - C27977 * C3611) *
                C27882) *
               C2980) *
              C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eexz[21] +=
        (-std::pow(Pi, 2.5) *
         ((((C27939 * C203 - C202 * C91) * C10909 +
            (C27939 * C208 - C202 * C97) * C27882) *
               C10905 +
           ((C2049 - C2050) * C10909 + (C2051 - C2052) * C27882) * C10906 +
           ((C2053 - C2054) * C10909 + (C2055 - C2056) * C27882) * C10907 +
           ((C27939 * C2044 - C202 * C1905) * C10909 +
            (C27939 * C2046 - C202 * C1909) * C27882) *
               C10908) *
              C28119 * C28120 * C81 +
          (((C215 - C214) * C10909 + (C217 - C216) * C27882) * C10905 +
           ((C1473 - C1472) * C10909 + (C1475 - C1474) * C27882) * C10906 +
           ((C1477 - C1476) * C10909 + (C1479 - C1478) * C27882) * C10907 +
           ((C202 * C1904 - C27939 * C2045) * C10909 +
            (C202 * C1907 - C27939 * C2047) * C27882) *
               C10908) *
              C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C27939 * C203 - C202 * C91) * C9465 +
            (C27939 * C208 - C202 * C97) * C9460 + (C214 - C215) * C9467 +
            (C216 - C217) * C9461 + (C218 - C219) * C9469 +
            (C220 - C221) * C9462) *
               C9463 +
           ((C2049 - C2050) * C9465 + (C2051 - C2052) * C9460 +
            (C1472 - C1473) * C9467 + (C1474 - C1475) * C9461 +
            (C4726 - C4727) * C9469 + (C4728 - C4729) * C9462) *
               C27977) *
              C28119 * C28120 * C81 +
          (((C215 - C214) * C9465 + (C217 - C216) * C9460 +
            (C219 - C218) * C9467 + (C221 - C220) * C9461 +
            (C223 - C222) * C9469 + (C225 - C224) * C9462) *
               C9463 +
           ((C1473 - C1472) * C9465 + (C1475 - C1474) * C9460 +
            (C4727 - C4726) * C9467 + (C4729 - C4728) * C9461 +
            (C202 * C565 - C27939 * C660) * C9469 +
            (C202 * C570 - C27939 * C664) * C9462) *
               C27977) *
              C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C2978 * C203 - C3107 * C91 + C2979 * C1029 - C3108 * C940 +
             C2980 * C3110 - C3109 * C2981) *
                C10909 +
            (C2978 * C208 - C3107 * C97 + C2979 * C1033 - C3108 * C948 +
             C2980 * C3113 - C3109 * C2985) *
                C27882) *
               C9463 +
           ((C2978 * C657 - C3107 * C568 + C2979 * C2588 - C3108 * C2467 +
             C2980 * C3662 - C3109 * C3551) *
                C10909 +
            (C2978 * C661 - C3107 * C576 + C2979 * C2592 - C3108 * C2475 +
             C2980 * C3664 - C3109 * C3555) *
                C27882) *
               C27977) *
              C28119 * C28120 * C81 +
          (((C3118 - C3117 + C3120 - C3119 + C3122 - C3121) * C10909 +
            (C3124 - C3123 + C3126 - C3125 + C3128 - C3127) * C27882) *
               C9463 +
           ((C3107 * C567 - C2978 * C658 + C3108 * C2466 - C2979 * C2589 +
             C3109 * C3550 - C2980 * C3663) *
                C10909 +
            (C3107 * C574 - C2978 * C662 + C3108 * C2473 - C2979 * C2593 +
             C3109 * C3553 - C2980 * C3665) *
                C27882) *
               C27977) *
              C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[21] +=
        (-std::pow(Pi, 2.5) * (((C27882 * C96 - C10909 * C91) * C10945 +
                                (C27882 * C264 - C10909 * C259) * C10905 +
                                (C27882 * C575 - C10909 * C568) * C10946 +
                                (C27882 * C703 - C10909 * C699) * C10906 +
                                (C27882 * C1335 - C10909 * C1332) * C10947 +
                                (C27882 * C1532 - C10909 * C1529) * C10907 +
                                (C27882 * C1908 - C10909 * C1905) * C10948 +
                                (C27882 * C2108 - C10909 * C2106) * C10908) *
                                   C27939 * C28119 * C28120 * C81 +
                               ((C10909 * C92 - C27882 * C98) * C10945 +
                                (C10909 * C260 - C27882 * C265) * C10905 +
                                (C10909 * C567 - C27882 * C573) * C10946 +
                                (C10909 * C700 - C27882 * C704) * C10906 +
                                (C10909 * C1333 - C27882 * C1337) * C10947 +
                                (C10909 * C1530 - C27882 * C1533) * C10907 +
                                (C10909 * C1904 - C27882 * C1906) * C10948 +
                                (C10909 * C2107 - C27882 * C2109) * C10908) *
                                   C27939 * C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * (((C9460 * C96 - C9465 * C91 + C9461 * C98 -
                                C9467 * C92 + C9462 * C100 - C9469 * C93) *
                                   C9521 +
                               (C9460 * C264 - C9465 * C259 + C9461 * C265 -
                                C9467 * C260 + C9462 * C266 - C9469 * C261) *
                                   C9463 +
                               (C9460 * C575 - C9465 * C568 + C9461 * C573 -
                                C9467 * C567 + C9462 * C571 - C9469 * C566) *
                                   C9522 +
                               (C9460 * C703 - C9465 * C699 + C9461 * C704 -
                                C9467 * C700 + C9462 * C705 - C9469 * C701) *
                                   C27977) *
                                  C27939 * C28119 * C28120 * C81 +
                              ((C9465 * C92 - C9460 * C98 + C9467 * C93 -
                                C9461 * C100 + C9469 * C94 - C9462 * C102) *
                                   C9521 +
                               (C9465 * C260 - C9460 * C265 + C9467 * C261 -
                                C9461 * C266 + C9469 * C262 - C9462 * C267) *
                                   C9463 +
                               (C9465 * C567 - C9460 * C573 + C9467 * C566 -
                                C9461 * C571 + C9469 * C565 - C9462 * C569) *
                                   C9522 +
                               (C9465 * C700 - C9460 * C704 + C9467 * C701 -
                                C9461 * C705 + C9469 * C702 - C9462 * C706) *
                                   C27977) *
                                  C27939 * C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C27882 * C96 - C10909 * C91) * C9521 +
            (C27882 * C264 - C10909 * C259) * C9463 +
            (C11366 - C11367) * C9522 + (C11368 - C11369) * C27977) *
               C2978 +
           ((C27882 * C947 - C10909 * C940) * C9521 +
            (C27882 * C1075 - C10909 * C1071) * C9463 +
            (C27882 * C2474 - C10909 * C2467) * C9522 +
            (C27882 * C2650 - C10909 * C2646) * C27977) *
               C2979 +
           ((C27882 * C2984 - C10909 * C2981) * C9521 +
            (C27882 * C3181 - C10909 * C3178) * C9463 +
            (C27882 * C3554 - C10909 * C3551) * C9522 +
            (C27882 * C3718 - C10909 * C3716) * C27977) *
               C2980) *
              C28119 * C28120 * C81 +
          (((C10909 * C92 - C27882 * C98) * C9521 +
            (C10909 * C260 - C27882 * C265) * C9463 +
            (C10909 * C567 - C27882 * C573) * C9522 +
            (C10909 * C700 - C27882 * C704) * C27977) *
               C2978 +
           ((C10909 * C939 - C27882 * C945) * C9521 +
            (C10909 * C1072 - C27882 * C1076) * C9463 +
            (C10909 * C2466 - C27882 * C2472) * C9522 +
            (C10909 * C2647 - C27882 * C2651) * C27977) *
               C2979 +
           ((C10909 * C2982 - C27882 * C2986) * C9521 +
            (C10909 * C3179 - C27882 * C3182) * C9463 +
            (C10909 * C3550 - C27882 * C3552) * C9522 +
            (C10909 * C3717 - C27882 * C3719) * C27977) *
               C2980) *
              C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[21] +=
        (-std::pow(Pi, 2.5) *
         ((C10945 * C146 - C11051 * C91 - C10945 * C259 + C10905 * C304 +
           C10946 * C615 - C11052 * C568 - C10946 * C699 + C10906 * C744 +
           C10947 * C1397 - C11053 * C1332 - C10947 * C1529 + C10907 * C1588 +
           C10948 * C1990 - C11054 * C1905 - C10948 * C2106 + C10908 * C2177) *
              C27882 * C27939 * C28119 * C28120 * C81 -
          (C10948 * C1991 - C11054 * C1904 - C10948 * C2107 + C10908 * C2176 +
           C10947 * C1398 - C11053 * C1333 - C10947 * C1530 + C10907 * C1589 +
           C10946 * C616 - C11052 * C567 - C10946 * C700 + C10906 * C743 +
           C10945 * C147 - C11051 * C92 - C10945 * C260 + C10905 * C305) *
              C27882 * C27939 * C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C9521 * C146 - C9689 * C91 - C9521 * C259 + C9463 * C304 +
            C9522 * C615 - C9690 * C568 - C9522 * C699 + C27977 * C744) *
               C9460 +
           (C9716 + C9717) * C9461 + (C9718 + C9719) * C9462) *
              C27939 * C28119 * C28120 * C81 -
          ((C9522 * C618 - C9690 * C565 - C9522 * C702 + C27977 * C741 +
            C9521 * C149 - C9689 * C94 - C9521 * C262 + C9463 * C307) *
               C9462 +
           (C9719 + C9718) * C9461 + (C9717 + C9716) * C9460) *
              C27939 * C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C9521 * C146 - C9689 * C91 - C9521 * C259 + C9463 * C304 +
            C9522 * C615 - C9690 * C568 - C9522 * C699 + C27977 * C744) *
               C27882 * C2978 +
           (C9521 * C987 - C9689 * C940 - C9521 * C1071 + C9463 * C1116 +
            C9522 * C2530 - C9690 * C2467 - C9522 * C2646 + C27977 * C2707) *
               C27882 * C2979 +
           (C9521 * C3043 - C9689 * C2981 - C9521 * C3178 + C9463 * C3234 +
            C9522 * C3608 - C9690 * C3551 - C9522 * C3716 + C27977 * C3771) *
               C27882 * C2980) *
              C28119 * C28120 * C81 -
          ((C9522 * C3609 - C9690 * C3550 - C9522 * C3717 + C27977 * C3770 +
            C9521 * C3044 - C9689 * C2982 - C9521 * C3179 + C9463 * C3235) *
               C27882 * C2980 +
           (C9522 * C2532 - C9690 * C2466 - C9522 * C2647 + C27977 * C2705 +
            C9521 * C988 - C9689 * C939 - C9521 * C1072 + C9463 * C1115) *
               C27882 * C2979 +
           (C9717 + C9716) * C27882 * C2978) *
              C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[21] +=
        (-std::pow(Pi, 2.5) *
         (((C27939 * C203 - C202 * C91) * C10945 +
           (C27939 * C364 - C202 * C259) * C10905 + (C2049 - C2050) * C10946 +
           (C2231 - C2232) * C10906 + (C2053 - C2054) * C10947 +
           (C2233 - C2234) * C10907 + (C27939 * C2044 - C202 * C1905) * C10948 +
           (C27939 * C2228 - C202 * C2106) * C10908) *
              C27882 * C28119 * C28120 * C81 +
          ((C215 - C214) * C10945 + (C371 - C370) * C10905 +
           (C1473 - C1472) * C10946 + (C1667 - C1666) * C10906 +
           (C1477 - C1476) * C10947 + (C1669 - C1668) * C10907 +
           (C202 * C1904 - C27939 * C2045) * C10948 +
           (C202 * C2107 - C27939 * C2229) * C10908) *
              C27882 * C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C27939 * C203 - C202 * C91) * C9521 +
            (C27939 * C364 - C202 * C259) * C9463 + (C2049 - C2050) * C9522 +
            (C2231 - C2232) * C27977) *
               C9460 +
           ((C214 - C215) * C9521 + (C370 - C371) * C9463 +
            (C1472 - C1473) * C9522 + (C1666 - C1667) * C27977) *
               C9461 +
           ((C218 - C219) * C9521 + (C372 - C373) * C9463 +
            (C4726 - C4727) * C9522 + (C4910 - C4911) * C27977) *
               C9462) *
              C28119 * C28120 * C81 +
          (((C215 - C214) * C9521 + (C371 - C370) * C9463 +
            (C1473 - C1472) * C9522 + (C1667 - C1666) * C27977) *
               C9460 +
           ((C219 - C218) * C9521 + (C373 - C372) * C9463 +
            (C4727 - C4726) * C9522 + (C4911 - C4910) * C27977) *
               C9461 +
           ((C223 - C222) * C9521 + (C375 - C374) * C9463 +
            (C202 * C565 - C27939 * C660) * C9522 +
            (C202 * C702 - C27939 * C782) * C27977) *
               C9462) *
              C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C2978 * C203 - C3107 * C91 + C2979 * C1029 - C3108 * C940 +
            C2980 * C3110 - C3109 * C2981) *
               C9521 +
           (C2978 * C364 - C3107 * C259 + C2979 * C1151 - C3108 * C1071 +
            C2980 * C3301 - C3109 * C3178) *
               C9463 +
           (C2978 * C657 - C3107 * C568 + C2979 * C2588 - C3108 * C2467 +
            C2980 * C3662 - C3109 * C3551) *
               C9522 +
           (C2978 * C779 - C3107 * C699 + C2979 * C2758 - C3108 * C2646 +
            C2980 * C3822 - C3109 * C3716) *
               C27977) *
              C27882 * C28119 * C28120 * C81 +
          ((C3118 - C3117 + C3120 - C3119 + C3122 - C3121) * C9521 +
           (C3306 - C3305 + C3308 - C3307 + C3310 - C3309) * C9463 +
           (C3107 * C567 - C2978 * C658 + C3108 * C2466 - C2979 * C2589 +
            C3109 * C3550 - C2980 * C3663) *
               C9522 +
           (C3107 * C700 - C2978 * C780 + C3108 * C2647 - C2979 * C2760 +
            C3109 * C3717 - C2980 * C3823) *
               C27977) *
              C27882 * C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eezx[21] +=
        (-std::pow(Pi, 2.5) * ((((C27882 * C96 - C10909 * C91) * C202 +
                                 (C27882 * C414 - C10909 * C409) * C27939) *
                                    C10905 +
                                ((C27882 * C575 - C10909 * C568) * C202 +
                                 (C27882 * C821 - C10909 * C817) * C27939) *
                                    C10906 +
                                ((C27882 * C1335 - C10909 * C1332) * C202 +
                                 (C27882 * C1722 - C10909 * C1719) * C27939) *
                                    C10907 +
                                ((C27882 * C1908 - C10909 * C1905) * C202 +
                                 (C27882 * C2286 - C10909 * C2284) * C27939) *
                                    C10908) *
                                   C28119 * C28120 * C81 +
                               (((C10909 * C92 - C27882 * C98) * C202 +
                                 (C10909 * C410 - C27882 * C415) * C27939) *
                                    C10905 +
                                ((C10909 * C567 - C27882 * C573) * C202 +
                                 (C10909 * C818 - C27882 * C822) * C27939) *
                                    C10906 +
                                ((C10909 * C1333 - C27882 * C1337) * C202 +
                                 (C10909 * C1720 - C27882 * C1723) * C27939) *
                                    C10907 +
                                ((C10909 * C1904 - C27882 * C1906) * C202 +
                                 (C10909 * C2285 - C27882 * C2287) * C27939) *
                                    C10908) *
                                   C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C9460 * C96 - C9465 * C91 + C9461 * C98 -
                                 C9467 * C92 + C9462 * C100 - C9469 * C93) *
                                    C202 +
                                (C9460 * C414 - C9465 * C409 + C9461 * C415 -
                                 C9467 * C410 + C9462 * C416 - C9469 * C411) *
                                    C27939) *
                                   C9463 +
                               ((C9460 * C575 - C9465 * C568 + C9461 * C573 -
                                 C9467 * C567 + C9462 * C571 - C9469 * C566) *
                                    C202 +
                                (C9460 * C821 - C9465 * C817 + C9461 * C822 -
                                 C9467 * C818 + C9462 * C823 - C9469 * C819) *
                                    C27939) *
                                   C27977) *
                                  C28119 * C28120 * C81 +
                              (((C9465 * C92 - C9460 * C98 + C9467 * C93 -
                                 C9461 * C100 + C9469 * C94 - C9462 * C102) *
                                    C202 +
                                (C9465 * C410 - C9460 * C415 + C9467 * C411 -
                                 C9461 * C416 + C9469 * C412 - C9462 * C417) *
                                    C27939) *
                                   C9463 +
                               ((C9465 * C567 - C9460 * C573 + C9467 * C566 -
                                 C9461 * C571 + C9469 * C565 - C9462 * C569) *
                                    C202 +
                                (C9465 * C818 - C9460 * C822 + C9467 * C819 -
                                 C9461 * C823 + C9469 * C820 - C9462 * C824) *
                                    C27939) *
                                   C27977) *
                                  C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C27882 * C96 - C10909 * C91) * C3107 +
            (C27882 * C414 - C10909 * C409) * C2978 +
            (C27882 * C947 - C10909 * C940) * C3108 +
            (C27882 * C1193 - C10909 * C1189) * C2979 +
            (C27882 * C2984 - C10909 * C2981) * C3109 +
            (C27882 * C3363 - C10909 * C3360) * C2980) *
               C9463 +
           ((C11366 - C11367) * C3107 + (C11486 - C11487) * C2978 +
            (C27882 * C2474 - C10909 * C2467) * C3108 +
            (C27882 * C2816 - C10909 * C2812) * C2979 +
            (C27882 * C3554 - C10909 * C3551) * C3109 +
            (C27882 * C3876 - C10909 * C3874) * C2980) *
               C27977) *
              C28119 * C28120 * C81 +
          (((C10909 * C92 - C27882 * C98) * C3107 +
            (C10909 * C410 - C27882 * C415) * C2978 +
            (C10909 * C939 - C27882 * C945) * C3108 +
            (C10909 * C1190 - C27882 * C1194) * C2979 +
            (C10909 * C2982 - C27882 * C2986) * C3109 +
            (C10909 * C3361 - C27882 * C3364) * C2980) *
               C9463 +
           ((C10909 * C567 - C27882 * C573) * C3107 +
            (C10909 * C818 - C27882 * C822) * C2978 +
            (C10909 * C2466 - C27882 * C2472) * C3108 +
            (C10909 * C2813 - C27882 * C2817) * C2979 +
            (C10909 * C3550 - C27882 * C3552) * C3109 +
            (C10909 * C3875 - C27882 * C3877) * C2980) *
               C27977) *
              C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eezy[21] +=
        (-std::pow(Pi, 2.5) *
         (((C10905 * C146 - C10945 * C91 + C10906 * C615 - C10946 * C568 +
            C10907 * C1397 - C10947 * C1332 + C10908 * C1990 - C10948 * C1905) *
               C202 +
           (C10905 * C453 - C10945 * C409 + C10906 * C859 - C10946 * C817 +
            C10907 * C1775 - C10947 * C1719 + C10908 * C2346 - C10948 * C2284) *
               C27939) *
              C27882 * C28119 * C28120 * C81 +
          ((C10945 * C92 - C10905 * C147 + C10946 * C567 - C10906 * C616 +
            C10947 * C1333 - C10907 * C1398 + C10948 * C1904 - C10908 * C1991) *
               C202 +
           (C10945 * C410 - C10905 * C454 + C10946 * C818 - C10906 * C860 +
            C10947 * C1720 - C10907 * C1776 + C10948 * C2285 - C10908 * C2347) *
               C27939) *
              C27882 * C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C9463 * C146 - C9521 * C91 + C27977 * C615 - C9522 * C568) * C202 +
            (C9463 * C453 - C9521 * C409 + C27977 * C859 - C9522 * C817) *
                C27939) *
               C9460 +
           ((C9524 - C9525 + C9526 - C9527) * C202 +
            (C9870 - C9871 + C9872 - C9873) * C27939) *
               C9461 +
           ((C9532 - C9533 + C9534 - C9535) * C202 +
            (C9874 - C9875 + C9876 - C9877) * C27939) *
               C9462) *
              C28119 * C28120 * C81 +
          (((C9525 - C9524 + C9527 - C9526) * C202 +
            (C9871 - C9870 + C9873 - C9872) * C27939) *
               C9460 +
           ((C9533 - C9532 + C9535 - C9534) * C202 +
            (C9875 - C9874 + C9877 - C9876) * C27939) *
               C9461 +
           ((C9521 * C94 - C9463 * C149 + C9522 * C565 - C27977 * C618) * C202 +
            (C9521 * C412 - C9463 * C456 + C9522 * C820 - C27977 * C862) *
                C27939) *
               C9462) *
              C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C9463 * C146 - C9521 * C91 + C27977 * C615 - C9522 * C568) * C3107 +
           (C9463 * C453 - C9521 * C409 + C27977 * C859 - C9522 * C817) *
               C2978 +
           (C9463 * C987 - C9521 * C940 + C27977 * C2530 - C9522 * C2467) *
               C3108 +
           (C9463 * C1231 - C9521 * C1189 + C27977 * C2870 - C9522 * C2812) *
               C2979 +
           (C9463 * C3043 - C9521 * C2981 + C27977 * C3608 - C9522 * C3551) *
               C3109 +
           (C9463 * C3416 - C9521 * C3360 + C27977 * C3928 - C9522 * C3874) *
               C2980) *
              C27882 * C28119 * C28120 * C81 +
          ((C9525 - C9524 + C9527 - C9526) * C3107 +
           (C9871 - C9870 + C9873 - C9872) * C2978 +
           (C9521 * C939 - C9463 * C988 + C9522 * C2466 - C27977 * C2532) *
               C3108 +
           (C9521 * C1190 - C9463 * C1232 + C9522 * C2813 - C27977 * C2872) *
               C2979 +
           (C9521 * C2982 - C9463 * C3044 + C9522 * C3550 - C27977 * C3609) *
               C3109 +
           (C9521 * C3361 - C9463 * C3417 + C9522 * C3875 - C27977 * C3929) *
               C2980) *
              C27882 * C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eezz[21] +=
        (-std::pow(Pi, 2.5) *
         (((C202 * C203 - C498 * C91 - C202 * C409 + C27939 * C499) * C10905 +
           C2413 * C10906 + C2414 * C10907 +
           (C202 * C2044 - C498 * C1905 - C202 * C2284 + C27939 * C2399) *
               C10908) *
              C27882 * C28119 * C28120 * C81 -
          ((C202 * C2045 - C498 * C1904 - C202 * C2285 + C27939 * C2398) *
               C10908 +
           C1852 * C10907 + C1851 * C10906 + C523 * C10905) *
              C27882 * C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C202 * C203 - C498 * C91 - C202 * C409 + C27939 * C499) * C9463 +
            C2413 * C27977) *
               C9460 +
           (C9928 + C9929) * C9461 + (C9930 + C9931) * C9462) *
              C28119 * C28120 * C81 -
          (((C202 * C660 - C498 * C565 - C202 * C820 + C27939 * C897) * C27977 +
            C525 * C9463) *
               C9462 +
           (C9931 + C9930) * C9461 + (C9929 + C9928) * C9460) *
              C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C3107 * C203 - C3473 * C91 - C3107 * C409 + C2978 * C499 +
            C3108 * C1029 - C3474 * C940 - C3108 * C1189 + C2979 * C1272 +
            C3109 * C3110 - C3475 * C2981 - C3109 * C3360 + C2980 * C3476) *
               C9463 +
           (C3107 * C657 - C3473 * C568 - C3107 * C817 + C2978 * C900 +
            C3108 * C2588 - C3474 * C2467 - C3108 * C2812 + C2979 * C2927 +
            C3109 * C3662 - C3475 * C3551 - C3109 * C3874 + C2980 * C3981) *
               C27977) *
              C27882 * C28119 * C28120 * C81 -
          ((C3109 * C3663 - C3475 * C3550 - C3109 * C3875 + C2980 * C3980 +
            C3108 * C2589 - C3474 * C2466 - C3108 * C2813 + C2979 * C2925 +
            C3107 * C658 - C3473 * C567 - C3107 * C818 + C2978 * C899) *
               C27977 +
           (C3500 + C3499 + C3498) * C9463) *
              C27882 * C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eexx[22] +=
        (-std::pow(Pi, 2.5) *
         (((C10909 * C96 - C10910 * C91 - C10909 * C97 + C27882 * C106) *
               C27939 * C10905 +
           C11251 * C10906 + C11252 * C10907 + C11253 * C10908) *
              C28119 * C562 -
          ((C10909 * C11226 - C10910 * C11225 - C10909 * C11227 +
            C27882 * C11228) *
               C27939 * C10908 +
           C11253 * C10907 + C11252 * C10906 + C11251 * C10905) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C9465 * C96 - C9466 * C91 - C9465 * C97 + C9460 * C106 +
            C9467 * C98 - C9468 * C92 - C9467 * C99 + C9461 * C107 +
            C9469 * C100 - C9470 * C93 - C9469 * C101 + C9462 * C108) *
               C27939 * C9463 +
           (C10000 + C10001 + C10002) * C27939 * C27977) *
              C28119 * C562 -
          ((C9469 * C1339 - C9470 * C1334 - C9469 * C1340 + C9462 * C1343 +
            C9467 * C1337 - C9468 * C1333 - C9467 * C1338 + C9461 * C1342 +
            C9465 * C1335 - C9466 * C1332 - C9465 * C1336 + C9460 * C1341) *
               C27939 * C27977 +
           (C10002 + C10001 + C10000) * C27939 * C9463) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C10909 * C96 - C10910 * C91 - C10909 * C97 + C27882 * C106) *
                C2978 +
            (C10909 * C947 - C10910 * C940 - C10909 * C948 + C27882 * C952) *
                C2979 +
            (C10909 * C2984 - C10910 * C2981 - C10909 * C2985 +
             C27882 * C2990) *
                C2980) *
               C9463 +
           (C12395 + C12410 + C12411) * C27977) *
              C28119 * C562 -
          (((C10909 * C12391 - C10910 * C12390 - C10909 * C12392 +
             C27882 * C12393) *
                C2980 +
            (C10909 * C2470 - C10910 * C2465 - C10909 * C2471 +
             C27882 * C2477) *
                C2979 +
            C11249 * C2978) *
               C27977 +
           (C12411 + C12410 + C12395) * C9463) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q));
    d2eexy[22] +=
        (-std::pow(Pi, 2.5) *
         (((C10905 * C146 - C10945 * C91 + C10906 * C615 - C10946 * C568 +
            C10907 * C1397 - C10947 * C1332 + C10908 * C1990 - C10948 * C1905) *
               C10909 +
           (C10905 * C151 - C10945 * C97 + C10906 * C619 - C10946 * C576 +
            C10907 * C1400 - C10947 * C1336 + C10908 * C1992 - C10948 * C1909) *
               C27882) *
              C27939 * C28119 * C562 +
          ((C10945 * C568 - C10905 * C615 + C10946 * C1332 - C10906 * C1397 +
            C10947 * C1905 - C10907 * C1990 + C10948 * C11225 -
            C10908 * C11287) *
               C10909 +
           (C10945 * C576 - C10905 * C619 + C10946 * C1336 - C10906 * C1400 +
            C10947 * C1909 - C10907 * C1992 + C10948 * C11227 -
            C10908 * C11288) *
               C27882) *
              C27939 * C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C9463 * C146 - C9521 * C91 + C27977 * C615 - C9522 * C568) * C9465 +
           (C9463 * C151 - C9521 * C97 + C27977 * C619 - C9522 * C576) * C9460 +
           (C9524 - C9525 + C9526 - C9527) * C9467 +
           (C9528 - C9529 + C9530 - C9531) * C9461 +
           (C9532 - C9533 + C9534 - C9535) * C9469 +
           (C9536 - C9537 + C9538 - C9539) * C9462) *
              C27939 * C28119 * C562 +
          ((C9521 * C568 - C9463 * C615 + C9522 * C1332 - C27977 * C1397) *
               C9465 +
           (C9521 * C576 - C9463 * C619 + C9522 * C1336 - C27977 * C1400) *
               C9460 +
           (C9521 * C567 - C9463 * C616 + C9522 * C1333 - C27977 * C1398) *
               C9467 +
           (C9521 * C574 - C9463 * C620 + C9522 * C1338 - C27977 * C1401) *
               C9461 +
           (C9521 * C566 - C9463 * C617 + C9522 * C1334 - C27977 * C1399) *
               C9469 +
           (C9521 * C572 - C9463 * C621 + C9522 * C1340 - C27977 * C1402) *
               C9462) *
              C27939 * C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C9463 * C146 - C9521 * C91 + C27977 * C615 - C9522 * C568) *
                C10909 +
            (C9463 * C151 - C9521 * C97 + C27977 * C619 - C9522 * C576) *
                C27882) *
               C2978 +
           ((C9463 * C987 - C9521 * C940 + C27977 * C2530 - C9522 * C2467) *
                C10909 +
            (C9463 * C991 - C9521 * C948 + C27977 * C2534 - C9522 * C2475) *
                C27882) *
               C2979 +
           ((C9463 * C3043 - C9521 * C2981 + C27977 * C3608 - C9522 * C3551) *
                C10909 +
            (C9463 * C3046 - C9521 * C2985 + C27977 * C3610 - C9522 * C3555) *
                C27882) *
               C2980) *
              C28119 * C562 +
          (((C9521 * C568 - C9463 * C615 + C9522 * C1332 - C27977 * C1397) *
                C10909 +
            (C9521 * C576 - C9463 * C619 + C9522 * C1336 - C27977 * C1400) *
                C27882) *
               C2978 +
           ((C9521 * C2467 - C9463 * C2530 + C9522 * C2465 - C27977 * C2531) *
                C10909 +
            (C9521 * C2475 - C9463 * C2534 + C9522 * C2471 - C27977 * C2535) *
                C27882) *
               C2979 +
           ((C9521 * C3551 - C9463 * C3608 + C9522 * C12390 - C27977 * C12461) *
                C10909 +
            (C9521 * C3555 - C9463 * C3610 + C9522 * C12392 - C27977 * C12462) *
                C27882) *
               C2980) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q));
    d2eexz[22] +=
        (-std::pow(Pi, 2.5) *
         ((((C27939 * C203 - C202 * C91) * C10909 +
            (C27939 * C208 - C202 * C97) * C27882) *
               C10905 +
           ((C2049 - C2050) * C10909 + (C2051 - C2052) * C27882) * C10906 +
           ((C2053 - C2054) * C10909 + (C2055 - C2056) * C27882) * C10907 +
           ((C11326 - C11327) * C10909 + (C11328 - C11329) * C27882) * C10908) *
              C28119 * C562 +
          (((C2050 - C2049) * C10909 + (C2052 - C2051) * C27882) * C10905 +
           ((C2054 - C2053) * C10909 + (C2056 - C2055) * C27882) * C10906 +
           ((C11327 - C11326) * C10909 + (C11329 - C11328) * C27882) * C10907 +
           ((C202 * C11225 - C27939 * C11323) * C10909 +
            (C202 * C11227 - C27939 * C11324) * C27882) *
               C10908) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C27939 * C203 - C202 * C91) * C9465 +
            (C27939 * C208 - C202 * C97) * C9460 + (C214 - C215) * C9467 +
            (C216 - C217) * C9461 + (C218 - C219) * C9469 +
            (C220 - C221) * C9462) *
               C9463 +
           ((C2049 - C2050) * C9465 + (C2051 - C2052) * C9460 +
            (C1472 - C1473) * C9467 + (C1474 - C1475) * C9461 +
            (C4726 - C4727) * C9469 + (C4728 - C4729) * C9462) *
               C27977) *
              C28119 * C562 +
          (((C2050 - C2049) * C9465 + (C2052 - C2051) * C9460 +
            (C1473 - C1472) * C9467 + (C1475 - C1474) * C9461 +
            (C4727 - C4726) * C9469 + (C4729 - C4728) * C9462) *
               C9463 +
           ((C2054 - C2053) * C9465 + (C2056 - C2055) * C9460 +
            (C1477 - C1476) * C9467 + (C1479 - C1478) * C9461 +
            (C202 * C1334 - C27939 * C1467) * C9469 +
            (C202 * C1340 - C27939 * C1470) * C9462) *
               C27977) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C2978 * C203 - C3107 * C91 + C2979 * C1029 - C3108 * C940 +
             C2980 * C3110 - C3109 * C2981) *
                C10909 +
            (C2978 * C208 - C3107 * C97 + C2979 * C1033 - C3108 * C948 +
             C2980 * C3113 - C3109 * C2985) *
                C27882) *
               C9463 +
           ((C12516 - C12517 + C12518 - C12519 + C12520 - C12521) * C10909 +
            (C12522 - C12523 + C12524 - C12525 + C12526 - C12527) * C27882) *
               C27977) *
              C28119 * C562 +
          (((C12517 - C12516 + C12519 - C12518 + C12521 - C12520) * C10909 +
            (C12523 - C12522 + C12525 - C12524 + C12527 - C12526) * C27882) *
               C9463 +
           ((C3107 * C1332 - C2978 * C1465 + C3108 * C2465 - C2979 * C2590 +
             C3109 * C12390 - C2980 * C12513) *
                C10909 +
            (C3107 * C1336 - C2978 * C1468 + C3108 * C2471 - C2979 * C2594 +
             C3109 * C12392 - C2980 * C12514) *
                C27882) *
               C27977) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q));
    d2eeyx[22] +=
        (-std::pow(Pi, 2.5) *
         (((C27882 * C96 - C10909 * C91) * C10945 +
           (C27882 * C264 - C10909 * C259) * C10905 +
           (C11366 - C11367) * C10946 + (C11368 - C11369) * C10906 +
           (C11370 - C11371) * C10947 + (C11372 - C11373) * C10907 +
           (C11374 - C11375) * C10948 + (C11376 - C11377) * C10908) *
              C27939 * C28119 * C562 +
          ((C11367 - C11366) * C10945 + (C11369 - C11368) * C10905 +
           (C11371 - C11370) * C10946 + (C11373 - C11372) * C10906 +
           (C11375 - C11374) * C10947 + (C11377 - C11376) * C10907 +
           (C10909 * C11225 - C27882 * C11226) * C10948 +
           (C10909 * C11363 - C27882 * C11364) * C10908) *
              C27939 * C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C9460 * C96 - C9465 * C91 + C9461 * C98 - C9467 * C92 +
            C9462 * C100 - C9469 * C93) *
               C9521 +
           (C9460 * C264 - C9465 * C259 + C9461 * C265 - C9467 * C260 +
            C9462 * C266 - C9469 * C261) *
               C9463 +
           (C10153 - C10154 + C10155 - C10156 + C10157 - C10158) * C9522 +
           (C10159 - C10160 + C10161 - C10162 + C10163 - C10164) * C27977) *
              C27939 * C28119 * C562 +
          ((C10154 - C10153 + C10156 - C10155 + C10158 - C10157) * C9521 +
           (C10160 - C10159 + C10162 - C10161 + C10164 - C10163) * C9463 +
           (C9465 * C1332 - C9460 * C1335 + C9467 * C1333 - C9461 * C1337 +
            C9469 * C1334 - C9462 * C1339) *
               C9522 +
           (C9465 * C1529 - C9460 * C1532 + C9467 * C1530 - C9461 * C1533 +
            C9469 * C1531 - C9462 * C1534) *
               C27977) *
              C27939 * C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C27882 * C96 - C10909 * C91) * C9521 +
            (C27882 * C264 - C10909 * C259) * C9463 +
            (C11366 - C11367) * C9522 + (C11368 - C11369) * C27977) *
               C2978 +
           ((C27882 * C947 - C10909 * C940) * C9521 +
            (C27882 * C1075 - C10909 * C1071) * C9463 +
            (C12580 - C12581) * C9522 + (C12582 - C12583) * C27977) *
               C2979 +
           ((C27882 * C2984 - C10909 * C2981) * C9521 +
            (C27882 * C3181 - C10909 * C3178) * C9463 +
            (C12584 - C12585) * C9522 + (C12586 - C12587) * C27977) *
               C2980) *
              C28119 * C562 +
          (((C11367 - C11366) * C9521 + (C11369 - C11368) * C9463 +
            (C11371 - C11370) * C9522 + (C11373 - C11372) * C27977) *
               C2978 +
           ((C12581 - C12580) * C9521 + (C12583 - C12582) * C9463 +
            (C10909 * C2465 - C27882 * C2470) * C9522 +
            (C10909 * C2648 - C27882 * C2652) * C27977) *
               C2979 +
           ((C12585 - C12584) * C9521 + (C12587 - C12586) * C9463 +
            (C10909 * C12390 - C27882 * C12391) * C9522 +
            (C10909 * C12577 - C27882 * C12578) * C27977) *
               C2980) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q));
    d2eeyy[22] +=
        (-std::pow(Pi, 2.5) *
         ((C10945 * C146 - C11051 * C91 - C10945 * C259 + C10905 * C304 +
           C10946 * C615 - C11052 * C568 - C10946 * C699 + C10906 * C744 +
           C10947 * C1397 - C11053 * C1332 - C10947 * C1529 + C10907 * C1588 +
           C10948 * C1990 - C11054 * C1905 - C10948 * C2106 + C10908 * C2177) *
              C27882 * C27939 * C28119 * C562 -
          (C10948 * C11287 - C11054 * C11225 - C10948 * C11363 +
           C10908 * C11411 + C10947 * C1990 - C11053 * C1905 - C10947 * C2106 +
           C10907 * C2177 + C10946 * C1397 - C11052 * C1332 - C10946 * C1529 +
           C10906 * C1588 + C10945 * C615 - C11051 * C568 - C10945 * C699 +
           C10905 * C744) *
              C27882 * C27939 * C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C9521 * C146 - C9689 * C91 - C9521 * C259 + C9463 * C304 +
            C9522 * C615 - C9690 * C568 - C9522 * C699 + C27977 * C744) *
               C9460 +
           (C9716 + C9717) * C9461 + (C9718 + C9719) * C9462) *
              C27939 * C28119 * C562 -
          ((C9522 * C1399 - C9690 * C1334 - C9522 * C1531 + C27977 * C1590 +
            C9521 * C617 - C9689 * C566 - C9521 * C701 + C9463 * C742) *
               C9462 +
           (C9522 * C1398 - C9690 * C1333 - C9522 * C1530 + C27977 * C1589 +
            C9521 * C616 - C9689 * C567 - C9521 * C700 + C9463 * C743) *
               C9461 +
           (C9522 * C1397 - C9690 * C1332 - C9522 * C1529 + C27977 * C1588 +
            C9521 * C615 - C9689 * C568 - C9521 * C699 + C9463 * C744) *
               C9460) *
              C27939 * C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C9521 * C146 - C9689 * C91 - C9521 * C259 + C9463 * C304 +
            C9522 * C615 - C9690 * C568 - C9522 * C699 + C27977 * C744) *
               C27882 * C2978 +
           (C9521 * C987 - C9689 * C940 - C9521 * C1071 + C9463 * C1116 +
            C9522 * C2530 - C9690 * C2467 - C9522 * C2646 + C27977 * C2707) *
               C27882 * C2979 +
           (C9521 * C3043 - C9689 * C2981 - C9521 * C3178 + C9463 * C3234 +
            C9522 * C3608 - C9690 * C3551 - C9522 * C3716 + C27977 * C3771) *
               C27882 * C2980) *
              C28119 * C562 -
          ((C9522 * C12461 - C9690 * C12390 - C9522 * C12577 + C27977 * C12637 +
            C9521 * C3608 - C9689 * C3551 - C9521 * C3716 + C9463 * C3771) *
               C27882 * C2980 +
           (C9522 * C2531 - C9690 * C2465 - C9522 * C2648 + C27977 * C2706 +
            C9521 * C2530 - C9689 * C2467 - C9521 * C2646 + C9463 * C2707) *
               C27882 * C2979 +
           (C9522 * C1397 - C9690 * C1332 - C9522 * C1529 + C27977 * C1588 +
            C9521 * C615 - C9689 * C568 - C9521 * C699 + C9463 * C744) *
               C27882 * C2978) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q));
    d2eeyz[22] +=
        (-std::pow(Pi, 2.5) *
         (((C27939 * C203 - C202 * C91) * C10945 +
           (C27939 * C364 - C202 * C259) * C10905 + (C2049 - C2050) * C10946 +
           (C2231 - C2232) * C10906 + (C2053 - C2054) * C10947 +
           (C2233 - C2234) * C10907 + (C11326 - C11327) * C10948 +
           (C11448 - C11449) * C10908) *
              C27882 * C28119 * C562 +
          ((C2050 - C2049) * C10945 + (C2232 - C2231) * C10905 +
           (C2054 - C2053) * C10946 + (C2234 - C2233) * C10906 +
           (C11327 - C11326) * C10947 + (C11449 - C11448) * C10907 +
           (C202 * C11225 - C27939 * C11323) * C10948 +
           (C202 * C11363 - C27939 * C11446) * C10908) *
              C27882 * C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C27939 * C203 - C202 * C91) * C9521 +
            (C27939 * C364 - C202 * C259) * C9463 + (C2049 - C2050) * C9522 +
            (C2231 - C2232) * C27977) *
               C9460 +
           ((C214 - C215) * C9521 + (C370 - C371) * C9463 +
            (C1472 - C1473) * C9522 + (C1666 - C1667) * C27977) *
               C9461 +
           ((C218 - C219) * C9521 + (C372 - C373) * C9463 +
            (C4726 - C4727) * C9522 + (C4910 - C4911) * C27977) *
               C9462) *
              C28119 * C562 +
          (((C2050 - C2049) * C9521 + (C2232 - C2231) * C9463 +
            (C2054 - C2053) * C9522 + (C2234 - C2233) * C27977) *
               C9460 +
           ((C1473 - C1472) * C9521 + (C1667 - C1666) * C9463 +
            (C1477 - C1476) * C9522 + (C1669 - C1668) * C27977) *
               C9461 +
           ((C4727 - C4726) * C9521 + (C4911 - C4910) * C9463 +
            (C202 * C1334 - C27939 * C1467) * C9522 +
            (C202 * C1531 - C27939 * C1664) * C27977) *
               C9462) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C2978 * C203 - C3107 * C91 + C2979 * C1029 - C3108 * C940 +
            C2980 * C3110 - C3109 * C2981) *
               C9521 +
           (C2978 * C364 - C3107 * C259 + C2979 * C1151 - C3108 * C1071 +
            C2980 * C3301 - C3109 * C3178) *
               C9463 +
           (C12516 - C12517 + C12518 - C12519 + C12520 - C12521) * C9522 +
           (C12690 - C12691 + C12692 - C12693 + C12694 - C12695) * C27977) *
              C27882 * C28119 * C562 +
          ((C12517 - C12516 + C12519 - C12518 + C12521 - C12520) * C9521 +
           (C12691 - C12690 + C12693 - C12692 + C12695 - C12694) * C9463 +
           (C3107 * C1332 - C2978 * C1465 + C3108 * C2465 - C2979 * C2590 +
            C3109 * C12390 - C2980 * C12513) *
               C9522 +
           (C3107 * C1529 - C2978 * C1662 + C3108 * C2648 - C2979 * C2759 +
            C3109 * C12577 - C2980 * C12688) *
               C27977) *
              C27882 * C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q));
    d2eezx[22] +=
        (-std::pow(Pi, 2.5) *
         ((((C27882 * C96 - C10909 * C91) * C202 +
            (C27882 * C414 - C10909 * C409) * C27939) *
               C10905 +
           ((C11366 - C11367) * C202 + (C11486 - C11487) * C27939) * C10906 +
           ((C11370 - C11371) * C202 + (C11488 - C11489) * C27939) * C10907 +
           ((C11374 - C11375) * C202 + (C11490 - C11491) * C27939) * C10908) *
              C28119 * C562 +
          (((C11367 - C11366) * C202 + (C11487 - C11486) * C27939) * C10905 +
           ((C11371 - C11370) * C202 + (C11489 - C11488) * C27939) * C10906 +
           ((C11375 - C11374) * C202 + (C11491 - C11490) * C27939) * C10907 +
           ((C10909 * C11225 - C27882 * C11226) * C202 +
            (C10909 * C11483 - C27882 * C11484) * C27939) *
               C10908) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C9460 * C96 - C9465 * C91 + C9461 * C98 - C9467 * C92 +
             C9462 * C100 - C9469 * C93) *
                C202 +
            (C9460 * C414 - C9465 * C409 + C9461 * C415 - C9467 * C410 +
             C9462 * C416 - C9469 * C411) *
                C27939) *
               C9463 +
           ((C10153 - C10154 + C10155 - C10156 + C10157 - C10158) * C202 +
            (C10315 - C10316 + C10317 - C10318 + C10319 - C10320) * C27939) *
               C27977) *
              C28119 * C562 +
          (((C10154 - C10153 + C10156 - C10155 + C10158 - C10157) * C202 +
            (C10316 - C10315 + C10318 - C10317 + C10320 - C10319) * C27939) *
               C9463 +
           ((C9465 * C1332 - C9460 * C1335 + C9467 * C1333 - C9461 * C1337 +
             C9469 * C1334 - C9462 * C1339) *
                C202 +
            (C9465 * C1719 - C9460 * C1722 + C9467 * C1720 - C9461 * C1723 +
             C9469 * C1721 - C9462 * C1724) *
                C27939) *
               C27977) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C27882 * C96 - C10909 * C91) * C3107 +
            (C27882 * C414 - C10909 * C409) * C2978 +
            (C27882 * C947 - C10909 * C940) * C3108 +
            (C27882 * C1193 - C10909 * C1189) * C2979 +
            (C27882 * C2984 - C10909 * C2981) * C3109 +
            (C27882 * C3363 - C10909 * C3360) * C2980) *
               C9463 +
           ((C11366 - C11367) * C3107 + (C11486 - C11487) * C2978 +
            (C12580 - C12581) * C3108 + (C12748 - C12749) * C2979 +
            (C12584 - C12585) * C3109 + (C12750 - C12751) * C2980) *
               C27977) *
              C28119 * C562 +
          (((C11367 - C11366) * C3107 + (C11487 - C11486) * C2978 +
            (C12581 - C12580) * C3108 + (C12749 - C12748) * C2979 +
            (C12585 - C12584) * C3109 + (C12751 - C12750) * C2980) *
               C9463 +
           ((C11371 - C11370) * C3107 + (C11489 - C11488) * C2978 +
            (C10909 * C2465 - C27882 * C2470) * C3108 +
            (C10909 * C2814 - C27882 * C2818) * C2979 +
            (C10909 * C12390 - C27882 * C12391) * C3109 +
            (C10909 * C12745 - C27882 * C12746) * C2980) *
               C27977) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q));
    d2eezy[22] +=
        (-std::pow(Pi, 2.5) *
         (((C10905 * C146 - C10945 * C91 + C10906 * C615 - C10946 * C568 +
            C10907 * C1397 - C10947 * C1332 + C10908 * C1990 - C10948 * C1905) *
               C202 +
           (C10905 * C453 - C10945 * C409 + C10906 * C859 - C10946 * C817 +
            C10907 * C1775 - C10947 * C1719 + C10908 * C2346 - C10948 * C2284) *
               C27939) *
              C27882 * C28119 * C562 +
          ((C10945 * C568 - C10905 * C615 + C10946 * C1332 - C10906 * C1397 +
            C10947 * C1905 - C10907 * C1990 + C10948 * C11225 -
            C10908 * C11287) *
               C202 +
           (C10945 * C817 - C10905 * C859 + C10946 * C1719 - C10906 * C1775 +
            C10947 * C2284 - C10907 * C2346 + C10948 * C11483 -
            C10908 * C11525) *
               C27939) *
              C27882 * C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C9463 * C146 - C9521 * C91 + C27977 * C615 - C9522 * C568) * C202 +
            (C9463 * C453 - C9521 * C409 + C27977 * C859 - C9522 * C817) *
                C27939) *
               C9460 +
           ((C9524 - C9525 + C9526 - C9527) * C202 +
            (C9870 - C9871 + C9872 - C9873) * C27939) *
               C9461 +
           ((C9532 - C9533 + C9534 - C9535) * C202 +
            (C9874 - C9875 + C9876 - C9877) * C27939) *
               C9462) *
              C28119 * C562 +
          (((C9521 * C568 - C9463 * C615 + C9522 * C1332 - C27977 * C1397) *
                C202 +
            (C9521 * C817 - C9463 * C859 + C9522 * C1719 - C27977 * C1775) *
                C27939) *
               C9460 +
           ((C9521 * C567 - C9463 * C616 + C9522 * C1333 - C27977 * C1398) *
                C202 +
            (C9521 * C818 - C9463 * C860 + C9522 * C1720 - C27977 * C1776) *
                C27939) *
               C9461 +
           ((C9521 * C566 - C9463 * C617 + C9522 * C1334 - C27977 * C1399) *
                C202 +
            (C9521 * C819 - C9463 * C861 + C9522 * C1721 - C27977 * C1777) *
                C27939) *
               C9462) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C9463 * C146 - C9521 * C91 + C27977 * C615 - C9522 * C568) * C3107 +
           (C9463 * C453 - C9521 * C409 + C27977 * C859 - C9522 * C817) *
               C2978 +
           (C9463 * C987 - C9521 * C940 + C27977 * C2530 - C9522 * C2467) *
               C3108 +
           (C9463 * C1231 - C9521 * C1189 + C27977 * C2870 - C9522 * C2812) *
               C2979 +
           (C9463 * C3043 - C9521 * C2981 + C27977 * C3608 - C9522 * C3551) *
               C3109 +
           (C9463 * C3416 - C9521 * C3360 + C27977 * C3928 - C9522 * C3874) *
               C2980) *
              C27882 * C28119 * C562 +
          ((C9521 * C568 - C9463 * C615 + C9522 * C1332 - C27977 * C1397) *
               C3107 +
           (C9521 * C817 - C9463 * C859 + C9522 * C1719 - C27977 * C1775) *
               C2978 +
           (C9521 * C2467 - C9463 * C2530 + C9522 * C2465 - C27977 * C2531) *
               C3108 +
           (C9521 * C2812 - C9463 * C2870 + C9522 * C2814 - C27977 * C2871) *
               C2979 +
           (C9521 * C3551 - C9463 * C3608 + C9522 * C12390 - C27977 * C12461) *
               C3109 +
           (C9521 * C3874 - C9463 * C3928 + C9522 * C12745 - C27977 * C12801) *
               C2980) *
              C27882 * C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q));
    d2eezz[22] +=
        (-std::pow(Pi, 2.5) *
         (((C202 * C203 - C498 * C91 - C202 * C409 + C27939 * C499) * C10905 +
           C2413 * C10906 + C2414 * C10907 + C11568 * C10908) *
              C27882 * C28119 * C562 -
          ((C202 * C11323 - C498 * C11225 - C202 * C11483 + C27939 * C11560) *
               C10908 +
           C11568 * C10907 + C2414 * C10906 + C2413 * C10905) *
              C27882 * C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C202 * C203 - C498 * C91 - C202 * C409 + C27939 * C499) * C9463 +
            C2413 * C27977) *
               C9460 +
           (C9928 + C9929) * C9461 + (C9930 + C9931) * C9462) *
              C28119 * C562 -
          (((C202 * C1467 - C498 * C1334 - C202 * C1721 + C27939 * C1836) *
                C27977 +
            C5079 * C9463) *
               C9462 +
           (C1852 * C27977 + C1851 * C9463) * C9461 +
           (C2414 * C27977 + C2413 * C9463) * C9460) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C3107 * C203 - C3473 * C91 - C3107 * C409 + C2978 * C499 +
            C3108 * C1029 - C3474 * C940 - C3108 * C1189 + C2979 * C1272 +
            C3109 * C3110 - C3475 * C2981 - C3109 * C3360 + C2980 * C3476) *
               C9463 +
           (C12872 + C12873 + C12874) * C27977) *
              C27882 * C28119 * C562 -
          ((C3109 * C12513 - C3475 * C12390 - C3109 * C12745 + C2980 * C12852 +
            C3108 * C2590 - C3474 * C2465 - C3108 * C2814 + C2979 * C2926 +
            C3107 * C1465 - C3473 * C1332 - C3107 * C1719 + C2978 * C1834) *
               C27977 +
           (C12874 + C12873 + C12872) * C9463) *
              C27882 * C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q));
    d2eexx[23] +=
        (-std::pow(Pi, 2.5) *
         (((C10909 * C96 - C10910 * C91 - C10909 * C97 + C27882 * C106) *
               C27939 * C10905 +
           C11251 * C10906 + C11252 * C10907 + C11253 * C10908) *
              C935 -
          ((C10909 * C11603 - C10910 * C11602 - C10909 * C11604 +
            C27882 * C11605) *
               C27939 * C10908 +
           (C10909 * C2470 - C10910 * C2465 - C10909 * C2471 + C27882 * C2477) *
               C27939 * C10907 +
           (C10909 * C2474 - C10910 * C2467 - C10909 * C2475 + C27882 * C2479) *
               C27939 * C10906 +
           (C10909 * C947 - C10910 * C940 - C10909 * C948 + C27882 * C952) *
               C27939 * C10905) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C9465 * C96 - C9466 * C91 - C9465 * C97 + C9460 * C106 +
            C9467 * C98 - C9468 * C92 - C9467 * C99 + C9461 * C107 +
            C9469 * C100 - C9470 * C93 - C9469 * C101 + C9462 * C108) *
               C27939 * C9463 +
           (C10000 + C10001 + C10002) * C27939 * C27977) *
              C935 -
          ((C9469 * C5620 - C9470 * C5619 - C9469 * C5621 + C9462 * C5622 +
            C9467 * C2472 - C9468 * C2466 - C9467 * C2473 + C9461 * C2478 +
            C9465 * C2474 - C9466 * C2467 - C9465 * C2475 + C9460 * C2479) *
               C27939 * C27977 +
           (C9469 * C943 - C9470 * C938 - C9469 * C944 + C9462 * C950 +
            C9467 * C945 - C9468 * C939 - C9467 * C946 + C9461 * C951 +
            C9465 * C947 - C9466 * C940 - C9465 * C948 + C9460 * C952) *
               C27939 * C9463) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C10909 * C96 - C10910 * C91 - C10909 * C97 + C27882 * C106) *
                C2978 +
            C12941 * C2979 + C12942 * C2980) *
               C9463 +
           (C12395 + C12410 + C12411) * C27977) *
              C935 -
          (((C10909 * C12925 - C10910 * C12924 - C10909 * C12926 +
             C27882 * C12927) *
                C2980 +
            C12409 * C2979 + C12408 * C2978) *
               C27977 +
           ((C10909 * C4036 - C10910 * C4033 - C10909 * C4037 +
             C27882 * C4039) *
                C2980 +
            C12942 * C2979 + C12941 * C2978) *
               C9463) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q));
    d2eexy[23] +=
        (-std::pow(Pi, 2.5) *
         (((C10905 * C146 - C10945 * C91 + C10906 * C615 - C10946 * C568 +
            C10907 * C1397 - C10947 * C1332 + C10908 * C1990 - C10948 * C1905) *
               C10909 +
           (C10905 * C151 - C10945 * C97 + C10906 * C619 - C10946 * C576 +
            C10907 * C1400 - C10947 * C1336 + C10908 * C1992 - C10948 * C1909) *
               C27882) *
              C27939 * C935 +
          ((C10945 * C940 - C10905 * C987 + C10946 * C2467 - C10906 * C2530 +
            C10947 * C2465 - C10907 * C2531 + C10948 * C11602 -
            C10908 * C11640) *
               C10909 +
           (C10945 * C948 - C10905 * C991 + C10946 * C2475 - C10906 * C2534 +
            C10947 * C2471 - C10907 * C2535 + C10948 * C11604 -
            C10908 * C11641) *
               C27882) *
              C27939 * C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C9463 * C146 - C9521 * C91 + C27977 * C615 - C9522 * C568) * C9465 +
           (C9463 * C151 - C9521 * C97 + C27977 * C619 - C9522 * C576) * C9460 +
           (C9524 - C9525 + C9526 - C9527) * C9467 +
           (C9528 - C9529 + C9530 - C9531) * C9461 +
           (C9532 - C9533 + C9534 - C9535) * C9469 +
           (C9536 - C9537 + C9538 - C9539) * C9462) *
              C27939 * C935 +
          ((C9521 * C940 - C9463 * C987 + C9522 * C2467 - C27977 * C2530) *
               C9465 +
           (C9521 * C948 - C9463 * C991 + C9522 * C2475 - C27977 * C2534) *
               C9460 +
           (C9521 * C939 - C9463 * C988 + C9522 * C2466 - C27977 * C2532) *
               C9467 +
           (C9521 * C946 - C9463 * C992 + C9522 * C2473 - C27977 * C2536) *
               C9461 +
           (C9521 * C938 - C9463 * C989 + C9522 * C5619 - C27977 * C5673) *
               C9469 +
           (C9521 * C944 - C9463 * C993 + C9522 * C5621 - C27977 * C5674) *
               C9462) *
              C27939 * C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C9463 * C146 - C9521 * C91 + C27977 * C615 - C9522 * C568) *
                C10909 +
            (C9463 * C151 - C9521 * C97 + C27977 * C619 - C9522 * C576) *
                C27882) *
               C2978 +
           ((C12995 - C12996 + C12997 - C12998) * C10909 +
            (C12999 - C13000 + C13001 - C13002) * C27882) *
               C2979 +
           ((C13003 - C13004 + C13005 - C13006) * C10909 +
            (C13007 - C13008 + C13009 - C13010) * C27882) *
               C2980) *
              C935 +
          (((C12996 - C12995 + C12998 - C12997) * C10909 +
            (C13000 - C12999 + C13002 - C13001) * C27882) *
               C2978 +
           ((C13004 - C13003 + C13006 - C13005) * C10909 +
            (C13008 - C13007 + C13010 - C13009) * C27882) *
               C2979 +
           ((C9521 * C4033 - C9463 * C4118 + C9522 * C12924 - C27977 * C12992) *
                C10909 +
            (C9521 * C4037 - C9463 * C4120 + C9522 * C12926 - C27977 * C12993) *
                C27882) *
               C2980) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q));
    d2eexz[23] +=
        (-std::pow(Pi, 2.5) *
         ((((C27939 * C203 - C202 * C91) * C10909 +
            (C27939 * C208 - C202 * C97) * C27882) *
               C10905 +
           ((C2049 - C2050) * C10909 + (C2051 - C2052) * C27882) * C10906 +
           ((C2053 - C2054) * C10909 + (C2055 - C2056) * C27882) * C10907 +
           ((C11326 - C11327) * C10909 + (C11328 - C11329) * C27882) * C10908) *
              C935 +
          (((C202 * C940 - C27939 * C1029) * C10909 +
            (C202 * C948 - C27939 * C1033) * C27882) *
               C10905 +
           ((C202 * C2467 - C27939 * C2588) * C10909 +
            (C202 * C2475 - C27939 * C2592) * C27882) *
               C10906 +
           ((C202 * C2465 - C27939 * C2590) * C10909 +
            (C202 * C2471 - C27939 * C2594) * C27882) *
               C10907 +
           ((C202 * C11602 - C27939 * C11676) * C10909 +
            (C202 * C11604 - C27939 * C11677) * C27882) *
               C10908) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C27939 * C203 - C202 * C91) * C9465 +
            (C27939 * C208 - C202 * C97) * C9460 + (C214 - C215) * C9467 +
            (C216 - C217) * C9461 + (C218 - C219) * C9469 +
            (C220 - C221) * C9462) *
               C9463 +
           ((C2049 - C2050) * C9465 + (C2051 - C2052) * C9460 +
            (C1472 - C1473) * C9467 + (C1474 - C1475) * C9461 +
            (C4726 - C4727) * C9469 + (C4728 - C4729) * C9462) *
               C27977) *
              C935 +
          (((C202 * C940 - C27939 * C1029) * C9465 +
            (C202 * C948 - C27939 * C1033) * C9460 +
            (C202 * C939 - C27939 * C1030) * C9467 +
            (C202 * C946 - C27939 * C1034) * C9461 +
            (C202 * C938 - C27939 * C1031) * C9469 +
            (C202 * C944 - C27939 * C1035) * C9462) *
               C9463 +
           ((C202 * C2467 - C27939 * C2588) * C9465 +
            (C202 * C2475 - C27939 * C2592) * C9460 +
            (C202 * C2466 - C27939 * C2589) * C9467 +
            (C202 * C2473 - C27939 * C2593) * C9461 +
            (C202 * C5619 - C27939 * C5725) * C9469 +
            (C202 * C5621 - C27939 * C5726) * C9462) *
               C27977) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C2978 * C203 - C3107 * C91 + C2979 * C1029 - C3108 * C940 +
             C2980 * C3110 - C3109 * C2981) *
                C10909 +
            (C2978 * C208 - C3107 * C97 + C2979 * C1033 - C3108 * C948 +
             C2980 * C3113 - C3109 * C2985) *
                C27882) *
               C9463 +
           ((C12516 - C12517 + C12518 - C12519 + C12520 - C12521) * C10909 +
            (C12522 - C12523 + C12524 - C12525 + C12526 - C12527) * C27882) *
               C27977) *
              C935 +
          (((C3107 * C940 - C2978 * C1029 + C3108 * C2981 - C2979 * C3110 +
             C3109 * C4033 - C2980 * C4180) *
                C10909 +
            (C3107 * C948 - C2978 * C1033 + C3108 * C2985 - C2979 * C3113 +
             C3109 * C4037 - C2980 * C4182) *
                C27882) *
               C9463 +
           ((C3107 * C2467 - C2978 * C2588 + C3108 * C3551 - C2979 * C3662 +
             C3109 * C12924 - C2980 * C13060) *
                C10909 +
            (C3107 * C2475 - C2978 * C2592 + C3108 * C3555 - C2979 * C3664 +
             C3109 * C12926 - C2980 * C13061) *
                C27882) *
               C27977) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q));
    d2eeyx[23] +=
        (-std::pow(Pi, 2.5) *
         (((C27882 * C96 - C10909 * C91) * C10945 +
           (C27882 * C264 - C10909 * C259) * C10905 +
           (C11366 - C11367) * C10946 + (C11368 - C11369) * C10906 +
           (C11370 - C11371) * C10947 + (C11372 - C11373) * C10907 +
           (C11374 - C11375) * C10948 + (C11376 - C11377) * C10908) *
              C27939 * C935 +
          ((C10909 * C940 - C27882 * C947) * C10945 +
           (C10909 * C1071 - C27882 * C1075) * C10905 +
           (C10909 * C2467 - C27882 * C2474) * C10946 +
           (C10909 * C2646 - C27882 * C2650) * C10906 +
           (C10909 * C2465 - C27882 * C2470) * C10947 +
           (C10909 * C2648 - C27882 * C2652) * C10907 +
           (C10909 * C11602 - C27882 * C11603) * C10948 +
           (C10909 * C11712 - C27882 * C11713) * C10908) *
              C27939 * C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C9460 * C96 - C9465 * C91 + C9461 * C98 - C9467 * C92 +
            C9462 * C100 - C9469 * C93) *
               C9521 +
           (C9460 * C264 - C9465 * C259 + C9461 * C265 - C9467 * C260 +
            C9462 * C266 - C9469 * C261) *
               C9463 +
           (C10153 - C10154 + C10155 - C10156 + C10157 - C10158) * C9522 +
           (C10159 - C10160 + C10161 - C10162 + C10163 - C10164) * C27977) *
              C27939 * C935 +
          ((C9465 * C940 - C9460 * C947 + C9467 * C939 - C9461 * C945 +
            C9469 * C938 - C9462 * C943) *
               C9521 +
           (C9465 * C1071 - C9460 * C1075 + C9467 * C1072 - C9461 * C1076 +
            C9469 * C1073 - C9462 * C1077) *
               C9463 +
           (C9465 * C2467 - C9460 * C2474 + C9467 * C2466 - C9461 * C2472 +
            C9469 * C5619 - C9462 * C5620) *
               C9522 +
           (C9465 * C2646 - C9460 * C2650 + C9467 * C2647 - C9461 * C2651 +
            C9469 * C5777 - C9462 * C5778) *
               C27977) *
              C27939 * C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C27882 * C96 - C10909 * C91) * C9521 +
            (C27882 * C264 - C10909 * C259) * C9463 +
            (C11366 - C11367) * C9522 + (C11368 - C11369) * C27977) *
               C2978 +
           ((C13115 - C13116) * C9521 + (C13117 - C13118) * C9463 +
            (C12580 - C12581) * C9522 + (C12582 - C12583) * C27977) *
               C2979 +
           ((C13119 - C13120) * C9521 + (C13121 - C13122) * C9463 +
            (C12584 - C12585) * C9522 + (C12586 - C12587) * C27977) *
               C2980) *
              C935 +
          (((C13116 - C13115) * C9521 + (C13118 - C13117) * C9463 +
            (C12581 - C12580) * C9522 + (C12583 - C12582) * C27977) *
               C2978 +
           ((C13120 - C13119) * C9521 + (C13122 - C13121) * C9463 +
            (C12585 - C12584) * C9522 + (C12587 - C12586) * C27977) *
               C2979 +
           ((C10909 * C4033 - C27882 * C4036) * C9521 +
            (C10909 * C4234 - C27882 * C4236) * C9463 +
            (C10909 * C12924 - C27882 * C12925) * C9522 +
            (C10909 * C13112 - C27882 * C13113) * C27977) *
               C2980) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q));
    d2eeyy[23] +=
        (-std::pow(Pi, 2.5) *
         ((C10945 * C146 - C11051 * C91 - C10945 * C259 + C10905 * C304 +
           C10946 * C615 - C11052 * C568 - C10946 * C699 + C10906 * C744 +
           C10947 * C1397 - C11053 * C1332 - C10947 * C1529 + C10907 * C1588 +
           C10948 * C1990 - C11054 * C1905 - C10948 * C2106 + C10908 * C2177) *
              C27882 * C27939 * C935 -
          (C10948 * C11640 - C11054 * C11602 - C10948 * C11712 +
           C10908 * C11748 + C10947 * C2531 - C11053 * C2465 - C10947 * C2648 +
           C10907 * C2706 + C10946 * C2530 - C11052 * C2467 - C10946 * C2646 +
           C10906 * C2707 + C10945 * C987 - C11051 * C940 - C10945 * C1071 +
           C10905 * C1116) *
              C27882 * C27939 * C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C9521 * C146 - C9689 * C91 - C9521 * C259 + C9463 * C304 +
            C9522 * C615 - C9690 * C568 - C9522 * C699 + C27977 * C744) *
               C9460 +
           (C9716 + C9717) * C9461 + (C9718 + C9719) * C9462) *
              C27939 * C935 -
          ((C9522 * C5673 - C9690 * C5619 - C9522 * C5777 + C27977 * C5829 +
            C9521 * C989 - C9689 * C938 - C9521 * C1073 + C9463 * C1114) *
               C9462 +
           (C9522 * C2532 - C9690 * C2466 - C9522 * C2647 + C27977 * C2705 +
            C9521 * C988 - C9689 * C939 - C9521 * C1072 + C9463 * C1115) *
               C9461 +
           (C9522 * C2530 - C9690 * C2467 - C9522 * C2646 + C27977 * C2707 +
            C9521 * C987 - C9689 * C940 - C9521 * C1071 + C9463 * C1116) *
               C9460) *
              C27939 * C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C9521 * C146 - C9689 * C91 - C9521 * C259 + C9463 * C304 +
            C9522 * C615 - C9690 * C568 - C9522 * C699 + C27977 * C744) *
               C27882 * C2978 +
           (C13198 + C13199) * C27882 * C2979 +
           (C13200 + C13201) * C27882 * C2980) *
              C935 -
          ((C9522 * C12992 - C9690 * C12924 - C9522 * C13112 + C27977 * C13172 +
            C9521 * C4118 - C9689 * C4033 - C9521 * C4234 + C9463 * C4305) *
               C27882 * C2980 +
           (C13201 + C13200) * C27882 * C2979 +
           (C13199 + C13198) * C27882 * C2978) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q));
    d2eeyz[23] +=
        (-std::pow(Pi, 2.5) *
         (((C27939 * C203 - C202 * C91) * C10945 +
           (C27939 * C364 - C202 * C259) * C10905 + (C2049 - C2050) * C10946 +
           (C2231 - C2232) * C10906 + (C2053 - C2054) * C10947 +
           (C2233 - C2234) * C10907 + (C11326 - C11327) * C10948 +
           (C11448 - C11449) * C10908) *
              C27882 * C935 +
          ((C202 * C940 - C27939 * C1029) * C10945 +
           (C202 * C1071 - C27939 * C1151) * C10905 +
           (C202 * C2467 - C27939 * C2588) * C10946 +
           (C202 * C2646 - C27939 * C2758) * C10906 +
           (C202 * C2465 - C27939 * C2590) * C10947 +
           (C202 * C2648 - C27939 * C2759) * C10907 +
           (C202 * C11602 - C27939 * C11676) * C10948 +
           (C202 * C11712 - C27939 * C11783) * C10908) *
              C27882 * C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C27939 * C203 - C202 * C91) * C9521 +
            (C27939 * C364 - C202 * C259) * C9463 + (C2049 - C2050) * C9522 +
            (C2231 - C2232) * C27977) *
               C9460 +
           ((C214 - C215) * C9521 + (C370 - C371) * C9463 +
            (C1472 - C1473) * C9522 + (C1666 - C1667) * C27977) *
               C9461 +
           ((C218 - C219) * C9521 + (C372 - C373) * C9463 +
            (C4726 - C4727) * C9522 + (C4910 - C4911) * C27977) *
               C9462) *
              C935 +
          (((C202 * C940 - C27939 * C1029) * C9521 +
            (C202 * C1071 - C27939 * C1151) * C9463 +
            (C202 * C2467 - C27939 * C2588) * C9522 +
            (C202 * C2646 - C27939 * C2758) * C27977) *
               C9460 +
           ((C202 * C939 - C27939 * C1030) * C9521 +
            (C202 * C1072 - C27939 * C1152) * C9463 +
            (C202 * C2466 - C27939 * C2589) * C9522 +
            (C202 * C2647 - C27939 * C2760) * C27977) *
               C9461 +
           ((C202 * C938 - C27939 * C1031) * C9521 +
            (C202 * C1073 - C27939 * C1153) * C9463 +
            (C202 * C5619 - C27939 * C5725) * C9522 +
            (C202 * C5777 - C27939 * C5880) * C27977) *
               C9462) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C2978 * C203 - C3107 * C91 + C2979 * C1029 - C3108 * C940 +
            C2980 * C3110 - C3109 * C2981) *
               C9521 +
           (C2978 * C364 - C3107 * C259 + C2979 * C1151 - C3108 * C1071 +
            C2980 * C3301 - C3109 * C3178) *
               C9463 +
           (C12516 - C12517 + C12518 - C12519 + C12520 - C12521) * C9522 +
           (C12690 - C12691 + C12692 - C12693 + C12694 - C12695) * C27977) *
              C27882 * C935 +
          ((C3107 * C940 - C2978 * C1029 + C3108 * C2981 - C2979 * C3110 +
            C3109 * C4033 - C2980 * C4180) *
               C9521 +
           (C3107 * C1071 - C2978 * C1151 + C3108 * C3178 - C2979 * C3301 +
            C3109 * C4234 - C2980 * C4374) *
               C9463 +
           (C3107 * C2467 - C2978 * C2588 + C3108 * C3551 - C2979 * C3662 +
            C3109 * C12924 - C2980 * C13060) *
               C9522 +
           (C3107 * C2646 - C2978 * C2758 + C3108 * C3716 - C2979 * C3822 +
            C3109 * C13112 - C2980 * C13251) *
               C27977) *
              C27882 * C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q));
    d2eezx[23] +=
        (-std::pow(Pi, 2.5) *
         ((((C27882 * C96 - C10909 * C91) * C202 +
            (C27882 * C414 - C10909 * C409) * C27939) *
               C10905 +
           ((C11366 - C11367) * C202 + (C11486 - C11487) * C27939) * C10906 +
           ((C11370 - C11371) * C202 + (C11488 - C11489) * C27939) * C10907 +
           ((C11374 - C11375) * C202 + (C11490 - C11491) * C27939) * C10908) *
              C935 +
          (((C10909 * C940 - C27882 * C947) * C202 +
            (C10909 * C1189 - C27882 * C1193) * C27939) *
               C10905 +
           ((C10909 * C2467 - C27882 * C2474) * C202 +
            (C10909 * C2812 - C27882 * C2816) * C27939) *
               C10906 +
           ((C10909 * C2465 - C27882 * C2470) * C202 +
            (C10909 * C2814 - C27882 * C2818) * C27939) *
               C10907 +
           ((C10909 * C11602 - C27882 * C11603) * C202 +
            (C10909 * C11818 - C27882 * C11819) * C27939) *
               C10908) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C9460 * C96 - C9465 * C91 + C9461 * C98 - C9467 * C92 +
             C9462 * C100 - C9469 * C93) *
                C202 +
            (C9460 * C414 - C9465 * C409 + C9461 * C415 - C9467 * C410 +
             C9462 * C416 - C9469 * C411) *
                C27939) *
               C9463 +
           ((C10153 - C10154 + C10155 - C10156 + C10157 - C10158) * C202 +
            (C10315 - C10316 + C10317 - C10318 + C10319 - C10320) * C27939) *
               C27977) *
              C935 +
          (((C9465 * C940 - C9460 * C947 + C9467 * C939 - C9461 * C945 +
             C9469 * C938 - C9462 * C943) *
                C202 +
            (C9465 * C1189 - C9460 * C1193 + C9467 * C1190 - C9461 * C1194 +
             C9469 * C1191 - C9462 * C1195) *
                C27939) *
               C9463 +
           ((C9465 * C2467 - C9460 * C2474 + C9467 * C2466 - C9461 * C2472 +
             C9469 * C5619 - C9462 * C5620) *
                C202 +
            (C9465 * C2812 - C9460 * C2816 + C9467 * C2813 - C9461 * C2817 +
             C9469 * C5931 - C9462 * C5932) *
                C27939) *
               C27977) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C27882 * C96 - C10909 * C91) * C3107 +
            (C27882 * C414 - C10909 * C409) * C2978 +
            (C13115 - C13116) * C3108 + (C13305 - C13306) * C2979 +
            (C13119 - C13120) * C3109 + (C13307 - C13308) * C2980) *
               C9463 +
           ((C11366 - C11367) * C3107 + (C11486 - C11487) * C2978 +
            (C12580 - C12581) * C3108 + (C12748 - C12749) * C2979 +
            (C12584 - C12585) * C3109 + (C12750 - C12751) * C2980) *
               C27977) *
              C935 +
          (((C13116 - C13115) * C3107 + (C13306 - C13305) * C2978 +
            (C13120 - C13119) * C3108 + (C13308 - C13307) * C2979 +
            (C10909 * C4033 - C27882 * C4036) * C3109 +
            (C10909 * C4426 - C27882 * C4428) * C2980) *
               C9463 +
           ((C12581 - C12580) * C3107 + (C12749 - C12748) * C2978 +
            (C12585 - C12584) * C3108 + (C12751 - C12750) * C2979 +
            (C10909 * C12924 - C27882 * C12925) * C3109 +
            (C10909 * C13302 - C27882 * C13303) * C2980) *
               C27977) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q));
    d2eezy[23] +=
        (-std::pow(Pi, 2.5) *
         (((C10905 * C146 - C10945 * C91 + C10906 * C615 - C10946 * C568 +
            C10907 * C1397 - C10947 * C1332 + C10908 * C1990 - C10948 * C1905) *
               C202 +
           (C10905 * C453 - C10945 * C409 + C10906 * C859 - C10946 * C817 +
            C10907 * C1775 - C10947 * C1719 + C10908 * C2346 - C10948 * C2284) *
               C27939) *
              C27882 * C935 +
          ((C10945 * C940 - C10905 * C987 + C10946 * C2467 - C10906 * C2530 +
            C10947 * C2465 - C10907 * C2531 + C10948 * C11602 -
            C10908 * C11640) *
               C202 +
           (C10945 * C1189 - C10905 * C1231 + C10946 * C2812 - C10906 * C2870 +
            C10947 * C2814 - C10907 * C2871 + C10948 * C11818 -
            C10908 * C11854) *
               C27939) *
              C27882 * C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C9463 * C146 - C9521 * C91 + C27977 * C615 - C9522 * C568) * C202 +
            (C9463 * C453 - C9521 * C409 + C27977 * C859 - C9522 * C817) *
                C27939) *
               C9460 +
           ((C9524 - C9525 + C9526 - C9527) * C202 +
            (C9870 - C9871 + C9872 - C9873) * C27939) *
               C9461 +
           ((C9532 - C9533 + C9534 - C9535) * C202 +
            (C9874 - C9875 + C9876 - C9877) * C27939) *
               C9462) *
              C935 +
          (((C9521 * C940 - C9463 * C987 + C9522 * C2467 - C27977 * C2530) *
                C202 +
            (C9521 * C1189 - C9463 * C1231 + C9522 * C2812 - C27977 * C2870) *
                C27939) *
               C9460 +
           ((C9521 * C939 - C9463 * C988 + C9522 * C2466 - C27977 * C2532) *
                C202 +
            (C9521 * C1190 - C9463 * C1232 + C9522 * C2813 - C27977 * C2872) *
                C27939) *
               C9461 +
           ((C9521 * C938 - C9463 * C989 + C9522 * C5619 - C27977 * C5673) *
                C202 +
            (C9521 * C1191 - C9463 * C1233 + C9522 * C5931 - C27977 * C5983) *
                C27939) *
               C9462) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C9463 * C146 - C9521 * C91 + C27977 * C615 - C9522 * C568) * C3107 +
           (C9463 * C453 - C9521 * C409 + C27977 * C859 - C9522 * C817) *
               C2978 +
           (C12995 - C12996 + C12997 - C12998) * C3108 +
           (C13360 - C13361 + C13362 - C13363) * C2979 +
           (C13003 - C13004 + C13005 - C13006) * C3109 +
           (C13364 - C13365 + C13366 - C13367) * C2980) *
              C27882 * C935 +
          ((C12996 - C12995 + C12998 - C12997) * C3107 +
           (C13361 - C13360 + C13363 - C13362) * C2978 +
           (C13004 - C13003 + C13006 - C13005) * C3108 +
           (C13365 - C13364 + C13367 - C13366) * C2979 +
           (C9521 * C4033 - C9463 * C4118 + C9522 * C12924 - C27977 * C12992) *
               C3109 +
           (C9521 * C4426 - C9463 * C4488 + C9522 * C13302 - C27977 * C13358) *
               C2980) *
              C27882 * C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q));
    d2eezz[23] +=
        (-std::pow(Pi, 2.5) *
         (((C202 * C203 - C498 * C91 - C202 * C409 + C27939 * C499) * C10905 +
           C2413 * C10906 + C2414 * C10907 + C11568 * C10908) *
              C27882 * C935 -
          ((C202 * C11676 - C498 * C11602 - C202 * C11818 + C27939 * C11889) *
               C10908 +
           (C202 * C2590 - C498 * C2465 - C202 * C2814 + C27939 * C2926) *
               C10907 +
           (C202 * C2588 - C498 * C2467 - C202 * C2812 + C27939 * C2927) *
               C10906 +
           (C202 * C1029 - C498 * C940 - C202 * C1189 + C27939 * C1272) *
               C10905) *
              C27882 * C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C202 * C203 - C498 * C91 - C202 * C409 + C27939 * C499) * C9463 +
            C2413 * C27977) *
               C9460 +
           (C9928 + C9929) * C9461 + (C9930 + C9931) * C9462) *
              C935 -
          (((C202 * C5725 - C498 * C5619 - C202 * C5931 + C27939 * C6034) *
                C27977 +
            (C202 * C1031 - C498 * C938 - C202 * C1191 + C27939 * C1270) *
                C9463) *
               C9462 +
           ((C202 * C2589 - C498 * C2466 - C202 * C2813 + C27939 * C2925) *
                C27977 +
            (C202 * C1030 - C498 * C939 - C202 * C1190 + C27939 * C1271) *
                C9463) *
               C9461 +
           ((C202 * C2588 - C498 * C2467 - C202 * C2812 + C27939 * C2927) *
                C27977 +
            (C202 * C1029 - C498 * C940 - C202 * C1189 + C27939 * C1272) *
                C9463) *
               C9460) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C3107 * C203 - C3473 * C91 - C3107 * C409 + C2978 * C499 +
            C3108 * C1029 - C3474 * C940 - C3108 * C1189 + C2979 * C1272 +
            C3109 * C3110 - C3475 * C2981 - C3109 * C3360 + C2980 * C3476) *
               C9463 +
           (C12872 + C12873 + C12874) * C27977) *
              C27882 * C935 -
          ((C3109 * C13060 - C3475 * C12924 - C3109 * C13302 + C2980 * C13417 +
            C3108 * C3662 - C3474 * C3551 - C3108 * C3874 + C2979 * C3981 +
            C3107 * C2588 - C3473 * C2467 - C3107 * C2812 + C2978 * C2927) *
               C27977 +
           (C3109 * C4180 - C3475 * C4033 - C3109 * C4426 + C2980 * C4545 +
            C3108 * C3110 - C3474 * C2981 - C3108 * C3360 + C2979 * C3476 +
            C3107 * C1029 - C3473 * C940 - C3107 * C1189 + C2978 * C1272) *
               C9463) *
              C27882 * C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q));
    d2eexx[24] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C26731 * C96 - C13474 * C91 - C26731 * C97 + C28071 * C106 +
             C26724 * C98 - C13476 * C92 - C26724 * C99 + C27887 * C107) *
                C28085 +
            (C26731 * C947 - C13474 * C940 - C26731 * C948 + C28071 * C952 +
             C26724 * C945 - C13476 * C939 - C26724 * C946 + C27887 * C951) *
                C28003) *
               C9463 +
           ((C14000 + C14001) * C28085 +
            (C26731 * C2474 - C13474 * C2467 - C26731 * C2475 + C28071 * C2479 +
             C26724 * C2472 - C13476 * C2466 - C26724 * C2473 +
             C27887 * C2478) *
                C28003) *
               C27977) *
              C28119 * C28120 * C81 -
          (((C26724 * C5620 - C13476 * C5619 - C26724 * C5621 + C27887 * C5622 +
             C26731 * C2472 - C13474 * C2466 - C26731 * C2473 +
             C28071 * C2478) *
                C28003 +
            (C26724 * C571 - C13476 * C566 - C26724 * C572 + C27887 * C578 +
             C26731 * C573 - C13474 * C567 - C26731 * C574 + C28071 * C579) *
                C28085) *
               C27977 +
           ((C26724 * C943 - C13476 * C938 - C26724 * C944 + C27887 * C950 +
             C26731 * C945 - C13474 * C939 - C26731 * C946 + C28071 * C951) *
                C28003 +
            (C26724 * C100 - C13476 * C93 - C26724 * C101 + C27887 * C108 +
             C26731 * C98 - C13474 * C92 - C26731 * C99 + C28071 * C107) *
                C28085) *
               C9463) *
              C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eexy[24] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C9463 * C146 - C9521 * C91 + C27977 * C615 - C9522 * C568) *
                C26731 +
            (C9463 * C151 - C9521 * C97 + C27977 * C619 - C9522 * C576) *
                C28071 +
            (C9524 - C9525 + C9526 - C9527) * C26724 +
            (C9528 - C9529 + C9530 - C9531) * C27887) *
               C28085 +
           ((C12995 - C12996 + C12997 - C12998) * C26731 +
            (C12999 - C13000 + C13001 - C13002) * C28071 +
            (C15010 - C15011 + C15012 - C15013) * C26724 +
            (C15014 - C15015 + C15016 - C15017) * C27887) *
               C28003) *
              C28119 * C28120 * C81 +
          (((C9525 - C9524 + C9527 - C9526) * C26731 +
            (C9529 - C9528 + C9531 - C9530) * C28071 +
            (C9533 - C9532 + C9535 - C9534) * C26724 +
            (C9537 - C9536 + C9539 - C9538) * C27887) *
               C28085 +
           ((C15011 - C15010 + C15013 - C15012) * C26731 +
            (C15015 - C15014 + C15017 - C15016) * C28071 +
            (C9521 * C938 - C9463 * C989 + C9522 * C5619 - C27977 * C5673) *
                C26724 +
            (C9521 * C944 - C9463 * C993 + C9522 * C5621 - C27977 * C5674) *
                C27887) *
               C28003) *
              C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eexz[24] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28085 * C203 - C6191 * C91 + C28003 * C1029 - C6192 * C940) *
                C26731 +
            (C28085 * C208 - C6191 * C97 + C28003 * C1033 - C6192 * C948) *
                C28071 +
            (C6194 - C6195 + C6196 - C6197) * C26724 +
            (C6198 - C6199 + C6200 - C6201) * C27887) *
               C9463 +
           ((C8357 - C8358 + C8359 - C8360) * C26731 +
            (C8361 - C8362 + C8363 - C8364) * C28071 +
            (C7705 - C7706 + C7707 - C7708) * C26724 +
            (C7709 - C7710 + C7711 - C7712) * C27887) *
               C27977) *
              C28119 * C28120 * C81 +
          (((C6195 - C6194 + C6197 - C6196) * C26731 +
            (C6199 - C6198 + C6201 - C6200) * C28071 +
            (C6203 - C6202 + C6205 - C6204) * C26724 +
            (C6207 - C6206 + C6209 - C6208) * C27887) *
               C9463 +
           ((C7706 - C7705 + C7708 - C7707) * C26731 +
            (C7710 - C7709 + C7712 - C7711) * C28071 +
            (C6191 * C566 - C28085 * C659 + C6192 * C5619 - C28003 * C5725) *
                C26724 +
            (C6191 * C572 - C28085 * C663 + C6192 * C5621 - C28003 * C5726) *
                C27887) *
               C27977) *
              C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[24] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28071 * C96 - C26731 * C91 + C27887 * C98 - C26724 * C92) *
                C9521 +
            (C28071 * C264 - C26731 * C259 + C27887 * C265 - C26724 * C260) *
                C9463 +
            (C14154 - C14155 + C14156 - C14157) * C9522 +
            (C14158 - C14159 + C14160 - C14161) * C27977) *
               C28085 +
           ((C28071 * C947 - C26731 * C940 + C27887 * C945 - C26724 * C939) *
                C9521 +
            (C28071 * C1075 - C26731 * C1071 + C27887 * C1076 -
             C26724 * C1072) *
                C9463 +
            (C28071 * C2474 - C26731 * C2467 + C27887 * C2472 -
             C26724 * C2466) *
                C9522 +
            (C28071 * C2650 - C26731 * C2646 + C27887 * C2651 -
             C26724 * C2647) *
                C27977) *
               C28003) *
              C28119 * C28120 * C81 +
          (((C26731 * C92 - C28071 * C98 + C26724 * C93 - C27887 * C100) *
                C9521 +
            (C26731 * C260 - C28071 * C265 + C26724 * C261 - C27887 * C266) *
                C9463 +
            (C26731 * C567 - C28071 * C573 + C26724 * C566 - C27887 * C571) *
                C9522 +
            (C26731 * C700 - C28071 * C704 + C26724 * C701 - C27887 * C705) *
                C27977) *
               C28085 +
           ((C26731 * C939 - C28071 * C945 + C26724 * C938 - C27887 * C943) *
                C9521 +
            (C26731 * C1072 - C28071 * C1076 + C26724 * C1073 -
             C27887 * C1077) *
                C9463 +
            (C26731 * C2466 - C28071 * C2472 + C26724 * C5619 -
             C27887 * C5620) *
                C9522 +
            (C26731 * C2647 - C28071 * C2651 + C26724 * C5777 -
             C27887 * C5778) *
                C27977) *
               C28003) *
              C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[24] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C9521 * C146 - C9689 * C91 - C9521 * C259 + C9463 * C304 +
             C9522 * C615 - C9690 * C568 - C9522 * C699 + C27977 * C744) *
                C28071 +
            (C9716 + C9717) * C27887) *
               C28085 +
           ((C13198 + C13199) * C28071 + (C15228 + C15229) * C27887) * C28003) *
              C28119 * C28120 * C81 -
          (((C9522 * C5673 - C9690 * C5619 - C9522 * C5777 + C27977 * C5829 +
             C9521 * C989 - C9689 * C938 - C9521 * C1073 + C9463 * C1114) *
                C27887 +
            (C15229 + C15228) * C28071) *
               C28003 +
           ((C9719 + C9718) * C27887 + (C9717 + C9716) * C28071) * C28085) *
              C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[24] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28085 * C203 - C6191 * C91 + C28003 * C1029 - C6192 * C940) *
                C9521 +
            (C28085 * C364 - C6191 * C259 + C28003 * C1151 - C6192 * C1071) *
                C9463 +
            (C8357 - C8358 + C8359 - C8360) * C9522 +
            (C8571 - C8572 + C8573 - C8574) * C27977) *
               C28071 +
           ((C6194 - C6195 + C6196 - C6197) * C9521 +
            (C6367 - C6368 + C6369 - C6370) * C9463 +
            (C7705 - C7706 + C7707 - C7708) * C9522 +
            (C7925 - C7926 + C7927 - C7928) * C27977) *
               C27887) *
              C28119 * C28120 * C81 +
          (((C6195 - C6194 + C6197 - C6196) * C9521 +
            (C6368 - C6367 + C6370 - C6369) * C9463 +
            (C7706 - C7705 + C7708 - C7707) * C9522 +
            (C7926 - C7925 + C7928 - C7927) * C27977) *
               C28071 +
           ((C6203 - C6202 + C6205 - C6204) * C9521 +
            (C6372 - C6371 + C6374 - C6373) * C9463 +
            (C6191 * C566 - C28085 * C659 + C6192 * C5619 - C28003 * C5725) *
                C9522 +
            (C6191 * C701 - C28085 * C781 + C6192 * C5777 - C28003 * C5880) *
                C27977) *
               C27887) *
              C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eezx[24] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28071 * C96 - C26731 * C91 + C27887 * C98 - C26724 * C92) *
                C6191 +
            (C28071 * C414 - C26731 * C409 + C27887 * C415 - C26724 * C410) *
                C28085 +
            (C28071 * C947 - C26731 * C940 + C27887 * C945 - C26724 * C939) *
                C6192 +
            (C28071 * C1193 - C26731 * C1189 + C27887 * C1194 -
             C26724 * C1190) *
                C28003) *
               C9463 +
           ((C14154 - C14155 + C14156 - C14157) * C6191 +
            (C14320 - C14321 + C14322 - C14323) * C28085 +
            (C28071 * C2474 - C26731 * C2467 + C27887 * C2472 -
             C26724 * C2466) *
                C6192 +
            (C28071 * C2816 - C26731 * C2812 + C27887 * C2817 -
             C26724 * C2813) *
                C28003) *
               C27977) *
              C28119 * C28120 * C81 +
          (((C26731 * C92 - C28071 * C98 + C26724 * C93 - C27887 * C100) *
                C6191 +
            (C26731 * C410 - C28071 * C415 + C26724 * C411 - C27887 * C416) *
                C28085 +
            (C26731 * C939 - C28071 * C945 + C26724 * C938 - C27887 * C943) *
                C6192 +
            (C26731 * C1190 - C28071 * C1194 + C26724 * C1191 -
             C27887 * C1195) *
                C28003) *
               C9463 +
           ((C26731 * C567 - C28071 * C573 + C26724 * C566 - C27887 * C571) *
                C6191 +
            (C26731 * C818 - C28071 * C822 + C26724 * C819 - C27887 * C823) *
                C28085 +
            (C26731 * C2466 - C28071 * C2472 + C26724 * C5619 -
             C27887 * C5620) *
                C6192 +
            (C26731 * C2813 - C28071 * C2817 + C26724 * C5931 -
             C27887 * C5932) *
                C28003) *
               C27977) *
              C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eezy[24] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C9463 * C146 - C9521 * C91 + C27977 * C615 - C9522 * C568) *
                C6191 +
            (C9463 * C453 - C9521 * C409 + C27977 * C859 - C9522 * C817) *
                C28085 +
            (C12995 - C12996 + C12997 - C12998) * C6192 +
            (C13360 - C13361 + C13362 - C13363) * C28003) *
               C28071 +
           ((C9524 - C9525 + C9526 - C9527) * C6191 +
            (C9870 - C9871 + C9872 - C9873) * C28085 +
            (C15010 - C15011 + C15012 - C15013) * C6192 +
            (C15428 - C15429 + C15430 - C15431) * C28003) *
               C27887) *
              C28119 * C28120 * C81 +
          (((C9525 - C9524 + C9527 - C9526) * C6191 +
            (C9871 - C9870 + C9873 - C9872) * C28085 +
            (C15011 - C15010 + C15013 - C15012) * C6192 +
            (C15429 - C15428 + C15431 - C15430) * C28003) *
               C28071 +
           ((C9533 - C9532 + C9535 - C9534) * C6191 +
            (C9875 - C9874 + C9877 - C9876) * C28085 +
            (C9521 * C938 - C9463 * C989 + C9522 * C5619 - C27977 * C5673) *
                C6192 +
            (C9521 * C1191 - C9463 * C1233 + C9522 * C5931 - C27977 * C5983) *
                C28003) *
               C27887) *
              C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eezz[24] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6191 * C203 - C6526 * C91 - C6191 * C409 + C28085 * C499 +
             C6192 * C1029 - C6527 * C940 - C6192 * C1189 + C28003 * C1272) *
                C9463 +
            (C8789 + C8790) * C27977) *
               C28071 +
           ((C6553 + C6554) * C9463 + (C8143 + C8144) * C27977) * C27887) *
              C28119 * C28120 * C81 -
          (((C6192 * C5725 - C6527 * C5619 - C6192 * C5931 + C28003 * C6034 +
             C6191 * C659 - C6526 * C566 - C6191 * C819 + C28085 * C898) *
                C27977 +
            (C6556 + C6555) * C9463) *
               C27887 +
           ((C8144 + C8143) * C27977 + (C6554 + C6553) * C9463) * C28071) *
              C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eexx[25] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C26731 * C96 - C13474 * C91 - C26731 * C97 + C28071 * C106 +
             C26724 * C98 - C13476 * C92 - C26724 * C99 + C27887 * C107) *
                C28085 +
            (C26731 * C947 - C13474 * C940 - C26731 * C948 + C28071 * C952 +
             C26724 * C945 - C13476 * C939 - C26724 * C946 + C27887 * C951) *
                C28003) *
               C9463 +
           ((C14000 + C14001) * C28085 + (C15576 + C15577) * C28003) * C27977) *
              C28119 * C562 -
          (((C26724 * C2468 - C13476 * C2464 - C26724 * C2469 + C27887 * C2476 +
             C26731 * C2470 - C13474 * C2465 - C26731 * C2471 +
             C28071 * C2477) *
                C28003 +
            (C14003 + C14002) * C28085) *
               C27977 +
           ((C15577 + C15576) * C28003 + (C14001 + C14000) * C28085) * C9463) *
              C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eexy[25] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C9463 * C146 - C9521 * C91 + C27977 * C615 - C9522 * C568) *
                C26731 +
            (C9463 * C151 - C9521 * C97 + C27977 * C619 - C9522 * C576) *
                C28071 +
            (C9524 - C9525 + C9526 - C9527) * C26724 +
            (C9528 - C9529 + C9530 - C9531) * C27887) *
               C28085 +
           ((C12995 - C12996 + C12997 - C12998) * C26731 +
            (C12999 - C13000 + C13001 - C13002) * C28071 +
            (C15010 - C15011 + C15012 - C15013) * C26724 +
            (C15014 - C15015 + C15016 - C15017) * C27887) *
               C28003) *
              C28119 * C562 +
          (((C9521 * C568 - C9463 * C615 + C9522 * C1332 - C27977 * C1397) *
                C26731 +
            (C9521 * C576 - C9463 * C619 + C9522 * C1336 - C27977 * C1400) *
                C28071 +
            (C9521 * C567 - C9463 * C616 + C9522 * C1333 - C27977 * C1398) *
                C26724 +
            (C9521 * C574 - C9463 * C620 + C9522 * C1338 - C27977 * C1401) *
                C27887) *
               C28085 +
           ((C9521 * C2467 - C9463 * C2530 + C9522 * C2465 - C27977 * C2531) *
                C26731 +
            (C9521 * C2475 - C9463 * C2534 + C9522 * C2471 - C27977 * C2535) *
                C28071 +
            (C9521 * C2466 - C9463 * C2532 + C9522 * C2464 - C27977 * C2533) *
                C26724 +
            (C9521 * C2473 - C9463 * C2536 + C9522 * C2469 - C27977 * C2537) *
                C27887) *
               C28003) *
              C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eexz[25] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28085 * C203 - C6191 * C91 + C28003 * C1029 - C6192 * C940) *
                C26731 +
            (C28085 * C208 - C6191 * C97 + C28003 * C1033 - C6192 * C948) *
                C28071 +
            (C6194 - C6195 + C6196 - C6197) * C26724 +
            (C6198 - C6199 + C6200 - C6201) * C27887) *
               C9463 +
           ((C8357 - C8358 + C8359 - C8360) * C26731 +
            (C8361 - C8362 + C8363 - C8364) * C28071 +
            (C7705 - C7706 + C7707 - C7708) * C26724 +
            (C7709 - C7710 + C7711 - C7712) * C27887) *
               C27977) *
              C28119 * C562 +
          (((C8358 - C8357 + C8360 - C8359) * C26731 +
            (C8362 - C8361 + C8364 - C8363) * C28071 +
            (C7706 - C7705 + C7708 - C7707) * C26724 +
            (C7710 - C7709 + C7712 - C7711) * C27887) *
               C9463 +
           ((C6191 * C1332 - C28085 * C1465 + C6192 * C2465 - C28003 * C2590) *
                C26731 +
            (C6191 * C1336 - C28085 * C1468 + C6192 * C2471 - C28003 * C2594) *
                C28071 +
            (C6191 * C1333 - C28085 * C1466 + C6192 * C2464 - C28003 * C2591) *
                C26724 +
            (C6191 * C1338 - C28085 * C1469 + C6192 * C2469 - C28003 * C2595) *
                C27887) *
               C27977) *
              C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eeyx[25] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28071 * C96 - C26731 * C91 + C27887 * C98 - C26724 * C92) *
                C9521 +
            (C28071 * C264 - C26731 * C259 + C27887 * C265 - C26724 * C260) *
                C9463 +
            (C14154 - C14155 + C14156 - C14157) * C9522 +
            (C14158 - C14159 + C14160 - C14161) * C27977) *
               C28085 +
           ((C28071 * C947 - C26731 * C940 + C27887 * C945 - C26724 * C939) *
                C9521 +
            (C28071 * C1075 - C26731 * C1071 + C27887 * C1076 -
             C26724 * C1072) *
                C9463 +
            (C15776 - C15777 + C15778 - C15779) * C9522 +
            (C15780 - C15781 + C15782 - C15783) * C27977) *
               C28003) *
              C28119 * C562 +
          (((C14155 - C14154 + C14157 - C14156) * C9521 +
            (C14159 - C14158 + C14161 - C14160) * C9463 +
            (C14163 - C14162 + C14165 - C14164) * C9522 +
            (C14167 - C14166 + C14169 - C14168) * C27977) *
               C28085 +
           ((C15777 - C15776 + C15779 - C15778) * C9521 +
            (C15781 - C15780 + C15783 - C15782) * C9463 +
            (C26731 * C2465 - C28071 * C2470 + C26724 * C2464 -
             C27887 * C2468) *
                C9522 +
            (C26731 * C2648 - C28071 * C2652 + C26724 * C2649 -
             C27887 * C2653) *
                C27977) *
               C28003) *
              C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eeyy[25] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C9521 * C146 - C9689 * C91 - C9521 * C259 + C9463 * C304 +
             C9522 * C615 - C9690 * C568 - C9522 * C699 + C27977 * C744) *
                C28071 +
            (C9716 + C9717) * C27887) *
               C28085 +
           ((C13198 + C13199) * C28071 + (C15228 + C15229) * C27887) * C28003) *
              C28119 * C562 -
          (((C9522 * C2533 - C9690 * C2464 - C9522 * C2649 + C27977 * C2704 +
             C9521 * C2532 - C9689 * C2466 - C9521 * C2647 + C9463 * C2705) *
                C27887 +
            (C9522 * C2531 - C9690 * C2465 - C9522 * C2648 + C27977 * C2706 +
             C9521 * C2530 - C9689 * C2467 - C9521 * C2646 + C9463 * C2707) *
                C28071) *
               C28003 +
           ((C9522 * C1398 - C9690 * C1333 - C9522 * C1530 + C27977 * C1589 +
             C9521 * C616 - C9689 * C567 - C9521 * C700 + C9463 * C743) *
                C27887 +
            (C9522 * C1397 - C9690 * C1332 - C9522 * C1529 + C27977 * C1588 +
             C9521 * C615 - C9689 * C568 - C9521 * C699 + C9463 * C744) *
                C28071) *
               C28085) *
              C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eeyz[25] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28085 * C203 - C6191 * C91 + C28003 * C1029 - C6192 * C940) *
                C9521 +
            (C28085 * C364 - C6191 * C259 + C28003 * C1151 - C6192 * C1071) *
                C9463 +
            (C8357 - C8358 + C8359 - C8360) * C9522 +
            (C8571 - C8572 + C8573 - C8574) * C27977) *
               C28071 +
           ((C6194 - C6195 + C6196 - C6197) * C9521 +
            (C6367 - C6368 + C6369 - C6370) * C9463 +
            (C7705 - C7706 + C7707 - C7708) * C9522 +
            (C7925 - C7926 + C7927 - C7928) * C27977) *
               C27887) *
              C28119 * C562 +
          (((C8358 - C8357 + C8360 - C8359) * C9521 +
            (C8572 - C8571 + C8574 - C8573) * C9463 +
            (C6191 * C1332 - C28085 * C1465 + C6192 * C2465 - C28003 * C2590) *
                C9522 +
            (C6191 * C1529 - C28085 * C1662 + C6192 * C2648 - C28003 * C2759) *
                C27977) *
               C28071 +
           ((C7706 - C7705 + C7708 - C7707) * C9521 +
            (C7926 - C7925 + C7928 - C7927) * C9463 +
            (C6191 * C1333 - C28085 * C1466 + C6192 * C2464 - C28003 * C2591) *
                C9522 +
            (C6191 * C1530 - C28085 * C1663 + C6192 * C2649 - C28003 * C2761) *
                C27977) *
               C27887) *
              C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eezx[25] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28071 * C96 - C26731 * C91 + C27887 * C98 - C26724 * C92) *
                C6191 +
            (C28071 * C414 - C26731 * C409 + C27887 * C415 - C26724 * C410) *
                C28085 +
            (C28071 * C947 - C26731 * C940 + C27887 * C945 - C26724 * C939) *
                C6192 +
            (C28071 * C1193 - C26731 * C1189 + C27887 * C1194 -
             C26724 * C1190) *
                C28003) *
               C9463 +
           ((C14154 - C14155 + C14156 - C14157) * C6191 +
            (C14320 - C14321 + C14322 - C14323) * C28085 +
            (C15776 - C15777 + C15778 - C15779) * C6192 +
            (C15982 - C15983 + C15984 - C15985) * C28003) *
               C27977) *
              C28119 * C562 +
          (((C14155 - C14154 + C14157 - C14156) * C6191 +
            (C14321 - C14320 + C14323 - C14322) * C28085 +
            (C15777 - C15776 + C15779 - C15778) * C6192 +
            (C15983 - C15982 + C15985 - C15984) * C28003) *
               C9463 +
           ((C14163 - C14162 + C14165 - C14164) * C6191 +
            (C14325 - C14324 + C14327 - C14326) * C28085 +
            (C26731 * C2465 - C28071 * C2470 + C26724 * C2464 -
             C27887 * C2468) *
                C6192 +
            (C26731 * C2814 - C28071 * C2818 + C26724 * C2815 -
             C27887 * C2819) *
                C28003) *
               C27977) *
              C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eezy[25] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C9463 * C146 - C9521 * C91 + C27977 * C615 - C9522 * C568) *
                C6191 +
            (C9463 * C453 - C9521 * C409 + C27977 * C859 - C9522 * C817) *
                C28085 +
            (C12995 - C12996 + C12997 - C12998) * C6192 +
            (C13360 - C13361 + C13362 - C13363) * C28003) *
               C28071 +
           ((C9524 - C9525 + C9526 - C9527) * C6191 +
            (C9870 - C9871 + C9872 - C9873) * C28085 +
            (C15010 - C15011 + C15012 - C15013) * C6192 +
            (C15428 - C15429 + C15430 - C15431) * C28003) *
               C27887) *
              C28119 * C562 +
          (((C9521 * C568 - C9463 * C615 + C9522 * C1332 - C27977 * C1397) *
                C6191 +
            (C9521 * C817 - C9463 * C859 + C9522 * C1719 - C27977 * C1775) *
                C28085 +
            (C9521 * C2467 - C9463 * C2530 + C9522 * C2465 - C27977 * C2531) *
                C6192 +
            (C9521 * C2812 - C9463 * C2870 + C9522 * C2814 - C27977 * C2871) *
                C28003) *
               C28071 +
           ((C9521 * C567 - C9463 * C616 + C9522 * C1333 - C27977 * C1398) *
                C6191 +
            (C9521 * C818 - C9463 * C860 + C9522 * C1720 - C27977 * C1776) *
                C28085 +
            (C9521 * C2466 - C9463 * C2532 + C9522 * C2464 - C27977 * C2533) *
                C6192 +
            (C9521 * C2813 - C9463 * C2872 + C9522 * C2815 - C27977 * C2873) *
                C28003) *
               C27887) *
              C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eezz[25] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6191 * C203 - C6526 * C91 - C6191 * C409 + C28085 * C499 +
             C6192 * C1029 - C6527 * C940 - C6192 * C1189 + C28003 * C1272) *
                C9463 +
            (C8789 + C8790) * C27977) *
               C28071 +
           ((C6553 + C6554) * C9463 + (C8143 + C8144) * C27977) * C27887) *
              C28119 * C562 -
          (((C6192 * C2591 - C6527 * C2464 - C6192 * C2815 + C28003 * C2924 +
             C6191 * C1466 - C6526 * C1333 - C6191 * C1720 + C28085 * C1835) *
                C27977 +
            (C8144 + C8143) * C9463) *
               C27887 +
           ((C6192 * C2590 - C6527 * C2465 - C6192 * C2814 + C28003 * C2926 +
             C6191 * C1465 - C6526 * C1332 - C6191 * C1719 + C28085 * C1834) *
                C27977 +
            (C8790 + C8789) * C9463) *
               C28071) *
              C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eexx[26] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C26731 * C96 - C13474 * C91 - C26731 * C97 + C28071 * C106 +
             C26724 * C98 - C13476 * C92 - C26724 * C99 + C27887 * C107) *
                C28085 +
            (C16196 + C16197) * C28003) *
               C9463 +
           ((C14000 + C14001) * C28085 + (C15576 + C15577) * C28003) * C27977) *
              C935 -
          (((C26724 * C3552 - C13476 * C3550 - C26724 * C3553 + C27887 * C3556 +
             C26731 * C3554 - C13474 * C3551 - C26731 * C3555 +
             C28071 * C3557) *
                C28003 +
            (C15577 + C15576) * C28085) *
               C27977 +
           ((C26724 * C2986 - C13476 * C2982 - C26724 * C2987 + C27887 * C2991 +
             C26731 * C2984 - C13474 * C2981 - C26731 * C2985 +
             C28071 * C2990) *
                C28003 +
            (C16197 + C16196) * C28085) *
               C9463) *
              C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eexy[26] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C9463 * C146 - C9521 * C91 + C27977 * C615 - C9522 * C568) *
                C26731 +
            (C9463 * C151 - C9521 * C97 + C27977 * C619 - C9522 * C576) *
                C28071 +
            (C9524 - C9525 + C9526 - C9527) * C26724 +
            (C9528 - C9529 + C9530 - C9531) * C27887) *
               C28085 +
           ((C12995 - C12996 + C12997 - C12998) * C26731 +
            (C12999 - C13000 + C13001 - C13002) * C28071 +
            (C15010 - C15011 + C15012 - C15013) * C26724 +
            (C15014 - C15015 + C15016 - C15017) * C27887) *
               C28003) *
              C935 +
          (((C12996 - C12995 + C12998 - C12997) * C26731 +
            (C13000 - C12999 + C13002 - C13001) * C28071 +
            (C15011 - C15010 + C15013 - C15012) * C26724 +
            (C15015 - C15014 + C15017 - C15016) * C27887) *
               C28085 +
           ((C13004 - C13003 + C13006 - C13005) * C26731 +
            (C13008 - C13007 + C13010 - C13009) * C28071 +
            (C9521 * C2982 - C9463 * C3044 + C9522 * C3550 - C27977 * C3609) *
                C26724 +
            (C9521 * C2987 - C9463 * C3047 + C9522 * C3553 - C27977 * C3611) *
                C27887) *
               C28003) *
              C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eexz[26] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28085 * C203 - C6191 * C91 + C28003 * C1029 - C6192 * C940) *
                C26731 +
            (C28085 * C208 - C6191 * C97 + C28003 * C1033 - C6192 * C948) *
                C28071 +
            (C6194 - C6195 + C6196 - C6197) * C26724 +
            (C6198 - C6199 + C6200 - C6201) * C27887) *
               C9463 +
           ((C8357 - C8358 + C8359 - C8360) * C26731 +
            (C8361 - C8362 + C8363 - C8364) * C28071 +
            (C7705 - C7706 + C7707 - C7708) * C26724 +
            (C7709 - C7710 + C7711 - C7712) * C27887) *
               C27977) *
              C935 +
          (((C6191 * C940 - C28085 * C1029 + C6192 * C2981 - C28003 * C3110) *
                C26731 +
            (C6191 * C948 - C28085 * C1033 + C6192 * C2985 - C28003 * C3113) *
                C28071 +
            (C6191 * C939 - C28085 * C1030 + C6192 * C2982 - C28003 * C3111) *
                C26724 +
            (C6191 * C946 - C28085 * C1034 + C6192 * C2987 - C28003 * C3114) *
                C27887) *
               C9463 +
           ((C6191 * C2467 - C28085 * C2588 + C6192 * C3551 - C28003 * C3662) *
                C26731 +
            (C6191 * C2475 - C28085 * C2592 + C6192 * C3555 - C28003 * C3664) *
                C28071 +
            (C6191 * C2466 - C28085 * C2589 + C6192 * C3550 - C28003 * C3663) *
                C26724 +
            (C6191 * C2473 - C28085 * C2593 + C6192 * C3553 - C28003 * C3665) *
                C27887) *
               C27977) *
              C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eeyx[26] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28071 * C96 - C26731 * C91 + C27887 * C98 - C26724 * C92) *
                C9521 +
            (C28071 * C264 - C26731 * C259 + C27887 * C265 - C26724 * C260) *
                C9463 +
            (C14154 - C14155 + C14156 - C14157) * C9522 +
            (C14158 - C14159 + C14160 - C14161) * C27977) *
               C28085 +
           ((C16396 - C16397 + C16398 - C16399) * C9521 +
            (C16400 - C16401 + C16402 - C16403) * C9463 +
            (C15776 - C15777 + C15778 - C15779) * C9522 +
            (C15780 - C15781 + C15782 - C15783) * C27977) *
               C28003) *
              C935 +
          (((C16397 - C16396 + C16399 - C16398) * C9521 +
            (C16401 - C16400 + C16403 - C16402) * C9463 +
            (C15777 - C15776 + C15779 - C15778) * C9522 +
            (C15781 - C15780 + C15783 - C15782) * C27977) *
               C28085 +
           ((C26731 * C2981 - C28071 * C2984 + C26724 * C2982 -
             C27887 * C2986) *
                C9521 +
            (C26731 * C3178 - C28071 * C3181 + C26724 * C3179 -
             C27887 * C3182) *
                C9463 +
            (C26731 * C3551 - C28071 * C3554 + C26724 * C3550 -
             C27887 * C3552) *
                C9522 +
            (C26731 * C3716 - C28071 * C3718 + C26724 * C3717 -
             C27887 * C3719) *
                C27977) *
               C28003) *
              C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eeyy[26] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C9521 * C146 - C9689 * C91 - C9521 * C259 + C9463 * C304 +
             C9522 * C615 - C9690 * C568 - C9522 * C699 + C27977 * C744) *
                C28071 +
            (C9716 + C9717) * C27887) *
               C28085 +
           ((C13198 + C13199) * C28071 + (C15228 + C15229) * C27887) * C28003) *
              C935 -
          (((C9522 * C3609 - C9690 * C3550 - C9522 * C3717 + C27977 * C3770 +
             C9521 * C3044 - C9689 * C2982 - C9521 * C3179 + C9463 * C3235) *
                C27887 +
            (C13201 + C13200) * C28071) *
               C28003 +
           ((C15229 + C15228) * C27887 + (C13199 + C13198) * C28071) * C28085) *
              C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eeyz[26] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28085 * C203 - C6191 * C91 + C28003 * C1029 - C6192 * C940) *
                C9521 +
            (C28085 * C364 - C6191 * C259 + C28003 * C1151 - C6192 * C1071) *
                C9463 +
            (C8357 - C8358 + C8359 - C8360) * C9522 +
            (C8571 - C8572 + C8573 - C8574) * C27977) *
               C28071 +
           ((C6194 - C6195 + C6196 - C6197) * C9521 +
            (C6367 - C6368 + C6369 - C6370) * C9463 +
            (C7705 - C7706 + C7707 - C7708) * C9522 +
            (C7925 - C7926 + C7927 - C7928) * C27977) *
               C27887) *
              C935 +
          (((C6191 * C940 - C28085 * C1029 + C6192 * C2981 - C28003 * C3110) *
                C9521 +
            (C6191 * C1071 - C28085 * C1151 + C6192 * C3178 - C28003 * C3301) *
                C9463 +
            (C6191 * C2467 - C28085 * C2588 + C6192 * C3551 - C28003 * C3662) *
                C9522 +
            (C6191 * C2646 - C28085 * C2758 + C6192 * C3716 - C28003 * C3822) *
                C27977) *
               C28071 +
           ((C6191 * C939 - C28085 * C1030 + C6192 * C2982 - C28003 * C3111) *
                C9521 +
            (C6191 * C1072 - C28085 * C1152 + C6192 * C3179 - C28003 * C3302) *
                C9463 +
            (C6191 * C2466 - C28085 * C2589 + C6192 * C3550 - C28003 * C3663) *
                C9522 +
            (C6191 * C2647 - C28085 * C2760 + C6192 * C3717 - C28003 * C3823) *
                C27977) *
               C27887) *
              C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eezx[26] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28071 * C96 - C26731 * C91 + C27887 * C98 - C26724 * C92) *
                C6191 +
            (C28071 * C414 - C26731 * C409 + C27887 * C415 - C26724 * C410) *
                C28085 +
            (C16396 - C16397 + C16398 - C16399) * C6192 +
            (C16602 - C16603 + C16604 - C16605) * C28003) *
               C9463 +
           ((C14154 - C14155 + C14156 - C14157) * C6191 +
            (C14320 - C14321 + C14322 - C14323) * C28085 +
            (C15776 - C15777 + C15778 - C15779) * C6192 +
            (C15982 - C15983 + C15984 - C15985) * C28003) *
               C27977) *
              C935 +
          (((C16397 - C16396 + C16399 - C16398) * C6191 +
            (C16603 - C16602 + C16605 - C16604) * C28085 +
            (C26731 * C2981 - C28071 * C2984 + C26724 * C2982 -
             C27887 * C2986) *
                C6192 +
            (C26731 * C3360 - C28071 * C3363 + C26724 * C3361 -
             C27887 * C3364) *
                C28003) *
               C9463 +
           ((C15777 - C15776 + C15779 - C15778) * C6191 +
            (C15983 - C15982 + C15985 - C15984) * C28085 +
            (C26731 * C3551 - C28071 * C3554 + C26724 * C3550 -
             C27887 * C3552) *
                C6192 +
            (C26731 * C3874 - C28071 * C3876 + C26724 * C3875 -
             C27887 * C3877) *
                C28003) *
               C27977) *
              C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eezy[26] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C9463 * C146 - C9521 * C91 + C27977 * C615 - C9522 * C568) *
                C6191 +
            (C9463 * C453 - C9521 * C409 + C27977 * C859 - C9522 * C817) *
                C28085 +
            (C12995 - C12996 + C12997 - C12998) * C6192 +
            (C13360 - C13361 + C13362 - C13363) * C28003) *
               C28071 +
           ((C9524 - C9525 + C9526 - C9527) * C6191 +
            (C9870 - C9871 + C9872 - C9873) * C28085 +
            (C15010 - C15011 + C15012 - C15013) * C6192 +
            (C15428 - C15429 + C15430 - C15431) * C28003) *
               C27887) *
              C935 +
          (((C12996 - C12995 + C12998 - C12997) * C6191 +
            (C13361 - C13360 + C13363 - C13362) * C28085 +
            (C13004 - C13003 + C13006 - C13005) * C6192 +
            (C13365 - C13364 + C13367 - C13366) * C28003) *
               C28071 +
           ((C15011 - C15010 + C15013 - C15012) * C6191 +
            (C15429 - C15428 + C15431 - C15430) * C28085 +
            (C9521 * C2982 - C9463 * C3044 + C9522 * C3550 - C27977 * C3609) *
                C6192 +
            (C9521 * C3361 - C9463 * C3417 + C9522 * C3875 - C27977 * C3929) *
                C28003) *
               C27887) *
              C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eezz[26] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6191 * C203 - C6526 * C91 - C6191 * C409 + C28085 * C499 +
             C6192 * C1029 - C6527 * C940 - C6192 * C1189 + C28003 * C1272) *
                C9463 +
            (C8789 + C8790) * C27977) *
               C28071 +
           ((C6553 + C6554) * C9463 + (C8143 + C8144) * C27977) * C27887) *
              C935 -
          (((C6192 * C3663 - C6527 * C3550 - C6192 * C3875 + C28003 * C3980 +
             C6191 * C2589 - C6526 * C2466 - C6191 * C2813 + C28085 * C2925) *
                C27977 +
            (C6192 * C3111 - C6527 * C2982 - C6192 * C3361 + C28003 * C3477 +
             C6191 * C1030 - C6526 * C939 - C6191 * C1190 + C28085 * C1271) *
                C9463) *
               C27887 +
           ((C6192 * C3662 - C6527 * C3551 - C6192 * C3874 + C28003 * C3981 +
             C6191 * C2588 - C6526 * C2467 - C6191 * C2812 + C28085 * C2927) *
                C27977 +
            (C6192 * C3110 - C6527 * C2981 - C6192 * C3360 + C28003 * C3476 +
             C6191 * C1029 - C6526 * C940 - C6191 * C1189 + C28085 * C1272) *
                C9463) *
               C28071) *
              C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eexx[27] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C9465 * C96 - C9466 * C91 - C9465 * C97 + C9460 * C106 +
            C9467 * C98 - C9468 * C92 - C9467 * C99 + C9461 * C107 +
            C9469 * C100 - C9470 * C93 - C9469 * C101 + C9462 * C108) *
               C27939 * C9463 +
           (C9465 * C575 - C9466 * C568 - C9465 * C576 + C9460 * C580 +
            C9467 * C573 - C9468 * C567 - C9467 * C574 + C9461 * C579 +
            C9469 * C571 - C9470 * C566 - C9469 * C572 + C9462 * C578) *
               C27939 * C27977) *
              C28119 * C28120 * C81 -
          ((C9469 * C569 - C9470 * C565 - C9469 * C570 + C9462 * C577 +
            C9467 * C571 - C9468 * C566 - C9467 * C572 + C9461 * C578 +
            C9465 * C573 - C9466 * C567 - C9465 * C574 + C9460 * C579) *
               C27939 * C27977 +
           (C9469 * C102 - C9470 * C94 - C9469 * C103 + C9462 * C109 +
            C9467 * C100 - C9468 * C93 - C9467 * C101 + C9461 * C108 +
            C9465 * C98 - C9466 * C92 - C9465 * C99 + C9460 * C107) *
               C27939 * C9463) *
              C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C10909 * C96 - C10910 * C91 - C10909 * C97 + C27882 * C106) *
               C27939 * C10905 +
           (C10909 * C575 - C10910 * C568 - C10909 * C576 + C27882 * C580) *
               C27939 * C10906 +
           (C10909 * C1335 - C10910 * C1332 - C10909 * C1336 + C27882 * C1341) *
               C27939 * C10907 +
           (C10909 * C1908 - C10910 * C1905 - C10909 * C1909 + C27882 * C1911) *
               C27939 * C10908) *
              C28119 * C28120 * C81 -
          ((C10909 * C1906 - C10910 * C1904 - C10909 * C1907 + C27882 * C1910) *
               C27939 * C10908 +
           (C10909 * C1337 - C10910 * C1333 - C10909 * C1338 + C27882 * C1342) *
               C27939 * C10907 +
           (C10909 * C573 - C10910 * C567 - C10909 * C574 + C27882 * C579) *
               C27939 * C10906 +
           (C10909 * C98 - C10910 * C92 - C10909 * C99 + C27882 * C107) *
               C27939 * C10905) *
              C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eexy[27] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C9463 * C146 - C9521 * C91 + C27977 * C615 - C9522 * C568) * C9465 +
           (C9463 * C151 - C9521 * C97 + C27977 * C619 - C9522 * C576) * C9460 +
           (C9524 - C9525 + C9526 - C9527) * C9467 +
           (C9528 - C9529 + C9530 - C9531) * C9461 +
           (C9532 - C9533 + C9534 - C9535) * C9469 +
           (C9536 - C9537 + C9538 - C9539) * C9462) *
              C27939 * C28119 * C28120 * C81 +
          ((C9525 - C9524 + C9527 - C9526) * C9465 +
           (C9529 - C9528 + C9531 - C9530) * C9460 +
           (C9533 - C9532 + C9535 - C9534) * C9467 +
           (C9537 - C9536 + C9539 - C9538) * C9461 +
           (C9521 * C94 - C9463 * C149 + C9522 * C565 - C27977 * C618) * C9469 +
           (C9521 * C103 - C9463 * C154 + C9522 * C570 - C27977 * C622) *
               C9462) *
              C27939 * C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C10905 * C146 - C10945 * C91 + C10906 * C615 - C10946 * C568 +
            C10907 * C1397 - C10947 * C1332 + C10908 * C1990 - C10948 * C1905) *
               C10909 +
           (C10905 * C151 - C10945 * C97 + C10906 * C619 - C10946 * C576 +
            C10907 * C1400 - C10947 * C1336 + C10908 * C1992 - C10948 * C1909) *
               C27882) *
              C27939 * C28119 * C28120 * C81 +
          ((C10945 * C92 - C10905 * C147 + C10946 * C567 - C10906 * C616 +
            C10947 * C1333 - C10907 * C1398 + C10948 * C1904 - C10908 * C1991) *
               C10909 +
           (C10945 * C99 - C10905 * C152 + C10946 * C574 - C10906 * C620 +
            C10947 * C1338 - C10907 * C1401 + C10948 * C1907 - C10908 * C1993) *
               C27882) *
              C27939 * C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eexz[27] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C27939 * C203 - C202 * C91) * C9465 +
            (C27939 * C208 - C202 * C97) * C9460 + (C214 - C215) * C9467 +
            (C216 - C217) * C9461 + (C218 - C219) * C9469 +
            (C220 - C221) * C9462) *
               C9463 +
           ((C2049 - C2050) * C9465 + (C2051 - C2052) * C9460 +
            (C1472 - C1473) * C9467 + (C1474 - C1475) * C9461 +
            (C4726 - C4727) * C9469 + (C4728 - C4729) * C9462) *
               C27977) *
              C28119 * C28120 * C81 +
          (((C215 - C214) * C9465 + (C217 - C216) * C9460 +
            (C219 - C218) * C9467 + (C221 - C220) * C9461 +
            (C223 - C222) * C9469 + (C225 - C224) * C9462) *
               C9463 +
           ((C1473 - C1472) * C9465 + (C1475 - C1474) * C9460 +
            (C4727 - C4726) * C9467 + (C4729 - C4728) * C9461 +
            (C202 * C565 - C27939 * C660) * C9469 +
            (C202 * C570 - C27939 * C664) * C9462) *
               C27977) *
              C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C27939 * C203 - C202 * C91) * C10909 +
            (C27939 * C208 - C202 * C97) * C27882) *
               C10905 +
           ((C2049 - C2050) * C10909 + (C2051 - C2052) * C27882) * C10906 +
           ((C2053 - C2054) * C10909 + (C2055 - C2056) * C27882) * C10907 +
           ((C27939 * C2044 - C202 * C1905) * C10909 +
            (C27939 * C2046 - C202 * C1909) * C27882) *
               C10908) *
              C28119 * C28120 * C81 +
          (((C215 - C214) * C10909 + (C217 - C216) * C27882) * C10905 +
           ((C1473 - C1472) * C10909 + (C1475 - C1474) * C27882) * C10906 +
           ((C1477 - C1476) * C10909 + (C1479 - C1478) * C27882) * C10907 +
           ((C202 * C1904 - C27939 * C2045) * C10909 +
            (C202 * C1907 - C27939 * C2047) * C27882) *
               C10908) *
              C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[27] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C9460 * C96 - C9465 * C91 + C9461 * C98 - C9467 * C92 +
                      C9462 * C100 - C9469 * C93) *
                         C9521 +
                     (C9460 * C264 - C9465 * C259 + C9461 * C265 -
                      C9467 * C260 + C9462 * C266 - C9469 * C261) *
                         C9463 +
                     (C9460 * C575 - C9465 * C568 + C9461 * C573 -
                      C9467 * C567 + C9462 * C571 - C9469 * C566) *
                         C9522 +
                     (C9460 * C703 - C9465 * C699 + C9461 * C704 -
                      C9467 * C700 + C9462 * C705 - C9469 * C701) *
                         C27977) *
                        C27939 * C28119 * C28120 * C81 +
                    ((C9465 * C92 - C9460 * C98 + C9467 * C93 - C9461 * C100 +
                      C9469 * C94 - C9462 * C102) *
                         C9521 +
                     (C9465 * C260 - C9460 * C265 + C9467 * C261 -
                      C9461 * C266 + C9469 * C262 - C9462 * C267) *
                         C9463 +
                     (C9465 * C567 - C9460 * C573 + C9467 * C566 -
                      C9461 * C571 + C9469 * C565 - C9462 * C569) *
                         C9522 +
                     (C9465 * C700 - C9460 * C704 + C9467 * C701 -
                      C9461 * C705 + C9469 * C702 - C9462 * C706) *
                         C27977) *
                        C27939 * C28119 * C28120 * C82)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C27882 * C96 - C10909 * C91) * C10945 +
                     (C27882 * C264 - C10909 * C259) * C10905 +
                     (C27882 * C575 - C10909 * C568) * C10946 +
                     (C27882 * C703 - C10909 * C699) * C10906 +
                     (C27882 * C1335 - C10909 * C1332) * C10947 +
                     (C27882 * C1532 - C10909 * C1529) * C10907 +
                     (C27882 * C1908 - C10909 * C1905) * C10948 +
                     (C27882 * C2108 - C10909 * C2106) * C10908) *
                        C27939 * C28119 * C28120 * C81 +
                    ((C10909 * C92 - C27882 * C98) * C10945 +
                     (C10909 * C260 - C27882 * C265) * C10905 +
                     (C10909 * C567 - C27882 * C573) * C10946 +
                     (C10909 * C700 - C27882 * C704) * C10906 +
                     (C10909 * C1333 - C27882 * C1337) * C10947 +
                     (C10909 * C1530 - C27882 * C1533) * C10907 +
                     (C10909 * C1904 - C27882 * C1906) * C10948 +
                     (C10909 * C2107 - C27882 * C2109) * C10908) *
                        C27939 * C28119 * C28120 * C82)) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[27] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C9521 * C146 - C9689 * C91 - C9521 * C259 + C9463 * C304 +
            C9522 * C615 - C9690 * C568 - C9522 * C699 + C27977 * C744) *
               C9460 +
           (C9716 + C9717) * C9461 + (C9718 + C9719) * C9462) *
              C27939 * C28119 * C28120 * C81 -
          ((C9522 * C618 - C9690 * C565 - C9522 * C702 + C27977 * C741 +
            C9521 * C149 - C9689 * C94 - C9521 * C262 + C9463 * C307) *
               C9462 +
           (C9719 + C9718) * C9461 + (C9717 + C9716) * C9460) *
              C27939 * C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C10945 * C146 - C11051 * C91 - C10945 * C259 + C10905 * C304 +
           C10946 * C615 - C11052 * C568 - C10946 * C699 + C10906 * C744 +
           C10947 * C1397 - C11053 * C1332 - C10947 * C1529 + C10907 * C1588 +
           C10948 * C1990 - C11054 * C1905 - C10948 * C2106 + C10908 * C2177) *
              C27882 * C27939 * C28119 * C28120 * C81 -
          (C10948 * C1991 - C11054 * C1904 - C10948 * C2107 + C10908 * C2176 +
           C10947 * C1398 - C11053 * C1333 - C10947 * C1530 + C10907 * C1589 +
           C10946 * C616 - C11052 * C567 - C10946 * C700 + C10906 * C743 +
           C10945 * C147 - C11051 * C92 - C10945 * C260 + C10905 * C305) *
              C27882 * C27939 * C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[27] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C27939 * C203 - C202 * C91) * C9521 +
            (C27939 * C364 - C202 * C259) * C9463 + (C2049 - C2050) * C9522 +
            (C2231 - C2232) * C27977) *
               C9460 +
           ((C214 - C215) * C9521 + (C370 - C371) * C9463 +
            (C1472 - C1473) * C9522 + (C1666 - C1667) * C27977) *
               C9461 +
           ((C218 - C219) * C9521 + (C372 - C373) * C9463 +
            (C4726 - C4727) * C9522 + (C4910 - C4911) * C27977) *
               C9462) *
              C28119 * C28120 * C81 +
          (((C215 - C214) * C9521 + (C371 - C370) * C9463 +
            (C1473 - C1472) * C9522 + (C1667 - C1666) * C27977) *
               C9460 +
           ((C219 - C218) * C9521 + (C373 - C372) * C9463 +
            (C4727 - C4726) * C9522 + (C4911 - C4910) * C27977) *
               C9461 +
           ((C223 - C222) * C9521 + (C375 - C374) * C9463 +
            (C202 * C565 - C27939 * C660) * C9522 +
            (C202 * C702 - C27939 * C782) * C27977) *
               C9462) *
              C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C27939 * C203 - C202 * C91) * C10945 +
           (C27939 * C364 - C202 * C259) * C10905 + (C2049 - C2050) * C10946 +
           (C2231 - C2232) * C10906 + (C2053 - C2054) * C10947 +
           (C2233 - C2234) * C10907 + (C27939 * C2044 - C202 * C1905) * C10948 +
           (C27939 * C2228 - C202 * C2106) * C10908) *
              C27882 * C28119 * C28120 * C81 +
          ((C215 - C214) * C10945 + (C371 - C370) * C10905 +
           (C1473 - C1472) * C10946 + (C1667 - C1666) * C10906 +
           (C1477 - C1476) * C10947 + (C1669 - C1668) * C10907 +
           (C202 * C1904 - C27939 * C2045) * C10948 +
           (C202 * C2107 - C27939 * C2229) * C10908) *
              C27882 * C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eezx[27] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C9460 * C96 - C9465 * C91 + C9461 * C98 - C9467 * C92 +
                       C9462 * C100 - C9469 * C93) *
                          C202 +
                      (C9460 * C414 - C9465 * C409 + C9461 * C415 -
                       C9467 * C410 + C9462 * C416 - C9469 * C411) *
                          C27939) *
                         C9463 +
                     ((C9460 * C575 - C9465 * C568 + C9461 * C573 -
                       C9467 * C567 + C9462 * C571 - C9469 * C566) *
                          C202 +
                      (C9460 * C821 - C9465 * C817 + C9461 * C822 -
                       C9467 * C818 + C9462 * C823 - C9469 * C819) *
                          C27939) *
                         C27977) *
                        C28119 * C28120 * C81 +
                    (((C9465 * C92 - C9460 * C98 + C9467 * C93 - C9461 * C100 +
                       C9469 * C94 - C9462 * C102) *
                          C202 +
                      (C9465 * C410 - C9460 * C415 + C9467 * C411 -
                       C9461 * C416 + C9469 * C412 - C9462 * C417) *
                          C27939) *
                         C9463 +
                     ((C9465 * C567 - C9460 * C573 + C9467 * C566 -
                       C9461 * C571 + C9469 * C565 - C9462 * C569) *
                          C202 +
                      (C9465 * C818 - C9460 * C822 + C9467 * C819 -
                       C9461 * C823 + C9469 * C820 - C9462 * C824) *
                          C27939) *
                         C27977) *
                        C28119 * C28120 * C82)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C27882 * C96 - C10909 * C91) * C202 +
                      (C27882 * C414 - C10909 * C409) * C27939) *
                         C10905 +
                     ((C27882 * C575 - C10909 * C568) * C202 +
                      (C27882 * C821 - C10909 * C817) * C27939) *
                         C10906 +
                     ((C27882 * C1335 - C10909 * C1332) * C202 +
                      (C27882 * C1722 - C10909 * C1719) * C27939) *
                         C10907 +
                     ((C27882 * C1908 - C10909 * C1905) * C202 +
                      (C27882 * C2286 - C10909 * C2284) * C27939) *
                         C10908) *
                        C28119 * C28120 * C81 +
                    (((C10909 * C92 - C27882 * C98) * C202 +
                      (C10909 * C410 - C27882 * C415) * C27939) *
                         C10905 +
                     ((C10909 * C567 - C27882 * C573) * C202 +
                      (C10909 * C818 - C27882 * C822) * C27939) *
                         C10906 +
                     ((C10909 * C1333 - C27882 * C1337) * C202 +
                      (C10909 * C1720 - C27882 * C1723) * C27939) *
                         C10907 +
                     ((C10909 * C1904 - C27882 * C1906) * C202 +
                      (C10909 * C2285 - C27882 * C2287) * C27939) *
                         C10908) *
                        C28119 * C28120 * C82)) /
                      (p * q * std::sqrt(p + q));
    d2eezy[27] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C9463 * C146 - C9521 * C91 + C27977 * C615 - C9522 * C568) * C202 +
            (C9463 * C453 - C9521 * C409 + C27977 * C859 - C9522 * C817) *
                C27939) *
               C9460 +
           ((C9524 - C9525 + C9526 - C9527) * C202 +
            (C9870 - C9871 + C9872 - C9873) * C27939) *
               C9461 +
           ((C9532 - C9533 + C9534 - C9535) * C202 +
            (C9874 - C9875 + C9876 - C9877) * C27939) *
               C9462) *
              C28119 * C28120 * C81 +
          (((C9525 - C9524 + C9527 - C9526) * C202 +
            (C9871 - C9870 + C9873 - C9872) * C27939) *
               C9460 +
           ((C9533 - C9532 + C9535 - C9534) * C202 +
            (C9875 - C9874 + C9877 - C9876) * C27939) *
               C9461 +
           ((C9521 * C94 - C9463 * C149 + C9522 * C565 - C27977 * C618) * C202 +
            (C9521 * C412 - C9463 * C456 + C9522 * C820 - C27977 * C862) *
                C27939) *
               C9462) *
              C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C10905 * C146 - C10945 * C91 + C10906 * C615 - C10946 * C568 +
            C10907 * C1397 - C10947 * C1332 + C10908 * C1990 - C10948 * C1905) *
               C202 +
           (C10905 * C453 - C10945 * C409 + C10906 * C859 - C10946 * C817 +
            C10907 * C1775 - C10947 * C1719 + C10908 * C2346 - C10948 * C2284) *
               C27939) *
              C27882 * C28119 * C28120 * C81 +
          ((C10945 * C92 - C10905 * C147 + C10946 * C567 - C10906 * C616 +
            C10947 * C1333 - C10907 * C1398 + C10948 * C1904 - C10908 * C1991) *
               C202 +
           (C10945 * C410 - C10905 * C454 + C10946 * C818 - C10906 * C860 +
            C10947 * C1720 - C10907 * C1776 + C10948 * C2285 - C10908 * C2347) *
               C27939) *
              C27882 * C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eezz[27] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C202 * C203 - C498 * C91 - C202 * C409 + C27939 * C499) * C9463 +
            C2413 * C27977) *
               C9460 +
           (C9928 + C9929) * C9461 + (C9930 + C9931) * C9462) *
              C28119 * C28120 * C81 -
          (((C202 * C660 - C498 * C565 - C202 * C820 + C27939 * C897) * C27977 +
            C525 * C9463) *
               C9462 +
           (C9931 + C9930) * C9461 + (C9929 + C9928) * C9460) *
              C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C202 * C203 - C498 * C91 - C202 * C409 + C27939 * C499) * C10905 +
           C2413 * C10906 + C2414 * C10907 +
           (C202 * C2044 - C498 * C1905 - C202 * C2284 + C27939 * C2399) *
               C10908) *
              C27882 * C28119 * C28120 * C81 -
          ((C202 * C2045 - C498 * C1904 - C202 * C2285 + C27939 * C2398) *
               C10908 +
           C1852 * C10907 + C1851 * C10906 + C523 * C10905) *
              C27882 * C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eexx[28] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C9465 * C96 - C9466 * C91 - C9465 * C97 + C9460 * C106 +
            C9467 * C98 - C9468 * C92 - C9467 * C99 + C9461 * C107 +
            C9469 * C100 - C9470 * C93 - C9469 * C101 + C9462 * C108) *
               C27939 * C9463 +
           (C10000 + C10001 + C10002) * C27939 * C27977) *
              C28119 * C562 -
          ((C9469 * C1339 - C9470 * C1334 - C9469 * C1340 + C9462 * C1343 +
            C9467 * C1337 - C9468 * C1333 - C9467 * C1338 + C9461 * C1342 +
            C9465 * C1335 - C9466 * C1332 - C9465 * C1336 + C9460 * C1341) *
               C27939 * C27977 +
           (C10002 + C10001 + C10000) * C27939 * C9463) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C10909 * C96 - C10910 * C91 - C10909 * C97 + C27882 * C106) *
               C27939 * C10905 +
           C11251 * C10906 + C11252 * C10907 + C11253 * C10908) *
              C28119 * C562 -
          ((C10909 * C11226 - C10910 * C11225 - C10909 * C11227 +
            C27882 * C11228) *
               C27939 * C10908 +
           C11253 * C10907 + C11252 * C10906 + C11251 * C10905) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q));
    d2eexy[28] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C9463 * C146 - C9521 * C91 + C27977 * C615 - C9522 * C568) * C9465 +
           (C9463 * C151 - C9521 * C97 + C27977 * C619 - C9522 * C576) * C9460 +
           (C9524 - C9525 + C9526 - C9527) * C9467 +
           (C9528 - C9529 + C9530 - C9531) * C9461 +
           (C9532 - C9533 + C9534 - C9535) * C9469 +
           (C9536 - C9537 + C9538 - C9539) * C9462) *
              C27939 * C28119 * C562 +
          ((C9521 * C568 - C9463 * C615 + C9522 * C1332 - C27977 * C1397) *
               C9465 +
           (C9521 * C576 - C9463 * C619 + C9522 * C1336 - C27977 * C1400) *
               C9460 +
           (C9521 * C567 - C9463 * C616 + C9522 * C1333 - C27977 * C1398) *
               C9467 +
           (C9521 * C574 - C9463 * C620 + C9522 * C1338 - C27977 * C1401) *
               C9461 +
           (C9521 * C566 - C9463 * C617 + C9522 * C1334 - C27977 * C1399) *
               C9469 +
           (C9521 * C572 - C9463 * C621 + C9522 * C1340 - C27977 * C1402) *
               C9462) *
              C27939 * C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C10905 * C146 - C10945 * C91 + C10906 * C615 - C10946 * C568 +
            C10907 * C1397 - C10947 * C1332 + C10908 * C1990 - C10948 * C1905) *
               C10909 +
           (C10905 * C151 - C10945 * C97 + C10906 * C619 - C10946 * C576 +
            C10907 * C1400 - C10947 * C1336 + C10908 * C1992 - C10948 * C1909) *
               C27882) *
              C27939 * C28119 * C562 +
          ((C10945 * C568 - C10905 * C615 + C10946 * C1332 - C10906 * C1397 +
            C10947 * C1905 - C10907 * C1990 + C10948 * C11225 -
            C10908 * C11287) *
               C10909 +
           (C10945 * C576 - C10905 * C619 + C10946 * C1336 - C10906 * C1400 +
            C10947 * C1909 - C10907 * C1992 + C10948 * C11227 -
            C10908 * C11288) *
               C27882) *
              C27939 * C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q));
    d2eexz[28] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C27939 * C203 - C202 * C91) * C9465 +
            (C27939 * C208 - C202 * C97) * C9460 + (C214 - C215) * C9467 +
            (C216 - C217) * C9461 + (C218 - C219) * C9469 +
            (C220 - C221) * C9462) *
               C9463 +
           ((C2049 - C2050) * C9465 + (C2051 - C2052) * C9460 +
            (C1472 - C1473) * C9467 + (C1474 - C1475) * C9461 +
            (C4726 - C4727) * C9469 + (C4728 - C4729) * C9462) *
               C27977) *
              C28119 * C562 +
          (((C2050 - C2049) * C9465 + (C2052 - C2051) * C9460 +
            (C1473 - C1472) * C9467 + (C1475 - C1474) * C9461 +
            (C4727 - C4726) * C9469 + (C4729 - C4728) * C9462) *
               C9463 +
           ((C2054 - C2053) * C9465 + (C2056 - C2055) * C9460 +
            (C1477 - C1476) * C9467 + (C1479 - C1478) * C9461 +
            (C202 * C1334 - C27939 * C1467) * C9469 +
            (C202 * C1340 - C27939 * C1470) * C9462) *
               C27977) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C27939 * C203 - C202 * C91) * C10909 +
            (C27939 * C208 - C202 * C97) * C27882) *
               C10905 +
           ((C2049 - C2050) * C10909 + (C2051 - C2052) * C27882) * C10906 +
           ((C2053 - C2054) * C10909 + (C2055 - C2056) * C27882) * C10907 +
           ((C11326 - C11327) * C10909 + (C11328 - C11329) * C27882) * C10908) *
              C28119 * C562 +
          (((C2050 - C2049) * C10909 + (C2052 - C2051) * C27882) * C10905 +
           ((C2054 - C2053) * C10909 + (C2056 - C2055) * C27882) * C10906 +
           ((C11327 - C11326) * C10909 + (C11329 - C11328) * C27882) * C10907 +
           ((C202 * C11225 - C27939 * C11323) * C10909 +
            (C202 * C11227 - C27939 * C11324) * C27882) *
               C10908) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q));
    d2eeyx[28] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C9460 * C96 - C9465 * C91 + C9461 * C98 - C9467 * C92 +
            C9462 * C100 - C9469 * C93) *
               C9521 +
           (C9460 * C264 - C9465 * C259 + C9461 * C265 - C9467 * C260 +
            C9462 * C266 - C9469 * C261) *
               C9463 +
           (C10153 - C10154 + C10155 - C10156 + C10157 - C10158) * C9522 +
           (C10159 - C10160 + C10161 - C10162 + C10163 - C10164) * C27977) *
              C27939 * C28119 * C562 +
          ((C10154 - C10153 + C10156 - C10155 + C10158 - C10157) * C9521 +
           (C10160 - C10159 + C10162 - C10161 + C10164 - C10163) * C9463 +
           (C9465 * C1332 - C9460 * C1335 + C9467 * C1333 - C9461 * C1337 +
            C9469 * C1334 - C9462 * C1339) *
               C9522 +
           (C9465 * C1529 - C9460 * C1532 + C9467 * C1530 - C9461 * C1533 +
            C9469 * C1531 - C9462 * C1534) *
               C27977) *
              C27939 * C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C27882 * C96 - C10909 * C91) * C10945 +
           (C27882 * C264 - C10909 * C259) * C10905 +
           (C11366 - C11367) * C10946 + (C11368 - C11369) * C10906 +
           (C11370 - C11371) * C10947 + (C11372 - C11373) * C10907 +
           (C11374 - C11375) * C10948 + (C11376 - C11377) * C10908) *
              C27939 * C28119 * C562 +
          ((C11367 - C11366) * C10945 + (C11369 - C11368) * C10905 +
           (C11371 - C11370) * C10946 + (C11373 - C11372) * C10906 +
           (C11375 - C11374) * C10947 + (C11377 - C11376) * C10907 +
           (C10909 * C11225 - C27882 * C11226) * C10948 +
           (C10909 * C11363 - C27882 * C11364) * C10908) *
              C27939 * C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q));
    d2eeyy[28] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C9521 * C146 - C9689 * C91 - C9521 * C259 + C9463 * C304 +
            C9522 * C615 - C9690 * C568 - C9522 * C699 + C27977 * C744) *
               C9460 +
           (C9716 + C9717) * C9461 + (C9718 + C9719) * C9462) *
              C27939 * C28119 * C562 -
          ((C9522 * C1399 - C9690 * C1334 - C9522 * C1531 + C27977 * C1590 +
            C9521 * C617 - C9689 * C566 - C9521 * C701 + C9463 * C742) *
               C9462 +
           (C9522 * C1398 - C9690 * C1333 - C9522 * C1530 + C27977 * C1589 +
            C9521 * C616 - C9689 * C567 - C9521 * C700 + C9463 * C743) *
               C9461 +
           (C9522 * C1397 - C9690 * C1332 - C9522 * C1529 + C27977 * C1588 +
            C9521 * C615 - C9689 * C568 - C9521 * C699 + C9463 * C744) *
               C9460) *
              C27939 * C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C10945 * C146 - C11051 * C91 - C10945 * C259 + C10905 * C304 +
           C10946 * C615 - C11052 * C568 - C10946 * C699 + C10906 * C744 +
           C10947 * C1397 - C11053 * C1332 - C10947 * C1529 + C10907 * C1588 +
           C10948 * C1990 - C11054 * C1905 - C10948 * C2106 + C10908 * C2177) *
              C27882 * C27939 * C28119 * C562 -
          (C10948 * C11287 - C11054 * C11225 - C10948 * C11363 +
           C10908 * C11411 + C10947 * C1990 - C11053 * C1905 - C10947 * C2106 +
           C10907 * C2177 + C10946 * C1397 - C11052 * C1332 - C10946 * C1529 +
           C10906 * C1588 + C10945 * C615 - C11051 * C568 - C10945 * C699 +
           C10905 * C744) *
              C27882 * C27939 * C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q));
    d2eeyz[28] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C27939 * C203 - C202 * C91) * C9521 +
                      (C27939 * C364 - C202 * C259) * C9463 +
                      (C2049 - C2050) * C9522 + (C2231 - C2232) * C27977) *
                         C9460 +
                     ((C214 - C215) * C9521 + (C370 - C371) * C9463 +
                      (C1472 - C1473) * C9522 + (C1666 - C1667) * C27977) *
                         C9461 +
                     ((C218 - C219) * C9521 + (C372 - C373) * C9463 +
                      (C4726 - C4727) * C9522 + (C4910 - C4911) * C27977) *
                         C9462) *
                        C28119 * C562 +
                    (((C2050 - C2049) * C9521 + (C2232 - C2231) * C9463 +
                      (C2054 - C2053) * C9522 + (C2234 - C2233) * C27977) *
                         C9460 +
                     ((C1473 - C1472) * C9521 + (C1667 - C1666) * C9463 +
                      (C1477 - C1476) * C9522 + (C1669 - C1668) * C27977) *
                         C9461 +
                     ((C4727 - C4726) * C9521 + (C4911 - C4910) * C9463 +
                      (C202 * C1334 - C27939 * C1467) * C9522 +
                      (C202 * C1531 - C27939 * C1664) * C27977) *
                         C9462) *
                        C28119 * C563) *
                   C28121) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C27939 * C203 - C202 * C91) * C10945 +
                     (C27939 * C364 - C202 * C259) * C10905 +
                     (C2049 - C2050) * C10946 + (C2231 - C2232) * C10906 +
                     (C2053 - C2054) * C10947 + (C2233 - C2234) * C10907 +
                     (C11326 - C11327) * C10948 + (C11448 - C11449) * C10908) *
                        C27882 * C28119 * C562 +
                    ((C2050 - C2049) * C10945 + (C2232 - C2231) * C10905 +
                     (C2054 - C2053) * C10946 + (C2234 - C2233) * C10906 +
                     (C11327 - C11326) * C10947 + (C11449 - C11448) * C10907 +
                     (C202 * C11225 - C27939 * C11323) * C10948 +
                     (C202 * C11363 - C27939 * C11446) * C10908) *
                        C27882 * C28119 * C563) *
                   C28121) /
                      (p * q * std::sqrt(p + q));
    d2eezx[28] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C9460 * C96 - C9465 * C91 + C9461 * C98 - C9467 * C92 +
             C9462 * C100 - C9469 * C93) *
                C202 +
            (C9460 * C414 - C9465 * C409 + C9461 * C415 - C9467 * C410 +
             C9462 * C416 - C9469 * C411) *
                C27939) *
               C9463 +
           ((C10153 - C10154 + C10155 - C10156 + C10157 - C10158) * C202 +
            (C10315 - C10316 + C10317 - C10318 + C10319 - C10320) * C27939) *
               C27977) *
              C28119 * C562 +
          (((C10154 - C10153 + C10156 - C10155 + C10158 - C10157) * C202 +
            (C10316 - C10315 + C10318 - C10317 + C10320 - C10319) * C27939) *
               C9463 +
           ((C9465 * C1332 - C9460 * C1335 + C9467 * C1333 - C9461 * C1337 +
             C9469 * C1334 - C9462 * C1339) *
                C202 +
            (C9465 * C1719 - C9460 * C1722 + C9467 * C1720 - C9461 * C1723 +
             C9469 * C1721 - C9462 * C1724) *
                C27939) *
               C27977) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C27882 * C96 - C10909 * C91) * C202 +
            (C27882 * C414 - C10909 * C409) * C27939) *
               C10905 +
           ((C11366 - C11367) * C202 + (C11486 - C11487) * C27939) * C10906 +
           ((C11370 - C11371) * C202 + (C11488 - C11489) * C27939) * C10907 +
           ((C11374 - C11375) * C202 + (C11490 - C11491) * C27939) * C10908) *
              C28119 * C562 +
          (((C11367 - C11366) * C202 + (C11487 - C11486) * C27939) * C10905 +
           ((C11371 - C11370) * C202 + (C11489 - C11488) * C27939) * C10906 +
           ((C11375 - C11374) * C202 + (C11491 - C11490) * C27939) * C10907 +
           ((C10909 * C11225 - C27882 * C11226) * C202 +
            (C10909 * C11483 - C27882 * C11484) * C27939) *
               C10908) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q));
    d2eezy[28] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C9463 * C146 - C9521 * C91 + C27977 * C615 - C9522 * C568) * C202 +
            (C9463 * C453 - C9521 * C409 + C27977 * C859 - C9522 * C817) *
                C27939) *
               C9460 +
           ((C9524 - C9525 + C9526 - C9527) * C202 +
            (C9870 - C9871 + C9872 - C9873) * C27939) *
               C9461 +
           ((C9532 - C9533 + C9534 - C9535) * C202 +
            (C9874 - C9875 + C9876 - C9877) * C27939) *
               C9462) *
              C28119 * C562 +
          (((C9521 * C568 - C9463 * C615 + C9522 * C1332 - C27977 * C1397) *
                C202 +
            (C9521 * C817 - C9463 * C859 + C9522 * C1719 - C27977 * C1775) *
                C27939) *
               C9460 +
           ((C9521 * C567 - C9463 * C616 + C9522 * C1333 - C27977 * C1398) *
                C202 +
            (C9521 * C818 - C9463 * C860 + C9522 * C1720 - C27977 * C1776) *
                C27939) *
               C9461 +
           ((C9521 * C566 - C9463 * C617 + C9522 * C1334 - C27977 * C1399) *
                C202 +
            (C9521 * C819 - C9463 * C861 + C9522 * C1721 - C27977 * C1777) *
                C27939) *
               C9462) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C10905 * C146 - C10945 * C91 + C10906 * C615 - C10946 * C568 +
            C10907 * C1397 - C10947 * C1332 + C10908 * C1990 - C10948 * C1905) *
               C202 +
           (C10905 * C453 - C10945 * C409 + C10906 * C859 - C10946 * C817 +
            C10907 * C1775 - C10947 * C1719 + C10908 * C2346 - C10948 * C2284) *
               C27939) *
              C27882 * C28119 * C562 +
          ((C10945 * C568 - C10905 * C615 + C10946 * C1332 - C10906 * C1397 +
            C10947 * C1905 - C10907 * C1990 + C10948 * C11225 -
            C10908 * C11287) *
               C202 +
           (C10945 * C817 - C10905 * C859 + C10946 * C1719 - C10906 * C1775 +
            C10947 * C2284 - C10907 * C2346 + C10948 * C11483 -
            C10908 * C11525) *
               C27939) *
              C27882 * C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q));
    d2eezz[28] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C202 * C203 - C498 * C91 - C202 * C409 + C27939 * C499) * C9463 +
            C2413 * C27977) *
               C9460 +
           (C9928 + C9929) * C9461 + (C9930 + C9931) * C9462) *
              C28119 * C562 -
          (((C202 * C1467 - C498 * C1334 - C202 * C1721 + C27939 * C1836) *
                C27977 +
            C5079 * C9463) *
               C9462 +
           (C1852 * C27977 + C1851 * C9463) * C9461 +
           (C2414 * C27977 + C2413 * C9463) * C9460) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C202 * C203 - C498 * C91 - C202 * C409 + C27939 * C499) * C10905 +
           C2413 * C10906 + C2414 * C10907 + C11568 * C10908) *
              C27882 * C28119 * C562 -
          ((C202 * C11323 - C498 * C11225 - C202 * C11483 + C27939 * C11560) *
               C10908 +
           C11568 * C10907 + C2414 * C10906 + C2413 * C10905) *
              C27882 * C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q));
    d2eexx[29] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C9465 * C96 - C9466 * C91 - C9465 * C97 + C9460 * C106 +
            C9467 * C98 - C9468 * C92 - C9467 * C99 + C9461 * C107 +
            C9469 * C100 - C9470 * C93 - C9469 * C101 + C9462 * C108) *
               C27939 * C9463 +
           (C10000 + C10001 + C10002) * C27939 * C27977) *
              C935 -
          ((C9469 * C5620 - C9470 * C5619 - C9469 * C5621 + C9462 * C5622 +
            C9467 * C2472 - C9468 * C2466 - C9467 * C2473 + C9461 * C2478 +
            C9465 * C2474 - C9466 * C2467 - C9465 * C2475 + C9460 * C2479) *
               C27939 * C27977 +
           (C9469 * C943 - C9470 * C938 - C9469 * C944 + C9462 * C950 +
            C9467 * C945 - C9468 * C939 - C9467 * C946 + C9461 * C951 +
            C9465 * C947 - C9466 * C940 - C9465 * C948 + C9460 * C952) *
               C27939 * C9463) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C10909 * C96 - C10910 * C91 - C10909 * C97 + C27882 * C106) *
               C27939 * C10905 +
           C11251 * C10906 + C11252 * C10907 + C11253 * C10908) *
              C935 -
          ((C10909 * C11603 - C10910 * C11602 - C10909 * C11604 +
            C27882 * C11605) *
               C27939 * C10908 +
           (C10909 * C2470 - C10910 * C2465 - C10909 * C2471 + C27882 * C2477) *
               C27939 * C10907 +
           (C10909 * C2474 - C10910 * C2467 - C10909 * C2475 + C27882 * C2479) *
               C27939 * C10906 +
           (C10909 * C947 - C10910 * C940 - C10909 * C948 + C27882 * C952) *
               C27939 * C10905) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q));
    d2eexy[29] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C9463 * C146 - C9521 * C91 + C27977 * C615 - C9522 * C568) * C9465 +
           (C9463 * C151 - C9521 * C97 + C27977 * C619 - C9522 * C576) * C9460 +
           (C9524 - C9525 + C9526 - C9527) * C9467 +
           (C9528 - C9529 + C9530 - C9531) * C9461 +
           (C9532 - C9533 + C9534 - C9535) * C9469 +
           (C9536 - C9537 + C9538 - C9539) * C9462) *
              C27939 * C935 +
          ((C9521 * C940 - C9463 * C987 + C9522 * C2467 - C27977 * C2530) *
               C9465 +
           (C9521 * C948 - C9463 * C991 + C9522 * C2475 - C27977 * C2534) *
               C9460 +
           (C9521 * C939 - C9463 * C988 + C9522 * C2466 - C27977 * C2532) *
               C9467 +
           (C9521 * C946 - C9463 * C992 + C9522 * C2473 - C27977 * C2536) *
               C9461 +
           (C9521 * C938 - C9463 * C989 + C9522 * C5619 - C27977 * C5673) *
               C9469 +
           (C9521 * C944 - C9463 * C993 + C9522 * C5621 - C27977 * C5674) *
               C9462) *
              C27939 * C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C10905 * C146 - C10945 * C91 + C10906 * C615 - C10946 * C568 +
            C10907 * C1397 - C10947 * C1332 + C10908 * C1990 - C10948 * C1905) *
               C10909 +
           (C10905 * C151 - C10945 * C97 + C10906 * C619 - C10946 * C576 +
            C10907 * C1400 - C10947 * C1336 + C10908 * C1992 - C10948 * C1909) *
               C27882) *
              C27939 * C935 +
          ((C10945 * C940 - C10905 * C987 + C10946 * C2467 - C10906 * C2530 +
            C10947 * C2465 - C10907 * C2531 + C10948 * C11602 -
            C10908 * C11640) *
               C10909 +
           (C10945 * C948 - C10905 * C991 + C10946 * C2475 - C10906 * C2534 +
            C10947 * C2471 - C10907 * C2535 + C10948 * C11604 -
            C10908 * C11641) *
               C27882) *
              C27939 * C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q));
    d2eexz[29] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C27939 * C203 - C202 * C91) * C9465 +
            (C27939 * C208 - C202 * C97) * C9460 + (C214 - C215) * C9467 +
            (C216 - C217) * C9461 + (C218 - C219) * C9469 +
            (C220 - C221) * C9462) *
               C9463 +
           ((C2049 - C2050) * C9465 + (C2051 - C2052) * C9460 +
            (C1472 - C1473) * C9467 + (C1474 - C1475) * C9461 +
            (C4726 - C4727) * C9469 + (C4728 - C4729) * C9462) *
               C27977) *
              C935 +
          (((C202 * C940 - C27939 * C1029) * C9465 +
            (C202 * C948 - C27939 * C1033) * C9460 +
            (C202 * C939 - C27939 * C1030) * C9467 +
            (C202 * C946 - C27939 * C1034) * C9461 +
            (C202 * C938 - C27939 * C1031) * C9469 +
            (C202 * C944 - C27939 * C1035) * C9462) *
               C9463 +
           ((C202 * C2467 - C27939 * C2588) * C9465 +
            (C202 * C2475 - C27939 * C2592) * C9460 +
            (C202 * C2466 - C27939 * C2589) * C9467 +
            (C202 * C2473 - C27939 * C2593) * C9461 +
            (C202 * C5619 - C27939 * C5725) * C9469 +
            (C202 * C5621 - C27939 * C5726) * C9462) *
               C27977) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C27939 * C203 - C202 * C91) * C10909 +
            (C27939 * C208 - C202 * C97) * C27882) *
               C10905 +
           ((C2049 - C2050) * C10909 + (C2051 - C2052) * C27882) * C10906 +
           ((C2053 - C2054) * C10909 + (C2055 - C2056) * C27882) * C10907 +
           ((C11326 - C11327) * C10909 + (C11328 - C11329) * C27882) * C10908) *
              C935 +
          (((C202 * C940 - C27939 * C1029) * C10909 +
            (C202 * C948 - C27939 * C1033) * C27882) *
               C10905 +
           ((C202 * C2467 - C27939 * C2588) * C10909 +
            (C202 * C2475 - C27939 * C2592) * C27882) *
               C10906 +
           ((C202 * C2465 - C27939 * C2590) * C10909 +
            (C202 * C2471 - C27939 * C2594) * C27882) *
               C10907 +
           ((C202 * C11602 - C27939 * C11676) * C10909 +
            (C202 * C11604 - C27939 * C11677) * C27882) *
               C10908) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q));
    d2eeyx[29] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C9460 * C96 - C9465 * C91 + C9461 * C98 - C9467 * C92 +
            C9462 * C100 - C9469 * C93) *
               C9521 +
           (C9460 * C264 - C9465 * C259 + C9461 * C265 - C9467 * C260 +
            C9462 * C266 - C9469 * C261) *
               C9463 +
           (C10153 - C10154 + C10155 - C10156 + C10157 - C10158) * C9522 +
           (C10159 - C10160 + C10161 - C10162 + C10163 - C10164) * C27977) *
              C27939 * C935 +
          ((C9465 * C940 - C9460 * C947 + C9467 * C939 - C9461 * C945 +
            C9469 * C938 - C9462 * C943) *
               C9521 +
           (C9465 * C1071 - C9460 * C1075 + C9467 * C1072 - C9461 * C1076 +
            C9469 * C1073 - C9462 * C1077) *
               C9463 +
           (C9465 * C2467 - C9460 * C2474 + C9467 * C2466 - C9461 * C2472 +
            C9469 * C5619 - C9462 * C5620) *
               C9522 +
           (C9465 * C2646 - C9460 * C2650 + C9467 * C2647 - C9461 * C2651 +
            C9469 * C5777 - C9462 * C5778) *
               C27977) *
              C27939 * C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C27882 * C96 - C10909 * C91) * C10945 +
           (C27882 * C264 - C10909 * C259) * C10905 +
           (C11366 - C11367) * C10946 + (C11368 - C11369) * C10906 +
           (C11370 - C11371) * C10947 + (C11372 - C11373) * C10907 +
           (C11374 - C11375) * C10948 + (C11376 - C11377) * C10908) *
              C27939 * C935 +
          ((C10909 * C940 - C27882 * C947) * C10945 +
           (C10909 * C1071 - C27882 * C1075) * C10905 +
           (C10909 * C2467 - C27882 * C2474) * C10946 +
           (C10909 * C2646 - C27882 * C2650) * C10906 +
           (C10909 * C2465 - C27882 * C2470) * C10947 +
           (C10909 * C2648 - C27882 * C2652) * C10907 +
           (C10909 * C11602 - C27882 * C11603) * C10948 +
           (C10909 * C11712 - C27882 * C11713) * C10908) *
              C27939 * C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q));
    d2eeyy[29] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C9521 * C146 - C9689 * C91 - C9521 * C259 + C9463 * C304 +
            C9522 * C615 - C9690 * C568 - C9522 * C699 + C27977 * C744) *
               C9460 +
           (C9716 + C9717) * C9461 + (C9718 + C9719) * C9462) *
              C27939 * C935 -
          ((C9522 * C5673 - C9690 * C5619 - C9522 * C5777 + C27977 * C5829 +
            C9521 * C989 - C9689 * C938 - C9521 * C1073 + C9463 * C1114) *
               C9462 +
           (C9522 * C2532 - C9690 * C2466 - C9522 * C2647 + C27977 * C2705 +
            C9521 * C988 - C9689 * C939 - C9521 * C1072 + C9463 * C1115) *
               C9461 +
           (C9522 * C2530 - C9690 * C2467 - C9522 * C2646 + C27977 * C2707 +
            C9521 * C987 - C9689 * C940 - C9521 * C1071 + C9463 * C1116) *
               C9460) *
              C27939 * C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C10945 * C146 - C11051 * C91 - C10945 * C259 + C10905 * C304 +
           C10946 * C615 - C11052 * C568 - C10946 * C699 + C10906 * C744 +
           C10947 * C1397 - C11053 * C1332 - C10947 * C1529 + C10907 * C1588 +
           C10948 * C1990 - C11054 * C1905 - C10948 * C2106 + C10908 * C2177) *
              C27882 * C27939 * C935 -
          (C10948 * C11640 - C11054 * C11602 - C10948 * C11712 +
           C10908 * C11748 + C10947 * C2531 - C11053 * C2465 - C10947 * C2648 +
           C10907 * C2706 + C10946 * C2530 - C11052 * C2467 - C10946 * C2646 +
           C10906 * C2707 + C10945 * C987 - C11051 * C940 - C10945 * C1071 +
           C10905 * C1116) *
              C27882 * C27939 * C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q));
    d2eeyz[29] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C27939 * C203 - C202 * C91) * C9521 +
                      (C27939 * C364 - C202 * C259) * C9463 +
                      (C2049 - C2050) * C9522 + (C2231 - C2232) * C27977) *
                         C9460 +
                     ((C214 - C215) * C9521 + (C370 - C371) * C9463 +
                      (C1472 - C1473) * C9522 + (C1666 - C1667) * C27977) *
                         C9461 +
                     ((C218 - C219) * C9521 + (C372 - C373) * C9463 +
                      (C4726 - C4727) * C9522 + (C4910 - C4911) * C27977) *
                         C9462) *
                        C935 +
                    (((C202 * C940 - C27939 * C1029) * C9521 +
                      (C202 * C1071 - C27939 * C1151) * C9463 +
                      (C202 * C2467 - C27939 * C2588) * C9522 +
                      (C202 * C2646 - C27939 * C2758) * C27977) *
                         C9460 +
                     ((C202 * C939 - C27939 * C1030) * C9521 +
                      (C202 * C1072 - C27939 * C1152) * C9463 +
                      (C202 * C2466 - C27939 * C2589) * C9522 +
                      (C202 * C2647 - C27939 * C2760) * C27977) *
                         C9461 +
                     ((C202 * C938 - C27939 * C1031) * C9521 +
                      (C202 * C1073 - C27939 * C1153) * C9463 +
                      (C202 * C5619 - C27939 * C5725) * C9522 +
                      (C202 * C5777 - C27939 * C5880) * C27977) *
                         C9462) *
                        C936) *
                   C28120 * C28121) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C27939 * C203 - C202 * C91) * C10945 +
                     (C27939 * C364 - C202 * C259) * C10905 +
                     (C2049 - C2050) * C10946 + (C2231 - C2232) * C10906 +
                     (C2053 - C2054) * C10947 + (C2233 - C2234) * C10907 +
                     (C11326 - C11327) * C10948 + (C11448 - C11449) * C10908) *
                        C27882 * C935 +
                    ((C202 * C940 - C27939 * C1029) * C10945 +
                     (C202 * C1071 - C27939 * C1151) * C10905 +
                     (C202 * C2467 - C27939 * C2588) * C10946 +
                     (C202 * C2646 - C27939 * C2758) * C10906 +
                     (C202 * C2465 - C27939 * C2590) * C10947 +
                     (C202 * C2648 - C27939 * C2759) * C10907 +
                     (C202 * C11602 - C27939 * C11676) * C10948 +
                     (C202 * C11712 - C27939 * C11783) * C10908) *
                        C27882 * C936) *
                   C28120 * C28121) /
                      (p * q * std::sqrt(p + q));
    d2eezx[29] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C9460 * C96 - C9465 * C91 + C9461 * C98 - C9467 * C92 +
             C9462 * C100 - C9469 * C93) *
                C202 +
            (C9460 * C414 - C9465 * C409 + C9461 * C415 - C9467 * C410 +
             C9462 * C416 - C9469 * C411) *
                C27939) *
               C9463 +
           ((C10153 - C10154 + C10155 - C10156 + C10157 - C10158) * C202 +
            (C10315 - C10316 + C10317 - C10318 + C10319 - C10320) * C27939) *
               C27977) *
              C935 +
          (((C9465 * C940 - C9460 * C947 + C9467 * C939 - C9461 * C945 +
             C9469 * C938 - C9462 * C943) *
                C202 +
            (C9465 * C1189 - C9460 * C1193 + C9467 * C1190 - C9461 * C1194 +
             C9469 * C1191 - C9462 * C1195) *
                C27939) *
               C9463 +
           ((C9465 * C2467 - C9460 * C2474 + C9467 * C2466 - C9461 * C2472 +
             C9469 * C5619 - C9462 * C5620) *
                C202 +
            (C9465 * C2812 - C9460 * C2816 + C9467 * C2813 - C9461 * C2817 +
             C9469 * C5931 - C9462 * C5932) *
                C27939) *
               C27977) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C27882 * C96 - C10909 * C91) * C202 +
            (C27882 * C414 - C10909 * C409) * C27939) *
               C10905 +
           ((C11366 - C11367) * C202 + (C11486 - C11487) * C27939) * C10906 +
           ((C11370 - C11371) * C202 + (C11488 - C11489) * C27939) * C10907 +
           ((C11374 - C11375) * C202 + (C11490 - C11491) * C27939) * C10908) *
              C935 +
          (((C10909 * C940 - C27882 * C947) * C202 +
            (C10909 * C1189 - C27882 * C1193) * C27939) *
               C10905 +
           ((C10909 * C2467 - C27882 * C2474) * C202 +
            (C10909 * C2812 - C27882 * C2816) * C27939) *
               C10906 +
           ((C10909 * C2465 - C27882 * C2470) * C202 +
            (C10909 * C2814 - C27882 * C2818) * C27939) *
               C10907 +
           ((C10909 * C11602 - C27882 * C11603) * C202 +
            (C10909 * C11818 - C27882 * C11819) * C27939) *
               C10908) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q));
    d2eezy[29] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C9463 * C146 - C9521 * C91 + C27977 * C615 - C9522 * C568) * C202 +
            (C9463 * C453 - C9521 * C409 + C27977 * C859 - C9522 * C817) *
                C27939) *
               C9460 +
           ((C9524 - C9525 + C9526 - C9527) * C202 +
            (C9870 - C9871 + C9872 - C9873) * C27939) *
               C9461 +
           ((C9532 - C9533 + C9534 - C9535) * C202 +
            (C9874 - C9875 + C9876 - C9877) * C27939) *
               C9462) *
              C935 +
          (((C9521 * C940 - C9463 * C987 + C9522 * C2467 - C27977 * C2530) *
                C202 +
            (C9521 * C1189 - C9463 * C1231 + C9522 * C2812 - C27977 * C2870) *
                C27939) *
               C9460 +
           ((C9521 * C939 - C9463 * C988 + C9522 * C2466 - C27977 * C2532) *
                C202 +
            (C9521 * C1190 - C9463 * C1232 + C9522 * C2813 - C27977 * C2872) *
                C27939) *
               C9461 +
           ((C9521 * C938 - C9463 * C989 + C9522 * C5619 - C27977 * C5673) *
                C202 +
            (C9521 * C1191 - C9463 * C1233 + C9522 * C5931 - C27977 * C5983) *
                C27939) *
               C9462) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C10905 * C146 - C10945 * C91 + C10906 * C615 - C10946 * C568 +
            C10907 * C1397 - C10947 * C1332 + C10908 * C1990 - C10948 * C1905) *
               C202 +
           (C10905 * C453 - C10945 * C409 + C10906 * C859 - C10946 * C817 +
            C10907 * C1775 - C10947 * C1719 + C10908 * C2346 - C10948 * C2284) *
               C27939) *
              C27882 * C935 +
          ((C10945 * C940 - C10905 * C987 + C10946 * C2467 - C10906 * C2530 +
            C10947 * C2465 - C10907 * C2531 + C10948 * C11602 -
            C10908 * C11640) *
               C202 +
           (C10945 * C1189 - C10905 * C1231 + C10946 * C2812 - C10906 * C2870 +
            C10947 * C2814 - C10907 * C2871 + C10948 * C11818 -
            C10908 * C11854) *
               C27939) *
              C27882 * C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q));
    d2eezz[29] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C202 * C203 - C498 * C91 - C202 * C409 + C27939 * C499) * C9463 +
            C2413 * C27977) *
               C9460 +
           (C9928 + C9929) * C9461 + (C9930 + C9931) * C9462) *
              C935 -
          (((C202 * C5725 - C498 * C5619 - C202 * C5931 + C27939 * C6034) *
                C27977 +
            (C202 * C1031 - C498 * C938 - C202 * C1191 + C27939 * C1270) *
                C9463) *
               C9462 +
           ((C202 * C2589 - C498 * C2466 - C202 * C2813 + C27939 * C2925) *
                C27977 +
            (C202 * C1030 - C498 * C939 - C202 * C1190 + C27939 * C1271) *
                C9463) *
               C9461 +
           ((C202 * C2588 - C498 * C2467 - C202 * C2812 + C27939 * C2927) *
                C27977 +
            (C202 * C1029 - C498 * C940 - C202 * C1189 + C27939 * C1272) *
                C9463) *
               C9460) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C202 * C203 - C498 * C91 - C202 * C409 + C27939 * C499) * C10905 +
           C2413 * C10906 + C2414 * C10907 + C11568 * C10908) *
              C27882 * C935 -
          ((C202 * C11676 - C498 * C11602 - C202 * C11818 + C27939 * C11889) *
               C10908 +
           (C202 * C2590 - C498 * C2465 - C202 * C2814 + C27939 * C2926) *
               C10907 +
           (C202 * C2588 - C498 * C2467 - C202 * C2812 + C27939 * C2927) *
               C10906 +
           (C202 * C1029 - C498 * C940 - C202 * C1189 + C27939 * C1272) *
               C10905) *
              C27882 * C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q));
    d2eexx[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C26731 * C96 - C13474 * C91 - C26731 * C97 + C28071 * C106 +
             C26724 * C98 - C13476 * C92 - C26724 * C99 + C27887 * C107) *
                C18219 +
            (C16196 + C16197) * C28003) *
               C28084 +
           ((C14000 + C14001) * C18219 + (C15576 + C15577) * C28003) * C27977) *
              C28119 * C28120 * C81 -
          (((C26724 * C5620 - C13476 * C5619 - C26724 * C5621 + C27887 * C5622 +
             C26731 * C2472 - C13474 * C2466 - C26731 * C2473 +
             C28071 * C2478) *
                C28003 +
            (C26724 * C571 - C13476 * C566 - C26724 * C572 + C27887 * C578 +
             C26731 * C573 - C13474 * C567 - C26731 * C574 + C28071 * C579) *
                C18219) *
               C27977 +
           ((C26724 * C943 - C13476 * C938 - C26724 * C944 + C27887 * C950 +
             C26731 * C945 - C13474 * C939 - C26731 * C946 + C28071 * C951) *
                C28003 +
            (C26724 * C100 - C13476 * C93 - C26724 * C101 + C27887 * C108 +
             C26731 * C98 - C13474 * C92 - C26731 * C99 + C28071 * C107) *
                C18219) *
               C28084) *
              C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eexy[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28084 * C146 - C4657 * C91 + C27977 * C615 - C4658 * C568) *
                C26731 +
            (C28084 * C151 - C4657 * C97 + C27977 * C619 - C4658 * C576) *
                C28071 +
            (C4660 - C4661 + C4662 - C4663) * C26724 +
            (C4664 - C4665 + C4666 - C4667) * C27887) *
               C18219 +
           ((C8923 - C8924 + C8925 - C8926) * C26731 +
            (C8927 - C8928 + C8929 - C8930) * C28071 +
            (C7631 - C7632 + C7633 - C7634) * C26724 +
            (C7635 - C7636 + C7637 - C7638) * C27887) *
               C28003) *
              C28119 * C28120 * C81 +
          (((C4661 - C4660 + C4663 - C4662) * C26731 +
            (C4665 - C4664 + C4667 - C4666) * C28071 +
            (C4669 - C4668 + C4671 - C4670) * C26724 +
            (C4673 - C4672 + C4675 - C4674) * C27887) *
               C18219 +
           ((C7632 - C7631 + C7634 - C7633) * C26731 +
            (C7636 - C7635 + C7638 - C7637) * C28071 +
            (C4657 * C938 - C28084 * C989 + C4658 * C5619 - C27977 * C5673) *
                C26724 +
            (C4657 * C944 - C28084 * C993 + C4658 * C5621 - C27977 * C5674) *
                C27887) *
               C28003) *
              C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eexz[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C18219 * C203 - C18321 * C91 + C28003 * C1029 - C18322 * C940) *
                C26731 +
            (C18219 * C208 - C18321 * C97 + C28003 * C1033 - C18322 * C948) *
                C28071 +
            (C18324 - C18325 + C18326 - C18327) * C26724 +
            (C18328 - C18329 + C18330 - C18331) * C27887) *
               C28084 +
           ((C20224 - C20225 + C20226 - C20227) * C26731 +
            (C20228 - C20229 + C20230 - C20231) * C28071 +
            (C22238 - C22239 + C22240 - C22241) * C26724 +
            (C22242 - C22243 + C22244 - C22245) * C27887) *
               C27977) *
              C28119 * C28120 * C81 +
          (((C18325 - C18324 + C18327 - C18326) * C26731 +
            (C18329 - C18328 + C18331 - C18330) * C28071 +
            (C18333 - C18332 + C18335 - C18334) * C26724 +
            (C18337 - C18336 + C18339 - C18338) * C27887) *
               C28084 +
           ((C22239 - C22238 + C22241 - C22240) * C26731 +
            (C22243 - C22242 + C22245 - C22244) * C28071 +
            (C18321 * C566 - C18219 * C659 + C18322 * C5619 - C28003 * C5725) *
                C26724 +
            (C18321 * C572 - C18219 * C663 + C18322 * C5621 - C28003 * C5726) *
                C27887) *
               C27977) *
              C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28071 * C96 - C26731 * C91 + C27887 * C98 - C26724 * C92) *
                C4657 +
            (C28071 * C264 - C26731 * C259 + C27887 * C265 - C26724 * C260) *
                C28084 +
            (C14154 - C14155 + C14156 - C14157) * C4658 +
            (C14158 - C14159 + C14160 - C14161) * C27977) *
               C18219 +
           ((C16396 - C16397 + C16398 - C16399) * C4657 +
            (C16400 - C16401 + C16402 - C16403) * C28084 +
            (C15776 - C15777 + C15778 - C15779) * C4658 +
            (C15780 - C15781 + C15782 - C15783) * C27977) *
               C28003) *
              C28119 * C28120 * C81 +
          (((C26731 * C92 - C28071 * C98 + C26724 * C93 - C27887 * C100) *
                C4657 +
            (C26731 * C260 - C28071 * C265 + C26724 * C261 - C27887 * C266) *
                C28084 +
            (C26731 * C567 - C28071 * C573 + C26724 * C566 - C27887 * C571) *
                C4658 +
            (C26731 * C700 - C28071 * C704 + C26724 * C701 - C27887 * C705) *
                C27977) *
               C18219 +
           ((C26731 * C939 - C28071 * C945 + C26724 * C938 - C27887 * C943) *
                C4657 +
            (C26731 * C1072 - C28071 * C1076 + C26724 * C1073 -
             C27887 * C1077) *
                C28084 +
            (C26731 * C2466 - C28071 * C2472 + C26724 * C5619 -
             C27887 * C5620) *
                C4658 +
            (C26731 * C2647 - C28071 * C2651 + C26724 * C5777 -
             C27887 * C5778) *
                C27977) *
               C28003) *
              C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4657 * C146 - C4829 * C91 - C4657 * C259 + C28084 * C304 +
             C4658 * C615 - C4830 * C568 - C4658 * C699 + C27977 * C744) *
                C28071 +
            (C4856 + C4857) * C27887) *
               C18219 +
           ((C9141 + C9142) * C28071 + (C7857 + C7858) * C27887) * C28003) *
              C28119 * C28120 * C81 -
          (((C4658 * C5673 - C4830 * C5619 - C4658 * C5777 + C27977 * C5829 +
             C4657 * C989 - C4829 * C938 - C4657 * C1073 + C28084 * C1114) *
                C27887 +
            (C7858 + C7857) * C28071) *
               C28003 +
           ((C4859 + C4858) * C27887 + (C4857 + C4856) * C28071) * C18219) *
              C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C18219 * C203 - C18321 * C91 + C28003 * C1029 - C18322 * C940) *
                C4657 +
            (C18219 * C364 - C18321 * C259 + C28003 * C1151 - C18322 * C1071) *
                C28084 +
            (C20224 - C20225 + C20226 - C20227) * C4658 +
            (C20390 - C20391 + C20392 - C20393) * C27977) *
               C28071 +
           ((C18324 - C18325 + C18326 - C18327) * C4657 +
            (C18490 - C18491 + C18492 - C18493) * C28084 +
            (C22238 - C22239 + C22240 - C22241) * C4658 +
            (C22444 - C22445 + C22446 - C22447) * C27977) *
               C27887) *
              C28119 * C28120 * C81 +
          (((C18325 - C18324 + C18327 - C18326) * C4657 +
            (C18491 - C18490 + C18493 - C18492) * C28084 +
            (C22239 - C22238 + C22241 - C22240) * C4658 +
            (C22445 - C22444 + C22447 - C22446) * C27977) *
               C28071 +
           ((C18333 - C18332 + C18335 - C18334) * C4657 +
            (C18495 - C18494 + C18497 - C18496) * C28084 +
            (C18321 * C566 - C18219 * C659 + C18322 * C5619 - C28003 * C5725) *
                C4658 +
            (C18321 * C701 - C18219 * C781 + C18322 * C5777 - C28003 * C5880) *
                C27977) *
               C27887) *
              C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eezx[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28071 * C96 - C26731 * C91 + C27887 * C98 - C26724 * C92) *
                C18321 +
            (C28071 * C414 - C26731 * C409 + C27887 * C415 - C26724 * C410) *
                C18219 +
            (C16396 - C16397 + C16398 - C16399) * C18322 +
            (C16602 - C16603 + C16604 - C16605) * C28003) *
               C28084 +
           ((C14154 - C14155 + C14156 - C14157) * C18321 +
            (C14320 - C14321 + C14322 - C14323) * C18219 +
            (C15776 - C15777 + C15778 - C15779) * C18322 +
            (C15982 - C15983 + C15984 - C15985) * C28003) *
               C27977) *
              C28119 * C28120 * C81 +
          (((C26731 * C92 - C28071 * C98 + C26724 * C93 - C27887 * C100) *
                C18321 +
            (C26731 * C410 - C28071 * C415 + C26724 * C411 - C27887 * C416) *
                C18219 +
            (C26731 * C939 - C28071 * C945 + C26724 * C938 - C27887 * C943) *
                C18322 +
            (C26731 * C1190 - C28071 * C1194 + C26724 * C1191 -
             C27887 * C1195) *
                C28003) *
               C28084 +
           ((C26731 * C567 - C28071 * C573 + C26724 * C566 - C27887 * C571) *
                C18321 +
            (C26731 * C818 - C28071 * C822 + C26724 * C819 - C27887 * C823) *
                C18219 +
            (C26731 * C2466 - C28071 * C2472 + C26724 * C5619 -
             C27887 * C5620) *
                C18322 +
            (C26731 * C2813 - C28071 * C2817 + C26724 * C5931 -
             C27887 * C5932) *
                C28003) *
               C27977) *
              C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eezy[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28084 * C146 - C4657 * C91 + C27977 * C615 - C4658 * C568) *
                C18321 +
            (C28084 * C453 - C4657 * C409 + C27977 * C859 - C4658 * C817) *
                C18219 +
            (C8923 - C8924 + C8925 - C8926) * C18322 +
            (C9341 - C9342 + C9343 - C9344) * C28003) *
               C28071 +
           ((C4660 - C4661 + C4662 - C4663) * C18321 +
            (C5012 - C5013 + C5014 - C5015) * C18219 +
            (C7631 - C7632 + C7633 - C7634) * C18322 +
            (C8061 - C8062 + C8063 - C8064) * C28003) *
               C27887) *
              C28119 * C28120 * C81 +
          (((C4661 - C4660 + C4663 - C4662) * C18321 +
            (C5013 - C5012 + C5015 - C5014) * C18219 +
            (C7632 - C7631 + C7634 - C7633) * C18322 +
            (C8062 - C8061 + C8064 - C8063) * C28003) *
               C28071 +
           ((C4669 - C4668 + C4671 - C4670) * C18321 +
            (C5017 - C5016 + C5019 - C5018) * C18219 +
            (C4657 * C938 - C28084 * C989 + C4658 * C5619 - C27977 * C5673) *
                C18322 +
            (C4657 * C1191 - C28084 * C1233 + C4658 * C5931 - C27977 * C5983) *
                C28003) *
               C27887) *
              C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eezz[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C18321 * C203 - C18647 * C91 - C18321 * C409 + C18219 * C499 +
             C18322 * C1029 - C18648 * C940 - C18322 * C1189 + C28003 * C1272) *
                C28084 +
            (C20572 + C20573) * C27977) *
               C28071 +
           ((C18674 + C18675) * C28084 + (C22658 + C22659) * C27977) * C27887) *
              C28119 * C28120 * C81 -
          (((C18322 * C5725 - C18648 * C5619 - C18322 * C5931 + C28003 * C6034 +
             C18321 * C659 - C18647 * C566 - C18321 * C819 + C18219 * C898) *
                C27977 +
            (C18677 + C18676) * C28084) *
               C27887 +
           ((C22659 + C22658) * C27977 + (C18675 + C18674) * C28084) * C28071) *
              C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eexx[31] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C26731 * C96 - C13474 * C91 - C26731 * C97 + C28071 * C106 +
             C26724 * C98 - C13476 * C92 - C26724 * C99 + C27887 * C107) *
                C18219 +
            (C16196 + C16197) * C28003) *
               C28084 +
           ((C14000 + C14001) * C18219 + (C15576 + C15577) * C28003) * C27977) *
              C28119 * C562 -
          (((C26724 * C2468 - C13476 * C2464 - C26724 * C2469 + C27887 * C2476 +
             C26731 * C2470 - C13474 * C2465 - C26731 * C2471 +
             C28071 * C2477) *
                C28003 +
            (C14003 + C14002) * C18219) *
               C27977 +
           ((C15577 + C15576) * C28003 + (C14001 + C14000) * C18219) * C28084) *
              C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eexy[31] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28084 * C146 - C4657 * C91 + C27977 * C615 - C4658 * C568) *
                C26731 +
            (C28084 * C151 - C4657 * C97 + C27977 * C619 - C4658 * C576) *
                C28071 +
            (C4660 - C4661 + C4662 - C4663) * C26724 +
            (C4664 - C4665 + C4666 - C4667) * C27887) *
               C18219 +
           ((C8923 - C8924 + C8925 - C8926) * C26731 +
            (C8927 - C8928 + C8929 - C8930) * C28071 +
            (C7631 - C7632 + C7633 - C7634) * C26724 +
            (C7635 - C7636 + C7637 - C7638) * C27887) *
               C28003) *
              C28119 * C562 +
          (((C4657 * C568 - C28084 * C615 + C4658 * C1332 - C27977 * C1397) *
                C26731 +
            (C4657 * C576 - C28084 * C619 + C4658 * C1336 - C27977 * C1400) *
                C28071 +
            (C4657 * C567 - C28084 * C616 + C4658 * C1333 - C27977 * C1398) *
                C26724 +
            (C4657 * C574 - C28084 * C620 + C4658 * C1338 - C27977 * C1401) *
                C27887) *
               C18219 +
           ((C4657 * C2467 - C28084 * C2530 + C4658 * C2465 - C27977 * C2531) *
                C26731 +
            (C4657 * C2475 - C28084 * C2534 + C4658 * C2471 - C27977 * C2535) *
                C28071 +
            (C4657 * C2466 - C28084 * C2532 + C4658 * C2464 - C27977 * C2533) *
                C26724 +
            (C4657 * C2473 - C28084 * C2536 + C4658 * C2469 - C27977 * C2537) *
                C27887) *
               C28003) *
              C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eexz[31] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C18219 * C203 - C18321 * C91 + C28003 * C1029 - C18322 * C940) *
                C26731 +
            (C18219 * C208 - C18321 * C97 + C28003 * C1033 - C18322 * C948) *
                C28071 +
            (C18324 - C18325 + C18326 - C18327) * C26724 +
            (C18328 - C18329 + C18330 - C18331) * C27887) *
               C28084 +
           ((C20224 - C20225 + C20226 - C20227) * C26731 +
            (C20228 - C20229 + C20230 - C20231) * C28071 +
            (C22238 - C22239 + C22240 - C22241) * C26724 +
            (C22242 - C22243 + C22244 - C22245) * C27887) *
               C27977) *
              C28119 * C562 +
          (((C20225 - C20224 + C20227 - C20226) * C26731 +
            (C20229 - C20228 + C20231 - C20230) * C28071 +
            (C22239 - C22238 + C22241 - C22240) * C26724 +
            (C22243 - C22242 + C22245 - C22244) * C27887) *
               C28084 +
           ((C20233 - C20232 + C20235 - C20234) * C26731 +
            (C20237 - C20236 + C20239 - C20238) * C28071 +
            (C18321 * C1333 - C18219 * C1466 + C18322 * C2464 -
             C28003 * C2591) *
                C26724 +
            (C18321 * C1338 - C18219 * C1469 + C18322 * C2469 -
             C28003 * C2595) *
                C27887) *
               C27977) *
              C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eeyx[31] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28071 * C96 - C26731 * C91 + C27887 * C98 - C26724 * C92) *
                C4657 +
            (C28071 * C264 - C26731 * C259 + C27887 * C265 - C26724 * C260) *
                C28084 +
            (C14154 - C14155 + C14156 - C14157) * C4658 +
            (C14158 - C14159 + C14160 - C14161) * C27977) *
               C18219 +
           ((C16396 - C16397 + C16398 - C16399) * C4657 +
            (C16400 - C16401 + C16402 - C16403) * C28084 +
            (C15776 - C15777 + C15778 - C15779) * C4658 +
            (C15780 - C15781 + C15782 - C15783) * C27977) *
               C28003) *
              C28119 * C562 +
          (((C14155 - C14154 + C14157 - C14156) * C4657 +
            (C14159 - C14158 + C14161 - C14160) * C28084 +
            (C14163 - C14162 + C14165 - C14164) * C4658 +
            (C14167 - C14166 + C14169 - C14168) * C27977) *
               C18219 +
           ((C15777 - C15776 + C15779 - C15778) * C4657 +
            (C15781 - C15780 + C15783 - C15782) * C28084 +
            (C26731 * C2465 - C28071 * C2470 + C26724 * C2464 -
             C27887 * C2468) *
                C4658 +
            (C26731 * C2648 - C28071 * C2652 + C26724 * C2649 -
             C27887 * C2653) *
                C27977) *
               C28003) *
              C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eeyy[31] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4657 * C146 - C4829 * C91 - C4657 * C259 + C28084 * C304 +
             C4658 * C615 - C4830 * C568 - C4658 * C699 + C27977 * C744) *
                C28071 +
            (C4856 + C4857) * C27887) *
               C18219 +
           ((C9141 + C9142) * C28071 + (C7857 + C7858) * C27887) * C28003) *
              C28119 * C562 -
          (((C4658 * C2533 - C4830 * C2464 - C4658 * C2649 + C27977 * C2704 +
             C4657 * C2532 - C4829 * C2466 - C4657 * C2647 + C28084 * C2705) *
                C27887 +
            (C4658 * C2531 - C4830 * C2465 - C4658 * C2648 + C27977 * C2706 +
             C4657 * C2530 - C4829 * C2467 - C4657 * C2646 + C28084 * C2707) *
                C28071) *
               C28003 +
           ((C4658 * C1398 - C4830 * C1333 - C4658 * C1530 + C27977 * C1589 +
             C4657 * C616 - C4829 * C567 - C4657 * C700 + C28084 * C743) *
                C27887 +
            (C4658 * C1397 - C4830 * C1332 - C4658 * C1529 + C27977 * C1588 +
             C4657 * C615 - C4829 * C568 - C4657 * C699 + C28084 * C744) *
                C28071) *
               C18219) *
              C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eeyz[31] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C18219 * C203 - C18321 * C91 + C28003 * C1029 - C18322 * C940) *
                C4657 +
            (C18219 * C364 - C18321 * C259 + C28003 * C1151 - C18322 * C1071) *
                C28084 +
            (C20224 - C20225 + C20226 - C20227) * C4658 +
            (C20390 - C20391 + C20392 - C20393) * C27977) *
               C28071 +
           ((C18324 - C18325 + C18326 - C18327) * C4657 +
            (C18490 - C18491 + C18492 - C18493) * C28084 +
            (C22238 - C22239 + C22240 - C22241) * C4658 +
            (C22444 - C22445 + C22446 - C22447) * C27977) *
               C27887) *
              C28119 * C562 +
          (((C20225 - C20224 + C20227 - C20226) * C4657 +
            (C20391 - C20390 + C20393 - C20392) * C28084 +
            (C20233 - C20232 + C20235 - C20234) * C4658 +
            (C20395 - C20394 + C20397 - C20396) * C27977) *
               C28071 +
           ((C22239 - C22238 + C22241 - C22240) * C4657 +
            (C22445 - C22444 + C22447 - C22446) * C28084 +
            (C18321 * C1333 - C18219 * C1466 + C18322 * C2464 -
             C28003 * C2591) *
                C4658 +
            (C18321 * C1530 - C18219 * C1663 + C18322 * C2649 -
             C28003 * C2761) *
                C27977) *
               C27887) *
              C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eezx[31] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28071 * C96 - C26731 * C91 + C27887 * C98 - C26724 * C92) *
                C18321 +
            (C28071 * C414 - C26731 * C409 + C27887 * C415 - C26724 * C410) *
                C18219 +
            (C16396 - C16397 + C16398 - C16399) * C18322 +
            (C16602 - C16603 + C16604 - C16605) * C28003) *
               C28084 +
           ((C14154 - C14155 + C14156 - C14157) * C18321 +
            (C14320 - C14321 + C14322 - C14323) * C18219 +
            (C15776 - C15777 + C15778 - C15779) * C18322 +
            (C15982 - C15983 + C15984 - C15985) * C28003) *
               C27977) *
              C28119 * C562 +
          (((C14155 - C14154 + C14157 - C14156) * C18321 +
            (C14321 - C14320 + C14323 - C14322) * C18219 +
            (C15777 - C15776 + C15779 - C15778) * C18322 +
            (C15983 - C15982 + C15985 - C15984) * C28003) *
               C28084 +
           ((C14163 - C14162 + C14165 - C14164) * C18321 +
            (C14325 - C14324 + C14327 - C14326) * C18219 +
            (C26731 * C2465 - C28071 * C2470 + C26724 * C2464 -
             C27887 * C2468) *
                C18322 +
            (C26731 * C2814 - C28071 * C2818 + C26724 * C2815 -
             C27887 * C2819) *
                C28003) *
               C27977) *
              C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eezy[31] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28084 * C146 - C4657 * C91 + C27977 * C615 - C4658 * C568) *
                C18321 +
            (C28084 * C453 - C4657 * C409 + C27977 * C859 - C4658 * C817) *
                C18219 +
            (C8923 - C8924 + C8925 - C8926) * C18322 +
            (C9341 - C9342 + C9343 - C9344) * C28003) *
               C28071 +
           ((C4660 - C4661 + C4662 - C4663) * C18321 +
            (C5012 - C5013 + C5014 - C5015) * C18219 +
            (C7631 - C7632 + C7633 - C7634) * C18322 +
            (C8061 - C8062 + C8063 - C8064) * C28003) *
               C27887) *
              C28119 * C562 +
          (((C4657 * C568 - C28084 * C615 + C4658 * C1332 - C27977 * C1397) *
                C18321 +
            (C4657 * C817 - C28084 * C859 + C4658 * C1719 - C27977 * C1775) *
                C18219 +
            (C4657 * C2467 - C28084 * C2530 + C4658 * C2465 - C27977 * C2531) *
                C18322 +
            (C4657 * C2812 - C28084 * C2870 + C4658 * C2814 - C27977 * C2871) *
                C28003) *
               C28071 +
           ((C4657 * C567 - C28084 * C616 + C4658 * C1333 - C27977 * C1398) *
                C18321 +
            (C4657 * C818 - C28084 * C860 + C4658 * C1720 - C27977 * C1776) *
                C18219 +
            (C4657 * C2466 - C28084 * C2532 + C4658 * C2464 - C27977 * C2533) *
                C18322 +
            (C4657 * C2813 - C28084 * C2872 + C4658 * C2815 - C27977 * C2873) *
                C28003) *
               C27887) *
              C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eezz[31] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C18321 * C203 - C18647 * C91 - C18321 * C409 + C18219 * C499 +
             C18322 * C1029 - C18648 * C940 - C18322 * C1189 + C28003 * C1272) *
                C28084 +
            (C20572 + C20573) * C27977) *
               C28071 +
           ((C18674 + C18675) * C28084 + (C22658 + C22659) * C27977) * C27887) *
              C28119 * C562 -
          (((C18322 * C2591 - C18648 * C2464 - C18322 * C2815 + C28003 * C2924 +
             C18321 * C1466 - C18647 * C1333 - C18321 * C1720 +
             C18219 * C1835) *
                C27977 +
            (C22659 + C22658) * C28084) *
               C27887 +
           ((C20575 + C20574) * C27977 + (C20573 + C20572) * C28084) * C28071) *
              C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eexx[32] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C26731 * C96 - C13474 * C91 - C26731 * C97 + C28071 * C106 +
             C26724 * C98 - C13476 * C92 - C26724 * C99 + C27887 * C107) *
                C18219 +
            (C16196 + C16197) * C28003) *
               C28084 +
           ((C14000 + C14001) * C18219 + (C15576 + C15577) * C28003) * C27977) *
              C935 -
          (((C26724 * C3552 - C13476 * C3550 - C26724 * C3553 + C27887 * C3556 +
             C26731 * C3554 - C13474 * C3551 - C26731 * C3555 +
             C28071 * C3557) *
                C28003 +
            (C15577 + C15576) * C18219) *
               C27977 +
           ((C26724 * C2986 - C13476 * C2982 - C26724 * C2987 + C27887 * C2991 +
             C26731 * C2984 - C13474 * C2981 - C26731 * C2985 +
             C28071 * C2990) *
                C28003 +
            (C16197 + C16196) * C18219) *
               C28084) *
              C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eexy[32] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28084 * C146 - C4657 * C91 + C27977 * C615 - C4658 * C568) *
                C26731 +
            (C28084 * C151 - C4657 * C97 + C27977 * C619 - C4658 * C576) *
                C28071 +
            (C4660 - C4661 + C4662 - C4663) * C26724 +
            (C4664 - C4665 + C4666 - C4667) * C27887) *
               C18219 +
           ((C8923 - C8924 + C8925 - C8926) * C26731 +
            (C8927 - C8928 + C8929 - C8930) * C28071 +
            (C7631 - C7632 + C7633 - C7634) * C26724 +
            (C7635 - C7636 + C7637 - C7638) * C27887) *
               C28003) *
              C935 +
          (((C8924 - C8923 + C8926 - C8925) * C26731 +
            (C8928 - C8927 + C8930 - C8929) * C28071 +
            (C7632 - C7631 + C7634 - C7633) * C26724 +
            (C7636 - C7635 + C7638 - C7637) * C27887) *
               C18219 +
           ((C4657 * C2981 - C28084 * C3043 + C4658 * C3551 - C27977 * C3608) *
                C26731 +
            (C4657 * C2985 - C28084 * C3046 + C4658 * C3555 - C27977 * C3610) *
                C28071 +
            (C4657 * C2982 - C28084 * C3044 + C4658 * C3550 - C27977 * C3609) *
                C26724 +
            (C4657 * C2987 - C28084 * C3047 + C4658 * C3553 - C27977 * C3611) *
                C27887) *
               C28003) *
              C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eexz[32] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C18219 * C203 - C18321 * C91 + C28003 * C1029 - C18322 * C940) *
                C26731 +
            (C18219 * C208 - C18321 * C97 + C28003 * C1033 - C18322 * C948) *
                C28071 +
            (C18324 - C18325 + C18326 - C18327) * C26724 +
            (C18328 - C18329 + C18330 - C18331) * C27887) *
               C28084 +
           ((C20224 - C20225 + C20226 - C20227) * C26731 +
            (C20228 - C20229 + C20230 - C20231) * C28071 +
            (C22238 - C22239 + C22240 - C22241) * C26724 +
            (C22242 - C22243 + C22244 - C22245) * C27887) *
               C27977) *
              C935 +
          (((C18321 * C940 - C18219 * C1029 + C18322 * C2981 - C28003 * C3110) *
                C26731 +
            (C18321 * C948 - C18219 * C1033 + C18322 * C2985 - C28003 * C3113) *
                C28071 +
            (C18321 * C939 - C18219 * C1030 + C18322 * C2982 - C28003 * C3111) *
                C26724 +
            (C18321 * C946 - C18219 * C1034 + C18322 * C2987 - C28003 * C3114) *
                C27887) *
               C28084 +
           ((C18321 * C2467 - C18219 * C2588 + C18322 * C3551 -
             C28003 * C3662) *
                C26731 +
            (C18321 * C2475 - C18219 * C2592 + C18322 * C3555 -
             C28003 * C3664) *
                C28071 +
            (C18321 * C2466 - C18219 * C2589 + C18322 * C3550 -
             C28003 * C3663) *
                C26724 +
            (C18321 * C2473 - C18219 * C2593 + C18322 * C3553 -
             C28003 * C3665) *
                C27887) *
               C27977) *
              C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eeyx[32] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28071 * C96 - C26731 * C91 + C27887 * C98 - C26724 * C92) *
                C4657 +
            (C28071 * C264 - C26731 * C259 + C27887 * C265 - C26724 * C260) *
                C28084 +
            (C14154 - C14155 + C14156 - C14157) * C4658 +
            (C14158 - C14159 + C14160 - C14161) * C27977) *
               C18219 +
           ((C16396 - C16397 + C16398 - C16399) * C4657 +
            (C16400 - C16401 + C16402 - C16403) * C28084 +
            (C15776 - C15777 + C15778 - C15779) * C4658 +
            (C15780 - C15781 + C15782 - C15783) * C27977) *
               C28003) *
              C935 +
          (((C16397 - C16396 + C16399 - C16398) * C4657 +
            (C16401 - C16400 + C16403 - C16402) * C28084 +
            (C15777 - C15776 + C15779 - C15778) * C4658 +
            (C15781 - C15780 + C15783 - C15782) * C27977) *
               C18219 +
           ((C26731 * C2981 - C28071 * C2984 + C26724 * C2982 -
             C27887 * C2986) *
                C4657 +
            (C26731 * C3178 - C28071 * C3181 + C26724 * C3179 -
             C27887 * C3182) *
                C28084 +
            (C26731 * C3551 - C28071 * C3554 + C26724 * C3550 -
             C27887 * C3552) *
                C4658 +
            (C26731 * C3716 - C28071 * C3718 + C26724 * C3717 -
             C27887 * C3719) *
                C27977) *
               C28003) *
              C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eeyy[32] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4657 * C146 - C4829 * C91 - C4657 * C259 + C28084 * C304 +
             C4658 * C615 - C4830 * C568 - C4658 * C699 + C27977 * C744) *
                C28071 +
            (C4856 + C4857) * C27887) *
               C18219 +
           ((C9141 + C9142) * C28071 + (C7857 + C7858) * C27887) * C28003) *
              C935 -
          (((C4658 * C3609 - C4830 * C3550 - C4658 * C3717 + C27977 * C3770 +
             C4657 * C3044 - C4829 * C2982 - C4657 * C3179 + C28084 * C3235) *
                C27887 +
            (C4658 * C3608 - C4830 * C3551 - C4658 * C3716 + C27977 * C3771 +
             C4657 * C3043 - C4829 * C2981 - C4657 * C3178 + C28084 * C3234) *
                C28071) *
               C28003 +
           ((C7858 + C7857) * C27887 + (C9142 + C9141) * C28071) * C18219) *
              C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eeyz[32] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C18219 * C203 - C18321 * C91 + C28003 * C1029 - C18322 * C940) *
                C4657 +
            (C18219 * C364 - C18321 * C259 + C28003 * C1151 - C18322 * C1071) *
                C28084 +
            (C20224 - C20225 + C20226 - C20227) * C4658 +
            (C20390 - C20391 + C20392 - C20393) * C27977) *
               C28071 +
           ((C18324 - C18325 + C18326 - C18327) * C4657 +
            (C18490 - C18491 + C18492 - C18493) * C28084 +
            (C22238 - C22239 + C22240 - C22241) * C4658 +
            (C22444 - C22445 + C22446 - C22447) * C27977) *
               C27887) *
              C935 +
          (((C18321 * C940 - C18219 * C1029 + C18322 * C2981 - C28003 * C3110) *
                C4657 +
            (C18321 * C1071 - C18219 * C1151 + C18322 * C3178 -
             C28003 * C3301) *
                C28084 +
            (C18321 * C2467 - C18219 * C2588 + C18322 * C3551 -
             C28003 * C3662) *
                C4658 +
            (C18321 * C2646 - C18219 * C2758 + C18322 * C3716 -
             C28003 * C3822) *
                C27977) *
               C28071 +
           ((C18321 * C939 - C18219 * C1030 + C18322 * C2982 - C28003 * C3111) *
                C4657 +
            (C18321 * C1072 - C18219 * C1152 + C18322 * C3179 -
             C28003 * C3302) *
                C28084 +
            (C18321 * C2466 - C18219 * C2589 + C18322 * C3550 -
             C28003 * C3663) *
                C4658 +
            (C18321 * C2647 - C18219 * C2760 + C18322 * C3717 -
             C28003 * C3823) *
                C27977) *
               C27887) *
              C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eezx[32] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28071 * C96 - C26731 * C91 + C27887 * C98 - C26724 * C92) *
                C18321 +
            (C28071 * C414 - C26731 * C409 + C27887 * C415 - C26724 * C410) *
                C18219 +
            (C16396 - C16397 + C16398 - C16399) * C18322 +
            (C16602 - C16603 + C16604 - C16605) * C28003) *
               C28084 +
           ((C14154 - C14155 + C14156 - C14157) * C18321 +
            (C14320 - C14321 + C14322 - C14323) * C18219 +
            (C15776 - C15777 + C15778 - C15779) * C18322 +
            (C15982 - C15983 + C15984 - C15985) * C28003) *
               C27977) *
              C935 +
          (((C16397 - C16396 + C16399 - C16398) * C18321 +
            (C16603 - C16602 + C16605 - C16604) * C18219 +
            (C26731 * C2981 - C28071 * C2984 + C26724 * C2982 -
             C27887 * C2986) *
                C18322 +
            (C26731 * C3360 - C28071 * C3363 + C26724 * C3361 -
             C27887 * C3364) *
                C28003) *
               C28084 +
           ((C15777 - C15776 + C15779 - C15778) * C18321 +
            (C15983 - C15982 + C15985 - C15984) * C18219 +
            (C26731 * C3551 - C28071 * C3554 + C26724 * C3550 -
             C27887 * C3552) *
                C18322 +
            (C26731 * C3874 - C28071 * C3876 + C26724 * C3875 -
             C27887 * C3877) *
                C28003) *
               C27977) *
              C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eezy[32] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28084 * C146 - C4657 * C91 + C27977 * C615 - C4658 * C568) *
                C18321 +
            (C28084 * C453 - C4657 * C409 + C27977 * C859 - C4658 * C817) *
                C18219 +
            (C8923 - C8924 + C8925 - C8926) * C18322 +
            (C9341 - C9342 + C9343 - C9344) * C28003) *
               C28071 +
           ((C4660 - C4661 + C4662 - C4663) * C18321 +
            (C5012 - C5013 + C5014 - C5015) * C18219 +
            (C7631 - C7632 + C7633 - C7634) * C18322 +
            (C8061 - C8062 + C8063 - C8064) * C28003) *
               C27887) *
              C935 +
          (((C8924 - C8923 + C8926 - C8925) * C18321 +
            (C9342 - C9341 + C9344 - C9343) * C18219 +
            (C4657 * C2981 - C28084 * C3043 + C4658 * C3551 - C27977 * C3608) *
                C18322 +
            (C4657 * C3360 - C28084 * C3416 + C4658 * C3874 - C27977 * C3928) *
                C28003) *
               C28071 +
           ((C7632 - C7631 + C7634 - C7633) * C18321 +
            (C8062 - C8061 + C8064 - C8063) * C18219 +
            (C4657 * C2982 - C28084 * C3044 + C4658 * C3550 - C27977 * C3609) *
                C18322 +
            (C4657 * C3361 - C28084 * C3417 + C4658 * C3875 - C27977 * C3929) *
                C28003) *
               C27887) *
              C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eezz[32] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C18321 * C203 - C18647 * C91 - C18321 * C409 + C18219 * C499 +
             C18322 * C1029 - C18648 * C940 - C18322 * C1189 + C28003 * C1272) *
                C28084 +
            (C20572 + C20573) * C27977) *
               C28071 +
           ((C18674 + C18675) * C28084 + (C22658 + C22659) * C27977) * C27887) *
              C935 -
          (((C18322 * C3663 - C18648 * C3550 - C18322 * C3875 + C28003 * C3980 +
             C18321 * C2589 - C18647 * C2466 - C18321 * C2813 +
             C18219 * C2925) *
                C27977 +
            (C18322 * C3111 - C18648 * C2982 - C18322 * C3361 + C28003 * C3477 +
             C18321 * C1030 - C18647 * C939 - C18321 * C1190 + C18219 * C1271) *
                C28084) *
               C27887 +
           ((C18322 * C3662 - C18648 * C3551 - C18322 * C3874 + C28003 * C3981 +
             C18321 * C2588 - C18647 * C2467 - C18321 * C2812 +
             C18219 * C2927) *
                C27977 +
            (C18322 * C3110 - C18648 * C2981 - C18322 * C3360 + C28003 * C3476 +
             C18321 * C1029 - C18647 * C940 - C18321 * C1189 + C18219 * C1272) *
                C28084) *
               C28071) *
              C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eexx[33] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C10909 * C96 - C10910 * C91 - C10909 * C97 + C27882 * C106) *
                C28114 +
            C12941 * C28115 + C12942 * C23899) *
               C28084 +
           (C11248 * C28114 + C12408 * C28115 + C12409 * C23899) * C27977) *
              C28119 * C28120 * C81 -
          (((C10909 * C3552 - C10910 * C3550 - C10909 * C3553 +
             C27882 * C3556) *
                C23899 +
            (C10909 * C2472 - C10910 * C2466 - C10909 * C2473 +
             C27882 * C2478) *
                C28115 +
            (C10909 * C573 - C10910 * C567 - C10909 * C574 + C27882 * C579) *
                C28114) *
               C27977 +
           ((C10909 * C2986 - C10910 * C2982 - C10909 * C2987 +
             C27882 * C2991) *
                C23899 +
            (C10909 * C945 - C10910 * C939 - C10909 * C946 + C27882 * C951) *
                C28115 +
            (C10909 * C98 - C10910 * C92 - C10909 * C99 + C27882 * C107) *
                C28114) *
               C28084) *
              C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eexy[33] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28084 * C146 - C4657 * C91 + C27977 * C615 - C4658 * C568) *
                C10909 +
            (C28084 * C151 - C4657 * C97 + C27977 * C619 - C4658 * C576) *
                C27882) *
               C28114 +
           ((C8923 - C8924 + C8925 - C8926) * C10909 +
            (C8927 - C8928 + C8929 - C8930) * C27882) *
               C28115 +
           ((C28084 * C3043 - C4657 * C2981 + C27977 * C3608 - C4658 * C3551) *
                C10909 +
            (C28084 * C3046 - C4657 * C2985 + C27977 * C3610 - C4658 * C3555) *
                C27882) *
               C23899) *
              C28119 * C28120 * C81 +
          (((C4661 - C4660 + C4663 - C4662) * C10909 +
            (C4665 - C4664 + C4667 - C4666) * C27882) *
               C28114 +
           ((C7632 - C7631 + C7634 - C7633) * C10909 +
            (C7636 - C7635 + C7638 - C7637) * C27882) *
               C28115 +
           ((C4657 * C2982 - C28084 * C3044 + C4658 * C3550 - C27977 * C3609) *
                C10909 +
            (C4657 * C2987 - C28084 * C3047 + C4658 * C3553 - C27977 * C3611) *
                C27882) *
               C23899) *
              C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eexz[33] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28114 * C203 - C24000 * C91 + C28115 * C1029 - C24001 * C940 +
             C23899 * C3110 - C24002 * C2981) *
                C10909 +
            (C28114 * C208 - C24000 * C97 + C28115 * C1033 - C24001 * C948 +
             C23899 * C3113 - C24002 * C2985) *
                C27882) *
               C28084 +
           ((C28114 * C657 - C24000 * C568 + C28115 * C2588 - C24001 * C2467 +
             C23899 * C3662 - C24002 * C3551) *
                C10909 +
            (C28114 * C661 - C24000 * C576 + C28115 * C2592 - C24001 * C2475 +
             C23899 * C3664 - C24002 * C3555) *
                C27882) *
               C27977) *
              C28119 * C28120 * C81 +
          (((C24005 - C24004 + C24007 - C24006 + C24009 - C24008) * C10909 +
            (C24011 - C24010 + C24013 - C24012 + C24015 - C24014) * C27882) *
               C28084 +
           ((C24000 * C567 - C28114 * C658 + C24001 * C2466 - C28115 * C2589 +
             C24002 * C3550 - C23899 * C3663) *
                C10909 +
            (C24000 * C574 - C28114 * C662 + C24001 * C2473 - C28115 * C2593 +
             C24002 * C3553 - C23899 * C3665) *
                C27882) *
               C27977) *
              C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[33] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C27882 * C96 - C10909 * C91) * C4657 +
                      (C27882 * C264 - C10909 * C259) * C28084 +
                      (C11366 - C11367) * C4658 + (C11368 - C11369) * C27977) *
                         C28114 +
                     ((C13115 - C13116) * C4657 + (C13117 - C13118) * C28084 +
                      (C12580 - C12581) * C4658 + (C12582 - C12583) * C27977) *
                         C28115 +
                     ((C13119 - C13120) * C4657 + (C13121 - C13122) * C28084 +
                      (C12584 - C12585) * C4658 + (C12586 - C12587) * C27977) *
                         C23899) *
                        C28119 * C28120 * C81 +
                    (((C10909 * C92 - C27882 * C98) * C4657 +
                      (C10909 * C260 - C27882 * C265) * C28084 +
                      (C10909 * C567 - C27882 * C573) * C4658 +
                      (C10909 * C700 - C27882 * C704) * C27977) *
                         C28114 +
                     ((C10909 * C939 - C27882 * C945) * C4657 +
                      (C10909 * C1072 - C27882 * C1076) * C28084 +
                      (C10909 * C2466 - C27882 * C2472) * C4658 +
                      (C10909 * C2647 - C27882 * C2651) * C27977) *
                         C28115 +
                     ((C10909 * C2982 - C27882 * C2986) * C4657 +
                      (C10909 * C3179 - C27882 * C3182) * C28084 +
                      (C10909 * C3550 - C27882 * C3552) * C4658 +
                      (C10909 * C3717 - C27882 * C3719) * C27977) *
                         C23899) *
                        C28119 * C28120 * C82)) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[33] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C4657 * C146 - C4829 * C91 - C4657 * C259 + C28084 * C304 +
            C4658 * C615 - C4830 * C568 - C4658 * C699 + C27977 * C744) *
               C27882 * C28114 +
           (C9141 + C9142) * C27882 * C28115 +
           (C4657 * C3043 - C4829 * C2981 - C4657 * C3178 + C28084 * C3234 +
            C4658 * C3608 - C4830 * C3551 - C4658 * C3716 + C27977 * C3771) *
               C27882 * C23899) *
              C28119 * C28120 * C81 -
          ((C4658 * C3609 - C4830 * C3550 - C4658 * C3717 + C27977 * C3770 +
            C4657 * C3044 - C4829 * C2982 - C4657 * C3179 + C28084 * C3235) *
               C27882 * C23899 +
           (C7858 + C7857) * C27882 * C28115 +
           (C4857 + C4856) * C27882 * C28114) *
              C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[33] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C28114 * C203 - C24000 * C91 + C28115 * C1029 - C24001 * C940 +
            C23899 * C3110 - C24002 * C2981) *
               C4657 +
           (C28114 * C364 - C24000 * C259 + C28115 * C1151 - C24001 * C1071 +
            C23899 * C3301 - C24002 * C3178) *
               C28084 +
           (C28114 * C657 - C24000 * C568 + C28115 * C2588 - C24001 * C2467 +
            C23899 * C3662 - C24002 * C3551) *
               C4658 +
           (C28114 * C779 - C24000 * C699 + C28115 * C2758 - C24001 * C2646 +
            C23899 * C3822 - C24002 * C3716) *
               C27977) *
              C27882 * C28119 * C28120 * C81 +
          ((C24005 - C24004 + C24007 - C24006 + C24009 - C24008) * C4657 +
           (C24167 - C24166 + C24169 - C24168 + C24171 - C24170) * C28084 +
           (C24000 * C567 - C28114 * C658 + C24001 * C2466 - C28115 * C2589 +
            C24002 * C3550 - C23899 * C3663) *
               C4658 +
           (C24000 * C700 - C28114 * C780 + C24001 * C2647 - C28115 * C2760 +
            C24002 * C3717 - C23899 * C3823) *
               C27977) *
              C27882 * C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eezx[33] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C27882 * C96 - C10909 * C91) * C24000 +
                      (C27882 * C414 - C10909 * C409) * C28114 +
                      (C13115 - C13116) * C24001 + (C13305 - C13306) * C28115 +
                      (C13119 - C13120) * C24002 + (C13307 - C13308) * C23899) *
                         C28084 +
                     ((C11366 - C11367) * C24000 + (C11486 - C11487) * C28114 +
                      (C12580 - C12581) * C24001 + (C12748 - C12749) * C28115 +
                      (C12584 - C12585) * C24002 + (C12750 - C12751) * C23899) *
                         C27977) *
                        C28119 * C28120 * C81 +
                    (((C10909 * C92 - C27882 * C98) * C24000 +
                      (C10909 * C410 - C27882 * C415) * C28114 +
                      (C10909 * C939 - C27882 * C945) * C24001 +
                      (C10909 * C1190 - C27882 * C1194) * C28115 +
                      (C10909 * C2982 - C27882 * C2986) * C24002 +
                      (C10909 * C3361 - C27882 * C3364) * C23899) *
                         C28084 +
                     ((C10909 * C567 - C27882 * C573) * C24000 +
                      (C10909 * C818 - C27882 * C822) * C28114 +
                      (C10909 * C2466 - C27882 * C2472) * C24001 +
                      (C10909 * C2813 - C27882 * C2817) * C28115 +
                      (C10909 * C3550 - C27882 * C3552) * C24002 +
                      (C10909 * C3875 - C27882 * C3877) * C23899) *
                         C27977) *
                        C28119 * C28120 * C82)) /
                  (p * q * std::sqrt(p + q));
    d2eezy[33] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C28084 * C146 - C4657 * C91 + C27977 * C615 - C4658 * C568) *
               C24000 +
           (C28084 * C453 - C4657 * C409 + C27977 * C859 - C4658 * C817) *
               C28114 +
           (C8923 - C8924 + C8925 - C8926) * C24001 +
           (C9341 - C9342 + C9343 - C9344) * C28115 +
           (C28084 * C3043 - C4657 * C2981 + C27977 * C3608 - C4658 * C3551) *
               C24002 +
           (C28084 * C3416 - C4657 * C3360 + C27977 * C3928 - C4658 * C3874) *
               C23899) *
              C27882 * C28119 * C28120 * C81 +
          ((C4661 - C4660 + C4663 - C4662) * C24000 +
           (C5013 - C5012 + C5015 - C5014) * C28114 +
           (C7632 - C7631 + C7634 - C7633) * C24001 +
           (C8062 - C8061 + C8064 - C8063) * C28115 +
           (C4657 * C2982 - C28084 * C3044 + C4658 * C3550 - C27977 * C3609) *
               C24002 +
           (C4657 * C3361 - C28084 * C3417 + C4658 * C3875 - C27977 * C3929) *
               C23899) *
              C27882 * C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eezz[33] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C24000 * C203 - C24321 * C91 - C24000 * C409 + C28114 * C499 +
            C24001 * C1029 - C24322 * C940 - C24001 * C1189 + C28115 * C1272 +
            C24002 * C3110 - C24323 * C2981 - C24002 * C3360 + C23899 * C3476) *
               C28084 +
           (C24000 * C657 - C24321 * C568 - C24000 * C817 + C28114 * C900 +
            C24001 * C2588 - C24322 * C2467 - C24001 * C2812 + C28115 * C2927 +
            C24002 * C3662 - C24323 * C3551 - C24002 * C3874 + C23899 * C3981) *
               C27977) *
              C27882 * C28119 * C28120 * C81 -
          ((C24002 * C3663 - C24323 * C3550 - C24002 * C3875 + C23899 * C3980 +
            C24001 * C2589 - C24322 * C2466 - C24001 * C2813 + C28115 * C2925 +
            C24000 * C658 - C24321 * C567 - C24000 * C818 + C28114 * C899) *
               C27977 +
           (C24345 + C24344 + C24343) * C28084) *
              C27882 * C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eexx[34] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C10909 * C96 - C10910 * C91 - C10909 * C97 + C27882 * C106) *
                C28114 +
            C12941 * C28115 + C12942 * C23899) *
               C28084 +
           (C25776 + C25777 + C25778) * C27977) *
              C28119 * C562 -
          (((C10909 * C12391 - C10910 * C12390 - C10909 * C12392 +
             C27882 * C12393) *
                C23899 +
            C17247 * C28115 + C11249 * C28114) *
               C27977 +
           (C25778 + C25777 + C25776) * C28084) *
              C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eexy[34] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28084 * C146 - C4657 * C91 + C27977 * C615 - C4658 * C568) *
                C10909 +
            (C28084 * C151 - C4657 * C97 + C27977 * C619 - C4658 * C576) *
                C27882) *
               C28114 +
           ((C8923 - C8924 + C8925 - C8926) * C10909 +
            (C8927 - C8928 + C8929 - C8930) * C27882) *
               C28115 +
           ((C28084 * C3043 - C4657 * C2981 + C27977 * C3608 - C4658 * C3551) *
                C10909 +
            (C28084 * C3046 - C4657 * C2985 + C27977 * C3610 - C4658 * C3555) *
                C27882) *
               C23899) *
              C28119 * C562 +
          (((C4657 * C568 - C28084 * C615 + C4658 * C1332 - C27977 * C1397) *
                C10909 +
            (C4657 * C576 - C28084 * C619 + C4658 * C1336 - C27977 * C1400) *
                C27882) *
               C28114 +
           ((C4657 * C2467 - C28084 * C2530 + C4658 * C2465 - C27977 * C2531) *
                C10909 +
            (C4657 * C2475 - C28084 * C2534 + C4658 * C2471 - C27977 * C2535) *
                C27882) *
               C28115 +
           ((C4657 * C3551 - C28084 * C3608 + C4658 * C12390 -
             C27977 * C12461) *
                C10909 +
            (C4657 * C3555 - C28084 * C3610 + C4658 * C12392 -
             C27977 * C12462) *
                C27882) *
               C23899) *
              C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eexz[34] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28114 * C203 - C24000 * C91 + C28115 * C1029 - C24001 * C940 +
             C23899 * C3110 - C24002 * C2981) *
                C10909 +
            (C28114 * C208 - C24000 * C97 + C28115 * C1033 - C24001 * C948 +
             C23899 * C3113 - C24002 * C2985) *
                C27882) *
               C28084 +
           ((C25879 - C25880 + C25881 - C25882 + C25883 - C25884) * C10909 +
            (C25885 - C25886 + C25887 - C25888 + C25889 - C25890) * C27882) *
               C27977) *
              C28119 * C562 +
          (((C25880 - C25879 + C25882 - C25881 + C25884 - C25883) * C10909 +
            (C25886 - C25885 + C25888 - C25887 + C25890 - C25889) * C27882) *
               C28084 +
           ((C24000 * C1332 - C28114 * C1465 + C24001 * C2465 - C28115 * C2590 +
             C24002 * C12390 - C23899 * C12513) *
                C10909 +
            (C24000 * C1336 - C28114 * C1468 + C24001 * C2471 - C28115 * C2594 +
             C24002 * C12392 - C23899 * C12514) *
                C27882) *
               C27977) *
              C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eeyx[34] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C27882 * C96 - C10909 * C91) * C4657 +
                      (C27882 * C264 - C10909 * C259) * C28084 +
                      (C11366 - C11367) * C4658 + (C11368 - C11369) * C27977) *
                         C28114 +
                     ((C13115 - C13116) * C4657 + (C13117 - C13118) * C28084 +
                      (C12580 - C12581) * C4658 + (C12582 - C12583) * C27977) *
                         C28115 +
                     ((C13119 - C13120) * C4657 + (C13121 - C13122) * C28084 +
                      (C12584 - C12585) * C4658 + (C12586 - C12587) * C27977) *
                         C23899) *
                        C28119 * C562 +
                    (((C11367 - C11366) * C4657 + (C11369 - C11368) * C28084 +
                      (C11371 - C11370) * C4658 + (C11373 - C11372) * C27977) *
                         C28114 +
                     ((C12581 - C12580) * C4657 + (C12583 - C12582) * C28084 +
                      (C17408 - C17407) * C4658 + (C17410 - C17409) * C27977) *
                         C28115 +
                     ((C12585 - C12584) * C4657 + (C12587 - C12586) * C28084 +
                      (C10909 * C12390 - C27882 * C12391) * C4658 +
                      (C10909 * C12577 - C27882 * C12578) * C27977) *
                         C23899) *
                        C28119 * C563) *
                   C28121) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[34] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C4657 * C146 - C4829 * C91 - C4657 * C259 + C28084 * C304 +
            C4658 * C615 - C4830 * C568 - C4658 * C699 + C27977 * C744) *
               C27882 * C28114 +
           (C9141 + C9142) * C27882 * C28115 +
           (C4657 * C3043 - C4829 * C2981 - C4657 * C3178 + C28084 * C3234 +
            C4658 * C3608 - C4830 * C3551 - C4658 * C3716 + C27977 * C3771) *
               C27882 * C23899) *
              C28119 * C562 -
          ((C4658 * C12461 - C4830 * C12390 - C4658 * C12577 + C27977 * C12637 +
            C4657 * C3608 - C4829 * C3551 - C4657 * C3716 + C28084 * C3771) *
               C27882 * C23899 +
           (C4658 * C2531 - C4830 * C2465 - C4658 * C2648 + C27977 * C2706 +
            C4657 * C2530 - C4829 * C2467 - C4657 * C2646 + C28084 * C2707) *
               C27882 * C28115 +
           (C4658 * C1397 - C4830 * C1332 - C4658 * C1529 + C27977 * C1588 +
            C4657 * C615 - C4829 * C568 - C4657 * C699 + C28084 * C744) *
               C27882 * C28114) *
              C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eeyz[34] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C28114 * C203 - C24000 * C91 + C28115 * C1029 - C24001 * C940 +
            C23899 * C3110 - C24002 * C2981) *
               C4657 +
           (C28114 * C364 - C24000 * C259 + C28115 * C1151 - C24001 * C1071 +
            C23899 * C3301 - C24002 * C3178) *
               C28084 +
           (C25879 - C25880 + C25881 - C25882 + C25883 - C25884) * C4658 +
           (C26041 - C26042 + C26043 - C26044 + C26045 - C26046) * C27977) *
              C27882 * C28119 * C562 +
          ((C25880 - C25879 + C25882 - C25881 + C25884 - C25883) * C4657 +
           (C26042 - C26041 + C26044 - C26043 + C26046 - C26045) * C28084 +
           (C24000 * C1332 - C28114 * C1465 + C24001 * C2465 - C28115 * C2590 +
            C24002 * C12390 - C23899 * C12513) *
               C4658 +
           (C24000 * C1529 - C28114 * C1662 + C24001 * C2648 - C28115 * C2759 +
            C24002 * C12577 - C23899 * C12688) *
               C27977) *
              C27882 * C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eezx[34] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C27882 * C96 - C10909 * C91) * C24000 +
                      (C27882 * C414 - C10909 * C409) * C28114 +
                      (C13115 - C13116) * C24001 + (C13305 - C13306) * C28115 +
                      (C13119 - C13120) * C24002 + (C13307 - C13308) * C23899) *
                         C28084 +
                     ((C11366 - C11367) * C24000 + (C11486 - C11487) * C28114 +
                      (C12580 - C12581) * C24001 + (C12748 - C12749) * C28115 +
                      (C12584 - C12585) * C24002 + (C12750 - C12751) * C23899) *
                         C27977) *
                        C28119 * C562 +
                    (((C11367 - C11366) * C24000 + (C11487 - C11486) * C28114 +
                      (C12581 - C12580) * C24001 + (C12749 - C12748) * C28115 +
                      (C12585 - C12584) * C24002 + (C12751 - C12750) * C23899) *
                         C28084 +
                     ((C11371 - C11370) * C24000 + (C11489 - C11488) * C28114 +
                      (C17408 - C17407) * C24001 + (C17566 - C17565) * C28115 +
                      (C10909 * C12390 - C27882 * C12391) * C24002 +
                      (C10909 * C12745 - C27882 * C12746) * C23899) *
                         C27977) *
                        C28119 * C563) *
                   C28121) /
                  (p * q * std::sqrt(p + q));
    d2eezy[34] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C28084 * C146 - C4657 * C91 + C27977 * C615 - C4658 * C568) *
               C24000 +
           (C28084 * C453 - C4657 * C409 + C27977 * C859 - C4658 * C817) *
               C28114 +
           (C8923 - C8924 + C8925 - C8926) * C24001 +
           (C9341 - C9342 + C9343 - C9344) * C28115 +
           (C28084 * C3043 - C4657 * C2981 + C27977 * C3608 - C4658 * C3551) *
               C24002 +
           (C28084 * C3416 - C4657 * C3360 + C27977 * C3928 - C4658 * C3874) *
               C23899) *
              C27882 * C28119 * C562 +
          ((C4657 * C568 - C28084 * C615 + C4658 * C1332 - C27977 * C1397) *
               C24000 +
           (C4657 * C817 - C28084 * C859 + C4658 * C1719 - C27977 * C1775) *
               C28114 +
           (C4657 * C2467 - C28084 * C2530 + C4658 * C2465 - C27977 * C2531) *
               C24001 +
           (C4657 * C2812 - C28084 * C2870 + C4658 * C2814 - C27977 * C2871) *
               C28115 +
           (C4657 * C3551 - C28084 * C3608 + C4658 * C12390 - C27977 * C12461) *
               C24002 +
           (C4657 * C3874 - C28084 * C3928 + C4658 * C12745 - C27977 * C12801) *
               C23899) *
              C27882 * C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eezz[34] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C24000 * C203 - C24321 * C91 - C24000 * C409 + C28114 * C499 +
            C24001 * C1029 - C24322 * C940 - C24001 * C1189 + C28115 * C1272 +
            C24002 * C3110 - C24323 * C2981 - C24002 * C3360 + C23899 * C3476) *
               C28084 +
           (C26215 + C26216 + C26217) * C27977) *
              C27882 * C28119 * C562 -
          ((C24002 * C12513 - C24323 * C12390 - C24002 * C12745 +
            C23899 * C12852 + C24001 * C2590 - C24322 * C2465 - C24001 * C2814 +
            C28115 * C2926 + C24000 * C1465 - C24321 * C1332 - C24000 * C1719 +
            C28114 * C1834) *
               C27977 +
           (C26217 + C26216 + C26215) * C28084) *
              C27882 * C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eexx[35] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C10909 * C96 - C10910 * C91 - C10909 * C97 + C27882 * C106) *
                C28114 +
            C12941 * C28115 + C12942 * C23899) *
               C28084 +
           (C25776 + C25777 + C25778) * C27977) *
              C935 -
          (((C10909 * C12925 - C10910 * C12924 - C10909 * C12926 +
             C27882 * C12927) *
                C23899 +
            C12409 * C28115 + C12408 * C28114) *
               C27977 +
           (C21733 * C23899 + C12942 * C28115 + C12941 * C28114) * C28084) *
              C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eexy[35] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28084 * C146 - C4657 * C91 + C27977 * C615 - C4658 * C568) *
                C10909 +
            (C28084 * C151 - C4657 * C97 + C27977 * C619 - C4658 * C576) *
                C27882) *
               C28114 +
           ((C8923 - C8924 + C8925 - C8926) * C10909 +
            (C8927 - C8928 + C8929 - C8930) * C27882) *
               C28115 +
           ((C26318 - C26319 + C26320 - C26321) * C10909 +
            (C26322 - C26323 + C26324 - C26325) * C27882) *
               C23899) *
              C935 +
          (((C8924 - C8923 + C8926 - C8925) * C10909 +
            (C8928 - C8927 + C8930 - C8929) * C27882) *
               C28114 +
           ((C26319 - C26318 + C26321 - C26320) * C10909 +
            (C26323 - C26322 + C26325 - C26324) * C27882) *
               C28115 +
           ((C4657 * C4033 - C28084 * C4118 + C4658 * C12924 -
             C27977 * C12992) *
                C10909 +
            (C4657 * C4037 - C28084 * C4120 + C4658 * C12926 -
             C27977 * C12993) *
                C27882) *
               C23899) *
              C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eexz[35] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28114 * C203 - C24000 * C91 + C28115 * C1029 - C24001 * C940 +
             C23899 * C3110 - C24002 * C2981) *
                C10909 +
            (C28114 * C208 - C24000 * C97 + C28115 * C1033 - C24001 * C948 +
             C23899 * C3113 - C24002 * C2985) *
                C27882) *
               C28084 +
           ((C25879 - C25880 + C25881 - C25882 + C25883 - C25884) * C10909 +
            (C25885 - C25886 + C25887 - C25888 + C25889 - C25890) * C27882) *
               C27977) *
              C935 +
          (((C24000 * C940 - C28114 * C1029 + C24001 * C2981 - C28115 * C3110 +
             C24002 * C4033 - C23899 * C4180) *
                C10909 +
            (C24000 * C948 - C28114 * C1033 + C24001 * C2985 - C28115 * C3113 +
             C24002 * C4037 - C23899 * C4182) *
                C27882) *
               C28084 +
           ((C24000 * C2467 - C28114 * C2588 + C24001 * C3551 - C28115 * C3662 +
             C24002 * C12924 - C23899 * C13060) *
                C10909 +
            (C24000 * C2475 - C28114 * C2592 + C24001 * C3555 - C28115 * C3664 +
             C24002 * C12926 - C23899 * C13061) *
                C27882) *
               C27977) *
              C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eeyx[35] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C27882 * C96 - C10909 * C91) * C4657 +
                      (C27882 * C264 - C10909 * C259) * C28084 +
                      (C11366 - C11367) * C4658 + (C11368 - C11369) * C27977) *
                         C28114 +
                     ((C13115 - C13116) * C4657 + (C13117 - C13118) * C28084 +
                      (C12580 - C12581) * C4658 + (C12582 - C12583) * C27977) *
                         C28115 +
                     ((C13119 - C13120) * C4657 + (C13121 - C13122) * C28084 +
                      (C12584 - C12585) * C4658 + (C12586 - C12587) * C27977) *
                         C23899) *
                        C935 +
                    (((C13116 - C13115) * C4657 + (C13118 - C13117) * C28084 +
                      (C12581 - C12580) * C4658 + (C12583 - C12582) * C27977) *
                         C28114 +
                     ((C13120 - C13119) * C4657 + (C13122 - C13121) * C28084 +
                      (C12585 - C12584) * C4658 + (C12587 - C12586) * C27977) *
                         C28115 +
                     ((C21847 - C21846) * C4657 + (C21849 - C21848) * C28084 +
                      (C10909 * C12924 - C27882 * C12925) * C4658 +
                      (C10909 * C13112 - C27882 * C13113) * C27977) *
                         C23899) *
                        C936) *
                   C28120 * C28121) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[35] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C4657 * C146 - C4829 * C91 - C4657 * C259 + C28084 * C304 +
            C4658 * C615 - C4830 * C568 - C4658 * C699 + C27977 * C744) *
               C27882 * C28114 +
           (C9141 + C9142) * C27882 * C28115 +
           (C26488 + C26489) * C27882 * C23899) *
              C935 -
          ((C4658 * C12992 - C4830 * C12924 - C4658 * C13112 + C27977 * C13172 +
            C4657 * C4118 - C4829 * C4033 - C4657 * C4234 + C28084 * C4305) *
               C27882 * C23899 +
           (C26489 + C26488) * C27882 * C28115 +
           (C9142 + C9141) * C27882 * C28114) *
              C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eeyz[35] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C28114 * C203 - C24000 * C91 + C28115 * C1029 - C24001 * C940 +
            C23899 * C3110 - C24002 * C2981) *
               C4657 +
           (C28114 * C364 - C24000 * C259 + C28115 * C1151 - C24001 * C1071 +
            C23899 * C3301 - C24002 * C3178) *
               C28084 +
           (C25879 - C25880 + C25881 - C25882 + C25883 - C25884) * C4658 +
           (C26041 - C26042 + C26043 - C26044 + C26045 - C26046) * C27977) *
              C27882 * C935 +
          ((C24000 * C940 - C28114 * C1029 + C24001 * C2981 - C28115 * C3110 +
            C24002 * C4033 - C23899 * C4180) *
               C4657 +
           (C24000 * C1071 - C28114 * C1151 + C24001 * C3178 - C28115 * C3301 +
            C24002 * C4234 - C23899 * C4374) *
               C28084 +
           (C24000 * C2467 - C28114 * C2588 + C24001 * C3551 - C28115 * C3662 +
            C24002 * C12924 - C23899 * C13060) *
               C4658 +
           (C24000 * C2646 - C28114 * C2758 + C24001 * C3716 - C28115 * C3822 +
            C24002 * C13112 - C23899 * C13251) *
               C27977) *
              C27882 * C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eezx[35] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C27882 * C96 - C10909 * C91) * C24000 +
                      (C27882 * C414 - C10909 * C409) * C28114 +
                      (C13115 - C13116) * C24001 + (C13305 - C13306) * C28115 +
                      (C13119 - C13120) * C24002 + (C13307 - C13308) * C23899) *
                         C28084 +
                     ((C11366 - C11367) * C24000 + (C11486 - C11487) * C28114 +
                      (C12580 - C12581) * C24001 + (C12748 - C12749) * C28115 +
                      (C12584 - C12585) * C24002 + (C12750 - C12751) * C23899) *
                         C27977) *
                        C935 +
                    (((C13116 - C13115) * C24000 + (C13306 - C13305) * C28114 +
                      (C13120 - C13119) * C24001 + (C13308 - C13307) * C28115 +
                      (C21847 - C21846) * C24002 + (C21967 - C21966) * C23899) *
                         C28084 +
                     ((C12581 - C12580) * C24000 + (C12749 - C12748) * C28114 +
                      (C12585 - C12584) * C24001 + (C12751 - C12750) * C28115 +
                      (C10909 * C12924 - C27882 * C12925) * C24002 +
                      (C10909 * C13302 - C27882 * C13303) * C23899) *
                         C27977) *
                        C936) *
                   C28120 * C28121) /
                  (p * q * std::sqrt(p + q));
    d2eezy[35] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C28084 * C146 - C4657 * C91 + C27977 * C615 - C4658 * C568) *
               C24000 +
           (C28084 * C453 - C4657 * C409 + C27977 * C859 - C4658 * C817) *
               C28114 +
           (C8923 - C8924 + C8925 - C8926) * C24001 +
           (C9341 - C9342 + C9343 - C9344) * C28115 +
           (C26318 - C26319 + C26320 - C26321) * C24002 +
           (C26640 - C26641 + C26642 - C26643) * C23899) *
              C27882 * C935 +
          ((C8924 - C8923 + C8926 - C8925) * C24000 +
           (C9342 - C9341 + C9344 - C9343) * C28114 +
           (C26319 - C26318 + C26321 - C26320) * C24001 +
           (C26641 - C26640 + C26643 - C26642) * C28115 +
           (C4657 * C4033 - C28084 * C4118 + C4658 * C12924 - C27977 * C12992) *
               C24002 +
           (C4657 * C4426 - C28084 * C4488 + C4658 * C13302 - C27977 * C13358) *
               C23899) *
              C27882 * C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eezz[35] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C24000 * C203 - C24321 * C91 - C24000 * C409 + C28114 * C499 +
            C24001 * C1029 - C24322 * C940 - C24001 * C1189 + C28115 * C1272 +
            C24002 * C3110 - C24323 * C2981 - C24002 * C3360 + C23899 * C3476) *
               C28084 +
           (C26215 + C26216 + C26217) * C27977) *
              C27882 * C935 -
          ((C24002 * C13060 - C24323 * C12924 - C24002 * C13302 +
            C23899 * C13417 + C24001 * C3662 - C24322 * C3551 - C24001 * C3874 +
            C28115 * C3981 + C24000 * C2588 - C24321 * C2467 - C24000 * C2812 +
            C28114 * C2927) *
               C27977 +
           (C24002 * C4180 - C24323 * C4033 - C24002 * C4426 + C23899 * C4545 +
            C24001 * C3110 - C24322 * C2981 - C24001 * C3360 + C28115 * C3476 +
            C24000 * C1029 - C24321 * C940 - C24000 * C1189 + C28114 * C1272) *
               C28084) *
              C27882 * C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eexx[36] +=
        (-std::pow(Pi, 2.5) *
         ((((C10909 * C96 - C10910 * C91 - C10909 * C97 + C27882 * C106) *
                C18219 +
            C12941 * C28003) *
               C1325 +
           (C11248 * C18219 + C12408 * C28003) * C1326 +
           (C11249 * C18219 + C17247 * C28003) * C1327) *
              C28119 * C28120 * C81 -
          (((C10909 * C2468 - C10910 * C2464 - C10909 * C2469 +
             C27882 * C2476) *
                C28003 +
            (C10909 * C1337 - C10910 * C1333 - C10909 * C1338 +
             C27882 * C1342) *
                C18219) *
               C1327 +
           ((C10909 * C2472 - C10910 * C2466 - C10909 * C2473 +
             C27882 * C2478) *
                C28003 +
            (C10909 * C573 - C10910 * C567 - C10909 * C574 + C27882 * C579) *
                C18219) *
               C1326 +
           ((C10909 * C945 - C10910 * C939 - C10909 * C946 + C27882 * C951) *
                C28003 +
            (C10909 * C98 - C10910 * C92 - C10909 * C99 + C27882 * C107) *
                C18219) *
               C1325) *
              C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C9465 * C96 - C9466 * C91 - C9465 * C97 + C9460 * C106 +
            C9467 * C98 - C9468 * C92 - C9467 * C99 + C9461 * C107 +
            C9469 * C100 - C9470 * C93 - C9469 * C101 + C9462 * C108) *
               C18219 +
           (C9465 * C947 - C9466 * C940 - C9465 * C948 + C9460 * C952 +
            C9467 * C945 - C9468 * C939 - C9467 * C946 + C9461 * C951 +
            C9469 * C943 - C9470 * C938 - C9469 * C944 + C9462 * C950) *
               C28003) *
              C27928 * C28119 * C28120 * C81 -
          ((C9469 * C941 - C9470 * C937 - C9469 * C942 + C9462 * C949 +
            C9467 * C943 - C9468 * C938 - C9467 * C944 + C9461 * C950 +
            C9465 * C945 - C9466 * C939 - C9465 * C946 + C9460 * C951) *
               C28003 +
           (C9469 * C102 - C9470 * C94 - C9469 * C103 + C9462 * C109 +
            C9467 * C100 - C9468 * C93 - C9467 * C101 + C9461 * C108 +
            C9465 * C98 - C9466 * C92 - C9465 * C99 + C9460 * C107) *
               C18219) *
              C27928 * C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C10909 * C96 - C10910 * C91 - C10909 * C97 + C27882 * C106) *
               C21098 +
           C12941 * C21099 + C12942 * C21100 +
           (C10909 * C4036 - C10910 * C4033 - C10909 * C4037 + C27882 * C4039) *
               C21101) *
              C27928 * C28119 * C28120 * C81 -
          ((C10909 * C4034 - C10910 * C4032 - C10909 * C4035 + C27882 * C4038) *
               C21101 +
           (C10909 * C2986 - C10910 * C2982 - C10909 * C2987 + C27882 * C2991) *
               C21100 +
           (C10909 * C945 - C10910 * C939 - C10909 * C946 + C27882 * C951) *
               C21099 +
           (C10909 * C98 - C10910 * C92 - C10909 * C99 + C27882 * C107) *
               C21098) *
              C27928 * C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eexy[36] +=
        (-std::pow(Pi, 2.5) *
         ((((C1325 * C146 - C1394 * C91 + C1326 * C615 - C1395 * C568 +
             C1327 * C1397 - C1396 * C1332) *
                C10909 +
            (C1325 * C151 - C1394 * C97 + C1326 * C619 - C1395 * C576 +
             C1327 * C1400 - C1396 * C1336) *
                C27882) *
               C18219 +
           ((C1325 * C987 - C1394 * C940 + C1326 * C2530 - C1395 * C2467 +
             C1327 * C2531 - C1396 * C2465) *
                C10909 +
            (C1325 * C991 - C1394 * C948 + C1326 * C2534 - C1395 * C2475 +
             C1327 * C2535 - C1396 * C2471) *
                C27882) *
               C28003) *
              C28119 * C28120 * C81 +
          (((C1405 - C1404 + C1407 - C1406 + C1409 - C1408) * C10909 +
            (C1411 - C1410 + C1413 - C1412 + C1415 - C1414) * C27882) *
               C18219 +
           ((C1394 * C939 - C1325 * C988 + C1395 * C2466 - C1326 * C2532 +
             C1396 * C2464 - C1327 * C2533) *
                C10909 +
            (C1394 * C946 - C1325 * C992 + C1395 * C2473 - C1326 * C2536 +
             C1396 * C2469 - C1327 * C2537) *
                C27882) *
               C28003) *
              C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C27928 * C146 - C145 * C91) * C9465 +
            (C27928 * C151 - C145 * C97) * C9460 + (C157 - C158) * C9467 +
            (C159 - C160) * C9461 + (C161 - C162) * C9469 +
            (C163 - C164) * C9462) *
               C18219 +
           ((C4123 - C4124) * C9465 + (C4125 - C4126) * C9460 +
            (C3050 - C3051) * C9467 + (C3052 - C3053) * C9461 +
            (C6138 - C6139) * C9469 + (C6140 - C6141) * C9462) *
               C28003) *
              C28119 * C28120 * C81 +
          (((C158 - C157) * C9465 + (C160 - C159) * C9460 +
            (C162 - C161) * C9467 + (C164 - C163) * C9461 +
            (C166 - C165) * C9469 + (C168 - C167) * C9462) *
               C18219 +
           ((C3051 - C3050) * C9465 + (C3053 - C3052) * C9460 +
            (C6139 - C6138) * C9467 + (C6141 - C6140) * C9461 +
            (C145 * C937 - C27928 * C990) * C9469 +
            (C145 * C942 - C27928 * C994) * C9462) *
               C28003) *
              C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C27928 * C146 - C145 * C91) * C10909 +
            (C27928 * C151 - C145 * C97) * C27882) *
               C21098 +
           ((C4123 - C4124) * C10909 + (C4125 - C4126) * C27882) * C21099 +
           ((C4127 - C4128) * C10909 + (C4129 - C4130) * C27882) * C21100 +
           ((C27928 * C4118 - C145 * C4033) * C10909 +
            (C27928 * C4120 - C145 * C4037) * C27882) *
               C21101) *
              C28119 * C28120 * C81 +
          (((C158 - C157) * C10909 + (C160 - C159) * C27882) * C21098 +
           ((C3051 - C3050) * C10909 + (C3053 - C3052) * C27882) * C21099 +
           ((C3055 - C3054) * C10909 + (C3057 - C3056) * C27882) * C21100 +
           ((C145 * C4032 - C27928 * C4119) * C10909 +
            (C145 * C4035 - C27928 * C4121) * C27882) *
               C21101) *
              C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eexz[36] +=
        (-std::pow(Pi, 2.5) *
         ((((C18219 * C203 - C18321 * C91 + C28003 * C1029 - C18322 * C940) *
                C10909 +
            (C18219 * C208 - C18321 * C97 + C28003 * C1033 - C18322 * C948) *
                C27882) *
               C1325 +
           ((C18219 * C657 - C18321 * C568 + C28003 * C2588 - C18322 * C2467) *
                C10909 +
            (C18219 * C661 - C18321 * C576 + C28003 * C2592 - C18322 * C2475) *
                C27882) *
               C1326 +
           ((C18219 * C1465 - C18321 * C1332 + C28003 * C2590 -
             C18322 * C2465) *
                C10909 +
            (C18219 * C1468 - C18321 * C1336 + C28003 * C2594 -
             C18322 * C2471) *
                C27882) *
               C1327) *
              C28119 * C28120 * C81 +
          (((C18325 - C18324 + C18327 - C18326) * C10909 +
            (C18329 - C18328 + C18331 - C18330) * C27882) *
               C1325 +
           ((C18321 * C567 - C18219 * C658 + C18322 * C2466 - C28003 * C2589) *
                C10909 +
            (C18321 * C574 - C18219 * C662 + C18322 * C2473 - C28003 * C2593) *
                C27882) *
               C1326 +
           ((C18321 * C1333 - C18219 * C1466 + C18322 * C2464 -
             C28003 * C2591) *
                C10909 +
            (C18321 * C1338 - C18219 * C1469 + C18322 * C2469 -
             C28003 * C2595) *
                C27882) *
               C1327) *
              C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C18219 * C203 - C18321 * C91 + C28003 * C1029 - C18322 * C940) *
               C9465 +
           (C18219 * C208 - C18321 * C97 + C28003 * C1033 - C18322 * C948) *
               C9460 +
           (C18324 - C18325 + C18326 - C18327) * C9467 +
           (C18328 - C18329 + C18330 - C18331) * C9461 +
           (C18332 - C18333 + C18334 - C18335) * C9469 +
           (C18336 - C18337 + C18338 - C18339) * C9462) *
              C27928 * C28119 * C28120 * C81 +
          ((C18325 - C18324 + C18327 - C18326) * C9465 +
           (C18329 - C18328 + C18331 - C18330) * C9460 +
           (C18333 - C18332 + C18335 - C18334) * C9467 +
           (C18337 - C18336 + C18339 - C18338) * C9461 +
           (C18321 * C94 - C18219 * C206 + C18322 * C937 - C28003 * C1032) *
               C9469 +
           (C18321 * C103 - C18219 * C211 + C18322 * C942 - C28003 * C1036) *
               C9462) *
              C27928 * C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C21098 * C203 - C21170 * C91 + C21099 * C1029 - C21171 * C940 +
            C21100 * C3110 - C21172 * C2981 + C21101 * C4180 - C21173 * C4033) *
               C10909 +
           (C21098 * C208 - C21170 * C97 + C21099 * C1033 - C21171 * C948 +
            C21100 * C3113 - C21172 * C2985 + C21101 * C4182 - C21173 * C4037) *
               C27882) *
              C27928 * C28119 * C28120 * C81 +
          ((C21170 * C92 - C21098 * C204 + C21171 * C939 - C21099 * C1030 +
            C21172 * C2982 - C21100 * C3111 + C21173 * C4032 - C21101 * C4181) *
               C10909 +
           (C21170 * C99 - C21098 * C209 + C21171 * C946 - C21099 * C1034 +
            C21172 * C2987 - C21100 * C3114 + C21173 * C4035 - C21101 * C4183) *
               C27882) *
              C27928 * C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[36] +=
        (-std::pow(Pi, 2.5) *
         ((((C27882 * C96 - C10909 * C91) * C1394 +
            (C27882 * C264 - C10909 * C259) * C1325 +
            (C11366 - C11367) * C1395 + (C11368 - C11369) * C1326 +
            (C11370 - C11371) * C1396 + (C11372 - C11373) * C1327) *
               C18219 +
           ((C13115 - C13116) * C1394 + (C13117 - C13118) * C1325 +
            (C12580 - C12581) * C1395 + (C12582 - C12583) * C1326 +
            (C17407 - C17408) * C1396 + (C17409 - C17410) * C1327) *
               C28003) *
              C28119 * C28120 * C81 +
          (((C10909 * C92 - C27882 * C98) * C1394 +
            (C10909 * C260 - C27882 * C265) * C1325 +
            (C10909 * C567 - C27882 * C573) * C1395 +
            (C10909 * C700 - C27882 * C704) * C1326 +
            (C10909 * C1333 - C27882 * C1337) * C1396 +
            (C10909 * C1530 - C27882 * C1533) * C1327) *
               C18219 +
           ((C10909 * C939 - C27882 * C945) * C1394 +
            (C10909 * C1072 - C27882 * C1076) * C1325 +
            (C10909 * C2466 - C27882 * C2472) * C1395 +
            (C10909 * C2647 - C27882 * C2651) * C1326 +
            (C10909 * C2464 - C27882 * C2468) * C1396 +
            (C10909 * C2649 - C27882 * C2653) * C1327) *
               C28003) *
              C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C9460 * C96 - C9465 * C91 + C9461 * C98 - C9467 * C92 +
             C9462 * C100 - C9469 * C93) *
                C145 +
            (C9460 * C264 - C9465 * C259 + C9461 * C265 - C9467 * C260 +
             C9462 * C266 - C9469 * C261) *
                C27928) *
               C18219 +
           ((C9460 * C947 - C9465 * C940 + C9461 * C945 - C9467 * C939 +
             C9462 * C943 - C9469 * C938) *
                C145 +
            (C9460 * C1075 - C9465 * C1071 + C9461 * C1076 - C9467 * C1072 +
             C9462 * C1077 - C9469 * C1073) *
                C27928) *
               C28003) *
              C28119 * C28120 * C81 +
          (((C9465 * C92 - C9460 * C98 + C9467 * C93 - C9461 * C100 +
             C9469 * C94 - C9462 * C102) *
                C145 +
            (C9465 * C260 - C9460 * C265 + C9467 * C261 - C9461 * C266 +
             C9469 * C262 - C9462 * C267) *
                C27928) *
               C18219 +
           ((C9465 * C939 - C9460 * C945 + C9467 * C938 - C9461 * C943 +
             C9469 * C937 - C9462 * C941) *
                C145 +
            (C9465 * C1072 - C9460 * C1076 + C9467 * C1073 - C9461 * C1077 +
             C9469 * C1074 - C9462 * C1078) *
                C27928) *
               C28003) *
              C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C27882 * C96 - C10909 * C91) * C145 +
            (C27882 * C264 - C10909 * C259) * C27928) *
               C21098 +
           ((C13115 - C13116) * C145 + (C13117 - C13118) * C27928) * C21099 +
           ((C13119 - C13120) * C145 + (C13121 - C13122) * C27928) * C21100 +
           ((C27882 * C4036 - C10909 * C4033) * C145 +
            (C27882 * C4236 - C10909 * C4234) * C27928) *
               C21101) *
              C28119 * C28120 * C81 +
          (((C10909 * C92 - C27882 * C98) * C145 +
            (C10909 * C260 - C27882 * C265) * C27928) *
               C21098 +
           ((C10909 * C939 - C27882 * C945) * C145 +
            (C10909 * C1072 - C27882 * C1076) * C27928) *
               C21099 +
           ((C10909 * C2982 - C27882 * C2986) * C145 +
            (C10909 * C3179 - C27882 * C3182) * C27928) *
               C21100 +
           ((C10909 * C4032 - C27882 * C4034) * C145 +
            (C10909 * C4235 - C27882 * C4237) * C27928) *
               C21101) *
              C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[36] +=
        (-std::pow(Pi, 2.5) *
         (((C1394 * C146 - C1585 * C91 - C1394 * C259 + C1325 * C304 +
            C1395 * C615 - C1586 * C568 - C1395 * C699 + C1326 * C744 +
            C1396 * C1397 - C1587 * C1332 - C1396 * C1529 + C1327 * C1588) *
               C27882 * C18219 +
           (C1394 * C987 - C1585 * C940 - C1394 * C1071 + C1325 * C1116 +
            C1395 * C2530 - C1586 * C2467 - C1395 * C2646 + C1326 * C2707 +
            C1396 * C2531 - C1587 * C2465 - C1396 * C2648 + C1327 * C2706) *
               C27882 * C28003) *
              C28119 * C28120 * C81 -
          ((C1396 * C2533 - C1587 * C2464 - C1396 * C2649 + C1327 * C2704 +
            C1395 * C2532 - C1586 * C2466 - C1395 * C2647 + C1326 * C2705 +
            C1394 * C988 - C1585 * C939 - C1394 * C1072 + C1325 * C1115) *
               C27882 * C28003 +
           (C1612 + C1611 + C1610) * C27882 * C18219) *
              C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C145 * C146 - C303 * C91 - C145 * C259 + C27928 * C304) * C9460 +
            C328 * C9461 + C329 * C9462) *
               C18219 +
           (C4321 * C9460 + C3250 * C9461 + C6316 * C9462) * C28003) *
              C28119 * C28120 * C81 -
          (((C145 * C990 - C303 * C937 - C145 * C1074 + C27928 * C1113) *
                C9462 +
            C6316 * C9461 + C3250 * C9460) *
               C28003 +
           (C330 * C9462 + C329 * C9461 + C328 * C9460) * C18219) *
              C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C145 * C146 - C303 * C91 - C145 * C259 + C27928 * C304) * C27882 *
               C21098 +
           C4321 * C27882 * C21099 + C4322 * C27882 * C21100 +
           (C145 * C4118 - C303 * C4033 - C145 * C4234 + C27928 * C4305) *
               C27882 * C21101) *
              C28119 * C28120 * C81 -
          ((C145 * C4119 - C303 * C4032 - C145 * C4235 + C27928 * C4304) *
               C27882 * C21101 +
           C3251 * C27882 * C21100 + C3250 * C27882 * C21099 +
           C328 * C27882 * C21098) *
              C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[36] +=
        (-std::pow(Pi, 2.5) *
         (((C18219 * C203 - C18321 * C91 + C28003 * C1029 - C18322 * C940) *
               C1394 +
           (C18219 * C364 - C18321 * C259 + C28003 * C1151 - C18322 * C1071) *
               C1325 +
           (C18219 * C657 - C18321 * C568 + C28003 * C2588 - C18322 * C2467) *
               C1395 +
           (C18219 * C779 - C18321 * C699 + C28003 * C2758 - C18322 * C2646) *
               C1326 +
           (C18219 * C1465 - C18321 * C1332 + C28003 * C2590 - C18322 * C2465) *
               C1396 +
           (C18219 * C1662 - C18321 * C1529 + C28003 * C2759 - C18322 * C2648) *
               C1327) *
              C27882 * C28119 * C28120 * C81 +
          ((C18325 - C18324 + C18327 - C18326) * C1394 +
           (C18491 - C18490 + C18493 - C18492) * C1325 +
           (C18321 * C567 - C18219 * C658 + C18322 * C2466 - C28003 * C2589) *
               C1395 +
           (C18321 * C700 - C18219 * C780 + C18322 * C2647 - C28003 * C2760) *
               C1326 +
           (C18321 * C1333 - C18219 * C1466 + C18322 * C2464 - C28003 * C2591) *
               C1396 +
           (C18321 * C1530 - C18219 * C1663 + C18322 * C2649 - C28003 * C2761) *
               C1327) *
              C27882 * C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C18219 * C203 - C18321 * C91 + C28003 * C1029 - C18322 * C940) *
                C145 +
            (C18219 * C364 - C18321 * C259 + C28003 * C1151 - C18322 * C1071) *
                C27928) *
               C9460 +
           ((C18324 - C18325 + C18326 - C18327) * C145 +
            (C18490 - C18491 + C18492 - C18493) * C27928) *
               C9461 +
           ((C18332 - C18333 + C18334 - C18335) * C145 +
            (C18494 - C18495 + C18496 - C18497) * C27928) *
               C9462) *
              C28119 * C28120 * C81 +
          (((C18325 - C18324 + C18327 - C18326) * C145 +
            (C18491 - C18490 + C18493 - C18492) * C27928) *
               C9460 +
           ((C18333 - C18332 + C18335 - C18334) * C145 +
            (C18495 - C18494 + C18497 - C18496) * C27928) *
               C9461 +
           ((C18321 * C94 - C18219 * C206 + C18322 * C937 - C28003 * C1032) *
                C145 +
            (C18321 * C262 - C18219 * C367 + C18322 * C1074 - C28003 * C1154) *
                C27928) *
               C9462) *
              C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C21098 * C203 - C21170 * C91 + C21099 * C1029 - C21171 * C940 +
            C21100 * C3110 - C21172 * C2981 + C21101 * C4180 - C21173 * C4033) *
               C145 +
           (C21098 * C364 - C21170 * C259 + C21099 * C1151 - C21171 * C1071 +
            C21100 * C3301 - C21172 * C3178 + C21101 * C4374 - C21173 * C4234) *
               C27928) *
              C27882 * C28119 * C28120 * C81 +
          ((C21170 * C92 - C21098 * C204 + C21171 * C939 - C21099 * C1030 +
            C21172 * C2982 - C21100 * C3111 + C21173 * C4032 - C21101 * C4181) *
               C145 +
           (C21170 * C260 - C21098 * C365 + C21171 * C1072 - C21099 * C1152 +
            C21172 * C3179 - C21100 * C3302 + C21173 * C4235 - C21101 * C4375) *
               C27928) *
              C27882 * C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eezx[36] +=
        (-std::pow(Pi, 2.5) *
         ((((C27882 * C96 - C10909 * C91) * C18321 +
            (C27882 * C414 - C10909 * C409) * C18219 +
            (C13115 - C13116) * C18322 + (C13305 - C13306) * C28003) *
               C1325 +
           ((C11366 - C11367) * C18321 + (C11486 - C11487) * C18219 +
            (C12580 - C12581) * C18322 + (C12748 - C12749) * C28003) *
               C1326 +
           ((C11370 - C11371) * C18321 + (C11488 - C11489) * C18219 +
            (C17407 - C17408) * C18322 + (C17565 - C17566) * C28003) *
               C1327) *
              C28119 * C28120 * C81 +
          (((C10909 * C92 - C27882 * C98) * C18321 +
            (C10909 * C410 - C27882 * C415) * C18219 +
            (C10909 * C939 - C27882 * C945) * C18322 +
            (C10909 * C1190 - C27882 * C1194) * C28003) *
               C1325 +
           ((C10909 * C567 - C27882 * C573) * C18321 +
            (C10909 * C818 - C27882 * C822) * C18219 +
            (C10909 * C2466 - C27882 * C2472) * C18322 +
            (C10909 * C2813 - C27882 * C2817) * C28003) *
               C1326 +
           ((C10909 * C1333 - C27882 * C1337) * C18321 +
            (C10909 * C1720 - C27882 * C1723) * C18219 +
            (C10909 * C2464 - C27882 * C2468) * C18322 +
            (C10909 * C2815 - C27882 * C2819) * C28003) *
               C1327) *
              C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * (((C9460 * C96 - C9465 * C91 + C9461 * C98 -
                                C9467 * C92 + C9462 * C100 - C9469 * C93) *
                                   C18321 +
                               (C9460 * C414 - C9465 * C409 + C9461 * C415 -
                                C9467 * C410 + C9462 * C416 - C9469 * C411) *
                                   C18219 +
                               (C9460 * C947 - C9465 * C940 + C9461 * C945 -
                                C9467 * C939 + C9462 * C943 - C9469 * C938) *
                                   C18322 +
                               (C9460 * C1193 - C9465 * C1189 + C9461 * C1194 -
                                C9467 * C1190 + C9462 * C1195 - C9469 * C1191) *
                                   C28003) *
                                  C27928 * C28119 * C28120 * C81 +
                              ((C9465 * C92 - C9460 * C98 + C9467 * C93 -
                                C9461 * C100 + C9469 * C94 - C9462 * C102) *
                                   C18321 +
                               (C9465 * C410 - C9460 * C415 + C9467 * C411 -
                                C9461 * C416 + C9469 * C412 - C9462 * C417) *
                                   C18219 +
                               (C9465 * C939 - C9460 * C945 + C9467 * C938 -
                                C9461 * C943 + C9469 * C937 - C9462 * C941) *
                                   C18322 +
                               (C9465 * C1190 - C9460 * C1194 + C9467 * C1191 -
                                C9461 * C1195 + C9469 * C1192 - C9462 * C1196) *
                                   C28003) *
                                  C27928 * C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C27882 * C96 - C10909 * C91) * C21170 +
           (C27882 * C414 - C10909 * C409) * C21098 +
           (C13115 - C13116) * C21171 + (C13305 - C13306) * C21099 +
           (C13119 - C13120) * C21172 + (C13307 - C13308) * C21100 +
           (C27882 * C4036 - C10909 * C4033) * C21173 +
           (C27882 * C4428 - C10909 * C4426) * C21101) *
              C27928 * C28119 * C28120 * C81 +
          ((C10909 * C92 - C27882 * C98) * C21170 +
           (C10909 * C410 - C27882 * C415) * C21098 +
           (C10909 * C939 - C27882 * C945) * C21171 +
           (C10909 * C1190 - C27882 * C1194) * C21099 +
           (C10909 * C2982 - C27882 * C2986) * C21172 +
           (C10909 * C3361 - C27882 * C3364) * C21100 +
           (C10909 * C4032 - C27882 * C4034) * C21173 +
           (C10909 * C4427 - C27882 * C4429) * C21101) *
              C27928 * C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eezy[36] +=
        (-std::pow(Pi, 2.5) *
         (((C1325 * C146 - C1394 * C91 + C1326 * C615 - C1395 * C568 +
            C1327 * C1397 - C1396 * C1332) *
               C18321 +
           (C1325 * C453 - C1394 * C409 + C1326 * C859 - C1395 * C817 +
            C1327 * C1775 - C1396 * C1719) *
               C18219 +
           (C1325 * C987 - C1394 * C940 + C1326 * C2530 - C1395 * C2467 +
            C1327 * C2531 - C1396 * C2465) *
               C18322 +
           (C1325 * C1231 - C1394 * C1189 + C1326 * C2870 - C1395 * C2812 +
            C1327 * C2871 - C1396 * C2814) *
               C28003) *
              C27882 * C28119 * C28120 * C81 +
          ((C1405 - C1404 + C1407 - C1406 + C1409 - C1408) * C18321 +
           (C1780 - C1779 + C1782 - C1781 + C1784 - C1783) * C18219 +
           (C1394 * C939 - C1325 * C988 + C1395 * C2466 - C1326 * C2532 +
            C1396 * C2464 - C1327 * C2533) *
               C18322 +
           (C1394 * C1190 - C1325 * C1232 + C1395 * C2813 - C1326 * C2872 +
            C1396 * C2815 - C1327 * C2873) *
               C28003) *
              C27882 * C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C27928 * C146 - C145 * C91) * C18321 +
            (C27928 * C453 - C145 * C409) * C18219 + (C4123 - C4124) * C18322 +
            (C4491 - C4492) * C28003) *
               C9460 +
           ((C157 - C158) * C18321 + (C459 - C460) * C18219 +
            (C3050 - C3051) * C18322 + (C3420 - C3421) * C28003) *
               C9461 +
           ((C161 - C162) * C18321 + (C461 - C462) * C18219 +
            (C6138 - C6139) * C18322 + (C6475 - C6476) * C28003) *
               C9462) *
              C28119 * C28120 * C81 +
          (((C158 - C157) * C18321 + (C460 - C459) * C18219 +
            (C3051 - C3050) * C18322 + (C3421 - C3420) * C28003) *
               C9460 +
           ((C162 - C161) * C18321 + (C462 - C461) * C18219 +
            (C6139 - C6138) * C18322 + (C6476 - C6475) * C28003) *
               C9461 +
           ((C166 - C165) * C18321 + (C464 - C463) * C18219 +
            (C145 * C937 - C27928 * C990) * C18322 +
            (C145 * C1192 - C27928 * C1234) * C28003) *
               C9462) *
              C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C27928 * C146 - C145 * C91) * C21170 +
           (C27928 * C453 - C145 * C409) * C21098 + (C4123 - C4124) * C21171 +
           (C4491 - C4492) * C21099 + (C4127 - C4128) * C21172 +
           (C4493 - C4494) * C21100 + (C27928 * C4118 - C145 * C4033) * C21173 +
           (C27928 * C4488 - C145 * C4426) * C21101) *
              C27882 * C28119 * C28120 * C81 +
          ((C158 - C157) * C21170 + (C460 - C459) * C21098 +
           (C3051 - C3050) * C21171 + (C3421 - C3420) * C21099 +
           (C3055 - C3054) * C21172 + (C3423 - C3422) * C21100 +
           (C145 * C4032 - C27928 * C4119) * C21173 +
           (C145 * C4427 - C27928 * C4489) * C21101) *
              C27882 * C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eezz[36] +=
        (-std::pow(Pi, 2.5) *
         (((C18321 * C203 - C18647 * C91 - C18321 * C409 + C18219 * C499 +
            C18322 * C1029 - C18648 * C940 - C18322 * C1189 + C28003 * C1272) *
               C1325 +
           (C18321 * C657 - C18647 * C568 - C18321 * C817 + C18219 * C900 +
            C18322 * C2588 - C18648 * C2467 - C18322 * C2812 + C28003 * C2927) *
               C1326 +
           (C18321 * C1465 - C18647 * C1332 - C18321 * C1719 + C18219 * C1834 +
            C18322 * C2590 - C18648 * C2465 - C18322 * C2814 + C28003 * C2926) *
               C1327) *
              C27882 * C28119 * C28120 * C81 -
          ((C18322 * C2591 - C18648 * C2464 - C18322 * C2815 + C28003 * C2924 +
            C18321 * C1466 - C18647 * C1333 - C18321 * C1720 + C18219 * C1835) *
               C1327 +
           (C18322 * C2589 - C18648 * C2466 - C18322 * C2813 + C28003 * C2925 +
            C18321 * C658 - C18647 * C567 - C18321 * C818 + C18219 * C899) *
               C1326 +
           (C18675 + C18674) * C1325) *
              C27882 * C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C18321 * C203 - C18647 * C91 - C18321 * C409 + C18219 * C499 +
            C18322 * C1029 - C18648 * C940 - C18322 * C1189 + C28003 * C1272) *
               C27928 * C9460 +
           (C18674 + C18675) * C27928 * C9461 +
           (C18676 + C18677) * C27928 * C9462) *
              C28119 * C28120 * C81 -
          ((C18322 * C1032 - C18648 * C937 - C18322 * C1192 + C28003 * C1269 +
            C18321 * C206 - C18647 * C94 - C18321 * C412 + C18219 * C502) *
               C27928 * C9462 +
           (C18677 + C18676) * C27928 * C9461 +
           (C18675 + C18674) * C27928 * C9460) *
              C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C21170 * C203 - C21378 * C91 - C21170 * C409 + C21098 * C499 +
           C21171 * C1029 - C21379 * C940 - C21171 * C1189 + C21099 * C1272 +
           C21172 * C3110 - C21380 * C2981 - C21172 * C3360 + C21100 * C3476 +
           C21173 * C4180 - C21381 * C4033 - C21173 * C4426 + C21101 * C4545) *
              C27928 * C27882 * C28119 * C28120 * C81 -
          (C21173 * C4181 - C21381 * C4032 - C21173 * C4427 + C21101 * C4544 +
           C21172 * C3111 - C21380 * C2982 - C21172 * C3361 + C21100 * C3477 +
           C21171 * C1030 - C21379 * C939 - C21171 * C1190 + C21099 * C1271 +
           C21170 * C204 - C21378 * C92 - C21170 * C410 + C21098 * C500) *
              C27928 * C27882 * C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eexx[37] +=
        (-std::pow(Pi, 2.5) *
         ((((C10909 * C96 - C10910 * C91 - C10909 * C97 + C27882 * C106) *
                C18219 +
            C12941 * C28003) *
               C1325 +
           (C20120 + C20121) * C1326 + (C20122 + C20123) * C1327) *
              C28119 * C562 -
          (((C10909 * C11603 - C10910 * C11602 - C10909 * C11604 +
             C27882 * C11605) *
                C28003 +
            C11250 * C18219) *
               C1327 +
           (C20123 + C20122) * C1326 + (C20121 + C20120) * C1325) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C9465 * C96 - C9466 * C91 - C9465 * C97 + C9460 * C106 +
            C9467 * C98 - C9468 * C92 - C9467 * C99 + C9461 * C107 +
            C9469 * C100 - C9470 * C93 - C9469 * C101 + C9462 * C108) *
               C18219 +
           (C9465 * C947 - C9466 * C940 - C9465 * C948 + C9460 * C952 +
            C9467 * C945 - C9468 * C939 - C9467 * C946 + C9461 * C951 +
            C9469 * C943 - C9470 * C938 - C9469 * C944 + C9462 * C950) *
               C28003) *
              C27928 * C28119 * C562 -
          ((C9469 * C5620 - C9470 * C5619 - C9469 * C5621 + C9462 * C5622 +
            C9467 * C2472 - C9468 * C2466 - C9467 * C2473 + C9461 * C2478 +
            C9465 * C2474 - C9466 * C2467 - C9465 * C2475 + C9460 * C2479) *
               C28003 +
           (C10002 + C10001 + C10000) * C18219) *
              C27928 * C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C10909 * C96 - C10910 * C91 - C10909 * C97 + C27882 * C106) *
               C21098 +
           C12941 * C21099 + C12942 * C21100 +
           (C10909 * C4036 - C10910 * C4033 - C10909 * C4037 + C27882 * C4039) *
               C21101) *
              C27928 * C28119 * C562 -
          ((C10909 * C12925 - C10910 * C12924 - C10909 * C12926 +
            C27882 * C12927) *
               C21101 +
           C12409 * C21100 + C12408 * C21099 + C11248 * C21098) *
              C27928 * C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q));
    d2eexy[37] +=
        (-std::pow(Pi, 2.5) *
         ((((C1325 * C146 - C1394 * C91 + C1326 * C615 - C1395 * C568 +
             C1327 * C1397 - C1396 * C1332) *
                C10909 +
            (C1325 * C151 - C1394 * C97 + C1326 * C619 - C1395 * C576 +
             C1327 * C1400 - C1396 * C1336) *
                C27882) *
               C18219 +
           ((C1325 * C987 - C1394 * C940 + C1326 * C2530 - C1395 * C2467 +
             C1327 * C2531 - C1396 * C2465) *
                C10909 +
            (C1325 * C991 - C1394 * C948 + C1326 * C2534 - C1395 * C2475 +
             C1327 * C2535 - C1396 * C2471) *
                C27882) *
               C28003) *
              C28119 * C562 +
          (((C1394 * C568 - C1325 * C615 + C1395 * C1332 - C1326 * C1397 +
             C1396 * C1905 - C1327 * C1990) *
                C10909 +
            (C1394 * C576 - C1325 * C619 + C1395 * C1336 - C1326 * C1400 +
             C1396 * C1909 - C1327 * C1992) *
                C27882) *
               C18219 +
           ((C1394 * C2467 - C1325 * C2530 + C1395 * C2465 - C1326 * C2531 +
             C1396 * C11602 - C1327 * C11640) *
                C10909 +
            (C1394 * C2475 - C1325 * C2534 + C1395 * C2471 - C1326 * C2535 +
             C1396 * C11604 - C1327 * C11641) *
                C27882) *
               C28003) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C27928 * C146 - C145 * C91) * C9465 +
            (C27928 * C151 - C145 * C97) * C9460 + (C157 - C158) * C9467 +
            (C159 - C160) * C9461 + (C161 - C162) * C9469 +
            (C163 - C164) * C9462) *
               C18219 +
           ((C4123 - C4124) * C9465 + (C4125 - C4126) * C9460 +
            (C3050 - C3051) * C9467 + (C3052 - C3053) * C9461 +
            (C6138 - C6139) * C9469 + (C6140 - C6141) * C9462) *
               C28003) *
              C28119 * C562 +
          (((C145 * C568 - C27928 * C615) * C9465 +
            (C145 * C576 - C27928 * C619) * C9460 +
            (C145 * C567 - C27928 * C616) * C9467 +
            (C145 * C574 - C27928 * C620) * C9461 +
            (C145 * C566 - C27928 * C617) * C9469 +
            (C145 * C572 - C27928 * C621) * C9462) *
               C18219 +
           ((C145 * C2467 - C27928 * C2530) * C9465 +
            (C145 * C2475 - C27928 * C2534) * C9460 +
            (C145 * C2466 - C27928 * C2532) * C9467 +
            (C145 * C2473 - C27928 * C2536) * C9461 +
            (C145 * C5619 - C27928 * C5673) * C9469 +
            (C145 * C5621 - C27928 * C5674) * C9462) *
               C28003) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C27928 * C146 - C145 * C91) * C10909 +
            (C27928 * C151 - C145 * C97) * C27882) *
               C21098 +
           ((C4123 - C4124) * C10909 + (C4125 - C4126) * C27882) * C21099 +
           ((C4127 - C4128) * C10909 + (C4129 - C4130) * C27882) * C21100 +
           ((C27928 * C4118 - C145 * C4033) * C10909 +
            (C27928 * C4120 - C145 * C4037) * C27882) *
               C21101) *
              C28119 * C562 +
          (((C145 * C568 - C27928 * C615) * C10909 +
            (C145 * C576 - C27928 * C619) * C27882) *
               C21098 +
           ((C145 * C2467 - C27928 * C2530) * C10909 +
            (C145 * C2475 - C27928 * C2534) * C27882) *
               C21099 +
           ((C145 * C3551 - C27928 * C3608) * C10909 +
            (C145 * C3555 - C27928 * C3610) * C27882) *
               C21100 +
           ((C145 * C12924 - C27928 * C12992) * C10909 +
            (C145 * C12926 - C27928 * C12993) * C27882) *
               C21101) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q));
    d2eexz[37] +=
        (-std::pow(Pi, 2.5) *
         ((((C18219 * C203 - C18321 * C91 + C28003 * C1029 - C18322 * C940) *
                C10909 +
            (C18219 * C208 - C18321 * C97 + C28003 * C1033 - C18322 * C948) *
                C27882) *
               C1325 +
           ((C20224 - C20225 + C20226 - C20227) * C10909 +
            (C20228 - C20229 + C20230 - C20231) * C27882) *
               C1326 +
           ((C20232 - C20233 + C20234 - C20235) * C10909 +
            (C20236 - C20237 + C20238 - C20239) * C27882) *
               C1327) *
              C28119 * C562 +
          (((C20225 - C20224 + C20227 - C20226) * C10909 +
            (C20229 - C20228 + C20231 - C20230) * C27882) *
               C1325 +
           ((C20233 - C20232 + C20235 - C20234) * C10909 +
            (C20237 - C20236 + C20239 - C20238) * C27882) *
               C1326 +
           ((C18321 * C1905 - C18219 * C2044 + C18322 * C11602 -
             C28003 * C11676) *
                C10909 +
            (C18321 * C1909 - C18219 * C2046 + C18322 * C11604 -
             C28003 * C11677) *
                C27882) *
               C1327) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C18219 * C203 - C18321 * C91 + C28003 * C1029 - C18322 * C940) *
               C9465 +
           (C18219 * C208 - C18321 * C97 + C28003 * C1033 - C18322 * C948) *
               C9460 +
           (C18324 - C18325 + C18326 - C18327) * C9467 +
           (C18328 - C18329 + C18330 - C18331) * C9461 +
           (C18332 - C18333 + C18334 - C18335) * C9469 +
           (C18336 - C18337 + C18338 - C18339) * C9462) *
              C27928 * C28119 * C562 +
          ((C18321 * C568 - C18219 * C657 + C18322 * C2467 - C28003 * C2588) *
               C9465 +
           (C18321 * C576 - C18219 * C661 + C18322 * C2475 - C28003 * C2592) *
               C9460 +
           (C18321 * C567 - C18219 * C658 + C18322 * C2466 - C28003 * C2589) *
               C9467 +
           (C18321 * C574 - C18219 * C662 + C18322 * C2473 - C28003 * C2593) *
               C9461 +
           (C18321 * C566 - C18219 * C659 + C18322 * C5619 - C28003 * C5725) *
               C9469 +
           (C18321 * C572 - C18219 * C663 + C18322 * C5621 - C28003 * C5726) *
               C9462) *
              C27928 * C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C21098 * C203 - C21170 * C91 + C21099 * C1029 - C21171 * C940 +
            C21100 * C3110 - C21172 * C2981 + C21101 * C4180 - C21173 * C4033) *
               C10909 +
           (C21098 * C208 - C21170 * C97 + C21099 * C1033 - C21171 * C948 +
            C21100 * C3113 - C21172 * C2985 + C21101 * C4182 - C21173 * C4037) *
               C27882) *
              C27928 * C28119 * C562 +
          ((C21170 * C568 - C21098 * C657 + C21171 * C2467 - C21099 * C2588 +
            C21172 * C3551 - C21100 * C3662 + C21173 * C12924 -
            C21101 * C13060) *
               C10909 +
           (C21170 * C576 - C21098 * C661 + C21171 * C2475 - C21099 * C2592 +
            C21172 * C3555 - C21100 * C3664 + C21173 * C12926 -
            C21101 * C13061) *
               C27882) *
              C27928 * C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q));
    d2eeyx[37] +=
        (-std::pow(Pi, 2.5) *
         ((((C27882 * C96 - C10909 * C91) * C1394 +
            (C27882 * C264 - C10909 * C259) * C1325 +
            (C11366 - C11367) * C1395 + (C11368 - C11369) * C1326 +
            (C11370 - C11371) * C1396 + (C11372 - C11373) * C1327) *
               C18219 +
           ((C13115 - C13116) * C1394 + (C13117 - C13118) * C1325 +
            (C12580 - C12581) * C1395 + (C12582 - C12583) * C1326 +
            (C17407 - C17408) * C1396 + (C17409 - C17410) * C1327) *
               C28003) *
              C28119 * C562 +
          (((C11367 - C11366) * C1394 + (C11369 - C11368) * C1325 +
            (C11371 - C11370) * C1395 + (C11373 - C11372) * C1326 +
            (C11375 - C11374) * C1396 + (C11377 - C11376) * C1327) *
               C18219 +
           ((C12581 - C12580) * C1394 + (C12583 - C12582) * C1325 +
            (C17408 - C17407) * C1395 + (C17410 - C17409) * C1326 +
            (C10909 * C11602 - C27882 * C11603) * C1396 +
            (C10909 * C11712 - C27882 * C11713) * C1327) *
               C28003) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C9460 * C96 - C9465 * C91 + C9461 * C98 - C9467 * C92 +
             C9462 * C100 - C9469 * C93) *
                C145 +
            (C9460 * C264 - C9465 * C259 + C9461 * C265 - C9467 * C260 +
             C9462 * C266 - C9469 * C261) *
                C27928) *
               C18219 +
           ((C9460 * C947 - C9465 * C940 + C9461 * C945 - C9467 * C939 +
             C9462 * C943 - C9469 * C938) *
                C145 +
            (C9460 * C1075 - C9465 * C1071 + C9461 * C1076 - C9467 * C1072 +
             C9462 * C1077 - C9469 * C1073) *
                C27928) *
               C28003) *
              C28119 * C562 +
          (((C10154 - C10153 + C10156 - C10155 + C10158 - C10157) * C145 +
            (C10160 - C10159 + C10162 - C10161 + C10164 - C10163) * C27928) *
               C18219 +
           ((C9465 * C2467 - C9460 * C2474 + C9467 * C2466 - C9461 * C2472 +
             C9469 * C5619 - C9462 * C5620) *
                C145 +
            (C9465 * C2646 - C9460 * C2650 + C9467 * C2647 - C9461 * C2651 +
             C9469 * C5777 - C9462 * C5778) *
                C27928) *
               C28003) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C27882 * C96 - C10909 * C91) * C145 +
            (C27882 * C264 - C10909 * C259) * C27928) *
               C21098 +
           ((C13115 - C13116) * C145 + (C13117 - C13118) * C27928) * C21099 +
           ((C13119 - C13120) * C145 + (C13121 - C13122) * C27928) * C21100 +
           ((C27882 * C4036 - C10909 * C4033) * C145 +
            (C27882 * C4236 - C10909 * C4234) * C27928) *
               C21101) *
              C28119 * C562 +
          (((C11367 - C11366) * C145 + (C11369 - C11368) * C27928) * C21098 +
           ((C12581 - C12580) * C145 + (C12583 - C12582) * C27928) * C21099 +
           ((C12585 - C12584) * C145 + (C12587 - C12586) * C27928) * C21100 +
           ((C10909 * C12924 - C27882 * C12925) * C145 +
            (C10909 * C13112 - C27882 * C13113) * C27928) *
               C21101) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q));
    d2eeyy[37] +=
        (-std::pow(Pi, 2.5) *
         (((C1394 * C146 - C1585 * C91 - C1394 * C259 + C1325 * C304 +
            C1395 * C615 - C1586 * C568 - C1395 * C699 + C1326 * C744 +
            C1396 * C1397 - C1587 * C1332 - C1396 * C1529 + C1327 * C1588) *
               C27882 * C18219 +
           (C1394 * C987 - C1585 * C940 - C1394 * C1071 + C1325 * C1116 +
            C1395 * C2530 - C1586 * C2467 - C1395 * C2646 + C1326 * C2707 +
            C1396 * C2531 - C1587 * C2465 - C1396 * C2648 + C1327 * C2706) *
               C27882 * C28003) *
              C28119 * C562 -
          ((C1396 * C11640 - C1587 * C11602 - C1396 * C11712 + C1327 * C11748 +
            C1395 * C2531 - C1586 * C2465 - C1395 * C2648 + C1326 * C2706 +
            C1394 * C2530 - C1585 * C2467 - C1394 * C2646 + C1325 * C2707) *
               C27882 * C28003 +
           (C1396 * C1990 - C1587 * C1905 - C1396 * C2106 + C1327 * C2177 +
            C1395 * C1397 - C1586 * C1332 - C1395 * C1529 + C1326 * C1588 +
            C1394 * C615 - C1585 * C568 - C1394 * C699 + C1325 * C744) *
               C27882 * C18219) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C145 * C146 - C303 * C91 - C145 * C259 + C27928 * C304) * C9460 +
            C328 * C9461 + C329 * C9462) *
               C18219 +
           (C4321 * C9460 + C3250 * C9461 + C6316 * C9462) * C28003) *
              C28119 * C562 -
          (((C145 * C5673 - C303 * C5619 - C145 * C5777 + C27928 * C5829) *
                C9462 +
            (C145 * C2532 - C303 * C2466 - C145 * C2647 + C27928 * C2705) *
                C9461 +
            (C145 * C2530 - C303 * C2467 - C145 * C2646 + C27928 * C2707) *
                C9460) *
               C28003 +
           ((C145 * C617 - C303 * C566 - C145 * C701 + C27928 * C742) * C9462 +
            (C145 * C616 - C303 * C567 - C145 * C700 + C27928 * C743) * C9461 +
            (C145 * C615 - C303 * C568 - C145 * C699 + C27928 * C744) * C9460) *
               C18219) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C145 * C146 - C303 * C91 - C145 * C259 + C27928 * C304) * C27882 *
               C21098 +
           C4321 * C27882 * C21099 + C4322 * C27882 * C21100 +
           (C145 * C4118 - C303 * C4033 - C145 * C4234 + C27928 * C4305) *
               C27882 * C21101) *
              C28119 * C562 -
          ((C145 * C12992 - C303 * C12924 - C145 * C13112 + C27928 * C13172) *
               C27882 * C21101 +
           (C145 * C3608 - C303 * C3551 - C145 * C3716 + C27928 * C3771) *
               C27882 * C21100 +
           (C145 * C2530 - C303 * C2467 - C145 * C2646 + C27928 * C2707) *
               C27882 * C21099 +
           (C145 * C615 - C303 * C568 - C145 * C699 + C27928 * C744) * C27882 *
               C21098) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q));
    d2eeyz[37] +=
        (-std::pow(Pi, 2.5) *
         (((C18219 * C203 - C18321 * C91 + C28003 * C1029 - C18322 * C940) *
               C1394 +
           (C18219 * C364 - C18321 * C259 + C28003 * C1151 - C18322 * C1071) *
               C1325 +
           (C20224 - C20225 + C20226 - C20227) * C1395 +
           (C20390 - C20391 + C20392 - C20393) * C1326 +
           (C20232 - C20233 + C20234 - C20235) * C1396 +
           (C20394 - C20395 + C20396 - C20397) * C1327) *
              C27882 * C28119 * C562 +
          ((C20225 - C20224 + C20227 - C20226) * C1394 +
           (C20391 - C20390 + C20393 - C20392) * C1325 +
           (C20233 - C20232 + C20235 - C20234) * C1395 +
           (C20395 - C20394 + C20397 - C20396) * C1326 +
           (C18321 * C1905 - C18219 * C2044 + C18322 * C11602 -
            C28003 * C11676) *
               C1396 +
           (C18321 * C2106 - C18219 * C2228 + C18322 * C11712 -
            C28003 * C11783) *
               C1327) *
              C27882 * C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C18219 * C203 - C18321 * C91 + C28003 * C1029 - C18322 * C940) *
                C145 +
            (C18219 * C364 - C18321 * C259 + C28003 * C1151 - C18322 * C1071) *
                C27928) *
               C9460 +
           ((C18324 - C18325 + C18326 - C18327) * C145 +
            (C18490 - C18491 + C18492 - C18493) * C27928) *
               C9461 +
           ((C18332 - C18333 + C18334 - C18335) * C145 +
            (C18494 - C18495 + C18496 - C18497) * C27928) *
               C9462) *
              C28119 * C562 +
          (((C18321 * C568 - C18219 * C657 + C18322 * C2467 - C28003 * C2588) *
                C145 +
            (C18321 * C699 - C18219 * C779 + C18322 * C2646 - C28003 * C2758) *
                C27928) *
               C9460 +
           ((C18321 * C567 - C18219 * C658 + C18322 * C2466 - C28003 * C2589) *
                C145 +
            (C18321 * C700 - C18219 * C780 + C18322 * C2647 - C28003 * C2760) *
                C27928) *
               C9461 +
           ((C18321 * C566 - C18219 * C659 + C18322 * C5619 - C28003 * C5725) *
                C145 +
            (C18321 * C701 - C18219 * C781 + C18322 * C5777 - C28003 * C5880) *
                C27928) *
               C9462) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C21098 * C203 - C21170 * C91 + C21099 * C1029 - C21171 * C940 +
            C21100 * C3110 - C21172 * C2981 + C21101 * C4180 - C21173 * C4033) *
               C145 +
           (C21098 * C364 - C21170 * C259 + C21099 * C1151 - C21171 * C1071 +
            C21100 * C3301 - C21172 * C3178 + C21101 * C4374 - C21173 * C4234) *
               C27928) *
              C27882 * C28119 * C562 +
          ((C21170 * C568 - C21098 * C657 + C21171 * C2467 - C21099 * C2588 +
            C21172 * C3551 - C21100 * C3662 + C21173 * C12924 -
            C21101 * C13060) *
               C145 +
           (C21170 * C699 - C21098 * C779 + C21171 * C2646 - C21099 * C2758 +
            C21172 * C3716 - C21100 * C3822 + C21173 * C13112 -
            C21101 * C13251) *
               C27928) *
              C27882 * C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q));
    d2eezx[37] +=
        (-std::pow(Pi, 2.5) *
         ((((C27882 * C96 - C10909 * C91) * C18321 +
            (C27882 * C414 - C10909 * C409) * C18219 +
            (C13115 - C13116) * C18322 + (C13305 - C13306) * C28003) *
               C1325 +
           ((C11366 - C11367) * C18321 + (C11486 - C11487) * C18219 +
            (C12580 - C12581) * C18322 + (C12748 - C12749) * C28003) *
               C1326 +
           ((C11370 - C11371) * C18321 + (C11488 - C11489) * C18219 +
            (C17407 - C17408) * C18322 + (C17565 - C17566) * C28003) *
               C1327) *
              C28119 * C562 +
          (((C11367 - C11366) * C18321 + (C11487 - C11486) * C18219 +
            (C12581 - C12580) * C18322 + (C12749 - C12748) * C28003) *
               C1325 +
           ((C11371 - C11370) * C18321 + (C11489 - C11488) * C18219 +
            (C17408 - C17407) * C18322 + (C17566 - C17565) * C28003) *
               C1326 +
           ((C11375 - C11374) * C18321 + (C11491 - C11490) * C18219 +
            (C10909 * C11602 - C27882 * C11603) * C18322 +
            (C10909 * C11818 - C27882 * C11819) * C28003) *
               C1327) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C9460 * C96 - C9465 * C91 + C9461 * C98 - C9467 * C92 +
            C9462 * C100 - C9469 * C93) *
               C18321 +
           (C9460 * C414 - C9465 * C409 + C9461 * C415 - C9467 * C410 +
            C9462 * C416 - C9469 * C411) *
               C18219 +
           (C9460 * C947 - C9465 * C940 + C9461 * C945 - C9467 * C939 +
            C9462 * C943 - C9469 * C938) *
               C18322 +
           (C9460 * C1193 - C9465 * C1189 + C9461 * C1194 - C9467 * C1190 +
            C9462 * C1195 - C9469 * C1191) *
               C28003) *
              C27928 * C28119 * C562 +
          ((C10154 - C10153 + C10156 - C10155 + C10158 - C10157) * C18321 +
           (C10316 - C10315 + C10318 - C10317 + C10320 - C10319) * C18219 +
           (C9465 * C2467 - C9460 * C2474 + C9467 * C2466 - C9461 * C2472 +
            C9469 * C5619 - C9462 * C5620) *
               C18322 +
           (C9465 * C2812 - C9460 * C2816 + C9467 * C2813 - C9461 * C2817 +
            C9469 * C5931 - C9462 * C5932) *
               C28003) *
              C27928 * C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C27882 * C96 - C10909 * C91) * C21170 +
           (C27882 * C414 - C10909 * C409) * C21098 +
           (C13115 - C13116) * C21171 + (C13305 - C13306) * C21099 +
           (C13119 - C13120) * C21172 + (C13307 - C13308) * C21100 +
           (C27882 * C4036 - C10909 * C4033) * C21173 +
           (C27882 * C4428 - C10909 * C4426) * C21101) *
              C27928 * C28119 * C562 +
          ((C11367 - C11366) * C21170 + (C11487 - C11486) * C21098 +
           (C12581 - C12580) * C21171 + (C12749 - C12748) * C21099 +
           (C12585 - C12584) * C21172 + (C12751 - C12750) * C21100 +
           (C10909 * C12924 - C27882 * C12925) * C21173 +
           (C10909 * C13302 - C27882 * C13303) * C21101) *
              C27928 * C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q));
    d2eezy[37] +=
        (-std::pow(Pi, 2.5) *
         (((C1325 * C146 - C1394 * C91 + C1326 * C615 - C1395 * C568 +
            C1327 * C1397 - C1396 * C1332) *
               C18321 +
           (C1325 * C453 - C1394 * C409 + C1326 * C859 - C1395 * C817 +
            C1327 * C1775 - C1396 * C1719) *
               C18219 +
           (C1325 * C987 - C1394 * C940 + C1326 * C2530 - C1395 * C2467 +
            C1327 * C2531 - C1396 * C2465) *
               C18322 +
           (C1325 * C1231 - C1394 * C1189 + C1326 * C2870 - C1395 * C2812 +
            C1327 * C2871 - C1396 * C2814) *
               C28003) *
              C27882 * C28119 * C562 +
          ((C1394 * C568 - C1325 * C615 + C1395 * C1332 - C1326 * C1397 +
            C1396 * C1905 - C1327 * C1990) *
               C18321 +
           (C1394 * C817 - C1325 * C859 + C1395 * C1719 - C1326 * C1775 +
            C1396 * C2284 - C1327 * C2346) *
               C18219 +
           (C1394 * C2467 - C1325 * C2530 + C1395 * C2465 - C1326 * C2531 +
            C1396 * C11602 - C1327 * C11640) *
               C18322 +
           (C1394 * C2812 - C1325 * C2870 + C1395 * C2814 - C1326 * C2871 +
            C1396 * C11818 - C1327 * C11854) *
               C28003) *
              C27882 * C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C27928 * C146 - C145 * C91) * C18321 +
            (C27928 * C453 - C145 * C409) * C18219 + (C4123 - C4124) * C18322 +
            (C4491 - C4492) * C28003) *
               C9460 +
           ((C157 - C158) * C18321 + (C459 - C460) * C18219 +
            (C3050 - C3051) * C18322 + (C3420 - C3421) * C28003) *
               C9461 +
           ((C161 - C162) * C18321 + (C461 - C462) * C18219 +
            (C6138 - C6139) * C18322 + (C6475 - C6476) * C28003) *
               C9462) *
              C28119 * C562 +
          (((C145 * C568 - C27928 * C615) * C18321 +
            (C145 * C817 - C27928 * C859) * C18219 +
            (C145 * C2467 - C27928 * C2530) * C18322 +
            (C145 * C2812 - C27928 * C2870) * C28003) *
               C9460 +
           ((C145 * C567 - C27928 * C616) * C18321 +
            (C145 * C818 - C27928 * C860) * C18219 +
            (C145 * C2466 - C27928 * C2532) * C18322 +
            (C145 * C2813 - C27928 * C2872) * C28003) *
               C9461 +
           ((C145 * C566 - C27928 * C617) * C18321 +
            (C145 * C819 - C27928 * C861) * C18219 +
            (C145 * C5619 - C27928 * C5673) * C18322 +
            (C145 * C5931 - C27928 * C5983) * C28003) *
               C9462) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C27928 * C146 - C145 * C91) * C21170 +
           (C27928 * C453 - C145 * C409) * C21098 + (C4123 - C4124) * C21171 +
           (C4491 - C4492) * C21099 + (C4127 - C4128) * C21172 +
           (C4493 - C4494) * C21100 + (C27928 * C4118 - C145 * C4033) * C21173 +
           (C27928 * C4488 - C145 * C4426) * C21101) *
              C27882 * C28119 * C562 +
          ((C145 * C568 - C27928 * C615) * C21170 +
           (C145 * C817 - C27928 * C859) * C21098 +
           (C145 * C2467 - C27928 * C2530) * C21171 +
           (C145 * C2812 - C27928 * C2870) * C21099 +
           (C145 * C3551 - C27928 * C3608) * C21172 +
           (C145 * C3874 - C27928 * C3928) * C21100 +
           (C145 * C12924 - C27928 * C12992) * C21173 +
           (C145 * C13302 - C27928 * C13358) * C21101) *
              C27882 * C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q));
    d2eezz[37] +=
        (-std::pow(Pi, 2.5) *
         (((C18321 * C203 - C18647 * C91 - C18321 * C409 + C18219 * C499 +
            C18322 * C1029 - C18648 * C940 - C18322 * C1189 + C28003 * C1272) *
               C1325 +
           (C20572 + C20573) * C1326 + (C20574 + C20575) * C1327) *
              C27882 * C28119 * C562 -
          ((C18322 * C11676 - C18648 * C11602 - C18322 * C11818 +
            C28003 * C11889 + C18321 * C2044 - C18647 * C1905 - C18321 * C2284 +
            C18219 * C2399) *
               C1327 +
           (C20575 + C20574) * C1326 + (C20573 + C20572) * C1325) *
              C27882 * C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C18321 * C203 - C18647 * C91 - C18321 * C409 + C18219 * C499 +
            C18322 * C1029 - C18648 * C940 - C18322 * C1189 + C28003 * C1272) *
               C27928 * C9460 +
           (C18674 + C18675) * C27928 * C9461 +
           (C18676 + C18677) * C27928 * C9462) *
              C28119 * C562 -
          ((C18322 * C5725 - C18648 * C5619 - C18322 * C5931 + C28003 * C6034 +
            C18321 * C659 - C18647 * C566 - C18321 * C819 + C18219 * C898) *
               C27928 * C9462 +
           (C18322 * C2589 - C18648 * C2466 - C18322 * C2813 + C28003 * C2925 +
            C18321 * C658 - C18647 * C567 - C18321 * C818 + C18219 * C899) *
               C27928 * C9461 +
           (C18322 * C2588 - C18648 * C2467 - C18322 * C2812 + C28003 * C2927 +
            C18321 * C657 - C18647 * C568 - C18321 * C817 + C18219 * C900) *
               C27928 * C9460) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C21170 * C203 - C21378 * C91 - C21170 * C409 + C21098 * C499 +
           C21171 * C1029 - C21379 * C940 - C21171 * C1189 + C21099 * C1272 +
           C21172 * C3110 - C21380 * C2981 - C21172 * C3360 + C21100 * C3476 +
           C21173 * C4180 - C21381 * C4033 - C21173 * C4426 + C21101 * C4545) *
              C27928 * C27882 * C28119 * C562 -
          (C21173 * C13060 - C21381 * C12924 - C21173 * C13302 +
           C21101 * C13417 + C21172 * C3662 - C21380 * C3551 - C21172 * C3874 +
           C21100 * C3981 + C21171 * C2588 - C21379 * C2467 - C21171 * C2812 +
           C21099 * C2927 + C21170 * C657 - C21378 * C568 - C21170 * C817 +
           C21098 * C900) *
              C27928 * C27882 * C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q));
    d2eexx[38] +=
        (-std::pow(Pi, 2.5) *
         ((((C10909 * C96 - C10910 * C91 - C10909 * C97 + C27882 * C106) *
                C18219 +
            C12941 * C28003) *
               C1325 +
           (C20120 + C20121) * C1326 + (C20122 + C20123) * C1327) *
              C935 -
          (((C10909 * C12391 - C10910 * C12390 - C10909 * C12392 +
             C27882 * C12393) *
                C28003 +
            C17247 * C18219) *
               C1327 +
           (C12409 * C28003 + C12408 * C18219) * C1326 +
           (C12942 * C28003 + C12941 * C18219) * C1325) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C9465 * C96 - C9466 * C91 - C9465 * C97 + C9460 * C106 +
            C9467 * C98 - C9468 * C92 - C9467 * C99 + C9461 * C107 +
            C9469 * C100 - C9470 * C93 - C9469 * C101 + C9462 * C108) *
               C18219 +
           (C19196 + C19197 + C19198) * C28003) *
              C27928 * C935 -
          ((C9469 * C2988 - C9470 * C2983 - C9469 * C2989 + C9462 * C2992 +
            C9467 * C2986 - C9468 * C2982 - C9467 * C2987 + C9461 * C2991 +
            C9465 * C2984 - C9466 * C2981 - C9465 * C2985 + C9460 * C2990) *
               C28003 +
           (C19198 + C19197 + C19196) * C18219) *
              C27928 * C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C10909 * C96 - C10910 * C91 - C10909 * C97 + C27882 * C106) *
               C21098 +
           C12941 * C21099 + C12942 * C21100 + C21733 * C21101) *
              C27928 * C935 -
          ((C10909 * C21723 - C10910 * C21722 - C10909 * C21724 +
            C27882 * C21725) *
               C21101 +
           C21733 * C21100 + C12942 * C21099 + C12941 * C21098) *
              C27928 * C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q));
    d2eexy[38] +=
        (-std::pow(Pi, 2.5) *
         ((((C1325 * C146 - C1394 * C91 + C1326 * C615 - C1395 * C568 +
             C1327 * C1397 - C1396 * C1332) *
                C10909 +
            (C1325 * C151 - C1394 * C97 + C1326 * C619 - C1395 * C576 +
             C1327 * C1400 - C1396 * C1336) *
                C27882) *
               C18219 +
           ((C20676 - C20677 + C20678 - C20679 + C20680 - C20681) * C10909 +
            (C20682 - C20683 + C20684 - C20685 + C20686 - C20687) * C27882) *
               C28003) *
              C935 +
          (((C20677 - C20676 + C20679 - C20678 + C20681 - C20680) * C10909 +
            (C20683 - C20682 + C20685 - C20684 + C20687 - C20686) * C27882) *
               C18219 +
           ((C1394 * C2981 - C1325 * C3043 + C1395 * C3551 - C1326 * C3608 +
             C1396 * C12390 - C1327 * C12461) *
                C10909 +
            (C1394 * C2985 - C1325 * C3046 + C1395 * C3555 - C1326 * C3610 +
             C1396 * C12392 - C1327 * C12462) *
                C27882) *
               C28003) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C27928 * C146 - C145 * C91) * C9465 +
            (C27928 * C151 - C145 * C97) * C9460 + (C157 - C158) * C9467 +
            (C159 - C160) * C9461 + (C161 - C162) * C9469 +
            (C163 - C164) * C9462) *
               C18219 +
           ((C4123 - C4124) * C9465 + (C4125 - C4126) * C9460 +
            (C3050 - C3051) * C9467 + (C3052 - C3053) * C9461 +
            (C6138 - C6139) * C9469 + (C6140 - C6141) * C9462) *
               C28003) *
              C935 +
          (((C4124 - C4123) * C9465 + (C4126 - C4125) * C9460 +
            (C3051 - C3050) * C9467 + (C3053 - C3052) * C9461 +
            (C6139 - C6138) * C9469 + (C6141 - C6140) * C9462) *
               C18219 +
           ((C4128 - C4127) * C9465 + (C4130 - C4129) * C9460 +
            (C3055 - C3054) * C9467 + (C3057 - C3056) * C9461 +
            (C145 * C2983 - C27928 * C3045) * C9469 +
            (C145 * C2989 - C27928 * C3048) * C9462) *
               C28003) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C27928 * C146 - C145 * C91) * C10909 +
            (C27928 * C151 - C145 * C97) * C27882) *
               C21098 +
           ((C4123 - C4124) * C10909 + (C4125 - C4126) * C27882) * C21099 +
           ((C4127 - C4128) * C10909 + (C4129 - C4130) * C27882) * C21100 +
           ((C21770 - C21771) * C10909 + (C21772 - C21773) * C27882) * C21101) *
              C935 +
          (((C4124 - C4123) * C10909 + (C4126 - C4125) * C27882) * C21098 +
           ((C4128 - C4127) * C10909 + (C4130 - C4129) * C27882) * C21099 +
           ((C21771 - C21770) * C10909 + (C21773 - C21772) * C27882) * C21100 +
           ((C145 * C21722 - C27928 * C21767) * C10909 +
            (C145 * C21724 - C27928 * C21768) * C27882) *
               C21101) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q));
    d2eexz[38] +=
        (-std::pow(Pi, 2.5) *
         ((((C18219 * C203 - C18321 * C91 + C28003 * C1029 - C18322 * C940) *
                C10909 +
            (C18219 * C208 - C18321 * C97 + C28003 * C1033 - C18322 * C948) *
                C27882) *
               C1325 +
           ((C20224 - C20225 + C20226 - C20227) * C10909 +
            (C20228 - C20229 + C20230 - C20231) * C27882) *
               C1326 +
           ((C20232 - C20233 + C20234 - C20235) * C10909 +
            (C20236 - C20237 + C20238 - C20239) * C27882) *
               C1327) *
              C935 +
          (((C18321 * C940 - C18219 * C1029 + C18322 * C2981 - C28003 * C3110) *
                C10909 +
            (C18321 * C948 - C18219 * C1033 + C18322 * C2985 - C28003 * C3113) *
                C27882) *
               C1325 +
           ((C18321 * C2467 - C18219 * C2588 + C18322 * C3551 -
             C28003 * C3662) *
                C10909 +
            (C18321 * C2475 - C18219 * C2592 + C18322 * C3555 -
             C28003 * C3664) *
                C27882) *
               C1326 +
           ((C18321 * C2465 - C18219 * C2590 + C18322 * C12390 -
             C28003 * C12513) *
                C10909 +
            (C18321 * C2471 - C18219 * C2594 + C18322 * C12392 -
             C28003 * C12514) *
                C27882) *
               C1327) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C18219 * C203 - C18321 * C91 + C28003 * C1029 - C18322 * C940) *
               C9465 +
           (C18219 * C208 - C18321 * C97 + C28003 * C1033 - C18322 * C948) *
               C9460 +
           (C18324 - C18325 + C18326 - C18327) * C9467 +
           (C18328 - C18329 + C18330 - C18331) * C9461 +
           (C18332 - C18333 + C18334 - C18335) * C9469 +
           (C18336 - C18337 + C18338 - C18339) * C9462) *
              C27928 * C935 +
          ((C18321 * C940 - C18219 * C1029 + C18322 * C2981 - C28003 * C3110) *
               C9465 +
           (C18321 * C948 - C18219 * C1033 + C18322 * C2985 - C28003 * C3113) *
               C9460 +
           (C18321 * C939 - C18219 * C1030 + C18322 * C2982 - C28003 * C3111) *
               C9467 +
           (C18321 * C946 - C18219 * C1034 + C18322 * C2987 - C28003 * C3114) *
               C9461 +
           (C18321 * C938 - C18219 * C1031 + C18322 * C2983 - C28003 * C3112) *
               C9469 +
           (C18321 * C944 - C18219 * C1035 + C18322 * C2989 - C28003 * C3115) *
               C9462) *
              C27928 * C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C21098 * C203 - C21170 * C91 + C21099 * C1029 - C21171 * C940 +
            C21100 * C3110 - C21172 * C2981 + C21101 * C4180 - C21173 * C4033) *
               C10909 +
           (C21098 * C208 - C21170 * C97 + C21099 * C1033 - C21171 * C948 +
            C21100 * C3113 - C21172 * C2985 + C21101 * C4182 - C21173 * C4037) *
               C27882) *
              C27928 * C935 +
          ((C21170 * C940 - C21098 * C1029 + C21171 * C2981 - C21099 * C3110 +
            C21172 * C4033 - C21100 * C4180 + C21173 * C21722 -
            C21101 * C21807) *
               C10909 +
           (C21170 * C948 - C21098 * C1033 + C21171 * C2985 - C21099 * C3113 +
            C21172 * C4037 - C21100 * C4182 + C21173 * C21724 -
            C21101 * C21808) *
               C27882) *
              C27928 * C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q));
    d2eeyx[38] +=
        (-std::pow(Pi, 2.5) *
         ((((C27882 * C96 - C10909 * C91) * C1394 +
            (C27882 * C264 - C10909 * C259) * C1325 +
            (C11366 - C11367) * C1395 + (C11368 - C11369) * C1326 +
            (C11370 - C11371) * C1396 + (C11372 - C11373) * C1327) *
               C18219 +
           ((C13115 - C13116) * C1394 + (C13117 - C13118) * C1325 +
            (C12580 - C12581) * C1395 + (C12582 - C12583) * C1326 +
            (C17407 - C17408) * C1396 + (C17409 - C17410) * C1327) *
               C28003) *
              C935 +
          (((C13116 - C13115) * C1394 + (C13118 - C13117) * C1325 +
            (C12581 - C12580) * C1395 + (C12583 - C12582) * C1326 +
            (C17408 - C17407) * C1396 + (C17410 - C17409) * C1327) *
               C18219 +
           ((C13120 - C13119) * C1394 + (C13122 - C13121) * C1325 +
            (C12585 - C12584) * C1395 + (C12587 - C12586) * C1326 +
            (C10909 * C12390 - C27882 * C12391) * C1396 +
            (C10909 * C12577 - C27882 * C12578) * C1327) *
               C28003) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C9460 * C96 - C9465 * C91 + C9461 * C98 - C9467 * C92 +
             C9462 * C100 - C9469 * C93) *
                C145 +
            (C9460 * C264 - C9465 * C259 + C9461 * C265 - C9467 * C260 +
             C9462 * C266 - C9469 * C261) *
                C27928) *
               C18219 +
           ((C19349 - C19350 + C19351 - C19352 + C19353 - C19354) * C145 +
            (C19355 - C19356 + C19357 - C19358 + C19359 - C19360) * C27928) *
               C28003) *
              C935 +
          (((C19350 - C19349 + C19352 - C19351 + C19354 - C19353) * C145 +
            (C19356 - C19355 + C19358 - C19357 + C19360 - C19359) * C27928) *
               C18219 +
           ((C9465 * C2981 - C9460 * C2984 + C9467 * C2982 - C9461 * C2986 +
             C9469 * C2983 - C9462 * C2988) *
                C145 +
            (C9465 * C3178 - C9460 * C3181 + C9467 * C3179 - C9461 * C3182 +
             C9469 * C3180 - C9462 * C3183) *
                C27928) *
               C28003) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C27882 * C96 - C10909 * C91) * C145 +
            (C27882 * C264 - C10909 * C259) * C27928) *
               C21098 +
           ((C13115 - C13116) * C145 + (C13117 - C13118) * C27928) * C21099 +
           ((C13119 - C13120) * C145 + (C13121 - C13122) * C27928) * C21100 +
           ((C21846 - C21847) * C145 + (C21848 - C21849) * C27928) * C21101) *
              C935 +
          (((C13116 - C13115) * C145 + (C13118 - C13117) * C27928) * C21098 +
           ((C13120 - C13119) * C145 + (C13122 - C13121) * C27928) * C21099 +
           ((C21847 - C21846) * C145 + (C21849 - C21848) * C27928) * C21100 +
           ((C10909 * C21722 - C27882 * C21723) * C145 +
            (C10909 * C21843 - C27882 * C21844) * C27928) *
               C21101) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q));
    d2eeyy[38] +=
        (-std::pow(Pi, 2.5) *
         (((C1394 * C146 - C1585 * C91 - C1394 * C259 + C1325 * C304 +
            C1395 * C615 - C1586 * C568 - C1395 * C699 + C1326 * C744 +
            C1396 * C1397 - C1587 * C1332 - C1396 * C1529 + C1327 * C1588) *
               C27882 * C18219 +
           (C20856 + C20857 + C20858) * C27882 * C28003) *
              C935 -
          ((C1396 * C12461 - C1587 * C12390 - C1396 * C12577 + C1327 * C12637 +
            C1395 * C3608 - C1586 * C3551 - C1395 * C3716 + C1326 * C3771 +
            C1394 * C3043 - C1585 * C2981 - C1394 * C3178 + C1325 * C3234) *
               C27882 * C28003 +
           (C20858 + C20857 + C20856) * C27882 * C18219) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C145 * C146 - C303 * C91 - C145 * C259 + C27928 * C304) * C9460 +
            C328 * C9461 + C329 * C9462) *
               C18219 +
           (C19411 + C19412 + C19413) * C28003) *
              C935 -
          (((C145 * C3045 - C303 * C2983 - C145 * C3180 + C27928 * C3236) *
                C9462 +
            C3251 * C9461 + C4322 * C9460) *
               C28003 +
           (C19413 + C19412 + C19411) * C18219) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C145 * C146 - C303 * C91 - C145 * C259 + C27928 * C304) * C27882 *
               C21098 +
           C21885 * C21099 + C21886 * C21100 + C21894 * C21101) *
              C935 -
          ((C145 * C21767 - C303 * C21722 - C145 * C21843 + C27928 * C21883) *
               C27882 * C21101 +
           C21894 * C21100 + C21886 * C21099 + C21885 * C21098) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q));
    d2eeyz[38] +=
        (-std::pow(Pi, 2.5) *
         (((C18219 * C203 - C18321 * C91 + C28003 * C1029 - C18322 * C940) *
               C1394 +
           (C18219 * C364 - C18321 * C259 + C28003 * C1151 - C18322 * C1071) *
               C1325 +
           (C20224 - C20225 + C20226 - C20227) * C1395 +
           (C20390 - C20391 + C20392 - C20393) * C1326 +
           (C20232 - C20233 + C20234 - C20235) * C1396 +
           (C20394 - C20395 + C20396 - C20397) * C1327) *
              C27882 * C935 +
          ((C18321 * C940 - C18219 * C1029 + C18322 * C2981 - C28003 * C3110) *
               C1394 +
           (C18321 * C1071 - C18219 * C1151 + C18322 * C3178 - C28003 * C3301) *
               C1325 +
           (C18321 * C2467 - C18219 * C2588 + C18322 * C3551 - C28003 * C3662) *
               C1395 +
           (C18321 * C2646 - C18219 * C2758 + C18322 * C3716 - C28003 * C3822) *
               C1326 +
           (C18321 * C2465 - C18219 * C2590 + C18322 * C12390 -
            C28003 * C12513) *
               C1396 +
           (C18321 * C2648 - C18219 * C2759 + C18322 * C12577 -
            C28003 * C12688) *
               C1327) *
              C27882 * C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C18219 * C203 - C18321 * C91 + C28003 * C1029 - C18322 * C940) *
                C145 +
            (C18219 * C364 - C18321 * C259 + C28003 * C1151 - C18322 * C1071) *
                C27928) *
               C9460 +
           ((C18324 - C18325 + C18326 - C18327) * C145 +
            (C18490 - C18491 + C18492 - C18493) * C27928) *
               C9461 +
           ((C18332 - C18333 + C18334 - C18335) * C145 +
            (C18494 - C18495 + C18496 - C18497) * C27928) *
               C9462) *
              C935 +
          (((C18321 * C940 - C18219 * C1029 + C18322 * C2981 - C28003 * C3110) *
                C145 +
            (C18321 * C1071 - C18219 * C1151 + C18322 * C3178 -
             C28003 * C3301) *
                C27928) *
               C9460 +
           ((C18321 * C939 - C18219 * C1030 + C18322 * C2982 - C28003 * C3111) *
                C145 +
            (C18321 * C1072 - C18219 * C1152 + C18322 * C3179 -
             C28003 * C3302) *
                C27928) *
               C9461 +
           ((C18321 * C938 - C18219 * C1031 + C18322 * C2983 - C28003 * C3112) *
                C145 +
            (C18321 * C1073 - C18219 * C1153 + C18322 * C3180 -
             C28003 * C3303) *
                C27928) *
               C9462) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C21098 * C203 - C21170 * C91 + C21099 * C1029 - C21171 * C940 +
            C21100 * C3110 - C21172 * C2981 + C21101 * C4180 - C21173 * C4033) *
               C145 +
           (C21098 * C364 - C21170 * C259 + C21099 * C1151 - C21171 * C1071 +
            C21100 * C3301 - C21172 * C3178 + C21101 * C4374 - C21173 * C4234) *
               C27928) *
              C27882 * C935 +
          ((C21170 * C940 - C21098 * C1029 + C21171 * C2981 - C21099 * C3110 +
            C21172 * C4033 - C21100 * C4180 + C21173 * C21722 -
            C21101 * C21807) *
               C145 +
           (C21170 * C1071 - C21098 * C1151 + C21171 * C3178 - C21099 * C3301 +
            C21172 * C4234 - C21100 * C4374 + C21173 * C21843 -
            C21101 * C21928) *
               C27928) *
              C27882 * C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q));
    d2eezx[38] +=
        (-std::pow(Pi, 2.5) *
         ((((C27882 * C96 - C10909 * C91) * C18321 +
            (C27882 * C414 - C10909 * C409) * C18219 +
            (C13115 - C13116) * C18322 + (C13305 - C13306) * C28003) *
               C1325 +
           ((C11366 - C11367) * C18321 + (C11486 - C11487) * C18219 +
            (C12580 - C12581) * C18322 + (C12748 - C12749) * C28003) *
               C1326 +
           ((C11370 - C11371) * C18321 + (C11488 - C11489) * C18219 +
            (C17407 - C17408) * C18322 + (C17565 - C17566) * C28003) *
               C1327) *
              C935 +
          (((C13116 - C13115) * C18321 + (C13306 - C13305) * C18219 +
            (C13120 - C13119) * C18322 + (C13308 - C13307) * C28003) *
               C1325 +
           ((C12581 - C12580) * C18321 + (C12749 - C12748) * C18219 +
            (C12585 - C12584) * C18322 + (C12751 - C12750) * C28003) *
               C1326 +
           ((C17408 - C17407) * C18321 + (C17566 - C17565) * C18219 +
            (C10909 * C12390 - C27882 * C12391) * C18322 +
            (C10909 * C12745 - C27882 * C12746) * C28003) *
               C1327) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C9460 * C96 - C9465 * C91 + C9461 * C98 - C9467 * C92 +
            C9462 * C100 - C9469 * C93) *
               C18321 +
           (C9460 * C414 - C9465 * C409 + C9461 * C415 - C9467 * C410 +
            C9462 * C416 - C9469 * C411) *
               C18219 +
           (C19349 - C19350 + C19351 - C19352 + C19353 - C19354) * C18322 +
           (C19514 - C19515 + C19516 - C19517 + C19518 - C19519) * C28003) *
              C27928 * C935 +
          ((C19350 - C19349 + C19352 - C19351 + C19354 - C19353) * C18321 +
           (C19515 - C19514 + C19517 - C19516 + C19519 - C19518) * C18219 +
           (C9465 * C2981 - C9460 * C2984 + C9467 * C2982 - C9461 * C2986 +
            C9469 * C2983 - C9462 * C2988) *
               C18322 +
           (C9465 * C3360 - C9460 * C3363 + C9467 * C3361 - C9461 * C3364 +
            C9469 * C3362 - C9462 * C3365) *
               C28003) *
              C27928 * C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C27882 * C96 - C10909 * C91) * C21170 +
           (C27882 * C414 - C10909 * C409) * C21098 +
           (C13115 - C13116) * C21171 + (C13305 - C13306) * C21099 +
           (C13119 - C13120) * C21172 + (C13307 - C13308) * C21100 +
           (C21846 - C21847) * C21173 + (C21966 - C21967) * C21101) *
              C27928 * C935 +
          ((C13116 - C13115) * C21170 + (C13306 - C13305) * C21098 +
           (C13120 - C13119) * C21171 + (C13308 - C13307) * C21099 +
           (C21847 - C21846) * C21172 + (C21967 - C21966) * C21100 +
           (C10909 * C21722 - C27882 * C21723) * C21173 +
           (C10909 * C21963 - C27882 * C21964) * C21101) *
              C27928 * C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q));
    d2eezy[38] +=
        (-std::pow(Pi, 2.5) *
         (((C1325 * C146 - C1394 * C91 + C1326 * C615 - C1395 * C568 +
            C1327 * C1397 - C1396 * C1332) *
               C18321 +
           (C1325 * C453 - C1394 * C409 + C1326 * C859 - C1395 * C817 +
            C1327 * C1775 - C1396 * C1719) *
               C18219 +
           (C20676 - C20677 + C20678 - C20679 + C20680 - C20681) * C18322 +
           (C21009 - C21010 + C21011 - C21012 + C21013 - C21014) * C28003) *
              C27882 * C935 +
          ((C20677 - C20676 + C20679 - C20678 + C20681 - C20680) * C18321 +
           (C21010 - C21009 + C21012 - C21011 + C21014 - C21013) * C18219 +
           (C1394 * C2981 - C1325 * C3043 + C1395 * C3551 - C1326 * C3608 +
            C1396 * C12390 - C1327 * C12461) *
               C18322 +
           (C1394 * C3360 - C1325 * C3416 + C1395 * C3874 - C1326 * C3928 +
            C1396 * C12745 - C1327 * C12801) *
               C28003) *
              C27882 * C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C27928 * C146 - C145 * C91) * C18321 +
            (C27928 * C453 - C145 * C409) * C18219 + (C4123 - C4124) * C18322 +
            (C4491 - C4492) * C28003) *
               C9460 +
           ((C157 - C158) * C18321 + (C459 - C460) * C18219 +
            (C3050 - C3051) * C18322 + (C3420 - C3421) * C28003) *
               C9461 +
           ((C161 - C162) * C18321 + (C461 - C462) * C18219 +
            (C6138 - C6139) * C18322 + (C6475 - C6476) * C28003) *
               C9462) *
              C935 +
          (((C4124 - C4123) * C18321 + (C4492 - C4491) * C18219 +
            (C4128 - C4127) * C18322 + (C4494 - C4493) * C28003) *
               C9460 +
           ((C3051 - C3050) * C18321 + (C3421 - C3420) * C18219 +
            (C3055 - C3054) * C18322 + (C3423 - C3422) * C28003) *
               C9461 +
           ((C6139 - C6138) * C18321 + (C6476 - C6475) * C18219 +
            (C145 * C2983 - C27928 * C3045) * C18322 +
            (C145 * C3362 - C27928 * C3418) * C28003) *
               C9462) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C27928 * C146 - C145 * C91) * C21170 +
           (C27928 * C453 - C145 * C409) * C21098 + (C4123 - C4124) * C21171 +
           (C4491 - C4492) * C21099 + (C4127 - C4128) * C21172 +
           (C4493 - C4494) * C21100 + (C21770 - C21771) * C21173 +
           (C22003 - C22004) * C21101) *
              C27882 * C935 +
          ((C4124 - C4123) * C21170 + (C4492 - C4491) * C21098 +
           (C4128 - C4127) * C21171 + (C4494 - C4493) * C21099 +
           (C21771 - C21770) * C21172 + (C22004 - C22003) * C21100 +
           (C145 * C21722 - C27928 * C21767) * C21173 +
           (C145 * C21963 - C27928 * C22001) * C21101) *
              C27882 * C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q));
    d2eezz[38] +=
        (-std::pow(Pi, 2.5) *
         (((C18321 * C203 - C18647 * C91 - C18321 * C409 + C18219 * C499 +
            C18322 * C1029 - C18648 * C940 - C18322 * C1189 + C28003 * C1272) *
               C1325 +
           (C20572 + C20573) * C1326 + (C20574 + C20575) * C1327) *
              C27882 * C935 -
          ((C18322 * C12513 - C18648 * C12390 - C18322 * C12745 +
            C28003 * C12852 + C18321 * C2590 - C18647 * C2465 - C18321 * C2814 +
            C18219 * C2926) *
               C1327 +
           (C18322 * C3662 - C18648 * C3551 - C18322 * C3874 + C28003 * C3981 +
            C18321 * C2588 - C18647 * C2467 - C18321 * C2812 + C18219 * C2927) *
               C1326 +
           (C18322 * C3110 - C18648 * C2981 - C18322 * C3360 + C28003 * C3476 +
            C18321 * C1029 - C18647 * C940 - C18321 * C1189 + C18219 * C1272) *
               C1325) *
              C27882 * C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C18321 * C203 - C18647 * C91 - C18321 * C409 + C18219 * C499 +
            C18322 * C1029 - C18648 * C940 - C18322 * C1189 + C28003 * C1272) *
               C27928 * C9460 +
           (C18674 + C18675) * C27928 * C9461 +
           (C18676 + C18677) * C27928 * C9462) *
              C935 -
          ((C18322 * C3112 - C18648 * C2983 - C18322 * C3362 + C28003 * C3478 +
            C18321 * C1031 - C18647 * C938 - C18321 * C1191 + C18219 * C1270) *
               C27928 * C9462 +
           (C18322 * C3111 - C18648 * C2982 - C18322 * C3361 + C28003 * C3477 +
            C18321 * C1030 - C18647 * C939 - C18321 * C1190 + C18219 * C1271) *
               C27928 * C9461 +
           (C18322 * C3110 - C18648 * C2981 - C18322 * C3360 + C28003 * C3476 +
            C18321 * C1029 - C18647 * C940 - C18321 * C1189 + C18219 * C1272) *
               C27928 * C9460) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C21170 * C203 - C21378 * C91 - C21170 * C409 + C21098 * C499 +
           C21171 * C1029 - C21379 * C940 - C21171 * C1189 + C21099 * C1272 +
           C21172 * C3110 - C21380 * C2981 - C21172 * C3360 + C21100 * C3476 +
           C21173 * C4180 - C21381 * C4033 - C21173 * C4426 + C21101 * C4545) *
              C27928 * C27882 * C935 -
          (C21173 * C21807 - C21381 * C21722 - C21173 * C21963 +
           C21101 * C22038 + C21172 * C4180 - C21380 * C4033 - C21172 * C4426 +
           C21100 * C4545 + C21171 * C3110 - C21379 * C2981 - C21171 * C3360 +
           C21099 * C3476 + C21170 * C1029 - C21378 * C940 - C21170 * C1189 +
           C21098 * C1272) *
              C27928 * C27882 * C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q));
    d2eexx[39] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C26731 * C96 - C13474 * C91 - C26731 * C97 + C28071 * C106 +
            C26724 * C98 - C13476 * C92 - C26724 * C99 + C27887 * C107) *
               C28114 +
           (C16196 + C16197) * C28115 +
           (C26731 * C2984 - C13474 * C2981 - C26731 * C2985 + C28071 * C2990 +
            C26724 * C2986 - C13476 * C2982 - C26724 * C2987 + C27887 * C2991) *
               C23899) *
              C27928 * C28119 * C28120 * C81 -
          ((C26724 * C2988 - C13476 * C2983 - C26724 * C2989 + C27887 * C2992 +
            C26731 * C2986 - C13474 * C2982 - C26731 * C2987 + C28071 * C2991) *
               C23899 +
           (C26724 * C943 - C13476 * C938 - C26724 * C944 + C27887 * C950 +
            C26731 * C945 - C13474 * C939 - C26731 * C946 + C28071 * C951) *
               C28115 +
           (C26724 * C100 - C13476 * C93 - C26724 * C101 + C27887 * C108 +
            C26731 * C98 - C13474 * C92 - C26731 * C99 + C28071 * C107) *
               C28114) *
              C27928 * C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eexy[39] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C27928 * C146 - C145 * C91) * C26731 +
                      (C27928 * C151 - C145 * C97) * C28071 +
                      (C157 - C158) * C26724 + (C159 - C160) * C27887) *
                         C28114 +
                     ((C4123 - C4124) * C26731 + (C4125 - C4126) * C28071 +
                      (C3050 - C3051) * C26724 + (C3052 - C3053) * C27887) *
                         C28115 +
                     ((C4127 - C4128) * C26731 + (C4129 - C4130) * C28071 +
                      (C3054 - C3055) * C26724 + (C3056 - C3057) * C27887) *
                         C23899) *
                        C28119 * C28120 * C81 +
                    (((C158 - C157) * C26731 + (C160 - C159) * C28071 +
                      (C162 - C161) * C26724 + (C164 - C163) * C27887) *
                         C28114 +
                     ((C3051 - C3050) * C26731 + (C3053 - C3052) * C28071 +
                      (C6139 - C6138) * C26724 + (C6141 - C6140) * C27887) *
                         C28115 +
                     ((C3055 - C3054) * C26731 + (C3057 - C3056) * C28071 +
                      (C145 * C2983 - C27928 * C3045) * C26724 +
                      (C145 * C2989 - C27928 * C3048) * C27887) *
                         C23899) *
                        C28119 * C28120 * C82)) /
                  (p * q * std::sqrt(p + q));
    d2eexz[39] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C28114 * C203 - C24000 * C91 + C28115 * C1029 - C24001 * C940 +
            C23899 * C3110 - C24002 * C2981) *
               C26731 +
           (C28114 * C208 - C24000 * C97 + C28115 * C1033 - C24001 * C948 +
            C23899 * C3113 - C24002 * C2985) *
               C28071 +
           (C24004 - C24005 + C24006 - C24007 + C24008 - C24009) * C26724 +
           (C24010 - C24011 + C24012 - C24013 + C24014 - C24015) * C27887) *
              C27928 * C28119 * C28120 * C81 +
          ((C24005 - C24004 + C24007 - C24006 + C24009 - C24008) * C26731 +
           (C24011 - C24010 + C24013 - C24012 + C24015 - C24014) * C28071 +
           (C24000 * C93 - C28114 * C205 + C24001 * C938 - C28115 * C1031 +
            C24002 * C2983 - C23899 * C3112) *
               C26724 +
           (C24000 * C101 - C28114 * C210 + C24001 * C944 - C28115 * C1035 +
            C24002 * C2989 - C23899 * C3115) *
               C27887) *
              C27928 * C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[39] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28071 * C96 - C26731 * C91 + C27887 * C98 - C26724 * C92) * C145 +
            (C28071 * C264 - C26731 * C259 + C27887 * C265 - C26724 * C260) *
                C27928) *
               C28114 +
           ((C16396 - C16397 + C16398 - C16399) * C145 +
            (C16400 - C16401 + C16402 - C16403) * C27928) *
               C28115 +
           ((C28071 * C2984 - C26731 * C2981 + C27887 * C2986 -
             C26724 * C2982) *
                C145 +
            (C28071 * C3181 - C26731 * C3178 + C27887 * C3182 -
             C26724 * C3179) *
                C27928) *
               C23899) *
              C28119 * C28120 * C81 +
          (((C26731 * C92 - C28071 * C98 + C26724 * C93 - C27887 * C100) *
                C145 +
            (C26731 * C260 - C28071 * C265 + C26724 * C261 - C27887 * C266) *
                C27928) *
               C28114 +
           ((C26731 * C939 - C28071 * C945 + C26724 * C938 - C27887 * C943) *
                C145 +
            (C26731 * C1072 - C28071 * C1076 + C26724 * C1073 -
             C27887 * C1077) *
                C27928) *
               C28115 +
           ((C26731 * C2982 - C28071 * C2986 + C26724 * C2983 -
             C27887 * C2988) *
                C145 +
            (C26731 * C3179 - C28071 * C3182 + C26724 * C3180 -
             C27887 * C3183) *
                C27928) *
               C23899) *
              C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[39] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C145 * C146 - C303 * C91 - C145 * C259 + C27928 * C304) * C28071 +
            C328 * C27887) *
               C28114 +
           (C4321 * C28071 + C3250 * C27887) * C28115 +
           (C4322 * C28071 + C3251 * C27887) * C23899) *
              C28119 * C28120 * C81 -
          (((C145 * C3045 - C303 * C2983 - C145 * C3180 + C27928 * C3236) *
                C27887 +
            C3251 * C28071) *
               C23899 +
           (C6316 * C27887 + C3250 * C28071) * C28115 +
           (C329 * C27887 + C328 * C28071) * C28114) *
              C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[39] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28114 * C203 - C24000 * C91 + C28115 * C1029 - C24001 * C940 +
             C23899 * C3110 - C24002 * C2981) *
                C145 +
            (C28114 * C364 - C24000 * C259 + C28115 * C1151 - C24001 * C1071 +
             C23899 * C3301 - C24002 * C3178) *
                C27928) *
               C28071 +
           ((C24004 - C24005 + C24006 - C24007 + C24008 - C24009) * C145 +
            (C24166 - C24167 + C24168 - C24169 + C24170 - C24171) * C27928) *
               C27887) *
              C28119 * C28120 * C81 +
          (((C24005 - C24004 + C24007 - C24006 + C24009 - C24008) * C145 +
            (C24167 - C24166 + C24169 - C24168 + C24171 - C24170) * C27928) *
               C28071 +
           ((C24000 * C93 - C28114 * C205 + C24001 * C938 - C28115 * C1031 +
             C24002 * C2983 - C23899 * C3112) *
                C145 +
            (C24000 * C261 - C28114 * C366 + C24001 * C1073 - C28115 * C1153 +
             C24002 * C3180 - C23899 * C3303) *
                C27928) *
               C27887) *
              C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eezx[39] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C28071 * C96 - C26731 * C91 + C27887 * C98 - C26724 * C92) *
               C24000 +
           (C28071 * C414 - C26731 * C409 + C27887 * C415 - C26724 * C410) *
               C28114 +
           (C16396 - C16397 + C16398 - C16399) * C24001 +
           (C16602 - C16603 + C16604 - C16605) * C28115 +
           (C28071 * C2984 - C26731 * C2981 + C27887 * C2986 - C26724 * C2982) *
               C24002 +
           (C28071 * C3363 - C26731 * C3360 + C27887 * C3364 - C26724 * C3361) *
               C23899) *
              C27928 * C28119 * C28120 * C81 +
          ((C26731 * C92 - C28071 * C98 + C26724 * C93 - C27887 * C100) *
               C24000 +
           (C26731 * C410 - C28071 * C415 + C26724 * C411 - C27887 * C416) *
               C28114 +
           (C26731 * C939 - C28071 * C945 + C26724 * C938 - C27887 * C943) *
               C24001 +
           (C26731 * C1190 - C28071 * C1194 + C26724 * C1191 - C27887 * C1195) *
               C28115 +
           (C26731 * C2982 - C28071 * C2986 + C26724 * C2983 - C27887 * C2988) *
               C24002 +
           (C26731 * C3361 - C28071 * C3364 + C26724 * C3362 - C27887 * C3365) *
               C23899) *
              C27928 * C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eezy[39] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C27928 * C146 - C145 * C91) * C24000 +
                      (C27928 * C453 - C145 * C409) * C28114 +
                      (C4123 - C4124) * C24001 + (C4491 - C4492) * C28115 +
                      (C4127 - C4128) * C24002 + (C4493 - C4494) * C23899) *
                         C28071 +
                     ((C157 - C158) * C24000 + (C459 - C460) * C28114 +
                      (C3050 - C3051) * C24001 + (C3420 - C3421) * C28115 +
                      (C3054 - C3055) * C24002 + (C3422 - C3423) * C23899) *
                         C27887) *
                        C28119 * C28120 * C81 +
                    (((C158 - C157) * C24000 + (C460 - C459) * C28114 +
                      (C3051 - C3050) * C24001 + (C3421 - C3420) * C28115 +
                      (C3055 - C3054) * C24002 + (C3423 - C3422) * C23899) *
                         C28071 +
                     ((C162 - C161) * C24000 + (C462 - C461) * C28114 +
                      (C6139 - C6138) * C24001 + (C6476 - C6475) * C28115 +
                      (C145 * C2983 - C27928 * C3045) * C24002 +
                      (C145 * C3362 - C27928 * C3418) * C23899) *
                         C27887) *
                        C28119 * C28120 * C82)) /
                  (p * q * std::sqrt(p + q));
    d2eezz[39] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C24000 * C203 - C24321 * C91 - C24000 * C409 + C28114 * C499 +
            C24001 * C1029 - C24322 * C940 - C24001 * C1189 + C28115 * C1272 +
            C24002 * C3110 - C24323 * C2981 - C24002 * C3360 + C23899 * C3476) *
               C27928 * C28071 +
           (C24343 + C24344 + C24345) * C27928 * C27887) *
              C28119 * C28120 * C81 -
          ((C24002 * C3112 - C24323 * C2983 - C24002 * C3362 + C23899 * C3478 +
            C24001 * C1031 - C24322 * C938 - C24001 * C1191 + C28115 * C1270 +
            C24000 * C205 - C24321 * C93 - C24000 * C411 + C28114 * C501) *
               C27928 * C27887 +
           (C24345 + C24344 + C24343) * C27928 * C28071) *
              C28119 * C28120 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eexx[40] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C26731 * C96 - C13474 * C91 - C26731 * C97 + C28071 * C106 +
            C26724 * C98 - C13476 * C92 - C26724 * C99 + C27887 * C107) *
               C28114 +
           (C16196 + C16197) * C28115 +
           (C26731 * C2984 - C13474 * C2981 - C26731 * C2985 + C28071 * C2990 +
            C26724 * C2986 - C13476 * C2982 - C26724 * C2987 + C27887 * C2991) *
               C23899) *
              C27928 * C28119 * C562 -
          ((C26724 * C3552 - C13476 * C3550 - C26724 * C3553 + C27887 * C3556 +
            C26731 * C3554 - C13474 * C3551 - C26731 * C3555 + C28071 * C3557) *
               C23899 +
           (C15577 + C15576) * C28115 + (C14001 + C14000) * C28114) *
              C27928 * C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eexy[40] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C27928 * C146 - C145 * C91) * C26731 +
                      (C27928 * C151 - C145 * C97) * C28071 +
                      (C157 - C158) * C26724 + (C159 - C160) * C27887) *
                         C28114 +
                     ((C4123 - C4124) * C26731 + (C4125 - C4126) * C28071 +
                      (C3050 - C3051) * C26724 + (C3052 - C3053) * C27887) *
                         C28115 +
                     ((C4127 - C4128) * C26731 + (C4129 - C4130) * C28071 +
                      (C3054 - C3055) * C26724 + (C3056 - C3057) * C27887) *
                         C23899) *
                        C28119 * C562 +
                    (((C145 * C568 - C27928 * C615) * C26731 +
                      (C145 * C576 - C27928 * C619) * C28071 +
                      (C145 * C567 - C27928 * C616) * C26724 +
                      (C145 * C574 - C27928 * C620) * C27887) *
                         C28114 +
                     ((C145 * C2467 - C27928 * C2530) * C26731 +
                      (C145 * C2475 - C27928 * C2534) * C28071 +
                      (C145 * C2466 - C27928 * C2532) * C26724 +
                      (C145 * C2473 - C27928 * C2536) * C27887) *
                         C28115 +
                     ((C145 * C3551 - C27928 * C3608) * C26731 +
                      (C145 * C3555 - C27928 * C3610) * C28071 +
                      (C145 * C3550 - C27928 * C3609) * C26724 +
                      (C145 * C3553 - C27928 * C3611) * C27887) *
                         C23899) *
                        C28119 * C563) *
                   C28121) /
                  (p * q * std::sqrt(p + q));
    d2eexz[40] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C28114 * C203 - C24000 * C91 + C28115 * C1029 - C24001 * C940 +
            C23899 * C3110 - C24002 * C2981) *
               C26731 +
           (C28114 * C208 - C24000 * C97 + C28115 * C1033 - C24001 * C948 +
            C23899 * C3113 - C24002 * C2985) *
               C28071 +
           (C24004 - C24005 + C24006 - C24007 + C24008 - C24009) * C26724 +
           (C24010 - C24011 + C24012 - C24013 + C24014 - C24015) * C27887) *
              C27928 * C28119 * C562 +
          ((C24000 * C568 - C28114 * C657 + C24001 * C2467 - C28115 * C2588 +
            C24002 * C3551 - C23899 * C3662) *
               C26731 +
           (C24000 * C576 - C28114 * C661 + C24001 * C2475 - C28115 * C2592 +
            C24002 * C3555 - C23899 * C3664) *
               C28071 +
           (C24000 * C567 - C28114 * C658 + C24001 * C2466 - C28115 * C2589 +
            C24002 * C3550 - C23899 * C3663) *
               C26724 +
           (C24000 * C574 - C28114 * C662 + C24001 * C2473 - C28115 * C2593 +
            C24002 * C3553 - C23899 * C3665) *
               C27887) *
              C27928 * C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eeyx[40] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28071 * C96 - C26731 * C91 + C27887 * C98 - C26724 * C92) * C145 +
            (C28071 * C264 - C26731 * C259 + C27887 * C265 - C26724 * C260) *
                C27928) *
               C28114 +
           ((C16396 - C16397 + C16398 - C16399) * C145 +
            (C16400 - C16401 + C16402 - C16403) * C27928) *
               C28115 +
           ((C28071 * C2984 - C26731 * C2981 + C27887 * C2986 -
             C26724 * C2982) *
                C145 +
            (C28071 * C3181 - C26731 * C3178 + C27887 * C3182 -
             C26724 * C3179) *
                C27928) *
               C23899) *
              C28119 * C562 +
          (((C14155 - C14154 + C14157 - C14156) * C145 +
            (C14159 - C14158 + C14161 - C14160) * C27928) *
               C28114 +
           ((C15777 - C15776 + C15779 - C15778) * C145 +
            (C15781 - C15780 + C15783 - C15782) * C27928) *
               C28115 +
           ((C26731 * C3551 - C28071 * C3554 + C26724 * C3550 -
             C27887 * C3552) *
                C145 +
            (C26731 * C3716 - C28071 * C3718 + C26724 * C3717 -
             C27887 * C3719) *
                C27928) *
               C23899) *
              C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eeyy[40] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C145 * C146 - C303 * C91 - C145 * C259 + C27928 * C304) * C28071 +
            C328 * C27887) *
               C28114 +
           (C4321 * C28071 + C3250 * C27887) * C28115 +
           (C4322 * C28071 + C3251 * C27887) * C23899) *
              C28119 * C562 -
          (((C145 * C3609 - C303 * C3550 - C145 * C3717 + C27928 * C3770) *
                C27887 +
            (C145 * C3608 - C303 * C3551 - C145 * C3716 + C27928 * C3771) *
                C28071) *
               C23899 +
           ((C145 * C2532 - C303 * C2466 - C145 * C2647 + C27928 * C2705) *
                C27887 +
            (C145 * C2530 - C303 * C2467 - C145 * C2646 + C27928 * C2707) *
                C28071) *
               C28115 +
           ((C145 * C616 - C303 * C567 - C145 * C700 + C27928 * C743) * C27887 +
            (C145 * C615 - C303 * C568 - C145 * C699 + C27928 * C744) *
                C28071) *
               C28114) *
              C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eeyz[40] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28114 * C203 - C24000 * C91 + C28115 * C1029 - C24001 * C940 +
             C23899 * C3110 - C24002 * C2981) *
                C145 +
            (C28114 * C364 - C24000 * C259 + C28115 * C1151 - C24001 * C1071 +
             C23899 * C3301 - C24002 * C3178) *
                C27928) *
               C28071 +
           ((C24004 - C24005 + C24006 - C24007 + C24008 - C24009) * C145 +
            (C24166 - C24167 + C24168 - C24169 + C24170 - C24171) * C27928) *
               C27887) *
              C28119 * C562 +
          (((C24000 * C568 - C28114 * C657 + C24001 * C2467 - C28115 * C2588 +
             C24002 * C3551 - C23899 * C3662) *
                C145 +
            (C24000 * C699 - C28114 * C779 + C24001 * C2646 - C28115 * C2758 +
             C24002 * C3716 - C23899 * C3822) *
                C27928) *
               C28071 +
           ((C24000 * C567 - C28114 * C658 + C24001 * C2466 - C28115 * C2589 +
             C24002 * C3550 - C23899 * C3663) *
                C145 +
            (C24000 * C700 - C28114 * C780 + C24001 * C2647 - C28115 * C2760 +
             C24002 * C3717 - C23899 * C3823) *
                C27928) *
               C27887) *
              C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eezx[40] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C28071 * C96 - C26731 * C91 + C27887 * C98 - C26724 * C92) *
               C24000 +
           (C28071 * C414 - C26731 * C409 + C27887 * C415 - C26724 * C410) *
               C28114 +
           (C16396 - C16397 + C16398 - C16399) * C24001 +
           (C16602 - C16603 + C16604 - C16605) * C28115 +
           (C28071 * C2984 - C26731 * C2981 + C27887 * C2986 - C26724 * C2982) *
               C24002 +
           (C28071 * C3363 - C26731 * C3360 + C27887 * C3364 - C26724 * C3361) *
               C23899) *
              C27928 * C28119 * C562 +
          ((C14155 - C14154 + C14157 - C14156) * C24000 +
           (C14321 - C14320 + C14323 - C14322) * C28114 +
           (C15777 - C15776 + C15779 - C15778) * C24001 +
           (C15983 - C15982 + C15985 - C15984) * C28115 +
           (C26731 * C3551 - C28071 * C3554 + C26724 * C3550 - C27887 * C3552) *
               C24002 +
           (C26731 * C3874 - C28071 * C3876 + C26724 * C3875 - C27887 * C3877) *
               C23899) *
              C27928 * C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eezy[40] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C27928 * C146 - C145 * C91) * C24000 +
                      (C27928 * C453 - C145 * C409) * C28114 +
                      (C4123 - C4124) * C24001 + (C4491 - C4492) * C28115 +
                      (C4127 - C4128) * C24002 + (C4493 - C4494) * C23899) *
                         C28071 +
                     ((C157 - C158) * C24000 + (C459 - C460) * C28114 +
                      (C3050 - C3051) * C24001 + (C3420 - C3421) * C28115 +
                      (C3054 - C3055) * C24002 + (C3422 - C3423) * C23899) *
                         C27887) *
                        C28119 * C562 +
                    (((C145 * C568 - C27928 * C615) * C24000 +
                      (C145 * C817 - C27928 * C859) * C28114 +
                      (C145 * C2467 - C27928 * C2530) * C24001 +
                      (C145 * C2812 - C27928 * C2870) * C28115 +
                      (C145 * C3551 - C27928 * C3608) * C24002 +
                      (C145 * C3874 - C27928 * C3928) * C23899) *
                         C28071 +
                     ((C145 * C567 - C27928 * C616) * C24000 +
                      (C145 * C818 - C27928 * C860) * C28114 +
                      (C145 * C2466 - C27928 * C2532) * C24001 +
                      (C145 * C2813 - C27928 * C2872) * C28115 +
                      (C145 * C3550 - C27928 * C3609) * C24002 +
                      (C145 * C3875 - C27928 * C3929) * C23899) *
                         C27887) *
                        C28119 * C563) *
                   C28121) /
                  (p * q * std::sqrt(p + q));
    d2eezz[40] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C24000 * C203 - C24321 * C91 - C24000 * C409 + C28114 * C499 +
            C24001 * C1029 - C24322 * C940 - C24001 * C1189 + C28115 * C1272 +
            C24002 * C3110 - C24323 * C2981 - C24002 * C3360 + C23899 * C3476) *
               C27928 * C28071 +
           (C24343 + C24344 + C24345) * C27928 * C27887) *
              C28119 * C562 -
          ((C24002 * C3663 - C24323 * C3550 - C24002 * C3875 + C23899 * C3980 +
            C24001 * C2589 - C24322 * C2466 - C24001 * C2813 + C28115 * C2925 +
            C24000 * C658 - C24321 * C567 - C24000 * C818 + C28114 * C899) *
               C27928 * C27887 +
           (C24002 * C3662 - C24323 * C3551 - C24002 * C3874 + C23899 * C3981 +
            C24001 * C2588 - C24322 * C2467 - C24001 * C2812 + C28115 * C2927 +
            C24000 * C657 - C24321 * C568 - C24000 * C817 + C28114 * C900) *
               C27928 * C28071) *
              C28119 * C563) *
         C28121) /
        (p * q * std::sqrt(p + q));
    d2eexx[41] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C26731 * C96 - C13474 * C91 - C26731 * C97 + C28071 * C106 +
            C26724 * C98 - C13476 * C92 - C26724 * C99 + C27887 * C107) *
               C28114 +
           (C16196 + C16197) * C28115 + (C24858 + C24859) * C23899) *
              C27928 * C935 -
          ((C26724 * C4034 - C13476 * C4032 - C26724 * C4035 + C27887 * C4038 +
            C26731 * C4036 - C13474 * C4033 - C26731 * C4037 + C28071 * C4039) *
               C23899 +
           (C24859 + C24858) * C28115 + (C16197 + C16196) * C28114) *
              C27928 * C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eexy[41] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C27928 * C146 - C145 * C91) * C26731 +
                      (C27928 * C151 - C145 * C97) * C28071 +
                      (C157 - C158) * C26724 + (C159 - C160) * C27887) *
                         C28114 +
                     ((C4123 - C4124) * C26731 + (C4125 - C4126) * C28071 +
                      (C3050 - C3051) * C26724 + (C3052 - C3053) * C27887) *
                         C28115 +
                     ((C4127 - C4128) * C26731 + (C4129 - C4130) * C28071 +
                      (C3054 - C3055) * C26724 + (C3056 - C3057) * C27887) *
                         C23899) *
                        C935 +
                    (((C4124 - C4123) * C26731 + (C4126 - C4125) * C28071 +
                      (C3051 - C3050) * C26724 + (C3053 - C3052) * C27887) *
                         C28114 +
                     ((C4128 - C4127) * C26731 + (C4130 - C4129) * C28071 +
                      (C3055 - C3054) * C26724 + (C3057 - C3056) * C27887) *
                         C28115 +
                     ((C21771 - C21770) * C26731 + (C21773 - C21772) * C28071 +
                      (C145 * C4032 - C27928 * C4119) * C26724 +
                      (C145 * C4035 - C27928 * C4121) * C27887) *
                         C23899) *
                        C936) *
                   C28120 * C28121) /
                  (p * q * std::sqrt(p + q));
    d2eexz[41] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C28114 * C203 - C24000 * C91 + C28115 * C1029 - C24001 * C940 +
            C23899 * C3110 - C24002 * C2981) *
               C26731 +
           (C28114 * C208 - C24000 * C97 + C28115 * C1033 - C24001 * C948 +
            C23899 * C3113 - C24002 * C2985) *
               C28071 +
           (C24004 - C24005 + C24006 - C24007 + C24008 - C24009) * C26724 +
           (C24010 - C24011 + C24012 - C24013 + C24014 - C24015) * C27887) *
              C27928 * C935 +
          ((C24000 * C940 - C28114 * C1029 + C24001 * C2981 - C28115 * C3110 +
            C24002 * C4033 - C23899 * C4180) *
               C26731 +
           (C24000 * C948 - C28114 * C1033 + C24001 * C2985 - C28115 * C3113 +
            C24002 * C4037 - C23899 * C4182) *
               C28071 +
           (C24000 * C939 - C28114 * C1030 + C24001 * C2982 - C28115 * C3111 +
            C24002 * C4032 - C23899 * C4181) *
               C26724 +
           (C24000 * C946 - C28114 * C1034 + C24001 * C2987 - C28115 * C3114 +
            C24002 * C4035 - C23899 * C4183) *
               C27887) *
              C27928 * C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eeyx[41] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28071 * C96 - C26731 * C91 + C27887 * C98 - C26724 * C92) * C145 +
            (C28071 * C264 - C26731 * C259 + C27887 * C265 - C26724 * C260) *
                C27928) *
               C28114 +
           ((C16396 - C16397 + C16398 - C16399) * C145 +
            (C16400 - C16401 + C16402 - C16403) * C27928) *
               C28115 +
           ((C25010 - C25011 + C25012 - C25013) * C145 +
            (C25014 - C25015 + C25016 - C25017) * C27928) *
               C23899) *
              C935 +
          (((C16397 - C16396 + C16399 - C16398) * C145 +
            (C16401 - C16400 + C16403 - C16402) * C27928) *
               C28114 +
           ((C25011 - C25010 + C25013 - C25012) * C145 +
            (C25015 - C25014 + C25017 - C25016) * C27928) *
               C28115 +
           ((C26731 * C4033 - C28071 * C4036 + C26724 * C4032 -
             C27887 * C4034) *
                C145 +
            (C26731 * C4234 - C28071 * C4236 + C26724 * C4235 -
             C27887 * C4237) *
                C27928) *
               C23899) *
              C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eeyy[41] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C145 * C146 - C303 * C91 - C145 * C259 + C27928 * C304) * C28071 +
            C328 * C27887) *
               C28114 +
           (C25068 + C25069) * C28115 + (C25070 + C25071) * C23899) *
              C935 -
          (((C145 * C4119 - C303 * C4032 - C145 * C4235 + C27928 * C4304) *
                C27887 +
            C21893 * C28071) *
               C23899 +
           (C25071 + C25070) * C28115 + (C25069 + C25068) * C28114) *
              C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eeyz[41] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C28114 * C203 - C24000 * C91 + C28115 * C1029 - C24001 * C940 +
             C23899 * C3110 - C24002 * C2981) *
                C145 +
            (C28114 * C364 - C24000 * C259 + C28115 * C1151 - C24001 * C1071 +
             C23899 * C3301 - C24002 * C3178) *
                C27928) *
               C28071 +
           ((C24004 - C24005 + C24006 - C24007 + C24008 - C24009) * C145 +
            (C24166 - C24167 + C24168 - C24169 + C24170 - C24171) * C27928) *
               C27887) *
              C935 +
          (((C24000 * C940 - C28114 * C1029 + C24001 * C2981 - C28115 * C3110 +
             C24002 * C4033 - C23899 * C4180) *
                C145 +
            (C24000 * C1071 - C28114 * C1151 + C24001 * C3178 - C28115 * C3301 +
             C24002 * C4234 - C23899 * C4374) *
                C27928) *
               C28071 +
           ((C24000 * C939 - C28114 * C1030 + C24001 * C2982 - C28115 * C3111 +
             C24002 * C4032 - C23899 * C4181) *
                C145 +
            (C24000 * C1072 - C28114 * C1152 + C24001 * C3179 - C28115 * C3302 +
             C24002 * C4235 - C23899 * C4375) *
                C27928) *
               C27887) *
              C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eezx[41] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C28071 * C96 - C26731 * C91 + C27887 * C98 - C26724 * C92) *
               C24000 +
           (C28071 * C414 - C26731 * C409 + C27887 * C415 - C26724 * C410) *
               C28114 +
           (C16396 - C16397 + C16398 - C16399) * C24001 +
           (C16602 - C16603 + C16604 - C16605) * C28115 +
           (C25010 - C25011 + C25012 - C25013) * C24002 +
           (C25172 - C25173 + C25174 - C25175) * C23899) *
              C27928 * C935 +
          ((C16397 - C16396 + C16399 - C16398) * C24000 +
           (C16603 - C16602 + C16605 - C16604) * C28114 +
           (C25011 - C25010 + C25013 - C25012) * C24001 +
           (C25173 - C25172 + C25175 - C25174) * C28115 +
           (C26731 * C4033 - C28071 * C4036 + C26724 * C4032 - C27887 * C4034) *
               C24002 +
           (C26731 * C4426 - C28071 * C4428 + C26724 * C4427 - C27887 * C4429) *
               C23899) *
              C27928 * C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eezy[41] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C27928 * C146 - C145 * C91) * C24000 +
                      (C27928 * C453 - C145 * C409) * C28114 +
                      (C4123 - C4124) * C24001 + (C4491 - C4492) * C28115 +
                      (C4127 - C4128) * C24002 + (C4493 - C4494) * C23899) *
                         C28071 +
                     ((C157 - C158) * C24000 + (C459 - C460) * C28114 +
                      (C3050 - C3051) * C24001 + (C3420 - C3421) * C28115 +
                      (C3054 - C3055) * C24002 + (C3422 - C3423) * C23899) *
                         C27887) *
                        C935 +
                    (((C4124 - C4123) * C24000 + (C4492 - C4491) * C28114 +
                      (C4128 - C4127) * C24001 + (C4494 - C4493) * C28115 +
                      (C21771 - C21770) * C24002 + (C22004 - C22003) * C23899) *
                         C28071 +
                     ((C3051 - C3050) * C24000 + (C3421 - C3420) * C28114 +
                      (C3055 - C3054) * C24001 + (C3423 - C3422) * C28115 +
                      (C145 * C4032 - C27928 * C4119) * C24002 +
                      (C145 * C4427 - C27928 * C4489) * C23899) *
                         C27887) *
                        C936) *
                   C28120 * C28121) /
                  (p * q * std::sqrt(p + q));
    d2eezz[41] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C24000 * C203 - C24321 * C91 - C24000 * C409 + C28114 * C499 +
            C24001 * C1029 - C24322 * C940 - C24001 * C1189 + C28115 * C1272 +
            C24002 * C3110 - C24323 * C2981 - C24002 * C3360 + C23899 * C3476) *
               C27928 * C28071 +
           (C24343 + C24344 + C24345) * C27928 * C27887) *
              C935 -
          ((C24002 * C4181 - C24323 * C4032 - C24002 * C4427 + C23899 * C4544 +
            C24001 * C3111 - C24322 * C2982 - C24001 * C3361 + C28115 * C3477 +
            C24000 * C1030 - C24321 * C939 - C24000 * C1190 + C28114 * C1271) *
               C27928 * C27887 +
           (C24002 * C4180 - C24323 * C4033 - C24002 * C4426 + C23899 * C4545 +
            C24001 * C3110 - C24322 * C2981 - C24001 * C3360 + C28115 * C3476 +
            C24000 * C1029 - C24321 * C940 - C24000 * C1189 + C28114 * C1272) *
               C27928 * C28071) *
              C936) *
         C28120 * C28121) /
        (p * q * std::sqrt(p + q));
    d2eexx[42] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C9465 * C96 - C9466 * C91 - C9465 * C97 + C9460 * C106 +
            C9467 * C98 - C9468 * C92 - C9467 * C99 + C9461 * C107 +
            C9469 * C100 - C9470 * C93 - C9469 * C101 + C9462 * C108) *
               C18219 +
           (C9465 * C947 - C9466 * C940 - C9465 * C948 + C9460 * C952 +
            C9467 * C945 - C9468 * C939 - C9467 * C946 + C9461 * C951 +
            C9469 * C943 - C9470 * C938 - C9469 * C944 + C9462 * C950) *
               C28003) *
              C27928 * C28119 * C28120 * C81 -
          ((C9469 * C941 - C9470 * C937 - C9469 * C942 + C9462 * C949 +
            C9467 * C943 - C9468 * C938 - C9467 * C944 + C9461 * C950 +
            C9465 * C945 - C9466 * C939 - C9465 * C946 + C9460 * C951) *
               C28003 +
           (C9469 * C102 - C9470 * C94 - C9469 * C103 + C9462 * C109 +
            C9467 * C100 - C9468 * C93 - C9467 * C101 + C9461 * C108 +
            C9465 * C98 - C9466 * C92 - C9465 * C99 + C9460 * C107) *
               C18219) *
              C27928 * C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C10909 * C96 - C10910 * C91 - C10909 * C97 + C27882 * C106) *
                C18219 +
            C12941 * C28003) *
               C1325 +
           (C11248 * C18219 + C12408 * C28003) * C1326 +
           (C11249 * C18219 + C17247 * C28003) * C1327) *
              C28119 * C28120 * C81 -
          (((C10909 * C2468 - C10910 * C2464 - C10909 * C2469 +
             C27882 * C2476) *
                C28003 +
            (C10909 * C1337 - C10910 * C1333 - C10909 * C1338 +
             C27882 * C1342) *
                C18219) *
               C1327 +
           ((C10909 * C2472 - C10910 * C2466 - C10909 * C2473 +
             C27882 * C2478) *
                C28003 +
            (C10909 * C573 - C10910 * C567 - C10909 * C574 + C27882 * C579) *
                C18219) *
               C1326 +
           ((C10909 * C945 - C10910 * C939 - C10909 * C946 + C27882 * C951) *
                C28003 +
            (C10909 * C98 - C10910 * C92 - C10909 * C99 + C27882 * C107) *
                C18219) *
               C1325) *
              C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eexy[42] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C27928 * C146 - C145 * C91) * C9465 +
            (C27928 * C151 - C145 * C97) * C9460 + (C157 - C158) * C9467 +
            (C159 - C160) * C9461 + (C161 - C162) * C9469 +
            (C163 - C164) * C9462) *
               C18219 +
           ((C4123 - C4124) * C9465 + (C4125 - C4126) * C9460 +
            (C3050 - C3051) * C9467 + (C3052 - C3053) * C9461 +
            (C6138 - C6139) * C9469 + (C6140 - C6141) * C9462) *
               C28003) *
              C28119 * C28120 * C81 +
          (((C158 - C157) * C9465 + (C160 - C159) * C9460 +
            (C162 - C161) * C9467 + (C164 - C163) * C9461 +
            (C166 - C165) * C9469 + (C168 - C167) * C9462) *
               C18219 +
           ((C3051 - C3050) * C9465 + (C3053 - C3052) * C9460 +
            (C6139 - C6138) * C9467 + (C6141 - C6140) * C9461 +
            (C145 * C937 - C27928 * C990) * C9469 +
            (C145 * C942 - C27928 * C994) * C9462) *
               C28003) *
              C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1325 * C146 - C1394 * C91 + C1326 * C615 - C1395 * C568 +
             C1327 * C1397 - C1396 * C1332) *
                C10909 +
            (C1325 * C151 - C1394 * C97 + C1326 * C619 - C1395 * C576 +
             C1327 * C1400 - C1396 * C1336) *
                C27882) *
               C18219 +
           ((C1325 * C987 - C1394 * C940 + C1326 * C2530 - C1395 * C2467 +
             C1327 * C2531 - C1396 * C2465) *
                C10909 +
            (C1325 * C991 - C1394 * C948 + C1326 * C2534 - C1395 * C2475 +
             C1327 * C2535 - C1396 * C2471) *
                C27882) *
               C28003) *
              C28119 * C28120 * C81 +
          (((C1405 - C1404 + C1407 - C1406 + C1409 - C1408) * C10909 +
            (C1411 - C1410 + C1413 - C1412 + C1415 - C1414) * C27882) *
               C18219 +
           ((C1394 * C939 - C1325 * C988 + C1395 * C2466 - C1326 * C2532 +
             C1396 * C2464 - C1327 * C2533) *
                C10909 +
            (C1394 * C946 - C1325 * C992 + C1395 * C2473 - C1326 * C2536 +
             C1396 * C2469 - C1327 * C2537) *
                C27882) *
               C28003) *
              C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eexz[42] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C18219 * C203 - C18321 * C91 + C28003 * C1029 - C18322 * C940) *
               C9465 +
           (C18219 * C208 - C18321 * C97 + C28003 * C1033 - C18322 * C948) *
               C9460 +
           (C18324 - C18325 + C18326 - C18327) * C9467 +
           (C18328 - C18329 + C18330 - C18331) * C9461 +
           (C18332 - C18333 + C18334 - C18335) * C9469 +
           (C18336 - C18337 + C18338 - C18339) * C9462) *
              C27928 * C28119 * C28120 * C81 +
          ((C18325 - C18324 + C18327 - C18326) * C9465 +
           (C18329 - C18328 + C18331 - C18330) * C9460 +
           (C18333 - C18332 + C18335 - C18334) * C9467 +
           (C18337 - C18336 + C18339 - C18338) * C9461 +
           (C18321 * C94 - C18219 * C206 + C18322 * C937 - C28003 * C1032) *
               C9469 +
           (C18321 * C103 - C18219 * C211 + C18322 * C942 - C28003 * C1036) *
               C9462) *
              C27928 * C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C18219 * C203 - C18321 * C91 + C28003 * C1029 - C18322 * C940) *
                C10909 +
            (C18219 * C208 - C18321 * C97 + C28003 * C1033 - C18322 * C948) *
                C27882) *
               C1325 +
           ((C18219 * C657 - C18321 * C568 + C28003 * C2588 - C18322 * C2467) *
                C10909 +
            (C18219 * C661 - C18321 * C576 + C28003 * C2592 - C18322 * C2475) *
                C27882) *
               C1326 +
           ((C18219 * C1465 - C18321 * C1332 + C28003 * C2590 -
             C18322 * C2465) *
                C10909 +
            (C18219 * C1468 - C18321 * C1336 + C28003 * C2594 -
             C18322 * C2471) *
                C27882) *
               C1327) *
              C28119 * C28120 * C81 +
          (((C18325 - C18324 + C18327 - C18326) * C10909 +
            (C18329 - C18328 + C18331 - C18330) * C27882) *
               C1325 +
           ((C18321 * C567 - C18219 * C658 + C18322 * C2466 - C28003 * C2589) *
                C10909 +
            (C18321 * C574 - C18219 * C662 + C18322 * C2473 - C28003 * C2593) *
                C27882) *
               C1326 +
           ((C18321 * C1333 - C18219 * C1466 + C18322 * C2464 -
             C28003 * C2591) *
                C10909 +
            (C18321 * C1338 - C18219 * C1469 + C18322 * C2469 -
             C28003 * C2595) *
                C27882) *
               C1327) *
              C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[42] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C9460 * C96 - C9465 * C91 + C9461 * C98 - C9467 * C92 +
                       C9462 * C100 - C9469 * C93) *
                          C145 +
                      (C9460 * C264 - C9465 * C259 + C9461 * C265 -
                       C9467 * C260 + C9462 * C266 - C9469 * C261) *
                          C27928) *
                         C18219 +
                     ((C9460 * C947 - C9465 * C940 + C9461 * C945 -
                       C9467 * C939 + C9462 * C943 - C9469 * C938) *
                          C145 +
                      (C9460 * C1075 - C9465 * C1071 + C9461 * C1076 -
                       C9467 * C1072 + C9462 * C1077 - C9469 * C1073) *
                          C27928) *
                         C28003) *
                        C28119 * C28120 * C81 +
                    (((C9465 * C92 - C9460 * C98 + C9467 * C93 - C9461 * C100 +
                       C9469 * C94 - C9462 * C102) *
                          C145 +
                      (C9465 * C260 - C9460 * C265 + C9467 * C261 -
                       C9461 * C266 + C9469 * C262 - C9462 * C267) *
                          C27928) *
                         C18219 +
                     ((C9465 * C939 - C9460 * C945 + C9467 * C938 -
                       C9461 * C943 + C9469 * C937 - C9462 * C941) *
                          C145 +
                      (C9465 * C1072 - C9460 * C1076 + C9467 * C1073 -
                       C9461 * C1077 + C9469 * C1074 - C9462 * C1078) *
                          C27928) *
                         C28003) *
                        C28119 * C28120 * C82)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C27882 * C96 - C10909 * C91) * C1394 +
                      (C27882 * C264 - C10909 * C259) * C1325 +
                      (C11366 - C11367) * C1395 + (C11368 - C11369) * C1326 +
                      (C11370 - C11371) * C1396 + (C11372 - C11373) * C1327) *
                         C18219 +
                     ((C13115 - C13116) * C1394 + (C13117 - C13118) * C1325 +
                      (C12580 - C12581) * C1395 + (C12582 - C12583) * C1326 +
                      (C17407 - C17408) * C1396 + (C17409 - C17410) * C1327) *
                         C28003) *
                        C28119 * C28120 * C81 +
                    (((C10909 * C92 - C27882 * C98) * C1394 +
                      (C10909 * C260 - C27882 * C265) * C1325 +
                      (C10909 * C567 - C27882 * C573) * C1395 +
                      (C10909 * C700 - C27882 * C704) * C1326 +
                      (C10909 * C1333 - C27882 * C1337) * C1396 +
                      (C10909 * C1530 - C27882 * C1533) * C1327) *
                         C18219 +
                     ((C10909 * C939 - C27882 * C945) * C1394 +
                      (C10909 * C1072 - C27882 * C1076) * C1325 +
                      (C10909 * C2466 - C27882 * C2472) * C1395 +
                      (C10909 * C2647 - C27882 * C2651) * C1326 +
                      (C10909 * C2464 - C27882 * C2468) * C1396 +
                      (C10909 * C2649 - C27882 * C2653) * C1327) *
                         C28003) *
                        C28119 * C28120 * C82)) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[42] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C145 * C146 - C303 * C91 - C145 * C259 + C27928 * C304) * C9460 +
            C328 * C9461 + C329 * C9462) *
               C18219 +
           (C4321 * C9460 + C3250 * C9461 + C6316 * C9462) * C28003) *
              C28119 * C28120 * C81 -
          (((C145 * C990 - C303 * C937 - C145 * C1074 + C27928 * C1113) *
                C9462 +
            C6316 * C9461 + C3250 * C9460) *
               C28003 +
           (C330 * C9462 + C329 * C9461 + C328 * C9460) * C18219) *
              C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1394 * C146 - C1585 * C91 - C1394 * C259 + C1325 * C304 +
            C1395 * C615 - C1586 * C568 - C1395 * C699 + C1326 * C744 +
            C1396 * C1397 - C1587 * C1332 - C1396 * C1529 + C1327 * C1588) *
               C27882 * C18219 +
           (C1394 * C987 - C1585 * C940 - C1394 * C1071 + C1325 * C1116 +
            C1395 * C2530 - C1586 * C2467 - C1395 * C2646 + C1326 * C2707 +
            C1396 * C2531 - C1587 * C2465 - C1396 * C2648 + C1327 * C2706) *
               C27882 * C28003) *
              C28119 * C28120 * C81 -
          ((C1396 * C2533 - C1587 * C2464 - C1396 * C2649 + C1327 * C2704 +
            C1395 * C2532 - C1586 * C2466 - C1395 * C2647 + C1326 * C2705 +
            C1394 * C988 - C1585 * C939 - C1394 * C1072 + C1325 * C1115) *
               C27882 * C28003 +
           (C1612 + C1611 + C1610) * C27882 * C18219) *
              C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[42] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C18219 * C203 - C18321 * C91 + C28003 * C1029 - C18322 * C940) *
                C145 +
            (C18219 * C364 - C18321 * C259 + C28003 * C1151 - C18322 * C1071) *
                C27928) *
               C9460 +
           ((C18324 - C18325 + C18326 - C18327) * C145 +
            (C18490 - C18491 + C18492 - C18493) * C27928) *
               C9461 +
           ((C18332 - C18333 + C18334 - C18335) * C145 +
            (C18494 - C18495 + C18496 - C18497) * C27928) *
               C9462) *
              C28119 * C28120 * C81 +
          (((C18325 - C18324 + C18327 - C18326) * C145 +
            (C18491 - C18490 + C18493 - C18492) * C27928) *
               C9460 +
           ((C18333 - C18332 + C18335 - C18334) * C145 +
            (C18495 - C18494 + C18497 - C18496) * C27928) *
               C9461 +
           ((C18321 * C94 - C18219 * C206 + C18322 * C937 - C28003 * C1032) *
                C145 +
            (C18321 * C262 - C18219 * C367 + C18322 * C1074 - C28003 * C1154) *
                C27928) *
               C9462) *
              C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C18219 * C203 - C18321 * C91 + C28003 * C1029 - C18322 * C940) *
               C1394 +
           (C18219 * C364 - C18321 * C259 + C28003 * C1151 - C18322 * C1071) *
               C1325 +
           (C18219 * C657 - C18321 * C568 + C28003 * C2588 - C18322 * C2467) *
               C1395 +
           (C18219 * C779 - C18321 * C699 + C28003 * C2758 - C18322 * C2646) *
               C1326 +
           (C18219 * C1465 - C18321 * C1332 + C28003 * C2590 - C18322 * C2465) *
               C1396 +
           (C18219 * C1662 - C18321 * C1529 + C28003 * C2759 - C18322 * C2648) *
               C1327) *
              C27882 * C28119 * C28120 * C81 +
          ((C18325 - C18324 + C18327 - C18326) * C1394 +
           (C18491 - C18490 + C18493 - C18492) * C1325 +
           (C18321 * C567 - C18219 * C658 + C18322 * C2466 - C28003 * C2589) *
               C1395 +
           (C18321 * C700 - C18219 * C780 + C18322 * C2647 - C28003 * C2760) *
               C1326 +
           (C18321 * C1333 - C18219 * C1466 + C18322 * C2464 - C28003 * C2591) *
               C1396 +
           (C18321 * C1530 - C18219 * C1663 + C18322 * C2649 - C28003 * C2761) *
               C1327) *
              C27882 * C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eezx[42] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C9460 * C96 - C9465 * C91 + C9461 * C98 - C9467 * C92 +
                      C9462 * C100 - C9469 * C93) *
                         C18321 +
                     (C9460 * C414 - C9465 * C409 + C9461 * C415 -
                      C9467 * C410 + C9462 * C416 - C9469 * C411) *
                         C18219 +
                     (C9460 * C947 - C9465 * C940 + C9461 * C945 -
                      C9467 * C939 + C9462 * C943 - C9469 * C938) *
                         C18322 +
                     (C9460 * C1193 - C9465 * C1189 + C9461 * C1194 -
                      C9467 * C1190 + C9462 * C1195 - C9469 * C1191) *
                         C28003) *
                        C27928 * C28119 * C28120 * C81 +
                    ((C9465 * C92 - C9460 * C98 + C9467 * C93 - C9461 * C100 +
                      C9469 * C94 - C9462 * C102) *
                         C18321 +
                     (C9465 * C410 - C9460 * C415 + C9467 * C411 -
                      C9461 * C416 + C9469 * C412 - C9462 * C417) *
                         C18219 +
                     (C9465 * C939 - C9460 * C945 + C9467 * C938 -
                      C9461 * C943 + C9469 * C937 - C9462 * C941) *
                         C18322 +
                     (C9465 * C1190 - C9460 * C1194 + C9467 * C1191 -
                      C9461 * C1195 + C9469 * C1192 - C9462 * C1196) *
                         C28003) *
                        C27928 * C28119 * C28120 * C82)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C27882 * C96 - C10909 * C91) * C18321 +
                      (C27882 * C414 - C10909 * C409) * C18219 +
                      (C13115 - C13116) * C18322 + (C13305 - C13306) * C28003) *
                         C1325 +
                     ((C11366 - C11367) * C18321 + (C11486 - C11487) * C18219 +
                      (C12580 - C12581) * C18322 + (C12748 - C12749) * C28003) *
                         C1326 +
                     ((C11370 - C11371) * C18321 + (C11488 - C11489) * C18219 +
                      (C17407 - C17408) * C18322 + (C17565 - C17566) * C28003) *
                         C1327) *
                        C28119 * C28120 * C81 +
                    (((C10909 * C92 - C27882 * C98) * C18321 +
                      (C10909 * C410 - C27882 * C415) * C18219 +
                      (C10909 * C939 - C27882 * C945) * C18322 +
                      (C10909 * C1190 - C27882 * C1194) * C28003) *
                         C1325 +
                     ((C10909 * C567 - C27882 * C573) * C18321 +
                      (C10909 * C818 - C27882 * C822) * C18219 +
                      (C10909 * C2466 - C27882 * C2472) * C18322 +
                      (C10909 * C2813 - C27882 * C2817) * C28003) *
                         C1326 +
                     ((C10909 * C1333 - C27882 * C1337) * C18321 +
                      (C10909 * C1720 - C27882 * C1723) * C18219 +
                      (C10909 * C2464 - C27882 * C2468) * C18322 +
                      (C10909 * C2815 - C27882 * C2819) * C28003) *
                         C1327) *
                        C28119 * C28120 * C82)) /
                      (p * q * std::sqrt(p + q));
    d2eezy[42] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C27928 * C146 - C145 * C91) * C18321 +
                      (C27928 * C453 - C145 * C409) * C18219 +
                      (C4123 - C4124) * C18322 + (C4491 - C4492) * C28003) *
                         C9460 +
                     ((C157 - C158) * C18321 + (C459 - C460) * C18219 +
                      (C3050 - C3051) * C18322 + (C3420 - C3421) * C28003) *
                         C9461 +
                     ((C161 - C162) * C18321 + (C461 - C462) * C18219 +
                      (C6138 - C6139) * C18322 + (C6475 - C6476) * C28003) *
                         C9462) *
                        C28119 * C28120 * C81 +
                    (((C158 - C157) * C18321 + (C460 - C459) * C18219 +
                      (C3051 - C3050) * C18322 + (C3421 - C3420) * C28003) *
                         C9460 +
                     ((C162 - C161) * C18321 + (C462 - C461) * C18219 +
                      (C6139 - C6138) * C18322 + (C6476 - C6475) * C28003) *
                         C9461 +
                     ((C166 - C165) * C18321 + (C464 - C463) * C18219 +
                      (C145 * C937 - C27928 * C990) * C18322 +
                      (C145 * C1192 - C27928 * C1234) * C28003) *
                         C9462) *
                        C28119 * C28120 * C82)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C1325 * C146 - C1394 * C91 + C1326 * C615 - C1395 * C568 +
                      C1327 * C1397 - C1396 * C1332) *
                         C18321 +
                     (C1325 * C453 - C1394 * C409 + C1326 * C859 -
                      C1395 * C817 + C1327 * C1775 - C1396 * C1719) *
                         C18219 +
                     (C1325 * C987 - C1394 * C940 + C1326 * C2530 -
                      C1395 * C2467 + C1327 * C2531 - C1396 * C2465) *
                         C18322 +
                     (C1325 * C1231 - C1394 * C1189 + C1326 * C2870 -
                      C1395 * C2812 + C1327 * C2871 - C1396 * C2814) *
                         C28003) *
                        C27882 * C28119 * C28120 * C81 +
                    ((C1405 - C1404 + C1407 - C1406 + C1409 - C1408) * C18321 +
                     (C1780 - C1779 + C1782 - C1781 + C1784 - C1783) * C18219 +
                     (C1394 * C939 - C1325 * C988 + C1395 * C2466 -
                      C1326 * C2532 + C1396 * C2464 - C1327 * C2533) *
                         C18322 +
                     (C1394 * C1190 - C1325 * C1232 + C1395 * C2813 -
                      C1326 * C2872 + C1396 * C2815 - C1327 * C2873) *
                         C28003) *
                        C27882 * C28119 * C28120 * C82)) /
                      (p * q * std::sqrt(p + q));
    d2eezz[42] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C18321 * C203 - C18647 * C91 - C18321 * C409 + C18219 * C499 +
            C18322 * C1029 - C18648 * C940 - C18322 * C1189 + C28003 * C1272) *
               C27928 * C9460 +
           (C18674 + C18675) * C27928 * C9461 +
           (C18676 + C18677) * C27928 * C9462) *
              C28119 * C28120 * C81 -
          ((C18322 * C1032 - C18648 * C937 - C18322 * C1192 + C28003 * C1269 +
            C18321 * C206 - C18647 * C94 - C18321 * C412 + C18219 * C502) *
               C27928 * C9462 +
           (C18677 + C18676) * C27928 * C9461 +
           (C18675 + C18674) * C27928 * C9460) *
              C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C18321 * C203 - C18647 * C91 - C18321 * C409 + C18219 * C499 +
            C18322 * C1029 - C18648 * C940 - C18322 * C1189 + C28003 * C1272) *
               C1325 +
           (C18321 * C657 - C18647 * C568 - C18321 * C817 + C18219 * C900 +
            C18322 * C2588 - C18648 * C2467 - C18322 * C2812 + C28003 * C2927) *
               C1326 +
           (C18321 * C1465 - C18647 * C1332 - C18321 * C1719 + C18219 * C1834 +
            C18322 * C2590 - C18648 * C2465 - C18322 * C2814 + C28003 * C2926) *
               C1327) *
              C27882 * C28119 * C28120 * C81 -
          ((C18322 * C2591 - C18648 * C2464 - C18322 * C2815 + C28003 * C2924 +
            C18321 * C1466 - C18647 * C1333 - C18321 * C1720 + C18219 * C1835) *
               C1327 +
           (C18322 * C2589 - C18648 * C2466 - C18322 * C2813 + C28003 * C2925 +
            C18321 * C658 - C18647 * C567 - C18321 * C818 + C18219 * C899) *
               C1326 +
           (C18675 + C18674) * C1325) *
              C27882 * C28119 * C28120 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eexx[43] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C9465 * C96 - C9466 * C91 - C9465 * C97 + C9460 * C106 +
            C9467 * C98 - C9468 * C92 - C9467 * C99 + C9461 * C107 +
            C9469 * C100 - C9470 * C93 - C9469 * C101 + C9462 * C108) *
               C18219 +
           (C9465 * C947 - C9466 * C940 - C9465 * C948 + C9460 * C952 +
            C9467 * C945 - C9468 * C939 - C9467 * C946 + C9461 * C951 +
            C9469 * C943 - C9470 * C938 - C9469 * C944 + C9462 * C950) *
               C28003) *
              C27928 * C28119 * C562 -
          ((C9469 * C5620 - C9470 * C5619 - C9469 * C5621 + C9462 * C5622 +
            C9467 * C2472 - C9468 * C2466 - C9467 * C2473 + C9461 * C2478 +
            C9465 * C2474 - C9466 * C2467 - C9465 * C2475 + C9460 * C2479) *
               C28003 +
           (C10002 + C10001 + C10000) * C18219) *
              C27928 * C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C10909 * C96 - C10910 * C91 - C10909 * C97 + C27882 * C106) *
                C18219 +
            C12941 * C28003) *
               C1325 +
           (C20120 + C20121) * C1326 + (C20122 + C20123) * C1327) *
              C28119 * C562 -
          (((C10909 * C11603 - C10910 * C11602 - C10909 * C11604 +
             C27882 * C11605) *
                C28003 +
            C11250 * C18219) *
               C1327 +
           (C20123 + C20122) * C1326 + (C20121 + C20120) * C1325) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q));
    d2eexy[43] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C27928 * C146 - C145 * C91) * C9465 +
                      (C27928 * C151 - C145 * C97) * C9460 +
                      (C157 - C158) * C9467 + (C159 - C160) * C9461 +
                      (C161 - C162) * C9469 + (C163 - C164) * C9462) *
                         C18219 +
                     ((C4123 - C4124) * C9465 + (C4125 - C4126) * C9460 +
                      (C3050 - C3051) * C9467 + (C3052 - C3053) * C9461 +
                      (C6138 - C6139) * C9469 + (C6140 - C6141) * C9462) *
                         C28003) *
                        C28119 * C562 +
                    (((C145 * C568 - C27928 * C615) * C9465 +
                      (C145 * C576 - C27928 * C619) * C9460 +
                      (C145 * C567 - C27928 * C616) * C9467 +
                      (C145 * C574 - C27928 * C620) * C9461 +
                      (C145 * C566 - C27928 * C617) * C9469 +
                      (C145 * C572 - C27928 * C621) * C9462) *
                         C18219 +
                     ((C145 * C2467 - C27928 * C2530) * C9465 +
                      (C145 * C2475 - C27928 * C2534) * C9460 +
                      (C145 * C2466 - C27928 * C2532) * C9467 +
                      (C145 * C2473 - C27928 * C2536) * C9461 +
                      (C145 * C5619 - C27928 * C5673) * C9469 +
                      (C145 * C5621 - C27928 * C5674) * C9462) *
                         C28003) *
                        C28119 * C563) *
                   C28121) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C1325 * C146 - C1394 * C91 + C1326 * C615 -
                       C1395 * C568 + C1327 * C1397 - C1396 * C1332) *
                          C10909 +
                      (C1325 * C151 - C1394 * C97 + C1326 * C619 -
                       C1395 * C576 + C1327 * C1400 - C1396 * C1336) *
                          C27882) *
                         C18219 +
                     ((C1325 * C987 - C1394 * C940 + C1326 * C2530 -
                       C1395 * C2467 + C1327 * C2531 - C1396 * C2465) *
                          C10909 +
                      (C1325 * C991 - C1394 * C948 + C1326 * C2534 -
                       C1395 * C2475 + C1327 * C2535 - C1396 * C2471) *
                          C27882) *
                         C28003) *
                        C28119 * C562 +
                    (((C1394 * C568 - C1325 * C615 + C1395 * C1332 -
                       C1326 * C1397 + C1396 * C1905 - C1327 * C1990) *
                          C10909 +
                      (C1394 * C576 - C1325 * C619 + C1395 * C1336 -
                       C1326 * C1400 + C1396 * C1909 - C1327 * C1992) *
                          C27882) *
                         C18219 +
                     ((C1394 * C2467 - C1325 * C2530 + C1395 * C2465 -
                       C1326 * C2531 + C1396 * C11602 - C1327 * C11640) *
                          C10909 +
                      (C1394 * C2475 - C1325 * C2534 + C1395 * C2471 -
                       C1326 * C2535 + C1396 * C11604 - C1327 * C11641) *
                          C27882) *
                         C28003) *
                        C28119 * C563) *
                   C28121) /
                      (p * q * std::sqrt(p + q));
    d2eexz[43] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C18219 * C203 - C18321 * C91 + C28003 * C1029 - C18322 * C940) *
               C9465 +
           (C18219 * C208 - C18321 * C97 + C28003 * C1033 - C18322 * C948) *
               C9460 +
           (C18324 - C18325 + C18326 - C18327) * C9467 +
           (C18328 - C18329 + C18330 - C18331) * C9461 +
           (C18332 - C18333 + C18334 - C18335) * C9469 +
           (C18336 - C18337 + C18338 - C18339) * C9462) *
              C27928 * C28119 * C562 +
          ((C18321 * C568 - C18219 * C657 + C18322 * C2467 - C28003 * C2588) *
               C9465 +
           (C18321 * C576 - C18219 * C661 + C18322 * C2475 - C28003 * C2592) *
               C9460 +
           (C18321 * C567 - C18219 * C658 + C18322 * C2466 - C28003 * C2589) *
               C9467 +
           (C18321 * C574 - C18219 * C662 + C18322 * C2473 - C28003 * C2593) *
               C9461 +
           (C18321 * C566 - C18219 * C659 + C18322 * C5619 - C28003 * C5725) *
               C9469 +
           (C18321 * C572 - C18219 * C663 + C18322 * C5621 - C28003 * C5726) *
               C9462) *
              C27928 * C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C18219 * C203 - C18321 * C91 + C28003 * C1029 - C18322 * C940) *
                C10909 +
            (C18219 * C208 - C18321 * C97 + C28003 * C1033 - C18322 * C948) *
                C27882) *
               C1325 +
           ((C20224 - C20225 + C20226 - C20227) * C10909 +
            (C20228 - C20229 + C20230 - C20231) * C27882) *
               C1326 +
           ((C20232 - C20233 + C20234 - C20235) * C10909 +
            (C20236 - C20237 + C20238 - C20239) * C27882) *
               C1327) *
              C28119 * C562 +
          (((C20225 - C20224 + C20227 - C20226) * C10909 +
            (C20229 - C20228 + C20231 - C20230) * C27882) *
               C1325 +
           ((C20233 - C20232 + C20235 - C20234) * C10909 +
            (C20237 - C20236 + C20239 - C20238) * C27882) *
               C1326 +
           ((C18321 * C1905 - C18219 * C2044 + C18322 * C11602 -
             C28003 * C11676) *
                C10909 +
            (C18321 * C1909 - C18219 * C2046 + C18322 * C11604 -
             C28003 * C11677) *
                C27882) *
               C1327) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q));
    d2eeyx[43] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C9460 * C96 - C9465 * C91 + C9461 * C98 - C9467 * C92 +
             C9462 * C100 - C9469 * C93) *
                C145 +
            (C9460 * C264 - C9465 * C259 + C9461 * C265 - C9467 * C260 +
             C9462 * C266 - C9469 * C261) *
                C27928) *
               C18219 +
           ((C9460 * C947 - C9465 * C940 + C9461 * C945 - C9467 * C939 +
             C9462 * C943 - C9469 * C938) *
                C145 +
            (C9460 * C1075 - C9465 * C1071 + C9461 * C1076 - C9467 * C1072 +
             C9462 * C1077 - C9469 * C1073) *
                C27928) *
               C28003) *
              C28119 * C562 +
          (((C10154 - C10153 + C10156 - C10155 + C10158 - C10157) * C145 +
            (C10160 - C10159 + C10162 - C10161 + C10164 - C10163) * C27928) *
               C18219 +
           ((C9465 * C2467 - C9460 * C2474 + C9467 * C2466 - C9461 * C2472 +
             C9469 * C5619 - C9462 * C5620) *
                C145 +
            (C9465 * C2646 - C9460 * C2650 + C9467 * C2647 - C9461 * C2651 +
             C9469 * C5777 - C9462 * C5778) *
                C27928) *
               C28003) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C27882 * C96 - C10909 * C91) * C1394 +
            (C27882 * C264 - C10909 * C259) * C1325 +
            (C11366 - C11367) * C1395 + (C11368 - C11369) * C1326 +
            (C11370 - C11371) * C1396 + (C11372 - C11373) * C1327) *
               C18219 +
           ((C13115 - C13116) * C1394 + (C13117 - C13118) * C1325 +
            (C12580 - C12581) * C1395 + (C12582 - C12583) * C1326 +
            (C17407 - C17408) * C1396 + (C17409 - C17410) * C1327) *
               C28003) *
              C28119 * C562 +
          (((C11367 - C11366) * C1394 + (C11369 - C11368) * C1325 +
            (C11371 - C11370) * C1395 + (C11373 - C11372) * C1326 +
            (C11375 - C11374) * C1396 + (C11377 - C11376) * C1327) *
               C18219 +
           ((C12581 - C12580) * C1394 + (C12583 - C12582) * C1325 +
            (C17408 - C17407) * C1395 + (C17410 - C17409) * C1326 +
            (C10909 * C11602 - C27882 * C11603) * C1396 +
            (C10909 * C11712 - C27882 * C11713) * C1327) *
               C28003) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q));
    d2eeyy[43] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C145 * C146 - C303 * C91 - C145 * C259 + C27928 * C304) * C9460 +
            C328 * C9461 + C329 * C9462) *
               C18219 +
           (C4321 * C9460 + C3250 * C9461 + C6316 * C9462) * C28003) *
              C28119 * C562 -
          (((C145 * C5673 - C303 * C5619 - C145 * C5777 + C27928 * C5829) *
                C9462 +
            (C145 * C2532 - C303 * C2466 - C145 * C2647 + C27928 * C2705) *
                C9461 +
            (C145 * C2530 - C303 * C2467 - C145 * C2646 + C27928 * C2707) *
                C9460) *
               C28003 +
           ((C145 * C617 - C303 * C566 - C145 * C701 + C27928 * C742) * C9462 +
            (C145 * C616 - C303 * C567 - C145 * C700 + C27928 * C743) * C9461 +
            (C145 * C615 - C303 * C568 - C145 * C699 + C27928 * C744) * C9460) *
               C18219) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1394 * C146 - C1585 * C91 - C1394 * C259 + C1325 * C304 +
            C1395 * C615 - C1586 * C568 - C1395 * C699 + C1326 * C744 +
            C1396 * C1397 - C1587 * C1332 - C1396 * C1529 + C1327 * C1588) *
               C27882 * C18219 +
           (C1394 * C987 - C1585 * C940 - C1394 * C1071 + C1325 * C1116 +
            C1395 * C2530 - C1586 * C2467 - C1395 * C2646 + C1326 * C2707 +
            C1396 * C2531 - C1587 * C2465 - C1396 * C2648 + C1327 * C2706) *
               C27882 * C28003) *
              C28119 * C562 -
          ((C1396 * C11640 - C1587 * C11602 - C1396 * C11712 + C1327 * C11748 +
            C1395 * C2531 - C1586 * C2465 - C1395 * C2648 + C1326 * C2706 +
            C1394 * C2530 - C1585 * C2467 - C1394 * C2646 + C1325 * C2707) *
               C27882 * C28003 +
           (C1396 * C1990 - C1587 * C1905 - C1396 * C2106 + C1327 * C2177 +
            C1395 * C1397 - C1586 * C1332 - C1395 * C1529 + C1326 * C1588 +
            C1394 * C615 - C1585 * C568 - C1394 * C699 + C1325 * C744) *
               C27882 * C18219) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q));
    d2eeyz[43] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C18219 * C203 - C18321 * C91 + C28003 * C1029 - C18322 * C940) *
                C145 +
            (C18219 * C364 - C18321 * C259 + C28003 * C1151 - C18322 * C1071) *
                C27928) *
               C9460 +
           ((C18324 - C18325 + C18326 - C18327) * C145 +
            (C18490 - C18491 + C18492 - C18493) * C27928) *
               C9461 +
           ((C18332 - C18333 + C18334 - C18335) * C145 +
            (C18494 - C18495 + C18496 - C18497) * C27928) *
               C9462) *
              C28119 * C562 +
          (((C18321 * C568 - C18219 * C657 + C18322 * C2467 - C28003 * C2588) *
                C145 +
            (C18321 * C699 - C18219 * C779 + C18322 * C2646 - C28003 * C2758) *
                C27928) *
               C9460 +
           ((C18321 * C567 - C18219 * C658 + C18322 * C2466 - C28003 * C2589) *
                C145 +
            (C18321 * C700 - C18219 * C780 + C18322 * C2647 - C28003 * C2760) *
                C27928) *
               C9461 +
           ((C18321 * C566 - C18219 * C659 + C18322 * C5619 - C28003 * C5725) *
                C145 +
            (C18321 * C701 - C18219 * C781 + C18322 * C5777 - C28003 * C5880) *
                C27928) *
               C9462) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C18219 * C203 - C18321 * C91 + C28003 * C1029 - C18322 * C940) *
               C1394 +
           (C18219 * C364 - C18321 * C259 + C28003 * C1151 - C18322 * C1071) *
               C1325 +
           (C20224 - C20225 + C20226 - C20227) * C1395 +
           (C20390 - C20391 + C20392 - C20393) * C1326 +
           (C20232 - C20233 + C20234 - C20235) * C1396 +
           (C20394 - C20395 + C20396 - C20397) * C1327) *
              C27882 * C28119 * C562 +
          ((C20225 - C20224 + C20227 - C20226) * C1394 +
           (C20391 - C20390 + C20393 - C20392) * C1325 +
           (C20233 - C20232 + C20235 - C20234) * C1395 +
           (C20395 - C20394 + C20397 - C20396) * C1326 +
           (C18321 * C1905 - C18219 * C2044 + C18322 * C11602 -
            C28003 * C11676) *
               C1396 +
           (C18321 * C2106 - C18219 * C2228 + C18322 * C11712 -
            C28003 * C11783) *
               C1327) *
              C27882 * C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q));
    d2eezx[43] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C9460 * C96 - C9465 * C91 + C9461 * C98 - C9467 * C92 +
            C9462 * C100 - C9469 * C93) *
               C18321 +
           (C9460 * C414 - C9465 * C409 + C9461 * C415 - C9467 * C410 +
            C9462 * C416 - C9469 * C411) *
               C18219 +
           (C9460 * C947 - C9465 * C940 + C9461 * C945 - C9467 * C939 +
            C9462 * C943 - C9469 * C938) *
               C18322 +
           (C9460 * C1193 - C9465 * C1189 + C9461 * C1194 - C9467 * C1190 +
            C9462 * C1195 - C9469 * C1191) *
               C28003) *
              C27928 * C28119 * C562 +
          ((C10154 - C10153 + C10156 - C10155 + C10158 - C10157) * C18321 +
           (C10316 - C10315 + C10318 - C10317 + C10320 - C10319) * C18219 +
           (C9465 * C2467 - C9460 * C2474 + C9467 * C2466 - C9461 * C2472 +
            C9469 * C5619 - C9462 * C5620) *
               C18322 +
           (C9465 * C2812 - C9460 * C2816 + C9467 * C2813 - C9461 * C2817 +
            C9469 * C5931 - C9462 * C5932) *
               C28003) *
              C27928 * C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C27882 * C96 - C10909 * C91) * C18321 +
            (C27882 * C414 - C10909 * C409) * C18219 +
            (C13115 - C13116) * C18322 + (C13305 - C13306) * C28003) *
               C1325 +
           ((C11366 - C11367) * C18321 + (C11486 - C11487) * C18219 +
            (C12580 - C12581) * C18322 + (C12748 - C12749) * C28003) *
               C1326 +
           ((C11370 - C11371) * C18321 + (C11488 - C11489) * C18219 +
            (C17407 - C17408) * C18322 + (C17565 - C17566) * C28003) *
               C1327) *
              C28119 * C562 +
          (((C11367 - C11366) * C18321 + (C11487 - C11486) * C18219 +
            (C12581 - C12580) * C18322 + (C12749 - C12748) * C28003) *
               C1325 +
           ((C11371 - C11370) * C18321 + (C11489 - C11488) * C18219 +
            (C17408 - C17407) * C18322 + (C17566 - C17565) * C28003) *
               C1326 +
           ((C11375 - C11374) * C18321 + (C11491 - C11490) * C18219 +
            (C10909 * C11602 - C27882 * C11603) * C18322 +
            (C10909 * C11818 - C27882 * C11819) * C28003) *
               C1327) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q));
    d2eezy[43] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C27928 * C146 - C145 * C91) * C18321 +
                      (C27928 * C453 - C145 * C409) * C18219 +
                      (C4123 - C4124) * C18322 + (C4491 - C4492) * C28003) *
                         C9460 +
                     ((C157 - C158) * C18321 + (C459 - C460) * C18219 +
                      (C3050 - C3051) * C18322 + (C3420 - C3421) * C28003) *
                         C9461 +
                     ((C161 - C162) * C18321 + (C461 - C462) * C18219 +
                      (C6138 - C6139) * C18322 + (C6475 - C6476) * C28003) *
                         C9462) *
                        C28119 * C562 +
                    (((C145 * C568 - C27928 * C615) * C18321 +
                      (C145 * C817 - C27928 * C859) * C18219 +
                      (C145 * C2467 - C27928 * C2530) * C18322 +
                      (C145 * C2812 - C27928 * C2870) * C28003) *
                         C9460 +
                     ((C145 * C567 - C27928 * C616) * C18321 +
                      (C145 * C818 - C27928 * C860) * C18219 +
                      (C145 * C2466 - C27928 * C2532) * C18322 +
                      (C145 * C2813 - C27928 * C2872) * C28003) *
                         C9461 +
                     ((C145 * C566 - C27928 * C617) * C18321 +
                      (C145 * C819 - C27928 * C861) * C18219 +
                      (C145 * C5619 - C27928 * C5673) * C18322 +
                      (C145 * C5931 - C27928 * C5983) * C28003) *
                         C9462) *
                        C28119 * C563) *
                   C28121) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C1325 * C146 - C1394 * C91 + C1326 * C615 - C1395 * C568 +
                      C1327 * C1397 - C1396 * C1332) *
                         C18321 +
                     (C1325 * C453 - C1394 * C409 + C1326 * C859 -
                      C1395 * C817 + C1327 * C1775 - C1396 * C1719) *
                         C18219 +
                     (C1325 * C987 - C1394 * C940 + C1326 * C2530 -
                      C1395 * C2467 + C1327 * C2531 - C1396 * C2465) *
                         C18322 +
                     (C1325 * C1231 - C1394 * C1189 + C1326 * C2870 -
                      C1395 * C2812 + C1327 * C2871 - C1396 * C2814) *
                         C28003) *
                        C27882 * C28119 * C562 +
                    ((C1394 * C568 - C1325 * C615 + C1395 * C1332 -
                      C1326 * C1397 + C1396 * C1905 - C1327 * C1990) *
                         C18321 +
                     (C1394 * C817 - C1325 * C859 + C1395 * C1719 -
                      C1326 * C1775 + C1396 * C2284 - C1327 * C2346) *
                         C18219 +
                     (C1394 * C2467 - C1325 * C2530 + C1395 * C2465 -
                      C1326 * C2531 + C1396 * C11602 - C1327 * C11640) *
                         C18322 +
                     (C1394 * C2812 - C1325 * C2870 + C1395 * C2814 -
                      C1326 * C2871 + C1396 * C11818 - C1327 * C11854) *
                         C28003) *
                        C27882 * C28119 * C563) *
                   C28121) /
                      (p * q * std::sqrt(p + q));
    d2eezz[43] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C18321 * C203 - C18647 * C91 - C18321 * C409 + C18219 * C499 +
            C18322 * C1029 - C18648 * C940 - C18322 * C1189 + C28003 * C1272) *
               C27928 * C9460 +
           (C18674 + C18675) * C27928 * C9461 +
           (C18676 + C18677) * C27928 * C9462) *
              C28119 * C562 -
          ((C18322 * C5725 - C18648 * C5619 - C18322 * C5931 + C28003 * C6034 +
            C18321 * C659 - C18647 * C566 - C18321 * C819 + C18219 * C898) *
               C27928 * C9462 +
           (C18322 * C2589 - C18648 * C2466 - C18322 * C2813 + C28003 * C2925 +
            C18321 * C658 - C18647 * C567 - C18321 * C818 + C18219 * C899) *
               C27928 * C9461 +
           (C18322 * C2588 - C18648 * C2467 - C18322 * C2812 + C28003 * C2927 +
            C18321 * C657 - C18647 * C568 - C18321 * C817 + C18219 * C900) *
               C27928 * C9460) *
              C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C18321 * C203 - C18647 * C91 - C18321 * C409 + C18219 * C499 +
            C18322 * C1029 - C18648 * C940 - C18322 * C1189 + C28003 * C1272) *
               C1325 +
           (C20572 + C20573) * C1326 + (C20574 + C20575) * C1327) *
              C27882 * C28119 * C562 -
          ((C18322 * C11676 - C18648 * C11602 - C18322 * C11818 +
            C28003 * C11889 + C18321 * C2044 - C18647 * C1905 - C18321 * C2284 +
            C18219 * C2399) *
               C1327 +
           (C20575 + C20574) * C1326 + (C20573 + C20572) * C1325) *
              C27882 * C28119 * C563) *
         C28121) /
            (p * q * std::sqrt(p + q));
    d2eexx[44] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C9465 * C96 - C9466 * C91 - C9465 * C97 + C9460 * C106 +
            C9467 * C98 - C9468 * C92 - C9467 * C99 + C9461 * C107 +
            C9469 * C100 - C9470 * C93 - C9469 * C101 + C9462 * C108) *
               C18219 +
           (C19196 + C19197 + C19198) * C28003) *
              C27928 * C935 -
          ((C9469 * C2988 - C9470 * C2983 - C9469 * C2989 + C9462 * C2992 +
            C9467 * C2986 - C9468 * C2982 - C9467 * C2987 + C9461 * C2991 +
            C9465 * C2984 - C9466 * C2981 - C9465 * C2985 + C9460 * C2990) *
               C28003 +
           (C19198 + C19197 + C19196) * C18219) *
              C27928 * C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C10909 * C96 - C10910 * C91 - C10909 * C97 + C27882 * C106) *
                C18219 +
            C12941 * C28003) *
               C1325 +
           (C20120 + C20121) * C1326 + (C20122 + C20123) * C1327) *
              C935 -
          (((C10909 * C12391 - C10910 * C12390 - C10909 * C12392 +
             C27882 * C12393) *
                C28003 +
            C17247 * C18219) *
               C1327 +
           (C12409 * C28003 + C12408 * C18219) * C1326 +
           (C12942 * C28003 + C12941 * C18219) * C1325) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q));
    d2eexy[44] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C27928 * C146 - C145 * C91) * C9465 +
            (C27928 * C151 - C145 * C97) * C9460 + (C157 - C158) * C9467 +
            (C159 - C160) * C9461 + (C161 - C162) * C9469 +
            (C163 - C164) * C9462) *
               C18219 +
           ((C4123 - C4124) * C9465 + (C4125 - C4126) * C9460 +
            (C3050 - C3051) * C9467 + (C3052 - C3053) * C9461 +
            (C6138 - C6139) * C9469 + (C6140 - C6141) * C9462) *
               C28003) *
              C935 +
          (((C4124 - C4123) * C9465 + (C4126 - C4125) * C9460 +
            (C3051 - C3050) * C9467 + (C3053 - C3052) * C9461 +
            (C6139 - C6138) * C9469 + (C6141 - C6140) * C9462) *
               C18219 +
           ((C4128 - C4127) * C9465 + (C4130 - C4129) * C9460 +
            (C3055 - C3054) * C9467 + (C3057 - C3056) * C9461 +
            (C145 * C2983 - C27928 * C3045) * C9469 +
            (C145 * C2989 - C27928 * C3048) * C9462) *
               C28003) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1325 * C146 - C1394 * C91 + C1326 * C615 - C1395 * C568 +
             C1327 * C1397 - C1396 * C1332) *
                C10909 +
            (C1325 * C151 - C1394 * C97 + C1326 * C619 - C1395 * C576 +
             C1327 * C1400 - C1396 * C1336) *
                C27882) *
               C18219 +
           ((C20676 - C20677 + C20678 - C20679 + C20680 - C20681) * C10909 +
            (C20682 - C20683 + C20684 - C20685 + C20686 - C20687) * C27882) *
               C28003) *
              C935 +
          (((C20677 - C20676 + C20679 - C20678 + C20681 - C20680) * C10909 +
            (C20683 - C20682 + C20685 - C20684 + C20687 - C20686) * C27882) *
               C18219 +
           ((C1394 * C2981 - C1325 * C3043 + C1395 * C3551 - C1326 * C3608 +
             C1396 * C12390 - C1327 * C12461) *
                C10909 +
            (C1394 * C2985 - C1325 * C3046 + C1395 * C3555 - C1326 * C3610 +
             C1396 * C12392 - C1327 * C12462) *
                C27882) *
               C28003) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q));
    d2eexz[44] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C18219 * C203 - C18321 * C91 + C28003 * C1029 - C18322 * C940) *
               C9465 +
           (C18219 * C208 - C18321 * C97 + C28003 * C1033 - C18322 * C948) *
               C9460 +
           (C18324 - C18325 + C18326 - C18327) * C9467 +
           (C18328 - C18329 + C18330 - C18331) * C9461 +
           (C18332 - C18333 + C18334 - C18335) * C9469 +
           (C18336 - C18337 + C18338 - C18339) * C9462) *
              C27928 * C935 +
          ((C18321 * C940 - C18219 * C1029 + C18322 * C2981 - C28003 * C3110) *
               C9465 +
           (C18321 * C948 - C18219 * C1033 + C18322 * C2985 - C28003 * C3113) *
               C9460 +
           (C18321 * C939 - C18219 * C1030 + C18322 * C2982 - C28003 * C3111) *
               C9467 +
           (C18321 * C946 - C18219 * C1034 + C18322 * C2987 - C28003 * C3114) *
               C9461 +
           (C18321 * C938 - C18219 * C1031 + C18322 * C2983 - C28003 * C3112) *
               C9469 +
           (C18321 * C944 - C18219 * C1035 + C18322 * C2989 - C28003 * C3115) *
               C9462) *
              C27928 * C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C18219 * C203 - C18321 * C91 + C28003 * C1029 - C18322 * C940) *
                C10909 +
            (C18219 * C208 - C18321 * C97 + C28003 * C1033 - C18322 * C948) *
                C27882) *
               C1325 +
           ((C20224 - C20225 + C20226 - C20227) * C10909 +
            (C20228 - C20229 + C20230 - C20231) * C27882) *
               C1326 +
           ((C20232 - C20233 + C20234 - C20235) * C10909 +
            (C20236 - C20237 + C20238 - C20239) * C27882) *
               C1327) *
              C935 +
          (((C18321 * C940 - C18219 * C1029 + C18322 * C2981 - C28003 * C3110) *
                C10909 +
            (C18321 * C948 - C18219 * C1033 + C18322 * C2985 - C28003 * C3113) *
                C27882) *
               C1325 +
           ((C18321 * C2467 - C18219 * C2588 + C18322 * C3551 -
             C28003 * C3662) *
                C10909 +
            (C18321 * C2475 - C18219 * C2592 + C18322 * C3555 -
             C28003 * C3664) *
                C27882) *
               C1326 +
           ((C18321 * C2465 - C18219 * C2590 + C18322 * C12390 -
             C28003 * C12513) *
                C10909 +
            (C18321 * C2471 - C18219 * C2594 + C18322 * C12392 -
             C28003 * C12514) *
                C27882) *
               C1327) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q));
    d2eeyx[44] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C9460 * C96 - C9465 * C91 + C9461 * C98 - C9467 * C92 +
             C9462 * C100 - C9469 * C93) *
                C145 +
            (C9460 * C264 - C9465 * C259 + C9461 * C265 - C9467 * C260 +
             C9462 * C266 - C9469 * C261) *
                C27928) *
               C18219 +
           ((C19349 - C19350 + C19351 - C19352 + C19353 - C19354) * C145 +
            (C19355 - C19356 + C19357 - C19358 + C19359 - C19360) * C27928) *
               C28003) *
              C935 +
          (((C19350 - C19349 + C19352 - C19351 + C19354 - C19353) * C145 +
            (C19356 - C19355 + C19358 - C19357 + C19360 - C19359) * C27928) *
               C18219 +
           ((C9465 * C2981 - C9460 * C2984 + C9467 * C2982 - C9461 * C2986 +
             C9469 * C2983 - C9462 * C2988) *
                C145 +
            (C9465 * C3178 - C9460 * C3181 + C9467 * C3179 - C9461 * C3182 +
             C9469 * C3180 - C9462 * C3183) *
                C27928) *
               C28003) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C27882 * C96 - C10909 * C91) * C1394 +
            (C27882 * C264 - C10909 * C259) * C1325 +
            (C11366 - C11367) * C1395 + (C11368 - C11369) * C1326 +
            (C11370 - C11371) * C1396 + (C11372 - C11373) * C1327) *
               C18219 +
           ((C13115 - C13116) * C1394 + (C13117 - C13118) * C1325 +
            (C12580 - C12581) * C1395 + (C12582 - C12583) * C1326 +
            (C17407 - C17408) * C1396 + (C17409 - C17410) * C1327) *
               C28003) *
              C935 +
          (((C13116 - C13115) * C1394 + (C13118 - C13117) * C1325 +
            (C12581 - C12580) * C1395 + (C12583 - C12582) * C1326 +
            (C17408 - C17407) * C1396 + (C17410 - C17409) * C1327) *
               C18219 +
           ((C13120 - C13119) * C1394 + (C13122 - C13121) * C1325 +
            (C12585 - C12584) * C1395 + (C12587 - C12586) * C1326 +
            (C10909 * C12390 - C27882 * C12391) * C1396 +
            (C10909 * C12577 - C27882 * C12578) * C1327) *
               C28003) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q));
    d2eeyy[44] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C145 * C146 - C303 * C91 - C145 * C259 + C27928 * C304) * C9460 +
            C328 * C9461 + C329 * C9462) *
               C18219 +
           (C19411 + C19412 + C19413) * C28003) *
              C935 -
          (((C145 * C3045 - C303 * C2983 - C145 * C3180 + C27928 * C3236) *
                C9462 +
            C3251 * C9461 + C4322 * C9460) *
               C28003 +
           (C19413 + C19412 + C19411) * C18219) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1394 * C146 - C1585 * C91 - C1394 * C259 + C1325 * C304 +
            C1395 * C615 - C1586 * C568 - C1395 * C699 + C1326 * C744 +
            C1396 * C1397 - C1587 * C1332 - C1396 * C1529 + C1327 * C1588) *
               C27882 * C18219 +
           (C20856 + C20857 + C20858) * C27882 * C28003) *
              C935 -
          ((C1396 * C12461 - C1587 * C12390 - C1396 * C12577 + C1327 * C12637 +
            C1395 * C3608 - C1586 * C3551 - C1395 * C3716 + C1326 * C3771 +
            C1394 * C3043 - C1585 * C2981 - C1394 * C3178 + C1325 * C3234) *
               C27882 * C28003 +
           (C20858 + C20857 + C20856) * C27882 * C18219) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q));
    d2eeyz[44] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C18219 * C203 - C18321 * C91 + C28003 * C1029 - C18322 * C940) *
                C145 +
            (C18219 * C364 - C18321 * C259 + C28003 * C1151 - C18322 * C1071) *
                C27928) *
               C9460 +
           ((C18324 - C18325 + C18326 - C18327) * C145 +
            (C18490 - C18491 + C18492 - C18493) * C27928) *
               C9461 +
           ((C18332 - C18333 + C18334 - C18335) * C145 +
            (C18494 - C18495 + C18496 - C18497) * C27928) *
               C9462) *
              C935 +
          (((C18321 * C940 - C18219 * C1029 + C18322 * C2981 - C28003 * C3110) *
                C145 +
            (C18321 * C1071 - C18219 * C1151 + C18322 * C3178 -
             C28003 * C3301) *
                C27928) *
               C9460 +
           ((C18321 * C939 - C18219 * C1030 + C18322 * C2982 - C28003 * C3111) *
                C145 +
            (C18321 * C1072 - C18219 * C1152 + C18322 * C3179 -
             C28003 * C3302) *
                C27928) *
               C9461 +
           ((C18321 * C938 - C18219 * C1031 + C18322 * C2983 - C28003 * C3112) *
                C145 +
            (C18321 * C1073 - C18219 * C1153 + C18322 * C3180 -
             C28003 * C3303) *
                C27928) *
               C9462) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C18219 * C203 - C18321 * C91 + C28003 * C1029 - C18322 * C940) *
               C1394 +
           (C18219 * C364 - C18321 * C259 + C28003 * C1151 - C18322 * C1071) *
               C1325 +
           (C20224 - C20225 + C20226 - C20227) * C1395 +
           (C20390 - C20391 + C20392 - C20393) * C1326 +
           (C20232 - C20233 + C20234 - C20235) * C1396 +
           (C20394 - C20395 + C20396 - C20397) * C1327) *
              C27882 * C935 +
          ((C18321 * C940 - C18219 * C1029 + C18322 * C2981 - C28003 * C3110) *
               C1394 +
           (C18321 * C1071 - C18219 * C1151 + C18322 * C3178 - C28003 * C3301) *
               C1325 +
           (C18321 * C2467 - C18219 * C2588 + C18322 * C3551 - C28003 * C3662) *
               C1395 +
           (C18321 * C2646 - C18219 * C2758 + C18322 * C3716 - C28003 * C3822) *
               C1326 +
           (C18321 * C2465 - C18219 * C2590 + C18322 * C12390 -
            C28003 * C12513) *
               C1396 +
           (C18321 * C2648 - C18219 * C2759 + C18322 * C12577 -
            C28003 * C12688) *
               C1327) *
              C27882 * C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q));
    d2eezx[44] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C9460 * C96 - C9465 * C91 + C9461 * C98 - C9467 * C92 +
            C9462 * C100 - C9469 * C93) *
               C18321 +
           (C9460 * C414 - C9465 * C409 + C9461 * C415 - C9467 * C410 +
            C9462 * C416 - C9469 * C411) *
               C18219 +
           (C19349 - C19350 + C19351 - C19352 + C19353 - C19354) * C18322 +
           (C19514 - C19515 + C19516 - C19517 + C19518 - C19519) * C28003) *
              C27928 * C935 +
          ((C19350 - C19349 + C19352 - C19351 + C19354 - C19353) * C18321 +
           (C19515 - C19514 + C19517 - C19516 + C19519 - C19518) * C18219 +
           (C9465 * C2981 - C9460 * C2984 + C9467 * C2982 - C9461 * C2986 +
            C9469 * C2983 - C9462 * C2988) *
               C18322 +
           (C9465 * C3360 - C9460 * C3363 + C9467 * C3361 - C9461 * C3364 +
            C9469 * C3362 - C9462 * C3365) *
               C28003) *
              C27928 * C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C27882 * C96 - C10909 * C91) * C18321 +
            (C27882 * C414 - C10909 * C409) * C18219 +
            (C13115 - C13116) * C18322 + (C13305 - C13306) * C28003) *
               C1325 +
           ((C11366 - C11367) * C18321 + (C11486 - C11487) * C18219 +
            (C12580 - C12581) * C18322 + (C12748 - C12749) * C28003) *
               C1326 +
           ((C11370 - C11371) * C18321 + (C11488 - C11489) * C18219 +
            (C17407 - C17408) * C18322 + (C17565 - C17566) * C28003) *
               C1327) *
              C935 +
          (((C13116 - C13115) * C18321 + (C13306 - C13305) * C18219 +
            (C13120 - C13119) * C18322 + (C13308 - C13307) * C28003) *
               C1325 +
           ((C12581 - C12580) * C18321 + (C12749 - C12748) * C18219 +
            (C12585 - C12584) * C18322 + (C12751 - C12750) * C28003) *
               C1326 +
           ((C17408 - C17407) * C18321 + (C17566 - C17565) * C18219 +
            (C10909 * C12390 - C27882 * C12391) * C18322 +
            (C10909 * C12745 - C27882 * C12746) * C28003) *
               C1327) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q));
    d2eezy[44] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C27928 * C146 - C145 * C91) * C18321 +
            (C27928 * C453 - C145 * C409) * C18219 + (C4123 - C4124) * C18322 +
            (C4491 - C4492) * C28003) *
               C9460 +
           ((C157 - C158) * C18321 + (C459 - C460) * C18219 +
            (C3050 - C3051) * C18322 + (C3420 - C3421) * C28003) *
               C9461 +
           ((C161 - C162) * C18321 + (C461 - C462) * C18219 +
            (C6138 - C6139) * C18322 + (C6475 - C6476) * C28003) *
               C9462) *
              C935 +
          (((C4124 - C4123) * C18321 + (C4492 - C4491) * C18219 +
            (C4128 - C4127) * C18322 + (C4494 - C4493) * C28003) *
               C9460 +
           ((C3051 - C3050) * C18321 + (C3421 - C3420) * C18219 +
            (C3055 - C3054) * C18322 + (C3423 - C3422) * C28003) *
               C9461 +
           ((C6139 - C6138) * C18321 + (C6476 - C6475) * C18219 +
            (C145 * C2983 - C27928 * C3045) * C18322 +
            (C145 * C3362 - C27928 * C3418) * C28003) *
               C9462) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1325 * C146 - C1394 * C91 + C1326 * C615 - C1395 * C568 +
            C1327 * C1397 - C1396 * C1332) *
               C18321 +
           (C1325 * C453 - C1394 * C409 + C1326 * C859 - C1395 * C817 +
            C1327 * C1775 - C1396 * C1719) *
               C18219 +
           (C20676 - C20677 + C20678 - C20679 + C20680 - C20681) * C18322 +
           (C21009 - C21010 + C21011 - C21012 + C21013 - C21014) * C28003) *
              C27882 * C935 +
          ((C20677 - C20676 + C20679 - C20678 + C20681 - C20680) * C18321 +
           (C21010 - C21009 + C21012 - C21011 + C21014 - C21013) * C18219 +
           (C1394 * C2981 - C1325 * C3043 + C1395 * C3551 - C1326 * C3608 +
            C1396 * C12390 - C1327 * C12461) *
               C18322 +
           (C1394 * C3360 - C1325 * C3416 + C1395 * C3874 - C1326 * C3928 +
            C1396 * C12745 - C1327 * C12801) *
               C28003) *
              C27882 * C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q));
    d2eezz[44] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C18321 * C203 - C18647 * C91 - C18321 * C409 + C18219 * C499 +
            C18322 * C1029 - C18648 * C940 - C18322 * C1189 + C28003 * C1272) *
               C27928 * C9460 +
           (C18674 + C18675) * C27928 * C9461 +
           (C18676 + C18677) * C27928 * C9462) *
              C935 -
          ((C18322 * C3112 - C18648 * C2983 - C18322 * C3362 + C28003 * C3478 +
            C18321 * C1031 - C18647 * C938 - C18321 * C1191 + C18219 * C1270) *
               C27928 * C9462 +
           (C18322 * C3111 - C18648 * C2982 - C18322 * C3361 + C28003 * C3477 +
            C18321 * C1030 - C18647 * C939 - C18321 * C1190 + C18219 * C1271) *
               C27928 * C9461 +
           (C18322 * C3110 - C18648 * C2981 - C18322 * C3360 + C28003 * C3476 +
            C18321 * C1029 - C18647 * C940 - C18321 * C1189 + C18219 * C1272) *
               C27928 * C9460) *
              C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C18321 * C203 - C18647 * C91 - C18321 * C409 + C18219 * C499 +
            C18322 * C1029 - C18648 * C940 - C18322 * C1189 + C28003 * C1272) *
               C1325 +
           (C20572 + C20573) * C1326 + (C20574 + C20575) * C1327) *
              C27882 * C935 -
          ((C18322 * C12513 - C18648 * C12390 - C18322 * C12745 +
            C28003 * C12852 + C18321 * C2590 - C18647 * C2465 - C18321 * C2814 +
            C18219 * C2926) *
               C1327 +
           (C18322 * C3662 - C18648 * C3551 - C18322 * C3874 + C28003 * C3981 +
            C18321 * C2588 - C18647 * C2467 - C18321 * C2812 + C18219 * C2927) *
               C1326 +
           (C18322 * C3110 - C18648 * C2981 - C18322 * C3360 + C28003 * C3476 +
            C18321 * C1029 - C18647 * C940 - C18321 * C1189 + C18219 * C1272) *
               C1325) *
              C27882 * C936) *
         C28120 * C28121) /
            (p * q * std::sqrt(p + q));
}
