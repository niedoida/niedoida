/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_sssd_AA.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
void second_derivative_ee_0002_11(const double ae,
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
    const double C1095 = ae + be;
    const double C1094 = ae * be;
    const double C1093 = xA - xB;
    const double C1104 = yA - yB;
    const double C1107 = zA - zB;
    const double C1110 = p + q;
    const double C1109 = p * q;
    const double C1115 = xP - xQ;
    const double C1114 = bs[2];
    const double C1122 = std::pow(ae, 2);
    const double C1120 = bs[3];
    const double C1133 = yP - yQ;
    const double C1142 = zP - zQ;
    const double C63 = bs[0];
    const double C1300 = ce + de;
    const double C1299 = ce * de;
    const double C1298 = xC - xD;
    const double C1312 = yC - yD;
    const double C1326 = zC - zD;
    const double C53 = std::exp(-(std::pow(C1093, 2) * C1094) / C1095);
    const double C55 = std::exp(-(std::pow(C1104, 2) * C1094) / C1095);
    const double C54 = std::exp(-(std::pow(C1107, 2) * C1094) / C1095);
    const double C1111 = 2 * C1109;
    const double C1123 = C1115 * ae;
    const double C1119 = std::pow(C1115, 2);
    const double C1136 = C1133 * ae;
    const double C1135 = C1115 * C1133;
    const double C1152 = C1133 * C1115;
    const double C1157 = std::pow(C1133, 2);
    const double C1145 = C1142 * ae;
    const double C1144 = C1115 * C1142;
    const double C1161 = C1133 * C1142;
    const double C1166 = C1142 * C1115;
    const double C1171 = C1142 * C1133;
    const double C1176 = std::pow(C1142, 2);
    const double C1351 = 2 * C1300;
    const double C1350 = std::pow(C1300, 2);
    const double C1301 = std::pow(C1298, 2);
    const double C1349 = C1298 * ce;
    const double C1313 = std::pow(C1312, 2);
    const double C1352 = C1312 * ce;
    const double C1327 = std::pow(C1326, 2);
    const double C1353 = C1326 * ce;
    const double C61 =
        -((C53 - (C1093 * 2 * C1094 * C1093 * C53) / C1095) * 2 * C1094) /
        C1095;
    const double C62 = -(2 * C1094 * C1093 * C53) / C1095;
    const double C89 = -(2 * C1094 * (yA - yB) * C55) / C1095;
    const double C148 =
        -((C55 - (C1104 * 2 * C1094 * C1104 * C55) / C1095) * 2 * C1094) /
        C1095;
    const double C110 = -(2 * C1094 * (zA - zB) * C54) / C1095;
    const double C220 =
        -((C54 - (C1107 * 2 * C1094 * C1107 * C54) / C1095) * 2 * C1094) /
        C1095;
    const double C1113 = C1111 / C1110;
    const double C69 =
        ((std::pow(xP - xQ, 2) * bs[2] * std::pow(C1111 / C1110, 2) -
          (bs[1] * C1111) / C1110) *
         std::pow(ae, 2)) /
        std::pow(C1095, 2);
    const double C64 = -(C1115 * bs[1] * C1111) / C1110;
    const double C245 = -(C1133 * bs[1] * C1111) / C1110;
    const double C406 = -(C1142 * bs[1] * C1111) / C1110;
    const double C1125 = C1120 * C1123;
    const double C66 = (-(bs[1] * C1123 * C1111) / C1110) / C1095;
    const double C1138 = C1120 * C1136;
    const double C90 = (-(bs[1] * C1136 * C1111) / C1110) / C1095;
    const double C1137 = C1135 * C1122;
    const double C1153 = C1152 * C1122;
    const double C1147 = C1120 * C1145;
    const double C111 = (-(bs[1] * C1145 * C1111) / C1110) / C1095;
    const double C1146 = C1144 * C1122;
    const double C1162 = C1161 * C1122;
    const double C1167 = C1166 * C1122;
    const double C1172 = C1171 * C1122;
    const double C1356 = std::pow(C1351, -2);
    const double C1354 = std::pow(C1351, -1);
    const double C1302 = C1301 * C1299;
    const double C1314 = C1313 * C1299;
    const double C1328 = C1327 * C1299;
    const double C1116 = std::pow(C1113, 2);
    const double C1121 = -C1113;
    const double C73 = C62 * C66;
    const double C153 = C89 * C90;
    const double C225 = C110 * C111;
    const double C1303 = C1302 / C1300;
    const double C1315 = C1314 / C1300;
    const double C1329 = C1328 / C1300;
    const double C1118 = C1114 * C1116;
    const double C70 = (2 * ae * C1116 * C1114 * C1115 * ae +
                        C1115 *
                            (C1114 * C1116 +
                             std::pow(C1115, 2) * bs[3] * std::pow(-C1113, 3)) *
                            std::pow(ae, 2)) /
                       std::pow(C1095, 2);
    const double C93 =
        (C1116 * C1114 * C1115 * (yP - yQ) * C1122) / std::pow(C1095, 2);
    const double C114 =
        (C1116 * C1114 * C1115 * (zP - zQ) * C1122) / std::pow(C1095, 2);
    const double C131 =
        (C1116 * C1114 * C1133 * C1115 * C1122) / std::pow(C1095, 2);
    const double C149 =
        ((std::pow(C1133, 2) * C1114 * C1116 - (bs[1] * C1111) / C1110) *
         C1122) /
        std::pow(C1095, 2);
    const double C169 =
        (C1116 * C1114 * C1133 * C1142 * C1122) / std::pow(C1095, 2);
    const double C186 =
        (C1116 * C1114 * C1142 * C1115 * C1122) / std::pow(C1095, 2);
    const double C203 =
        (C1116 * C1114 * C1142 * C1133 * C1122) / std::pow(C1095, 2);
    const double C221 =
        ((std::pow(C1142, 2) * C1114 * C1116 - (bs[1] * C1111) / C1110) *
         C1122) /
        std::pow(C1095, 2);
    const double C67 = (C1115 * C1116 * C1114 * C1123) / C1095 -
                       (ae * bs[1] * C1111) / (C1110 * C1095);
    const double C91 = (C1115 * C1116 * C1114 * C1136) / C1095;
    const double C112 = (C1115 * C1116 * C1114 * C1145) / C1095;
    const double C247 = (C1133 * C1116 * C1114 * C1123) / C1095;
    const double C267 = (C1133 * C1116 * C1114 * C1136) / C1095 -
                        (ae * bs[1] * C1111) / (C1110 * C1095);
    const double C285 = (C1133 * C1116 * C1114 * C1145) / C1095;
    const double C408 = (C1142 * C1116 * C1114 * C1123) / C1095;
    const double C428 = (C1142 * C1116 * C1114 * C1136) / C1095;
    const double C446 = (C1142 * C1116 * C1114 * C1145) / C1095 -
                        (ae * bs[1] * C1111) / (C1110 * C1095);
    const double C1124 = std::pow(C1121, 3);
    const double C1304 = -C1303;
    const double C1316 = -C1315;
    const double C1330 = -C1329;
    const double C1126 = C1118 * ae;
    const double C65 = C1118 * C1119 - (bs[1] * C1111) / C1110;
    const double C246 = C1118 * C1157 - (bs[1] * C1111) / C1110;
    const double C407 = C1118 * C1176 - (bs[1] * C1111) / C1110;
    const double C572 = C1133 * C1115 * C1118;
    const double C752 = C1142 * C1115 * C1118;
    const double C930 = C1142 * C1133 * C1118;
    const double C74 = C62 * C67;
    const double C154 = C89 * C91;
    const double C226 = C110 * C112;
    const double C252 = C62 * C247;
    const double C322 = C89 * C267;
    const double C388 = C110 * C285;
    const double C413 = C62 * C408;
    const double C483 = C89 * C428;
    const double C549 = C110 * C446;
    const double C1127 = C1124 * C1125;
    const double C1139 = C1124 * C1138;
    const double C1148 = C1124 * C1147;
    const double C94 = (ae * C1116 * C1114 * C1133 * ae +
                        C1115 * C1124 * C1120 * C1115 * C1133 * C1122) /
                       std::pow(C1095, 2);
    const double C115 = (ae * C1116 * C1114 * C1142 * ae +
                         C1115 * C1124 * C1120 * C1115 * C1142 * C1122) /
                        std::pow(C1095, 2);
    const double C132 = (ae * C1116 * C1114 * C1136 +
                         C1115 * C1124 * C1120 * C1133 * C1115 * C1122) /
                        std::pow(C1095, 2);
    const double C150 =
        (C1115 * (C1118 + std::pow(C1133, 2) * C1120 * C1124) * C1122) /
        std::pow(C1095, 2);
    const double C151 =
        ((C1118 + C1157 * C1120 * C1124) * C1122 +
         (C1120 * C1124 + C1157 * bs[4] * std::pow(C1113, 4)) * C1122 * C1119) /
        std::pow(C1095, 2);
    const double C170 =
        (C1115 * C1124 * C1120 * C1133 * C1142 * C1122) / std::pow(C1095, 2);
    const double C171 =
        (C1124 * C1120 * C1162 + std::pow(C1113, 4) * bs[4] * C1162 * C1119) /
        std::pow(C1095, 2);
    const double C187 = (ae * C1116 * C1114 * C1145 +
                         C1115 * C1124 * C1120 * C1142 * C1115 * C1122) /
                        std::pow(C1095, 2);
    const double C204 =
        (C1115 * C1124 * C1120 * C1142 * C1133 * C1122) / std::pow(C1095, 2);
    const double C205 =
        (C1124 * C1120 * C1172 + std::pow(C1113, 4) * bs[4] * C1172 * C1119) /
        std::pow(C1095, 2);
    const double C222 =
        (C1115 * (C1118 + std::pow(C1142, 2) * C1120 * C1124) * C1122) /
        std::pow(C1095, 2);
    const double C223 =
        ((C1118 + C1176 * C1120 * C1124) * C1122 +
         (C1120 * C1124 + C1176 * bs[4] * std::pow(C1113, 4)) * C1122 * C1119) /
        std::pow(C1095, 2);
    const double C249 =
        (C1133 * (C1118 + C1119 * C1120 * C1124) * C1122) / std::pow(C1095, 2);
    const double C250 =
        ((C1118 + C1119 * C1120 * C1124) * C1122 +
         (C1120 * C1124 + C1119 * bs[4] * std::pow(C1113, 4)) * C1122 * C1157) /
        std::pow(C1095, 2);
    const double C269 =
        (ae * C1116 * C1114 * C1123 + C1133 * C1124 * C1120 * C1137) /
        std::pow(C1095, 2);
    const double C287 = (C1133 * C1124 * C1120 * C1146) / std::pow(C1095, 2);
    const double C288 =
        (C1124 * C1120 * C1146 + std::pow(C1113, 4) * bs[4] * C1146 * C1157) /
        std::pow(C1095, 2);
    const double C303 =
        (ae * C1116 * C1114 * C1123 + C1133 * C1124 * C1120 * C1153) /
        std::pow(C1095, 2);
    const double C319 = (2 * ae * C1116 * C1114 * C1136 +
                         C1133 * (C1118 + C1157 * C1120 * C1124) * C1122) /
                        std::pow(C1095, 2);
    const double C337 =
        (ae * C1116 * C1114 * C1145 + C1133 * C1124 * C1120 * C1162) /
        std::pow(C1095, 2);
    const double C353 = (C1133 * C1124 * C1120 * C1167) / std::pow(C1095, 2);
    const double C354 =
        (C1124 * C1120 * C1167 + std::pow(C1113, 4) * bs[4] * C1167 * C1157) /
        std::pow(C1095, 2);
    const double C369 =
        (ae * C1116 * C1114 * C1145 + C1133 * C1124 * C1120 * C1172) /
        std::pow(C1095, 2);
    const double C385 =
        (C1133 * (C1118 + C1176 * C1120 * C1124) * C1122) / std::pow(C1095, 2);
    const double C386 =
        ((C1118 + C1176 * C1120 * C1124) * C1122 +
         (C1120 * C1124 + C1176 * bs[4] * std::pow(C1113, 4)) * C1122 * C1157) /
        std::pow(C1095, 2);
    const double C410 =
        (C1142 * (C1118 + C1119 * C1120 * C1124) * C1122) / std::pow(C1095, 2);
    const double C411 =
        ((C1118 + C1119 * C1120 * C1124) * C1122 +
         (C1120 * C1124 + C1119 * bs[4] * std::pow(C1113, 4)) * C1122 * C1176) /
        std::pow(C1095, 2);
    const double C430 = (C1142 * C1124 * C1120 * C1137) / std::pow(C1095, 2);
    const double C431 =
        (C1124 * C1120 * C1137 + std::pow(C1113, 4) * bs[4] * C1137 * C1176) /
        std::pow(C1095, 2);
    const double C448 =
        (ae * C1116 * C1114 * C1123 + C1142 * C1124 * C1120 * C1146) /
        std::pow(C1095, 2);
    const double C464 = (C1142 * C1124 * C1120 * C1153) / std::pow(C1095, 2);
    const double C465 =
        (C1124 * C1120 * C1153 + std::pow(C1113, 4) * bs[4] * C1153 * C1176) /
        std::pow(C1095, 2);
    const double C480 =
        (C1142 * (C1118 + C1157 * C1120 * C1124) * C1122) / std::pow(C1095, 2);
    const double C481 =
        ((C1118 + C1157 * C1120 * C1124) * C1122 +
         (C1120 * C1124 + C1157 * bs[4] * std::pow(C1113, 4)) * C1122 * C1176) /
        std::pow(C1095, 2);
    const double C498 =
        (ae * C1116 * C1114 * C1136 + C1142 * C1124 * C1120 * C1162) /
        std::pow(C1095, 2);
    const double C514 =
        (ae * C1116 * C1114 * C1123 + C1142 * C1124 * C1120 * C1167) /
        std::pow(C1095, 2);
    const double C530 =
        (ae * C1116 * C1114 * C1136 + C1142 * C1124 * C1120 * C1172) /
        std::pow(C1095, 2);
    const double C546 = (2 * ae * C1116 * C1114 * C1145 +
                         C1142 * (C1118 + C1176 * C1120 * C1124) * C1122) /
                        std::pow(C1095, 2);
    const double C730 =
        (C1133 * C1115 * (C1120 * C1124 + C1176 * bs[4] * std::pow(C1113, 4)) *
         C1122) /
        std::pow(C1095, 2);
    const double C833 =
        (C1142 * C1115 * (C1120 * C1124 + C1157 * bs[4] * std::pow(C1113, 4)) *
         C1122) /
        std::pow(C1095, 2);
    const double C932 =
        (C1142 * C1133 * (C1120 * C1124 + C1119 * bs[4] * std::pow(C1113, 4)) *
         C1122) /
        std::pow(C1095, 2);
    const double C1305 = std::exp(C1304);
    const double C1317 = std::exp(C1316);
    const double C1331 = std::exp(C1330);
    const double C1128 = C1115 * C1127;
    const double C270 =
        (C1124 * C1120 * C1137 + ae * C1133 * C1127 +
         C1133 * (ae * C1127 + C1133 * std::pow(C1113, 4) * bs[4] * C1137)) /
        std::pow(C1095, 2);
    const double C304 =
        (C1124 * C1120 * C1153 + ae * C1133 * C1127 +
         C1133 * (ae * C1127 + C1133 * std::pow(C1113, 4) * bs[4] * C1153)) /
        std::pow(C1095, 2);
    const double C449 =
        (C1124 * C1120 * C1146 + ae * C1142 * C1127 +
         C1142 * (ae * C1127 + C1142 * std::pow(C1113, 4) * bs[4] * C1146)) /
        std::pow(C1095, 2);
    const double C515 =
        (C1124 * C1120 * C1167 + ae * C1142 * C1127 +
         C1142 * (ae * C1127 + C1142 * std::pow(C1113, 4) * bs[4] * C1167)) /
        std::pow(C1095, 2);
    const double C574 =
        (2 * ae * C1133 * C1127 +
         C1115 * C1133 * (C1120 * C1124 + C1119 * bs[4] * std::pow(C1113, 4)) *
             C1122) /
        std::pow(C1095, 2);
    const double C754 =
        (2 * ae * C1142 * C1127 +
         C1115 * C1142 * (C1120 * C1124 + C1119 * bs[4] * std::pow(C1113, 4)) *
             C1122) /
        std::pow(C1095, 2);
    const double C953 =
        (C1142 * (ae * C1127 + C1133 * std::pow(C1113, 4) * bs[4] * C1137)) /
        std::pow(C1095, 2);
    const double C973 = (ae * C1133 * C1127 +
                         C1142 * C1133 * std::pow(C1113, 4) * bs[4] * C1146) /
                        std::pow(C1095, 2);
    const double C992 = (ae * C1142 * C1127 +
                         C1133 * C1142 * std::pow(C1113, 4) * bs[4] * C1153) /
                        std::pow(C1095, 2);
    const double C1050 = (ae * C1133 * C1127 +
                          C1142 * C1133 * std::pow(C1113, 4) * bs[4] * C1167) /
                         std::pow(C1095, 2);
    const double C248 = (C1116 * C1114 * C1123 + C1127 * C1157) / C1095;
    const double C409 = (C1116 * C1114 * C1123 + C1127 * C1176) / C1095;
    const double C931 = (C1142 * C1133 * C1127) / C1095;
    const double C1187 = C1133 * C1139;
    const double C95 =
        (C1124 * C1120 * C1137 + ae * C1115 * C1139 +
         C1115 * (ae * C1139 + C1115 * std::pow(C1113, 4) * bs[4] * C1137)) /
        std::pow(C1095, 2);
    const double C133 =
        (C1124 * C1120 * C1153 + ae * C1115 * C1139 +
         C1115 * (ae * C1139 + C1115 * std::pow(C1113, 4) * bs[4] * C1153)) /
        std::pow(C1095, 2);
    const double C499 =
        (C1124 * C1120 * C1162 + ae * C1142 * C1139 +
         C1142 * (ae * C1139 + C1142 * std::pow(C1113, 4) * bs[4] * C1162)) /
        std::pow(C1095, 2);
    const double C531 =
        (C1124 * C1120 * C1172 + ae * C1142 * C1139 +
         C1142 * (ae * C1139 + C1142 * std::pow(C1113, 4) * bs[4] * C1172)) /
        std::pow(C1095, 2);
    const double C653 =
        (2 * ae * C1115 * C1139 +
         C1133 * C1115 * (C1120 * C1124 + C1157 * bs[4] * std::pow(C1113, 4)) *
             C1122) /
        std::pow(C1095, 2);
    const double C775 =
        (C1142 * (ae * C1139 + C1115 * std::pow(C1113, 4) * bs[4] * C1137)) /
        std::pow(C1095, 2);
    const double C814 =
        (C1142 * (ae * C1139 + C1115 * std::pow(C1113, 4) * bs[4] * C1153)) /
        std::pow(C1095, 2);
    const double C853 = (ae * C1115 * C1139 +
                         C1142 * C1115 * std::pow(C1113, 4) * bs[4] * C1162) /
                        std::pow(C1095, 2);
    const double C891 = (ae * C1115 * C1139 +
                         C1142 * C1115 * std::pow(C1113, 4) * bs[4] * C1172) /
                        std::pow(C1095, 2);
    const double C1011 =
        (2 * ae * C1142 * C1139 +
         C1133 * C1142 * (C1120 * C1124 + C1157 * bs[4] * std::pow(C1113, 4)) *
             C1122) /
        std::pow(C1095, 2);
    const double C92 = (C1116 * C1114 * C1136 + C1139 * C1119) / C1095;
    const double C429 = (C1116 * C1114 * C1136 + C1139 * C1176) / C1095;
    const double C594 = (C1133 * C1115 * C1139 + C1115 * C1118 * ae) / C1095;
    const double C774 = (C1142 * C1115 * C1139) / C1095;
    const double C1216 = C1142 * C1148;
    const double C116 =
        (C1124 * C1120 * C1146 + ae * C1115 * C1148 +
         C1115 * (ae * C1148 + C1115 * std::pow(C1113, 4) * bs[4] * C1146)) /
        std::pow(C1095, 2);
    const double C188 =
        (C1124 * C1120 * C1167 + ae * C1115 * C1148 +
         C1115 * (ae * C1148 + C1115 * std::pow(C1113, 4) * bs[4] * C1167)) /
        std::pow(C1095, 2);
    const double C338 =
        (C1124 * C1120 * C1162 + ae * C1133 * C1148 +
         C1133 * (ae * C1148 + C1133 * std::pow(C1113, 4) * bs[4] * C1162)) /
        std::pow(C1095, 2);
    const double C370 =
        (C1124 * C1120 * C1172 + ae * C1133 * C1148 +
         C1133 * (ae * C1148 + C1133 * std::pow(C1113, 4) * bs[4] * C1172)) /
        std::pow(C1095, 2);
    const double C615 =
        (C1133 * (ae * C1148 + C1115 * std::pow(C1113, 4) * bs[4] * C1146)) /
        std::pow(C1095, 2);
    const double C673 = (ae * C1115 * C1148 +
                         C1133 * C1115 * std::pow(C1113, 4) * bs[4] * C1162) /
                        std::pow(C1095, 2);
    const double C692 =
        (C1133 * (ae * C1148 + C1115 * std::pow(C1113, 4) * bs[4] * C1167)) /
        std::pow(C1095, 2);
    const double C711 = (ae * C1115 * C1148 +
                         C1133 * C1115 * std::pow(C1113, 4) * bs[4] * C1172) /
                        std::pow(C1095, 2);
    const double C910 =
        (2 * ae * C1115 * C1148 +
         C1142 * C1115 * (C1120 * C1124 + C1176 * bs[4] * std::pow(C1113, 4)) *
             C1122) /
        std::pow(C1095, 2);
    const double C1088 =
        (2 * ae * C1133 * C1148 +
         C1142 * C1133 * (C1120 * C1124 + C1176 * bs[4] * std::pow(C1113, 4)) *
             C1122) /
        std::pow(C1095, 2);
    const double C113 = (C1116 * C1114 * C1145 + C1148 * C1119) / C1095;
    const double C286 = (C1116 * C1114 * C1145 + C1148 * C1157) / C1095;
    const double C614 = (C1133 * C1115 * C1148) / C1095;
    const double C794 = (C1142 * C1115 * C1148 + C1115 * C1118 * ae) / C1095;
    const double C972 = (C1142 * C1133 * C1148 + C1133 * C1118 * ae) / C1095;
    const double C1355 = C1305 * C1349;
    const double C58 = (C1305 * std::pow(C1349, 2)) / C1350 + C1305 / C1351;
    const double C60 = C1356 * C1305;
    const double C571 = C1354 * C1305;
    const double C1357 = C1317 * C1352;
    const double C241 = (C1317 * std::pow(C1352, 2)) / C1350 + C1317 / C1351;
    const double C243 = C1356 * C1317;
    const double C569 = C1354 * C1317;
    const double C1358 = C1331 * C1353;
    const double C403 = (C1331 * std::pow(C1353, 2)) / C1350 + C1331 / C1351;
    const double C405 = C1356 * C1331;
    const double C751 = C1354 * C1331;
    const double C1129 = C1128 + C1126;
    const double C253 = C62 * C248;
    const double C414 = C62 * C409;
    const double C934 = C62 * C931;
    const double C1188 = C1187 + C1126;
    const double C155 = C89 * C92;
    const double C484 = C89 * C429;
    const double C655 = C89 * C594;
    const double C835 = C89 * C774;
    const double C1217 = C1216 + C1126;
    const double C227 = C110 * C113;
    const double C389 = C110 * C286;
    const double C732 = C110 * C614;
    const double C912 = C110 * C794;
    const double C1090 = C110 * C972;
    const double C59 = (2 * C1354 * C1355) / C1300;
    const double C570 = C1355 / C1300;
    const double C242 = (2 * C1354 * C1357) / C1300;
    const double C568 = C1357 / C1300;
    const double C404 = (2 * C1354 * C1358) / C1300;
    const double C750 = C1358 / C1300;
    const double C1130 = ae * C1129;
    const double C68 =
        (C1116 * C1114 * C1123 + C1115 * C1129 + C1115 * C1118 * ae) / C1095;
    const double C573 = (C1133 * C1129) / C1095;
    const double C753 = (C1142 * C1129) / C1095;
    const double C1189 = ae * C1188;
    const double C268 =
        (C1116 * C1114 * C1136 + C1133 * C1188 + C1133 * C1118 * ae) / C1095;
    const double C952 = (C1142 * C1188) / C1095;
    const double C1218 = ae * C1217;
    const double C447 =
        (C1116 * C1114 * C1145 + C1142 * C1217 + C1142 * C1118 * ae) / C1095;
    const double C71 =
        ((C1118 + C1119 * C1120 * C1124) * C1122 + C1130 + C1130 +
         C1115 * (2 * ae * C1127 +
                  C1115 * (C1120 * C1124 + C1119 * bs[4] * std::pow(C1113, 4)) *
                      C1122)) /
        std::pow(C1095, 2);
    const double C595 =
        (C1130 +
         C1133 * (ae * C1139 + C1115 * std::pow(C1113, 4) * bs[4] * C1137)) /
        std::pow(C1095, 2);
    const double C634 =
        (C1130 +
         C1133 * (ae * C1139 + C1115 * std::pow(C1113, 4) * bs[4] * C1153)) /
        std::pow(C1095, 2);
    const double C795 =
        (C1130 +
         C1142 * (ae * C1148 + C1115 * std::pow(C1113, 4) * bs[4] * C1146)) /
        std::pow(C1095, 2);
    const double C872 =
        (C1130 +
         C1142 * (ae * C1148 + C1115 * std::pow(C1113, 4) * bs[4] * C1167)) /
        std::pow(C1095, 2);
    const double C75 = C62 * C68;
    const double C576 = C62 * C573;
    const double C756 = C62 * C753;
    const double C320 =
        ((C1118 + C1157 * C1120 * C1124) * C1122 + C1189 + C1189 +
         C1133 * (2 * ae * C1139 +
                  C1133 * (C1120 * C1124 + C1157 * bs[4] * std::pow(C1113, 4)) *
                      C1122)) /
        std::pow(C1095, 2);
    const double C1069 =
        (C1189 +
         C1142 * (ae * C1148 + C1133 * std::pow(C1113, 4) * bs[4] * C1172)) /
        std::pow(C1095, 2);
    const double C323 = C89 * C268;
    const double C1013 = C89 * C952;
    const double C547 =
        ((C1118 + C1176 * C1120 * C1124) * C1122 + C1218 + C1218 +
         C1142 * (2 * ae * C1148 +
                  C1142 * (C1120 * C1124 + C1176 * bs[4] * std::pow(C1113, 4)) *
                      C1122)) /
        std::pow(C1095, 2);
    const double C1031 =
        (C1218 +
         C1133 * (ae * C1139 + C1142 * std::pow(C1113, 4) * bs[4] * C1162)) /
        std::pow(C1095, 2);
    const double C550 = C110 * C447;
    d2eexx[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C61 * C63 + C73 + C73 + C53 * C69) * C54 * C55 * C1331 * C568 -
           (C61 * C245 + C252 + C252 + C53 * C249) * C54 * C55 * C1331 * C569) *
              C570 +
          ((C61 * C572 + C576 + C576 + C53 * C574) * C54 * C55 * C1331 * C569 -
           (C61 * C64 + C74 + C74 + C53 * C70) * C54 * C55 * C1331 * C568) *
              C571)) /
        (p * q * std::sqrt(p + q));
    d2eexy[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C89 * C63 + C55 * C90) * C62 + (C89 * C66 + C55 * C93) * C53) *
               C54 * C1331 * C568 -
           ((C89 * C247 + C55 * C269) * C53 + (C89 * C245 + C55 * C267) * C62) *
               C54 * C1331 * C569) *
              C570 +
          (((C89 * C572 + C55 * C594) * C62 + (C89 * C573 + C55 * C595) * C53) *
               C54 * C1331 * C569 -
           ((C89 * C67 + C55 * C94) * C53 + (C89 * C64 + C55 * C91) * C62) *
               C54 * C1331 * C568) *
              C571)) /
        (p * q * std::sqrt(p + q));
    d2eexz[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C110 * C63 + C54 * C111) * C62 + (C110 * C66 + C54 * C114) * C53) *
               C55 * C1331 * C568 -
           ((C110 * C247 + C54 * C287) * C53 +
            (C110 * C245 + C54 * C285) * C62) *
               C55 * C1331 * C569) *
              C570 +
          (((C110 * C572 + C54 * C614) * C62 +
            (C110 * C573 + C54 * C615) * C53) *
               C55 * C1331 * C569 -
           ((C110 * C67 + C54 * C115) * C53 + (C110 * C64 + C54 * C112) * C62) *
               C55 * C1331 * C568) *
              C571)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C62 * C63 + C53 * C66) * C89 + (C62 * C90 + C53 * C131) * C55) *
               C54 * C1331 * C568 -
           ((C62 * C267 + C53 * C303) * C55 + (C62 * C245 + C53 * C247) * C89) *
               C54 * C1331 * C569) *
              C570 +
          (((C62 * C572 + C53 * C573) * C89 + (C62 * C594 + C53 * C634) * C55) *
               C54 * C1331 * C569 -
           ((C62 * C91 + C53 * C132) * C55 + (C62 * C64 + C53 * C67) * C89) *
               C54 * C1331 * C568) *
              C571)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C148 * C63 + C153 + C153 + C55 * C149) * C53 * C54 * C1331 * C568 -
           (C148 * C245 + C322 + C322 + C55 * C319) * C53 * C54 * C1331 *
               C569) *
              C570 +
          ((C148 * C572 + C655 + C655 + C55 * C653) * C53 * C54 * C1331 * C569 -
           (C148 * C64 + C154 + C154 + C55 * C150) * C53 * C54 * C1331 * C568) *
              C571)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C110 * C63 + C54 * C111) * C89 + (C110 * C90 + C54 * C169) * C55) *
               C53 * C1331 * C568 -
           ((C110 * C267 + C54 * C337) * C55 +
            (C110 * C245 + C54 * C285) * C89) *
               C53 * C1331 * C569) *
              C570 +
          (((C110 * C572 + C54 * C614) * C89 +
            (C110 * C594 + C54 * C673) * C55) *
               C53 * C1331 * C569 -
           ((C110 * C91 + C54 * C170) * C55 + (C110 * C64 + C54 * C112) * C89) *
               C53 * C1331 * C568) *
              C571)) /
        (p * q * std::sqrt(p + q));
    d2eezx[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C62 * C63 + C53 * C66) * C110 + (C62 * C111 + C53 * C186) * C54) *
               C55 * C1331 * C568 -
           ((C62 * C285 + C53 * C353) * C54 +
            (C62 * C245 + C53 * C247) * C110) *
               C55 * C1331 * C569) *
              C570 +
          (((C62 * C572 + C53 * C573) * C110 +
            (C62 * C614 + C53 * C692) * C54) *
               C55 * C1331 * C569 -
           ((C62 * C112 + C53 * C187) * C54 + (C62 * C64 + C53 * C67) * C110) *
               C55 * C1331 * C568) *
              C571)) /
        (p * q * std::sqrt(p + q));
    d2eezy[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C89 * C63 + C55 * C90) * C110 + (C89 * C111 + C55 * C203) * C54) *
               C53 * C1331 * C568 -
           ((C89 * C285 + C55 * C369) * C54 +
            (C89 * C245 + C55 * C267) * C110) *
               C53 * C1331 * C569) *
              C570 +
          (((C89 * C572 + C55 * C594) * C110 +
            (C89 * C614 + C55 * C711) * C54) *
               C53 * C1331 * C569 -
           ((C89 * C112 + C55 * C204) * C54 + (C89 * C64 + C55 * C91) * C110) *
               C53 * C1331 * C568) *
              C571)) /
        (p * q * std::sqrt(p + q));
    d2eezz[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C220 * C63 + C225 + C225 + C54 * C221) * C55 * C53 * C1331 * C568 -
           (C220 * C245 + C388 + C388 + C54 * C385) * C55 * C53 * C1331 *
               C569) *
              C570 +
          ((C220 * C572 + C732 + C732 + C54 * C730) * C55 * C53 * C1331 * C569 -
           (C220 * C64 + C226 + C226 + C54 * C222) * C55 * C53 * C1331 * C568) *
              C571)) /
        (p * q * std::sqrt(p + q));
    d2eexx[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C61 * C63 + C73 + C73 + C53 * C69) * C54 * C55 * C750 -
           (C61 * C406 + C413 + C413 + C53 * C410) * C54 * C55 * C751) *
              C568 +
          ((C61 * C930 + C934 + C934 + C53 * C932) * C54 * C55 * C751 -
           (C61 * C245 + C252 + C252 + C53 * C249) * C54 * C55 * C750) *
              C569) *
         C1305) /
        (p * q * std::sqrt(p + q));
    d2eexy[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C89 * C63 + C55 * C90) * C62 + (C89 * C66 + C55 * C93) * C53) *
               C54 * C750 -
           ((C89 * C408 + C55 * C430) * C53 + (C89 * C406 + C55 * C428) * C62) *
               C54 * C751) *
              C568 +
          (((C89 * C930 + C55 * C952) * C62 + (C89 * C931 + C55 * C953) * C53) *
               C54 * C751 -
           ((C89 * C247 + C55 * C269) * C53 + (C89 * C245 + C55 * C267) * C62) *
               C54 * C750) *
              C569) *
         C1305) /
        (p * q * std::sqrt(p + q));
    d2eexz[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C110 * C63 + C54 * C111) * C62 + (C110 * C66 + C54 * C114) * C53) *
               C55 * C750 -
           ((C110 * C408 + C54 * C448) * C53 +
            (C110 * C406 + C54 * C446) * C62) *
               C55 * C751) *
              C568 +
          (((C110 * C930 + C54 * C972) * C62 +
            (C110 * C931 + C54 * C973) * C53) *
               C55 * C751 -
           ((C110 * C247 + C54 * C287) * C53 +
            (C110 * C245 + C54 * C285) * C62) *
               C55 * C750) *
              C569) *
         C1305) /
        (p * q * std::sqrt(p + q));
    d2eeyx[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C62 * C63 + C53 * C66) * C89 + (C62 * C90 + C53 * C131) * C55) *
               C54 * C750 -
           ((C62 * C428 + C53 * C464) * C55 + (C62 * C406 + C53 * C408) * C89) *
               C54 * C751) *
              C568 +
          (((C62 * C930 + C53 * C931) * C89 + (C62 * C952 + C53 * C992) * C55) *
               C54 * C751 -
           ((C62 * C267 + C53 * C303) * C55 + (C62 * C245 + C53 * C247) * C89) *
               C54 * C750) *
              C569) *
         C1305) /
        (p * q * std::sqrt(p + q));
    d2eeyy[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C148 * C63 + C153 + C153 + C55 * C149) * C53 * C54 * C750 -
           (C148 * C406 + C483 + C483 + C55 * C480) * C53 * C54 * C751) *
              C568 +
          ((C148 * C930 + C1013 + C1013 + C55 * C1011) * C53 * C54 * C751 -
           (C148 * C245 + C322 + C322 + C55 * C319) * C53 * C54 * C750) *
              C569) *
         C1305) /
        (p * q * std::sqrt(p + q));
    d2eeyz[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C110 * C63 + C54 * C111) * C89 + (C110 * C90 + C54 * C169) * C55) *
               C53 * C750 -
           ((C110 * C428 + C54 * C498) * C55 +
            (C110 * C406 + C54 * C446) * C89) *
               C53 * C751) *
              C568 +
          (((C110 * C930 + C54 * C972) * C89 +
            (C110 * C952 + C54 * C1031) * C55) *
               C53 * C751 -
           ((C110 * C267 + C54 * C337) * C55 +
            (C110 * C245 + C54 * C285) * C89) *
               C53 * C750) *
              C569) *
         C1305) /
        (p * q * std::sqrt(p + q));
    d2eezx[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C62 * C63 + C53 * C66) * C110 + (C62 * C111 + C53 * C186) * C54) *
               C55 * C750 -
           ((C62 * C446 + C53 * C514) * C54 +
            (C62 * C406 + C53 * C408) * C110) *
               C55 * C751) *
              C568 +
          (((C62 * C930 + C53 * C931) * C110 +
            (C62 * C972 + C53 * C1050) * C54) *
               C55 * C751 -
           ((C62 * C285 + C53 * C353) * C54 +
            (C62 * C245 + C53 * C247) * C110) *
               C55 * C750) *
              C569) *
         C1305) /
        (p * q * std::sqrt(p + q));
    d2eezy[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C89 * C63 + C55 * C90) * C110 + (C89 * C111 + C55 * C203) * C54) *
               C53 * C750 -
           ((C89 * C446 + C55 * C530) * C54 +
            (C89 * C406 + C55 * C428) * C110) *
               C53 * C751) *
              C568 +
          (((C89 * C930 + C55 * C952) * C110 +
            (C89 * C972 + C55 * C1069) * C54) *
               C53 * C751 -
           ((C89 * C285 + C55 * C369) * C54 +
            (C89 * C245 + C55 * C267) * C110) *
               C53 * C750) *
              C569) *
         C1305) /
        (p * q * std::sqrt(p + q));
    d2eezz[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C220 * C63 + C225 + C225 + C54 * C221) * C55 * C53 * C750 -
           (C220 * C406 + C549 + C549 + C54 * C546) * C55 * C53 * C751) *
              C568 +
          ((C220 * C930 + C1090 + C1090 + C54 * C1088) * C55 * C53 * C751 -
           (C220 * C245 + C388 + C388 + C54 * C385) * C55 * C53 * C750) *
              C569) *
         C1305) /
        (p * q * std::sqrt(p + q));
    d2eexx[2] +=
        (-std::pow(Pi, 2.5) *
         ((C61 * C63 + C73 + C73 + C53 * C69) * C54 * C55 * C1331 * C241 -
          (C61 * C245 + C252 + C252 + C53 * C249) * C54 * C55 * C1331 * C242 +
          (C61 * C246 + C253 + C253 + C53 * C250) * C54 * C55 * C1331 * C243) *
         C1305) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((C61 * C63 + C73 + C73 + C53 * C69) * C54 * C55 *
                                  C1331 * C1317 * C58 -
                              (C61 * C64 + C74 + C74 + C53 * C70) * C54 * C55 *
                                  C1331 * C1317 * C59 +
                              (C61 * C65 + C75 + C75 + C53 * C71) * C54 * C55 *
                                  C1331 * C1317 * C60)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C61 * C63 + C73 + C73 + C53 * C69) * C54 * C55 * C403 -
          (C61 * C406 + C413 + C413 + C53 * C410) * C54 * C55 * C404 +
          (C61 * C407 + C414 + C414 + C53 * C411) * C54 * C55 * C405) *
         C1317 * C1305) /
            (p * q * std::sqrt(p + q));
    d2eexy[2] +=
        (-std::pow(Pi, 2.5) *
         (((C89 * C63 + C55 * C90) * C62 + (C89 * C66 + C55 * C93) * C53) *
              C54 * C1331 * C241 -
          ((C89 * C247 + C55 * C269) * C53 + (C89 * C245 + C55 * C267) * C62) *
              C54 * C1331 * C242 +
          ((C89 * C246 + C55 * C268) * C62 + (C89 * C248 + C55 * C270) * C53) *
              C54 * C1331 * C243) *
         C1305) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C89 * C63 + C55 * C90) * C62 + (C89 * C66 + C55 * C93) * C53) *
              C54 * C1331 * C1317 * C58 -
          ((C89 * C67 + C55 * C94) * C53 + (C89 * C64 + C55 * C91) * C62) *
              C54 * C1331 * C1317 * C59 +
          ((C89 * C65 + C55 * C92) * C62 + (C89 * C68 + C55 * C95) * C53) *
              C54 * C1331 * C1317 * C60)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C89 * C63 + C55 * C90) * C62 + (C89 * C66 + C55 * C93) * C53) *
              C54 * C403 -
          ((C89 * C408 + C55 * C430) * C53 + (C89 * C406 + C55 * C428) * C62) *
              C54 * C404 +
          ((C89 * C407 + C55 * C429) * C62 + (C89 * C409 + C55 * C431) * C53) *
              C54 * C405) *
         C1317 * C1305) /
            (p * q * std::sqrt(p + q));
    d2eexz[2] +=
        (-std::pow(Pi, 2.5) *
         (((C110 * C63 + C54 * C111) * C62 + (C110 * C66 + C54 * C114) * C53) *
              C55 * C1331 * C241 -
          ((C110 * C247 + C54 * C287) * C53 +
           (C110 * C245 + C54 * C285) * C62) *
              C55 * C1331 * C242 +
          ((C110 * C246 + C54 * C286) * C62 +
           (C110 * C248 + C54 * C288) * C53) *
              C55 * C1331 * C243) *
         C1305) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C110 * C63 + C54 * C111) * C62 + (C110 * C66 + C54 * C114) * C53) *
              C55 * C1331 * C1317 * C58 -
          ((C110 * C67 + C54 * C115) * C53 + (C110 * C64 + C54 * C112) * C62) *
              C55 * C1331 * C1317 * C59 +
          ((C110 * C65 + C54 * C113) * C62 + (C110 * C68 + C54 * C116) * C53) *
              C55 * C1331 * C1317 * C60)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C110 * C63 + C54 * C111) * C62 + (C110 * C66 + C54 * C114) * C53) *
              C55 * C403 -
          ((C110 * C408 + C54 * C448) * C53 +
           (C110 * C406 + C54 * C446) * C62) *
              C55 * C404 +
          ((C110 * C407 + C54 * C447) * C62 +
           (C110 * C409 + C54 * C449) * C53) *
              C55 * C405) *
         C1317 * C1305) /
            (p * q * std::sqrt(p + q));
    d2eeyx[2] +=
        (-std::pow(Pi, 2.5) *
         (((C62 * C63 + C53 * C66) * C89 + (C62 * C90 + C53 * C131) * C55) *
              C54 * C1331 * C241 -
          ((C62 * C267 + C53 * C303) * C55 + (C62 * C245 + C53 * C247) * C89) *
              C54 * C1331 * C242 +
          ((C62 * C246 + C53 * C248) * C89 + (C62 * C268 + C53 * C304) * C55) *
              C54 * C1331 * C243) *
         C1305) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C62 * C63 + C53 * C66) * C89 + (C62 * C90 + C53 * C131) * C55) *
              C54 * C1331 * C1317 * C58 -
          ((C62 * C91 + C53 * C132) * C55 + (C62 * C64 + C53 * C67) * C89) *
              C54 * C1331 * C1317 * C59 +
          ((C62 * C65 + C53 * C68) * C89 + (C62 * C92 + C53 * C133) * C55) *
              C54 * C1331 * C1317 * C60)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C62 * C63 + C53 * C66) * C89 + (C62 * C90 + C53 * C131) * C55) *
              C54 * C403 -
          ((C62 * C428 + C53 * C464) * C55 + (C62 * C406 + C53 * C408) * C89) *
              C54 * C404 +
          ((C62 * C407 + C53 * C409) * C89 + (C62 * C429 + C53 * C465) * C55) *
              C54 * C405) *
         C1317 * C1305) /
            (p * q * std::sqrt(p + q));
    d2eeyy[2] +=
        (-std::pow(Pi, 2.5) *
         ((C148 * C63 + C153 + C153 + C55 * C149) * C53 * C54 * C1331 * C241 -
          (C148 * C245 + C322 + C322 + C55 * C319) * C53 * C54 * C1331 * C242 +
          (C148 * C246 + C323 + C323 + C55 * C320) * C53 * C54 * C1331 * C243) *
         C1305) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((C148 * C63 + C153 + C153 + C55 * C149) * C53 *
                                  C54 * C1331 * C1317 * C58 -
                              (C148 * C64 + C154 + C154 + C55 * C150) * C53 *
                                  C54 * C1331 * C1317 * C59 +
                              (C148 * C65 + C155 + C155 + C55 * C151) * C53 *
                                  C54 * C1331 * C1317 * C60)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C148 * C63 + C153 + C153 + C55 * C149) * C53 * C54 * C403 -
          (C148 * C406 + C483 + C483 + C55 * C480) * C53 * C54 * C404 +
          (C148 * C407 + C484 + C484 + C55 * C481) * C53 * C54 * C405) *
         C1317 * C1305) /
            (p * q * std::sqrt(p + q));
    d2eeyz[2] +=
        (-std::pow(Pi, 2.5) *
         (((C110 * C63 + C54 * C111) * C89 + (C110 * C90 + C54 * C169) * C55) *
              C53 * C1331 * C241 -
          ((C110 * C267 + C54 * C337) * C55 +
           (C110 * C245 + C54 * C285) * C89) *
              C53 * C1331 * C242 +
          ((C110 * C246 + C54 * C286) * C89 +
           (C110 * C268 + C54 * C338) * C55) *
              C53 * C1331 * C243) *
         C1305) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C110 * C63 + C54 * C111) * C89 + (C110 * C90 + C54 * C169) * C55) *
              C53 * C1331 * C1317 * C58 -
          ((C110 * C91 + C54 * C170) * C55 + (C110 * C64 + C54 * C112) * C89) *
              C53 * C1331 * C1317 * C59 +
          ((C110 * C65 + C54 * C113) * C89 + (C110 * C92 + C54 * C171) * C55) *
              C53 * C1331 * C1317 * C60)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C110 * C63 + C54 * C111) * C89 + (C110 * C90 + C54 * C169) * C55) *
              C53 * C403 -
          ((C110 * C428 + C54 * C498) * C55 +
           (C110 * C406 + C54 * C446) * C89) *
              C53 * C404 +
          ((C110 * C407 + C54 * C447) * C89 +
           (C110 * C429 + C54 * C499) * C55) *
              C53 * C405) *
         C1317 * C1305) /
            (p * q * std::sqrt(p + q));
    d2eezx[2] +=
        (-std::pow(Pi, 2.5) *
         (((C62 * C63 + C53 * C66) * C110 + (C62 * C111 + C53 * C186) * C54) *
              C55 * C1331 * C241 -
          ((C62 * C285 + C53 * C353) * C54 + (C62 * C245 + C53 * C247) * C110) *
              C55 * C1331 * C242 +
          ((C62 * C246 + C53 * C248) * C110 + (C62 * C286 + C53 * C354) * C54) *
              C55 * C1331 * C243) *
         C1305) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C62 * C63 + C53 * C66) * C110 + (C62 * C111 + C53 * C186) * C54) *
              C55 * C1331 * C1317 * C58 -
          ((C62 * C112 + C53 * C187) * C54 + (C62 * C64 + C53 * C67) * C110) *
              C55 * C1331 * C1317 * C59 +
          ((C62 * C65 + C53 * C68) * C110 + (C62 * C113 + C53 * C188) * C54) *
              C55 * C1331 * C1317 * C60)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C62 * C63 + C53 * C66) * C110 + (C62 * C111 + C53 * C186) * C54) *
              C55 * C403 -
          ((C62 * C446 + C53 * C514) * C54 + (C62 * C406 + C53 * C408) * C110) *
              C55 * C404 +
          ((C62 * C407 + C53 * C409) * C110 + (C62 * C447 + C53 * C515) * C54) *
              C55 * C405) *
         C1317 * C1305) /
            (p * q * std::sqrt(p + q));
    d2eezy[2] +=
        (-std::pow(Pi, 2.5) *
         (((C89 * C63 + C55 * C90) * C110 + (C89 * C111 + C55 * C203) * C54) *
              C53 * C1331 * C241 -
          ((C89 * C285 + C55 * C369) * C54 + (C89 * C245 + C55 * C267) * C110) *
              C53 * C1331 * C242 +
          ((C89 * C246 + C55 * C268) * C110 + (C89 * C286 + C55 * C370) * C54) *
              C53 * C1331 * C243) *
         C1305) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C89 * C63 + C55 * C90) * C110 + (C89 * C111 + C55 * C203) * C54) *
              C53 * C1331 * C1317 * C58 -
          ((C89 * C112 + C55 * C204) * C54 + (C89 * C64 + C55 * C91) * C110) *
              C53 * C1331 * C1317 * C59 +
          ((C89 * C65 + C55 * C92) * C110 + (C89 * C113 + C55 * C205) * C54) *
              C53 * C1331 * C1317 * C60)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C89 * C63 + C55 * C90) * C110 + (C89 * C111 + C55 * C203) * C54) *
              C53 * C403 -
          ((C89 * C446 + C55 * C530) * C54 + (C89 * C406 + C55 * C428) * C110) *
              C53 * C404 +
          ((C89 * C407 + C55 * C429) * C110 + (C89 * C447 + C55 * C531) * C54) *
              C53 * C405) *
         C1317 * C1305) /
            (p * q * std::sqrt(p + q));
    d2eezz[2] +=
        (-std::pow(Pi, 2.5) *
         ((C220 * C63 + C225 + C225 + C54 * C221) * C55 * C53 * C1331 * C241 -
          (C220 * C245 + C388 + C388 + C54 * C385) * C55 * C53 * C1331 * C242 +
          (C220 * C246 + C389 + C389 + C54 * C386) * C55 * C53 * C1331 * C243) *
         C1305) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((C220 * C63 + C225 + C225 + C54 * C221) * C55 *
                                  C53 * C1331 * C1317 * C58 -
                              (C220 * C64 + C226 + C226 + C54 * C222) * C55 *
                                  C53 * C1331 * C1317 * C59 +
                              (C220 * C65 + C227 + C227 + C54 * C223) * C55 *
                                  C53 * C1331 * C1317 * C60)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C220 * C63 + C225 + C225 + C54 * C221) * C55 * C53 * C403 -
          (C220 * C406 + C549 + C549 + C54 * C546) * C55 * C53 * C404 +
          (C220 * C407 + C550 + C550 + C54 * C547) * C55 * C53 * C405) *
         C1317 * C1305) /
            (p * q * std::sqrt(p + q));
    d2eexx[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C61 * C63 + C73 + C73 + C53 * C69) * C54 * C55 * C750 -
           (C61 * C406 + C413 + C413 + C53 * C410) * C54 * C55 * C751) *
              C1317 * C570 +
          ((C61 * C752 + C756 + C756 + C53 * C754) * C54 * C55 * C751 -
           (C61 * C64 + C74 + C74 + C53 * C70) * C54 * C55 * C750) *
              C1317 * C571)) /
        (p * q * std::sqrt(p + q));
    d2eexy[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C89 * C63 + C55 * C90) * C62 + (C89 * C66 + C55 * C93) * C53) *
               C54 * C750 -
           ((C89 * C408 + C55 * C430) * C53 + (C89 * C406 + C55 * C428) * C62) *
               C54 * C751) *
              C1317 * C570 +
          (((C89 * C752 + C55 * C774) * C62 + (C89 * C753 + C55 * C775) * C53) *
               C54 * C751 -
           ((C89 * C67 + C55 * C94) * C53 + (C89 * C64 + C55 * C91) * C62) *
               C54 * C750) *
              C1317 * C571)) /
        (p * q * std::sqrt(p + q));
    d2eexz[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C110 * C63 + C54 * C111) * C62 + (C110 * C66 + C54 * C114) * C53) *
               C55 * C750 -
           ((C110 * C408 + C54 * C448) * C53 +
            (C110 * C406 + C54 * C446) * C62) *
               C55 * C751) *
              C1317 * C570 +
          (((C110 * C752 + C54 * C794) * C62 +
            (C110 * C753 + C54 * C795) * C53) *
               C55 * C751 -
           ((C110 * C67 + C54 * C115) * C53 + (C110 * C64 + C54 * C112) * C62) *
               C55 * C750) *
              C1317 * C571)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C62 * C63 + C53 * C66) * C89 + (C62 * C90 + C53 * C131) * C55) *
               C54 * C750 -
           ((C62 * C428 + C53 * C464) * C55 + (C62 * C406 + C53 * C408) * C89) *
               C54 * C751) *
              C1317 * C570 +
          (((C62 * C752 + C53 * C753) * C89 + (C62 * C774 + C53 * C814) * C55) *
               C54 * C751 -
           ((C62 * C91 + C53 * C132) * C55 + (C62 * C64 + C53 * C67) * C89) *
               C54 * C750) *
              C1317 * C571)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C148 * C63 + C153 + C153 + C55 * C149) * C53 * C54 * C750 -
           (C148 * C406 + C483 + C483 + C55 * C480) * C53 * C54 * C751) *
              C1317 * C570 +
          ((C148 * C752 + C835 + C835 + C55 * C833) * C53 * C54 * C751 -
           (C148 * C64 + C154 + C154 + C55 * C150) * C53 * C54 * C750) *
              C1317 * C571)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C110 * C63 + C54 * C111) * C89 + (C110 * C90 + C54 * C169) * C55) *
               C53 * C750 -
           ((C110 * C428 + C54 * C498) * C55 +
            (C110 * C406 + C54 * C446) * C89) *
               C53 * C751) *
              C1317 * C570 +
          (((C110 * C752 + C54 * C794) * C89 +
            (C110 * C774 + C54 * C853) * C55) *
               C53 * C751 -
           ((C110 * C91 + C54 * C170) * C55 + (C110 * C64 + C54 * C112) * C89) *
               C53 * C750) *
              C1317 * C571)) /
        (p * q * std::sqrt(p + q));
    d2eezx[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C62 * C63 + C53 * C66) * C110 + (C62 * C111 + C53 * C186) * C54) *
               C55 * C750 -
           ((C62 * C446 + C53 * C514) * C54 +
            (C62 * C406 + C53 * C408) * C110) *
               C55 * C751) *
              C1317 * C570 +
          (((C62 * C752 + C53 * C753) * C110 +
            (C62 * C794 + C53 * C872) * C54) *
               C55 * C751 -
           ((C62 * C112 + C53 * C187) * C54 + (C62 * C64 + C53 * C67) * C110) *
               C55 * C750) *
              C1317 * C571)) /
        (p * q * std::sqrt(p + q));
    d2eezy[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C89 * C63 + C55 * C90) * C110 + (C89 * C111 + C55 * C203) * C54) *
               C53 * C750 -
           ((C89 * C446 + C55 * C530) * C54 +
            (C89 * C406 + C55 * C428) * C110) *
               C53 * C751) *
              C1317 * C570 +
          (((C89 * C752 + C55 * C774) * C110 +
            (C89 * C794 + C55 * C891) * C54) *
               C53 * C751 -
           ((C89 * C112 + C55 * C204) * C54 + (C89 * C64 + C55 * C91) * C110) *
               C53 * C750) *
              C1317 * C571)) /
        (p * q * std::sqrt(p + q));
    d2eezz[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C220 * C63 + C225 + C225 + C54 * C221) * C55 * C53 * C750 -
           (C220 * C406 + C549 + C549 + C54 * C546) * C55 * C53 * C751) *
              C1317 * C570 +
          ((C220 * C752 + C912 + C912 + C54 * C910) * C55 * C53 * C751 -
           (C220 * C64 + C226 + C226 + C54 * C222) * C55 * C53 * C750) *
              C1317 * C571)) /
        (p * q * std::sqrt(p + q));
    d2eexx[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C61 * C63 + C73 + C73 + C53 * C69) * C54 * C55 * C1331 * C1317 *
              C58 -
          (C61 * C64 + C74 + C74 + C53 * C70) * C54 * C55 * C1331 * C1317 *
              C59 +
          (C61 * C65 + C75 + C75 + C53 * C71) * C54 * C55 * C1331 * C1317 *
              C60)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C61 * C63 + C73 + C73 + C53 * C69) * C54 * C55 * C1331 * C241 -
          (C61 * C245 + C252 + C252 + C53 * C249) * C54 * C55 * C1331 * C242 +
          (C61 * C246 + C253 + C253 + C53 * C250) * C54 * C55 * C1331 * C243) *
         C1305) /
            (p * q * std::sqrt(p + q));
    d2eexy[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C89 * C63 + C55 * C90) * C62 + (C89 * C66 + C55 * C93) * C53) *
              C54 * C1331 * C1317 * C58 -
          ((C89 * C67 + C55 * C94) * C53 + (C89 * C64 + C55 * C91) * C62) *
              C54 * C1331 * C1317 * C59 +
          ((C89 * C65 + C55 * C92) * C62 + (C89 * C68 + C55 * C95) * C53) *
              C54 * C1331 * C1317 * C60)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C89 * C63 + C55 * C90) * C62 + (C89 * C66 + C55 * C93) * C53) *
              C54 * C1331 * C241 -
          ((C89 * C247 + C55 * C269) * C53 + (C89 * C245 + C55 * C267) * C62) *
              C54 * C1331 * C242 +
          ((C89 * C246 + C55 * C268) * C62 + (C89 * C248 + C55 * C270) * C53) *
              C54 * C1331 * C243) *
         C1305) /
            (p * q * std::sqrt(p + q));
    d2eexz[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C110 * C63 + C54 * C111) * C62 + (C110 * C66 + C54 * C114) * C53) *
              C55 * C1331 * C1317 * C58 -
          ((C110 * C67 + C54 * C115) * C53 + (C110 * C64 + C54 * C112) * C62) *
              C55 * C1331 * C1317 * C59 +
          ((C110 * C65 + C54 * C113) * C62 + (C110 * C68 + C54 * C116) * C53) *
              C55 * C1331 * C1317 * C60)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C110 * C63 + C54 * C111) * C62 + (C110 * C66 + C54 * C114) * C53) *
              C55 * C1331 * C241 -
          ((C110 * C247 + C54 * C287) * C53 +
           (C110 * C245 + C54 * C285) * C62) *
              C55 * C1331 * C242 +
          ((C110 * C246 + C54 * C286) * C62 +
           (C110 * C248 + C54 * C288) * C53) *
              C55 * C1331 * C243) *
         C1305) /
            (p * q * std::sqrt(p + q));
    d2eeyx[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C62 * C63 + C53 * C66) * C89 + (C62 * C90 + C53 * C131) * C55) *
              C54 * C1331 * C1317 * C58 -
          ((C62 * C91 + C53 * C132) * C55 + (C62 * C64 + C53 * C67) * C89) *
              C54 * C1331 * C1317 * C59 +
          ((C62 * C65 + C53 * C68) * C89 + (C62 * C92 + C53 * C133) * C55) *
              C54 * C1331 * C1317 * C60)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C62 * C63 + C53 * C66) * C89 + (C62 * C90 + C53 * C131) * C55) *
              C54 * C1331 * C241 -
          ((C62 * C267 + C53 * C303) * C55 + (C62 * C245 + C53 * C247) * C89) *
              C54 * C1331 * C242 +
          ((C62 * C246 + C53 * C248) * C89 + (C62 * C268 + C53 * C304) * C55) *
              C54 * C1331 * C243) *
         C1305) /
            (p * q * std::sqrt(p + q));
    d2eeyy[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C148 * C63 + C153 + C153 + C55 * C149) * C53 * C54 * C1331 * C1317 *
              C58 -
          (C148 * C64 + C154 + C154 + C55 * C150) * C53 * C54 * C1331 * C1317 *
              C59 +
          (C148 * C65 + C155 + C155 + C55 * C151) * C53 * C54 * C1331 * C1317 *
              C60)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C148 * C63 + C153 + C153 + C55 * C149) * C53 * C54 * C1331 * C241 -
          (C148 * C245 + C322 + C322 + C55 * C319) * C53 * C54 * C1331 * C242 +
          (C148 * C246 + C323 + C323 + C55 * C320) * C53 * C54 * C1331 * C243) *
         C1305) /
            (p * q * std::sqrt(p + q));
    d2eeyz[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C110 * C63 + C54 * C111) * C89 + (C110 * C90 + C54 * C169) * C55) *
              C53 * C1331 * C1317 * C58 -
          ((C110 * C91 + C54 * C170) * C55 + (C110 * C64 + C54 * C112) * C89) *
              C53 * C1331 * C1317 * C59 +
          ((C110 * C65 + C54 * C113) * C89 + (C110 * C92 + C54 * C171) * C55) *
              C53 * C1331 * C1317 * C60)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C110 * C63 + C54 * C111) * C89 + (C110 * C90 + C54 * C169) * C55) *
              C53 * C1331 * C241 -
          ((C110 * C267 + C54 * C337) * C55 +
           (C110 * C245 + C54 * C285) * C89) *
              C53 * C1331 * C242 +
          ((C110 * C246 + C54 * C286) * C89 +
           (C110 * C268 + C54 * C338) * C55) *
              C53 * C1331 * C243) *
         C1305) /
            (p * q * std::sqrt(p + q));
    d2eezx[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C62 * C63 + C53 * C66) * C110 + (C62 * C111 + C53 * C186) * C54) *
              C55 * C1331 * C1317 * C58 -
          ((C62 * C112 + C53 * C187) * C54 + (C62 * C64 + C53 * C67) * C110) *
              C55 * C1331 * C1317 * C59 +
          ((C62 * C65 + C53 * C68) * C110 + (C62 * C113 + C53 * C188) * C54) *
              C55 * C1331 * C1317 * C60)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C62 * C63 + C53 * C66) * C110 + (C62 * C111 + C53 * C186) * C54) *
              C55 * C1331 * C241 -
          ((C62 * C285 + C53 * C353) * C54 + (C62 * C245 + C53 * C247) * C110) *
              C55 * C1331 * C242 +
          ((C62 * C246 + C53 * C248) * C110 + (C62 * C286 + C53 * C354) * C54) *
              C55 * C1331 * C243) *
         C1305) /
            (p * q * std::sqrt(p + q));
    d2eezy[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C89 * C63 + C55 * C90) * C110 + (C89 * C111 + C55 * C203) * C54) *
              C53 * C1331 * C1317 * C58 -
          ((C89 * C112 + C55 * C204) * C54 + (C89 * C64 + C55 * C91) * C110) *
              C53 * C1331 * C1317 * C59 +
          ((C89 * C65 + C55 * C92) * C110 + (C89 * C113 + C55 * C205) * C54) *
              C53 * C1331 * C1317 * C60)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C89 * C63 + C55 * C90) * C110 + (C89 * C111 + C55 * C203) * C54) *
              C53 * C1331 * C241 -
          ((C89 * C285 + C55 * C369) * C54 + (C89 * C245 + C55 * C267) * C110) *
              C53 * C1331 * C242 +
          ((C89 * C246 + C55 * C268) * C110 + (C89 * C286 + C55 * C370) * C54) *
              C53 * C1331 * C243) *
         C1305) /
            (p * q * std::sqrt(p + q));
    d2eezz[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C220 * C63 + C225 + C225 + C54 * C221) * C55 * C53 * C1331 * C1317 *
              C58 -
          (C220 * C64 + C226 + C226 + C54 * C222) * C55 * C53 * C1331 * C1317 *
              C59 +
          (C220 * C65 + C227 + C227 + C54 * C223) * C55 * C53 * C1331 * C1317 *
              C60)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C220 * C63 + C225 + C225 + C54 * C221) * C55 * C53 * C1331 * C241 -
          (C220 * C245 + C388 + C388 + C54 * C385) * C55 * C53 * C1331 * C242 +
          (C220 * C246 + C389 + C389 + C54 * C386) * C55 * C53 * C1331 * C243) *
         C1305) /
            (p * q * std::sqrt(p + q));
}
