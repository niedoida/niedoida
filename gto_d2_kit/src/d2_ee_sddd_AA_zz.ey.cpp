/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_sddd_AA_zz.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
#pragma GCC optimize("O0")

void second_derivative_ee_0222_11_33(const double ae,
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
                                     double* const d2ee)
{
    const double p = ae + be;
    const double q = ce + de;
    const double xP = (ae * xA + be * xB) / p;
    const double yP = (ae * yA + be * yB) / p;
    const double zP = (ae * zA + be * zB) / p;
    const double xQ = (ce * xC + de * xD) / q;
    const double yQ = (ce * yC + de * yD) / q;
    const double zQ = (ce * zC + de * zD) / q;
    const double C29968 = ae + be;
    const double C29967 = ae * be;
    const double C29966 = zA - zB;
    const double C29974 = 0 * be;
    const double C30010 = p + q;
    const double C30009 = p * q;
    const double C30018 = std::pow(ae, 2);
    const double C30016 = bs[3];
    const double C30015 = zP - zQ;
    const double C30024 = bs[4];
    const double C30022 = xP - xQ;
    const double C30032 = bs[5];
    const double C30041 = bs[6];
    const double C30052 = bs[7];
    const double C30078 = bs[2];
    const double C30156 = yP - yQ;
    const double C115 = bs[0];
    const double C30899 = xA - xB;
    const double C30917 = ce + de;
    const double C30916 = ce * de;
    const double C30915 = xC - xD;
    const double C30949 = yC - yD;
    const double C30967 = zC - zD;
    const double C31133 = yA - yB;
    const double C29975 = std::pow(C29968, 2);
    const double C31180 = 2 * C29968;
    const double C29977 = 2 * C29967;
    const double C29976 = C29967 * C29966;
    const double C31147 = std::pow(C29966, 2);
    const double C31212 = C29966 * ae;
    const double C30011 = 2 * C30009;
    const double C30019 = std::pow(C30015, 2);
    const double C30074 = C30015 * ae;
    const double C30034 = std::pow(C30022, 2);
    const double C30166 = std::pow(C30156, 2);
    const double C30900 = std::pow(C30899, 2);
    const double C31179 = C30899 * ae;
    const double C30921 = 2 * C30917;
    const double C30920 = std::pow(C30917, 2);
    const double C30922 = C30915 * de;
    const double C30919 = C30915 * ce;
    const double C30918 = std::pow(C30915, 2);
    const double C30950 = std::pow(C30949, 2);
    const double C31009 = C30949 * de;
    const double C31007 = C30949 * ce;
    const double C30968 = std::pow(C30967, 2);
    const double C31051 = C30967 * de;
    const double C31049 = C30967 * ce;
    const double C31134 = std::pow(C31133, 2);
    const double C31211 = C31133 * ae;
    const double C29979 = 2 * C29975;
    const double C31215 = std::pow(C31180, -2);
    const double C31213 = std::pow(C31180, -1);
    const double C31148 = C31147 * C29967;
    const double C30013 = C30011 / C30010;
    const double C129 =
        ((std::pow(zP - zQ, 2) * bs[2] * std::pow(C30011 / C30010, 2) -
          (bs[1] * C30011) / C30010) *
         std::pow(ae, 2)) /
        C29975;
    const double C116 = -(C30022 * bs[1] * C30011) / C30010;
    const double C291 = -(C30156 * bs[1] * C30011) / C30010;
    const double C480 = -(C30015 * bs[1] * C30011) / C30010;
    const double C30026 = C30019 * C30024;
    const double C30035 = C30019 * C30032;
    const double C30043 = C30019 * C30041;
    const double C30055 = C30019 * C30052;
    const double C30081 = C30016 * C30074;
    const double C30088 = C30024 * C30074;
    const double C30097 = C30032 * C30074;
    const double C30110 = C30041 * C30074;
    const double C30131 = C30052 * C30074;
    const double C122 = (-(bs[1] * C30074 * C30011) / C30010) / C29968;
    const double C30901 = C30900 * C29967;
    const double C30934 = std::pow(C30921, -1);
    const double C31188 = std::pow(C30921, -2);
    const double C30935 = 2 * C30920;
    const double C31192 = C30920 * C30921;
    const double C31191 = 4 * C30920;
    const double C31181 = std::pow(C30919, 2);
    const double C30923 = C30918 * C30916;
    const double C30951 = C30950 * C30916;
    const double C31193 = std::pow(C31007, 2);
    const double C30969 = C30968 * C30916;
    const double C31195 = std::pow(C31049, 2);
    const double C31135 = C31134 * C29967;
    const double C31149 = C31148 / C29968;
    const double C30017 = -C30013;
    const double C30025 = std::pow(C30013, 4);
    const double C30042 = std::pow(C30013, 6);
    const double C30077 = std::pow(C30013, 2);
    const double C130 = ((xP - xQ) *
                         (bs[2] * std::pow(C30013, 2) +
                          std::pow(zP - zQ, 2) * bs[3] * std::pow(-C30013, 3)) *
                         std::pow(ae, 2)) /
                        C29975;
    const double C30902 = C30901 / C29968;
    const double C31225 = 4 * C31192;
    const double C31224 = C30917 * C31191;
    const double C30924 = C30923 / C30917;
    const double C30952 = C30951 / C30917;
    const double C30970 = C30969 / C30917;
    const double C31136 = C31135 / C29968;
    const double C31150 = -C31149;
    const double C30020 = std::pow(C30017, 3);
    const double C30033 = std::pow(C30017, 5);
    const double C30053 = std::pow(C30017, 7);
    const double C30027 = C30026 * C30025;
    const double C30031 = C30024 * C30025;
    const double C30090 = C30025 * C30088;
    const double C30044 = C30043 * C30042;
    const double C30051 = C30041 * C30042;
    const double C30114 = C30042 * C30110;
    const double C30080 = C30078 * C30077;
    const double C123 = (C30022 * C30077 * C30078 * C30074) / C29968;
    const double C301 = (C30156 * C30077 * C30078 * C30074) / C29968;
    const double C490 = (C30015 * C30077 * C30078 * C30074) / C29968 -
                        (ae * bs[1] * C30011) / (C30010 * C29968);
    const double C30903 = -C30902;
    const double C30925 = -C30924;
    const double C30953 = -C30952;
    const double C30971 = -C30970;
    const double C31137 = -C31136;
    const double C31151 = std::exp(C31150);
    const double C30023 = C30016 * C30020;
    const double C30082 = C30020 * C30081;
    const double C131 =
        ((bs[2] * std::pow(C30013, 2) + C30019 * C30016 * C30020) * C30018 +
         (C30016 * C30020 + C30019 * bs[4] * std::pow(C30013, 4)) * C30018 *
             std::pow(xP - xQ, 2)) /
        C29975;
    const double C311 =
        ((yP - yQ) * (bs[2] * std::pow(C30013, 2) + C30019 * C30016 * C30020) *
         C30018) /
        C29975;
    const double C500 =
        (2 * ae * C30077 * C30078 * C30074 +
         C30015 * (C30078 * C30077 + C30019 * C30016 * C30020) * C30018) /
        C29975;
    const double C30036 = C30035 * C30033;
    const double C30040 = C30032 * C30033;
    const double C30099 = C30033 * C30097;
    const double C30056 = C30055 * C30053;
    const double C30136 = C30053 * C30131;
    const double C30098 = C30031 * C30034;
    const double C30111 = C30022 * C30031;
    const double C30195 = C30031 * C30166;
    const double C30265 = C30031 * C30019;
    const double C30264 = C30015 * C30031;
    const double C30263 = C30031 * ae;
    const double C30348 = C30156 * C30031;
    const double C30092 = C30022 * C30090;
    const double C30184 = C30156 * C30090;
    const double C30248 = C30015 * C30090;
    const double C30259 = ae * C30090;
    const double C30134 = C30051 * C30034;
    const double C30419 = C30051 * C30166;
    const double C30503 = C30022 * C30051;
    const double C30585 = C30051 * C30019;
    const double C30584 = C30015 * C30051;
    const double C30583 = C30051 * ae;
    const double C30693 = C30156 * C30051;
    const double C30117 = C30114 * C30034;
    const double C30130 = C30022 * C30114;
    const double C30399 = C30114 * C30166;
    const double C30415 = C30156 * C30114;
    const double C30544 = C30015 * C30114;
    const double C30577 = ae * C30114;
    const double C30083 = C30080 * ae;
    const double C117 = C30080 * C30034 - (bs[1] * C30011) / C30010;
    const double C290 = C30156 * C30022 * C30080;
    const double C292 = C30080 * C30166 - (bs[1] * C30011) / C30010;
    const double C479 = C30015 * C30022 * C30080;
    const double C481 = C30080 * C30019 - (bs[1] * C30011) / C30010;
    const double C924 = C30015 * C30156 * C30080;
    const double C30904 = std::exp(C30903);
    const double C30926 = std::exp(C30925);
    const double C30954 = std::exp(C30953);
    const double C30972 = std::exp(C30971);
    const double C31138 = std::exp(C31137);
    const double C140 = C31151 * C130;
    const double C29978 = C29976 * C31151;
    const double C113 =
        -((C31151 - (C29966 * 2 * C29967 * C29966 * C31151) / C29968) * 2 *
          C29967) /
        C29968;
    const double C114 = -(2 * C29967 * C29966 * C31151) / C29968;
    const double C31246 = C31151 * C31212;
    const double C8982 =
        (C31151 * std::pow(C31212, 2)) / C29975 + C31151 / C31180;
    const double C8984 = C31215 * C31151;
    const double C18734 = C31213 * C31151;
    const double C30028 = C30023 + C30027;
    const double C30089 = C30022 * C30023;
    const double C30185 = C30156 * C30023;
    const double C30250 = C30015 * C30023;
    const double C30249 = C30023 * ae;
    const double C118 =
        2 * C30022 * C30080 + C30022 * (C30080 + C30023 * C30034);
    const double C289 = C30156 * (C30080 + C30023 * C30034);
    const double C478 = C30015 * (C30080 + C30023 * C30034);
    const double C1148 =
        2 * C30156 * C30080 + C30156 * (C30080 + C30023 * C30166);
    const double C1285 = C30015 * (C30080 + C30023 * C30166);
    const double C2000 =
        2 * C30015 * C30080 + C30015 * (C30080 + C30023 * C30019);
    const double C30084 = C30015 * C30082;
    const double C124 = (C30077 * C30078 * C30074 + C30082 * C30034) / C29968;
    const double C125 =
        (2 * C30022 * C30082 + C30022 * (C30082 + C30090 * C30034)) / C29968;
    const double C299 = (C30156 * (C30082 + C30090 * C30034)) / C29968;
    const double C300 = (C30156 * C30022 * C30082) / C29968;
    const double C302 = (C30077 * C30078 * C30074 + C30082 * C30166) / C29968;
    const double C488 = (C30015 * (C30082 + C30090 * C30034) +
                         (C30080 + C30023 * C30034) * ae) /
                        C29968;
    const double C489 =
        (C30015 * C30022 * C30082 + C30022 * C30080 * ae) / C29968;
    const double C929 =
        (C30015 * C30156 * C30082 + C30156 * C30080 * ae) / C29968;
    const double C1154 =
        (2 * C30156 * C30082 + C30156 * (C30082 + C30090 * C30166)) / C29968;
    const double C1294 = (C30015 * (C30082 + C30090 * C30166) +
                          (C30080 + C30023 * C30166) * ae) /
                         C29968;
    const double C143 = C31151 * C131;
    const double C4849 = C31151 * C311;
    const double C30037 = C30031 + C30036;
    const double C30045 = C30040 + C30044;
    const double C30112 = C30040 * C30034;
    const double C30133 = C30022 * C30040;
    const double C30401 = C30040 * C30166;
    const double C30418 = C30156 * C30040;
    const double C30547 = C30040 * C30019;
    const double C30546 = C30015 * C30040;
    const double C30545 = C30040 * ae;
    const double C30101 = C30099 * C30034;
    const double C30109 = C30022 * C30099;
    const double C30194 = C30099 * C30166;
    const double C30262 = C30015 * C30099;
    const double C30347 = C30156 * C30099;
    const double C30540 = ae * C30099;
    const double C30057 = C30051 + C30056;
    const double C30139 = C30136 * C30034;
    const double C30416 = C30136 * C30166;
    const double C30501 = C30022 * C30136;
    const double C30582 = C30015 * C30136;
    const double C30692 = C30156 * C30136;
    const double C30100 = C30023 + C30098;
    const double C30115 = 2 * C30111;
    const double C30178 = C30156 * C30111;
    const double C30239 = C30015 * C30111;
    const double C30238 = C30111 * ae;
    const double C30197 = C30023 + C30195;
    const double C30269 = C30023 + C30265;
    const double C30268 = C30264 * ae;
    const double C30548 = 2 * C30264;
    const double C30351 = C30015 * C30348;
    const double C30350 = C30348 * ae;
    const double C30400 = 2 * C30348;
    const double C30093 = C30015 * C30092;
    const double C303 = (C30022 * C30082 + C30092 * C30166) / C29968;
    const double C30186 = C30015 * C30184;
    const double C30266 = 2 * C30259;
    const double C30138 = C30040 + C30134;
    const double C30423 = C30040 + C30419;
    const double C30505 = C30503 * C30166;
    const double C30629 = C30156 * C30503;
    const double C30659 = C30503 * C30019;
    const double C30658 = C30015 * C30503;
    const double C30657 = C30503 * ae;
    const double C30593 = C30040 + C30585;
    const double C30592 = C30584 * ae;
    const double C30701 = C30693 * C30019;
    const double C30700 = C30015 * C30693;
    const double C30699 = C30693 * ae;
    const double C30119 = C30099 + C30117;
    const double C30135 = 2 * C30130;
    const double C30203 = C30130 * C30166;
    const double C30285 = C30015 * C30130;
    const double C30361 = C30156 * C30130;
    const double C30652 = ae * C30130;
    const double C30402 = C30099 + C30399;
    const double C30420 = 2 * C30415;
    const double C30457 = C30015 * C30415;
    const double C30688 = ae * C30415;
    const double C30590 = 2 * C30577;
    const double C31214 = C30904 * C31179;
    const double C103 =
        (C30904 * std::pow(C31179, 2)) / C29975 + C30904 / C31180;
    const double C105 = C31215 * C30904;
    const double C13238 = C31213 * C30904;
    const double C30928 = C30926 * C30919;
    const double C30927 = C30926 / C30921;
    const double C30937 = C30934 * C30926;
    const double C31184 = C30926 * C30922;
    const double C31222 = C31188 * C30926;
    const double C31216 = C30926 * C31181;
    const double C31008 = C30954 / C30921;
    const double C31010 = C30954 * C31007;
    const double C31017 = C30934 * C30954;
    const double C31199 = C30954 * C31009;
    const double C31228 = C31188 * C30954;
    const double C31226 = C30954 * C31193;
    const double C31050 = C30972 / C30921;
    const double C31052 = C30972 * C31049;
    const double C31059 = C30934 * C30972;
    const double C31205 = C30972 * C31051;
    const double C31231 = C31188 * C30972;
    const double C31229 = C30972 * C31195;
    const double C31245 = C31138 * C31211;
    const double C4733 =
        (C31138 * std::pow(C31211, 2)) / C29975 + C31138 / C31180;
    const double C4735 = C31215 * C31138;
    const double C13236 = C31213 * C31138;
    const double C29980 = 2 * C29978;
    const double C8990 = ((0 * ae) / C29968 - C29978 / C29975) / (2 * C29968) +
                         (0 * ae) / C29968;
    const double C18738 = (0 * ae) / C29968 - C29978 / C29975;
    const double C141 = C113 * C117;
    const double C138 = C113 * C116;
    const double C323 = C113 * C290;
    const double C512 = C113 * C479;
    const double C4850 = C113 * C292;
    const double C4848 = C113 * C291;
    const double C5317 = C113 * C924;
    const double C139 = C114 * C123;
    const double C137 = C114 * C122;
    const double C326 = C114 * C301;
    const double C515 = C114 * C490;
    const double C8983 = (2 * C31213 * C31246) / C29968;
    const double C18733 = C31246 / C29968;
    const double C30029 = C30028 * C30018;
    const double C30091 = C30089 * ae;
    const double C930 =
        (C30015 * C30156 * C30092 + C30156 * C30089 * ae) / C29968;
    const double C293 = C30022 * C30080 + C30089 * C30166;
    const double C482 = C30022 * C30080 + C30089 * C30019;
    const double C925 = C30015 * C30156 * C30089;
    const double C1147 =
        2 * C30156 * C30089 + C30156 * (C30089 + C30111 * C30166);
    const double C1284 = C30015 * (C30089 + C30111 * C30166);
    const double C1999 =
        2 * C30015 * C30089 + C30015 * (C30089 + C30111 * C30019);
    const double C30187 = C30185 * ae;
    const double C1282 = C30156 * C30080 + C30185 * C30019;
    const double C2400 =
        2 * C30015 * C30185 + C30015 * (C30185 + C30348 * C30019);
    const double C30252 = C30250 * ae;
    const double C30251 = C30248 + C30249;
    const double C144 = C113 * C118;
    const double C320 = C113 * C289;
    const double C509 = C113 * C478;
    const double C4852 = C113 * C1148;
    const double C5315 = C113 * C1285;
    const double C30085 = C30084 + C30083;
    const double C142 = C114 * C124;
    const double C145 = C114 * C125;
    const double C321 = C114 * C299;
    const double C324 = C114 * C300;
    const double C327 = C114 * C302;
    const double C510 = C114 * C488;
    const double C513 = C114 * C489;
    const double C940 = C114 * C929;
    const double C1167 = C114 * C1154;
    const double C1313 = C114 * C1294;
    const double C30038 = C30037 * C30018;
    const double C30046 = C30045 * C30018;
    const double C30116 = C30031 + C30112;
    const double C30137 = 2 * C30133;
    const double C30204 = C30133 * C30166;
    const double C30288 = C30133 * C30019;
    const double C30287 = C30015 * C30133;
    const double C30286 = C30133 * ae;
    const double C30362 = C30156 * C30133;
    const double C30403 = C30031 + C30401;
    const double C30422 = 2 * C30418;
    const double C30460 = C30418 * C30019;
    const double C30459 = C30015 * C30418;
    const double C30458 = C30418 * ae;
    const double C30553 = C30031 + C30547;
    const double C30552 = C30546 * ae;
    const double C30586 = 2 * C30546;
    const double C30551 = C30544 + C30545;
    const double C30103 = C30090 + C30101;
    const double C30113 = 2 * C30109;
    const double C30177 = C30156 * C30109;
    const double C30237 = C30015 * C30109;
    const double C30282 = ae * C30109;
    const double C1153 =
        (2 * C30156 * C30092 + C30156 * (C30092 + C30109 * C30166)) / C29968;
    const double C1293 = (C30015 * (C30092 + C30109 * C30166) +
                          (C30089 + C30111 * C30166) * ae) /
                         C29968;
    const double C30196 = C30090 + C30194;
    const double C30267 = C30262 + C30263;
    const double C30349 = C30015 * C30347;
    const double C30398 = 2 * C30347;
    const double C30454 = ae * C30347;
    const double C30550 = 2 * C30540;
    const double C30058 = C30057 * C30018;
    const double C30141 = C30114 + C30139;
    const double C30421 = C30114 + C30416;
    const double C30504 = C30501 * C30166;
    const double C30628 = C30156 * C30501;
    const double C30656 = C30015 * C30501;
    const double C30591 = C30582 + C30583;
    const double C30698 = C30015 * C30692;
    const double C30102 = C30100 * ae;
    const double C119 = 3 * (C30080 + C30023 * C30034) +
                        C30022 * (2 * C30089 + C30022 * C30100);
    const double C294 = C30080 + C30023 * C30034 + C30100 * C30166;
    const double C295 = C30156 * (2 * C30089 + C30022 * C30100);
    const double C483 = C30080 + C30023 * C30034 + C30100 * C30019;
    const double C484 = C30015 * (2 * C30089 + C30022 * C30100);
    const double C926 = C30015 * C30156 * C30100;
    const double C30180 = C30178 * ae;
    const double C1281 = C30156 * C30089 + C30178 * C30019;
    const double C30241 = C30239 * ae;
    const double C30199 = C30197 * ae;
    const double C1149 = 3 * (C30080 + C30023 * C30166) +
                         C30156 * (2 * C30185 + C30156 * C30197);
    const double C1286 = C30080 + C30023 * C30166 + C30197 * C30019;
    const double C1696 = C30015 * (2 * C30185 + C30156 * C30197);
    const double C30272 = C30269 * ae;
    const double C2001 = 3 * (C30080 + C30023 * C30019) +
                         C30015 * (2 * C30250 + C30015 * C30269);
    const double C30353 = C30351 * ae;
    const double C329 = C114 * C303;
    const double C30140 = C30022 * C30138;
    const double C30213 = C30138 * C30166;
    const double C30311 = C30138 * C30019;
    const double C30310 = C30015 * C30138;
    const double C30309 = C30138 * ae;
    const double C30376 = C30156 * C30138;
    const double C30425 = C30156 * C30423;
    const double C30483 = C30423 * C30019;
    const double C30482 = C30015 * C30423;
    const double C30481 = C30423 * ae;
    const double C30507 = C30133 + C30505;
    const double C30635 = C30629 * C30019;
    const double C30634 = C30015 * C30629;
    const double C30633 = C30629 * ae;
    const double C30665 = C30133 + C30659;
    const double C30664 = C30658 * ae;
    const double C30598 = C30015 * C30593;
    const double C30597 = C30593 * ae;
    const double C30705 = C30418 + C30701;
    const double C30704 = C30700 * ae;
    const double C30121 = C30022 * C30119;
    const double C30129 = 3 * C30119;
    const double C30170 = C30156 * C30119;
    const double C30226 = C30015 * C30119;
    const double C30305 = ae * C30119;
    const double C30205 = C30109 + C30203;
    const double C30363 = C30015 * C30361;
    const double C30500 = 2 * C30361;
    const double C30625 = ae * C30361;
    const double C30662 = 2 * C30652;
    const double C30404 = C30156 * C30402;
    const double C30414 = 3 * C30402;
    const double C30443 = C30015 * C30402;
    const double C30477 = ae * C30402;
    const double C30696 = 2 * C30688;
    const double C104 = (2 * C31213 * C31214) / C29968;
    const double C13237 = C31214 / C29968;
    const double C30929 = C30928 * C30922;
    const double C30936 = C30928 / C30935;
    const double C31185 = C30934 * C30928;
    const double C31183 = C30928 / C30917;
    const double C286 = (C30926 * std::pow(C30922, 2)) / C30920 + C30927;
    const double C30938 = C30937 * C30922;
    const double C31189 = C30919 * C30937;
    const double C31187 = 2 * C30937;
    const double C31232 = C30937 / C31191;
    const double C112 = C30937 / C31225;
    const double C2881 = C30937 / C30921;
    const double C31218 = C31184 / C30917;
    const double C287 = (-2 * C30934 * C31184) / C30917;
    const double C31247 = C31216 / C30920;
    const double C1072 = (C30954 * std::pow(C31009, 2)) / C30920 + C31008;
    const double C31011 = C31010 * C31009;
    const double C31016 = C31010 / C30935;
    const double C31197 = C31010 / C30917;
    const double C31194 = C30934 * C31010;
    const double C31018 = C31017 * C31009;
    const double C31203 = C31007 * C31017;
    const double C31202 = 2 * C31017;
    const double C31238 = C31017 / C31191;
    const double C1144 = C31017 / C31225;
    const double C2878 = C31017 / C30921;
    const double C31234 = C31199 / C30917;
    const double C1073 = (-2 * C30934 * C31199) / C30917;
    const double C31252 = C31226 / C30920;
    const double C1818 = (C30972 * std::pow(C31051, 2)) / C30920 + C31050;
    const double C31053 = C31052 * C31051;
    const double C31058 = C31052 / C30935;
    const double C31198 = C31052 / C30917;
    const double C31196 = C30934 * C31052;
    const double C31060 = C31059 * C31051;
    const double C31209 = C31049 * C31059;
    const double C31208 = 2 * C31059;
    const double C31244 = C31059 / C31191;
    const double C1997 = C31059 / C31225;
    const double C3780 = C31059 / C30921;
    const double C31240 = C31205 / C30917;
    const double C1819 = (-2 * C30934 * C31205) / C30917;
    const double C31254 = C31229 / C30920;
    const double C4734 = (2 * C31213 * C31245) / C29968;
    const double C13235 = C31245 / C29968;
    const double C29981 = C29966 * C29980;
    const double C18749 = C18738 * C488;
    const double C18746 = C18738 * C489;
    const double C18741 = C18738 * C490;
    const double C18947 = C18738 * C1294;
    const double C18944 = C18738 * C929;
    const double C154 = C138 + C139;
    const double C4854 = C4848 + C326;
    const double C18753 = C18733 * C131;
    const double C18744 = C18733 * C130;
    const double C24635 = C18733 * C311;
    const double C132 =
        (2 * C30022 * C30029 +
         C30022 * (C30029 +
                   (C30024 * C30025 + C30019 * bs[5] * std::pow(C30017, 5)) *
                       C30018 * std::pow(C30022, 2))) /
        C29975;
    const double C310 = ((yP - yQ) * C30022 * C30029) / C29975;
    const double C312 =
        ((bs[2] * std::pow(C30013, 2) + C30019 * C30016 * C30020) * C30018 +
         C30029 * std::pow(yP - yQ, 2)) /
        C29975;
    const double C499 = (2 * ae * C30022 * C30020 * C30016 * C30074 +
                         C30015 * C30022 * C30029) /
                        C29975;
    const double C934 =
        (2 * ae * C30156 * C30082 + C30015 * C30156 * C30029) / C29975;
    const double C30094 = C30093 + C30091;
    const double C942 = C114 * C930;
    const double C18939 = C18738 * C930;
    const double C328 = C113 * C293;
    const double C517 = C113 * C482;
    const double C941 = C113 * C925;
    const double C1426 = C113 * C1147;
    const double C1588 = C113 * C1284;
    const double C2292 = C113 * C1999;
    const double C30188 = C30186 + C30187;
    const double C5634 = C113 * C1282;
    const double C6680 = C113 * C2400;
    const double C30254 = ae * C30251;
    const double C30253 = C30015 * C30251;
    const double C30261 = 2 * C30251;
    const double C30086 = ae * C30085;
    const double C491 =
        (C30077 * C30078 * C30074 + C30015 * C30085 + C30015 * C30080 * ae) /
        C29968;
    const double C155 = C141 + C142;
    const double C156 = C144 + C145;
    const double C342 = C320 + C321;
    const double C343 = C323 + C324;
    const double C4855 = C4850 + C327;
    const double C531 = C509 + C510;
    const double C532 = C512 + C513;
    const double C5320 = C5317 + C940;
    const double C4856 = C4852 + C1167;
    const double C5319 = C5315 + C1313;
    const double C30163 = C30022 * C30038;
    const double C30260 = C30015 * C30038;
    const double C30346 = C30156 * C30038;
    const double C133 =
        (3 * (C30029 + C30038 * C30034) +
         C30022 * (2 * C30022 * C30038 +
                   C30022 * (C30038 + (C30032 * C30033 +
                                       C30019 * bs[6] * std::pow(C30013, 6)) *
                                          C30018 * C30034))) /
        C29975;
    const double C309 = ((yP - yQ) * (C30029 + C30038 * C30034)) / C29975;
    const double C313 =
        (C30022 * C30029 + C30022 * C30038 * std::pow(yP - yQ, 2)) / C29975;
    const double C498 =
        (2 * ae *
             (C30020 * C30016 * C30074 + C30025 * C30024 * C30074 * C30034) +
         C30015 * (C30029 + C30038 * C30034)) /
        C29975;
    const double C935 =
        (2 * ae * C30156 * C30092 + C30015 * C30156 * C30022 * C30038) / C29975;
    const double C1160 = (2 * C30156 * C30029 +
                          C30156 * (C30029 + C30038 * std::pow(C30156, 2))) /
                         C29975;
    const double C1303 = (2 * ae * (C30082 + C30090 * C30166) +
                          C30015 * (C30029 + C30038 * C30166)) /
                         C29975;
    const double C30047 = C30046 * C30034;
    const double C30050 = C30022 * C30046;
    const double C30388 = C30046 * C30166;
    const double C30391 = C30156 * C30046;
    const double C30541 = C30015 * C30046;
    const double C1161 =
        (3 * (C30029 + C30038 * C30166) +
         C30156 * (2 * C30156 * C30038 + C30156 * (C30038 + C30046 * C30166))) /
        C29975;
    const double C30118 = C30022 * C30116;
    const double C30132 = 3 * C30116;
    const double C30171 = C30156 * C30116;
    const double C30228 = C30015 * C30116;
    const double C30227 = C30116 * ae;
    const double C1146 =
        2 * C30156 * C30100 + C30156 * (C30100 + C30116 * C30166);
    const double C1283 = C30015 * (C30100 + C30116 * C30166);
    const double C1998 =
        2 * C30015 * C30100 + C30015 * (C30100 + C30116 * C30019);
    const double C30206 = C30111 + C30204;
    const double C30292 = C30111 + C30288;
    const double C30291 = C30287 * ae;
    const double C30660 = 2 * C30287;
    const double C30290 = C30285 + C30286;
    const double C30365 = C30015 * C30362;
    const double C30364 = C30362 * ae;
    const double C30502 = 2 * C30362;
    const double C2401 =
        2 * C30015 * C30178 + C30015 * (C30178 + C30362 * C30019);
    const double C30405 = C30156 * C30403;
    const double C30417 = 3 * C30403;
    const double C30445 = C30015 * C30403;
    const double C30444 = C30403 * ae;
    const double C6307 =
        2 * C30015 * C30197 + C30015 * (C30197 + C30403 * C30019);
    const double C30464 = C30348 + C30460;
    const double C30463 = C30459 * ae;
    const double C30694 = 2 * C30459;
    const double C30462 = C30457 + C30458;
    const double C30557 = C30015 * C30553;
    const double C30556 = C30553 * ae;
    const double C30587 = 3 * C30553;
    const double C30558 = ae * C30551;
    const double C30555 = C30015 * C30551;
    const double C30581 = 2 * C30551;
    const double C30104 = C30015 * C30103;
    const double C126 = (3 * (C30082 + C30090 * C30034) +
                         C30022 * (2 * C30092 + C30022 * C30103)) /
                        C29968;
    const double C304 = (C30082 + C30090 * C30034 + C30103 * C30166) / C29968;
    const double C305 = (C30156 * (2 * C30092 + C30022 * C30103)) / C29968;
    const double C494 = (C30015 * (2 * C30092 + C30022 * C30103) +
                         (2 * C30089 + C30022 * C30100) * ae) /
                        C29968;
    const double C931 =
        (C30015 * C30156 * C30103 + C30156 * C30100 * ae) / C29968;
    const double C1152 =
        (2 * C30156 * C30103 + C30156 * (C30103 + C30119 * C30166)) / C29968;
    const double C1292 = (C30015 * (C30103 + C30119 * C30166) +
                          (C30100 + C30116 * C30166) * ae) /
                         C29968;
    const double C30179 = C30015 * C30177;
    const double C30240 = C30237 + C30238;
    const double C30289 = 2 * C30282;
    const double C1166 = C114 * C1153;
    const double C1312 = C114 * C1293;
    const double C18952 = C18738 * C1293;
    const double C30198 = C30015 * C30196;
    const double C1702 =
        (2 * ae * (2 * C30184 + C30156 * C30196) +
         C30015 * (2 * C30156 * C30038 + C30156 * (C30038 + C30046 * C30166))) /
        C29975;
    const double C1155 = (3 * (C30082 + C30090 * C30166) +
                          C30156 * (2 * C30184 + C30156 * C30196)) /
                         C29968;
    const double C1699 = (C30015 * (2 * C30184 + C30156 * C30196) +
                          (2 * C30185 + C30156 * C30197) * ae) /
                         C29968;
    const double C30273 = ae * C30267;
    const double C30271 = C30015 * C30267;
    const double C30543 = 2 * C30267;
    const double C30352 = C30349 + C30350;
    const double C30461 = 2 * C30454;
    const double C30059 = C30058 * C30034;
    const double C30392 = C30058 * C30166;
    const double C30437 = C30022 * C30058;
    const double C30578 = C30015 * C30058;
    const double C30689 = C30156 * C30058;
    const double C30143 = C30022 * C30141;
    const double C30212 = C30141 * C30166;
    const double C30308 = C30015 * C30141;
    const double C30375 = C30156 * C30141;
    const double C30424 = C30156 * C30421;
    const double C30480 = C30015 * C30421;
    const double C30506 = C30130 + C30504;
    const double C30632 = C30015 * C30628;
    const double C30663 = C30656 + C30657;
    const double C30599 = ae * C30591;
    const double C30596 = C30015 * C30591;
    const double C30703 = C30698 + C30699;
    const double C147 = C113 * C119;
    const double C331 = C113 * C294;
    const double C334 = C113 * C295;
    const double C520 = C113 * C483;
    const double C523 = C113 * C484;
    const double C944 = C113 * C926;
    const double C2174 = C113 * C1281;
    const double C5503 = C113 * C1149;
    const double C5636 = C113 * C1286;
    const double C5638 = C113 * C1696;
    const double C30142 = C30137 + C30140;
    const double C30215 = C30116 + C30213;
    const double C30315 = C30116 + C30311;
    const double C30314 = C30310 * ae;
    const double C30379 = C30015 * C30376;
    const double C30378 = C30376 * ae;
    const double C30427 = C30422 + C30425;
    const double C30487 = C30403 + C30483;
    const double C30486 = C30482 * ae;
    const double C30509 = C30156 * C30507;
    const double C30519 = C30015 * C30507;
    const double C30518 = C30507 * ae;
    const double C30639 = C30362 + C30635;
    const double C30638 = C30634 * ae;
    const double C30669 = C30015 * C30665;
    const double C30668 = C30665 * ae;
    const double C30602 = C30586 + C30598;
    const double C30709 = C30015 * C30705;
    const double C30708 = C30705 * ae;
    const double C30123 = C30113 + C30121;
    const double C30172 = C30015 * C30170;
    const double C30312 = 2 * C30305;
    const double C30207 = C30015 * C30205;
    const double C1156 = (3 * (C30092 + C30109 * C30166) +
                          C30156 * (2 * C30177 + C30156 * C30205)) /
                         C29968;
    const double C30630 = 2 * C30625;
    const double C30406 = C30398 + C30404;
    const double C30484 = 2 * C30477;
    const double C30930 = C30929 / C30920;
    const double C31219 = 2 * C31185;
    const double C30939 = C30938 / C30917;
    const double C31223 = C31189 / C30935;
    const double C31248 = C31183 - C31218;
    const double C2618 = -C31218;
    const double C31262 = C31247 + C30927;
    const double C31012 = C31011 / C30920;
    const double C31227 = 2 * C31194;
    const double C31019 = C31018 / C30917;
    const double C31237 = C31203 / C30935;
    const double C31256 = C31197 - C31234;
    const double C2510 = -C31234;
    const double C31265 = C31252 + C31008;
    const double C31054 = C31053 / C30920;
    const double C31230 = 2 * C31196;
    const double C31061 = C31060 / C30917;
    const double C31243 = C31209 / C30935;
    const double C31259 = C31198 - C31240;
    const double C3272 = -C31240;
    const double C31266 = C31254 + C31050;
    const double C29982 = C29981 / C29968;
    const double C159 = C154 + C139;
    const double C4857 = C4854 + C326;
    const double C146 = C31151 * C132;
    const double C18756 = C18733 * C132;
    const double C325 = C31151 * C310;
    const double C18943 = C18733 * C310;
    const double C4851 = C31151 * C312;
    const double C24641 = C18733 * C312;
    const double C514 = C31151 * C499;
    const double C18747 = C18734 * C499;
    const double C19145 = C18733 * C499;
    const double C5318 = C31151 * C934;
    const double C24637 = C18734 * C934;
    const double C25257 = C18733 * C934;
    const double C30095 = ae * C30094;
    const double C492 =
        (C30022 * C30082 + C30015 * C30094 + C30015 * C30089 * ae) / C29968;
    const double C344 = C328 + C329;
    const double C951 = C941 + C942;
    const double C30189 = ae * C30188;
    const double C1291 =
        (C30156 * C30082 + C30015 * C30188 + C30015 * C30185 * ae) / C29968;
    const double C30255 = C30082 + C30253;
    const double C501 =
        ((C30080 + C30019 * C30016 * C30020) * C30018 + C30086 + C30086 +
         C30015 * (2 * ae * C30082 + C30015 * C30029)) /
        C29975;
    const double C516 = C114 * C491;
    const double C8994 = C8990 * C491;
    const double C19146 = C18738 * C491;
    const double C160 = C155 + C142;
    const double C161 = C156 + C145;
    const double C348 = C342 + C321;
    const double C349 = C343 + C324;
    const double C4858 = C4855 + C327;
    const double C537 = C531 + C510;
    const double C538 = C532 + C513;
    const double C5322 = C5320 + C940;
    const double C4859 = C4856 + C1167;
    const double C5321 = C5319 + C1313;
    const double C30270 = C30266 + C30260;
    const double C149 = C31151 * C133;
    const double C18765 = C18733 * C133;
    const double C322 = C31151 * C309;
    const double C18956 = C18733 * C309;
    const double C330 = C31151 * C313;
    const double C18950 = C18733 * C313;
    const double C511 = C31151 * C498;
    const double C18750 = C18734 * C498;
    const double C19158 = C18733 * C498;
    const double C943 = C31151 * C935;
    const double C18940 = C18734 * C935;
    const double C19678 = C18733 * C935;
    const double C4853 = C31151 * C1160;
    const double C25493 = C18733 * C1160;
    const double C5316 = C31151 * C1303;
    const double C24639 = C18734 * C1303;
    const double C25665 = C18733 * C1303;
    const double C30048 = C30038 + C30047;
    const double C30054 = 2 * C30050;
    const double C30283 = C30015 * C30050;
    const double C30360 = C30156 * C30050;
    const double C1159 = (2 * C30156 * C30163 +
                          C30156 * (C30163 + C30050 * std::pow(C30156, 2))) /
                         C29975;
    const double C1162 =
        (3 * (C30163 + C30050 * C30166) +
         C30156 * (2 * C30156 * C30050 +
                   C30156 * (C30050 + C30022 * C30058 * C30166))) /
        C29975;
    const double C1302 = (2 * ae * (C30092 + C30109 * C30166) +
                          C30015 * (C30163 + C30050 * C30166)) /
                         C29975;
    const double C1703 =
        (2 * ae * (2 * C30177 + C30156 * C30205) +
         C30015 * (2 * C30156 * C30050 +
                   C30156 * (C30050 + C30022 * C30058 * C30166))) /
        C29975;
    const double C30389 = C30038 + C30388;
    const double C30393 = 2 * C30391;
    const double C30455 = C30015 * C30391;
    const double C30554 = C30550 + C30541;
    const double C5504 = C31151 * C1161;
    const double C25499 = C18733 * C1161;
    const double C30120 = C30115 + C30118;
    const double C30173 = C30171 * ae;
    const double C1280 = C30156 * C30100 + C30171 * C30019;
    const double C2402 =
        2 * C30015 * C30171 + C30015 * (C30171 + C30376 * C30019);
    const double C30230 = C30228 * ae;
    const double C30229 = C30226 + C30227;
    const double C1424 = C113 * C1146;
    const double C1586 = C113 * C1283;
    const double C2290 = C113 * C1998;
    const double C30208 = C30206 * ae;
    const double C1700 = (C30015 * (2 * C30177 + C30156 * C30205) +
                          (2 * C30178 + C30156 * C30206) * ae) /
                         C29968;
    const double C1150 = 3 * (C30089 + C30111 * C30166) +
                         C30156 * (2 * C30178 + C30156 * C30206);
    const double C1287 = C30089 + C30111 * C30166 + C30206 * C30019;
    const double C1697 = C30015 * (2 * C30178 + C30156 * C30206);
    const double C6572 =
        2 * C30015 * C30206 + C30015 * (C30206 + C30507 * C30019);
    const double C30295 = C30292 * ae;
    const double C2002 = 3 * (C30089 + C30111 * C30019) +
                         C30015 * (2 * C30239 + C30015 * C30292);
    const double C30296 = ae * C30290;
    const double C30294 = C30015 * C30290;
    const double C30655 = 2 * C30290;
    const double C30367 = C30365 * ae;
    const double C30366 = C30363 + C30364;
    const double C15551 = C113 * C2401;
    const double C30407 = C30400 + C30405;
    const double C30447 = C30445 * ae;
    const double C30446 = C30443 + C30444;
    const double C6678 = C113 * C6307;
    const double C30467 = C30464 * ae;
    const double C6308 = 3 * (C30185 + C30348 * C30019) +
                         C30015 * (2 * C30351 + C30015 * C30464);
    const double C30468 = ae * C30462;
    const double C30466 = C30015 * C30462;
    const double C30691 = 2 * C30462;
    const double C30561 = C30548 + C30557;
    const double C30576 = C30046 + C30558;
    const double C30560 = C30099 + C30555;
    const double C30105 = C30104 + C30102;
    const double C148 = C114 * C126;
    const double C332 = C114 * C304;
    const double C335 = C114 * C305;
    const double C524 = C114 * C494;
    const double C18758 = C18738 * C494;
    const double C945 = C114 * C931;
    const double C18958 = C18738 * C931;
    const double C1165 = C114 * C1152;
    const double C1311 = C114 * C1292;
    const double C18961 = C18738 * C1292;
    const double C30181 = C30179 + C30180;
    const double C30243 = ae * C30240;
    const double C30242 = C30015 * C30240;
    const double C30284 = 2 * C30240;
    const double C1430 = C1426 + C1166;
    const double C1592 = C1588 + C1312;
    const double C30200 = C30198 + C30199;
    const double C5639 = C31151 * C1702;
    const double C25495 = C18734 * C1702;
    const double C26149 = C18733 * C1702;
    const double C1168 = C114 * C1155;
    const double C1706 = C114 * C1699;
    const double C19932 = C18738 * C1699;
    const double C30539 = C30038 + C30273;
    const double C30274 = C30090 + C30271;
    const double C30355 = ae * C30352;
    const double C30354 = C30015 * C30352;
    const double C30456 = 2 * C30352;
    const double C30060 = C30046 + C30059;
    const double C30394 = C30046 + C30392;
    const double C30438 = C30437 * C30166;
    const double C30626 = C30156 * C30437;
    const double C30653 = C30015 * C30437;
    const double C30595 = C30590 + C30578;
    const double C30697 = C30015 * C30689;
    const double C30145 = C30135 + C30143;
    const double C30214 = C30119 + C30212;
    const double C30313 = C30308 + C30309;
    const double C30377 = C30015 * C30375;
    const double C30426 = C30420 + C30424;
    const double C30485 = C30480 + C30481;
    const double C30508 = C30156 * C30506;
    const double C30517 = C30015 * C30506;
    const double C30637 = C30632 + C30633;
    const double C30670 = ae * C30663;
    const double C30667 = C30015 * C30663;
    const double C30601 = C30114 + C30596;
    const double C30710 = ae * C30703;
    const double C30707 = C30015 * C30703;
    const double C30144 = C30022 * C30142;
    const double C30329 = C30156 * C30142;
    const double C30337 = C30015 * C30142;
    const double C30336 = C30142 * ae;
    const double C30217 = C30215 * ae;
    const double C1151 = 3 * (C30100 + C30116 * C30166) +
                         C30156 * (2 * C30171 + C30156 * C30215);
    const double C1288 = C30100 + C30116 * C30166 + C30215 * C30019;
    const double C1698 = C30015 * (2 * C30171 + C30156 * C30215);
    const double C30318 = C30315 * ae;
    const double C2003 = 3 * (C30100 + C30116 * C30019) +
                         C30015 * (2 * C30228 + C30015 * C30315);
    const double C30381 = C30379 * ae;
    const double C30429 = C30156 * C30427;
    const double C30530 = C30015 * C30427;
    const double C30529 = C30427 * ae;
    const double C30490 = C30487 * ae;
    const double C6309 = 3 * (C30197 + C30403 * C30019) +
                         C30015 * (2 * C30445 + C30015 * C30487);
    const double C30511 = C30502 + C30509;
    const double C30521 = C30519 * ae;
    const double C30641 = C30639 * ae;
    const double C10707 = 3 * (C30178 + C30362 * C30019) +
                          C30015 * (2 * C30365 + C30015 * C30639);
    const double C30673 = C30660 + C30669;
    const double C30606 = C30015 * C30602;
    const double C30605 = C30602 * ae;
    const double C30713 = C30694 + C30709;
    const double C30124 = C30015 * C30123;
    const double C127 = (4 * (2 * C30092 + C30022 * C30103) +
                         C30022 * (3 * C30103 + C30022 * C30123)) /
                        C29968;
    const double C306 =
        (2 * C30092 + C30022 * C30103 + C30123 * C30166) / C29968;
    const double C307 = (C30156 * (3 * C30103 + C30022 * C30123)) / C29968;
    const double C1169 = C114 * C1156;
    const double C30408 = C30015 * C30406;
    const double C5498 = (4 * (2 * C30184 + C30156 * C30196) +
                          C30156 * (3 * C30196 + C30156 * C30406)) /
                         C29968;
    const double C30931 = C30927 - C30930;
    const double C31249 = C31219 / C30917;
    const double C30940 = C30936 - C30939;
    const double C31263 = C31248 / C30921;
    const double C31013 = C31008 - C31012;
    const double C31253 = C31227 / C30917;
    const double C31020 = C31016 - C31019;
    const double C31267 = C31256 / C30921;
    const double C31055 = C31050 - C31054;
    const double C31255 = C31230 / C30917;
    const double C31062 = C31058 - C31061;
    const double C31269 = C31259 / C30921;
    const double C29983 = C31151 - C29982;
    const double C164 = C159 + C140;
    const double C4860 = C4857 + C4849;
    const double C502 =
        (C30022 * C30029 + C30095 + C30095 +
         C30015 * (2 * ae * C30092 + C30015 * C30022 * C30038)) /
        C29975;
    const double C518 = C114 * C492;
    const double C8995 = C8990 * C492;
    const double C19141 = C18738 * C492;
    const double C350 = C344 + C329;
    const double C954 = C951 + C942;
    const double C1300 =
        (C30156 * C30029 + C30189 + C30189 +
         C30015 * (2 * ae * C30184 + C30015 * C30156 * C30038)) /
        C29975;
    const double C1310 = C114 * C1291;
    const double C9117 = C8990 * C1291;
    const double C19675 = C18738 * C1291;
    const double C30256 = C30255 + C30252;
    const double C165 = C160 + C143;
    const double C166 = C161 + C146;
    const double C355 = C349 + C325;
    const double C4861 = C4858 + C4851;
    const double C544 = C538 + C514;
    const double C5324 = C5322 + C5318;
    const double C354 = C348 + C322;
    const double C543 = C537 + C511;
    const double C4862 = C4859 + C4853;
    const double C5323 = C5321 + C5316;
    const double C134 =
        (4 * (2 * C30022 * C30038 + C30022 * C30048) +
         C30022 * (3 * C30048 +
                   C30022 * (2 * C30022 * C30046 +
                             C30022 * (C30046 +
                                       (C30041 * C30042 +
                                        C30019 * bs[7] * std::pow(C30017, 7)) *
                                           C30018 * C30034)))) /
        C29975;
    const double C314 =
        (C30029 + C30038 * C30034 + C30048 * std::pow(yP - yQ, 2)) / C29975;
    const double C315 =
        ((yP - yQ) * (2 * C30022 * C30038 + C30022 * C30048)) / C29975;
    const double C504 = (2 * ae * (2 * C30092 + C30022 * C30103) +
                         C30015 * (2 * C30022 * C30038 + C30022 * C30048)) /
                        C29975;
    const double C936 =
        (2 * ae * C30156 * C30103 + C30015 * C30156 * C30048) / C29975;
    const double C30293 = C30289 + C30283;
    const double C1427 = C31151 * C1159;
    const double C20229 = C18733 * C1159;
    const double C5759 = C31151 * C1162;
    const double C1589 = C31151 * C1302;
    const double C18953 = C18734 * C1302;
    const double C20435 = C18733 * C1302;
    const double C5914 = C31151 * C1703;
    const double C20227 = C18734 * C1703;
    const double C5500 =
        (4 * (2 * C30346 + C30156 * C30389) +
         C30156 *
             (3 * C30389 + C30156 * (2 * C30156 * C30046 +
                                     C30156 * (C30046 + C30058 * C30166)))) /
        C29975;
    const double C30465 = C30461 + C30455;
    const double C30559 = C30015 * C30554;
    const double C30575 = 2 * C30554;
    const double C30122 = C30120 * ae;
    const double C496 = (C30015 * (3 * C30103 + C30022 * C30123) +
                         (3 * C30100 + C30022 * C30120) * ae) /
                        C29968;
    const double C932 =
        (C30015 * C30156 * C30123 + C30156 * C30120 * ae) / C29968;
    const double C120 = 4 * (2 * C30089 + C30022 * C30100) +
                        C30022 * (3 * C30100 + C30022 * C30120);
    const double C296 = 2 * C30089 + C30022 * C30100 + C30120 * C30166;
    const double C297 = C30156 * (3 * C30100 + C30022 * C30120);
    const double C485 = 2 * C30089 + C30022 * C30100 + C30120 * C30019;
    const double C486 = C30015 * (3 * C30100 + C30022 * C30120);
    const double C927 = C30015 * C30156 * C30120;
    const double C1420 =
        2 * C30156 * C30120 + C30156 * (C30120 + C30142 * C30166);
    const double C1582 = C30015 * (C30120 + C30142 * C30166);
    const double C2286 =
        2 * C30015 * C30120 + C30015 * (C30120 + C30142 * C30019);
    const double C30174 = C30172 + C30173;
    const double C2172 = C113 * C1280;
    const double C30232 = ae * C30229;
    const double C30231 = C30015 * C30229;
    const double C30307 = 2 * C30229;
    const double C30209 = C30207 + C30208;
    const double C1707 = C114 * C1700;
    const double C19930 = C18738 * C1700;
    const double C5758 = C113 * C1150;
    const double C6469 = C113 * C1287;
    const double C5913 = C113 * C1697;
    const double C30651 = C30050 + C30296;
    const double C30297 = C30109 + C30294;
    const double C30369 = ae * C30366;
    const double C30368 = C30015 * C30366;
    const double C30627 = 2 * C30366;
    const double C30409 = C30407 * ae;
    const double C5628 = (C30015 * (3 * C30196 + C30156 * C30406) +
                          (3 * C30197 + C30156 * C30407) * ae) /
                         C29968;
    const double C5496 = 4 * (2 * C30185 + C30156 * C30197) +
                         C30156 * (3 * C30197 + C30156 * C30407);
    const double C5624 = 2 * C30185 + C30156 * C30197 + C30407 * C30019;
    const double C5625 = C30015 * (3 * C30197 + C30156 * C30407);
    const double C6674 =
        2 * C30015 * C30407 + C30015 * (C30407 + C30427 * C30019);
    const double C30449 = ae * C30446;
    const double C30448 = C30015 * C30446;
    const double C30479 = 2 * C30446;
    const double C30687 = C30391 + C30468;
    const double C30469 = C30347 + C30466;
    const double C30564 = C30561 * ae;
    const double C10549 = 4 * (2 * C30250 + C30015 * C30269) +
                          C30015 * (3 * C30269 + C30015 * C30561);
    const double C30589 = C30576 + C30558;
    const double C30563 = C30560 + C30552;
    const double C30106 = ae * C30105;
    const double C493 =
        (C30082 + C30090 * C30034 + C30015 * C30105 + C30015 * C30100 * ae) /
        C29968;
    const double C157 = C147 + C148;
    const double C345 = C331 + C332;
    const double C346 = C334 + C335;
    const double C535 = C523 + C524;
    const double C952 = C944 + C945;
    const double C1429 = C1424 + C1165;
    const double C1591 = C1586 + C1311;
    const double C30182 = ae * C30181;
    const double C1290 =
        (C30156 * C30092 + C30015 * C30181 + C30015 * C30178 * ae) / C29968;
    const double C30244 = C30092 + C30242;
    const double C1432 = C1430 + C1166;
    const double C1594 = C1592 + C1312;
    const double C30201 = ae * C30200;
    const double C1295 =
        (C30082 + C30090 * C30166 + C30015 * C30200 + C30015 * C30197 * ae) /
        C29968;
    const double C5509 = C5503 + C1168;
    const double C5647 = C5638 + C1706;
    const double C30549 = C30539 + C30273;
    const double C30275 = C30274 + C30268;
    const double C30356 = C30184 + C30354;
    const double C30061 = C30022 * C30060;
    const double C30306 = C30015 * C30060;
    const double C30374 = C30156 * C30060;
    const double C1158 = (2 * C30156 * C30048 +
                          C30156 * (C30048 + C30060 * std::pow(C30156, 2))) /
                         C29975;
    const double C1163 =
        (3 * (C30048 + C30060 * C30166) +
         C30156 * (2 * C30156 * C30060 +
                   C30156 * (C30060 +
                             (C30058 + (C30052 * C30053 +
                                        C30019 * bs[8] * std::pow(C30013, 8)) *
                                           C30018 * C30034) *
                                 C30166))) /
        C29975;
    const double C1301 = (2 * ae * (C30103 + C30119 * C30166) +
                          C30015 * (C30048 + C30060 * C30166)) /
                         C29975;
    const double C30395 = C30156 * C30394;
    const double C30478 = C30015 * C30394;
    const double C30439 = C30050 + C30438;
    const double C30631 = C30015 * C30626;
    const double C30666 = C30662 + C30653;
    const double C30600 = C30015 * C30595;
    const double C30702 = C30696 + C30697;
    const double C30147 = C30022 * C30145;
    const double C30328 = C30156 * C30145;
    const double C30335 = C30015 * C30145;
    const double C1421 =
        (2 * C30156 * C30123 + C30156 * (C30123 + C30145 * C30166)) / C29968;
    const double C1583 = (C30015 * (C30123 + C30145 * C30166) +
                          (C30120 + C30142 * C30166) * ae) /
                         C29968;
    const double C30216 = C30015 * C30214;
    const double C1704 =
        (2 * ae * (2 * C30170 + C30156 * C30214) +
         C30015 * (2 * C30156 * C30060 +
                   C30156 * (C30060 +
                             (C30058 + (C30052 * C30053 +
                                        C30019 * bs[8] * std::pow(C30013, 8)) *
                                           C30018 * C30034) *
                                 C30166))) /
        C29975;
    const double C1157 = (3 * (C30103 + C30119 * C30166) +
                          C30156 * (2 * C30170 + C30156 * C30214)) /
                         C29968;
    const double C1701 = (C30015 * (2 * C30170 + C30156 * C30214) +
                          (2 * C30171 + C30156 * C30215) * ae) /
                         C29968;
    const double C30319 = ae * C30313;
    const double C30317 = C30015 * C30313;
    const double C30380 = C30377 + C30378;
    const double C30428 = C30156 * C30426;
    const double C30528 = C30015 * C30426;
    const double C30491 = ae * C30485;
    const double C30489 = C30015 * C30485;
    const double C30510 = C30500 + C30508;
    const double C30520 = C30517 + C30518;
    const double C30642 = ae * C30637;
    const double C30640 = C30015 * C30637;
    const double C30672 = C30130 + C30667;
    const double C30604 = C30601 + C30592;
    const double C30712 = C30415 + C30707;
    const double C30146 = C30132 + C30144;
    const double C30331 = C30329 * ae;
    const double C2168 = C30156 * C30120 + C30329 * C30019;
    const double C30339 = C30337 * ae;
    const double C30431 = C30417 + C30429;
    const double C30532 = C30530 * ae;
    const double C30513 = C30511 * ae;
    const double C5754 = 4 * (2 * C30178 + C30156 * C30206) +
                         C30156 * (3 * C30206 + C30156 * C30511);
    const double C5909 = C30015 * (3 * C30206 + C30156 * C30511);
    const double C6465 = 2 * C30178 + C30156 * C30206 + C30511 * C30019;
    const double C30676 = C30673 * ae;
    const double C10811 = 4 * (2 * C30239 + C30015 * C30292) +
                          C30015 * (3 * C30292 + C30015 * C30673);
    const double C30609 = C30587 + C30606;
    const double C30715 = C30713 * ae;
    const double C10915 = 4 * (2 * C30351 + C30015 * C30464) +
                          C30015 * (3 * C30464 + C30015 * C30713);
    const double C151 = C114 * C127;
    const double C338 = C114 * C306;
    const double C340 = C114 * C307;
    const double C5506 = C114 * C5498;
    const double C31182 = C30931 * C30919;
    const double C31221 = C31187 + C30931;
    const double C31190 = C30940 / C30921;
    const double C31186 = C30940 * C30919;
    const double C654 = C31263 - (C30931 * C30922) / C30917;
    const double C31200 = C31013 * C31007;
    const double C31236 = C31202 + C31013;
    const double C31204 = C31020 / C30921;
    const double C31201 = C31020 * C31007;
    const double C1414 = C31267 - (C31013 * C31009) / C30917;
    const double C31206 = C31055 * C31049;
    const double C31242 = C31208 + C31055;
    const double C31210 = C31062 / C30921;
    const double C31207 = C31062 * C31049;
    const double C2282 = C31269 - (C31055 * C31051) / C30917;
    const double C29984 = C29983 * C29977;
    const double C8986 =
        (((0 - (C29966 * C29974) / C29968) * ae) / C29968 - (0 * be) / C29979) /
            (2 * C29968) +
        ((C29966 * ((C29983 * ae) / C29968 - C29974 / C29979) + C18733) * ae) /
            C29968 +
        (0 * ae) / C29968 - C29978 / C29975;
    const double C8988 =
        ((C29983 * ae) / C29968 - C29974 / C29979) / (2 * C29968) +
        ((C29966 * ((0 * ae) / C29968 - C29978 / C29975) + C18734) * ae) /
            C29968;
    const double C18736 = (C29983 * ae) / C29968 - C29974 / C29979;
    const double C169 = C164 * C31138;
    const double C13240 = C164 * C13235;
    const double C519 = C31151 * C502;
    const double C19152 = C18733 * C502;
    const double C19142 = C18734 * C502;
    const double C533 = C517 + C518;
    const double C356 = C350 + C330;
    const double C957 = C954 + C943;
    const double C5635 = C31151 * C1300;
    const double C25255 = C18734 * C1300;
    const double C25661 = C18733 * C1300;
    const double C5645 = C5634 + C1310;
    const double C30257 = ae * C30256;
    const double C2006 =
        (2 * C30085 + C30015 * C30256 + (C30080 + C30023 * C30019) * ae) /
        C29968;
    const double C170 = C165 * C31138;
    const double C13243 = C165 * C13235;
    const double C171 = C166 * C31138;
    const double C13244 = C166 * C13235;
    const double C361 = C355 * C31138;
    const double C13241 = C355 * C13236;
    const double C13395 = C355 * C13235;
    const double C550 = C544 * C31138;
    const double C13549 = C544 * C13235;
    const double C360 = C354 * C31138;
    const double C13242 = C354 * C13236;
    const double C13398 = C354 * C13235;
    const double C549 = C543 * C31138;
    const double C13552 = C543 * C13235;
    const double C152 = C31151 * C134;
    const double C333 = C31151 * C314;
    const double C18965 = C18733 * C314;
    const double C336 = C31151 * C315;
    const double C19329 = C18733 * C315;
    const double C525 = C31151 * C504;
    const double C18759 = C18734 * C504;
    const double C19471 = C18733 * C504;
    const double C946 = C31151 * C936;
    const double C18959 = C18734 * C936;
    const double C19687 = C18733 * C936;
    const double C5507 = C31151 * C5500;
    const double C30125 = C30124 + C30122;
    const double C529 = C114 * C496;
    const double C18761 = C18738 * C496;
    const double C948 = C114 * C932;
    const double C18966 = C18738 * C932;
    const double C150 = C113 * C120;
    const double C337 = C113 * C296;
    const double C662 = C113 * C297;
    const double C526 = C113 * C485;
    const double C772 = C113 * C486;
    const double C947 = C113 * C927;
    const double C30175 = ae * C30174;
    const double C1289 =
        (C30156 * C30103 + C30015 * C30174 + C30015 * C30171 * ae) / C29968;
    const double C30233 = C30103 + C30231;
    const double C30210 = ae * C30209;
    const double C1296 =
        (C30092 + C30109 * C30166 + C30015 * C30209 + C30015 * C30206 * ae) /
        C29968;
    const double C5761 = C5758 + C1169;
    const double C5916 = C5913 + C1707;
    const double C30661 = C30651 + C30296;
    const double C30298 = C30297 + C30291;
    const double C30370 = C30177 + C30368;
    const double C30410 = C30408 + C30409;
    const double C5643 = C114 * C5628;
    const double C19935 = C18738 * C5628;
    const double C5505 = C113 * C5496;
    const double C5640 = C113 * C5624;
    const double C6020 = C113 * C5625;
    const double C30450 = C30196 + C30448;
    const double C30695 = C30687 + C30468;
    const double C30470 = C30469 + C30463;
    const double C30566 = ae * C30563;
    const double C30565 = C30015 * C30563;
    const double C30580 = 3 * C30563;
    const double C503 = (C30029 + C30038 * C30034 + C30106 + C30106 +
                         C30015 * (2 * ae * C30103 + C30015 * C30048)) /
                        C29975;
    const double C521 = C114 * C493;
    const double C9000 = C8990 * C493;
    const double C19160 = C18738 * C493;
    const double C162 = C157 + C148;
    const double C351 = C345 + C332;
    const double C352 = C346 + C335;
    const double C541 = C535 + C524;
    const double C955 = C952 + C945;
    const double C1431 = C1429 + C1165;
    const double C1593 = C1591 + C1311;
    const double C1299 =
        (C30156 * C30163 + C30182 + C30182 +
         C30015 * (2 * ae * C30177 + C30015 * C30156 * C30050)) /
        C29975;
    const double C1309 = C114 * C1290;
    const double C9125 = C8990 * C1290;
    const double C19680 = C18738 * C1290;
    const double C30245 = C30244 + C30241;
    const double C1434 = C1432 + C1427;
    const double C1596 = C1594 + C1589;
    const double C1304 =
        (C30029 + C30038 * C30166 + C30201 + C30201 +
         C30015 * (2 * ae * C30196 + C30015 * (C30038 + C30046 * C30166))) /
        C29975;
    const double C1314 = C114 * C1295;
    const double C9122 = C8990 * C1295;
    const double C20090 = C18738 * C1295;
    const double C5511 = C5509 + C1168;
    const double C5651 = C5647 + C1706;
    const double C30562 = C30549 + C30559;
    const double C30277 = ae * C30275;
    const double C30276 = C30015 * C30275;
    const double C30542 = 3 * C30275;
    const double C30357 = C30356 + C30353;
    const double C30062 = C30054 + C30061;
    const double C30316 = C30312 + C30306;
    const double C1425 = C31151 * C1158;
    const double C1587 = C31151 * C1301;
    const double C18962 = C18734 * C1301;
    const double C30396 = C30393 + C30395;
    const double C30488 = C30484 + C30478;
    const double C5756 =
        (4 * (2 * C30360 + C30156 * C30439) +
         C30156 * (3 * C30439 +
                   C30156 * (2 * C30156 * C30437 +
                             C30156 * (C30437 + C30022 *
                                                    (C30052 * C30053 +
                                                     C30019 * bs[8] *
                                                         std::pow(C30013, 8)) *
                                                    C30018 * C30166)))) /
        C29975;
    const double C5911 =
        (2 * ae *
             (3 * C30205 +
              C30156 *
                  (2 * C30361 + C30156 * (C30130 + C30022 * C30136 * C30166))) +
         C30015 * (3 * C30439 +
                   C30156 * (2 * C30156 * C30437 +
                             C30156 * (C30437 + C30022 *
                                                    (C30052 * C30053 +
                                                     C30019 * bs[8] *
                                                         std::pow(C30013, 8)) *
                                                    C30018 * C30166)))) /
        C29975;
    const double C30636 = C30630 + C30631;
    const double C30671 = C30015 * C30666;
    const double C30603 = C30589 + C30600;
    const double C30706 = C30015 * C30702;
    const double C30149 = C30129 + C30147;
    const double C30330 = C30015 * C30328;
    const double C30338 = C30335 + C30336;
    const double C1428 = C114 * C1421;
    const double C1590 = C114 * C1583;
    const double C18969 = C18738 * C1583;
    const double C30218 = C30216 + C30217;
    const double C1170 = C114 * C1157;
    const double C1708 = C114 * C1701;
    const double C20231 = C18738 * C1701;
    const double C30320 = C30119 + C30317;
    const double C30383 = ae * C30380;
    const double C30382 = C30015 * C30380;
    const double C30430 = C30414 + C30428;
    const double C30531 = C30528 + C30529;
    const double C30492 = C30402 + C30489;
    const double C30512 = C30015 * C30510;
    const double C5755 = (4 * (2 * C30177 + C30156 * C30205) +
                          C30156 * (3 * C30205 + C30156 * C30510)) /
                         C29968;
    const double C5910 = (C30015 * (3 * C30205 + C30156 * C30510) +
                          (3 * C30206 + C30156 * C30511) * ae) /
                         C29968;
    const double C30523 = ae * C30520;
    const double C30522 = C30015 * C30520;
    const double C30643 = C30361 + C30640;
    const double C30675 = C30672 + C30664;
    const double C30610 = ae * C30604;
    const double C30608 = C30015 * C30604;
    const double C30714 = C30712 + C30704;
    const double C30148 = C30146 * ae;
    const double C121 = 5 * (3 * C30100 + C30022 * C30120) +
                        C30022 * (4 * C30120 + C30022 * C30146);
    const double C298 = 3 * C30100 + C30022 * C30120 + C30146 * C30166;
    const double C487 = 3 * C30100 + C30022 * C30120 + C30146 * C30019;
    const double C658 = C30156 * (4 * C30120 + C30022 * C30146);
    const double C768 = C30015 * (4 * C30120 + C30022 * C30146);
    const double C928 = C30015 * C30156 * C30146;
    const double C30433 = C30431 * ae;
    const double C5497 = 5 * (3 * C30197 + C30156 * C30407) +
                         C30156 * (4 * C30407 + C30156 * C30431);
    const double C5626 = 3 * C30197 + C30156 * C30407 + C30431 * C30019;
    const double C6016 = C30015 * (4 * C30407 + C30156 * C30431);
    const double C30613 = C30609 * ae;
    const double C10550 = 5 * (3 * C30269 + C30015 * C30561) +
                          C30015 * (4 * C30561 + C30015 * C30609);
    const double C31217 = C31182 / C30917;
    const double C31250 = C31221 / C30921;
    const double C31251 = C31223 + C31190;
    const double C656 = C31190 - C30938 / C30935;
    const double C31220 = C31186 / C30917;
    const double C31233 = C31200 / C30917;
    const double C31257 = C31236 / C30921;
    const double C31258 = C31237 + C31204;
    const double C1416 = C31204 - C31018 / C30935;
    const double C31235 = C31201 / C30917;
    const double C31239 = C31206 / C30917;
    const double C31260 = C31242 / C30921;
    const double C31261 = C31243 + C31210;
    const double C2284 = C31210 - C31060 / C30935;
    const double C31241 = C31207 / C30917;
    const double C29992 = C29966 * C29984;
    const double C8985 =
        (ae * -2 * C29974) / (C29975 * 2 * C29968) +
        (((C29966 * ((-4 * C29978) / C29968 - (C29966 * C29984) / C29968) *
           ae) /
              C29968 +
          2 * ((C29983 * ae) / C29968 - C29974 / C29979)) *
         ae) /
            C29968 -
        C29984 / C29979;
    const double C8989 = (-C29984 / C29968) / (4 * C29975);
    const double C18737 = (-C29984 / C29968) / (2 * C29968);
    const double C9004 = C8986 * C126;
    const double C9003 = C8986 * C125;
    const double C8998 = C8986 * C124;
    const double C8997 = C8986 * C123;
    const double C8992 = C8986 * C122;
    const double C9132 = C8986 * C304;
    const double C9131 = C8986 * C299;
    const double C9128 = C8986 * C303;
    const double C9123 = C8986 * C300;
    const double C9120 = C8986 * C302;
    const double C9119 = C8986 * C301;
    const double C9260 = C8986 * C493;
    const double C9259 = C8986 * C488;
    const double C9256 = C8986 * C492;
    const double C9251 = C8986 * C489;
    const double C9248 = C8986 * C491;
    const double C9247 = C8986 * C490;
    const double C9361 = C8986 * C305;
    const double C9462 = C8986 * C494;
    const double C9617 = C8986 * C931;
    const double C9616 = C8986 * C930;
    const double C9611 = C8986 * C929;
    const double C9795 = C8986 * C1155;
    const double C9794 = C8986 * C1154;
    const double C9914 = C8986 * C1295;
    const double C9913 = C8986 * C1294;
    const double C9910 = C8986 * C1291;
    const double C10015 = C8986 * C1153;
    const double C10164 = C8986 * C1293;
    const double C10265 = C8986 * C1699;
    const double C10711 = C8986 * C1290;
    const double C9005 = C8988 * C496;
    const double C9002 = C8988 * C494;
    const double C8999 = C8988 * C488;
    const double C8996 = C8988 * C489;
    const double C8993 = C8988 * C490;
    const double C9133 = C8988 * C1292;
    const double C9130 = C8988 * C931;
    const double C9127 = C8988 * C1293;
    const double C9124 = C8988 * C930;
    const double C9121 = C8988 * C1294;
    const double C9118 = C8988 * C929;
    const double C9258 = C8988 * C493;
    const double C9252 = C8988 * C492;
    const double C9246 = C8988 * C491;
    const double C9362 = C8988 * C932;
    const double C9615 = C8988 * C1290;
    const double C9612 = C8988 * C1291;
    const double C9796 = C8988 * C5628;
    const double C9793 = C8988 * C1699;
    const double C9912 = C8988 * C1295;
    const double C10016 = C8988 * C1700;
    const double C18766 = C18736 * C127;
    const double C18764 = C18736 * C126;
    const double C18755 = C18736 * C125;
    const double C18752 = C18736 * C124;
    const double C18743 = C18736 * C123;
    const double C18740 = C18736 * C122;
    const double C18968 = C18736 * C306;
    const double C18967 = C18736 * C305;
    const double C18964 = C18736 * C304;
    const double C18955 = C18736 * C299;
    const double C18949 = C18736 * C303;
    const double C18946 = C18736 * C302;
    const double C18945 = C18736 * C301;
    const double C18942 = C18736 * C300;
    const double C19169 = C18736 * C494;
    const double C19166 = C18736 * C493;
    const double C19157 = C18736 * C488;
    const double C19151 = C18736 * C492;
    const double C19148 = C18736 * C491;
    const double C19147 = C18736 * C490;
    const double C19144 = C18736 * C489;
    const double C19330 = C18736 * C307;
    const double C19472 = C18736 * C496;
    const double C19688 = C18736 * C932;
    const double C19686 = C18736 * C931;
    const double C19677 = C18736 * C930;
    const double C19674 = C18736 * C929;
    const double C19936 = C18736 * C1156;
    const double C19934 = C18736 * C1155;
    const double C19933 = C18736 * C1154;
    const double C19931 = C18736 * C1153;
    const double C20092 = C18736 * C1295;
    const double C20091 = C18736 * C1294;
    const double C20089 = C18736 * C1293;
    const double C20087 = C18736 * C1291;
    const double C20085 = C18736 * C1290;
    const double C20230 = C18736 * C1152;
    const double C20436 = C18736 * C1292;
    const double C20576 = C18736 * C1700;
    const double C20574 = C18736 * C1699;
    const double C25500 = C18736 * C5498;
    const double C26150 = C18736 * C5628;
    const double C539 = C533 + C518;
    const double C362 = C356 * C31138;
    const double C13396 = C356 * C13235;
    const double C13394 = C356 * C13236;
    const double C960 = C957 * C31138;
    const double C13548 = C957 * C13236;
    const double C14014 = C957 * C13235;
    const double C5649 = C5645 + C1310;
    const double C2012 =
        (2 * (2 * ae * C30082 + C30015 * C30029) + C30257 + C30257 +
         C30015 * (C30029 + C30254 + C30254 +
                   C30015 * (2 * ae * C30090 + C30015 * C30038))) /
        C29975;
    const double C2019 = C114 * C2006;
    const double C9249 = C8988 * C2006;
    const double C9245 = C8990 * C2006;
    const double C10558 = C8986 * C2006;
    const double C19149 = C18738 * C2006;
    const double C20955 = C18736 * C2006;
    const double C30126 = ae * C30125;
    const double C495 = (2 * C30092 + C30022 * C30103 + C30015 * C30125 +
                         C30015 * C30120 * ae) /
                        C29968;
    const double C158 = C150 + C151;
    const double C347 = C337 + C338;
    const double C665 = C662 + C340;
    const double C775 = C772 + C529;
    const double C953 = C947 + C948;
    const double C1298 =
        (C30156 * C30048 + C30175 + C30175 +
         C30015 * (2 * ae * C30170 + C30015 * C30156 * C30060)) /
        C29975;
    const double C1308 = C114 * C1289;
    const double C9129 = C8990 * C1289;
    const double C9618 = C8988 * C1289;
    const double C19683 = C18738 * C1289;
    const double C21158 = C18736 * C1289;
    const double C30234 = C30233 + C30230;
    const double C1305 =
        (C30163 + C30050 * C30166 + C30210 + C30210 +
         C30015 *
             (2 * ae * C30205 + C30015 * (C30050 + C30022 * C30058 * C30166))) /
        C29975;
    const double C1315 = C114 * C1296;
    const double C9126 = C8990 * C1296;
    const double C10165 = C8988 * C1296;
    const double C20094 = C18736 * C1296;
    const double C20088 = C18738 * C1296;
    const double C5762 = C5761 + C1169;
    const double C5917 = C5916 + C1707;
    const double C30300 = ae * C30298;
    const double C30299 = C30015 * C30298;
    const double C30654 = 3 * C30298;
    const double C30371 = C30370 + C30367;
    const double C30411 = ae * C30410;
    const double C5627 = (2 * C30184 + C30156 * C30196 + C30015 * C30410 +
                          C30015 * C30407 * ae) /
                         C29968;
    const double C5510 = C5505 + C5506;
    const double C6023 = C6020 + C5643;
    const double C30451 = C30450 + C30447;
    const double C30472 = ae * C30470;
    const double C30471 = C30015 * C30470;
    const double C30690 = 3 * C30470;
    const double C30588 = C30575 + C30566;
    const double C30567 = C30543 + C30565;
    const double C522 = C31151 * C503;
    const double C19167 = C18733 * C503;
    const double C19161 = C18734 * C503;
    const double C534 = C520 + C521;
    const double C167 = C162 + C149;
    const double C357 = C351 + C333;
    const double C358 = C352 + C336;
    const double C547 = C541 + C525;
    const double C958 = C955 + C946;
    const double C2175 = C31151 * C1299;
    const double C19681 = C18734 * C1299;
    const double C21157 = C18733 * C1299;
    const double C2178 = C2174 + C1309;
    const double C30246 = ae * C30245;
    const double C2005 =
        (2 * C30094 + C30015 * C30245 + (C30089 + C30111 * C30019) * ae) /
        C29968;
    const double C1436 = C1434 * C31138;
    const double C13397 = C1434 * C13236;
    const double C14523 = C1434 * C13235;
    const double C1598 = C1596 * C31138;
    const double C14015 = C1596 * C13236;
    const double C14719 = C1596 * C13235;
    const double C5637 = C31151 * C1304;
    const double C25671 = C18733 * C1304;
    const double C25667 = C18734 * C1304;
    const double C5646 = C5636 + C1314;
    const double C5513 = C5511 + C5504;
    const double C5655 = C5651 + C5639;
    const double C30278 = C30261 + C30276;
    const double C30358 = ae * C30357;
    const double C2403 =
        (2 * C30188 + C30015 * C30357 + (C30185 + C30348 * C30019) * ae) /
        C29968;
    const double C135 =
        (5 * (3 * C30048 + C30022 * C30062) +
         C30022 *
             (4 * C30062 +
              C30022 * (3 * C30060 +
                        C30022 * (2 * C30022 * C30058 +
                                  C30022 * (C30058 + (C30052 * C30053 +
                                                      C30019 * bs[8] *
                                                          std::pow(C30013, 8)) *
                                                         C30018 * C30034))))) /
        C29975;
    const double C316 = (2 * C30022 * C30038 + C30022 * C30048 +
                         C30062 * std::pow(yP - yQ, 2)) /
                        C29975;
    const double C317 = ((yP - yQ) * (3 * C30048 + C30022 * C30062)) / C29975;
    const double C318 =
        (3 * C30048 + C30022 * C30062 +
         (3 * C30060 +
          C30022 * (2 * C30022 * C30058 +
                    C30022 * (C30058 + (C30052 * C30053 +
                                        C30019 * bs[8] * std::pow(C30013, 8)) *
                                           C30018 * C30034))) *
             std::pow(yP - yQ, 2)) /
        C29975;
    const double C506 = (2 * ae * (3 * C30103 + C30022 * C30123) +
                         C30015 * (3 * C30048 + C30022 * C30062)) /
                        C29975;
    const double C660 =
        ((yP - yQ) *
         (4 * C30062 +
          C30022 * (3 * C30060 +
                    C30022 * (2 * C30022 * C30058 +
                              C30022 * (C30058 +
                                        (C30052 * C30053 +
                                         C30019 * bs[8] * std::pow(C30013, 8)) *
                                            C30018 * C30034))))) /
        C29975;
    const double C937 =
        (2 * ae * C30156 * C30123 + C30015 * C30156 * C30062) / C29975;
    const double C1422 =
        (2 * C30156 * C30062 +
         C30156 * (C30062 +
                   (2 * C30022 * C30058 +
                    C30022 * (C30058 + (C30052 * C30053 +
                                        C30019 * bs[8] * std::pow(C30013, 8)) *
                                           C30018 * C30034)) *
                       C30166)) /
        C29975;
    const double C1584 =
        (2 * ae * (C30123 + C30145 * C30166) +
         C30015 * (C30062 +
                   (2 * C30022 * C30058 +
                    C30022 * (C30058 + (C30052 * C30053 +
                                        C30019 * bs[8] * std::pow(C30013, 8)) *
                                           C30018 * C30034)) *
                       C30166)) /
        C29975;
    const double C1433 = C1431 + C1425;
    const double C1595 = C1593 + C1587;
    const double C5501 =
        (5 * (3 * C30389 + C30156 * C30396) +
         C30156 *
             (4 * C30396 +
              C30156 * (3 * C30394 +
                        C30156 * (2 * C30156 * C30058 +
                                  C30156 * (C30058 + (C30052 * C30053 +
                                                      C30019 * bs[8] *
                                                          std::pow(C30013, 8)) *
                                                         C30018 * C30166))))) /
        C29975;
    const double C5631 = (2 * ae * (3 * C30196 + C30156 * C30406) +
                          C30015 * (3 * C30389 + C30156 * C30396)) /
                         C29975;
    const double C30674 = C30661 + C30671;
    const double C30607 = C30015 * C30603;
    const double C30711 = C30695 + C30706;
    const double C30150 = C30015 * C30149;
    const double C770 =
        (2 * ae * (4 * C30123 + C30022 * C30149) +
         C30015 *
             (4 * C30062 +
              C30022 * (3 * C30060 +
                        C30022 * (2 * C30022 * C30058 +
                                  C30022 * (C30058 + (C30052 * C30053 +
                                                      C30019 * bs[8] *
                                                          std::pow(C30013, 8)) *
                                                         C30018 * C30034))))) /
        C29975;
    const double C938 =
        (2 * ae * C30156 * C30149 +
         C30015 * C30156 *
             (3 * C30060 +
              C30022 *
                  (2 * C30022 * C30058 +
                   C30022 * (C30058 + (C30052 * C30053 +
                                       C30019 * bs[8] * std::pow(C30013, 8)) *
                                          C30018 * C30034)))) /
        C29975;
    const double C128 = (5 * (3 * C30103 + C30022 * C30123) +
                         C30022 * (4 * C30123 + C30022 * C30149)) /
                        C29968;
    const double C308 =
        (3 * C30103 + C30022 * C30123 + C30149 * C30166) / C29968;
    const double C659 = (C30156 * (4 * C30123 + C30022 * C30149)) / C29968;
    const double C769 = (C30015 * (4 * C30123 + C30022 * C30149) +
                         (4 * C30120 + C30022 * C30146) * ae) /
                        C29968;
    const double C933 =
        (C30015 * C30156 * C30149 + C30156 * C30146 * ae) / C29968;
    const double C30332 = C30330 + C30331;
    const double C30341 = ae * C30338;
    const double C30340 = C30015 * C30338;
    const double C30219 = ae * C30218;
    const double C1297 =
        (C30103 + C30119 * C30166 + C30015 * C30218 + C30015 * C30215 * ae) /
        C29968;
    const double C30321 = C30320 + C30314;
    const double C30384 = C30170 + C30382;
    const double C30432 = C30015 * C30430;
    const double C6018 =
        (2 * ae * (4 * C30406 + C30156 * C30430) +
         C30015 *
             (4 * C30396 +
              C30156 * (3 * C30394 +
                        C30156 * (2 * C30156 * C30058 +
                                  C30156 * (C30058 + (C30052 * C30053 +
                                                      C30019 * bs[8] *
                                                          std::pow(C30013, 8)) *
                                                         C30018 * C30166))))) /
        C29975;
    const double C5499 = (5 * (3 * C30196 + C30156 * C30406) +
                          C30156 * (4 * C30406 + C30156 * C30430)) /
                         C29968;
    const double C6017 = (C30015 * (4 * C30406 + C30156 * C30430) +
                          (4 * C30407 + C30156 * C30431) * ae) /
                         C29968;
    const double C30534 = ae * C30531;
    const double C30533 = C30015 * C30531;
    const double C30493 = C30492 + C30486;
    const double C30514 = C30512 + C30513;
    const double C5760 = C114 * C5755;
    const double C5915 = C114 * C5910;
    const double C19937 = C18738 * C5910;
    const double C30524 = C30205 + C30522;
    const double C30644 = C30643 + C30638;
    const double C30678 = ae * C30675;
    const double C30677 = C30015 * C30675;
    const double C30612 = C30581 + C30608;
    const double C30717 = ae * C30714;
    const double C30716 = C30015 * C30714;
    const double C31271 = C31217 + C31263;
    const double C655 = C31250 - (C30940 * C30922) / C30917;
    const double C111 = C31251 / C30921 - C30938 / C31224;
    const double C31264 = C31220 + C31250;
    const double C31272 = C31233 + C31267;
    const double C1415 = C31257 - (C31020 * C31009) / C30917;
    const double C1143 = C31258 / C30921 - C31018 / C31224;
    const double C31268 = C31235 + C31257;
    const double C31273 = C31239 + C31269;
    const double C2283 = C31260 - (C31062 * C31051) / C30917;
    const double C1996 = C31261 / C30921 - C31060 / C31224;
    const double C31270 = C31241 + C31260;
    const double C8987 =
        (((-4 * C29978) / C29968 - C29992 / C29968) * ae) / C29979 +
        ((2 * ((0 * ae) / C29968 - C29978 / C29975) - C29992 / C29979) * ae) /
            C29968;
    const double C18735 =
        (((-4 * C29978) / C29968 - C29992 / C29968) * ae) / C29968;
    const double C18760 = C18737 * C486;
    const double C18757 = C18737 * C484;
    const double C18748 = C18737 * C478;
    const double C18745 = C18737 * C479;
    const double C18960 = C18737 * C1283;
    const double C18957 = C18737 * C926;
    const double C18951 = C18737 * C1284;
    const double C18938 = C18737 * C925;
    const double C19162 = C18737 * C1998;
    const double C19159 = C18737 * C483;
    const double C19153 = C18737 * C1999;
    const double C19140 = C18737 * C482;
    const double C19326 = C18737 * C927;
    const double C19468 = C18737 * C485;
    const double C19682 = C18737 * C1280;
    const double C19679 = C18737 * C1281;
    const double C20226 = C18737 * C1697;
    const double C20432 = C18737 * C1287;
    const double C21154 = C18737 * C2401;
    const double C21296 = C18737 * C2002;
    const double C24638 = C18737 * C1285;
    const double C24636 = C18737 * C924;
    const double C25254 = C18737 * C1282;
    const double C25496 = C18737 * C5625;
    const double C25494 = C18737 * C1696;
    const double C25668 = C18737 * C6307;
    const double C25666 = C18737 * C1286;
    const double C25662 = C18737 * C2400;
    const double C26146 = C18737 * C5624;
    const double C26988 = C18737 * C6308;
    const double C545 = C539 + C519;
    const double C5653 = C5649 + C5635;
    const double C505 =
        (2 * C30022 * C30038 + C30022 * C30048 + C30126 + C30126 +
         C30015 * (2 * ae * C30123 + C30015 * C30062)) /
        C29975;
    const double C527 = C114 * C495;
    const double C9001 = C8990 * C495;
    const double C9463 = C8988 * C495;
    const double C19170 = C18736 * C495;
    const double C19168 = C18738 * C495;
    const double C163 = C158 + C151;
    const double C353 = C347 + C338;
    const double C666 = C665 + C340;
    const double C776 = C775 + C529;
    const double C956 = C953 + C948;
    const double C2173 = C31151 * C1298;
    const double C19684 = C18734 * C1298;
    const double C2177 = C2172 + C1308;
    const double C30235 = ae * C30234;
    const double C2004 =
        (2 * C30105 + C30015 * C30234 + (C30100 + C30116 * C30019) * ae) /
        C29968;
    const double C6470 = C31151 * C1305;
    const double C20433 = C18734 * C1305;
    const double C6472 = C6469 + C1315;
    const double C5763 = C5762 + C5759;
    const double C5918 = C5917 + C5914;
    const double C30301 = C30284 + C30299;
    const double C30372 = ae * C30371;
    const double C2404 =
        (2 * C30181 + C30015 * C30371 + (C30178 + C30362 * C30019) * ae) /
        C29968;
    const double C5630 = (2 * C30346 + C30156 * C30389 + C30411 + C30411 +
                          C30015 * (2 * ae * C30406 + C30015 * C30396)) /
                         C29975;
    const double C5641 = C114 * C5627;
    const double C9792 = C8990 * C5627;
    const double C10266 = C8988 * C5627;
    const double C20575 = C18738 * C5627;
    const double C25672 = C18736 * C5627;
    const double C5512 = C5510 + C5506;
    const double C6024 = C6023 + C5643;
    const double C30452 = ae * C30451;
    const double C6310 =
        (2 * C30200 + C30015 * C30451 + (C30197 + C30403 * C30019) * ae) /
        C29968;
    const double C30473 = C30456 + C30471;
    const double C30594 = C30588 + C30566;
    const double C30568 = C30567 + C30556;
    const double C540 = C534 + C521;
    const double C172 = C167 * C31138;
    const double C13247 = C167 * C13235;
    const double C363 = C357 * C31138;
    const double C13401 = C357 * C13235;
    const double C13399 = C357 * C13236;
    const double C364 = C358 * C31138;
    const double C13245 = C358 * C13236;
    const double C13687 = C358 * C13235;
    const double C553 = C547 * C31138;
    const double C13819 = C547 * C13235;
    const double C961 = C958 * C31138;
    const double C13553 = C958 * C13236;
    const double C14017 = C958 * C13235;
    const double C2180 = C2178 + C1309;
    const double C2011 =
        (2 * (2 * ae * C30092 + C30015 * C30163) + C30246 + C30246 +
         C30015 * (C30163 + C30243 + C30243 +
                   C30015 * (2 * ae * C30109 + C30015 * C30050))) /
        C29975;
    const double C2018 = C114 * C2005;
    const double C9255 = C8988 * C2005;
    const double C9253 = C8990 * C2005;
    const double C10815 = C8986 * C2005;
    const double C19154 = C18738 * C2005;
    const double C20953 = C18736 * C2005;
    const double C5650 = C5646 + C1314;
    const double C30279 = C30278 + C30272;
    const double C2406 =
        (2 * (2 * ae * C30184 + C30015 * C30346) + C30358 + C30358 +
         C30015 * (C30346 + C30355 + C30355 +
                   C30015 * (2 * ae * C30347 + C30015 * C30156 * C30046))) /
        C29975;
    const double C2410 = C114 * C2403;
    const double C9613 = C8990 * C2403;
    const double C9909 = C8988 * C2403;
    const double C10919 = C8986 * C2403;
    const double C20086 = C18738 * C2403;
    const double C21438 = C18736 * C2403;
    const double C339 = C31151 * C316;
    const double C663 = C31151 * C317;
    const double C773 = C31151 * C506;
    const double C18762 = C18734 * C506;
    const double C949 = C31151 * C937;
    const double C19327 = C18734 * C937;
    const double C1435 = C1433 * C31138;
    const double C13400 = C1433 * C13236;
    const double C1597 = C1595 * C31138;
    const double C14016 = C1595 * C13236;
    const double C6021 = C31151 * C5631;
    const double C25497 = C18734 * C5631;
    const double C30151 = C30150 + C30148;
    const double C153 = C114 * C128;
    const double C341 = C114 * C308;
    const double C664 = C114 * C659;
    const double C774 = C114 * C769;
    const double C18767 = C18738 * C769;
    const double C950 = C114 * C933;
    const double C19331 = C18738 * C933;
    const double C30333 = ae * C30332;
    const double C2169 =
        (C30156 * C30123 + C30015 * C30332 + C30015 * C30329 * ae) / C29968;
    const double C30342 = C30123 + C30340;
    const double C1306 =
        (C30048 + C30060 * C30166 + C30219 + C30219 +
         C30015 * (2 * ae * C30214 +
                   C30015 * (C30060 +
                             (C30058 + (C30052 * C30053 +
                                        C30019 * bs[8] * std::pow(C30013, 8)) *
                                           C30018 * C30034) *
                                 C30166))) /
        C29975;
    const double C1316 = C114 * C1297;
    const double C9134 = C8990 * C1297;
    const double C20437 = C18738 * C1297;
    const double C30323 = ae * C30321;
    const double C30322 = C30015 * C30321;
    const double C30385 = C30384 + C30381;
    const double C30434 = C30432 + C30433;
    const double C5508 = C114 * C5499;
    const double C6022 = C114 * C6017;
    const double C25501 = C18738 * C6017;
    const double C30535 = C30406 + C30533;
    const double C30495 = ae * C30493;
    const double C30494 = C30015 * C30493;
    const double C30515 = ae * C30514;
    const double C6466 = (2 * C30177 + C30156 * C30205 + C30015 * C30514 +
                          C30015 * C30511 * ae) /
                         C29968;
    const double C30525 = C30524 + C30521;
    const double C30646 = ae * C30644;
    const double C30645 = C30015 * C30644;
    const double C30679 = C30655 + C30677;
    const double C30614 = C30612 + C30597;
    const double C30718 = C30691 + C30716;
    const double C108 =
        (C31262 + 2 * C30931) / C30921 - (C31271 * C30922) / C30917;
    const double C109 =
        (C31249 + 2 * C30940 + C31271) / C30921 - (C31264 * C30922) / C30917;
    const double C110 = (C31222 + C30937 / C30917 + C31264) / C30921 -
                        (C31251 * C30922) / C30917;
    const double C1140 =
        (C31265 + 2 * C31013) / C30921 - (C31272 * C31009) / C30917;
    const double C1141 =
        (C31253 + 2 * C31020 + C31272) / C30921 - (C31268 * C31009) / C30917;
    const double C1142 = (C31228 + C31017 / C30917 + C31268) / C30921 -
                         (C31258 * C31009) / C30917;
    const double C1993 =
        (C31266 + 2 * C31055) / C30921 - (C31273 * C31051) / C30917;
    const double C1994 =
        (C31255 + 2 * C31062 + C31273) / C30921 - (C31270 * C31051) / C30917;
    const double C1995 = (C31231 + C31059 / C30917 + C31270) / C30921 -
                         (C31261 * C31051) / C30917;
    const double C18763 = C18735 * C119;
    const double C18754 = C18735 * C118;
    const double C18751 = C18735 * C117;
    const double C18742 = C18735 * C116;
    const double C18963 = C18735 * C294;
    const double C18954 = C18735 * C289;
    const double C18948 = C18735 * C293;
    const double C18941 = C18735 * C290;
    const double C19165 = C18735 * C483;
    const double C19156 = C18735 * C478;
    const double C19150 = C18735 * C482;
    const double C19143 = C18735 * C479;
    const double C19328 = C18735 * C295;
    const double C19470 = C18735 * C484;
    const double C19685 = C18735 * C926;
    const double C19676 = C18735 * C925;
    const double C20228 = C18735 * C1147;
    const double C20434 = C18735 * C1284;
    const double C21156 = C18735 * C1281;
    const double C21298 = C18735 * C1999;
    const double C24640 = C18735 * C292;
    const double C24634 = C18735 * C291;
    const double C25256 = C18735 * C924;
    const double C25498 = C18735 * C1149;
    const double C25492 = C18735 * C1148;
    const double C25670 = C18735 * C1286;
    const double C25664 = C18735 * C1285;
    const double C25660 = C18735 * C1282;
    const double C26148 = C18735 * C1696;
    const double C26990 = C18735 * C2400;
    const double C18774 = C18760 + C18761;
    const double C18773 = C18757 + C18758;
    const double C18770 = C18748 + C18749;
    const double C18769 = C18745 + C18746;
    const double C18976 = C18960 + C18961;
    const double C18975 = C18957 + C18958;
    const double C18973 = C18951 + C18952;
    const double C18970 = C18938 + C18939;
    const double C19177 = C19159 + C19160;
    const double C19172 = C19140 + C19141;
    const double C19332 = C19326 + C18966;
    const double C19692 = C19682 + C19683;
    const double C19691 = C19679 + C19680;
    const double C20232 = C20226 + C19930;
    const double C20438 = C20432 + C20088;
    const double C24644 = C24638 + C18947;
    const double C24643 = C24636 + C18944;
    const double C25258 = C25254 + C19675;
    const double C25504 = C25496 + C19935;
    const double C25503 = C25494 + C19932;
    const double C25677 = C25666 + C20090;
    const double C551 = C545 * C31138;
    const double C13550 = C545 * C13235;
    const double C528 = C31151 * C505;
    const double C19469 = C18734 * C505;
    const double C536 = C526 + C527;
    const double C19474 = C19468 + C19168;
    const double C168 = C163 + C152;
    const double C2179 = C2177 + C1308;
    const double C2010 =
        (2 * (2 * ae * C30103 + C30015 * C30048) + C30235 + C30235 +
         C30015 * (C30048 + C30232 + C30232 +
                   C30015 * (2 * ae * C30119 + C30015 * C30060))) /
        C29975;
    const double C2017 = C114 * C2004;
    const double C9261 = C8988 * C2004;
    const double C9257 = C8990 * C2004;
    const double C19163 = C18738 * C2004;
    const double C21300 = C18736 * C2004;
    const double C6473 = C6472 + C1315;
    const double C14522 = C5763 * C13236;
    const double C14718 = C5918 * C13236;
    const double C30302 = C30301 + C30295;
    const double C2407 =
        (2 * (2 * ae * C30177 + C30015 * C30360) + C30372 + C30372 +
         C30015 *
             (C30360 + C30369 + C30369 +
              C30015 * (2 * ae * C30361 + C30015 * C30156 * C30022 * C30058))) /
        C29975;
    const double C2411 = C114 * C2404;
    const double C9614 = C8990 * C2404;
    const double C10712 = C8988 * C2404;
    const double C20084 = C18738 * C2404;
    const double C21440 = C18736 * C2404;
    const double C5642 = C31151 * C5630;
    const double C26147 = C18734 * C5630;
    const double C5648 = C5640 + C5641;
    const double C26152 = C26146 + C20575;
    const double C5514 = C5512 + C5507;
    const double C6313 =
        (2 * (2 * ae * C30196 + C30015 * C30389) + C30452 + C30452 +
         C30015 * (C30389 + C30449 + C30449 +
                   C30015 * (2 * ae * C30402 + C30015 * C30394))) /
        C29975;
    const double C6317 = C114 * C6310;
    const double C9915 = C8988 * C6310;
    const double C9911 = C8990 * C6310;
    const double C20093 = C18738 * C6310;
    const double C26992 = C18736 * C6310;
    const double C30474 = C30473 + C30467;
    const double C30611 = C30594 + C30607;
    const double C30570 = ae * C30568;
    const double C30569 = C30015 * C30568;
    const double C30579 = 4 * C30568;
    const double C546 = C540 + C522;
    const double C2182 = C2180 + C2175;
    const double C2293 = C31151 * C2011;
    const double C19155 = C18734 * C2011;
    const double C21299 = C18733 * C2011;
    const double C2296 = C2292 + C2018;
    const double C19175 = C19153 + C19154;
    const double C5654 = C5650 + C5637;
    const double C30280 = ae * C30279;
    const double C2007 =
        (3 * C30256 + C30015 * C30279 + (2 * C30250 + C30015 * C30269) * ae) /
        C29968;
    const double C6681 = C31151 * C2406;
    const double C25663 = C18734 * C2406;
    const double C26991 = C18733 * C2406;
    const double C6684 = C6680 + C2410;
    const double C25675 = C25662 + C20086;
    const double C359 = C353 + C339;
    const double C667 = C666 + C663;
    const double C777 = C776 + C773;
    const double C959 = C956 + C949;
    const double C6025 = C6024 + C6021;
    const double C30152 = ae * C30151;
    const double C497 = (3 * C30103 + C30022 * C30123 + C30015 * C30151 +
                         C30015 * C30146 * ae) /
                        C29968;
    const double C2170 =
        (C30156 * C30062 + C30333 + C30333 +
         C30015 *
             (2 * ae * C30328 +
              C30015 * C30156 *
                  (2 * C30022 * C30058 +
                   C30022 * (C30058 + (C30052 * C30053 +
                                       C30019 * bs[8] * std::pow(C30013, 8)) *
                                          C30018 * C30034)))) /
        C29975;
    const double C2176 = C114 * C2169;
    const double C9363 = C8990 * C2169;
    const double C19689 = C18738 * C2169;
    const double C30343 = C30342 + C30339;
    const double C30324 = C30307 + C30322;
    const double C30386 = ae * C30385;
    const double C2405 =
        (2 * C30174 + C30015 * C30385 + (C30171 + C30376 * C30019) * ae) /
        C29968;
    const double C30435 = ae * C30434;
    const double C5629 = (3 * C30196 + C30156 * C30406 + C30015 * C30434 +
                          C30015 * C30431 * ae) /
                         C29968;
    const double C30536 = C30535 + C30532;
    const double C30496 = C30479 + C30494;
    const double C6467 =
        (2 * C30360 + C30156 * C30439 + C30515 + C30515 +
         C30015 * (2 * ae * C30510 +
                   C30015 * (2 * C30156 * C30437 +
                             C30156 * (C30437 + C30022 *
                                                    (C30052 * C30053 +
                                                     C30019 * bs[8] *
                                                         std::pow(C30013, 8)) *
                                                    C30018 * C30166)))) /
        C29975;
    const double C6471 = C114 * C6466;
    const double C10017 = C8990 * C6466;
    const double C20577 = C18738 * C6466;
    const double C30526 = ae * C30525;
    const double C6573 =
        (2 * C30209 + C30015 * C30525 + (C30206 + C30507 * C30019) * ae) /
        C29968;
    const double C30647 = C30627 + C30645;
    const double C30680 = C30679 + C30668;
    const double C30616 = ae * C30614;
    const double C30615 = C30015 * C30614;
    const double C30719 = C30718 + C30708;
    const double C18775 = C18763 + C18764;
    const double C18772 = C18754 + C18755;
    const double C18771 = C18751 + C18752;
    const double C18768 = C18742 + C18743;
    const double C18977 = C18963 + C18964;
    const double C18974 = C18954 + C18955;
    const double C18972 = C18948 + C18949;
    const double C18971 = C18941 + C18942;
    const double C19179 = C19165 + C19166;
    const double C19176 = C19156 + C19157;
    const double C19174 = C19150 + C19151;
    const double C19173 = C19143 + C19144;
    const double C19333 = C19328 + C18967;
    const double C19475 = C19470 + C19169;
    const double C19693 = C19685 + C19686;
    const double C19690 = C19676 + C19677;
    const double C20233 = C20228 + C19931;
    const double C20439 = C20434 + C20089;
    const double C21161 = C21156 + C20085;
    const double C21303 = C21298 + C20953;
    const double C24645 = C24640 + C18946;
    const double C24642 = C24634 + C18945;
    const double C25259 = C25256 + C19674;
    const double C25505 = C25498 + C19934;
    const double C25502 = C25492 + C19933;
    const double C25679 = C25670 + C20092;
    const double C25676 = C25664 + C20091;
    const double C25674 = C25660 + C20087;
    const double C26153 = C26148 + C20574;
    const double C26995 = C26990 + C21438;
    const double C18782 = C18774 + C18761;
    const double C18781 = C18773 + C18758;
    const double C18778 = C18770 + C18749;
    const double C18777 = C18769 + C18746;
    const double C18984 = C18976 + C18961;
    const double C18983 = C18975 + C18958;
    const double C18981 = C18973 + C18952;
    const double C18978 = C18970 + C18939;
    const double C19185 = C19177 + C19160;
    const double C19180 = C19172 + C19141;
    const double C19334 = C19332 + C18966;
    const double C19696 = C19692 + C19683;
    const double C19695 = C19691 + C19680;
    const double C20234 = C20232 + C19930;
    const double C20440 = C20438 + C20088;
    const double C24648 = C24644 + C18947;
    const double C24647 = C24643 + C18944;
    const double C25260 = C25258 + C19675;
    const double C25508 = C25504 + C19935;
    const double C25507 = C25503 + C19932;
    const double C25683 = C25677 + C20090;
    const double C542 = C536 + C527;
    const double C19476 = C19474 + C19168;
    const double C173 = C168 * C31138;
    const double C2181 = C2179 + C2173;
    const double C2291 = C31151 * C2010;
    const double C19164 = C18734 * C2010;
    const double C2295 = C2290 + C2017;
    const double C19178 = C19162 + C19163;
    const double C6474 = C6473 + C6470;
    const double C30303 = ae * C30302;
    const double C2008 =
        (3 * C30245 + C30015 * C30302 + (2 * C30239 + C30015 * C30292) * ae) /
        C29968;
    const double C15552 = C31151 * C2407;
    const double C21155 = C18734 * C2407;
    const double C15554 = C15551 + C2411;
    const double C21160 = C21154 + C20084;
    const double C5652 = C5648 + C5641;
    const double C26154 = C26152 + C20575;
    const double C6679 = C31151 * C6313;
    const double C25669 = C18734 * C6313;
    const double C6683 = C6678 + C6317;
    const double C25678 = C25668 + C20093;
    const double C30475 = ae * C30474;
    const double C6311 =
        (3 * C30357 + C30015 * C30474 + (2 * C30351 + C30015 * C30464) * ae) /
        C29968;
    const double C30571 = C30542 + C30569;
    const double C552 = C546 * C31138;
    const double C13555 = C546 * C13235;
    const double C2184 = C2182 * C31138;
    const double C13551 = C2182 * C13236;
    const double C15420 = C2182 * C13235;
    const double C2298 = C2296 + C2018;
    const double C19183 = C19175 + C19154;
    const double C2013 =
        (3 * (C30029 + C30254 + C30254 + C30015 * C30270) + C30280 + C30280 +
         C30015 * (2 * C30270 + C30277 + C30277 +
                   C30015 * (C30038 + C30273 + C30273 +
                             C30015 * (2 * ae * C30099 + C30015 * C30046)))) /
        C29975;
    const double C2020 = C114 * C2007;
    const double C9250 = C8990 * C2007;
    const double C10559 = C8986 * C2007;
    const double C10557 = C8988 * C2007;
    const double C20956 = C18736 * C2007;
    const double C20954 = C18738 * C2007;
    const double C6686 = C6684 + C2410;
    const double C25681 = C25675 + C20086;
    const double C365 = C359 * C31138;
    const double C13686 = C359 * C13236;
    const double C668 = C667 * C31138;
    const double C13246 = C667 * C13236;
    const double C778 = C777 * C31138;
    const double C962 = C959 * C31138;
    const double C13818 = C959 * C13236;
    const double C507 =
        (3 * C30048 + C30022 * C30062 + C30152 + C30152 +
         C30015 *
             (2 * ae * C30149 +
              C30015 * (3 * C30060 +
                        C30022 * (2 * C30022 * C30058 +
                                  C30022 * (C30058 + (C30052 * C30053 +
                                                      C30019 * bs[8] *
                                                          std::pow(C30013, 8)) *
                                                         C30018 * C30034))))) /
        C29975;
    const double C530 = C114 * C497;
    const double C9006 = C8990 * C497;
    const double C19473 = C18738 * C497;
    const double C30344 = ae * C30343;
    const double C2287 =
        (2 * C30125 + C30015 * C30343 + (C30120 + C30142 * C30019) * ae) /
        C29968;
    const double C30325 = C30324 + C30318;
    const double C2408 =
        (2 * (2 * ae * C30170 + C30015 * C30374) + C30386 + C30386 +
         C30015 *
             (C30374 + C30383 + C30383 +
              C30015 * (2 * ae * C30375 +
                        C30015 * C30156 *
                            (C30058 + (C30052 * C30053 +
                                       C30019 * bs[8] * std::pow(C30013, 8)) *
                                          C30018 * C30034)))) /
        C29975;
    const double C2412 = C114 * C2405;
    const double C9619 = C8990 * C2405;
    const double C21159 = C18738 * C2405;
    const double C5632 =
        (3 * C30389 + C30156 * C30396 + C30435 + C30435 +
         C30015 *
             (2 * ae * C30430 +
              C30015 * (3 * C30394 +
                        C30156 * (2 * C30156 * C30058 +
                                  C30156 * (C30058 + (C30052 * C30053 +
                                                      C30019 * bs[8] *
                                                          std::pow(C30013, 8)) *
                                                         C30018 * C30166))))) /
        C29975;
    const double C5644 = C114 * C5629;
    const double C9797 = C8990 * C5629;
    const double C26151 = C18738 * C5629;
    const double C30537 = ae * C30536;
    const double C6675 =
        (2 * C30410 + C30015 * C30536 + (C30407 + C30427 * C30019) * ae) /
        C29968;
    const double C30497 = C30496 + C30490;
    const double C6574 =
        (2 * (2 * ae * C30205 + C30015 * C30439) + C30526 + C30526 +
         C30015 * (C30439 + C30523 + C30523 +
                   C30015 * (2 * ae * C30506 +
                             C30015 * (C30437 + C30022 *
                                                    (C30052 * C30053 +
                                                     C30019 * bs[8] *
                                                         std::pow(C30013, 8)) *
                                                    C30018 * C30166)))) /
        C29975;
    const double C6576 = C114 * C6573;
    const double C10166 = C8990 * C6573;
    const double C20095 = C18738 * C6573;
    const double C30648 = C30647 + C30641;
    const double C30682 = ae * C30680;
    const double C30681 = C30015 * C30680;
    const double C30617 = C30580 + C30615;
    const double C30721 = ae * C30719;
    const double C30720 = C30015 * C30719;
    const double C18783 = C18775 + C18764;
    const double C18780 = C18772 + C18755;
    const double C18779 = C18771 + C18752;
    const double C18776 = C18768 + C18743;
    const double C18985 = C18977 + C18964;
    const double C18982 = C18974 + C18955;
    const double C18980 = C18972 + C18949;
    const double C18979 = C18971 + C18942;
    const double C19187 = C19179 + C19166;
    const double C19184 = C19176 + C19157;
    const double C19182 = C19174 + C19151;
    const double C19181 = C19173 + C19144;
    const double C19335 = C19333 + C18967;
    const double C19477 = C19475 + C19169;
    const double C19697 = C19693 + C19686;
    const double C19694 = C19690 + C19677;
    const double C20235 = C20233 + C19931;
    const double C20441 = C20439 + C20089;
    const double C21163 = C21161 + C20085;
    const double C21305 = C21303 + C20953;
    const double C24649 = C24645 + C18946;
    const double C24646 = C24642 + C18945;
    const double C25261 = C25259 + C19674;
    const double C25509 = C25505 + C19934;
    const double C25506 = C25502 + C19933;
    const double C25685 = C25679 + C20092;
    const double C25682 = C25676 + C20091;
    const double C25680 = C25674 + C20087;
    const double C26155 = C26153 + C20574;
    const double C26997 = C26995 + C21438;
    const double C18790 = C18782 + C18762;
    const double C18789 = C18781 + C18759;
    const double C18786 = C18778 + C18750;
    const double C18785 = C18777 + C18747;
    const double C18992 = C18984 + C18962;
    const double C18991 = C18983 + C18959;
    const double C18989 = C18981 + C18953;
    const double C18986 = C18978 + C18940;
    const double C19193 = C19185 + C19161;
    const double C19188 = C19180 + C19142;
    const double C19336 = C19334 + C19327;
    const double C19700 = C19696 + C19684;
    const double C19699 = C19695 + C19681;
    const double C20236 = C20234 + C20227;
    const double C20442 = C20440 + C20433;
    const double C24652 = C24648 + C24639;
    const double C24651 = C24647 + C24637;
    const double C25262 = C25260 + C25255;
    const double C25512 = C25508 + C25497;
    const double C25511 = C25507 + C25495;
    const double C25689 = C25683 + C25667;
    const double C548 = C542 + C528;
    const double C19478 = C19476 + C19469;
    const double C2183 = C2181 * C31138;
    const double C13554 = C2181 * C13236;
    const double C2297 = C2295 + C2017;
    const double C19186 = C19178 + C19163;
    const double C15419 = C6474 * C13236;
    const double C2014 =
        (3 * (C30163 + C30243 + C30243 + C30015 * C30293) + C30303 + C30303 +
         C30015 * (2 * C30293 + C30300 + C30300 +
                   C30015 * (C30050 + C30296 + C30296 +
                             C30015 * (2 * ae * C30130 +
                                       C30015 * C30022 * C30058)))) /
        C29975;
    const double C2021 = C114 * C2008;
    const double C9254 = C8990 * C2008;
    const double C10816 = C8988 * C2008;
    const double C20958 = C18736 * C2008;
    const double C20952 = C18738 * C2008;
    const double C15555 = C15554 + C2411;
    const double C21162 = C21160 + C20084;
    const double C5656 = C5652 + C5642;
    const double C26156 = C26154 + C26147;
    const double C6685 = C6683 + C6317;
    const double C25684 = C25678 + C20093;
    const double C6314 =
        (3 * (C30346 + C30355 + C30355 + C30015 * C30465) + C30475 + C30475 +
         C30015 * (2 * C30465 + C30472 + C30472 +
                   C30015 * (C30391 + C30468 + C30468 +
                             C30015 * (2 * ae * C30415 +
                                       C30015 * C30156 * C30058)))) /
        C29975;
    const double C6318 = C114 * C6311;
    const double C9908 = C8990 * C6311;
    const double C10920 = C8988 * C6311;
    const double C21439 = C18738 * C6311;
    const double C26532 = C18736 * C6311;
    const double C30572 = C30571 + C30564;
    const double C2300 = C2298 + C2293;
    const double C19191 = C19183 + C19155;
    const double C6688 = C6686 + C6681;
    const double C25687 = C25681 + C25663;
    const double C2288 =
        (2 * (2 * ae * C30123 + C30015 * C30062) + C30344 + C30344 +
         C30015 *
             (C30062 + C30341 + C30341 +
              C30015 * (2 * ae * C30145 +
                        C30015 * (2 * C30022 * C30058 +
                                  C30022 * (C30058 + (C30052 * C30053 +
                                                      C30019 * bs[8] *
                                                          std::pow(C30013, 8)) *
                                                         C30018 * C30034))))) /
        C29975;
    const double C2294 = C114 * C2287;
    const double C9464 = C8990 * C2287;
    const double C19171 = C18738 * C2287;
    const double C30326 = ae * C30325;
    const double C2009 =
        (3 * C30234 + C30015 * C30325 + (2 * C30228 + C30015 * C30315) * ae) /
        C29968;
    const double C6676 =
        (2 * (2 * ae * C30406 + C30015 * C30396) + C30537 + C30537 +
         C30015 *
             (C30396 + C30534 + C30534 +
              C30015 * (2 * ae * C30426 +
                        C30015 * (2 * C30156 * C30058 +
                                  C30156 * (C30058 + (C30052 * C30053 +
                                                      C30019 * bs[8] *
                                                          std::pow(C30013, 8)) *
                                                         C30018 * C30166))))) /
        C29975;
    const double C6682 = C114 * C6675;
    const double C10267 = C8990 * C6675;
    const double C25673 = C18738 * C6675;
    const double C30498 = ae * C30497;
    const double C6312 =
        (3 * C30451 + C30015 * C30497 + (2 * C30445 + C30015 * C30487) * ae) /
        C29968;
    const double C30649 = ae * C30648;
    const double C10708 =
        (3 * C30371 + C30015 * C30648 + (2 * C30365 + C30015 * C30639) * ae) /
        C29968;
    const double C30683 = C30654 + C30681;
    const double C30618 = C30617 + C30605;
    const double C30722 = C30690 + C30720;
    const double C18791 = C18783 + C18765;
    const double C18788 = C18780 + C18756;
    const double C18787 = C18779 + C18753;
    const double C18784 = C18776 + C18744;
    const double C18993 = C18985 + C18965;
    const double C18990 = C18982 + C18956;
    const double C18988 = C18980 + C18950;
    const double C18987 = C18979 + C18943;
    const double C19195 = C19187 + C19167;
    const double C19192 = C19184 + C19158;
    const double C19190 = C19182 + C19152;
    const double C19189 = C19181 + C19145;
    const double C19337 = C19335 + C19329;
    const double C19479 = C19477 + C19471;
    const double C19701 = C19697 + C19687;
    const double C19698 = C19694 + C19678;
    const double C20237 = C20235 + C20229;
    const double C20443 = C20441 + C20435;
    const double C21165 = C21163 + C21157;
    const double C21307 = C21305 + C21299;
    const double C24653 = C24649 + C24641;
    const double C24650 = C24646 + C24635;
    const double C25263 = C25261 + C25257;
    const double C25513 = C25509 + C25499;
    const double C25510 = C25506 + C25493;
    const double C25691 = C25685 + C25671;
    const double C25688 = C25682 + C25665;
    const double C25686 = C25680 + C25661;
    const double C26157 = C26155 + C26149;
    const double C26999 = C26997 + C26991;
    const double C554 = C548 * C31138;
    const double C2299 = C2297 + C2291;
    const double C19194 = C19186 + C19164;
    const double C21297 = C18734 * C2014;
    const double C21302 = C21296 + C20952;
    const double C15556 = C15555 + C15552;
    const double C21164 = C21162 + C21155;
    const double C6687 = C6685 + C6679;
    const double C25690 = C25684 + C25669;
    const double C26989 = C18734 * C6314;
    const double C26994 = C26988 + C21439;
    const double C30573 = ae * C30572;
    const double C10551 =
        (4 * C30279 + C30015 * C30572 + (3 * C30269 + C30015 * C30561) * ae) /
        C29968;
    const double C2302 = C2300 * C31138;
    const double C15553 = C2300 * C13235;
    const double C2015 =
        (3 * (C30048 + C30232 + C30232 + C30015 * C30316) + C30326 + C30326 +
         C30015 *
             (2 * C30316 + C30323 + C30323 +
              C30015 * (C30060 + C30319 + C30319 +
                        C30015 * (2 * ae * C30141 +
                                  C30015 * (C30058 + (C30052 * C30053 +
                                                      C30019 * bs[8] *
                                                          std::pow(C30013, 8)) *
                                                         C30018 * C30034))))) /
        C29975;
    const double C2022 = C114 * C2009;
    const double C9262 = C8990 * C2009;
    const double C21301 = C18738 * C2009;
    const double C6315 =
        (3 * (C30389 + C30449 + C30449 + C30015 * C30488) + C30498 + C30498 +
         C30015 *
             (2 * C30488 + C30495 + C30495 +
              C30015 * (C30394 + C30491 + C30491 +
                        C30015 * (2 * ae * C30421 +
                                  C30015 * (C30058 + (C30052 * C30053 +
                                                      C30019 * bs[8] *
                                                          std::pow(C30013, 8)) *
                                                         C30018 * C30166))))) /
        C29975;
    const double C6319 = C114 * C6312;
    const double C9916 = C8990 * C6312;
    const double C26993 = C18738 * C6312;
    const double C10709 =
        (3 * (C30360 + C30369 + C30369 + C30015 * C30636) + C30649 + C30649 +
         C30015 *
             (2 * C30636 + C30646 + C30646 +
              C30015 * (C30626 + C30642 + C30642 +
                        C30015 * (2 * ae * C30628 +
                                  C30015 * C30156 * C30022 *
                                      (C30052 * C30053 +
                                       C30019 * bs[8] * std::pow(C30013, 8)) *
                                      C30018)))) /
        C29975;
    const double C10713 = C8990 * C10708;
    const double C15224 = C114 * C10708;
    const double C21441 = C18738 * C10708;
    const double C30684 = C30683 + C30676;
    const double C30620 = ae * C30618;
    const double C30619 = C30015 * C30618;
    const double C30723 = C30722 + C30715;
    const double C2301 = C2299 * C31138;
    const double C21304 = C21302 + C20952;
    const double C15557 = C15556 * C13236;
    const double C26996 = C26994 + C21439;
    const double C10553 =
        (4 * (2 * C30270 + C30277 + C30277 + C30015 * C30562) + C30573 +
         C30573 +
         C30015 * (3 * C30562 + C30570 + C30570 +
                   C30015 * (2 * C30554 + C30566 + C30566 +
                             C30015 * (C30046 + C30558 + C30558 +
                                       C30015 * (2 * ae * C30114 +
                                                 C30015 * C30058))))) /
        C29975;
    const double C10560 = C8988 * C10551;
    const double C10556 = C8990 * C10551;
    const double C20957 = C18738 * C10551;
    const double C30685 = ae * C30684;
    const double C10812 =
        (4 * C30302 + C30015 * C30684 + (3 * C30292 + C30015 * C30673) * ae) /
        C29968;
    const double C30621 = C30579 + C30619;
    const double C30724 = ae * C30723;
    const double C10916 =
        (4 * C30474 + C30015 * C30723 + (3 * C30464 + C30015 * C30713) * ae) /
        C29968;
    const double C21306 = C21304 + C21297;
    const double C26998 = C26996 + C26989;
    const double C10813 =
        (4 * (2 * C30293 + C30300 + C30300 + C30015 * C30674) + C30685 +
         C30685 +
         C30015 * (3 * C30674 + C30682 + C30682 +
                   C30015 * (2 * C30666 + C30678 + C30678 +
                             C30015 * (C30437 + C30670 + C30670 +
                                       C30015 * (2 * ae * C30501 +
                                                 C30015 * C30022 *
                                                     (C30052 * C30053 +
                                                      C30019 * bs[8] *
                                                          std::pow(C30013, 8)) *
                                                     C30018))))) /
        C29975;
    const double C10817 = C8990 * C10812;
    const double C20959 = C18738 * C10812;
    const double C30622 = C30621 + C30613;
    const double C10917 =
        (4 * (2 * C30465 + C30472 + C30472 + C30015 * C30711) + C30724 +
         C30724 +
         C30015 * (3 * C30711 + C30721 + C30721 +
                   C30015 * (2 * C30702 + C30717 + C30717 +
                             C30015 * (C30689 + C30710 + C30710 +
                                       C30015 * (2 * ae * C30692 +
                                                 C30015 * C30156 *
                                                     (C30052 * C30053 +
                                                      C30019 * bs[8] *
                                                          std::pow(C30013, 8)) *
                                                     C30018))))) /
        C29975;
    const double C10921 = C8990 * C10916;
    const double C26533 = C18738 * C10916;
    const double C30623 = ae * C30622;
    const double C10552 =
        (5 * C30572 + C30015 * C30622 + (4 * C30561 + C30015 * C30609) * ae) /
        C29968;
    const double C10554 =
        (5 * (3 * C30562 + C30570 + C30570 + C30015 * C30611) + C30623 +
         C30623 +
         C30015 *
             (4 * C30611 + C30620 + C30620 +
              C30015 *
                  (3 * C30603 + C30616 + C30616 +
                   C30015 * (2 * C30595 + C30610 + C30610 +
                             C30015 * (C30058 + C30599 + C30599 +
                                       C30015 * (2 * ae * C30136 +
                                                 C30015 *
                                                     (C30052 * C30053 +
                                                      C30019 * bs[8] *
                                                          std::pow(C30013, 8)) *
                                                     C30018)))))) /
        C29975;
    const double C10561 = C8990 * C10552;
    d2ee[0] += (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
                (((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
                    C4860 * C13236) *
                       C13237 +
                   (C13240 + C13241) * C13238) *
                      C30972 * C31013 -
                  ((C13394 + C13395) * C13238 +
                   (C4861 * C13236 + C4860 * C13235) * C13237) *
                      C30972 * C31020 +
                  ((C4861 * C13235 + C4862 * C13236) * C13237 +
                   (C13396 + C13397) * C13238) *
                      C30972 * C2878) *
                     C30931 +
                 (((C13395 + C13394) * C13237 + (C13398 + C13399) * C13238) *
                      C30972 * C31020 -
                  ((C13242 + C13243) * C13238 + (C13241 + C13240) * C13237) *
                      C30972 * C31013 -
                  ((C13400 + C13401) * C13238 + (C13397 + C13396) * C13237) *
                      C30972 * C2878) *
                     C30940 +
                 (((C13243 + C13242) * C13237 + (C13244 + C13245) * C13238) *
                      C30972 * C31013 -
                  ((C13686 + C13687) * C13238 + (C13399 + C13398) * C13237) *
                      C30972 * C31020 +
                  ((C13401 + C13400) * C13237 +
                   (C359 * C13235 +
                    (C113 * C1420 + C1428 + C1428 + C31151 * C1422) * C13236) *
                       C13238) *
                      C30972 * C2878) *
                     C2881)) /
               (p * q * std::sqrt(p + q));
    d2ee[1] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         ((((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
              C4860 * C13236) *
                 C13237 +
             (C13240 + C13241) * C13238) *
                C31198 -
            ((C13548 + C13549) * C13238 +
             (C5324 * C13236 +
              (C113 * C480 + C515 + C515 + C31151 * C500) * C13235) *
                 C13237) *
                C31059) *
               C31013 +
           (((C5324 * C13235 + C5323 * C13236) * C13237 +
             (C14014 + C14015) * C13238) *
                C31059 -
            ((C13394 + C13395) * C13238 +
             (C4861 * C13236 + C4860 * C13235) * C13237) *
                C31198) *
               C31020 +
           (((C4861 * C13235 + C4862 * C13236) * C13237 +
             (C13396 + C13397) * C13238) *
                C31198 -
            ((C14718 + C14719) * C13238 +
             (C5655 * C13236 + C5323 * C13235) * C13237) *
                C31059) *
               C2878) *
              C2618 +
          ((((C13549 + C13548) * C13237 + (C13552 + C13553) * C13238) * C31059 -
            ((C13242 + C13243) * C13238 + (C13241 + C13240) * C13237) *
                C31198) *
               C31013 +
           (((C13395 + C13394) * C13237 + (C13398 + C13399) * C13238) * C31198 -
            ((C14016 + C14017) * C13238 + (C14015 + C14014) * C13237) *
                C31059) *
               C31020 +
           (((C14719 + C14718) * C13237 +
             (C1595 * C13235 +
              (C113 * C1698 + C1708 + C1708 + C31151 * C1704) * C13236) *
                 C13238) *
                C31059 -
            ((C13400 + C13401) * C13238 + (C13397 + C13396) * C13237) *
                C31198) *
               C2878) *
              C30937)) /
        (p * q * std::sqrt(p + q));
    d2ee[2] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
             C4860 * C13236) *
                C13237 +
            (C13240 + C13241) * C13238) *
               C30972 * C31272 -
           ((C13394 + C13395) * C13238 +
            (C4861 * C13236 + C4860 * C13235) * C13237) *
               C30972 * C31268 +
           ((C4861 * C13235 + C4862 * C13236) * C13237 +
            (C13396 + C13397) * C13238) *
               C30972 * C31258 -
           ((C14522 + C14523) * C13238 +
            (C5513 * C13236 + C4862 * C13235) * C13237) *
               C30972 * C31238) *
              C2618 +
          (((C13395 + C13394) * C13237 + (C13398 + C13399) * C13238) * C30972 *
               C31268 -
           ((C13242 + C13243) * C13238 + (C13241 + C13240) * C13237) * C30972 *
               C31272 -
           ((C13400 + C13401) * C13238 + (C13397 + C13396) * C13237) * C30972 *
               C31258 +
           ((C14523 + C14522) * C13237 +
            (C1433 * C13235 +
             (C113 * C1151 + C1170 + C1170 + C31151 * C1163) * C13236) *
                C13238) *
               C30972 * C31238) *
              C30937)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
             C4860 * C13236) *
                C13237 +
            (C13240 + C13241) * C13238) *
               C30972 * C2510 -
           ((C13394 + C13395) * C13238 +
            (C4861 * C13236 + C4860 * C13235) * C13237) *
               C30972 * C31017) *
              C31271 +
          (((C13395 + C13394) * C13237 + (C13398 + C13399) * C13238) * C30972 *
               C31017 -
           ((C13242 + C13243) * C13238 + (C13241 + C13240) * C13237) * C30972 *
               C2510) *
              C31264 +
          (((C13243 + C13242) * C13237 + (C13244 + C13245) * C13238) * C30972 *
               C2510 -
           ((C13686 + C13687) * C13238 + (C13399 + C13398) * C13237) * C30972 *
               C31017) *
              C31251 +
          (((C13687 + C13686) * C13237 +
            (C667 * C13235 +
             (C113 * C298 + C341 + C341 + C31151 * C318) * C13236) *
                C13238) *
               C30972 * C31017 -
           ((C13246 + C13247) * C13238 + (C13245 + C13244) * C13237) * C30972 *
               C2510) *
              C31232)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
              C4860 * C13236) *
                 C13237 +
             (C13240 + C13241) * C13238) *
                C31266 -
            ((C13548 + C13549) * C13238 +
             (C5324 * C13236 +
              (C113 * C480 + C515 + C515 + C31151 * C500) * C13235) *
                 C13237) *
                C31255 +
            (((C113 * C481 + C516 + C516 + C31151 * C501) * C13235 +
              C5653 * C13236) *
                 C13237 +
             (C13550 + C13551) * C13238) *
                C31231) *
               C2510 +
           (((C5324 * C13235 + C5323 * C13236) * C13237 +
             (C14014 + C14015) * C13238) *
                C31255 -
            ((C13394 + C13395) * C13238 +
             (C4861 * C13236 + C4860 * C13235) * C13237) *
                C31266 -
            ((C15419 + C15420) * C13238 +
             (C5654 * C13236 + C5653 * C13235) * C13237) *
                C31231) *
               C31017) *
              C2618 +
          ((((C13549 + C13548) * C13237 + (C13552 + C13553) * C13238) * C31255 -
            ((C13242 + C13243) * C13238 + (C13241 + C13240) * C13237) * C31266 -
            ((C13554 + C13555) * C13238 + (C13551 + C13550) * C13237) *
                C31231) *
               C2510 +
           (((C13395 + C13394) * C13237 + (C13398 + C13399) * C13238) * C31266 -
            ((C14016 + C14017) * C13238 + (C14015 + C14014) * C13237) * C31255 +
            ((C15420 + C15419) * C13237 +
             (C2181 * C13235 +
              (C113 * C1288 + C1316 + C1316 + C31151 * C1306) * C13236) *
                 C13238) *
                C31231) *
               C31017) *
              C30937)) /
            (p * q * std::sqrt(p + q));
    d2ee[3] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         ((((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
              C4860 * C13236) *
                 C13237 +
             (C13240 + C13241) * C13238) *
                C31198 -
            ((C13548 + C13549) * C13238 +
             (C5324 * C13236 +
              (C113 * C480 + C515 + C515 + C31151 * C500) * C13235) *
                 C13237) *
                C31059) *
               C2510 +
           (((C5324 * C13235 + C5323 * C13236) * C13237 +
             (C14014 + C14015) * C13238) *
                C31059 -
            ((C13394 + C13395) * C13238 +
             (C4861 * C13236 + C4860 * C13235) * C13237) *
                C31198) *
               C31017) *
              C30931 +
          ((((C13549 + C13548) * C13237 + (C13552 + C13553) * C13238) * C31059 -
            ((C13242 + C13243) * C13238 + (C13241 + C13240) * C13237) *
                C31198) *
               C2510 +
           (((C13395 + C13394) * C13237 + (C13398 + C13399) * C13238) * C31198 -
            ((C14016 + C14017) * C13238 + (C14015 + C14014) * C13237) *
                C31059) *
               C31017) *
              C30940 +
          ((((C13243 + C13242) * C13237 + (C13244 + C13245) * C13238) * C31198 -
            ((C13818 + C13819) * C13238 + (C13553 + C13552) * C13237) *
                C31059) *
               C2510 +
           (((C14017 + C14016) * C13237 +
             (C959 * C13235 +
              (C113 * C1582 + C1590 + C1590 + C31151 * C1584) * C13236) *
                 C13238) *
                C31059 -
            ((C13686 + C13687) * C13238 + (C13399 + C13398) * C13237) *
                C31198) *
               C31017) *
              C2881)) /
        (p * q * std::sqrt(p + q));
    d2ee[4] += (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                (((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
                    C4860 * C13236) *
                       C13237 +
                   (C13240 + C13241) * C13238) *
                      C30972 * C2510 -
                  ((C13394 + C13395) * C13238 +
                   (C4861 * C13236 + C4860 * C13235) * C13237) *
                      C30972 * C31017) *
                     C31271 +
                 (((C13395 + C13394) * C13237 + (C13398 + C13399) * C13238) *
                      C30972 * C31017 -
                  ((C13242 + C13243) * C13238 + (C13241 + C13240) * C13237) *
                      C30972 * C2510) *
                     C31264 +
                 (((C13243 + C13242) * C13237 + (C13244 + C13245) * C13238) *
                      C30972 * C2510 -
                  ((C13686 + C13687) * C13238 + (C13399 + C13398) * C13237) *
                      C30972 * C31017) *
                     C31251 +
                 (((C13687 + C13686) * C13237 +
                   (C667 * C13235 +
                    (C113 * C298 + C341 + C341 + C31151 * C318) * C13236) *
                       C13238) *
                      C30972 * C31017 -
                  ((C13246 + C13247) * C13238 + (C13245 + C13244) * C13237) *
                      C30972 * C2510) *
                     C31232)) /
                   (p * q * std::sqrt(p + q)) -
               (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                (((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
                    C4860 * C13236) *
                       C13237 +
                   (C13240 + C13241) * C13238) *
                      C30972 * C31272 -
                  ((C13394 + C13395) * C13238 +
                   (C4861 * C13236 + C4860 * C13235) * C13237) *
                      C30972 * C31268 +
                  ((C4861 * C13235 + C4862 * C13236) * C13237 +
                   (C13396 + C13397) * C13238) *
                      C30972 * C31258 -
                  ((C14522 + C14523) * C13238 +
                   (C5513 * C13236 + C4862 * C13235) * C13237) *
                      C30972 * C31238) *
                     C2618 +
                 (((C13395 + C13394) * C13237 + (C13398 + C13399) * C13238) *
                      C30972 * C31268 -
                  ((C13242 + C13243) * C13238 + (C13241 + C13240) * C13237) *
                      C30972 * C31272 -
                  ((C13400 + C13401) * C13238 + (C13397 + C13396) * C13237) *
                      C30972 * C31258 +
                  ((C14523 + C14522) * C13237 +
                   (C1433 * C13235 +
                    (C113 * C1151 + C1170 + C1170 + C31151 * C1163) * C13236) *
                       C13238) *
                      C30972 * C31238) *
                     C30937)) /
                   (p * q * std::sqrt(p + q));
    d2ee[5] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         ((((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
              C4860 * C13236) *
                 C13237 +
             (C13240 + C13241) * C13238) *
                C3272 -
            ((C13548 + C13549) * C13238 +
             (C5324 * C13236 +
              (C113 * C480 + C515 + C515 + C31151 * C500) * C13235) *
                 C13237) *
                C31059) *
               C31013 +
           (((C5324 * C13235 + C5323 * C13236) * C13237 +
             (C14014 + C14015) * C13238) *
                C31059 -
            ((C13394 + C13395) * C13238 +
             (C4861 * C13236 + C4860 * C13235) * C13237) *
                C3272) *
               C31020 +
           (((C4861 * C13235 + C4862 * C13236) * C13237 +
             (C13396 + C13397) * C13238) *
                C3272 -
            ((C14718 + C14719) * C13238 +
             (C5655 * C13236 + C5323 * C13235) * C13237) *
                C31059) *
               C2878) *
              C31183 +
          ((((C13549 + C13548) * C13237 + (C13552 + C13553) * C13238) * C31059 -
            ((C13242 + C13243) * C13238 + (C13241 + C13240) * C13237) * C3272) *
               C31013 +
           (((C13395 + C13394) * C13237 + (C13398 + C13399) * C13238) * C3272 -
            ((C14016 + C14017) * C13238 + (C14015 + C14014) * C13237) *
                C31059) *
               C31020 +
           (((C14719 + C14718) * C13237 +
             (C1595 * C13235 +
              (C113 * C1698 + C1708 + C1708 + C31151 * C1704) * C13236) *
                 C13238) *
                C31059 -
            ((C13400 + C13401) * C13238 + (C13397 + C13396) * C13237) * C3272) *
               C2878) *
              C30937)) /
        (p * q * std::sqrt(p + q));
    d2ee[6] += (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
                (((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
                    C4860 * C13236) *
                       C13237 +
                   (C13240 + C13241) * C13238) *
                      C31055 -
                  ((C13548 + C13549) * C13238 +
                   (C5324 * C13236 +
                    (C113 * C480 + C515 + C515 + C31151 * C500) * C13235) *
                       C13237) *
                      C31062 +
                  (((C113 * C481 + C516 + C516 + C31151 * C501) * C13235 +
                    C5653 * C13236) *
                       C13237 +
                   (C13550 + C13551) * C13238) *
                      C3780) *
                     C31013 +
                 (((C5324 * C13235 + C5323 * C13236) * C13237 +
                   (C14014 + C14015) * C13238) *
                      C31062 -
                  ((C13394 + C13395) * C13238 +
                   (C4861 * C13236 + C4860 * C13235) * C13237) *
                      C31055 -
                  ((C15419 + C15420) * C13238 +
                   (C5654 * C13236 + C5653 * C13235) * C13237) *
                      C3780) *
                     C31020 +
                 (((C4861 * C13235 + C4862 * C13236) * C13237 +
                   (C13396 + C13397) * C13238) *
                      C31055 -
                  ((C14718 + C14719) * C13238 +
                   (C5655 * C13236 + C5323 * C13235) * C13237) *
                      C31062 +
                  ((C5654 * C13235 + C5656 * C13236) * C13237 +
                   (C6474 * C13235 +
                    (C113 * C6465 + C6471 + C6471 + C31151 * C6467) * C13236) *
                       C13238) *
                      C3780) *
                     C2878) *
                C30926) /
               (p * q * std::sqrt(p + q));
    d2ee[7] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
             C4860 * C13236) *
                C13237 +
            (C13240 + C13241) * C13238) *
               C3272 -
           ((C13548 + C13549) * C13238 +
            (C5324 * C13236 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C13235) *
                C13237) *
               C31059) *
              C31272 +
          (((C5324 * C13235 + C5323 * C13236) * C13237 +
            (C14014 + C14015) * C13238) *
               C31059 -
           ((C13394 + C13395) * C13238 +
            (C4861 * C13236 + C4860 * C13235) * C13237) *
               C3272) *
              C31268 +
          (((C4861 * C13235 + C4862 * C13236) * C13237 +
            (C13396 + C13397) * C13238) *
               C3272 -
           ((C14718 + C14719) * C13238 +
            (C5655 * C13236 + C5323 * C13235) * C13237) *
               C31059) *
              C31258 +
          (((C5655 * C13235 + C6025 * C13236) * C13237 +
            (C5918 * C13235 +
             (C113 * C5909 + C5915 + C5915 + C31151 * C5911) * C13236) *
                C13238) *
               C31059 -
           ((C14522 + C14523) * C13238 +
            (C5513 * C13236 + C4862 * C13235) * C13237) *
               C3272) *
              C31238) *
         C30926) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
              C4860 * C13236) *
                 C13237 +
             (C13240 + C13241) * C13238) *
                C3272 -
            ((C13548 + C13549) * C13238 +
             (C5324 * C13236 +
              (C113 * C480 + C515 + C515 + C31151 * C500) * C13235) *
                 C13237) *
                C31059) *
               C2510 +
           (((C5324 * C13235 + C5323 * C13236) * C13237 +
             (C14014 + C14015) * C13238) *
                C31059 -
            ((C13394 + C13395) * C13238 +
             (C4861 * C13236 + C4860 * C13235) * C13237) *
                C3272) *
               C31017) *
              C31262 +
          ((((C13549 + C13548) * C13237 + (C13552 + C13553) * C13238) * C31059 -
            ((C13242 + C13243) * C13238 + (C13241 + C13240) * C13237) * C3272) *
               C2510 +
           (((C13395 + C13394) * C13237 + (C13398 + C13399) * C13238) * C3272 -
            ((C14016 + C14017) * C13238 + (C14015 + C14014) * C13237) *
                C31059) *
               C31017) *
              C31249 +
          ((((C13243 + C13242) * C13237 + (C13244 + C13245) * C13238) * C3272 -
            ((C13818 + C13819) * C13238 + (C13553 + C13552) * C13237) *
                C31059) *
               C2510 +
           (((C14017 + C14016) * C13237 +
             (C959 * C13235 +
              (C113 * C1582 + C1590 + C1590 + C31151 * C1584) * C13236) *
                 C13238) *
                C31059 -
            ((C13686 + C13687) * C13238 + (C13399 + C13398) * C13237) * C3272) *
               C31017) *
              C31222)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
             C4860 * C13236) *
                C13237 +
            (C13240 + C13241) * C13238) *
               C31273 -
           ((C13548 + C13549) * C13238 +
            (C5324 * C13236 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C13235) *
                C13237) *
               C31270 +
           (((C113 * C481 + C516 + C516 + C31151 * C501) * C13235 +
             C5653 * C13236) *
                C13237 +
            (C13550 + C13551) * C13238) *
               C31261 -
           ((C15557 + C15553) * C13238 +
            (C6688 * C13236 +
             (C113 * C2000 + C2019 + C2019 + C31151 * C2012) * C13235) *
                C13237) *
               C31244) *
              C2510 +
          (((C5324 * C13235 + C5323 * C13236) * C13237 +
            (C14014 + C14015) * C13238) *
               C31270 -
           ((C13394 + C13395) * C13238 +
            (C4861 * C13236 + C4860 * C13235) * C13237) *
               C31273 -
           ((C15419 + C15420) * C13238 +
            (C5654 * C13236 + C5653 * C13235) * C13237) *
               C31261 +
           ((C6688 * C13235 + C6687 * C13236) * C13237 +
            (C15556 * C13235 +
             (C113 * C6572 + C6576 + C6576 + C31151 * C6574) * C13236) *
                C13238) *
               C31244) *
              C31017) *
         C30926) /
            (p * q * std::sqrt(p + q));
    d2ee[8] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         ((((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
              C4860 * C13236) *
                 C13237 +
             (C13240 + C13241) * C13238) *
                C31055 -
            ((C13548 + C13549) * C13238 +
             (C5324 * C13236 +
              (C113 * C480 + C515 + C515 + C31151 * C500) * C13235) *
                 C13237) *
                C31062 +
            (((C113 * C481 + C516 + C516 + C31151 * C501) * C13235 +
              C5653 * C13236) *
                 C13237 +
             (C13550 + C13551) * C13238) *
                C3780) *
               C2510 +
           (((C5324 * C13235 + C5323 * C13236) * C13237 +
             (C14014 + C14015) * C13238) *
                C31062 -
            ((C13394 + C13395) * C13238 +
             (C4861 * C13236 + C4860 * C13235) * C13237) *
                C31055 -
            ((C15419 + C15420) * C13238 +
             (C5654 * C13236 + C5653 * C13235) * C13237) *
                C3780) *
               C31017) *
              C31183 +
          ((((C13549 + C13548) * C13237 + (C13552 + C13553) * C13238) * C31062 -
            ((C13242 + C13243) * C13238 + (C13241 + C13240) * C13237) * C31055 -
            ((C13554 + C13555) * C13238 + (C13551 + C13550) * C13237) * C3780) *
               C2510 +
           (((C13395 + C13394) * C13237 + (C13398 + C13399) * C13238) * C31055 -
            ((C14016 + C14017) * C13238 + (C14015 + C14014) * C13237) * C31062 +
            ((C15420 + C15419) * C13237 +
             (C2181 * C13235 +
              (C113 * C1288 + C1316 + C1316 + C31151 * C1306) * C13236) *
                 C13238) *
                C3780) *
               C31017) *
              C30937)) /
        (p * q * std::sqrt(p + q));
    d2ee[9] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
              C4860 * C13236) *
                 C13237 +
             (C13240 + C13241) * C13238) *
                C3272 -
            ((C13548 + C13549) * C13238 +
             (C5324 * C13236 +
              (C113 * C480 + C515 + C515 + C31151 * C500) * C13235) *
                 C13237) *
                C31059) *
               C2510 +
           (((C5324 * C13235 + C5323 * C13236) * C13237 +
             (C14014 + C14015) * C13238) *
                C31059 -
            ((C13394 + C13395) * C13238 +
             (C4861 * C13236 + C4860 * C13235) * C13237) *
                C3272) *
               C31017) *
              C31262 +
          ((((C13549 + C13548) * C13237 + (C13552 + C13553) * C13238) * C31059 -
            ((C13242 + C13243) * C13238 + (C13241 + C13240) * C13237) * C3272) *
               C2510 +
           (((C13395 + C13394) * C13237 + (C13398 + C13399) * C13238) * C3272 -
            ((C14016 + C14017) * C13238 + (C14015 + C14014) * C13237) *
                C31059) *
               C31017) *
              C31249 +
          ((((C13243 + C13242) * C13237 + (C13244 + C13245) * C13238) * C3272 -
            ((C13818 + C13819) * C13238 + (C13553 + C13552) * C13237) *
                C31059) *
               C2510 +
           (((C14017 + C14016) * C13237 +
             (C959 * C13235 +
              (C113 * C1582 + C1590 + C1590 + C31151 * C1584) * C13236) *
                 C13238) *
                C31059 -
            ((C13686 + C13687) * C13238 + (C13399 + C13398) * C13237) * C3272) *
               C31017) *
              C31222)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
             C4860 * C13236) *
                C13237 +
            (C13240 + C13241) * C13238) *
               C3272 -
           ((C13548 + C13549) * C13238 +
            (C5324 * C13236 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C13235) *
                C13237) *
               C31059) *
              C31272 +
          (((C5324 * C13235 + C5323 * C13236) * C13237 +
            (C14014 + C14015) * C13238) *
               C31059 -
           ((C13394 + C13395) * C13238 +
            (C4861 * C13236 + C4860 * C13235) * C13237) *
               C3272) *
              C31268 +
          (((C4861 * C13235 + C4862 * C13236) * C13237 +
            (C13396 + C13397) * C13238) *
               C3272 -
           ((C14718 + C14719) * C13238 +
            (C5655 * C13236 + C5323 * C13235) * C13237) *
               C31059) *
              C31258 +
          (((C5655 * C13235 + C6025 * C13236) * C13237 +
            (C5918 * C13235 +
             (C113 * C5909 + C5915 + C5915 + C31151 * C5911) * C13236) *
                C13238) *
               C31059 -
           ((C14522 + C14523) * C13238 +
            (C5513 * C13236 + C4862 * C13235) * C13237) *
               C3272) *
              C31238) *
         C30926) /
            (p * q * std::sqrt(p + q));
    d2ee[10] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
             C4860 * C13236) *
                C13237 +
            (C13240 + C13241) * C13238) *
               C30972 * C1414 -
           ((C13394 + C13395) * C13238 +
            (C4861 * C13236 + C4860 * C13235) * C13237) *
               C30972 * C1415 +
           ((C4861 * C13235 + C4862 * C13236) * C13237 +
            (C13396 + C13397) * C13238) *
               C30972 * C1416 -
           ((C14522 + C14523) * C13238 +
            (C5513 * C13236 + C4862 * C13235) * C13237) *
               C30972 * C31238) *
              C31183 +
          (((C13395 + C13394) * C13237 + (C13398 + C13399) * C13238) * C30972 *
               C1415 -
           ((C13242 + C13243) * C13238 + (C13241 + C13240) * C13237) * C30972 *
               C1414 -
           ((C13400 + C13401) * C13238 + (C13397 + C13396) * C13237) * C30972 *
               C1416 +
           ((C14523 + C14522) * C13237 +
            (C1433 * C13235 +
             (C113 * C1151 + C1170 + C1170 + C31151 * C1163) * C13236) *
                C13238) *
               C30972 * C31238) *
              C30937)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
             C4860 * C13236) *
                C13237 +
            (C13240 + C13241) * C13238) *
               C30972 * C31197 -
           ((C13394 + C13395) * C13238 +
            (C4861 * C13236 + C4860 * C13235) * C13237) *
               C30972 * C31017) *
              C654 +
          (((C13395 + C13394) * C13237 + (C13398 + C13399) * C13238) * C30972 *
               C31017 -
           ((C13242 + C13243) * C13238 + (C13241 + C13240) * C13237) * C30972 *
               C31197) *
              C655 +
          (((C13243 + C13242) * C13237 + (C13244 + C13245) * C13238) * C30972 *
               C31197 -
           ((C13686 + C13687) * C13238 + (C13399 + C13398) * C13237) * C30972 *
               C31017) *
              C656 +
          (((C13687 + C13686) * C13237 +
            (C667 * C13235 +
             (C113 * C298 + C341 + C341 + C31151 * C318) * C13236) *
                C13238) *
               C30972 * C31017 -
           ((C13246 + C13247) * C13238 + (C13245 + C13244) * C13237) * C30972 *
               C31197) *
              C31232)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
              C4860 * C13236) *
                 C13237 +
             (C13240 + C13241) * C13238) *
                C1818 -
            ((C13548 + C13549) * C13238 +
             (C5324 * C13236 +
              (C113 * C480 + C515 + C515 + C31151 * C500) * C13235) *
                 C13237) *
                C1819 +
            (((C113 * C481 + C516 + C516 + C31151 * C501) * C13235 +
              C5653 * C13236) *
                 C13237 +
             (C13550 + C13551) * C13238) *
                C31231) *
               C31197 +
           (((C5324 * C13235 + C5323 * C13236) * C13237 +
             (C14014 + C14015) * C13238) *
                C1819 -
            ((C13394 + C13395) * C13238 +
             (C4861 * C13236 + C4860 * C13235) * C13237) *
                C1818 -
            ((C15419 + C15420) * C13238 +
             (C5654 * C13236 + C5653 * C13235) * C13237) *
                C31231) *
               C31017) *
              C31183 +
          ((((C13549 + C13548) * C13237 + (C13552 + C13553) * C13238) * C1819 -
            ((C13242 + C13243) * C13238 + (C13241 + C13240) * C13237) * C1818 -
            ((C13554 + C13555) * C13238 + (C13551 + C13550) * C13237) *
                C31231) *
               C31197 +
           (((C13395 + C13394) * C13237 + (C13398 + C13399) * C13238) * C1818 -
            ((C14016 + C14017) * C13238 + (C14015 + C14014) * C13237) * C1819 +
            ((C15420 + C15419) * C13237 +
             (C2181 * C13235 +
              (C113 * C1288 + C1316 + C1316 + C31151 * C1306) * C13236) *
                 C13238) *
                C31231) *
               C31017) *
              C30937)) /
            (p * q * std::sqrt(p + q));
    d2ee[11] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
             C4860 * C13236) *
                C13237 +
            (C13240 + C13241) * C13238) *
               C31198 -
           ((C13548 + C13549) * C13238 +
            (C5324 * C13236 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C13235) *
                C13237) *
               C31059) *
              C1414 +
          (((C5324 * C13235 + C5323 * C13236) * C13237 +
            (C14014 + C14015) * C13238) *
               C31059 -
           ((C13394 + C13395) * C13238 +
            (C4861 * C13236 + C4860 * C13235) * C13237) *
               C31198) *
              C1415 +
          (((C4861 * C13235 + C4862 * C13236) * C13237 +
            (C13396 + C13397) * C13238) *
               C31198 -
           ((C14718 + C14719) * C13238 +
            (C5655 * C13236 + C5323 * C13235) * C13237) *
               C31059) *
              C1416 +
          (((C5655 * C13235 + C6025 * C13236) * C13237 +
            (C5918 * C13235 +
             (C113 * C5909 + C5915 + C5915 + C31151 * C5911) * C13236) *
                C13238) *
               C31059 -
           ((C14522 + C14523) * C13238 +
            (C5513 * C13236 + C4862 * C13235) * C13237) *
               C31198) *
              C31238) *
         C30926) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
              C4860 * C13236) *
                 C13237 +
             (C13240 + C13241) * C13238) *
                C31198 -
            ((C13548 + C13549) * C13238 +
             (C5324 * C13236 +
              (C113 * C480 + C515 + C515 + C31151 * C500) * C13235) *
                 C13237) *
                C31059) *
               C31197 +
           (((C5324 * C13235 + C5323 * C13236) * C13237 +
             (C14014 + C14015) * C13238) *
                C31059 -
            ((C13394 + C13395) * C13238 +
             (C4861 * C13236 + C4860 * C13235) * C13237) *
                C31198) *
               C31017) *
              C286 +
          ((((C13549 + C13548) * C13237 + (C13552 + C13553) * C13238) * C31059 -
            ((C13242 + C13243) * C13238 + (C13241 + C13240) * C13237) *
                C31198) *
               C31197 +
           (((C13395 + C13394) * C13237 + (C13398 + C13399) * C13238) * C31198 -
            ((C14016 + C14017) * C13238 + (C14015 + C14014) * C13237) *
                C31059) *
               C31017) *
              C287 +
          ((((C13243 + C13242) * C13237 + (C13244 + C13245) * C13238) * C31198 -
            ((C13818 + C13819) * C13238 + (C13553 + C13552) * C13237) *
                C31059) *
               C31197 +
           (((C14017 + C14016) * C13237 +
             (C959 * C13235 +
              (C113 * C1582 + C1590 + C1590 + C31151 * C1584) * C13236) *
                 C13238) *
                C31059 -
            ((C13686 + C13687) * C13238 + (C13399 + C13398) * C13237) *
                C31198) *
               C31017) *
              C31222)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
             C4860 * C13236) *
                C13237 +
            (C13240 + C13241) * C13238) *
               C2282 -
           ((C13548 + C13549) * C13238 +
            (C5324 * C13236 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C13235) *
                C13237) *
               C2283 +
           (((C113 * C481 + C516 + C516 + C31151 * C501) * C13235 +
             C5653 * C13236) *
                C13237 +
            (C13550 + C13551) * C13238) *
               C2284 -
           ((C15557 + C15553) * C13238 +
            (C6688 * C13236 +
             (C113 * C2000 + C2019 + C2019 + C31151 * C2012) * C13235) *
                C13237) *
               C31244) *
              C31197 +
          (((C5324 * C13235 + C5323 * C13236) * C13237 +
            (C14014 + C14015) * C13238) *
               C2283 -
           ((C13394 + C13395) * C13238 +
            (C4861 * C13236 + C4860 * C13235) * C13237) *
               C2282 -
           ((C15419 + C15420) * C13238 +
            (C5654 * C13236 + C5653 * C13235) * C13237) *
               C2284 +
           ((C6688 * C13235 + C6687 * C13236) * C13237 +
            (C15556 * C13235 +
             (C113 * C6572 + C6576 + C6576 + C31151 * C6574) * C13236) *
                C13238) *
               C31244) *
              C31017) *
         C30926) /
            (p * q * std::sqrt(p + q));
    d2ee[12] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
                C4860 * C13236) *
                   C13237 +
               (C13240 + C13241) * C13238) *
                  C30972 * C30954 * C108 -
              ((C13242 + C13243) * C13238 + (C13241 + C13240) * C13237) *
                  C30972 * C30954 * C109 +
              ((C13243 + C13242) * C13237 + (C13244 + C13245) * C13238) *
                  C30972 * C30954 * C110 -
              ((C13246 + C13247) * C13238 + (C13245 + C13244) * C13237) *
                  C30972 * C30954 * C111 +
              ((C13247 + C13246) * C13237 +
               (C168 * C13235 +
                (C113 * C658 + C664 + C664 + C31151 * C660) * C13236) *
                   C13238) *
                  C30972 * C30954 * C112) +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             (((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
                 C4860 * C13236) *
                    C13237 +
                (C13240 + C13241) * C13238) *
                   C30972 * C31265 -
               ((C13394 + C13395) * C13238 +
                (C4861 * C13236 + C4860 * C13235) * C13237) *
                   C30972 * C31253 +
               ((C4861 * C13235 + C4862 * C13236) * C13237 +
                (C13396 + C13397) * C13238) *
                   C30972 * C31228) *
                  C286 +
              (((C13395 + C13394) * C13237 + (C13398 + C13399) * C13238) *
                   C30972 * C31253 -
               ((C13242 + C13243) * C13238 + (C13241 + C13240) * C13237) *
                   C30972 * C31265 -
               ((C13400 + C13401) * C13238 + (C13397 + C13396) * C13237) *
                   C30972 * C31228) *
                  C287 +
              (((C13243 + C13242) * C13237 + (C13244 + C13245) * C13238) *
                   C30972 * C31265 -
               ((C359 * C13236 + C358 * C13235) * C13238 +
                (C13399 + C13398) * C13237) *
                   C30972 * C31253 +
               ((C13401 + C13400) * C13237 +
                (C359 * C13235 +
                 (C113 * C1420 + C1428 + C1428 + C31151 * C1422) * C13236) *
                    C13238) *
                   C30972 * C31228) *
                  C31222)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
             C4860 * C13236) *
                C13237 +
            (C13240 + C13241) * C13238) *
               C31266 -
           ((C13548 + C13549) * C13238 +
            (C5324 * C13236 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C13235) *
                C13237) *
               C31255 +
           (((C113 * C481 + C516 + C516 + C31151 * C501) * C13235 +
             C5653 * C13236) *
                C13237 +
            (C13550 + C13551) * C13238) *
               C31231) *
              C30954 * C286 +
          (((C13549 + C13548) * C13237 + (C13552 + C13553) * C13238) * C31255 -
           ((C13242 + C13243) * C13238 + (C13241 + C13240) * C13237) * C31266 -
           ((C13554 + C13555) * C13238 + (C13551 + C13550) * C13237) * C31231) *
              C30954 * C287 +
          (((C13243 + C13242) * C13237 + (C13244 + C13245) * C13238) * C31266 -
           ((C959 * C13236 + C547 * C13235) * C13238 +
            (C13553 + C13552) * C13237) *
               C31255 +
           ((C13555 + C13554) * C13237 +
            (C548 * C13235 +
             (C113 * C2168 + C2176 + C2176 + C31151 * C2170) * C13236) *
                C13238) *
               C31231) *
              C30954 * C31222)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
             C4860 * C13236) *
                C13237 +
            (C13240 + C13241) * C13238) *
               C30972 * C1072 -
           ((C13394 + C13395) * C13238 +
            (C4861 * C13236 + C4860 * C13235) * C13237) *
               C30972 * C1073 +
           ((C4861 * C13235 + C4862 * C13236) * C13237 +
            (C13396 + C13397) * C13238) *
               C30972 * C31228) *
              C31262 +
          (((C13395 + C13394) * C13237 + (C13398 + C13399) * C13238) * C30972 *
               C1073 -
           ((C13242 + C13243) * C13238 + (C13241 + C13240) * C13237) * C30972 *
               C1072 -
           ((C13400 + C13401) * C13238 + (C13397 + C13396) * C13237) * C30972 *
               C31228) *
              C31249 +
          (((C13243 + C13242) * C13237 + (C13244 + C13245) * C13238) * C30972 *
               C1072 -
           ((C13686 + C13687) * C13238 + (C13399 + C13398) * C13237) * C30972 *
               C1073 +
           ((C13401 + C13400) * C13237 +
            (C359 * C13235 +
             (C113 * C1420 + C1428 + C1428 + C31151 * C1422) * C13236) *
                C13238) *
               C30972 * C31228) *
              C31222)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
            C4860 * C13236) *
               C13237 +
           (C13240 + C13241) * C13238) *
              C30972 * C1140 -
          ((C13394 + C13395) * C13238 +
           (C4861 * C13236 + C4860 * C13235) * C13237) *
              C30972 * C1141 +
          ((C4861 * C13235 + C4862 * C13236) * C13237 +
           (C13396 + C13397) * C13238) *
              C30972 * C1142 -
          ((C5763 * C13236 + C1434 * C13235) * C13238 +
           (C5513 * C13236 + C4862 * C13235) * C13237) *
              C30972 * C1143 +
          ((C5513 * C13235 + C5514 * C13236) * C13237 +
           (C5763 * C13235 +
            (C113 * C5754 + C5760 + C5760 + C31151 * C5756) * C13236) *
               C13238) *
              C30972 * C1144) *
         C30926) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
             C4860 * C13236) *
                C13237 +
            (C13240 + C13241) * C13238) *
               C31266 -
           ((C13548 + C13549) * C13238 +
            (C5324 * C13236 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C13235) *
                C13237) *
               C31255 +
           (((C113 * C481 + C516 + C516 + C31151 * C501) * C13235 +
             C5653 * C13236) *
                C13237 +
            (C13550 + C13551) * C13238) *
               C31231) *
              C1072 +
          (((C5324 * C13235 + C5323 * C13236) * C13237 +
            (C14014 + C14015) * C13238) *
               C31255 -
           ((C13394 + C13395) * C13238 +
            (C4861 * C13236 + C4860 * C13235) * C13237) *
               C31266 -
           ((C6474 * C13236 + C2182 * C13235) * C13238 +
            (C5654 * C13236 + C5653 * C13235) * C13237) *
               C31231) *
              C1073 +
          (((C4861 * C13235 + C4862 * C13236) * C13237 +
            (C13396 + C13397) * C13238) *
               C31266 -
           ((C5918 * C13236 + C1596 * C13235) * C13238 +
            (C5655 * C13236 + C5323 * C13235) * C13237) *
               C31255 +
           ((C5654 * C13235 + C5656 * C13236) * C13237 +
            (C6474 * C13235 +
             (C113 * C6465 + C6471 + C6471 + C31151 * C6467) * C13236) *
                C13238) *
               C31231) *
              C31228) *
         C30926) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
             C4860 * C13236) *
                C13237 +
            (C13240 + C13241) * C13238) *
               C1818 -
           ((C13548 + C13549) * C13238 +
            (C5324 * C13236 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C13235) *
                C13237) *
               C1819 +
           (((C113 * C481 + C516 + C516 + C31151 * C501) * C13235 +
             C5653 * C13236) *
                C13237 +
            (C13550 + C13551) * C13238) *
               C31231) *
              C30954 * C31262 +
          (((C13549 + C13548) * C13237 + (C13552 + C13553) * C13238) * C1819 -
           ((C13242 + C13243) * C13238 + (C13241 + C13240) * C13237) * C1818 -
           ((C13554 + C13555) * C13238 + (C13551 + C13550) * C13237) * C31231) *
              C30954 * C31249 +
          (((C13243 + C13242) * C13237 + (C13244 + C13245) * C13238) * C1818 -
           ((C13818 + C13819) * C13238 + (C13553 + C13552) * C13237) * C1819 +
           ((C13555 + C13554) * C13237 +
            (C548 * C13235 +
             (C113 * C2168 + C2176 + C2176 + C31151 * C2170) * C13236) *
                C13238) *
               C31231) *
              C30954 * C31222)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
             C4860 * C13236) *
                C13237 +
            (C13240 + C13241) * C13238) *
               C1818 -
           ((C13548 + C13549) * C13238 +
            (C5324 * C13236 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C13235) *
                C13237) *
               C1819 +
           (((C113 * C481 + C516 + C516 + C31151 * C501) * C13235 +
             C5653 * C13236) *
                C13237 +
            (C13550 + C13551) * C13238) *
               C31231) *
              C31265 +
          (((C5324 * C13235 + C5323 * C13236) * C13237 +
            (C14014 + C14015) * C13238) *
               C1819 -
           ((C13394 + C13395) * C13238 +
            (C4861 * C13236 + C4860 * C13235) * C13237) *
               C1818 -
           ((C6474 * C13236 + C2182 * C13235) * C13238 +
            (C5654 * C13236 + C5653 * C13235) * C13237) *
               C31231) *
              C31253 +
          (((C4861 * C13235 + C4862 * C13236) * C13237 +
            (C13396 + C13397) * C13238) *
               C1818 -
           ((C14718 + C14719) * C13238 +
            (C5655 * C13236 + C5323 * C13235) * C13237) *
               C1819 +
           ((C5654 * C13235 + C5656 * C13236) * C13237 +
            (C6474 * C13235 +
             (C113 * C6465 + C6471 + C6471 + C31151 * C6467) * C13236) *
                C13238) *
               C31231) *
              C31228) *
         C30926) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
            C4860 * C13236) *
               C13237 +
           (C13240 + C13241) * C13238) *
              C1993 -
          ((C13548 + C13549) * C13238 +
           (C5324 * C13236 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C13235) *
               C13237) *
              C1994 +
          (((C113 * C481 + C516 + C516 + C31151 * C501) * C13235 +
            C5653 * C13236) *
               C13237 +
           (C13550 + C13551) * C13238) *
              C1995 -
          (((C113 * C2401 + C2411 + C2411 + C31151 * C2407) * C13236 +
            C2300 * C13235) *
               C13238 +
           (C6688 * C13236 +
            (C113 * C2000 + C2019 + C2019 + C31151 * C2012) * C13235) *
               C13237) *
              C1996 +
          (((C113 * C2001 + C2020 + C2020 + C31151 * C2013) * C13235 +
            (C113 * C6308 + C6318 + C6318 + C31151 * C6314) * C13236) *
               C13237 +
           ((C113 * C2002 + C2021 + C2021 + C31151 * C2014) * C13235 +
            (C113 * C10707 + C15224 + C15224 + C31151 * C10709) * C13236) *
               C13238) *
              C1997) *
         C30954 * C30926) /
            (p * q * std::sqrt(p + q));
    d2ee[13] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
              C4860 * C13236) *
                 C13237 +
             (C13240 + C13241) * C13238) *
                C31198 -
            ((C13548 + C13549) * C13238 +
             (C5324 * C13236 +
              (C113 * C480 + C515 + C515 + C31151 * C500) * C13235) *
                 C13237) *
                C31059) *
               C1072 +
           (((C5324 * C13235 + C5323 * C13236) * C13237 +
             (C14014 + C14015) * C13238) *
                C31059 -
            ((C13394 + C13395) * C13238 +
             (C4861 * C13236 + C4860 * C13235) * C13237) *
                C31198) *
               C1073 +
           (((C4861 * C13235 + C4862 * C13236) * C13237 +
             (C13396 + C13397) * C13238) *
                C31198 -
            ((C14718 + C14719) * C13238 +
             (C5655 * C13236 + C5323 * C13235) * C13237) *
                C31059) *
               C31228) *
              C31183 +
          ((((C13549 + C13548) * C13237 + (C13552 + C13553) * C13238) * C31059 -
            ((C13242 + C13243) * C13238 + (C13241 + C13240) * C13237) *
                C31198) *
               C1072 +
           (((C13395 + C13394) * C13237 + (C13398 + C13399) * C13238) * C31198 -
            ((C14016 + C14017) * C13238 + (C14015 + C14014) * C13237) *
                C31059) *
               C1073 +
           (((C14719 + C14718) * C13237 +
             (C1595 * C13235 +
              (C113 * C1698 + C1708 + C1708 + C31151 * C1704) * C13236) *
                 C13238) *
                C31059 -
            ((C13400 + C13401) * C13238 + (C13397 + C13396) * C13237) *
                C31198) *
               C31228) *
              C30937)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
             C4860 * C13236) *
                C13237 +
            (C13240 + C13241) * C13238) *
               C31198 -
           ((C13548 + C13549) * C13238 +
            (C5324 * C13236 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C13235) *
                C13237) *
               C31059) *
              C30954 * C654 +
          (((C13549 + C13548) * C13237 + (C13552 + C13553) * C13238) * C31059 -
           ((C13242 + C13243) * C13238 + (C13241 + C13240) * C13237) * C31198) *
              C30954 * C655 +
          (((C13243 + C13242) * C13237 + (C13244 + C13245) * C13238) * C31198 -
           ((C13818 + C13819) * C13238 + (C13553 + C13552) * C13237) * C31059) *
              C30954 * C656 +
          (((C13819 + C13818) * C13237 +
            (C777 * C13235 +
             (C113 * C928 + C950 + C950 + C31151 * C938) * C13236) *
                C13238) *
               C31059 -
           ((C13246 + C13247) * C13238 + (C13245 + C13244) * C13237) * C31198) *
              C30954 * C31232)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
             C4860 * C13236) *
                C13237 +
            (C13240 + C13241) * C13238) *
               C2282 -
           ((C13548 + C13549) * C13238 +
            (C5324 * C13236 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C13235) *
                C13237) *
               C2283 +
           (((C113 * C481 + C516 + C516 + C31151 * C501) * C13235 +
             C5653 * C13236) *
                C13237 +
            (C13550 + C13551) * C13238) *
               C2284 -
           ((C15557 + C15553) * C13238 +
            (C6688 * C13236 +
             (C113 * C2000 + C2019 + C2019 + C31151 * C2012) * C13235) *
                C13237) *
               C31244) *
              C30954 * C31183 +
          (((C13549 + C13548) * C13237 + (C13552 + C13553) * C13238) * C2283 -
           ((C13242 + C13243) * C13238 + (C13241 + C13240) * C13237) * C2282 -
           ((C13554 + C13555) * C13238 + (C13551 + C13550) * C13237) * C2284 +
           ((C15553 + C15557) * C13237 +
            (C2299 * C13235 +
             (C113 * C2402 + C2412 + C2412 + C31151 * C2408) * C13236) *
                C13238) *
               C31244) *
              C30954 * C30937)) /
            (p * q * std::sqrt(p + q));
    d2ee[14] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
             C4860 * C13236) *
                C13237 +
            (C13240 + C13241) * C13238) *
               C30972 * C31265 -
           ((C13394 + C13395) * C13238 +
            (C4861 * C13236 + C4860 * C13235) * C13237) *
               C30972 * C31253 +
           ((C4861 * C13235 + C4862 * C13236) * C13237 +
            (C13396 + C13397) * C13238) *
               C30972 * C31228) *
              C286 +
          (((C13395 + C13394) * C13237 + (C13398 + C13399) * C13238) * C30972 *
               C31253 -
           ((C13242 + C13243) * C13238 + (C13241 + C13240) * C13237) * C30972 *
               C31265 -
           ((C13400 + C13401) * C13238 + (C13397 + C13396) * C13237) * C30972 *
               C31228) *
              C287 +
          (((C13243 + C13242) * C13237 + (C13244 + C13245) * C13238) * C30972 *
               C31265 -
           ((C359 * C13236 + C358 * C13235) * C13238 +
            (C13399 + C13398) * C13237) *
               C30972 * C31253 +
           ((C13401 + C13400) * C13237 +
            (C359 * C13235 +
             (C113 * C1420 + C1428 + C1428 + C31151 * C1422) * C13236) *
                C13238) *
               C30972 * C31228) *
              C31222)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
            C4860 * C13236) *
               C13237 +
           (C13240 + C13241) * C13238) *
              C30972 * C30954 * C108 -
          ((C13242 + C13243) * C13238 + (C13241 + C13240) * C13237) * C30972 *
              C30954 * C109 +
          ((C13243 + C13242) * C13237 + (C13244 + C13245) * C13238) * C30972 *
              C30954 * C110 -
          ((C13246 + C13247) * C13238 + (C13245 + C13244) * C13237) * C30972 *
              C30954 * C111 +
          ((C13247 + C13246) * C13237 +
           (C168 * C13235 +
            (C113 * C658 + C664 + C664 + C31151 * C660) * C13236) *
               C13238) *
              C30972 * C30954 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
             C4860 * C13236) *
                C13237 +
            (C13240 + C13241) * C13238) *
               C30972 * C1072 -
           ((C13394 + C13395) * C13238 +
            (C4861 * C13236 + C4860 * C13235) * C13237) *
               C30972 * C1073 +
           ((C4861 * C13235 + C4862 * C13236) * C13237 +
            (C13396 + C13397) * C13238) *
               C30972 * C31228) *
              C31262 +
          (((C13395 + C13394) * C13237 + (C13398 + C13399) * C13238) * C30972 *
               C1073 -
           ((C13242 + C13243) * C13238 + (C13241 + C13240) * C13237) * C30972 *
               C1072 -
           ((C13400 + C13401) * C13238 + (C13397 + C13396) * C13237) * C30972 *
               C31228) *
              C31249 +
          (((C13243 + C13242) * C13237 + (C13244 + C13245) * C13238) * C30972 *
               C1072 -
           ((C13686 + C13687) * C13238 + (C13399 + C13398) * C13237) * C30972 *
               C1073 +
           ((C13401 + C13400) * C13237 +
            (C359 * C13235 +
             (C113 * C1420 + C1428 + C1428 + C31151 * C1422) * C13236) *
                C13238) *
               C30972 * C31228) *
              C31222)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
            C4860 * C13236) *
               C13237 +
           (C13240 + C13241) * C13238) *
              C30972 * C1140 -
          ((C13394 + C13395) * C13238 +
           (C4861 * C13236 + C4860 * C13235) * C13237) *
              C30972 * C1141 +
          ((C4861 * C13235 + C4862 * C13236) * C13237 +
           (C13396 + C13397) * C13238) *
              C30972 * C1142 -
          ((C5763 * C13236 + C1434 * C13235) * C13238 +
           (C5513 * C13236 + C4862 * C13235) * C13237) *
              C30972 * C1143 +
          ((C5513 * C13235 + C5514 * C13236) * C13237 +
           (C5763 * C13235 +
            (C113 * C5754 + C5760 + C5760 + C31151 * C5756) * C13236) *
               C13238) *
              C30972 * C1144) *
         C30926) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
             C4860 * C13236) *
                C13237 +
            (C13240 + C13241) * C13238) *
               C1818 -
           ((C13548 + C13549) * C13238 +
            (C5324 * C13236 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C13235) *
                C13237) *
               C1819 +
           (((C113 * C481 + C516 + C516 + C31151 * C501) * C13235 +
             C5653 * C13236) *
                C13237 +
            (C13550 + C13551) * C13238) *
               C31231) *
              C30954 * C31262 +
          (((C13549 + C13548) * C13237 + (C13552 + C13553) * C13238) * C1819 -
           ((C13242 + C13243) * C13238 + (C13241 + C13240) * C13237) * C1818 -
           ((C13554 + C13555) * C13238 + (C13551 + C13550) * C13237) * C31231) *
              C30954 * C31249 +
          (((C13243 + C13242) * C13237 + (C13244 + C13245) * C13238) * C1818 -
           ((C13818 + C13819) * C13238 + (C13553 + C13552) * C13237) * C1819 +
           ((C13555 + C13554) * C13237 +
            (C548 * C13235 +
             (C113 * C2168 + C2176 + C2176 + C31151 * C2170) * C13236) *
                C13238) *
               C31231) *
              C30954 * C31222)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
             C4860 * C13236) *
                C13237 +
            (C13240 + C13241) * C13238) *
               C1818 -
           ((C13548 + C13549) * C13238 +
            (C5324 * C13236 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C13235) *
                C13237) *
               C1819 +
           (((C113 * C481 + C516 + C516 + C31151 * C501) * C13235 +
             C5653 * C13236) *
                C13237 +
            (C13550 + C13551) * C13238) *
               C31231) *
              C31265 +
          (((C5324 * C13235 + C5323 * C13236) * C13237 +
            (C14014 + C14015) * C13238) *
               C1819 -
           ((C13394 + C13395) * C13238 +
            (C4861 * C13236 + C4860 * C13235) * C13237) *
               C1818 -
           ((C6474 * C13236 + C2182 * C13235) * C13238 +
            (C5654 * C13236 + C5653 * C13235) * C13237) *
               C31231) *
              C31253 +
          (((C4861 * C13235 + C4862 * C13236) * C13237 +
            (C13396 + C13397) * C13238) *
               C1818 -
           ((C14718 + C14719) * C13238 +
            (C5655 * C13236 + C5323 * C13235) * C13237) *
               C1819 +
           ((C5654 * C13235 + C5656 * C13236) * C13237 +
            (C6474 * C13235 +
             (C113 * C6465 + C6471 + C6471 + C31151 * C6467) * C13236) *
                C13238) *
               C31231) *
              C31228) *
         C30926) /
            (p * q * std::sqrt(p + q));
    d2ee[15] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         ((((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
              C4860 * C13236) *
                 C13237 +
             (C13240 + C13241) * C13238) *
                C3272 -
            ((C13548 + C13549) * C13238 +
             (C5324 * C13236 +
              (C113 * C480 + C515 + C515 + C31151 * C500) * C13235) *
                 C13237) *
                C31059) *
               C31197 +
           (((C5324 * C13235 + C5323 * C13236) * C13237 +
             (C14014 + C14015) * C13238) *
                C31059 -
            ((C13394 + C13395) * C13238 +
             (C4861 * C13236 + C4860 * C13235) * C13237) *
                C3272) *
               C31017) *
              C30931 +
          ((((C13549 + C13548) * C13237 + (C13552 + C13553) * C13238) * C31059 -
            ((C13242 + C13243) * C13238 + (C13241 + C13240) * C13237) * C3272) *
               C31197 +
           (((C13395 + C13394) * C13237 + (C13398 + C13399) * C13238) * C3272 -
            ((C14016 + C14017) * C13238 + (C14015 + C14014) * C13237) *
                C31059) *
               C31017) *
              C30940 +
          ((((C13243 + C13242) * C13237 + (C13244 + C13245) * C13238) * C3272 -
            ((C13818 + C13819) * C13238 + (C13553 + C13552) * C13237) *
                C31059) *
               C31197 +
           (((C14017 + C14016) * C13237 +
             (C959 * C13235 +
              (C113 * C1582 + C1590 + C1590 + C31151 * C1584) * C13236) *
                 C13238) *
                C31059 -
            ((C13686 + C13687) * C13238 + (C13399 + C13398) * C13237) * C3272) *
               C31017) *
              C2881)) /
        (p * q * std::sqrt(p + q));
    d2ee[16] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         ((((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
              C4860 * C13236) *
                 C13237 +
             (C13240 + C13241) * C13238) *
                C31055 -
            ((C13548 + C13549) * C13238 +
             (C5324 * C13236 +
              (C113 * C480 + C515 + C515 + C31151 * C500) * C13235) *
                 C13237) *
                C31062 +
            (((C113 * C481 + C516 + C516 + C31151 * C501) * C13235 +
              C5653 * C13236) *
                 C13237 +
             (C13550 + C13551) * C13238) *
                C3780) *
               C31197 +
           (((C5324 * C13235 + C5323 * C13236) * C13237 +
             (C14014 + C14015) * C13238) *
                C31062 -
            ((C13394 + C13395) * C13238 +
             (C4861 * C13236 + C4860 * C13235) * C13237) *
                C31055 -
            ((C15419 + C15420) * C13238 +
             (C5654 * C13236 + C5653 * C13235) * C13237) *
                C3780) *
               C31017) *
              C2618 +
          ((((C13549 + C13548) * C13237 + (C13552 + C13553) * C13238) * C31062 -
            ((C13242 + C13243) * C13238 + (C13241 + C13240) * C13237) * C31055 -
            ((C13554 + C13555) * C13238 + (C13551 + C13550) * C13237) * C3780) *
               C31197 +
           (((C13395 + C13394) * C13237 + (C13398 + C13399) * C13238) * C31055 -
            ((C14016 + C14017) * C13238 + (C14015 + C14014) * C13237) * C31062 +
            ((C15420 + C15419) * C13237 +
             (C2181 * C13235 +
              (C113 * C1288 + C1316 + C1316 + C31151 * C1306) * C13236) *
                 C13238) *
                C3780) *
               C31017) *
              C30937)) /
        (p * q * std::sqrt(p + q));
    d2ee[17] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
              C4860 * C13236) *
                 C13237 +
             (C13240 + C13241) * C13238) *
                C3272 -
            ((C13548 + C13549) * C13238 +
             (C5324 * C13236 +
              (C113 * C480 + C515 + C515 + C31151 * C500) * C13235) *
                 C13237) *
                C31059) *
               C31265 +
           (((C5324 * C13235 + C5323 * C13236) * C13237 +
             (C14014 + C14015) * C13238) *
                C31059 -
            ((C13394 + C13395) * C13238 +
             (C4861 * C13236 + C4860 * C13235) * C13237) *
                C3272) *
               C31253 +
           (((C4861 * C13235 + C4862 * C13236) * C13237 +
             (C13396 + C13397) * C13238) *
                C3272 -
            ((C14718 + C14719) * C13238 +
             (C5655 * C13236 + C5323 * C13235) * C13237) *
                C31059) *
               C31228) *
              C2618 +
          ((((C13549 + C13548) * C13237 + (C13552 + C13553) * C13238) * C31059 -
            ((C13242 + C13243) * C13238 + (C13241 + C13240) * C13237) * C3272) *
               C31265 +
           (((C13395 + C13394) * C13237 + (C13398 + C13399) * C13238) * C3272 -
            ((C14016 + C14017) * C13238 + (C14015 + C14014) * C13237) *
                C31059) *
               C31253 +
           (((C14719 + C14718) * C13237 +
             (C1595 * C13235 +
              (C113 * C1698 + C1708 + C1708 + C31151 * C1704) * C13236) *
                 C13238) *
                C31059 -
            ((C13400 + C13401) * C13238 + (C13397 + C13396) * C13237) * C3272) *
               C31228) *
              C30937)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
             C4860 * C13236) *
                C13237 +
            (C13240 + C13241) * C13238) *
               C3272 -
           ((C13548 + C13549) * C13238 +
            (C5324 * C13236 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C13235) *
                C13237) *
               C31059) *
              C30954 * C31271 +
          (((C13549 + C13548) * C13237 + (C13552 + C13553) * C13238) * C31059 -
           ((C13242 + C13243) * C13238 + (C13241 + C13240) * C13237) * C3272) *
              C30954 * C31264 +
          (((C13243 + C13242) * C13237 + (C13244 + C13245) * C13238) * C3272 -
           ((C13818 + C13819) * C13238 + (C13553 + C13552) * C13237) * C31059) *
              C30954 * C31251 +
          (((C13819 + C13818) * C13237 +
            (C777 * C13235 +
             (C113 * C928 + C950 + C950 + C31151 * C938) * C13236) *
                C13238) *
               C31059 -
           ((C13246 + C13247) * C13238 + (C13245 + C13244) * C13237) * C3272) *
              C30954 * C31232)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
             C4860 * C13236) *
                C13237 +
            (C13240 + C13241) * C13238) *
               C31273 -
           ((C13548 + C13549) * C13238 +
            (C5324 * C13236 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C13235) *
                C13237) *
               C31270 +
           (((C113 * C481 + C516 + C516 + C31151 * C501) * C13235 +
             C5653 * C13236) *
                C13237 +
            (C13550 + C13551) * C13238) *
               C31261 -
           ((C15557 + C15553) * C13238 +
            (C6688 * C13236 +
             (C113 * C2000 + C2019 + C2019 + C31151 * C2012) * C13235) *
                C13237) *
               C31244) *
              C30954 * C2618 +
          (((C13549 + C13548) * C13237 + (C13552 + C13553) * C13238) * C31270 -
           ((C13242 + C13243) * C13238 + (C13241 + C13240) * C13237) * C31273 -
           ((C13554 + C13555) * C13238 + (C13551 + C13550) * C13237) * C31261 +
           ((C15553 + C15557) * C13237 +
            (C2299 * C13235 +
             (C113 * C2402 + C2412 + C2412 + C31151 * C2408) * C13236) *
                C13238) *
               C31244) *
              C30954 * C30937)) /
            (p * q * std::sqrt(p + q));
    d2ee[18] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
             C4860 * C13236) *
                C13237 +
            (C13240 + C13241) * C13238) *
               C31055 -
           ((C13548 + C13549) * C13238 +
            (C5324 * C13236 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C13235) *
                C13237) *
               C31062 +
           (((C113 * C481 + C516 + C516 + C31151 * C501) * C13235 +
             C5653 * C13236) *
                C13237 +
            (C13550 + C13551) * C13238) *
               C3780) *
              C30954 * C30931 +
          (((C13549 + C13548) * C13237 + (C13552 + C13553) * C13238) * C31062 -
           ((C13242 + C13243) * C13238 + (C13241 + C13240) * C13237) * C31055 -
           ((C13554 + C13555) * C13238 + (C13551 + C13550) * C13237) * C3780) *
              C30954 * C30940 +
          (((C13243 + C13242) * C13237 + (C13244 + C13245) * C13238) * C31055 -
           ((C13818 + C13819) * C13238 + (C13553 + C13552) * C13237) * C31062 +
           ((C13555 + C13554) * C13237 +
            (C548 * C13235 +
             (C113 * C2168 + C2176 + C2176 + C31151 * C2170) * C13236) *
                C13238) *
               C3780) *
              C30954 * C2881)) /
        (p * q * std::sqrt(p + q));
    d2ee[19] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
             C4860 * C13236) *
                C13237 +
            (C13240 + C13241) * C13238) *
               C3272 -
           ((C13548 + C13549) * C13238 +
            (C5324 * C13236 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C13235) *
                C13237) *
               C31059) *
              C30954 * C31271 +
          (((C13549 + C13548) * C13237 + (C13552 + C13553) * C13238) * C31059 -
           ((C13242 + C13243) * C13238 + (C13241 + C13240) * C13237) * C3272) *
              C30954 * C31264 +
          (((C13243 + C13242) * C13237 + (C13244 + C13245) * C13238) * C3272 -
           ((C13818 + C13819) * C13238 + (C13553 + C13552) * C13237) * C31059) *
              C30954 * C31251 +
          (((C13819 + C13818) * C13237 +
            (C777 * C13235 +
             (C113 * C928 + C950 + C950 + C31151 * C938) * C13236) *
                C13238) *
               C31059 -
           ((C13246 + C13247) * C13238 + (C13245 + C13244) * C13237) * C3272) *
              C30954 * C31232)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
              C4860 * C13236) *
                 C13237 +
             (C13240 + C13241) * C13238) *
                C3272 -
            ((C13548 + C13549) * C13238 +
             (C5324 * C13236 +
              (C113 * C480 + C515 + C515 + C31151 * C500) * C13235) *
                 C13237) *
                C31059) *
               C31265 +
           (((C5324 * C13235 + C5323 * C13236) * C13237 +
             (C14014 + C14015) * C13238) *
                C31059 -
            ((C13394 + C13395) * C13238 +
             (C4861 * C13236 + C4860 * C13235) * C13237) *
                C3272) *
               C31253 +
           (((C4861 * C13235 + C4862 * C13236) * C13237 +
             (C13396 + C13397) * C13238) *
                C3272 -
            ((C14718 + C14719) * C13238 +
             (C5655 * C13236 + C5323 * C13235) * C13237) *
                C31059) *
               C31228) *
              C2618 +
          ((((C13549 + C13548) * C13237 + (C13552 + C13553) * C13238) * C31059 -
            ((C13242 + C13243) * C13238 + (C13241 + C13240) * C13237) * C3272) *
               C31265 +
           (((C13395 + C13394) * C13237 + (C13398 + C13399) * C13238) * C3272 -
            ((C14016 + C14017) * C13238 + (C14015 + C14014) * C13237) *
                C31059) *
               C31253 +
           (((C14719 + C14718) * C13237 +
             (C1595 * C13235 +
              (C113 * C1698 + C1708 + C1708 + C31151 * C1704) * C13236) *
                 C13238) *
                C31059 -
            ((C13400 + C13401) * C13238 + (C13397 + C13396) * C13237) * C3272) *
               C31228) *
              C30937)) /
            (p * q * std::sqrt(p + q));
    d2ee[20] += (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                 (((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
                     C4860 * C13236) *
                        C13237 +
                    (C13240 + C13241) * C13238) *
                       C30972 * C31197 -
                   ((C13394 + C13395) * C13238 +
                    (C4861 * C13236 + C4860 * C13235) * C13237) *
                       C30972 * C31017) *
                      C654 +
                  (((C13395 + C13394) * C13237 + (C13398 + C13399) * C13238) *
                       C30972 * C31017 -
                   ((C13242 + C13243) * C13238 + (C13241 + C13240) * C13237) *
                       C30972 * C31197) *
                      C655 +
                  (((C13243 + C13242) * C13237 + (C13244 + C13245) * C13238) *
                       C30972 * C31197 -
                   ((C13686 + C13687) * C13238 + (C13399 + C13398) * C13237) *
                       C30972 * C31017) *
                      C656 +
                  (((C13687 + C13686) * C13237 +
                    (C667 * C13235 +
                     (C113 * C298 + C341 + C341 + C31151 * C318) * C13236) *
                        C13238) *
                       C30972 * C31017 -
                   ((C13246 + C13247) * C13238 + (C13245 + C13244) * C13237) *
                       C30972 * C31197) *
                      C31232)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                 (((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
                     C4860 * C13236) *
                        C13237 +
                    (C13240 + C13241) * C13238) *
                       C30972 * C1414 -
                   ((C13394 + C13395) * C13238 +
                    (C4861 * C13236 + C4860 * C13235) * C13237) *
                       C30972 * C1415 +
                   ((C4861 * C13235 + C4862 * C13236) * C13237 +
                    (C13396 + C13397) * C13238) *
                       C30972 * C1416 -
                   ((C14522 + C14523) * C13238 +
                    (C5513 * C13236 + C4862 * C13235) * C13237) *
                       C30972 * C31238) *
                      C31183 +
                  (((C13395 + C13394) * C13237 + (C13398 + C13399) * C13238) *
                       C30972 * C1415 -
                   ((C13242 + C13243) * C13238 + (C13241 + C13240) * C13237) *
                       C30972 * C1414 -
                   ((C13400 + C13401) * C13238 + (C13397 + C13396) * C13237) *
                       C30972 * C1416 +
                   ((C14523 + C14522) * C13237 +
                    (C1433 * C13235 +
                     (C113 * C1151 + C1170 + C1170 + C31151 * C1163) * C13236) *
                        C13238) *
                       C30972 * C31238) *
                      C30937)) /
                    (p * q * std::sqrt(p + q));
    d2ee[21] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
              C4860 * C13236) *
                 C13237 +
             (C13240 + C13241) * C13238) *
                C31198 -
            ((C13548 + C13549) * C13238 +
             (C5324 * C13236 +
              (C113 * C480 + C515 + C515 + C31151 * C500) * C13235) *
                 C13237) *
                C31059) *
               C31197 +
           (((C5324 * C13235 + C5323 * C13236) * C13237 +
             (C14014 + C14015) * C13238) *
                C31059 -
            ((C13394 + C13395) * C13238 +
             (C4861 * C13236 + C4860 * C13235) * C13237) *
                C31198) *
               C31017) *
              C286 +
          ((((C13549 + C13548) * C13237 + (C13552 + C13553) * C13238) * C31059 -
            ((C13242 + C13243) * C13238 + (C13241 + C13240) * C13237) *
                C31198) *
               C31197 +
           (((C13395 + C13394) * C13237 + (C13398 + C13399) * C13238) * C31198 -
            ((C14016 + C14017) * C13238 + (C14015 + C14014) * C13237) *
                C31059) *
               C31017) *
              C287 +
          ((((C13243 + C13242) * C13237 + (C13244 + C13245) * C13238) * C31198 -
            ((C13818 + C13819) * C13238 + (C13553 + C13552) * C13237) *
                C31059) *
               C31197 +
           (((C14017 + C14016) * C13237 +
             (C959 * C13235 +
              (C113 * C1582 + C1590 + C1590 + C31151 * C1584) * C13236) *
                 C13238) *
                C31059 -
            ((C13686 + C13687) * C13238 + (C13399 + C13398) * C13237) *
                C31198) *
               C31017) *
              C31222)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
             C4860 * C13236) *
                C13237 +
            (C13240 + C13241) * C13238) *
               C31198 -
           ((C13548 + C13549) * C13238 +
            (C5324 * C13236 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C13235) *
                C13237) *
               C31059) *
              C1414 +
          (((C5324 * C13235 + C5323 * C13236) * C13237 +
            (C14014 + C14015) * C13238) *
               C31059 -
           ((C13394 + C13395) * C13238 +
            (C4861 * C13236 + C4860 * C13235) * C13237) *
               C31198) *
              C1415 +
          (((C4861 * C13235 + C4862 * C13236) * C13237 +
            (C13396 + C13397) * C13238) *
               C31198 -
           ((C14718 + C14719) * C13238 +
            (C5655 * C13236 + C5323 * C13235) * C13237) *
               C31059) *
              C1416 +
          (((C5655 * C13235 + C6025 * C13236) * C13237 +
            (C5918 * C13235 +
             (C113 * C5909 + C5915 + C5915 + C31151 * C5911) * C13236) *
                C13238) *
               C31059 -
           ((C14522 + C14523) * C13238 +
            (C5513 * C13236 + C4862 * C13235) * C13237) *
               C31198) *
              C31238) *
         C30926) /
            (p * q * std::sqrt(p + q));
    d2ee[22] +=
        (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
             C4860 * C13236) *
                C13237 +
            (C13240 + C13241) * C13238) *
               C30972 * C31265 -
           ((C13394 + C13395) * C13238 +
            (C4861 * C13236 + C4860 * C13235) * C13237) *
               C30972 * C31253 +
           ((C4861 * C13235 + C4862 * C13236) * C13237 +
            (C13396 + C13397) * C13238) *
               C30972 * C31228) *
              C286 +
          (((C13395 + C13394) * C13237 + (C13398 + C13399) * C13238) * C30972 *
               C31253 -
           ((C13242 + C13243) * C13238 + (C13241 + C13240) * C13237) * C30972 *
               C31265 -
           ((C13400 + C13401) * C13238 + (C13397 + C13396) * C13237) * C30972 *
               C31228) *
              C287 +
          (((C13243 + C13242) * C13237 + (C13244 + C13245) * C13238) * C30972 *
               C31265 -
           ((C359 * C13236 + C358 * C13235) * C13238 +
            (C13399 + C13398) * C13237) *
               C30972 * C31253 +
           ((C13401 + C13400) * C13237 +
            (C359 * C13235 +
             (C113 * C1420 + C1428 + C1428 + C31151 * C1422) * C13236) *
                C13238) *
               C30972 * C31228) *
              C31222)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
            C4860 * C13236) *
               C13237 +
           (C13240 + C13241) * C13238) *
              C30972 * C30954 * C108 -
          ((C13242 + C13243) * C13238 + (C13241 + C13240) * C13237) * C30972 *
              C30954 * C109 +
          ((C13243 + C13242) * C13237 + (C13244 + C13245) * C13238) * C30972 *
              C30954 * C110 -
          ((C13246 + C13247) * C13238 + (C13245 + C13244) * C13237) * C30972 *
              C30954 * C111 +
          ((C13247 + C13246) * C13237 +
           (C168 * C13235 +
            (C113 * C658 + C664 + C664 + C31151 * C660) * C13236) *
               C13238) *
              C30972 * C30954 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
             C4860 * C13236) *
                C13237 +
            (C13240 + C13241) * C13238) *
               C31266 -
           ((C13548 + C13549) * C13238 +
            (C5324 * C13236 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C13235) *
                C13237) *
               C31255 +
           (((C113 * C481 + C516 + C516 + C31151 * C501) * C13235 +
             C5653 * C13236) *
                C13237 +
            (C13550 + C13551) * C13238) *
               C31231) *
              C30954 * C286 +
          (((C13549 + C13548) * C13237 + (C13552 + C13553) * C13238) * C31255 -
           ((C13242 + C13243) * C13238 + (C13241 + C13240) * C13237) * C31266 -
           ((C13554 + C13555) * C13238 + (C13551 + C13550) * C13237) * C31231) *
              C30954 * C287 +
          (((C13243 + C13242) * C13237 + (C13244 + C13245) * C13238) * C31266 -
           ((C959 * C13236 + C547 * C13235) * C13238 +
            (C13553 + C13552) * C13237) *
               C31255 +
           ((C13555 + C13554) * C13237 +
            (C548 * C13235 +
             (C113 * C2168 + C2176 + C2176 + C31151 * C2170) * C13236) *
                C13238) *
               C31231) *
              C30954 * C31222)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
             C4860 * C13236) *
                C13237 +
            (C13240 + C13241) * C13238) *
               C30972 * C1072 -
           ((C13394 + C13395) * C13238 +
            (C4861 * C13236 + C4860 * C13235) * C13237) *
               C30972 * C1073 +
           ((C4861 * C13235 + C4862 * C13236) * C13237 +
            (C13396 + C13397) * C13238) *
               C30972 * C31228) *
              C31262 +
          (((C13395 + C13394) * C13237 + (C13398 + C13399) * C13238) * C30972 *
               C1073 -
           ((C13242 + C13243) * C13238 + (C13241 + C13240) * C13237) * C30972 *
               C1072 -
           ((C13400 + C13401) * C13238 + (C13397 + C13396) * C13237) * C30972 *
               C31228) *
              C31249 +
          (((C13243 + C13242) * C13237 + (C13244 + C13245) * C13238) * C30972 *
               C1072 -
           ((C13686 + C13687) * C13238 + (C13399 + C13398) * C13237) * C30972 *
               C1073 +
           ((C13401 + C13400) * C13237 +
            (C359 * C13235 +
             (C113 * C1420 + C1428 + C1428 + C31151 * C1422) * C13236) *
                C13238) *
               C30972 * C31228) *
              C31222)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
            C4860 * C13236) *
               C13237 +
           (C13240 + C13241) * C13238) *
              C30972 * C1140 -
          ((C13394 + C13395) * C13238 +
           (C4861 * C13236 + C4860 * C13235) * C13237) *
              C30972 * C1141 +
          ((C4861 * C13235 + C4862 * C13236) * C13237 +
           (C13396 + C13397) * C13238) *
              C30972 * C1142 -
          ((C5763 * C13236 + C1434 * C13235) * C13238 +
           (C5513 * C13236 + C4862 * C13235) * C13237) *
              C30972 * C1143 +
          ((C5513 * C13235 + C5514 * C13236) * C13237 +
           (C5763 * C13235 +
            (C113 * C5754 + C5760 + C5760 + C31151 * C5756) * C13236) *
               C13238) *
              C30972 * C1144) *
         C30926) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
             C4860 * C13236) *
                C13237 +
            (C13240 + C13241) * C13238) *
               C31266 -
           ((C13548 + C13549) * C13238 +
            (C5324 * C13236 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C13235) *
                C13237) *
               C31255 +
           (((C113 * C481 + C516 + C516 + C31151 * C501) * C13235 +
             C5653 * C13236) *
                C13237 +
            (C13550 + C13551) * C13238) *
               C31231) *
              C1072 +
          (((C5324 * C13235 + C5323 * C13236) * C13237 +
            (C14014 + C14015) * C13238) *
               C31255 -
           ((C13394 + C13395) * C13238 +
            (C4861 * C13236 + C4860 * C13235) * C13237) *
               C31266 -
           ((C6474 * C13236 + C2182 * C13235) * C13238 +
            (C5654 * C13236 + C5653 * C13235) * C13237) *
               C31231) *
              C1073 +
          (((C4861 * C13235 + C4862 * C13236) * C13237 +
            (C13396 + C13397) * C13238) *
               C31266 -
           ((C5918 * C13236 + C1596 * C13235) * C13238 +
            (C5655 * C13236 + C5323 * C13235) * C13237) *
               C31255 +
           ((C5654 * C13235 + C5656 * C13236) * C13237 +
            (C6474 * C13235 +
             (C113 * C6465 + C6471 + C6471 + C31151 * C6467) * C13236) *
                C13238) *
               C31231) *
              C31228) *
         C30926) /
            (p * q * std::sqrt(p + q));
    d2ee[23] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
             C4860 * C13236) *
                C13237 +
            (C13240 + C13241) * C13238) *
               C31198 -
           ((C13548 + C13549) * C13238 +
            (C5324 * C13236 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C13235) *
                C13237) *
               C31059) *
              C30954 * C654 +
          (((C13549 + C13548) * C13237 + (C13552 + C13553) * C13238) * C31059 -
           ((C13242 + C13243) * C13238 + (C13241 + C13240) * C13237) * C31198) *
              C30954 * C655 +
          (((C13243 + C13242) * C13237 + (C13244 + C13245) * C13238) * C31198 -
           ((C13818 + C13819) * C13238 + (C13553 + C13552) * C13237) * C31059) *
              C30954 * C656 +
          (((C13819 + C13818) * C13237 +
            (C777 * C13235 +
             (C113 * C928 + C950 + C950 + C31151 * C938) * C13236) *
                C13238) *
               C31059 -
           ((C13246 + C13247) * C13238 + (C13245 + C13244) * C13237) * C31198) *
              C30954 * C31232)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
              C4860 * C13236) *
                 C13237 +
             (C13240 + C13241) * C13238) *
                C31198 -
            ((C13548 + C13549) * C13238 +
             (C5324 * C13236 +
              (C113 * C480 + C515 + C515 + C31151 * C500) * C13235) *
                 C13237) *
                C31059) *
               C1072 +
           (((C5324 * C13235 + C5323 * C13236) * C13237 +
             (C14014 + C14015) * C13238) *
                C31059 -
            ((C13394 + C13395) * C13238 +
             (C4861 * C13236 + C4860 * C13235) * C13237) *
                C31198) *
               C1073 +
           (((C4861 * C13235 + C4862 * C13236) * C13237 +
             (C13396 + C13397) * C13238) *
                C31198 -
            ((C14718 + C14719) * C13238 +
             (C5655 * C13236 + C5323 * C13235) * C13237) *
                C31059) *
               C31228) *
              C31183 +
          ((((C13549 + C13548) * C13237 + (C13552 + C13553) * C13238) * C31059 -
            ((C13242 + C13243) * C13238 + (C13241 + C13240) * C13237) *
                C31198) *
               C1072 +
           (((C13395 + C13394) * C13237 + (C13398 + C13399) * C13238) * C31198 -
            ((C14016 + C14017) * C13238 + (C14015 + C14014) * C13237) *
                C31059) *
               C1073 +
           (((C14719 + C14718) * C13237 +
             (C1595 * C13235 +
              (C113 * C1698 + C1708 + C1708 + C31151 * C1704) * C13236) *
                 C13238) *
                C31059 -
            ((C13400 + C13401) * C13238 + (C13397 + C13396) * C13237) *
                C31198) *
               C31228) *
              C30937)) /
            (p * q * std::sqrt(p + q));
    d2ee[24] += (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
                 ((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
                    C4860 * C13236) *
                       C13237 +
                   (C13240 + C13241) * C13238) *
                      C30972 * C30954 * C108 -
                  ((C13242 + C13243) * C13238 + (C13241 + C13240) * C13237) *
                      C30972 * C30954 * C109 +
                  ((C13243 + C13242) * C13237 + (C13244 + C13245) * C13238) *
                      C30972 * C30954 * C110 -
                  ((C13246 + C13247) * C13238 + (C13245 + C13244) * C13237) *
                      C30972 * C30954 * C111 +
                  ((C13247 + C13246) * C13237 +
                   (C168 * C13235 +
                    (C113 * C658 + C664 + C664 + C31151 * C660) * C13236) *
                       C13238) *
                      C30972 * C30954 * C112)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
                 (((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
                     C4860 * C13236) *
                        C13237 +
                    (C13240 + C13241) * C13238) *
                       C30972 * C31265 -
                   ((C13394 + C13395) * C13238 +
                    (C4861 * C13236 + C4860 * C13235) * C13237) *
                       C30972 * C31253 +
                   ((C4861 * C13235 + C4862 * C13236) * C13237 +
                    (C13396 + C13397) * C13238) *
                       C30972 * C31228) *
                      C286 +
                  (((C13395 + C13394) * C13237 + (C13398 + C13399) * C13238) *
                       C30972 * C31253 -
                   ((C13242 + C13243) * C13238 + (C13241 + C13240) * C13237) *
                       C30972 * C31265 -
                   ((C13400 + C13401) * C13238 + (C13397 + C13396) * C13237) *
                       C30972 * C31228) *
                      C287 +
                  (((C13243 + C13242) * C13237 + (C13244 + C13245) * C13238) *
                       C30972 * C31265 -
                   ((C359 * C13236 + C358 * C13235) * C13238 +
                    (C13399 + C13398) * C13237) *
                       C30972 * C31253 +
                   ((C13401 + C13400) * C13237 +
                    (C359 * C13235 +
                     (C113 * C1420 + C1428 + C1428 + C31151 * C1422) * C13236) *
                        C13238) *
                       C30972 * C31228) *
                      C31222)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
                 (((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
                     C4860 * C13236) *
                        C13237 +
                    (C13240 + C13241) * C13238) *
                       C30972 * C1072 -
                   ((C13394 + C13395) * C13238 +
                    (C4861 * C13236 + C4860 * C13235) * C13237) *
                       C30972 * C1073 +
                   ((C4861 * C13235 + C4862 * C13236) * C13237 +
                    (C13396 + C13397) * C13238) *
                       C30972 * C31228) *
                      C31262 +
                  (((C13395 + C13394) * C13237 + (C13398 + C13399) * C13238) *
                       C30972 * C1073 -
                   ((C13242 + C13243) * C13238 + (C13241 + C13240) * C13237) *
                       C30972 * C1072 -
                   ((C13400 + C13401) * C13238 + (C13397 + C13396) * C13237) *
                       C30972 * C31228) *
                      C31249 +
                  (((C13243 + C13242) * C13237 + (C13244 + C13245) * C13238) *
                       C30972 * C1072 -
                   ((C13686 + C13687) * C13238 + (C13399 + C13398) * C13237) *
                       C30972 * C1073 +
                   ((C13401 + C13400) * C13237 +
                    (C359 * C13235 +
                     (C113 * C1420 + C1428 + C1428 + C31151 * C1422) * C13236) *
                        C13238) *
                       C30972 * C31228) *
                      C31222)) /
                    (p * q * std::sqrt(p + q)) +
                (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
                 ((((C113 * C115 + C137 + C137 + C31151 * C129) * C13235 +
                    C4860 * C13236) *
                       C13237 +
                   (C13240 + C13241) * C13238) *
                      C30972 * C1140 -
                  ((C13394 + C13395) * C13238 +
                   (C4861 * C13236 + C4860 * C13235) * C13237) *
                      C30972 * C1141 +
                  ((C4861 * C13235 + C4862 * C13236) * C13237 +
                   (C13396 + C13397) * C13238) *
                      C30972 * C1142 -
                  ((C5763 * C13236 + C1434 * C13235) * C13238 +
                   (C5513 * C13236 + C4862 * C13235) * C13237) *
                      C30972 * C1143 +
                  ((C5513 * C13235 + C5514 * C13236) * C13237 +
                   (C5763 * C13235 +
                    (C113 * C5754 + C5760 + C5760 + C31151 * C5756) * C13236) *
                       C13238) *
                      C30972 * C1144) *
                 C30926) /
                    (p * q * std::sqrt(p + q));
    d2ee[25] += (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C13235 +
                    (C24650 + C24651) * C13236) *
                       C30904 * C30972 * C31013 -
                   ((C24652 + C24653) * C13236 + (C24651 + C24650) * C13235) *
                       C30904 * C30972 * C31020 +
                   ((C24653 + C24652) * C13235 + (C25510 + C25511) * C13236) *
                       C30904 * C30972 * C2878) *
                      C30931 +
                  (((C18987 + C18986) * C13235 + (C18988 + C18989) * C13236) *
                       C30904 * C30972 * C31020 -
                   ((C18986 + C18987) * C13236 + (C18785 + C18784) * C13235) *
                       C30904 * C30972 * C31013 -
                   ((C20236 + C20237) * C13236 + (C18989 + C18988) * C13235) *
                       C30904 * C30972 * C2878) *
                      C30940 +
                  (((C18787 + C18786) * C13235 + (C18990 + C18991) * C13236) *
                       C30904 * C30972 * C31013 -
                   ((C18992 + C18993) * C13236 + (C18991 + C18990) * C13235) *
                       C30904 * C30972 * C31020 +
                   ((C18993 + C18992) * C13235 +
                    (C18735 * C1146 + C20230 + C20230 + C18733 * C1158 +
                     C18737 * C1698 + C20231 + C20231 + C18734 * C1704) *
                        C13236) *
                       C30904 * C30972 * C2878) *
                      C2881)) /
                (p * q * std::sqrt(p + q));
    d2ee[26] += (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
                 (((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                      C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                         C13235 +
                     (C24650 + C24651) * C13236) *
                        C30904 * C31198 -
                    ((C25262 + C25263) * C13236 +
                     (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                      C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                         C13235) *
                        C30904 * C31059) *
                       C31013 +
                   (((C25263 + C25262) * C13235 + (C25688 + C25689) * C13236) *
                        C30904 * C31059 -
                    ((C24652 + C24653) * C13236 + (C24651 + C24650) * C13235) *
                        C30904 * C31198) *
                       C31020 +
                   (((C24653 + C24652) * C13235 + (C25510 + C25511) * C13236) *
                        C30904 * C31198 -
                    ((C26156 + C26157) * C13236 + (C25689 + C25688) * C13235) *
                        C30904 * C31059) *
                       C2878) *
                      C2618 +
                  ((((C19189 + C19188) * C13235 + (C19698 + C19699) * C13236) *
                        C30904 * C31059 -
                    ((C18986 + C18987) * C13236 + (C18785 + C18784) * C13235) *
                        C30904 * C31198) *
                       C31013 +
                   (((C18987 + C18986) * C13235 + (C18988 + C18989) * C13236) *
                        C30904 * C31198 -
                    ((C20442 + C20443) * C13236 + (C19699 + C19698) * C13235) *
                        C30904 * C31059) *
                       C31020 +
                   (((C20443 + C20442) * C13235 +
                     (C18735 * C1697 + C20576 + C20576 + C18733 * C1703 +
                      C18737 * C6465 + C20577 + C20577 + C18734 * C6467) *
                         C13236) *
                        C30904 * C31059 -
                    ((C20236 + C20237) * C13236 + (C18989 + C18988) * C13235) *
                        C30904 * C31198) *
                       C2878) *
                      C30937)) /
                (p * q * std::sqrt(p + q));
    d2ee[27] += (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C13235 +
                    (C24650 + C24651) * C13236) *
                       C30904 * C30972 * C31272 -
                   ((C24652 + C24653) * C13236 + (C24651 + C24650) * C13235) *
                       C30904 * C30972 * C31268 +
                   ((C24653 + C24652) * C13235 + (C25510 + C25511) * C13236) *
                       C30904 * C30972 * C31258 -
                   ((C25512 + C25513) * C13236 + (C25511 + C25510) * C13235) *
                       C30904 * C30972 * C31238) *
                      C2618 +
                  (((C18987 + C18986) * C13235 + (C18988 + C18989) * C13236) *
                       C30904 * C30972 * C31268 -
                   ((C18986 + C18987) * C13236 + (C18785 + C18784) * C13235) *
                       C30904 * C30972 * C31272 -
                   ((C20236 + C20237) * C13236 + (C18989 + C18988) * C13235) *
                       C30904 * C30972 * C31258 +
                   ((C20237 + C20236) * C13235 +
                    (C18735 * C1150 + C19936 + C19936 + C18733 * C1162 +
                     C18737 * C5909 + C19937 + C19937 + C18734 * C5911) *
                        C13236) *
                       C30904 * C30972 * C31238) *
                      C30937)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C13235 +
                    (C24650 + C24651) * C13236) *
                       C30904 * C30972 * C2510 -
                   ((C24652 + C24653) * C13236 + (C24651 + C24650) * C13235) *
                       C30904 * C30972 * C31017) *
                      C31271 +
                  (((C18987 + C18986) * C13235 + (C18988 + C18989) * C13236) *
                       C30904 * C30972 * C31017 -
                   ((C18986 + C18987) * C13236 + (C18785 + C18784) * C13235) *
                       C30904 * C30972 * C2510) *
                      C31264 +
                  (((C18787 + C18786) * C13235 + (C18990 + C18991) * C13236) *
                       C30904 * C30972 * C2510 -
                   ((C18992 + C18993) * C13236 + (C18991 + C18990) * C13235) *
                       C30904 * C30972 * C31017) *
                      C31251 +
                  (((C19337 + C19336) * C13235 +
                    (C18735 * C296 + C18968 + C18968 + C18733 * C316 +
                     C18737 * C1582 + C18969 + C18969 + C18734 * C1584) *
                        C13236) *
                       C30904 * C30972 * C31017 -
                   ((C19336 + C19337) * C13236 + (C18789 + C18788) * C13235) *
                       C30904 * C30972 * C2510) *
                      C31232)) /
                    (p * q * std::sqrt(p + q)) +
                (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                 (((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                      C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                         C13235 +
                     (C24650 + C24651) * C13236) *
                        C30904 * C31266 -
                    ((C25262 + C25263) * C13236 +
                     (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                      C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                         C13235) *
                        C30904 * C31255 +
                    ((C18735 * C481 + C19148 + C19148 + C18733 * C501 +
                      C18737 * C2000 + C19149 + C19149 + C18734 * C2012) *
                         C13235 +
                     (C25686 + C25687) * C13236) *
                        C30904 * C31231) *
                       C2510 +
                   (((C25263 + C25262) * C13235 + (C25688 + C25689) * C13236) *
                        C30904 * C31255 -
                    ((C24652 + C24653) * C13236 + (C24651 + C24650) * C13235) *
                        C30904 * C31266 -
                    ((C25690 + C25691) * C13236 + (C25687 + C25686) * C13235) *
                        C30904 * C31231) *
                       C31017) *
                      C2618 +
                  ((((C19189 + C19188) * C13235 + (C19698 + C19699) * C13236) *
                        C30904 * C31255 -
                    ((C18986 + C18987) * C13236 + (C18785 + C18784) * C13235) *
                        C30904 * C31266 -
                    ((C21164 + C21165) * C13236 + (C19191 + C19190) * C13235) *
                        C30904 * C31231) *
                       C2510 +
                   (((C18987 + C18986) * C13235 + (C18988 + C18989) * C13236) *
                        C30904 * C31266 -
                    ((C20442 + C20443) * C13236 + (C19699 + C19698) * C13235) *
                        C30904 * C31255 +
                    ((C21165 + C21164) * C13235 +
                     (C18735 * C1287 + C20094 + C20094 + C18733 * C1305 +
                      C18737 * C6572 + C20095 + C20095 + C18734 * C6574) *
                         C13236) *
                        C30904 * C31231) *
                       C31017) *
                      C30937)) /
                    (p * q * std::sqrt(p + q));
    d2ee[28] += (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
                 (((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                      C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                         C13235 +
                     (C24650 + C24651) * C13236) *
                        C30904 * C31198 -
                    ((C25262 + C25263) * C13236 +
                     (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                      C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                         C13235) *
                        C30904 * C31059) *
                       C2510 +
                   (((C25263 + C25262) * C13235 + (C25688 + C25689) * C13236) *
                        C30904 * C31059 -
                    ((C24652 + C24653) * C13236 + (C24651 + C24650) * C13235) *
                        C30904 * C31198) *
                       C31017) *
                      C30931 +
                  ((((C19189 + C19188) * C13235 + (C19698 + C19699) * C13236) *
                        C30904 * C31059 -
                    ((C18986 + C18987) * C13236 + (C18785 + C18784) * C13235) *
                        C30904 * C31198) *
                       C2510 +
                   (((C18987 + C18986) * C13235 + (C18988 + C18989) * C13236) *
                        C30904 * C31198 -
                    ((C20442 + C20443) * C13236 + (C19699 + C19698) * C13235) *
                        C30904 * C31059) *
                       C31017) *
                      C30940 +
                  ((((C18787 + C18786) * C13235 + (C18990 + C18991) * C13236) *
                        C30904 * C31198 -
                    ((C19700 + C19701) * C13236 + (C19193 + C19192) * C13235) *
                        C30904 * C31059) *
                       C2510 +
                   (((C19701 + C19700) * C13235 +
                     (C18735 * C1283 + C20436 + C20436 + C18733 * C1301 +
                      C18737 * C1288 + C20437 + C20437 + C18734 * C1306) *
                         C13236) *
                        C30904 * C31059 -
                    ((C18992 + C18993) * C13236 + (C18991 + C18990) * C13235) *
                        C30904 * C31198) *
                       C31017) *
                      C2881)) /
                (p * q * std::sqrt(p + q));
    d2ee[29] += (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C13235 +
                    (C24650 + C24651) * C13236) *
                       C30904 * C30972 * C2510 -
                   ((C24652 + C24653) * C13236 + (C24651 + C24650) * C13235) *
                       C30904 * C30972 * C31017) *
                      C31271 +
                  (((C18987 + C18986) * C13235 + (C18988 + C18989) * C13236) *
                       C30904 * C30972 * C31017 -
                   ((C18986 + C18987) * C13236 + (C18785 + C18784) * C13235) *
                       C30904 * C30972 * C2510) *
                      C31264 +
                  (((C18787 + C18786) * C13235 + (C18990 + C18991) * C13236) *
                       C30904 * C30972 * C2510 -
                   ((C18992 + C18993) * C13236 + (C18991 + C18990) * C13235) *
                       C30904 * C30972 * C31017) *
                      C31251 +
                  (((C19337 + C19336) * C13235 +
                    (C18735 * C296 + C18968 + C18968 + C18733 * C316 +
                     C18737 * C1582 + C18969 + C18969 + C18734 * C1584) *
                        C13236) *
                       C30904 * C30972 * C31017 -
                   ((C19336 + C19337) * C13236 + (C18789 + C18788) * C13235) *
                       C30904 * C30972 * C2510) *
                      C31232)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C13235 +
                    (C24650 + C24651) * C13236) *
                       C30904 * C30972 * C31272 -
                   ((C24652 + C24653) * C13236 + (C24651 + C24650) * C13235) *
                       C30904 * C30972 * C31268 +
                   ((C24653 + C24652) * C13235 + (C25510 + C25511) * C13236) *
                       C30904 * C30972 * C31258 -
                   ((C25512 + C25513) * C13236 + (C25511 + C25510) * C13235) *
                       C30904 * C30972 * C31238) *
                      C2618 +
                  (((C18987 + C18986) * C13235 + (C18988 + C18989) * C13236) *
                       C30904 * C30972 * C31268 -
                   ((C18986 + C18987) * C13236 + (C18785 + C18784) * C13235) *
                       C30904 * C30972 * C31272 -
                   ((C20236 + C20237) * C13236 + (C18989 + C18988) * C13235) *
                       C30904 * C30972 * C31258 +
                   ((C20237 + C20236) * C13235 +
                    (C18735 * C1150 + C19936 + C19936 + C18733 * C1162 +
                     C18737 * C5909 + C19937 + C19937 + C18734 * C5911) *
                        C13236) *
                       C30904 * C30972 * C31238) *
                      C30937)) /
                    (p * q * std::sqrt(p + q));
    d2ee[30] += (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
                 (((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                      C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                         C13235 +
                     (C24650 + C24651) * C13236) *
                        C30904 * C3272 -
                    ((C25262 + C25263) * C13236 +
                     (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                      C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                         C13235) *
                        C30904 * C31059) *
                       C31013 +
                   (((C25263 + C25262) * C13235 + (C25688 + C25689) * C13236) *
                        C30904 * C31059 -
                    ((C24652 + C24653) * C13236 + (C24651 + C24650) * C13235) *
                        C30904 * C3272) *
                       C31020 +
                   (((C24653 + C24652) * C13235 + (C25510 + C25511) * C13236) *
                        C30904 * C3272 -
                    ((C26156 + C26157) * C13236 + (C25689 + C25688) * C13235) *
                        C30904 * C31059) *
                       C2878) *
                      C31183 +
                  ((((C19189 + C19188) * C13235 + (C19698 + C19699) * C13236) *
                        C30904 * C31059 -
                    ((C18986 + C18987) * C13236 + (C18785 + C18784) * C13235) *
                        C30904 * C3272) *
                       C31013 +
                   (((C18987 + C18986) * C13235 + (C18988 + C18989) * C13236) *
                        C30904 * C3272 -
                    ((C20442 + C20443) * C13236 + (C19699 + C19698) * C13235) *
                        C30904 * C31059) *
                       C31020 +
                   (((C20443 + C20442) * C13235 +
                     (C18735 * C1697 + C20576 + C20576 + C18733 * C1703 +
                      C18737 * C6465 + C20577 + C20577 + C18734 * C6467) *
                         C13236) *
                        C30904 * C31059 -
                    ((C20236 + C20237) * C13236 + (C18989 + C18988) * C13235) *
                        C30904 * C3272) *
                       C2878) *
                      C30937)) /
                (p * q * std::sqrt(p + q));
    d2ee[31] += (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C13235 +
                    (C24650 + C24651) * C13236) *
                       C30904 * C31055 -
                   ((C25262 + C25263) * C13236 +
                    (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                     C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                        C13235) *
                       C30904 * C31062 +
                   ((C18735 * C481 + C19148 + C19148 + C18733 * C501 +
                     C18737 * C2000 + C19149 + C19149 + C18734 * C2012) *
                        C13235 +
                    (C25686 + C25687) * C13236) *
                       C30904 * C3780) *
                      C31013 +
                  (((C25263 + C25262) * C13235 + (C25688 + C25689) * C13236) *
                       C30904 * C31062 -
                   ((C24652 + C24653) * C13236 + (C24651 + C24650) * C13235) *
                       C30904 * C31055 -
                   ((C25690 + C25691) * C13236 + (C25687 + C25686) * C13235) *
                       C30904 * C3780) *
                      C31020 +
                  (((C24653 + C24652) * C13235 + (C25510 + C25511) * C13236) *
                       C30904 * C31055 -
                   ((C26156 + C26157) * C13236 + (C25689 + C25688) * C13235) *
                       C30904 * C31062 +
                   ((C25691 + C25690) * C13235 +
                    (C18735 * C5624 + C25672 + C25672 + C18733 * C5630 +
                     C18737 * C6674 + C25673 + C25673 + C18734 * C6676) *
                        C13236) *
                       C30904 * C3780) *
                      C2878) *
                 C30926) /
                (p * q * std::sqrt(p + q));
    d2ee[32] += (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C13235 +
                    (C24650 + C24651) * C13236) *
                       C30904 * C3272 -
                   ((C25262 + C25263) * C13236 +
                    (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                     C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                        C13235) *
                       C30904 * C31059) *
                      C31272 +
                  (((C25263 + C25262) * C13235 + (C25688 + C25689) * C13236) *
                       C30904 * C31059 -
                   ((C24652 + C24653) * C13236 + (C24651 + C24650) * C13235) *
                       C30904 * C3272) *
                      C31268 +
                  (((C24653 + C24652) * C13235 + (C25510 + C25511) * C13236) *
                       C30904 * C3272 -
                   ((C26156 + C26157) * C13236 + (C25689 + C25688) * C13235) *
                       C30904 * C31059) *
                      C31258 +
                  (((C26157 + C26156) * C13235 +
                    (C18735 * C5625 + C26150 + C26150 + C18733 * C5631 +
                     C18737 * C5626 + C26151 + C26151 + C18734 * C5632) *
                        C13236) *
                       C30904 * C31059 -
                   ((C25512 + C25513) * C13236 + (C25511 + C25510) * C13235) *
                       C30904 * C3272) *
                      C31238) *
                 C30926) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 (((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                      C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                         C13235 +
                     (C24650 + C24651) * C13236) *
                        C30904 * C3272 -
                    ((C25262 + C25263) * C13236 +
                     (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                      C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                         C13235) *
                        C30904 * C31059) *
                       C2510 +
                   (((C25263 + C25262) * C13235 + (C25688 + C25689) * C13236) *
                        C30904 * C31059 -
                    ((C24652 + C24653) * C13236 + (C24651 + C24650) * C13235) *
                        C30904 * C3272) *
                       C31017) *
                      C31262 +
                  ((((C19189 + C19188) * C13235 + (C19698 + C19699) * C13236) *
                        C30904 * C31059 -
                    ((C18986 + C18987) * C13236 + (C18785 + C18784) * C13235) *
                        C30904 * C3272) *
                       C2510 +
                   (((C18987 + C18986) * C13235 + (C18988 + C18989) * C13236) *
                        C30904 * C3272 -
                    ((C20442 + C20443) * C13236 + (C19699 + C19698) * C13235) *
                        C30904 * C31059) *
                       C31017) *
                      C31249 +
                  ((((C18787 + C18786) * C13235 + (C18990 + C18991) * C13236) *
                        C30904 * C3272 -
                    ((C19700 + C19701) * C13236 + (C19193 + C19192) * C13235) *
                        C30904 * C31059) *
                       C2510 +
                   (((C19701 + C19700) * C13235 +
                     (C18735 * C1283 + C20436 + C20436 + C18733 * C1301 +
                      C18737 * C1288 + C20437 + C20437 + C18734 * C1306) *
                         C13236) *
                        C30904 * C31059 -
                    ((C18992 + C18993) * C13236 + (C18991 + C18990) * C13235) *
                        C30904 * C3272) *
                       C31017) *
                      C31222)) /
                    (p * q * std::sqrt(p + q)) +
                (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C13235 +
                    (C24650 + C24651) * C13236) *
                       C30904 * C31273 -
                   ((C25262 + C25263) * C13236 +
                    (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                     C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                        C13235) *
                       C30904 * C31270 +
                   ((C18735 * C481 + C19148 + C19148 + C18733 * C501 +
                     C18737 * C2000 + C19149 + C19149 + C18734 * C2012) *
                        C13235 +
                    (C25686 + C25687) * C13236) *
                       C30904 * C31261 -
                   ((C26998 + C26999) * C13236 +
                    (C18737 * C2001 + C20954 + C20954 + C18734 * C2013 +
                     C18735 * C2000 + C20955 + C20955 + C18733 * C2012) *
                        C13235) *
                       C30904 * C31244) *
                      C2510 +
                  (((C25263 + C25262) * C13235 + (C25688 + C25689) * C13236) *
                       C30904 * C31270 -
                   ((C24652 + C24653) * C13236 + (C24651 + C24650) * C13235) *
                       C30904 * C31273 -
                   ((C25690 + C25691) * C13236 + (C25687 + C25686) * C13235) *
                       C30904 * C31261 +
                   ((C26999 + C26998) * C13235 +
                    (C18735 * C6307 + C26992 + C26992 + C18733 * C6313 +
                     C18737 * C6309 + C26993 + C26993 + C18734 * C6315) *
                        C13236) *
                       C30904 * C31244) *
                      C31017) *
                 C30926) /
                    (p * q * std::sqrt(p + q));
    d2ee[33] += (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
                 (((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                      C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                         C13235 +
                     (C24650 + C24651) * C13236) *
                        C30904 * C31055 -
                    ((C25262 + C25263) * C13236 +
                     (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                      C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                         C13235) *
                        C30904 * C31062 +
                    ((C18735 * C481 + C19148 + C19148 + C18733 * C501 +
                      C18737 * C2000 + C19149 + C19149 + C18734 * C2012) *
                         C13235 +
                     (C25686 + C25687) * C13236) *
                        C30904 * C3780) *
                       C2510 +
                   (((C25263 + C25262) * C13235 + (C25688 + C25689) * C13236) *
                        C30904 * C31062 -
                    ((C24652 + C24653) * C13236 + (C24651 + C24650) * C13235) *
                        C30904 * C31055 -
                    ((C25690 + C25691) * C13236 + (C25687 + C25686) * C13235) *
                        C30904 * C3780) *
                       C31017) *
                      C31183 +
                  ((((C19189 + C19188) * C13235 + (C19698 + C19699) * C13236) *
                        C30904 * C31062 -
                    ((C18986 + C18987) * C13236 + (C18785 + C18784) * C13235) *
                        C30904 * C31055 -
                    ((C21164 + C21165) * C13236 + (C19191 + C19190) * C13235) *
                        C30904 * C3780) *
                       C2510 +
                   (((C18987 + C18986) * C13235 + (C18988 + C18989) * C13236) *
                        C30904 * C31055 -
                    ((C20442 + C20443) * C13236 + (C19699 + C19698) * C13235) *
                        C30904 * C31062 +
                    ((C21165 + C21164) * C13235 +
                     (C18735 * C1287 + C20094 + C20094 + C18733 * C1305 +
                      C18737 * C6572 + C20095 + C20095 + C18734 * C6574) *
                         C13236) *
                        C30904 * C3780) *
                       C31017) *
                      C30937)) /
                (p * q * std::sqrt(p + q));
    d2ee[34] += (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                 (((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                      C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                         C13235 +
                     (C24650 + C24651) * C13236) *
                        C30904 * C3272 -
                    ((C25262 + C25263) * C13236 +
                     (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                      C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                         C13235) *
                        C30904 * C31059) *
                       C2510 +
                   (((C25263 + C25262) * C13235 + (C25688 + C25689) * C13236) *
                        C30904 * C31059 -
                    ((C24652 + C24653) * C13236 + (C24651 + C24650) * C13235) *
                        C30904 * C3272) *
                       C31017) *
                      C31262 +
                  ((((C19189 + C19188) * C13235 + (C19698 + C19699) * C13236) *
                        C30904 * C31059 -
                    ((C18986 + C18987) * C13236 + (C18785 + C18784) * C13235) *
                        C30904 * C3272) *
                       C2510 +
                   (((C18987 + C18986) * C13235 + (C18988 + C18989) * C13236) *
                        C30904 * C3272 -
                    ((C20442 + C20443) * C13236 + (C19699 + C19698) * C13235) *
                        C30904 * C31059) *
                       C31017) *
                      C31249 +
                  ((((C18787 + C18786) * C13235 + (C18990 + C18991) * C13236) *
                        C30904 * C3272 -
                    ((C19700 + C19701) * C13236 + (C19193 + C19192) * C13235) *
                        C30904 * C31059) *
                       C2510 +
                   (((C19701 + C19700) * C13235 +
                     (C18735 * C1283 + C20436 + C20436 + C18733 * C1301 +
                      C18737 * C1288 + C20437 + C20437 + C18734 * C1306) *
                         C13236) *
                        C30904 * C31059 -
                    ((C18992 + C18993) * C13236 + (C18991 + C18990) * C13235) *
                        C30904 * C3272) *
                       C31017) *
                      C31222)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C13235 +
                    (C24650 + C24651) * C13236) *
                       C30904 * C3272 -
                   ((C25262 + C25263) * C13236 +
                    (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                     C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                        C13235) *
                       C30904 * C31059) *
                      C31272 +
                  (((C25263 + C25262) * C13235 + (C25688 + C25689) * C13236) *
                       C30904 * C31059 -
                   ((C24652 + C24653) * C13236 + (C24651 + C24650) * C13235) *
                       C30904 * C3272) *
                      C31268 +
                  (((C24653 + C24652) * C13235 + (C25510 + C25511) * C13236) *
                       C30904 * C3272 -
                   ((C26156 + C26157) * C13236 + (C25689 + C25688) * C13235) *
                       C30904 * C31059) *
                      C31258 +
                  (((C26157 + C26156) * C13235 +
                    (C18735 * C5625 + C26150 + C26150 + C18733 * C5631 +
                     C18737 * C5626 + C26151 + C26151 + C18734 * C5632) *
                        C13236) *
                       C30904 * C31059 -
                   ((C25512 + C25513) * C13236 + (C25511 + C25510) * C13235) *
                       C30904 * C3272) *
                      C31238) *
                 C30926) /
                    (p * q * std::sqrt(p + q));
    d2ee[35] += (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C13235 +
                    (C24650 + C24651) * C13236) *
                       C30904 * C30972 * C1414 -
                   ((C24652 + C24653) * C13236 + (C24651 + C24650) * C13235) *
                       C30904 * C30972 * C1415 +
                   ((C24653 + C24652) * C13235 + (C25510 + C25511) * C13236) *
                       C30904 * C30972 * C1416 -
                   ((C25512 + C25513) * C13236 + (C25511 + C25510) * C13235) *
                       C30904 * C30972 * C31238) *
                      C31183 +
                  (((C18987 + C18986) * C13235 + (C18988 + C18989) * C13236) *
                       C30904 * C30972 * C1415 -
                   ((C18986 + C18987) * C13236 + (C18785 + C18784) * C13235) *
                       C30904 * C30972 * C1414 -
                   ((C20236 + C20237) * C13236 + (C18989 + C18988) * C13235) *
                       C30904 * C30972 * C1416 +
                   ((C20237 + C20236) * C13235 +
                    (C18735 * C1150 + C19936 + C19936 + C18733 * C1162 +
                     C18737 * C5909 + C19937 + C19937 + C18734 * C5911) *
                        C13236) *
                       C30904 * C30972 * C31238) *
                      C30937)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C13235 +
                    (C24650 + C24651) * C13236) *
                       C30904 * C30972 * C31197 -
                   ((C24652 + C24653) * C13236 + (C24651 + C24650) * C13235) *
                       C30904 * C30972 * C31017) *
                      C654 +
                  (((C18987 + C18986) * C13235 + (C18988 + C18989) * C13236) *
                       C30904 * C30972 * C31017 -
                   ((C18986 + C18987) * C13236 + (C18785 + C18784) * C13235) *
                       C30904 * C30972 * C31197) *
                      C655 +
                  (((C18787 + C18786) * C13235 + (C18990 + C18991) * C13236) *
                       C30904 * C30972 * C31197 -
                   ((C18992 + C18993) * C13236 + (C18991 + C18990) * C13235) *
                       C30904 * C30972 * C31017) *
                      C656 +
                  (((C19337 + C19336) * C13235 +
                    (C18735 * C296 + C18968 + C18968 + C18733 * C316 +
                     C18737 * C1582 + C18969 + C18969 + C18734 * C1584) *
                        C13236) *
                       C30904 * C30972 * C31017 -
                   ((C19336 + C19337) * C13236 + (C18789 + C18788) * C13235) *
                       C30904 * C30972 * C31197) *
                      C31232)) /
                    (p * q * std::sqrt(p + q)) +
                (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                 (((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                      C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                         C13235 +
                     (C24650 + C24651) * C13236) *
                        C30904 * C1818 -
                    ((C25262 + C25263) * C13236 +
                     (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                      C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                         C13235) *
                        C30904 * C1819 +
                    ((C18735 * C481 + C19148 + C19148 + C18733 * C501 +
                      C18737 * C2000 + C19149 + C19149 + C18734 * C2012) *
                         C13235 +
                     (C25686 + C25687) * C13236) *
                        C30904 * C31231) *
                       C31197 +
                   (((C25263 + C25262) * C13235 + (C25688 + C25689) * C13236) *
                        C30904 * C1819 -
                    ((C24652 + C24653) * C13236 + (C24651 + C24650) * C13235) *
                        C30904 * C1818 -
                    ((C25690 + C25691) * C13236 + (C25687 + C25686) * C13235) *
                        C30904 * C31231) *
                       C31017) *
                      C31183 +
                  ((((C19189 + C19188) * C13235 + (C19698 + C19699) * C13236) *
                        C30904 * C1819 -
                    ((C18986 + C18987) * C13236 + (C18785 + C18784) * C13235) *
                        C30904 * C1818 -
                    ((C21164 + C21165) * C13236 + (C19191 + C19190) * C13235) *
                        C30904 * C31231) *
                       C31197 +
                   (((C18987 + C18986) * C13235 + (C18988 + C18989) * C13236) *
                        C30904 * C1818 -
                    ((C20442 + C20443) * C13236 + (C19699 + C19698) * C13235) *
                        C30904 * C1819 +
                    ((C21165 + C21164) * C13235 +
                     (C18735 * C1287 + C20094 + C20094 + C18733 * C1305 +
                      C18737 * C6572 + C20095 + C20095 + C18734 * C6574) *
                         C13236) *
                        C30904 * C31231) *
                       C31017) *
                      C30937)) /
                    (p * q * std::sqrt(p + q));
    d2ee[36] += (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C13235 +
                    (C24650 + C24651) * C13236) *
                       C30904 * C31198 -
                   ((C25262 + C25263) * C13236 +
                    (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                     C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                        C13235) *
                       C30904 * C31059) *
                      C1414 +
                  (((C25263 + C25262) * C13235 + (C25688 + C25689) * C13236) *
                       C30904 * C31059 -
                   ((C24652 + C24653) * C13236 + (C24651 + C24650) * C13235) *
                       C30904 * C31198) *
                      C1415 +
                  (((C24653 + C24652) * C13235 + (C25510 + C25511) * C13236) *
                       C30904 * C31198 -
                   ((C26156 + C26157) * C13236 + (C25689 + C25688) * C13235) *
                       C30904 * C31059) *
                      C1416 +
                  (((C26157 + C26156) * C13235 +
                    (C18735 * C5625 + C26150 + C26150 + C18733 * C5631 +
                     C18737 * C5626 + C26151 + C26151 + C18734 * C5632) *
                        C13236) *
                       C30904 * C31059 -
                   ((C25512 + C25513) * C13236 + (C25511 + C25510) * C13235) *
                       C30904 * C31198) *
                      C31238) *
                 C30926) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 (((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                      C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                         C13235 +
                     (C24650 + C24651) * C13236) *
                        C30904 * C31198 -
                    ((C25262 + C25263) * C13236 +
                     (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                      C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                         C13235) *
                        C30904 * C31059) *
                       C31197 +
                   (((C25263 + C25262) * C13235 +
                     (C18735 * C1285 + C20091 + C20091 + C18733 * C1303 +
                      C18737 * C1286 + C20090 + C20090 + C18734 * C1304) *
                         C13236) *
                        C30904 * C31059 -
                    ((C24652 + C24653) * C13236 + (C24651 + C24650) * C13235) *
                        C30904 * C31198) *
                       C31017) *
                      C286 +
                  ((((C19189 + C19188) * C13235 + (C19698 + C19699) * C13236) *
                        C30904 * C31059 -
                    ((C18986 + C18987) * C13236 + (C18785 + C18784) * C13235) *
                        C30904 * C31198) *
                       C31197 +
                   (((C18987 + C18986) * C13235 + (C18988 + C18989) * C13236) *
                        C30904 * C31198 -
                    ((C20442 + C20443) * C13236 + (C19699 + C19698) * C13235) *
                        C30904 * C31059) *
                       C31017) *
                      C287 +
                  ((((C18787 + C18786) * C13235 + (C18990 + C18991) * C13236) *
                        C30904 * C31198 -
                    ((C19700 + C19701) * C13236 + (C19193 + C19192) * C13235) *
                        C30904 * C31059) *
                       C31197 +
                   (((C19701 + C19700) * C13235 +
                     (C18735 * C1283 + C20436 + C20436 + C18733 * C1301 +
                      C18737 * C1288 + C20437 + C20437 + C18734 * C1306) *
                         C13236) *
                        C30904 * C31059 -
                    ((C18992 + C18993) * C13236 + (C18991 + C18990) * C13235) *
                        C30904 * C31198) *
                       C31017) *
                      C31222)) /
                    (p * q * std::sqrt(p + q)) +
                (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C13235 +
                    (C24650 + C24651) * C13236) *
                       C30904 * C2282 -
                   ((C25262 + C25263) * C13236 +
                    (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                     C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                        C13235) *
                       C30904 * C2283 +
                   ((C18735 * C481 + C19148 + C19148 + C18733 * C501 +
                     C18737 * C2000 + C19149 + C19149 + C18734 * C2012) *
                        C13235 +
                    (C25686 + C25687) * C13236) *
                       C30904 * C2284 -
                   ((C26998 + C26999) * C13236 +
                    (C18737 * C2001 + C20954 + C20954 + C18734 * C2013 +
                     C18735 * C2000 + C20955 + C20955 + C18733 * C2012) *
                        C13235) *
                       C30904 * C31244) *
                      C31197 +
                  (((C25263 + C25262) * C13235 + (C25688 + C25689) * C13236) *
                       C30904 * C2283 -
                   ((C24652 + C24653) * C13236 + (C24651 + C24650) * C13235) *
                       C30904 * C2282 -
                   ((C25690 + C25691) * C13236 + (C25687 + C25686) * C13235) *
                       C30904 * C2284 +
                   ((C26999 + C26998) * C13235 +
                    (C18735 * C6307 + C26992 + C26992 + C18733 * C6313 +
                     C18737 * C6309 + C26993 + C26993 + C18734 * C6315) *
                        C13236) *
                       C30904 * C31244) *
                      C31017) *
                 C30926) /
                    (p * q * std::sqrt(p + q));
    d2ee[37] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             (((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                   C13235 +
               (C18735 * C291 + C18945 + C18945 + C18733 * C311 +
                C18737 * C924 + C18944 + C18944 + C18734 * C934) *
                   C13236) *
                  C30904 * C30972 * C30954 * C108 -
              ((C18986 + C18987) * C13236 + (C18785 + C18784) * C13235) *
                  C30904 * C30972 * C30954 * C109 +
              ((C18787 + C18786) * C13235 + (C18990 + C18991) * C13236) *
                  C30904 * C30972 * C30954 * C110 -
              ((C19336 + C19337) * C13236 + (C18789 + C18788) * C13235) *
                  C30904 * C30972 * C30954 * C111 +
              ((C18791 + C18790) * C13235 +
               (C18735 * C297 + C19330 + C19330 + C18733 * C317 +
                C18737 * C928 + C19331 + C19331 + C18734 * C938) *
                   C13236) *
                  C30904 * C30972 * C30954 * C112) +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                 C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                    C13235 +
                (C24650 + C24651) * C13236) *
                   C30904 * C30972 * C31265 -
               ((C24652 + C24653) * C13236 + (C24651 + C24650) * C13235) *
                   C30904 * C30972 * C31253 +
               ((C24653 + C24652) * C13235 +
                (C18735 * C1148 + C19933 + C19933 + C18733 * C1160 +
                 C18737 * C1696 + C19932 + C19932 + C18734 * C1702) *
                    C13236) *
                   C30904 * C30972 * C31228) *
                  C286 +
              (((C18987 + C18986) * C13235 + (C18988 + C18989) * C13236) *
                   C30904 * C30972 * C31253 -
               ((C18986 + C18987) * C13236 + (C18785 + C18784) * C13235) *
                   C30904 * C30972 * C31265 -
               ((C20236 + C20237) * C13236 + (C18989 + C18988) * C13235) *
                   C30904 * C30972 * C31228) *
                  C287 +
              (((C18787 + C18786) * C13235 + (C18990 + C18991) * C13236) *
                   C30904 * C30972 * C31265 -
               ((C18992 + C18993) * C13236 + (C18991 + C18990) * C13235) *
                   C30904 * C30972 * C31253 +
               ((C18993 + C18992) * C13235 +
                (C18735 * C1146 + C20230 + C20230 + C18733 * C1158 +
                 C18737 * C1698 + C20231 + C20231 + C18734 * C1704) *
                    C13236) *
                   C30904 * C30972 * C31228) *
                  C31222)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 + C18737 * C480 +
             C18741 + C18741 + C18734 * C500) *
                C13235 +
            (C24650 + C24651) * C13236) *
               C30904 * C31266 -
           ((C18737 * C1282 + C19675 + C19675 + C18734 * C1300 + C18735 * C924 +
             C19674 + C19674 + C18733 * C934) *
                C13236 +
            (C18737 * C481 + C19146 + C19146 + C18734 * C501 + C18735 * C480 +
             C19147 + C19147 + C18733 * C500) *
                C13235) *
               C30904 * C31255 +
           ((C18735 * C481 + C19148 + C19148 + C18733 * C501 + C18737 * C2000 +
             C19149 + C19149 + C18734 * C2012) *
                C13235 +
            (C18735 * C1282 + C20087 + C20087 + C18733 * C1300 +
             C18737 * C2400 + C20086 + C20086 + C18734 * C2406) *
                C13236) *
               C30904 * C31231) *
              C30954 * C286 +
          (((C19189 + C19188) * C13235 + (C19698 + C19699) * C13236) * C30904 *
               C31255 -
           ((C18986 + C18987) * C13236 + (C18785 + C18784) * C13235) * C30904 *
               C31266 -
           ((C21164 + C21165) * C13236 + (C19191 + C19190) * C13235) * C30904 *
               C31231) *
              C30954 * C287 +
          (((C18787 + C18786) * C13235 + (C18990 + C18991) * C13236) * C30904 *
               C31266 -
           ((C19700 + C19701) * C13236 + (C19193 + C19192) * C13235) * C30904 *
               C31255 +
           ((C19195 + C19194) * C13235 +
            (C18735 * C1280 + C21158 + C21158 + C18733 * C1298 +
             C18737 * C2402 + C21159 + C21159 + C18734 * C2408) *
                C13236) *
               C30904 * C31231) *
              C30954 * C31222)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 + C18737 * C480 +
             C18741 + C18741 + C18734 * C500) *
                C13235 +
            (C24650 + C24651) * C13236) *
               C30904 * C30972 * C1072 -
           ((C24652 + C24653) * C13236 + (C24651 + C24650) * C13235) * C30904 *
               C30972 * C1073 +
           ((C24653 + C24652) * C13235 +
            (C18735 * C1148 + C19933 + C19933 + C18733 * C1160 +
             C18737 * C1696 + C19932 + C19932 + C18734 * C1702) *
                C13236) *
               C30904 * C30972 * C31228) *
              C31262 +
          (((C18987 + C18986) * C13235 + (C18988 + C18989) * C13236) * C30904 *
               C30972 * C1073 -
           ((C18986 + C18987) * C13236 + (C18785 + C18784) * C13235) * C30904 *
               C30972 * C1072 -
           ((C20236 + C20237) * C13236 + (C18989 + C18988) * C13235) * C30904 *
               C30972 * C31228) *
              C31249 +
          (((C18787 + C18786) * C13235 + (C18990 + C18991) * C13236) * C30904 *
               C30972 * C1072 -
           ((C18992 + C18993) * C13236 + (C18991 + C18990) * C13235) * C30904 *
               C30972 * C1073 +
           ((C18993 + C18992) * C13235 +
            (C18735 * C1146 + C20230 + C20230 + C18733 * C1158 +
             C18737 * C1698 + C20231 + C20231 + C18734 * C1704) *
                C13236) *
               C30904 * C30972 * C31228) *
              C31222)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C18735 * C115 + C18740 + C18740 + C18733 * C129 + C18737 * C480 +
            C18741 + C18741 + C18734 * C500) *
               C13235 +
           (C24650 + C24651) * C13236) *
              C30904 * C30972 * C1140 -
          ((C24652 + C24653) * C13236 + (C24651 + C24650) * C13235) * C30904 *
              C30972 * C1141 +
          ((C24653 + C24652) * C13235 + (C25510 + C25511) * C13236) * C30904 *
              C30972 * C1142 -
          ((C25512 + C25513) * C13236 + (C25511 + C25510) * C13235) * C30904 *
              C30972 * C1143 +
          ((C25513 + C25512) * C13235 +
           (C18735 * C5496 + C25500 + C25500 + C18733 * C5500 + C18737 * C6016 +
            C25501 + C25501 + C18734 * C6018) *
               C13236) *
              C30904 * C30972 * C1144) *
         C30926) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 + C18737 * C480 +
             C18741 + C18741 + C18734 * C500) *
                C13235 +
            (C24650 + C24651) * C13236) *
               C30904 * C31266 -
           ((C25262 + C25263) * C13236 +
            (C18737 * C481 + C19146 + C19146 + C18734 * C501 + C18735 * C480 +
             C19147 + C19147 + C18733 * C500) *
                C13235) *
               C30904 * C31255 +
           ((C18735 * C481 + C19148 + C19148 + C18733 * C501 + C18737 * C2000 +
             C19149 + C19149 + C18734 * C2012) *
                C13235 +
            (C25686 + C25687) * C13236) *
               C30904 * C31231) *
              C1072 +
          (((C25263 + C25262) * C13235 + (C25688 + C25689) * C13236) * C30904 *
               C31255 -
           ((C24652 + C24653) * C13236 + (C24651 + C24650) * C13235) * C30904 *
               C31266 -
           ((C25690 + C25691) * C13236 + (C25687 + C25686) * C13235) * C30904 *
               C31231) *
              C1073 +
          (((C24653 + C24652) * C13235 + (C25510 + C25511) * C13236) * C30904 *
               C31266 -
           ((C18737 * C5624 + C20575 + C20575 + C18734 * C5630 +
             C18735 * C1696 + C20574 + C20574 + C18733 * C1702) *
                C13236 +
            (C25689 + C25688) * C13235) *
               C30904 * C31255 +
           ((C25691 + C25690) * C13235 +
            (C18735 * C5624 + C25672 + C25672 + C18733 * C5630 +
             C18737 * C6674 + C25673 + C25673 + C18734 * C6676) *
                C13236) *
               C30904 * C31231) *
              C31228) *
         C30926) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 + C18737 * C480 +
             C18741 + C18741 + C18734 * C500) *
                C13235 +
            (C24650 + C24651) * C13236) *
               C30904 * C1818 -
           ((C25262 + C25263) * C13236 +
            (C18737 * C481 + C19146 + C19146 + C18734 * C501 + C18735 * C480 +
             C19147 + C19147 + C18733 * C500) *
                C13235) *
               C30904 * C1819 +
           ((C18735 * C481 + C19148 + C19148 + C18733 * C501 + C18737 * C2000 +
             C19149 + C19149 + C18734 * C2012) *
                C13235 +
            (C25686 + C25687) * C13236) *
               C30904 * C31231) *
              C30954 * C31262 +
          (((C19189 + C19188) * C13235 + (C19698 + C19699) * C13236) * C30904 *
               C1819 -
           ((C18986 + C18987) * C13236 + (C18785 + C18784) * C13235) * C30904 *
               C1818 -
           ((C21164 + C21165) * C13236 + (C19191 + C19190) * C13235) * C30904 *
               C31231) *
              C30954 * C31249 +
          (((C18787 + C18786) * C13235 + (C18990 + C18991) * C13236) * C30904 *
               C1818 -
           ((C19700 + C19701) * C13236 + (C19193 + C19192) * C13235) * C30904 *
               C1819 +
           ((C19195 + C19194) * C13235 +
            (C18735 * C1280 + C21158 + C21158 + C18733 * C1298 +
             C18737 * C2402 + C21159 + C21159 + C18734 * C2408) *
                C13236) *
               C30904 * C31231) *
              C30954 * C31222)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 + C18737 * C480 +
             C18741 + C18741 + C18734 * C500) *
                C13235 +
            (C24650 + C24651) * C13236) *
               C30904 * C1818 -
           ((C25262 + C25263) * C13236 +
            (C18737 * C481 + C19146 + C19146 + C18734 * C501 + C18735 * C480 +
             C19147 + C19147 + C18733 * C500) *
                C13235) *
               C30904 * C1819 +
           ((C18735 * C481 + C19148 + C19148 + C18733 * C501 + C18737 * C2000 +
             C19149 + C19149 + C18734 * C2012) *
                C13235 +
            (C25686 + C25687) * C13236) *
               C30904 * C31231) *
              C31265 +
          (((C25263 + C25262) * C13235 + (C25688 + C25689) * C13236) * C30904 *
               C1819 -
           ((C24652 + C24653) * C13236 + (C24651 + C24650) * C13235) * C30904 *
               C1818 -
           ((C25690 + C25691) * C13236 + (C25687 + C25686) * C13235) * C30904 *
               C31231) *
              C31253 +
          (((C24653 + C24652) * C13235 + (C25510 + C25511) * C13236) * C30904 *
               C1818 -
           ((C26156 + C26157) * C13236 + (C25689 + C25688) * C13235) * C30904 *
               C1819 +
           ((C25691 + C25690) * C13235 +
            (C18735 * C5624 + C25672 + C25672 + C18733 * C5630 +
             C18737 * C6674 + C25673 + C25673 + C18734 * C6676) *
                C13236) *
               C30904 * C31231) *
              C31228) *
         C30926) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C18735 * C115 + C18740 + C18740 + C18733 * C129 + C18737 * C480 +
            C18741 + C18741 + C18734 * C500) *
               C13235 +
           (C24650 + C24651) * C13236) *
              C30904 * C1993 -
          ((C25262 + C25263) * C13236 +
           (C18737 * C481 + C19146 + C19146 + C18734 * C501 + C18735 * C480 +
            C19147 + C19147 + C18733 * C500) *
               C13235) *
              C30904 * C1994 +
          ((C18735 * C481 + C19148 + C19148 + C18733 * C501 + C18737 * C2000 +
            C19149 + C19149 + C18734 * C2012) *
               C13235 +
           (C25686 + C25687) * C13236) *
              C30904 * C1995 -
          ((C18737 * C6308 + C21439 + C21439 + C18734 * C6314 + C18735 * C2400 +
            C21438 + C21438 + C18733 * C2406) *
               C13236 +
           (C18737 * C2001 + C20954 + C20954 + C18734 * C2013 + C18735 * C2000 +
            C20955 + C20955 + C18733 * C2012) *
               C13235) *
              C30904 * C1996 +
          ((C18735 * C2001 + C20956 + C20956 + C18733 * C2013 +
            C18737 * C10549 + C20957 + C20957 + C18734 * C10553) *
               C13235 +
           (C18735 * C6308 + C26532 + C26532 + C18733 * C6314 +
            C18737 * C10915 + C26533 + C26533 + C18734 * C10917) *
               C13236) *
              C30904 * C1997) *
         C30954 * C30926) /
            (p * q * std::sqrt(p + q));
    d2ee[38] += (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 (((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                      C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                         C13235 +
                     (C24650 + C24651) * C13236) *
                        C30904 * C31198 -
                    ((C25262 + C25263) * C13236 +
                     (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                      C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                         C13235) *
                        C30904 * C31059) *
                       C1072 +
                   (((C25263 + C25262) * C13235 + (C25688 + C25689) * C13236) *
                        C30904 * C31059 -
                    ((C24652 + C24653) * C13236 + (C24651 + C24650) * C13235) *
                        C30904 * C31198) *
                       C1073 +
                   (((C24653 + C24652) * C13235 + (C25510 + C25511) * C13236) *
                        C30904 * C31198 -
                    ((C18737 * C5624 + C20575 + C20575 + C18734 * C5630 +
                      C18735 * C1696 + C20574 + C20574 + C18733 * C1702) *
                         C13236 +
                     (C25689 + C25688) * C13235) *
                        C30904 * C31059) *
                       C31228) *
                      C31183 +
                  ((((C19189 + C19188) * C13235 + (C19698 + C19699) * C13236) *
                        C30904 * C31059 -
                    ((C18986 + C18987) * C13236 + (C18785 + C18784) * C13235) *
                        C30904 * C31198) *
                       C1072 +
                   (((C18987 + C18986) * C13235 + (C18988 + C18989) * C13236) *
                        C30904 * C31198 -
                    ((C20442 + C20443) * C13236 + (C19699 + C19698) * C13235) *
                        C30904 * C31059) *
                       C1073 +
                   (((C20443 + C20442) * C13235 +
                     (C18735 * C1697 + C20576 + C20576 + C18733 * C1703 +
                      C18737 * C6465 + C20577 + C20577 + C18734 * C6467) *
                         C13236) *
                        C30904 * C31059 -
                    ((C20236 + C20237) * C13236 + (C18989 + C18988) * C13235) *
                        C30904 * C31198) *
                       C31228) *
                      C30937)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C13235 +
                    (C24650 + C24651) * C13236) *
                       C30904 * C31198 -
                   ((C18737 * C1282 + C19675 + C19675 + C18734 * C1300 +
                     C18735 * C924 + C19674 + C19674 + C18733 * C934) *
                        C13236 +
                    (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                     C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                        C13235) *
                       C30904 * C31059) *
                      C30954 * C654 +
                  (((C19189 + C19188) * C13235 + (C19698 + C19699) * C13236) *
                       C30904 * C31059 -
                   ((C18986 + C18987) * C13236 + (C18785 + C18784) * C13235) *
                       C30904 * C31198) *
                      C30954 * C655 +
                  (((C18787 + C18786) * C13235 + (C18990 + C18991) * C13236) *
                       C30904 * C31198 -
                   ((C19700 + C19701) * C13236 + (C19193 + C19192) * C13235) *
                       C30904 * C31059) *
                      C30954 * C656 +
                  (((C19479 + C19478) * C13235 +
                    (C18735 * C927 + C19688 + C19688 + C18733 * C937 +
                     C18737 * C2168 + C19689 + C19689 + C18734 * C2170) *
                        C13236) *
                       C30904 * C31059 -
                   ((C19336 + C19337) * C13236 + (C18789 + C18788) * C13235) *
                       C30904 * C31198) *
                      C30954 * C31232)) /
                    (p * q * std::sqrt(p + q)) +
                (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C13235 +
                    (C24650 + C24651) * C13236) *
                       C30904 * C2282 -
                   ((C25262 + C25263) * C13236 +
                    (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                     C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                        C13235) *
                       C30904 * C2283 +
                   ((C18735 * C481 + C19148 + C19148 + C18733 * C501 +
                     C18737 * C2000 + C19149 + C19149 + C18734 * C2012) *
                        C13235 +
                    (C25686 + C25687) * C13236) *
                       C30904 * C2284 -
                   ((C18737 * C6308 + C21439 + C21439 + C18734 * C6314 +
                     C18735 * C2400 + C21438 + C21438 + C18733 * C2406) *
                        C13236 +
                    (C18737 * C2001 + C20954 + C20954 + C18734 * C2013 +
                     C18735 * C2000 + C20955 + C20955 + C18733 * C2012) *
                        C13235) *
                       C30904 * C31244) *
                      C30954 * C31183 +
                  (((C19189 + C19188) * C13235 + (C19698 + C19699) * C13236) *
                       C30904 * C2283 -
                   ((C18986 + C18987) * C13236 + (C18785 + C18784) * C13235) *
                       C30904 * C2282 -
                   ((C21164 + C21165) * C13236 + (C19191 + C19190) * C13235) *
                       C30904 * C2284 +
                   ((C21307 + C21306) * C13235 +
                    (C18735 * C2401 + C21440 + C21440 + C18733 * C2407 +
                     C18737 * C10707 + C21441 + C21441 + C18734 * C10709) *
                        C13236) *
                       C30904 * C31244) *
                      C30954 * C30937)) /
                    (p * q * std::sqrt(p + q));
    d2ee[39] += (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C13235 +
                    (C24650 + C24651) * C13236) *
                       C30904 * C30972 * C31265 -
                   ((C24652 + C24653) * C13236 + (C24651 + C24650) * C13235) *
                       C30904 * C30972 * C31253 +
                   ((C24653 + C24652) * C13235 +
                    (C18735 * C1148 + C19933 + C19933 + C18733 * C1160 +
                     C18737 * C1696 + C19932 + C19932 + C18734 * C1702) *
                        C13236) *
                       C30904 * C30972 * C31228) *
                      C286 +
                  (((C18987 + C18986) * C13235 + (C18988 + C18989) * C13236) *
                       C30904 * C30972 * C31253 -
                   ((C18986 + C18987) * C13236 + (C18785 + C18784) * C13235) *
                       C30904 * C30972 * C31265 -
                   ((C20236 + C20237) * C13236 + (C18989 + C18988) * C13235) *
                       C30904 * C30972 * C31228) *
                      C287 +
                  (((C18787 + C18786) * C13235 + (C18990 + C18991) * C13236) *
                       C30904 * C30972 * C31265 -
                   ((C18992 + C18993) * C13236 + (C18991 + C18990) * C13235) *
                       C30904 * C30972 * C31253 +
                   ((C18993 + C18992) * C13235 +
                    (C18735 * C1146 + C20230 + C20230 + C18733 * C1158 +
                     C18737 * C1698 + C20231 + C20231 + C18734 * C1704) *
                        C13236) *
                       C30904 * C30972 * C31228) *
                      C31222)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                 (((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                    C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                       C13235 +
                   (C18735 * C291 + C18945 + C18945 + C18733 * C311 +
                    C18737 * C924 + C18944 + C18944 + C18734 * C934) *
                       C13236) *
                      C30904 * C30972 * C30954 * C108 -
                  ((C18986 + C18987) * C13236 + (C18785 + C18784) * C13235) *
                      C30904 * C30972 * C30954 * C109 +
                  ((C18787 + C18786) * C13235 + (C18990 + C18991) * C13236) *
                      C30904 * C30972 * C30954 * C110 -
                  ((C19336 + C19337) * C13236 + (C18789 + C18788) * C13235) *
                      C30904 * C30972 * C30954 * C111 +
                  ((C18791 + C18790) * C13235 +
                   (C18735 * C297 + C19330 + C19330 + C18733 * C317 +
                    C18737 * C928 + C19331 + C19331 + C18734 * C938) *
                       C13236) *
                      C30904 * C30972 * C30954 * C112)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C13235 +
                    (C24650 + C24651) * C13236) *
                       C30904 * C30972 * C1072 -
                   ((C24652 + C24653) * C13236 + (C24651 + C24650) * C13235) *
                       C30904 * C30972 * C1073 +
                   ((C24653 + C24652) * C13235 +
                    (C18735 * C1148 + C19933 + C19933 + C18733 * C1160 +
                     C18737 * C1696 + C19932 + C19932 + C18734 * C1702) *
                        C13236) *
                       C30904 * C30972 * C31228) *
                      C31262 +
                  (((C18987 + C18986) * C13235 + (C18988 + C18989) * C13236) *
                       C30904 * C30972 * C1073 -
                   ((C18986 + C18987) * C13236 + (C18785 + C18784) * C13235) *
                       C30904 * C30972 * C1072 -
                   ((C20236 + C20237) * C13236 + (C18989 + C18988) * C13235) *
                       C30904 * C30972 * C31228) *
                      C31249 +
                  (((C18787 + C18786) * C13235 + (C18990 + C18991) * C13236) *
                       C30904 * C30972 * C1072 -
                   ((C18992 + C18993) * C13236 + (C18991 + C18990) * C13235) *
                       C30904 * C30972 * C1073 +
                   ((C18993 + C18992) * C13235 +
                    (C18735 * C1146 + C20230 + C20230 + C18733 * C1158 +
                     C18737 * C1698 + C20231 + C20231 + C18734 * C1704) *
                        C13236) *
                       C30904 * C30972 * C31228) *
                      C31222)) /
                    (p * q * std::sqrt(p + q)) +
                (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                 (((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                    C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                       C13235 +
                   (C24650 + C24651) * C13236) *
                      C30904 * C30972 * C1140 -
                  ((C24652 + C24653) * C13236 + (C24651 + C24650) * C13235) *
                      C30904 * C30972 * C1141 +
                  ((C24653 + C24652) * C13235 + (C25510 + C25511) * C13236) *
                      C30904 * C30972 * C1142 -
                  ((C25512 + C25513) * C13236 + (C25511 + C25510) * C13235) *
                      C30904 * C30972 * C1143 +
                  ((C25513 + C25512) * C13235 +
                   (C18735 * C5496 + C25500 + C25500 + C18733 * C5500 +
                    C18737 * C6016 + C25501 + C25501 + C18734 * C6018) *
                       C13236) *
                      C30904 * C30972 * C1144) *
                 C30926) /
                    (p * q * std::sqrt(p + q)) +
                (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C13235 +
                    (C24650 + C24651) * C13236) *
                       C30904 * C1818 -
                   ((C25262 + C25263) * C13236 +
                    (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                     C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                        C13235) *
                       C30904 * C1819 +
                   ((C18735 * C481 + C19148 + C19148 + C18733 * C501 +
                     C18737 * C2000 + C19149 + C19149 + C18734 * C2012) *
                        C13235 +
                    (C25686 + C25687) * C13236) *
                       C30904 * C31231) *
                      C30954 * C31262 +
                  (((C19189 + C19188) * C13235 + (C19698 + C19699) * C13236) *
                       C30904 * C1819 -
                   ((C18986 + C18987) * C13236 + (C18785 + C18784) * C13235) *
                       C30904 * C1818 -
                   ((C21164 + C21165) * C13236 + (C19191 + C19190) * C13235) *
                       C30904 * C31231) *
                      C30954 * C31249 +
                  (((C18787 + C18786) * C13235 + (C18990 + C18991) * C13236) *
                       C30904 * C1818 -
                   ((C19700 + C19701) * C13236 + (C19193 + C19192) * C13235) *
                       C30904 * C1819 +
                   ((C19195 + C19194) * C13235 +
                    (C18735 * C1280 + C21158 + C21158 + C18733 * C1298 +
                     C18737 * C2402 + C21159 + C21159 + C18734 * C2408) *
                        C13236) *
                       C30904 * C31231) *
                      C30954 * C31222)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C13235 +
                    (C24650 + C24651) * C13236) *
                       C30904 * C1818 -
                   ((C25262 + C25263) * C13236 +
                    (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                     C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                        C13235) *
                       C30904 * C1819 +
                   ((C18735 * C481 + C19148 + C19148 + C18733 * C501 +
                     C18737 * C2000 + C19149 + C19149 + C18734 * C2012) *
                        C13235 +
                    (C25686 + C25687) * C13236) *
                       C30904 * C31231) *
                      C31265 +
                  (((C25263 + C25262) * C13235 + (C25688 + C25689) * C13236) *
                       C30904 * C1819 -
                   ((C24652 + C24653) * C13236 + (C24651 + C24650) * C13235) *
                       C30904 * C1818 -
                   ((C25690 + C25691) * C13236 + (C25687 + C25686) * C13235) *
                       C30904 * C31231) *
                      C31253 +
                  (((C24653 + C24652) * C13235 + (C25510 + C25511) * C13236) *
                       C30904 * C1818 -
                   ((C26156 + C26157) * C13236 + (C25689 + C25688) * C13235) *
                       C30904 * C1819 +
                   ((C25691 + C25690) * C13235 +
                    (C18735 * C5624 + C25672 + C25672 + C18733 * C5630 +
                     C18737 * C6674 + C25673 + C25673 + C18734 * C6676) *
                        C13236) *
                       C30904 * C31231) *
                      C31228) *
                 C30926) /
                    (p * q * std::sqrt(p + q));
    d2ee[40] += (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
                 (((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                      C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                         C13235 +
                     (C24650 + C24651) * C13236) *
                        C30904 * C3272 -
                    ((C25262 + C25263) * C13236 +
                     (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                      C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                         C13235) *
                        C30904 * C31059) *
                       C31197 +
                   (((C25263 + C25262) * C13235 + (C25688 + C25689) * C13236) *
                        C30904 * C31059 -
                    ((C24652 + C24653) * C13236 + (C24651 + C24650) * C13235) *
                        C30904 * C3272) *
                       C31017) *
                      C30931 +
                  ((((C19189 + C19188) * C13235 + (C19698 + C19699) * C13236) *
                        C30904 * C31059 -
                    ((C18986 + C18987) * C13236 + (C18785 + C18784) * C13235) *
                        C30904 * C3272) *
                       C31197 +
                   (((C18987 + C18986) * C13235 + (C18988 + C18989) * C13236) *
                        C30904 * C3272 -
                    ((C20442 + C20443) * C13236 + (C19699 + C19698) * C13235) *
                        C30904 * C31059) *
                       C31017) *
                      C30940 +
                  ((((C18787 + C18786) * C13235 + (C18990 + C18991) * C13236) *
                        C30904 * C3272 -
                    ((C19700 + C19701) * C13236 + (C19193 + C19192) * C13235) *
                        C30904 * C31059) *
                       C31197 +
                   (((C19701 + C19700) * C13235 +
                     (C18735 * C1283 + C20436 + C20436 + C18733 * C1301 +
                      C18737 * C1288 + C20437 + C20437 + C18734 * C1306) *
                         C13236) *
                        C30904 * C31059 -
                    ((C18992 + C18993) * C13236 + (C18991 + C18990) * C13235) *
                        C30904 * C3272) *
                       C31017) *
                      C2881)) /
                (p * q * std::sqrt(p + q));
    d2ee[41] += (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
                 (((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                      C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                         C13235 +
                     (C24650 + C24651) * C13236) *
                        C30904 * C31055 -
                    ((C25262 + C25263) * C13236 +
                     (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                      C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                         C13235) *
                        C30904 * C31062 +
                    ((C18735 * C481 + C19148 + C19148 + C18733 * C501 +
                      C18737 * C2000 + C19149 + C19149 + C18734 * C2012) *
                         C13235 +
                     (C25686 + C25687) * C13236) *
                        C30904 * C3780) *
                       C31197 +
                   (((C25263 + C25262) * C13235 + (C25688 + C25689) * C13236) *
                        C30904 * C31062 -
                    ((C24652 + C24653) * C13236 + (C24651 + C24650) * C13235) *
                        C30904 * C31055 -
                    ((C25690 + C25691) * C13236 + (C25687 + C25686) * C13235) *
                        C30904 * C3780) *
                       C31017) *
                      C2618 +
                  ((((C19189 + C19188) * C13235 + (C19698 + C19699) * C13236) *
                        C30904 * C31062 -
                    ((C18986 + C18987) * C13236 + (C18785 + C18784) * C13235) *
                        C30904 * C31055 -
                    ((C21164 + C21165) * C13236 + (C19191 + C19190) * C13235) *
                        C30904 * C3780) *
                       C31197 +
                   (((C18987 + C18986) * C13235 + (C18988 + C18989) * C13236) *
                        C30904 * C31055 -
                    ((C20442 + C20443) * C13236 + (C19699 + C19698) * C13235) *
                        C30904 * C31062 +
                    ((C21165 + C21164) * C13235 +
                     (C18735 * C1287 + C20094 + C20094 + C18733 * C1305 +
                      C18737 * C6572 + C20095 + C20095 + C18734 * C6574) *
                         C13236) *
                        C30904 * C3780) *
                       C31017) *
                      C30937)) /
                (p * q * std::sqrt(p + q));
    d2ee[42] += (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 (((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                      C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                         C13235 +
                     (C24650 + C24651) * C13236) *
                        C30904 * C3272 -
                    ((C25262 + C25263) * C13236 +
                     (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                      C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                         C13235) *
                        C30904 * C31059) *
                       C31265 +
                   (((C25263 + C25262) * C13235 + (C25688 + C25689) * C13236) *
                        C30904 * C31059 -
                    ((C24652 + C24653) * C13236 + (C24651 + C24650) * C13235) *
                        C30904 * C3272) *
                       C31253 +
                   (((C24653 + C24652) * C13235 + (C25510 + C25511) * C13236) *
                        C30904 * C3272 -
                    ((C26156 + C26157) * C13236 + (C25689 + C25688) * C13235) *
                        C30904 * C31059) *
                       C31228) *
                      C2618 +
                  ((((C19189 + C19188) * C13235 + (C19698 + C19699) * C13236) *
                        C30904 * C31059 -
                    ((C18986 + C18987) * C13236 + (C18785 + C18784) * C13235) *
                        C30904 * C3272) *
                       C31265 +
                   (((C18987 + C18986) * C13235 + (C18988 + C18989) * C13236) *
                        C30904 * C3272 -
                    ((C20442 + C20443) * C13236 + (C19699 + C19698) * C13235) *
                        C30904 * C31059) *
                       C31253 +
                   (((C20443 + C20442) * C13235 +
                     (C18735 * C1697 + C20576 + C20576 + C18733 * C1703 +
                      C18737 * C6465 + C20577 + C20577 + C18734 * C6467) *
                         C13236) *
                        C30904 * C31059 -
                    ((C20236 + C20237) * C13236 + (C18989 + C18988) * C13235) *
                        C30904 * C3272) *
                       C31228) *
                      C30937)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C13235 +
                    (C24650 + C24651) * C13236) *
                       C30904 * C3272 -
                   ((C25262 + C25263) * C13236 +
                    (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                     C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                        C13235) *
                       C30904 * C31059) *
                      C30954 * C31271 +
                  (((C19189 + C19188) * C13235 + (C19698 + C19699) * C13236) *
                       C30904 * C31059 -
                   ((C18986 + C18987) * C13236 + (C18785 + C18784) * C13235) *
                       C30904 * C3272) *
                      C30954 * C31264 +
                  (((C18787 + C18786) * C13235 + (C18990 + C18991) * C13236) *
                       C30904 * C3272 -
                   ((C19700 + C19701) * C13236 + (C19193 + C19192) * C13235) *
                       C30904 * C31059) *
                      C30954 * C31251 +
                  (((C19479 + C19478) * C13235 +
                    (C18735 * C927 + C19688 + C19688 + C18733 * C937 +
                     C18737 * C2168 + C19689 + C19689 + C18734 * C2170) *
                        C13236) *
                       C30904 * C31059 -
                   ((C19336 + C19337) * C13236 + (C18789 + C18788) * C13235) *
                       C30904 * C3272) *
                      C30954 * C31232)) /
                    (p * q * std::sqrt(p + q)) +
                (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C13235 +
                    (C24650 + C24651) * C13236) *
                       C30904 * C31273 -
                   ((C25262 + C25263) * C13236 +
                    (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                     C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                        C13235) *
                       C30904 * C31270 +
                   ((C18735 * C481 + C19148 + C19148 + C18733 * C501 +
                     C18737 * C2000 + C19149 + C19149 + C18734 * C2012) *
                        C13235 +
                    (C25686 + C25687) * C13236) *
                       C30904 * C31261 -
                   ((C26998 + C26999) * C13236 +
                    (C18737 * C2001 + C20954 + C20954 + C18734 * C2013 +
                     C18735 * C2000 + C20955 + C20955 + C18733 * C2012) *
                        C13235) *
                       C30904 * C31244) *
                      C30954 * C2618 +
                  (((C19189 + C19188) * C13235 + (C19698 + C19699) * C13236) *
                       C30904 * C31270 -
                   ((C18986 + C18987) * C13236 + (C18785 + C18784) * C13235) *
                       C30904 * C31273 -
                   ((C21164 + C21165) * C13236 + (C19191 + C19190) * C13235) *
                       C30904 * C31261 +
                   ((C21307 + C21306) * C13235 +
                    (C18735 * C2401 + C21440 + C21440 + C18733 * C2407 +
                     C18737 * C10707 + C21441 + C21441 + C18734 * C10709) *
                        C13236) *
                       C30904 * C31244) *
                      C30954 * C30937)) /
                    (p * q * std::sqrt(p + q));
    d2ee[43] += (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C13235 +
                    (C24650 + C24651) * C13236) *
                       C30904 * C31055 -
                   ((C25262 + C25263) * C13236 +
                    (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                     C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                        C13235) *
                       C30904 * C31062 +
                   ((C18735 * C481 + C19148 + C19148 + C18733 * C501 +
                     C18737 * C2000 + C19149 + C19149 + C18734 * C2012) *
                        C13235 +
                    (C25686 + C25687) * C13236) *
                       C30904 * C3780) *
                      C30954 * C30931 +
                  (((C19189 + C19188) * C13235 + (C19698 + C19699) * C13236) *
                       C30904 * C31062 -
                   ((C18986 + C18987) * C13236 + (C18785 + C18784) * C13235) *
                       C30904 * C31055 -
                   ((C21164 + C21165) * C13236 + (C19191 + C19190) * C13235) *
                       C30904 * C3780) *
                      C30954 * C30940 +
                  (((C18787 + C18786) * C13235 + (C18990 + C18991) * C13236) *
                       C30904 * C31055 -
                   ((C19700 + C19701) * C13236 + (C19193 + C19192) * C13235) *
                       C30904 * C31062 +
                   ((C19195 + C19194) * C13235 +
                    (C18735 * C1280 + C21158 + C21158 + C18733 * C1298 +
                     C18737 * C2402 + C21159 + C21159 + C18734 * C2408) *
                        C13236) *
                       C30904 * C3780) *
                      C30954 * C2881)) /
                (p * q * std::sqrt(p + q));
    d2ee[44] += (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C13235 +
                    (C24650 + C24651) * C13236) *
                       C30904 * C3272 -
                   ((C25262 + C25263) * C13236 +
                    (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                     C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                        C13235) *
                       C30904 * C31059) *
                      C30954 * C31271 +
                  (((C19189 + C19188) * C13235 + (C19698 + C19699) * C13236) *
                       C30904 * C31059 -
                   ((C18986 + C18987) * C13236 + (C18785 + C18784) * C13235) *
                       C30904 * C3272) *
                      C30954 * C31264 +
                  (((C18787 + C18786) * C13235 + (C18990 + C18991) * C13236) *
                       C30904 * C3272 -
                   ((C19700 + C19701) * C13236 + (C19193 + C19192) * C13235) *
                       C30904 * C31059) *
                      C30954 * C31251 +
                  (((C19479 + C19478) * C13235 +
                    (C18735 * C927 + C19688 + C19688 + C18733 * C937 +
                     C18737 * C2168 + C19689 + C19689 + C18734 * C2170) *
                        C13236) *
                       C30904 * C31059 -
                   ((C19336 + C19337) * C13236 + (C18789 + C18788) * C13235) *
                       C30904 * C3272) *
                      C30954 * C31232)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                 (((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                      C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                         C13235 +
                     (C24650 + C24651) * C13236) *
                        C30904 * C3272 -
                    ((C25262 + C25263) * C13236 +
                     (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                      C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                         C13235) *
                        C30904 * C31059) *
                       C31265 +
                   (((C25263 + C25262) * C13235 + (C25688 + C25689) * C13236) *
                        C30904 * C31059 -
                    ((C24652 + C24653) * C13236 + (C24651 + C24650) * C13235) *
                        C30904 * C3272) *
                       C31253 +
                   (((C24653 + C24652) * C13235 + (C25510 + C25511) * C13236) *
                        C30904 * C3272 -
                    ((C26156 + C26157) * C13236 + (C25689 + C25688) * C13235) *
                        C30904 * C31059) *
                       C31228) *
                      C2618 +
                  ((((C19189 + C19188) * C13235 + (C19698 + C19699) * C13236) *
                        C30904 * C31059 -
                    ((C18986 + C18987) * C13236 + (C18785 + C18784) * C13235) *
                        C30904 * C3272) *
                       C31265 +
                   (((C18987 + C18986) * C13235 + (C18988 + C18989) * C13236) *
                        C30904 * C3272 -
                    ((C20442 + C20443) * C13236 + (C19699 + C19698) * C13235) *
                        C30904 * C31059) *
                       C31253 +
                   (((C20443 + C20442) * C13235 +
                     (C18735 * C1697 + C20576 + C20576 + C18733 * C1703 +
                      C18737 * C6465 + C20577 + C20577 + C18734 * C6467) *
                         C13236) *
                        C30904 * C31059 -
                    ((C20236 + C20237) * C13236 + (C18989 + C18988) * C13235) *
                        C30904 * C3272) *
                       C31228) *
                      C30937)) /
                    (p * q * std::sqrt(p + q));
    d2ee[45] += (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C13235 +
                    (C24650 + C24651) * C13236) *
                       C30904 * C30972 * C31197 -
                   ((C24652 + C24653) * C13236 + (C24651 + C24650) * C13235) *
                       C30904 * C30972 * C31017) *
                      C654 +
                  (((C18987 + C18986) * C13235 + (C18988 + C18989) * C13236) *
                       C30904 * C30972 * C31017 -
                   ((C18986 + C18987) * C13236 + (C18785 + C18784) * C13235) *
                       C30904 * C30972 * C31197) *
                      C655 +
                  (((C18787 + C18786) * C13235 + (C18990 + C18991) * C13236) *
                       C30904 * C30972 * C31197 -
                   ((C18992 + C18993) * C13236 + (C18991 + C18990) * C13235) *
                       C30904 * C30972 * C31017) *
                      C656 +
                  (((C19337 + C19336) * C13235 +
                    (C18735 * C296 + C18968 + C18968 + C18733 * C316 +
                     C18737 * C1582 + C18969 + C18969 + C18734 * C1584) *
                        C13236) *
                       C30904 * C30972 * C31017 -
                   ((C19336 + C19337) * C13236 + (C18789 + C18788) * C13235) *
                       C30904 * C30972 * C31197) *
                      C31232)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C13235 +
                    (C24650 + C24651) * C13236) *
                       C30904 * C30972 * C1414 -
                   ((C24652 + C24653) * C13236 + (C24651 + C24650) * C13235) *
                       C30904 * C30972 * C1415 +
                   ((C24653 + C24652) * C13235 + (C25510 + C25511) * C13236) *
                       C30904 * C30972 * C1416 -
                   ((C25512 + C25513) * C13236 + (C25511 + C25510) * C13235) *
                       C30904 * C30972 * C31238) *
                      C31183 +
                  (((C18987 + C18986) * C13235 + (C18988 + C18989) * C13236) *
                       C30904 * C30972 * C1415 -
                   ((C18986 + C18987) * C13236 + (C18785 + C18784) * C13235) *
                       C30904 * C30972 * C1414 -
                   ((C20236 + C20237) * C13236 + (C18989 + C18988) * C13235) *
                       C30904 * C30972 * C1416 +
                   ((C20237 + C20236) * C13235 +
                    (C18735 * C1150 + C19936 + C19936 + C18733 * C1162 +
                     C18737 * C5909 + C19937 + C19937 + C18734 * C5911) *
                        C13236) *
                       C30904 * C30972 * C31238) *
                      C30937)) /
                    (p * q * std::sqrt(p + q));
    d2ee[46] += (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                 (((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                      C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                         C13235 +
                     (C24650 + C24651) * C13236) *
                        C30904 * C31198 -
                    ((C25262 + C25263) * C13236 +
                     (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                      C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                         C13235) *
                        C30904 * C31059) *
                       C31197 +
                   (((C25263 + C25262) * C13235 +
                     (C18735 * C1285 + C20091 + C20091 + C18733 * C1303 +
                      C18737 * C1286 + C20090 + C20090 + C18734 * C1304) *
                         C13236) *
                        C30904 * C31059 -
                    ((C24652 + C24653) * C13236 + (C24651 + C24650) * C13235) *
                        C30904 * C31198) *
                       C31017) *
                      C286 +
                  ((((C19189 + C19188) * C13235 + (C19698 + C19699) * C13236) *
                        C30904 * C31059 -
                    ((C18986 + C18987) * C13236 + (C18785 + C18784) * C13235) *
                        C30904 * C31198) *
                       C31197 +
                   (((C18987 + C18986) * C13235 + (C18988 + C18989) * C13236) *
                        C30904 * C31198 -
                    ((C20442 + C20443) * C13236 + (C19699 + C19698) * C13235) *
                        C30904 * C31059) *
                       C31017) *
                      C287 +
                  ((((C18787 + C18786) * C13235 + (C18990 + C18991) * C13236) *
                        C30904 * C31198 -
                    ((C19700 + C19701) * C13236 + (C19193 + C19192) * C13235) *
                        C30904 * C31059) *
                       C31197 +
                   (((C19701 + C19700) * C13235 +
                     (C18735 * C1283 + C20436 + C20436 + C18733 * C1301 +
                      C18737 * C1288 + C20437 + C20437 + C18734 * C1306) *
                         C13236) *
                        C30904 * C31059 -
                    ((C18992 + C18993) * C13236 + (C18991 + C18990) * C13235) *
                        C30904 * C31198) *
                       C31017) *
                      C31222)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C13235 +
                    (C24650 + C24651) * C13236) *
                       C30904 * C31198 -
                   ((C25262 + C25263) * C13236 +
                    (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                     C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                        C13235) *
                       C30904 * C31059) *
                      C1414 +
                  (((C25263 + C25262) * C13235 + (C25688 + C25689) * C13236) *
                       C30904 * C31059 -
                   ((C24652 + C24653) * C13236 + (C24651 + C24650) * C13235) *
                       C30904 * C31198) *
                      C1415 +
                  (((C24653 + C24652) * C13235 + (C25510 + C25511) * C13236) *
                       C30904 * C31198 -
                   ((C26156 + C26157) * C13236 + (C25689 + C25688) * C13235) *
                       C30904 * C31059) *
                      C1416 +
                  (((C26157 + C26156) * C13235 +
                    (C18735 * C5625 + C26150 + C26150 + C18733 * C5631 +
                     C18737 * C5626 + C26151 + C26151 + C18734 * C5632) *
                        C13236) *
                       C30904 * C31059 -
                   ((C25512 + C25513) * C13236 + (C25511 + C25510) * C13235) *
                       C30904 * C31198) *
                      C31238) *
                 C30926) /
                    (p * q * std::sqrt(p + q));
    d2ee[47] += (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C13235 +
                    (C24650 + C24651) * C13236) *
                       C30904 * C30972 * C31265 -
                   ((C24652 + C24653) * C13236 + (C24651 + C24650) * C13235) *
                       C30904 * C30972 * C31253 +
                   ((C24653 + C24652) * C13235 +
                    (C18735 * C1148 + C19933 + C19933 + C18733 * C1160 +
                     C18737 * C1696 + C19932 + C19932 + C18734 * C1702) *
                        C13236) *
                       C30904 * C30972 * C31228) *
                      C286 +
                  (((C18987 + C18986) * C13235 + (C18988 + C18989) * C13236) *
                       C30904 * C30972 * C31253 -
                   ((C18986 + C18987) * C13236 + (C18785 + C18784) * C13235) *
                       C30904 * C30972 * C31265 -
                   ((C20236 + C20237) * C13236 + (C18989 + C18988) * C13235) *
                       C30904 * C30972 * C31228) *
                      C287 +
                  (((C18787 + C18786) * C13235 + (C18990 + C18991) * C13236) *
                       C30904 * C30972 * C31265 -
                   ((C18992 + C18993) * C13236 + (C18991 + C18990) * C13235) *
                       C30904 * C30972 * C31253 +
                   ((C18993 + C18992) * C13235 +
                    (C18735 * C1146 + C20230 + C20230 + C18733 * C1158 +
                     C18737 * C1698 + C20231 + C20231 + C18734 * C1704) *
                        C13236) *
                       C30904 * C30972 * C31228) *
                      C31222)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                 (((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                    C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                       C13235 +
                   (C18735 * C291 + C18945 + C18945 + C18733 * C311 +
                    C18737 * C924 + C18944 + C18944 + C18734 * C934) *
                       C13236) *
                      C30904 * C30972 * C30954 * C108 -
                  ((C18986 + C18987) * C13236 + (C18785 + C18784) * C13235) *
                      C30904 * C30972 * C30954 * C109 +
                  ((C18787 + C18786) * C13235 + (C18990 + C18991) * C13236) *
                      C30904 * C30972 * C30954 * C110 -
                  ((C19336 + C19337) * C13236 + (C18789 + C18788) * C13235) *
                      C30904 * C30972 * C30954 * C111 +
                  ((C18791 + C18790) * C13235 +
                   (C18735 * C297 + C19330 + C19330 + C18733 * C317 +
                    C18737 * C928 + C19331 + C19331 + C18734 * C938) *
                       C13236) *
                      C30904 * C30972 * C30954 * C112)) /
                    (p * q * std::sqrt(p + q)) +
                (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C13235 +
                    (C24650 + C24651) * C13236) *
                       C30904 * C31266 -
                   ((C18737 * C1282 + C19675 + C19675 + C18734 * C1300 +
                     C18735 * C924 + C19674 + C19674 + C18733 * C934) *
                        C13236 +
                    (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                     C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                        C13235) *
                       C30904 * C31255 +
                   ((C18735 * C481 + C19148 + C19148 + C18733 * C501 +
                     C18737 * C2000 + C19149 + C19149 + C18734 * C2012) *
                        C13235 +
                    (C18735 * C1282 + C20087 + C20087 + C18733 * C1300 +
                     C18737 * C2400 + C20086 + C20086 + C18734 * C2406) *
                        C13236) *
                       C30904 * C31231) *
                      C30954 * C286 +
                  (((C19189 + C19188) * C13235 + (C19698 + C19699) * C13236) *
                       C30904 * C31255 -
                   ((C18986 + C18987) * C13236 + (C18785 + C18784) * C13235) *
                       C30904 * C31266 -
                   ((C21164 + C21165) * C13236 + (C19191 + C19190) * C13235) *
                       C30904 * C31231) *
                      C30954 * C287 +
                  (((C18787 + C18786) * C13235 + (C18990 + C18991) * C13236) *
                       C30904 * C31266 -
                   ((C19700 + C19701) * C13236 + (C19193 + C19192) * C13235) *
                       C30904 * C31255 +
                   ((C19195 + C19194) * C13235 +
                    (C18735 * C1280 + C21158 + C21158 + C18733 * C1298 +
                     C18737 * C2402 + C21159 + C21159 + C18734 * C2408) *
                        C13236) *
                       C30904 * C31231) *
                      C30954 * C31222)) /
                    (p * q * std::sqrt(p + q)) +
                (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C13235 +
                    (C24650 + C24651) * C13236) *
                       C30904 * C30972 * C1072 -
                   ((C24652 + C24653) * C13236 + (C24651 + C24650) * C13235) *
                       C30904 * C30972 * C1073 +
                   ((C24653 + C24652) * C13235 +
                    (C18735 * C1148 + C19933 + C19933 + C18733 * C1160 +
                     C18737 * C1696 + C19932 + C19932 + C18734 * C1702) *
                        C13236) *
                       C30904 * C30972 * C31228) *
                      C31262 +
                  (((C18987 + C18986) * C13235 + (C18988 + C18989) * C13236) *
                       C30904 * C30972 * C1073 -
                   ((C18986 + C18987) * C13236 + (C18785 + C18784) * C13235) *
                       C30904 * C30972 * C1072 -
                   ((C20236 + C20237) * C13236 + (C18989 + C18988) * C13235) *
                       C30904 * C30972 * C31228) *
                      C31249 +
                  (((C18787 + C18786) * C13235 + (C18990 + C18991) * C13236) *
                       C30904 * C30972 * C1072 -
                   ((C18992 + C18993) * C13236 + (C18991 + C18990) * C13235) *
                       C30904 * C30972 * C1073 +
                   ((C18993 + C18992) * C13235 +
                    (C18735 * C1146 + C20230 + C20230 + C18733 * C1158 +
                     C18737 * C1698 + C20231 + C20231 + C18734 * C1704) *
                        C13236) *
                       C30904 * C30972 * C31228) *
                      C31222)) /
                    (p * q * std::sqrt(p + q)) +
                (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                 (((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                    C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                       C13235 +
                   (C24650 + C24651) * C13236) *
                      C30904 * C30972 * C1140 -
                  ((C24652 + C24653) * C13236 + (C24651 + C24650) * C13235) *
                      C30904 * C30972 * C1141 +
                  ((C24653 + C24652) * C13235 + (C25510 + C25511) * C13236) *
                      C30904 * C30972 * C1142 -
                  ((C25512 + C25513) * C13236 + (C25511 + C25510) * C13235) *
                      C30904 * C30972 * C1143 +
                  ((C25513 + C25512) * C13235 +
                   (C18735 * C5496 + C25500 + C25500 + C18733 * C5500 +
                    C18737 * C6016 + C25501 + C25501 + C18734 * C6018) *
                       C13236) *
                      C30904 * C30972 * C1144) *
                 C30926) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C13235 +
                    (C24650 + C24651) * C13236) *
                       C30904 * C31266 -
                   ((C25262 + C25263) * C13236 +
                    (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                     C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                        C13235) *
                       C30904 * C31255 +
                   ((C18735 * C481 + C19148 + C19148 + C18733 * C501 +
                     C18737 * C2000 + C19149 + C19149 + C18734 * C2012) *
                        C13235 +
                    (C25686 + C25687) * C13236) *
                       C30904 * C31231) *
                      C1072 +
                  (((C25263 + C25262) * C13235 + (C25688 + C25689) * C13236) *
                       C30904 * C31255 -
                   ((C24652 + C24653) * C13236 + (C24651 + C24650) * C13235) *
                       C30904 * C31266 -
                   ((C25690 + C25691) * C13236 + (C25687 + C25686) * C13235) *
                       C30904 * C31231) *
                      C1073 +
                  (((C24653 + C24652) * C13235 + (C25510 + C25511) * C13236) *
                       C30904 * C31266 -
                   ((C18737 * C5624 + C20575 + C20575 + C18734 * C5630 +
                     C18735 * C1696 + C20574 + C20574 + C18733 * C1702) *
                        C13236 +
                    (C25689 + C25688) * C13235) *
                       C30904 * C31255 +
                   ((C25691 + C25690) * C13235 +
                    (C18735 * C5624 + C25672 + C25672 + C18733 * C5630 +
                     C18737 * C6674 + C25673 + C25673 + C18734 * C6676) *
                        C13236) *
                       C30904 * C31231) *
                      C31228) *
                 C30926) /
                    (p * q * std::sqrt(p + q));
    d2ee[48] += (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C13235 +
                    (C24650 + C24651) * C13236) *
                       C30904 * C31198 -
                   ((C18737 * C1282 + C19675 + C19675 + C18734 * C1300 +
                     C18735 * C924 + C19674 + C19674 + C18733 * C934) *
                        C13236 +
                    (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                     C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                        C13235) *
                       C30904 * C31059) *
                      C30954 * C654 +
                  (((C19189 + C19188) * C13235 + (C19698 + C19699) * C13236) *
                       C30904 * C31059 -
                   ((C18986 + C18987) * C13236 + (C18785 + C18784) * C13235) *
                       C30904 * C31198) *
                      C30954 * C655 +
                  (((C18787 + C18786) * C13235 + (C18990 + C18991) * C13236) *
                       C30904 * C31198 -
                   ((C19700 + C19701) * C13236 + (C19193 + C19192) * C13235) *
                       C30904 * C31059) *
                      C30954 * C656 +
                  (((C19479 + C19478) * C13235 +
                    (C18735 * C927 + C19688 + C19688 + C18733 * C937 +
                     C18737 * C2168 + C19689 + C19689 + C18734 * C2170) *
                        C13236) *
                       C30904 * C31059 -
                   ((C19336 + C19337) * C13236 + (C18789 + C18788) * C13235) *
                       C30904 * C31198) *
                      C30954 * C31232)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                 (((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                      C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                         C13235 +
                     (C24650 + C24651) * C13236) *
                        C30904 * C31198 -
                    ((C25262 + C25263) * C13236 +
                     (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                      C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                         C13235) *
                        C30904 * C31059) *
                       C1072 +
                   (((C25263 + C25262) * C13235 + (C25688 + C25689) * C13236) *
                        C30904 * C31059 -
                    ((C24652 + C24653) * C13236 + (C24651 + C24650) * C13235) *
                        C30904 * C31198) *
                       C1073 +
                   (((C24653 + C24652) * C13235 + (C25510 + C25511) * C13236) *
                        C30904 * C31198 -
                    ((C18737 * C5624 + C20575 + C20575 + C18734 * C5630 +
                      C18735 * C1696 + C20574 + C20574 + C18733 * C1702) *
                         C13236 +
                     (C25689 + C25688) * C13235) *
                        C30904 * C31059) *
                       C31228) *
                      C31183 +
                  ((((C19189 + C19188) * C13235 + (C19698 + C19699) * C13236) *
                        C30904 * C31059 -
                    ((C18986 + C18987) * C13236 + (C18785 + C18784) * C13235) *
                        C30904 * C31198) *
                       C1072 +
                   (((C18987 + C18986) * C13235 + (C18988 + C18989) * C13236) *
                        C30904 * C31198 -
                    ((C20442 + C20443) * C13236 + (C19699 + C19698) * C13235) *
                        C30904 * C31059) *
                       C1073 +
                   (((C20443 + C20442) * C13235 +
                     (C18735 * C1697 + C20576 + C20576 + C18733 * C1703 +
                      C18737 * C6465 + C20577 + C20577 + C18734 * C6467) *
                         C13236) *
                        C30904 * C31059 -
                    ((C20236 + C20237) * C13236 + (C18989 + C18988) * C13235) *
                        C30904 * C31198) *
                       C31228) *
                      C30937)) /
                    (p * q * std::sqrt(p + q));
    d2ee[49] += (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
                 (((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                    C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                       C13235 +
                   (C18735 * C291 + C18945 + C18945 + C18733 * C311 +
                    C18737 * C924 + C18944 + C18944 + C18734 * C934) *
                       C13236) *
                      C30904 * C30972 * C30954 * C108 -
                  ((C18986 + C18987) * C13236 + (C18785 + C18784) * C13235) *
                      C30904 * C30972 * C30954 * C109 +
                  ((C18787 + C18786) * C13235 + (C18990 + C18991) * C13236) *
                      C30904 * C30972 * C30954 * C110 -
                  ((C19336 + C19337) * C13236 + (C18789 + C18788) * C13235) *
                      C30904 * C30972 * C30954 * C111 +
                  ((C18791 + C18790) * C13235 +
                   (C18735 * C297 + C19330 + C19330 + C18733 * C317 +
                    C18737 * C928 + C19331 + C19331 + C18734 * C938) *
                       C13236) *
                      C30904 * C30972 * C30954 * C112)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C13235 +
                    (C24650 + C24651) * C13236) *
                       C30904 * C30972 * C31265 -
                   ((C24652 + C24653) * C13236 + (C24651 + C24650) * C13235) *
                       C30904 * C30972 * C31253 +
                   ((C24653 + C24652) * C13235 +
                    (C18735 * C1148 + C19933 + C19933 + C18733 * C1160 +
                     C18737 * C1696 + C19932 + C19932 + C18734 * C1702) *
                        C13236) *
                       C30904 * C30972 * C31228) *
                      C286 +
                  (((C18987 + C18986) * C13235 + (C18988 + C18989) * C13236) *
                       C30904 * C30972 * C31253 -
                   ((C18986 + C18987) * C13236 + (C18785 + C18784) * C13235) *
                       C30904 * C30972 * C31265 -
                   ((C20236 + C20237) * C13236 + (C18989 + C18988) * C13235) *
                       C30904 * C30972 * C31228) *
                      C287 +
                  (((C18787 + C18786) * C13235 + (C18990 + C18991) * C13236) *
                       C30904 * C30972 * C31265 -
                   ((C18992 + C18993) * C13236 + (C18991 + C18990) * C13235) *
                       C30904 * C30972 * C31253 +
                   ((C18993 + C18992) * C13235 +
                    (C18735 * C1146 + C20230 + C20230 + C18733 * C1158 +
                     C18737 * C1698 + C20231 + C20231 + C18734 * C1704) *
                        C13236) *
                       C30904 * C30972 * C31228) *
                      C31222)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C13235 +
                    (C24650 + C24651) * C13236) *
                       C30904 * C30972 * C1072 -
                   ((C24652 + C24653) * C13236 + (C24651 + C24650) * C13235) *
                       C30904 * C30972 * C1073 +
                   ((C24653 + C24652) * C13235 +
                    (C18735 * C1148 + C19933 + C19933 + C18733 * C1160 +
                     C18737 * C1696 + C19932 + C19932 + C18734 * C1702) *
                        C13236) *
                       C30904 * C30972 * C31228) *
                      C31262 +
                  (((C18987 + C18986) * C13235 + (C18988 + C18989) * C13236) *
                       C30904 * C30972 * C1073 -
                   ((C18986 + C18987) * C13236 + (C18785 + C18784) * C13235) *
                       C30904 * C30972 * C1072 -
                   ((C20236 + C20237) * C13236 + (C18989 + C18988) * C13235) *
                       C30904 * C30972 * C31228) *
                      C31249 +
                  (((C18787 + C18786) * C13235 + (C18990 + C18991) * C13236) *
                       C30904 * C30972 * C1072 -
                   ((C18992 + C18993) * C13236 + (C18991 + C18990) * C13235) *
                       C30904 * C30972 * C1073 +
                   ((C18993 + C18992) * C13235 +
                    (C18735 * C1146 + C20230 + C20230 + C18733 * C1158 +
                     C18737 * C1698 + C20231 + C20231 + C18734 * C1704) *
                        C13236) *
                       C30904 * C30972 * C31228) *
                      C31222)) /
                    (p * q * std::sqrt(p + q)) +
                (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
                 (((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                    C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                       C13235 +
                   (C24650 + C24651) * C13236) *
                      C30904 * C30972 * C1140 -
                  ((C24652 + C24653) * C13236 + (C24651 + C24650) * C13235) *
                      C30904 * C30972 * C1141 +
                  ((C24653 + C24652) * C13235 + (C25510 + C25511) * C13236) *
                      C30904 * C30972 * C1142 -
                  ((C25512 + C25513) * C13236 + (C25511 + C25510) * C13235) *
                      C30904 * C30972 * C1143 +
                  ((C25513 + C25512) * C13235 +
                   (C18735 * C5496 + C25500 + C25500 + C18733 * C5500 +
                    C18737 * C6016 + C25501 + C25501 + C18734 * C6018) *
                       C13236) *
                      C30904 * C30972 * C1144) *
                 C30926) /
                    (p * q * std::sqrt(p + q));
    d2ee[50] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C30972 * C31013 -
           (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C30972 *
               C31020 +
           (C4861 * C4733 + C4862 * C4734 + C5513 * C4735) * C30904 * C30972 *
               C2878) *
              C30931 +
          ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C30972 *
               C31020 -
           (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C30972 *
               C31013 -
           (C5763 * C4735 + C1434 * C4734 + C356 * C4733) * C30904 * C30972 *
               C2878) *
              C30940 +
          ((C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C30972 *
               C31013 -
           (C1433 * C4735 + C357 * C4734 + C354 * C4733) * C30904 * C30972 *
               C31020 +
           (C357 * C4733 + C1433 * C4734 +
            (C113 * C1151 + C1170 + C1170 + C31151 * C1163) * C4735) *
               C30904 * C30972 * C2878) *
              C2881)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C30972 * C31013 -
           (C360 * C105 + C361 * C104 +
            (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
               C30972 * C31020 +
           ((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
            C362 * C104 + C363 * C105) *
               C30972 * C2878) *
              C30931 +
          ((C361 * C103 + C360 * C104 + C364 * C105) * C30972 * C31020 -
           (C171 * C105 + C170 * C104 + C169 * C103) * C30972 * C31013 -
           (C365 * C105 + C363 * C104 + C362 * C103) * C30972 * C2878) *
              C30940 +
          ((C170 * C103 + C171 * C104 + C172 * C105) * C30972 * C31013 -
           (C668 * C105 + C364 * C104 + C360 * C103) * C30972 * C31020 +
           (C363 * C103 + C365 * C104 +
            (C113 * C298 + C341 + C341 + C31151 * C318) * C31138 * C105) *
               C30972 * C2878) *
              C2881)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 + C8993 +
            C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 +
            C8984 * C501) *
               C31138 * C30904 * C30972 * C31013 -
           (C8989 * C1282 + C9117 + C9117 + C8984 * C1300 + C8987 * C924 +
            C9118 + C9118 + C8983 * C934 + C8985 * C291 + C9119 + C9119 +
            C8982 * C311) *
               C31138 * C30904 * C30972 * C31020 +
           (C8985 * C292 + C9120 + C9120 + C8982 * C312 + C8987 * C1285 +
            C9121 + C9121 + C8983 * C1303 + C8989 * C1286 + C9122 + C9122 +
            C8984 * C1304) *
               C31138 * C30904 * C30972 * C2878) *
              C30931 +
          ((C8985 * C290 + C9123 + C9123 + C8982 * C310 + C8987 * C925 + C9124 +
            C9124 + C8983 * C935 + C8989 * C1281 + C9125 + C9125 +
            C8984 * C1299) *
               C31138 * C30904 * C30972 * C31020 -
           (C8989 * C482 + C8995 + C8995 + C8984 * C502 + C8987 * C479 + C8996 +
            C8996 + C8983 * C499 + C8985 * C116 + C8997 + C8997 +
            C8982 * C130) *
               C31138 * C30904 * C30972 * C31013 -
           (C8989 * C1287 + C9126 + C9126 + C8984 * C1305 + C8987 * C1284 +
            C9127 + C9127 + C8983 * C1302 + C8985 * C293 + C9128 + C9128 +
            C8982 * C313) *
               C31138 * C30904 * C30972 * C2878) *
              C30940 +
          ((C8985 * C117 + C8998 + C8998 + C8982 * C131 + C8987 * C478 + C8999 +
            C8999 + C8983 * C498 + C8989 * C483 + C9000 + C9000 +
            C8984 * C503) *
               C31138 * C30904 * C30972 * C31013 -
           (C8989 * C1280 + C9129 + C9129 + C8984 * C1298 + C8987 * C926 +
            C9130 + C9130 + C8983 * C936 + C8985 * C289 + C9131 + C9131 +
            C8982 * C309) *
               C31138 * C30904 * C30972 * C31020 +
           (C8985 * C294 + C9132 + C9132 + C8982 * C314 + C8987 * C1283 +
            C9133 + C9133 + C8983 * C1301 + C8989 * C1288 + C9134 + C9134 +
            C8984 * C1306) *
               C31138 * C30904 * C30972 * C2878) *
              C2881)) /
            (p * q * std::sqrt(p + q));
    d2ee[51] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
             C4860 * C4734 + C4861 * C4735) *
                C30904 * C31198 -
            (C5323 * C4735 + C5324 * C4734 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
                C30904 * C31059) *
               C31013 +
           ((C5324 * C4733 + C5323 * C4734 + C5655 * C4735) * C30904 * C31059 -
            (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C31198) *
               C31020 +
           ((C4861 * C4733 + C4862 * C4734 + C5513 * C4735) * C30904 * C31198 -
            (C6025 * C4735 + C5655 * C4734 + C5323 * C4733) * C30904 * C31059) *
               C2878) *
              C2618 +
          (((C544 * C4733 + C957 * C4734 + C1596 * C4735) * C30904 * C31059 -
            (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C31198) *
               C31013 +
           ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C31198 -
            (C5918 * C4735 + C1596 * C4734 + C957 * C4733) * C30904 * C31059) *
               C31020 +
           ((C1596 * C4733 + C5918 * C4734 +
             (C113 * C5909 + C5915 + C5915 + C31151 * C5911) * C4735) *
                C30904 * C31059 -
            (C5763 * C4735 + C1434 * C4734 + C356 * C4733) * C30904 * C31198) *
               C2878) *
              C30937)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
             C169 * C104 + C170 * C105) *
                C31198 -
            (C549 * C105 + C550 * C104 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
                C31059) *
               C31013 +
           (((C113 * C924 + C940 + C940 + C31151 * C934) * C31138 * C103 +
             C960 * C104 + C961 * C105) *
                C31059 -
            (C360 * C105 + C361 * C104 +
             (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
                C31198) *
               C31020 +
           (((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
             C362 * C104 + C363 * C105) *
                C31198 -
            (C1597 * C105 + C1598 * C104 +
             (C113 * C1285 + C1313 + C1313 + C31151 * C1303) * C31138 * C103) *
                C31059) *
               C2878) *
              C2618 +
          (((C550 * C103 + C549 * C104 + C553 * C105) * C31059 -
            (C171 * C105 + C170 * C104 + C169 * C103) * C31198) *
               C31013 +
           ((C361 * C103 + C360 * C104 + C364 * C105) * C31198 -
            (C962 * C105 + C961 * C104 + C960 * C103) * C31059) *
               C31020 +
           ((C1598 * C103 + C1597 * C104 +
             (C113 * C1582 + C1590 + C1590 + C31151 * C1584) * C31138 * C105) *
                C31059 -
            (C365 * C105 + C363 * C104 + C362 * C103) * C31198) *
               C2878) *
              C30937)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 +
             C8993 + C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 +
             C8984 * C501) *
                C31138 * C30904 * C31198 -
            (C8989 * C2000 + C9245 + C9245 + C8984 * C2012 + C8987 * C481 +
             C9246 + C9246 + C8983 * C501 + C8985 * C480 + C9247 + C9247 +
             C8982 * C500) *
                C31138 * C30904 * C31059) *
               C31013 +
           ((C8985 * C924 + C9611 + C9611 + C8982 * C934 + C8987 * C1282 +
             C9612 + C9612 + C8983 * C1300 + C8989 * C2400 + C9613 + C9613 +
             C8984 * C2406) *
                C31138 * C30904 * C31059 -
            (C8989 * C1282 + C9117 + C9117 + C8984 * C1300 + C8987 * C924 +
             C9118 + C9118 + C8983 * C934 + C8985 * C291 + C9119 + C9119 +
             C8982 * C311) *
                C31138 * C30904 * C31198) *
               C31020 +
           ((C8985 * C292 + C9120 + C9120 + C8982 * C312 + C8987 * C1285 +
             C9121 + C9121 + C8983 * C1303 + C8989 * C1286 + C9122 + C9122 +
             C8984 * C1304) *
                C31138 * C30904 * C31198 -
            (C8989 * C6307 + C9911 + C9911 + C8984 * C6313 + C8987 * C1286 +
             C9912 + C9912 + C8983 * C1304 + C8985 * C1285 + C9913 + C9913 +
             C8982 * C1303) *
                C31138 * C30904 * C31059) *
               C2878) *
              C2618 +
          (((C8985 * C479 + C9251 + C9251 + C8982 * C499 + C8987 * C482 +
             C9252 + C9252 + C8983 * C502 + C8989 * C1999 + C9253 + C9253 +
             C8984 * C2011) *
                C31138 * C30904 * C31059 -
            (C8989 * C482 + C8995 + C8995 + C8984 * C502 + C8987 * C479 +
             C8996 + C8996 + C8983 * C499 + C8985 * C116 + C8997 + C8997 +
             C8982 * C130) *
                C31138 * C30904 * C31198) *
               C31013 +
           ((C8985 * C290 + C9123 + C9123 + C8982 * C310 + C8987 * C925 +
             C9124 + C9124 + C8983 * C935 + C8989 * C1281 + C9125 + C9125 +
             C8984 * C1299) *
                C31138 * C30904 * C31198 -
            (C8989 * C2401 + C9614 + C9614 + C8984 * C2407 + C8987 * C1281 +
             C9615 + C9615 + C8983 * C1299 + C8985 * C925 + C9616 + C9616 +
             C8982 * C935) *
                C31138 * C30904 * C31059) *
               C31020 +
           ((C8985 * C1284 + C10164 + C10164 + C8982 * C1302 + C8987 * C1287 +
             C10165 + C10165 + C8983 * C1305 + C8989 * C6572 + C10166 + C10166 +
             C8984 * C6574) *
                C31138 * C30904 * C31059 -
            (C8989 * C1287 + C9126 + C9126 + C8984 * C1305 + C8987 * C1284 +
             C9127 + C9127 + C8983 * C1302 + C8985 * C293 + C9128 + C9128 +
             C8982 * C313) *
                C31138 * C30904 * C31198) *
               C2878) *
              C30937)) /
            (p * q * std::sqrt(p + q));
    d2ee[52] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
                C169 * C104 + C170 * C105) *
                   C30972 * C2510 -
               (C360 * C105 + C361 * C104 +
                (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
                   C30972 * C31017) *
                  C31271 +
              ((C361 * C103 + C360 * C104 + C364 * C105) * C30972 * C31017 -
               (C171 * C105 + C170 * C104 + C169 * C103) * C30972 * C2510) *
                  C31264 +
              ((C170 * C103 + C171 * C104 + C172 * C105) * C30972 * C2510 -
               (C668 * C105 + C364 * C104 + C360 * C103) * C30972 * C31017) *
                  C31251 +
              ((C364 * C103 + C668 * C104 +
                (C113 * C658 + C664 + C664 + C31151 * C660) * C31138 * C105) *
                   C30972 * C31017 -
               (C173 * C105 + C172 * C104 + C171 * C103) * C30972 * C2510) *
                  C31232) +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
                C169 * C104 + C170 * C105) *
                   C30972 * C31272 -
               (C360 * C105 + C361 * C104 +
                (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
                   C30972 * C31268 +
               ((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
                C362 * C104 + C363 * C105) *
                   C30972 * C31258 -
               (C1435 * C105 + C1436 * C104 +
                (C113 * C1148 + C1167 + C1167 + C31151 * C1160) * C31138 *
                    C103) *
                   C30972 * C31238) *
                  C2618 +
              ((C361 * C103 + C360 * C104 + C364 * C105) * C30972 * C31268 -
               (C171 * C105 + C170 * C104 + C169 * C103) * C30972 * C31272 -
               (C365 * C105 + C363 * C104 + C362 * C103) * C30972 * C31258 +
               (C1436 * C103 + C1435 * C104 +
                (C113 * C1420 + C1428 + C1428 + C31151 * C1422) * C31138 *
                    C105) *
                   C30972 * C31238) *
                  C30937)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
             C169 * C104 + C170 * C105) *
                C31266 -
            (C549 * C105 + C550 * C104 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
                C31255 +
            ((C113 * C481 + C516 + C516 + C31151 * C501) * C31138 * C103 +
             C551 * C104 + C552 * C105) *
                C31231) *
               C2510 +
           (((C113 * C924 + C940 + C940 + C31151 * C934) * C31138 * C103 +
             C960 * C104 + C961 * C105) *
                C31255 -
            (C360 * C105 + C361 * C104 +
             (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
                C31266 -
            (C2183 * C105 + C2184 * C104 +
             (C113 * C1282 + C1310 + C1310 + C31151 * C1300) * C31138 * C103) *
                C31231) *
               C31017) *
              C2618 +
          (((C550 * C103 + C549 * C104 + C553 * C105) * C31255 -
            (C171 * C105 + C170 * C104 + C169 * C103) * C31266 -
            (C554 * C105 + C552 * C104 + C551 * C103) * C31231) *
               C2510 +
           ((C361 * C103 + C360 * C104 + C364 * C105) * C31266 -
            (C962 * C105 + C961 * C104 + C960 * C103) * C31255 +
            (C2184 * C103 + C2183 * C104 +
             (C113 * C2168 + C2176 + C2176 + C31151 * C2170) * C31138 * C105) *
                C31231) *
               C31017) *
              C30937)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C30972 * C2510 -
           (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C30972 *
               C31017) *
              C31271 +
          ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C30972 *
               C31017 -
           (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C30972 *
               C2510) *
              C31264 +
          ((C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C30972 *
               C2510 -
           (C1433 * C4735 + C357 * C4734 + C354 * C4733) * C30904 * C30972 *
               C31017) *
              C31251 +
          ((C358 * C4733 + C359 * C4734 +
            (C113 * C1420 + C1428 + C1428 + C31151 * C1422) * C4735) *
               C30904 * C30972 * C31017 -
           (C359 * C4735 + C358 * C4734 + C166 * C4733) * C30904 * C30972 *
               C2510) *
              C31232)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C30972 * C31272 -
           (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C30972 *
               C31268 +
           (C4861 * C4733 + C4862 * C4734 + C5513 * C4735) * C30904 * C30972 *
               C31258 -
           (C5514 * C4735 + C5513 * C4734 + C4862 * C4733) * C30904 * C30972 *
               C31238) *
              C2618 +
          ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C30972 *
               C31268 -
           (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C30972 *
               C31272 -
           (C5763 * C4735 + C1434 * C4734 + C356 * C4733) * C30904 * C30972 *
               C31258 +
           (C1434 * C4733 + C5763 * C4734 +
            (C113 * C5754 + C5760 + C5760 + C31151 * C5756) * C4735) *
               C30904 * C30972 * C31238) *
              C30937)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
             C4860 * C4734 + C4861 * C4735) *
                C30904 * C31266 -
            (C5323 * C4735 + C5324 * C4734 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
                C30904 * C31255 +
            ((C113 * C481 + C516 + C516 + C31151 * C501) * C4733 +
             C5653 * C4734 + C5654 * C4735) *
                C30904 * C31231) *
               C2510 +
           ((C5324 * C4733 + C5323 * C4734 + C5655 * C4735) * C30904 * C31255 -
            (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C31266 -
            (C5656 * C4735 + C5654 * C4734 + C5653 * C4733) * C30904 * C31231) *
               C31017) *
              C2618 +
          (((C544 * C4733 + C957 * C4734 + C1596 * C4735) * C30904 * C31255 -
            (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C31266 -
            (C6474 * C4735 + C2182 * C4734 + C545 * C4733) * C30904 * C31231) *
               C2510 +
           ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C31266 -
            (C5918 * C4735 + C1596 * C4734 + C957 * C4733) * C30904 * C31255 +
            (C2182 * C4733 + C6474 * C4734 +
             (C113 * C6465 + C6471 + C6471 + C31151 * C6467) * C4735) *
                C30904 * C31231) *
               C31017) *
              C30937)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 + C8993 +
            C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 +
            C8984 * C501) *
               C31138 * C30904 * C30972 * C2510 -
           (C8989 * C1282 + C9117 + C9117 + C8984 * C1300 + C8987 * C924 +
            C9118 + C9118 + C8983 * C934 + C8985 * C291 + C9119 + C9119 +
            C8982 * C311) *
               C31138 * C30904 * C30972 * C31017) *
              C31271 +
          ((C8985 * C290 + C9123 + C9123 + C8982 * C310 + C8987 * C925 + C9124 +
            C9124 + C8983 * C935 + C8989 * C1281 + C9125 + C9125 +
            C8984 * C1299) *
               C31138 * C30904 * C30972 * C31017 -
           (C8989 * C482 + C8995 + C8995 + C8984 * C502 + C8987 * C479 + C8996 +
            C8996 + C8983 * C499 + C8985 * C116 + C8997 + C8997 +
            C8982 * C130) *
               C31138 * C30904 * C30972 * C2510) *
              C31264 +
          ((C8985 * C117 + C8998 + C8998 + C8982 * C131 + C8987 * C478 + C8999 +
            C8999 + C8983 * C498 + C8989 * C483 + C9000 + C9000 +
            C8984 * C503) *
               C31138 * C30904 * C30972 * C2510 -
           (C8989 * C1280 + C9129 + C9129 + C8984 * C1298 + C8987 * C926 +
            C9130 + C9130 + C8983 * C936 + C8985 * C289 + C9131 + C9131 +
            C8982 * C309) *
               C31138 * C30904 * C30972 * C31017) *
              C31251 +
          ((C8985 * C295 + C9361 + C9361 + C8982 * C315 + C8987 * C927 + C9362 +
            C9362 + C8983 * C937 + C8989 * C2168 + C9363 + C9363 +
            C8984 * C2170) *
               C31138 * C30904 * C30972 * C31017 -
           (C8989 * C485 + C9001 + C9001 + C8984 * C505 + C8987 * C484 + C9002 +
            C9002 + C8983 * C504 + C8985 * C118 + C9003 + C9003 +
            C8982 * C132) *
               C31138 * C30904 * C30972 * C2510) *
              C31232)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 + C8993 +
            C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 +
            C8984 * C501) *
               C31138 * C30904 * C30972 * C31272 -
           (C8989 * C1282 + C9117 + C9117 + C8984 * C1300 + C8987 * C924 +
            C9118 + C9118 + C8983 * C934 + C8985 * C291 + C9119 + C9119 +
            C8982 * C311) *
               C31138 * C30904 * C30972 * C31268 +
           (C8985 * C292 + C9120 + C9120 + C8982 * C312 + C8987 * C1285 +
            C9121 + C9121 + C8983 * C1303 + C8989 * C1286 + C9122 + C9122 +
            C8984 * C1304) *
               C31138 * C30904 * C30972 * C31258 -
           (C8989 * C5624 + C9792 + C9792 + C8984 * C5630 + C8987 * C1696 +
            C9793 + C9793 + C8983 * C1702 + C8985 * C1148 + C9794 + C9794 +
            C8982 * C1160) *
               C31138 * C30904 * C30972 * C31238) *
              C2618 +
          ((C8985 * C290 + C9123 + C9123 + C8982 * C310 + C8987 * C925 + C9124 +
            C9124 + C8983 * C935 + C8989 * C1281 + C9125 + C9125 +
            C8984 * C1299) *
               C31138 * C30904 * C30972 * C31268 -
           (C8989 * C482 + C8995 + C8995 + C8984 * C502 + C8987 * C479 + C8996 +
            C8996 + C8983 * C499 + C8985 * C116 + C8997 + C8997 +
            C8982 * C130) *
               C31138 * C30904 * C30972 * C31272 -
           (C8989 * C1287 + C9126 + C9126 + C8984 * C1305 + C8987 * C1284 +
            C9127 + C9127 + C8983 * C1302 + C8985 * C293 + C9128 + C9128 +
            C8982 * C313) *
               C31138 * C30904 * C30972 * C31258 +
           (C8985 * C1147 + C10015 + C10015 + C8982 * C1159 + C8987 * C1697 +
            C10016 + C10016 + C8983 * C1703 + C8989 * C6465 + C10017 + C10017 +
            C8984 * C6467) *
               C31138 * C30904 * C30972 * C31238) *
              C30937)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 +
             C8993 + C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 +
             C8984 * C501) *
                C31138 * C30904 * C31266 -
            (C8989 * C2000 + C9245 + C9245 + C8984 * C2012 + C8987 * C481 +
             C9246 + C9246 + C8983 * C501 + C8985 * C480 + C9247 + C9247 +
             C8982 * C500) *
                C31138 * C30904 * C31255 +
            (C8985 * C481 + C9248 + C9248 + C8982 * C501 + C8987 * C2000 +
             C9249 + C9249 + C8983 * C2012 + C8989 * C2001 + C9250 + C9250 +
             C8984 * C2013) *
                C31138 * C30904 * C31231) *
               C2510 +
           ((C8985 * C924 + C9611 + C9611 + C8982 * C934 + C8987 * C1282 +
             C9612 + C9612 + C8983 * C1300 + C8989 * C2400 + C9613 + C9613 +
             C8984 * C2406) *
                C31138 * C30904 * C31255 -
            (C8989 * C1282 + C9117 + C9117 + C8984 * C1300 + C8987 * C924 +
             C9118 + C9118 + C8983 * C934 + C8985 * C291 + C9119 + C9119 +
             C8982 * C311) *
                C31138 * C30904 * C31266 -
            (C8989 * C6308 + C9908 + C9908 + C8984 * C6314 + C8987 * C2400 +
             C9909 + C9909 + C8983 * C2406 + C8985 * C1282 + C9910 + C9910 +
             C8982 * C1300) *
                C31138 * C30904 * C31231) *
               C31017) *
              C2618 +
          (((C8985 * C479 + C9251 + C9251 + C8982 * C499 + C8987 * C482 +
             C9252 + C9252 + C8983 * C502 + C8989 * C1999 + C9253 + C9253 +
             C8984 * C2011) *
                C31138 * C30904 * C31255 -
            (C8989 * C482 + C8995 + C8995 + C8984 * C502 + C8987 * C479 +
             C8996 + C8996 + C8983 * C499 + C8985 * C116 + C8997 + C8997 +
             C8982 * C130) *
                C31138 * C30904 * C31266 -
            (C8989 * C2002 + C9254 + C9254 + C8984 * C2014 + C8987 * C1999 +
             C9255 + C9255 + C8983 * C2011 + C8985 * C482 + C9256 + C9256 +
             C8982 * C502) *
                C31138 * C30904 * C31231) *
               C2510 +
           ((C8985 * C290 + C9123 + C9123 + C8982 * C310 + C8987 * C925 +
             C9124 + C9124 + C8983 * C935 + C8989 * C1281 + C9125 + C9125 +
             C8984 * C1299) *
                C31138 * C30904 * C31266 -
            (C8989 * C2401 + C9614 + C9614 + C8984 * C2407 + C8987 * C1281 +
             C9615 + C9615 + C8983 * C1299 + C8985 * C925 + C9616 + C9616 +
             C8982 * C935) *
                C31138 * C30904 * C31255 +
            (C8985 * C1281 + C10711 + C10711 + C8982 * C1299 + C8987 * C2401 +
             C10712 + C10712 + C8983 * C2407 + C8989 * C10707 + C10713 +
             C10713 + C8984 * C10709) *
                C31138 * C30904 * C31231) *
               C31017) *
              C30937)) /
            (p * q * std::sqrt(p + q));
    d2ee[53] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
             C4860 * C4734 + C4861 * C4735) *
                C30904 * C31198 -
            (C5323 * C4735 + C5324 * C4734 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
                C30904 * C31059) *
               C2510 +
           ((C5324 * C4733 + C5323 * C4734 + C5655 * C4735) * C30904 * C31059 -
            (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C31198) *
               C31017) *
              C30931 +
          (((C544 * C4733 + C957 * C4734 + C1596 * C4735) * C30904 * C31059 -
            (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C31198) *
               C2510 +
           ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C31198 -
            (C5918 * C4735 + C1596 * C4734 + C957 * C4733) * C30904 * C31059) *
               C31017) *
              C30940 +
          (((C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C31198 -
            (C1595 * C4735 + C958 * C4734 + C543 * C4733) * C30904 * C31059) *
               C2510 +
           ((C958 * C4733 + C1595 * C4734 +
             (C113 * C1698 + C1708 + C1708 + C31151 * C1704) * C4735) *
                C30904 * C31059 -
            (C1433 * C4735 + C357 * C4734 + C354 * C4733) * C30904 * C31198) *
               C31017) *
              C2881)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
             C169 * C104 + C170 * C105) *
                C31198 -
            (C549 * C105 + C550 * C104 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
                C31059) *
               C2510 +
           (((C113 * C924 + C940 + C940 + C31151 * C934) * C31138 * C103 +
             C960 * C104 + C961 * C105) *
                C31059 -
            (C360 * C105 + C361 * C104 +
             (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
                C31198) *
               C31017) *
              C30931 +
          (((C550 * C103 + C549 * C104 + C553 * C105) * C31059 -
            (C171 * C105 + C170 * C104 + C169 * C103) * C31198) *
               C2510 +
           ((C361 * C103 + C360 * C104 + C364 * C105) * C31198 -
            (C962 * C105 + C961 * C104 + C960 * C103) * C31059) *
               C31017) *
              C30940 +
          (((C170 * C103 + C171 * C104 + C172 * C105) * C31198 -
            (C778 * C105 + C553 * C104 + C549 * C103) * C31059) *
               C2510 +
           ((C961 * C103 + C962 * C104 +
             (C113 * C928 + C950 + C950 + C31151 * C938) * C31138 * C105) *
                C31059 -
            (C668 * C105 + C364 * C104 + C360 * C103) * C31198) *
               C31017) *
              C2881)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 +
             C8993 + C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 +
             C8984 * C501) *
                C31138 * C30904 * C31198 -
            (C8989 * C2000 + C9245 + C9245 + C8984 * C2012 + C8987 * C481 +
             C9246 + C9246 + C8983 * C501 + C8985 * C480 + C9247 + C9247 +
             C8982 * C500) *
                C31138 * C30904 * C31059) *
               C2510 +
           ((C8985 * C924 + C9611 + C9611 + C8982 * C934 + C8987 * C1282 +
             C9612 + C9612 + C8983 * C1300 + C8989 * C2400 + C9613 + C9613 +
             C8984 * C2406) *
                C31138 * C30904 * C31059 -
            (C8989 * C1282 + C9117 + C9117 + C8984 * C1300 + C8987 * C924 +
             C9118 + C9118 + C8983 * C934 + C8985 * C291 + C9119 + C9119 +
             C8982 * C311) *
                C31138 * C30904 * C31198) *
               C31017) *
              C30931 +
          (((C8985 * C479 + C9251 + C9251 + C8982 * C499 + C8987 * C482 +
             C9252 + C9252 + C8983 * C502 + C8989 * C1999 + C9253 + C9253 +
             C8984 * C2011) *
                C31138 * C30904 * C31059 -
            (C8989 * C482 + C8995 + C8995 + C8984 * C502 + C8987 * C479 +
             C8996 + C8996 + C8983 * C499 + C8985 * C116 + C8997 + C8997 +
             C8982 * C130) *
                C31138 * C30904 * C31198) *
               C2510 +
           ((C8985 * C290 + C9123 + C9123 + C8982 * C310 + C8987 * C925 +
             C9124 + C9124 + C8983 * C935 + C8989 * C1281 + C9125 + C9125 +
             C8984 * C1299) *
                C31138 * C30904 * C31198 -
            (C8989 * C2401 + C9614 + C9614 + C8984 * C2407 + C8987 * C1281 +
             C9615 + C9615 + C8983 * C1299 + C8985 * C925 + C9616 + C9616 +
             C8982 * C935) *
                C31138 * C30904 * C31059) *
               C31017) *
              C30940 +
          (((C8985 * C117 + C8998 + C8998 + C8982 * C131 + C8987 * C478 +
             C8999 + C8999 + C8983 * C498 + C8989 * C483 + C9000 + C9000 +
             C8984 * C503) *
                C31138 * C30904 * C31198 -
            (C8989 * C1998 + C9257 + C9257 + C8984 * C2010 + C8987 * C483 +
             C9258 + C9258 + C8983 * C503 + C8985 * C478 + C9259 + C9259 +
             C8982 * C498) *
                C31138 * C30904 * C31059) *
               C2510 +
           ((C8985 * C926 + C9617 + C9617 + C8982 * C936 + C8987 * C1280 +
             C9618 + C9618 + C8983 * C1298 + C8989 * C2402 + C9619 + C9619 +
             C8984 * C2408) *
                C31138 * C30904 * C31059 -
            (C8989 * C1280 + C9129 + C9129 + C8984 * C1298 + C8987 * C926 +
             C9130 + C9130 + C8983 * C936 + C8985 * C289 + C9131 + C9131 +
             C8982 * C309) *
                C31138 * C30904 * C31198) *
               C31017) *
              C2881)) /
            (p * q * std::sqrt(p + q));
    d2ee[54] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C30972 * C31272 -
           (C360 * C105 + C361 * C104 +
            (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
               C30972 * C31268 +
           ((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
            C362 * C104 + C363 * C105) *
               C30972 * C31258 -
           (C1435 * C105 + C1436 * C104 +
            (C113 * C1148 + C1167 + C1167 + C31151 * C1160) * C31138 * C103) *
               C30972 * C31238) *
              C2618 +
          ((C361 * C103 + C360 * C104 + C364 * C105) * C30972 * C31268 -
           (C171 * C105 + C170 * C104 + C169 * C103) * C30972 * C31272 -
           (C365 * C105 + C363 * C104 + C362 * C103) * C30972 * C31258 +
           (C1436 * C103 + C1435 * C104 +
            (C113 * C1420 + C1428 + C1428 + C31151 * C1422) * C31138 * C105) *
               C30972 * C31238) *
              C30937)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C30972 * C2510 -
           (C360 * C105 + C361 * C104 +
            (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
               C30972 * C31017) *
              C31271 +
          ((C361 * C103 + C360 * C104 + C364 * C105) * C30972 * C31017 -
           (C171 * C105 + C170 * C104 + C169 * C103) * C30972 * C2510) *
              C31264 +
          ((C170 * C103 + C171 * C104 + C172 * C105) * C30972 * C2510 -
           (C668 * C105 + C364 * C104 + C360 * C103) * C30972 * C31017) *
              C31251 +
          ((C364 * C103 + C668 * C104 +
            (C113 * C658 + C664 + C664 + C31151 * C660) * C31138 * C105) *
               C30972 * C31017 -
           (C173 * C105 + C172 * C104 + C171 * C103) * C30972 * C2510) *
              C31232)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C30972 * C2510 -
           (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C30972 *
               C31017) *
              C31271 +
          ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C30972 *
               C31017 -
           (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C30972 *
               C2510) *
              C31264 +
          ((C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C30972 *
               C2510 -
           (C1433 * C4735 + C357 * C4734 + C354 * C4733) * C30904 * C30972 *
               C31017) *
              C31251 +
          ((C358 * C4733 + C359 * C4734 +
            (C113 * C1420 + C1428 + C1428 + C31151 * C1422) * C4735) *
               C30904 * C30972 * C31017 -
           (C359 * C4735 + C358 * C4734 + C166 * C4733) * C30904 * C30972 *
               C2510) *
              C31232)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C30972 * C31272 -
           (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C30972 *
               C31268 +
           (C4861 * C4733 + C4862 * C4734 + C5513 * C4735) * C30904 * C30972 *
               C31258 -
           (C5514 * C4735 + C5513 * C4734 + C4862 * C4733) * C30904 * C30972 *
               C31238) *
              C2618 +
          ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C30972 *
               C31268 -
           (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C30972 *
               C31272 -
           (C5763 * C4735 + C1434 * C4734 + C356 * C4733) * C30904 * C30972 *
               C31258 +
           (C1434 * C4733 + C5763 * C4734 +
            (C113 * C5754 + C5760 + C5760 + C31151 * C5756) * C4735) *
               C30904 * C30972 * C31238) *
              C30937)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 + C8993 +
            C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 +
            C8984 * C501) *
               C31138 * C30904 * C30972 * C2510 -
           (C8989 * C1282 + C9117 + C9117 + C8984 * C1300 + C8987 * C924 +
            C9118 + C9118 + C8983 * C934 + C8985 * C291 + C9119 + C9119 +
            C8982 * C311) *
               C31138 * C30904 * C30972 * C31017) *
              C31271 +
          ((C8985 * C290 + C9123 + C9123 + C8982 * C310 + C8987 * C925 + C9124 +
            C9124 + C8983 * C935 + C8989 * C1281 + C9125 + C9125 +
            C8984 * C1299) *
               C31138 * C30904 * C30972 * C31017 -
           (C8989 * C482 + C8995 + C8995 + C8984 * C502 + C8987 * C479 + C8996 +
            C8996 + C8983 * C499 + C8985 * C116 + C8997 + C8997 +
            C8982 * C130) *
               C31138 * C30904 * C30972 * C2510) *
              C31264 +
          ((C8985 * C117 + C8998 + C8998 + C8982 * C131 + C8987 * C478 + C8999 +
            C8999 + C8983 * C498 + C8989 * C483 + C9000 + C9000 +
            C8984 * C503) *
               C31138 * C30904 * C30972 * C2510 -
           (C8989 * C1280 + C9129 + C9129 + C8984 * C1298 + C8987 * C926 +
            C9130 + C9130 + C8983 * C936 + C8985 * C289 + C9131 + C9131 +
            C8982 * C309) *
               C31138 * C30904 * C30972 * C31017) *
              C31251 +
          ((C8985 * C295 + C9361 + C9361 + C8982 * C315 + C8987 * C927 + C9362 +
            C9362 + C8983 * C937 + C8989 * C2168 + C9363 + C9363 +
            C8984 * C2170) *
               C31138 * C30904 * C30972 * C31017 -
           (C8989 * C485 + C9001 + C9001 + C8984 * C505 + C8987 * C484 + C9002 +
            C9002 + C8983 * C504 + C8985 * C118 + C9003 + C9003 +
            C8982 * C132) *
               C31138 * C30904 * C30972 * C2510) *
              C31232)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 + C8993 +
            C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 +
            C8984 * C501) *
               C31138 * C30904 * C30972 * C31272 -
           (C8989 * C1282 + C9117 + C9117 + C8984 * C1300 + C8987 * C924 +
            C9118 + C9118 + C8983 * C934 + C8985 * C291 + C9119 + C9119 +
            C8982 * C311) *
               C31138 * C30904 * C30972 * C31268 +
           (C8985 * C292 + C9120 + C9120 + C8982 * C312 + C8987 * C1285 +
            C9121 + C9121 + C8983 * C1303 + C8989 * C1286 + C9122 + C9122 +
            C8984 * C1304) *
               C31138 * C30904 * C30972 * C31258 -
           (C8989 * C5624 + C9792 + C9792 + C8984 * C5630 + C8987 * C1696 +
            C9793 + C9793 + C8983 * C1702 + C8985 * C1148 + C9794 + C9794 +
            C8982 * C1160) *
               C31138 * C30904 * C30972 * C31238) *
              C2618 +
          ((C8985 * C290 + C9123 + C9123 + C8982 * C310 + C8987 * C925 + C9124 +
            C9124 + C8983 * C935 + C8989 * C1281 + C9125 + C9125 +
            C8984 * C1299) *
               C31138 * C30904 * C30972 * C31268 -
           (C8989 * C482 + C8995 + C8995 + C8984 * C502 + C8987 * C479 + C8996 +
            C8996 + C8983 * C499 + C8985 * C116 + C8997 + C8997 +
            C8982 * C130) *
               C31138 * C30904 * C30972 * C31272 -
           (C8989 * C1287 + C9126 + C9126 + C8984 * C1305 + C8987 * C1284 +
            C9127 + C9127 + C8983 * C1302 + C8985 * C293 + C9128 + C9128 +
            C8982 * C313) *
               C31138 * C30904 * C30972 * C31258 +
           (C8985 * C1147 + C10015 + C10015 + C8982 * C1159 + C8987 * C1697 +
            C10016 + C10016 + C8983 * C1703 + C8989 * C6465 + C10017 + C10017 +
            C8984 * C6467) *
               C31138 * C30904 * C30972 * C31238) *
              C30937)) /
            (p * q * std::sqrt(p + q));
    d2ee[55] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
             C4860 * C4734 + C4861 * C4735) *
                C30904 * C3272 -
            (C5323 * C4735 + C5324 * C4734 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
                C30904 * C31059) *
               C31013 +
           ((C5324 * C4733 + C5323 * C4734 + C5655 * C4735) * C30904 * C31059 -
            (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C3272) *
               C31020 +
           ((C4861 * C4733 + C4862 * C4734 + C5513 * C4735) * C30904 * C3272 -
            (C6025 * C4735 + C5655 * C4734 + C5323 * C4733) * C30904 * C31059) *
               C2878) *
              C31183 +
          (((C544 * C4733 + C957 * C4734 + C1596 * C4735) * C30904 * C31059 -
            (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C3272) *
               C31013 +
           ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C3272 -
            (C5918 * C4735 + C1596 * C4734 + C957 * C4733) * C30904 * C31059) *
               C31020 +
           ((C1596 * C4733 + C5918 * C4734 +
             (C113 * C5909 + C5915 + C5915 + C31151 * C5911) * C4735) *
                C30904 * C31059 -
            (C5763 * C4735 + C1434 * C4734 + C356 * C4733) * C30904 * C3272) *
               C2878) *
              C30937)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
             C169 * C104 + C170 * C105) *
                C3272 -
            (C549 * C105 + C550 * C104 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
                C31059) *
               C31013 +
           (((C113 * C924 + C940 + C940 + C31151 * C934) * C31138 * C103 +
             C960 * C104 + C961 * C105) *
                C31059 -
            (C360 * C105 + C361 * C104 +
             (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
                C3272) *
               C31020 +
           (((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
             C362 * C104 + C363 * C105) *
                C3272 -
            (C1597 * C105 + C1598 * C104 +
             (C113 * C1285 + C1313 + C1313 + C31151 * C1303) * C31138 * C103) *
                C31059) *
               C2878) *
              C31183 +
          (((C550 * C103 + C549 * C104 + C553 * C105) * C31059 -
            (C171 * C105 + C170 * C104 + C169 * C103) * C3272) *
               C31013 +
           ((C361 * C103 + C360 * C104 + C364 * C105) * C3272 -
            (C962 * C105 + C961 * C104 + C960 * C103) * C31059) *
               C31020 +
           ((C1598 * C103 + C1597 * C104 +
             (C113 * C1582 + C1590 + C1590 + C31151 * C1584) * C31138 * C105) *
                C31059 -
            (C365 * C105 + C363 * C104 + C362 * C103) * C3272) *
               C2878) *
              C30937)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 +
             C8993 + C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 +
             C8984 * C501) *
                C31138 * C30904 * C3272 -
            (C8989 * C2000 + C9245 + C9245 + C8984 * C2012 + C8987 * C481 +
             C9246 + C9246 + C8983 * C501 + C8985 * C480 + C9247 + C9247 +
             C8982 * C500) *
                C31138 * C30904 * C31059) *
               C31013 +
           ((C8985 * C924 + C9611 + C9611 + C8982 * C934 + C8987 * C1282 +
             C9612 + C9612 + C8983 * C1300 + C8989 * C2400 + C9613 + C9613 +
             C8984 * C2406) *
                C31138 * C30904 * C31059 -
            (C8989 * C1282 + C9117 + C9117 + C8984 * C1300 + C8987 * C924 +
             C9118 + C9118 + C8983 * C934 + C8985 * C291 + C9119 + C9119 +
             C8982 * C311) *
                C31138 * C30904 * C3272) *
               C31020 +
           ((C8985 * C292 + C9120 + C9120 + C8982 * C312 + C8987 * C1285 +
             C9121 + C9121 + C8983 * C1303 + C8989 * C1286 + C9122 + C9122 +
             C8984 * C1304) *
                C31138 * C30904 * C3272 -
            (C8989 * C6307 + C9911 + C9911 + C8984 * C6313 + C8987 * C1286 +
             C9912 + C9912 + C8983 * C1304 + C8985 * C1285 + C9913 + C9913 +
             C8982 * C1303) *
                C31138 * C30904 * C31059) *
               C2878) *
              C31183 +
          (((C8985 * C479 + C9251 + C9251 + C8982 * C499 + C8987 * C482 +
             C9252 + C9252 + C8983 * C502 + C8989 * C1999 + C9253 + C9253 +
             C8984 * C2011) *
                C31138 * C30904 * C31059 -
            (C8989 * C482 + C8995 + C8995 + C8984 * C502 + C8987 * C479 +
             C8996 + C8996 + C8983 * C499 + C8985 * C116 + C8997 + C8997 +
             C8982 * C130) *
                C31138 * C30904 * C3272) *
               C31013 +
           ((C8985 * C290 + C9123 + C9123 + C8982 * C310 + C8987 * C925 +
             C9124 + C9124 + C8983 * C935 + C8989 * C1281 + C9125 + C9125 +
             C8984 * C1299) *
                C31138 * C30904 * C3272 -
            (C8989 * C2401 + C9614 + C9614 + C8984 * C2407 + C8987 * C1281 +
             C9615 + C9615 + C8983 * C1299 + C8985 * C925 + C9616 + C9616 +
             C8982 * C935) *
                C31138 * C30904 * C31059) *
               C31020 +
           ((C8985 * C1284 + C10164 + C10164 + C8982 * C1302 + C8987 * C1287 +
             C10165 + C10165 + C8983 * C1305 + C8989 * C6572 + C10166 + C10166 +
             C8984 * C6574) *
                C31138 * C30904 * C31059 -
            (C8989 * C1287 + C9126 + C9126 + C8984 * C1305 + C8987 * C1284 +
             C9127 + C9127 + C8983 * C1302 + C8985 * C293 + C9128 + C9128 +
             C8982 * C313) *
                C31138 * C30904 * C3272) *
               C2878) *
              C30937)) /
            (p * q * std::sqrt(p + q));
    d2ee[56] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C31055 -
           (C5323 * C4735 + C5324 * C4734 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
               C30904 * C31062 +
           ((C113 * C481 + C516 + C516 + C31151 * C501) * C4733 +
            C5653 * C4734 + C5654 * C4735) *
               C30904 * C3780) *
              C31013 +
          ((C5324 * C4733 + C5323 * C4734 + C5655 * C4735) * C30904 * C31062 -
           (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C31055 -
           (C5656 * C4735 + C5654 * C4734 + C5653 * C4733) * C30904 * C3780) *
              C31020 +
          ((C4861 * C4733 + C4862 * C4734 + C5513 * C4735) * C30904 * C31055 -
           (C6025 * C4735 + C5655 * C4734 + C5323 * C4733) * C30904 * C31062 +
           (C5654 * C4733 + C5656 * C4734 +
            (C113 * C5626 + C5644 + C5644 + C31151 * C5632) * C4735) *
               C30904 * C3780) *
              C2878) *
         C30926) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C31055 -
           (C549 * C105 + C550 * C104 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
               C31062 +
           ((C113 * C481 + C516 + C516 + C31151 * C501) * C31138 * C103 +
            C551 * C104 + C552 * C105) *
               C3780) *
              C31013 +
          (((C113 * C924 + C940 + C940 + C31151 * C934) * C31138 * C103 +
            C960 * C104 + C961 * C105) *
               C31062 -
           (C360 * C105 + C361 * C104 +
            (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
               C31055 -
           (C2183 * C105 + C2184 * C104 +
            (C113 * C1282 + C1310 + C1310 + C31151 * C1300) * C31138 * C103) *
               C3780) *
              C31020 +
          (((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
            C362 * C104 + C363 * C105) *
               C31055 -
           (C1597 * C105 + C1598 * C104 +
            (C113 * C1285 + C1313 + C1313 + C31151 * C1303) * C31138 * C103) *
               C31062 +
           ((C113 * C1286 + C1314 + C1314 + C31151 * C1304) * C31138 * C103 +
            (C113 * C1287 + C1315 + C1315 + C31151 * C1305) * C31138 * C104 +
            (C113 * C1288 + C1316 + C1316 + C31151 * C1306) * C31138 * C105) *
               C3780) *
              C2878) *
         C30926) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 + C8993 +
            C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 +
            C8984 * C501) *
               C31138 * C30904 * C31055 -
           (C8989 * C2000 + C9245 + C9245 + C8984 * C2012 + C8987 * C481 +
            C9246 + C9246 + C8983 * C501 + C8985 * C480 + C9247 + C9247 +
            C8982 * C500) *
               C31138 * C30904 * C31062 +
           (C8985 * C481 + C9248 + C9248 + C8982 * C501 + C8987 * C2000 +
            C9249 + C9249 + C8983 * C2012 + C8989 * C2001 + C9250 + C9250 +
            C8984 * C2013) *
               C31138 * C30904 * C3780) *
              C31013 +
          ((C8985 * C924 + C9611 + C9611 + C8982 * C934 + C8987 * C1282 +
            C9612 + C9612 + C8983 * C1300 + C8989 * C2400 + C9613 + C9613 +
            C8984 * C2406) *
               C31138 * C30904 * C31062 -
           (C8989 * C1282 + C9117 + C9117 + C8984 * C1300 + C8987 * C924 +
            C9118 + C9118 + C8983 * C934 + C8985 * C291 + C9119 + C9119 +
            C8982 * C311) *
               C31138 * C30904 * C31055 -
           (C8989 * C6308 + C9908 + C9908 + C8984 * C6314 + C8987 * C2400 +
            C9909 + C9909 + C8983 * C2406 + C8985 * C1282 + C9910 + C9910 +
            C8982 * C1300) *
               C31138 * C30904 * C3780) *
              C31020 +
          ((C8985 * C292 + C9120 + C9120 + C8982 * C312 + C8987 * C1285 +
            C9121 + C9121 + C8983 * C1303 + C8989 * C1286 + C9122 + C9122 +
            C8984 * C1304) *
               C31138 * C30904 * C31055 -
           (C8989 * C6307 + C9911 + C9911 + C8984 * C6313 + C8987 * C1286 +
            C9912 + C9912 + C8983 * C1304 + C8985 * C1285 + C9913 + C9913 +
            C8982 * C1303) *
               C31138 * C30904 * C31062 +
           (C8985 * C1286 + C9914 + C9914 + C8982 * C1304 + C8987 * C6307 +
            C9915 + C9915 + C8983 * C6313 + C8989 * C6309 + C9916 + C9916 +
            C8984 * C6315) *
               C31138 * C30904 * C3780) *
              C2878) *
         C30926) /
            (p * q * std::sqrt(p + q));
    d2ee[57] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             (((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
                 C169 * C104 + C170 * C105) *
                    C3272 -
                (C549 * C105 + C550 * C104 +
                 (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
                    C31059) *
                   C2510 +
               (((C113 * C924 + C940 + C940 + C31151 * C934) * C31138 * C103 +
                 C960 * C104 + C961 * C105) *
                    C31059 -
                (C360 * C105 + C361 * C104 +
                 (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
                    C3272) *
                   C31017) *
                  C31262 +
              (((C550 * C103 + C549 * C104 + C553 * C105) * C31059 -
                (C171 * C105 + C170 * C104 + C169 * C103) * C3272) *
                   C2510 +
               ((C361 * C103 + C360 * C104 + C364 * C105) * C3272 -
                (C962 * C105 + C961 * C104 + C960 * C103) * C31059) *
                   C31017) *
                  C31249 +
              (((C170 * C103 + C171 * C104 + C172 * C105) * C3272 -
                (C778 * C105 + C553 * C104 + C549 * C103) * C31059) *
                   C2510 +
               ((C961 * C103 + C962 * C104 +
                 (C113 * C928 + C950 + C950 + C31151 * C938) * C31138 * C105) *
                    C31059 -
                (C668 * C105 + C364 * C104 + C360 * C103) * C3272) *
                   C31017) *
                  C31222) +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
                C169 * C104 + C170 * C105) *
                   C3272 -
               (C549 * C105 + C550 * C104 +
                (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
                   C31059) *
                  C31272 +
              (((C113 * C924 + C940 + C940 + C31151 * C934) * C31138 * C103 +
                C960 * C104 + C961 * C105) *
                   C31059 -
               (C360 * C105 + C361 * C104 +
                (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
                   C3272) *
                  C31268 +
              (((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
                C362 * C104 + C363 * C105) *
                   C3272 -
               (C1597 * C105 + C1598 * C104 +
                (C113 * C1285 + C1313 + C1313 + C31151 * C1303) * C31138 *
                    C103) *
                   C31059) *
                  C31258 +
              (((C113 * C1696 + C1706 + C1706 + C31151 * C1702) * C31138 *
                    C103 +
                (C113 * C1697 + C1707 + C1707 + C31151 * C1703) * C31138 *
                    C104 +
                (C113 * C1698 + C1708 + C1708 + C31151 * C1704) * C31138 *
                    C105) *
                   C31059 -
               (C1435 * C105 + C1436 * C104 +
                (C113 * C1148 + C1167 + C1167 + C31151 * C1160) * C31138 *
                    C103) *
                   C3272) *
                  C31238) *
             C30926) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C31273 -
           (C549 * C105 + C550 * C104 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
               C31270 +
           ((C113 * C481 + C516 + C516 + C31151 * C501) * C31138 * C103 +
            C551 * C104 + C552 * C105) *
               C31261 -
           (C2301 * C105 + C2302 * C104 +
            (C113 * C2000 + C2019 + C2019 + C31151 * C2012) * C31138 * C103) *
               C31244) *
              C2510 +
          (((C113 * C924 + C940 + C940 + C31151 * C934) * C31138 * C103 +
            C960 * C104 + C961 * C105) *
               C31270 -
           (C360 * C105 + C361 * C104 +
            (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
               C31273 -
           (C2183 * C105 + C2184 * C104 +
            (C113 * C1282 + C1310 + C1310 + C31151 * C1300) * C31138 * C103) *
               C31261 +
           ((C113 * C2400 + C2410 + C2410 + C31151 * C2406) * C31138 * C103 +
            (C113 * C2401 + C2411 + C2411 + C31151 * C2407) * C31138 * C104 +
            (C113 * C2402 + C2412 + C2412 + C31151 * C2408) * C31138 * C105) *
               C31244) *
              C31017) *
         C30926) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
             C4860 * C4734 + C4861 * C4735) *
                C30904 * C3272 -
            (C5323 * C4735 + C5324 * C4734 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
                C30904 * C31059) *
               C2510 +
           ((C5324 * C4733 + C5323 * C4734 + C5655 * C4735) * C30904 * C31059 -
            (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C3272) *
               C31017) *
              C31262 +
          (((C544 * C4733 + C957 * C4734 + C1596 * C4735) * C30904 * C31059 -
            (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C3272) *
               C2510 +
           ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C3272 -
            (C5918 * C4735 + C1596 * C4734 + C957 * C4733) * C30904 * C31059) *
               C31017) *
              C31249 +
          (((C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C3272 -
            (C1595 * C4735 + C958 * C4734 + C543 * C4733) * C30904 * C31059) *
               C2510 +
           ((C958 * C4733 + C1595 * C4734 +
             (C113 * C1698 + C1708 + C1708 + C31151 * C1704) * C4735) *
                C30904 * C31059 -
            (C1433 * C4735 + C357 * C4734 + C354 * C4733) * C30904 * C3272) *
               C31017) *
              C31222)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C3272 -
           (C5323 * C4735 + C5324 * C4734 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
               C30904 * C31059) *
              C31272 +
          ((C5324 * C4733 + C5323 * C4734 + C5655 * C4735) * C30904 * C31059 -
           (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C3272) *
              C31268 +
          ((C4861 * C4733 + C4862 * C4734 + C5513 * C4735) * C30904 * C3272 -
           (C6025 * C4735 + C5655 * C4734 + C5323 * C4733) * C30904 * C31059) *
              C31258 +
          ((C5655 * C4733 + C6025 * C4734 +
            (C113 * C6016 + C6022 + C6022 + C31151 * C6018) * C4735) *
               C30904 * C31059 -
           (C5514 * C4735 + C5513 * C4734 + C4862 * C4733) * C30904 * C3272) *
              C31238) *
         C30926) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C31273 -
           (C5323 * C4735 + C5324 * C4734 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
               C30904 * C31270 +
           ((C113 * C481 + C516 + C516 + C31151 * C501) * C4733 +
            C5653 * C4734 + C5654 * C4735) *
               C30904 * C31261 -
           (C6687 * C4735 + C6688 * C4734 +
            (C113 * C2000 + C2019 + C2019 + C31151 * C2012) * C4733) *
               C30904 * C31244) *
              C2510 +
          ((C5324 * C4733 + C5323 * C4734 + C5655 * C4735) * C30904 * C31270 -
           (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C31273 -
           (C5656 * C4735 + C5654 * C4734 + C5653 * C4733) * C30904 * C31261 +
           (C6688 * C4733 + C6687 * C4734 +
            (C113 * C6674 + C6682 + C6682 + C31151 * C6676) * C4735) *
               C30904 * C31244) *
              C31017) *
         C30926) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 +
             C8993 + C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 +
             C8984 * C501) *
                C31138 * C30904 * C3272 -
            (C8989 * C2000 + C9245 + C9245 + C8984 * C2012 + C8987 * C481 +
             C9246 + C9246 + C8983 * C501 + C8985 * C480 + C9247 + C9247 +
             C8982 * C500) *
                C31138 * C30904 * C31059) *
               C2510 +
           ((C8985 * C924 + C9611 + C9611 + C8982 * C934 + C8987 * C1282 +
             C9612 + C9612 + C8983 * C1300 + C8989 * C2400 + C9613 + C9613 +
             C8984 * C2406) *
                C31138 * C30904 * C31059 -
            (C8989 * C1282 + C9117 + C9117 + C8984 * C1300 + C8987 * C924 +
             C9118 + C9118 + C8983 * C934 + C8985 * C291 + C9119 + C9119 +
             C8982 * C311) *
                C31138 * C30904 * C3272) *
               C31017) *
              C31262 +
          (((C8985 * C479 + C9251 + C9251 + C8982 * C499 + C8987 * C482 +
             C9252 + C9252 + C8983 * C502 + C8989 * C1999 + C9253 + C9253 +
             C8984 * C2011) *
                C31138 * C30904 * C31059 -
            (C8989 * C482 + C8995 + C8995 + C8984 * C502 + C8987 * C479 +
             C8996 + C8996 + C8983 * C499 + C8985 * C116 + C8997 + C8997 +
             C8982 * C130) *
                C31138 * C30904 * C3272) *
               C2510 +
           ((C8985 * C290 + C9123 + C9123 + C8982 * C310 + C8987 * C925 +
             C9124 + C9124 + C8983 * C935 + C8989 * C1281 + C9125 + C9125 +
             C8984 * C1299) *
                C31138 * C30904 * C3272 -
            (C8989 * C2401 + C9614 + C9614 + C8984 * C2407 + C8987 * C1281 +
             C9615 + C9615 + C8983 * C1299 + C8985 * C925 + C9616 + C9616 +
             C8982 * C935) *
                C31138 * C30904 * C31059) *
               C31017) *
              C31249 +
          (((C8985 * C117 + C8998 + C8998 + C8982 * C131 + C8987 * C478 +
             C8999 + C8999 + C8983 * C498 + C8989 * C483 + C9000 + C9000 +
             C8984 * C503) *
                C31138 * C30904 * C3272 -
            (C8989 * C1998 + C9257 + C9257 + C8984 * C2010 + C8987 * C483 +
             C9258 + C9258 + C8983 * C503 + C8985 * C478 + C9259 + C9259 +
             C8982 * C498) *
                C31138 * C30904 * C31059) *
               C2510 +
           ((C8985 * C926 + C9617 + C9617 + C8982 * C936 + C8987 * C1280 +
             C9618 + C9618 + C8983 * C1298 + C8989 * C2402 + C9619 + C9619 +
             C8984 * C2408) *
                C31138 * C30904 * C31059 -
            (C8989 * C1280 + C9129 + C9129 + C8984 * C1298 + C8987 * C926 +
             C9130 + C9130 + C8983 * C936 + C8985 * C289 + C9131 + C9131 +
             C8982 * C309) *
                C31138 * C30904 * C3272) *
               C31017) *
              C31222)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 + C8993 +
            C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 +
            C8984 * C501) *
               C31138 * C30904 * C3272 -
           (C8989 * C2000 + C9245 + C9245 + C8984 * C2012 + C8987 * C481 +
            C9246 + C9246 + C8983 * C501 + C8985 * C480 + C9247 + C9247 +
            C8982 * C500) *
               C31138 * C30904 * C31059) *
              C31272 +
          ((C8985 * C924 + C9611 + C9611 + C8982 * C934 + C8987 * C1282 +
            C9612 + C9612 + C8983 * C1300 + C8989 * C2400 + C9613 + C9613 +
            C8984 * C2406) *
               C31138 * C30904 * C31059 -
           (C8989 * C1282 + C9117 + C9117 + C8984 * C1300 + C8987 * C924 +
            C9118 + C9118 + C8983 * C934 + C8985 * C291 + C9119 + C9119 +
            C8982 * C311) *
               C31138 * C30904 * C3272) *
              C31268 +
          ((C8985 * C292 + C9120 + C9120 + C8982 * C312 + C8987 * C1285 +
            C9121 + C9121 + C8983 * C1303 + C8989 * C1286 + C9122 + C9122 +
            C8984 * C1304) *
               C31138 * C30904 * C3272 -
           (C8989 * C6307 + C9911 + C9911 + C8984 * C6313 + C8987 * C1286 +
            C9912 + C9912 + C8983 * C1304 + C8985 * C1285 + C9913 + C9913 +
            C8982 * C1303) *
               C31138 * C30904 * C31059) *
              C31258 +
          ((C8985 * C1696 + C10265 + C10265 + C8982 * C1702 + C8987 * C5624 +
            C10266 + C10266 + C8983 * C5630 + C8989 * C6674 + C10267 + C10267 +
            C8984 * C6676) *
               C31138 * C30904 * C31059 -
           (C8989 * C5624 + C9792 + C9792 + C8984 * C5630 + C8987 * C1696 +
            C9793 + C9793 + C8983 * C1702 + C8985 * C1148 + C9794 + C9794 +
            C8982 * C1160) *
               C31138 * C30904 * C3272) *
              C31238) *
         C30926) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 + C8993 +
            C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 +
            C8984 * C501) *
               C31138 * C30904 * C31273 -
           (C8989 * C2000 + C9245 + C9245 + C8984 * C2012 + C8987 * C481 +
            C9246 + C9246 + C8983 * C501 + C8985 * C480 + C9247 + C9247 +
            C8982 * C500) *
               C31138 * C30904 * C31270 +
           (C8985 * C481 + C9248 + C9248 + C8982 * C501 + C8987 * C2000 +
            C9249 + C9249 + C8983 * C2012 + C8989 * C2001 + C9250 + C9250 +
            C8984 * C2013) *
               C31138 * C30904 * C31261 -
           (C8989 * C10549 + C10556 + C10556 + C8984 * C10553 + C8987 * C2001 +
            C10557 + C10557 + C8983 * C2013 + C8985 * C2000 + C10558 + C10558 +
            C8982 * C2012) *
               C31138 * C30904 * C31244) *
              C2510 +
          ((C8985 * C924 + C9611 + C9611 + C8982 * C934 + C8987 * C1282 +
            C9612 + C9612 + C8983 * C1300 + C8989 * C2400 + C9613 + C9613 +
            C8984 * C2406) *
               C31138 * C30904 * C31270 -
           (C8989 * C1282 + C9117 + C9117 + C8984 * C1300 + C8987 * C924 +
            C9118 + C9118 + C8983 * C934 + C8985 * C291 + C9119 + C9119 +
            C8982 * C311) *
               C31138 * C30904 * C31273 -
           (C8989 * C6308 + C9908 + C9908 + C8984 * C6314 + C8987 * C2400 +
            C9909 + C9909 + C8983 * C2406 + C8985 * C1282 + C9910 + C9910 +
            C8982 * C1300) *
               C31138 * C30904 * C31261 +
           (C8985 * C2400 + C10919 + C10919 + C8982 * C2406 + C8987 * C6308 +
            C10920 + C10920 + C8983 * C6314 + C8989 * C10915 + C10921 + C10921 +
            C8984 * C10917) *
               C31138 * C30904 * C31244) *
              C31017) *
         C30926) /
            (p * q * std::sqrt(p + q));
    d2ee[58] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
             C4860 * C4734 + C4861 * C4735) *
                C30904 * C31055 -
            (C5323 * C4735 + C5324 * C4734 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
                C30904 * C31062 +
            ((C113 * C481 + C516 + C516 + C31151 * C501) * C4733 +
             C5653 * C4734 + C5654 * C4735) *
                C30904 * C3780) *
               C2510 +
           ((C5324 * C4733 + C5323 * C4734 + C5655 * C4735) * C30904 * C31062 -
            (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C31055 -
            (C5656 * C4735 + C5654 * C4734 + C5653 * C4733) * C30904 * C3780) *
               C31017) *
              C31183 +
          (((C544 * C4733 + C957 * C4734 + C1596 * C4735) * C30904 * C31062 -
            (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C31055 -
            (C6474 * C4735 + C2182 * C4734 + C545 * C4733) * C30904 * C3780) *
               C2510 +
           ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C31055 -
            (C5918 * C4735 + C1596 * C4734 + C957 * C4733) * C30904 * C31062 +
            (C2182 * C4733 + C6474 * C4734 +
             (C113 * C6465 + C6471 + C6471 + C31151 * C6467) * C4735) *
                C30904 * C3780) *
               C31017) *
              C30937)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
             C169 * C104 + C170 * C105) *
                C31055 -
            (C549 * C105 + C550 * C104 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
                C31062 +
            ((C113 * C481 + C516 + C516 + C31151 * C501) * C31138 * C103 +
             C551 * C104 + C552 * C105) *
                C3780) *
               C2510 +
           (((C113 * C924 + C940 + C940 + C31151 * C934) * C31138 * C103 +
             C960 * C104 + C961 * C105) *
                C31062 -
            (C360 * C105 + C361 * C104 +
             (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
                C31055 -
            (C2183 * C105 + C2184 * C104 +
             (C113 * C1282 + C1310 + C1310 + C31151 * C1300) * C31138 * C103) *
                C3780) *
               C31017) *
              C31183 +
          (((C550 * C103 + C549 * C104 + C553 * C105) * C31062 -
            (C171 * C105 + C170 * C104 + C169 * C103) * C31055 -
            (C554 * C105 + C552 * C104 + C551 * C103) * C3780) *
               C2510 +
           ((C361 * C103 + C360 * C104 + C364 * C105) * C31055 -
            (C962 * C105 + C961 * C104 + C960 * C103) * C31062 +
            (C2184 * C103 + C2183 * C104 +
             (C113 * C2168 + C2176 + C2176 + C31151 * C2170) * C31138 * C105) *
                C3780) *
               C31017) *
              C30937)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 +
             C8993 + C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 +
             C8984 * C501) *
                C31138 * C30904 * C31055 -
            (C8989 * C2000 + C9245 + C9245 + C8984 * C2012 + C8987 * C481 +
             C9246 + C9246 + C8983 * C501 + C8985 * C480 + C9247 + C9247 +
             C8982 * C500) *
                C31138 * C30904 * C31062 +
            (C8985 * C481 + C9248 + C9248 + C8982 * C501 + C8987 * C2000 +
             C9249 + C9249 + C8983 * C2012 + C8989 * C2001 + C9250 + C9250 +
             C8984 * C2013) *
                C31138 * C30904 * C3780) *
               C2510 +
           ((C8985 * C924 + C9611 + C9611 + C8982 * C934 + C8987 * C1282 +
             C9612 + C9612 + C8983 * C1300 + C8989 * C2400 + C9613 + C9613 +
             C8984 * C2406) *
                C31138 * C30904 * C31062 -
            (C8989 * C1282 + C9117 + C9117 + C8984 * C1300 + C8987 * C924 +
             C9118 + C9118 + C8983 * C934 + C8985 * C291 + C9119 + C9119 +
             C8982 * C311) *
                C31138 * C30904 * C31055 -
            (C8989 * C6308 + C9908 + C9908 + C8984 * C6314 + C8987 * C2400 +
             C9909 + C9909 + C8983 * C2406 + C8985 * C1282 + C9910 + C9910 +
             C8982 * C1300) *
                C31138 * C30904 * C3780) *
               C31017) *
              C31183 +
          (((C8985 * C479 + C9251 + C9251 + C8982 * C499 + C8987 * C482 +
             C9252 + C9252 + C8983 * C502 + C8989 * C1999 + C9253 + C9253 +
             C8984 * C2011) *
                C31138 * C30904 * C31062 -
            (C8989 * C482 + C8995 + C8995 + C8984 * C502 + C8987 * C479 +
             C8996 + C8996 + C8983 * C499 + C8985 * C116 + C8997 + C8997 +
             C8982 * C130) *
                C31138 * C30904 * C31055 -
            (C8989 * C2002 + C9254 + C9254 + C8984 * C2014 + C8987 * C1999 +
             C9255 + C9255 + C8983 * C2011 + C8985 * C482 + C9256 + C9256 +
             C8982 * C502) *
                C31138 * C30904 * C3780) *
               C2510 +
           ((C8985 * C290 + C9123 + C9123 + C8982 * C310 + C8987 * C925 +
             C9124 + C9124 + C8983 * C935 + C8989 * C1281 + C9125 + C9125 +
             C8984 * C1299) *
                C31138 * C30904 * C31055 -
            (C8989 * C2401 + C9614 + C9614 + C8984 * C2407 + C8987 * C1281 +
             C9615 + C9615 + C8983 * C1299 + C8985 * C925 + C9616 + C9616 +
             C8982 * C935) *
                C31138 * C30904 * C31062 +
            (C8985 * C1281 + C10711 + C10711 + C8982 * C1299 + C8987 * C2401 +
             C10712 + C10712 + C8983 * C2407 + C8989 * C10707 + C10713 +
             C10713 + C8984 * C10709) *
                C31138 * C30904 * C3780) *
               C31017) *
              C30937)) /
            (p * q * std::sqrt(p + q));
    d2ee[59] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C3272 -
           (C549 * C105 + C550 * C104 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
               C31059) *
              C31272 +
          (((C113 * C924 + C940 + C940 + C31151 * C934) * C31138 * C103 +
            C960 * C104 + C961 * C105) *
               C31059 -
           (C360 * C105 + C361 * C104 +
            (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
               C3272) *
              C31268 +
          (((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
            C362 * C104 + C363 * C105) *
               C3272 -
           (C1597 * C105 + C1598 * C104 +
            (C113 * C1285 + C1313 + C1313 + C31151 * C1303) * C31138 * C103) *
               C31059) *
              C31258 +
          (((C113 * C1696 + C1706 + C1706 + C31151 * C1702) * C31138 * C103 +
            (C113 * C1697 + C1707 + C1707 + C31151 * C1703) * C31138 * C104 +
            (C113 * C1698 + C1708 + C1708 + C31151 * C1704) * C31138 * C105) *
               C31059 -
           (C1435 * C105 + C1436 * C104 +
            (C113 * C1148 + C1167 + C1167 + C31151 * C1160) * C31138 * C103) *
               C3272) *
              C31238) *
         C30926) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
             C169 * C104 + C170 * C105) *
                C3272 -
            (C549 * C105 + C550 * C104 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
                C31059) *
               C2510 +
           (((C113 * C924 + C940 + C940 + C31151 * C934) * C31138 * C103 +
             C960 * C104 + C961 * C105) *
                C31059 -
            (C360 * C105 + C361 * C104 +
             (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
                C3272) *
               C31017) *
              C31262 +
          (((C550 * C103 + C549 * C104 + C553 * C105) * C31059 -
            (C171 * C105 + C170 * C104 + C169 * C103) * C3272) *
               C2510 +
           ((C361 * C103 + C360 * C104 + C364 * C105) * C3272 -
            (C962 * C105 + C961 * C104 + C960 * C103) * C31059) *
               C31017) *
              C31249 +
          (((C170 * C103 + C171 * C104 + C172 * C105) * C3272 -
            (C778 * C105 + C553 * C104 + C549 * C103) * C31059) *
               C2510 +
           ((C961 * C103 + C962 * C104 +
             (C113 * C928 + C950 + C950 + C31151 * C938) * C31138 * C105) *
                C31059 -
            (C668 * C105 + C364 * C104 + C360 * C103) * C3272) *
               C31017) *
              C31222)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
             C4860 * C4734 + C4861 * C4735) *
                C30904 * C3272 -
            (C5323 * C4735 + C5324 * C4734 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
                C30904 * C31059) *
               C2510 +
           ((C5324 * C4733 + C5323 * C4734 + C5655 * C4735) * C30904 * C31059 -
            (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C3272) *
               C31017) *
              C31262 +
          (((C544 * C4733 + C957 * C4734 + C1596 * C4735) * C30904 * C31059 -
            (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C3272) *
               C2510 +
           ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C3272 -
            (C5918 * C4735 + C1596 * C4734 + C957 * C4733) * C30904 * C31059) *
               C31017) *
              C31249 +
          (((C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C3272 -
            (C1595 * C4735 + C958 * C4734 + C543 * C4733) * C30904 * C31059) *
               C2510 +
           ((C958 * C4733 + C1595 * C4734 +
             (C113 * C1698 + C1708 + C1708 + C31151 * C1704) * C4735) *
                C30904 * C31059 -
            (C1433 * C4735 + C357 * C4734 + C354 * C4733) * C30904 * C3272) *
               C31017) *
              C31222)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C3272 -
           (C5323 * C4735 + C5324 * C4734 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
               C30904 * C31059) *
              C31272 +
          ((C5324 * C4733 + C5323 * C4734 + C5655 * C4735) * C30904 * C31059 -
           (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C3272) *
              C31268 +
          ((C4861 * C4733 + C4862 * C4734 + C5513 * C4735) * C30904 * C3272 -
           (C6025 * C4735 + C5655 * C4734 + C5323 * C4733) * C30904 * C31059) *
              C31258 +
          ((C5655 * C4733 + C6025 * C4734 +
            (C113 * C6016 + C6022 + C6022 + C31151 * C6018) * C4735) *
               C30904 * C31059 -
           (C5514 * C4735 + C5513 * C4734 + C4862 * C4733) * C30904 * C3272) *
              C31238) *
         C30926) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 +
             C8993 + C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 +
             C8984 * C501) *
                C31138 * C30904 * C3272 -
            (C8989 * C2000 + C9245 + C9245 + C8984 * C2012 + C8987 * C481 +
             C9246 + C9246 + C8983 * C501 + C8985 * C480 + C9247 + C9247 +
             C8982 * C500) *
                C31138 * C30904 * C31059) *
               C2510 +
           ((C8985 * C924 + C9611 + C9611 + C8982 * C934 + C8987 * C1282 +
             C9612 + C9612 + C8983 * C1300 + C8989 * C2400 + C9613 + C9613 +
             C8984 * C2406) *
                C31138 * C30904 * C31059 -
            (C8989 * C1282 + C9117 + C9117 + C8984 * C1300 + C8987 * C924 +
             C9118 + C9118 + C8983 * C934 + C8985 * C291 + C9119 + C9119 +
             C8982 * C311) *
                C31138 * C30904 * C3272) *
               C31017) *
              C31262 +
          (((C8985 * C479 + C9251 + C9251 + C8982 * C499 + C8987 * C482 +
             C9252 + C9252 + C8983 * C502 + C8989 * C1999 + C9253 + C9253 +
             C8984 * C2011) *
                C31138 * C30904 * C31059 -
            (C8989 * C482 + C8995 + C8995 + C8984 * C502 + C8987 * C479 +
             C8996 + C8996 + C8983 * C499 + C8985 * C116 + C8997 + C8997 +
             C8982 * C130) *
                C31138 * C30904 * C3272) *
               C2510 +
           ((C8985 * C290 + C9123 + C9123 + C8982 * C310 + C8987 * C925 +
             C9124 + C9124 + C8983 * C935 + C8989 * C1281 + C9125 + C9125 +
             C8984 * C1299) *
                C31138 * C30904 * C3272 -
            (C8989 * C2401 + C9614 + C9614 + C8984 * C2407 + C8987 * C1281 +
             C9615 + C9615 + C8983 * C1299 + C8985 * C925 + C9616 + C9616 +
             C8982 * C935) *
                C31138 * C30904 * C31059) *
               C31017) *
              C31249 +
          (((C8985 * C117 + C8998 + C8998 + C8982 * C131 + C8987 * C478 +
             C8999 + C8999 + C8983 * C498 + C8989 * C483 + C9000 + C9000 +
             C8984 * C503) *
                C31138 * C30904 * C3272 -
            (C8989 * C1998 + C9257 + C9257 + C8984 * C2010 + C8987 * C483 +
             C9258 + C9258 + C8983 * C503 + C8985 * C478 + C9259 + C9259 +
             C8982 * C498) *
                C31138 * C30904 * C31059) *
               C2510 +
           ((C8985 * C926 + C9617 + C9617 + C8982 * C936 + C8987 * C1280 +
             C9618 + C9618 + C8983 * C1298 + C8989 * C2402 + C9619 + C9619 +
             C8984 * C2408) *
                C31138 * C30904 * C31059 -
            (C8989 * C1280 + C9129 + C9129 + C8984 * C1298 + C8987 * C926 +
             C9130 + C9130 + C8983 * C936 + C8985 * C289 + C9131 + C9131 +
             C8982 * C309) *
                C31138 * C30904 * C3272) *
               C31017) *
              C31222)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 + C8993 +
            C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 +
            C8984 * C501) *
               C31138 * C30904 * C3272 -
           (C8989 * C2000 + C9245 + C9245 + C8984 * C2012 + C8987 * C481 +
            C9246 + C9246 + C8983 * C501 + C8985 * C480 + C9247 + C9247 +
            C8982 * C500) *
               C31138 * C30904 * C31059) *
              C31272 +
          ((C8985 * C924 + C9611 + C9611 + C8982 * C934 + C8987 * C1282 +
            C9612 + C9612 + C8983 * C1300 + C8989 * C2400 + C9613 + C9613 +
            C8984 * C2406) *
               C31138 * C30904 * C31059 -
           (C8989 * C1282 + C9117 + C9117 + C8984 * C1300 + C8987 * C924 +
            C9118 + C9118 + C8983 * C934 + C8985 * C291 + C9119 + C9119 +
            C8982 * C311) *
               C31138 * C30904 * C3272) *
              C31268 +
          ((C8985 * C292 + C9120 + C9120 + C8982 * C312 + C8987 * C1285 +
            C9121 + C9121 + C8983 * C1303 + C8989 * C1286 + C9122 + C9122 +
            C8984 * C1304) *
               C31138 * C30904 * C3272 -
           (C8989 * C6307 + C9911 + C9911 + C8984 * C6313 + C8987 * C1286 +
            C9912 + C9912 + C8983 * C1304 + C8985 * C1285 + C9913 + C9913 +
            C8982 * C1303) *
               C31138 * C30904 * C31059) *
              C31258 +
          ((C8985 * C1696 + C10265 + C10265 + C8982 * C1702 + C8987 * C5624 +
            C10266 + C10266 + C8983 * C5630 + C8989 * C6674 + C10267 + C10267 +
            C8984 * C6676) *
               C31138 * C30904 * C31059 -
           (C8989 * C5624 + C9792 + C9792 + C8984 * C5630 + C8987 * C1696 +
            C9793 + C9793 + C8983 * C1702 + C8985 * C1148 + C9794 + C9794 +
            C8982 * C1160) *
               C31138 * C30904 * C3272) *
              C31238) *
         C30926) /
            (p * q * std::sqrt(p + q));
    d2ee[60] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
                C169 * C104 + C170 * C105) *
                   C30972 * C31197 -
               (C360 * C105 + C361 * C104 +
                (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
                   C30972 * C31017) *
                  C654 +
              ((C361 * C103 + C360 * C104 + C364 * C105) * C30972 * C31017 -
               (C171 * C105 + C170 * C104 + C169 * C103) * C30972 * C31197) *
                  C655 +
              ((C170 * C103 + C171 * C104 + C172 * C105) * C30972 * C31197 -
               (C668 * C105 + C364 * C104 + C360 * C103) * C30972 * C31017) *
                  C656 +
              ((C364 * C103 + C668 * C104 +
                (C113 * C658 + C664 + C664 + C31151 * C660) * C31138 * C105) *
                   C30972 * C31017 -
               (C173 * C105 + C172 * C104 + C171 * C103) * C30972 * C31197) *
                  C31232) +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
                C169 * C104 + C170 * C105) *
                   C30972 * C1414 -
               (C360 * C105 + C361 * C104 +
                (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
                   C30972 * C1415 +
               ((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
                C362 * C104 + C363 * C105) *
                   C30972 * C1416 -
               (C1435 * C105 + C1436 * C104 +
                (C113 * C1148 + C1167 + C1167 + C31151 * C1160) * C31138 *
                    C103) *
                   C30972 * C31238) *
                  C31183 +
              ((C361 * C103 + C360 * C104 + C364 * C105) * C30972 * C1415 -
               (C171 * C105 + C170 * C104 + C169 * C103) * C30972 * C1414 -
               (C365 * C105 + C363 * C104 + C362 * C103) * C30972 * C1416 +
               (C1436 * C103 + C1435 * C104 +
                (C113 * C1420 + C1428 + C1428 + C31151 * C1422) * C31138 *
                    C105) *
                   C30972 * C31238) *
                  C30937)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
             C169 * C104 + C170 * C105) *
                C1818 -
            (C549 * C105 + C550 * C104 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
                C1819 +
            ((C113 * C481 + C516 + C516 + C31151 * C501) * C31138 * C103 +
             C551 * C104 + C552 * C105) *
                C31231) *
               C31197 +
           (((C113 * C924 + C940 + C940 + C31151 * C934) * C31138 * C103 +
             C960 * C104 + C961 * C105) *
                C1819 -
            (C360 * C105 + C361 * C104 +
             (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
                C1818 -
            (C2183 * C105 + C2184 * C104 +
             (C113 * C1282 + C1310 + C1310 + C31151 * C1300) * C31138 * C103) *
                C31231) *
               C31017) *
              C31183 +
          (((C550 * C103 + C549 * C104 + C553 * C105) * C1819 -
            (C171 * C105 + C170 * C104 + C169 * C103) * C1818 -
            (C554 * C105 + C552 * C104 + C551 * C103) * C31231) *
               C31197 +
           ((C361 * C103 + C360 * C104 + C364 * C105) * C1818 -
            (C962 * C105 + C961 * C104 + C960 * C103) * C1819 +
            (C2184 * C103 + C2183 * C104 +
             (C113 * C2168 + C2176 + C2176 + C31151 * C2170) * C31138 * C105) *
                C31231) *
               C31017) *
              C30937)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C30972 * C31197 -
           (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C30972 *
               C31017) *
              C654 +
          ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C30972 *
               C31017 -
           (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C30972 *
               C31197) *
              C655 +
          ((C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C30972 *
               C31197 -
           (C1433 * C4735 + C357 * C4734 + C354 * C4733) * C30904 * C30972 *
               C31017) *
              C656 +
          ((C358 * C4733 + C359 * C4734 +
            (C113 * C1420 + C1428 + C1428 + C31151 * C1422) * C4735) *
               C30904 * C30972 * C31017 -
           (C359 * C4735 + C358 * C4734 + C166 * C4733) * C30904 * C30972 *
               C31197) *
              C31232)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C30972 * C1414 -
           (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C30972 *
               C1415 +
           (C4861 * C4733 + C4862 * C4734 + C5513 * C4735) * C30904 * C30972 *
               C1416 -
           (C5514 * C4735 + C5513 * C4734 + C4862 * C4733) * C30904 * C30972 *
               C31238) *
              C31183 +
          ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C30972 *
               C1415 -
           (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C30972 *
               C1414 -
           (C5763 * C4735 + C1434 * C4734 + C356 * C4733) * C30904 * C30972 *
               C1416 +
           (C1434 * C4733 + C5763 * C4734 +
            (C113 * C5754 + C5760 + C5760 + C31151 * C5756) * C4735) *
               C30904 * C30972 * C31238) *
              C30937)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
             C4860 * C4734 + C4861 * C4735) *
                C30904 * C1818 -
            (C5323 * C4735 + C5324 * C4734 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
                C30904 * C1819 +
            ((C113 * C481 + C516 + C516 + C31151 * C501) * C4733 +
             C5653 * C4734 + C5654 * C4735) *
                C30904 * C31231) *
               C31197 +
           ((C5324 * C4733 + C5323 * C4734 + C5655 * C4735) * C30904 * C1819 -
            (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C1818 -
            (C5656 * C4735 + C5654 * C4734 + C5653 * C4733) * C30904 * C31231) *
               C31017) *
              C31183 +
          (((C544 * C4733 + C957 * C4734 + C1596 * C4735) * C30904 * C1819 -
            (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C1818 -
            (C6474 * C4735 + C2182 * C4734 + C545 * C4733) * C30904 * C31231) *
               C31197 +
           ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C1818 -
            (C5918 * C4735 + C1596 * C4734 + C957 * C4733) * C30904 * C1819 +
            (C2182 * C4733 + C6474 * C4734 +
             (C113 * C6465 + C6471 + C6471 + C31151 * C6467) * C4735) *
                C30904 * C31231) *
               C31017) *
              C30937)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 + C8993 +
            C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 +
            C8984 * C501) *
               C31138 * C30904 * C30972 * C31197 -
           (C8989 * C1282 + C9117 + C9117 + C8984 * C1300 + C8987 * C924 +
            C9118 + C9118 + C8983 * C934 + C8985 * C291 + C9119 + C9119 +
            C8982 * C311) *
               C31138 * C30904 * C30972 * C31017) *
              C654 +
          ((C8985 * C290 + C9123 + C9123 + C8982 * C310 + C8987 * C925 + C9124 +
            C9124 + C8983 * C935 + C8989 * C1281 + C9125 + C9125 +
            C8984 * C1299) *
               C31138 * C30904 * C30972 * C31017 -
           (C8989 * C482 + C8995 + C8995 + C8984 * C502 + C8987 * C479 + C8996 +
            C8996 + C8983 * C499 + C8985 * C116 + C8997 + C8997 +
            C8982 * C130) *
               C31138 * C30904 * C30972 * C31197) *
              C655 +
          ((C8985 * C117 + C8998 + C8998 + C8982 * C131 + C8987 * C478 + C8999 +
            C8999 + C8983 * C498 + C8989 * C483 + C9000 + C9000 +
            C8984 * C503) *
               C31138 * C30904 * C30972 * C31197 -
           (C8989 * C1280 + C9129 + C9129 + C8984 * C1298 + C8987 * C926 +
            C9130 + C9130 + C8983 * C936 + C8985 * C289 + C9131 + C9131 +
            C8982 * C309) *
               C31138 * C30904 * C30972 * C31017) *
              C656 +
          ((C8985 * C295 + C9361 + C9361 + C8982 * C315 + C8987 * C927 + C9362 +
            C9362 + C8983 * C937 + C8989 * C2168 + C9363 + C9363 +
            C8984 * C2170) *
               C31138 * C30904 * C30972 * C31017 -
           (C8989 * C485 + C9001 + C9001 + C8984 * C505 + C8987 * C484 + C9002 +
            C9002 + C8983 * C504 + C8985 * C118 + C9003 + C9003 +
            C8982 * C132) *
               C31138 * C30904 * C30972 * C31197) *
              C31232)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 + C8993 +
            C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 +
            C8984 * C501) *
               C31138 * C30904 * C30972 * C1414 -
           (C8989 * C1282 + C9117 + C9117 + C8984 * C1300 + C8987 * C924 +
            C9118 + C9118 + C8983 * C934 + C8985 * C291 + C9119 + C9119 +
            C8982 * C311) *
               C31138 * C30904 * C30972 * C1415 +
           (C8985 * C292 + C9120 + C9120 + C8982 * C312 + C8987 * C1285 +
            C9121 + C9121 + C8983 * C1303 + C8989 * C1286 + C9122 + C9122 +
            C8984 * C1304) *
               C31138 * C30904 * C30972 * C1416 -
           (C8989 * C5624 + C9792 + C9792 + C8984 * C5630 + C8987 * C1696 +
            C9793 + C9793 + C8983 * C1702 + C8985 * C1148 + C9794 + C9794 +
            C8982 * C1160) *
               C31138 * C30904 * C30972 * C31238) *
              C31183 +
          ((C8985 * C290 + C9123 + C9123 + C8982 * C310 + C8987 * C925 + C9124 +
            C9124 + C8983 * C935 + C8989 * C1281 + C9125 + C9125 +
            C8984 * C1299) *
               C31138 * C30904 * C30972 * C1415 -
           (C8989 * C482 + C8995 + C8995 + C8984 * C502 + C8987 * C479 + C8996 +
            C8996 + C8983 * C499 + C8985 * C116 + C8997 + C8997 +
            C8982 * C130) *
               C31138 * C30904 * C30972 * C1414 -
           (C8989 * C1287 + C9126 + C9126 + C8984 * C1305 + C8987 * C1284 +
            C9127 + C9127 + C8983 * C1302 + C8985 * C293 + C9128 + C9128 +
            C8982 * C313) *
               C31138 * C30904 * C30972 * C1416 +
           (C8985 * C1147 + C10015 + C10015 + C8982 * C1159 + C8987 * C1697 +
            C10016 + C10016 + C8983 * C1703 + C8989 * C6465 + C10017 + C10017 +
            C8984 * C6467) *
               C31138 * C30904 * C30972 * C31238) *
              C30937)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 +
             C8993 + C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 +
             C8984 * C501) *
                C31138 * C30904 * C1818 -
            (C8989 * C2000 + C9245 + C9245 + C8984 * C2012 + C8987 * C481 +
             C9246 + C9246 + C8983 * C501 + C8985 * C480 + C9247 + C9247 +
             C8982 * C500) *
                C31138 * C30904 * C1819 +
            (C8985 * C481 + C9248 + C9248 + C8982 * C501 + C8987 * C2000 +
             C9249 + C9249 + C8983 * C2012 + C8989 * C2001 + C9250 + C9250 +
             C8984 * C2013) *
                C31138 * C30904 * C31231) *
               C31197 +
           ((C8985 * C924 + C9611 + C9611 + C8982 * C934 + C8987 * C1282 +
             C9612 + C9612 + C8983 * C1300 + C8989 * C2400 + C9613 + C9613 +
             C8984 * C2406) *
                C31138 * C30904 * C1819 -
            (C8989 * C1282 + C9117 + C9117 + C8984 * C1300 + C8987 * C924 +
             C9118 + C9118 + C8983 * C934 + C8985 * C291 + C9119 + C9119 +
             C8982 * C311) *
                C31138 * C30904 * C1818 -
            (C8989 * C6308 + C9908 + C9908 + C8984 * C6314 + C8987 * C2400 +
             C9909 + C9909 + C8983 * C2406 + C8985 * C1282 + C9910 + C9910 +
             C8982 * C1300) *
                C31138 * C30904 * C31231) *
               C31017) *
              C31183 +
          (((C8985 * C479 + C9251 + C9251 + C8982 * C499 + C8987 * C482 +
             C9252 + C9252 + C8983 * C502 + C8989 * C1999 + C9253 + C9253 +
             C8984 * C2011) *
                C31138 * C30904 * C1819 -
            (C8989 * C482 + C8995 + C8995 + C8984 * C502 + C8987 * C479 +
             C8996 + C8996 + C8983 * C499 + C8985 * C116 + C8997 + C8997 +
             C8982 * C130) *
                C31138 * C30904 * C1818 -
            (C8989 * C2002 + C9254 + C9254 + C8984 * C2014 + C8987 * C1999 +
             C9255 + C9255 + C8983 * C2011 + C8985 * C482 + C9256 + C9256 +
             C8982 * C502) *
                C31138 * C30904 * C31231) *
               C31197 +
           ((C8985 * C290 + C9123 + C9123 + C8982 * C310 + C8987 * C925 +
             C9124 + C9124 + C8983 * C935 + C8989 * C1281 + C9125 + C9125 +
             C8984 * C1299) *
                C31138 * C30904 * C1818 -
            (C8989 * C2401 + C9614 + C9614 + C8984 * C2407 + C8987 * C1281 +
             C9615 + C9615 + C8983 * C1299 + C8985 * C925 + C9616 + C9616 +
             C8982 * C935) *
                C31138 * C30904 * C1819 +
            (C8985 * C1281 + C10711 + C10711 + C8982 * C1299 + C8987 * C2401 +
             C10712 + C10712 + C8983 * C2407 + C8989 * C10707 + C10713 +
             C10713 + C8984 * C10709) *
                C31138 * C30904 * C31231) *
               C31017) *
              C30937)) /
            (p * q * std::sqrt(p + q));
    d2ee[61] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             (((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
                 C169 * C104 + C170 * C105) *
                    C31198 -
                (C549 * C105 + C550 * C104 +
                 (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
                    C31059) *
                   C31197 +
               (((C113 * C924 + C940 + C940 + C31151 * C934) * C31138 * C103 +
                 C960 * C104 + C961 * C105) *
                    C31059 -
                (C360 * C105 + C361 * C104 +
                 (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
                    C31198) *
                   C31017) *
                  C286 +
              (((C550 * C103 + C549 * C104 + C553 * C105) * C31059 -
                (C171 * C105 + C170 * C104 + C169 * C103) * C31198) *
                   C31197 +
               ((C361 * C103 + C360 * C104 + C364 * C105) * C31198 -
                (C962 * C105 + C961 * C104 + C960 * C103) * C31059) *
                   C31017) *
                  C287 +
              (((C170 * C103 + C171 * C104 + C172 * C105) * C31198 -
                (C778 * C105 + C553 * C104 + C549 * C103) * C31059) *
                   C31197 +
               ((C961 * C103 + C962 * C104 +
                 (C113 * C928 + C950 + C950 + C31151 * C938) * C31138 * C105) *
                    C31059 -
                (C668 * C105 + C364 * C104 + C360 * C103) * C31198) *
                   C31017) *
                  C31222) +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
                C169 * C104 + C170 * C105) *
                   C31198 -
               (C549 * C105 + C550 * C104 +
                (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
                   C31059) *
                  C1414 +
              (((C113 * C924 + C940 + C940 + C31151 * C934) * C31138 * C103 +
                C960 * C104 + C961 * C105) *
                   C31059 -
               (C360 * C105 + C361 * C104 +
                (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
                   C31198) *
                  C1415 +
              (((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
                C362 * C104 + C363 * C105) *
                   C31198 -
               (C1597 * C105 + C1598 * C104 +
                (C113 * C1285 + C1313 + C1313 + C31151 * C1303) * C31138 *
                    C103) *
                   C31059) *
                  C1416 +
              (((C113 * C1696 + C1706 + C1706 + C31151 * C1702) * C31138 *
                    C103 +
                (C113 * C1697 + C1707 + C1707 + C31151 * C1703) * C31138 *
                    C104 +
                (C113 * C1698 + C1708 + C1708 + C31151 * C1704) * C31138 *
                    C105) *
                   C31059 -
               (C1435 * C105 + C1436 * C104 +
                (C113 * C1148 + C1167 + C1167 + C31151 * C1160) * C31138 *
                    C103) *
                   C31198) *
                  C31238) *
             C30926) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C2282 -
           (C549 * C105 + C550 * C104 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
               C2283 +
           ((C113 * C481 + C516 + C516 + C31151 * C501) * C31138 * C103 +
            C551 * C104 + C552 * C105) *
               C2284 -
           (C2301 * C105 + C2302 * C104 +
            (C113 * C2000 + C2019 + C2019 + C31151 * C2012) * C31138 * C103) *
               C31244) *
              C31197 +
          (((C113 * C924 + C940 + C940 + C31151 * C934) * C31138 * C103 +
            C960 * C104 + C961 * C105) *
               C2283 -
           (C360 * C105 + C361 * C104 +
            (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
               C2282 -
           (C2183 * C105 + C2184 * C104 +
            (C113 * C1282 + C1310 + C1310 + C31151 * C1300) * C31138 * C103) *
               C2284 +
           ((C113 * C2400 + C2410 + C2410 + C31151 * C2406) * C31138 * C103 +
            (C113 * C2401 + C2411 + C2411 + C31151 * C2407) * C31138 * C104 +
            (C113 * C2402 + C2412 + C2412 + C31151 * C2408) * C31138 * C105) *
               C31244) *
              C31017) *
         C30926) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
             C4860 * C4734 + C4861 * C4735) *
                C30904 * C31198 -
            (C5323 * C4735 + C5324 * C4734 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
                C30904 * C31059) *
               C31197 +
           ((C5324 * C4733 + C5323 * C4734 +
             (C113 * C1696 + C1706 + C1706 + C31151 * C1702) * C4735) *
                C30904 * C31059 -
            (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C31198) *
               C31017) *
              C286 +
          (((C544 * C4733 + C957 * C4734 + C1596 * C4735) * C30904 * C31059 -
            (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C31198) *
               C31197 +
           ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C31198 -
            ((C113 * C1697 + C1707 + C1707 + C31151 * C1703) * C4735 +
             C1596 * C4734 + C957 * C4733) *
                C30904 * C31059) *
               C31017) *
              C287 +
          (((C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C31198 -
            (C1595 * C4735 + C958 * C4734 + C543 * C4733) * C30904 * C31059) *
               C31197 +
           ((C958 * C4733 + C1595 * C4734 +
             (C113 * C1698 + C1708 + C1708 + C31151 * C1704) * C4735) *
                C30904 * C31059 -
            (C1433 * C4735 + C357 * C4734 + C354 * C4733) * C30904 * C31198) *
               C31017) *
              C31222)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C31198 -
           (C5323 * C4735 + C5324 * C4734 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
               C30904 * C31059) *
              C1414 +
          ((C5324 * C4733 + C5323 * C4734 + C5655 * C4735) * C30904 * C31059 -
           (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C31198) *
              C1415 +
          ((C4861 * C4733 + C4862 * C4734 + C5513 * C4735) * C30904 * C31198 -
           (C6025 * C4735 + C5655 * C4734 + C5323 * C4733) * C30904 * C31059) *
              C1416 +
          ((C5655 * C4733 + C6025 * C4734 +
            (C113 * C6016 + C6022 + C6022 + C31151 * C6018) * C4735) *
               C30904 * C31059 -
           (C5514 * C4735 + C5513 * C4734 + C4862 * C4733) * C30904 * C31198) *
              C31238) *
         C30926) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C2282 -
           (C5323 * C4735 + C5324 * C4734 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
               C30904 * C2283 +
           ((C113 * C481 + C516 + C516 + C31151 * C501) * C4733 +
            C5653 * C4734 + C5654 * C4735) *
               C30904 * C2284 -
           (C6687 * C4735 + C6688 * C4734 +
            (C113 * C2000 + C2019 + C2019 + C31151 * C2012) * C4733) *
               C30904 * C31244) *
              C31197 +
          ((C5324 * C4733 + C5323 * C4734 + C5655 * C4735) * C30904 * C2283 -
           (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C2282 -
           (C5656 * C4735 + C5654 * C4734 + C5653 * C4733) * C30904 * C2284 +
           (C6688 * C4733 + C6687 * C4734 +
            (C113 * C6674 + C6682 + C6682 + C31151 * C6676) * C4735) *
               C30904 * C31244) *
              C31017) *
         C30926) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 +
             C8993 + C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 +
             C8984 * C501) *
                C31138 * C30904 * C31198 -
            (C8989 * C2000 + C9245 + C9245 + C8984 * C2012 + C8987 * C481 +
             C9246 + C9246 + C8983 * C501 + C8985 * C480 + C9247 + C9247 +
             C8982 * C500) *
                C31138 * C30904 * C31059) *
               C31197 +
           ((C8985 * C924 + C9611 + C9611 + C8982 * C934 + C8987 * C1282 +
             C9612 + C9612 + C8983 * C1300 + C8989 * C2400 + C9613 + C9613 +
             C8984 * C2406) *
                C31138 * C30904 * C31059 -
            (C8989 * C1282 + C9117 + C9117 + C8984 * C1300 + C8987 * C924 +
             C9118 + C9118 + C8983 * C934 + C8985 * C291 + C9119 + C9119 +
             C8982 * C311) *
                C31138 * C30904 * C31198) *
               C31017) *
              C286 +
          (((C8985 * C479 + C9251 + C9251 + C8982 * C499 + C8987 * C482 +
             C9252 + C9252 + C8983 * C502 + C8989 * C1999 + C9253 + C9253 +
             C8984 * C2011) *
                C31138 * C30904 * C31059 -
            (C8989 * C482 + C8995 + C8995 + C8984 * C502 + C8987 * C479 +
             C8996 + C8996 + C8983 * C499 + C8985 * C116 + C8997 + C8997 +
             C8982 * C130) *
                C31138 * C30904 * C31198) *
               C31197 +
           ((C8985 * C290 + C9123 + C9123 + C8982 * C310 + C8987 * C925 +
             C9124 + C9124 + C8983 * C935 + C8989 * C1281 + C9125 + C9125 +
             C8984 * C1299) *
                C31138 * C30904 * C31198 -
            (C8989 * C2401 + C9614 + C9614 + C8984 * C2407 + C8987 * C1281 +
             C9615 + C9615 + C8983 * C1299 + C8985 * C925 + C9616 + C9616 +
             C8982 * C935) *
                C31138 * C30904 * C31059) *
               C31017) *
              C287 +
          (((C8985 * C117 + C8998 + C8998 + C8982 * C131 + C8987 * C478 +
             C8999 + C8999 + C8983 * C498 + C8989 * C483 + C9000 + C9000 +
             C8984 * C503) *
                C31138 * C30904 * C31198 -
            (C8989 * C1998 + C9257 + C9257 + C8984 * C2010 + C8987 * C483 +
             C9258 + C9258 + C8983 * C503 + C8985 * C478 + C9259 + C9259 +
             C8982 * C498) *
                C31138 * C30904 * C31059) *
               C31197 +
           ((C8985 * C926 + C9617 + C9617 + C8982 * C936 + C8987 * C1280 +
             C9618 + C9618 + C8983 * C1298 + C8989 * C2402 + C9619 + C9619 +
             C8984 * C2408) *
                C31138 * C30904 * C31059 -
            (C8989 * C1280 + C9129 + C9129 + C8984 * C1298 + C8987 * C926 +
             C9130 + C9130 + C8983 * C936 + C8985 * C289 + C9131 + C9131 +
             C8982 * C309) *
                C31138 * C30904 * C31198) *
               C31017) *
              C31222)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 + C8993 +
            C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 +
            C8984 * C501) *
               C31138 * C30904 * C31198 -
           (C8989 * C2000 + C9245 + C9245 + C8984 * C2012 + C8987 * C481 +
            C9246 + C9246 + C8983 * C501 + C8985 * C480 + C9247 + C9247 +
            C8982 * C500) *
               C31138 * C30904 * C31059) *
              C1414 +
          ((C8985 * C924 + C9611 + C9611 + C8982 * C934 + C8987 * C1282 +
            C9612 + C9612 + C8983 * C1300 + C8989 * C2400 + C9613 + C9613 +
            C8984 * C2406) *
               C31138 * C30904 * C31059 -
           (C8989 * C1282 + C9117 + C9117 + C8984 * C1300 + C8987 * C924 +
            C9118 + C9118 + C8983 * C934 + C8985 * C291 + C9119 + C9119 +
            C8982 * C311) *
               C31138 * C30904 * C31198) *
              C1415 +
          ((C8985 * C292 + C9120 + C9120 + C8982 * C312 + C8987 * C1285 +
            C9121 + C9121 + C8983 * C1303 + C8989 * C1286 + C9122 + C9122 +
            C8984 * C1304) *
               C31138 * C30904 * C31198 -
           (C8989 * C6307 + C9911 + C9911 + C8984 * C6313 + C8987 * C1286 +
            C9912 + C9912 + C8983 * C1304 + C8985 * C1285 + C9913 + C9913 +
            C8982 * C1303) *
               C31138 * C30904 * C31059) *
              C1416 +
          ((C8985 * C1696 + C10265 + C10265 + C8982 * C1702 + C8987 * C5624 +
            C10266 + C10266 + C8983 * C5630 + C8989 * C6674 + C10267 + C10267 +
            C8984 * C6676) *
               C31138 * C30904 * C31059 -
           (C8989 * C5624 + C9792 + C9792 + C8984 * C5630 + C8987 * C1696 +
            C9793 + C9793 + C8983 * C1702 + C8985 * C1148 + C9794 + C9794 +
            C8982 * C1160) *
               C31138 * C30904 * C31198) *
              C31238) *
         C30926) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 + C8993 +
            C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 +
            C8984 * C501) *
               C31138 * C30904 * C2282 -
           (C8989 * C2000 + C9245 + C9245 + C8984 * C2012 + C8987 * C481 +
            C9246 + C9246 + C8983 * C501 + C8985 * C480 + C9247 + C9247 +
            C8982 * C500) *
               C31138 * C30904 * C2283 +
           (C8985 * C481 + C9248 + C9248 + C8982 * C501 + C8987 * C2000 +
            C9249 + C9249 + C8983 * C2012 + C8989 * C2001 + C9250 + C9250 +
            C8984 * C2013) *
               C31138 * C30904 * C2284 -
           (C8989 * C10549 + C10556 + C10556 + C8984 * C10553 + C8987 * C2001 +
            C10557 + C10557 + C8983 * C2013 + C8985 * C2000 + C10558 + C10558 +
            C8982 * C2012) *
               C31138 * C30904 * C31244) *
              C31197 +
          ((C8985 * C924 + C9611 + C9611 + C8982 * C934 + C8987 * C1282 +
            C9612 + C9612 + C8983 * C1300 + C8989 * C2400 + C9613 + C9613 +
            C8984 * C2406) *
               C31138 * C30904 * C2283 -
           (C8989 * C1282 + C9117 + C9117 + C8984 * C1300 + C8987 * C924 +
            C9118 + C9118 + C8983 * C934 + C8985 * C291 + C9119 + C9119 +
            C8982 * C311) *
               C31138 * C30904 * C2282 -
           (C8989 * C6308 + C9908 + C9908 + C8984 * C6314 + C8987 * C2400 +
            C9909 + C9909 + C8983 * C2406 + C8985 * C1282 + C9910 + C9910 +
            C8982 * C1300) *
               C31138 * C30904 * C2284 +
           (C8985 * C2400 + C10919 + C10919 + C8982 * C2406 + C8987 * C6308 +
            C10920 + C10920 + C8983 * C6314 + C8989 * C10915 + C10921 + C10921 +
            C8984 * C10917) *
               C31138 * C30904 * C31244) *
              C31017) *
         C30926) /
            (p * q * std::sqrt(p + q));
    d2ee[62] +=
        (-0.25 * std::pow(Pi, 2.5) *
             (((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
               C169 * C104 + C170 * C105) *
                  C30972 * C30954 * C108 -
              (C171 * C105 + C170 * C104 + C169 * C103) * C30972 * C30954 *
                  C109 +
              (C170 * C103 + C171 * C104 + C172 * C105) * C30972 * C30954 *
                  C110 -
              (C173 * C105 + C172 * C104 + C171 * C103) * C30972 * C30954 *
                  C111 +
              (C172 * C103 + C173 * C104 +
               (C113 * C121 + C153 + C153 + C31151 * C135) * C31138 * C105) *
                  C30972 * C30954 * C112) -
         0.25 * std::pow(Pi, 2.5) *
             ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
                C169 * C104 + C170 * C105) *
                   C30972 * C31265 -
               (C360 * C105 + C361 * C104 +
                (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
                   C30972 * C31253 +
               ((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
                C362 * C104 + C363 * C105) *
                   C30972 * C31228) *
                  C286 +
              ((C361 * C103 + C360 * C104 + C364 * C105) * C30972 * C31253 -
               (C171 * C105 + C170 * C104 + C169 * C103) * C30972 * C31265 -
               (C365 * C105 + C363 * C104 + C362 * C103) * C30972 * C31228) *
                  C287 +
              ((C170 * C103 + C171 * C104 + C172 * C105) * C30972 * C31265 -
               ((C113 * C297 + C340 + C340 + C31151 * C317) * C31138 * C105 +
                C364 * C104 + C360 * C103) *
                   C30972 * C31253 +
               (C363 * C103 + C365 * C104 +
                (C113 * C298 + C341 + C341 + C31151 * C318) * C31138 * C105) *
                   C30972 * C31228) *
                  C31222) +
         0.5 * std::pow(Pi, 2.5) *
             ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
                C169 * C104 + C170 * C105) *
                   C31266 -
               (C549 * C105 + C550 * C104 +
                (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
                   C31255 +
               ((C113 * C481 + C516 + C516 + C31151 * C501) * C31138 * C103 +
                C551 * C104 + C552 * C105) *
                   C31231) *
                  C30954 * C286 +
              ((C550 * C103 + C549 * C104 + C553 * C105) * C31255 -
               (C171 * C105 + C170 * C104 + C169 * C103) * C31266 -
               (C554 * C105 + C552 * C104 + C551 * C103) * C31231) *
                  C30954 * C287 +
              ((C170 * C103 + C171 * C104 + C172 * C105) * C31266 -
               ((C113 * C486 + C529 + C529 + C31151 * C506) * C31138 * C105 +
                C553 * C104 + C549 * C103) *
                   C31255 +
               (C552 * C103 + C554 * C104 +
                (C113 * C487 + C530 + C530 + C31151 * C507) * C31138 * C105) *
                   C31231) *
                  C30954 * C31222) -
         0.25 * std::pow(Pi, 2.5) *
             ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
                C169 * C104 + C170 * C105) *
                   C30972 * C1072 -
               (C360 * C105 + C361 * C104 +
                (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
                   C30972 * C1073 +
               ((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
                C362 * C104 + C363 * C105) *
                   C30972 * C31228) *
                  C31262 +
              ((C361 * C103 + C360 * C104 + C364 * C105) * C30972 * C1073 -
               (C171 * C105 + C170 * C104 + C169 * C103) * C30972 * C1072 -
               (C365 * C105 + C363 * C104 + C362 * C103) * C30972 * C31228) *
                  C31249 +
              ((C170 * C103 + C171 * C104 + C172 * C105) * C30972 * C1072 -
               (C668 * C105 + C364 * C104 + C360 * C103) * C30972 * C1073 +
               (C363 * C103 + C365 * C104 +
                (C113 * C298 + C341 + C341 + C31151 * C318) * C31138 * C105) *
                   C30972 * C31228) *
                  C31222) -
         0.25 * std::pow(Pi, 2.5) *
             (((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
               C169 * C104 + C170 * C105) *
                  C30972 * C1140 -
              (C360 * C105 + C361 * C104 +
               (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
                  C30972 * C1141 +
              ((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
               C362 * C104 + C363 * C105) *
                  C30972 * C1142 -
              ((C113 * C1146 + C1165 + C1165 + C31151 * C1158) * C31138 * C105 +
               (C113 * C1147 + C1166 + C1166 + C31151 * C1159) * C31138 * C104 +
               (C113 * C1148 + C1167 + C1167 + C31151 * C1160) * C31138 *
                   C103) *
                  C30972 * C1143 +
              ((C113 * C1149 + C1168 + C1168 + C31151 * C1161) * C31138 * C103 +
               (C113 * C1150 + C1169 + C1169 + C31151 * C1162) * C31138 * C104 +
               (C113 * C1151 + C1170 + C1170 + C31151 * C1163) * C31138 *
                   C105) *
                  C30972 * C1144) *
             C30926 +
         0.5 * std::pow(Pi, 2.5) *
             ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
                C169 * C104 + C170 * C105) *
                   C31266 -
               (C549 * C105 + C550 * C104 +
                (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
                   C31255 +
               ((C113 * C481 + C516 + C516 + C31151 * C501) * C31138 * C103 +
                C551 * C104 + C552 * C105) *
                   C31231) *
                  C1072 +
              (((C113 * C924 + C940 + C940 + C31151 * C934) * C31138 * C103 +
                C960 * C104 + C961 * C105) *
                   C31255 -
               (C360 * C105 + C361 * C104 +
                (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
                   C31266 -
               ((C113 * C1280 + C1308 + C1308 + C31151 * C1298) * C31138 *
                    C105 +
                (C113 * C1281 + C1309 + C1309 + C31151 * C1299) * C31138 *
                    C104 +
                (C113 * C1282 + C1310 + C1310 + C31151 * C1300) * C31138 *
                    C103) *
                   C31231) *
                  C1073 +
              (((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
                C362 * C104 + C363 * C105) *
                   C31266 -
               ((C113 * C1283 + C1311 + C1311 + C31151 * C1301) * C31138 *
                    C105 +
                (C113 * C1284 + C1312 + C1312 + C31151 * C1302) * C31138 *
                    C104 +
                (C113 * C1285 + C1313 + C1313 + C31151 * C1303) * C31138 *
                    C103) *
                   C31255 +
               ((C113 * C1286 + C1314 + C1314 + C31151 * C1304) * C31138 *
                    C103 +
                (C113 * C1287 + C1315 + C1315 + C31151 * C1305) * C31138 *
                    C104 +
                (C113 * C1288 + C1316 + C1316 + C31151 * C1306) * C31138 *
                    C105) *
                   C31231) *
                  C31228) *
             C30926 +
         0.5 * std::pow(Pi, 2.5) *
             ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
                C169 * C104 + C170 * C105) *
                   C1818 -
               (C549 * C105 + C550 * C104 +
                (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
                   C1819 +
               ((C113 * C481 + C516 + C516 + C31151 * C501) * C31138 * C103 +
                C551 * C104 + C552 * C105) *
                   C31231) *
                  C30954 * C31262 +
              ((C550 * C103 + C549 * C104 + C553 * C105) * C1819 -
               (C171 * C105 + C170 * C104 + C169 * C103) * C1818 -
               (C554 * C105 + C552 * C104 + C551 * C103) * C31231) *
                  C30954 * C31249 +
              ((C170 * C103 + C171 * C104 + C172 * C105) * C1818 -
               (C778 * C105 + C553 * C104 + C549 * C103) * C1819 +
               (C552 * C103 + C554 * C104 +
                (C113 * C487 + C530 + C530 + C31151 * C507) * C31138 * C105) *
                   C31231) *
                  C30954 * C31222) +
         0.5 * std::pow(Pi, 2.5) *
             ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
                C169 * C104 + C170 * C105) *
                   C1818 -
               (C549 * C105 + C550 * C104 +
                (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
                   C1819 +
               ((C113 * C481 + C516 + C516 + C31151 * C501) * C31138 * C103 +
                C551 * C104 + C552 * C105) *
                   C31231) *
                  C31265 +
              (((C113 * C924 + C940 + C940 + C31151 * C934) * C31138 * C103 +
                C960 * C104 + C961 * C105) *
                   C1819 -
               (C360 * C105 + C361 * C104 +
                (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
                   C1818 -
               ((C113 * C1280 + C1308 + C1308 + C31151 * C1298) * C31138 *
                    C105 +
                (C113 * C1281 + C1309 + C1309 + C31151 * C1299) * C31138 *
                    C104 +
                (C113 * C1282 + C1310 + C1310 + C31151 * C1300) * C31138 *
                    C103) *
                   C31231) *
                  C31253 +
              (((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
                C362 * C104 + C363 * C105) *
                   C1818 -
               (C1597 * C105 + C1598 * C104 +
                (C113 * C1285 + C1313 + C1313 + C31151 * C1303) * C31138 *
                    C103) *
                   C1819 +
               ((C113 * C1286 + C1314 + C1314 + C31151 * C1304) * C31138 *
                    C103 +
                (C113 * C1287 + C1315 + C1315 + C31151 * C1305) * C31138 *
                    C104 +
                (C113 * C1288 + C1316 + C1316 + C31151 * C1306) * C31138 *
                    C105) *
                   C31231) *
                  C31228) *
             C30926) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
           C169 * C104 + C170 * C105) *
              C1993 -
          (C549 * C105 + C550 * C104 +
           (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
              C1994 +
          ((C113 * C481 + C516 + C516 + C31151 * C501) * C31138 * C103 +
           C551 * C104 + C552 * C105) *
              C1995 -
          ((C113 * C1998 + C2017 + C2017 + C31151 * C2010) * C31138 * C105 +
           (C113 * C1999 + C2018 + C2018 + C31151 * C2011) * C31138 * C104 +
           (C113 * C2000 + C2019 + C2019 + C31151 * C2012) * C31138 * C103) *
              C1996 +
          ((C113 * C2001 + C2020 + C2020 + C31151 * C2013) * C31138 * C103 +
           (C113 * C2002 + C2021 + C2021 + C31151 * C2014) * C31138 * C104 +
           (C113 * C2003 + C2022 + C2022 + C31151 * C2015) * C31138 * C105) *
              C1997) *
         C30954 * C30926) /
            (p * q * std::sqrt(p + q)) +
        (-0.25 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
           (C113 * C291 + C326 + C326 + C31151 * C311) * C4734 +
           (C113 * C292 + C327 + C327 + C31151 * C312) * C4735) *
              C30904 * C30972 * C30954 * C108 -
          (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C30972 *
              C30954 * C109 +
          (C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C30972 *
              C30954 * C110 -
          (C359 * C4735 + C358 * C4734 + C166 * C4733) * C30904 * C30972 *
              C30954 * C111 +
          (C167 * C4733 + C667 * C4734 +
           (C113 * C298 + C341 + C341 + C31151 * C318) * C4735) *
              C30904 * C30972 * C30954 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (-0.25 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C30972 * C31265 -
           (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C30972 *
               C31253 +
           (C4861 * C4733 + C4862 * C4734 +
            (C113 * C1149 + C1168 + C1168 + C31151 * C1161) * C4735) *
               C30904 * C30972 * C31228) *
              C286 +
          ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C30972 *
               C31253 -
           (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C30972 *
               C31265 -
           ((C113 * C1150 + C1169 + C1169 + C31151 * C1162) * C4735 +
            C1434 * C4734 + C356 * C4733) *
               C30904 * C30972 * C31228) *
              C287 +
          ((C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C30972 *
               C31265 -
           (C1433 * C4735 + C357 * C4734 + C354 * C4733) * C30904 * C30972 *
               C31253 +
           (C357 * C4733 + C1433 * C4734 +
            (C113 * C1151 + C1170 + C1170 + C31151 * C1163) * C4735) *
               C30904 * C30972 * C31228) *
              C31222)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C31266 -
           ((C113 * C1285 + C1313 + C1313 + C31151 * C1303) * C4735 +
            (C113 * C924 + C940 + C940 + C31151 * C934) * C4734 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
               C30904 * C31255 +
           ((C113 * C481 + C516 + C516 + C31151 * C501) * C4733 +
            (C113 * C1282 + C1310 + C1310 + C31151 * C1300) * C4734 +
            (C113 * C1286 + C1314 + C1314 + C31151 * C1304) * C4735) *
               C30904 * C31231) *
              C30954 * C286 +
          ((C544 * C4733 + C957 * C4734 + C1596 * C4735) * C30904 * C31255 -
           (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C31266 -
           ((C113 * C1287 + C1315 + C1315 + C31151 * C1305) * C4735 +
            C2182 * C4734 + C545 * C4733) *
               C30904 * C31231) *
              C30954 * C287 +
          ((C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C31266 -
           (C1595 * C4735 + C958 * C4734 + C543 * C4733) * C30904 * C31255 +
           (C546 * C4733 + C2181 * C4734 +
            (C113 * C1288 + C1316 + C1316 + C31151 * C1306) * C4735) *
               C30904 * C31231) *
              C30954 * C31222)) /
            (p * q * std::sqrt(p + q)) +
        (-0.25 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C30972 * C1072 -
           (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C30972 *
               C1073 +
           (C4861 * C4733 + C4862 * C4734 +
            (C113 * C1149 + C1168 + C1168 + C31151 * C1161) * C4735) *
               C30904 * C30972 * C31228) *
              C31262 +
          ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C30972 *
               C1073 -
           (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C30972 *
               C1072 -
           ((C113 * C1150 + C1169 + C1169 + C31151 * C1162) * C4735 +
            C1434 * C4734 + C356 * C4733) *
               C30904 * C30972 * C31228) *
              C31249 +
          ((C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C30972 *
               C1072 -
           (C1433 * C4735 + C357 * C4734 + C354 * C4733) * C30904 * C30972 *
               C1073 +
           (C357 * C4733 + C1433 * C4734 +
            (C113 * C1151 + C1170 + C1170 + C31151 * C1163) * C4735) *
               C30904 * C30972 * C31228) *
              C31222)) /
            (p * q * std::sqrt(p + q)) +
        (-0.25 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 + C4860 * C4734 +
           C4861 * C4735) *
              C30904 * C30972 * C1140 -
          (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C30972 *
              C1141 +
          (C4861 * C4733 + C4862 * C4734 + C5513 * C4735) * C30904 * C30972 *
              C1142 -
          (C5514 * C4735 + C5513 * C4734 + C4862 * C4733) * C30904 * C30972 *
              C1143 +
          (C5513 * C4733 + C5514 * C4734 +
           (C113 * C5497 + C5508 + C5508 + C31151 * C5501) * C4735) *
              C30904 * C30972 * C1144) *
         C30926) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C31266 -
           (C5323 * C4735 + C5324 * C4734 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
               C30904 * C31255 +
           ((C113 * C481 + C516 + C516 + C31151 * C501) * C4733 +
            C5653 * C4734 + C5654 * C4735) *
               C30904 * C31231) *
              C1072 +
          ((C5324 * C4733 + C5323 * C4734 + C5655 * C4735) * C30904 * C31255 -
           (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C31266 -
           (C5656 * C4735 + C5654 * C4734 + C5653 * C4733) * C30904 * C31231) *
              C1073 +
          ((C4861 * C4733 + C4862 * C4734 + C5513 * C4735) * C30904 * C31266 -
           ((C113 * C5625 + C5643 + C5643 + C31151 * C5631) * C4735 +
            C5655 * C4734 + C5323 * C4733) *
               C30904 * C31255 +
           (C5654 * C4733 + C5656 * C4734 +
            (C113 * C5626 + C5644 + C5644 + C31151 * C5632) * C4735) *
               C30904 * C31231) *
              C31228) *
         C30926) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C1818 -
           (C5323 * C4735 + C5324 * C4734 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
               C30904 * C1819 +
           ((C113 * C481 + C516 + C516 + C31151 * C501) * C4733 +
            C5653 * C4734 + C5654 * C4735) *
               C30904 * C31231) *
              C30954 * C31262 +
          ((C544 * C4733 + C957 * C4734 + C1596 * C4735) * C30904 * C1819 -
           (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C1818 -
           ((C113 * C1287 + C1315 + C1315 + C31151 * C1305) * C4735 +
            C2182 * C4734 + C545 * C4733) *
               C30904 * C31231) *
              C30954 * C31249 +
          ((C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C1818 -
           (C1595 * C4735 + C958 * C4734 + C543 * C4733) * C30904 * C1819 +
           (C546 * C4733 + C2181 * C4734 +
            (C113 * C1288 + C1316 + C1316 + C31151 * C1306) * C4735) *
               C30904 * C31231) *
              C30954 * C31222)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C1818 -
           (C5323 * C4735 + C5324 * C4734 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
               C30904 * C1819 +
           ((C113 * C481 + C516 + C516 + C31151 * C501) * C4733 +
            C5653 * C4734 + C5654 * C4735) *
               C30904 * C31231) *
              C31265 +
          ((C5324 * C4733 + C5323 * C4734 + C5655 * C4735) * C30904 * C1819 -
           (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C1818 -
           (C5656 * C4735 + C5654 * C4734 + C5653 * C4733) * C30904 * C31231) *
              C31253 +
          ((C4861 * C4733 + C4862 * C4734 + C5513 * C4735) * C30904 * C1818 -
           (C6025 * C4735 + C5655 * C4734 + C5323 * C4733) * C30904 * C1819 +
           (C5654 * C4733 + C5656 * C4734 +
            (C113 * C5626 + C5644 + C5644 + C31151 * C5632) * C4735) *
               C30904 * C31231) *
              C31228) *
         C30926) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 + C4860 * C4734 +
           C4861 * C4735) *
              C30904 * C1993 -
          (C5323 * C4735 + C5324 * C4734 +
           (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
              C30904 * C1994 +
          ((C113 * C481 + C516 + C516 + C31151 * C501) * C4733 + C5653 * C4734 +
           C5654 * C4735) *
              C30904 * C1995 -
          ((C113 * C6307 + C6317 + C6317 + C31151 * C6313) * C4735 +
           (C113 * C2400 + C2410 + C2410 + C31151 * C2406) * C4734 +
           (C113 * C2000 + C2019 + C2019 + C31151 * C2012) * C4733) *
              C30904 * C1996 +
          ((C113 * C2001 + C2020 + C2020 + C31151 * C2013) * C4733 +
           (C113 * C6308 + C6318 + C6318 + C31151 * C6314) * C4734 +
           (C113 * C6309 + C6319 + C6319 + C31151 * C6315) * C4735) *
              C30904 * C1997) *
         C30954 * C30926) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 + C8993 +
           C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 + C8984 * C501) *
              C31138 * C30904 * C30972 * C30954 * C108 -
          (C8989 * C482 + C8995 + C8995 + C8984 * C502 + C8987 * C479 + C8996 +
           C8996 + C8983 * C499 + C8985 * C116 + C8997 + C8997 + C8982 * C130) *
              C31138 * C30904 * C30972 * C30954 * C109 +
          (C8985 * C117 + C8998 + C8998 + C8982 * C131 + C8987 * C478 + C8999 +
           C8999 + C8983 * C498 + C8989 * C483 + C9000 + C9000 + C8984 * C503) *
              C31138 * C30904 * C30972 * C30954 * C110 -
          (C8989 * C485 + C9001 + C9001 + C8984 * C505 + C8987 * C484 + C9002 +
           C9002 + C8983 * C504 + C8985 * C118 + C9003 + C9003 + C8982 * C132) *
              C31138 * C30904 * C30972 * C30954 * C111 +
          (C8985 * C119 + C9004 + C9004 + C8982 * C133 + C8987 * C486 + C9005 +
           C9005 + C8983 * C506 + C8989 * C487 + C9006 + C9006 + C8984 * C507) *
              C31138 * C30904 * C30972 * C30954 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 + C8993 +
            C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 +
            C8984 * C501) *
               C31138 * C30904 * C30972 * C31265 -
           (C8989 * C1282 + C9117 + C9117 + C8984 * C1300 + C8987 * C924 +
            C9118 + C9118 + C8983 * C934 + C8985 * C291 + C9119 + C9119 +
            C8982 * C311) *
               C31138 * C30904 * C30972 * C31253 +
           (C8985 * C292 + C9120 + C9120 + C8982 * C312 + C8987 * C1285 +
            C9121 + C9121 + C8983 * C1303 + C8989 * C1286 + C9122 + C9122 +
            C8984 * C1304) *
               C31138 * C30904 * C30972 * C31228) *
              C286 +
          ((C8985 * C290 + C9123 + C9123 + C8982 * C310 + C8987 * C925 + C9124 +
            C9124 + C8983 * C935 + C8989 * C1281 + C9125 + C9125 +
            C8984 * C1299) *
               C31138 * C30904 * C30972 * C31253 -
           (C8989 * C482 + C8995 + C8995 + C8984 * C502 + C8987 * C479 + C8996 +
            C8996 + C8983 * C499 + C8985 * C116 + C8997 + C8997 +
            C8982 * C130) *
               C31138 * C30904 * C30972 * C31265 -
           (C8989 * C1287 + C9126 + C9126 + C8984 * C1305 + C8987 * C1284 +
            C9127 + C9127 + C8983 * C1302 + C8985 * C293 + C9128 + C9128 +
            C8982 * C313) *
               C31138 * C30904 * C30972 * C31228) *
              C287 +
          ((C8985 * C117 + C8998 + C8998 + C8982 * C131 + C8987 * C478 + C8999 +
            C8999 + C8983 * C498 + C8989 * C483 + C9000 + C9000 +
            C8984 * C503) *
               C31138 * C30904 * C30972 * C31265 -
           (C8989 * C1280 + C9129 + C9129 + C8984 * C1298 + C8987 * C926 +
            C9130 + C9130 + C8983 * C936 + C8985 * C289 + C9131 + C9131 +
            C8982 * C309) *
               C31138 * C30904 * C30972 * C31253 +
           (C8985 * C294 + C9132 + C9132 + C8982 * C314 + C8987 * C1283 +
            C9133 + C9133 + C8983 * C1301 + C8989 * C1288 + C9134 + C9134 +
            C8984 * C1306) *
               C31138 * C30904 * C30972 * C31228) *
              C31222)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * (((C8985 * C115 + C8992 + C8992 + C8982 * C129 +
                                C8987 * C480 + C8993 + C8993 + C8983 * C500 +
                                C8989 * C481 + C8994 + C8994 + C8984 * C501) *
                                   C31138 * C30904 * C31266 -
                               (C8989 * C2000 + C9245 + C9245 + C8984 * C2012 +
                                C8987 * C481 + C9246 + C9246 + C8983 * C501 +
                                C8985 * C480 + C9247 + C9247 + C8982 * C500) *
                                   C31138 * C30904 * C31255 +
                               (C8985 * C481 + C9248 + C9248 + C8982 * C501 +
                                C8987 * C2000 + C9249 + C9249 + C8983 * C2012 +
                                C8989 * C2001 + C9250 + C9250 + C8984 * C2013) *
                                   C31138 * C30904 * C31231) *
                                  C30954 * C286 +
                              ((C8985 * C479 + C9251 + C9251 + C8982 * C499 +
                                C8987 * C482 + C9252 + C9252 + C8983 * C502 +
                                C8989 * C1999 + C9253 + C9253 + C8984 * C2011) *
                                   C31138 * C30904 * C31255 -
                               (C8989 * C482 + C8995 + C8995 + C8984 * C502 +
                                C8987 * C479 + C8996 + C8996 + C8983 * C499 +
                                C8985 * C116 + C8997 + C8997 + C8982 * C130) *
                                   C31138 * C30904 * C31266 -
                               (C8989 * C2002 + C9254 + C9254 + C8984 * C2014 +
                                C8987 * C1999 + C9255 + C9255 + C8983 * C2011 +
                                C8985 * C482 + C9256 + C9256 + C8982 * C502) *
                                   C31138 * C30904 * C31231) *
                                  C30954 * C287 +
                              ((C8985 * C117 + C8998 + C8998 + C8982 * C131 +
                                C8987 * C478 + C8999 + C8999 + C8983 * C498 +
                                C8989 * C483 + C9000 + C9000 + C8984 * C503) *
                                   C31138 * C30904 * C31266 -
                               (C8989 * C1998 + C9257 + C9257 + C8984 * C2010 +
                                C8987 * C483 + C9258 + C9258 + C8983 * C503 +
                                C8985 * C478 + C9259 + C9259 + C8982 * C498) *
                                   C31138 * C30904 * C31255 +
                               (C8985 * C483 + C9260 + C9260 + C8982 * C503 +
                                C8987 * C1998 + C9261 + C9261 + C8983 * C2010 +
                                C8989 * C2003 + C9262 + C9262 + C8984 * C2015) *
                                   C31138 * C30904 * C31231) *
                                  C30954 * C31222)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 + C8993 +
            C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 +
            C8984 * C501) *
               C31138 * C30904 * C30972 * C1072 -
           (C8989 * C1282 + C9117 + C9117 + C8984 * C1300 + C8987 * C924 +
            C9118 + C9118 + C8983 * C934 + C8985 * C291 + C9119 + C9119 +
            C8982 * C311) *
               C31138 * C30904 * C30972 * C1073 +
           (C8985 * C292 + C9120 + C9120 + C8982 * C312 + C8987 * C1285 +
            C9121 + C9121 + C8983 * C1303 + C8989 * C1286 + C9122 + C9122 +
            C8984 * C1304) *
               C31138 * C30904 * C30972 * C31228) *
              C31262 +
          ((C8985 * C290 + C9123 + C9123 + C8982 * C310 + C8987 * C925 + C9124 +
            C9124 + C8983 * C935 + C8989 * C1281 + C9125 + C9125 +
            C8984 * C1299) *
               C31138 * C30904 * C30972 * C1073 -
           (C8989 * C482 + C8995 + C8995 + C8984 * C502 + C8987 * C479 + C8996 +
            C8996 + C8983 * C499 + C8985 * C116 + C8997 + C8997 +
            C8982 * C130) *
               C31138 * C30904 * C30972 * C1072 -
           (C8989 * C1287 + C9126 + C9126 + C8984 * C1305 + C8987 * C1284 +
            C9127 + C9127 + C8983 * C1302 + C8985 * C293 + C9128 + C9128 +
            C8982 * C313) *
               C31138 * C30904 * C30972 * C31228) *
              C31249 +
          ((C8985 * C117 + C8998 + C8998 + C8982 * C131 + C8987 * C478 + C8999 +
            C8999 + C8983 * C498 + C8989 * C483 + C9000 + C9000 +
            C8984 * C503) *
               C31138 * C30904 * C30972 * C1072 -
           (C8989 * C1280 + C9129 + C9129 + C8984 * C1298 + C8987 * C926 +
            C9130 + C9130 + C8983 * C936 + C8985 * C289 + C9131 + C9131 +
            C8982 * C309) *
               C31138 * C30904 * C30972 * C1073 +
           (C8985 * C294 + C9132 + C9132 + C8982 * C314 + C8987 * C1283 +
            C9133 + C9133 + C8983 * C1301 + C8989 * C1288 + C9134 + C9134 +
            C8984 * C1306) *
               C31138 * C30904 * C30972 * C31228) *
              C31222)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 + C8993 +
           C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 + C8984 * C501) *
              C31138 * C30904 * C30972 * C1140 -
          (C8989 * C1282 + C9117 + C9117 + C8984 * C1300 + C8987 * C924 +
           C9118 + C9118 + C8983 * C934 + C8985 * C291 + C9119 + C9119 +
           C8982 * C311) *
              C31138 * C30904 * C30972 * C1141 +
          (C8985 * C292 + C9120 + C9120 + C8982 * C312 + C8987 * C1285 + C9121 +
           C9121 + C8983 * C1303 + C8989 * C1286 + C9122 + C9122 +
           C8984 * C1304) *
              C31138 * C30904 * C30972 * C1142 -
          (C8989 * C5624 + C9792 + C9792 + C8984 * C5630 + C8987 * C1696 +
           C9793 + C9793 + C8983 * C1702 + C8985 * C1148 + C9794 + C9794 +
           C8982 * C1160) *
              C31138 * C30904 * C30972 * C1143 +
          (C8985 * C1149 + C9795 + C9795 + C8982 * C1161 + C8987 * C5625 +
           C9796 + C9796 + C8983 * C5631 + C8989 * C5626 + C9797 + C9797 +
           C8984 * C5632) *
              C31138 * C30904 * C30972 * C1144) *
         C30926) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 + C8993 +
            C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 +
            C8984 * C501) *
               C31138 * C30904 * C31266 -
           (C8989 * C2000 + C9245 + C9245 + C8984 * C2012 + C8987 * C481 +
            C9246 + C9246 + C8983 * C501 + C8985 * C480 + C9247 + C9247 +
            C8982 * C500) *
               C31138 * C30904 * C31255 +
           (C8985 * C481 + C9248 + C9248 + C8982 * C501 + C8987 * C2000 +
            C9249 + C9249 + C8983 * C2012 + C8989 * C2001 + C9250 + C9250 +
            C8984 * C2013) *
               C31138 * C30904 * C31231) *
              C1072 +
          ((C8985 * C924 + C9611 + C9611 + C8982 * C934 + C8987 * C1282 +
            C9612 + C9612 + C8983 * C1300 + C8989 * C2400 + C9613 + C9613 +
            C8984 * C2406) *
               C31138 * C30904 * C31255 -
           (C8989 * C1282 + C9117 + C9117 + C8984 * C1300 + C8987 * C924 +
            C9118 + C9118 + C8983 * C934 + C8985 * C291 + C9119 + C9119 +
            C8982 * C311) *
               C31138 * C30904 * C31266 -
           (C8989 * C6308 + C9908 + C9908 + C8984 * C6314 + C8987 * C2400 +
            C9909 + C9909 + C8983 * C2406 + C8985 * C1282 + C9910 + C9910 +
            C8982 * C1300) *
               C31138 * C30904 * C31231) *
              C1073 +
          ((C8985 * C292 + C9120 + C9120 + C8982 * C312 + C8987 * C1285 +
            C9121 + C9121 + C8983 * C1303 + C8989 * C1286 + C9122 + C9122 +
            C8984 * C1304) *
               C31138 * C30904 * C31266 -
           (C8989 * C6307 + C9911 + C9911 + C8984 * C6313 + C8987 * C1286 +
            C9912 + C9912 + C8983 * C1304 + C8985 * C1285 + C9913 + C9913 +
            C8982 * C1303) *
               C31138 * C30904 * C31255 +
           (C8985 * C1286 + C9914 + C9914 + C8982 * C1304 + C8987 * C6307 +
            C9915 + C9915 + C8983 * C6313 + C8989 * C6309 + C9916 + C9916 +
            C8984 * C6315) *
               C31138 * C30904 * C31231) *
              C31228) *
         C30926) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * (((C8985 * C115 + C8992 + C8992 + C8982 * C129 +
                                C8987 * C480 + C8993 + C8993 + C8983 * C500 +
                                C8989 * C481 + C8994 + C8994 + C8984 * C501) *
                                   C31138 * C30904 * C1818 -
                               (C8989 * C2000 + C9245 + C9245 + C8984 * C2012 +
                                C8987 * C481 + C9246 + C9246 + C8983 * C501 +
                                C8985 * C480 + C9247 + C9247 + C8982 * C500) *
                                   C31138 * C30904 * C1819 +
                               (C8985 * C481 + C9248 + C9248 + C8982 * C501 +
                                C8987 * C2000 + C9249 + C9249 + C8983 * C2012 +
                                C8989 * C2001 + C9250 + C9250 + C8984 * C2013) *
                                   C31138 * C30904 * C31231) *
                                  C30954 * C31262 +
                              ((C8985 * C479 + C9251 + C9251 + C8982 * C499 +
                                C8987 * C482 + C9252 + C9252 + C8983 * C502 +
                                C8989 * C1999 + C9253 + C9253 + C8984 * C2011) *
                                   C31138 * C30904 * C1819 -
                               (C8989 * C482 + C8995 + C8995 + C8984 * C502 +
                                C8987 * C479 + C8996 + C8996 + C8983 * C499 +
                                C8985 * C116 + C8997 + C8997 + C8982 * C130) *
                                   C31138 * C30904 * C1818 -
                               (C8989 * C2002 + C9254 + C9254 + C8984 * C2014 +
                                C8987 * C1999 + C9255 + C9255 + C8983 * C2011 +
                                C8985 * C482 + C9256 + C9256 + C8982 * C502) *
                                   C31138 * C30904 * C31231) *
                                  C30954 * C31249 +
                              ((C8985 * C117 + C8998 + C8998 + C8982 * C131 +
                                C8987 * C478 + C8999 + C8999 + C8983 * C498 +
                                C8989 * C483 + C9000 + C9000 + C8984 * C503) *
                                   C31138 * C30904 * C1818 -
                               (C8989 * C1998 + C9257 + C9257 + C8984 * C2010 +
                                C8987 * C483 + C9258 + C9258 + C8983 * C503 +
                                C8985 * C478 + C9259 + C9259 + C8982 * C498) *
                                   C31138 * C30904 * C1819 +
                               (C8985 * C483 + C9260 + C9260 + C8982 * C503 +
                                C8987 * C1998 + C9261 + C9261 + C8983 * C2010 +
                                C8989 * C2003 + C9262 + C9262 + C8984 * C2015) *
                                   C31138 * C30904 * C31231) *
                                  C30954 * C31222)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 + C8993 +
            C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 +
            C8984 * C501) *
               C31138 * C30904 * C1818 -
           (C8989 * C2000 + C9245 + C9245 + C8984 * C2012 + C8987 * C481 +
            C9246 + C9246 + C8983 * C501 + C8985 * C480 + C9247 + C9247 +
            C8982 * C500) *
               C31138 * C30904 * C1819 +
           (C8985 * C481 + C9248 + C9248 + C8982 * C501 + C8987 * C2000 +
            C9249 + C9249 + C8983 * C2012 + C8989 * C2001 + C9250 + C9250 +
            C8984 * C2013) *
               C31138 * C30904 * C31231) *
              C31265 +
          ((C8985 * C924 + C9611 + C9611 + C8982 * C934 + C8987 * C1282 +
            C9612 + C9612 + C8983 * C1300 + C8989 * C2400 + C9613 + C9613 +
            C8984 * C2406) *
               C31138 * C30904 * C1819 -
           (C8989 * C1282 + C9117 + C9117 + C8984 * C1300 + C8987 * C924 +
            C9118 + C9118 + C8983 * C934 + C8985 * C291 + C9119 + C9119 +
            C8982 * C311) *
               C31138 * C30904 * C1818 -
           (C8989 * C6308 + C9908 + C9908 + C8984 * C6314 + C8987 * C2400 +
            C9909 + C9909 + C8983 * C2406 + C8985 * C1282 + C9910 + C9910 +
            C8982 * C1300) *
               C31138 * C30904 * C31231) *
              C31253 +
          ((C8985 * C292 + C9120 + C9120 + C8982 * C312 + C8987 * C1285 +
            C9121 + C9121 + C8983 * C1303 + C8989 * C1286 + C9122 + C9122 +
            C8984 * C1304) *
               C31138 * C30904 * C1818 -
           (C8989 * C6307 + C9911 + C9911 + C8984 * C6313 + C8987 * C1286 +
            C9912 + C9912 + C8983 * C1304 + C8985 * C1285 + C9913 + C9913 +
            C8982 * C1303) *
               C31138 * C30904 * C1819 +
           (C8985 * C1286 + C9914 + C9914 + C8982 * C1304 + C8987 * C6307 +
            C9915 + C9915 + C8983 * C6313 + C8989 * C6309 + C9916 + C9916 +
            C8984 * C6315) *
               C31138 * C30904 * C31231) *
              C31228) *
         C30926) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 + C8993 +
           C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 + C8984 * C501) *
              C31138 * C30904 * C1993 -
          (C8989 * C2000 + C9245 + C9245 + C8984 * C2012 + C8987 * C481 +
           C9246 + C9246 + C8983 * C501 + C8985 * C480 + C9247 + C9247 +
           C8982 * C500) *
              C31138 * C30904 * C1994 +
          (C8985 * C481 + C9248 + C9248 + C8982 * C501 + C8987 * C2000 + C9249 +
           C9249 + C8983 * C2012 + C8989 * C2001 + C9250 + C9250 +
           C8984 * C2013) *
              C31138 * C30904 * C1995 -
          (C8989 * C10549 + C10556 + C10556 + C8984 * C10553 + C8987 * C2001 +
           C10557 + C10557 + C8983 * C2013 + C8985 * C2000 + C10558 + C10558 +
           C8982 * C2012) *
              C31138 * C30904 * C1996 +
          (C8985 * C2001 + C10559 + C10559 + C8982 * C2013 + C8987 * C10549 +
           C10560 + C10560 + C8983 * C10553 + C8989 * C10550 + C10561 + C10561 +
           C8984 * C10554) *
              C31138 * C30904 * C1997) *
         C30954 * C30926) /
            (p * q * std::sqrt(p + q));
    d2ee[63] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
                C169 * C104 + C170 * C105) *
                   C31198 -
               (C549 * C105 + C550 * C104 +
                (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
                   C31059) *
                  C30954 * C654 +
              ((C550 * C103 + C549 * C104 + C553 * C105) * C31059 -
               (C171 * C105 + C170 * C104 + C169 * C103) * C31198) *
                  C30954 * C655 +
              ((C170 * C103 + C171 * C104 + C172 * C105) * C31198 -
               (C778 * C105 + C553 * C104 + C549 * C103) * C31059) *
                  C30954 * C656 +
              ((C553 * C103 + C778 * C104 +
                (C113 * C768 + C774 + C774 + C31151 * C770) * C31138 * C105) *
                   C31059 -
               (C173 * C105 + C172 * C104 + C171 * C103) * C31198) *
                  C30954 * C31232) +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             (((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
                 C169 * C104 + C170 * C105) *
                    C31198 -
                (C549 * C105 + C550 * C104 +
                 (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
                    C31059) *
                   C1072 +
               (((C113 * C924 + C940 + C940 + C31151 * C934) * C31138 * C103 +
                 C960 * C104 + C961 * C105) *
                    C31059 -
                (C360 * C105 + C361 * C104 +
                 (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
                    C31198) *
                   C1073 +
               (((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
                 C362 * C104 + C363 * C105) *
                    C31198 -
                (C1597 * C105 + C1598 * C104 +
                 (C113 * C1285 + C1313 + C1313 + C31151 * C1303) * C31138 *
                     C103) *
                    C31059) *
                   C31228) *
                  C31183 +
              (((C550 * C103 + C549 * C104 + C553 * C105) * C31059 -
                (C171 * C105 + C170 * C104 + C169 * C103) * C31198) *
                   C1072 +
               ((C361 * C103 + C360 * C104 + C364 * C105) * C31198 -
                (C962 * C105 + C961 * C104 + C960 * C103) * C31059) *
                   C1073 +
               ((C1598 * C103 + C1597 * C104 +
                 (C113 * C1582 + C1590 + C1590 + C31151 * C1584) * C31138 *
                     C105) *
                    C31059 -
                (C365 * C105 + C363 * C104 + C362 * C103) * C31198) *
                   C31228) *
                  C30937)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C2282 -
           (C549 * C105 + C550 * C104 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
               C2283 +
           ((C113 * C481 + C516 + C516 + C31151 * C501) * C31138 * C103 +
            C551 * C104 + C552 * C105) *
               C2284 -
           (C2301 * C105 + C2302 * C104 +
            (C113 * C2000 + C2019 + C2019 + C31151 * C2012) * C31138 * C103) *
               C31244) *
              C30954 * C31183 +
          ((C550 * C103 + C549 * C104 + C553 * C105) * C2283 -
           (C171 * C105 + C170 * C104 + C169 * C103) * C2282 -
           (C554 * C105 + C552 * C104 + C551 * C103) * C2284 +
           (C2302 * C103 + C2301 * C104 +
            (C113 * C2286 + C2294 + C2294 + C31151 * C2288) * C31138 * C105) *
               C31244) *
              C30954 * C30937)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C31198 -
           ((C113 * C1285 + C1313 + C1313 + C31151 * C1303) * C4735 +
            (C113 * C924 + C940 + C940 + C31151 * C934) * C4734 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
               C30904 * C31059) *
              C30954 * C654 +
          ((C544 * C4733 + C957 * C4734 + C1596 * C4735) * C30904 * C31059 -
           (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C31198) *
              C30954 * C655 +
          ((C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C31198 -
           (C1595 * C4735 + C958 * C4734 + C543 * C4733) * C30904 * C31059) *
              C30954 * C656 +
          ((C547 * C4733 + C959 * C4734 +
            (C113 * C1582 + C1590 + C1590 + C31151 * C1584) * C4735) *
               C30904 * C31059 -
           (C359 * C4735 + C358 * C4734 + C166 * C4733) * C30904 * C31198) *
              C30954 * C31232)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
             C4860 * C4734 + C4861 * C4735) *
                C30904 * C31198 -
            (C5323 * C4735 + C5324 * C4734 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
                C30904 * C31059) *
               C1072 +
           ((C5324 * C4733 + C5323 * C4734 + C5655 * C4735) * C30904 * C31059 -
            (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C31198) *
               C1073 +
           ((C4861 * C4733 + C4862 * C4734 + C5513 * C4735) * C30904 * C31198 -
            ((C113 * C5625 + C5643 + C5643 + C31151 * C5631) * C4735 +
             C5655 * C4734 + C5323 * C4733) *
                C30904 * C31059) *
               C31228) *
              C31183 +
          (((C544 * C4733 + C957 * C4734 + C1596 * C4735) * C30904 * C31059 -
            (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C31198) *
               C1072 +
           ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C31198 -
            (C5918 * C4735 + C1596 * C4734 + C957 * C4733) * C30904 * C31059) *
               C1073 +
           ((C1596 * C4733 + C5918 * C4734 +
             (C113 * C5909 + C5915 + C5915 + C31151 * C5911) * C4735) *
                C30904 * C31059 -
            (C5763 * C4735 + C1434 * C4734 + C356 * C4733) * C30904 * C31198) *
               C31228) *
              C30937)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C2282 -
           (C5323 * C4735 + C5324 * C4734 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
               C30904 * C2283 +
           ((C113 * C481 + C516 + C516 + C31151 * C501) * C4733 +
            C5653 * C4734 + C5654 * C4735) *
               C30904 * C2284 -
           ((C113 * C6307 + C6317 + C6317 + C31151 * C6313) * C4735 +
            (C113 * C2400 + C2410 + C2410 + C31151 * C2406) * C4734 +
            (C113 * C2000 + C2019 + C2019 + C31151 * C2012) * C4733) *
               C30904 * C31244) *
              C30954 * C31183 +
          ((C544 * C4733 + C957 * C4734 + C1596 * C4735) * C30904 * C2283 -
           (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C2282 -
           (C6474 * C4735 + C2182 * C4734 + C545 * C4733) * C30904 * C2284 +
           (C2300 * C4733 +
            (C113 * C2401 + C2411 + C2411 + C31151 * C2407) * C4734 +
            (C113 * C6572 + C6576 + C6576 + C31151 * C6574) * C4735) *
               C30904 * C31244) *
              C30954 * C30937)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 + C8993 +
            C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 +
            C8984 * C501) *
               C31138 * C30904 * C31198 -
           (C8989 * C2000 + C9245 + C9245 + C8984 * C2012 + C8987 * C481 +
            C9246 + C9246 + C8983 * C501 + C8985 * C480 + C9247 + C9247 +
            C8982 * C500) *
               C31138 * C30904 * C31059) *
              C30954 * C654 +
          ((C8985 * C479 + C9251 + C9251 + C8982 * C499 + C8987 * C482 + C9252 +
            C9252 + C8983 * C502 + C8989 * C1999 + C9253 + C9253 +
            C8984 * C2011) *
               C31138 * C30904 * C31059 -
           (C8989 * C482 + C8995 + C8995 + C8984 * C502 + C8987 * C479 + C8996 +
            C8996 + C8983 * C499 + C8985 * C116 + C8997 + C8997 +
            C8982 * C130) *
               C31138 * C30904 * C31198) *
              C30954 * C655 +
          ((C8985 * C117 + C8998 + C8998 + C8982 * C131 + C8987 * C478 + C8999 +
            C8999 + C8983 * C498 + C8989 * C483 + C9000 + C9000 +
            C8984 * C503) *
               C31138 * C30904 * C31198 -
           (C8989 * C1998 + C9257 + C9257 + C8984 * C2010 + C8987 * C483 +
            C9258 + C9258 + C8983 * C503 + C8985 * C478 + C9259 + C9259 +
            C8982 * C498) *
               C31138 * C30904 * C31059) *
              C30954 * C656 +
          ((C8985 * C484 + C9462 + C9462 + C8982 * C504 + C8987 * C485 + C9463 +
            C9463 + C8983 * C505 + C8989 * C2286 + C9464 + C9464 +
            C8984 * C2288) *
               C31138 * C30904 * C31059 -
           (C8989 * C485 + C9001 + C9001 + C8984 * C505 + C8987 * C484 + C9002 +
            C9002 + C8983 * C504 + C8985 * C118 + C9003 + C9003 +
            C8982 * C132) *
               C31138 * C30904 * C31198) *
              C30954 * C31232)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 +
             C8993 + C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 +
             C8984 * C501) *
                C31138 * C30904 * C31198 -
            (C8989 * C2000 + C9245 + C9245 + C8984 * C2012 + C8987 * C481 +
             C9246 + C9246 + C8983 * C501 + C8985 * C480 + C9247 + C9247 +
             C8982 * C500) *
                C31138 * C30904 * C31059) *
               C1072 +
           ((C8985 * C924 + C9611 + C9611 + C8982 * C934 + C8987 * C1282 +
             C9612 + C9612 + C8983 * C1300 + C8989 * C2400 + C9613 + C9613 +
             C8984 * C2406) *
                C31138 * C30904 * C31059 -
            (C8989 * C1282 + C9117 + C9117 + C8984 * C1300 + C8987 * C924 +
             C9118 + C9118 + C8983 * C934 + C8985 * C291 + C9119 + C9119 +
             C8982 * C311) *
                C31138 * C30904 * C31198) *
               C1073 +
           ((C8985 * C292 + C9120 + C9120 + C8982 * C312 + C8987 * C1285 +
             C9121 + C9121 + C8983 * C1303 + C8989 * C1286 + C9122 + C9122 +
             C8984 * C1304) *
                C31138 * C30904 * C31198 -
            (C8989 * C6307 + C9911 + C9911 + C8984 * C6313 + C8987 * C1286 +
             C9912 + C9912 + C8983 * C1304 + C8985 * C1285 + C9913 + C9913 +
             C8982 * C1303) *
                C31138 * C30904 * C31059) *
               C31228) *
              C31183 +
          (((C8985 * C479 + C9251 + C9251 + C8982 * C499 + C8987 * C482 +
             C9252 + C9252 + C8983 * C502 + C8989 * C1999 + C9253 + C9253 +
             C8984 * C2011) *
                C31138 * C30904 * C31059 -
            (C8989 * C482 + C8995 + C8995 + C8984 * C502 + C8987 * C479 +
             C8996 + C8996 + C8983 * C499 + C8985 * C116 + C8997 + C8997 +
             C8982 * C130) *
                C31138 * C30904 * C31198) *
               C1072 +
           ((C8985 * C290 + C9123 + C9123 + C8982 * C310 + C8987 * C925 +
             C9124 + C9124 + C8983 * C935 + C8989 * C1281 + C9125 + C9125 +
             C8984 * C1299) *
                C31138 * C30904 * C31198 -
            (C8989 * C2401 + C9614 + C9614 + C8984 * C2407 + C8987 * C1281 +
             C9615 + C9615 + C8983 * C1299 + C8985 * C925 + C9616 + C9616 +
             C8982 * C935) *
                C31138 * C30904 * C31059) *
               C1073 +
           ((C8985 * C1284 + C10164 + C10164 + C8982 * C1302 + C8987 * C1287 +
             C10165 + C10165 + C8983 * C1305 + C8989 * C6572 + C10166 + C10166 +
             C8984 * C6574) *
                C31138 * C30904 * C31059 -
            (C8989 * C1287 + C9126 + C9126 + C8984 * C1305 + C8987 * C1284 +
             C9127 + C9127 + C8983 * C1302 + C8985 * C293 + C9128 + C9128 +
             C8982 * C313) *
                C31138 * C30904 * C31198) *
               C31228) *
              C30937)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 + C8993 +
            C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 +
            C8984 * C501) *
               C31138 * C30904 * C2282 -
           (C8989 * C2000 + C9245 + C9245 + C8984 * C2012 + C8987 * C481 +
            C9246 + C9246 + C8983 * C501 + C8985 * C480 + C9247 + C9247 +
            C8982 * C500) *
               C31138 * C30904 * C2283 +
           (C8985 * C481 + C9248 + C9248 + C8982 * C501 + C8987 * C2000 +
            C9249 + C9249 + C8983 * C2012 + C8989 * C2001 + C9250 + C9250 +
            C8984 * C2013) *
               C31138 * C30904 * C2284 -
           (C8989 * C10549 + C10556 + C10556 + C8984 * C10553 + C8987 * C2001 +
            C10557 + C10557 + C8983 * C2013 + C8985 * C2000 + C10558 + C10558 +
            C8982 * C2012) *
               C31138 * C30904 * C31244) *
              C30954 * C31183 +
          ((C8985 * C479 + C9251 + C9251 + C8982 * C499 + C8987 * C482 + C9252 +
            C9252 + C8983 * C502 + C8989 * C1999 + C9253 + C9253 +
            C8984 * C2011) *
               C31138 * C30904 * C2283 -
           (C8989 * C482 + C8995 + C8995 + C8984 * C502 + C8987 * C479 + C8996 +
            C8996 + C8983 * C499 + C8985 * C116 + C8997 + C8997 +
            C8982 * C130) *
               C31138 * C30904 * C2282 -
           (C8989 * C2002 + C9254 + C9254 + C8984 * C2014 + C8987 * C1999 +
            C9255 + C9255 + C8983 * C2011 + C8985 * C482 + C9256 + C9256 +
            C8982 * C502) *
               C31138 * C30904 * C2284 +
           (C8985 * C1999 + C10815 + C10815 + C8982 * C2011 + C8987 * C2002 +
            C10816 + C10816 + C8983 * C2014 + C8989 * C10811 + C10817 + C10817 +
            C8984 * C10813) *
               C31138 * C30904 * C31244) *
              C30954 * C30937)) /
            (p * q * std::sqrt(p + q));
    d2ee[64] +=
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
           C169 * C104 + C170 * C105) *
              C30972 * C30954 * C108 -
          (C171 * C105 + C170 * C104 + C169 * C103) * C30972 * C30954 * C109 +
          (C170 * C103 + C171 * C104 + C172 * C105) * C30972 * C30954 * C110 -
          (C173 * C105 + C172 * C104 + C171 * C103) * C30972 * C30954 * C111 +
          (C172 * C103 + C173 * C104 +
           (C113 * C121 + C153 + C153 + C31151 * C135) * C31138 * C105) *
              C30972 * C30954 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C30972 * C31265 -
           (C360 * C105 + C361 * C104 +
            (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
               C30972 * C31253 +
           ((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
            C362 * C104 + C363 * C105) *
               C30972 * C31228) *
              C286 +
          ((C361 * C103 + C360 * C104 + C364 * C105) * C30972 * C31253 -
           (C171 * C105 + C170 * C104 + C169 * C103) * C30972 * C31265 -
           (C365 * C105 + C363 * C104 + C362 * C103) * C30972 * C31228) *
              C287 +
          ((C170 * C103 + C171 * C104 + C172 * C105) * C30972 * C31265 -
           ((C113 * C297 + C340 + C340 + C31151 * C317) * C31138 * C105 +
            C364 * C104 + C360 * C103) *
               C30972 * C31253 +
           (C363 * C103 + C365 * C104 +
            (C113 * C298 + C341 + C341 + C31151 * C318) * C31138 * C105) *
               C30972 * C31228) *
              C31222)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C30972 * C1072 -
           (C360 * C105 + C361 * C104 +
            (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
               C30972 * C1073 +
           ((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
            C362 * C104 + C363 * C105) *
               C30972 * C31228) *
              C31262 +
          ((C361 * C103 + C360 * C104 + C364 * C105) * C30972 * C1073 -
           (C171 * C105 + C170 * C104 + C169 * C103) * C30972 * C1072 -
           (C365 * C105 + C363 * C104 + C362 * C103) * C30972 * C31228) *
              C31249 +
          ((C170 * C103 + C171 * C104 + C172 * C105) * C30972 * C1072 -
           (C668 * C105 + C364 * C104 + C360 * C103) * C30972 * C1073 +
           (C363 * C103 + C365 * C104 +
            (C113 * C298 + C341 + C341 + C31151 * C318) * C31138 * C105) *
               C30972 * C31228) *
              C31222)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
           C169 * C104 + C170 * C105) *
              C30972 * C1140 -
          (C360 * C105 + C361 * C104 +
           (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
              C30972 * C1141 +
          ((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
           C362 * C104 + C363 * C105) *
              C30972 * C1142 -
          ((C113 * C1146 + C1165 + C1165 + C31151 * C1158) * C31138 * C105 +
           (C113 * C1147 + C1166 + C1166 + C31151 * C1159) * C31138 * C104 +
           (C113 * C1148 + C1167 + C1167 + C31151 * C1160) * C31138 * C103) *
              C30972 * C1143 +
          ((C113 * C1149 + C1168 + C1168 + C31151 * C1161) * C31138 * C103 +
           (C113 * C1150 + C1169 + C1169 + C31151 * C1162) * C31138 * C104 +
           (C113 * C1151 + C1170 + C1170 + C31151 * C1163) * C31138 * C105) *
              C30972 * C1144) *
         C30926) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C1818 -
           (C549 * C105 + C550 * C104 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
               C1819 +
           ((C113 * C481 + C516 + C516 + C31151 * C501) * C31138 * C103 +
            C551 * C104 + C552 * C105) *
               C31231) *
              C30954 * C31262 +
          ((C550 * C103 + C549 * C104 + C553 * C105) * C1819 -
           (C171 * C105 + C170 * C104 + C169 * C103) * C1818 -
           (C554 * C105 + C552 * C104 + C551 * C103) * C31231) *
              C30954 * C31249 +
          ((C170 * C103 + C171 * C104 + C172 * C105) * C1818 -
           (C778 * C105 + C553 * C104 + C549 * C103) * C1819 +
           (C552 * C103 + C554 * C104 +
            (C113 * C487 + C530 + C530 + C31151 * C507) * C31138 * C105) *
               C31231) *
              C30954 * C31222)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C1818 -
           (C549 * C105 + C550 * C104 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
               C1819 +
           ((C113 * C481 + C516 + C516 + C31151 * C501) * C31138 * C103 +
            C551 * C104 + C552 * C105) *
               C31231) *
              C31265 +
          (((C113 * C924 + C940 + C940 + C31151 * C934) * C31138 * C103 +
            C960 * C104 + C961 * C105) *
               C1819 -
           (C360 * C105 + C361 * C104 +
            (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
               C1818 -
           ((C113 * C1280 + C1308 + C1308 + C31151 * C1298) * C31138 * C105 +
            (C113 * C1281 + C1309 + C1309 + C31151 * C1299) * C31138 * C104 +
            (C113 * C1282 + C1310 + C1310 + C31151 * C1300) * C31138 * C103) *
               C31231) *
              C31253 +
          (((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
            C362 * C104 + C363 * C105) *
               C1818 -
           (C1597 * C105 + C1598 * C104 +
            (C113 * C1285 + C1313 + C1313 + C31151 * C1303) * C31138 * C103) *
               C1819 +
           ((C113 * C1286 + C1314 + C1314 + C31151 * C1304) * C31138 * C103 +
            (C113 * C1287 + C1315 + C1315 + C31151 * C1305) * C31138 * C104 +
            (C113 * C1288 + C1316 + C1316 + C31151 * C1306) * C31138 * C105) *
               C31231) *
              C31228) *
         C30926) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
           (C113 * C291 + C326 + C326 + C31151 * C311) * C4734 +
           (C113 * C292 + C327 + C327 + C31151 * C312) * C4735) *
              C30904 * C30972 * C30954 * C108 -
          (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C30972 *
              C30954 * C109 +
          (C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C30972 *
              C30954 * C110 -
          (C359 * C4735 + C358 * C4734 + C166 * C4733) * C30904 * C30972 *
              C30954 * C111 +
          (C167 * C4733 + C667 * C4734 +
           (C113 * C298 + C341 + C341 + C31151 * C318) * C4735) *
              C30904 * C30972 * C30954 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C30972 * C31265 -
           (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C30972 *
               C31253 +
           (C4861 * C4733 + C4862 * C4734 +
            (C113 * C1149 + C1168 + C1168 + C31151 * C1161) * C4735) *
               C30904 * C30972 * C31228) *
              C286 +
          ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C30972 *
               C31253 -
           (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C30972 *
               C31265 -
           ((C113 * C1150 + C1169 + C1169 + C31151 * C1162) * C4735 +
            C1434 * C4734 + C356 * C4733) *
               C30904 * C30972 * C31228) *
              C287 +
          ((C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C30972 *
               C31265 -
           (C1433 * C4735 + C357 * C4734 + C354 * C4733) * C30904 * C30972 *
               C31253 +
           (C357 * C4733 + C1433 * C4734 +
            (C113 * C1151 + C1170 + C1170 + C31151 * C1163) * C4735) *
               C30904 * C30972 * C31228) *
              C31222)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C30972 * C1072 -
           (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C30972 *
               C1073 +
           (C4861 * C4733 + C4862 * C4734 +
            (C113 * C1149 + C1168 + C1168 + C31151 * C1161) * C4735) *
               C30904 * C30972 * C31228) *
              C31262 +
          ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C30972 *
               C1073 -
           (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C30972 *
               C1072 -
           ((C113 * C1150 + C1169 + C1169 + C31151 * C1162) * C4735 +
            C1434 * C4734 + C356 * C4733) *
               C30904 * C30972 * C31228) *
              C31249 +
          ((C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C30972 *
               C1072 -
           (C1433 * C4735 + C357 * C4734 + C354 * C4733) * C30904 * C30972 *
               C1073 +
           (C357 * C4733 + C1433 * C4734 +
            (C113 * C1151 + C1170 + C1170 + C31151 * C1163) * C4735) *
               C30904 * C30972 * C31228) *
              C31222)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 + C4860 * C4734 +
           C4861 * C4735) *
              C30904 * C30972 * C1140 -
          (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C30972 *
              C1141 +
          (C4861 * C4733 + C4862 * C4734 + C5513 * C4735) * C30904 * C30972 *
              C1142 -
          (C5514 * C4735 + C5513 * C4734 + C4862 * C4733) * C30904 * C30972 *
              C1143 +
          (C5513 * C4733 + C5514 * C4734 +
           (C113 * C5497 + C5508 + C5508 + C31151 * C5501) * C4735) *
              C30904 * C30972 * C1144) *
         C30926) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C1818 -
           (C5323 * C4735 + C5324 * C4734 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
               C30904 * C1819 +
           ((C113 * C481 + C516 + C516 + C31151 * C501) * C4733 +
            C5653 * C4734 + C5654 * C4735) *
               C30904 * C31231) *
              C30954 * C31262 +
          ((C544 * C4733 + C957 * C4734 + C1596 * C4735) * C30904 * C1819 -
           (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C1818 -
           ((C113 * C1287 + C1315 + C1315 + C31151 * C1305) * C4735 +
            C2182 * C4734 + C545 * C4733) *
               C30904 * C31231) *
              C30954 * C31249 +
          ((C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C1818 -
           (C1595 * C4735 + C958 * C4734 + C543 * C4733) * C30904 * C1819 +
           (C546 * C4733 + C2181 * C4734 +
            (C113 * C1288 + C1316 + C1316 + C31151 * C1306) * C4735) *
               C30904 * C31231) *
              C30954 * C31222)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C1818 -
           (C5323 * C4735 + C5324 * C4734 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
               C30904 * C1819 +
           ((C113 * C481 + C516 + C516 + C31151 * C501) * C4733 +
            C5653 * C4734 + C5654 * C4735) *
               C30904 * C31231) *
              C31265 +
          ((C5324 * C4733 + C5323 * C4734 + C5655 * C4735) * C30904 * C1819 -
           (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C1818 -
           (C5656 * C4735 + C5654 * C4734 + C5653 * C4733) * C30904 * C31231) *
              C31253 +
          ((C4861 * C4733 + C4862 * C4734 + C5513 * C4735) * C30904 * C1818 -
           (C6025 * C4735 + C5655 * C4734 + C5323 * C4733) * C30904 * C1819 +
           (C5654 * C4733 + C5656 * C4734 +
            (C113 * C5626 + C5644 + C5644 + C31151 * C5632) * C4735) *
               C30904 * C31231) *
              C31228) *
         C30926) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 + C8993 +
           C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 + C8984 * C501) *
              C31138 * C30904 * C30972 * C30954 * C108 -
          (C8989 * C482 + C8995 + C8995 + C8984 * C502 + C8987 * C479 + C8996 +
           C8996 + C8983 * C499 + C8985 * C116 + C8997 + C8997 + C8982 * C130) *
              C31138 * C30904 * C30972 * C30954 * C109 +
          (C8985 * C117 + C8998 + C8998 + C8982 * C131 + C8987 * C478 + C8999 +
           C8999 + C8983 * C498 + C8989 * C483 + C9000 + C9000 + C8984 * C503) *
              C31138 * C30904 * C30972 * C30954 * C110 -
          (C8989 * C485 + C9001 + C9001 + C8984 * C505 + C8987 * C484 + C9002 +
           C9002 + C8983 * C504 + C8985 * C118 + C9003 + C9003 + C8982 * C132) *
              C31138 * C30904 * C30972 * C30954 * C111 +
          (C8985 * C119 + C9004 + C9004 + C8982 * C133 + C8987 * C486 + C9005 +
           C9005 + C8983 * C506 + C8989 * C487 + C9006 + C9006 + C8984 * C507) *
              C31138 * C30904 * C30972 * C30954 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 + C8993 +
            C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 +
            C8984 * C501) *
               C31138 * C30904 * C30972 * C31265 -
           (C8989 * C1282 + C9117 + C9117 + C8984 * C1300 + C8987 * C924 +
            C9118 + C9118 + C8983 * C934 + C8985 * C291 + C9119 + C9119 +
            C8982 * C311) *
               C31138 * C30904 * C30972 * C31253 +
           (C8985 * C292 + C9120 + C9120 + C8982 * C312 + C8987 * C1285 +
            C9121 + C9121 + C8983 * C1303 + C8989 * C1286 + C9122 + C9122 +
            C8984 * C1304) *
               C31138 * C30904 * C30972 * C31228) *
              C286 +
          ((C8985 * C290 + C9123 + C9123 + C8982 * C310 + C8987 * C925 + C9124 +
            C9124 + C8983 * C935 + C8989 * C1281 + C9125 + C9125 +
            C8984 * C1299) *
               C31138 * C30904 * C30972 * C31253 -
           (C8989 * C482 + C8995 + C8995 + C8984 * C502 + C8987 * C479 + C8996 +
            C8996 + C8983 * C499 + C8985 * C116 + C8997 + C8997 +
            C8982 * C130) *
               C31138 * C30904 * C30972 * C31265 -
           (C8989 * C1287 + C9126 + C9126 + C8984 * C1305 + C8987 * C1284 +
            C9127 + C9127 + C8983 * C1302 + C8985 * C293 + C9128 + C9128 +
            C8982 * C313) *
               C31138 * C30904 * C30972 * C31228) *
              C287 +
          ((C8985 * C117 + C8998 + C8998 + C8982 * C131 + C8987 * C478 + C8999 +
            C8999 + C8983 * C498 + C8989 * C483 + C9000 + C9000 +
            C8984 * C503) *
               C31138 * C30904 * C30972 * C31265 -
           (C8989 * C1280 + C9129 + C9129 + C8984 * C1298 + C8987 * C926 +
            C9130 + C9130 + C8983 * C936 + C8985 * C289 + C9131 + C9131 +
            C8982 * C309) *
               C31138 * C30904 * C30972 * C31253 +
           (C8985 * C294 + C9132 + C9132 + C8982 * C314 + C8987 * C1283 +
            C9133 + C9133 + C8983 * C1301 + C8989 * C1288 + C9134 + C9134 +
            C8984 * C1306) *
               C31138 * C30904 * C30972 * C31228) *
              C31222)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 + C8993 +
            C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 +
            C8984 * C501) *
               C31138 * C30904 * C30972 * C1072 -
           (C8989 * C1282 + C9117 + C9117 + C8984 * C1300 + C8987 * C924 +
            C9118 + C9118 + C8983 * C934 + C8985 * C291 + C9119 + C9119 +
            C8982 * C311) *
               C31138 * C30904 * C30972 * C1073 +
           (C8985 * C292 + C9120 + C9120 + C8982 * C312 + C8987 * C1285 +
            C9121 + C9121 + C8983 * C1303 + C8989 * C1286 + C9122 + C9122 +
            C8984 * C1304) *
               C31138 * C30904 * C30972 * C31228) *
              C31262 +
          ((C8985 * C290 + C9123 + C9123 + C8982 * C310 + C8987 * C925 + C9124 +
            C9124 + C8983 * C935 + C8989 * C1281 + C9125 + C9125 +
            C8984 * C1299) *
               C31138 * C30904 * C30972 * C1073 -
           (C8989 * C482 + C8995 + C8995 + C8984 * C502 + C8987 * C479 + C8996 +
            C8996 + C8983 * C499 + C8985 * C116 + C8997 + C8997 +
            C8982 * C130) *
               C31138 * C30904 * C30972 * C1072 -
           (C8989 * C1287 + C9126 + C9126 + C8984 * C1305 + C8987 * C1284 +
            C9127 + C9127 + C8983 * C1302 + C8985 * C293 + C9128 + C9128 +
            C8982 * C313) *
               C31138 * C30904 * C30972 * C31228) *
              C31249 +
          ((C8985 * C117 + C8998 + C8998 + C8982 * C131 + C8987 * C478 + C8999 +
            C8999 + C8983 * C498 + C8989 * C483 + C9000 + C9000 +
            C8984 * C503) *
               C31138 * C30904 * C30972 * C1072 -
           (C8989 * C1280 + C9129 + C9129 + C8984 * C1298 + C8987 * C926 +
            C9130 + C9130 + C8983 * C936 + C8985 * C289 + C9131 + C9131 +
            C8982 * C309) *
               C31138 * C30904 * C30972 * C1073 +
           (C8985 * C294 + C9132 + C9132 + C8982 * C314 + C8987 * C1283 +
            C9133 + C9133 + C8983 * C1301 + C8989 * C1288 + C9134 + C9134 +
            C8984 * C1306) *
               C31138 * C30904 * C30972 * C31228) *
              C31222)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 + C8993 +
           C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 + C8984 * C501) *
              C31138 * C30904 * C30972 * C1140 -
          (C8989 * C1282 + C9117 + C9117 + C8984 * C1300 + C8987 * C924 +
           C9118 + C9118 + C8983 * C934 + C8985 * C291 + C9119 + C9119 +
           C8982 * C311) *
              C31138 * C30904 * C30972 * C1141 +
          (C8985 * C292 + C9120 + C9120 + C8982 * C312 + C8987 * C1285 + C9121 +
           C9121 + C8983 * C1303 + C8989 * C1286 + C9122 + C9122 +
           C8984 * C1304) *
              C31138 * C30904 * C30972 * C1142 -
          (C8989 * C5624 + C9792 + C9792 + C8984 * C5630 + C8987 * C1696 +
           C9793 + C9793 + C8983 * C1702 + C8985 * C1148 + C9794 + C9794 +
           C8982 * C1160) *
              C31138 * C30904 * C30972 * C1143 +
          (C8985 * C1149 + C9795 + C9795 + C8982 * C1161 + C8987 * C5625 +
           C9796 + C9796 + C8983 * C5631 + C8989 * C5626 + C9797 + C9797 +
           C8984 * C5632) *
              C31138 * C30904 * C30972 * C1144) *
         C30926) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 + C8993 +
            C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 +
            C8984 * C501) *
               C31138 * C30904 * C1818 -
           (C8989 * C2000 + C9245 + C9245 + C8984 * C2012 + C8987 * C481 +
            C9246 + C9246 + C8983 * C501 + C8985 * C480 + C9247 + C9247 +
            C8982 * C500) *
               C31138 * C30904 * C1819 +
           (C8985 * C481 + C9248 + C9248 + C8982 * C501 + C8987 * C2000 +
            C9249 + C9249 + C8983 * C2012 + C8989 * C2001 + C9250 + C9250 +
            C8984 * C2013) *
               C31138 * C30904 * C31231) *
              C30954 * C31262 +
          ((C8985 * C479 + C9251 + C9251 + C8982 * C499 + C8987 * C482 + C9252 +
            C9252 + C8983 * C502 + C8989 * C1999 + C9253 + C9253 +
            C8984 * C2011) *
               C31138 * C30904 * C1819 -
           (C8989 * C482 + C8995 + C8995 + C8984 * C502 + C8987 * C479 + C8996 +
            C8996 + C8983 * C499 + C8985 * C116 + C8997 + C8997 +
            C8982 * C130) *
               C31138 * C30904 * C1818 -
           (C8989 * C2002 + C9254 + C9254 + C8984 * C2014 + C8987 * C1999 +
            C9255 + C9255 + C8983 * C2011 + C8985 * C482 + C9256 + C9256 +
            C8982 * C502) *
               C31138 * C30904 * C31231) *
              C30954 * C31249 +
          ((C8985 * C117 + C8998 + C8998 + C8982 * C131 + C8987 * C478 + C8999 +
            C8999 + C8983 * C498 + C8989 * C483 + C9000 + C9000 +
            C8984 * C503) *
               C31138 * C30904 * C1818 -
           (C8989 * C1998 + C9257 + C9257 + C8984 * C2010 + C8987 * C483 +
            C9258 + C9258 + C8983 * C503 + C8985 * C478 + C9259 + C9259 +
            C8982 * C498) *
               C31138 * C30904 * C1819 +
           (C8985 * C483 + C9260 + C9260 + C8982 * C503 + C8987 * C1998 +
            C9261 + C9261 + C8983 * C2010 + C8989 * C2003 + C9262 + C9262 +
            C8984 * C2015) *
               C31138 * C30904 * C31231) *
              C30954 * C31222)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 + C8993 +
            C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 +
            C8984 * C501) *
               C31138 * C30904 * C1818 -
           (C8989 * C2000 + C9245 + C9245 + C8984 * C2012 + C8987 * C481 +
            C9246 + C9246 + C8983 * C501 + C8985 * C480 + C9247 + C9247 +
            C8982 * C500) *
               C31138 * C30904 * C1819 +
           (C8985 * C481 + C9248 + C9248 + C8982 * C501 + C8987 * C2000 +
            C9249 + C9249 + C8983 * C2012 + C8989 * C2001 + C9250 + C9250 +
            C8984 * C2013) *
               C31138 * C30904 * C31231) *
              C31265 +
          ((C8985 * C924 + C9611 + C9611 + C8982 * C934 + C8987 * C1282 +
            C9612 + C9612 + C8983 * C1300 + C8989 * C2400 + C9613 + C9613 +
            C8984 * C2406) *
               C31138 * C30904 * C1819 -
           (C8989 * C1282 + C9117 + C9117 + C8984 * C1300 + C8987 * C924 +
            C9118 + C9118 + C8983 * C934 + C8985 * C291 + C9119 + C9119 +
            C8982 * C311) *
               C31138 * C30904 * C1818 -
           (C8989 * C6308 + C9908 + C9908 + C8984 * C6314 + C8987 * C2400 +
            C9909 + C9909 + C8983 * C2406 + C8985 * C1282 + C9910 + C9910 +
            C8982 * C1300) *
               C31138 * C30904 * C31231) *
              C31253 +
          ((C8985 * C292 + C9120 + C9120 + C8982 * C312 + C8987 * C1285 +
            C9121 + C9121 + C8983 * C1303 + C8989 * C1286 + C9122 + C9122 +
            C8984 * C1304) *
               C31138 * C30904 * C1818 -
           (C8989 * C6307 + C9911 + C9911 + C8984 * C6313 + C8987 * C1286 +
            C9912 + C9912 + C8983 * C1304 + C8985 * C1285 + C9913 + C9913 +
            C8982 * C1303) *
               C31138 * C30904 * C1819 +
           (C8985 * C1286 + C9914 + C9914 + C8982 * C1304 + C8987 * C6307 +
            C9915 + C9915 + C8983 * C6313 + C8989 * C6309 + C9916 + C9916 +
            C8984 * C6315) *
               C31138 * C30904 * C31231) *
              C31228) *
         C30926) /
            (p * q * std::sqrt(p + q));
    d2ee[65] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
             C4860 * C4734 + C4861 * C4735) *
                C30904 * C3272 -
            (C5323 * C4735 + C5324 * C4734 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
                C30904 * C31059) *
               C31197 +
           ((C5324 * C4733 + C5323 * C4734 + C5655 * C4735) * C30904 * C31059 -
            (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C3272) *
               C31017) *
              C30931 +
          (((C544 * C4733 + C957 * C4734 + C1596 * C4735) * C30904 * C31059 -
            (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C3272) *
               C31197 +
           ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C3272 -
            (C5918 * C4735 + C1596 * C4734 + C957 * C4733) * C30904 * C31059) *
               C31017) *
              C30940 +
          (((C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C3272 -
            (C1595 * C4735 + C958 * C4734 + C543 * C4733) * C30904 * C31059) *
               C31197 +
           ((C958 * C4733 + C1595 * C4734 +
             (C113 * C1698 + C1708 + C1708 + C31151 * C1704) * C4735) *
                C30904 * C31059 -
            (C1433 * C4735 + C357 * C4734 + C354 * C4733) * C30904 * C3272) *
               C31017) *
              C2881)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
             C169 * C104 + C170 * C105) *
                C3272 -
            (C549 * C105 + C550 * C104 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
                C31059) *
               C31197 +
           (((C113 * C924 + C940 + C940 + C31151 * C934) * C31138 * C103 +
             C960 * C104 + C961 * C105) *
                C31059 -
            (C360 * C105 + C361 * C104 +
             (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
                C3272) *
               C31017) *
              C30931 +
          (((C550 * C103 + C549 * C104 + C553 * C105) * C31059 -
            (C171 * C105 + C170 * C104 + C169 * C103) * C3272) *
               C31197 +
           ((C361 * C103 + C360 * C104 + C364 * C105) * C3272 -
            (C962 * C105 + C961 * C104 + C960 * C103) * C31059) *
               C31017) *
              C30940 +
          (((C170 * C103 + C171 * C104 + C172 * C105) * C3272 -
            (C778 * C105 + C553 * C104 + C549 * C103) * C31059) *
               C31197 +
           ((C961 * C103 + C962 * C104 +
             (C113 * C928 + C950 + C950 + C31151 * C938) * C31138 * C105) *
                C31059 -
            (C668 * C105 + C364 * C104 + C360 * C103) * C3272) *
               C31017) *
              C2881)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 +
             C8993 + C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 +
             C8984 * C501) *
                C31138 * C30904 * C3272 -
            (C8989 * C2000 + C9245 + C9245 + C8984 * C2012 + C8987 * C481 +
             C9246 + C9246 + C8983 * C501 + C8985 * C480 + C9247 + C9247 +
             C8982 * C500) *
                C31138 * C30904 * C31059) *
               C31197 +
           ((C8985 * C924 + C9611 + C9611 + C8982 * C934 + C8987 * C1282 +
             C9612 + C9612 + C8983 * C1300 + C8989 * C2400 + C9613 + C9613 +
             C8984 * C2406) *
                C31138 * C30904 * C31059 -
            (C8989 * C1282 + C9117 + C9117 + C8984 * C1300 + C8987 * C924 +
             C9118 + C9118 + C8983 * C934 + C8985 * C291 + C9119 + C9119 +
             C8982 * C311) *
                C31138 * C30904 * C3272) *
               C31017) *
              C30931 +
          (((C8985 * C479 + C9251 + C9251 + C8982 * C499 + C8987 * C482 +
             C9252 + C9252 + C8983 * C502 + C8989 * C1999 + C9253 + C9253 +
             C8984 * C2011) *
                C31138 * C30904 * C31059 -
            (C8989 * C482 + C8995 + C8995 + C8984 * C502 + C8987 * C479 +
             C8996 + C8996 + C8983 * C499 + C8985 * C116 + C8997 + C8997 +
             C8982 * C130) *
                C31138 * C30904 * C3272) *
               C31197 +
           ((C8985 * C290 + C9123 + C9123 + C8982 * C310 + C8987 * C925 +
             C9124 + C9124 + C8983 * C935 + C8989 * C1281 + C9125 + C9125 +
             C8984 * C1299) *
                C31138 * C30904 * C3272 -
            (C8989 * C2401 + C9614 + C9614 + C8984 * C2407 + C8987 * C1281 +
             C9615 + C9615 + C8983 * C1299 + C8985 * C925 + C9616 + C9616 +
             C8982 * C935) *
                C31138 * C30904 * C31059) *
               C31017) *
              C30940 +
          (((C8985 * C117 + C8998 + C8998 + C8982 * C131 + C8987 * C478 +
             C8999 + C8999 + C8983 * C498 + C8989 * C483 + C9000 + C9000 +
             C8984 * C503) *
                C31138 * C30904 * C3272 -
            (C8989 * C1998 + C9257 + C9257 + C8984 * C2010 + C8987 * C483 +
             C9258 + C9258 + C8983 * C503 + C8985 * C478 + C9259 + C9259 +
             C8982 * C498) *
                C31138 * C30904 * C31059) *
               C31197 +
           ((C8985 * C926 + C9617 + C9617 + C8982 * C936 + C8987 * C1280 +
             C9618 + C9618 + C8983 * C1298 + C8989 * C2402 + C9619 + C9619 +
             C8984 * C2408) *
                C31138 * C30904 * C31059 -
            (C8989 * C1280 + C9129 + C9129 + C8984 * C1298 + C8987 * C926 +
             C9130 + C9130 + C8983 * C936 + C8985 * C289 + C9131 + C9131 +
             C8982 * C309) *
                C31138 * C30904 * C3272) *
               C31017) *
              C2881)) /
            (p * q * std::sqrt(p + q));
    d2ee[66] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
             C4860 * C4734 + C4861 * C4735) *
                C30904 * C31055 -
            (C5323 * C4735 + C5324 * C4734 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
                C30904 * C31062 +
            ((C113 * C481 + C516 + C516 + C31151 * C501) * C4733 +
             C5653 * C4734 + C5654 * C4735) *
                C30904 * C3780) *
               C31197 +
           ((C5324 * C4733 + C5323 * C4734 + C5655 * C4735) * C30904 * C31062 -
            (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C31055 -
            (C5656 * C4735 + C5654 * C4734 + C5653 * C4733) * C30904 * C3780) *
               C31017) *
              C2618 +
          (((C544 * C4733 + C957 * C4734 + C1596 * C4735) * C30904 * C31062 -
            (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C31055 -
            (C6474 * C4735 + C2182 * C4734 + C545 * C4733) * C30904 * C3780) *
               C31197 +
           ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C31055 -
            (C5918 * C4735 + C1596 * C4734 + C957 * C4733) * C30904 * C31062 +
            (C2182 * C4733 + C6474 * C4734 +
             (C113 * C6465 + C6471 + C6471 + C31151 * C6467) * C4735) *
                C30904 * C3780) *
               C31017) *
              C30937)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
             C169 * C104 + C170 * C105) *
                C31055 -
            (C549 * C105 + C550 * C104 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
                C31062 +
            ((C113 * C481 + C516 + C516 + C31151 * C501) * C31138 * C103 +
             C551 * C104 + C552 * C105) *
                C3780) *
               C31197 +
           (((C113 * C924 + C940 + C940 + C31151 * C934) * C31138 * C103 +
             C960 * C104 + C961 * C105) *
                C31062 -
            (C360 * C105 + C361 * C104 +
             (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
                C31055 -
            (C2183 * C105 + C2184 * C104 +
             (C113 * C1282 + C1310 + C1310 + C31151 * C1300) * C31138 * C103) *
                C3780) *
               C31017) *
              C2618 +
          (((C550 * C103 + C549 * C104 + C553 * C105) * C31062 -
            (C171 * C105 + C170 * C104 + C169 * C103) * C31055 -
            (C554 * C105 + C552 * C104 + C551 * C103) * C3780) *
               C31197 +
           ((C361 * C103 + C360 * C104 + C364 * C105) * C31055 -
            (C962 * C105 + C961 * C104 + C960 * C103) * C31062 +
            (C2184 * C103 + C2183 * C104 +
             (C113 * C2168 + C2176 + C2176 + C31151 * C2170) * C31138 * C105) *
                C3780) *
               C31017) *
              C30937)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 +
             C8993 + C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 +
             C8984 * C501) *
                C31138 * C30904 * C31055 -
            (C8989 * C2000 + C9245 + C9245 + C8984 * C2012 + C8987 * C481 +
             C9246 + C9246 + C8983 * C501 + C8985 * C480 + C9247 + C9247 +
             C8982 * C500) *
                C31138 * C30904 * C31062 +
            (C8985 * C481 + C9248 + C9248 + C8982 * C501 + C8987 * C2000 +
             C9249 + C9249 + C8983 * C2012 + C8989 * C2001 + C9250 + C9250 +
             C8984 * C2013) *
                C31138 * C30904 * C3780) *
               C31197 +
           ((C8985 * C924 + C9611 + C9611 + C8982 * C934 + C8987 * C1282 +
             C9612 + C9612 + C8983 * C1300 + C8989 * C2400 + C9613 + C9613 +
             C8984 * C2406) *
                C31138 * C30904 * C31062 -
            (C8989 * C1282 + C9117 + C9117 + C8984 * C1300 + C8987 * C924 +
             C9118 + C9118 + C8983 * C934 + C8985 * C291 + C9119 + C9119 +
             C8982 * C311) *
                C31138 * C30904 * C31055 -
            (C8989 * C6308 + C9908 + C9908 + C8984 * C6314 + C8987 * C2400 +
             C9909 + C9909 + C8983 * C2406 + C8985 * C1282 + C9910 + C9910 +
             C8982 * C1300) *
                C31138 * C30904 * C3780) *
               C31017) *
              C2618 +
          (((C8985 * C479 + C9251 + C9251 + C8982 * C499 + C8987 * C482 +
             C9252 + C9252 + C8983 * C502 + C8989 * C1999 + C9253 + C9253 +
             C8984 * C2011) *
                C31138 * C30904 * C31062 -
            (C8989 * C482 + C8995 + C8995 + C8984 * C502 + C8987 * C479 +
             C8996 + C8996 + C8983 * C499 + C8985 * C116 + C8997 + C8997 +
             C8982 * C130) *
                C31138 * C30904 * C31055 -
            (C8989 * C2002 + C9254 + C9254 + C8984 * C2014 + C8987 * C1999 +
             C9255 + C9255 + C8983 * C2011 + C8985 * C482 + C9256 + C9256 +
             C8982 * C502) *
                C31138 * C30904 * C3780) *
               C31197 +
           ((C8985 * C290 + C9123 + C9123 + C8982 * C310 + C8987 * C925 +
             C9124 + C9124 + C8983 * C935 + C8989 * C1281 + C9125 + C9125 +
             C8984 * C1299) *
                C31138 * C30904 * C31055 -
            (C8989 * C2401 + C9614 + C9614 + C8984 * C2407 + C8987 * C1281 +
             C9615 + C9615 + C8983 * C1299 + C8985 * C925 + C9616 + C9616 +
             C8982 * C935) *
                C31138 * C30904 * C31062 +
            (C8985 * C1281 + C10711 + C10711 + C8982 * C1299 + C8987 * C2401 +
             C10712 + C10712 + C8983 * C2407 + C8989 * C10707 + C10713 +
             C10713 + C8984 * C10709) *
                C31138 * C30904 * C3780) *
               C31017) *
              C30937)) /
            (p * q * std::sqrt(p + q));
    d2ee[67] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
                C169 * C104 + C170 * C105) *
                   C3272 -
               (C549 * C105 + C550 * C104 +
                (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
                   C31059) *
                  C30954 * C31271 +
              ((C550 * C103 + C549 * C104 + C553 * C105) * C31059 -
               (C171 * C105 + C170 * C104 + C169 * C103) * C3272) *
                  C30954 * C31264 +
              ((C170 * C103 + C171 * C104 + C172 * C105) * C3272 -
               (C778 * C105 + C553 * C104 + C549 * C103) * C31059) *
                  C30954 * C31251 +
              ((C553 * C103 + C778 * C104 +
                (C113 * C768 + C774 + C774 + C31151 * C770) * C31138 * C105) *
                   C31059 -
               (C173 * C105 + C172 * C104 + C171 * C103) * C3272) *
                  C30954 * C31232) +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             (((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
                 C169 * C104 + C170 * C105) *
                    C3272 -
                (C549 * C105 + C550 * C104 +
                 (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
                    C31059) *
                   C31265 +
               (((C113 * C924 + C940 + C940 + C31151 * C934) * C31138 * C103 +
                 C960 * C104 + C961 * C105) *
                    C31059 -
                (C360 * C105 + C361 * C104 +
                 (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
                    C3272) *
                   C31253 +
               (((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
                 C362 * C104 + C363 * C105) *
                    C3272 -
                (C1597 * C105 + C1598 * C104 +
                 (C113 * C1285 + C1313 + C1313 + C31151 * C1303) * C31138 *
                     C103) *
                    C31059) *
                   C31228) *
                  C2618 +
              (((C550 * C103 + C549 * C104 + C553 * C105) * C31059 -
                (C171 * C105 + C170 * C104 + C169 * C103) * C3272) *
                   C31265 +
               ((C361 * C103 + C360 * C104 + C364 * C105) * C3272 -
                (C962 * C105 + C961 * C104 + C960 * C103) * C31059) *
                   C31253 +
               ((C1598 * C103 + C1597 * C104 +
                 (C113 * C1582 + C1590 + C1590 + C31151 * C1584) * C31138 *
                     C105) *
                    C31059 -
                (C365 * C105 + C363 * C104 + C362 * C103) * C3272) *
                   C31228) *
                  C30937)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C31273 -
           (C549 * C105 + C550 * C104 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
               C31270 +
           ((C113 * C481 + C516 + C516 + C31151 * C501) * C31138 * C103 +
            C551 * C104 + C552 * C105) *
               C31261 -
           (C2301 * C105 + C2302 * C104 +
            (C113 * C2000 + C2019 + C2019 + C31151 * C2012) * C31138 * C103) *
               C31244) *
              C30954 * C2618 +
          ((C550 * C103 + C549 * C104 + C553 * C105) * C31270 -
           (C171 * C105 + C170 * C104 + C169 * C103) * C31273 -
           (C554 * C105 + C552 * C104 + C551 * C103) * C31261 +
           (C2302 * C103 + C2301 * C104 +
            (C113 * C2286 + C2294 + C2294 + C31151 * C2288) * C31138 * C105) *
               C31244) *
              C30954 * C30937)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C3272 -
           (C5323 * C4735 + C5324 * C4734 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
               C30904 * C31059) *
              C30954 * C31271 +
          ((C544 * C4733 + C957 * C4734 + C1596 * C4735) * C30904 * C31059 -
           (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C3272) *
              C30954 * C31264 +
          ((C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C3272 -
           (C1595 * C4735 + C958 * C4734 + C543 * C4733) * C30904 * C31059) *
              C30954 * C31251 +
          ((C547 * C4733 + C959 * C4734 +
            (C113 * C1582 + C1590 + C1590 + C31151 * C1584) * C4735) *
               C30904 * C31059 -
           (C359 * C4735 + C358 * C4734 + C166 * C4733) * C30904 * C3272) *
              C30954 * C31232)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
             C4860 * C4734 + C4861 * C4735) *
                C30904 * C3272 -
            (C5323 * C4735 + C5324 * C4734 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
                C30904 * C31059) *
               C31265 +
           ((C5324 * C4733 + C5323 * C4734 + C5655 * C4735) * C30904 * C31059 -
            (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C3272) *
               C31253 +
           ((C4861 * C4733 + C4862 * C4734 + C5513 * C4735) * C30904 * C3272 -
            (C6025 * C4735 + C5655 * C4734 + C5323 * C4733) * C30904 * C31059) *
               C31228) *
              C2618 +
          (((C544 * C4733 + C957 * C4734 + C1596 * C4735) * C30904 * C31059 -
            (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C3272) *
               C31265 +
           ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C3272 -
            (C5918 * C4735 + C1596 * C4734 + C957 * C4733) * C30904 * C31059) *
               C31253 +
           ((C1596 * C4733 + C5918 * C4734 +
             (C113 * C5909 + C5915 + C5915 + C31151 * C5911) * C4735) *
                C30904 * C31059 -
            (C5763 * C4735 + C1434 * C4734 + C356 * C4733) * C30904 * C3272) *
               C31228) *
              C30937)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C31273 -
           (C5323 * C4735 + C5324 * C4734 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
               C30904 * C31270 +
           ((C113 * C481 + C516 + C516 + C31151 * C501) * C4733 +
            C5653 * C4734 + C5654 * C4735) *
               C30904 * C31261 -
           (C6687 * C4735 + C6688 * C4734 +
            (C113 * C2000 + C2019 + C2019 + C31151 * C2012) * C4733) *
               C30904 * C31244) *
              C30954 * C2618 +
          ((C544 * C4733 + C957 * C4734 + C1596 * C4735) * C30904 * C31270 -
           (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C31273 -
           (C6474 * C4735 + C2182 * C4734 + C545 * C4733) * C30904 * C31261 +
           (C2300 * C4733 +
            (C113 * C2401 + C2411 + C2411 + C31151 * C2407) * C4734 +
            (C113 * C6572 + C6576 + C6576 + C31151 * C6574) * C4735) *
               C30904 * C31244) *
              C30954 * C30937)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 + C8993 +
            C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 +
            C8984 * C501) *
               C31138 * C30904 * C3272 -
           (C8989 * C2000 + C9245 + C9245 + C8984 * C2012 + C8987 * C481 +
            C9246 + C9246 + C8983 * C501 + C8985 * C480 + C9247 + C9247 +
            C8982 * C500) *
               C31138 * C30904 * C31059) *
              C30954 * C31271 +
          ((C8985 * C479 + C9251 + C9251 + C8982 * C499 + C8987 * C482 + C9252 +
            C9252 + C8983 * C502 + C8989 * C1999 + C9253 + C9253 +
            C8984 * C2011) *
               C31138 * C30904 * C31059 -
           (C8989 * C482 + C8995 + C8995 + C8984 * C502 + C8987 * C479 + C8996 +
            C8996 + C8983 * C499 + C8985 * C116 + C8997 + C8997 +
            C8982 * C130) *
               C31138 * C30904 * C3272) *
              C30954 * C31264 +
          ((C8985 * C117 + C8998 + C8998 + C8982 * C131 + C8987 * C478 + C8999 +
            C8999 + C8983 * C498 + C8989 * C483 + C9000 + C9000 +
            C8984 * C503) *
               C31138 * C30904 * C3272 -
           (C8989 * C1998 + C9257 + C9257 + C8984 * C2010 + C8987 * C483 +
            C9258 + C9258 + C8983 * C503 + C8985 * C478 + C9259 + C9259 +
            C8982 * C498) *
               C31138 * C30904 * C31059) *
              C30954 * C31251 +
          ((C8985 * C484 + C9462 + C9462 + C8982 * C504 + C8987 * C485 + C9463 +
            C9463 + C8983 * C505 + C8989 * C2286 + C9464 + C9464 +
            C8984 * C2288) *
               C31138 * C30904 * C31059 -
           (C8989 * C485 + C9001 + C9001 + C8984 * C505 + C8987 * C484 + C9002 +
            C9002 + C8983 * C504 + C8985 * C118 + C9003 + C9003 +
            C8982 * C132) *
               C31138 * C30904 * C3272) *
              C30954 * C31232)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 +
             C8993 + C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 +
             C8984 * C501) *
                C31138 * C30904 * C3272 -
            (C8989 * C2000 + C9245 + C9245 + C8984 * C2012 + C8987 * C481 +
             C9246 + C9246 + C8983 * C501 + C8985 * C480 + C9247 + C9247 +
             C8982 * C500) *
                C31138 * C30904 * C31059) *
               C31265 +
           ((C8985 * C924 + C9611 + C9611 + C8982 * C934 + C8987 * C1282 +
             C9612 + C9612 + C8983 * C1300 + C8989 * C2400 + C9613 + C9613 +
             C8984 * C2406) *
                C31138 * C30904 * C31059 -
            (C8989 * C1282 + C9117 + C9117 + C8984 * C1300 + C8987 * C924 +
             C9118 + C9118 + C8983 * C934 + C8985 * C291 + C9119 + C9119 +
             C8982 * C311) *
                C31138 * C30904 * C3272) *
               C31253 +
           ((C8985 * C292 + C9120 + C9120 + C8982 * C312 + C8987 * C1285 +
             C9121 + C9121 + C8983 * C1303 + C8989 * C1286 + C9122 + C9122 +
             C8984 * C1304) *
                C31138 * C30904 * C3272 -
            (C8989 * C6307 + C9911 + C9911 + C8984 * C6313 + C8987 * C1286 +
             C9912 + C9912 + C8983 * C1304 + C8985 * C1285 + C9913 + C9913 +
             C8982 * C1303) *
                C31138 * C30904 * C31059) *
               C31228) *
              C2618 +
          (((C8985 * C479 + C9251 + C9251 + C8982 * C499 + C8987 * C482 +
             C9252 + C9252 + C8983 * C502 + C8989 * C1999 + C9253 + C9253 +
             C8984 * C2011) *
                C31138 * C30904 * C31059 -
            (C8989 * C482 + C8995 + C8995 + C8984 * C502 + C8987 * C479 +
             C8996 + C8996 + C8983 * C499 + C8985 * C116 + C8997 + C8997 +
             C8982 * C130) *
                C31138 * C30904 * C3272) *
               C31265 +
           ((C8985 * C290 + C9123 + C9123 + C8982 * C310 + C8987 * C925 +
             C9124 + C9124 + C8983 * C935 + C8989 * C1281 + C9125 + C9125 +
             C8984 * C1299) *
                C31138 * C30904 * C3272 -
            (C8989 * C2401 + C9614 + C9614 + C8984 * C2407 + C8987 * C1281 +
             C9615 + C9615 + C8983 * C1299 + C8985 * C925 + C9616 + C9616 +
             C8982 * C935) *
                C31138 * C30904 * C31059) *
               C31253 +
           ((C8985 * C1284 + C10164 + C10164 + C8982 * C1302 + C8987 * C1287 +
             C10165 + C10165 + C8983 * C1305 + C8989 * C6572 + C10166 + C10166 +
             C8984 * C6574) *
                C31138 * C30904 * C31059 -
            (C8989 * C1287 + C9126 + C9126 + C8984 * C1305 + C8987 * C1284 +
             C9127 + C9127 + C8983 * C1302 + C8985 * C293 + C9128 + C9128 +
             C8982 * C313) *
                C31138 * C30904 * C3272) *
               C31228) *
              C30937)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 + C8993 +
            C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 +
            C8984 * C501) *
               C31138 * C30904 * C31273 -
           (C8989 * C2000 + C9245 + C9245 + C8984 * C2012 + C8987 * C481 +
            C9246 + C9246 + C8983 * C501 + C8985 * C480 + C9247 + C9247 +
            C8982 * C500) *
               C31138 * C30904 * C31270 +
           (C8985 * C481 + C9248 + C9248 + C8982 * C501 + C8987 * C2000 +
            C9249 + C9249 + C8983 * C2012 + C8989 * C2001 + C9250 + C9250 +
            C8984 * C2013) *
               C31138 * C30904 * C31261 -
           (C8989 * C10549 + C10556 + C10556 + C8984 * C10553 + C8987 * C2001 +
            C10557 + C10557 + C8983 * C2013 + C8985 * C2000 + C10558 + C10558 +
            C8982 * C2012) *
               C31138 * C30904 * C31244) *
              C30954 * C2618 +
          ((C8985 * C479 + C9251 + C9251 + C8982 * C499 + C8987 * C482 + C9252 +
            C9252 + C8983 * C502 + C8989 * C1999 + C9253 + C9253 +
            C8984 * C2011) *
               C31138 * C30904 * C31270 -
           (C8989 * C482 + C8995 + C8995 + C8984 * C502 + C8987 * C479 + C8996 +
            C8996 + C8983 * C499 + C8985 * C116 + C8997 + C8997 +
            C8982 * C130) *
               C31138 * C30904 * C31273 -
           (C8989 * C2002 + C9254 + C9254 + C8984 * C2014 + C8987 * C1999 +
            C9255 + C9255 + C8983 * C2011 + C8985 * C482 + C9256 + C9256 +
            C8982 * C502) *
               C31138 * C30904 * C31261 +
           (C8985 * C1999 + C10815 + C10815 + C8982 * C2011 + C8987 * C2002 +
            C10816 + C10816 + C8983 * C2014 + C8989 * C10811 + C10817 + C10817 +
            C8984 * C10813) *
               C31138 * C30904 * C31244) *
              C30954 * C30937)) /
            (p * q * std::sqrt(p + q));
    d2ee[68] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C31055 -
           (C5323 * C4735 + C5324 * C4734 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
               C30904 * C31062 +
           ((C113 * C481 + C516 + C516 + C31151 * C501) * C4733 +
            C5653 * C4734 + C5654 * C4735) *
               C30904 * C3780) *
              C30954 * C30931 +
          ((C544 * C4733 + C957 * C4734 + C1596 * C4735) * C30904 * C31062 -
           (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C31055 -
           (C6474 * C4735 + C2182 * C4734 + C545 * C4733) * C30904 * C3780) *
              C30954 * C30940 +
          ((C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C31055 -
           (C1595 * C4735 + C958 * C4734 + C543 * C4733) * C30904 * C31062 +
           (C546 * C4733 + C2181 * C4734 +
            (C113 * C1288 + C1316 + C1316 + C31151 * C1306) * C4735) *
               C30904 * C3780) *
              C30954 * C2881)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C31055 -
           (C549 * C105 + C550 * C104 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
               C31062 +
           ((C113 * C481 + C516 + C516 + C31151 * C501) * C31138 * C103 +
            C551 * C104 + C552 * C105) *
               C3780) *
              C30954 * C30931 +
          ((C550 * C103 + C549 * C104 + C553 * C105) * C31062 -
           (C171 * C105 + C170 * C104 + C169 * C103) * C31055 -
           (C554 * C105 + C552 * C104 + C551 * C103) * C3780) *
              C30954 * C30940 +
          ((C170 * C103 + C171 * C104 + C172 * C105) * C31055 -
           (C778 * C105 + C553 * C104 + C549 * C103) * C31062 +
           (C552 * C103 + C554 * C104 +
            (C113 * C487 + C530 + C530 + C31151 * C507) * C31138 * C105) *
               C3780) *
              C30954 * C2881)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 + C8993 +
            C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 +
            C8984 * C501) *
               C31138 * C30904 * C31055 -
           (C8989 * C2000 + C9245 + C9245 + C8984 * C2012 + C8987 * C481 +
            C9246 + C9246 + C8983 * C501 + C8985 * C480 + C9247 + C9247 +
            C8982 * C500) *
               C31138 * C30904 * C31062 +
           (C8985 * C481 + C9248 + C9248 + C8982 * C501 + C8987 * C2000 +
            C9249 + C9249 + C8983 * C2012 + C8989 * C2001 + C9250 + C9250 +
            C8984 * C2013) *
               C31138 * C30904 * C3780) *
              C30954 * C30931 +
          ((C8985 * C479 + C9251 + C9251 + C8982 * C499 + C8987 * C482 + C9252 +
            C9252 + C8983 * C502 + C8989 * C1999 + C9253 + C9253 +
            C8984 * C2011) *
               C31138 * C30904 * C31062 -
           (C8989 * C482 + C8995 + C8995 + C8984 * C502 + C8987 * C479 + C8996 +
            C8996 + C8983 * C499 + C8985 * C116 + C8997 + C8997 +
            C8982 * C130) *
               C31138 * C30904 * C31055 -
           (C8989 * C2002 + C9254 + C9254 + C8984 * C2014 + C8987 * C1999 +
            C9255 + C9255 + C8983 * C2011 + C8985 * C482 + C9256 + C9256 +
            C8982 * C502) *
               C31138 * C30904 * C3780) *
              C30954 * C30940 +
          ((C8985 * C117 + C8998 + C8998 + C8982 * C131 + C8987 * C478 + C8999 +
            C8999 + C8983 * C498 + C8989 * C483 + C9000 + C9000 +
            C8984 * C503) *
               C31138 * C30904 * C31055 -
           (C8989 * C1998 + C9257 + C9257 + C8984 * C2010 + C8987 * C483 +
            C9258 + C9258 + C8983 * C503 + C8985 * C478 + C9259 + C9259 +
            C8982 * C498) *
               C31138 * C30904 * C31062 +
           (C8985 * C483 + C9260 + C9260 + C8982 * C503 + C8987 * C1998 +
            C9261 + C9261 + C8983 * C2010 + C8989 * C2003 + C9262 + C9262 +
            C8984 * C2015) *
               C31138 * C30904 * C3780) *
              C30954 * C2881)) /
            (p * q * std::sqrt(p + q));
    d2ee[69] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
             C169 * C104 + C170 * C105) *
                C3272 -
            (C549 * C105 + C550 * C104 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
                C31059) *
               C31265 +
           (((C113 * C924 + C940 + C940 + C31151 * C934) * C31138 * C103 +
             C960 * C104 + C961 * C105) *
                C31059 -
            (C360 * C105 + C361 * C104 +
             (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
                C3272) *
               C31253 +
           (((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
             C362 * C104 + C363 * C105) *
                C3272 -
            (C1597 * C105 + C1598 * C104 +
             (C113 * C1285 + C1313 + C1313 + C31151 * C1303) * C31138 * C103) *
                C31059) *
               C31228) *
              C2618 +
          (((C550 * C103 + C549 * C104 + C553 * C105) * C31059 -
            (C171 * C105 + C170 * C104 + C169 * C103) * C3272) *
               C31265 +
           ((C361 * C103 + C360 * C104 + C364 * C105) * C3272 -
            (C962 * C105 + C961 * C104 + C960 * C103) * C31059) *
               C31253 +
           ((C1598 * C103 + C1597 * C104 +
             (C113 * C1582 + C1590 + C1590 + C31151 * C1584) * C31138 * C105) *
                C31059 -
            (C365 * C105 + C363 * C104 + C362 * C103) * C3272) *
               C31228) *
              C30937)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C3272 -
           (C549 * C105 + C550 * C104 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
               C31059) *
              C30954 * C31271 +
          ((C550 * C103 + C549 * C104 + C553 * C105) * C31059 -
           (C171 * C105 + C170 * C104 + C169 * C103) * C3272) *
              C30954 * C31264 +
          ((C170 * C103 + C171 * C104 + C172 * C105) * C3272 -
           (C778 * C105 + C553 * C104 + C549 * C103) * C31059) *
              C30954 * C31251 +
          ((C553 * C103 + C778 * C104 +
            (C113 * C768 + C774 + C774 + C31151 * C770) * C31138 * C105) *
               C31059 -
           (C173 * C105 + C172 * C104 + C171 * C103) * C3272) *
              C30954 * C31232)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C3272 -
           (C5323 * C4735 + C5324 * C4734 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
               C30904 * C31059) *
              C30954 * C31271 +
          ((C544 * C4733 + C957 * C4734 + C1596 * C4735) * C30904 * C31059 -
           (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C3272) *
              C30954 * C31264 +
          ((C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C3272 -
           (C1595 * C4735 + C958 * C4734 + C543 * C4733) * C30904 * C31059) *
              C30954 * C31251 +
          ((C547 * C4733 + C959 * C4734 +
            (C113 * C1582 + C1590 + C1590 + C31151 * C1584) * C4735) *
               C30904 * C31059 -
           (C359 * C4735 + C358 * C4734 + C166 * C4733) * C30904 * C3272) *
              C30954 * C31232)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
             C4860 * C4734 + C4861 * C4735) *
                C30904 * C3272 -
            (C5323 * C4735 + C5324 * C4734 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
                C30904 * C31059) *
               C31265 +
           ((C5324 * C4733 + C5323 * C4734 + C5655 * C4735) * C30904 * C31059 -
            (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C3272) *
               C31253 +
           ((C4861 * C4733 + C4862 * C4734 + C5513 * C4735) * C30904 * C3272 -
            (C6025 * C4735 + C5655 * C4734 + C5323 * C4733) * C30904 * C31059) *
               C31228) *
              C2618 +
          (((C544 * C4733 + C957 * C4734 + C1596 * C4735) * C30904 * C31059 -
            (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C3272) *
               C31265 +
           ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C3272 -
            (C5918 * C4735 + C1596 * C4734 + C957 * C4733) * C30904 * C31059) *
               C31253 +
           ((C1596 * C4733 + C5918 * C4734 +
             (C113 * C5909 + C5915 + C5915 + C31151 * C5911) * C4735) *
                C30904 * C31059 -
            (C5763 * C4735 + C1434 * C4734 + C356 * C4733) * C30904 * C3272) *
               C31228) *
              C30937)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 + C8993 +
            C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 +
            C8984 * C501) *
               C31138 * C30904 * C3272 -
           (C8989 * C2000 + C9245 + C9245 + C8984 * C2012 + C8987 * C481 +
            C9246 + C9246 + C8983 * C501 + C8985 * C480 + C9247 + C9247 +
            C8982 * C500) *
               C31138 * C30904 * C31059) *
              C30954 * C31271 +
          ((C8985 * C479 + C9251 + C9251 + C8982 * C499 + C8987 * C482 + C9252 +
            C9252 + C8983 * C502 + C8989 * C1999 + C9253 + C9253 +
            C8984 * C2011) *
               C31138 * C30904 * C31059 -
           (C8989 * C482 + C8995 + C8995 + C8984 * C502 + C8987 * C479 + C8996 +
            C8996 + C8983 * C499 + C8985 * C116 + C8997 + C8997 +
            C8982 * C130) *
               C31138 * C30904 * C3272) *
              C30954 * C31264 +
          ((C8985 * C117 + C8998 + C8998 + C8982 * C131 + C8987 * C478 + C8999 +
            C8999 + C8983 * C498 + C8989 * C483 + C9000 + C9000 +
            C8984 * C503) *
               C31138 * C30904 * C3272 -
           (C8989 * C1998 + C9257 + C9257 + C8984 * C2010 + C8987 * C483 +
            C9258 + C9258 + C8983 * C503 + C8985 * C478 + C9259 + C9259 +
            C8982 * C498) *
               C31138 * C30904 * C31059) *
              C30954 * C31251 +
          ((C8985 * C484 + C9462 + C9462 + C8982 * C504 + C8987 * C485 + C9463 +
            C9463 + C8983 * C505 + C8989 * C2286 + C9464 + C9464 +
            C8984 * C2288) *
               C31138 * C30904 * C31059 -
           (C8989 * C485 + C9001 + C9001 + C8984 * C505 + C8987 * C484 + C9002 +
            C9002 + C8983 * C504 + C8985 * C118 + C9003 + C9003 +
            C8982 * C132) *
               C31138 * C30904 * C3272) *
              C30954 * C31232)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 +
             C8993 + C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 +
             C8984 * C501) *
                C31138 * C30904 * C3272 -
            (C8989 * C2000 + C9245 + C9245 + C8984 * C2012 + C8987 * C481 +
             C9246 + C9246 + C8983 * C501 + C8985 * C480 + C9247 + C9247 +
             C8982 * C500) *
                C31138 * C30904 * C31059) *
               C31265 +
           ((C8985 * C924 + C9611 + C9611 + C8982 * C934 + C8987 * C1282 +
             C9612 + C9612 + C8983 * C1300 + C8989 * C2400 + C9613 + C9613 +
             C8984 * C2406) *
                C31138 * C30904 * C31059 -
            (C8989 * C1282 + C9117 + C9117 + C8984 * C1300 + C8987 * C924 +
             C9118 + C9118 + C8983 * C934 + C8985 * C291 + C9119 + C9119 +
             C8982 * C311) *
                C31138 * C30904 * C3272) *
               C31253 +
           ((C8985 * C292 + C9120 + C9120 + C8982 * C312 + C8987 * C1285 +
             C9121 + C9121 + C8983 * C1303 + C8989 * C1286 + C9122 + C9122 +
             C8984 * C1304) *
                C31138 * C30904 * C3272 -
            (C8989 * C6307 + C9911 + C9911 + C8984 * C6313 + C8987 * C1286 +
             C9912 + C9912 + C8983 * C1304 + C8985 * C1285 + C9913 + C9913 +
             C8982 * C1303) *
                C31138 * C30904 * C31059) *
               C31228) *
              C2618 +
          (((C8985 * C479 + C9251 + C9251 + C8982 * C499 + C8987 * C482 +
             C9252 + C9252 + C8983 * C502 + C8989 * C1999 + C9253 + C9253 +
             C8984 * C2011) *
                C31138 * C30904 * C31059 -
            (C8989 * C482 + C8995 + C8995 + C8984 * C502 + C8987 * C479 +
             C8996 + C8996 + C8983 * C499 + C8985 * C116 + C8997 + C8997 +
             C8982 * C130) *
                C31138 * C30904 * C3272) *
               C31265 +
           ((C8985 * C290 + C9123 + C9123 + C8982 * C310 + C8987 * C925 +
             C9124 + C9124 + C8983 * C935 + C8989 * C1281 + C9125 + C9125 +
             C8984 * C1299) *
                C31138 * C30904 * C3272 -
            (C8989 * C2401 + C9614 + C9614 + C8984 * C2407 + C8987 * C1281 +
             C9615 + C9615 + C8983 * C1299 + C8985 * C925 + C9616 + C9616 +
             C8982 * C935) *
                C31138 * C30904 * C31059) *
               C31253 +
           ((C8985 * C1284 + C10164 + C10164 + C8982 * C1302 + C8987 * C1287 +
             C10165 + C10165 + C8983 * C1305 + C8989 * C6572 + C10166 + C10166 +
             C8984 * C6574) *
                C31138 * C30904 * C31059 -
            (C8989 * C1287 + C9126 + C9126 + C8984 * C1305 + C8987 * C1284 +
             C9127 + C9127 + C8983 * C1302 + C8985 * C293 + C9128 + C9128 +
             C8982 * C313) *
                C31138 * C30904 * C3272) *
               C31228) *
              C30937)) /
            (p * q * std::sqrt(p + q));
    d2ee[70] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C30972 * C1414 -
           (C360 * C105 + C361 * C104 +
            (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
               C30972 * C1415 +
           ((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
            C362 * C104 + C363 * C105) *
               C30972 * C1416 -
           (C1435 * C105 + C1436 * C104 +
            (C113 * C1148 + C1167 + C1167 + C31151 * C1160) * C31138 * C103) *
               C30972 * C31238) *
              C31183 +
          ((C361 * C103 + C360 * C104 + C364 * C105) * C30972 * C1415 -
           (C171 * C105 + C170 * C104 + C169 * C103) * C30972 * C1414 -
           (C365 * C105 + C363 * C104 + C362 * C103) * C30972 * C1416 +
           (C1436 * C103 + C1435 * C104 +
            (C113 * C1420 + C1428 + C1428 + C31151 * C1422) * C31138 * C105) *
               C30972 * C31238) *
              C30937)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C30972 * C31197 -
           (C360 * C105 + C361 * C104 +
            (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
               C30972 * C31017) *
              C654 +
          ((C361 * C103 + C360 * C104 + C364 * C105) * C30972 * C31017 -
           (C171 * C105 + C170 * C104 + C169 * C103) * C30972 * C31197) *
              C655 +
          ((C170 * C103 + C171 * C104 + C172 * C105) * C30972 * C31197 -
           (C668 * C105 + C364 * C104 + C360 * C103) * C30972 * C31017) *
              C656 +
          ((C364 * C103 + C668 * C104 +
            (C113 * C658 + C664 + C664 + C31151 * C660) * C31138 * C105) *
               C30972 * C31017 -
           (C173 * C105 + C172 * C104 + C171 * C103) * C30972 * C31197) *
              C31232)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C30972 * C31197 -
           (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C30972 *
               C31017) *
              C654 +
          ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C30972 *
               C31017 -
           (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C30972 *
               C31197) *
              C655 +
          ((C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C30972 *
               C31197 -
           (C1433 * C4735 + C357 * C4734 + C354 * C4733) * C30904 * C30972 *
               C31017) *
              C656 +
          ((C358 * C4733 + C359 * C4734 +
            (C113 * C1420 + C1428 + C1428 + C31151 * C1422) * C4735) *
               C30904 * C30972 * C31017 -
           (C359 * C4735 + C358 * C4734 + C166 * C4733) * C30904 * C30972 *
               C31197) *
              C31232)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C30972 * C1414 -
           (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C30972 *
               C1415 +
           (C4861 * C4733 + C4862 * C4734 + C5513 * C4735) * C30904 * C30972 *
               C1416 -
           (C5514 * C4735 + C5513 * C4734 + C4862 * C4733) * C30904 * C30972 *
               C31238) *
              C31183 +
          ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C30972 *
               C1415 -
           (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C30972 *
               C1414 -
           (C5763 * C4735 + C1434 * C4734 + C356 * C4733) * C30904 * C30972 *
               C1416 +
           (C1434 * C4733 + C5763 * C4734 +
            (C113 * C5754 + C5760 + C5760 + C31151 * C5756) * C4735) *
               C30904 * C30972 * C31238) *
              C30937)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 + C8993 +
            C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 +
            C8984 * C501) *
               C31138 * C30904 * C30972 * C31197 -
           (C8989 * C1282 + C9117 + C9117 + C8984 * C1300 + C8987 * C924 +
            C9118 + C9118 + C8983 * C934 + C8985 * C291 + C9119 + C9119 +
            C8982 * C311) *
               C31138 * C30904 * C30972 * C31017) *
              C654 +
          ((C8985 * C290 + C9123 + C9123 + C8982 * C310 + C8987 * C925 + C9124 +
            C9124 + C8983 * C935 + C8989 * C1281 + C9125 + C9125 +
            C8984 * C1299) *
               C31138 * C30904 * C30972 * C31017 -
           (C8989 * C482 + C8995 + C8995 + C8984 * C502 + C8987 * C479 + C8996 +
            C8996 + C8983 * C499 + C8985 * C116 + C8997 + C8997 +
            C8982 * C130) *
               C31138 * C30904 * C30972 * C31197) *
              C655 +
          ((C8985 * C117 + C8998 + C8998 + C8982 * C131 + C8987 * C478 + C8999 +
            C8999 + C8983 * C498 + C8989 * C483 + C9000 + C9000 +
            C8984 * C503) *
               C31138 * C30904 * C30972 * C31197 -
           (C8989 * C1280 + C9129 + C9129 + C8984 * C1298 + C8987 * C926 +
            C9130 + C9130 + C8983 * C936 + C8985 * C289 + C9131 + C9131 +
            C8982 * C309) *
               C31138 * C30904 * C30972 * C31017) *
              C656 +
          ((C8985 * C295 + C9361 + C9361 + C8982 * C315 + C8987 * C927 + C9362 +
            C9362 + C8983 * C937 + C8989 * C2168 + C9363 + C9363 +
            C8984 * C2170) *
               C31138 * C30904 * C30972 * C31017 -
           (C8989 * C485 + C9001 + C9001 + C8984 * C505 + C8987 * C484 + C9002 +
            C9002 + C8983 * C504 + C8985 * C118 + C9003 + C9003 +
            C8982 * C132) *
               C31138 * C30904 * C30972 * C31197) *
              C31232)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 + C8993 +
            C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 +
            C8984 * C501) *
               C31138 * C30904 * C30972 * C1414 -
           (C8989 * C1282 + C9117 + C9117 + C8984 * C1300 + C8987 * C924 +
            C9118 + C9118 + C8983 * C934 + C8985 * C291 + C9119 + C9119 +
            C8982 * C311) *
               C31138 * C30904 * C30972 * C1415 +
           (C8985 * C292 + C9120 + C9120 + C8982 * C312 + C8987 * C1285 +
            C9121 + C9121 + C8983 * C1303 + C8989 * C1286 + C9122 + C9122 +
            C8984 * C1304) *
               C31138 * C30904 * C30972 * C1416 -
           (C8989 * C5624 + C9792 + C9792 + C8984 * C5630 + C8987 * C1696 +
            C9793 + C9793 + C8983 * C1702 + C8985 * C1148 + C9794 + C9794 +
            C8982 * C1160) *
               C31138 * C30904 * C30972 * C31238) *
              C31183 +
          ((C8985 * C290 + C9123 + C9123 + C8982 * C310 + C8987 * C925 + C9124 +
            C9124 + C8983 * C935 + C8989 * C1281 + C9125 + C9125 +
            C8984 * C1299) *
               C31138 * C30904 * C30972 * C1415 -
           (C8989 * C482 + C8995 + C8995 + C8984 * C502 + C8987 * C479 + C8996 +
            C8996 + C8983 * C499 + C8985 * C116 + C8997 + C8997 +
            C8982 * C130) *
               C31138 * C30904 * C30972 * C1414 -
           (C8989 * C1287 + C9126 + C9126 + C8984 * C1305 + C8987 * C1284 +
            C9127 + C9127 + C8983 * C1302 + C8985 * C293 + C9128 + C9128 +
            C8982 * C313) *
               C31138 * C30904 * C30972 * C1416 +
           (C8985 * C1147 + C10015 + C10015 + C8982 * C1159 + C8987 * C1697 +
            C10016 + C10016 + C8983 * C1703 + C8989 * C6465 + C10017 + C10017 +
            C8984 * C6467) *
               C31138 * C30904 * C30972 * C31238) *
              C30937)) /
            (p * q * std::sqrt(p + q));
    d2ee[71] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C31198 -
           (C549 * C105 + C550 * C104 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
               C31059) *
              C1414 +
          (((C113 * C924 + C940 + C940 + C31151 * C934) * C31138 * C103 +
            C960 * C104 + C961 * C105) *
               C31059 -
           (C360 * C105 + C361 * C104 +
            (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
               C31198) *
              C1415 +
          (((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
            C362 * C104 + C363 * C105) *
               C31198 -
           (C1597 * C105 + C1598 * C104 +
            (C113 * C1285 + C1313 + C1313 + C31151 * C1303) * C31138 * C103) *
               C31059) *
              C1416 +
          (((C113 * C1696 + C1706 + C1706 + C31151 * C1702) * C31138 * C103 +
            (C113 * C1697 + C1707 + C1707 + C31151 * C1703) * C31138 * C104 +
            (C113 * C1698 + C1708 + C1708 + C31151 * C1704) * C31138 * C105) *
               C31059 -
           (C1435 * C105 + C1436 * C104 +
            (C113 * C1148 + C1167 + C1167 + C31151 * C1160) * C31138 * C103) *
               C31198) *
              C31238) *
         C30926) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
             C169 * C104 + C170 * C105) *
                C31198 -
            (C549 * C105 + C550 * C104 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
                C31059) *
               C31197 +
           (((C113 * C924 + C940 + C940 + C31151 * C934) * C31138 * C103 +
             C960 * C104 + C961 * C105) *
                C31059 -
            (C360 * C105 + C361 * C104 +
             (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
                C31198) *
               C31017) *
              C286 +
          (((C550 * C103 + C549 * C104 + C553 * C105) * C31059 -
            (C171 * C105 + C170 * C104 + C169 * C103) * C31198) *
               C31197 +
           ((C361 * C103 + C360 * C104 + C364 * C105) * C31198 -
            (C962 * C105 + C961 * C104 + C960 * C103) * C31059) *
               C31017) *
              C287 +
          (((C170 * C103 + C171 * C104 + C172 * C105) * C31198 -
            (C778 * C105 + C553 * C104 + C549 * C103) * C31059) *
               C31197 +
           ((C961 * C103 + C962 * C104 +
             (C113 * C928 + C950 + C950 + C31151 * C938) * C31138 * C105) *
                C31059 -
            (C668 * C105 + C364 * C104 + C360 * C103) * C31198) *
               C31017) *
              C31222)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
             C4860 * C4734 + C4861 * C4735) *
                C30904 * C31198 -
            (C5323 * C4735 + C5324 * C4734 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
                C30904 * C31059) *
               C31197 +
           ((C5324 * C4733 + C5323 * C4734 +
             (C113 * C1696 + C1706 + C1706 + C31151 * C1702) * C4735) *
                C30904 * C31059 -
            (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C31198) *
               C31017) *
              C286 +
          (((C544 * C4733 + C957 * C4734 + C1596 * C4735) * C30904 * C31059 -
            (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C31198) *
               C31197 +
           ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C31198 -
            ((C113 * C1697 + C1707 + C1707 + C31151 * C1703) * C4735 +
             C1596 * C4734 + C957 * C4733) *
                C30904 * C31059) *
               C31017) *
              C287 +
          (((C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C31198 -
            (C1595 * C4735 + C958 * C4734 + C543 * C4733) * C30904 * C31059) *
               C31197 +
           ((C958 * C4733 + C1595 * C4734 +
             (C113 * C1698 + C1708 + C1708 + C31151 * C1704) * C4735) *
                C30904 * C31059 -
            (C1433 * C4735 + C357 * C4734 + C354 * C4733) * C30904 * C31198) *
               C31017) *
              C31222)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C31198 -
           (C5323 * C4735 + C5324 * C4734 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
               C30904 * C31059) *
              C1414 +
          ((C5324 * C4733 + C5323 * C4734 + C5655 * C4735) * C30904 * C31059 -
           (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C31198) *
              C1415 +
          ((C4861 * C4733 + C4862 * C4734 + C5513 * C4735) * C30904 * C31198 -
           (C6025 * C4735 + C5655 * C4734 + C5323 * C4733) * C30904 * C31059) *
              C1416 +
          ((C5655 * C4733 + C6025 * C4734 +
            (C113 * C6016 + C6022 + C6022 + C31151 * C6018) * C4735) *
               C30904 * C31059 -
           (C5514 * C4735 + C5513 * C4734 + C4862 * C4733) * C30904 * C31198) *
              C31238) *
         C30926) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 +
             C8993 + C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 +
             C8984 * C501) *
                C31138 * C30904 * C31198 -
            (C8989 * C2000 + C9245 + C9245 + C8984 * C2012 + C8987 * C481 +
             C9246 + C9246 + C8983 * C501 + C8985 * C480 + C9247 + C9247 +
             C8982 * C500) *
                C31138 * C30904 * C31059) *
               C31197 +
           ((C8985 * C924 + C9611 + C9611 + C8982 * C934 + C8987 * C1282 +
             C9612 + C9612 + C8983 * C1300 + C8989 * C2400 + C9613 + C9613 +
             C8984 * C2406) *
                C31138 * C30904 * C31059 -
            (C8989 * C1282 + C9117 + C9117 + C8984 * C1300 + C8987 * C924 +
             C9118 + C9118 + C8983 * C934 + C8985 * C291 + C9119 + C9119 +
             C8982 * C311) *
                C31138 * C30904 * C31198) *
               C31017) *
              C286 +
          (((C8985 * C479 + C9251 + C9251 + C8982 * C499 + C8987 * C482 +
             C9252 + C9252 + C8983 * C502 + C8989 * C1999 + C9253 + C9253 +
             C8984 * C2011) *
                C31138 * C30904 * C31059 -
            (C8989 * C482 + C8995 + C8995 + C8984 * C502 + C8987 * C479 +
             C8996 + C8996 + C8983 * C499 + C8985 * C116 + C8997 + C8997 +
             C8982 * C130) *
                C31138 * C30904 * C31198) *
               C31197 +
           ((C8985 * C290 + C9123 + C9123 + C8982 * C310 + C8987 * C925 +
             C9124 + C9124 + C8983 * C935 + C8989 * C1281 + C9125 + C9125 +
             C8984 * C1299) *
                C31138 * C30904 * C31198 -
            (C8989 * C2401 + C9614 + C9614 + C8984 * C2407 + C8987 * C1281 +
             C9615 + C9615 + C8983 * C1299 + C8985 * C925 + C9616 + C9616 +
             C8982 * C935) *
                C31138 * C30904 * C31059) *
               C31017) *
              C287 +
          (((C8985 * C117 + C8998 + C8998 + C8982 * C131 + C8987 * C478 +
             C8999 + C8999 + C8983 * C498 + C8989 * C483 + C9000 + C9000 +
             C8984 * C503) *
                C31138 * C30904 * C31198 -
            (C8989 * C1998 + C9257 + C9257 + C8984 * C2010 + C8987 * C483 +
             C9258 + C9258 + C8983 * C503 + C8985 * C478 + C9259 + C9259 +
             C8982 * C498) *
                C31138 * C30904 * C31059) *
               C31197 +
           ((C8985 * C926 + C9617 + C9617 + C8982 * C936 + C8987 * C1280 +
             C9618 + C9618 + C8983 * C1298 + C8989 * C2402 + C9619 + C9619 +
             C8984 * C2408) *
                C31138 * C30904 * C31059 -
            (C8989 * C1280 + C9129 + C9129 + C8984 * C1298 + C8987 * C926 +
             C9130 + C9130 + C8983 * C936 + C8985 * C289 + C9131 + C9131 +
             C8982 * C309) *
                C31138 * C30904 * C31198) *
               C31017) *
              C31222)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 + C8993 +
            C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 +
            C8984 * C501) *
               C31138 * C30904 * C31198 -
           (C8989 * C2000 + C9245 + C9245 + C8984 * C2012 + C8987 * C481 +
            C9246 + C9246 + C8983 * C501 + C8985 * C480 + C9247 + C9247 +
            C8982 * C500) *
               C31138 * C30904 * C31059) *
              C1414 +
          ((C8985 * C924 + C9611 + C9611 + C8982 * C934 + C8987 * C1282 +
            C9612 + C9612 + C8983 * C1300 + C8989 * C2400 + C9613 + C9613 +
            C8984 * C2406) *
               C31138 * C30904 * C31059 -
           (C8989 * C1282 + C9117 + C9117 + C8984 * C1300 + C8987 * C924 +
            C9118 + C9118 + C8983 * C934 + C8985 * C291 + C9119 + C9119 +
            C8982 * C311) *
               C31138 * C30904 * C31198) *
              C1415 +
          ((C8985 * C292 + C9120 + C9120 + C8982 * C312 + C8987 * C1285 +
            C9121 + C9121 + C8983 * C1303 + C8989 * C1286 + C9122 + C9122 +
            C8984 * C1304) *
               C31138 * C30904 * C31198 -
           (C8989 * C6307 + C9911 + C9911 + C8984 * C6313 + C8987 * C1286 +
            C9912 + C9912 + C8983 * C1304 + C8985 * C1285 + C9913 + C9913 +
            C8982 * C1303) *
               C31138 * C30904 * C31059) *
              C1416 +
          ((C8985 * C1696 + C10265 + C10265 + C8982 * C1702 + C8987 * C5624 +
            C10266 + C10266 + C8983 * C5630 + C8989 * C6674 + C10267 + C10267 +
            C8984 * C6676) *
               C31138 * C30904 * C31059 -
           (C8989 * C5624 + C9792 + C9792 + C8984 * C5630 + C8987 * C1696 +
            C9793 + C9793 + C8983 * C1702 + C8985 * C1148 + C9794 + C9794 +
            C8982 * C1160) *
               C31138 * C30904 * C31198) *
              C31238) *
         C30926) /
            (p * q * std::sqrt(p + q));
    d2ee[72] +=
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
             (((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
               C169 * C104 + C170 * C105) *
                  C30972 * C30954 * C108 -
              (C171 * C105 + C170 * C104 + C169 * C103) * C30972 * C30954 *
                  C109 +
              (C170 * C103 + C171 * C104 + C172 * C105) * C30972 * C30954 *
                  C110 -
              (C173 * C105 + C172 * C104 + C171 * C103) * C30972 * C30954 *
                  C111 +
              (C172 * C103 + C173 * C104 +
               (C113 * C121 + C153 + C153 + C31151 * C135) * C31138 * C105) *
                  C30972 * C30954 * C112) +
         std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
             ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
                C169 * C104 + C170 * C105) *
                   C30972 * C31265 -
               (C360 * C105 + C361 * C104 +
                (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
                   C30972 * C31253 +
               ((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
                C362 * C104 + C363 * C105) *
                   C30972 * C31228) *
                  C286 +
              ((C361 * C103 + C360 * C104 + C364 * C105) * C30972 * C31253 -
               (C171 * C105 + C170 * C104 + C169 * C103) * C30972 * C31265 -
               (C365 * C105 + C363 * C104 + C362 * C103) * C30972 * C31228) *
                  C287 +
              ((C170 * C103 + C171 * C104 + C172 * C105) * C30972 * C31265 -
               ((C113 * C297 + C340 + C340 + C31151 * C317) * C31138 * C105 +
                C364 * C104 + C360 * C103) *
                   C30972 * C31253 +
               (C363 * C103 + C365 * C104 +
                (C113 * C298 + C341 + C341 + C31151 * C318) * C31138 * C105) *
                   C30972 * C31228) *
                  C31222)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C31266 -
           (C549 * C105 + C550 * C104 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
               C31255 +
           ((C113 * C481 + C516 + C516 + C31151 * C501) * C31138 * C103 +
            C551 * C104 + C552 * C105) *
               C31231) *
              C30954 * C286 +
          ((C550 * C103 + C549 * C104 + C553 * C105) * C31255 -
           (C171 * C105 + C170 * C104 + C169 * C103) * C31266 -
           (C554 * C105 + C552 * C104 + C551 * C103) * C31231) *
              C30954 * C287 +
          ((C170 * C103 + C171 * C104 + C172 * C105) * C31266 -
           ((C113 * C486 + C529 + C529 + C31151 * C506) * C31138 * C105 +
            C553 * C104 + C549 * C103) *
               C31255 +
           (C552 * C103 + C554 * C104 +
            (C113 * C487 + C530 + C530 + C31151 * C507) * C31138 * C105) *
               C31231) *
              C30954 * C31222)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C30972 * C1072 -
           (C360 * C105 + C361 * C104 +
            (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
               C30972 * C1073 +
           ((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
            C362 * C104 + C363 * C105) *
               C30972 * C31228) *
              C31262 +
          ((C361 * C103 + C360 * C104 + C364 * C105) * C30972 * C1073 -
           (C171 * C105 + C170 * C104 + C169 * C103) * C30972 * C1072 -
           (C365 * C105 + C363 * C104 + C362 * C103) * C30972 * C31228) *
              C31249 +
          ((C170 * C103 + C171 * C104 + C172 * C105) * C30972 * C1072 -
           (C668 * C105 + C364 * C104 + C360 * C103) * C30972 * C1073 +
           (C363 * C103 + C365 * C104 +
            (C113 * C298 + C341 + C341 + C31151 * C318) * C31138 * C105) *
               C30972 * C31228) *
              C31222)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
           C169 * C104 + C170 * C105) *
              C30972 * C1140 -
          (C360 * C105 + C361 * C104 +
           (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
              C30972 * C1141 +
          ((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
           C362 * C104 + C363 * C105) *
              C30972 * C1142 -
          ((C113 * C1146 + C1165 + C1165 + C31151 * C1158) * C31138 * C105 +
           (C113 * C1147 + C1166 + C1166 + C31151 * C1159) * C31138 * C104 +
           (C113 * C1148 + C1167 + C1167 + C31151 * C1160) * C31138 * C103) *
              C30972 * C1143 +
          ((C113 * C1149 + C1168 + C1168 + C31151 * C1161) * C31138 * C103 +
           (C113 * C1150 + C1169 + C1169 + C31151 * C1162) * C31138 * C104 +
           (C113 * C1151 + C1170 + C1170 + C31151 * C1163) * C31138 * C105) *
              C30972 * C1144) *
         C30926) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C31266 -
           (C549 * C105 + C550 * C104 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
               C31255 +
           ((C113 * C481 + C516 + C516 + C31151 * C501) * C31138 * C103 +
            C551 * C104 + C552 * C105) *
               C31231) *
              C1072 +
          (((C113 * C924 + C940 + C940 + C31151 * C934) * C31138 * C103 +
            C960 * C104 + C961 * C105) *
               C31255 -
           (C360 * C105 + C361 * C104 +
            (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
               C31266 -
           ((C113 * C1280 + C1308 + C1308 + C31151 * C1298) * C31138 * C105 +
            (C113 * C1281 + C1309 + C1309 + C31151 * C1299) * C31138 * C104 +
            (C113 * C1282 + C1310 + C1310 + C31151 * C1300) * C31138 * C103) *
               C31231) *
              C1073 +
          (((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
            C362 * C104 + C363 * C105) *
               C31266 -
           ((C113 * C1283 + C1311 + C1311 + C31151 * C1301) * C31138 * C105 +
            (C113 * C1284 + C1312 + C1312 + C31151 * C1302) * C31138 * C104 +
            (C113 * C1285 + C1313 + C1313 + C31151 * C1303) * C31138 * C103) *
               C31255 +
           ((C113 * C1286 + C1314 + C1314 + C31151 * C1304) * C31138 * C103 +
            (C113 * C1287 + C1315 + C1315 + C31151 * C1305) * C31138 * C104 +
            (C113 * C1288 + C1316 + C1316 + C31151 * C1306) * C31138 * C105) *
               C31231) *
              C31228) *
         C30926) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
           (C113 * C291 + C326 + C326 + C31151 * C311) * C4734 +
           (C113 * C292 + C327 + C327 + C31151 * C312) * C4735) *
              C30904 * C30972 * C30954 * C108 -
          (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C30972 *
              C30954 * C109 +
          (C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C30972 *
              C30954 * C110 -
          (C359 * C4735 + C358 * C4734 + C166 * C4733) * C30904 * C30972 *
              C30954 * C111 +
          (C167 * C4733 + C667 * C4734 +
           (C113 * C298 + C341 + C341 + C31151 * C318) * C4735) *
              C30904 * C30972 * C30954 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C30972 * C31265 -
           (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C30972 *
               C31253 +
           (C4861 * C4733 + C4862 * C4734 +
            (C113 * C1149 + C1168 + C1168 + C31151 * C1161) * C4735) *
               C30904 * C30972 * C31228) *
              C286 +
          ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C30972 *
               C31253 -
           (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C30972 *
               C31265 -
           ((C113 * C1150 + C1169 + C1169 + C31151 * C1162) * C4735 +
            C1434 * C4734 + C356 * C4733) *
               C30904 * C30972 * C31228) *
              C287 +
          ((C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C30972 *
               C31265 -
           (C1433 * C4735 + C357 * C4734 + C354 * C4733) * C30904 * C30972 *
               C31253 +
           (C357 * C4733 + C1433 * C4734 +
            (C113 * C1151 + C1170 + C1170 + C31151 * C1163) * C4735) *
               C30904 * C30972 * C31228) *
              C31222)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C31266 -
           ((C113 * C1285 + C1313 + C1313 + C31151 * C1303) * C4735 +
            (C113 * C924 + C940 + C940 + C31151 * C934) * C4734 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
               C30904 * C31255 +
           ((C113 * C481 + C516 + C516 + C31151 * C501) * C4733 +
            (C113 * C1282 + C1310 + C1310 + C31151 * C1300) * C4734 +
            (C113 * C1286 + C1314 + C1314 + C31151 * C1304) * C4735) *
               C30904 * C31231) *
              C30954 * C286 +
          ((C544 * C4733 + C957 * C4734 + C1596 * C4735) * C30904 * C31255 -
           (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C31266 -
           ((C113 * C1287 + C1315 + C1315 + C31151 * C1305) * C4735 +
            C2182 * C4734 + C545 * C4733) *
               C30904 * C31231) *
              C30954 * C287 +
          ((C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C31266 -
           (C1595 * C4735 + C958 * C4734 + C543 * C4733) * C30904 * C31255 +
           (C546 * C4733 + C2181 * C4734 +
            (C113 * C1288 + C1316 + C1316 + C31151 * C1306) * C4735) *
               C30904 * C31231) *
              C30954 * C31222)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C30972 * C1072 -
           (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C30972 *
               C1073 +
           (C4861 * C4733 + C4862 * C4734 +
            (C113 * C1149 + C1168 + C1168 + C31151 * C1161) * C4735) *
               C30904 * C30972 * C31228) *
              C31262 +
          ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C30972 *
               C1073 -
           (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C30972 *
               C1072 -
           ((C113 * C1150 + C1169 + C1169 + C31151 * C1162) * C4735 +
            C1434 * C4734 + C356 * C4733) *
               C30904 * C30972 * C31228) *
              C31249 +
          ((C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C30972 *
               C1072 -
           (C1433 * C4735 + C357 * C4734 + C354 * C4733) * C30904 * C30972 *
               C1073 +
           (C357 * C4733 + C1433 * C4734 +
            (C113 * C1151 + C1170 + C1170 + C31151 * C1163) * C4735) *
               C30904 * C30972 * C31228) *
              C31222)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 + C4860 * C4734 +
           C4861 * C4735) *
              C30904 * C30972 * C1140 -
          (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C30972 *
              C1141 +
          (C4861 * C4733 + C4862 * C4734 + C5513 * C4735) * C30904 * C30972 *
              C1142 -
          (C5514 * C4735 + C5513 * C4734 + C4862 * C4733) * C30904 * C30972 *
              C1143 +
          (C5513 * C4733 + C5514 * C4734 +
           (C113 * C5497 + C5508 + C5508 + C31151 * C5501) * C4735) *
              C30904 * C30972 * C1144) *
         C30926) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C31266 -
           (C5323 * C4735 + C5324 * C4734 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
               C30904 * C31255 +
           ((C113 * C481 + C516 + C516 + C31151 * C501) * C4733 +
            C5653 * C4734 + C5654 * C4735) *
               C30904 * C31231) *
              C1072 +
          ((C5324 * C4733 + C5323 * C4734 + C5655 * C4735) * C30904 * C31255 -
           (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C31266 -
           (C5656 * C4735 + C5654 * C4734 + C5653 * C4733) * C30904 * C31231) *
              C1073 +
          ((C4861 * C4733 + C4862 * C4734 + C5513 * C4735) * C30904 * C31266 -
           ((C113 * C5625 + C5643 + C5643 + C31151 * C5631) * C4735 +
            C5655 * C4734 + C5323 * C4733) *
               C30904 * C31255 +
           (C5654 * C4733 + C5656 * C4734 +
            (C113 * C5626 + C5644 + C5644 + C31151 * C5632) * C4735) *
               C30904 * C31231) *
              C31228) *
         C30926) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 + C8993 +
           C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 + C8984 * C501) *
              C31138 * C30904 * C30972 * C30954 * C108 -
          (C8989 * C482 + C8995 + C8995 + C8984 * C502 + C8987 * C479 + C8996 +
           C8996 + C8983 * C499 + C8985 * C116 + C8997 + C8997 + C8982 * C130) *
              C31138 * C30904 * C30972 * C30954 * C109 +
          (C8985 * C117 + C8998 + C8998 + C8982 * C131 + C8987 * C478 + C8999 +
           C8999 + C8983 * C498 + C8989 * C483 + C9000 + C9000 + C8984 * C503) *
              C31138 * C30904 * C30972 * C30954 * C110 -
          (C8989 * C485 + C9001 + C9001 + C8984 * C505 + C8987 * C484 + C9002 +
           C9002 + C8983 * C504 + C8985 * C118 + C9003 + C9003 + C8982 * C132) *
              C31138 * C30904 * C30972 * C30954 * C111 +
          (C8985 * C119 + C9004 + C9004 + C8982 * C133 + C8987 * C486 + C9005 +
           C9005 + C8983 * C506 + C8989 * C487 + C9006 + C9006 + C8984 * C507) *
              C31138 * C30904 * C30972 * C30954 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 + C8993 +
            C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 +
            C8984 * C501) *
               C31138 * C30904 * C30972 * C31265 -
           (C8989 * C1282 + C9117 + C9117 + C8984 * C1300 + C8987 * C924 +
            C9118 + C9118 + C8983 * C934 + C8985 * C291 + C9119 + C9119 +
            C8982 * C311) *
               C31138 * C30904 * C30972 * C31253 +
           (C8985 * C292 + C9120 + C9120 + C8982 * C312 + C8987 * C1285 +
            C9121 + C9121 + C8983 * C1303 + C8989 * C1286 + C9122 + C9122 +
            C8984 * C1304) *
               C31138 * C30904 * C30972 * C31228) *
              C286 +
          ((C8985 * C290 + C9123 + C9123 + C8982 * C310 + C8987 * C925 + C9124 +
            C9124 + C8983 * C935 + C8989 * C1281 + C9125 + C9125 +
            C8984 * C1299) *
               C31138 * C30904 * C30972 * C31253 -
           (C8989 * C482 + C8995 + C8995 + C8984 * C502 + C8987 * C479 + C8996 +
            C8996 + C8983 * C499 + C8985 * C116 + C8997 + C8997 +
            C8982 * C130) *
               C31138 * C30904 * C30972 * C31265 -
           (C8989 * C1287 + C9126 + C9126 + C8984 * C1305 + C8987 * C1284 +
            C9127 + C9127 + C8983 * C1302 + C8985 * C293 + C9128 + C9128 +
            C8982 * C313) *
               C31138 * C30904 * C30972 * C31228) *
              C287 +
          ((C8985 * C117 + C8998 + C8998 + C8982 * C131 + C8987 * C478 + C8999 +
            C8999 + C8983 * C498 + C8989 * C483 + C9000 + C9000 +
            C8984 * C503) *
               C31138 * C30904 * C30972 * C31265 -
           (C8989 * C1280 + C9129 + C9129 + C8984 * C1298 + C8987 * C926 +
            C9130 + C9130 + C8983 * C936 + C8985 * C289 + C9131 + C9131 +
            C8982 * C309) *
               C31138 * C30904 * C30972 * C31253 +
           (C8985 * C294 + C9132 + C9132 + C8982 * C314 + C8987 * C1283 +
            C9133 + C9133 + C8983 * C1301 + C8989 * C1288 + C9134 + C9134 +
            C8984 * C1306) *
               C31138 * C30904 * C30972 * C31228) *
              C31222)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 + C8993 +
            C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 +
            C8984 * C501) *
               C31138 * C30904 * C31266 -
           (C8989 * C2000 + C9245 + C9245 + C8984 * C2012 + C8987 * C481 +
            C9246 + C9246 + C8983 * C501 + C8985 * C480 + C9247 + C9247 +
            C8982 * C500) *
               C31138 * C30904 * C31255 +
           (C8985 * C481 + C9248 + C9248 + C8982 * C501 + C8987 * C2000 +
            C9249 + C9249 + C8983 * C2012 + C8989 * C2001 + C9250 + C9250 +
            C8984 * C2013) *
               C31138 * C30904 * C31231) *
              C30954 * C286 +
          ((C8985 * C479 + C9251 + C9251 + C8982 * C499 + C8987 * C482 + C9252 +
            C9252 + C8983 * C502 + C8989 * C1999 + C9253 + C9253 +
            C8984 * C2011) *
               C31138 * C30904 * C31255 -
           (C8989 * C482 + C8995 + C8995 + C8984 * C502 + C8987 * C479 + C8996 +
            C8996 + C8983 * C499 + C8985 * C116 + C8997 + C8997 +
            C8982 * C130) *
               C31138 * C30904 * C31266 -
           (C8989 * C2002 + C9254 + C9254 + C8984 * C2014 + C8987 * C1999 +
            C9255 + C9255 + C8983 * C2011 + C8985 * C482 + C9256 + C9256 +
            C8982 * C502) *
               C31138 * C30904 * C31231) *
              C30954 * C287 +
          ((C8985 * C117 + C8998 + C8998 + C8982 * C131 + C8987 * C478 + C8999 +
            C8999 + C8983 * C498 + C8989 * C483 + C9000 + C9000 +
            C8984 * C503) *
               C31138 * C30904 * C31266 -
           (C8989 * C1998 + C9257 + C9257 + C8984 * C2010 + C8987 * C483 +
            C9258 + C9258 + C8983 * C503 + C8985 * C478 + C9259 + C9259 +
            C8982 * C498) *
               C31138 * C30904 * C31255 +
           (C8985 * C483 + C9260 + C9260 + C8982 * C503 + C8987 * C1998 +
            C9261 + C9261 + C8983 * C2010 + C8989 * C2003 + C9262 + C9262 +
            C8984 * C2015) *
               C31138 * C30904 * C31231) *
              C30954 * C31222)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 + C8993 +
            C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 +
            C8984 * C501) *
               C31138 * C30904 * C30972 * C1072 -
           (C8989 * C1282 + C9117 + C9117 + C8984 * C1300 + C8987 * C924 +
            C9118 + C9118 + C8983 * C934 + C8985 * C291 + C9119 + C9119 +
            C8982 * C311) *
               C31138 * C30904 * C30972 * C1073 +
           (C8985 * C292 + C9120 + C9120 + C8982 * C312 + C8987 * C1285 +
            C9121 + C9121 + C8983 * C1303 + C8989 * C1286 + C9122 + C9122 +
            C8984 * C1304) *
               C31138 * C30904 * C30972 * C31228) *
              C31262 +
          ((C8985 * C290 + C9123 + C9123 + C8982 * C310 + C8987 * C925 + C9124 +
            C9124 + C8983 * C935 + C8989 * C1281 + C9125 + C9125 +
            C8984 * C1299) *
               C31138 * C30904 * C30972 * C1073 -
           (C8989 * C482 + C8995 + C8995 + C8984 * C502 + C8987 * C479 + C8996 +
            C8996 + C8983 * C499 + C8985 * C116 + C8997 + C8997 +
            C8982 * C130) *
               C31138 * C30904 * C30972 * C1072 -
           (C8989 * C1287 + C9126 + C9126 + C8984 * C1305 + C8987 * C1284 +
            C9127 + C9127 + C8983 * C1302 + C8985 * C293 + C9128 + C9128 +
            C8982 * C313) *
               C31138 * C30904 * C30972 * C31228) *
              C31249 +
          ((C8985 * C117 + C8998 + C8998 + C8982 * C131 + C8987 * C478 + C8999 +
            C8999 + C8983 * C498 + C8989 * C483 + C9000 + C9000 +
            C8984 * C503) *
               C31138 * C30904 * C30972 * C1072 -
           (C8989 * C1280 + C9129 + C9129 + C8984 * C1298 + C8987 * C926 +
            C9130 + C9130 + C8983 * C936 + C8985 * C289 + C9131 + C9131 +
            C8982 * C309) *
               C31138 * C30904 * C30972 * C1073 +
           (C8985 * C294 + C9132 + C9132 + C8982 * C314 + C8987 * C1283 +
            C9133 + C9133 + C8983 * C1301 + C8989 * C1288 + C9134 + C9134 +
            C8984 * C1306) *
               C31138 * C30904 * C30972 * C31228) *
              C31222)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 + C8993 +
           C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 + C8984 * C501) *
              C31138 * C30904 * C30972 * C1140 -
          (C8989 * C1282 + C9117 + C9117 + C8984 * C1300 + C8987 * C924 +
           C9118 + C9118 + C8983 * C934 + C8985 * C291 + C9119 + C9119 +
           C8982 * C311) *
              C31138 * C30904 * C30972 * C1141 +
          (C8985 * C292 + C9120 + C9120 + C8982 * C312 + C8987 * C1285 + C9121 +
           C9121 + C8983 * C1303 + C8989 * C1286 + C9122 + C9122 +
           C8984 * C1304) *
              C31138 * C30904 * C30972 * C1142 -
          (C8989 * C5624 + C9792 + C9792 + C8984 * C5630 + C8987 * C1696 +
           C9793 + C9793 + C8983 * C1702 + C8985 * C1148 + C9794 + C9794 +
           C8982 * C1160) *
              C31138 * C30904 * C30972 * C1143 +
          (C8985 * C1149 + C9795 + C9795 + C8982 * C1161 + C8987 * C5625 +
           C9796 + C9796 + C8983 * C5631 + C8989 * C5626 + C9797 + C9797 +
           C8984 * C5632) *
              C31138 * C30904 * C30972 * C1144) *
         C30926) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 + C8993 +
            C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 +
            C8984 * C501) *
               C31138 * C30904 * C31266 -
           (C8989 * C2000 + C9245 + C9245 + C8984 * C2012 + C8987 * C481 +
            C9246 + C9246 + C8983 * C501 + C8985 * C480 + C9247 + C9247 +
            C8982 * C500) *
               C31138 * C30904 * C31255 +
           (C8985 * C481 + C9248 + C9248 + C8982 * C501 + C8987 * C2000 +
            C9249 + C9249 + C8983 * C2012 + C8989 * C2001 + C9250 + C9250 +
            C8984 * C2013) *
               C31138 * C30904 * C31231) *
              C1072 +
          ((C8985 * C924 + C9611 + C9611 + C8982 * C934 + C8987 * C1282 +
            C9612 + C9612 + C8983 * C1300 + C8989 * C2400 + C9613 + C9613 +
            C8984 * C2406) *
               C31138 * C30904 * C31255 -
           (C8989 * C1282 + C9117 + C9117 + C8984 * C1300 + C8987 * C924 +
            C9118 + C9118 + C8983 * C934 + C8985 * C291 + C9119 + C9119 +
            C8982 * C311) *
               C31138 * C30904 * C31266 -
           (C8989 * C6308 + C9908 + C9908 + C8984 * C6314 + C8987 * C2400 +
            C9909 + C9909 + C8983 * C2406 + C8985 * C1282 + C9910 + C9910 +
            C8982 * C1300) *
               C31138 * C30904 * C31231) *
              C1073 +
          ((C8985 * C292 + C9120 + C9120 + C8982 * C312 + C8987 * C1285 +
            C9121 + C9121 + C8983 * C1303 + C8989 * C1286 + C9122 + C9122 +
            C8984 * C1304) *
               C31138 * C30904 * C31266 -
           (C8989 * C6307 + C9911 + C9911 + C8984 * C6313 + C8987 * C1286 +
            C9912 + C9912 + C8983 * C1304 + C8985 * C1285 + C9913 + C9913 +
            C8982 * C1303) *
               C31138 * C30904 * C31255 +
           (C8985 * C1286 + C9914 + C9914 + C8982 * C1304 + C8987 * C6307 +
            C9915 + C9915 + C8983 * C6313 + C8989 * C6309 + C9916 + C9916 +
            C8984 * C6315) *
               C31138 * C30904 * C31231) *
              C31228) *
         C30926) /
            (p * q * std::sqrt(p + q));
    d2ee[73] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
             C169 * C104 + C170 * C105) *
                C31198 -
            (C549 * C105 + C550 * C104 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
                C31059) *
               C1072 +
           (((C113 * C924 + C940 + C940 + C31151 * C934) * C31138 * C103 +
             C960 * C104 + C961 * C105) *
                C31059 -
            (C360 * C105 + C361 * C104 +
             (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
                C31198) *
               C1073 +
           (((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
             C362 * C104 + C363 * C105) *
                C31198 -
            (C1597 * C105 + C1598 * C104 +
             (C113 * C1285 + C1313 + C1313 + C31151 * C1303) * C31138 * C103) *
                C31059) *
               C31228) *
              C31183 +
          (((C550 * C103 + C549 * C104 + C553 * C105) * C31059 -
            (C171 * C105 + C170 * C104 + C169 * C103) * C31198) *
               C1072 +
           ((C361 * C103 + C360 * C104 + C364 * C105) * C31198 -
            (C962 * C105 + C961 * C104 + C960 * C103) * C31059) *
               C1073 +
           ((C1598 * C103 + C1597 * C104 +
             (C113 * C1582 + C1590 + C1590 + C31151 * C1584) * C31138 * C105) *
                C31059 -
            (C365 * C105 + C363 * C104 + C362 * C103) * C31198) *
               C31228) *
              C30937)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C31198 -
           (C549 * C105 + C550 * C104 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
               C31059) *
              C30954 * C654 +
          ((C550 * C103 + C549 * C104 + C553 * C105) * C31059 -
           (C171 * C105 + C170 * C104 + C169 * C103) * C31198) *
              C30954 * C655 +
          ((C170 * C103 + C171 * C104 + C172 * C105) * C31198 -
           (C778 * C105 + C553 * C104 + C549 * C103) * C31059) *
              C30954 * C656 +
          ((C553 * C103 + C778 * C104 +
            (C113 * C768 + C774 + C774 + C31151 * C770) * C31138 * C105) *
               C31059 -
           (C173 * C105 + C172 * C104 + C171 * C103) * C31198) *
              C30954 * C31232)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C31198 -
           ((C113 * C1285 + C1313 + C1313 + C31151 * C1303) * C4735 +
            (C113 * C924 + C940 + C940 + C31151 * C934) * C4734 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
               C30904 * C31059) *
              C30954 * C654 +
          ((C544 * C4733 + C957 * C4734 + C1596 * C4735) * C30904 * C31059 -
           (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C31198) *
              C30954 * C655 +
          ((C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C31198 -
           (C1595 * C4735 + C958 * C4734 + C543 * C4733) * C30904 * C31059) *
              C30954 * C656 +
          ((C547 * C4733 + C959 * C4734 +
            (C113 * C1582 + C1590 + C1590 + C31151 * C1584) * C4735) *
               C30904 * C31059 -
           (C359 * C4735 + C358 * C4734 + C166 * C4733) * C30904 * C31198) *
              C30954 * C31232)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
             C4860 * C4734 + C4861 * C4735) *
                C30904 * C31198 -
            (C5323 * C4735 + C5324 * C4734 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
                C30904 * C31059) *
               C1072 +
           ((C5324 * C4733 + C5323 * C4734 + C5655 * C4735) * C30904 * C31059 -
            (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C31198) *
               C1073 +
           ((C4861 * C4733 + C4862 * C4734 + C5513 * C4735) * C30904 * C31198 -
            ((C113 * C5625 + C5643 + C5643 + C31151 * C5631) * C4735 +
             C5655 * C4734 + C5323 * C4733) *
                C30904 * C31059) *
               C31228) *
              C31183 +
          (((C544 * C4733 + C957 * C4734 + C1596 * C4735) * C30904 * C31059 -
            (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C31198) *
               C1072 +
           ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C31198 -
            (C5918 * C4735 + C1596 * C4734 + C957 * C4733) * C30904 * C31059) *
               C1073 +
           ((C1596 * C4733 + C5918 * C4734 +
             (C113 * C5909 + C5915 + C5915 + C31151 * C5911) * C4735) *
                C30904 * C31059 -
            (C5763 * C4735 + C1434 * C4734 + C356 * C4733) * C30904 * C31198) *
               C31228) *
              C30937)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 + C8993 +
            C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 +
            C8984 * C501) *
               C31138 * C30904 * C31198 -
           (C8989 * C2000 + C9245 + C9245 + C8984 * C2012 + C8987 * C481 +
            C9246 + C9246 + C8983 * C501 + C8985 * C480 + C9247 + C9247 +
            C8982 * C500) *
               C31138 * C30904 * C31059) *
              C30954 * C654 +
          ((C8985 * C479 + C9251 + C9251 + C8982 * C499 + C8987 * C482 + C9252 +
            C9252 + C8983 * C502 + C8989 * C1999 + C9253 + C9253 +
            C8984 * C2011) *
               C31138 * C30904 * C31059 -
           (C8989 * C482 + C8995 + C8995 + C8984 * C502 + C8987 * C479 + C8996 +
            C8996 + C8983 * C499 + C8985 * C116 + C8997 + C8997 +
            C8982 * C130) *
               C31138 * C30904 * C31198) *
              C30954 * C655 +
          ((C8985 * C117 + C8998 + C8998 + C8982 * C131 + C8987 * C478 + C8999 +
            C8999 + C8983 * C498 + C8989 * C483 + C9000 + C9000 +
            C8984 * C503) *
               C31138 * C30904 * C31198 -
           (C8989 * C1998 + C9257 + C9257 + C8984 * C2010 + C8987 * C483 +
            C9258 + C9258 + C8983 * C503 + C8985 * C478 + C9259 + C9259 +
            C8982 * C498) *
               C31138 * C30904 * C31059) *
              C30954 * C656 +
          ((C8985 * C484 + C9462 + C9462 + C8982 * C504 + C8987 * C485 + C9463 +
            C9463 + C8983 * C505 + C8989 * C2286 + C9464 + C9464 +
            C8984 * C2288) *
               C31138 * C30904 * C31059 -
           (C8989 * C485 + C9001 + C9001 + C8984 * C505 + C8987 * C484 + C9002 +
            C9002 + C8983 * C504 + C8985 * C118 + C9003 + C9003 +
            C8982 * C132) *
               C31138 * C30904 * C31198) *
              C30954 * C31232)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 +
             C8993 + C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 +
             C8984 * C501) *
                C31138 * C30904 * C31198 -
            (C8989 * C2000 + C9245 + C9245 + C8984 * C2012 + C8987 * C481 +
             C9246 + C9246 + C8983 * C501 + C8985 * C480 + C9247 + C9247 +
             C8982 * C500) *
                C31138 * C30904 * C31059) *
               C1072 +
           ((C8985 * C924 + C9611 + C9611 + C8982 * C934 + C8987 * C1282 +
             C9612 + C9612 + C8983 * C1300 + C8989 * C2400 + C9613 + C9613 +
             C8984 * C2406) *
                C31138 * C30904 * C31059 -
            (C8989 * C1282 + C9117 + C9117 + C8984 * C1300 + C8987 * C924 +
             C9118 + C9118 + C8983 * C934 + C8985 * C291 + C9119 + C9119 +
             C8982 * C311) *
                C31138 * C30904 * C31198) *
               C1073 +
           ((C8985 * C292 + C9120 + C9120 + C8982 * C312 + C8987 * C1285 +
             C9121 + C9121 + C8983 * C1303 + C8989 * C1286 + C9122 + C9122 +
             C8984 * C1304) *
                C31138 * C30904 * C31198 -
            (C8989 * C6307 + C9911 + C9911 + C8984 * C6313 + C8987 * C1286 +
             C9912 + C9912 + C8983 * C1304 + C8985 * C1285 + C9913 + C9913 +
             C8982 * C1303) *
                C31138 * C30904 * C31059) *
               C31228) *
              C31183 +
          (((C8985 * C479 + C9251 + C9251 + C8982 * C499 + C8987 * C482 +
             C9252 + C9252 + C8983 * C502 + C8989 * C1999 + C9253 + C9253 +
             C8984 * C2011) *
                C31138 * C30904 * C31059 -
            (C8989 * C482 + C8995 + C8995 + C8984 * C502 + C8987 * C479 +
             C8996 + C8996 + C8983 * C499 + C8985 * C116 + C8997 + C8997 +
             C8982 * C130) *
                C31138 * C30904 * C31198) *
               C1072 +
           ((C8985 * C290 + C9123 + C9123 + C8982 * C310 + C8987 * C925 +
             C9124 + C9124 + C8983 * C935 + C8989 * C1281 + C9125 + C9125 +
             C8984 * C1299) *
                C31138 * C30904 * C31198 -
            (C8989 * C2401 + C9614 + C9614 + C8984 * C2407 + C8987 * C1281 +
             C9615 + C9615 + C8983 * C1299 + C8985 * C925 + C9616 + C9616 +
             C8982 * C935) *
                C31138 * C30904 * C31059) *
               C1073 +
           ((C8985 * C1284 + C10164 + C10164 + C8982 * C1302 + C8987 * C1287 +
             C10165 + C10165 + C8983 * C1305 + C8989 * C6572 + C10166 + C10166 +
             C8984 * C6574) *
                C31138 * C30904 * C31059 -
            (C8989 * C1287 + C9126 + C9126 + C8984 * C1305 + C8987 * C1284 +
             C9127 + C9127 + C8983 * C1302 + C8985 * C293 + C9128 + C9128 +
             C8982 * C313) *
                C31138 * C30904 * C31198) *
               C31228) *
              C30937)) /
            (p * q * std::sqrt(p + q));
    d2ee[74] +=
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C30972 * C31265 -
           (C360 * C105 + C361 * C104 +
            (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
               C30972 * C31253 +
           ((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
            C362 * C104 + C363 * C105) *
               C30972 * C31228) *
              C286 +
          ((C361 * C103 + C360 * C104 + C364 * C105) * C30972 * C31253 -
           (C171 * C105 + C170 * C104 + C169 * C103) * C30972 * C31265 -
           (C365 * C105 + C363 * C104 + C362 * C103) * C30972 * C31228) *
              C287 +
          ((C170 * C103 + C171 * C104 + C172 * C105) * C30972 * C31265 -
           ((C113 * C297 + C340 + C340 + C31151 * C317) * C31138 * C105 +
            C364 * C104 + C360 * C103) *
               C30972 * C31253 +
           (C363 * C103 + C365 * C104 +
            (C113 * C298 + C341 + C341 + C31151 * C318) * C31138 * C105) *
               C30972 * C31228) *
              C31222)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
           C169 * C104 + C170 * C105) *
              C30972 * C30954 * C108 -
          (C171 * C105 + C170 * C104 + C169 * C103) * C30972 * C30954 * C109 +
          (C170 * C103 + C171 * C104 + C172 * C105) * C30972 * C30954 * C110 -
          (C173 * C105 + C172 * C104 + C171 * C103) * C30972 * C30954 * C111 +
          (C172 * C103 + C173 * C104 +
           (C113 * C121 + C153 + C153 + C31151 * C135) * C31138 * C105) *
              C30972 * C30954 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C30972 * C1072 -
           (C360 * C105 + C361 * C104 +
            (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
               C30972 * C1073 +
           ((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
            C362 * C104 + C363 * C105) *
               C30972 * C31228) *
              C31262 +
          ((C361 * C103 + C360 * C104 + C364 * C105) * C30972 * C1073 -
           (C171 * C105 + C170 * C104 + C169 * C103) * C30972 * C1072 -
           (C365 * C105 + C363 * C104 + C362 * C103) * C30972 * C31228) *
              C31249 +
          ((C170 * C103 + C171 * C104 + C172 * C105) * C30972 * C1072 -
           (C668 * C105 + C364 * C104 + C360 * C103) * C30972 * C1073 +
           (C363 * C103 + C365 * C104 +
            (C113 * C298 + C341 + C341 + C31151 * C318) * C31138 * C105) *
               C30972 * C31228) *
              C31222)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
           C169 * C104 + C170 * C105) *
              C30972 * C1140 -
          (C360 * C105 + C361 * C104 +
           (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
              C30972 * C1141 +
          ((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
           C362 * C104 + C363 * C105) *
              C30972 * C1142 -
          ((C113 * C1146 + C1165 + C1165 + C31151 * C1158) * C31138 * C105 +
           (C113 * C1147 + C1166 + C1166 + C31151 * C1159) * C31138 * C104 +
           (C113 * C1148 + C1167 + C1167 + C31151 * C1160) * C31138 * C103) *
              C30972 * C1143 +
          ((C113 * C1149 + C1168 + C1168 + C31151 * C1161) * C31138 * C103 +
           (C113 * C1150 + C1169 + C1169 + C31151 * C1162) * C31138 * C104 +
           (C113 * C1151 + C1170 + C1170 + C31151 * C1163) * C31138 * C105) *
              C30972 * C1144) *
         C30926) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
           (C113 * C291 + C326 + C326 + C31151 * C311) * C4734 +
           (C113 * C292 + C327 + C327 + C31151 * C312) * C4735) *
              C30904 * C30972 * C30954 * C108 -
          (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C30972 *
              C30954 * C109 +
          (C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C30972 *
              C30954 * C110 -
          (C359 * C4735 + C358 * C4734 + C166 * C4733) * C30904 * C30972 *
              C30954 * C111 +
          (C167 * C4733 + C667 * C4734 +
           (C113 * C298 + C341 + C341 + C31151 * C318) * C4735) *
              C30904 * C30972 * C30954 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C30972 * C31265 -
           (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C30972 *
               C31253 +
           (C4861 * C4733 + C4862 * C4734 +
            (C113 * C1149 + C1168 + C1168 + C31151 * C1161) * C4735) *
               C30904 * C30972 * C31228) *
              C286 +
          ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C30972 *
               C31253 -
           (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C30972 *
               C31265 -
           ((C113 * C1150 + C1169 + C1169 + C31151 * C1162) * C4735 +
            C1434 * C4734 + C356 * C4733) *
               C30904 * C30972 * C31228) *
              C287 +
          ((C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C30972 *
               C31265 -
           (C1433 * C4735 + C357 * C4734 + C354 * C4733) * C30904 * C30972 *
               C31253 +
           (C357 * C4733 + C1433 * C4734 +
            (C113 * C1151 + C1170 + C1170 + C31151 * C1163) * C4735) *
               C30904 * C30972 * C31228) *
              C31222)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C30972 * C1072 -
           (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C30972 *
               C1073 +
           (C4861 * C4733 + C4862 * C4734 +
            (C113 * C1149 + C1168 + C1168 + C31151 * C1161) * C4735) *
               C30904 * C30972 * C31228) *
              C31262 +
          ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C30972 *
               C1073 -
           (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C30972 *
               C1072 -
           ((C113 * C1150 + C1169 + C1169 + C31151 * C1162) * C4735 +
            C1434 * C4734 + C356 * C4733) *
               C30904 * C30972 * C31228) *
              C31249 +
          ((C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C30972 *
               C1072 -
           (C1433 * C4735 + C357 * C4734 + C354 * C4733) * C30904 * C30972 *
               C1073 +
           (C357 * C4733 + C1433 * C4734 +
            (C113 * C1151 + C1170 + C1170 + C31151 * C1163) * C4735) *
               C30904 * C30972 * C31228) *
              C31222)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 + C4860 * C4734 +
           C4861 * C4735) *
              C30904 * C30972 * C1140 -
          (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C30972 *
              C1141 +
          (C4861 * C4733 + C4862 * C4734 + C5513 * C4735) * C30904 * C30972 *
              C1142 -
          (C5514 * C4735 + C5513 * C4734 + C4862 * C4733) * C30904 * C30972 *
              C1143 +
          (C5513 * C4733 + C5514 * C4734 +
           (C113 * C5497 + C5508 + C5508 + C31151 * C5501) * C4735) *
              C30904 * C30972 * C1144) *
         C30926) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 + C8993 +
           C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 + C8984 * C501) *
              C31138 * C30904 * C30972 * C30954 * C108 -
          (C8989 * C482 + C8995 + C8995 + C8984 * C502 + C8987 * C479 + C8996 +
           C8996 + C8983 * C499 + C8985 * C116 + C8997 + C8997 + C8982 * C130) *
              C31138 * C30904 * C30972 * C30954 * C109 +
          (C8985 * C117 + C8998 + C8998 + C8982 * C131 + C8987 * C478 + C8999 +
           C8999 + C8983 * C498 + C8989 * C483 + C9000 + C9000 + C8984 * C503) *
              C31138 * C30904 * C30972 * C30954 * C110 -
          (C8989 * C485 + C9001 + C9001 + C8984 * C505 + C8987 * C484 + C9002 +
           C9002 + C8983 * C504 + C8985 * C118 + C9003 + C9003 + C8982 * C132) *
              C31138 * C30904 * C30972 * C30954 * C111 +
          (C8985 * C119 + C9004 + C9004 + C8982 * C133 + C8987 * C486 + C9005 +
           C9005 + C8983 * C506 + C8989 * C487 + C9006 + C9006 + C8984 * C507) *
              C31138 * C30904 * C30972 * C30954 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 + C8993 +
            C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 +
            C8984 * C501) *
               C31138 * C30904 * C30972 * C31265 -
           (C8989 * C1282 + C9117 + C9117 + C8984 * C1300 + C8987 * C924 +
            C9118 + C9118 + C8983 * C934 + C8985 * C291 + C9119 + C9119 +
            C8982 * C311) *
               C31138 * C30904 * C30972 * C31253 +
           (C8985 * C292 + C9120 + C9120 + C8982 * C312 + C8987 * C1285 +
            C9121 + C9121 + C8983 * C1303 + C8989 * C1286 + C9122 + C9122 +
            C8984 * C1304) *
               C31138 * C30904 * C30972 * C31228) *
              C286 +
          ((C8985 * C290 + C9123 + C9123 + C8982 * C310 + C8987 * C925 + C9124 +
            C9124 + C8983 * C935 + C8989 * C1281 + C9125 + C9125 +
            C8984 * C1299) *
               C31138 * C30904 * C30972 * C31253 -
           (C8989 * C482 + C8995 + C8995 + C8984 * C502 + C8987 * C479 + C8996 +
            C8996 + C8983 * C499 + C8985 * C116 + C8997 + C8997 +
            C8982 * C130) *
               C31138 * C30904 * C30972 * C31265 -
           (C8989 * C1287 + C9126 + C9126 + C8984 * C1305 + C8987 * C1284 +
            C9127 + C9127 + C8983 * C1302 + C8985 * C293 + C9128 + C9128 +
            C8982 * C313) *
               C31138 * C30904 * C30972 * C31228) *
              C287 +
          ((C8985 * C117 + C8998 + C8998 + C8982 * C131 + C8987 * C478 + C8999 +
            C8999 + C8983 * C498 + C8989 * C483 + C9000 + C9000 +
            C8984 * C503) *
               C31138 * C30904 * C30972 * C31265 -
           (C8989 * C1280 + C9129 + C9129 + C8984 * C1298 + C8987 * C926 +
            C9130 + C9130 + C8983 * C936 + C8985 * C289 + C9131 + C9131 +
            C8982 * C309) *
               C31138 * C30904 * C30972 * C31253 +
           (C8985 * C294 + C9132 + C9132 + C8982 * C314 + C8987 * C1283 +
            C9133 + C9133 + C8983 * C1301 + C8989 * C1288 + C9134 + C9134 +
            C8984 * C1306) *
               C31138 * C30904 * C30972 * C31228) *
              C31222)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 + C8993 +
            C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 +
            C8984 * C501) *
               C31138 * C30904 * C30972 * C1072 -
           (C8989 * C1282 + C9117 + C9117 + C8984 * C1300 + C8987 * C924 +
            C9118 + C9118 + C8983 * C934 + C8985 * C291 + C9119 + C9119 +
            C8982 * C311) *
               C31138 * C30904 * C30972 * C1073 +
           (C8985 * C292 + C9120 + C9120 + C8982 * C312 + C8987 * C1285 +
            C9121 + C9121 + C8983 * C1303 + C8989 * C1286 + C9122 + C9122 +
            C8984 * C1304) *
               C31138 * C30904 * C30972 * C31228) *
              C31262 +
          ((C8985 * C290 + C9123 + C9123 + C8982 * C310 + C8987 * C925 + C9124 +
            C9124 + C8983 * C935 + C8989 * C1281 + C9125 + C9125 +
            C8984 * C1299) *
               C31138 * C30904 * C30972 * C1073 -
           (C8989 * C482 + C8995 + C8995 + C8984 * C502 + C8987 * C479 + C8996 +
            C8996 + C8983 * C499 + C8985 * C116 + C8997 + C8997 +
            C8982 * C130) *
               C31138 * C30904 * C30972 * C1072 -
           (C8989 * C1287 + C9126 + C9126 + C8984 * C1305 + C8987 * C1284 +
            C9127 + C9127 + C8983 * C1302 + C8985 * C293 + C9128 + C9128 +
            C8982 * C313) *
               C31138 * C30904 * C30972 * C31228) *
              C31249 +
          ((C8985 * C117 + C8998 + C8998 + C8982 * C131 + C8987 * C478 + C8999 +
            C8999 + C8983 * C498 + C8989 * C483 + C9000 + C9000 +
            C8984 * C503) *
               C31138 * C30904 * C30972 * C1072 -
           (C8989 * C1280 + C9129 + C9129 + C8984 * C1298 + C8987 * C926 +
            C9130 + C9130 + C8983 * C936 + C8985 * C289 + C9131 + C9131 +
            C8982 * C309) *
               C31138 * C30904 * C30972 * C1073 +
           (C8985 * C294 + C9132 + C9132 + C8982 * C314 + C8987 * C1283 +
            C9133 + C9133 + C8983 * C1301 + C8989 * C1288 + C9134 + C9134 +
            C8984 * C1306) *
               C31138 * C30904 * C30972 * C31228) *
              C31222)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((C8985 * C115 + C8992 + C8992 + C8982 * C129 + C8987 * C480 + C8993 +
           C8993 + C8983 * C500 + C8989 * C481 + C8994 + C8994 + C8984 * C501) *
              C31138 * C30904 * C30972 * C1140 -
          (C8989 * C1282 + C9117 + C9117 + C8984 * C1300 + C8987 * C924 +
           C9118 + C9118 + C8983 * C934 + C8985 * C291 + C9119 + C9119 +
           C8982 * C311) *
              C31138 * C30904 * C30972 * C1141 +
          (C8985 * C292 + C9120 + C9120 + C8982 * C312 + C8987 * C1285 + C9121 +
           C9121 + C8983 * C1303 + C8989 * C1286 + C9122 + C9122 +
           C8984 * C1304) *
              C31138 * C30904 * C30972 * C1142 -
          (C8989 * C5624 + C9792 + C9792 + C8984 * C5630 + C8987 * C1696 +
           C9793 + C9793 + C8983 * C1702 + C8985 * C1148 + C9794 + C9794 +
           C8982 * C1160) *
              C31138 * C30904 * C30972 * C1143 +
          (C8985 * C1149 + C9795 + C9795 + C8982 * C1161 + C8987 * C5625 +
           C9796 + C9796 + C8983 * C5631 + C8989 * C5626 + C9797 + C9797 +
           C8984 * C5632) *
              C31138 * C30904 * C30972 * C1144) *
         C30926) /
            (p * q * std::sqrt(p + q));
    d2ee[75] += (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C31138 * C13237 +
                    (C18784 + C18785) * C31138 * C13238) *
                       C30972 * C31013 -
                   ((C18986 + C18987) * C31138 * C13238 +
                    (C18737 * C924 + C18944 + C18944 + C18734 * C934 +
                     C18735 * C291 + C18945 + C18945 + C18733 * C311) *
                        C31138 * C13237) *
                       C30972 * C31020 +
                   ((C18735 * C292 + C18946 + C18946 + C18733 * C312 +
                     C18737 * C1285 + C18947 + C18947 + C18734 * C1303) *
                        C31138 * C13237 +
                    (C18988 + C18989) * C31138 * C13238) *
                       C30972 * C2878) *
                      C30931 +
                  (((C18987 + C18986) * C31138 * C13237 +
                    (C18990 + C18991) * C31138 * C13238) *
                       C30972 * C31020 -
                   ((C18786 + C18787) * C31138 * C13238 +
                    (C18785 + C18784) * C31138 * C13237) *
                       C30972 * C31013 -
                   ((C18992 + C18993) * C31138 * C13238 +
                    (C18989 + C18988) * C31138 * C13237) *
                       C30972 * C2878) *
                      C30940 +
                  (((C18787 + C18786) * C31138 * C13237 +
                    (C18788 + C18789) * C31138 * C13238) *
                       C30972 * C31013 -
                   ((C19336 + C19337) * C31138 * C13238 +
                    (C18991 + C18990) * C31138 * C13237) *
                       C30972 * C31020 +
                   ((C18993 + C18992) * C31138 * C13237 +
                    (C18735 * C296 + C18968 + C18968 + C18733 * C316 +
                     C18737 * C1582 + C18969 + C18969 + C18734 * C1584) *
                        C31138 * C13238) *
                       C30972 * C2878) *
                      C2881)) /
                (p * q * std::sqrt(p + q));
    d2ee[76] += (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
                 (((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                      C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                         C31138 * C13237 +
                     (C18784 + C18785) * C31138 * C13238) *
                        C31198 -
                    ((C19188 + C19189) * C31138 * C13238 +
                     (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                      C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                         C31138 * C13237) *
                        C31059) *
                       C31013 +
                   (((C18735 * C924 + C19674 + C19674 + C18733 * C934 +
                      C18737 * C1282 + C19675 + C19675 + C18734 * C1300) *
                         C31138 * C13237 +
                     (C19698 + C19699) * C31138 * C13238) *
                        C31059 -
                    ((C18986 + C18987) * C31138 * C13238 +
                     (C18737 * C924 + C18944 + C18944 + C18734 * C934 +
                      C18735 * C291 + C18945 + C18945 + C18733 * C311) *
                         C31138 * C13237) *
                        C31198) *
                       C31020 +
                   (((C18735 * C292 + C18946 + C18946 + C18733 * C312 +
                      C18737 * C1285 + C18947 + C18947 + C18734 * C1303) *
                         C31138 * C13237 +
                     (C18988 + C18989) * C31138 * C13238) *
                        C31198 -
                    ((C20442 + C20443) * C31138 * C13238 +
                     (C18737 * C1286 + C20090 + C20090 + C18734 * C1304 +
                      C18735 * C1285 + C20091 + C20091 + C18733 * C1303) *
                         C31138 * C13237) *
                        C31059) *
                       C2878) *
                      C2618 +
                  ((((C19189 + C19188) * C31138 * C13237 +
                     (C19192 + C19193) * C31138 * C13238) *
                        C31059 -
                    ((C18786 + C18787) * C31138 * C13238 +
                     (C18785 + C18784) * C31138 * C13237) *
                        C31198) *
                       C31013 +
                   (((C18987 + C18986) * C31138 * C13237 +
                     (C18990 + C18991) * C31138 * C13238) *
                        C31198 -
                    ((C19700 + C19701) * C31138 * C13238 +
                     (C19699 + C19698) * C31138 * C13237) *
                        C31059) *
                       C31020 +
                   (((C20443 + C20442) * C31138 * C13237 +
                     (C18735 * C1283 + C20436 + C20436 + C18733 * C1301 +
                      C18737 * C1288 + C20437 + C20437 + C18734 * C1306) *
                         C31138 * C13238) *
                        C31059 -
                    ((C18992 + C18993) * C31138 * C13238 +
                     (C18989 + C18988) * C31138 * C13237) *
                        C31198) *
                       C2878) *
                      C30937)) /
                (p * q * std::sqrt(p + q));
    d2ee[77] += (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C31138 * C13237 +
                    (C18784 + C18785) * C31138 * C13238) *
                       C30972 * C31272 -
                   ((C18986 + C18987) * C31138 * C13238 +
                    (C18737 * C924 + C18944 + C18944 + C18734 * C934 +
                     C18735 * C291 + C18945 + C18945 + C18733 * C311) *
                        C31138 * C13237) *
                       C30972 * C31268 +
                   ((C18735 * C292 + C18946 + C18946 + C18733 * C312 +
                     C18737 * C1285 + C18947 + C18947 + C18734 * C1303) *
                        C31138 * C13237 +
                    (C18988 + C18989) * C31138 * C13238) *
                       C30972 * C31258 -
                   ((C20236 + C20237) * C31138 * C13238 +
                    (C18737 * C1696 + C19932 + C19932 + C18734 * C1702 +
                     C18735 * C1148 + C19933 + C19933 + C18733 * C1160) *
                        C31138 * C13237) *
                       C30972 * C31238) *
                      C2618 +
                  (((C18987 + C18986) * C31138 * C13237 +
                    (C18990 + C18991) * C31138 * C13238) *
                       C30972 * C31268 -
                   ((C18786 + C18787) * C31138 * C13238 +
                    (C18785 + C18784) * C31138 * C13237) *
                       C30972 * C31272 -
                   ((C18992 + C18993) * C31138 * C13238 +
                    (C18989 + C18988) * C31138 * C13237) *
                       C30972 * C31258 +
                   ((C20237 + C20236) * C31138 * C13237 +
                    (C18735 * C1146 + C20230 + C20230 + C18733 * C1158 +
                     C18737 * C1698 + C20231 + C20231 + C18734 * C1704) *
                        C31138 * C13238) *
                       C30972 * C31238) *
                      C30937)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C31138 * C13237 +
                    (C18784 + C18785) * C31138 * C13238) *
                       C30972 * C2510 -
                   ((C18986 + C18987) * C31138 * C13238 +
                    (C18737 * C924 + C18944 + C18944 + C18734 * C934 +
                     C18735 * C291 + C18945 + C18945 + C18733 * C311) *
                        C31138 * C13237) *
                       C30972 * C31017) *
                      C31271 +
                  (((C18987 + C18986) * C31138 * C13237 +
                    (C18990 + C18991) * C31138 * C13238) *
                       C30972 * C31017 -
                   ((C18786 + C18787) * C31138 * C13238 +
                    (C18785 + C18784) * C31138 * C13237) *
                       C30972 * C2510) *
                      C31264 +
                  (((C18787 + C18786) * C31138 * C13237 +
                    (C18788 + C18789) * C31138 * C13238) *
                       C30972 * C2510 -
                   ((C19336 + C19337) * C31138 * C13238 +
                    (C18991 + C18990) * C31138 * C13237) *
                       C30972 * C31017) *
                      C31251 +
                  (((C19337 + C19336) * C31138 * C13237 +
                    (C18735 * C297 + C19330 + C19330 + C18733 * C317 +
                     C18737 * C928 + C19331 + C19331 + C18734 * C938) *
                        C31138 * C13238) *
                       C30972 * C31017 -
                   ((C18790 + C18791) * C31138 * C13238 +
                    (C18789 + C18788) * C31138 * C13237) *
                       C30972 * C2510) *
                      C31232)) /
                    (p * q * std::sqrt(p + q)) +
                (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                 (((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                      C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                         C31138 * C13237 +
                     (C18784 + C18785) * C31138 * C13238) *
                        C31266 -
                    ((C19188 + C19189) * C31138 * C13238 +
                     (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                      C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                         C31138 * C13237) *
                        C31255 +
                    ((C18735 * C481 + C19148 + C19148 + C18733 * C501 +
                      C18737 * C2000 + C19149 + C19149 + C18734 * C2012) *
                         C31138 * C13237 +
                     (C19190 + C19191) * C31138 * C13238) *
                        C31231) *
                       C2510 +
                   (((C18735 * C924 + C19674 + C19674 + C18733 * C934 +
                      C18737 * C1282 + C19675 + C19675 + C18734 * C1300) *
                         C31138 * C13237 +
                     (C19698 + C19699) * C31138 * C13238) *
                        C31255 -
                    ((C18986 + C18987) * C31138 * C13238 +
                     (C18737 * C924 + C18944 + C18944 + C18734 * C934 +
                      C18735 * C291 + C18945 + C18945 + C18733 * C311) *
                         C31138 * C13237) *
                        C31266 -
                    ((C21164 + C21165) * C31138 * C13238 +
                     (C18737 * C2400 + C20086 + C20086 + C18734 * C2406 +
                      C18735 * C1282 + C20087 + C20087 + C18733 * C1300) *
                         C31138 * C13237) *
                        C31231) *
                       C31017) *
                      C2618 +
                  ((((C19189 + C19188) * C31138 * C13237 +
                     (C19192 + C19193) * C31138 * C13238) *
                        C31255 -
                    ((C18786 + C18787) * C31138 * C13238 +
                     (C18785 + C18784) * C31138 * C13237) *
                        C31266 -
                    ((C19194 + C19195) * C31138 * C13238 +
                     (C19191 + C19190) * C31138 * C13237) *
                        C31231) *
                       C2510 +
                   (((C18987 + C18986) * C31138 * C13237 +
                     (C18990 + C18991) * C31138 * C13238) *
                        C31266 -
                    ((C19700 + C19701) * C31138 * C13238 +
                     (C19699 + C19698) * C31138 * C13237) *
                        C31255 +
                    ((C21165 + C21164) * C31138 * C13237 +
                     (C18735 * C1280 + C21158 + C21158 + C18733 * C1298 +
                      C18737 * C2402 + C21159 + C21159 + C18734 * C2408) *
                         C31138 * C13238) *
                        C31231) *
                       C31017) *
                      C30937)) /
                    (p * q * std::sqrt(p + q));
    d2ee[78] += (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
                 (((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                      C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                         C31138 * C13237 +
                     (C18784 + C18785) * C31138 * C13238) *
                        C31198 -
                    ((C19188 + C19189) * C31138 * C13238 +
                     (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                      C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                         C31138 * C13237) *
                        C31059) *
                       C2510 +
                   (((C18735 * C924 + C19674 + C19674 + C18733 * C934 +
                      C18737 * C1282 + C19675 + C19675 + C18734 * C1300) *
                         C31138 * C13237 +
                     (C19698 + C19699) * C31138 * C13238) *
                        C31059 -
                    ((C18986 + C18987) * C31138 * C13238 +
                     (C18737 * C924 + C18944 + C18944 + C18734 * C934 +
                      C18735 * C291 + C18945 + C18945 + C18733 * C311) *
                         C31138 * C13237) *
                        C31198) *
                       C31017) *
                      C30931 +
                  ((((C19189 + C19188) * C31138 * C13237 +
                     (C19192 + C19193) * C31138 * C13238) *
                        C31059 -
                    ((C18786 + C18787) * C31138 * C13238 +
                     (C18785 + C18784) * C31138 * C13237) *
                        C31198) *
                       C2510 +
                   (((C18987 + C18986) * C31138 * C13237 +
                     (C18990 + C18991) * C31138 * C13238) *
                        C31198 -
                    ((C19700 + C19701) * C31138 * C13238 +
                     (C19699 + C19698) * C31138 * C13237) *
                        C31059) *
                       C31017) *
                      C30940 +
                  ((((C18787 + C18786) * C31138 * C13237 +
                     (C18788 + C18789) * C31138 * C13238) *
                        C31198 -
                    ((C19478 + C19479) * C31138 * C13238 +
                     (C19193 + C19192) * C31138 * C13237) *
                        C31059) *
                       C2510 +
                   (((C19701 + C19700) * C31138 * C13237 +
                     (C18735 * C927 + C19688 + C19688 + C18733 * C937 +
                      C18737 * C2168 + C19689 + C19689 + C18734 * C2170) *
                         C31138 * C13238) *
                        C31059 -
                    ((C19336 + C19337) * C31138 * C13238 +
                     (C18991 + C18990) * C31138 * C13237) *
                        C31198) *
                       C31017) *
                      C2881)) /
                (p * q * std::sqrt(p + q));
    d2ee[79] += (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C31138 * C13237 +
                    (C18784 + C18785) * C31138 * C13238) *
                       C30972 * C2510 -
                   ((C18986 + C18987) * C31138 * C13238 +
                    (C18737 * C924 + C18944 + C18944 + C18734 * C934 +
                     C18735 * C291 + C18945 + C18945 + C18733 * C311) *
                        C31138 * C13237) *
                       C30972 * C31017) *
                      C31271 +
                  (((C18987 + C18986) * C31138 * C13237 +
                    (C18990 + C18991) * C31138 * C13238) *
                       C30972 * C31017 -
                   ((C18786 + C18787) * C31138 * C13238 +
                    (C18785 + C18784) * C31138 * C13237) *
                       C30972 * C2510) *
                      C31264 +
                  (((C18787 + C18786) * C31138 * C13237 +
                    (C18788 + C18789) * C31138 * C13238) *
                       C30972 * C2510 -
                   ((C19336 + C19337) * C31138 * C13238 +
                    (C18991 + C18990) * C31138 * C13237) *
                       C30972 * C31017) *
                      C31251 +
                  (((C19337 + C19336) * C31138 * C13237 +
                    (C18735 * C297 + C19330 + C19330 + C18733 * C317 +
                     C18737 * C928 + C19331 + C19331 + C18734 * C938) *
                        C31138 * C13238) *
                       C30972 * C31017 -
                   ((C18790 + C18791) * C31138 * C13238 +
                    (C18789 + C18788) * C31138 * C13237) *
                       C30972 * C2510) *
                      C31232)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C31138 * C13237 +
                    (C18784 + C18785) * C31138 * C13238) *
                       C30972 * C31272 -
                   ((C18986 + C18987) * C31138 * C13238 +
                    (C18737 * C924 + C18944 + C18944 + C18734 * C934 +
                     C18735 * C291 + C18945 + C18945 + C18733 * C311) *
                        C31138 * C13237) *
                       C30972 * C31268 +
                   ((C18735 * C292 + C18946 + C18946 + C18733 * C312 +
                     C18737 * C1285 + C18947 + C18947 + C18734 * C1303) *
                        C31138 * C13237 +
                    (C18988 + C18989) * C31138 * C13238) *
                       C30972 * C31258 -
                   ((C20236 + C20237) * C31138 * C13238 +
                    (C18737 * C1696 + C19932 + C19932 + C18734 * C1702 +
                     C18735 * C1148 + C19933 + C19933 + C18733 * C1160) *
                        C31138 * C13237) *
                       C30972 * C31238) *
                      C2618 +
                  (((C18987 + C18986) * C31138 * C13237 +
                    (C18990 + C18991) * C31138 * C13238) *
                       C30972 * C31268 -
                   ((C18786 + C18787) * C31138 * C13238 +
                    (C18785 + C18784) * C31138 * C13237) *
                       C30972 * C31272 -
                   ((C18992 + C18993) * C31138 * C13238 +
                    (C18989 + C18988) * C31138 * C13237) *
                       C30972 * C31258 +
                   ((C20237 + C20236) * C31138 * C13237 +
                    (C18735 * C1146 + C20230 + C20230 + C18733 * C1158 +
                     C18737 * C1698 + C20231 + C20231 + C18734 * C1704) *
                        C31138 * C13238) *
                       C30972 * C31238) *
                      C30937)) /
                    (p * q * std::sqrt(p + q));
    d2ee[80] += (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
                 (((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                      C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                         C31138 * C13237 +
                     (C18784 + C18785) * C31138 * C13238) *
                        C3272 -
                    ((C19188 + C19189) * C31138 * C13238 +
                     (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                      C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                         C31138 * C13237) *
                        C31059) *
                       C31013 +
                   (((C18735 * C924 + C19674 + C19674 + C18733 * C934 +
                      C18737 * C1282 + C19675 + C19675 + C18734 * C1300) *
                         C31138 * C13237 +
                     (C19698 + C19699) * C31138 * C13238) *
                        C31059 -
                    ((C18986 + C18987) * C31138 * C13238 +
                     (C18737 * C924 + C18944 + C18944 + C18734 * C934 +
                      C18735 * C291 + C18945 + C18945 + C18733 * C311) *
                         C31138 * C13237) *
                        C3272) *
                       C31020 +
                   (((C18735 * C292 + C18946 + C18946 + C18733 * C312 +
                      C18737 * C1285 + C18947 + C18947 + C18734 * C1303) *
                         C31138 * C13237 +
                     (C18988 + C18989) * C31138 * C13238) *
                        C3272 -
                    ((C20442 + C20443) * C31138 * C13238 +
                     (C18737 * C1286 + C20090 + C20090 + C18734 * C1304 +
                      C18735 * C1285 + C20091 + C20091 + C18733 * C1303) *
                         C31138 * C13237) *
                        C31059) *
                       C2878) *
                      C31183 +
                  ((((C19189 + C19188) * C31138 * C13237 +
                     (C19192 + C19193) * C31138 * C13238) *
                        C31059 -
                    ((C18786 + C18787) * C31138 * C13238 +
                     (C18785 + C18784) * C31138 * C13237) *
                        C3272) *
                       C31013 +
                   (((C18987 + C18986) * C31138 * C13237 +
                     (C18990 + C18991) * C31138 * C13238) *
                        C3272 -
                    ((C19700 + C19701) * C31138 * C13238 +
                     (C19699 + C19698) * C31138 * C13237) *
                        C31059) *
                       C31020 +
                   (((C20443 + C20442) * C31138 * C13237 +
                     (C18735 * C1283 + C20436 + C20436 + C18733 * C1301 +
                      C18737 * C1288 + C20437 + C20437 + C18734 * C1306) *
                         C31138 * C13238) *
                        C31059 -
                    ((C18992 + C18993) * C31138 * C13238 +
                     (C18989 + C18988) * C31138 * C13237) *
                        C3272) *
                       C2878) *
                      C30937)) /
                (p * q * std::sqrt(p + q));
    d2ee[81] += (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C31138 * C13237 +
                    (C18784 + C18785) * C31138 * C13238) *
                       C31055 -
                   ((C19188 + C19189) * C31138 * C13238 +
                    (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                     C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                        C31138 * C13237) *
                       C31062 +
                   ((C18735 * C481 + C19148 + C19148 + C18733 * C501 +
                     C18737 * C2000 + C19149 + C19149 + C18734 * C2012) *
                        C31138 * C13237 +
                    (C19190 + C19191) * C31138 * C13238) *
                       C3780) *
                      C31013 +
                  (((C18735 * C924 + C19674 + C19674 + C18733 * C934 +
                     C18737 * C1282 + C19675 + C19675 + C18734 * C1300) *
                        C31138 * C13237 +
                    (C19698 + C19699) * C31138 * C13238) *
                       C31062 -
                   ((C18986 + C18987) * C31138 * C13238 +
                    (C18737 * C924 + C18944 + C18944 + C18734 * C934 +
                     C18735 * C291 + C18945 + C18945 + C18733 * C311) *
                        C31138 * C13237) *
                       C31055 -
                   ((C21164 + C21165) * C31138 * C13238 +
                    (C18737 * C2400 + C20086 + C20086 + C18734 * C2406 +
                     C18735 * C1282 + C20087 + C20087 + C18733 * C1300) *
                        C31138 * C13237) *
                       C3780) *
                      C31020 +
                  (((C18735 * C292 + C18946 + C18946 + C18733 * C312 +
                     C18737 * C1285 + C18947 + C18947 + C18734 * C1303) *
                        C31138 * C13237 +
                    (C18988 + C18989) * C31138 * C13238) *
                       C31055 -
                   ((C20442 + C20443) * C31138 * C13238 +
                    (C18737 * C1286 + C20090 + C20090 + C18734 * C1304 +
                     C18735 * C1285 + C20091 + C20091 + C18733 * C1303) *
                        C31138 * C13237) *
                       C31062 +
                   ((C18735 * C1286 + C20092 + C20092 + C18733 * C1304 +
                     C18737 * C6307 + C20093 + C20093 + C18734 * C6313) *
                        C31138 * C13237 +
                    (C18735 * C1287 + C20094 + C20094 + C18733 * C1305 +
                     C18737 * C6572 + C20095 + C20095 + C18734 * C6574) *
                        C31138 * C13238) *
                       C3780) *
                      C2878) *
                 C30926) /
                (p * q * std::sqrt(p + q));
    d2ee[82] += (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C31138 * C13237 +
                    (C18784 + C18785) * C31138 * C13238) *
                       C3272 -
                   ((C19188 + C19189) * C31138 * C13238 +
                    (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                     C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                        C31138 * C13237) *
                       C31059) *
                      C31272 +
                  (((C18735 * C924 + C19674 + C19674 + C18733 * C934 +
                     C18737 * C1282 + C19675 + C19675 + C18734 * C1300) *
                        C31138 * C13237 +
                    (C19698 + C19699) * C31138 * C13238) *
                       C31059 -
                   ((C18986 + C18987) * C31138 * C13238 +
                    (C18737 * C924 + C18944 + C18944 + C18734 * C934 +
                     C18735 * C291 + C18945 + C18945 + C18733 * C311) *
                        C31138 * C13237) *
                       C3272) *
                      C31268 +
                  (((C18735 * C292 + C18946 + C18946 + C18733 * C312 +
                     C18737 * C1285 + C18947 + C18947 + C18734 * C1303) *
                        C31138 * C13237 +
                    (C18988 + C18989) * C31138 * C13238) *
                       C3272 -
                   ((C20442 + C20443) * C31138 * C13238 +
                    (C18737 * C1286 + C20090 + C20090 + C18734 * C1304 +
                     C18735 * C1285 + C20091 + C20091 + C18733 * C1303) *
                        C31138 * C13237) *
                       C31059) *
                      C31258 +
                  (((C18735 * C1696 + C20574 + C20574 + C18733 * C1702 +
                     C18737 * C5624 + C20575 + C20575 + C18734 * C5630) *
                        C31138 * C13237 +
                    (C18735 * C1697 + C20576 + C20576 + C18733 * C1703 +
                     C18737 * C6465 + C20577 + C20577 + C18734 * C6467) *
                        C31138 * C13238) *
                       C31059 -
                   ((C20236 + C20237) * C31138 * C13238 +
                    (C18737 * C1696 + C19932 + C19932 + C18734 * C1702 +
                     C18735 * C1148 + C19933 + C19933 + C18733 * C1160) *
                        C31138 * C13237) *
                       C3272) *
                      C31238) *
                 C30926) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 (((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                      C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                         C31138 * C13237 +
                     (C18784 + C18785) * C31138 * C13238) *
                        C3272 -
                    ((C19188 + C19189) * C31138 * C13238 +
                     (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                      C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                         C31138 * C13237) *
                        C31059) *
                       C2510 +
                   (((C18735 * C924 + C19674 + C19674 + C18733 * C934 +
                      C18737 * C1282 + C19675 + C19675 + C18734 * C1300) *
                         C31138 * C13237 +
                     (C19698 + C19699) * C31138 * C13238) *
                        C31059 -
                    ((C18986 + C18987) * C31138 * C13238 +
                     (C18737 * C924 + C18944 + C18944 + C18734 * C934 +
                      C18735 * C291 + C18945 + C18945 + C18733 * C311) *
                         C31138 * C13237) *
                        C3272) *
                       C31017) *
                      C31262 +
                  ((((C19189 + C19188) * C31138 * C13237 +
                     (C19192 + C19193) * C31138 * C13238) *
                        C31059 -
                    ((C18786 + C18787) * C31138 * C13238 +
                     (C18785 + C18784) * C31138 * C13237) *
                        C3272) *
                       C2510 +
                   (((C18987 + C18986) * C31138 * C13237 +
                     (C18990 + C18991) * C31138 * C13238) *
                        C3272 -
                    ((C19700 + C19701) * C31138 * C13238 +
                     (C19699 + C19698) * C31138 * C13237) *
                        C31059) *
                       C31017) *
                      C31249 +
                  ((((C18787 + C18786) * C31138 * C13237 +
                     (C18788 + C18789) * C31138 * C13238) *
                        C3272 -
                    ((C19478 + C19479) * C31138 * C13238 +
                     (C19193 + C19192) * C31138 * C13237) *
                        C31059) *
                       C2510 +
                   (((C19701 + C19700) * C31138 * C13237 +
                     (C18735 * C927 + C19688 + C19688 + C18733 * C937 +
                      C18737 * C2168 + C19689 + C19689 + C18734 * C2170) *
                         C31138 * C13238) *
                        C31059 -
                    ((C19336 + C19337) * C31138 * C13238 +
                     (C18991 + C18990) * C31138 * C13237) *
                        C3272) *
                       C31017) *
                      C31222)) /
                    (p * q * std::sqrt(p + q)) +
                (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C31138 * C13237 +
                    (C18784 + C18785) * C31138 * C13238) *
                       C31273 -
                   ((C19188 + C19189) * C31138 * C13238 +
                    (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                     C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                        C31138 * C13237) *
                       C31270 +
                   ((C18735 * C481 + C19148 + C19148 + C18733 * C501 +
                     C18737 * C2000 + C19149 + C19149 + C18734 * C2012) *
                        C31138 * C13237 +
                    (C19190 + C19191) * C31138 * C13238) *
                       C31261 -
                   ((C21306 + C21307) * C31138 * C13238 +
                    (C18737 * C2001 + C20954 + C20954 + C18734 * C2013 +
                     C18735 * C2000 + C20955 + C20955 + C18733 * C2012) *
                        C31138 * C13237) *
                       C31244) *
                      C2510 +
                  (((C18735 * C924 + C19674 + C19674 + C18733 * C934 +
                     C18737 * C1282 + C19675 + C19675 + C18734 * C1300) *
                        C31138 * C13237 +
                    (C19698 + C19699) * C31138 * C13238) *
                       C31270 -
                   ((C18986 + C18987) * C31138 * C13238 +
                    (C18737 * C924 + C18944 + C18944 + C18734 * C934 +
                     C18735 * C291 + C18945 + C18945 + C18733 * C311) *
                        C31138 * C13237) *
                       C31273 -
                   ((C21164 + C21165) * C31138 * C13238 +
                    (C18737 * C2400 + C20086 + C20086 + C18734 * C2406 +
                     C18735 * C1282 + C20087 + C20087 + C18733 * C1300) *
                        C31138 * C13237) *
                       C31261 +
                   ((C18735 * C2400 + C21438 + C21438 + C18733 * C2406 +
                     C18737 * C6308 + C21439 + C21439 + C18734 * C6314) *
                        C31138 * C13237 +
                    (C18735 * C2401 + C21440 + C21440 + C18733 * C2407 +
                     C18737 * C10707 + C21441 + C21441 + C18734 * C10709) *
                        C31138 * C13238) *
                       C31244) *
                      C31017) *
                 C30926) /
                    (p * q * std::sqrt(p + q));
    d2ee[83] += (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
                 (((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                      C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                         C31138 * C13237 +
                     (C18784 + C18785) * C31138 * C13238) *
                        C31055 -
                    ((C19188 + C19189) * C31138 * C13238 +
                     (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                      C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                         C31138 * C13237) *
                        C31062 +
                    ((C18735 * C481 + C19148 + C19148 + C18733 * C501 +
                      C18737 * C2000 + C19149 + C19149 + C18734 * C2012) *
                         C31138 * C13237 +
                     (C19190 + C19191) * C31138 * C13238) *
                        C3780) *
                       C2510 +
                   (((C18735 * C924 + C19674 + C19674 + C18733 * C934 +
                      C18737 * C1282 + C19675 + C19675 + C18734 * C1300) *
                         C31138 * C13237 +
                     (C19698 + C19699) * C31138 * C13238) *
                        C31062 -
                    ((C18986 + C18987) * C31138 * C13238 +
                     (C18737 * C924 + C18944 + C18944 + C18734 * C934 +
                      C18735 * C291 + C18945 + C18945 + C18733 * C311) *
                         C31138 * C13237) *
                        C31055 -
                    ((C21164 + C21165) * C31138 * C13238 +
                     (C18737 * C2400 + C20086 + C20086 + C18734 * C2406 +
                      C18735 * C1282 + C20087 + C20087 + C18733 * C1300) *
                         C31138 * C13237) *
                        C3780) *
                       C31017) *
                      C31183 +
                  ((((C19189 + C19188) * C31138 * C13237 +
                     (C19192 + C19193) * C31138 * C13238) *
                        C31062 -
                    ((C18786 + C18787) * C31138 * C13238 +
                     (C18785 + C18784) * C31138 * C13237) *
                        C31055 -
                    ((C19194 + C19195) * C31138 * C13238 +
                     (C19191 + C19190) * C31138 * C13237) *
                        C3780) *
                       C2510 +
                   (((C18987 + C18986) * C31138 * C13237 +
                     (C18990 + C18991) * C31138 * C13238) *
                        C31055 -
                    ((C19700 + C19701) * C31138 * C13238 +
                     (C19699 + C19698) * C31138 * C13237) *
                        C31062 +
                    ((C21165 + C21164) * C31138 * C13237 +
                     (C18735 * C1280 + C21158 + C21158 + C18733 * C1298 +
                      C18737 * C2402 + C21159 + C21159 + C18734 * C2408) *
                         C31138 * C13238) *
                        C3780) *
                       C31017) *
                      C30937)) /
                (p * q * std::sqrt(p + q));
    d2ee[84] += (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                 (((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                      C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                         C31138 * C13237 +
                     (C18784 + C18785) * C31138 * C13238) *
                        C3272 -
                    ((C19188 + C19189) * C31138 * C13238 +
                     (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                      C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                         C31138 * C13237) *
                        C31059) *
                       C2510 +
                   (((C18735 * C924 + C19674 + C19674 + C18733 * C934 +
                      C18737 * C1282 + C19675 + C19675 + C18734 * C1300) *
                         C31138 * C13237 +
                     (C19698 + C19699) * C31138 * C13238) *
                        C31059 -
                    ((C18986 + C18987) * C31138 * C13238 +
                     (C18737 * C924 + C18944 + C18944 + C18734 * C934 +
                      C18735 * C291 + C18945 + C18945 + C18733 * C311) *
                         C31138 * C13237) *
                        C3272) *
                       C31017) *
                      C31262 +
                  ((((C19189 + C19188) * C31138 * C13237 +
                     (C19192 + C19193) * C31138 * C13238) *
                        C31059 -
                    ((C18786 + C18787) * C31138 * C13238 +
                     (C18785 + C18784) * C31138 * C13237) *
                        C3272) *
                       C2510 +
                   (((C18987 + C18986) * C31138 * C13237 +
                     (C18990 + C18991) * C31138 * C13238) *
                        C3272 -
                    ((C19700 + C19701) * C31138 * C13238 +
                     (C19699 + C19698) * C31138 * C13237) *
                        C31059) *
                       C31017) *
                      C31249 +
                  ((((C18787 + C18786) * C31138 * C13237 +
                     (C18788 + C18789) * C31138 * C13238) *
                        C3272 -
                    ((C19478 + C19479) * C31138 * C13238 +
                     (C19193 + C19192) * C31138 * C13237) *
                        C31059) *
                       C2510 +
                   (((C19701 + C19700) * C31138 * C13237 +
                     (C18735 * C927 + C19688 + C19688 + C18733 * C937 +
                      C18737 * C2168 + C19689 + C19689 + C18734 * C2170) *
                         C31138 * C13238) *
                        C31059 -
                    ((C19336 + C19337) * C31138 * C13238 +
                     (C18991 + C18990) * C31138 * C13237) *
                        C3272) *
                       C31017) *
                      C31222)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C31138 * C13237 +
                    (C18784 + C18785) * C31138 * C13238) *
                       C3272 -
                   ((C19188 + C19189) * C31138 * C13238 +
                    (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                     C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                        C31138 * C13237) *
                       C31059) *
                      C31272 +
                  (((C18735 * C924 + C19674 + C19674 + C18733 * C934 +
                     C18737 * C1282 + C19675 + C19675 + C18734 * C1300) *
                        C31138 * C13237 +
                    (C19698 + C19699) * C31138 * C13238) *
                       C31059 -
                   ((C18986 + C18987) * C31138 * C13238 +
                    (C18737 * C924 + C18944 + C18944 + C18734 * C934 +
                     C18735 * C291 + C18945 + C18945 + C18733 * C311) *
                        C31138 * C13237) *
                       C3272) *
                      C31268 +
                  (((C18735 * C292 + C18946 + C18946 + C18733 * C312 +
                     C18737 * C1285 + C18947 + C18947 + C18734 * C1303) *
                        C31138 * C13237 +
                    (C18988 + C18989) * C31138 * C13238) *
                       C3272 -
                   ((C20442 + C20443) * C31138 * C13238 +
                    (C18737 * C1286 + C20090 + C20090 + C18734 * C1304 +
                     C18735 * C1285 + C20091 + C20091 + C18733 * C1303) *
                        C31138 * C13237) *
                       C31059) *
                      C31258 +
                  (((C18735 * C1696 + C20574 + C20574 + C18733 * C1702 +
                     C18737 * C5624 + C20575 + C20575 + C18734 * C5630) *
                        C31138 * C13237 +
                    (C18735 * C1697 + C20576 + C20576 + C18733 * C1703 +
                     C18737 * C6465 + C20577 + C20577 + C18734 * C6467) *
                        C31138 * C13238) *
                       C31059 -
                   ((C20236 + C20237) * C31138 * C13238 +
                    (C18737 * C1696 + C19932 + C19932 + C18734 * C1702 +
                     C18735 * C1148 + C19933 + C19933 + C18733 * C1160) *
                        C31138 * C13237) *
                       C3272) *
                      C31238) *
                 C30926) /
                    (p * q * std::sqrt(p + q));
    d2ee[85] += (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C31138 * C13237 +
                    (C18784 + C18785) * C31138 * C13238) *
                       C30972 * C1414 -
                   ((C18986 + C18987) * C31138 * C13238 +
                    (C18737 * C924 + C18944 + C18944 + C18734 * C934 +
                     C18735 * C291 + C18945 + C18945 + C18733 * C311) *
                        C31138 * C13237) *
                       C30972 * C1415 +
                   ((C18735 * C292 + C18946 + C18946 + C18733 * C312 +
                     C18737 * C1285 + C18947 + C18947 + C18734 * C1303) *
                        C31138 * C13237 +
                    (C18988 + C18989) * C31138 * C13238) *
                       C30972 * C1416 -
                   ((C20236 + C20237) * C31138 * C13238 +
                    (C18737 * C1696 + C19932 + C19932 + C18734 * C1702 +
                     C18735 * C1148 + C19933 + C19933 + C18733 * C1160) *
                        C31138 * C13237) *
                       C30972 * C31238) *
                      C31183 +
                  (((C18987 + C18986) * C31138 * C13237 +
                    (C18990 + C18991) * C31138 * C13238) *
                       C30972 * C1415 -
                   ((C18786 + C18787) * C31138 * C13238 +
                    (C18785 + C18784) * C31138 * C13237) *
                       C30972 * C1414 -
                   ((C18992 + C18993) * C31138 * C13238 +
                    (C18989 + C18988) * C31138 * C13237) *
                       C30972 * C1416 +
                   ((C20237 + C20236) * C31138 * C13237 +
                    (C18735 * C1146 + C20230 + C20230 + C18733 * C1158 +
                     C18737 * C1698 + C20231 + C20231 + C18734 * C1704) *
                        C31138 * C13238) *
                       C30972 * C31238) *
                      C30937)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C31138 * C13237 +
                    (C18784 + C18785) * C31138 * C13238) *
                       C30972 * C31197 -
                   ((C18986 + C18987) * C31138 * C13238 +
                    (C18737 * C924 + C18944 + C18944 + C18734 * C934 +
                     C18735 * C291 + C18945 + C18945 + C18733 * C311) *
                        C31138 * C13237) *
                       C30972 * C31017) *
                      C654 +
                  (((C18987 + C18986) * C31138 * C13237 +
                    (C18990 + C18991) * C31138 * C13238) *
                       C30972 * C31017 -
                   ((C18786 + C18787) * C31138 * C13238 +
                    (C18785 + C18784) * C31138 * C13237) *
                       C30972 * C31197) *
                      C655 +
                  (((C18787 + C18786) * C31138 * C13237 +
                    (C18788 + C18789) * C31138 * C13238) *
                       C30972 * C31197 -
                   ((C19336 + C19337) * C31138 * C13238 +
                    (C18991 + C18990) * C31138 * C13237) *
                       C30972 * C31017) *
                      C656 +
                  (((C19337 + C19336) * C31138 * C13237 +
                    (C18735 * C297 + C19330 + C19330 + C18733 * C317 +
                     C18737 * C928 + C19331 + C19331 + C18734 * C938) *
                        C31138 * C13238) *
                       C30972 * C31017 -
                   ((C18790 + C18791) * C31138 * C13238 +
                    (C18789 + C18788) * C31138 * C13237) *
                       C30972 * C31197) *
                      C31232)) /
                    (p * q * std::sqrt(p + q)) +
                (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                 (((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                      C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                         C31138 * C13237 +
                     (C18784 + C18785) * C31138 * C13238) *
                        C1818 -
                    ((C19188 + C19189) * C31138 * C13238 +
                     (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                      C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                         C31138 * C13237) *
                        C1819 +
                    ((C18735 * C481 + C19148 + C19148 + C18733 * C501 +
                      C18737 * C2000 + C19149 + C19149 + C18734 * C2012) *
                         C31138 * C13237 +
                     (C19190 + C19191) * C31138 * C13238) *
                        C31231) *
                       C31197 +
                   (((C18735 * C924 + C19674 + C19674 + C18733 * C934 +
                      C18737 * C1282 + C19675 + C19675 + C18734 * C1300) *
                         C31138 * C13237 +
                     (C19698 + C19699) * C31138 * C13238) *
                        C1819 -
                    ((C18986 + C18987) * C31138 * C13238 +
                     (C18737 * C924 + C18944 + C18944 + C18734 * C934 +
                      C18735 * C291 + C18945 + C18945 + C18733 * C311) *
                         C31138 * C13237) *
                        C1818 -
                    ((C21164 + C21165) * C31138 * C13238 +
                     (C18737 * C2400 + C20086 + C20086 + C18734 * C2406 +
                      C18735 * C1282 + C20087 + C20087 + C18733 * C1300) *
                         C31138 * C13237) *
                        C31231) *
                       C31017) *
                      C31183 +
                  ((((C19189 + C19188) * C31138 * C13237 +
                     (C19192 + C19193) * C31138 * C13238) *
                        C1819 -
                    ((C18786 + C18787) * C31138 * C13238 +
                     (C18785 + C18784) * C31138 * C13237) *
                        C1818 -
                    ((C19194 + C19195) * C31138 * C13238 +
                     (C19191 + C19190) * C31138 * C13237) *
                        C31231) *
                       C31197 +
                   (((C18987 + C18986) * C31138 * C13237 +
                     (C18990 + C18991) * C31138 * C13238) *
                        C1818 -
                    ((C19700 + C19701) * C31138 * C13238 +
                     (C19699 + C19698) * C31138 * C13237) *
                        C1819 +
                    ((C21165 + C21164) * C31138 * C13237 +
                     (C18735 * C1280 + C21158 + C21158 + C18733 * C1298 +
                      C18737 * C2402 + C21159 + C21159 + C18734 * C2408) *
                         C31138 * C13238) *
                        C31231) *
                       C31017) *
                      C30937)) /
                    (p * q * std::sqrt(p + q));
    d2ee[86] += (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C31138 * C13237 +
                    (C18784 + C18785) * C31138 * C13238) *
                       C31198 -
                   ((C19188 + C19189) * C31138 * C13238 +
                    (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                     C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                        C31138 * C13237) *
                       C31059) *
                      C1414 +
                  (((C18735 * C924 + C19674 + C19674 + C18733 * C934 +
                     C18737 * C1282 + C19675 + C19675 + C18734 * C1300) *
                        C31138 * C13237 +
                    (C19698 + C19699) * C31138 * C13238) *
                       C31059 -
                   ((C18986 + C18987) * C31138 * C13238 +
                    (C18737 * C924 + C18944 + C18944 + C18734 * C934 +
                     C18735 * C291 + C18945 + C18945 + C18733 * C311) *
                        C31138 * C13237) *
                       C31198) *
                      C1415 +
                  (((C18735 * C292 + C18946 + C18946 + C18733 * C312 +
                     C18737 * C1285 + C18947 + C18947 + C18734 * C1303) *
                        C31138 * C13237 +
                    (C18988 + C18989) * C31138 * C13238) *
                       C31198 -
                   ((C20442 + C20443) * C31138 * C13238 +
                    (C18737 * C1286 + C20090 + C20090 + C18734 * C1304 +
                     C18735 * C1285 + C20091 + C20091 + C18733 * C1303) *
                        C31138 * C13237) *
                       C31059) *
                      C1416 +
                  (((C18735 * C1696 + C20574 + C20574 + C18733 * C1702 +
                     C18737 * C5624 + C20575 + C20575 + C18734 * C5630) *
                        C31138 * C13237 +
                    (C18735 * C1697 + C20576 + C20576 + C18733 * C1703 +
                     C18737 * C6465 + C20577 + C20577 + C18734 * C6467) *
                        C31138 * C13238) *
                       C31059 -
                   ((C20236 + C20237) * C31138 * C13238 +
                    (C18737 * C1696 + C19932 + C19932 + C18734 * C1702 +
                     C18735 * C1148 + C19933 + C19933 + C18733 * C1160) *
                        C31138 * C13237) *
                       C31198) *
                      C31238) *
                 C30926) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 (((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                      C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                         C31138 * C13237 +
                     (C18784 + C18785) * C31138 * C13238) *
                        C31198 -
                    ((C19188 + C19189) * C31138 * C13238 +
                     (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                      C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                         C31138 * C13237) *
                        C31059) *
                       C31197 +
                   (((C18735 * C924 + C19674 + C19674 + C18733 * C934 +
                      C18737 * C1282 + C19675 + C19675 + C18734 * C1300) *
                         C31138 * C13237 +
                     (C19698 + C19699) * C31138 * C13238) *
                        C31059 -
                    ((C18986 + C18987) * C31138 * C13238 +
                     (C18737 * C924 + C18944 + C18944 + C18734 * C934 +
                      C18735 * C291 + C18945 + C18945 + C18733 * C311) *
                         C31138 * C13237) *
                        C31198) *
                       C31017) *
                      C286 +
                  ((((C19189 + C19188) * C31138 * C13237 +
                     (C19192 + C19193) * C31138 * C13238) *
                        C31059 -
                    ((C18786 + C18787) * C31138 * C13238 +
                     (C18785 + C18784) * C31138 * C13237) *
                        C31198) *
                       C31197 +
                   (((C18987 + C18986) * C31138 * C13237 +
                     (C18990 + C18991) * C31138 * C13238) *
                        C31198 -
                    ((C19700 + C19701) * C31138 * C13238 +
                     (C19699 + C19698) * C31138 * C13237) *
                        C31059) *
                       C31017) *
                      C287 +
                  ((((C18787 + C18786) * C31138 * C13237 +
                     (C18788 + C18789) * C31138 * C13238) *
                        C31198 -
                    ((C19478 + C19479) * C31138 * C13238 +
                     (C19193 + C19192) * C31138 * C13237) *
                        C31059) *
                       C31197 +
                   (((C19701 + C19700) * C31138 * C13237 +
                     (C18735 * C927 + C19688 + C19688 + C18733 * C937 +
                      C18737 * C2168 + C19689 + C19689 + C18734 * C2170) *
                         C31138 * C13238) *
                        C31059 -
                    ((C19336 + C19337) * C31138 * C13238 +
                     (C18991 + C18990) * C31138 * C13237) *
                        C31198) *
                       C31017) *
                      C31222)) /
                    (p * q * std::sqrt(p + q)) +
                (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C31138 * C13237 +
                    (C18784 + C18785) * C31138 * C13238) *
                       C2282 -
                   ((C19188 + C19189) * C31138 * C13238 +
                    (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                     C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                        C31138 * C13237) *
                       C2283 +
                   ((C18735 * C481 + C19148 + C19148 + C18733 * C501 +
                     C18737 * C2000 + C19149 + C19149 + C18734 * C2012) *
                        C31138 * C13237 +
                    (C19190 + C19191) * C31138 * C13238) *
                       C2284 -
                   ((C21306 + C21307) * C31138 * C13238 +
                    (C18737 * C2001 + C20954 + C20954 + C18734 * C2013 +
                     C18735 * C2000 + C20955 + C20955 + C18733 * C2012) *
                        C31138 * C13237) *
                       C31244) *
                      C31197 +
                  (((C18735 * C924 + C19674 + C19674 + C18733 * C934 +
                     C18737 * C1282 + C19675 + C19675 + C18734 * C1300) *
                        C31138 * C13237 +
                    (C19698 + C19699) * C31138 * C13238) *
                       C2283 -
                   ((C18986 + C18987) * C31138 * C13238 +
                    (C18737 * C924 + C18944 + C18944 + C18734 * C934 +
                     C18735 * C291 + C18945 + C18945 + C18733 * C311) *
                        C31138 * C13237) *
                       C2282 -
                   ((C21164 + C21165) * C31138 * C13238 +
                    (C18737 * C2400 + C20086 + C20086 + C18734 * C2406 +
                     C18735 * C1282 + C20087 + C20087 + C18733 * C1300) *
                        C31138 * C13237) *
                       C2284 +
                   ((C18735 * C2400 + C21438 + C21438 + C18733 * C2406 +
                     C18737 * C6308 + C21439 + C21439 + C18734 * C6314) *
                        C31138 * C13237 +
                    (C18735 * C2401 + C21440 + C21440 + C18733 * C2407 +
                     C18737 * C10707 + C21441 + C21441 + C18734 * C10709) *
                        C31138 * C13238) *
                       C31244) *
                      C31017) *
                 C30926) /
                    (p * q * std::sqrt(p + q));
    d2ee[87] += (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                     (((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                        C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                           C31138 * C13237 +
                       (C18784 + C18785) * C31138 * C13238) *
                          C30972 * C30954 * C108 -
                      ((C18786 + C18787) * C31138 * C13238 +
                       (C18785 + C18784) * C31138 * C13237) *
                          C30972 * C30954 * C109 +
                      ((C18787 + C18786) * C31138 * C13237 +
                       (C18788 + C18789) * C31138 * C13238) *
                          C30972 * C30954 * C110 -
                      ((C18790 + C18791) * C31138 * C13238 +
                       (C18789 + C18788) * C31138 * C13237) *
                          C30972 * C30954 * C111 +
                      ((C18791 + C18790) * C31138 * C13237 +
                       (C18735 * C120 + C18766 + C18766 + C18733 * C134 +
                        C18737 * C768 + C18767 + C18767 + C18734 * C770) *
                           C31138 * C13238) *
                          C30972 * C30954 * C112) +
                 std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                     ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                         C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                            C31138 * C13237 +
                        (C18784 + C18785) * C31138 * C13238) *
                           C30972 * C31265 -
                       ((C18986 + C18987) * C31138 * C13238 +
                        (C18737 * C924 + C18944 + C18944 + C18734 * C934 +
                         C18735 * C291 + C18945 + C18945 + C18733 * C311) *
                            C31138 * C13237) *
                           C30972 * C31253 +
                       ((C18735 * C292 + C18946 + C18946 + C18733 * C312 +
                         C18737 * C1285 + C18947 + C18947 + C18734 * C1303) *
                            C31138 * C13237 +
                        (C18988 + C18989) * C31138 * C13238) *
                           C30972 * C31228) *
                          C286 +
                      (((C18987 + C18986) * C31138 * C13237 +
                        (C18990 + C18991) * C31138 * C13238) *
                           C30972 * C31253 -
                       ((C18786 + C18787) * C31138 * C13238 +
                        (C18785 + C18784) * C31138 * C13237) *
                           C30972 * C31265 -
                       ((C18992 + C18993) * C31138 * C13238 +
                        (C18989 + C18988) * C31138 * C13237) *
                           C30972 * C31228) *
                          C287 +
                      (((C18787 + C18786) * C31138 * C13237 +
                        (C18788 + C18789) * C31138 * C13238) *
                           C30972 * C31265 -
                       ((C18737 * C927 + C18966 + C18966 + C18734 * C937 +
                         C18735 * C295 + C18967 + C18967 + C18733 * C315) *
                            C31138 * C13238 +
                        (C18991 + C18990) * C31138 * C13237) *
                           C30972 * C31253 +
                       ((C18993 + C18992) * C31138 * C13237 +
                        (C18735 * C296 + C18968 + C18968 + C18733 * C316 +
                         C18737 * C1582 + C18969 + C18969 + C18734 * C1584) *
                            C31138 * C13238) *
                           C30972 * C31228) *
                          C31222)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C31138 * C13237 +
                    (C18784 + C18785) * C31138 * C13238) *
                       C31266 -
                   ((C19188 + C19189) * C31138 * C13238 +
                    (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                     C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                        C31138 * C13237) *
                       C31255 +
                   ((C18735 * C481 + C19148 + C19148 + C18733 * C501 +
                     C18737 * C2000 + C19149 + C19149 + C18734 * C2012) *
                        C31138 * C13237 +
                    (C19190 + C19191) * C31138 * C13238) *
                       C31231) *
                      C30954 * C286 +
                  (((C19189 + C19188) * C31138 * C13237 +
                    (C19192 + C19193) * C31138 * C13238) *
                       C31255 -
                   ((C18786 + C18787) * C31138 * C13238 +
                    (C18785 + C18784) * C31138 * C13237) *
                       C31266 -
                   ((C19194 + C19195) * C31138 * C13238 +
                    (C19191 + C19190) * C31138 * C13237) *
                       C31231) *
                      C30954 * C287 +
                  (((C18787 + C18786) * C31138 * C13237 +
                    (C18788 + C18789) * C31138 * C13238) *
                       C31266 -
                   ((C18737 * C485 + C19168 + C19168 + C18734 * C505 +
                     C18735 * C484 + C19169 + C19169 + C18733 * C504) *
                        C31138 * C13238 +
                    (C19193 + C19192) * C31138 * C13237) *
                       C31255 +
                   ((C19195 + C19194) * C31138 * C13237 +
                    (C18735 * C485 + C19170 + C19170 + C18733 * C505 +
                     C18737 * C2286 + C19171 + C19171 + C18734 * C2288) *
                        C31138 * C13238) *
                       C31231) *
                      C30954 * C31222)) /
                    (p * q * std::sqrt(p + q)) +
                (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C31138 * C13237 +
                    (C18784 + C18785) * C31138 * C13238) *
                       C30972 * C1072 -
                   ((C18986 + C18987) * C31138 * C13238 +
                    (C18737 * C924 + C18944 + C18944 + C18734 * C934 +
                     C18735 * C291 + C18945 + C18945 + C18733 * C311) *
                        C31138 * C13237) *
                       C30972 * C1073 +
                   ((C18735 * C292 + C18946 + C18946 + C18733 * C312 +
                     C18737 * C1285 + C18947 + C18947 + C18734 * C1303) *
                        C31138 * C13237 +
                    (C18988 + C18989) * C31138 * C13238) *
                       C30972 * C31228) *
                      C31262 +
                  (((C18987 + C18986) * C31138 * C13237 +
                    (C18990 + C18991) * C31138 * C13238) *
                       C30972 * C1073 -
                   ((C18786 + C18787) * C31138 * C13238 +
                    (C18785 + C18784) * C31138 * C13237) *
                       C30972 * C1072 -
                   ((C18992 + C18993) * C31138 * C13238 +
                    (C18989 + C18988) * C31138 * C13237) *
                       C30972 * C31228) *
                      C31249 +
                  (((C18787 + C18786) * C31138 * C13237 +
                    (C18788 + C18789) * C31138 * C13238) *
                       C30972 * C1072 -
                   ((C19336 + C19337) * C31138 * C13238 +
                    (C18991 + C18990) * C31138 * C13237) *
                       C30972 * C1073 +
                   ((C18993 + C18992) * C31138 * C13237 +
                    (C18735 * C296 + C18968 + C18968 + C18733 * C316 +
                     C18737 * C1582 + C18969 + C18969 + C18734 * C1584) *
                        C31138 * C13238) *
                       C30972 * C31228) *
                      C31222)) /
                    (p * q * std::sqrt(p + q)) +
                (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                 (((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                    C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                       C31138 * C13237 +
                   (C18784 + C18785) * C31138 * C13238) *
                      C30972 * C1140 -
                  ((C18986 + C18987) * C31138 * C13238 +
                   (C18737 * C924 + C18944 + C18944 + C18734 * C934 +
                    C18735 * C291 + C18945 + C18945 + C18733 * C311) *
                       C31138 * C13237) *
                      C30972 * C1141 +
                  ((C18735 * C292 + C18946 + C18946 + C18733 * C312 +
                    C18737 * C1285 + C18947 + C18947 + C18734 * C1303) *
                       C31138 * C13237 +
                   (C18988 + C18989) * C31138 * C13238) *
                      C30972 * C1142 -
                  ((C18737 * C1697 + C19930 + C19930 + C18734 * C1703 +
                    C18735 * C1147 + C19931 + C19931 + C18733 * C1159) *
                       C31138 * C13238 +
                   (C18737 * C1696 + C19932 + C19932 + C18734 * C1702 +
                    C18735 * C1148 + C19933 + C19933 + C18733 * C1160) *
                       C31138 * C13237) *
                      C30972 * C1143 +
                  ((C18735 * C1149 + C19934 + C19934 + C18733 * C1161 +
                    C18737 * C5625 + C19935 + C19935 + C18734 * C5631) *
                       C31138 * C13237 +
                   (C18735 * C1150 + C19936 + C19936 + C18733 * C1162 +
                    C18737 * C5909 + C19937 + C19937 + C18734 * C5911) *
                       C31138 * C13238) *
                      C30972 * C1144) *
                 C30926) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C31138 * C13237 +
                    (C18784 + C18785) * C31138 * C13238) *
                       C31266 -
                   ((C19188 + C19189) * C31138 * C13238 +
                    (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                     C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                        C31138 * C13237) *
                       C31255 +
                   ((C18735 * C481 + C19148 + C19148 + C18733 * C501 +
                     C18737 * C2000 + C19149 + C19149 + C18734 * C2012) *
                        C31138 * C13237 +
                    (C19190 + C19191) * C31138 * C13238) *
                       C31231) *
                      C1072 +
                  (((C18735 * C924 + C19674 + C19674 + C18733 * C934 +
                     C18737 * C1282 + C19675 + C19675 + C18734 * C1300) *
                        C31138 * C13237 +
                    (C19698 + C19699) * C31138 * C13238) *
                       C31255 -
                   ((C18986 + C18987) * C31138 * C13238 +
                    (C18737 * C924 + C18944 + C18944 + C18734 * C934 +
                     C18735 * C291 + C18945 + C18945 + C18733 * C311) *
                        C31138 * C13237) *
                       C31266 -
                   ((C18737 * C2401 + C20084 + C20084 + C18734 * C2407 +
                     C18735 * C1281 + C20085 + C20085 + C18733 * C1299) *
                        C31138 * C13238 +
                    (C18737 * C2400 + C20086 + C20086 + C18734 * C2406 +
                     C18735 * C1282 + C20087 + C20087 + C18733 * C1300) *
                        C31138 * C13237) *
                       C31231) *
                      C1073 +
                  (((C18735 * C292 + C18946 + C18946 + C18733 * C312 +
                     C18737 * C1285 + C18947 + C18947 + C18734 * C1303) *
                        C31138 * C13237 +
                    (C18988 + C18989) * C31138 * C13238) *
                       C31266 -
                   ((C18737 * C1287 + C20088 + C20088 + C18734 * C1305 +
                     C18735 * C1284 + C20089 + C20089 + C18733 * C1302) *
                        C31138 * C13238 +
                    (C18737 * C1286 + C20090 + C20090 + C18734 * C1304 +
                     C18735 * C1285 + C20091 + C20091 + C18733 * C1303) *
                        C31138 * C13237) *
                       C31255 +
                   ((C18735 * C1286 + C20092 + C20092 + C18733 * C1304 +
                     C18737 * C6307 + C20093 + C20093 + C18734 * C6313) *
                        C31138 * C13237 +
                    (C18735 * C1287 + C20094 + C20094 + C18733 * C1305 +
                     C18737 * C6572 + C20095 + C20095 + C18734 * C6574) *
                        C31138 * C13238) *
                       C31231) *
                      C31228) *
                 C30926) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C31138 * C13237 +
                    (C18784 + C18785) * C31138 * C13238) *
                       C1818 -
                   ((C19188 + C19189) * C31138 * C13238 +
                    (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                     C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                        C31138 * C13237) *
                       C1819 +
                   ((C18735 * C481 + C19148 + C19148 + C18733 * C501 +
                     C18737 * C2000 + C19149 + C19149 + C18734 * C2012) *
                        C31138 * C13237 +
                    (C19190 + C19191) * C31138 * C13238) *
                       C31231) *
                      C30954 * C31262 +
                  (((C19189 + C19188) * C31138 * C13237 +
                    (C19192 + C19193) * C31138 * C13238) *
                       C1819 -
                   ((C18786 + C18787) * C31138 * C13238 +
                    (C18785 + C18784) * C31138 * C13237) *
                       C1818 -
                   ((C19194 + C19195) * C31138 * C13238 +
                    (C19191 + C19190) * C31138 * C13237) *
                       C31231) *
                      C30954 * C31249 +
                  (((C18787 + C18786) * C31138 * C13237 +
                    (C18788 + C18789) * C31138 * C13238) *
                       C1818 -
                   ((C19478 + C19479) * C31138 * C13238 +
                    (C19193 + C19192) * C31138 * C13237) *
                       C1819 +
                   ((C19195 + C19194) * C31138 * C13237 +
                    (C18735 * C485 + C19170 + C19170 + C18733 * C505 +
                     C18737 * C2286 + C19171 + C19171 + C18734 * C2288) *
                        C31138 * C13238) *
                       C31231) *
                      C30954 * C31222)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C31138 * C13237 +
                    (C18784 + C18785) * C31138 * C13238) *
                       C1818 -
                   ((C19188 + C19189) * C31138 * C13238 +
                    (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                     C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                        C31138 * C13237) *
                       C1819 +
                   ((C18735 * C481 + C19148 + C19148 + C18733 * C501 +
                     C18737 * C2000 + C19149 + C19149 + C18734 * C2012) *
                        C31138 * C13237 +
                    (C19190 + C19191) * C31138 * C13238) *
                       C31231) *
                      C31265 +
                  (((C18735 * C924 + C19674 + C19674 + C18733 * C934 +
                     C18737 * C1282 + C19675 + C19675 + C18734 * C1300) *
                        C31138 * C13237 +
                    (C19698 + C19699) * C31138 * C13238) *
                       C1819 -
                   ((C18986 + C18987) * C31138 * C13238 +
                    (C18737 * C924 + C18944 + C18944 + C18734 * C934 +
                     C18735 * C291 + C18945 + C18945 + C18733 * C311) *
                        C31138 * C13237) *
                       C1818 -
                   ((C18737 * C2401 + C20084 + C20084 + C18734 * C2407 +
                     C18735 * C1281 + C20085 + C20085 + C18733 * C1299) *
                        C31138 * C13238 +
                    (C18737 * C2400 + C20086 + C20086 + C18734 * C2406 +
                     C18735 * C1282 + C20087 + C20087 + C18733 * C1300) *
                        C31138 * C13237) *
                       C31231) *
                      C31253 +
                  (((C18735 * C292 + C18946 + C18946 + C18733 * C312 +
                     C18737 * C1285 + C18947 + C18947 + C18734 * C1303) *
                        C31138 * C13237 +
                    (C18988 + C18989) * C31138 * C13238) *
                       C1818 -
                   ((C20442 + C20443) * C31138 * C13238 +
                    (C18737 * C1286 + C20090 + C20090 + C18734 * C1304 +
                     C18735 * C1285 + C20091 + C20091 + C18733 * C1303) *
                        C31138 * C13237) *
                       C1819 +
                   ((C18735 * C1286 + C20092 + C20092 + C18733 * C1304 +
                     C18737 * C6307 + C20093 + C20093 + C18734 * C6313) *
                        C31138 * C13237 +
                    (C18735 * C1287 + C20094 + C20094 + C18733 * C1305 +
                     C18737 * C6572 + C20095 + C20095 + C18734 * C6574) *
                        C31138 * C13238) *
                       C31231) *
                      C31228) *
                 C30926) /
                    (p * q * std::sqrt(p + q)) +
                (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                 (((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                    C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                       C31138 * C13237 +
                   (C18784 + C18785) * C31138 * C13238) *
                      C1993 -
                  ((C19188 + C19189) * C31138 * C13238 +
                   (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                    C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                       C31138 * C13237) *
                      C1994 +
                  ((C18735 * C481 + C19148 + C19148 + C18733 * C501 +
                    C18737 * C2000 + C19149 + C19149 + C18734 * C2012) *
                       C31138 * C13237 +
                   (C19190 + C19191) * C31138 * C13238) *
                      C1995 -
                  ((C18737 * C2002 + C20952 + C20952 + C18734 * C2014 +
                    C18735 * C1999 + C20953 + C20953 + C18733 * C2011) *
                       C31138 * C13238 +
                   (C18737 * C2001 + C20954 + C20954 + C18734 * C2013 +
                    C18735 * C2000 + C20955 + C20955 + C18733 * C2012) *
                       C31138 * C13237) *
                      C1996 +
                  ((C18735 * C2001 + C20956 + C20956 + C18733 * C2013 +
                    C18737 * C10549 + C20957 + C20957 + C18734 * C10553) *
                       C31138 * C13237 +
                   (C18735 * C2002 + C20958 + C20958 + C18733 * C2014 +
                    C18737 * C10811 + C20959 + C20959 + C18734 * C10813) *
                       C31138 * C13238) *
                      C1997) *
                 C30954 * C30926) /
                    (p * q * std::sqrt(p + q));
    d2ee[88] += (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 (((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                      C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                         C31138 * C13237 +
                     (C18784 + C18785) * C31138 * C13238) *
                        C31198 -
                    ((C19188 + C19189) * C31138 * C13238 +
                     (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                      C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                         C31138 * C13237) *
                        C31059) *
                       C1072 +
                   (((C18735 * C924 + C19674 + C19674 + C18733 * C934 +
                      C18737 * C1282 + C19675 + C19675 + C18734 * C1300) *
                         C31138 * C13237 +
                     (C19698 + C19699) * C31138 * C13238) *
                        C31059 -
                    ((C18986 + C18987) * C31138 * C13238 +
                     (C18737 * C924 + C18944 + C18944 + C18734 * C934 +
                      C18735 * C291 + C18945 + C18945 + C18733 * C311) *
                         C31138 * C13237) *
                        C31198) *
                       C1073 +
                   (((C18735 * C292 + C18946 + C18946 + C18733 * C312 +
                      C18737 * C1285 + C18947 + C18947 + C18734 * C1303) *
                         C31138 * C13237 +
                     (C18988 + C18989) * C31138 * C13238) *
                        C31198 -
                    ((C20442 + C20443) * C31138 * C13238 +
                     (C18737 * C1286 + C20090 + C20090 + C18734 * C1304 +
                      C18735 * C1285 + C20091 + C20091 + C18733 * C1303) *
                         C31138 * C13237) *
                        C31059) *
                       C31228) *
                      C31183 +
                  ((((C19189 + C19188) * C31138 * C13237 +
                     (C19192 + C19193) * C31138 * C13238) *
                        C31059 -
                    ((C18786 + C18787) * C31138 * C13238 +
                     (C18785 + C18784) * C31138 * C13237) *
                        C31198) *
                       C1072 +
                   (((C18987 + C18986) * C31138 * C13237 +
                     (C18990 + C18991) * C31138 * C13238) *
                        C31198 -
                    ((C19700 + C19701) * C31138 * C13238 +
                     (C19699 + C19698) * C31138 * C13237) *
                        C31059) *
                       C1073 +
                   (((C20443 + C20442) * C31138 * C13237 +
                     (C18735 * C1283 + C20436 + C20436 + C18733 * C1301 +
                      C18737 * C1288 + C20437 + C20437 + C18734 * C1306) *
                         C31138 * C13238) *
                        C31059 -
                    ((C18992 + C18993) * C31138 * C13238 +
                     (C18989 + C18988) * C31138 * C13237) *
                        C31198) *
                       C31228) *
                      C30937)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C31138 * C13237 +
                    (C18784 + C18785) * C31138 * C13238) *
                       C31198 -
                   ((C19188 + C19189) * C31138 * C13238 +
                    (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                     C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                        C31138 * C13237) *
                       C31059) *
                      C30954 * C654 +
                  (((C19189 + C19188) * C31138 * C13237 +
                    (C19192 + C19193) * C31138 * C13238) *
                       C31059 -
                   ((C18786 + C18787) * C31138 * C13238 +
                    (C18785 + C18784) * C31138 * C13237) *
                       C31198) *
                      C30954 * C655 +
                  (((C18787 + C18786) * C31138 * C13237 +
                    (C18788 + C18789) * C31138 * C13238) *
                       C31198 -
                   ((C19478 + C19479) * C31138 * C13238 +
                    (C19193 + C19192) * C31138 * C13237) *
                       C31059) *
                      C30954 * C656 +
                  (((C19479 + C19478) * C31138 * C13237 +
                    (C18735 * C486 + C19472 + C19472 + C18733 * C506 +
                     C18737 * C487 + C19473 + C19473 + C18734 * C507) *
                        C31138 * C13238) *
                       C31059 -
                   ((C18790 + C18791) * C31138 * C13238 +
                    (C18789 + C18788) * C31138 * C13237) *
                       C31198) *
                      C30954 * C31232)) /
                    (p * q * std::sqrt(p + q)) +
                (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C31138 * C13237 +
                    (C18784 + C18785) * C31138 * C13238) *
                       C2282 -
                   ((C19188 + C19189) * C31138 * C13238 +
                    (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                     C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                        C31138 * C13237) *
                       C2283 +
                   ((C18735 * C481 + C19148 + C19148 + C18733 * C501 +
                     C18737 * C2000 + C19149 + C19149 + C18734 * C2012) *
                        C31138 * C13237 +
                    (C19190 + C19191) * C31138 * C13238) *
                       C2284 -
                   ((C21306 + C21307) * C31138 * C13238 +
                    (C18737 * C2001 + C20954 + C20954 + C18734 * C2013 +
                     C18735 * C2000 + C20955 + C20955 + C18733 * C2012) *
                        C31138 * C13237) *
                       C31244) *
                      C30954 * C31183 +
                  (((C19189 + C19188) * C31138 * C13237 +
                    (C19192 + C19193) * C31138 * C13238) *
                       C2283 -
                   ((C18786 + C18787) * C31138 * C13238 +
                    (C18785 + C18784) * C31138 * C13237) *
                       C2282 -
                   ((C19194 + C19195) * C31138 * C13238 +
                    (C19191 + C19190) * C31138 * C13237) *
                       C2284 +
                   ((C21307 + C21306) * C31138 * C13237 +
                    (C18735 * C1998 + C21300 + C21300 + C18733 * C2010 +
                     C18737 * C2003 + C21301 + C21301 + C18734 * C2015) *
                        C31138 * C13238) *
                       C31244) *
                      C30954 * C30937)) /
                    (p * q * std::sqrt(p + q));
    d2ee[89] += (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C31138 * C13237 +
                    (C18784 + C18785) * C31138 * C13238) *
                       C30972 * C31265 -
                   ((C18986 + C18987) * C31138 * C13238 +
                    (C18737 * C924 + C18944 + C18944 + C18734 * C934 +
                     C18735 * C291 + C18945 + C18945 + C18733 * C311) *
                        C31138 * C13237) *
                       C30972 * C31253 +
                   ((C18735 * C292 + C18946 + C18946 + C18733 * C312 +
                     C18737 * C1285 + C18947 + C18947 + C18734 * C1303) *
                        C31138 * C13237 +
                    (C18988 + C18989) * C31138 * C13238) *
                       C30972 * C31228) *
                      C286 +
                  (((C18987 + C18986) * C31138 * C13237 +
                    (C18990 + C18991) * C31138 * C13238) *
                       C30972 * C31253 -
                   ((C18786 + C18787) * C31138 * C13238 +
                    (C18785 + C18784) * C31138 * C13237) *
                       C30972 * C31265 -
                   ((C18992 + C18993) * C31138 * C13238 +
                    (C18989 + C18988) * C31138 * C13237) *
                       C30972 * C31228) *
                      C287 +
                  (((C18787 + C18786) * C31138 * C13237 +
                    (C18788 + C18789) * C31138 * C13238) *
                       C30972 * C31265 -
                   ((C18737 * C927 + C18966 + C18966 + C18734 * C937 +
                     C18735 * C295 + C18967 + C18967 + C18733 * C315) *
                        C31138 * C13238 +
                    (C18991 + C18990) * C31138 * C13237) *
                       C30972 * C31253 +
                   ((C18993 + C18992) * C31138 * C13237 +
                    (C18735 * C296 + C18968 + C18968 + C18733 * C316 +
                     C18737 * C1582 + C18969 + C18969 + C18734 * C1584) *
                        C31138 * C13238) *
                       C30972 * C31228) *
                      C31222)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                 (((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                    C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                       C31138 * C13237 +
                   (C18784 + C18785) * C31138 * C13238) *
                      C30972 * C30954 * C108 -
                  ((C18786 + C18787) * C31138 * C13238 +
                   (C18785 + C18784) * C31138 * C13237) *
                      C30972 * C30954 * C109 +
                  ((C18787 + C18786) * C31138 * C13237 +
                   (C18788 + C18789) * C31138 * C13238) *
                      C30972 * C30954 * C110 -
                  ((C18790 + C18791) * C31138 * C13238 +
                   (C18789 + C18788) * C31138 * C13237) *
                      C30972 * C30954 * C111 +
                  ((C18791 + C18790) * C31138 * C13237 +
                   (C18735 * C120 + C18766 + C18766 + C18733 * C134 +
                    C18737 * C768 + C18767 + C18767 + C18734 * C770) *
                       C31138 * C13238) *
                      C30972 * C30954 * C112)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C31138 * C13237 +
                    (C18784 + C18785) * C31138 * C13238) *
                       C30972 * C1072 -
                   ((C18986 + C18987) * C31138 * C13238 +
                    (C18737 * C924 + C18944 + C18944 + C18734 * C934 +
                     C18735 * C291 + C18945 + C18945 + C18733 * C311) *
                        C31138 * C13237) *
                       C30972 * C1073 +
                   ((C18735 * C292 + C18946 + C18946 + C18733 * C312 +
                     C18737 * C1285 + C18947 + C18947 + C18734 * C1303) *
                        C31138 * C13237 +
                    (C18988 + C18989) * C31138 * C13238) *
                       C30972 * C31228) *
                      C31262 +
                  (((C18987 + C18986) * C31138 * C13237 +
                    (C18990 + C18991) * C31138 * C13238) *
                       C30972 * C1073 -
                   ((C18786 + C18787) * C31138 * C13238 +
                    (C18785 + C18784) * C31138 * C13237) *
                       C30972 * C1072 -
                   ((C18992 + C18993) * C31138 * C13238 +
                    (C18989 + C18988) * C31138 * C13237) *
                       C30972 * C31228) *
                      C31249 +
                  (((C18787 + C18786) * C31138 * C13237 +
                    (C18788 + C18789) * C31138 * C13238) *
                       C30972 * C1072 -
                   ((C19336 + C19337) * C31138 * C13238 +
                    (C18991 + C18990) * C31138 * C13237) *
                       C30972 * C1073 +
                   ((C18993 + C18992) * C31138 * C13237 +
                    (C18735 * C296 + C18968 + C18968 + C18733 * C316 +
                     C18737 * C1582 + C18969 + C18969 + C18734 * C1584) *
                        C31138 * C13238) *
                       C30972 * C31228) *
                      C31222)) /
                    (p * q * std::sqrt(p + q)) +
                (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                 (((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                    C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                       C31138 * C13237 +
                   (C18784 + C18785) * C31138 * C13238) *
                      C30972 * C1140 -
                  ((C18986 + C18987) * C31138 * C13238 +
                   (C18737 * C924 + C18944 + C18944 + C18734 * C934 +
                    C18735 * C291 + C18945 + C18945 + C18733 * C311) *
                       C31138 * C13237) *
                      C30972 * C1141 +
                  ((C18735 * C292 + C18946 + C18946 + C18733 * C312 +
                    C18737 * C1285 + C18947 + C18947 + C18734 * C1303) *
                       C31138 * C13237 +
                   (C18988 + C18989) * C31138 * C13238) *
                      C30972 * C1142 -
                  ((C18737 * C1697 + C19930 + C19930 + C18734 * C1703 +
                    C18735 * C1147 + C19931 + C19931 + C18733 * C1159) *
                       C31138 * C13238 +
                   (C18737 * C1696 + C19932 + C19932 + C18734 * C1702 +
                    C18735 * C1148 + C19933 + C19933 + C18733 * C1160) *
                       C31138 * C13237) *
                      C30972 * C1143 +
                  ((C18735 * C1149 + C19934 + C19934 + C18733 * C1161 +
                    C18737 * C5625 + C19935 + C19935 + C18734 * C5631) *
                       C31138 * C13237 +
                   (C18735 * C1150 + C19936 + C19936 + C18733 * C1162 +
                    C18737 * C5909 + C19937 + C19937 + C18734 * C5911) *
                       C31138 * C13238) *
                      C30972 * C1144) *
                 C30926) /
                    (p * q * std::sqrt(p + q)) +
                (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C31138 * C13237 +
                    (C18784 + C18785) * C31138 * C13238) *
                       C1818 -
                   ((C19188 + C19189) * C31138 * C13238 +
                    (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                     C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                        C31138 * C13237) *
                       C1819 +
                   ((C18735 * C481 + C19148 + C19148 + C18733 * C501 +
                     C18737 * C2000 + C19149 + C19149 + C18734 * C2012) *
                        C31138 * C13237 +
                    (C19190 + C19191) * C31138 * C13238) *
                       C31231) *
                      C30954 * C31262 +
                  (((C19189 + C19188) * C31138 * C13237 +
                    (C19192 + C19193) * C31138 * C13238) *
                       C1819 -
                   ((C18786 + C18787) * C31138 * C13238 +
                    (C18785 + C18784) * C31138 * C13237) *
                       C1818 -
                   ((C19194 + C19195) * C31138 * C13238 +
                    (C19191 + C19190) * C31138 * C13237) *
                       C31231) *
                      C30954 * C31249 +
                  (((C18787 + C18786) * C31138 * C13237 +
                    (C18788 + C18789) * C31138 * C13238) *
                       C1818 -
                   ((C19478 + C19479) * C31138 * C13238 +
                    (C19193 + C19192) * C31138 * C13237) *
                       C1819 +
                   ((C19195 + C19194) * C31138 * C13237 +
                    (C18735 * C485 + C19170 + C19170 + C18733 * C505 +
                     C18737 * C2286 + C19171 + C19171 + C18734 * C2288) *
                        C31138 * C13238) *
                       C31231) *
                      C30954 * C31222)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C31138 * C13237 +
                    (C18784 + C18785) * C31138 * C13238) *
                       C1818 -
                   ((C19188 + C19189) * C31138 * C13238 +
                    (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                     C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                        C31138 * C13237) *
                       C1819 +
                   ((C18735 * C481 + C19148 + C19148 + C18733 * C501 +
                     C18737 * C2000 + C19149 + C19149 + C18734 * C2012) *
                        C31138 * C13237 +
                    (C19190 + C19191) * C31138 * C13238) *
                       C31231) *
                      C31265 +
                  (((C18735 * C924 + C19674 + C19674 + C18733 * C934 +
                     C18737 * C1282 + C19675 + C19675 + C18734 * C1300) *
                        C31138 * C13237 +
                    (C19698 + C19699) * C31138 * C13238) *
                       C1819 -
                   ((C18986 + C18987) * C31138 * C13238 +
                    (C18737 * C924 + C18944 + C18944 + C18734 * C934 +
                     C18735 * C291 + C18945 + C18945 + C18733 * C311) *
                        C31138 * C13237) *
                       C1818 -
                   ((C18737 * C2401 + C20084 + C20084 + C18734 * C2407 +
                     C18735 * C1281 + C20085 + C20085 + C18733 * C1299) *
                        C31138 * C13238 +
                    (C18737 * C2400 + C20086 + C20086 + C18734 * C2406 +
                     C18735 * C1282 + C20087 + C20087 + C18733 * C1300) *
                        C31138 * C13237) *
                       C31231) *
                      C31253 +
                  (((C18735 * C292 + C18946 + C18946 + C18733 * C312 +
                     C18737 * C1285 + C18947 + C18947 + C18734 * C1303) *
                        C31138 * C13237 +
                    (C18988 + C18989) * C31138 * C13238) *
                       C1818 -
                   ((C20442 + C20443) * C31138 * C13238 +
                    (C18737 * C1286 + C20090 + C20090 + C18734 * C1304 +
                     C18735 * C1285 + C20091 + C20091 + C18733 * C1303) *
                        C31138 * C13237) *
                       C1819 +
                   ((C18735 * C1286 + C20092 + C20092 + C18733 * C1304 +
                     C18737 * C6307 + C20093 + C20093 + C18734 * C6313) *
                        C31138 * C13237 +
                    (C18735 * C1287 + C20094 + C20094 + C18733 * C1305 +
                     C18737 * C6572 + C20095 + C20095 + C18734 * C6574) *
                        C31138 * C13238) *
                       C31231) *
                      C31228) *
                 C30926) /
                    (p * q * std::sqrt(p + q));
    d2ee[90] += (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
                 (((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                      C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                         C31138 * C13237 +
                     (C18784 + C18785) * C31138 * C13238) *
                        C3272 -
                    ((C19188 + C19189) * C31138 * C13238 +
                     (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                      C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                         C31138 * C13237) *
                        C31059) *
                       C31197 +
                   (((C18735 * C924 + C19674 + C19674 + C18733 * C934 +
                      C18737 * C1282 + C19675 + C19675 + C18734 * C1300) *
                         C31138 * C13237 +
                     (C19698 + C19699) * C31138 * C13238) *
                        C31059 -
                    ((C18986 + C18987) * C31138 * C13238 +
                     (C18737 * C924 + C18944 + C18944 + C18734 * C934 +
                      C18735 * C291 + C18945 + C18945 + C18733 * C311) *
                         C31138 * C13237) *
                        C3272) *
                       C31017) *
                      C30931 +
                  ((((C19189 + C19188) * C31138 * C13237 +
                     (C19192 + C19193) * C31138 * C13238) *
                        C31059 -
                    ((C18786 + C18787) * C31138 * C13238 +
                     (C18785 + C18784) * C31138 * C13237) *
                        C3272) *
                       C31197 +
                   (((C18987 + C18986) * C31138 * C13237 +
                     (C18990 + C18991) * C31138 * C13238) *
                        C3272 -
                    ((C19700 + C19701) * C31138 * C13238 +
                     (C19699 + C19698) * C31138 * C13237) *
                        C31059) *
                       C31017) *
                      C30940 +
                  ((((C18787 + C18786) * C31138 * C13237 +
                     (C18788 + C18789) * C31138 * C13238) *
                        C3272 -
                    ((C19478 + C19479) * C31138 * C13238 +
                     (C19193 + C19192) * C31138 * C13237) *
                        C31059) *
                       C31197 +
                   (((C19701 + C19700) * C31138 * C13237 +
                     (C18735 * C927 + C19688 + C19688 + C18733 * C937 +
                      C18737 * C2168 + C19689 + C19689 + C18734 * C2170) *
                         C31138 * C13238) *
                        C31059 -
                    ((C19336 + C19337) * C31138 * C13238 +
                     (C18991 + C18990) * C31138 * C13237) *
                        C3272) *
                       C31017) *
                      C2881)) /
                (p * q * std::sqrt(p + q));
    d2ee[91] += (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
                 (((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                      C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                         C31138 * C13237 +
                     (C18784 + C18785) * C31138 * C13238) *
                        C31055 -
                    ((C19188 + C19189) * C31138 * C13238 +
                     (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                      C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                         C31138 * C13237) *
                        C31062 +
                    ((C18735 * C481 + C19148 + C19148 + C18733 * C501 +
                      C18737 * C2000 + C19149 + C19149 + C18734 * C2012) *
                         C31138 * C13237 +
                     (C19190 + C19191) * C31138 * C13238) *
                        C3780) *
                       C31197 +
                   (((C18735 * C924 + C19674 + C19674 + C18733 * C934 +
                      C18737 * C1282 + C19675 + C19675 + C18734 * C1300) *
                         C31138 * C13237 +
                     (C19698 + C19699) * C31138 * C13238) *
                        C31062 -
                    ((C18986 + C18987) * C31138 * C13238 +
                     (C18737 * C924 + C18944 + C18944 + C18734 * C934 +
                      C18735 * C291 + C18945 + C18945 + C18733 * C311) *
                         C31138 * C13237) *
                        C31055 -
                    ((C21164 + C21165) * C31138 * C13238 +
                     (C18737 * C2400 + C20086 + C20086 + C18734 * C2406 +
                      C18735 * C1282 + C20087 + C20087 + C18733 * C1300) *
                         C31138 * C13237) *
                        C3780) *
                       C31017) *
                      C2618 +
                  ((((C19189 + C19188) * C31138 * C13237 +
                     (C19192 + C19193) * C31138 * C13238) *
                        C31062 -
                    ((C18786 + C18787) * C31138 * C13238 +
                     (C18785 + C18784) * C31138 * C13237) *
                        C31055 -
                    ((C19194 + C19195) * C31138 * C13238 +
                     (C19191 + C19190) * C31138 * C13237) *
                        C3780) *
                       C31197 +
                   (((C18987 + C18986) * C31138 * C13237 +
                     (C18990 + C18991) * C31138 * C13238) *
                        C31055 -
                    ((C19700 + C19701) * C31138 * C13238 +
                     (C19699 + C19698) * C31138 * C13237) *
                        C31062 +
                    ((C21165 + C21164) * C31138 * C13237 +
                     (C18735 * C1280 + C21158 + C21158 + C18733 * C1298 +
                      C18737 * C2402 + C21159 + C21159 + C18734 * C2408) *
                         C31138 * C13238) *
                        C3780) *
                       C31017) *
                      C30937)) /
                (p * q * std::sqrt(p + q));
    d2ee[92] += (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 (((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                      C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                         C31138 * C13237 +
                     (C18784 + C18785) * C31138 * C13238) *
                        C3272 -
                    ((C19188 + C19189) * C31138 * C13238 +
                     (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                      C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                         C31138 * C13237) *
                        C31059) *
                       C31265 +
                   (((C18735 * C924 + C19674 + C19674 + C18733 * C934 +
                      C18737 * C1282 + C19675 + C19675 + C18734 * C1300) *
                         C31138 * C13237 +
                     (C19698 + C19699) * C31138 * C13238) *
                        C31059 -
                    ((C18986 + C18987) * C31138 * C13238 +
                     (C18737 * C924 + C18944 + C18944 + C18734 * C934 +
                      C18735 * C291 + C18945 + C18945 + C18733 * C311) *
                         C31138 * C13237) *
                        C3272) *
                       C31253 +
                   (((C18735 * C292 + C18946 + C18946 + C18733 * C312 +
                      C18737 * C1285 + C18947 + C18947 + C18734 * C1303) *
                         C31138 * C13237 +
                     (C18988 + C18989) * C31138 * C13238) *
                        C3272 -
                    ((C20442 + C20443) * C31138 * C13238 +
                     (C18737 * C1286 + C20090 + C20090 + C18734 * C1304 +
                      C18735 * C1285 + C20091 + C20091 + C18733 * C1303) *
                         C31138 * C13237) *
                        C31059) *
                       C31228) *
                      C2618 +
                  ((((C19189 + C19188) * C31138 * C13237 +
                     (C19192 + C19193) * C31138 * C13238) *
                        C31059 -
                    ((C18786 + C18787) * C31138 * C13238 +
                     (C18785 + C18784) * C31138 * C13237) *
                        C3272) *
                       C31265 +
                   (((C18987 + C18986) * C31138 * C13237 +
                     (C18990 + C18991) * C31138 * C13238) *
                        C3272 -
                    ((C19700 + C19701) * C31138 * C13238 +
                     (C19699 + C19698) * C31138 * C13237) *
                        C31059) *
                       C31253 +
                   (((C20443 + C20442) * C31138 * C13237 +
                     (C18735 * C1283 + C20436 + C20436 + C18733 * C1301 +
                      C18737 * C1288 + C20437 + C20437 + C18734 * C1306) *
                         C31138 * C13238) *
                        C31059 -
                    ((C18992 + C18993) * C31138 * C13238 +
                     (C18989 + C18988) * C31138 * C13237) *
                        C3272) *
                       C31228) *
                      C30937)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C31138 * C13237 +
                    (C18784 + C18785) * C31138 * C13238) *
                       C3272 -
                   ((C19188 + C19189) * C31138 * C13238 +
                    (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                     C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                        C31138 * C13237) *
                       C31059) *
                      C30954 * C31271 +
                  (((C19189 + C19188) * C31138 * C13237 +
                    (C19192 + C19193) * C31138 * C13238) *
                       C31059 -
                   ((C18786 + C18787) * C31138 * C13238 +
                    (C18785 + C18784) * C31138 * C13237) *
                       C3272) *
                      C30954 * C31264 +
                  (((C18787 + C18786) * C31138 * C13237 +
                    (C18788 + C18789) * C31138 * C13238) *
                       C3272 -
                   ((C19478 + C19479) * C31138 * C13238 +
                    (C19193 + C19192) * C31138 * C13237) *
                       C31059) *
                      C30954 * C31251 +
                  (((C19479 + C19478) * C31138 * C13237 +
                    (C18735 * C486 + C19472 + C19472 + C18733 * C506 +
                     C18737 * C487 + C19473 + C19473 + C18734 * C507) *
                        C31138 * C13238) *
                       C31059 -
                   ((C18790 + C18791) * C31138 * C13238 +
                    (C18789 + C18788) * C31138 * C13237) *
                       C3272) *
                      C30954 * C31232)) /
                    (p * q * std::sqrt(p + q)) +
                (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C31138 * C13237 +
                    (C18784 + C18785) * C31138 * C13238) *
                       C31273 -
                   ((C19188 + C19189) * C31138 * C13238 +
                    (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                     C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                        C31138 * C13237) *
                       C31270 +
                   ((C18735 * C481 + C19148 + C19148 + C18733 * C501 +
                     C18737 * C2000 + C19149 + C19149 + C18734 * C2012) *
                        C31138 * C13237 +
                    (C19190 + C19191) * C31138 * C13238) *
                       C31261 -
                   ((C21306 + C21307) * C31138 * C13238 +
                    (C18737 * C2001 + C20954 + C20954 + C18734 * C2013 +
                     C18735 * C2000 + C20955 + C20955 + C18733 * C2012) *
                        C31138 * C13237) *
                       C31244) *
                      C30954 * C2618 +
                  (((C19189 + C19188) * C31138 * C13237 +
                    (C19192 + C19193) * C31138 * C13238) *
                       C31270 -
                   ((C18786 + C18787) * C31138 * C13238 +
                    (C18785 + C18784) * C31138 * C13237) *
                       C31273 -
                   ((C19194 + C19195) * C31138 * C13238 +
                    (C19191 + C19190) * C31138 * C13237) *
                       C31261 +
                   ((C21307 + C21306) * C31138 * C13237 +
                    (C18735 * C1998 + C21300 + C21300 + C18733 * C2010 +
                     C18737 * C2003 + C21301 + C21301 + C18734 * C2015) *
                        C31138 * C13238) *
                       C31244) *
                      C30954 * C30937)) /
                    (p * q * std::sqrt(p + q));
    d2ee[93] += (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C31138 * C13237 +
                    (C18784 + C18785) * C31138 * C13238) *
                       C31055 -
                   ((C19188 + C19189) * C31138 * C13238 +
                    (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                     C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                        C31138 * C13237) *
                       C31062 +
                   ((C18735 * C481 + C19148 + C19148 + C18733 * C501 +
                     C18737 * C2000 + C19149 + C19149 + C18734 * C2012) *
                        C31138 * C13237 +
                    (C19190 + C19191) * C31138 * C13238) *
                       C3780) *
                      C30954 * C30931 +
                  (((C19189 + C19188) * C31138 * C13237 +
                    (C19192 + C19193) * C31138 * C13238) *
                       C31062 -
                   ((C18786 + C18787) * C31138 * C13238 +
                    (C18785 + C18784) * C31138 * C13237) *
                       C31055 -
                   ((C19194 + C19195) * C31138 * C13238 +
                    (C19191 + C19190) * C31138 * C13237) *
                       C3780) *
                      C30954 * C30940 +
                  (((C18787 + C18786) * C31138 * C13237 +
                    (C18788 + C18789) * C31138 * C13238) *
                       C31055 -
                   ((C19478 + C19479) * C31138 * C13238 +
                    (C19193 + C19192) * C31138 * C13237) *
                       C31062 +
                   ((C19195 + C19194) * C31138 * C13237 +
                    (C18735 * C485 + C19170 + C19170 + C18733 * C505 +
                     C18737 * C2286 + C19171 + C19171 + C18734 * C2288) *
                        C31138 * C13238) *
                       C3780) *
                      C30954 * C2881)) /
                (p * q * std::sqrt(p + q));
    d2ee[94] += (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C31138 * C13237 +
                    (C18784 + C18785) * C31138 * C13238) *
                       C3272 -
                   ((C19188 + C19189) * C31138 * C13238 +
                    (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                     C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                        C31138 * C13237) *
                       C31059) *
                      C30954 * C31271 +
                  (((C19189 + C19188) * C31138 * C13237 +
                    (C19192 + C19193) * C31138 * C13238) *
                       C31059 -
                   ((C18786 + C18787) * C31138 * C13238 +
                    (C18785 + C18784) * C31138 * C13237) *
                       C3272) *
                      C30954 * C31264 +
                  (((C18787 + C18786) * C31138 * C13237 +
                    (C18788 + C18789) * C31138 * C13238) *
                       C3272 -
                   ((C19478 + C19479) * C31138 * C13238 +
                    (C19193 + C19192) * C31138 * C13237) *
                       C31059) *
                      C30954 * C31251 +
                  (((C19479 + C19478) * C31138 * C13237 +
                    (C18735 * C486 + C19472 + C19472 + C18733 * C506 +
                     C18737 * C487 + C19473 + C19473 + C18734 * C507) *
                        C31138 * C13238) *
                       C31059 -
                   ((C18790 + C18791) * C31138 * C13238 +
                    (C18789 + C18788) * C31138 * C13237) *
                       C3272) *
                      C30954 * C31232)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                 (((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                      C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                         C31138 * C13237 +
                     (C18784 + C18785) * C31138 * C13238) *
                        C3272 -
                    ((C19188 + C19189) * C31138 * C13238 +
                     (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                      C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                         C31138 * C13237) *
                        C31059) *
                       C31265 +
                   (((C18735 * C924 + C19674 + C19674 + C18733 * C934 +
                      C18737 * C1282 + C19675 + C19675 + C18734 * C1300) *
                         C31138 * C13237 +
                     (C19698 + C19699) * C31138 * C13238) *
                        C31059 -
                    ((C18986 + C18987) * C31138 * C13238 +
                     (C18737 * C924 + C18944 + C18944 + C18734 * C934 +
                      C18735 * C291 + C18945 + C18945 + C18733 * C311) *
                         C31138 * C13237) *
                        C3272) *
                       C31253 +
                   (((C18735 * C292 + C18946 + C18946 + C18733 * C312 +
                      C18737 * C1285 + C18947 + C18947 + C18734 * C1303) *
                         C31138 * C13237 +
                     (C18988 + C18989) * C31138 * C13238) *
                        C3272 -
                    ((C20442 + C20443) * C31138 * C13238 +
                     (C18737 * C1286 + C20090 + C20090 + C18734 * C1304 +
                      C18735 * C1285 + C20091 + C20091 + C18733 * C1303) *
                         C31138 * C13237) *
                        C31059) *
                       C31228) *
                      C2618 +
                  ((((C19189 + C19188) * C31138 * C13237 +
                     (C19192 + C19193) * C31138 * C13238) *
                        C31059 -
                    ((C18786 + C18787) * C31138 * C13238 +
                     (C18785 + C18784) * C31138 * C13237) *
                        C3272) *
                       C31265 +
                   (((C18987 + C18986) * C31138 * C13237 +
                     (C18990 + C18991) * C31138 * C13238) *
                        C3272 -
                    ((C19700 + C19701) * C31138 * C13238 +
                     (C19699 + C19698) * C31138 * C13237) *
                        C31059) *
                       C31253 +
                   (((C20443 + C20442) * C31138 * C13237 +
                     (C18735 * C1283 + C20436 + C20436 + C18733 * C1301 +
                      C18737 * C1288 + C20437 + C20437 + C18734 * C1306) *
                         C31138 * C13238) *
                        C31059 -
                    ((C18992 + C18993) * C31138 * C13238 +
                     (C18989 + C18988) * C31138 * C13237) *
                        C3272) *
                       C31228) *
                      C30937)) /
                    (p * q * std::sqrt(p + q));
    d2ee[95] += (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C31138 * C13237 +
                    (C18784 + C18785) * C31138 * C13238) *
                       C30972 * C31197 -
                   ((C18986 + C18987) * C31138 * C13238 +
                    (C18737 * C924 + C18944 + C18944 + C18734 * C934 +
                     C18735 * C291 + C18945 + C18945 + C18733 * C311) *
                        C31138 * C13237) *
                       C30972 * C31017) *
                      C654 +
                  (((C18987 + C18986) * C31138 * C13237 +
                    (C18990 + C18991) * C31138 * C13238) *
                       C30972 * C31017 -
                   ((C18786 + C18787) * C31138 * C13238 +
                    (C18785 + C18784) * C31138 * C13237) *
                       C30972 * C31197) *
                      C655 +
                  (((C18787 + C18786) * C31138 * C13237 +
                    (C18788 + C18789) * C31138 * C13238) *
                       C30972 * C31197 -
                   ((C19336 + C19337) * C31138 * C13238 +
                    (C18991 + C18990) * C31138 * C13237) *
                       C30972 * C31017) *
                      C656 +
                  (((C19337 + C19336) * C31138 * C13237 +
                    (C18735 * C297 + C19330 + C19330 + C18733 * C317 +
                     C18737 * C928 + C19331 + C19331 + C18734 * C938) *
                        C31138 * C13238) *
                       C30972 * C31017 -
                   ((C18790 + C18791) * C31138 * C13238 +
                    (C18789 + C18788) * C31138 * C13237) *
                       C30972 * C31197) *
                      C31232)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C31138 * C13237 +
                    (C18784 + C18785) * C31138 * C13238) *
                       C30972 * C1414 -
                   ((C18986 + C18987) * C31138 * C13238 +
                    (C18737 * C924 + C18944 + C18944 + C18734 * C934 +
                     C18735 * C291 + C18945 + C18945 + C18733 * C311) *
                        C31138 * C13237) *
                       C30972 * C1415 +
                   ((C18735 * C292 + C18946 + C18946 + C18733 * C312 +
                     C18737 * C1285 + C18947 + C18947 + C18734 * C1303) *
                        C31138 * C13237 +
                    (C18988 + C18989) * C31138 * C13238) *
                       C30972 * C1416 -
                   ((C20236 + C20237) * C31138 * C13238 +
                    (C18737 * C1696 + C19932 + C19932 + C18734 * C1702 +
                     C18735 * C1148 + C19933 + C19933 + C18733 * C1160) *
                        C31138 * C13237) *
                       C30972 * C31238) *
                      C31183 +
                  (((C18987 + C18986) * C31138 * C13237 +
                    (C18990 + C18991) * C31138 * C13238) *
                       C30972 * C1415 -
                   ((C18786 + C18787) * C31138 * C13238 +
                    (C18785 + C18784) * C31138 * C13237) *
                       C30972 * C1414 -
                   ((C18992 + C18993) * C31138 * C13238 +
                    (C18989 + C18988) * C31138 * C13237) *
                       C30972 * C1416 +
                   ((C20237 + C20236) * C31138 * C13237 +
                    (C18735 * C1146 + C20230 + C20230 + C18733 * C1158 +
                     C18737 * C1698 + C20231 + C20231 + C18734 * C1704) *
                        C31138 * C13238) *
                       C30972 * C31238) *
                      C30937)) /
                    (p * q * std::sqrt(p + q));
    d2ee[96] += (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                 (((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                      C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                         C31138 * C13237 +
                     (C18784 + C18785) * C31138 * C13238) *
                        C31198 -
                    ((C19188 + C19189) * C31138 * C13238 +
                     (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                      C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                         C31138 * C13237) *
                        C31059) *
                       C31197 +
                   (((C18735 * C924 + C19674 + C19674 + C18733 * C934 +
                      C18737 * C1282 + C19675 + C19675 + C18734 * C1300) *
                         C31138 * C13237 +
                     (C19698 + C19699) * C31138 * C13238) *
                        C31059 -
                    ((C18986 + C18987) * C31138 * C13238 +
                     (C18737 * C924 + C18944 + C18944 + C18734 * C934 +
                      C18735 * C291 + C18945 + C18945 + C18733 * C311) *
                         C31138 * C13237) *
                        C31198) *
                       C31017) *
                      C286 +
                  ((((C19189 + C19188) * C31138 * C13237 +
                     (C19192 + C19193) * C31138 * C13238) *
                        C31059 -
                    ((C18786 + C18787) * C31138 * C13238 +
                     (C18785 + C18784) * C31138 * C13237) *
                        C31198) *
                       C31197 +
                   (((C18987 + C18986) * C31138 * C13237 +
                     (C18990 + C18991) * C31138 * C13238) *
                        C31198 -
                    ((C19700 + C19701) * C31138 * C13238 +
                     (C19699 + C19698) * C31138 * C13237) *
                        C31059) *
                       C31017) *
                      C287 +
                  ((((C18787 + C18786) * C31138 * C13237 +
                     (C18788 + C18789) * C31138 * C13238) *
                        C31198 -
                    ((C19478 + C19479) * C31138 * C13238 +
                     (C19193 + C19192) * C31138 * C13237) *
                        C31059) *
                       C31197 +
                   (((C19701 + C19700) * C31138 * C13237 +
                     (C18735 * C927 + C19688 + C19688 + C18733 * C937 +
                      C18737 * C2168 + C19689 + C19689 + C18734 * C2170) *
                         C31138 * C13238) *
                        C31059 -
                    ((C19336 + C19337) * C31138 * C13238 +
                     (C18991 + C18990) * C31138 * C13237) *
                        C31198) *
                       C31017) *
                      C31222)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C31138 * C13237 +
                    (C18784 + C18785) * C31138 * C13238) *
                       C31198 -
                   ((C19188 + C19189) * C31138 * C13238 +
                    (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                     C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                        C31138 * C13237) *
                       C31059) *
                      C1414 +
                  (((C18735 * C924 + C19674 + C19674 + C18733 * C934 +
                     C18737 * C1282 + C19675 + C19675 + C18734 * C1300) *
                        C31138 * C13237 +
                    (C19698 + C19699) * C31138 * C13238) *
                       C31059 -
                   ((C18986 + C18987) * C31138 * C13238 +
                    (C18737 * C924 + C18944 + C18944 + C18734 * C934 +
                     C18735 * C291 + C18945 + C18945 + C18733 * C311) *
                        C31138 * C13237) *
                       C31198) *
                      C1415 +
                  (((C18735 * C292 + C18946 + C18946 + C18733 * C312 +
                     C18737 * C1285 + C18947 + C18947 + C18734 * C1303) *
                        C31138 * C13237 +
                    (C18988 + C18989) * C31138 * C13238) *
                       C31198 -
                   ((C20442 + C20443) * C31138 * C13238 +
                    (C18737 * C1286 + C20090 + C20090 + C18734 * C1304 +
                     C18735 * C1285 + C20091 + C20091 + C18733 * C1303) *
                        C31138 * C13237) *
                       C31059) *
                      C1416 +
                  (((C18735 * C1696 + C20574 + C20574 + C18733 * C1702 +
                     C18737 * C5624 + C20575 + C20575 + C18734 * C5630) *
                        C31138 * C13237 +
                    (C18735 * C1697 + C20576 + C20576 + C18733 * C1703 +
                     C18737 * C6465 + C20577 + C20577 + C18734 * C6467) *
                        C31138 * C13238) *
                       C31059 -
                   ((C20236 + C20237) * C31138 * C13238 +
                    (C18737 * C1696 + C19932 + C19932 + C18734 * C1702 +
                     C18735 * C1148 + C19933 + C19933 + C18733 * C1160) *
                        C31138 * C13237) *
                       C31198) *
                      C31238) *
                 C30926) /
                    (p * q * std::sqrt(p + q));
    d2ee[97] += (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C31138 * C13237 +
                    (C18784 + C18785) * C31138 * C13238) *
                       C30972 * C31265 -
                   ((C18986 + C18987) * C31138 * C13238 +
                    (C18737 * C924 + C18944 + C18944 + C18734 * C934 +
                     C18735 * C291 + C18945 + C18945 + C18733 * C311) *
                        C31138 * C13237) *
                       C30972 * C31253 +
                   ((C18735 * C292 + C18946 + C18946 + C18733 * C312 +
                     C18737 * C1285 + C18947 + C18947 + C18734 * C1303) *
                        C31138 * C13237 +
                    (C18988 + C18989) * C31138 * C13238) *
                       C30972 * C31228) *
                      C286 +
                  (((C18987 + C18986) * C31138 * C13237 +
                    (C18990 + C18991) * C31138 * C13238) *
                       C30972 * C31253 -
                   ((C18786 + C18787) * C31138 * C13238 +
                    (C18785 + C18784) * C31138 * C13237) *
                       C30972 * C31265 -
                   ((C18992 + C18993) * C31138 * C13238 +
                    (C18989 + C18988) * C31138 * C13237) *
                       C30972 * C31228) *
                      C287 +
                  (((C18787 + C18786) * C31138 * C13237 +
                    (C18788 + C18789) * C31138 * C13238) *
                       C30972 * C31265 -
                   ((C18737 * C927 + C18966 + C18966 + C18734 * C937 +
                     C18735 * C295 + C18967 + C18967 + C18733 * C315) *
                        C31138 * C13238 +
                    (C18991 + C18990) * C31138 * C13237) *
                       C30972 * C31253 +
                   ((C18993 + C18992) * C31138 * C13237 +
                    (C18735 * C296 + C18968 + C18968 + C18733 * C316 +
                     C18737 * C1582 + C18969 + C18969 + C18734 * C1584) *
                        C31138 * C13238) *
                       C30972 * C31228) *
                      C31222)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                 (((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                    C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                       C31138 * C13237 +
                   (C18784 + C18785) * C31138 * C13238) *
                      C30972 * C30954 * C108 -
                  ((C18786 + C18787) * C31138 * C13238 +
                   (C18785 + C18784) * C31138 * C13237) *
                      C30972 * C30954 * C109 +
                  ((C18787 + C18786) * C31138 * C13237 +
                   (C18788 + C18789) * C31138 * C13238) *
                      C30972 * C30954 * C110 -
                  ((C18790 + C18791) * C31138 * C13238 +
                   (C18789 + C18788) * C31138 * C13237) *
                      C30972 * C30954 * C111 +
                  ((C18791 + C18790) * C31138 * C13237 +
                   (C18735 * C120 + C18766 + C18766 + C18733 * C134 +
                    C18737 * C768 + C18767 + C18767 + C18734 * C770) *
                       C31138 * C13238) *
                      C30972 * C30954 * C112)) /
                    (p * q * std::sqrt(p + q)) +
                (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C31138 * C13237 +
                    (C18784 + C18785) * C31138 * C13238) *
                       C31266 -
                   ((C19188 + C19189) * C31138 * C13238 +
                    (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                     C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                        C31138 * C13237) *
                       C31255 +
                   ((C18735 * C481 + C19148 + C19148 + C18733 * C501 +
                     C18737 * C2000 + C19149 + C19149 + C18734 * C2012) *
                        C31138 * C13237 +
                    (C19190 + C19191) * C31138 * C13238) *
                       C31231) *
                      C30954 * C286 +
                  (((C19189 + C19188) * C31138 * C13237 +
                    (C19192 + C19193) * C31138 * C13238) *
                       C31255 -
                   ((C18786 + C18787) * C31138 * C13238 +
                    (C18785 + C18784) * C31138 * C13237) *
                       C31266 -
                   ((C19194 + C19195) * C31138 * C13238 +
                    (C19191 + C19190) * C31138 * C13237) *
                       C31231) *
                      C30954 * C287 +
                  (((C18787 + C18786) * C31138 * C13237 +
                    (C18788 + C18789) * C31138 * C13238) *
                       C31266 -
                   ((C18737 * C485 + C19168 + C19168 + C18734 * C505 +
                     C18735 * C484 + C19169 + C19169 + C18733 * C504) *
                        C31138 * C13238 +
                    (C19193 + C19192) * C31138 * C13237) *
                       C31255 +
                   ((C19195 + C19194) * C31138 * C13237 +
                    (C18735 * C485 + C19170 + C19170 + C18733 * C505 +
                     C18737 * C2286 + C19171 + C19171 + C18734 * C2288) *
                        C31138 * C13238) *
                       C31231) *
                      C30954 * C31222)) /
                    (p * q * std::sqrt(p + q)) +
                (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C31138 * C13237 +
                    (C18784 + C18785) * C31138 * C13238) *
                       C30972 * C1072 -
                   ((C18986 + C18987) * C31138 * C13238 +
                    (C18737 * C924 + C18944 + C18944 + C18734 * C934 +
                     C18735 * C291 + C18945 + C18945 + C18733 * C311) *
                        C31138 * C13237) *
                       C30972 * C1073 +
                   ((C18735 * C292 + C18946 + C18946 + C18733 * C312 +
                     C18737 * C1285 + C18947 + C18947 + C18734 * C1303) *
                        C31138 * C13237 +
                    (C18988 + C18989) * C31138 * C13238) *
                       C30972 * C31228) *
                      C31262 +
                  (((C18987 + C18986) * C31138 * C13237 +
                    (C18990 + C18991) * C31138 * C13238) *
                       C30972 * C1073 -
                   ((C18786 + C18787) * C31138 * C13238 +
                    (C18785 + C18784) * C31138 * C13237) *
                       C30972 * C1072 -
                   ((C18992 + C18993) * C31138 * C13238 +
                    (C18989 + C18988) * C31138 * C13237) *
                       C30972 * C31228) *
                      C31249 +
                  (((C18787 + C18786) * C31138 * C13237 +
                    (C18788 + C18789) * C31138 * C13238) *
                       C30972 * C1072 -
                   ((C19336 + C19337) * C31138 * C13238 +
                    (C18991 + C18990) * C31138 * C13237) *
                       C30972 * C1073 +
                   ((C18993 + C18992) * C31138 * C13237 +
                    (C18735 * C296 + C18968 + C18968 + C18733 * C316 +
                     C18737 * C1582 + C18969 + C18969 + C18734 * C1584) *
                        C31138 * C13238) *
                       C30972 * C31228) *
                      C31222)) /
                    (p * q * std::sqrt(p + q)) +
                (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                 (((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                    C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                       C31138 * C13237 +
                   (C18784 + C18785) * C31138 * C13238) *
                      C30972 * C1140 -
                  ((C18986 + C18987) * C31138 * C13238 +
                   (C18737 * C924 + C18944 + C18944 + C18734 * C934 +
                    C18735 * C291 + C18945 + C18945 + C18733 * C311) *
                       C31138 * C13237) *
                      C30972 * C1141 +
                  ((C18735 * C292 + C18946 + C18946 + C18733 * C312 +
                    C18737 * C1285 + C18947 + C18947 + C18734 * C1303) *
                       C31138 * C13237 +
                   (C18988 + C18989) * C31138 * C13238) *
                      C30972 * C1142 -
                  ((C18737 * C1697 + C19930 + C19930 + C18734 * C1703 +
                    C18735 * C1147 + C19931 + C19931 + C18733 * C1159) *
                       C31138 * C13238 +
                   (C18737 * C1696 + C19932 + C19932 + C18734 * C1702 +
                    C18735 * C1148 + C19933 + C19933 + C18733 * C1160) *
                       C31138 * C13237) *
                      C30972 * C1143 +
                  ((C18735 * C1149 + C19934 + C19934 + C18733 * C1161 +
                    C18737 * C5625 + C19935 + C19935 + C18734 * C5631) *
                       C31138 * C13237 +
                   (C18735 * C1150 + C19936 + C19936 + C18733 * C1162 +
                    C18737 * C5909 + C19937 + C19937 + C18734 * C5911) *
                       C31138 * C13238) *
                      C30972 * C1144) *
                 C30926) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C31138 * C13237 +
                    (C18784 + C18785) * C31138 * C13238) *
                       C31266 -
                   ((C19188 + C19189) * C31138 * C13238 +
                    (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                     C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                        C31138 * C13237) *
                       C31255 +
                   ((C18735 * C481 + C19148 + C19148 + C18733 * C501 +
                     C18737 * C2000 + C19149 + C19149 + C18734 * C2012) *
                        C31138 * C13237 +
                    (C19190 + C19191) * C31138 * C13238) *
                       C31231) *
                      C1072 +
                  (((C18735 * C924 + C19674 + C19674 + C18733 * C934 +
                     C18737 * C1282 + C19675 + C19675 + C18734 * C1300) *
                        C31138 * C13237 +
                    (C19698 + C19699) * C31138 * C13238) *
                       C31255 -
                   ((C18986 + C18987) * C31138 * C13238 +
                    (C18737 * C924 + C18944 + C18944 + C18734 * C934 +
                     C18735 * C291 + C18945 + C18945 + C18733 * C311) *
                        C31138 * C13237) *
                       C31266 -
                   ((C18737 * C2401 + C20084 + C20084 + C18734 * C2407 +
                     C18735 * C1281 + C20085 + C20085 + C18733 * C1299) *
                        C31138 * C13238 +
                    (C18737 * C2400 + C20086 + C20086 + C18734 * C2406 +
                     C18735 * C1282 + C20087 + C20087 + C18733 * C1300) *
                        C31138 * C13237) *
                       C31231) *
                      C1073 +
                  (((C18735 * C292 + C18946 + C18946 + C18733 * C312 +
                     C18737 * C1285 + C18947 + C18947 + C18734 * C1303) *
                        C31138 * C13237 +
                    (C18988 + C18989) * C31138 * C13238) *
                       C31266 -
                   ((C18737 * C1287 + C20088 + C20088 + C18734 * C1305 +
                     C18735 * C1284 + C20089 + C20089 + C18733 * C1302) *
                        C31138 * C13238 +
                    (C18737 * C1286 + C20090 + C20090 + C18734 * C1304 +
                     C18735 * C1285 + C20091 + C20091 + C18733 * C1303) *
                        C31138 * C13237) *
                       C31255 +
                   ((C18735 * C1286 + C20092 + C20092 + C18733 * C1304 +
                     C18737 * C6307 + C20093 + C20093 + C18734 * C6313) *
                        C31138 * C13237 +
                    (C18735 * C1287 + C20094 + C20094 + C18733 * C1305 +
                     C18737 * C6572 + C20095 + C20095 + C18734 * C6574) *
                        C31138 * C13238) *
                       C31231) *
                      C31228) *
                 C30926) /
                    (p * q * std::sqrt(p + q));
    d2ee[98] += (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C31138 * C13237 +
                    (C18784 + C18785) * C31138 * C13238) *
                       C31198 -
                   ((C19188 + C19189) * C31138 * C13238 +
                    (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                     C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                        C31138 * C13237) *
                       C31059) *
                      C30954 * C654 +
                  (((C19189 + C19188) * C31138 * C13237 +
                    (C19192 + C19193) * C31138 * C13238) *
                       C31059 -
                   ((C18786 + C18787) * C31138 * C13238 +
                    (C18785 + C18784) * C31138 * C13237) *
                       C31198) *
                      C30954 * C655 +
                  (((C18787 + C18786) * C31138 * C13237 +
                    (C18788 + C18789) * C31138 * C13238) *
                       C31198 -
                   ((C19478 + C19479) * C31138 * C13238 +
                    (C19193 + C19192) * C31138 * C13237) *
                       C31059) *
                      C30954 * C656 +
                  (((C19479 + C19478) * C31138 * C13237 +
                    (C18735 * C486 + C19472 + C19472 + C18733 * C506 +
                     C18737 * C487 + C19473 + C19473 + C18734 * C507) *
                        C31138 * C13238) *
                       C31059 -
                   ((C18790 + C18791) * C31138 * C13238 +
                    (C18789 + C18788) * C31138 * C13237) *
                       C31198) *
                      C30954 * C31232)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                 (((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                      C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                         C31138 * C13237 +
                     (C18784 + C18785) * C31138 * C13238) *
                        C31198 -
                    ((C19188 + C19189) * C31138 * C13238 +
                     (C18737 * C481 + C19146 + C19146 + C18734 * C501 +
                      C18735 * C480 + C19147 + C19147 + C18733 * C500) *
                         C31138 * C13237) *
                        C31059) *
                       C1072 +
                   (((C18735 * C924 + C19674 + C19674 + C18733 * C934 +
                      C18737 * C1282 + C19675 + C19675 + C18734 * C1300) *
                         C31138 * C13237 +
                     (C19698 + C19699) * C31138 * C13238) *
                        C31059 -
                    ((C18986 + C18987) * C31138 * C13238 +
                     (C18737 * C924 + C18944 + C18944 + C18734 * C934 +
                      C18735 * C291 + C18945 + C18945 + C18733 * C311) *
                         C31138 * C13237) *
                        C31198) *
                       C1073 +
                   (((C18735 * C292 + C18946 + C18946 + C18733 * C312 +
                      C18737 * C1285 + C18947 + C18947 + C18734 * C1303) *
                         C31138 * C13237 +
                     (C18988 + C18989) * C31138 * C13238) *
                        C31198 -
                    ((C20442 + C20443) * C31138 * C13238 +
                     (C18737 * C1286 + C20090 + C20090 + C18734 * C1304 +
                      C18735 * C1285 + C20091 + C20091 + C18733 * C1303) *
                         C31138 * C13237) *
                        C31059) *
                       C31228) *
                      C31183 +
                  ((((C19189 + C19188) * C31138 * C13237 +
                     (C19192 + C19193) * C31138 * C13238) *
                        C31059 -
                    ((C18786 + C18787) * C31138 * C13238 +
                     (C18785 + C18784) * C31138 * C13237) *
                        C31198) *
                       C1072 +
                   (((C18987 + C18986) * C31138 * C13237 +
                     (C18990 + C18991) * C31138 * C13238) *
                        C31198 -
                    ((C19700 + C19701) * C31138 * C13238 +
                     (C19699 + C19698) * C31138 * C13237) *
                        C31059) *
                       C1073 +
                   (((C20443 + C20442) * C31138 * C13237 +
                     (C18735 * C1283 + C20436 + C20436 + C18733 * C1301 +
                      C18737 * C1288 + C20437 + C20437 + C18734 * C1306) *
                         C31138 * C13238) *
                        C31059 -
                    ((C18992 + C18993) * C31138 * C13238 +
                     (C18989 + C18988) * C31138 * C13237) *
                        C31198) *
                       C31228) *
                      C30937)) /
                    (p * q * std::sqrt(p + q));
    d2ee[99] += (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
                 (((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                    C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                       C31138 * C13237 +
                   (C18784 + C18785) * C31138 * C13238) *
                      C30972 * C30954 * C108 -
                  ((C18786 + C18787) * C31138 * C13238 +
                   (C18785 + C18784) * C31138 * C13237) *
                      C30972 * C30954 * C109 +
                  ((C18787 + C18786) * C31138 * C13237 +
                   (C18788 + C18789) * C31138 * C13238) *
                      C30972 * C30954 * C110 -
                  ((C18790 + C18791) * C31138 * C13238 +
                   (C18789 + C18788) * C31138 * C13237) *
                      C30972 * C30954 * C111 +
                  ((C18791 + C18790) * C31138 * C13237 +
                   (C18735 * C120 + C18766 + C18766 + C18733 * C134 +
                    C18737 * C768 + C18767 + C18767 + C18734 * C770) *
                       C31138 * C13238) *
                      C30972 * C30954 * C112)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C31138 * C13237 +
                    (C18784 + C18785) * C31138 * C13238) *
                       C30972 * C31265 -
                   ((C18986 + C18987) * C31138 * C13238 +
                    (C18737 * C924 + C18944 + C18944 + C18734 * C934 +
                     C18735 * C291 + C18945 + C18945 + C18733 * C311) *
                        C31138 * C13237) *
                       C30972 * C31253 +
                   ((C18735 * C292 + C18946 + C18946 + C18733 * C312 +
                     C18737 * C1285 + C18947 + C18947 + C18734 * C1303) *
                        C31138 * C13237 +
                    (C18988 + C18989) * C31138 * C13238) *
                       C30972 * C31228) *
                      C286 +
                  (((C18987 + C18986) * C31138 * C13237 +
                    (C18990 + C18991) * C31138 * C13238) *
                       C30972 * C31253 -
                   ((C18786 + C18787) * C31138 * C13238 +
                    (C18785 + C18784) * C31138 * C13237) *
                       C30972 * C31265 -
                   ((C18992 + C18993) * C31138 * C13238 +
                    (C18989 + C18988) * C31138 * C13237) *
                       C30972 * C31228) *
                      C287 +
                  (((C18787 + C18786) * C31138 * C13237 +
                    (C18788 + C18789) * C31138 * C13238) *
                       C30972 * C31265 -
                   ((C18737 * C927 + C18966 + C18966 + C18734 * C937 +
                     C18735 * C295 + C18967 + C18967 + C18733 * C315) *
                        C31138 * C13238 +
                    (C18991 + C18990) * C31138 * C13237) *
                       C30972 * C31253 +
                   ((C18993 + C18992) * C31138 * C13237 +
                    (C18735 * C296 + C18968 + C18968 + C18733 * C316 +
                     C18737 * C1582 + C18969 + C18969 + C18734 * C1584) *
                        C31138 * C13238) *
                       C30972 * C31228) *
                      C31222)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
                 ((((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                     C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                        C31138 * C13237 +
                    (C18784 + C18785) * C31138 * C13238) *
                       C30972 * C1072 -
                   ((C18986 + C18987) * C31138 * C13238 +
                    (C18737 * C924 + C18944 + C18944 + C18734 * C934 +
                     C18735 * C291 + C18945 + C18945 + C18733 * C311) *
                        C31138 * C13237) *
                       C30972 * C1073 +
                   ((C18735 * C292 + C18946 + C18946 + C18733 * C312 +
                     C18737 * C1285 + C18947 + C18947 + C18734 * C1303) *
                        C31138 * C13237 +
                    (C18988 + C18989) * C31138 * C13238) *
                       C30972 * C31228) *
                      C31262 +
                  (((C18987 + C18986) * C31138 * C13237 +
                    (C18990 + C18991) * C31138 * C13238) *
                       C30972 * C1073 -
                   ((C18786 + C18787) * C31138 * C13238 +
                    (C18785 + C18784) * C31138 * C13237) *
                       C30972 * C1072 -
                   ((C18992 + C18993) * C31138 * C13238 +
                    (C18989 + C18988) * C31138 * C13237) *
                       C30972 * C31228) *
                      C31249 +
                  (((C18787 + C18786) * C31138 * C13237 +
                    (C18788 + C18789) * C31138 * C13238) *
                       C30972 * C1072 -
                   ((C19336 + C19337) * C31138 * C13238 +
                    (C18991 + C18990) * C31138 * C13237) *
                       C30972 * C1073 +
                   ((C18993 + C18992) * C31138 * C13237 +
                    (C18735 * C296 + C18968 + C18968 + C18733 * C316 +
                     C18737 * C1582 + C18969 + C18969 + C18734 * C1584) *
                        C31138 * C13238) *
                       C30972 * C31228) *
                      C31222)) /
                    (p * q * std::sqrt(p + q)) +
                (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
                 (((C18735 * C115 + C18740 + C18740 + C18733 * C129 +
                    C18737 * C480 + C18741 + C18741 + C18734 * C500) *
                       C31138 * C13237 +
                   (C18784 + C18785) * C31138 * C13238) *
                      C30972 * C1140 -
                  ((C18986 + C18987) * C31138 * C13238 +
                   (C18737 * C924 + C18944 + C18944 + C18734 * C934 +
                    C18735 * C291 + C18945 + C18945 + C18733 * C311) *
                       C31138 * C13237) *
                      C30972 * C1141 +
                  ((C18735 * C292 + C18946 + C18946 + C18733 * C312 +
                    C18737 * C1285 + C18947 + C18947 + C18734 * C1303) *
                       C31138 * C13237 +
                   (C18988 + C18989) * C31138 * C13238) *
                      C30972 * C1142 -
                  ((C18737 * C1697 + C19930 + C19930 + C18734 * C1703 +
                    C18735 * C1147 + C19931 + C19931 + C18733 * C1159) *
                       C31138 * C13238 +
                   (C18737 * C1696 + C19932 + C19932 + C18734 * C1702 +
                    C18735 * C1148 + C19933 + C19933 + C18733 * C1160) *
                       C31138 * C13237) *
                      C30972 * C1143 +
                  ((C18735 * C1149 + C19934 + C19934 + C18733 * C1161 +
                    C18737 * C5625 + C19935 + C19935 + C18734 * C5631) *
                       C31138 * C13237 +
                   (C18735 * C1150 + C19936 + C19936 + C18733 * C1162 +
                    C18737 * C5909 + C19937 + C19937 + C18734 * C5911) *
                       C31138 * C13238) *
                      C30972 * C1144) *
                 C30926) /
                    (p * q * std::sqrt(p + q));
    d2ee[100] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C30972 * C31013 -
           (C360 * C105 + C361 * C104 +
            (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
               C30972 * C31020 +
           ((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
            C362 * C104 + C363 * C105) *
               C30972 * C2878) *
              C30931 +
          ((C361 * C103 + C360 * C104 + C364 * C105) * C30972 * C31020 -
           (C171 * C105 + C170 * C104 + C169 * C103) * C30972 * C31013 -
           (C365 * C105 + C363 * C104 + C362 * C103) * C30972 * C2878) *
              C30940 +
          ((C170 * C103 + C171 * C104 + C172 * C105) * C30972 * C31013 -
           (C668 * C105 + C364 * C104 + C360 * C103) * C30972 * C31020 +
           (C363 * C103 + C365 * C104 +
            (C113 * C298 + C341 + C341 + C31151 * C318) * C31138 * C105) *
               C30972 * C2878) *
              C2881)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C30972 * C31013 -
           (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C30972 *
               C31020 +
           (C4861 * C4733 + C4862 * C4734 + C5513 * C4735) * C30904 * C30972 *
               C2878) *
              C30931 +
          ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C30972 *
               C31020 -
           (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C30972 *
               C31013 -
           (C5763 * C4735 + C1434 * C4734 + C356 * C4733) * C30904 * C30972 *
               C2878) *
              C30940 +
          ((C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C30972 *
               C31013 -
           (C1433 * C4735 + C357 * C4734 + C354 * C4733) * C30904 * C30972 *
               C31020 +
           (C357 * C4733 + C1433 * C4734 +
            (C113 * C1151 + C1170 + C1170 + C31151 * C1163) * C4735) *
               C30904 * C30972 * C2878) *
              C2881)) /
            (p * q * std::sqrt(p + q));
    d2ee[101] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
             C169 * C104 + C170 * C105) *
                C31198 -
            (C549 * C105 + C550 * C104 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
                C31059) *
               C31013 +
           (((C113 * C924 + C940 + C940 + C31151 * C934) * C31138 * C103 +
             C960 * C104 + C961 * C105) *
                C31059 -
            (C360 * C105 + C361 * C104 +
             (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
                C31198) *
               C31020 +
           (((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
             C362 * C104 + C363 * C105) *
                C31198 -
            (C1597 * C105 + C1598 * C104 +
             (C113 * C1285 + C1313 + C1313 + C31151 * C1303) * C31138 * C103) *
                C31059) *
               C2878) *
              C2618 +
          (((C550 * C103 + C549 * C104 + C553 * C105) * C31059 -
            (C171 * C105 + C170 * C104 + C169 * C103) * C31198) *
               C31013 +
           ((C361 * C103 + C360 * C104 + C364 * C105) * C31198 -
            (C962 * C105 + C961 * C104 + C960 * C103) * C31059) *
               C31020 +
           ((C1598 * C103 + C1597 * C104 +
             (C113 * C1582 + C1590 + C1590 + C31151 * C1584) * C31138 * C105) *
                C31059 -
            (C365 * C105 + C363 * C104 + C362 * C103) * C31198) *
               C2878) *
              C30937)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
             C4860 * C4734 + C4861 * C4735) *
                C30904 * C31198 -
            (C5323 * C4735 + C5324 * C4734 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
                C30904 * C31059) *
               C31013 +
           ((C5324 * C4733 + C5323 * C4734 + C5655 * C4735) * C30904 * C31059 -
            (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C31198) *
               C31020 +
           ((C4861 * C4733 + C4862 * C4734 + C5513 * C4735) * C30904 * C31198 -
            (C6025 * C4735 + C5655 * C4734 + C5323 * C4733) * C30904 * C31059) *
               C2878) *
              C2618 +
          (((C544 * C4733 + C957 * C4734 + C1596 * C4735) * C30904 * C31059 -
            (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C31198) *
               C31013 +
           ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C31198 -
            (C5918 * C4735 + C1596 * C4734 + C957 * C4733) * C30904 * C31059) *
               C31020 +
           ((C1596 * C4733 + C5918 * C4734 +
             (C113 * C5909 + C5915 + C5915 + C31151 * C5911) * C4735) *
                C30904 * C31059 -
            (C5763 * C4735 + C1434 * C4734 + C356 * C4733) * C30904 * C31198) *
               C2878) *
              C30937)) /
            (p * q * std::sqrt(p + q));
    d2ee[102] +=
        (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C30972 * C31272 -
           (C360 * C105 + C361 * C104 +
            (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
               C30972 * C31268 +
           ((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
            C362 * C104 + C363 * C105) *
               C30972 * C31258 -
           (C1435 * C105 + C1436 * C104 +
            (C113 * C1148 + C1167 + C1167 + C31151 * C1160) * C31138 * C103) *
               C30972 * C31238) *
              C2618 +
          ((C361 * C103 + C360 * C104 + C364 * C105) * C30972 * C31268 -
           (C171 * C105 + C170 * C104 + C169 * C103) * C30972 * C31272 -
           (C365 * C105 + C363 * C104 + C362 * C103) * C30972 * C31258 +
           (C1436 * C103 + C1435 * C104 +
            (C113 * C1420 + C1428 + C1428 + C31151 * C1422) * C31138 * C105) *
               C30972 * C31238) *
              C30937)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C30972 * C2510 -
           (C360 * C105 + C361 * C104 +
            (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
               C30972 * C31017) *
              C31271 +
          ((C361 * C103 + C360 * C104 + C364 * C105) * C30972 * C31017 -
           (C171 * C105 + C170 * C104 + C169 * C103) * C30972 * C2510) *
              C31264 +
          ((C170 * C103 + C171 * C104 + C172 * C105) * C30972 * C2510 -
           (C668 * C105 + C364 * C104 + C360 * C103) * C30972 * C31017) *
              C31251 +
          ((C364 * C103 + C668 * C104 +
            (C113 * C658 + C664 + C664 + C31151 * C660) * C31138 * C105) *
               C30972 * C31017 -
           (C173 * C105 + C172 * C104 + C171 * C103) * C30972 * C2510) *
              C31232)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
             C169 * C104 + C170 * C105) *
                C31266 -
            (C549 * C105 + C550 * C104 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
                C31255 +
            ((C113 * C481 + C516 + C516 + C31151 * C501) * C31138 * C103 +
             C551 * C104 + C552 * C105) *
                C31231) *
               C2510 +
           (((C113 * C924 + C940 + C940 + C31151 * C934) * C31138 * C103 +
             C960 * C104 + C961 * C105) *
                C31255 -
            (C360 * C105 + C361 * C104 +
             (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
                C31266 -
            (C2183 * C105 + C2184 * C104 +
             (C113 * C1282 + C1310 + C1310 + C31151 * C1300) * C31138 * C103) *
                C31231) *
               C31017) *
              C2618 +
          (((C550 * C103 + C549 * C104 + C553 * C105) * C31255 -
            (C171 * C105 + C170 * C104 + C169 * C103) * C31266 -
            (C554 * C105 + C552 * C104 + C551 * C103) * C31231) *
               C2510 +
           ((C361 * C103 + C360 * C104 + C364 * C105) * C31266 -
            (C962 * C105 + C961 * C104 + C960 * C103) * C31255 +
            (C2184 * C103 + C2183 * C104 +
             (C113 * C2168 + C2176 + C2176 + C31151 * C2170) * C31138 * C105) *
                C31231) *
               C31017) *
              C30937)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C30972 * C2510 -
           (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C30972 *
               C31017) *
              C31271 +
          ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C30972 *
               C31017 -
           (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C30972 *
               C2510) *
              C31264 +
          ((C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C30972 *
               C2510 -
           (C1433 * C4735 + C357 * C4734 + C354 * C4733) * C30904 * C30972 *
               C31017) *
              C31251 +
          ((C358 * C4733 + C359 * C4734 +
            (C113 * C1420 + C1428 + C1428 + C31151 * C1422) * C4735) *
               C30904 * C30972 * C31017 -
           (C359 * C4735 + C358 * C4734 + C166 * C4733) * C30904 * C30972 *
               C2510) *
              C31232)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C30972 * C31272 -
           (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C30972 *
               C31268 +
           (C4861 * C4733 + C4862 * C4734 + C5513 * C4735) * C30904 * C30972 *
               C31258 -
           (C5514 * C4735 + C5513 * C4734 + C4862 * C4733) * C30904 * C30972 *
               C31238) *
              C2618 +
          ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C30972 *
               C31268 -
           (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C30972 *
               C31272 -
           (C5763 * C4735 + C1434 * C4734 + C356 * C4733) * C30904 * C30972 *
               C31258 +
           (C1434 * C4733 + C5763 * C4734 +
            (C113 * C5754 + C5760 + C5760 + C31151 * C5756) * C4735) *
               C30904 * C30972 * C31238) *
              C30937)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
             C4860 * C4734 + C4861 * C4735) *
                C30904 * C31266 -
            (C5323 * C4735 + C5324 * C4734 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
                C30904 * C31255 +
            ((C113 * C481 + C516 + C516 + C31151 * C501) * C4733 +
             C5653 * C4734 + C5654 * C4735) *
                C30904 * C31231) *
               C2510 +
           ((C5324 * C4733 + C5323 * C4734 + C5655 * C4735) * C30904 * C31255 -
            (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C31266 -
            (C5656 * C4735 + C5654 * C4734 + C5653 * C4733) * C30904 * C31231) *
               C31017) *
              C2618 +
          (((C544 * C4733 + C957 * C4734 + C1596 * C4735) * C30904 * C31255 -
            (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C31266 -
            (C6474 * C4735 + C2182 * C4734 + C545 * C4733) * C30904 * C31231) *
               C2510 +
           ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C31266 -
            (C5918 * C4735 + C1596 * C4734 + C957 * C4733) * C30904 * C31255 +
            (C2182 * C4733 + C6474 * C4734 +
             (C113 * C6465 + C6471 + C6471 + C31151 * C6467) * C4735) *
                C30904 * C31231) *
               C31017) *
              C30937)) /
            (p * q * std::sqrt(p + q));
    d2ee[103] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
             C169 * C104 + C170 * C105) *
                C31198 -
            (C549 * C105 + C550 * C104 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
                C31059) *
               C2510 +
           (((C113 * C924 + C940 + C940 + C31151 * C934) * C31138 * C103 +
             C960 * C104 + C961 * C105) *
                C31059 -
            (C360 * C105 + C361 * C104 +
             (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
                C31198) *
               C31017) *
              C30931 +
          (((C550 * C103 + C549 * C104 + C553 * C105) * C31059 -
            (C171 * C105 + C170 * C104 + C169 * C103) * C31198) *
               C2510 +
           ((C361 * C103 + C360 * C104 + C364 * C105) * C31198 -
            (C962 * C105 + C961 * C104 + C960 * C103) * C31059) *
               C31017) *
              C30940 +
          (((C170 * C103 + C171 * C104 + C172 * C105) * C31198 -
            (C778 * C105 + C553 * C104 + C549 * C103) * C31059) *
               C2510 +
           ((C961 * C103 + C962 * C104 +
             (C113 * C928 + C950 + C950 + C31151 * C938) * C31138 * C105) *
                C31059 -
            (C668 * C105 + C364 * C104 + C360 * C103) * C31198) *
               C31017) *
              C2881)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
             C4860 * C4734 + C4861 * C4735) *
                C30904 * C31198 -
            (C5323 * C4735 + C5324 * C4734 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
                C30904 * C31059) *
               C2510 +
           ((C5324 * C4733 + C5323 * C4734 + C5655 * C4735) * C30904 * C31059 -
            (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C31198) *
               C31017) *
              C30931 +
          (((C544 * C4733 + C957 * C4734 + C1596 * C4735) * C30904 * C31059 -
            (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C31198) *
               C2510 +
           ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C31198 -
            (C5918 * C4735 + C1596 * C4734 + C957 * C4733) * C30904 * C31059) *
               C31017) *
              C30940 +
          (((C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C31198 -
            (C1595 * C4735 + C958 * C4734 + C543 * C4733) * C30904 * C31059) *
               C2510 +
           ((C958 * C4733 + C1595 * C4734 +
             (C113 * C1698 + C1708 + C1708 + C31151 * C1704) * C4735) *
                C30904 * C31059 -
            (C1433 * C4735 + C357 * C4734 + C354 * C4733) * C30904 * C31198) *
               C31017) *
              C2881)) /
            (p * q * std::sqrt(p + q));
    d2ee[104] +=
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C30972 * C2510 -
           (C360 * C105 + C361 * C104 +
            (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
               C30972 * C31017) *
              C31271 +
          ((C361 * C103 + C360 * C104 + C364 * C105) * C30972 * C31017 -
           (C171 * C105 + C170 * C104 + C169 * C103) * C30972 * C2510) *
              C31264 +
          ((C170 * C103 + C171 * C104 + C172 * C105) * C30972 * C2510 -
           (C668 * C105 + C364 * C104 + C360 * C103) * C30972 * C31017) *
              C31251 +
          ((C364 * C103 + C668 * C104 +
            (C113 * C658 + C664 + C664 + C31151 * C660) * C31138 * C105) *
               C30972 * C31017 -
           (C173 * C105 + C172 * C104 + C171 * C103) * C30972 * C2510) *
              C31232)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C30972 * C31272 -
           (C360 * C105 + C361 * C104 +
            (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
               C30972 * C31268 +
           ((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
            C362 * C104 + C363 * C105) *
               C30972 * C31258 -
           (C1435 * C105 + C1436 * C104 +
            (C113 * C1148 + C1167 + C1167 + C31151 * C1160) * C31138 * C103) *
               C30972 * C31238) *
              C2618 +
          ((C361 * C103 + C360 * C104 + C364 * C105) * C30972 * C31268 -
           (C171 * C105 + C170 * C104 + C169 * C103) * C30972 * C31272 -
           (C365 * C105 + C363 * C104 + C362 * C103) * C30972 * C31258 +
           (C1436 * C103 + C1435 * C104 +
            (C113 * C1420 + C1428 + C1428 + C31151 * C1422) * C31138 * C105) *
               C30972 * C31238) *
              C30937)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C30972 * C2510 -
           (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C30972 *
               C31017) *
              C31271 +
          ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C30972 *
               C31017 -
           (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C30972 *
               C2510) *
              C31264 +
          ((C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C30972 *
               C2510 -
           (C1433 * C4735 + C357 * C4734 + C354 * C4733) * C30904 * C30972 *
               C31017) *
              C31251 +
          ((C358 * C4733 + C359 * C4734 +
            (C113 * C1420 + C1428 + C1428 + C31151 * C1422) * C4735) *
               C30904 * C30972 * C31017 -
           (C359 * C4735 + C358 * C4734 + C166 * C4733) * C30904 * C30972 *
               C2510) *
              C31232)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C30972 * C31272 -
           (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C30972 *
               C31268 +
           (C4861 * C4733 + C4862 * C4734 + C5513 * C4735) * C30904 * C30972 *
               C31258 -
           (C5514 * C4735 + C5513 * C4734 + C4862 * C4733) * C30904 * C30972 *
               C31238) *
              C2618 +
          ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C30972 *
               C31268 -
           (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C30972 *
               C31272 -
           (C5763 * C4735 + C1434 * C4734 + C356 * C4733) * C30904 * C30972 *
               C31258 +
           (C1434 * C4733 + C5763 * C4734 +
            (C113 * C5754 + C5760 + C5760 + C31151 * C5756) * C4735) *
               C30904 * C30972 * C31238) *
              C30937)) /
            (p * q * std::sqrt(p + q));
    d2ee[105] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
             C169 * C104 + C170 * C105) *
                C3272 -
            (C549 * C105 + C550 * C104 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
                C31059) *
               C31013 +
           (((C113 * C924 + C940 + C940 + C31151 * C934) * C31138 * C103 +
             C960 * C104 + C961 * C105) *
                C31059 -
            (C360 * C105 + C361 * C104 +
             (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
                C3272) *
               C31020 +
           (((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
             C362 * C104 + C363 * C105) *
                C3272 -
            (C1597 * C105 + C1598 * C104 +
             (C113 * C1285 + C1313 + C1313 + C31151 * C1303) * C31138 * C103) *
                C31059) *
               C2878) *
              C31183 +
          (((C550 * C103 + C549 * C104 + C553 * C105) * C31059 -
            (C171 * C105 + C170 * C104 + C169 * C103) * C3272) *
               C31013 +
           ((C361 * C103 + C360 * C104 + C364 * C105) * C3272 -
            (C962 * C105 + C961 * C104 + C960 * C103) * C31059) *
               C31020 +
           ((C1598 * C103 + C1597 * C104 +
             (C113 * C1582 + C1590 + C1590 + C31151 * C1584) * C31138 * C105) *
                C31059 -
            (C365 * C105 + C363 * C104 + C362 * C103) * C3272) *
               C2878) *
              C30937)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
             C4860 * C4734 + C4861 * C4735) *
                C30904 * C3272 -
            (C5323 * C4735 + C5324 * C4734 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
                C30904 * C31059) *
               C31013 +
           ((C5324 * C4733 + C5323 * C4734 + C5655 * C4735) * C30904 * C31059 -
            (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C3272) *
               C31020 +
           ((C4861 * C4733 + C4862 * C4734 + C5513 * C4735) * C30904 * C3272 -
            (C6025 * C4735 + C5655 * C4734 + C5323 * C4733) * C30904 * C31059) *
               C2878) *
              C31183 +
          (((C544 * C4733 + C957 * C4734 + C1596 * C4735) * C30904 * C31059 -
            (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C3272) *
               C31013 +
           ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C3272 -
            (C5918 * C4735 + C1596 * C4734 + C957 * C4733) * C30904 * C31059) *
               C31020 +
           ((C1596 * C4733 + C5918 * C4734 +
             (C113 * C5909 + C5915 + C5915 + C31151 * C5911) * C4735) *
                C30904 * C31059 -
            (C5763 * C4735 + C1434 * C4734 + C356 * C4733) * C30904 * C3272) *
               C2878) *
              C30937)) /
            (p * q * std::sqrt(p + q));
    d2ee[106] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C31055 -
           (C549 * C105 + C550 * C104 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
               C31062 +
           ((C113 * C481 + C516 + C516 + C31151 * C501) * C31138 * C103 +
            C551 * C104 + C552 * C105) *
               C3780) *
              C31013 +
          (((C113 * C924 + C940 + C940 + C31151 * C934) * C31138 * C103 +
            C960 * C104 + C961 * C105) *
               C31062 -
           (C360 * C105 + C361 * C104 +
            (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
               C31055 -
           (C2183 * C105 + C2184 * C104 +
            (C113 * C1282 + C1310 + C1310 + C31151 * C1300) * C31138 * C103) *
               C3780) *
              C31020 +
          (((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
            C362 * C104 + C363 * C105) *
               C31055 -
           (C1597 * C105 + C1598 * C104 +
            (C113 * C1285 + C1313 + C1313 + C31151 * C1303) * C31138 * C103) *
               C31062 +
           ((C113 * C1286 + C1314 + C1314 + C31151 * C1304) * C31138 * C103 +
            (C113 * C1287 + C1315 + C1315 + C31151 * C1305) * C31138 * C104 +
            (C113 * C1288 + C1316 + C1316 + C31151 * C1306) * C31138 * C105) *
               C3780) *
              C2878) *
         C30926) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C31055 -
           (C5323 * C4735 + C5324 * C4734 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
               C30904 * C31062 +
           ((C113 * C481 + C516 + C516 + C31151 * C501) * C4733 +
            C5653 * C4734 + C5654 * C4735) *
               C30904 * C3780) *
              C31013 +
          ((C5324 * C4733 + C5323 * C4734 + C5655 * C4735) * C30904 * C31062 -
           (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C31055 -
           (C5656 * C4735 + C5654 * C4734 + C5653 * C4733) * C30904 * C3780) *
              C31020 +
          ((C4861 * C4733 + C4862 * C4734 + C5513 * C4735) * C30904 * C31055 -
           (C6025 * C4735 + C5655 * C4734 + C5323 * C4733) * C30904 * C31062 +
           (C5654 * C4733 + C5656 * C4734 +
            (C113 * C5626 + C5644 + C5644 + C31151 * C5632) * C4735) *
               C30904 * C3780) *
              C2878) *
         C30926) /
            (p * q * std::sqrt(p + q));
    d2ee[107] +=
        (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C3272 -
           (C549 * C105 + C550 * C104 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
               C31059) *
              C31272 +
          (((C113 * C924 + C940 + C940 + C31151 * C934) * C31138 * C103 +
            C960 * C104 + C961 * C105) *
               C31059 -
           (C360 * C105 + C361 * C104 +
            (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
               C3272) *
              C31268 +
          (((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
            C362 * C104 + C363 * C105) *
               C3272 -
           (C1597 * C105 + C1598 * C104 +
            (C113 * C1285 + C1313 + C1313 + C31151 * C1303) * C31138 * C103) *
               C31059) *
              C31258 +
          (((C113 * C1696 + C1706 + C1706 + C31151 * C1702) * C31138 * C103 +
            (C113 * C1697 + C1707 + C1707 + C31151 * C1703) * C31138 * C104 +
            (C113 * C1698 + C1708 + C1708 + C31151 * C1704) * C31138 * C105) *
               C31059 -
           (C1435 * C105 + C1436 * C104 +
            (C113 * C1148 + C1167 + C1167 + C31151 * C1160) * C31138 * C103) *
               C3272) *
              C31238) *
         C30926) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
             C169 * C104 + C170 * C105) *
                C3272 -
            (C549 * C105 + C550 * C104 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
                C31059) *
               C2510 +
           (((C113 * C924 + C940 + C940 + C31151 * C934) * C31138 * C103 +
             C960 * C104 + C961 * C105) *
                C31059 -
            (C360 * C105 + C361 * C104 +
             (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
                C3272) *
               C31017) *
              C31262 +
          (((C550 * C103 + C549 * C104 + C553 * C105) * C31059 -
            (C171 * C105 + C170 * C104 + C169 * C103) * C3272) *
               C2510 +
           ((C361 * C103 + C360 * C104 + C364 * C105) * C3272 -
            (C962 * C105 + C961 * C104 + C960 * C103) * C31059) *
               C31017) *
              C31249 +
          (((C170 * C103 + C171 * C104 + C172 * C105) * C3272 -
            (C778 * C105 + C553 * C104 + C549 * C103) * C31059) *
               C2510 +
           ((C961 * C103 + C962 * C104 +
             (C113 * C928 + C950 + C950 + C31151 * C938) * C31138 * C105) *
                C31059 -
            (C668 * C105 + C364 * C104 + C360 * C103) * C3272) *
               C31017) *
              C31222)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C31273 -
           (C549 * C105 + C550 * C104 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
               C31270 +
           ((C113 * C481 + C516 + C516 + C31151 * C501) * C31138 * C103 +
            C551 * C104 + C552 * C105) *
               C31261 -
           (C2301 * C105 + C2302 * C104 +
            (C113 * C2000 + C2019 + C2019 + C31151 * C2012) * C31138 * C103) *
               C31244) *
              C2510 +
          (((C113 * C924 + C940 + C940 + C31151 * C934) * C31138 * C103 +
            C960 * C104 + C961 * C105) *
               C31270 -
           (C360 * C105 + C361 * C104 +
            (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
               C31273 -
           (C2183 * C105 + C2184 * C104 +
            (C113 * C1282 + C1310 + C1310 + C31151 * C1300) * C31138 * C103) *
               C31261 +
           ((C113 * C2400 + C2410 + C2410 + C31151 * C2406) * C31138 * C103 +
            (C113 * C2401 + C2411 + C2411 + C31151 * C2407) * C31138 * C104 +
            (C113 * C2402 + C2412 + C2412 + C31151 * C2408) * C31138 * C105) *
               C31244) *
              C31017) *
         C30926) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
             C4860 * C4734 + C4861 * C4735) *
                C30904 * C3272 -
            (C5323 * C4735 + C5324 * C4734 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
                C30904 * C31059) *
               C2510 +
           ((C5324 * C4733 + C5323 * C4734 + C5655 * C4735) * C30904 * C31059 -
            (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C3272) *
               C31017) *
              C31262 +
          (((C544 * C4733 + C957 * C4734 + C1596 * C4735) * C30904 * C31059 -
            (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C3272) *
               C2510 +
           ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C3272 -
            (C5918 * C4735 + C1596 * C4734 + C957 * C4733) * C30904 * C31059) *
               C31017) *
              C31249 +
          (((C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C3272 -
            (C1595 * C4735 + C958 * C4734 + C543 * C4733) * C30904 * C31059) *
               C2510 +
           ((C958 * C4733 + C1595 * C4734 +
             (C113 * C1698 + C1708 + C1708 + C31151 * C1704) * C4735) *
                C30904 * C31059 -
            (C1433 * C4735 + C357 * C4734 + C354 * C4733) * C30904 * C3272) *
               C31017) *
              C31222)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C3272 -
           (C5323 * C4735 + C5324 * C4734 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
               C30904 * C31059) *
              C31272 +
          ((C5324 * C4733 + C5323 * C4734 + C5655 * C4735) * C30904 * C31059 -
           (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C3272) *
              C31268 +
          ((C4861 * C4733 + C4862 * C4734 + C5513 * C4735) * C30904 * C3272 -
           (C6025 * C4735 + C5655 * C4734 + C5323 * C4733) * C30904 * C31059) *
              C31258 +
          ((C5655 * C4733 + C6025 * C4734 +
            (C113 * C6016 + C6022 + C6022 + C31151 * C6018) * C4735) *
               C30904 * C31059 -
           (C5514 * C4735 + C5513 * C4734 + C4862 * C4733) * C30904 * C3272) *
              C31238) *
         C30926) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C31273 -
           (C5323 * C4735 + C5324 * C4734 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
               C30904 * C31270 +
           ((C113 * C481 + C516 + C516 + C31151 * C501) * C4733 +
            C5653 * C4734 + C5654 * C4735) *
               C30904 * C31261 -
           (C6687 * C4735 + C6688 * C4734 +
            (C113 * C2000 + C2019 + C2019 + C31151 * C2012) * C4733) *
               C30904 * C31244) *
              C2510 +
          ((C5324 * C4733 + C5323 * C4734 + C5655 * C4735) * C30904 * C31270 -
           (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C31273 -
           (C5656 * C4735 + C5654 * C4734 + C5653 * C4733) * C30904 * C31261 +
           (C6688 * C4733 + C6687 * C4734 +
            (C113 * C6674 + C6682 + C6682 + C31151 * C6676) * C4735) *
               C30904 * C31244) *
              C31017) *
         C30926) /
            (p * q * std::sqrt(p + q));
    d2ee[108] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
             C169 * C104 + C170 * C105) *
                C31055 -
            (C549 * C105 + C550 * C104 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
                C31062 +
            ((C113 * C481 + C516 + C516 + C31151 * C501) * C31138 * C103 +
             C551 * C104 + C552 * C105) *
                C3780) *
               C2510 +
           (((C113 * C924 + C940 + C940 + C31151 * C934) * C31138 * C103 +
             C960 * C104 + C961 * C105) *
                C31062 -
            (C360 * C105 + C361 * C104 +
             (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
                C31055 -
            (C2183 * C105 + C2184 * C104 +
             (C113 * C1282 + C1310 + C1310 + C31151 * C1300) * C31138 * C103) *
                C3780) *
               C31017) *
              C31183 +
          (((C550 * C103 + C549 * C104 + C553 * C105) * C31062 -
            (C171 * C105 + C170 * C104 + C169 * C103) * C31055 -
            (C554 * C105 + C552 * C104 + C551 * C103) * C3780) *
               C2510 +
           ((C361 * C103 + C360 * C104 + C364 * C105) * C31055 -
            (C962 * C105 + C961 * C104 + C960 * C103) * C31062 +
            (C2184 * C103 + C2183 * C104 +
             (C113 * C2168 + C2176 + C2176 + C31151 * C2170) * C31138 * C105) *
                C3780) *
               C31017) *
              C30937)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
             C4860 * C4734 + C4861 * C4735) *
                C30904 * C31055 -
            (C5323 * C4735 + C5324 * C4734 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
                C30904 * C31062 +
            ((C113 * C481 + C516 + C516 + C31151 * C501) * C4733 +
             C5653 * C4734 + C5654 * C4735) *
                C30904 * C3780) *
               C2510 +
           ((C5324 * C4733 + C5323 * C4734 + C5655 * C4735) * C30904 * C31062 -
            (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C31055 -
            (C5656 * C4735 + C5654 * C4734 + C5653 * C4733) * C30904 * C3780) *
               C31017) *
              C31183 +
          (((C544 * C4733 + C957 * C4734 + C1596 * C4735) * C30904 * C31062 -
            (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C31055 -
            (C6474 * C4735 + C2182 * C4734 + C545 * C4733) * C30904 * C3780) *
               C2510 +
           ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C31055 -
            (C5918 * C4735 + C1596 * C4734 + C957 * C4733) * C30904 * C31062 +
            (C2182 * C4733 + C6474 * C4734 +
             (C113 * C6465 + C6471 + C6471 + C31151 * C6467) * C4735) *
                C30904 * C3780) *
               C31017) *
              C30937)) /
            (p * q * std::sqrt(p + q));
    d2ee[109] +=
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
             C169 * C104 + C170 * C105) *
                C3272 -
            (C549 * C105 + C550 * C104 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
                C31059) *
               C2510 +
           (((C113 * C924 + C940 + C940 + C31151 * C934) * C31138 * C103 +
             C960 * C104 + C961 * C105) *
                C31059 -
            (C360 * C105 + C361 * C104 +
             (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
                C3272) *
               C31017) *
              C31262 +
          (((C550 * C103 + C549 * C104 + C553 * C105) * C31059 -
            (C171 * C105 + C170 * C104 + C169 * C103) * C3272) *
               C2510 +
           ((C361 * C103 + C360 * C104 + C364 * C105) * C3272 -
            (C962 * C105 + C961 * C104 + C960 * C103) * C31059) *
               C31017) *
              C31249 +
          (((C170 * C103 + C171 * C104 + C172 * C105) * C3272 -
            (C778 * C105 + C553 * C104 + C549 * C103) * C31059) *
               C2510 +
           ((C961 * C103 + C962 * C104 +
             (C113 * C928 + C950 + C950 + C31151 * C938) * C31138 * C105) *
                C31059 -
            (C668 * C105 + C364 * C104 + C360 * C103) * C3272) *
               C31017) *
              C31222)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C3272 -
           (C549 * C105 + C550 * C104 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
               C31059) *
              C31272 +
          (((C113 * C924 + C940 + C940 + C31151 * C934) * C31138 * C103 +
            C960 * C104 + C961 * C105) *
               C31059 -
           (C360 * C105 + C361 * C104 +
            (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
               C3272) *
              C31268 +
          (((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
            C362 * C104 + C363 * C105) *
               C3272 -
           (C1597 * C105 + C1598 * C104 +
            (C113 * C1285 + C1313 + C1313 + C31151 * C1303) * C31138 * C103) *
               C31059) *
              C31258 +
          (((C113 * C1696 + C1706 + C1706 + C31151 * C1702) * C31138 * C103 +
            (C113 * C1697 + C1707 + C1707 + C31151 * C1703) * C31138 * C104 +
            (C113 * C1698 + C1708 + C1708 + C31151 * C1704) * C31138 * C105) *
               C31059 -
           (C1435 * C105 + C1436 * C104 +
            (C113 * C1148 + C1167 + C1167 + C31151 * C1160) * C31138 * C103) *
               C3272) *
              C31238) *
         C30926) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
             C4860 * C4734 + C4861 * C4735) *
                C30904 * C3272 -
            (C5323 * C4735 + C5324 * C4734 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
                C30904 * C31059) *
               C2510 +
           ((C5324 * C4733 + C5323 * C4734 + C5655 * C4735) * C30904 * C31059 -
            (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C3272) *
               C31017) *
              C31262 +
          (((C544 * C4733 + C957 * C4734 + C1596 * C4735) * C30904 * C31059 -
            (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C3272) *
               C2510 +
           ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C3272 -
            (C5918 * C4735 + C1596 * C4734 + C957 * C4733) * C30904 * C31059) *
               C31017) *
              C31249 +
          (((C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C3272 -
            (C1595 * C4735 + C958 * C4734 + C543 * C4733) * C30904 * C31059) *
               C2510 +
           ((C958 * C4733 + C1595 * C4734 +
             (C113 * C1698 + C1708 + C1708 + C31151 * C1704) * C4735) *
                C30904 * C31059 -
            (C1433 * C4735 + C357 * C4734 + C354 * C4733) * C30904 * C3272) *
               C31017) *
              C31222)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C3272 -
           (C5323 * C4735 + C5324 * C4734 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
               C30904 * C31059) *
              C31272 +
          ((C5324 * C4733 + C5323 * C4734 + C5655 * C4735) * C30904 * C31059 -
           (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C3272) *
              C31268 +
          ((C4861 * C4733 + C4862 * C4734 + C5513 * C4735) * C30904 * C3272 -
           (C6025 * C4735 + C5655 * C4734 + C5323 * C4733) * C30904 * C31059) *
              C31258 +
          ((C5655 * C4733 + C6025 * C4734 +
            (C113 * C6016 + C6022 + C6022 + C31151 * C6018) * C4735) *
               C30904 * C31059 -
           (C5514 * C4735 + C5513 * C4734 + C4862 * C4733) * C30904 * C3272) *
              C31238) *
         C30926) /
            (p * q * std::sqrt(p + q));
    d2ee[110] +=
        (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C30972 * C1414 -
           (C360 * C105 + C361 * C104 +
            (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
               C30972 * C1415 +
           ((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
            C362 * C104 + C363 * C105) *
               C30972 * C1416 -
           (C1435 * C105 + C1436 * C104 +
            (C113 * C1148 + C1167 + C1167 + C31151 * C1160) * C31138 * C103) *
               C30972 * C31238) *
              C31183 +
          ((C361 * C103 + C360 * C104 + C364 * C105) * C30972 * C1415 -
           (C171 * C105 + C170 * C104 + C169 * C103) * C30972 * C1414 -
           (C365 * C105 + C363 * C104 + C362 * C103) * C30972 * C1416 +
           (C1436 * C103 + C1435 * C104 +
            (C113 * C1420 + C1428 + C1428 + C31151 * C1422) * C31138 * C105) *
               C30972 * C31238) *
              C30937)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C30972 * C31197 -
           (C360 * C105 + C361 * C104 +
            (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
               C30972 * C31017) *
              C654 +
          ((C361 * C103 + C360 * C104 + C364 * C105) * C30972 * C31017 -
           (C171 * C105 + C170 * C104 + C169 * C103) * C30972 * C31197) *
              C655 +
          ((C170 * C103 + C171 * C104 + C172 * C105) * C30972 * C31197 -
           (C668 * C105 + C364 * C104 + C360 * C103) * C30972 * C31017) *
              C656 +
          ((C364 * C103 + C668 * C104 +
            (C113 * C658 + C664 + C664 + C31151 * C660) * C31138 * C105) *
               C30972 * C31017 -
           (C173 * C105 + C172 * C104 + C171 * C103) * C30972 * C31197) *
              C31232)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
             C169 * C104 + C170 * C105) *
                C1818 -
            (C549 * C105 + C550 * C104 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
                C1819 +
            ((C113 * C481 + C516 + C516 + C31151 * C501) * C31138 * C103 +
             C551 * C104 + C552 * C105) *
                C31231) *
               C31197 +
           (((C113 * C924 + C940 + C940 + C31151 * C934) * C31138 * C103 +
             C960 * C104 + C961 * C105) *
                C1819 -
            (C360 * C105 + C361 * C104 +
             (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
                C1818 -
            (C2183 * C105 + C2184 * C104 +
             (C113 * C1282 + C1310 + C1310 + C31151 * C1300) * C31138 * C103) *
                C31231) *
               C31017) *
              C31183 +
          (((C550 * C103 + C549 * C104 + C553 * C105) * C1819 -
            (C171 * C105 + C170 * C104 + C169 * C103) * C1818 -
            (C554 * C105 + C552 * C104 + C551 * C103) * C31231) *
               C31197 +
           ((C361 * C103 + C360 * C104 + C364 * C105) * C1818 -
            (C962 * C105 + C961 * C104 + C960 * C103) * C1819 +
            (C2184 * C103 + C2183 * C104 +
             (C113 * C2168 + C2176 + C2176 + C31151 * C2170) * C31138 * C105) *
                C31231) *
               C31017) *
              C30937)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C30972 * C31197 -
           (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C30972 *
               C31017) *
              C654 +
          ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C30972 *
               C31017 -
           (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C30972 *
               C31197) *
              C655 +
          ((C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C30972 *
               C31197 -
           (C1433 * C4735 + C357 * C4734 + C354 * C4733) * C30904 * C30972 *
               C31017) *
              C656 +
          ((C358 * C4733 + C359 * C4734 +
            (C113 * C1420 + C1428 + C1428 + C31151 * C1422) * C4735) *
               C30904 * C30972 * C31017 -
           (C359 * C4735 + C358 * C4734 + C166 * C4733) * C30904 * C30972 *
               C31197) *
              C31232)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C30972 * C1414 -
           (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C30972 *
               C1415 +
           (C4861 * C4733 + C4862 * C4734 + C5513 * C4735) * C30904 * C30972 *
               C1416 -
           (C5514 * C4735 + C5513 * C4734 + C4862 * C4733) * C30904 * C30972 *
               C31238) *
              C31183 +
          ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C30972 *
               C1415 -
           (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C30972 *
               C1414 -
           (C5763 * C4735 + C1434 * C4734 + C356 * C4733) * C30904 * C30972 *
               C1416 +
           (C1434 * C4733 + C5763 * C4734 +
            (C113 * C5754 + C5760 + C5760 + C31151 * C5756) * C4735) *
               C30904 * C30972 * C31238) *
              C30937)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
             C4860 * C4734 + C4861 * C4735) *
                C30904 * C1818 -
            (C5323 * C4735 + C5324 * C4734 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
                C30904 * C1819 +
            ((C113 * C481 + C516 + C516 + C31151 * C501) * C4733 +
             C5653 * C4734 + C5654 * C4735) *
                C30904 * C31231) *
               C31197 +
           ((C5324 * C4733 + C5323 * C4734 + C5655 * C4735) * C30904 * C1819 -
            (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C1818 -
            (C5656 * C4735 + C5654 * C4734 + C5653 * C4733) * C30904 * C31231) *
               C31017) *
              C31183 +
          (((C544 * C4733 + C957 * C4734 + C1596 * C4735) * C30904 * C1819 -
            (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C1818 -
            (C6474 * C4735 + C2182 * C4734 + C545 * C4733) * C30904 * C31231) *
               C31197 +
           ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C1818 -
            (C5918 * C4735 + C1596 * C4734 + C957 * C4733) * C30904 * C1819 +
            (C2182 * C4733 + C6474 * C4734 +
             (C113 * C6465 + C6471 + C6471 + C31151 * C6467) * C4735) *
                C30904 * C31231) *
               C31017) *
              C30937)) /
            (p * q * std::sqrt(p + q));
    d2ee[111] +=
        (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C31198 -
           (C549 * C105 + C550 * C104 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
               C31059) *
              C1414 +
          (((C113 * C924 + C940 + C940 + C31151 * C934) * C31138 * C103 +
            C960 * C104 + C961 * C105) *
               C31059 -
           (C360 * C105 + C361 * C104 +
            (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
               C31198) *
              C1415 +
          (((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
            C362 * C104 + C363 * C105) *
               C31198 -
           (C1597 * C105 + C1598 * C104 +
            (C113 * C1285 + C1313 + C1313 + C31151 * C1303) * C31138 * C103) *
               C31059) *
              C1416 +
          (((C113 * C1696 + C1706 + C1706 + C31151 * C1702) * C31138 * C103 +
            (C113 * C1697 + C1707 + C1707 + C31151 * C1703) * C31138 * C104 +
            (C113 * C1698 + C1708 + C1708 + C31151 * C1704) * C31138 * C105) *
               C31059 -
           (C1435 * C105 + C1436 * C104 +
            (C113 * C1148 + C1167 + C1167 + C31151 * C1160) * C31138 * C103) *
               C31198) *
              C31238) *
         C30926) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
             C169 * C104 + C170 * C105) *
                C31198 -
            (C549 * C105 + C550 * C104 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
                C31059) *
               C31197 +
           (((C113 * C924 + C940 + C940 + C31151 * C934) * C31138 * C103 +
             C960 * C104 + C961 * C105) *
                C31059 -
            (C360 * C105 + C361 * C104 +
             (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
                C31198) *
               C31017) *
              C286 +
          (((C550 * C103 + C549 * C104 + C553 * C105) * C31059 -
            (C171 * C105 + C170 * C104 + C169 * C103) * C31198) *
               C31197 +
           ((C361 * C103 + C360 * C104 + C364 * C105) * C31198 -
            (C962 * C105 + C961 * C104 + C960 * C103) * C31059) *
               C31017) *
              C287 +
          (((C170 * C103 + C171 * C104 + C172 * C105) * C31198 -
            (C778 * C105 + C553 * C104 + C549 * C103) * C31059) *
               C31197 +
           ((C961 * C103 + C962 * C104 +
             (C113 * C928 + C950 + C950 + C31151 * C938) * C31138 * C105) *
                C31059 -
            (C668 * C105 + C364 * C104 + C360 * C103) * C31198) *
               C31017) *
              C31222)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C2282 -
           (C549 * C105 + C550 * C104 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
               C2283 +
           ((C113 * C481 + C516 + C516 + C31151 * C501) * C31138 * C103 +
            C551 * C104 + C552 * C105) *
               C2284 -
           (C2301 * C105 + C2302 * C104 +
            (C113 * C2000 + C2019 + C2019 + C31151 * C2012) * C31138 * C103) *
               C31244) *
              C31197 +
          (((C113 * C924 + C940 + C940 + C31151 * C934) * C31138 * C103 +
            C960 * C104 + C961 * C105) *
               C2283 -
           (C360 * C105 + C361 * C104 +
            (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
               C2282 -
           (C2183 * C105 + C2184 * C104 +
            (C113 * C1282 + C1310 + C1310 + C31151 * C1300) * C31138 * C103) *
               C2284 +
           ((C113 * C2400 + C2410 + C2410 + C31151 * C2406) * C31138 * C103 +
            (C113 * C2401 + C2411 + C2411 + C31151 * C2407) * C31138 * C104 +
            (C113 * C2402 + C2412 + C2412 + C31151 * C2408) * C31138 * C105) *
               C31244) *
              C31017) *
         C30926) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
             C4860 * C4734 + C4861 * C4735) *
                C30904 * C31198 -
            (C5323 * C4735 + C5324 * C4734 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
                C30904 * C31059) *
               C31197 +
           ((C5324 * C4733 + C5323 * C4734 +
             (C113 * C1696 + C1706 + C1706 + C31151 * C1702) * C4735) *
                C30904 * C31059 -
            (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C31198) *
               C31017) *
              C286 +
          (((C544 * C4733 + C957 * C4734 + C1596 * C4735) * C30904 * C31059 -
            (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C31198) *
               C31197 +
           ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C31198 -
            ((C113 * C1697 + C1707 + C1707 + C31151 * C1703) * C4735 +
             C1596 * C4734 + C957 * C4733) *
                C30904 * C31059) *
               C31017) *
              C287 +
          (((C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C31198 -
            (C1595 * C4735 + C958 * C4734 + C543 * C4733) * C30904 * C31059) *
               C31197 +
           ((C958 * C4733 + C1595 * C4734 +
             (C113 * C1698 + C1708 + C1708 + C31151 * C1704) * C4735) *
                C30904 * C31059 -
            (C1433 * C4735 + C357 * C4734 + C354 * C4733) * C30904 * C31198) *
               C31017) *
              C31222)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C31198 -
           (C5323 * C4735 + C5324 * C4734 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
               C30904 * C31059) *
              C1414 +
          ((C5324 * C4733 + C5323 * C4734 + C5655 * C4735) * C30904 * C31059 -
           (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C31198) *
              C1415 +
          ((C4861 * C4733 + C4862 * C4734 + C5513 * C4735) * C30904 * C31198 -
           (C6025 * C4735 + C5655 * C4734 + C5323 * C4733) * C30904 * C31059) *
              C1416 +
          ((C5655 * C4733 + C6025 * C4734 +
            (C113 * C6016 + C6022 + C6022 + C31151 * C6018) * C4735) *
               C30904 * C31059 -
           (C5514 * C4735 + C5513 * C4734 + C4862 * C4733) * C30904 * C31198) *
              C31238) *
         C30926) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C2282 -
           (C5323 * C4735 + C5324 * C4734 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
               C30904 * C2283 +
           ((C113 * C481 + C516 + C516 + C31151 * C501) * C4733 +
            C5653 * C4734 + C5654 * C4735) *
               C30904 * C2284 -
           (C6687 * C4735 + C6688 * C4734 +
            (C113 * C2000 + C2019 + C2019 + C31151 * C2012) * C4733) *
               C30904 * C31244) *
              C31197 +
          ((C5324 * C4733 + C5323 * C4734 + C5655 * C4735) * C30904 * C2283 -
           (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C2282 -
           (C5656 * C4735 + C5654 * C4734 + C5653 * C4733) * C30904 * C2284 +
           (C6688 * C4733 + C6687 * C4734 +
            (C113 * C6674 + C6682 + C6682 + C31151 * C6676) * C4735) *
               C30904 * C31244) *
              C31017) *
         C30926) /
            (p * q * std::sqrt(p + q));
    d2ee[112] +=
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
             (((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
               C169 * C104 + C170 * C105) *
                  C30972 * C30954 * C108 -
              (C171 * C105 + C170 * C104 + C169 * C103) * C30972 * C30954 *
                  C109 +
              (C170 * C103 + C171 * C104 + C172 * C105) * C30972 * C30954 *
                  C110 -
              (C173 * C105 + C172 * C104 + C171 * C103) * C30972 * C30954 *
                  C111 +
              (C172 * C103 + C173 * C104 +
               (C113 * C121 + C153 + C153 + C31151 * C135) * C31138 * C105) *
                  C30972 * C30954 * C112) +
         std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
             ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
                C169 * C104 + C170 * C105) *
                   C30972 * C31265 -
               (C360 * C105 + C361 * C104 +
                (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
                   C30972 * C31253 +
               ((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
                C362 * C104 + C363 * C105) *
                   C30972 * C31228) *
                  C286 +
              ((C361 * C103 + C360 * C104 + C364 * C105) * C30972 * C31253 -
               (C171 * C105 + C170 * C104 + C169 * C103) * C30972 * C31265 -
               (C365 * C105 + C363 * C104 + C362 * C103) * C30972 * C31228) *
                  C287 +
              ((C170 * C103 + C171 * C104 + C172 * C105) * C30972 * C31265 -
               ((C113 * C297 + C340 + C340 + C31151 * C317) * C31138 * C105 +
                C364 * C104 + C360 * C103) *
                   C30972 * C31253 +
               (C363 * C103 + C365 * C104 +
                (C113 * C298 + C341 + C341 + C31151 * C318) * C31138 * C105) *
                   C30972 * C31228) *
                  C31222)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C31266 -
           (C549 * C105 + C550 * C104 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
               C31255 +
           ((C113 * C481 + C516 + C516 + C31151 * C501) * C31138 * C103 +
            C551 * C104 + C552 * C105) *
               C31231) *
              C30954 * C286 +
          ((C550 * C103 + C549 * C104 + C553 * C105) * C31255 -
           (C171 * C105 + C170 * C104 + C169 * C103) * C31266 -
           (C554 * C105 + C552 * C104 + C551 * C103) * C31231) *
              C30954 * C287 +
          ((C170 * C103 + C171 * C104 + C172 * C105) * C31266 -
           ((C113 * C486 + C529 + C529 + C31151 * C506) * C31138 * C105 +
            C553 * C104 + C549 * C103) *
               C31255 +
           (C552 * C103 + C554 * C104 +
            (C113 * C487 + C530 + C530 + C31151 * C507) * C31138 * C105) *
               C31231) *
              C30954 * C31222)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C30972 * C1072 -
           (C360 * C105 + C361 * C104 +
            (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
               C30972 * C1073 +
           ((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
            C362 * C104 + C363 * C105) *
               C30972 * C31228) *
              C31262 +
          ((C361 * C103 + C360 * C104 + C364 * C105) * C30972 * C1073 -
           (C171 * C105 + C170 * C104 + C169 * C103) * C30972 * C1072 -
           (C365 * C105 + C363 * C104 + C362 * C103) * C30972 * C31228) *
              C31249 +
          ((C170 * C103 + C171 * C104 + C172 * C105) * C30972 * C1072 -
           (C668 * C105 + C364 * C104 + C360 * C103) * C30972 * C1073 +
           (C363 * C103 + C365 * C104 +
            (C113 * C298 + C341 + C341 + C31151 * C318) * C31138 * C105) *
               C30972 * C31228) *
              C31222)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
           C169 * C104 + C170 * C105) *
              C30972 * C1140 -
          (C360 * C105 + C361 * C104 +
           (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
              C30972 * C1141 +
          ((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
           C362 * C104 + C363 * C105) *
              C30972 * C1142 -
          ((C113 * C1146 + C1165 + C1165 + C31151 * C1158) * C31138 * C105 +
           (C113 * C1147 + C1166 + C1166 + C31151 * C1159) * C31138 * C104 +
           (C113 * C1148 + C1167 + C1167 + C31151 * C1160) * C31138 * C103) *
              C30972 * C1143 +
          ((C113 * C1149 + C1168 + C1168 + C31151 * C1161) * C31138 * C103 +
           (C113 * C1150 + C1169 + C1169 + C31151 * C1162) * C31138 * C104 +
           (C113 * C1151 + C1170 + C1170 + C31151 * C1163) * C31138 * C105) *
              C30972 * C1144) *
         C30926) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C31266 -
           (C549 * C105 + C550 * C104 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
               C31255 +
           ((C113 * C481 + C516 + C516 + C31151 * C501) * C31138 * C103 +
            C551 * C104 + C552 * C105) *
               C31231) *
              C1072 +
          (((C113 * C924 + C940 + C940 + C31151 * C934) * C31138 * C103 +
            C960 * C104 + C961 * C105) *
               C31255 -
           (C360 * C105 + C361 * C104 +
            (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
               C31266 -
           ((C113 * C1280 + C1308 + C1308 + C31151 * C1298) * C31138 * C105 +
            (C113 * C1281 + C1309 + C1309 + C31151 * C1299) * C31138 * C104 +
            (C113 * C1282 + C1310 + C1310 + C31151 * C1300) * C31138 * C103) *
               C31231) *
              C1073 +
          (((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
            C362 * C104 + C363 * C105) *
               C31266 -
           ((C113 * C1283 + C1311 + C1311 + C31151 * C1301) * C31138 * C105 +
            (C113 * C1284 + C1312 + C1312 + C31151 * C1302) * C31138 * C104 +
            (C113 * C1285 + C1313 + C1313 + C31151 * C1303) * C31138 * C103) *
               C31255 +
           ((C113 * C1286 + C1314 + C1314 + C31151 * C1304) * C31138 * C103 +
            (C113 * C1287 + C1315 + C1315 + C31151 * C1305) * C31138 * C104 +
            (C113 * C1288 + C1316 + C1316 + C31151 * C1306) * C31138 * C105) *
               C31231) *
              C31228) *
         C30926) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C1818 -
           (C549 * C105 + C550 * C104 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
               C1819 +
           ((C113 * C481 + C516 + C516 + C31151 * C501) * C31138 * C103 +
            C551 * C104 + C552 * C105) *
               C31231) *
              C30954 * C31262 +
          ((C550 * C103 + C549 * C104 + C553 * C105) * C1819 -
           (C171 * C105 + C170 * C104 + C169 * C103) * C1818 -
           (C554 * C105 + C552 * C104 + C551 * C103) * C31231) *
              C30954 * C31249 +
          ((C170 * C103 + C171 * C104 + C172 * C105) * C1818 -
           (C778 * C105 + C553 * C104 + C549 * C103) * C1819 +
           (C552 * C103 + C554 * C104 +
            (C113 * C487 + C530 + C530 + C31151 * C507) * C31138 * C105) *
               C31231) *
              C30954 * C31222)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C1818 -
           (C549 * C105 + C550 * C104 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
               C1819 +
           ((C113 * C481 + C516 + C516 + C31151 * C501) * C31138 * C103 +
            C551 * C104 + C552 * C105) *
               C31231) *
              C31265 +
          (((C113 * C924 + C940 + C940 + C31151 * C934) * C31138 * C103 +
            C960 * C104 + C961 * C105) *
               C1819 -
           (C360 * C105 + C361 * C104 +
            (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
               C1818 -
           ((C113 * C1280 + C1308 + C1308 + C31151 * C1298) * C31138 * C105 +
            (C113 * C1281 + C1309 + C1309 + C31151 * C1299) * C31138 * C104 +
            (C113 * C1282 + C1310 + C1310 + C31151 * C1300) * C31138 * C103) *
               C31231) *
              C31253 +
          (((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
            C362 * C104 + C363 * C105) *
               C1818 -
           (C1597 * C105 + C1598 * C104 +
            (C113 * C1285 + C1313 + C1313 + C31151 * C1303) * C31138 * C103) *
               C1819 +
           ((C113 * C1286 + C1314 + C1314 + C31151 * C1304) * C31138 * C103 +
            (C113 * C1287 + C1315 + C1315 + C31151 * C1305) * C31138 * C104 +
            (C113 * C1288 + C1316 + C1316 + C31151 * C1306) * C31138 * C105) *
               C31231) *
              C31228) *
         C30926) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
           C169 * C104 + C170 * C105) *
              C1993 -
          (C549 * C105 + C550 * C104 +
           (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
              C1994 +
          ((C113 * C481 + C516 + C516 + C31151 * C501) * C31138 * C103 +
           C551 * C104 + C552 * C105) *
              C1995 -
          ((C113 * C1998 + C2017 + C2017 + C31151 * C2010) * C31138 * C105 +
           (C113 * C1999 + C2018 + C2018 + C31151 * C2011) * C31138 * C104 +
           (C113 * C2000 + C2019 + C2019 + C31151 * C2012) * C31138 * C103) *
              C1996 +
          ((C113 * C2001 + C2020 + C2020 + C31151 * C2013) * C31138 * C103 +
           (C113 * C2002 + C2021 + C2021 + C31151 * C2014) * C31138 * C104 +
           (C113 * C2003 + C2022 + C2022 + C31151 * C2015) * C31138 * C105) *
              C1997) *
         C30954 * C30926) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
           (C113 * C291 + C326 + C326 + C31151 * C311) * C4734 +
           (C113 * C292 + C327 + C327 + C31151 * C312) * C4735) *
              C30904 * C30972 * C30954 * C108 -
          (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C30972 *
              C30954 * C109 +
          (C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C30972 *
              C30954 * C110 -
          (C359 * C4735 + C358 * C4734 + C166 * C4733) * C30904 * C30972 *
              C30954 * C111 +
          (C167 * C4733 + C667 * C4734 +
           (C113 * C298 + C341 + C341 + C31151 * C318) * C4735) *
              C30904 * C30972 * C30954 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C30972 * C31265 -
           (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C30972 *
               C31253 +
           (C4861 * C4733 + C4862 * C4734 +
            (C113 * C1149 + C1168 + C1168 + C31151 * C1161) * C4735) *
               C30904 * C30972 * C31228) *
              C286 +
          ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C30972 *
               C31253 -
           (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C30972 *
               C31265 -
           ((C113 * C1150 + C1169 + C1169 + C31151 * C1162) * C4735 +
            C1434 * C4734 + C356 * C4733) *
               C30904 * C30972 * C31228) *
              C287 +
          ((C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C30972 *
               C31265 -
           (C1433 * C4735 + C357 * C4734 + C354 * C4733) * C30904 * C30972 *
               C31253 +
           (C357 * C4733 + C1433 * C4734 +
            (C113 * C1151 + C1170 + C1170 + C31151 * C1163) * C4735) *
               C30904 * C30972 * C31228) *
              C31222)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C31266 -
           ((C113 * C1285 + C1313 + C1313 + C31151 * C1303) * C4735 +
            (C113 * C924 + C940 + C940 + C31151 * C934) * C4734 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
               C30904 * C31255 +
           ((C113 * C481 + C516 + C516 + C31151 * C501) * C4733 +
            (C113 * C1282 + C1310 + C1310 + C31151 * C1300) * C4734 +
            (C113 * C1286 + C1314 + C1314 + C31151 * C1304) * C4735) *
               C30904 * C31231) *
              C30954 * C286 +
          ((C544 * C4733 + C957 * C4734 + C1596 * C4735) * C30904 * C31255 -
           (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C31266 -
           ((C113 * C1287 + C1315 + C1315 + C31151 * C1305) * C4735 +
            C2182 * C4734 + C545 * C4733) *
               C30904 * C31231) *
              C30954 * C287 +
          ((C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C31266 -
           (C1595 * C4735 + C958 * C4734 + C543 * C4733) * C30904 * C31255 +
           (C546 * C4733 + C2181 * C4734 +
            (C113 * C1288 + C1316 + C1316 + C31151 * C1306) * C4735) *
               C30904 * C31231) *
              C30954 * C31222)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C30972 * C1072 -
           (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C30972 *
               C1073 +
           (C4861 * C4733 + C4862 * C4734 +
            (C113 * C1149 + C1168 + C1168 + C31151 * C1161) * C4735) *
               C30904 * C30972 * C31228) *
              C31262 +
          ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C30972 *
               C1073 -
           (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C30972 *
               C1072 -
           ((C113 * C1150 + C1169 + C1169 + C31151 * C1162) * C4735 +
            C1434 * C4734 + C356 * C4733) *
               C30904 * C30972 * C31228) *
              C31249 +
          ((C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C30972 *
               C1072 -
           (C1433 * C4735 + C357 * C4734 + C354 * C4733) * C30904 * C30972 *
               C1073 +
           (C357 * C4733 + C1433 * C4734 +
            (C113 * C1151 + C1170 + C1170 + C31151 * C1163) * C4735) *
               C30904 * C30972 * C31228) *
              C31222)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 + C4860 * C4734 +
           C4861 * C4735) *
              C30904 * C30972 * C1140 -
          (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C30972 *
              C1141 +
          (C4861 * C4733 + C4862 * C4734 + C5513 * C4735) * C30904 * C30972 *
              C1142 -
          (C5514 * C4735 + C5513 * C4734 + C4862 * C4733) * C30904 * C30972 *
              C1143 +
          (C5513 * C4733 + C5514 * C4734 +
           (C113 * C5497 + C5508 + C5508 + C31151 * C5501) * C4735) *
              C30904 * C30972 * C1144) *
         C30926) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C31266 -
           (C5323 * C4735 + C5324 * C4734 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
               C30904 * C31255 +
           ((C113 * C481 + C516 + C516 + C31151 * C501) * C4733 +
            C5653 * C4734 + C5654 * C4735) *
               C30904 * C31231) *
              C1072 +
          ((C5324 * C4733 + C5323 * C4734 + C5655 * C4735) * C30904 * C31255 -
           (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C31266 -
           (C5656 * C4735 + C5654 * C4734 + C5653 * C4733) * C30904 * C31231) *
              C1073 +
          ((C4861 * C4733 + C4862 * C4734 + C5513 * C4735) * C30904 * C31266 -
           ((C113 * C5625 + C5643 + C5643 + C31151 * C5631) * C4735 +
            C5655 * C4734 + C5323 * C4733) *
               C30904 * C31255 +
           (C5654 * C4733 + C5656 * C4734 +
            (C113 * C5626 + C5644 + C5644 + C31151 * C5632) * C4735) *
               C30904 * C31231) *
              C31228) *
         C30926) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C1818 -
           (C5323 * C4735 + C5324 * C4734 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
               C30904 * C1819 +
           ((C113 * C481 + C516 + C516 + C31151 * C501) * C4733 +
            C5653 * C4734 + C5654 * C4735) *
               C30904 * C31231) *
              C30954 * C31262 +
          ((C544 * C4733 + C957 * C4734 + C1596 * C4735) * C30904 * C1819 -
           (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C1818 -
           ((C113 * C1287 + C1315 + C1315 + C31151 * C1305) * C4735 +
            C2182 * C4734 + C545 * C4733) *
               C30904 * C31231) *
              C30954 * C31249 +
          ((C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C1818 -
           (C1595 * C4735 + C958 * C4734 + C543 * C4733) * C30904 * C1819 +
           (C546 * C4733 + C2181 * C4734 +
            (C113 * C1288 + C1316 + C1316 + C31151 * C1306) * C4735) *
               C30904 * C31231) *
              C30954 * C31222)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C1818 -
           (C5323 * C4735 + C5324 * C4734 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
               C30904 * C1819 +
           ((C113 * C481 + C516 + C516 + C31151 * C501) * C4733 +
            C5653 * C4734 + C5654 * C4735) *
               C30904 * C31231) *
              C31265 +
          ((C5324 * C4733 + C5323 * C4734 + C5655 * C4735) * C30904 * C1819 -
           (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C1818 -
           (C5656 * C4735 + C5654 * C4734 + C5653 * C4733) * C30904 * C31231) *
              C31253 +
          ((C4861 * C4733 + C4862 * C4734 + C5513 * C4735) * C30904 * C1818 -
           (C6025 * C4735 + C5655 * C4734 + C5323 * C4733) * C30904 * C1819 +
           (C5654 * C4733 + C5656 * C4734 +
            (C113 * C5626 + C5644 + C5644 + C31151 * C5632) * C4735) *
               C30904 * C31231) *
              C31228) *
         C30926) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 + C4860 * C4734 +
           C4861 * C4735) *
              C30904 * C1993 -
          (C5323 * C4735 + C5324 * C4734 +
           (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
              C30904 * C1994 +
          ((C113 * C481 + C516 + C516 + C31151 * C501) * C4733 + C5653 * C4734 +
           C5654 * C4735) *
              C30904 * C1995 -
          ((C113 * C6307 + C6317 + C6317 + C31151 * C6313) * C4735 +
           (C113 * C2400 + C2410 + C2410 + C31151 * C2406) * C4734 +
           (C113 * C2000 + C2019 + C2019 + C31151 * C2012) * C4733) *
              C30904 * C1996 +
          ((C113 * C2001 + C2020 + C2020 + C31151 * C2013) * C4733 +
           (C113 * C6308 + C6318 + C6318 + C31151 * C6314) * C4734 +
           (C113 * C6309 + C6319 + C6319 + C31151 * C6315) * C4735) *
              C30904 * C1997) *
         C30954 * C30926) /
            (p * q * std::sqrt(p + q));
    d2ee[113] +=
        (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
             C169 * C104 + C170 * C105) *
                C31198 -
            (C549 * C105 + C550 * C104 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
                C31059) *
               C1072 +
           (((C113 * C924 + C940 + C940 + C31151 * C934) * C31138 * C103 +
             C960 * C104 + C961 * C105) *
                C31059 -
            (C360 * C105 + C361 * C104 +
             (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
                C31198) *
               C1073 +
           (((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
             C362 * C104 + C363 * C105) *
                C31198 -
            (C1597 * C105 + C1598 * C104 +
             (C113 * C1285 + C1313 + C1313 + C31151 * C1303) * C31138 * C103) *
                C31059) *
               C31228) *
              C31183 +
          (((C550 * C103 + C549 * C104 + C553 * C105) * C31059 -
            (C171 * C105 + C170 * C104 + C169 * C103) * C31198) *
               C1072 +
           ((C361 * C103 + C360 * C104 + C364 * C105) * C31198 -
            (C962 * C105 + C961 * C104 + C960 * C103) * C31059) *
               C1073 +
           ((C1598 * C103 + C1597 * C104 +
             (C113 * C1582 + C1590 + C1590 + C31151 * C1584) * C31138 * C105) *
                C31059 -
            (C365 * C105 + C363 * C104 + C362 * C103) * C31198) *
               C31228) *
              C30937)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C31198 -
           (C549 * C105 + C550 * C104 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
               C31059) *
              C30954 * C654 +
          ((C550 * C103 + C549 * C104 + C553 * C105) * C31059 -
           (C171 * C105 + C170 * C104 + C169 * C103) * C31198) *
              C30954 * C655 +
          ((C170 * C103 + C171 * C104 + C172 * C105) * C31198 -
           (C778 * C105 + C553 * C104 + C549 * C103) * C31059) *
              C30954 * C656 +
          ((C553 * C103 + C778 * C104 +
            (C113 * C768 + C774 + C774 + C31151 * C770) * C31138 * C105) *
               C31059 -
           (C173 * C105 + C172 * C104 + C171 * C103) * C31198) *
              C30954 * C31232)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C2282 -
           (C549 * C105 + C550 * C104 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
               C2283 +
           ((C113 * C481 + C516 + C516 + C31151 * C501) * C31138 * C103 +
            C551 * C104 + C552 * C105) *
               C2284 -
           (C2301 * C105 + C2302 * C104 +
            (C113 * C2000 + C2019 + C2019 + C31151 * C2012) * C31138 * C103) *
               C31244) *
              C30954 * C31183 +
          ((C550 * C103 + C549 * C104 + C553 * C105) * C2283 -
           (C171 * C105 + C170 * C104 + C169 * C103) * C2282 -
           (C554 * C105 + C552 * C104 + C551 * C103) * C2284 +
           (C2302 * C103 + C2301 * C104 +
            (C113 * C2286 + C2294 + C2294 + C31151 * C2288) * C31138 * C105) *
               C31244) *
              C30954 * C30937)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C31198 -
           ((C113 * C1285 + C1313 + C1313 + C31151 * C1303) * C4735 +
            (C113 * C924 + C940 + C940 + C31151 * C934) * C4734 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
               C30904 * C31059) *
              C30954 * C654 +
          ((C544 * C4733 + C957 * C4734 + C1596 * C4735) * C30904 * C31059 -
           (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C31198) *
              C30954 * C655 +
          ((C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C31198 -
           (C1595 * C4735 + C958 * C4734 + C543 * C4733) * C30904 * C31059) *
              C30954 * C656 +
          ((C547 * C4733 + C959 * C4734 +
            (C113 * C1582 + C1590 + C1590 + C31151 * C1584) * C4735) *
               C30904 * C31059 -
           (C359 * C4735 + C358 * C4734 + C166 * C4733) * C30904 * C31198) *
              C30954 * C31232)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
             C4860 * C4734 + C4861 * C4735) *
                C30904 * C31198 -
            (C5323 * C4735 + C5324 * C4734 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
                C30904 * C31059) *
               C1072 +
           ((C5324 * C4733 + C5323 * C4734 + C5655 * C4735) * C30904 * C31059 -
            (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C31198) *
               C1073 +
           ((C4861 * C4733 + C4862 * C4734 + C5513 * C4735) * C30904 * C31198 -
            ((C113 * C5625 + C5643 + C5643 + C31151 * C5631) * C4735 +
             C5655 * C4734 + C5323 * C4733) *
                C30904 * C31059) *
               C31228) *
              C31183 +
          (((C544 * C4733 + C957 * C4734 + C1596 * C4735) * C30904 * C31059 -
            (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C31198) *
               C1072 +
           ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C31198 -
            (C5918 * C4735 + C1596 * C4734 + C957 * C4733) * C30904 * C31059) *
               C1073 +
           ((C1596 * C4733 + C5918 * C4734 +
             (C113 * C5909 + C5915 + C5915 + C31151 * C5911) * C4735) *
                C30904 * C31059 -
            (C5763 * C4735 + C1434 * C4734 + C356 * C4733) * C30904 * C31198) *
               C31228) *
              C30937)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C2282 -
           (C5323 * C4735 + C5324 * C4734 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
               C30904 * C2283 +
           ((C113 * C481 + C516 + C516 + C31151 * C501) * C4733 +
            C5653 * C4734 + C5654 * C4735) *
               C30904 * C2284 -
           ((C113 * C6307 + C6317 + C6317 + C31151 * C6313) * C4735 +
            (C113 * C2400 + C2410 + C2410 + C31151 * C2406) * C4734 +
            (C113 * C2000 + C2019 + C2019 + C31151 * C2012) * C4733) *
               C30904 * C31244) *
              C30954 * C31183 +
          ((C544 * C4733 + C957 * C4734 + C1596 * C4735) * C30904 * C2283 -
           (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C2282 -
           (C6474 * C4735 + C2182 * C4734 + C545 * C4733) * C30904 * C2284 +
           (C2300 * C4733 +
            (C113 * C2401 + C2411 + C2411 + C31151 * C2407) * C4734 +
            (C113 * C6572 + C6576 + C6576 + C31151 * C6574) * C4735) *
               C30904 * C31244) *
              C30954 * C30937)) /
            (p * q * std::sqrt(p + q));
    d2ee[114] +=
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C30972 * C31265 -
           (C360 * C105 + C361 * C104 +
            (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
               C30972 * C31253 +
           ((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
            C362 * C104 + C363 * C105) *
               C30972 * C31228) *
              C286 +
          ((C361 * C103 + C360 * C104 + C364 * C105) * C30972 * C31253 -
           (C171 * C105 + C170 * C104 + C169 * C103) * C30972 * C31265 -
           (C365 * C105 + C363 * C104 + C362 * C103) * C30972 * C31228) *
              C287 +
          ((C170 * C103 + C171 * C104 + C172 * C105) * C30972 * C31265 -
           ((C113 * C297 + C340 + C340 + C31151 * C317) * C31138 * C105 +
            C364 * C104 + C360 * C103) *
               C30972 * C31253 +
           (C363 * C103 + C365 * C104 +
            (C113 * C298 + C341 + C341 + C31151 * C318) * C31138 * C105) *
               C30972 * C31228) *
              C31222)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
           C169 * C104 + C170 * C105) *
              C30972 * C30954 * C108 -
          (C171 * C105 + C170 * C104 + C169 * C103) * C30972 * C30954 * C109 +
          (C170 * C103 + C171 * C104 + C172 * C105) * C30972 * C30954 * C110 -
          (C173 * C105 + C172 * C104 + C171 * C103) * C30972 * C30954 * C111 +
          (C172 * C103 + C173 * C104 +
           (C113 * C121 + C153 + C153 + C31151 * C135) * C31138 * C105) *
              C30972 * C30954 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C30972 * C1072 -
           (C360 * C105 + C361 * C104 +
            (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
               C30972 * C1073 +
           ((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
            C362 * C104 + C363 * C105) *
               C30972 * C31228) *
              C31262 +
          ((C361 * C103 + C360 * C104 + C364 * C105) * C30972 * C1073 -
           (C171 * C105 + C170 * C104 + C169 * C103) * C30972 * C1072 -
           (C365 * C105 + C363 * C104 + C362 * C103) * C30972 * C31228) *
              C31249 +
          ((C170 * C103 + C171 * C104 + C172 * C105) * C30972 * C1072 -
           (C668 * C105 + C364 * C104 + C360 * C103) * C30972 * C1073 +
           (C363 * C103 + C365 * C104 +
            (C113 * C298 + C341 + C341 + C31151 * C318) * C31138 * C105) *
               C30972 * C31228) *
              C31222)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
           C169 * C104 + C170 * C105) *
              C30972 * C1140 -
          (C360 * C105 + C361 * C104 +
           (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
              C30972 * C1141 +
          ((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
           C362 * C104 + C363 * C105) *
              C30972 * C1142 -
          ((C113 * C1146 + C1165 + C1165 + C31151 * C1158) * C31138 * C105 +
           (C113 * C1147 + C1166 + C1166 + C31151 * C1159) * C31138 * C104 +
           (C113 * C1148 + C1167 + C1167 + C31151 * C1160) * C31138 * C103) *
              C30972 * C1143 +
          ((C113 * C1149 + C1168 + C1168 + C31151 * C1161) * C31138 * C103 +
           (C113 * C1150 + C1169 + C1169 + C31151 * C1162) * C31138 * C104 +
           (C113 * C1151 + C1170 + C1170 + C31151 * C1163) * C31138 * C105) *
              C30972 * C1144) *
         C30926) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C1818 -
           (C549 * C105 + C550 * C104 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
               C1819 +
           ((C113 * C481 + C516 + C516 + C31151 * C501) * C31138 * C103 +
            C551 * C104 + C552 * C105) *
               C31231) *
              C30954 * C31262 +
          ((C550 * C103 + C549 * C104 + C553 * C105) * C1819 -
           (C171 * C105 + C170 * C104 + C169 * C103) * C1818 -
           (C554 * C105 + C552 * C104 + C551 * C103) * C31231) *
              C30954 * C31249 +
          ((C170 * C103 + C171 * C104 + C172 * C105) * C1818 -
           (C778 * C105 + C553 * C104 + C549 * C103) * C1819 +
           (C552 * C103 + C554 * C104 +
            (C113 * C487 + C530 + C530 + C31151 * C507) * C31138 * C105) *
               C31231) *
              C30954 * C31222)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C1818 -
           (C549 * C105 + C550 * C104 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
               C1819 +
           ((C113 * C481 + C516 + C516 + C31151 * C501) * C31138 * C103 +
            C551 * C104 + C552 * C105) *
               C31231) *
              C31265 +
          (((C113 * C924 + C940 + C940 + C31151 * C934) * C31138 * C103 +
            C960 * C104 + C961 * C105) *
               C1819 -
           (C360 * C105 + C361 * C104 +
            (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
               C1818 -
           ((C113 * C1280 + C1308 + C1308 + C31151 * C1298) * C31138 * C105 +
            (C113 * C1281 + C1309 + C1309 + C31151 * C1299) * C31138 * C104 +
            (C113 * C1282 + C1310 + C1310 + C31151 * C1300) * C31138 * C103) *
               C31231) *
              C31253 +
          (((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
            C362 * C104 + C363 * C105) *
               C1818 -
           (C1597 * C105 + C1598 * C104 +
            (C113 * C1285 + C1313 + C1313 + C31151 * C1303) * C31138 * C103) *
               C1819 +
           ((C113 * C1286 + C1314 + C1314 + C31151 * C1304) * C31138 * C103 +
            (C113 * C1287 + C1315 + C1315 + C31151 * C1305) * C31138 * C104 +
            (C113 * C1288 + C1316 + C1316 + C31151 * C1306) * C31138 * C105) *
               C31231) *
              C31228) *
         C30926) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
           (C113 * C291 + C326 + C326 + C31151 * C311) * C4734 +
           (C113 * C292 + C327 + C327 + C31151 * C312) * C4735) *
              C30904 * C30972 * C30954 * C108 -
          (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C30972 *
              C30954 * C109 +
          (C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C30972 *
              C30954 * C110 -
          (C359 * C4735 + C358 * C4734 + C166 * C4733) * C30904 * C30972 *
              C30954 * C111 +
          (C167 * C4733 + C667 * C4734 +
           (C113 * C298 + C341 + C341 + C31151 * C318) * C4735) *
              C30904 * C30972 * C30954 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C30972 * C31265 -
           (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C30972 *
               C31253 +
           (C4861 * C4733 + C4862 * C4734 +
            (C113 * C1149 + C1168 + C1168 + C31151 * C1161) * C4735) *
               C30904 * C30972 * C31228) *
              C286 +
          ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C30972 *
               C31253 -
           (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C30972 *
               C31265 -
           ((C113 * C1150 + C1169 + C1169 + C31151 * C1162) * C4735 +
            C1434 * C4734 + C356 * C4733) *
               C30904 * C30972 * C31228) *
              C287 +
          ((C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C30972 *
               C31265 -
           (C1433 * C4735 + C357 * C4734 + C354 * C4733) * C30904 * C30972 *
               C31253 +
           (C357 * C4733 + C1433 * C4734 +
            (C113 * C1151 + C1170 + C1170 + C31151 * C1163) * C4735) *
               C30904 * C30972 * C31228) *
              C31222)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C30972 * C1072 -
           (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C30972 *
               C1073 +
           (C4861 * C4733 + C4862 * C4734 +
            (C113 * C1149 + C1168 + C1168 + C31151 * C1161) * C4735) *
               C30904 * C30972 * C31228) *
              C31262 +
          ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C30972 *
               C1073 -
           (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C30972 *
               C1072 -
           ((C113 * C1150 + C1169 + C1169 + C31151 * C1162) * C4735 +
            C1434 * C4734 + C356 * C4733) *
               C30904 * C30972 * C31228) *
              C31249 +
          ((C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C30972 *
               C1072 -
           (C1433 * C4735 + C357 * C4734 + C354 * C4733) * C30904 * C30972 *
               C1073 +
           (C357 * C4733 + C1433 * C4734 +
            (C113 * C1151 + C1170 + C1170 + C31151 * C1163) * C4735) *
               C30904 * C30972 * C31228) *
              C31222)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 + C4860 * C4734 +
           C4861 * C4735) *
              C30904 * C30972 * C1140 -
          (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C30972 *
              C1141 +
          (C4861 * C4733 + C4862 * C4734 + C5513 * C4735) * C30904 * C30972 *
              C1142 -
          (C5514 * C4735 + C5513 * C4734 + C4862 * C4733) * C30904 * C30972 *
              C1143 +
          (C5513 * C4733 + C5514 * C4734 +
           (C113 * C5497 + C5508 + C5508 + C31151 * C5501) * C4735) *
              C30904 * C30972 * C1144) *
         C30926) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C1818 -
           (C5323 * C4735 + C5324 * C4734 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
               C30904 * C1819 +
           ((C113 * C481 + C516 + C516 + C31151 * C501) * C4733 +
            C5653 * C4734 + C5654 * C4735) *
               C30904 * C31231) *
              C30954 * C31262 +
          ((C544 * C4733 + C957 * C4734 + C1596 * C4735) * C30904 * C1819 -
           (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C1818 -
           ((C113 * C1287 + C1315 + C1315 + C31151 * C1305) * C4735 +
            C2182 * C4734 + C545 * C4733) *
               C30904 * C31231) *
              C30954 * C31249 +
          ((C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C1818 -
           (C1595 * C4735 + C958 * C4734 + C543 * C4733) * C30904 * C1819 +
           (C546 * C4733 + C2181 * C4734 +
            (C113 * C1288 + C1316 + C1316 + C31151 * C1306) * C4735) *
               C30904 * C31231) *
              C30954 * C31222)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C1818 -
           (C5323 * C4735 + C5324 * C4734 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
               C30904 * C1819 +
           ((C113 * C481 + C516 + C516 + C31151 * C501) * C4733 +
            C5653 * C4734 + C5654 * C4735) *
               C30904 * C31231) *
              C31265 +
          ((C5324 * C4733 + C5323 * C4734 + C5655 * C4735) * C30904 * C1819 -
           (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C1818 -
           (C5656 * C4735 + C5654 * C4734 + C5653 * C4733) * C30904 * C31231) *
              C31253 +
          ((C4861 * C4733 + C4862 * C4734 + C5513 * C4735) * C30904 * C1818 -
           (C6025 * C4735 + C5655 * C4734 + C5323 * C4733) * C30904 * C1819 +
           (C5654 * C4733 + C5656 * C4734 +
            (C113 * C5626 + C5644 + C5644 + C31151 * C5632) * C4735) *
               C30904 * C31231) *
              C31228) *
         C30926) /
            (p * q * std::sqrt(p + q));
    d2ee[115] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
             C169 * C104 + C170 * C105) *
                C3272 -
            (C549 * C105 + C550 * C104 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
                C31059) *
               C31197 +
           (((C113 * C924 + C940 + C940 + C31151 * C934) * C31138 * C103 +
             C960 * C104 + C961 * C105) *
                C31059 -
            (C360 * C105 + C361 * C104 +
             (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
                C3272) *
               C31017) *
              C30931 +
          (((C550 * C103 + C549 * C104 + C553 * C105) * C31059 -
            (C171 * C105 + C170 * C104 + C169 * C103) * C3272) *
               C31197 +
           ((C361 * C103 + C360 * C104 + C364 * C105) * C3272 -
            (C962 * C105 + C961 * C104 + C960 * C103) * C31059) *
               C31017) *
              C30940 +
          (((C170 * C103 + C171 * C104 + C172 * C105) * C3272 -
            (C778 * C105 + C553 * C104 + C549 * C103) * C31059) *
               C31197 +
           ((C961 * C103 + C962 * C104 +
             (C113 * C928 + C950 + C950 + C31151 * C938) * C31138 * C105) *
                C31059 -
            (C668 * C105 + C364 * C104 + C360 * C103) * C3272) *
               C31017) *
              C2881)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
             C4860 * C4734 + C4861 * C4735) *
                C30904 * C3272 -
            (C5323 * C4735 + C5324 * C4734 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
                C30904 * C31059) *
               C31197 +
           ((C5324 * C4733 + C5323 * C4734 + C5655 * C4735) * C30904 * C31059 -
            (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C3272) *
               C31017) *
              C30931 +
          (((C544 * C4733 + C957 * C4734 + C1596 * C4735) * C30904 * C31059 -
            (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C3272) *
               C31197 +
           ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C3272 -
            (C5918 * C4735 + C1596 * C4734 + C957 * C4733) * C30904 * C31059) *
               C31017) *
              C30940 +
          (((C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C3272 -
            (C1595 * C4735 + C958 * C4734 + C543 * C4733) * C30904 * C31059) *
               C31197 +
           ((C958 * C4733 + C1595 * C4734 +
             (C113 * C1698 + C1708 + C1708 + C31151 * C1704) * C4735) *
                C30904 * C31059 -
            (C1433 * C4735 + C357 * C4734 + C354 * C4733) * C30904 * C3272) *
               C31017) *
              C2881)) /
            (p * q * std::sqrt(p + q));
    d2ee[116] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
             C169 * C104 + C170 * C105) *
                C31055 -
            (C549 * C105 + C550 * C104 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
                C31062 +
            ((C113 * C481 + C516 + C516 + C31151 * C501) * C31138 * C103 +
             C551 * C104 + C552 * C105) *
                C3780) *
               C31197 +
           (((C113 * C924 + C940 + C940 + C31151 * C934) * C31138 * C103 +
             C960 * C104 + C961 * C105) *
                C31062 -
            (C360 * C105 + C361 * C104 +
             (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
                C31055 -
            (C2183 * C105 + C2184 * C104 +
             (C113 * C1282 + C1310 + C1310 + C31151 * C1300) * C31138 * C103) *
                C3780) *
               C31017) *
              C2618 +
          (((C550 * C103 + C549 * C104 + C553 * C105) * C31062 -
            (C171 * C105 + C170 * C104 + C169 * C103) * C31055 -
            (C554 * C105 + C552 * C104 + C551 * C103) * C3780) *
               C31197 +
           ((C361 * C103 + C360 * C104 + C364 * C105) * C31055 -
            (C962 * C105 + C961 * C104 + C960 * C103) * C31062 +
            (C2184 * C103 + C2183 * C104 +
             (C113 * C2168 + C2176 + C2176 + C31151 * C2170) * C31138 * C105) *
                C3780) *
               C31017) *
              C30937)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
             C4860 * C4734 + C4861 * C4735) *
                C30904 * C31055 -
            (C5323 * C4735 + C5324 * C4734 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
                C30904 * C31062 +
            ((C113 * C481 + C516 + C516 + C31151 * C501) * C4733 +
             C5653 * C4734 + C5654 * C4735) *
                C30904 * C3780) *
               C31197 +
           ((C5324 * C4733 + C5323 * C4734 + C5655 * C4735) * C30904 * C31062 -
            (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C31055 -
            (C5656 * C4735 + C5654 * C4734 + C5653 * C4733) * C30904 * C3780) *
               C31017) *
              C2618 +
          (((C544 * C4733 + C957 * C4734 + C1596 * C4735) * C30904 * C31062 -
            (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C31055 -
            (C6474 * C4735 + C2182 * C4734 + C545 * C4733) * C30904 * C3780) *
               C31197 +
           ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C31055 -
            (C5918 * C4735 + C1596 * C4734 + C957 * C4733) * C30904 * C31062 +
            (C2182 * C4733 + C6474 * C4734 +
             (C113 * C6465 + C6471 + C6471 + C31151 * C6467) * C4735) *
                C30904 * C3780) *
               C31017) *
              C30937)) /
            (p * q * std::sqrt(p + q));
    d2ee[117] +=
        (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
             C169 * C104 + C170 * C105) *
                C3272 -
            (C549 * C105 + C550 * C104 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
                C31059) *
               C31265 +
           (((C113 * C924 + C940 + C940 + C31151 * C934) * C31138 * C103 +
             C960 * C104 + C961 * C105) *
                C31059 -
            (C360 * C105 + C361 * C104 +
             (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
                C3272) *
               C31253 +
           (((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
             C362 * C104 + C363 * C105) *
                C3272 -
            (C1597 * C105 + C1598 * C104 +
             (C113 * C1285 + C1313 + C1313 + C31151 * C1303) * C31138 * C103) *
                C31059) *
               C31228) *
              C2618 +
          (((C550 * C103 + C549 * C104 + C553 * C105) * C31059 -
            (C171 * C105 + C170 * C104 + C169 * C103) * C3272) *
               C31265 +
           ((C361 * C103 + C360 * C104 + C364 * C105) * C3272 -
            (C962 * C105 + C961 * C104 + C960 * C103) * C31059) *
               C31253 +
           ((C1598 * C103 + C1597 * C104 +
             (C113 * C1582 + C1590 + C1590 + C31151 * C1584) * C31138 * C105) *
                C31059 -
            (C365 * C105 + C363 * C104 + C362 * C103) * C3272) *
               C31228) *
              C30937)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C3272 -
           (C549 * C105 + C550 * C104 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
               C31059) *
              C30954 * C31271 +
          ((C550 * C103 + C549 * C104 + C553 * C105) * C31059 -
           (C171 * C105 + C170 * C104 + C169 * C103) * C3272) *
              C30954 * C31264 +
          ((C170 * C103 + C171 * C104 + C172 * C105) * C3272 -
           (C778 * C105 + C553 * C104 + C549 * C103) * C31059) *
              C30954 * C31251 +
          ((C553 * C103 + C778 * C104 +
            (C113 * C768 + C774 + C774 + C31151 * C770) * C31138 * C105) *
               C31059 -
           (C173 * C105 + C172 * C104 + C171 * C103) * C3272) *
              C30954 * C31232)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C31273 -
           (C549 * C105 + C550 * C104 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
               C31270 +
           ((C113 * C481 + C516 + C516 + C31151 * C501) * C31138 * C103 +
            C551 * C104 + C552 * C105) *
               C31261 -
           (C2301 * C105 + C2302 * C104 +
            (C113 * C2000 + C2019 + C2019 + C31151 * C2012) * C31138 * C103) *
               C31244) *
              C30954 * C2618 +
          ((C550 * C103 + C549 * C104 + C553 * C105) * C31270 -
           (C171 * C105 + C170 * C104 + C169 * C103) * C31273 -
           (C554 * C105 + C552 * C104 + C551 * C103) * C31261 +
           (C2302 * C103 + C2301 * C104 +
            (C113 * C2286 + C2294 + C2294 + C31151 * C2288) * C31138 * C105) *
               C31244) *
              C30954 * C30937)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C3272 -
           (C5323 * C4735 + C5324 * C4734 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
               C30904 * C31059) *
              C30954 * C31271 +
          ((C544 * C4733 + C957 * C4734 + C1596 * C4735) * C30904 * C31059 -
           (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C3272) *
              C30954 * C31264 +
          ((C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C3272 -
           (C1595 * C4735 + C958 * C4734 + C543 * C4733) * C30904 * C31059) *
              C30954 * C31251 +
          ((C547 * C4733 + C959 * C4734 +
            (C113 * C1582 + C1590 + C1590 + C31151 * C1584) * C4735) *
               C30904 * C31059 -
           (C359 * C4735 + C358 * C4734 + C166 * C4733) * C30904 * C3272) *
              C30954 * C31232)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
             C4860 * C4734 + C4861 * C4735) *
                C30904 * C3272 -
            (C5323 * C4735 + C5324 * C4734 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
                C30904 * C31059) *
               C31265 +
           ((C5324 * C4733 + C5323 * C4734 + C5655 * C4735) * C30904 * C31059 -
            (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C3272) *
               C31253 +
           ((C4861 * C4733 + C4862 * C4734 + C5513 * C4735) * C30904 * C3272 -
            (C6025 * C4735 + C5655 * C4734 + C5323 * C4733) * C30904 * C31059) *
               C31228) *
              C2618 +
          (((C544 * C4733 + C957 * C4734 + C1596 * C4735) * C30904 * C31059 -
            (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C3272) *
               C31265 +
           ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C3272 -
            (C5918 * C4735 + C1596 * C4734 + C957 * C4733) * C30904 * C31059) *
               C31253 +
           ((C1596 * C4733 + C5918 * C4734 +
             (C113 * C5909 + C5915 + C5915 + C31151 * C5911) * C4735) *
                C30904 * C31059 -
            (C5763 * C4735 + C1434 * C4734 + C356 * C4733) * C30904 * C3272) *
               C31228) *
              C30937)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C31273 -
           (C5323 * C4735 + C5324 * C4734 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
               C30904 * C31270 +
           ((C113 * C481 + C516 + C516 + C31151 * C501) * C4733 +
            C5653 * C4734 + C5654 * C4735) *
               C30904 * C31261 -
           (C6687 * C4735 + C6688 * C4734 +
            (C113 * C2000 + C2019 + C2019 + C31151 * C2012) * C4733) *
               C30904 * C31244) *
              C30954 * C2618 +
          ((C544 * C4733 + C957 * C4734 + C1596 * C4735) * C30904 * C31270 -
           (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C31273 -
           (C6474 * C4735 + C2182 * C4734 + C545 * C4733) * C30904 * C31261 +
           (C2300 * C4733 +
            (C113 * C2401 + C2411 + C2411 + C31151 * C2407) * C4734 +
            (C113 * C6572 + C6576 + C6576 + C31151 * C6574) * C4735) *
               C30904 * C31244) *
              C30954 * C30937)) /
            (p * q * std::sqrt(p + q));
    d2ee[118] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C31055 -
           (C549 * C105 + C550 * C104 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
               C31062 +
           ((C113 * C481 + C516 + C516 + C31151 * C501) * C31138 * C103 +
            C551 * C104 + C552 * C105) *
               C3780) *
              C30954 * C30931 +
          ((C550 * C103 + C549 * C104 + C553 * C105) * C31062 -
           (C171 * C105 + C170 * C104 + C169 * C103) * C31055 -
           (C554 * C105 + C552 * C104 + C551 * C103) * C3780) *
              C30954 * C30940 +
          ((C170 * C103 + C171 * C104 + C172 * C105) * C31055 -
           (C778 * C105 + C553 * C104 + C549 * C103) * C31062 +
           (C552 * C103 + C554 * C104 +
            (C113 * C487 + C530 + C530 + C31151 * C507) * C31138 * C105) *
               C3780) *
              C30954 * C2881)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C31055 -
           (C5323 * C4735 + C5324 * C4734 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
               C30904 * C31062 +
           ((C113 * C481 + C516 + C516 + C31151 * C501) * C4733 +
            C5653 * C4734 + C5654 * C4735) *
               C30904 * C3780) *
              C30954 * C30931 +
          ((C544 * C4733 + C957 * C4734 + C1596 * C4735) * C30904 * C31062 -
           (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C31055 -
           (C6474 * C4735 + C2182 * C4734 + C545 * C4733) * C30904 * C3780) *
              C30954 * C30940 +
          ((C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C31055 -
           (C1595 * C4735 + C958 * C4734 + C543 * C4733) * C30904 * C31062 +
           (C546 * C4733 + C2181 * C4734 +
            (C113 * C1288 + C1316 + C1316 + C31151 * C1306) * C4735) *
               C30904 * C3780) *
              C30954 * C2881)) /
            (p * q * std::sqrt(p + q));
    d2ee[119] +=
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C3272 -
           (C549 * C105 + C550 * C104 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
               C31059) *
              C30954 * C31271 +
          ((C550 * C103 + C549 * C104 + C553 * C105) * C31059 -
           (C171 * C105 + C170 * C104 + C169 * C103) * C3272) *
              C30954 * C31264 +
          ((C170 * C103 + C171 * C104 + C172 * C105) * C3272 -
           (C778 * C105 + C553 * C104 + C549 * C103) * C31059) *
              C30954 * C31251 +
          ((C553 * C103 + C778 * C104 +
            (C113 * C768 + C774 + C774 + C31151 * C770) * C31138 * C105) *
               C31059 -
           (C173 * C105 + C172 * C104 + C171 * C103) * C3272) *
              C30954 * C31232)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
             C169 * C104 + C170 * C105) *
                C3272 -
            (C549 * C105 + C550 * C104 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
                C31059) *
               C31265 +
           (((C113 * C924 + C940 + C940 + C31151 * C934) * C31138 * C103 +
             C960 * C104 + C961 * C105) *
                C31059 -
            (C360 * C105 + C361 * C104 +
             (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
                C3272) *
               C31253 +
           (((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
             C362 * C104 + C363 * C105) *
                C3272 -
            (C1597 * C105 + C1598 * C104 +
             (C113 * C1285 + C1313 + C1313 + C31151 * C1303) * C31138 * C103) *
                C31059) *
               C31228) *
              C2618 +
          (((C550 * C103 + C549 * C104 + C553 * C105) * C31059 -
            (C171 * C105 + C170 * C104 + C169 * C103) * C3272) *
               C31265 +
           ((C361 * C103 + C360 * C104 + C364 * C105) * C3272 -
            (C962 * C105 + C961 * C104 + C960 * C103) * C31059) *
               C31253 +
           ((C1598 * C103 + C1597 * C104 +
             (C113 * C1582 + C1590 + C1590 + C31151 * C1584) * C31138 * C105) *
                C31059 -
            (C365 * C105 + C363 * C104 + C362 * C103) * C3272) *
               C31228) *
              C30937)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C3272 -
           (C5323 * C4735 + C5324 * C4734 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
               C30904 * C31059) *
              C30954 * C31271 +
          ((C544 * C4733 + C957 * C4734 + C1596 * C4735) * C30904 * C31059 -
           (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C3272) *
              C30954 * C31264 +
          ((C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C3272 -
           (C1595 * C4735 + C958 * C4734 + C543 * C4733) * C30904 * C31059) *
              C30954 * C31251 +
          ((C547 * C4733 + C959 * C4734 +
            (C113 * C1582 + C1590 + C1590 + C31151 * C1584) * C4735) *
               C30904 * C31059 -
           (C359 * C4735 + C358 * C4734 + C166 * C4733) * C30904 * C3272) *
              C30954 * C31232)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
             C4860 * C4734 + C4861 * C4735) *
                C30904 * C3272 -
            (C5323 * C4735 + C5324 * C4734 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
                C30904 * C31059) *
               C31265 +
           ((C5324 * C4733 + C5323 * C4734 + C5655 * C4735) * C30904 * C31059 -
            (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C3272) *
               C31253 +
           ((C4861 * C4733 + C4862 * C4734 + C5513 * C4735) * C30904 * C3272 -
            (C6025 * C4735 + C5655 * C4734 + C5323 * C4733) * C30904 * C31059) *
               C31228) *
              C2618 +
          (((C544 * C4733 + C957 * C4734 + C1596 * C4735) * C30904 * C31059 -
            (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C3272) *
               C31265 +
           ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C3272 -
            (C5918 * C4735 + C1596 * C4734 + C957 * C4733) * C30904 * C31059) *
               C31253 +
           ((C1596 * C4733 + C5918 * C4734 +
             (C113 * C5909 + C5915 + C5915 + C31151 * C5911) * C4735) *
                C30904 * C31059 -
            (C5763 * C4735 + C1434 * C4734 + C356 * C4733) * C30904 * C3272) *
               C31228) *
              C30937)) /
            (p * q * std::sqrt(p + q));
    d2ee[120] +=
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C30972 * C31197 -
           (C360 * C105 + C361 * C104 +
            (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
               C30972 * C31017) *
              C654 +
          ((C361 * C103 + C360 * C104 + C364 * C105) * C30972 * C31017 -
           (C171 * C105 + C170 * C104 + C169 * C103) * C30972 * C31197) *
              C655 +
          ((C170 * C103 + C171 * C104 + C172 * C105) * C30972 * C31197 -
           (C668 * C105 + C364 * C104 + C360 * C103) * C30972 * C31017) *
              C656 +
          ((C364 * C103 + C668 * C104 +
            (C113 * C658 + C664 + C664 + C31151 * C660) * C31138 * C105) *
               C30972 * C31017 -
           (C173 * C105 + C172 * C104 + C171 * C103) * C30972 * C31197) *
              C31232)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C30972 * C1414 -
           (C360 * C105 + C361 * C104 +
            (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
               C30972 * C1415 +
           ((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
            C362 * C104 + C363 * C105) *
               C30972 * C1416 -
           (C1435 * C105 + C1436 * C104 +
            (C113 * C1148 + C1167 + C1167 + C31151 * C1160) * C31138 * C103) *
               C30972 * C31238) *
              C31183 +
          ((C361 * C103 + C360 * C104 + C364 * C105) * C30972 * C1415 -
           (C171 * C105 + C170 * C104 + C169 * C103) * C30972 * C1414 -
           (C365 * C105 + C363 * C104 + C362 * C103) * C30972 * C1416 +
           (C1436 * C103 + C1435 * C104 +
            (C113 * C1420 + C1428 + C1428 + C31151 * C1422) * C31138 * C105) *
               C30972 * C31238) *
              C30937)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C30972 * C31197 -
           (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C30972 *
               C31017) *
              C654 +
          ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C30972 *
               C31017 -
           (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C30972 *
               C31197) *
              C655 +
          ((C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C30972 *
               C31197 -
           (C1433 * C4735 + C357 * C4734 + C354 * C4733) * C30904 * C30972 *
               C31017) *
              C656 +
          ((C358 * C4733 + C359 * C4734 +
            (C113 * C1420 + C1428 + C1428 + C31151 * C1422) * C4735) *
               C30904 * C30972 * C31017 -
           (C359 * C4735 + C358 * C4734 + C166 * C4733) * C30904 * C30972 *
               C31197) *
              C31232)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C30972 * C1414 -
           (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C30972 *
               C1415 +
           (C4861 * C4733 + C4862 * C4734 + C5513 * C4735) * C30904 * C30972 *
               C1416 -
           (C5514 * C4735 + C5513 * C4734 + C4862 * C4733) * C30904 * C30972 *
               C31238) *
              C31183 +
          ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C30972 *
               C1415 -
           (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C30972 *
               C1414 -
           (C5763 * C4735 + C1434 * C4734 + C356 * C4733) * C30904 * C30972 *
               C1416 +
           (C1434 * C4733 + C5763 * C4734 +
            (C113 * C5754 + C5760 + C5760 + C31151 * C5756) * C4735) *
               C30904 * C30972 * C31238) *
              C30937)) /
            (p * q * std::sqrt(p + q));
    d2ee[121] +=
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
             C169 * C104 + C170 * C105) *
                C31198 -
            (C549 * C105 + C550 * C104 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
                C31059) *
               C31197 +
           (((C113 * C924 + C940 + C940 + C31151 * C934) * C31138 * C103 +
             C960 * C104 + C961 * C105) *
                C31059 -
            (C360 * C105 + C361 * C104 +
             (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
                C31198) *
               C31017) *
              C286 +
          (((C550 * C103 + C549 * C104 + C553 * C105) * C31059 -
            (C171 * C105 + C170 * C104 + C169 * C103) * C31198) *
               C31197 +
           ((C361 * C103 + C360 * C104 + C364 * C105) * C31198 -
            (C962 * C105 + C961 * C104 + C960 * C103) * C31059) *
               C31017) *
              C287 +
          (((C170 * C103 + C171 * C104 + C172 * C105) * C31198 -
            (C778 * C105 + C553 * C104 + C549 * C103) * C31059) *
               C31197 +
           ((C961 * C103 + C962 * C104 +
             (C113 * C928 + C950 + C950 + C31151 * C938) * C31138 * C105) *
                C31059 -
            (C668 * C105 + C364 * C104 + C360 * C103) * C31198) *
               C31017) *
              C31222)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C31198 -
           (C549 * C105 + C550 * C104 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
               C31059) *
              C1414 +
          (((C113 * C924 + C940 + C940 + C31151 * C934) * C31138 * C103 +
            C960 * C104 + C961 * C105) *
               C31059 -
           (C360 * C105 + C361 * C104 +
            (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
               C31198) *
              C1415 +
          (((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
            C362 * C104 + C363 * C105) *
               C31198 -
           (C1597 * C105 + C1598 * C104 +
            (C113 * C1285 + C1313 + C1313 + C31151 * C1303) * C31138 * C103) *
               C31059) *
              C1416 +
          (((C113 * C1696 + C1706 + C1706 + C31151 * C1702) * C31138 * C103 +
            (C113 * C1697 + C1707 + C1707 + C31151 * C1703) * C31138 * C104 +
            (C113 * C1698 + C1708 + C1708 + C31151 * C1704) * C31138 * C105) *
               C31059 -
           (C1435 * C105 + C1436 * C104 +
            (C113 * C1148 + C1167 + C1167 + C31151 * C1160) * C31138 * C103) *
               C31198) *
              C31238) *
         C30926) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
             C4860 * C4734 + C4861 * C4735) *
                C30904 * C31198 -
            (C5323 * C4735 + C5324 * C4734 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
                C30904 * C31059) *
               C31197 +
           ((C5324 * C4733 + C5323 * C4734 +
             (C113 * C1696 + C1706 + C1706 + C31151 * C1702) * C4735) *
                C30904 * C31059 -
            (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C31198) *
               C31017) *
              C286 +
          (((C544 * C4733 + C957 * C4734 + C1596 * C4735) * C30904 * C31059 -
            (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C31198) *
               C31197 +
           ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C31198 -
            ((C113 * C1697 + C1707 + C1707 + C31151 * C1703) * C4735 +
             C1596 * C4734 + C957 * C4733) *
                C30904 * C31059) *
               C31017) *
              C287 +
          (((C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C31198 -
            (C1595 * C4735 + C958 * C4734 + C543 * C4733) * C30904 * C31059) *
               C31197 +
           ((C958 * C4733 + C1595 * C4734 +
             (C113 * C1698 + C1708 + C1708 + C31151 * C1704) * C4735) *
                C30904 * C31059 -
            (C1433 * C4735 + C357 * C4734 + C354 * C4733) * C30904 * C31198) *
               C31017) *
              C31222)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C31198 -
           (C5323 * C4735 + C5324 * C4734 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
               C30904 * C31059) *
              C1414 +
          ((C5324 * C4733 + C5323 * C4734 + C5655 * C4735) * C30904 * C31059 -
           (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C31198) *
              C1415 +
          ((C4861 * C4733 + C4862 * C4734 + C5513 * C4735) * C30904 * C31198 -
           (C6025 * C4735 + C5655 * C4734 + C5323 * C4733) * C30904 * C31059) *
              C1416 +
          ((C5655 * C4733 + C6025 * C4734 +
            (C113 * C6016 + C6022 + C6022 + C31151 * C6018) * C4735) *
               C30904 * C31059 -
           (C5514 * C4735 + C5513 * C4734 + C4862 * C4733) * C30904 * C31198) *
              C31238) *
         C30926) /
            (p * q * std::sqrt(p + q));
    d2ee[122] +=
        (-std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C30972 * C31265 -
           (C360 * C105 + C361 * C104 +
            (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
               C30972 * C31253 +
           ((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
            C362 * C104 + C363 * C105) *
               C30972 * C31228) *
              C286 +
          ((C361 * C103 + C360 * C104 + C364 * C105) * C30972 * C31253 -
           (C171 * C105 + C170 * C104 + C169 * C103) * C30972 * C31265 -
           (C365 * C105 + C363 * C104 + C362 * C103) * C30972 * C31228) *
              C287 +
          ((C170 * C103 + C171 * C104 + C172 * C105) * C30972 * C31265 -
           ((C113 * C297 + C340 + C340 + C31151 * C317) * C31138 * C105 +
            C364 * C104 + C360 * C103) *
               C30972 * C31253 +
           (C363 * C103 + C365 * C104 +
            (C113 * C298 + C341 + C341 + C31151 * C318) * C31138 * C105) *
               C30972 * C31228) *
              C31222)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
           C169 * C104 + C170 * C105) *
              C30972 * C30954 * C108 -
          (C171 * C105 + C170 * C104 + C169 * C103) * C30972 * C30954 * C109 +
          (C170 * C103 + C171 * C104 + C172 * C105) * C30972 * C30954 * C110 -
          (C173 * C105 + C172 * C104 + C171 * C103) * C30972 * C30954 * C111 +
          (C172 * C103 + C173 * C104 +
           (C113 * C121 + C153 + C153 + C31151 * C135) * C31138 * C105) *
              C30972 * C30954 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C31266 -
           (C549 * C105 + C550 * C104 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
               C31255 +
           ((C113 * C481 + C516 + C516 + C31151 * C501) * C31138 * C103 +
            C551 * C104 + C552 * C105) *
               C31231) *
              C30954 * C286 +
          ((C550 * C103 + C549 * C104 + C553 * C105) * C31255 -
           (C171 * C105 + C170 * C104 + C169 * C103) * C31266 -
           (C554 * C105 + C552 * C104 + C551 * C103) * C31231) *
              C30954 * C287 +
          ((C170 * C103 + C171 * C104 + C172 * C105) * C31266 -
           ((C113 * C486 + C529 + C529 + C31151 * C506) * C31138 * C105 +
            C553 * C104 + C549 * C103) *
               C31255 +
           (C552 * C103 + C554 * C104 +
            (C113 * C487 + C530 + C530 + C31151 * C507) * C31138 * C105) *
               C31231) *
              C30954 * C31222)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C30972 * C1072 -
           (C360 * C105 + C361 * C104 +
            (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
               C30972 * C1073 +
           ((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
            C362 * C104 + C363 * C105) *
               C30972 * C31228) *
              C31262 +
          ((C361 * C103 + C360 * C104 + C364 * C105) * C30972 * C1073 -
           (C171 * C105 + C170 * C104 + C169 * C103) * C30972 * C1072 -
           (C365 * C105 + C363 * C104 + C362 * C103) * C30972 * C31228) *
              C31249 +
          ((C170 * C103 + C171 * C104 + C172 * C105) * C30972 * C1072 -
           (C668 * C105 + C364 * C104 + C360 * C103) * C30972 * C1073 +
           (C363 * C103 + C365 * C104 +
            (C113 * C298 + C341 + C341 + C31151 * C318) * C31138 * C105) *
               C30972 * C31228) *
              C31222)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
           C169 * C104 + C170 * C105) *
              C30972 * C1140 -
          (C360 * C105 + C361 * C104 +
           (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
              C30972 * C1141 +
          ((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
           C362 * C104 + C363 * C105) *
              C30972 * C1142 -
          ((C113 * C1146 + C1165 + C1165 + C31151 * C1158) * C31138 * C105 +
           (C113 * C1147 + C1166 + C1166 + C31151 * C1159) * C31138 * C104 +
           (C113 * C1148 + C1167 + C1167 + C31151 * C1160) * C31138 * C103) *
              C30972 * C1143 +
          ((C113 * C1149 + C1168 + C1168 + C31151 * C1161) * C31138 * C103 +
           (C113 * C1150 + C1169 + C1169 + C31151 * C1162) * C31138 * C104 +
           (C113 * C1151 + C1170 + C1170 + C31151 * C1163) * C31138 * C105) *
              C30972 * C1144) *
         C30926) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C31266 -
           (C549 * C105 + C550 * C104 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
               C31255 +
           ((C113 * C481 + C516 + C516 + C31151 * C501) * C31138 * C103 +
            C551 * C104 + C552 * C105) *
               C31231) *
              C1072 +
          (((C113 * C924 + C940 + C940 + C31151 * C934) * C31138 * C103 +
            C960 * C104 + C961 * C105) *
               C31255 -
           (C360 * C105 + C361 * C104 +
            (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
               C31266 -
           ((C113 * C1280 + C1308 + C1308 + C31151 * C1298) * C31138 * C105 +
            (C113 * C1281 + C1309 + C1309 + C31151 * C1299) * C31138 * C104 +
            (C113 * C1282 + C1310 + C1310 + C31151 * C1300) * C31138 * C103) *
               C31231) *
              C1073 +
          (((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
            C362 * C104 + C363 * C105) *
               C31266 -
           ((C113 * C1283 + C1311 + C1311 + C31151 * C1301) * C31138 * C105 +
            (C113 * C1284 + C1312 + C1312 + C31151 * C1302) * C31138 * C104 +
            (C113 * C1285 + C1313 + C1313 + C31151 * C1303) * C31138 * C103) *
               C31255 +
           ((C113 * C1286 + C1314 + C1314 + C31151 * C1304) * C31138 * C103 +
            (C113 * C1287 + C1315 + C1315 + C31151 * C1305) * C31138 * C104 +
            (C113 * C1288 + C1316 + C1316 + C31151 * C1306) * C31138 * C105) *
               C31231) *
              C31228) *
         C30926) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
           (C113 * C291 + C326 + C326 + C31151 * C311) * C4734 +
           (C113 * C292 + C327 + C327 + C31151 * C312) * C4735) *
              C30904 * C30972 * C30954 * C108 -
          (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C30972 *
              C30954 * C109 +
          (C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C30972 *
              C30954 * C110 -
          (C359 * C4735 + C358 * C4734 + C166 * C4733) * C30904 * C30972 *
              C30954 * C111 +
          (C167 * C4733 + C667 * C4734 +
           (C113 * C298 + C341 + C341 + C31151 * C318) * C4735) *
              C30904 * C30972 * C30954 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C30972 * C31265 -
           (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C30972 *
               C31253 +
           (C4861 * C4733 + C4862 * C4734 +
            (C113 * C1149 + C1168 + C1168 + C31151 * C1161) * C4735) *
               C30904 * C30972 * C31228) *
              C286 +
          ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C30972 *
               C31253 -
           (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C30972 *
               C31265 -
           ((C113 * C1150 + C1169 + C1169 + C31151 * C1162) * C4735 +
            C1434 * C4734 + C356 * C4733) *
               C30904 * C30972 * C31228) *
              C287 +
          ((C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C30972 *
               C31265 -
           (C1433 * C4735 + C357 * C4734 + C354 * C4733) * C30904 * C30972 *
               C31253 +
           (C357 * C4733 + C1433 * C4734 +
            (C113 * C1151 + C1170 + C1170 + C31151 * C1163) * C4735) *
               C30904 * C30972 * C31228) *
              C31222)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C31266 -
           ((C113 * C1285 + C1313 + C1313 + C31151 * C1303) * C4735 +
            (C113 * C924 + C940 + C940 + C31151 * C934) * C4734 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
               C30904 * C31255 +
           ((C113 * C481 + C516 + C516 + C31151 * C501) * C4733 +
            (C113 * C1282 + C1310 + C1310 + C31151 * C1300) * C4734 +
            (C113 * C1286 + C1314 + C1314 + C31151 * C1304) * C4735) *
               C30904 * C31231) *
              C30954 * C286 +
          ((C544 * C4733 + C957 * C4734 + C1596 * C4735) * C30904 * C31255 -
           (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C31266 -
           ((C113 * C1287 + C1315 + C1315 + C31151 * C1305) * C4735 +
            C2182 * C4734 + C545 * C4733) *
               C30904 * C31231) *
              C30954 * C287 +
          ((C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C31266 -
           (C1595 * C4735 + C958 * C4734 + C543 * C4733) * C30904 * C31255 +
           (C546 * C4733 + C2181 * C4734 +
            (C113 * C1288 + C1316 + C1316 + C31151 * C1306) * C4735) *
               C30904 * C31231) *
              C30954 * C31222)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C30972 * C1072 -
           (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C30972 *
               C1073 +
           (C4861 * C4733 + C4862 * C4734 +
            (C113 * C1149 + C1168 + C1168 + C31151 * C1161) * C4735) *
               C30904 * C30972 * C31228) *
              C31262 +
          ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C30972 *
               C1073 -
           (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C30972 *
               C1072 -
           ((C113 * C1150 + C1169 + C1169 + C31151 * C1162) * C4735 +
            C1434 * C4734 + C356 * C4733) *
               C30904 * C30972 * C31228) *
              C31249 +
          ((C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C30972 *
               C1072 -
           (C1433 * C4735 + C357 * C4734 + C354 * C4733) * C30904 * C30972 *
               C1073 +
           (C357 * C4733 + C1433 * C4734 +
            (C113 * C1151 + C1170 + C1170 + C31151 * C1163) * C4735) *
               C30904 * C30972 * C31228) *
              C31222)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 + C4860 * C4734 +
           C4861 * C4735) *
              C30904 * C30972 * C1140 -
          (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C30972 *
              C1141 +
          (C4861 * C4733 + C4862 * C4734 + C5513 * C4735) * C30904 * C30972 *
              C1142 -
          (C5514 * C4735 + C5513 * C4734 + C4862 * C4733) * C30904 * C30972 *
              C1143 +
          (C5513 * C4733 + C5514 * C4734 +
           (C113 * C5497 + C5508 + C5508 + C31151 * C5501) * C4735) *
              C30904 * C30972 * C1144) *
         C30926) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C31266 -
           (C5323 * C4735 + C5324 * C4734 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
               C30904 * C31255 +
           ((C113 * C481 + C516 + C516 + C31151 * C501) * C4733 +
            C5653 * C4734 + C5654 * C4735) *
               C30904 * C31231) *
              C1072 +
          ((C5324 * C4733 + C5323 * C4734 + C5655 * C4735) * C30904 * C31255 -
           (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C31266 -
           (C5656 * C4735 + C5654 * C4734 + C5653 * C4733) * C30904 * C31231) *
              C1073 +
          ((C4861 * C4733 + C4862 * C4734 + C5513 * C4735) * C30904 * C31266 -
           ((C113 * C5625 + C5643 + C5643 + C31151 * C5631) * C4735 +
            C5655 * C4734 + C5323 * C4733) *
               C30904 * C31255 +
           (C5654 * C4733 + C5656 * C4734 +
            (C113 * C5626 + C5644 + C5644 + C31151 * C5632) * C4735) *
               C30904 * C31231) *
              C31228) *
         C30926) /
            (p * q * std::sqrt(p + q));
    d2ee[123] +=
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C31198 -
           (C549 * C105 + C550 * C104 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
               C31059) *
              C30954 * C654 +
          ((C550 * C103 + C549 * C104 + C553 * C105) * C31059 -
           (C171 * C105 + C170 * C104 + C169 * C103) * C31198) *
              C30954 * C655 +
          ((C170 * C103 + C171 * C104 + C172 * C105) * C31198 -
           (C778 * C105 + C553 * C104 + C549 * C103) * C31059) *
              C30954 * C656 +
          ((C553 * C103 + C778 * C104 +
            (C113 * C768 + C774 + C774 + C31151 * C770) * C31138 * C105) *
               C31059 -
           (C173 * C105 + C172 * C104 + C171 * C103) * C31198) *
              C30954 * C31232)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
             C169 * C104 + C170 * C105) *
                C31198 -
            (C549 * C105 + C550 * C104 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C31138 * C103) *
                C31059) *
               C1072 +
           (((C113 * C924 + C940 + C940 + C31151 * C934) * C31138 * C103 +
             C960 * C104 + C961 * C105) *
                C31059 -
            (C360 * C105 + C361 * C104 +
             (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
                C31198) *
               C1073 +
           (((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
             C362 * C104 + C363 * C105) *
                C31198 -
            (C1597 * C105 + C1598 * C104 +
             (C113 * C1285 + C1313 + C1313 + C31151 * C1303) * C31138 * C103) *
                C31059) *
               C31228) *
              C31183 +
          (((C550 * C103 + C549 * C104 + C553 * C105) * C31059 -
            (C171 * C105 + C170 * C104 + C169 * C103) * C31198) *
               C1072 +
           ((C361 * C103 + C360 * C104 + C364 * C105) * C31198 -
            (C962 * C105 + C961 * C104 + C960 * C103) * C31059) *
               C1073 +
           ((C1598 * C103 + C1597 * C104 +
             (C113 * C1582 + C1590 + C1590 + C31151 * C1584) * C31138 * C105) *
                C31059 -
            (C365 * C105 + C363 * C104 + C362 * C103) * C31198) *
               C31228) *
              C30937)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C31198 -
           ((C113 * C1285 + C1313 + C1313 + C31151 * C1303) * C4735 +
            (C113 * C924 + C940 + C940 + C31151 * C934) * C4734 +
            (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
               C30904 * C31059) *
              C30954 * C654 +
          ((C544 * C4733 + C957 * C4734 + C1596 * C4735) * C30904 * C31059 -
           (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C31198) *
              C30954 * C655 +
          ((C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C31198 -
           (C1595 * C4735 + C958 * C4734 + C543 * C4733) * C30904 * C31059) *
              C30954 * C656 +
          ((C547 * C4733 + C959 * C4734 +
            (C113 * C1582 + C1590 + C1590 + C31151 * C1584) * C4735) *
               C30904 * C31059 -
           (C359 * C4735 + C358 * C4734 + C166 * C4733) * C30904 * C31198) *
              C30954 * C31232)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
             C4860 * C4734 + C4861 * C4735) *
                C30904 * C31198 -
            (C5323 * C4735 + C5324 * C4734 +
             (C113 * C480 + C515 + C515 + C31151 * C500) * C4733) *
                C30904 * C31059) *
               C1072 +
           ((C5324 * C4733 + C5323 * C4734 + C5655 * C4735) * C30904 * C31059 -
            (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C31198) *
               C1073 +
           ((C4861 * C4733 + C4862 * C4734 + C5513 * C4735) * C30904 * C31198 -
            ((C113 * C5625 + C5643 + C5643 + C31151 * C5631) * C4735 +
             C5655 * C4734 + C5323 * C4733) *
                C30904 * C31059) *
               C31228) *
              C31183 +
          (((C544 * C4733 + C957 * C4734 + C1596 * C4735) * C30904 * C31059 -
            (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C31198) *
               C1072 +
           ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C31198 -
            (C5918 * C4735 + C1596 * C4734 + C957 * C4733) * C30904 * C31059) *
               C1073 +
           ((C1596 * C4733 + C5918 * C4734 +
             (C113 * C5909 + C5915 + C5915 + C31151 * C5911) * C4735) *
                C30904 * C31059 -
            (C5763 * C4735 + C1434 * C4734 + C356 * C4733) * C30904 * C31198) *
               C31228) *
              C30937)) /
            (p * q * std::sqrt(p + q));
    d2ee[124] +=
        (std::sqrt(0.421875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
           C169 * C104 + C170 * C105) *
              C30972 * C30954 * C108 -
          (C171 * C105 + C170 * C104 + C169 * C103) * C30972 * C30954 * C109 +
          (C170 * C103 + C171 * C104 + C172 * C105) * C30972 * C30954 * C110 -
          (C173 * C105 + C172 * C104 + C171 * C103) * C30972 * C30954 * C111 +
          (C172 * C103 + C173 * C104 +
           (C113 * C121 + C153 + C153 + C31151 * C135) * C31138 * C105) *
              C30972 * C30954 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.421875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C30972 * C31265 -
           (C360 * C105 + C361 * C104 +
            (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
               C30972 * C31253 +
           ((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
            C362 * C104 + C363 * C105) *
               C30972 * C31228) *
              C286 +
          ((C361 * C103 + C360 * C104 + C364 * C105) * C30972 * C31253 -
           (C171 * C105 + C170 * C104 + C169 * C103) * C30972 * C31265 -
           (C365 * C105 + C363 * C104 + C362 * C103) * C30972 * C31228) *
              C287 +
          ((C170 * C103 + C171 * C104 + C172 * C105) * C30972 * C31265 -
           ((C113 * C297 + C340 + C340 + C31151 * C317) * C31138 * C105 +
            C364 * C104 + C360 * C103) *
               C30972 * C31253 +
           (C363 * C103 + C365 * C104 +
            (C113 * C298 + C341 + C341 + C31151 * C318) * C31138 * C105) *
               C30972 * C31228) *
              C31222)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.421875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
            C169 * C104 + C170 * C105) *
               C30972 * C1072 -
           (C360 * C105 + C361 * C104 +
            (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
               C30972 * C1073 +
           ((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
            C362 * C104 + C363 * C105) *
               C30972 * C31228) *
              C31262 +
          ((C361 * C103 + C360 * C104 + C364 * C105) * C30972 * C1073 -
           (C171 * C105 + C170 * C104 + C169 * C103) * C30972 * C1072 -
           (C365 * C105 + C363 * C104 + C362 * C103) * C30972 * C31228) *
              C31249 +
          ((C170 * C103 + C171 * C104 + C172 * C105) * C30972 * C1072 -
           (C668 * C105 + C364 * C104 + C360 * C103) * C30972 * C1073 +
           (C363 * C103 + C365 * C104 +
            (C113 * C298 + C341 + C341 + C31151 * C318) * C31138 * C105) *
               C30972 * C31228) *
              C31222)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.421875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C31151 * C129) * C31138 * C103 +
           C169 * C104 + C170 * C105) *
              C30972 * C1140 -
          (C360 * C105 + C361 * C104 +
           (C113 * C291 + C326 + C326 + C31151 * C311) * C31138 * C103) *
              C30972 * C1141 +
          ((C113 * C292 + C327 + C327 + C31151 * C312) * C31138 * C103 +
           C362 * C104 + C363 * C105) *
              C30972 * C1142 -
          ((C113 * C1146 + C1165 + C1165 + C31151 * C1158) * C31138 * C105 +
           (C113 * C1147 + C1166 + C1166 + C31151 * C1159) * C31138 * C104 +
           (C113 * C1148 + C1167 + C1167 + C31151 * C1160) * C31138 * C103) *
              C30972 * C1143 +
          ((C113 * C1149 + C1168 + C1168 + C31151 * C1161) * C31138 * C103 +
           (C113 * C1150 + C1169 + C1169 + C31151 * C1162) * C31138 * C104 +
           (C113 * C1151 + C1170 + C1170 + C31151 * C1163) * C31138 * C105) *
              C30972 * C1144) *
         C30926) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.421875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
           (C113 * C291 + C326 + C326 + C31151 * C311) * C4734 +
           (C113 * C292 + C327 + C327 + C31151 * C312) * C4735) *
              C30904 * C30972 * C30954 * C108 -
          (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C30972 *
              C30954 * C109 +
          (C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C30972 *
              C30954 * C110 -
          (C359 * C4735 + C358 * C4734 + C166 * C4733) * C30904 * C30972 *
              C30954 * C111 +
          (C167 * C4733 + C667 * C4734 +
           (C113 * C298 + C341 + C341 + C31151 * C318) * C4735) *
              C30904 * C30972 * C30954 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.421875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C30972 * C31265 -
           (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C30972 *
               C31253 +
           (C4861 * C4733 + C4862 * C4734 +
            (C113 * C1149 + C1168 + C1168 + C31151 * C1161) * C4735) *
               C30904 * C30972 * C31228) *
              C286 +
          ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C30972 *
               C31253 -
           (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C30972 *
               C31265 -
           ((C113 * C1150 + C1169 + C1169 + C31151 * C1162) * C4735 +
            C1434 * C4734 + C356 * C4733) *
               C30904 * C30972 * C31228) *
              C287 +
          ((C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C30972 *
               C31265 -
           (C1433 * C4735 + C357 * C4734 + C354 * C4733) * C30904 * C30972 *
               C31253 +
           (C357 * C4733 + C1433 * C4734 +
            (C113 * C1151 + C1170 + C1170 + C31151 * C1163) * C4735) *
               C30904 * C30972 * C31228) *
              C31222)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.421875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 +
            C4860 * C4734 + C4861 * C4735) *
               C30904 * C30972 * C1072 -
           (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C30972 *
               C1073 +
           (C4861 * C4733 + C4862 * C4734 +
            (C113 * C1149 + C1168 + C1168 + C31151 * C1161) * C4735) *
               C30904 * C30972 * C31228) *
              C31262 +
          ((C355 * C4733 + C356 * C4734 + C1434 * C4735) * C30904 * C30972 *
               C1073 -
           (C356 * C4735 + C355 * C4734 + C164 * C4733) * C30904 * C30972 *
               C1072 -
           ((C113 * C1150 + C1169 + C1169 + C31151 * C1162) * C4735 +
            C1434 * C4734 + C356 * C4733) *
               C30904 * C30972 * C31228) *
              C31249 +
          ((C165 * C4733 + C354 * C4734 + C357 * C4735) * C30904 * C30972 *
               C1072 -
           (C1433 * C4735 + C357 * C4734 + C354 * C4733) * C30904 * C30972 *
               C1073 +
           (C357 * C4733 + C1433 * C4734 +
            (C113 * C1151 + C1170 + C1170 + C31151 * C1163) * C4735) *
               C30904 * C30972 * C31228) *
              C31222)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.421875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C31151 * C129) * C4733 + C4860 * C4734 +
           C4861 * C4735) *
              C30904 * C30972 * C1140 -
          (C4862 * C4735 + C4861 * C4734 + C4860 * C4733) * C30904 * C30972 *
              C1141 +
          (C4861 * C4733 + C4862 * C4734 + C5513 * C4735) * C30904 * C30972 *
              C1142 -
          (C5514 * C4735 + C5513 * C4734 + C4862 * C4733) * C30904 * C30972 *
              C1143 +
          (C5513 * C4733 + C5514 * C4734 +
           (C113 * C5497 + C5508 + C5508 + C31151 * C5501) * C4735) *
              C30904 * C30972 * C1144) *
         C30926) /
            (p * q * std::sqrt(p + q));
}
