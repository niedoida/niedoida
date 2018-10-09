/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_sssd_AC.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
void second_derivative_ee_0002_13(const double ae,
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
    const double C1117 = ce * de;
    const double C1116 = ce + de;
    const double C1115 = 0 * de;
    const double C1114 = xC - xD;
    const double C1144 = 0 * de;
    const double C1143 = yC - yD;
    const double C1159 = 0 * de;
    const double C1158 = zC - zD;
    const double C1181 = p + q;
    const double C1180 = p * q;
    const double C1187 = ae + be;
    const double C1186 = xP - xQ;
    const double C1185 = bs[2];
    const double C1196 = ae * ce;
    const double C1192 = bs[3];
    const double C1205 = yP - yQ;
    const double C1215 = zP - zQ;
    const double C65 = bs[0];
    const double C1482 = ae * be;
    const double C1118 = std::pow(C1116, 2);
    const double C1484 = 2 * C1116;
    const double C1119 = C1117 * C1114;
    const double C1398 = std::pow(C1114, 2);
    const double C1483 = C1114 * ce;
    const double C1145 = C1117 * C1143;
    const double C1419 = std::pow(C1143, 2);
    const double C1485 = C1143 * ce;
    const double C1160 = C1117 * C1158;
    const double C1430 = std::pow(C1158, 2);
    const double C1486 = C1158 * ce;
    const double C1182 = 2 * C1180;
    const double C1189 = C1116 * C1187;
    const double C1197 = C1186 * ae;
    const double C1195 = std::pow(C1186, 2);
    const double C1193 = C1186 * ce;
    const double C1208 = C1186 * C1205;
    const double C1207 = C1205 * ce;
    const double C1227 = C1205 * C1186;
    const double C1226 = C1205 * ae;
    const double C1235 = std::pow(C1205, 2);
    const double C1218 = C1186 * C1215;
    const double C1217 = C1215 * ce;
    const double C1239 = C1205 * C1215;
    const double C1246 = C1215 * C1186;
    const double C1245 = C1215 * ae;
    const double C1254 = C1215 * C1205;
    const double C1260 = std::pow(C1215, 2);
    const double C53 = std::exp(-(std::pow(xA - xB, 2) * C1482) / C1187);
    const double C57 = std::exp(-(std::pow(yA - yB, 2) * C1482) / C1187);
    const double C58 = std::exp(-(std::pow(zA - zB, 2) * C1482) / C1187);
    const double C1120 = 2 * C1118;
    const double C1489 = std::pow(C1484, -2);
    const double C1487 = std::pow(C1484, -1);
    const double C1399 = C1398 * C1117;
    const double C1420 = C1419 * C1117;
    const double C1431 = C1430 * C1117;
    const double C1184 = C1182 / C1181;
    const double C74 =
        (-((std::pow(xP - xQ, 2) * bs[2] * std::pow(C1182 / C1181, 2) -
            (bs[1] * C1182) / C1181) *
           ae * ce) /
         C1116) /
        (ae + be);
    const double C66 = -(C1186 * bs[1] * C1182) / C1181;
    const double C248 = -(C1205 * bs[1] * C1182) / C1181;
    const double C412 = -(C1215 * bs[1] * C1182) / C1181;
    const double C1200 = C1192 * C1197;
    const double C68 = (-(bs[1] * C1197 * C1182) / C1181) / C1187;
    const double C1199 = C1192 * C1193;
    const double C69 = (bs[1] * C1193 * C1182) / (C1181 * C1116);
    const double C1210 = C1208 * ae;
    const double C1209 = C1192 * C1207;
    const double C92 = (bs[1] * C1207 * C1182) / (C1181 * C1116);
    const double C1229 = C1227 * ae;
    const double C1228 = C1192 * C1226;
    const double C134 = (-(bs[1] * C1226 * C1182) / C1181) / C1187;
    const double C1220 = C1218 * ae;
    const double C1219 = C1192 * C1217;
    const double C113 = (bs[1] * C1217 * C1182) / (C1181 * C1116);
    const double C1240 = C1239 * ae;
    const double C1248 = C1246 * ae;
    const double C1247 = C1192 * C1245;
    const double C189 = (-(bs[1] * C1245 * C1182) / C1181) / C1187;
    const double C1255 = C1254 * ae;
    const double C61 = -(2 * ae * be * (xA - xB) * C53) / (ae + be);
    const double C133 = -(2 * ae * be * (yA - yB) * C57) / (ae + be);
    const double C188 = -(2 * ae * be * (zA - zB) * C58) / (ae + be);
    const double C1400 = C1399 / C1116;
    const double C1421 = C1420 / C1116;
    const double C1432 = C1431 / C1116;
    const double C1188 = std::pow(C1184, 2);
    const double C1191 = -C1184;
    const double C1212 = C1210 * ce;
    const double C1231 = C1229 * ce;
    const double C1222 = C1220 * ce;
    const double C1241 = C1240 * ce;
    const double C1250 = C1248 * ce;
    const double C1256 = C1255 * ce;
    const double C1401 = -C1400;
    const double C1422 = -C1421;
    const double C1433 = -C1432;
    const double C1194 = C1185 * C1188;
    const double C75 =
        (-(C1188 * C1185 * C1186 * ae * ce) / C1116) / C1187 -
        (ae * C1188 * C1185 * C1186 * ce) / C1189 -
        (C1186 *
         (C1185 * C1188 + std::pow(C1186, 2) * bs[3] * std::pow(-C1184, 3)) *
         ae * ce) /
            C1189;
    const double C95 =
        (-(C1188 * C1185 * C1186 * (yP - yQ) * ae * ce) / C1116) / C1187;
    const double C116 =
        (-(C1188 * C1185 * C1186 * (zP - zQ) * ae * ce) / C1116) / C1187;
    const double C137 =
        (-(C1188 * C1185 * C1205 * C1186 * ae * ce) / C1116) / C1187;
    const double C154 =
        (-((std::pow(C1205, 2) * C1185 * C1188 - (bs[1] * C1182) / C1181) *
           C1196) /
         C1116) /
        C1187;
    const double C171 =
        (-(C1188 * C1185 * C1205 * C1215 * ae * ce) / C1116) / C1187;
    const double C192 =
        (-(C1188 * C1185 * C1215 * C1186 * ae * ce) / C1116) / C1187;
    const double C209 =
        (-(C1188 * C1185 * C1215 * C1205 * ae * ce) / C1116) / C1187;
    const double C226 =
        (-((std::pow(C1215, 2) * C1185 * C1188 - (bs[1] * C1182) / C1181) *
           C1196) /
         C1116) /
        C1187;
    const double C70 = (C1186 * C1188 * C1185 * C1197) / C1187 -
                       (ae * bs[1] * C1182) / (C1181 * C1187);
    const double C71 = (ce * bs[1] * C1182) / (C1181 * C1116) -
                       (C1186 * C1188 * C1185 * C1193) / C1116;
    const double C93 = -(C1186 * C1188 * C1185 * C1207) / C1116;
    const double C114 = -(C1186 * C1188 * C1185 * C1217) / C1116;
    const double C135 = (C1186 * C1188 * C1185 * C1226) / C1187;
    const double C190 = (C1186 * C1188 * C1185 * C1245) / C1187;
    const double C250 = -(C1205 * C1188 * C1185 * C1193) / C1116;
    const double C251 = (C1205 * C1188 * C1185 * C1197) / C1187;
    const double C273 = (ce * bs[1] * C1182) / (C1181 * C1116) -
                        (C1205 * C1188 * C1185 * C1207) / C1116;
    const double C291 = -(C1205 * C1188 * C1185 * C1217) / C1116;
    const double C309 = (C1205 * C1188 * C1185 * C1226) / C1187 -
                        (ae * bs[1] * C1182) / (C1181 * C1187);
    const double C359 = (C1205 * C1188 * C1185 * C1245) / C1187;
    const double C414 = -(C1215 * C1188 * C1185 * C1193) / C1116;
    const double C415 = (C1215 * C1188 * C1185 * C1197) / C1187;
    const double C434 = -(C1215 * C1188 * C1185 * C1207) / C1116;
    const double C455 = (ce * bs[1] * C1182) / (C1181 * C1116) -
                        (C1215 * C1188 * C1185 * C1217) / C1116;
    const double C473 = (C1215 * C1188 * C1185 * C1226) / C1187;
    const double C523 = (C1215 * C1188 * C1185 * C1245) / C1187 -
                        (ae * bs[1] * C1182) / (C1181 * C1187);
    const double C1198 = std::pow(C1191, 3);
    const double C1402 = std::exp(C1401);
    const double C1423 = std::exp(C1422);
    const double C1434 = std::exp(C1433);
    const double C67 = C1194 * C1195 - (bs[1] * C1182) / C1181;
    const double C249 = C1194 * C1235 - (bs[1] * C1182) / C1181;
    const double C413 = C1194 * C1260 - (bs[1] * C1182) / C1181;
    const double C583 = C1205 * C1186 * C1194;
    const double C765 = C1215 * C1186 * C1194;
    const double C945 = C1215 * C1205 * C1194;
    const double C1202 = C1198 * C1200;
    const double C1201 = C1198 * C1199;
    const double C1211 = C1198 * C1209;
    const double C1221 = C1198 * C1219;
    const double C1230 = C1198 * C1228;
    const double C1249 = C1198 * C1247;
    const double C96 =
        (-(C1186 * C1198 * C1192 * C1186 * C1205 * ae * ce) / C1116) / C1187 -
        (ae * C1188 * C1185 * C1205 * ce) / C1189;
    const double C117 =
        (-(C1186 * C1198 * C1192 * C1186 * C1215 * ae * ce) / C1116) / C1187 -
        (ae * C1188 * C1185 * C1215 * ce) / C1189;
    const double C138 =
        (-(C1186 * C1198 * C1192 * C1205 * C1186 * ae * ce) / C1116) / C1187 -
        (C1188 * C1185 * C1205 * ae * ce) / C1189;
    const double C155 =
        (-(C1186 * (C1194 + std::pow(C1205, 2) * C1192 * C1198) * C1196) /
         C1116) /
        C1187;
    const double C156 =
        (-((C1192 * C1198 + C1235 * bs[4] * std::pow(C1184, 4)) * C1196 *
           C1195) /
         C1116) /
            C1187 -
        ((C1194 + C1235 * C1192 * C1198) * C1196) / C1189;
    const double C172 =
        (-(C1186 * C1198 * C1192 * C1205 * C1215 * ae * ce) / C1116) / C1187;
    const double C173 =
        (-(std::pow(C1184, 4) * bs[4] * C1241 * C1195) / C1116) / C1187 -
        (C1198 * C1192 * C1241) / C1189;
    const double C193 =
        (-(C1186 * C1198 * C1192 * C1215 * C1186 * ae * ce) / C1116) / C1187 -
        (C1188 * C1185 * C1215 * ae * ce) / C1189;
    const double C210 =
        (-(C1186 * C1198 * C1192 * C1215 * C1205 * ae * ce) / C1116) / C1187;
    const double C211 =
        (-(std::pow(C1184, 4) * bs[4] * C1256 * C1195) / C1116) / C1187 -
        (C1198 * C1192 * C1256) / C1189;
    const double C227 =
        (-(C1186 * (C1194 + std::pow(C1215, 2) * C1192 * C1198) * C1196) /
         C1116) /
        C1187;
    const double C228 =
        (-((C1192 * C1198 + C1260 * bs[4] * std::pow(C1184, 4)) * C1196 *
           C1195) /
         C1116) /
            C1187 -
        ((C1194 + C1260 * C1192 * C1198) * C1196) / C1189;
    const double C254 =
        (-(C1205 * (C1194 + C1195 * C1192 * C1198) * C1196) / C1116) / C1187;
    const double C255 =
        (-((C1192 * C1198 + C1195 * bs[4] * std::pow(C1184, 4)) * C1196 *
           C1235) /
         C1116) /
            C1187 -
        ((C1194 + C1195 * C1192 * C1198) * C1196) / C1189;
    const double C275 = (-(C1205 * C1198 * C1192 * C1212) / C1116) / C1187 -
                        (C1188 * C1185 * C1197 * ce) / C1189;
    const double C293 = (-(C1205 * C1198 * C1192 * C1222) / C1116) / C1187;
    const double C294 =
        (-(std::pow(C1184, 4) * bs[4] * C1222 * C1235) / C1116) / C1187 -
        (C1198 * C1192 * C1222) / C1189;
    const double C311 = (-(C1205 * C1198 * C1192 * C1231) / C1116) / C1187 -
                        (ae * C1188 * C1185 * C1193) / C1189;
    const double C327 =
        (-(C1188 * C1185 * C1226 * ce) / C1116) / C1187 -
        (ae * C1188 * C1185 * C1207) / C1189 -
        (C1205 * (C1194 + C1235 * C1192 * C1198) * C1196) / C1189;
    const double C343 = (-(C1205 * C1198 * C1192 * C1241) / C1116) / C1187 -
                        (ae * C1188 * C1185 * C1217) / C1189;
    const double C361 = (-(C1205 * C1198 * C1192 * C1250) / C1116) / C1187;
    const double C362 =
        (-(std::pow(C1184, 4) * bs[4] * C1250 * C1235) / C1116) / C1187 -
        (C1198 * C1192 * C1250) / C1189;
    const double C377 = (-(C1205 * C1198 * C1192 * C1256) / C1116) / C1187 -
                        (C1188 * C1185 * C1245 * ce) / C1189;
    const double C393 =
        (-(C1205 * (C1194 + C1260 * C1192 * C1198) * C1196) / C1116) / C1187;
    const double C394 =
        (-((C1192 * C1198 + C1260 * bs[4] * std::pow(C1184, 4)) * C1196 *
           C1235) /
         C1116) /
            C1187 -
        ((C1194 + C1260 * C1192 * C1198) * C1196) / C1189;
    const double C418 =
        (-(C1215 * (C1194 + C1195 * C1192 * C1198) * C1196) / C1116) / C1187;
    const double C419 =
        (-((C1192 * C1198 + C1195 * bs[4] * std::pow(C1184, 4)) * C1196 *
           C1260) /
         C1116) /
            C1187 -
        ((C1194 + C1195 * C1192 * C1198) * C1196) / C1189;
    const double C436 = (-(C1215 * C1198 * C1192 * C1212) / C1116) / C1187;
    const double C437 =
        (-(std::pow(C1184, 4) * bs[4] * C1212 * C1260) / C1116) / C1187 -
        (C1198 * C1192 * C1212) / C1189;
    const double C457 = (-(C1215 * C1198 * C1192 * C1222) / C1116) / C1187 -
                        (C1188 * C1185 * C1197 * ce) / C1189;
    const double C475 = (-(C1215 * C1198 * C1192 * C1231) / C1116) / C1187;
    const double C476 =
        (-(std::pow(C1184, 4) * bs[4] * C1231 * C1260) / C1116) / C1187 -
        (C1198 * C1192 * C1231) / C1189;
    const double C491 =
        (-(C1215 * (C1194 + C1235 * C1192 * C1198) * C1196) / C1116) / C1187;
    const double C492 =
        (-((C1192 * C1198 + C1235 * bs[4] * std::pow(C1184, 4)) * C1196 *
           C1260) /
         C1116) /
            C1187 -
        ((C1194 + C1235 * C1192 * C1198) * C1196) / C1189;
    const double C507 = (-(C1215 * C1198 * C1192 * C1241) / C1116) / C1187 -
                        (C1188 * C1185 * C1226 * ce) / C1189;
    const double C525 = (-(C1215 * C1198 * C1192 * C1250) / C1116) / C1187 -
                        (ae * C1188 * C1185 * C1193) / C1189;
    const double C541 = (-(C1215 * C1198 * C1192 * C1256) / C1116) / C1187 -
                        (ae * C1188 * C1185 * C1207) / C1189;
    const double C557 =
        (-(C1188 * C1185 * C1245 * ce) / C1116) / C1187 -
        (ae * C1188 * C1185 * C1217) / C1189 -
        (C1215 * (C1194 + C1260 * C1192 * C1198) * C1196) / C1189;
    const double C744 =
        (-(C1205 * C1186 *
           (C1192 * C1198 + C1260 * bs[4] * std::pow(C1184, 4)) * C1196) /
         C1116) /
        C1187;
    const double C849 =
        (-(C1215 * C1186 *
           (C1192 * C1198 + C1235 * bs[4] * std::pow(C1184, 4)) * C1196) /
         C1116) /
        C1187;
    const double C948 =
        (-(C1215 * C1205 *
           (C1192 * C1198 + C1195 * bs[4] * std::pow(C1184, 4)) * C1196) /
         C1116) /
        C1187;
    const double C1121 = C1119 * C1402;
    const double C1488 = C1402 * C1483;
    const double C54 = (C1402 * std::pow(C1483, 2)) / C1118 + C1402 / C1484;
    const double C56 = C1489 * C1402;
    const double C578 = C1487 * C1402;
    const double C1146 = C1145 * C1423;
    const double C91 = -(2 * C1117 * (yC - yD) * C1423) / C1116;
    const double C1490 = C1423 * C1485;
    const double C244 = (C1423 * std::pow(C1485, 2)) / C1118 + C1423 / C1484;
    const double C246 = C1489 * C1423;
    const double C580 = C1487 * C1423;
    const double C1161 = C1160 * C1434;
    const double C112 = -(2 * C1117 * (zC - zD) * C1434) / C1116;
    const double C1491 = C1434 * C1486;
    const double C409 = (C1434 * std::pow(C1486, 2)) / C1118 + C1434 / C1484;
    const double C411 = C1489 * C1434;
    const double C764 = C1487 * C1434;
    const double C276 =
        (-(C1205 * C1202 * ce) / C1116) / C1187 -
        (C1198 * C1192 * C1212) / C1189 +
        C1205 *
            ((-(C1205 * std::pow(C1184, 4) * bs[4] * C1212) / C1116) / C1187 -
             (C1202 * ce) / C1189);
    const double C458 =
        (-(C1215 * C1202 * ce) / C1116) / C1187 -
        (C1198 * C1192 * C1222) / C1189 +
        C1215 *
            ((-(C1215 * std::pow(C1184, 4) * bs[4] * C1222) / C1116) / C1187 -
             (C1202 * ce) / C1189);
    const double C968 =
        C1215 *
        ((-(C1205 * std::pow(C1184, 4) * bs[4] * C1212) / C1116) / C1187 -
         (C1202 * ce) / C1189);
    const double C988 =
        (-(C1215 * C1205 * std::pow(C1184, 4) * bs[4] * C1222) / C1116) /
            C1187 -
        (C1205 * C1202 * ce) / C1189;
    const double C72 =
        (C1188 * C1185 * C1197 + C1186 * (C1186 * C1202 + C1194 * ae) +
         C1186 * C1194 * ae) /
        C1187;
    const double C252 = (C1188 * C1185 * C1197 + C1202 * C1235) / C1187;
    const double C416 = (C1188 * C1185 * C1197 + C1202 * C1260) / C1187;
    const double C584 = (C1205 * (C1186 * C1202 + C1194 * ae)) / C1187;
    const double C766 = (C1215 * (C1186 * C1202 + C1194 * ae)) / C1187;
    const double C946 = (C1215 * C1205 * C1202) / C1187;
    const double C76 =
        (-(ae * (C1186 * C1201 + C1194 * ce)) / C1116) / C1187 -
        ((C1194 + C1195 * C1192 * C1198) * C1196) / C1189 -
        ((C1186 * C1202 + C1194 * ae) * ce) / C1189 +
        C1186 * ((-(C1202 * ce) / C1116) / C1187 - (ae * C1201) / C1189 -
                 (C1186 * (C1192 * C1198 + C1195 * bs[4] * std::pow(C1184, 4)) *
                  C1196) /
                     C1189);
    const double C312 =
        (-(ae * C1205 * C1201) / C1116) / C1187 -
        (C1198 * C1192 * C1231) / C1189 +
        C1205 *
            ((-(C1205 * std::pow(C1184, 4) * bs[4] * C1231) / C1116) / C1187 -
             (ae * C1201) / C1189);
    const double C526 =
        (-(ae * C1215 * C1201) / C1116) / C1187 -
        (C1198 * C1192 * C1250) / C1189 +
        C1215 *
            ((-(C1215 * std::pow(C1184, 4) * bs[4] * C1250) / C1116) / C1187 -
             (ae * C1201) / C1189);
    const double C586 =
        (-(C1205 * C1202 * ce) / C1116) / C1187 - (ae * C1205 * C1201) / C1189 -
        (C1186 * C1205 * (C1192 * C1198 + C1195 * bs[4] * std::pow(C1184, 4)) *
         C1196) /
            C1189;
    const double C768 =
        (-(C1215 * C1202 * ce) / C1116) / C1187 - (ae * C1215 * C1201) / C1189 -
        (C1186 * C1215 * (C1192 * C1198 + C1195 * bs[4] * std::pow(C1184, 4)) *
         C1196) /
            C1189;
    const double C1008 =
        (-(C1205 * C1215 * std::pow(C1184, 4) * bs[4] * C1231) / C1116) /
            C1187 -
        (ae * C1215 * C1201) / C1189;
    const double C1066 =
        (-(C1215 * C1205 * std::pow(C1184, 4) * bs[4] * C1250) / C1116) /
            C1187 -
        (ae * C1205 * C1201) / C1189;
    const double C73 = -(C1186 * (C1186 * C1201 + C1194 * ce) +
                         C1188 * C1185 * C1193 + C1186 * C1194 * ce) /
                       C1116;
    const double C253 = -(C1201 * C1235 + C1188 * C1185 * C1193) / C1116;
    const double C417 = -(C1201 * C1260 + C1188 * C1185 * C1193) / C1116;
    const double C585 = -(C1205 * (C1186 * C1201 + C1194 * ce)) / C1116;
    const double C767 = -(C1215 * (C1186 * C1201 + C1194 * ce)) / C1116;
    const double C947 = -(C1215 * C1205 * C1201) / C1116;
    const double C97 =
        (-(ae * C1186 * C1211) / C1116) / C1187 -
        (C1198 * C1192 * C1212) / C1189 +
        C1186 *
            ((-(C1186 * std::pow(C1184, 4) * bs[4] * C1212) / C1116) / C1187 -
             (ae * C1211) / C1189);
    const double C542 =
        (-(ae * C1215 * C1211) / C1116) / C1187 -
        (C1198 * C1192 * C1256) / C1189 +
        C1215 *
            ((-(C1215 * std::pow(C1184, 4) * bs[4] * C1256) / C1116) / C1187 -
             (ae * C1211) / C1189);
    const double C608 =
        C1205 *
            ((-(C1186 * std::pow(C1184, 4) * bs[4] * C1212) / C1116) / C1187 -
             (ae * C1211) / C1189) -
        ((C1186 * C1202 + C1194 * ae) * ce) / C1189;
    const double C788 =
        C1215 *
        ((-(C1186 * std::pow(C1184, 4) * bs[4] * C1212) / C1116) / C1187 -
         (ae * C1211) / C1189);
    const double C907 =
        (-(C1215 * C1186 * std::pow(C1184, 4) * bs[4] * C1256) / C1116) /
            C1187 -
        (ae * C1186 * C1211) / C1189;
    const double C94 = -(C1211 * C1195 + C1188 * C1185 * C1207) / C1116;
    const double C274 = -(C1205 * (C1205 * C1211 + C1194 * ce) +
                          C1188 * C1185 * C1207 + C1205 * C1194 * ce) /
                        C1116;
    const double C435 = -(C1211 * C1260 + C1188 * C1185 * C1207) / C1116;
    const double C607 = -(C1205 * C1186 * C1211 + C1186 * C1194 * ce) / C1116;
    const double C787 = -(C1215 * C1186 * C1211) / C1116;
    const double C967 = -(C1215 * (C1205 * C1211 + C1194 * ce)) / C1116;
    const double C118 =
        (-(ae * C1186 * C1221) / C1116) / C1187 -
        (C1198 * C1192 * C1222) / C1189 +
        C1186 *
            ((-(C1186 * std::pow(C1184, 4) * bs[4] * C1222) / C1116) / C1187 -
             (ae * C1221) / C1189);
    const double C344 =
        (-(ae * C1205 * C1221) / C1116) / C1187 -
        (C1198 * C1192 * C1241) / C1189 +
        C1205 *
            ((-(C1205 * std::pow(C1184, 4) * bs[4] * C1241) / C1116) / C1187 -
             (ae * C1221) / C1189);
    const double C628 =
        C1205 *
        ((-(C1186 * std::pow(C1184, 4) * bs[4] * C1222) / C1116) / C1187 -
         (ae * C1221) / C1189);
    const double C686 =
        (-(C1205 * C1186 * std::pow(C1184, 4) * bs[4] * C1241) / C1116) /
            C1187 -
        (ae * C1186 * C1221) / C1189;
    const double C810 =
        C1215 *
            ((-(C1186 * std::pow(C1184, 4) * bs[4] * C1222) / C1116) / C1187 -
             (ae * C1221) / C1189) -
        ((C1186 * C1202 + C1194 * ae) * ce) / C1189;
    const double C115 = -(C1221 * C1195 + C1188 * C1185 * C1217) / C1116;
    const double C292 = -(C1221 * C1235 + C1188 * C1185 * C1217) / C1116;
    const double C456 = -(C1215 * (C1215 * C1221 + C1194 * ce) +
                          C1188 * C1185 * C1217 + C1215 * C1194 * ce) /
                        C1116;
    const double C627 = -(C1205 * C1186 * C1221) / C1116;
    const double C809 = -(C1215 * C1186 * C1221 + C1186 * C1194 * ce) / C1116;
    const double C987 = -(C1215 * C1205 * C1221 + C1205 * C1194 * ce) / C1116;
    const double C139 =
        (-(C1186 * C1230 * ce) / C1116) / C1187 -
        (C1198 * C1192 * C1231) / C1189 +
        C1186 *
            ((-(C1186 * std::pow(C1184, 4) * bs[4] * C1231) / C1116) / C1187 -
             (C1230 * ce) / C1189);
    const double C328 =
        (-(ae * (C1205 * C1211 + C1194 * ce)) / C1116) / C1187 -
        ((C1194 + C1235 * C1192 * C1198) * C1196) / C1189 -
        ((C1205 * C1230 + C1194 * ae) * ce) / C1189 +
        C1205 * ((-(C1230 * ce) / C1116) / C1187 - (ae * C1211) / C1189 -
                 (C1205 * (C1192 * C1198 + C1235 * bs[4] * std::pow(C1184, 4)) *
                  C1196) /
                     C1189);
    const double C508 =
        (-(C1215 * C1230 * ce) / C1116) / C1187 -
        (C1198 * C1192 * C1241) / C1189 +
        C1215 *
            ((-(C1215 * std::pow(C1184, 4) * bs[4] * C1241) / C1116) / C1187 -
             (C1230 * ce) / C1189);
    const double C648 =
        C1205 *
            ((-(C1186 * std::pow(C1184, 4) * bs[4] * C1231) / C1116) / C1187 -
             (C1230 * ce) / C1189) -
        (ae * (C1186 * C1201 + C1194 * ce)) / C1189;
    const double C667 =
        (-(C1186 * C1230 * ce) / C1116) / C1187 - (ae * C1186 * C1211) / C1189 -
        (C1205 * C1186 * (C1192 * C1198 + C1235 * bs[4] * std::pow(C1184, 4)) *
         C1196) /
            C1189;
    const double C830 =
        C1215 *
        ((-(C1186 * std::pow(C1184, 4) * bs[4] * C1231) / C1116) / C1187 -
         (C1230 * ce) / C1189);
    const double C868 =
        (-(C1215 * C1186 * std::pow(C1184, 4) * bs[4] * C1241) / C1116) /
            C1187 -
        (C1186 * C1230 * ce) / C1189;
    const double C1027 =
        (-(C1215 * C1230 * ce) / C1116) / C1187 - (ae * C1215 * C1211) / C1189 -
        (C1205 * C1215 * (C1192 * C1198 + C1235 * bs[4] * std::pow(C1184, 4)) *
         C1196) /
            C1189;
    const double C1046 =
        C1205 *
            ((-(C1215 * std::pow(C1184, 4) * bs[4] * C1241) / C1116) / C1187 -
             (C1230 * ce) / C1189) -
        (ae * (C1215 * C1221 + C1194 * ce)) / C1189;
    const double C136 = (C1188 * C1185 * C1226 + C1230 * C1195) / C1187;
    const double C310 =
        (C1188 * C1185 * C1226 + C1205 * (C1205 * C1230 + C1194 * ae) +
         C1205 * C1194 * ae) /
        C1187;
    const double C474 = (C1188 * C1185 * C1226 + C1230 * C1260) / C1187;
    const double C647 = (C1205 * C1186 * C1230 + C1186 * C1194 * ae) / C1187;
    const double C829 = (C1215 * C1186 * C1230) / C1187;
    const double C1007 = (C1215 * (C1205 * C1230 + C1194 * ae)) / C1187;
    const double C194 =
        (-(C1186 * C1249 * ce) / C1116) / C1187 -
        (C1198 * C1192 * C1250) / C1189 +
        C1186 *
            ((-(C1186 * std::pow(C1184, 4) * bs[4] * C1250) / C1116) / C1187 -
             (C1249 * ce) / C1189);
    const double C378 =
        (-(C1205 * C1249 * ce) / C1116) / C1187 -
        (C1198 * C1192 * C1256) / C1189 +
        C1205 *
            ((-(C1205 * std::pow(C1184, 4) * bs[4] * C1256) / C1116) / C1187 -
             (C1249 * ce) / C1189);
    const double C558 =
        (-(ae * (C1215 * C1221 + C1194 * ce)) / C1116) / C1187 -
        ((C1194 + C1260 * C1192 * C1198) * C1196) / C1189 -
        ((C1215 * C1249 + C1194 * ae) * ce) / C1189 +
        C1215 * ((-(C1249 * ce) / C1116) / C1187 - (ae * C1221) / C1189 -
                 (C1215 * (C1192 * C1198 + C1260 * bs[4] * std::pow(C1184, 4)) *
                  C1196) /
                     C1189);
    const double C706 =
        C1205 *
        ((-(C1186 * std::pow(C1184, 4) * bs[4] * C1250) / C1116) / C1187 -
         (C1249 * ce) / C1189);
    const double C725 =
        (-(C1205 * C1186 * std::pow(C1184, 4) * bs[4] * C1256) / C1116) /
            C1187 -
        (C1186 * C1249 * ce) / C1189;
    const double C888 =
        C1215 *
            ((-(C1186 * std::pow(C1184, 4) * bs[4] * C1250) / C1116) / C1187 -
             (C1249 * ce) / C1189) -
        (ae * (C1186 * C1201 + C1194 * ce)) / C1189;
    const double C926 =
        (-(C1186 * C1249 * ce) / C1116) / C1187 - (ae * C1186 * C1221) / C1189 -
        (C1215 * C1186 * (C1192 * C1198 + C1260 * bs[4] * std::pow(C1184, 4)) *
         C1196) /
            C1189;
    const double C1085 =
        C1215 *
            ((-(C1205 * std::pow(C1184, 4) * bs[4] * C1256) / C1116) / C1187 -
             (C1249 * ce) / C1189) -
        (ae * (C1205 * C1211 + C1194 * ce)) / C1189;
    const double C1104 =
        (-(C1205 * C1249 * ce) / C1116) / C1187 - (ae * C1205 * C1221) / C1189 -
        (C1215 * C1205 * (C1192 * C1198 + C1260 * bs[4] * std::pow(C1184, 4)) *
         C1196) /
            C1189;
    const double C191 = (C1188 * C1185 * C1245 + C1249 * C1195) / C1187;
    const double C360 = (C1188 * C1185 * C1245 + C1249 * C1235) / C1187;
    const double C524 =
        (C1188 * C1185 * C1245 + C1215 * (C1215 * C1249 + C1194 * ae) +
         C1215 * C1194 * ae) /
        C1187;
    const double C705 = (C1205 * C1186 * C1249) / C1187;
    const double C887 = (C1215 * C1186 * C1249 + C1186 * C1194 * ae) / C1187;
    const double C1065 = (C1215 * C1205 * C1249 + C1205 * C1194 * ae) / C1187;
    const double C64 =
        ((0 * ce) / C1116 - C1121 / C1118) / (2 * C1116) + (0 * ce) / C1116;
    const double C247 = -(2 * C1121) / C1116;
    const double C581 =
        ((C1402 - (C1114 * 2 * C1121) / C1116) * ce) / C1116 - C1115 / C1120;
    const double C582 = (0 * ce) / C1116 - C1121 / C1118;
    const double C55 = (2 * C1487 * C1488) / C1116;
    const double C577 = C1488 / C1116;
    const double C63 =
        (((C1402 - (C1114 * 2 * C1121) / C1116) * ce) / C1116 - C1115 / C1120) /
            (2 * C1116) +
        ((C1114 * ((0 * ce) / C1116 - C1121 / C1118) + C578) * ce) / C1116;
    const double C272 =
        ((0 * ce) / C1116 - C1146 / C1118) / (2 * C1116) + (0 * ce) / C1116;
    const double C605 =
        ((C1423 - (C1143 * 2 * C1146) / C1116) * ce) / C1116 - C1144 / C1120;
    const double C606 = (0 * ce) / C1116 - C1146 / C1118;
    const double C245 = (2 * C1487 * C1490) / C1116;
    const double C579 = C1490 / C1116;
    const double C271 =
        (((C1423 - (C1143 * 2 * C1146) / C1116) * ce) / C1116 - C1144 / C1120) /
            (2 * C1116) +
        ((C1143 * ((0 * ce) / C1116 - C1146 / C1118) + C580) * ce) / C1116;
    const double C454 =
        ((0 * ce) / C1116 - C1161 / C1118) / (2 * C1116) + (0 * ce) / C1116;
    const double C807 =
        ((C1434 - (C1158 * 2 * C1161) / C1116) * ce) / C1116 - C1159 / C1120;
    const double C808 = (0 * ce) / C1116 - C1161 / C1118;
    const double C410 = (2 * C1487 * C1491) / C1116;
    const double C763 = C1491 / C1116;
    const double C453 =
        (((C1434 - (C1158 * 2 * C1161) / C1116) * ce) / C1116 - C1159 / C1120) /
            (2 * C1116) +
        ((C1158 * ((0 * ce) / C1116 - C1161 / C1118) + C764) * ce) / C1116;
    const double C62 =
        (((0 - (C1114 * C1115) / C1116) * ce) / C1116 - (0 * de) / C1120) /
            (2 * C1116) +
        ((C1114 * (((C1402 - (C1114 * 2 * C1121) / C1116) * ce) / C1116 -
                   C1115 / C1120) +
          C577) *
         ce) /
            C1116 +
        (0 * ce) / C1116 - C1121 / C1118;
    const double C270 =
        (((0 - (C1143 * C1144) / C1116) * ce) / C1116 - (0 * de) / C1120) /
            (2 * C1116) +
        ((C1143 * (((C1423 - (C1143 * 2 * C1146) / C1116) * ce) / C1116 -
                   C1144 / C1120) +
          C579) *
         ce) /
            C1116 +
        (0 * ce) / C1116 - C1146 / C1118;
    const double C452 =
        (((0 - (C1158 * C1159) / C1116) * ce) / C1116 - (0 * de) / C1120) /
            (2 * C1116) +
        ((C1158 * (((C1434 - (C1158 * 2 * C1161) / C1116) * ce) / C1116 -
                   C1159 / C1120) +
          C763) *
         ce) /
            C1116 +
        (0 * ce) / C1116 - C1161 / C1118;
    d2eexx[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C61 * C65 + C53 * C68) * C581 + (C61 * C69 + C53 * C74) * C577 -
           (C61 * C66 + C53 * C70) * C582 - (C61 * C71 + C53 * C75) * C578) *
              C57 * C58 * C1434 * C579 +
          ((C61 * C583 + C53 * C584) * C582 -
           ((C61 * C250 + C53 * C254) * C577 +
            (C61 * C248 + C53 * C251) * C581) +
           (C61 * C585 + C53 * C586) * C578) *
              C57 * C58 * C1434 * C580)) /
        (p * q * std::sqrt(p + q));
    d2eexy[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C61 * C65 + C53 * C68) * C605 + (C61 * C92 + C53 * C95) * C579 -
           (C61 * C248 + C53 * C251) * C606 -
           (C61 * C273 + C53 * C275) * C580) *
              C57 * C58 * C577 +
          ((C61 * C583 + C53 * C584) * C606 -
           ((C61 * C93 + C53 * C96) * C579 + (C61 * C66 + C53 * C70) * C605) +
           (C61 * C607 + C53 * C608) * C580) *
              C57 * C58 * C578) *
         C1434) /
        (p * q * std::sqrt(p + q));
    d2eexz[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C61 * C65 + C53 * C68) * C112 +
                     (C61 * C113 + C53 * C116) * C1434) *
                        C57 * C58 * C579 -
                    ((C61 * C291 + C53 * C293) * C1434 +
                     (C61 * C248 + C53 * C251) * C112) *
                        C57 * C58 * C580) *
                       C577 +
                   (((C61 * C583 + C53 * C584) * C112 +
                     (C61 * C627 + C53 * C628) * C1434) *
                        C57 * C58 * C580 -
                    ((C61 * C114 + C53 * C117) * C1434 +
                     (C61 * C66 + C53 * C70) * C112) *
                        C57 * C58 * C579) *
                       C578)) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C133 * C65 + C57 * C134) * C581 + (C133 * C69 + C57 * C137) * C577 -
           (C133 * C66 + C57 * C135) * C582 -
           (C133 * C71 + C57 * C138) * C578) *
              C58 * C53 * C1434 * C579 +
          ((C133 * C583 + C57 * C647) * C582 -
           ((C133 * C250 + C57 * C311) * C577 +
            (C133 * C248 + C57 * C309) * C581) +
           (C133 * C585 + C57 * C648) * C578) *
              C58 * C53 * C1434 * C580)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C133 * C65 + C57 * C134) * C605 + (C133 * C92 + C57 * C154) * C579 -
           (C133 * C248 + C57 * C309) * C606 -
           (C133 * C273 + C57 * C327) * C580) *
              C58 * C53 * C577 +
          ((C133 * C583 + C57 * C647) * C606 -
           ((C133 * C93 + C57 * C155) * C579 +
            (C133 * C66 + C57 * C135) * C605) +
           (C133 * C607 + C57 * C667) * C580) *
              C58 * C53 * C578) *
         C1434) /
        (p * q * std::sqrt(p + q));
    d2eeyz[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C133 * C65 + C57 * C134) * C112 +
                     (C133 * C113 + C57 * C171) * C1434) *
                        C58 * C53 * C579 -
                    ((C133 * C291 + C57 * C343) * C1434 +
                     (C133 * C248 + C57 * C309) * C112) *
                        C58 * C53 * C580) *
                       C577 +
                   (((C133 * C583 + C57 * C647) * C112 +
                     (C133 * C627 + C57 * C686) * C1434) *
                        C58 * C53 * C580 -
                    ((C133 * C114 + C57 * C172) * C1434 +
                     (C133 * C66 + C57 * C135) * C112) *
                        C58 * C53 * C579) *
                       C578)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C188 * C65 + C58 * C189) * C581 + (C188 * C69 + C58 * C192) * C577 -
           (C188 * C66 + C58 * C190) * C582 -
           (C188 * C71 + C58 * C193) * C578) *
              C53 * C57 * C1434 * C579 +
          ((C188 * C583 + C58 * C705) * C582 -
           ((C188 * C250 + C58 * C361) * C577 +
            (C188 * C248 + C58 * C359) * C581) +
           (C188 * C585 + C58 * C706) * C578) *
              C53 * C57 * C1434 * C580)) /
        (p * q * std::sqrt(p + q));
    d2eezy[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C188 * C65 + C58 * C189) * C605 + (C188 * C92 + C58 * C209) * C579 -
           (C188 * C248 + C58 * C359) * C606 -
           (C188 * C273 + C58 * C377) * C580) *
              C53 * C57 * C577 +
          ((C188 * C583 + C58 * C705) * C606 -
           ((C188 * C93 + C58 * C210) * C579 +
            (C188 * C66 + C58 * C190) * C605) +
           (C188 * C607 + C58 * C725) * C580) *
              C53 * C57 * C578) *
         C1434) /
        (p * q * std::sqrt(p + q));
    d2eezz[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C188 * C65 + C58 * C189) * C112 +
                     (C188 * C113 + C58 * C226) * C1434) *
                        C53 * C57 * C579 -
                    ((C188 * C291 + C58 * C393) * C1434 +
                     (C188 * C248 + C58 * C359) * C112) *
                        C53 * C57 * C580) *
                       C577 +
                   (((C188 * C583 + C58 * C705) * C112 +
                     (C188 * C627 + C58 * C744) * C1434) *
                        C53 * C57 * C580 -
                    ((C188 * C114 + C58 * C227) * C1434 +
                     (C188 * C66 + C58 * C190) * C112) *
                        C53 * C57 * C579) *
                       C578)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C65 + C53 * C68) * C247 + (C61 * C69 + C53 * C74) * C1402) *
               C57 * C58 * C763 -
           ((C61 * C414 + C53 * C418) * C1402 +
            (C61 * C412 + C53 * C415) * C247) *
               C57 * C58 * C764) *
              C579 +
          (((C61 * C945 + C53 * C946) * C247 +
            (C61 * C947 + C53 * C948) * C1402) *
               C57 * C58 * C764 -
           ((C61 * C250 + C53 * C254) * C1402 +
            (C61 * C248 + C53 * C251) * C247) *
               C57 * C58 * C763) *
              C580)) /
        (p * q * std::sqrt(p + q));
    d2eexy[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C61 * C65 + C53 * C68) * C605 + (C61 * C92 + C53 * C95) * C579 -
           (C61 * C248 + C53 * C251) * C606 -
           (C61 * C273 + C53 * C275) * C580) *
              C57 * C58 * C1402 * C763 +
          ((C61 * C945 + C53 * C946) * C606 -
           ((C61 * C434 + C53 * C436) * C579 +
            (C61 * C412 + C53 * C415) * C605) +
           (C61 * C967 + C53 * C968) * C580) *
              C57 * C58 * C1402 * C764)) /
        (p * q * std::sqrt(p + q));
    d2eexz[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C61 * C65 + C53 * C68) * C807 + (C61 * C113 + C53 * C116) * C763 -
           (C61 * C412 + C53 * C415) * C808 -
           (C61 * C455 + C53 * C457) * C764) *
              C57 * C58 * C579 +
          ((C61 * C945 + C53 * C946) * C808 -
           ((C61 * C291 + C53 * C293) * C763 +
            (C61 * C248 + C53 * C251) * C807) +
           (C61 * C987 + C53 * C988) * C764) *
              C57 * C58 * C580) *
         C1402) /
        (p * q * std::sqrt(p + q));
    d2eeyx[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C133 * C65 + C57 * C134) * C247 +
                     (C133 * C69 + C57 * C137) * C1402) *
                        C58 * C53 * C763 -
                    ((C133 * C414 + C57 * C475) * C1402 +
                     (C133 * C412 + C57 * C473) * C247) *
                        C58 * C53 * C764) *
                       C579 +
                   (((C133 * C945 + C57 * C1007) * C247 +
                     (C133 * C947 + C57 * C1008) * C1402) *
                        C58 * C53 * C764 -
                    ((C133 * C250 + C57 * C311) * C1402 +
                     (C133 * C248 + C57 * C309) * C247) *
                        C58 * C53 * C763) *
                       C580)) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C133 * C65 + C57 * C134) * C605 + (C133 * C92 + C57 * C154) * C579 -
           (C133 * C248 + C57 * C309) * C606 -
           (C133 * C273 + C57 * C327) * C580) *
              C58 * C53 * C1402 * C763 +
          ((C133 * C945 + C57 * C1007) * C606 -
           ((C133 * C434 + C57 * C491) * C579 +
            (C133 * C412 + C57 * C473) * C605) +
           (C133 * C967 + C57 * C1027) * C580) *
              C58 * C53 * C1402 * C764)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C133 * C65 + C57 * C134) * C807 +
                    (C133 * C113 + C57 * C171) * C763 -
                    (C133 * C412 + C57 * C473) * C808 -
                    (C133 * C455 + C57 * C507) * C764) *
                       C58 * C53 * C579 +
                   ((C133 * C945 + C57 * C1007) * C808 -
                    ((C133 * C291 + C57 * C343) * C763 +
                     (C133 * C248 + C57 * C309) * C807) +
                    (C133 * C987 + C57 * C1046) * C764) *
                       C58 * C53 * C580) *
                  C1402) /
                 (p * q * std::sqrt(p + q));
    d2eezx[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C188 * C65 + C58 * C189) * C247 +
                     (C188 * C69 + C58 * C192) * C1402) *
                        C53 * C57 * C763 -
                    ((C188 * C414 + C58 * C525) * C1402 +
                     (C188 * C412 + C58 * C523) * C247) *
                        C53 * C57 * C764) *
                       C579 +
                   (((C188 * C945 + C58 * C1065) * C247 +
                     (C188 * C947 + C58 * C1066) * C1402) *
                        C53 * C57 * C764 -
                    ((C188 * C250 + C58 * C361) * C1402 +
                     (C188 * C248 + C58 * C359) * C247) *
                        C53 * C57 * C763) *
                       C580)) /
                 (p * q * std::sqrt(p + q));
    d2eezy[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C188 * C65 + C58 * C189) * C605 + (C188 * C92 + C58 * C209) * C579 -
           (C188 * C248 + C58 * C359) * C606 -
           (C188 * C273 + C58 * C377) * C580) *
              C53 * C57 * C1402 * C763 +
          ((C188 * C945 + C58 * C1065) * C606 -
           ((C188 * C434 + C58 * C541) * C579 +
            (C188 * C412 + C58 * C523) * C605) +
           (C188 * C967 + C58 * C1085) * C580) *
              C53 * C57 * C1402 * C764)) /
        (p * q * std::sqrt(p + q));
    d2eezz[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C188 * C65 + C58 * C189) * C807 +
                    (C188 * C113 + C58 * C226) * C763 -
                    (C188 * C412 + C58 * C523) * C808 -
                    (C188 * C455 + C58 * C557) * C764) *
                       C53 * C57 * C579 +
                   ((C188 * C945 + C58 * C1065) * C808 -
                    ((C188 * C291 + C58 * C393) * C763 +
                     (C188 * C248 + C58 * C359) * C807) +
                    (C188 * C987 + C58 * C1104) * C764) *
                       C53 * C57 * C580) *
                  C1402) /
                 (p * q * std::sqrt(p + q));
    d2eexx[2] +=
        (-std::pow(Pi, 2.5) *
         (((C61 * C65 + C53 * C68) * C247 + (C61 * C69 + C53 * C74) * C1402) *
              C57 * C58 * C1434 * C244 -
          ((C61 * C250 + C53 * C254) * C1402 +
           (C61 * C248 + C53 * C251) * C247) *
              C57 * C58 * C1434 * C245 +
          ((C61 * C249 + C53 * C252) * C247 +
           (C61 * C253 + C53 * C255) * C1402) *
              C57 * C58 * C1434 * C246)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C61 * C65 + C53 * C68) * C62 + (C61 * C69 + C53 * C74) * C54 -
          (C61 * C66 + C53 * C70) * C63 - (C61 * C71 + C53 * C75) * C55 +
          (C61 * C67 + C53 * C72) * C64 + (C61 * C73 + C53 * C76) * C56) *
         C57 * C58 * C1434 * C1423) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C61 * C65 + C53 * C68) * C247 + (C61 * C69 + C53 * C74) * C1402) *
              C57 * C58 * C409 -
          ((C61 * C414 + C53 * C418) * C1402 +
           (C61 * C412 + C53 * C415) * C247) *
              C57 * C58 * C410 +
          ((C61 * C413 + C53 * C416) * C247 +
           (C61 * C417 + C53 * C419) * C1402) *
              C57 * C58 * C411) *
         C1423) /
            (p * q * std::sqrt(p + q));
    d2eexy[2] +=
        (-std::pow(Pi, 2.5) *
         ((C61 * C65 + C53 * C68) * C270 + (C61 * C92 + C53 * C95) * C244 -
          (C61 * C248 + C53 * C251) * C271 - (C61 * C273 + C53 * C275) * C245 +
          (C61 * C249 + C53 * C252) * C272 + (C61 * C274 + C53 * C276) * C246) *
         C57 * C58 * C1402 * C1434) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C61 * C65 + C53 * C68) * C91 + (C61 * C92 + C53 * C95) * C1423) *
              C57 * C58 * C54 -
          ((C61 * C93 + C53 * C96) * C1423 + (C61 * C66 + C53 * C70) * C91) *
              C57 * C58 * C55 +
          ((C61 * C67 + C53 * C72) * C91 + (C61 * C94 + C53 * C97) * C1423) *
              C57 * C58 * C56) *
         C1434) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C61 * C65 + C53 * C68) * C91 + (C61 * C92 + C53 * C95) * C1423) *
              C57 * C58 * C1402 * C409 -
          ((C61 * C434 + C53 * C436) * C1423 +
           (C61 * C412 + C53 * C415) * C91) *
              C57 * C58 * C1402 * C410 +
          ((C61 * C413 + C53 * C416) * C91 +
           (C61 * C435 + C53 * C437) * C1423) *
              C57 * C58 * C1402 * C411)) /
            (p * q * std::sqrt(p + q));
    d2eexz[2] +=
        (-std::pow(Pi, 2.5) *
         (((C61 * C65 + C53 * C68) * C112 + (C61 * C113 + C53 * C116) * C1434) *
              C57 * C58 * C244 -
          ((C61 * C291 + C53 * C293) * C1434 +
           (C61 * C248 + C53 * C251) * C112) *
              C57 * C58 * C245 +
          ((C61 * C249 + C53 * C252) * C112 +
           (C61 * C292 + C53 * C294) * C1434) *
              C57 * C58 * C246) *
         C1402) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C61 * C65 + C53 * C68) * C112 + (C61 * C113 + C53 * C116) * C1434) *
              C57 * C58 * C1423 * C54 -
          ((C61 * C114 + C53 * C117) * C1434 + (C61 * C66 + C53 * C70) * C112) *
              C57 * C58 * C1423 * C55 +
          ((C61 * C67 + C53 * C72) * C112 + (C61 * C115 + C53 * C118) * C1434) *
              C57 * C58 * C1423 * C56)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C61 * C65 + C53 * C68) * C452 + (C61 * C113 + C53 * C116) * C409 -
          (C61 * C412 + C53 * C415) * C453 - (C61 * C455 + C53 * C457) * C410 +
          (C61 * C413 + C53 * C416) * C454 + (C61 * C456 + C53 * C458) * C411) *
         C57 * C58 * C1423 * C1402) /
            (p * q * std::sqrt(p + q));
    d2eeyx[2] +=
        (-std::pow(Pi, 2.5) * (((C133 * C65 + C57 * C134) * C247 +
                                (C133 * C69 + C57 * C137) * C1402) *
                                   C58 * C53 * C1434 * C244 -
                               ((C133 * C250 + C57 * C311) * C1402 +
                                (C133 * C248 + C57 * C309) * C247) *
                                   C58 * C53 * C1434 * C245 +
                               ((C133 * C249 + C57 * C310) * C247 +
                                (C133 * C253 + C57 * C312) * C1402) *
                                   C58 * C53 * C1434 * C246)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C133 * C65 + C57 * C134) * C62 + (C133 * C69 + C57 * C137) * C54 -
          (C133 * C66 + C57 * C135) * C63 - (C133 * C71 + C57 * C138) * C55 +
          (C133 * C67 + C57 * C136) * C64 + (C133 * C73 + C57 * C139) * C56) *
         C58 * C53 * C1434 * C1423) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C133 * C65 + C57 * C134) * C247 +
           (C133 * C69 + C57 * C137) * C1402) *
              C58 * C53 * C409 -
          ((C133 * C414 + C57 * C475) * C1402 +
           (C133 * C412 + C57 * C473) * C247) *
              C58 * C53 * C410 +
          ((C133 * C413 + C57 * C474) * C247 +
           (C133 * C417 + C57 * C476) * C1402) *
              C58 * C53 * C411) *
         C1423) /
            (p * q * std::sqrt(p + q));
    d2eeyy[2] +=
        (-std::pow(Pi, 2.5) *
         ((C133 * C65 + C57 * C134) * C270 + (C133 * C92 + C57 * C154) * C244 -
          (C133 * C248 + C57 * C309) * C271 -
          (C133 * C273 + C57 * C327) * C245 +
          (C133 * C249 + C57 * C310) * C272 +
          (C133 * C274 + C57 * C328) * C246) *
         C58 * C53 * C1402 * C1434) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C133 * C65 + C57 * C134) * C91 +
           (C133 * C92 + C57 * C154) * C1423) *
              C58 * C53 * C54 -
          ((C133 * C93 + C57 * C155) * C1423 +
           (C133 * C66 + C57 * C135) * C91) *
              C58 * C53 * C55 +
          ((C133 * C67 + C57 * C136) * C91 +
           (C133 * C94 + C57 * C156) * C1423) *
              C58 * C53 * C56) *
         C1434) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C133 * C65 + C57 * C134) * C91 +
           (C133 * C92 + C57 * C154) * C1423) *
              C58 * C53 * C1402 * C409 -
          ((C133 * C434 + C57 * C491) * C1423 +
           (C133 * C412 + C57 * C473) * C91) *
              C58 * C53 * C1402 * C410 +
          ((C133 * C413 + C57 * C474) * C91 +
           (C133 * C435 + C57 * C492) * C1423) *
              C58 * C53 * C1402 * C411)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[2] +=
        (-std::pow(Pi, 2.5) *
         (((C133 * C65 + C57 * C134) * C112 +
           (C133 * C113 + C57 * C171) * C1434) *
              C58 * C53 * C244 -
          ((C133 * C291 + C57 * C343) * C1434 +
           (C133 * C248 + C57 * C309) * C112) *
              C58 * C53 * C245 +
          ((C133 * C249 + C57 * C310) * C112 +
           (C133 * C292 + C57 * C344) * C1434) *
              C58 * C53 * C246) *
         C1402) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * (((C133 * C65 + C57 * C134) * C112 +
                               (C133 * C113 + C57 * C171) * C1434) *
                                  C58 * C53 * C1423 * C54 -
                              ((C133 * C114 + C57 * C172) * C1434 +
                               (C133 * C66 + C57 * C135) * C112) *
                                  C58 * C53 * C1423 * C55 +
                              ((C133 * C67 + C57 * C136) * C112 +
                               (C133 * C115 + C57 * C173) * C1434) *
                                  C58 * C53 * C1423 * C56)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C133 * C65 + C57 * C134) * C452 + (C133 * C113 + C57 * C171) * C409 -
          (C133 * C412 + C57 * C473) * C453 -
          (C133 * C455 + C57 * C507) * C410 +
          (C133 * C413 + C57 * C474) * C454 +
          (C133 * C456 + C57 * C508) * C411) *
         C58 * C53 * C1423 * C1402) /
            (p * q * std::sqrt(p + q));
    d2eezx[2] +=
        (-std::pow(Pi, 2.5) * (((C188 * C65 + C58 * C189) * C247 +
                                (C188 * C69 + C58 * C192) * C1402) *
                                   C53 * C57 * C1434 * C244 -
                               ((C188 * C250 + C58 * C361) * C1402 +
                                (C188 * C248 + C58 * C359) * C247) *
                                   C53 * C57 * C1434 * C245 +
                               ((C188 * C249 + C58 * C360) * C247 +
                                (C188 * C253 + C58 * C362) * C1402) *
                                   C53 * C57 * C1434 * C246)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C188 * C65 + C58 * C189) * C62 + (C188 * C69 + C58 * C192) * C54 -
          (C188 * C66 + C58 * C190) * C63 - (C188 * C71 + C58 * C193) * C55 +
          (C188 * C67 + C58 * C191) * C64 + (C188 * C73 + C58 * C194) * C56) *
         C53 * C57 * C1434 * C1423) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C188 * C65 + C58 * C189) * C247 +
           (C188 * C69 + C58 * C192) * C1402) *
              C53 * C57 * C409 -
          ((C188 * C414 + C58 * C525) * C1402 +
           (C188 * C412 + C58 * C523) * C247) *
              C53 * C57 * C410 +
          ((C188 * C413 + C58 * C524) * C247 +
           (C188 * C417 + C58 * C526) * C1402) *
              C53 * C57 * C411) *
         C1423) /
            (p * q * std::sqrt(p + q));
    d2eezy[2] +=
        (-std::pow(Pi, 2.5) *
         ((C188 * C65 + C58 * C189) * C270 + (C188 * C92 + C58 * C209) * C244 -
          (C188 * C248 + C58 * C359) * C271 -
          (C188 * C273 + C58 * C377) * C245 +
          (C188 * C249 + C58 * C360) * C272 +
          (C188 * C274 + C58 * C378) * C246) *
         C53 * C57 * C1402 * C1434) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C188 * C65 + C58 * C189) * C91 +
           (C188 * C92 + C58 * C209) * C1423) *
              C53 * C57 * C54 -
          ((C188 * C93 + C58 * C210) * C1423 +
           (C188 * C66 + C58 * C190) * C91) *
              C53 * C57 * C55 +
          ((C188 * C67 + C58 * C191) * C91 +
           (C188 * C94 + C58 * C211) * C1423) *
              C53 * C57 * C56) *
         C1434) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C188 * C65 + C58 * C189) * C91 +
           (C188 * C92 + C58 * C209) * C1423) *
              C53 * C57 * C1402 * C409 -
          ((C188 * C434 + C58 * C541) * C1423 +
           (C188 * C412 + C58 * C523) * C91) *
              C53 * C57 * C1402 * C410 +
          ((C188 * C413 + C58 * C524) * C91 +
           (C188 * C435 + C58 * C542) * C1423) *
              C53 * C57 * C1402 * C411)) /
            (p * q * std::sqrt(p + q));
    d2eezz[2] +=
        (-std::pow(Pi, 2.5) *
         (((C188 * C65 + C58 * C189) * C112 +
           (C188 * C113 + C58 * C226) * C1434) *
              C53 * C57 * C244 -
          ((C188 * C291 + C58 * C393) * C1434 +
           (C188 * C248 + C58 * C359) * C112) *
              C53 * C57 * C245 +
          ((C188 * C249 + C58 * C360) * C112 +
           (C188 * C292 + C58 * C394) * C1434) *
              C53 * C57 * C246) *
         C1402) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * (((C188 * C65 + C58 * C189) * C112 +
                               (C188 * C113 + C58 * C226) * C1434) *
                                  C53 * C57 * C1423 * C54 -
                              ((C188 * C114 + C58 * C227) * C1434 +
                               (C188 * C66 + C58 * C190) * C112) *
                                  C53 * C57 * C1423 * C55 +
                              ((C188 * C67 + C58 * C191) * C112 +
                               (C188 * C115 + C58 * C228) * C1434) *
                                  C53 * C57 * C1423 * C56)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C188 * C65 + C58 * C189) * C452 + (C188 * C113 + C58 * C226) * C409 -
          (C188 * C412 + C58 * C523) * C453 -
          (C188 * C455 + C58 * C557) * C410 +
          (C188 * C413 + C58 * C524) * C454 +
          (C188 * C456 + C58 * C558) * C411) *
         C53 * C57 * C1423 * C1402) /
            (p * q * std::sqrt(p + q));
    d2eexx[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C61 * C65 + C53 * C68) * C581 + (C61 * C69 + C53 * C74) * C577 -
           (C61 * C66 + C53 * C70) * C582 - (C61 * C71 + C53 * C75) * C578) *
              C57 * C58 * C763 +
          ((C61 * C765 + C53 * C766) * C582 -
           ((C61 * C414 + C53 * C418) * C577 +
            (C61 * C412 + C53 * C415) * C581) +
           (C61 * C767 + C53 * C768) * C578) *
              C57 * C58 * C764) *
         C1423) /
        (p * q * std::sqrt(p + q));
    d2eexy[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C65 + C53 * C68) * C91 + (C61 * C92 + C53 * C95) * C1423) *
               C57 * C58 * C577 -
           ((C61 * C93 + C53 * C96) * C1423 + (C61 * C66 + C53 * C70) * C91) *
               C57 * C58 * C578) *
              C763 +
          (((C61 * C765 + C53 * C766) * C91 +
            (C61 * C787 + C53 * C788) * C1423) *
               C57 * C58 * C578 -
           ((C61 * C434 + C53 * C436) * C1423 +
            (C61 * C412 + C53 * C415) * C91) *
               C57 * C58 * C577) *
              C764)) /
        (p * q * std::sqrt(p + q));
    d2eexz[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C61 * C65 + C53 * C68) * C807 + (C61 * C113 + C53 * C116) * C763 -
           (C61 * C412 + C53 * C415) * C808 -
           (C61 * C455 + C53 * C457) * C764) *
              C57 * C58 * C1423 * C577 +
          ((C61 * C765 + C53 * C766) * C808 -
           ((C61 * C114 + C53 * C117) * C763 + (C61 * C66 + C53 * C70) * C807) +
           (C61 * C809 + C53 * C810) * C764) *
              C57 * C58 * C1423 * C578)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C133 * C65 + C57 * C134) * C581 + (C133 * C69 + C57 * C137) * C577 -
           (C133 * C66 + C57 * C135) * C582 -
           (C133 * C71 + C57 * C138) * C578) *
              C58 * C53 * C763 +
          ((C133 * C765 + C57 * C829) * C582 -
           ((C133 * C414 + C57 * C475) * C577 +
            (C133 * C412 + C57 * C473) * C581) +
           (C133 * C767 + C57 * C830) * C578) *
              C58 * C53 * C764) *
         C1423) /
        (p * q * std::sqrt(p + q));
    d2eeyy[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C133 * C65 + C57 * C134) * C91 +
                     (C133 * C92 + C57 * C154) * C1423) *
                        C58 * C53 * C577 -
                    ((C133 * C93 + C57 * C155) * C1423 +
                     (C133 * C66 + C57 * C135) * C91) *
                        C58 * C53 * C578) *
                       C763 +
                   (((C133 * C765 + C57 * C829) * C91 +
                     (C133 * C787 + C57 * C849) * C1423) *
                        C58 * C53 * C578 -
                    ((C133 * C434 + C57 * C491) * C1423 +
                     (C133 * C412 + C57 * C473) * C91) *
                        C58 * C53 * C577) *
                       C764)) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C133 * C65 + C57 * C134) * C807 +
                    (C133 * C113 + C57 * C171) * C763 -
                    (C133 * C412 + C57 * C473) * C808 -
                    (C133 * C455 + C57 * C507) * C764) *
                       C58 * C53 * C1423 * C577 +
                   ((C133 * C765 + C57 * C829) * C808 -
                    ((C133 * C114 + C57 * C172) * C763 +
                     (C133 * C66 + C57 * C135) * C807) +
                    (C133 * C809 + C57 * C868) * C764) *
                       C58 * C53 * C1423 * C578)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C188 * C65 + C58 * C189) * C581 + (C188 * C69 + C58 * C192) * C577 -
           (C188 * C66 + C58 * C190) * C582 -
           (C188 * C71 + C58 * C193) * C578) *
              C53 * C57 * C763 +
          ((C188 * C765 + C58 * C887) * C582 -
           ((C188 * C414 + C58 * C525) * C577 +
            (C188 * C412 + C58 * C523) * C581) +
           (C188 * C767 + C58 * C888) * C578) *
              C53 * C57 * C764) *
         C1423) /
        (p * q * std::sqrt(p + q));
    d2eezy[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C188 * C65 + C58 * C189) * C91 +
                     (C188 * C92 + C58 * C209) * C1423) *
                        C53 * C57 * C577 -
                    ((C188 * C93 + C58 * C210) * C1423 +
                     (C188 * C66 + C58 * C190) * C91) *
                        C53 * C57 * C578) *
                       C763 +
                   (((C188 * C765 + C58 * C887) * C91 +
                     (C188 * C787 + C58 * C907) * C1423) *
                        C53 * C57 * C578 -
                    ((C188 * C434 + C58 * C541) * C1423 +
                     (C188 * C412 + C58 * C523) * C91) *
                        C53 * C57 * C577) *
                       C764)) /
                 (p * q * std::sqrt(p + q));
    d2eezz[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C188 * C65 + C58 * C189) * C807 +
                    (C188 * C113 + C58 * C226) * C763 -
                    (C188 * C412 + C58 * C523) * C808 -
                    (C188 * C455 + C58 * C557) * C764) *
                       C53 * C57 * C1423 * C577 +
                   ((C188 * C765 + C58 * C887) * C808 -
                    ((C188 * C114 + C58 * C227) * C763 +
                     (C188 * C66 + C58 * C190) * C807) +
                    (C188 * C809 + C58 * C926) * C764) *
                       C53 * C57 * C1423 * C578)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C61 * C65 + C53 * C68) * C62 + (C61 * C69 + C53 * C74) * C54 -
          (C61 * C66 + C53 * C70) * C63 - (C61 * C71 + C53 * C75) * C55 +
          (C61 * C67 + C53 * C72) * C64 + (C61 * C73 + C53 * C76) * C56) *
         C57 * C58 * C1434 * C1423) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C61 * C65 + C53 * C68) * C247 + (C61 * C69 + C53 * C74) * C1402) *
              C57 * C58 * C1434 * C244 -
          ((C61 * C250 + C53 * C254) * C1402 +
           (C61 * C248 + C53 * C251) * C247) *
              C57 * C58 * C1434 * C245 +
          ((C61 * C249 + C53 * C252) * C247 +
           (C61 * C253 + C53 * C255) * C1402) *
              C57 * C58 * C1434 * C246)) /
            (p * q * std::sqrt(p + q));
    d2eexy[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C61 * C65 + C53 * C68) * C91 + (C61 * C92 + C53 * C95) * C1423) *
              C57 * C58 * C54 -
          ((C61 * C93 + C53 * C96) * C1423 + (C61 * C66 + C53 * C70) * C91) *
              C57 * C58 * C55 +
          ((C61 * C67 + C53 * C72) * C91 + (C61 * C94 + C53 * C97) * C1423) *
              C57 * C58 * C56) *
         C1434) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C61 * C65 + C53 * C68) * C270 + (C61 * C92 + C53 * C95) * C244 -
          (C61 * C248 + C53 * C251) * C271 - (C61 * C273 + C53 * C275) * C245 +
          (C61 * C249 + C53 * C252) * C272 + (C61 * C274 + C53 * C276) * C246) *
         C57 * C58 * C1402 * C1434) /
            (p * q * std::sqrt(p + q));
    d2eexz[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C61 * C65 + C53 * C68) * C112 + (C61 * C113 + C53 * C116) * C1434) *
              C57 * C58 * C1423 * C54 -
          ((C61 * C114 + C53 * C117) * C1434 + (C61 * C66 + C53 * C70) * C112) *
              C57 * C58 * C1423 * C55 +
          ((C61 * C67 + C53 * C72) * C112 + (C61 * C115 + C53 * C118) * C1434) *
              C57 * C58 * C1423 * C56)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C61 * C65 + C53 * C68) * C112 + (C61 * C113 + C53 * C116) * C1434) *
              C57 * C58 * C244 -
          ((C61 * C291 + C53 * C293) * C1434 +
           (C61 * C248 + C53 * C251) * C112) *
              C57 * C58 * C245 +
          ((C61 * C249 + C53 * C252) * C112 +
           (C61 * C292 + C53 * C294) * C1434) *
              C57 * C58 * C246) *
         C1402) /
            (p * q * std::sqrt(p + q));
    d2eeyx[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C133 * C65 + C57 * C134) * C62 + (C133 * C69 + C57 * C137) * C54 -
          (C133 * C66 + C57 * C135) * C63 - (C133 * C71 + C57 * C138) * C55 +
          (C133 * C67 + C57 * C136) * C64 + (C133 * C73 + C57 * C139) * C56) *
         C58 * C53 * C1434 * C1423) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C133 * C65 + C57 * C134) * C247 +
           (C133 * C69 + C57 * C137) * C1402) *
              C58 * C53 * C1434 * C244 -
          ((C133 * C250 + C57 * C311) * C1402 +
           (C133 * C248 + C57 * C309) * C247) *
              C58 * C53 * C1434 * C245 +
          ((C133 * C249 + C57 * C310) * C247 +
           (C133 * C253 + C57 * C312) * C1402) *
              C58 * C53 * C1434 * C246)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C133 * C65 + C57 * C134) * C91 +
           (C133 * C92 + C57 * C154) * C1423) *
              C58 * C53 * C54 -
          ((C133 * C93 + C57 * C155) * C1423 +
           (C133 * C66 + C57 * C135) * C91) *
              C58 * C53 * C55 +
          ((C133 * C67 + C57 * C136) * C91 +
           (C133 * C94 + C57 * C156) * C1423) *
              C58 * C53 * C56) *
         C1434) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C133 * C65 + C57 * C134) * C270 + (C133 * C92 + C57 * C154) * C244 -
          (C133 * C248 + C57 * C309) * C271 -
          (C133 * C273 + C57 * C327) * C245 +
          (C133 * C249 + C57 * C310) * C272 +
          (C133 * C274 + C57 * C328) * C246) *
         C58 * C53 * C1402 * C1434) /
            (p * q * std::sqrt(p + q));
    d2eeyz[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C133 * C65 + C57 * C134) * C112 +
                    (C133 * C113 + C57 * C171) * C1434) *
                       C58 * C53 * C1423 * C54 -
                   ((C133 * C114 + C57 * C172) * C1434 +
                    (C133 * C66 + C57 * C135) * C112) *
                       C58 * C53 * C1423 * C55 +
                   ((C133 * C67 + C57 * C136) * C112 +
                    (C133 * C115 + C57 * C173) * C1434) *
                       C58 * C53 * C1423 * C56)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C133 * C65 + C57 * C134) * C112 +
                    (C133 * C113 + C57 * C171) * C1434) *
                       C58 * C53 * C244 -
                   ((C133 * C291 + C57 * C343) * C1434 +
                    (C133 * C248 + C57 * C309) * C112) *
                       C58 * C53 * C245 +
                   ((C133 * C249 + C57 * C310) * C112 +
                    (C133 * C292 + C57 * C344) * C1434) *
                       C58 * C53 * C246) *
                  C1402) /
                     (p * q * std::sqrt(p + q));
    d2eezx[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C188 * C65 + C58 * C189) * C62 + (C188 * C69 + C58 * C192) * C54 -
          (C188 * C66 + C58 * C190) * C63 - (C188 * C71 + C58 * C193) * C55 +
          (C188 * C67 + C58 * C191) * C64 + (C188 * C73 + C58 * C194) * C56) *
         C53 * C57 * C1434 * C1423) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C188 * C65 + C58 * C189) * C247 +
           (C188 * C69 + C58 * C192) * C1402) *
              C53 * C57 * C1434 * C244 -
          ((C188 * C250 + C58 * C361) * C1402 +
           (C188 * C248 + C58 * C359) * C247) *
              C53 * C57 * C1434 * C245 +
          ((C188 * C249 + C58 * C360) * C247 +
           (C188 * C253 + C58 * C362) * C1402) *
              C53 * C57 * C1434 * C246)) /
            (p * q * std::sqrt(p + q));
    d2eezy[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C188 * C65 + C58 * C189) * C91 +
           (C188 * C92 + C58 * C209) * C1423) *
              C53 * C57 * C54 -
          ((C188 * C93 + C58 * C210) * C1423 +
           (C188 * C66 + C58 * C190) * C91) *
              C53 * C57 * C55 +
          ((C188 * C67 + C58 * C191) * C91 +
           (C188 * C94 + C58 * C211) * C1423) *
              C53 * C57 * C56) *
         C1434) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C188 * C65 + C58 * C189) * C270 + (C188 * C92 + C58 * C209) * C244 -
          (C188 * C248 + C58 * C359) * C271 -
          (C188 * C273 + C58 * C377) * C245 +
          (C188 * C249 + C58 * C360) * C272 +
          (C188 * C274 + C58 * C378) * C246) *
         C53 * C57 * C1402 * C1434) /
            (p * q * std::sqrt(p + q));
    d2eezz[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C188 * C65 + C58 * C189) * C112 +
                    (C188 * C113 + C58 * C226) * C1434) *
                       C53 * C57 * C1423 * C54 -
                   ((C188 * C114 + C58 * C227) * C1434 +
                    (C188 * C66 + C58 * C190) * C112) *
                       C53 * C57 * C1423 * C55 +
                   ((C188 * C67 + C58 * C191) * C112 +
                    (C188 * C115 + C58 * C228) * C1434) *
                       C53 * C57 * C1423 * C56)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C188 * C65 + C58 * C189) * C112 +
                    (C188 * C113 + C58 * C226) * C1434) *
                       C53 * C57 * C244 -
                   ((C188 * C291 + C58 * C393) * C1434 +
                    (C188 * C248 + C58 * C359) * C112) *
                       C53 * C57 * C245 +
                   ((C188 * C249 + C58 * C360) * C112 +
                    (C188 * C292 + C58 * C394) * C1434) *
                       C53 * C57 * C246) *
                  C1402) /
                     (p * q * std::sqrt(p + q));
}
