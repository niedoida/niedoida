/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_sssd_AB.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
void second_derivative_ee_0002_12(const double ae,
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
    const double C1097 = ae + be;
    const double C1096 = ae * be;
    const double C1095 = xA - xB;
    const double C1104 = yA - yB;
    const double C1107 = zA - zB;
    const double C1110 = p + q;
    const double C1109 = p * q;
    const double C1115 = xP - xQ;
    const double C1114 = bs[2];
    const double C1120 = bs[3];
    const double C1131 = yP - yQ;
    const double C1141 = zP - zQ;
    const double C63 = bs[0];
    const double C1334 = ce + de;
    const double C1333 = ce * de;
    const double C1332 = xC - xD;
    const double C1346 = yC - yD;
    const double C1360 = zC - zD;
    const double C53 = std::exp(-(std::pow(C1095, 2) * C1096) / C1097);
    const double C55 = std::exp(-(std::pow(C1104, 2) * C1096) / C1097);
    const double C54 = std::exp(-(std::pow(C1107, 2) * C1096) / C1097);
    const double C1111 = 2 * C1109;
    const double C1123 = C1115 * ae;
    const double C1122 = C1115 * be;
    const double C1119 = std::pow(C1115, 2);
    const double C1134 = C1131 * be;
    const double C1133 = C1115 * C1131;
    const double C1153 = C1131 * ae;
    const double C1152 = C1131 * C1115;
    const double C1161 = std::pow(C1131, 2);
    const double C1144 = C1141 * be;
    const double C1143 = C1115 * C1141;
    const double C1165 = C1131 * C1141;
    const double C1172 = C1141 * ae;
    const double C1171 = C1141 * C1115;
    const double C1180 = C1141 * C1131;
    const double C1186 = std::pow(C1141, 2);
    const double C1385 = 2 * C1334;
    const double C1384 = std::pow(C1334, 2);
    const double C1335 = std::pow(C1332, 2);
    const double C1383 = C1332 * ce;
    const double C1347 = std::pow(C1346, 2);
    const double C1386 = C1346 * ce;
    const double C1361 = std::pow(C1360, 2);
    const double C1387 = C1360 * ce;
    const double C61 = -(2 * ae * be * (xA - xB) * C53) / (ae + be);
    const double C62 =
        -((C53 - (C1095 * 2 * C1096 * C1095 * C53) / C1097) * 2 * C1096) /
        C1097;
    const double C89 = -(2 * C1096 * (yA - yB) * C55) / C1097;
    const double C151 =
        -((C55 - (C1104 * 2 * C1096 * C1104 * C55) / C1097) * 2 * C1096) /
        C1097;
    const double C110 = -(2 * C1096 * (zA - zB) * C54) / C1097;
    const double C223 =
        -((C54 - (C1107 * 2 * C1096 * C1107 * C54) / C1097) * 2 * C1096) /
        C1097;
    const double C1113 = C1111 / C1110;
    const double C72 =
        ((std::pow(xP - xQ, 2) * bs[2] * std::pow(C1111 / C1110, 2) -
          (bs[1] * C1111) / C1110) *
         C1096) /
        std::pow(C1097, 2);
    const double C64 = -(C1115 * bs[1] * C1111) / C1110;
    const double C245 = -(C1131 * bs[1] * C1111) / C1110;
    const double C406 = -(C1141 * bs[1] * C1111) / C1110;
    const double C1126 = C1120 * C1123;
    const double C67 = (-(bs[1] * C1123 * C1111) / C1110) / C1097;
    const double C1125 = C1120 * C1122;
    const double C66 = (-(bs[1] * C1122 * C1111) / C1110) / C1097;
    const double C1136 = C1120 * C1134;
    const double C90 = (-(bs[1] * C1134 * C1111) / C1110) / C1097;
    const double C1135 = C1133 * ae;
    const double C1155 = C1120 * C1153;
    const double C131 = (-(bs[1] * C1153 * C1111) / C1110) / C1097;
    const double C1154 = C1152 * ae;
    const double C1146 = C1120 * C1144;
    const double C111 = (-(bs[1] * C1144 * C1111) / C1110) / C1097;
    const double C1145 = C1143 * ae;
    const double C1166 = C1165 * ae;
    const double C1174 = C1120 * C1172;
    const double C186 = (-(bs[1] * C1172 * C1111) / C1110) / C1097;
    const double C1173 = C1171 * ae;
    const double C1181 = C1180 * ae;
    const double C1390 = std::pow(C1385, -2);
    const double C1388 = std::pow(C1385, -1);
    const double C1336 = C1335 * C1333;
    const double C1348 = C1347 * C1333;
    const double C1362 = C1361 * C1333;
    const double C1116 = std::pow(C1113, 2);
    const double C1121 = -C1113;
    const double C1137 = C1135 * be;
    const double C1156 = C1154 * be;
    const double C1147 = C1145 * be;
    const double C1167 = C1166 * be;
    const double C1175 = C1173 * be;
    const double C1182 = C1181 * be;
    const double C1337 = C1336 / C1334;
    const double C1349 = C1348 / C1334;
    const double C1363 = C1362 / C1334;
    const double C1118 = C1114 * C1116;
    const double C73 =
        (ae * C1116 * C1114 * C1115 * be + be * C1116 * C1114 * C1115 * ae +
         C1115 *
             (C1114 * C1116 +
              std::pow(C1115, 2) * bs[3] * std::pow(-C1113, 3)) *
             C1096) /
        std::pow(C1097, 2);
    const double C93 =
        (C1116 * C1114 * C1115 * (yP - yQ) * ae * be) / std::pow(C1097, 2);
    const double C114 =
        (C1116 * C1114 * C1115 * (zP - zQ) * ae * be) / std::pow(C1097, 2);
    const double C134 =
        (C1116 * C1114 * C1131 * C1115 * ae * be) / std::pow(C1097, 2);
    const double C152 =
        ((std::pow(C1131, 2) * C1114 * C1116 - (bs[1] * C1111) / C1110) *
         C1096) /
        std::pow(C1097, 2);
    const double C169 =
        (C1116 * C1114 * C1131 * C1141 * ae * be) / std::pow(C1097, 2);
    const double C189 =
        (C1116 * C1114 * C1141 * C1115 * ae * be) / std::pow(C1097, 2);
    const double C206 =
        (C1116 * C1114 * C1141 * C1131 * ae * be) / std::pow(C1097, 2);
    const double C224 =
        ((std::pow(C1141, 2) * C1114 * C1116 - (bs[1] * C1111) / C1110) *
         C1096) /
        std::pow(C1097, 2);
    const double C68 = (C1115 * C1116 * C1114 * C1122) / C1097 -
                       (be * bs[1] * C1111) / (C1110 * C1097);
    const double C69 = (C1115 * C1116 * C1114 * C1123) / C1097 -
                       (ae * bs[1] * C1111) / (C1110 * C1097);
    const double C91 = (C1115 * C1116 * C1114 * C1134) / C1097;
    const double C112 = (C1115 * C1116 * C1114 * C1144) / C1097;
    const double C132 = (C1115 * C1116 * C1114 * C1153) / C1097;
    const double C187 = (C1115 * C1116 * C1114 * C1172) / C1097;
    const double C247 = (C1131 * C1116 * C1114 * C1122) / C1097;
    const double C248 = (C1131 * C1116 * C1114 * C1123) / C1097;
    const double C267 = (C1131 * C1116 * C1114 * C1134) / C1097 -
                        (be * bs[1] * C1111) / (C1110 * C1097);
    const double C285 = (C1131 * C1116 * C1114 * C1144) / C1097;
    const double C303 = (C1131 * C1116 * C1114 * C1153) / C1097 -
                        (ae * bs[1] * C1111) / (C1110 * C1097);
    const double C353 = (C1131 * C1116 * C1114 * C1172) / C1097;
    const double C408 = (C1141 * C1116 * C1114 * C1122) / C1097;
    const double C409 = (C1141 * C1116 * C1114 * C1123) / C1097;
    const double C428 = (C1141 * C1116 * C1114 * C1134) / C1097;
    const double C446 = (C1141 * C1116 * C1114 * C1144) / C1097 -
                        (be * bs[1] * C1111) / (C1110 * C1097);
    const double C464 = (C1141 * C1116 * C1114 * C1153) / C1097;
    const double C514 = (C1141 * C1116 * C1114 * C1172) / C1097 -
                        (ae * bs[1] * C1111) / (C1110 * C1097);
    const double C1124 = std::pow(C1121, 3);
    const double C1338 = -C1337;
    const double C1350 = -C1349;
    const double C1364 = -C1363;
    const double C65 = C1118 * C1119 - (bs[1] * C1111) / C1110;
    const double C246 = C1118 * C1161 - (bs[1] * C1111) / C1110;
    const double C407 = C1118 * C1186 - (bs[1] * C1111) / C1110;
    const double C572 = C1131 * C1115 * C1118;
    const double C752 = C1141 * C1115 * C1118;
    const double C930 = C1141 * C1131 * C1118;
    const double C1128 = C1124 * C1126;
    const double C1127 = C1124 * C1125;
    const double C1138 = C1124 * C1136;
    const double C1148 = C1124 * C1146;
    const double C1157 = C1124 * C1155;
    const double C1176 = C1124 * C1174;
    const double C94 = (ae * C1116 * C1114 * C1131 * be +
                        C1115 * C1124 * C1120 * C1115 * C1131 * ae * be) /
                       std::pow(C1097, 2);
    const double C115 = (ae * C1116 * C1114 * C1141 * be +
                         C1115 * C1124 * C1120 * C1115 * C1141 * ae * be) /
                        std::pow(C1097, 2);
    const double C135 = (be * C1116 * C1114 * C1131 * ae +
                         C1115 * C1124 * C1120 * C1131 * C1115 * ae * be) /
                        std::pow(C1097, 2);
    const double C153 =
        (C1115 * (C1118 + std::pow(C1131, 2) * C1120 * C1124) * C1096) /
        std::pow(C1097, 2);
    const double C154 =
        ((C1118 + C1161 * C1120 * C1124) * C1096 +
         (C1120 * C1124 + C1161 * bs[4] * std::pow(C1113, 4)) * C1096 * C1119) /
        std::pow(C1097, 2);
    const double C170 =
        (C1115 * C1124 * C1120 * C1131 * C1141 * ae * be) / std::pow(C1097, 2);
    const double C171 =
        (C1124 * C1120 * C1167 + std::pow(C1113, 4) * bs[4] * C1167 * C1119) /
        std::pow(C1097, 2);
    const double C190 = (be * C1116 * C1114 * C1141 * ae +
                         C1115 * C1124 * C1120 * C1141 * C1115 * ae * be) /
                        std::pow(C1097, 2);
    const double C207 =
        (C1115 * C1124 * C1120 * C1141 * C1131 * ae * be) / std::pow(C1097, 2);
    const double C208 =
        (C1124 * C1120 * C1182 + std::pow(C1113, 4) * bs[4] * C1182 * C1119) /
        std::pow(C1097, 2);
    const double C225 =
        (C1115 * (C1118 + std::pow(C1141, 2) * C1120 * C1124) * C1096) /
        std::pow(C1097, 2);
    const double C226 =
        ((C1118 + C1186 * C1120 * C1124) * C1096 +
         (C1120 * C1124 + C1186 * bs[4] * std::pow(C1113, 4)) * C1096 * C1119) /
        std::pow(C1097, 2);
    const double C251 =
        (C1131 * (C1118 + C1119 * C1120 * C1124) * C1096) / std::pow(C1097, 2);
    const double C252 =
        ((C1118 + C1119 * C1120 * C1124) * C1096 +
         (C1120 * C1124 + C1119 * bs[4] * std::pow(C1113, 4)) * C1096 * C1161) /
        std::pow(C1097, 2);
    const double C269 =
        (be * C1116 * C1114 * C1123 + C1131 * C1124 * C1120 * C1137) /
        std::pow(C1097, 2);
    const double C287 = (C1131 * C1124 * C1120 * C1147) / std::pow(C1097, 2);
    const double C288 =
        (C1124 * C1120 * C1147 + std::pow(C1113, 4) * bs[4] * C1147 * C1161) /
        std::pow(C1097, 2);
    const double C305 =
        (ae * C1116 * C1114 * C1122 + C1131 * C1124 * C1120 * C1156) /
        std::pow(C1097, 2);
    const double C321 =
        (ae * C1116 * C1114 * C1134 + be * C1116 * C1114 * C1153 +
         C1131 * (C1118 + C1161 * C1120 * C1124) * C1096) /
        std::pow(C1097, 2);
    const double C337 =
        (ae * C1116 * C1114 * C1144 + C1131 * C1124 * C1120 * C1167) /
        std::pow(C1097, 2);
    const double C355 = (C1131 * C1124 * C1120 * C1175) / std::pow(C1097, 2);
    const double C356 =
        (C1124 * C1120 * C1175 + std::pow(C1113, 4) * bs[4] * C1175 * C1161) /
        std::pow(C1097, 2);
    const double C371 =
        (be * C1116 * C1114 * C1172 + C1131 * C1124 * C1120 * C1182) /
        std::pow(C1097, 2);
    const double C387 =
        (C1131 * (C1118 + C1186 * C1120 * C1124) * C1096) / std::pow(C1097, 2);
    const double C388 =
        ((C1118 + C1186 * C1120 * C1124) * C1096 +
         (C1120 * C1124 + C1186 * bs[4] * std::pow(C1113, 4)) * C1096 * C1161) /
        std::pow(C1097, 2);
    const double C412 =
        (C1141 * (C1118 + C1119 * C1120 * C1124) * C1096) / std::pow(C1097, 2);
    const double C413 =
        ((C1118 + C1119 * C1120 * C1124) * C1096 +
         (C1120 * C1124 + C1119 * bs[4] * std::pow(C1113, 4)) * C1096 * C1186) /
        std::pow(C1097, 2);
    const double C430 = (C1141 * C1124 * C1120 * C1137) / std::pow(C1097, 2);
    const double C431 =
        (C1124 * C1120 * C1137 + std::pow(C1113, 4) * bs[4] * C1137 * C1186) /
        std::pow(C1097, 2);
    const double C448 =
        (be * C1116 * C1114 * C1123 + C1141 * C1124 * C1120 * C1147) /
        std::pow(C1097, 2);
    const double C466 = (C1141 * C1124 * C1120 * C1156) / std::pow(C1097, 2);
    const double C467 =
        (C1124 * C1120 * C1156 + std::pow(C1113, 4) * bs[4] * C1156 * C1186) /
        std::pow(C1097, 2);
    const double C482 =
        (C1141 * (C1118 + C1161 * C1120 * C1124) * C1096) / std::pow(C1097, 2);
    const double C483 =
        ((C1118 + C1161 * C1120 * C1124) * C1096 +
         (C1120 * C1124 + C1161 * bs[4] * std::pow(C1113, 4)) * C1096 * C1186) /
        std::pow(C1097, 2);
    const double C498 =
        (be * C1116 * C1114 * C1153 + C1141 * C1124 * C1120 * C1167) /
        std::pow(C1097, 2);
    const double C516 =
        (ae * C1116 * C1114 * C1122 + C1141 * C1124 * C1120 * C1175) /
        std::pow(C1097, 2);
    const double C532 =
        (ae * C1116 * C1114 * C1134 + C1141 * C1124 * C1120 * C1182) /
        std::pow(C1097, 2);
    const double C548 =
        (ae * C1116 * C1114 * C1144 + be * C1116 * C1114 * C1172 +
         C1141 * (C1118 + C1186 * C1120 * C1124) * C1096) /
        std::pow(C1097, 2);
    const double C731 =
        (C1131 * C1115 * (C1120 * C1124 + C1186 * bs[4] * std::pow(C1113, 4)) *
         C1096) /
        std::pow(C1097, 2);
    const double C834 =
        (C1141 * C1115 * (C1120 * C1124 + C1161 * bs[4] * std::pow(C1113, 4)) *
         C1096) /
        std::pow(C1097, 2);
    const double C933 =
        (C1141 * C1131 * (C1120 * C1124 + C1119 * bs[4] * std::pow(C1113, 4)) *
         C1096) /
        std::pow(C1097, 2);
    const double C1339 = std::exp(C1338);
    const double C1351 = std::exp(C1350);
    const double C1365 = std::exp(C1364);
    const double C270 =
        (C1124 * C1120 * C1137 + be * C1131 * C1128 +
         C1131 * (be * C1128 + C1131 * std::pow(C1113, 4) * bs[4] * C1137)) /
        std::pow(C1097, 2);
    const double C449 =
        (C1124 * C1120 * C1147 + be * C1141 * C1128 +
         C1141 * (be * C1128 + C1141 * std::pow(C1113, 4) * bs[4] * C1147)) /
        std::pow(C1097, 2);
    const double C953 =
        (C1141 * (be * C1128 + C1131 * std::pow(C1113, 4) * bs[4] * C1137)) /
        std::pow(C1097, 2);
    const double C973 = (be * C1131 * C1128 +
                         C1141 * C1131 * std::pow(C1113, 4) * bs[4] * C1147) /
                        std::pow(C1097, 2);
    const double C71 =
        (C1116 * C1114 * C1123 + C1115 * (C1115 * C1128 + C1118 * ae) +
         C1115 * C1118 * ae) /
        C1097;
    const double C250 = (C1116 * C1114 * C1123 + C1128 * C1161) / C1097;
    const double C411 = (C1116 * C1114 * C1123 + C1128 * C1186) / C1097;
    const double C574 = (C1131 * (C1115 * C1128 + C1118 * ae)) / C1097;
    const double C754 = (C1141 * (C1115 * C1128 + C1118 * ae)) / C1097;
    const double C932 = (C1141 * C1131 * C1128) / C1097;
    const double C74 =
        ((C1118 + C1119 * C1120 * C1124) * C1096 +
         ae * (C1115 * C1127 + C1118 * be) + be * (C1115 * C1128 + C1118 * ae) +
         C1115 * (ae * C1127 + be * C1128 +
                  C1115 * (C1120 * C1124 + C1119 * bs[4] * std::pow(C1113, 4)) *
                      C1096)) /
        std::pow(C1097, 2);
    const double C306 =
        (C1124 * C1120 * C1156 + ae * C1131 * C1127 +
         C1131 * (ae * C1127 + C1131 * std::pow(C1113, 4) * bs[4] * C1156)) /
        std::pow(C1097, 2);
    const double C517 =
        (C1124 * C1120 * C1175 + ae * C1141 * C1127 +
         C1141 * (ae * C1127 + C1141 * std::pow(C1113, 4) * bs[4] * C1175)) /
        std::pow(C1097, 2);
    const double C575 =
        (ae * C1131 * C1127 + be * C1131 * C1128 +
         C1115 * C1131 * (C1120 * C1124 + C1119 * bs[4] * std::pow(C1113, 4)) *
             C1096) /
        std::pow(C1097, 2);
    const double C755 =
        (ae * C1141 * C1127 + be * C1141 * C1128 +
         C1115 * C1141 * (C1120 * C1124 + C1119 * bs[4] * std::pow(C1113, 4)) *
             C1096) /
        std::pow(C1097, 2);
    const double C993 = (ae * C1141 * C1127 +
                         C1131 * C1141 * std::pow(C1113, 4) * bs[4] * C1156) /
                        std::pow(C1097, 2);
    const double C1051 = (ae * C1131 * C1127 +
                          C1141 * C1131 * std::pow(C1113, 4) * bs[4] * C1175) /
                         std::pow(C1097, 2);
    const double C70 =
        (C1116 * C1114 * C1122 + C1115 * (C1115 * C1127 + C1118 * be) +
         C1115 * C1118 * be) /
        C1097;
    const double C249 = (C1116 * C1114 * C1122 + C1127 * C1161) / C1097;
    const double C410 = (C1116 * C1114 * C1122 + C1127 * C1186) / C1097;
    const double C573 = (C1131 * (C1115 * C1127 + C1118 * be)) / C1097;
    const double C753 = (C1141 * (C1115 * C1127 + C1118 * be)) / C1097;
    const double C931 = (C1141 * C1131 * C1127) / C1097;
    const double C95 =
        (C1124 * C1120 * C1137 + ae * C1115 * C1138 +
         C1115 * (ae * C1138 + C1115 * std::pow(C1113, 4) * bs[4] * C1137)) /
        std::pow(C1097, 2);
    const double C533 =
        (C1124 * C1120 * C1182 + ae * C1141 * C1138 +
         C1141 * (ae * C1138 + C1141 * std::pow(C1113, 4) * bs[4] * C1182)) /
        std::pow(C1097, 2);
    const double C595 =
        (be * (C1115 * C1128 + C1118 * ae) +
         C1131 * (ae * C1138 + C1115 * std::pow(C1113, 4) * bs[4] * C1137)) /
        std::pow(C1097, 2);
    const double C775 =
        (C1141 * (ae * C1138 + C1115 * std::pow(C1113, 4) * bs[4] * C1137)) /
        std::pow(C1097, 2);
    const double C892 = (ae * C1115 * C1138 +
                         C1141 * C1115 * std::pow(C1113, 4) * bs[4] * C1182) /
                        std::pow(C1097, 2);
    const double C92 = (C1116 * C1114 * C1134 + C1138 * C1119) / C1097;
    const double C268 =
        (C1116 * C1114 * C1134 + C1131 * (C1131 * C1138 + C1118 * be) +
         C1131 * C1118 * be) /
        C1097;
    const double C429 = (C1116 * C1114 * C1134 + C1138 * C1186) / C1097;
    const double C594 = (C1131 * C1115 * C1138 + C1115 * C1118 * be) / C1097;
    const double C774 = (C1141 * C1115 * C1138) / C1097;
    const double C952 = (C1141 * (C1131 * C1138 + C1118 * be)) / C1097;
    const double C116 =
        (C1124 * C1120 * C1147 + ae * C1115 * C1148 +
         C1115 * (ae * C1148 + C1115 * std::pow(C1113, 4) * bs[4] * C1147)) /
        std::pow(C1097, 2);
    const double C338 =
        (C1124 * C1120 * C1167 + ae * C1131 * C1148 +
         C1131 * (ae * C1148 + C1131 * std::pow(C1113, 4) * bs[4] * C1167)) /
        std::pow(C1097, 2);
    const double C615 =
        (C1131 * (ae * C1148 + C1115 * std::pow(C1113, 4) * bs[4] * C1147)) /
        std::pow(C1097, 2);
    const double C673 = (ae * C1115 * C1148 +
                         C1131 * C1115 * std::pow(C1113, 4) * bs[4] * C1167) /
                        std::pow(C1097, 2);
    const double C795 =
        (be * (C1115 * C1128 + C1118 * ae) +
         C1141 * (ae * C1148 + C1115 * std::pow(C1113, 4) * bs[4] * C1147)) /
        std::pow(C1097, 2);
    const double C113 = (C1116 * C1114 * C1144 + C1148 * C1119) / C1097;
    const double C286 = (C1116 * C1114 * C1144 + C1148 * C1161) / C1097;
    const double C447 =
        (C1116 * C1114 * C1144 + C1141 * (C1141 * C1148 + C1118 * be) +
         C1141 * C1118 * be) /
        C1097;
    const double C614 = (C1131 * C1115 * C1148) / C1097;
    const double C794 = (C1141 * C1115 * C1148 + C1115 * C1118 * be) / C1097;
    const double C972 = (C1141 * C1131 * C1148 + C1131 * C1118 * be) / C1097;
    const double C136 =
        (C1124 * C1120 * C1156 + be * C1115 * C1157 +
         C1115 * (be * C1157 + C1115 * std::pow(C1113, 4) * bs[4] * C1156)) /
        std::pow(C1097, 2);
    const double C322 =
        ((C1118 + C1161 * C1120 * C1124) * C1096 +
         ae * (C1131 * C1138 + C1118 * be) + be * (C1131 * C1157 + C1118 * ae) +
         C1131 * (ae * C1138 + be * C1157 +
                  C1131 * (C1120 * C1124 + C1161 * bs[4] * std::pow(C1113, 4)) *
                      C1096)) /
        std::pow(C1097, 2);
    const double C499 =
        (C1124 * C1120 * C1167 + be * C1141 * C1157 +
         C1141 * (be * C1157 + C1141 * std::pow(C1113, 4) * bs[4] * C1167)) /
        std::pow(C1097, 2);
    const double C635 =
        (ae * (C1115 * C1127 + C1118 * be) +
         C1131 * (be * C1157 + C1115 * std::pow(C1113, 4) * bs[4] * C1156)) /
        std::pow(C1097, 2);
    const double C654 =
        (ae * C1115 * C1138 + be * C1115 * C1157 +
         C1131 * C1115 * (C1120 * C1124 + C1161 * bs[4] * std::pow(C1113, 4)) *
             C1096) /
        std::pow(C1097, 2);
    const double C815 =
        (C1141 * (be * C1157 + C1115 * std::pow(C1113, 4) * bs[4] * C1156)) /
        std::pow(C1097, 2);
    const double C853 = (be * C1115 * C1157 +
                         C1141 * C1115 * std::pow(C1113, 4) * bs[4] * C1167) /
                        std::pow(C1097, 2);
    const double C1012 =
        (ae * C1141 * C1138 + be * C1141 * C1157 +
         C1131 * C1141 * (C1120 * C1124 + C1161 * bs[4] * std::pow(C1113, 4)) *
             C1096) /
        std::pow(C1097, 2);
    const double C1031 =
        (ae * (C1141 * C1148 + C1118 * be) +
         C1131 * (be * C1157 + C1141 * std::pow(C1113, 4) * bs[4] * C1167)) /
        std::pow(C1097, 2);
    const double C133 = (C1116 * C1114 * C1153 + C1157 * C1119) / C1097;
    const double C304 =
        (C1116 * C1114 * C1153 + C1131 * (C1131 * C1157 + C1118 * ae) +
         C1131 * C1118 * ae) /
        C1097;
    const double C465 = (C1116 * C1114 * C1153 + C1157 * C1186) / C1097;
    const double C634 = (C1131 * C1115 * C1157 + C1115 * C1118 * ae) / C1097;
    const double C814 = (C1141 * C1115 * C1157) / C1097;
    const double C992 = (C1141 * (C1131 * C1157 + C1118 * ae)) / C1097;
    const double C191 =
        (C1124 * C1120 * C1175 + be * C1115 * C1176 +
         C1115 * (be * C1176 + C1115 * std::pow(C1113, 4) * bs[4] * C1175)) /
        std::pow(C1097, 2);
    const double C372 =
        (C1124 * C1120 * C1182 + be * C1131 * C1176 +
         C1131 * (be * C1176 + C1131 * std::pow(C1113, 4) * bs[4] * C1182)) /
        std::pow(C1097, 2);
    const double C549 =
        ((C1118 + C1186 * C1120 * C1124) * C1096 +
         ae * (C1141 * C1148 + C1118 * be) + be * (C1141 * C1176 + C1118 * ae) +
         C1141 * (ae * C1148 + be * C1176 +
                  C1141 * (C1120 * C1124 + C1186 * bs[4] * std::pow(C1113, 4)) *
                      C1096)) /
        std::pow(C1097, 2);
    const double C693 =
        (C1131 * (be * C1176 + C1115 * std::pow(C1113, 4) * bs[4] * C1175)) /
        std::pow(C1097, 2);
    const double C712 = (be * C1115 * C1176 +
                         C1131 * C1115 * std::pow(C1113, 4) * bs[4] * C1182) /
                        std::pow(C1097, 2);
    const double C873 =
        (ae * (C1115 * C1127 + C1118 * be) +
         C1141 * (be * C1176 + C1115 * std::pow(C1113, 4) * bs[4] * C1175)) /
        std::pow(C1097, 2);
    const double C911 =
        (ae * C1115 * C1148 + be * C1115 * C1176 +
         C1141 * C1115 * (C1120 * C1124 + C1186 * bs[4] * std::pow(C1113, 4)) *
             C1096) /
        std::pow(C1097, 2);
    const double C1070 =
        (ae * (C1131 * C1138 + C1118 * be) +
         C1141 * (be * C1176 + C1131 * std::pow(C1113, 4) * bs[4] * C1182)) /
        std::pow(C1097, 2);
    const double C1089 =
        (ae * C1131 * C1148 + be * C1131 * C1176 +
         C1141 * C1131 * (C1120 * C1124 + C1186 * bs[4] * std::pow(C1113, 4)) *
             C1096) /
        std::pow(C1097, 2);
    const double C188 = (C1116 * C1114 * C1172 + C1176 * C1119) / C1097;
    const double C354 = (C1116 * C1114 * C1172 + C1176 * C1161) / C1097;
    const double C515 =
        (C1116 * C1114 * C1172 + C1141 * (C1141 * C1176 + C1118 * ae) +
         C1141 * C1118 * ae) /
        C1097;
    const double C692 = (C1131 * C1115 * C1176) / C1097;
    const double C872 = (C1141 * C1115 * C1176 + C1115 * C1118 * ae) / C1097;
    const double C1050 = (C1141 * C1131 * C1176 + C1131 * C1118 * ae) / C1097;
    const double C1389 = C1339 * C1383;
    const double C58 = (C1339 * std::pow(C1383, 2)) / C1384 + C1339 / C1385;
    const double C60 = C1390 * C1339;
    const double C571 = C1388 * C1339;
    const double C1391 = C1351 * C1386;
    const double C241 = (C1351 * std::pow(C1386, 2)) / C1384 + C1351 / C1385;
    const double C243 = C1390 * C1351;
    const double C569 = C1388 * C1351;
    const double C1392 = C1365 * C1387;
    const double C403 = (C1365 * std::pow(C1387, 2)) / C1384 + C1365 / C1385;
    const double C405 = C1390 * C1365;
    const double C751 = C1388 * C1365;
    const double C59 = (2 * C1388 * C1389) / C1334;
    const double C570 = C1389 / C1334;
    const double C242 = (2 * C1388 * C1391) / C1334;
    const double C568 = C1391 / C1334;
    const double C404 = (2 * C1388 * C1392) / C1334;
    const double C750 = C1392 / C1334;
    d2eexx[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C61 * C66 - C62 * C63 - C61 * C67 + C53 * C72) * C54 *
                        C55 * C1365 * C568 -
                    (C61 * C247 - C62 * C245 - C61 * C248 + C53 * C251) * C54 *
                        C55 * C1365 * C569) *
                       C570 +
                   ((C61 * C573 - C62 * C572 - C61 * C574 + C53 * C575) * C54 *
                        C55 * C1365 * C569 -
                    (C61 * C68 - C62 * C64 - C61 * C69 + C53 * C73) * C54 *
                        C55 * C1365 * C568) *
                       C571)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C55 * C90 - C89 * C63) * C61 + (C55 * C93 - C89 * C67) * C53) *
               C54 * C1365 * C568 +
           ((C89 * C245 - C55 * C267) * C61 + (C89 * C248 - C55 * C269) * C53) *
               C54 * C1365 * C569) *
              C570 +
          (((C89 * C64 - C55 * C91) * C61 + (C89 * C69 - C55 * C94) * C53) *
               C54 * C1365 * C568 +
           ((C55 * C594 - C89 * C572) * C61 + (C55 * C595 - C89 * C574) * C53) *
               C54 * C1365 * C569) *
              C571)) /
        (p * q * std::sqrt(p + q));
    d2eexz[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C54 * C111 - C110 * C63) * C61 + (C54 * C114 - C110 * C67) * C53) *
               C55 * C1365 * C568 +
           ((C110 * C245 - C54 * C285) * C61 +
            (C110 * C248 - C54 * C287) * C53) *
               C55 * C1365 * C569) *
              C570 +
          (((C110 * C64 - C54 * C112) * C61 + (C110 * C69 - C54 * C115) * C53) *
               C55 * C1365 * C568 +
           ((C54 * C614 - C110 * C572) * C61 +
            (C54 * C615 - C110 * C574) * C53) *
               C55 * C1365 * C569) *
              C571)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C53 * C66 - C61 * C63) * C89 + (C53 * C134 - C61 * C131) * C55) *
               C54 * C1365 * C568 +
           ((C61 * C245 - C53 * C247) * C89 + (C61 * C303 - C53 * C305) * C55) *
               C54 * C1365 * C569) *
              C570 +
          (((C61 * C64 - C53 * C68) * C89 + (C61 * C132 - C53 * C135) * C55) *
               C54 * C1365 * C568 +
           ((C53 * C573 - C61 * C572) * C89 + (C53 * C635 - C61 * C634) * C55) *
               C54 * C1365 * C569) *
              C571)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C89 * C90 - C151 * C63 - C89 * C131 + C55 * C152) * C53 *
                        C54 * C1365 * C568 -
                    (C89 * C267 - C151 * C245 - C89 * C303 + C55 * C321) * C53 *
                        C54 * C1365 * C569) *
                       C570 +
                   ((C89 * C594 - C151 * C572 - C89 * C634 + C55 * C654) * C53 *
                        C54 * C1365 * C569 -
                    (C89 * C91 - C151 * C64 - C89 * C132 + C55 * C153) * C53 *
                        C54 * C1365 * C568) *
                       C571)) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C54 * C111 - C110 * C63) * C89 +
                     (C54 * C169 - C110 * C131) * C55) *
                        C53 * C1365 * C568 +
                    ((C110 * C245 - C54 * C285) * C89 +
                     (C110 * C303 - C54 * C337) * C55) *
                        C53 * C1365 * C569) *
                       C570 +
                   (((C110 * C64 - C54 * C112) * C89 +
                     (C110 * C132 - C54 * C170) * C55) *
                        C53 * C1365 * C568 +
                    ((C54 * C614 - C110 * C572) * C89 +
                     (C54 * C673 - C110 * C634) * C55) *
                        C53 * C1365 * C569) *
                       C571)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C53 * C66 - C61 * C63) * C110 + (C53 * C189 - C61 * C186) * C54) *
               C55 * C1365 * C568 +
           ((C61 * C245 - C53 * C247) * C110 +
            (C61 * C353 - C53 * C355) * C54) *
               C55 * C1365 * C569) *
              C570 +
          (((C61 * C64 - C53 * C68) * C110 + (C61 * C187 - C53 * C190) * C54) *
               C55 * C1365 * C568 +
           ((C53 * C573 - C61 * C572) * C110 +
            (C53 * C693 - C61 * C692) * C54) *
               C55 * C1365 * C569) *
              C571)) /
        (p * q * std::sqrt(p + q));
    d2eezy[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C55 * C90 - C89 * C63) * C110 + (C55 * C206 - C89 * C186) * C54) *
               C53 * C1365 * C568 +
           ((C89 * C245 - C55 * C267) * C110 +
            (C89 * C353 - C55 * C371) * C54) *
               C53 * C1365 * C569) *
              C570 +
          (((C89 * C64 - C55 * C91) * C110 + (C89 * C187 - C55 * C207) * C54) *
               C53 * C1365 * C568 +
           ((C55 * C594 - C89 * C572) * C110 +
            (C55 * C712 - C89 * C692) * C54) *
               C53 * C1365 * C569) *
              C571)) /
        (p * q * std::sqrt(p + q));
    d2eezz[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C110 * C111 - C223 * C63 - C110 * C186 + C54 * C224) *
                        C55 * C53 * C1365 * C568 -
                    (C110 * C285 - C223 * C245 - C110 * C353 + C54 * C387) *
                        C55 * C53 * C1365 * C569) *
                       C570 +
                   ((C110 * C614 - C223 * C572 - C110 * C692 + C54 * C731) *
                        C55 * C53 * C1365 * C569 -
                    (C110 * C112 - C223 * C64 - C110 * C187 + C54 * C225) *
                        C55 * C53 * C1365 * C568) *
                       C571)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C61 * C66 - C62 * C63 - C61 * C67 + C53 * C72) * C54 * C55 * C750 -
           (C61 * C408 - C62 * C406 - C61 * C409 + C53 * C412) * C54 * C55 *
               C751) *
              C568 +
          ((C61 * C931 - C62 * C930 - C61 * C932 + C53 * C933) * C54 * C55 *
               C751 -
           (C61 * C247 - C62 * C245 - C61 * C248 + C53 * C251) * C54 * C55 *
               C750) *
              C569) *
         C1339) /
        (p * q * std::sqrt(p + q));
    d2eexy[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C55 * C90 - C89 * C63) * C61 + (C55 * C93 - C89 * C67) * C53) *
               C54 * C750 +
           ((C89 * C406 - C55 * C428) * C61 + (C89 * C409 - C55 * C430) * C53) *
               C54 * C751) *
              C568 +
          (((C89 * C245 - C55 * C267) * C61 + (C89 * C248 - C55 * C269) * C53) *
               C54 * C750 +
           ((C55 * C952 - C89 * C930) * C61 + (C55 * C953 - C89 * C932) * C53) *
               C54 * C751) *
              C569) *
         C1339) /
        (p * q * std::sqrt(p + q));
    d2eexz[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C54 * C111 - C110 * C63) * C61 + (C54 * C114 - C110 * C67) * C53) *
               C55 * C750 +
           ((C110 * C406 - C54 * C446) * C61 +
            (C110 * C409 - C54 * C448) * C53) *
               C55 * C751) *
              C568 +
          (((C110 * C245 - C54 * C285) * C61 +
            (C110 * C248 - C54 * C287) * C53) *
               C55 * C750 +
           ((C54 * C972 - C110 * C930) * C61 +
            (C54 * C973 - C110 * C932) * C53) *
               C55 * C751) *
              C569) *
         C1339) /
        (p * q * std::sqrt(p + q));
    d2eeyx[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C53 * C66 - C61 * C63) * C89 + (C53 * C134 - C61 * C131) * C55) *
               C54 * C750 +
           ((C61 * C406 - C53 * C408) * C89 + (C61 * C464 - C53 * C466) * C55) *
               C54 * C751) *
              C568 +
          (((C61 * C245 - C53 * C247) * C89 + (C61 * C303 - C53 * C305) * C55) *
               C54 * C750 +
           ((C53 * C931 - C61 * C930) * C89 + (C53 * C993 - C61 * C992) * C55) *
               C54 * C751) *
              C569) *
         C1339) /
        (p * q * std::sqrt(p + q));
    d2eeyy[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C89 * C90 - C151 * C63 - C89 * C131 + C55 * C152) * C53 *
                        C54 * C750 -
                    (C89 * C428 - C151 * C406 - C89 * C464 + C55 * C482) * C53 *
                        C54 * C751) *
                       C568 +
                   ((C89 * C952 - C151 * C930 - C89 * C992 + C55 * C1012) *
                        C53 * C54 * C751 -
                    (C89 * C267 - C151 * C245 - C89 * C303 + C55 * C321) * C53 *
                        C54 * C750) *
                       C569) *
                  C1339) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C54 * C111 - C110 * C63) * C89 +
                     (C54 * C169 - C110 * C131) * C55) *
                        C53 * C750 +
                    ((C110 * C406 - C54 * C446) * C89 +
                     (C110 * C464 - C54 * C498) * C55) *
                        C53 * C751) *
                       C568 +
                   (((C110 * C245 - C54 * C285) * C89 +
                     (C110 * C303 - C54 * C337) * C55) *
                        C53 * C750 +
                    ((C54 * C972 - C110 * C930) * C89 +
                     (C54 * C1031 - C110 * C992) * C55) *
                        C53 * C751) *
                       C569) *
                  C1339) /
                 (p * q * std::sqrt(p + q));
    d2eezx[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C53 * C66 - C61 * C63) * C110 + (C53 * C189 - C61 * C186) * C54) *
               C55 * C750 +
           ((C61 * C406 - C53 * C408) * C110 +
            (C61 * C514 - C53 * C516) * C54) *
               C55 * C751) *
              C568 +
          (((C61 * C245 - C53 * C247) * C110 +
            (C61 * C353 - C53 * C355) * C54) *
               C55 * C750 +
           ((C53 * C931 - C61 * C930) * C110 +
            (C53 * C1051 - C61 * C1050) * C54) *
               C55 * C751) *
              C569) *
         C1339) /
        (p * q * std::sqrt(p + q));
    d2eezy[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C55 * C90 - C89 * C63) * C110 + (C55 * C206 - C89 * C186) * C54) *
               C53 * C750 +
           ((C89 * C406 - C55 * C428) * C110 +
            (C89 * C514 - C55 * C532) * C54) *
               C53 * C751) *
              C568 +
          (((C89 * C245 - C55 * C267) * C110 +
            (C89 * C353 - C55 * C371) * C54) *
               C53 * C750 +
           ((C55 * C952 - C89 * C930) * C110 +
            (C55 * C1070 - C89 * C1050) * C54) *
               C53 * C751) *
              C569) *
         C1339) /
        (p * q * std::sqrt(p + q));
    d2eezz[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C110 * C111 - C223 * C63 - C110 * C186 + C54 * C224) *
                        C55 * C53 * C750 -
                    (C110 * C446 - C223 * C406 - C110 * C514 + C54 * C548) *
                        C55 * C53 * C751) *
                       C568 +
                   ((C110 * C972 - C223 * C930 - C110 * C1050 + C54 * C1089) *
                        C55 * C53 * C751 -
                    (C110 * C285 - C223 * C245 - C110 * C353 + C54 * C387) *
                        C55 * C53 * C750) *
                       C569) *
                  C1339) /
                 (p * q * std::sqrt(p + q));
    d2eexx[2] +=
        (-std::pow(Pi, 2.5) *
         ((C61 * C66 - C62 * C63 - C61 * C67 + C53 * C72) * C54 * C55 * C1365 *
              C241 -
          (C61 * C247 - C62 * C245 - C61 * C248 + C53 * C251) * C54 * C55 *
              C1365 * C242 +
          (C61 * C249 - C62 * C246 - C61 * C250 + C53 * C252) * C54 * C55 *
              C1365 * C243) *
         C1339) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((C61 * C66 - C62 * C63 - C61 * C67 + C53 * C72) *
                                  C54 * C55 * C1365 * C1351 * C58 -
                              (C61 * C68 - C62 * C64 - C61 * C69 + C53 * C73) *
                                  C54 * C55 * C1365 * C1351 * C59 +
                              (C61 * C70 - C62 * C65 - C61 * C71 + C53 * C74) *
                                  C54 * C55 * C1365 * C1351 * C60)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C61 * C66 - C62 * C63 - C61 * C67 + C53 * C72) * C54 * C55 * C403 -
          (C61 * C408 - C62 * C406 - C61 * C409 + C53 * C412) * C54 * C55 *
              C404 +
          (C61 * C410 - C62 * C407 - C61 * C411 + C53 * C413) * C54 * C55 *
              C405) *
         C1351 * C1339) /
            (p * q * std::sqrt(p + q));
    d2eexy[2] +=
        (-std::pow(Pi, 2.5) *
         (((C55 * C90 - C89 * C63) * C61 + (C55 * C93 - C89 * C67) * C53) *
              C54 * C1365 * C241 +
          ((C89 * C245 - C55 * C267) * C61 + (C89 * C248 - C55 * C269) * C53) *
              C54 * C1365 * C242 +
          ((C55 * C268 - C89 * C246) * C61 + (C55 * C270 - C89 * C250) * C53) *
              C54 * C1365 * C243) *
         C1339) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C55 * C90 - C89 * C63) * C61 + (C55 * C93 - C89 * C67) * C53) *
              C54 * C1365 * C1351 * C58 +
          ((C89 * C64 - C55 * C91) * C61 + (C89 * C69 - C55 * C94) * C53) *
              C54 * C1365 * C1351 * C59 +
          ((C55 * C92 - C89 * C65) * C61 + (C55 * C95 - C89 * C71) * C53) *
              C54 * C1365 * C1351 * C60)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C55 * C90 - C89 * C63) * C61 + (C55 * C93 - C89 * C67) * C53) *
              C54 * C403 +
          ((C89 * C406 - C55 * C428) * C61 + (C89 * C409 - C55 * C430) * C53) *
              C54 * C404 +
          ((C55 * C429 - C89 * C407) * C61 + (C55 * C431 - C89 * C411) * C53) *
              C54 * C405) *
         C1351 * C1339) /
            (p * q * std::sqrt(p + q));
    d2eexz[2] +=
        (-std::pow(Pi, 2.5) *
         (((C54 * C111 - C110 * C63) * C61 + (C54 * C114 - C110 * C67) * C53) *
              C55 * C1365 * C241 +
          ((C110 * C245 - C54 * C285) * C61 +
           (C110 * C248 - C54 * C287) * C53) *
              C55 * C1365 * C242 +
          ((C54 * C286 - C110 * C246) * C61 +
           (C54 * C288 - C110 * C250) * C53) *
              C55 * C1365 * C243) *
         C1339) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C54 * C111 - C110 * C63) * C61 + (C54 * C114 - C110 * C67) * C53) *
              C55 * C1365 * C1351 * C58 +
          ((C110 * C64 - C54 * C112) * C61 + (C110 * C69 - C54 * C115) * C53) *
              C55 * C1365 * C1351 * C59 +
          ((C54 * C113 - C110 * C65) * C61 + (C54 * C116 - C110 * C71) * C53) *
              C55 * C1365 * C1351 * C60)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C54 * C111 - C110 * C63) * C61 + (C54 * C114 - C110 * C67) * C53) *
              C55 * C403 +
          ((C110 * C406 - C54 * C446) * C61 +
           (C110 * C409 - C54 * C448) * C53) *
              C55 * C404 +
          ((C54 * C447 - C110 * C407) * C61 +
           (C54 * C449 - C110 * C411) * C53) *
              C55 * C405) *
         C1351 * C1339) /
            (p * q * std::sqrt(p + q));
    d2eeyx[2] +=
        (-std::pow(Pi, 2.5) *
         (((C53 * C66 - C61 * C63) * C89 + (C53 * C134 - C61 * C131) * C55) *
              C54 * C1365 * C241 +
          ((C61 * C245 - C53 * C247) * C89 + (C61 * C303 - C53 * C305) * C55) *
              C54 * C1365 * C242 +
          ((C53 * C249 - C61 * C246) * C89 + (C53 * C306 - C61 * C304) * C55) *
              C54 * C1365 * C243) *
         C1339) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C53 * C66 - C61 * C63) * C89 + (C53 * C134 - C61 * C131) * C55) *
              C54 * C1365 * C1351 * C58 +
          ((C61 * C64 - C53 * C68) * C89 + (C61 * C132 - C53 * C135) * C55) *
              C54 * C1365 * C1351 * C59 +
          ((C53 * C70 - C61 * C65) * C89 + (C53 * C136 - C61 * C133) * C55) *
              C54 * C1365 * C1351 * C60)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C53 * C66 - C61 * C63) * C89 + (C53 * C134 - C61 * C131) * C55) *
              C54 * C403 +
          ((C61 * C406 - C53 * C408) * C89 + (C61 * C464 - C53 * C466) * C55) *
              C54 * C404 +
          ((C53 * C410 - C61 * C407) * C89 + (C53 * C467 - C61 * C465) * C55) *
              C54 * C405) *
         C1351 * C1339) /
            (p * q * std::sqrt(p + q));
    d2eeyy[2] += (-std::pow(Pi, 2.5) *
                  ((C89 * C90 - C151 * C63 - C89 * C131 + C55 * C152) * C53 *
                       C54 * C1365 * C241 -
                   (C89 * C267 - C151 * C245 - C89 * C303 + C55 * C321) * C53 *
                       C54 * C1365 * C242 +
                   (C89 * C268 - C151 * C246 - C89 * C304 + C55 * C322) * C53 *
                       C54 * C1365 * C243) *
                  C1339) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  ((C89 * C90 - C151 * C63 - C89 * C131 + C55 * C152) * C53 *
                       C54 * C1365 * C1351 * C58 -
                   (C89 * C91 - C151 * C64 - C89 * C132 + C55 * C153) * C53 *
                       C54 * C1365 * C1351 * C59 +
                   (C89 * C92 - C151 * C65 - C89 * C133 + C55 * C154) * C53 *
                       C54 * C1365 * C1351 * C60)) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((C89 * C90 - C151 * C63 - C89 * C131 + C55 * C152) * C53 *
                       C54 * C403 -
                   (C89 * C428 - C151 * C406 - C89 * C464 + C55 * C482) * C53 *
                       C54 * C404 +
                   (C89 * C429 - C151 * C407 - C89 * C465 + C55 * C483) * C53 *
                       C54 * C405) *
                  C1351 * C1339) /
                     (p * q * std::sqrt(p + q));
    d2eeyz[2] +=
        (-std::pow(Pi, 2.5) *
         (((C54 * C111 - C110 * C63) * C89 + (C54 * C169 - C110 * C131) * C55) *
              C53 * C1365 * C241 +
          ((C110 * C245 - C54 * C285) * C89 +
           (C110 * C303 - C54 * C337) * C55) *
              C53 * C1365 * C242 +
          ((C54 * C286 - C110 * C246) * C89 +
           (C54 * C338 - C110 * C304) * C55) *
              C53 * C1365 * C243) *
         C1339) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C54 * C111 - C110 * C63) * C89 + (C54 * C169 - C110 * C131) * C55) *
              C53 * C1365 * C1351 * C58 +
          ((C110 * C64 - C54 * C112) * C89 + (C110 * C132 - C54 * C170) * C55) *
              C53 * C1365 * C1351 * C59 +
          ((C54 * C113 - C110 * C65) * C89 + (C54 * C171 - C110 * C133) * C55) *
              C53 * C1365 * C1351 * C60)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C54 * C111 - C110 * C63) * C89 + (C54 * C169 - C110 * C131) * C55) *
              C53 * C403 +
          ((C110 * C406 - C54 * C446) * C89 +
           (C110 * C464 - C54 * C498) * C55) *
              C53 * C404 +
          ((C54 * C447 - C110 * C407) * C89 +
           (C54 * C499 - C110 * C465) * C55) *
              C53 * C405) *
         C1351 * C1339) /
            (p * q * std::sqrt(p + q));
    d2eezx[2] +=
        (-std::pow(Pi, 2.5) *
         (((C53 * C66 - C61 * C63) * C110 + (C53 * C189 - C61 * C186) * C54) *
              C55 * C1365 * C241 +
          ((C61 * C245 - C53 * C247) * C110 + (C61 * C353 - C53 * C355) * C54) *
              C55 * C1365 * C242 +
          ((C53 * C249 - C61 * C246) * C110 + (C53 * C356 - C61 * C354) * C54) *
              C55 * C1365 * C243) *
         C1339) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C53 * C66 - C61 * C63) * C110 + (C53 * C189 - C61 * C186) * C54) *
              C55 * C1365 * C1351 * C58 +
          ((C61 * C64 - C53 * C68) * C110 + (C61 * C187 - C53 * C190) * C54) *
              C55 * C1365 * C1351 * C59 +
          ((C53 * C70 - C61 * C65) * C110 + (C53 * C191 - C61 * C188) * C54) *
              C55 * C1365 * C1351 * C60)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C53 * C66 - C61 * C63) * C110 + (C53 * C189 - C61 * C186) * C54) *
              C55 * C403 +
          ((C61 * C406 - C53 * C408) * C110 + (C61 * C514 - C53 * C516) * C54) *
              C55 * C404 +
          ((C53 * C410 - C61 * C407) * C110 + (C53 * C517 - C61 * C515) * C54) *
              C55 * C405) *
         C1351 * C1339) /
            (p * q * std::sqrt(p + q));
    d2eezy[2] +=
        (-std::pow(Pi, 2.5) *
         (((C55 * C90 - C89 * C63) * C110 + (C55 * C206 - C89 * C186) * C54) *
              C53 * C1365 * C241 +
          ((C89 * C245 - C55 * C267) * C110 + (C89 * C353 - C55 * C371) * C54) *
              C53 * C1365 * C242 +
          ((C55 * C268 - C89 * C246) * C110 + (C55 * C372 - C89 * C354) * C54) *
              C53 * C1365 * C243) *
         C1339) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C55 * C90 - C89 * C63) * C110 + (C55 * C206 - C89 * C186) * C54) *
              C53 * C1365 * C1351 * C58 +
          ((C89 * C64 - C55 * C91) * C110 + (C89 * C187 - C55 * C207) * C54) *
              C53 * C1365 * C1351 * C59 +
          ((C55 * C92 - C89 * C65) * C110 + (C55 * C208 - C89 * C188) * C54) *
              C53 * C1365 * C1351 * C60)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C55 * C90 - C89 * C63) * C110 + (C55 * C206 - C89 * C186) * C54) *
              C53 * C403 +
          ((C89 * C406 - C55 * C428) * C110 + (C89 * C514 - C55 * C532) * C54) *
              C53 * C404 +
          ((C55 * C429 - C89 * C407) * C110 + (C55 * C533 - C89 * C515) * C54) *
              C53 * C405) *
         C1351 * C1339) /
            (p * q * std::sqrt(p + q));
    d2eezz[2] += (-std::pow(Pi, 2.5) *
                  ((C110 * C111 - C223 * C63 - C110 * C186 + C54 * C224) * C55 *
                       C53 * C1365 * C241 -
                   (C110 * C285 - C223 * C245 - C110 * C353 + C54 * C387) *
                       C55 * C53 * C1365 * C242 +
                   (C110 * C286 - C223 * C246 - C110 * C354 + C54 * C388) *
                       C55 * C53 * C1365 * C243) *
                  C1339) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  ((C110 * C111 - C223 * C63 - C110 * C186 + C54 * C224) * C55 *
                       C53 * C1365 * C1351 * C58 -
                   (C110 * C112 - C223 * C64 - C110 * C187 + C54 * C225) * C55 *
                       C53 * C1365 * C1351 * C59 +
                   (C110 * C113 - C223 * C65 - C110 * C188 + C54 * C226) * C55 *
                       C53 * C1365 * C1351 * C60)) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((C110 * C111 - C223 * C63 - C110 * C186 + C54 * C224) * C55 *
                       C53 * C403 -
                   (C110 * C446 - C223 * C406 - C110 * C514 + C54 * C548) *
                       C55 * C53 * C404 +
                   (C110 * C447 - C223 * C407 - C110 * C515 + C54 * C549) *
                       C55 * C53 * C405) *
                  C1351 * C1339) /
                     (p * q * std::sqrt(p + q));
    d2eexx[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C61 * C66 - C62 * C63 - C61 * C67 + C53 * C72) * C54 * C55 * C750 -
           (C61 * C408 - C62 * C406 - C61 * C409 + C53 * C412) * C54 * C55 *
               C751) *
              C1351 * C570 +
          ((C61 * C753 - C62 * C752 - C61 * C754 + C53 * C755) * C54 * C55 *
               C751 -
           (C61 * C68 - C62 * C64 - C61 * C69 + C53 * C73) * C54 * C55 * C750) *
              C1351 * C571)) /
        (p * q * std::sqrt(p + q));
    d2eexy[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C55 * C90 - C89 * C63) * C61 + (C55 * C93 - C89 * C67) * C53) *
               C54 * C750 +
           ((C89 * C406 - C55 * C428) * C61 + (C89 * C409 - C55 * C430) * C53) *
               C54 * C751) *
              C1351 * C570 +
          (((C89 * C64 - C55 * C91) * C61 + (C89 * C69 - C55 * C94) * C53) *
               C54 * C750 +
           ((C55 * C774 - C89 * C752) * C61 + (C55 * C775 - C89 * C754) * C53) *
               C54 * C751) *
              C1351 * C571)) /
        (p * q * std::sqrt(p + q));
    d2eexz[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C54 * C111 - C110 * C63) * C61 + (C54 * C114 - C110 * C67) * C53) *
               C55 * C750 +
           ((C110 * C406 - C54 * C446) * C61 +
            (C110 * C409 - C54 * C448) * C53) *
               C55 * C751) *
              C1351 * C570 +
          (((C110 * C64 - C54 * C112) * C61 + (C110 * C69 - C54 * C115) * C53) *
               C55 * C750 +
           ((C54 * C794 - C110 * C752) * C61 +
            (C54 * C795 - C110 * C754) * C53) *
               C55 * C751) *
              C1351 * C571)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C53 * C66 - C61 * C63) * C89 + (C53 * C134 - C61 * C131) * C55) *
               C54 * C750 +
           ((C61 * C406 - C53 * C408) * C89 + (C61 * C464 - C53 * C466) * C55) *
               C54 * C751) *
              C1351 * C570 +
          (((C61 * C64 - C53 * C68) * C89 + (C61 * C132 - C53 * C135) * C55) *
               C54 * C750 +
           ((C53 * C753 - C61 * C752) * C89 + (C53 * C815 - C61 * C814) * C55) *
               C54 * C751) *
              C1351 * C571)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C89 * C90 - C151 * C63 - C89 * C131 + C55 * C152) * C53 *
                        C54 * C750 -
                    (C89 * C428 - C151 * C406 - C89 * C464 + C55 * C482) * C53 *
                        C54 * C751) *
                       C1351 * C570 +
                   ((C89 * C774 - C151 * C752 - C89 * C814 + C55 * C834) * C53 *
                        C54 * C751 -
                    (C89 * C91 - C151 * C64 - C89 * C132 + C55 * C153) * C53 *
                        C54 * C750) *
                       C1351 * C571)) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C54 * C111 - C110 * C63) * C89 +
                     (C54 * C169 - C110 * C131) * C55) *
                        C53 * C750 +
                    ((C110 * C406 - C54 * C446) * C89 +
                     (C110 * C464 - C54 * C498) * C55) *
                        C53 * C751) *
                       C1351 * C570 +
                   (((C110 * C64 - C54 * C112) * C89 +
                     (C110 * C132 - C54 * C170) * C55) *
                        C53 * C750 +
                    ((C54 * C794 - C110 * C752) * C89 +
                     (C54 * C853 - C110 * C814) * C55) *
                        C53 * C751) *
                       C1351 * C571)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C53 * C66 - C61 * C63) * C110 + (C53 * C189 - C61 * C186) * C54) *
               C55 * C750 +
           ((C61 * C406 - C53 * C408) * C110 +
            (C61 * C514 - C53 * C516) * C54) *
               C55 * C751) *
              C1351 * C570 +
          (((C61 * C64 - C53 * C68) * C110 + (C61 * C187 - C53 * C190) * C54) *
               C55 * C750 +
           ((C53 * C753 - C61 * C752) * C110 +
            (C53 * C873 - C61 * C872) * C54) *
               C55 * C751) *
              C1351 * C571)) /
        (p * q * std::sqrt(p + q));
    d2eezy[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C55 * C90 - C89 * C63) * C110 + (C55 * C206 - C89 * C186) * C54) *
               C53 * C750 +
           ((C89 * C406 - C55 * C428) * C110 +
            (C89 * C514 - C55 * C532) * C54) *
               C53 * C751) *
              C1351 * C570 +
          (((C89 * C64 - C55 * C91) * C110 + (C89 * C187 - C55 * C207) * C54) *
               C53 * C750 +
           ((C55 * C774 - C89 * C752) * C110 +
            (C55 * C892 - C89 * C872) * C54) *
               C53 * C751) *
              C1351 * C571)) /
        (p * q * std::sqrt(p + q));
    d2eezz[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C110 * C111 - C223 * C63 - C110 * C186 + C54 * C224) *
                        C55 * C53 * C750 -
                    (C110 * C446 - C223 * C406 - C110 * C514 + C54 * C548) *
                        C55 * C53 * C751) *
                       C1351 * C570 +
                   ((C110 * C794 - C223 * C752 - C110 * C872 + C54 * C911) *
                        C55 * C53 * C751 -
                    (C110 * C112 - C223 * C64 - C110 * C187 + C54 * C225) *
                        C55 * C53 * C750) *
                       C1351 * C571)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((C61 * C66 - C62 * C63 - C61 * C67 + C53 * C72) * C54 * C55 *
                       C1365 * C1351 * C58 -
                   (C61 * C68 - C62 * C64 - C61 * C69 + C53 * C73) * C54 * C55 *
                       C1365 * C1351 * C59 +
                   (C61 * C70 - C62 * C65 - C61 * C71 + C53 * C74) * C54 * C55 *
                       C1365 * C1351 * C60)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((C61 * C66 - C62 * C63 - C61 * C67 + C53 * C72) * C54 * C55 *
                       C1365 * C241 -
                   (C61 * C247 - C62 * C245 - C61 * C248 + C53 * C251) * C54 *
                       C55 * C1365 * C242 +
                   (C61 * C249 - C62 * C246 - C61 * C250 + C53 * C252) * C54 *
                       C55 * C1365 * C243) *
                  C1339) /
                     (p * q * std::sqrt(p + q));
    d2eexy[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C55 * C90 - C89 * C63) * C61 + (C55 * C93 - C89 * C67) * C53) *
              C54 * C1365 * C1351 * C58 +
          ((C89 * C64 - C55 * C91) * C61 + (C89 * C69 - C55 * C94) * C53) *
              C54 * C1365 * C1351 * C59 +
          ((C55 * C92 - C89 * C65) * C61 + (C55 * C95 - C89 * C71) * C53) *
              C54 * C1365 * C1351 * C60)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C55 * C90 - C89 * C63) * C61 + (C55 * C93 - C89 * C67) * C53) *
              C54 * C1365 * C241 +
          ((C89 * C245 - C55 * C267) * C61 + (C89 * C248 - C55 * C269) * C53) *
              C54 * C1365 * C242 +
          ((C55 * C268 - C89 * C246) * C61 + (C55 * C270 - C89 * C250) * C53) *
              C54 * C1365 * C243) *
         C1339) /
            (p * q * std::sqrt(p + q));
    d2eexz[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C54 * C111 - C110 * C63) * C61 + (C54 * C114 - C110 * C67) * C53) *
              C55 * C1365 * C1351 * C58 +
          ((C110 * C64 - C54 * C112) * C61 + (C110 * C69 - C54 * C115) * C53) *
              C55 * C1365 * C1351 * C59 +
          ((C54 * C113 - C110 * C65) * C61 + (C54 * C116 - C110 * C71) * C53) *
              C55 * C1365 * C1351 * C60)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C54 * C111 - C110 * C63) * C61 + (C54 * C114 - C110 * C67) * C53) *
              C55 * C1365 * C241 +
          ((C110 * C245 - C54 * C285) * C61 +
           (C110 * C248 - C54 * C287) * C53) *
              C55 * C1365 * C242 +
          ((C54 * C286 - C110 * C246) * C61 +
           (C54 * C288 - C110 * C250) * C53) *
              C55 * C1365 * C243) *
         C1339) /
            (p * q * std::sqrt(p + q));
    d2eeyx[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C53 * C66 - C61 * C63) * C89 + (C53 * C134 - C61 * C131) * C55) *
              C54 * C1365 * C1351 * C58 +
          ((C61 * C64 - C53 * C68) * C89 + (C61 * C132 - C53 * C135) * C55) *
              C54 * C1365 * C1351 * C59 +
          ((C53 * C70 - C61 * C65) * C89 + (C53 * C136 - C61 * C133) * C55) *
              C54 * C1365 * C1351 * C60)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C53 * C66 - C61 * C63) * C89 + (C53 * C134 - C61 * C131) * C55) *
              C54 * C1365 * C241 +
          ((C61 * C245 - C53 * C247) * C89 + (C61 * C303 - C53 * C305) * C55) *
              C54 * C1365 * C242 +
          ((C53 * C249 - C61 * C246) * C89 + (C53 * C306 - C61 * C304) * C55) *
              C54 * C1365 * C243) *
         C1339) /
            (p * q * std::sqrt(p + q));
    d2eeyy[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((C89 * C90 - C151 * C63 - C89 * C131 + C55 * C152) * C53 *
                       C54 * C1365 * C1351 * C58 -
                   (C89 * C91 - C151 * C64 - C89 * C132 + C55 * C153) * C53 *
                       C54 * C1365 * C1351 * C59 +
                   (C89 * C92 - C151 * C65 - C89 * C133 + C55 * C154) * C53 *
                       C54 * C1365 * C1351 * C60)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((C89 * C90 - C151 * C63 - C89 * C131 + C55 * C152) * C53 *
                       C54 * C1365 * C241 -
                   (C89 * C267 - C151 * C245 - C89 * C303 + C55 * C321) * C53 *
                       C54 * C1365 * C242 +
                   (C89 * C268 - C151 * C246 - C89 * C304 + C55 * C322) * C53 *
                       C54 * C1365 * C243) *
                  C1339) /
                     (p * q * std::sqrt(p + q));
    d2eeyz[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C54 * C111 - C110 * C63) * C89 + (C54 * C169 - C110 * C131) * C55) *
              C53 * C1365 * C1351 * C58 +
          ((C110 * C64 - C54 * C112) * C89 + (C110 * C132 - C54 * C170) * C55) *
              C53 * C1365 * C1351 * C59 +
          ((C54 * C113 - C110 * C65) * C89 + (C54 * C171 - C110 * C133) * C55) *
              C53 * C1365 * C1351 * C60)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C54 * C111 - C110 * C63) * C89 + (C54 * C169 - C110 * C131) * C55) *
              C53 * C1365 * C241 +
          ((C110 * C245 - C54 * C285) * C89 +
           (C110 * C303 - C54 * C337) * C55) *
              C53 * C1365 * C242 +
          ((C54 * C286 - C110 * C246) * C89 +
           (C54 * C338 - C110 * C304) * C55) *
              C53 * C1365 * C243) *
         C1339) /
            (p * q * std::sqrt(p + q));
    d2eezx[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C53 * C66 - C61 * C63) * C110 + (C53 * C189 - C61 * C186) * C54) *
              C55 * C1365 * C1351 * C58 +
          ((C61 * C64 - C53 * C68) * C110 + (C61 * C187 - C53 * C190) * C54) *
              C55 * C1365 * C1351 * C59 +
          ((C53 * C70 - C61 * C65) * C110 + (C53 * C191 - C61 * C188) * C54) *
              C55 * C1365 * C1351 * C60)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C53 * C66 - C61 * C63) * C110 + (C53 * C189 - C61 * C186) * C54) *
              C55 * C1365 * C241 +
          ((C61 * C245 - C53 * C247) * C110 + (C61 * C353 - C53 * C355) * C54) *
              C55 * C1365 * C242 +
          ((C53 * C249 - C61 * C246) * C110 + (C53 * C356 - C61 * C354) * C54) *
              C55 * C1365 * C243) *
         C1339) /
            (p * q * std::sqrt(p + q));
    d2eezy[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C55 * C90 - C89 * C63) * C110 + (C55 * C206 - C89 * C186) * C54) *
              C53 * C1365 * C1351 * C58 +
          ((C89 * C64 - C55 * C91) * C110 + (C89 * C187 - C55 * C207) * C54) *
              C53 * C1365 * C1351 * C59 +
          ((C55 * C92 - C89 * C65) * C110 + (C55 * C208 - C89 * C188) * C54) *
              C53 * C1365 * C1351 * C60)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C55 * C90 - C89 * C63) * C110 + (C55 * C206 - C89 * C186) * C54) *
              C53 * C1365 * C241 +
          ((C89 * C245 - C55 * C267) * C110 + (C89 * C353 - C55 * C371) * C54) *
              C53 * C1365 * C242 +
          ((C55 * C268 - C89 * C246) * C110 + (C55 * C372 - C89 * C354) * C54) *
              C53 * C1365 * C243) *
         C1339) /
            (p * q * std::sqrt(p + q));
    d2eezz[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((C110 * C111 - C223 * C63 - C110 * C186 + C54 * C224) * C55 *
                       C53 * C1365 * C1351 * C58 -
                   (C110 * C112 - C223 * C64 - C110 * C187 + C54 * C225) * C55 *
                       C53 * C1365 * C1351 * C59 +
                   (C110 * C113 - C223 * C65 - C110 * C188 + C54 * C226) * C55 *
                       C53 * C1365 * C1351 * C60)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((C110 * C111 - C223 * C63 - C110 * C186 + C54 * C224) * C55 *
                       C53 * C1365 * C241 -
                   (C110 * C285 - C223 * C245 - C110 * C353 + C54 * C387) *
                       C55 * C53 * C1365 * C242 +
                   (C110 * C286 - C223 * C246 - C110 * C354 + C54 * C388) *
                       C55 * C53 * C1365 * C243) *
                  C1339) /
                     (p * q * std::sqrt(p + q));
}
