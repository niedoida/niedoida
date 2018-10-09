/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_ssds_AC.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
void second_derivative_ee_0020_13(const double ae,
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
    const double C1116 = 0 * de;
    const double C1115 = xC - xD;
    const double C1114 = ce + de;
    const double C1144 = 0 * de;
    const double C1143 = yC - yD;
    const double C1160 = 0 * de;
    const double C1159 = zC - zD;
    const double C1183 = p + q;
    const double C1182 = p * q;
    const double C1189 = ae + be;
    const double C1188 = xP - xQ;
    const double C1187 = bs[2];
    const double C1198 = ae * ce;
    const double C1194 = bs[3];
    const double C1207 = yP - yQ;
    const double C1217 = zP - zQ;
    const double C65 = bs[0];
    const double C1484 = ae * be;
    const double C1119 = C1117 * C1115;
    const double C1400 = std::pow(C1115, 2);
    const double C1485 = C1115 * de;
    const double C1118 = 2 * C1114;
    const double C1486 = std::pow(C1114, 2);
    const double C1145 = C1117 * C1143;
    const double C1421 = std::pow(C1143, 2);
    const double C1489 = C1143 * de;
    const double C1161 = C1117 * C1159;
    const double C1432 = std::pow(C1159, 2);
    const double C1490 = C1159 * de;
    const double C1184 = 2 * C1182;
    const double C1191 = C1114 * C1189;
    const double C1199 = C1188 * ae;
    const double C1197 = std::pow(C1188, 2);
    const double C1195 = C1188 * ce;
    const double C1210 = C1188 * C1207;
    const double C1209 = C1207 * ce;
    const double C1229 = C1207 * C1188;
    const double C1228 = C1207 * ae;
    const double C1237 = std::pow(C1207, 2);
    const double C1220 = C1188 * C1217;
    const double C1219 = C1217 * ce;
    const double C1241 = C1207 * C1217;
    const double C1248 = C1217 * C1188;
    const double C1247 = C1217 * ae;
    const double C1256 = C1217 * C1207;
    const double C1262 = std::pow(C1217, 2);
    const double C53 = std::exp(-(std::pow(xA - xB, 2) * C1484) / C1189);
    const double C57 = std::exp(-(std::pow(yA - yB, 2) * C1484) / C1189);
    const double C58 = std::exp(-(std::pow(zA - zB, 2) * C1484) / C1189);
    const double C1401 = C1400 * C1117;
    const double C1488 = std::pow(C1118, -2);
    const double C1487 = std::pow(C1118, -1);
    const double C1422 = C1421 * C1117;
    const double C1433 = C1432 * C1117;
    const double C1186 = C1184 / C1183;
    const double C74 =
        (-((std::pow(xP - xQ, 2) * bs[2] * std::pow(C1184 / C1183, 2) -
            (bs[1] * C1184) / C1183) *
           ae * ce) /
         C1114) /
        (ae + be);
    const double C66 = -(C1188 * bs[1] * C1184) / C1183;
    const double C248 = -(C1207 * bs[1] * C1184) / C1183;
    const double C412 = -(C1217 * bs[1] * C1184) / C1183;
    const double C1202 = C1194 * C1199;
    const double C68 = (-(bs[1] * C1199 * C1184) / C1183) / C1189;
    const double C1201 = C1194 * C1195;
    const double C69 = (bs[1] * C1195 * C1184) / (C1183 * C1114);
    const double C1212 = C1210 * ae;
    const double C1211 = C1194 * C1209;
    const double C92 = (bs[1] * C1209 * C1184) / (C1183 * C1114);
    const double C1231 = C1229 * ae;
    const double C1230 = C1194 * C1228;
    const double C134 = (-(bs[1] * C1228 * C1184) / C1183) / C1189;
    const double C1222 = C1220 * ae;
    const double C1221 = C1194 * C1219;
    const double C113 = (bs[1] * C1219 * C1184) / (C1183 * C1114);
    const double C1242 = C1241 * ae;
    const double C1250 = C1248 * ae;
    const double C1249 = C1194 * C1247;
    const double C189 = (-(bs[1] * C1247 * C1184) / C1183) / C1189;
    const double C1257 = C1256 * ae;
    const double C61 = -(2 * ae * be * (xA - xB) * C53) / (ae + be);
    const double C133 = -(2 * ae * be * (yA - yB) * C57) / (ae + be);
    const double C188 = -(2 * ae * be * (zA - zB) * C58) / (ae + be);
    const double C1402 = C1401 / C1114;
    const double C1423 = C1422 / C1114;
    const double C1434 = C1433 / C1114;
    const double C1190 = std::pow(C1186, 2);
    const double C1193 = -C1186;
    const double C1214 = C1212 * ce;
    const double C1233 = C1231 * ce;
    const double C1224 = C1222 * ce;
    const double C1243 = C1242 * ce;
    const double C1252 = C1250 * ce;
    const double C1258 = C1257 * ce;
    const double C1403 = -C1402;
    const double C1424 = -C1423;
    const double C1435 = -C1434;
    const double C1196 = C1187 * C1190;
    const double C75 =
        (-(C1190 * C1187 * C1188 * ae * ce) / C1114) / C1189 -
        (ae * C1190 * C1187 * C1188 * ce) / C1191 -
        (C1188 *
         (C1187 * C1190 + std::pow(C1188, 2) * bs[3] * std::pow(-C1186, 3)) *
         ae * ce) /
            C1191;
    const double C95 =
        (-(C1190 * C1187 * C1188 * (yP - yQ) * ae * ce) / C1114) / C1189;
    const double C116 =
        (-(C1190 * C1187 * C1188 * (zP - zQ) * ae * ce) / C1114) / C1189;
    const double C137 =
        (-(C1190 * C1187 * C1207 * C1188 * ae * ce) / C1114) / C1189;
    const double C154 =
        (-((std::pow(C1207, 2) * C1187 * C1190 - (bs[1] * C1184) / C1183) *
           C1198) /
         C1114) /
        C1189;
    const double C171 =
        (-(C1190 * C1187 * C1207 * C1217 * ae * ce) / C1114) / C1189;
    const double C192 =
        (-(C1190 * C1187 * C1217 * C1188 * ae * ce) / C1114) / C1189;
    const double C209 =
        (-(C1190 * C1187 * C1217 * C1207 * ae * ce) / C1114) / C1189;
    const double C226 =
        (-((std::pow(C1217, 2) * C1187 * C1190 - (bs[1] * C1184) / C1183) *
           C1198) /
         C1114) /
        C1189;
    const double C70 = (C1188 * C1190 * C1187 * C1199) / C1189 -
                       (ae * bs[1] * C1184) / (C1183 * C1189);
    const double C71 = (ce * bs[1] * C1184) / (C1183 * C1114) -
                       (C1188 * C1190 * C1187 * C1195) / C1114;
    const double C93 = -(C1188 * C1190 * C1187 * C1209) / C1114;
    const double C114 = -(C1188 * C1190 * C1187 * C1219) / C1114;
    const double C135 = (C1188 * C1190 * C1187 * C1228) / C1189;
    const double C190 = (C1188 * C1190 * C1187 * C1247) / C1189;
    const double C250 = -(C1207 * C1190 * C1187 * C1195) / C1114;
    const double C251 = (C1207 * C1190 * C1187 * C1199) / C1189;
    const double C273 = (ce * bs[1] * C1184) / (C1183 * C1114) -
                        (C1207 * C1190 * C1187 * C1209) / C1114;
    const double C291 = -(C1207 * C1190 * C1187 * C1219) / C1114;
    const double C309 = (C1207 * C1190 * C1187 * C1228) / C1189 -
                        (ae * bs[1] * C1184) / (C1183 * C1189);
    const double C359 = (C1207 * C1190 * C1187 * C1247) / C1189;
    const double C414 = -(C1217 * C1190 * C1187 * C1195) / C1114;
    const double C415 = (C1217 * C1190 * C1187 * C1199) / C1189;
    const double C434 = -(C1217 * C1190 * C1187 * C1209) / C1114;
    const double C455 = (ce * bs[1] * C1184) / (C1183 * C1114) -
                        (C1217 * C1190 * C1187 * C1219) / C1114;
    const double C473 = (C1217 * C1190 * C1187 * C1228) / C1189;
    const double C523 = (C1217 * C1190 * C1187 * C1247) / C1189 -
                        (ae * bs[1] * C1184) / (C1183 * C1189);
    const double C1200 = std::pow(C1193, 3);
    const double C1404 = std::exp(C1403);
    const double C1425 = std::exp(C1424);
    const double C1436 = std::exp(C1435);
    const double C67 = C1196 * C1197 - (bs[1] * C1184) / C1183;
    const double C249 = C1196 * C1237 - (bs[1] * C1184) / C1183;
    const double C413 = C1196 * C1262 - (bs[1] * C1184) / C1183;
    const double C583 = C1207 * C1188 * C1196;
    const double C765 = C1217 * C1188 * C1196;
    const double C945 = C1217 * C1207 * C1196;
    const double C1204 = C1200 * C1202;
    const double C1203 = C1200 * C1201;
    const double C1213 = C1200 * C1211;
    const double C1223 = C1200 * C1221;
    const double C1232 = C1200 * C1230;
    const double C1251 = C1200 * C1249;
    const double C96 =
        (-(C1188 * C1200 * C1194 * C1188 * C1207 * ae * ce) / C1114) / C1189 -
        (ae * C1190 * C1187 * C1207 * ce) / C1191;
    const double C117 =
        (-(C1188 * C1200 * C1194 * C1188 * C1217 * ae * ce) / C1114) / C1189 -
        (ae * C1190 * C1187 * C1217 * ce) / C1191;
    const double C138 =
        (-(C1188 * C1200 * C1194 * C1207 * C1188 * ae * ce) / C1114) / C1189 -
        (C1190 * C1187 * C1207 * ae * ce) / C1191;
    const double C155 =
        (-(C1188 * (C1196 + std::pow(C1207, 2) * C1194 * C1200) * C1198) /
         C1114) /
        C1189;
    const double C156 =
        (-((C1194 * C1200 + C1237 * bs[4] * std::pow(C1186, 4)) * C1198 *
           C1197) /
         C1114) /
            C1189 -
        ((C1196 + C1237 * C1194 * C1200) * C1198) / C1191;
    const double C172 =
        (-(C1188 * C1200 * C1194 * C1207 * C1217 * ae * ce) / C1114) / C1189;
    const double C173 =
        (-(std::pow(C1186, 4) * bs[4] * C1243 * C1197) / C1114) / C1189 -
        (C1200 * C1194 * C1243) / C1191;
    const double C193 =
        (-(C1188 * C1200 * C1194 * C1217 * C1188 * ae * ce) / C1114) / C1189 -
        (C1190 * C1187 * C1217 * ae * ce) / C1191;
    const double C210 =
        (-(C1188 * C1200 * C1194 * C1217 * C1207 * ae * ce) / C1114) / C1189;
    const double C211 =
        (-(std::pow(C1186, 4) * bs[4] * C1258 * C1197) / C1114) / C1189 -
        (C1200 * C1194 * C1258) / C1191;
    const double C227 =
        (-(C1188 * (C1196 + std::pow(C1217, 2) * C1194 * C1200) * C1198) /
         C1114) /
        C1189;
    const double C228 =
        (-((C1194 * C1200 + C1262 * bs[4] * std::pow(C1186, 4)) * C1198 *
           C1197) /
         C1114) /
            C1189 -
        ((C1196 + C1262 * C1194 * C1200) * C1198) / C1191;
    const double C254 =
        (-(C1207 * (C1196 + C1197 * C1194 * C1200) * C1198) / C1114) / C1189;
    const double C255 =
        (-((C1194 * C1200 + C1197 * bs[4] * std::pow(C1186, 4)) * C1198 *
           C1237) /
         C1114) /
            C1189 -
        ((C1196 + C1197 * C1194 * C1200) * C1198) / C1191;
    const double C275 = (-(C1207 * C1200 * C1194 * C1214) / C1114) / C1189 -
                        (C1190 * C1187 * C1199 * ce) / C1191;
    const double C293 = (-(C1207 * C1200 * C1194 * C1224) / C1114) / C1189;
    const double C294 =
        (-(std::pow(C1186, 4) * bs[4] * C1224 * C1237) / C1114) / C1189 -
        (C1200 * C1194 * C1224) / C1191;
    const double C311 = (-(C1207 * C1200 * C1194 * C1233) / C1114) / C1189 -
                        (ae * C1190 * C1187 * C1195) / C1191;
    const double C327 =
        (-(C1190 * C1187 * C1228 * ce) / C1114) / C1189 -
        (ae * C1190 * C1187 * C1209) / C1191 -
        (C1207 * (C1196 + C1237 * C1194 * C1200) * C1198) / C1191;
    const double C343 = (-(C1207 * C1200 * C1194 * C1243) / C1114) / C1189 -
                        (ae * C1190 * C1187 * C1219) / C1191;
    const double C361 = (-(C1207 * C1200 * C1194 * C1252) / C1114) / C1189;
    const double C362 =
        (-(std::pow(C1186, 4) * bs[4] * C1252 * C1237) / C1114) / C1189 -
        (C1200 * C1194 * C1252) / C1191;
    const double C377 = (-(C1207 * C1200 * C1194 * C1258) / C1114) / C1189 -
                        (C1190 * C1187 * C1247 * ce) / C1191;
    const double C393 =
        (-(C1207 * (C1196 + C1262 * C1194 * C1200) * C1198) / C1114) / C1189;
    const double C394 =
        (-((C1194 * C1200 + C1262 * bs[4] * std::pow(C1186, 4)) * C1198 *
           C1237) /
         C1114) /
            C1189 -
        ((C1196 + C1262 * C1194 * C1200) * C1198) / C1191;
    const double C418 =
        (-(C1217 * (C1196 + C1197 * C1194 * C1200) * C1198) / C1114) / C1189;
    const double C419 =
        (-((C1194 * C1200 + C1197 * bs[4] * std::pow(C1186, 4)) * C1198 *
           C1262) /
         C1114) /
            C1189 -
        ((C1196 + C1197 * C1194 * C1200) * C1198) / C1191;
    const double C436 = (-(C1217 * C1200 * C1194 * C1214) / C1114) / C1189;
    const double C437 =
        (-(std::pow(C1186, 4) * bs[4] * C1214 * C1262) / C1114) / C1189 -
        (C1200 * C1194 * C1214) / C1191;
    const double C457 = (-(C1217 * C1200 * C1194 * C1224) / C1114) / C1189 -
                        (C1190 * C1187 * C1199 * ce) / C1191;
    const double C475 = (-(C1217 * C1200 * C1194 * C1233) / C1114) / C1189;
    const double C476 =
        (-(std::pow(C1186, 4) * bs[4] * C1233 * C1262) / C1114) / C1189 -
        (C1200 * C1194 * C1233) / C1191;
    const double C491 =
        (-(C1217 * (C1196 + C1237 * C1194 * C1200) * C1198) / C1114) / C1189;
    const double C492 =
        (-((C1194 * C1200 + C1237 * bs[4] * std::pow(C1186, 4)) * C1198 *
           C1262) /
         C1114) /
            C1189 -
        ((C1196 + C1237 * C1194 * C1200) * C1198) / C1191;
    const double C507 = (-(C1217 * C1200 * C1194 * C1243) / C1114) / C1189 -
                        (C1190 * C1187 * C1228 * ce) / C1191;
    const double C525 = (-(C1217 * C1200 * C1194 * C1252) / C1114) / C1189 -
                        (ae * C1190 * C1187 * C1195) / C1191;
    const double C541 = (-(C1217 * C1200 * C1194 * C1258) / C1114) / C1189 -
                        (ae * C1190 * C1187 * C1209) / C1191;
    const double C557 =
        (-(C1190 * C1187 * C1247 * ce) / C1114) / C1189 -
        (ae * C1190 * C1187 * C1219) / C1191 -
        (C1217 * (C1196 + C1262 * C1194 * C1200) * C1198) / C1191;
    const double C744 =
        (-(C1207 * C1188 *
           (C1194 * C1200 + C1262 * bs[4] * std::pow(C1186, 4)) * C1198) /
         C1114) /
        C1189;
    const double C849 =
        (-(C1217 * C1188 *
           (C1194 * C1200 + C1237 * bs[4] * std::pow(C1186, 4)) * C1198) /
         C1114) /
        C1189;
    const double C948 =
        (-(C1217 * C1207 *
           (C1194 * C1200 + C1197 * bs[4] * std::pow(C1186, 4)) * C1198) /
         C1114) /
        C1189;
    const double C1120 = C1119 * C1404;
    const double C1491 = C1404 * C1485;
    const double C54 = (C1404 * std::pow(C1485, 2)) / C1486 + C1404 / C1118;
    const double C56 = C1488 * C1404;
    const double C578 = C1487 * C1404;
    const double C1146 = C1145 * C1425;
    const double C91 = -(2 * C1117 * (yC - yD) * C1425) / C1114;
    const double C1492 = C1425 * C1489;
    const double C244 = (C1425 * std::pow(C1489, 2)) / C1486 + C1425 / C1118;
    const double C246 = C1488 * C1425;
    const double C580 = C1487 * C1425;
    const double C1162 = C1161 * C1436;
    const double C112 = -(2 * C1117 * (zC - zD) * C1436) / C1114;
    const double C1493 = C1436 * C1490;
    const double C409 = (C1436 * std::pow(C1490, 2)) / C1486 + C1436 / C1118;
    const double C411 = C1488 * C1436;
    const double C764 = C1487 * C1436;
    const double C276 =
        (-(C1207 * C1204 * ce) / C1114) / C1189 -
        (C1200 * C1194 * C1214) / C1191 +
        C1207 *
            ((-(C1207 * std::pow(C1186, 4) * bs[4] * C1214) / C1114) / C1189 -
             (C1204 * ce) / C1191);
    const double C458 =
        (-(C1217 * C1204 * ce) / C1114) / C1189 -
        (C1200 * C1194 * C1224) / C1191 +
        C1217 *
            ((-(C1217 * std::pow(C1186, 4) * bs[4] * C1224) / C1114) / C1189 -
             (C1204 * ce) / C1191);
    const double C968 =
        C1217 *
        ((-(C1207 * std::pow(C1186, 4) * bs[4] * C1214) / C1114) / C1189 -
         (C1204 * ce) / C1191);
    const double C988 =
        (-(C1217 * C1207 * std::pow(C1186, 4) * bs[4] * C1224) / C1114) /
            C1189 -
        (C1207 * C1204 * ce) / C1191;
    const double C72 =
        (C1190 * C1187 * C1199 + C1188 * (C1188 * C1204 + C1196 * ae) +
         C1188 * C1196 * ae) /
        C1189;
    const double C252 = (C1190 * C1187 * C1199 + C1204 * C1237) / C1189;
    const double C416 = (C1190 * C1187 * C1199 + C1204 * C1262) / C1189;
    const double C584 = (C1207 * (C1188 * C1204 + C1196 * ae)) / C1189;
    const double C766 = (C1217 * (C1188 * C1204 + C1196 * ae)) / C1189;
    const double C946 = (C1217 * C1207 * C1204) / C1189;
    const double C76 =
        (-(ae * (C1188 * C1203 + C1196 * ce)) / C1114) / C1189 -
        ((C1196 + C1197 * C1194 * C1200) * C1198) / C1191 -
        ((C1188 * C1204 + C1196 * ae) * ce) / C1191 +
        C1188 * ((-(C1204 * ce) / C1114) / C1189 - (ae * C1203) / C1191 -
                 (C1188 * (C1194 * C1200 + C1197 * bs[4] * std::pow(C1186, 4)) *
                  C1198) /
                     C1191);
    const double C312 =
        (-(ae * C1207 * C1203) / C1114) / C1189 -
        (C1200 * C1194 * C1233) / C1191 +
        C1207 *
            ((-(C1207 * std::pow(C1186, 4) * bs[4] * C1233) / C1114) / C1189 -
             (ae * C1203) / C1191);
    const double C526 =
        (-(ae * C1217 * C1203) / C1114) / C1189 -
        (C1200 * C1194 * C1252) / C1191 +
        C1217 *
            ((-(C1217 * std::pow(C1186, 4) * bs[4] * C1252) / C1114) / C1189 -
             (ae * C1203) / C1191);
    const double C586 =
        (-(C1207 * C1204 * ce) / C1114) / C1189 - (ae * C1207 * C1203) / C1191 -
        (C1188 * C1207 * (C1194 * C1200 + C1197 * bs[4] * std::pow(C1186, 4)) *
         C1198) /
            C1191;
    const double C768 =
        (-(C1217 * C1204 * ce) / C1114) / C1189 - (ae * C1217 * C1203) / C1191 -
        (C1188 * C1217 * (C1194 * C1200 + C1197 * bs[4] * std::pow(C1186, 4)) *
         C1198) /
            C1191;
    const double C1008 =
        (-(C1207 * C1217 * std::pow(C1186, 4) * bs[4] * C1233) / C1114) /
            C1189 -
        (ae * C1217 * C1203) / C1191;
    const double C1066 =
        (-(C1217 * C1207 * std::pow(C1186, 4) * bs[4] * C1252) / C1114) /
            C1189 -
        (ae * C1207 * C1203) / C1191;
    const double C73 = -(C1188 * (C1188 * C1203 + C1196 * ce) +
                         C1190 * C1187 * C1195 + C1188 * C1196 * ce) /
                       C1114;
    const double C253 = -(C1203 * C1237 + C1190 * C1187 * C1195) / C1114;
    const double C417 = -(C1203 * C1262 + C1190 * C1187 * C1195) / C1114;
    const double C585 = -(C1207 * (C1188 * C1203 + C1196 * ce)) / C1114;
    const double C767 = -(C1217 * (C1188 * C1203 + C1196 * ce)) / C1114;
    const double C947 = -(C1217 * C1207 * C1203) / C1114;
    const double C97 =
        (-(ae * C1188 * C1213) / C1114) / C1189 -
        (C1200 * C1194 * C1214) / C1191 +
        C1188 *
            ((-(C1188 * std::pow(C1186, 4) * bs[4] * C1214) / C1114) / C1189 -
             (ae * C1213) / C1191);
    const double C542 =
        (-(ae * C1217 * C1213) / C1114) / C1189 -
        (C1200 * C1194 * C1258) / C1191 +
        C1217 *
            ((-(C1217 * std::pow(C1186, 4) * bs[4] * C1258) / C1114) / C1189 -
             (ae * C1213) / C1191);
    const double C608 =
        C1207 *
            ((-(C1188 * std::pow(C1186, 4) * bs[4] * C1214) / C1114) / C1189 -
             (ae * C1213) / C1191) -
        ((C1188 * C1204 + C1196 * ae) * ce) / C1191;
    const double C788 =
        C1217 *
        ((-(C1188 * std::pow(C1186, 4) * bs[4] * C1214) / C1114) / C1189 -
         (ae * C1213) / C1191);
    const double C907 =
        (-(C1217 * C1188 * std::pow(C1186, 4) * bs[4] * C1258) / C1114) /
            C1189 -
        (ae * C1188 * C1213) / C1191;
    const double C94 = -(C1213 * C1197 + C1190 * C1187 * C1209) / C1114;
    const double C274 = -(C1207 * (C1207 * C1213 + C1196 * ce) +
                          C1190 * C1187 * C1209 + C1207 * C1196 * ce) /
                        C1114;
    const double C435 = -(C1213 * C1262 + C1190 * C1187 * C1209) / C1114;
    const double C607 = -(C1207 * C1188 * C1213 + C1188 * C1196 * ce) / C1114;
    const double C787 = -(C1217 * C1188 * C1213) / C1114;
    const double C967 = -(C1217 * (C1207 * C1213 + C1196 * ce)) / C1114;
    const double C118 =
        (-(ae * C1188 * C1223) / C1114) / C1189 -
        (C1200 * C1194 * C1224) / C1191 +
        C1188 *
            ((-(C1188 * std::pow(C1186, 4) * bs[4] * C1224) / C1114) / C1189 -
             (ae * C1223) / C1191);
    const double C344 =
        (-(ae * C1207 * C1223) / C1114) / C1189 -
        (C1200 * C1194 * C1243) / C1191 +
        C1207 *
            ((-(C1207 * std::pow(C1186, 4) * bs[4] * C1243) / C1114) / C1189 -
             (ae * C1223) / C1191);
    const double C628 =
        C1207 *
        ((-(C1188 * std::pow(C1186, 4) * bs[4] * C1224) / C1114) / C1189 -
         (ae * C1223) / C1191);
    const double C686 =
        (-(C1207 * C1188 * std::pow(C1186, 4) * bs[4] * C1243) / C1114) /
            C1189 -
        (ae * C1188 * C1223) / C1191;
    const double C810 =
        C1217 *
            ((-(C1188 * std::pow(C1186, 4) * bs[4] * C1224) / C1114) / C1189 -
             (ae * C1223) / C1191) -
        ((C1188 * C1204 + C1196 * ae) * ce) / C1191;
    const double C115 = -(C1223 * C1197 + C1190 * C1187 * C1219) / C1114;
    const double C292 = -(C1223 * C1237 + C1190 * C1187 * C1219) / C1114;
    const double C456 = -(C1217 * (C1217 * C1223 + C1196 * ce) +
                          C1190 * C1187 * C1219 + C1217 * C1196 * ce) /
                        C1114;
    const double C627 = -(C1207 * C1188 * C1223) / C1114;
    const double C809 = -(C1217 * C1188 * C1223 + C1188 * C1196 * ce) / C1114;
    const double C987 = -(C1217 * C1207 * C1223 + C1207 * C1196 * ce) / C1114;
    const double C139 =
        (-(C1188 * C1232 * ce) / C1114) / C1189 -
        (C1200 * C1194 * C1233) / C1191 +
        C1188 *
            ((-(C1188 * std::pow(C1186, 4) * bs[4] * C1233) / C1114) / C1189 -
             (C1232 * ce) / C1191);
    const double C328 =
        (-(ae * (C1207 * C1213 + C1196 * ce)) / C1114) / C1189 -
        ((C1196 + C1237 * C1194 * C1200) * C1198) / C1191 -
        ((C1207 * C1232 + C1196 * ae) * ce) / C1191 +
        C1207 * ((-(C1232 * ce) / C1114) / C1189 - (ae * C1213) / C1191 -
                 (C1207 * (C1194 * C1200 + C1237 * bs[4] * std::pow(C1186, 4)) *
                  C1198) /
                     C1191);
    const double C508 =
        (-(C1217 * C1232 * ce) / C1114) / C1189 -
        (C1200 * C1194 * C1243) / C1191 +
        C1217 *
            ((-(C1217 * std::pow(C1186, 4) * bs[4] * C1243) / C1114) / C1189 -
             (C1232 * ce) / C1191);
    const double C648 =
        C1207 *
            ((-(C1188 * std::pow(C1186, 4) * bs[4] * C1233) / C1114) / C1189 -
             (C1232 * ce) / C1191) -
        (ae * (C1188 * C1203 + C1196 * ce)) / C1191;
    const double C667 =
        (-(C1188 * C1232 * ce) / C1114) / C1189 - (ae * C1188 * C1213) / C1191 -
        (C1207 * C1188 * (C1194 * C1200 + C1237 * bs[4] * std::pow(C1186, 4)) *
         C1198) /
            C1191;
    const double C830 =
        C1217 *
        ((-(C1188 * std::pow(C1186, 4) * bs[4] * C1233) / C1114) / C1189 -
         (C1232 * ce) / C1191);
    const double C868 =
        (-(C1217 * C1188 * std::pow(C1186, 4) * bs[4] * C1243) / C1114) /
            C1189 -
        (C1188 * C1232 * ce) / C1191;
    const double C1027 =
        (-(C1217 * C1232 * ce) / C1114) / C1189 - (ae * C1217 * C1213) / C1191 -
        (C1207 * C1217 * (C1194 * C1200 + C1237 * bs[4] * std::pow(C1186, 4)) *
         C1198) /
            C1191;
    const double C1046 =
        C1207 *
            ((-(C1217 * std::pow(C1186, 4) * bs[4] * C1243) / C1114) / C1189 -
             (C1232 * ce) / C1191) -
        (ae * (C1217 * C1223 + C1196 * ce)) / C1191;
    const double C136 = (C1190 * C1187 * C1228 + C1232 * C1197) / C1189;
    const double C310 =
        (C1190 * C1187 * C1228 + C1207 * (C1207 * C1232 + C1196 * ae) +
         C1207 * C1196 * ae) /
        C1189;
    const double C474 = (C1190 * C1187 * C1228 + C1232 * C1262) / C1189;
    const double C647 = (C1207 * C1188 * C1232 + C1188 * C1196 * ae) / C1189;
    const double C829 = (C1217 * C1188 * C1232) / C1189;
    const double C1007 = (C1217 * (C1207 * C1232 + C1196 * ae)) / C1189;
    const double C194 =
        (-(C1188 * C1251 * ce) / C1114) / C1189 -
        (C1200 * C1194 * C1252) / C1191 +
        C1188 *
            ((-(C1188 * std::pow(C1186, 4) * bs[4] * C1252) / C1114) / C1189 -
             (C1251 * ce) / C1191);
    const double C378 =
        (-(C1207 * C1251 * ce) / C1114) / C1189 -
        (C1200 * C1194 * C1258) / C1191 +
        C1207 *
            ((-(C1207 * std::pow(C1186, 4) * bs[4] * C1258) / C1114) / C1189 -
             (C1251 * ce) / C1191);
    const double C558 =
        (-(ae * (C1217 * C1223 + C1196 * ce)) / C1114) / C1189 -
        ((C1196 + C1262 * C1194 * C1200) * C1198) / C1191 -
        ((C1217 * C1251 + C1196 * ae) * ce) / C1191 +
        C1217 * ((-(C1251 * ce) / C1114) / C1189 - (ae * C1223) / C1191 -
                 (C1217 * (C1194 * C1200 + C1262 * bs[4] * std::pow(C1186, 4)) *
                  C1198) /
                     C1191);
    const double C706 =
        C1207 *
        ((-(C1188 * std::pow(C1186, 4) * bs[4] * C1252) / C1114) / C1189 -
         (C1251 * ce) / C1191);
    const double C725 =
        (-(C1207 * C1188 * std::pow(C1186, 4) * bs[4] * C1258) / C1114) /
            C1189 -
        (C1188 * C1251 * ce) / C1191;
    const double C888 =
        C1217 *
            ((-(C1188 * std::pow(C1186, 4) * bs[4] * C1252) / C1114) / C1189 -
             (C1251 * ce) / C1191) -
        (ae * (C1188 * C1203 + C1196 * ce)) / C1191;
    const double C926 =
        (-(C1188 * C1251 * ce) / C1114) / C1189 - (ae * C1188 * C1223) / C1191 -
        (C1217 * C1188 * (C1194 * C1200 + C1262 * bs[4] * std::pow(C1186, 4)) *
         C1198) /
            C1191;
    const double C1085 =
        C1217 *
            ((-(C1207 * std::pow(C1186, 4) * bs[4] * C1258) / C1114) / C1189 -
             (C1251 * ce) / C1191) -
        (ae * (C1207 * C1213 + C1196 * ce)) / C1191;
    const double C1104 =
        (-(C1207 * C1251 * ce) / C1114) / C1189 - (ae * C1207 * C1223) / C1191 -
        (C1217 * C1207 * (C1194 * C1200 + C1262 * bs[4] * std::pow(C1186, 4)) *
         C1198) /
            C1191;
    const double C191 = (C1190 * C1187 * C1247 + C1251 * C1197) / C1189;
    const double C360 = (C1190 * C1187 * C1247 + C1251 * C1237) / C1189;
    const double C524 =
        (C1190 * C1187 * C1247 + C1217 * (C1217 * C1251 + C1196 * ae) +
         C1217 * C1196 * ae) /
        C1189;
    const double C705 = (C1207 * C1188 * C1251) / C1189;
    const double C887 = (C1217 * C1188 * C1251 + C1188 * C1196 * ae) / C1189;
    const double C1065 = (C1217 * C1207 * C1251 + C1207 * C1196 * ae) / C1189;
    const double C1121 = 2 * C1120;
    const double C55 = (-2 * C1487 * C1491) / C1114;
    const double C577 = -C1491 / C1114;
    const double C1147 = 2 * C1146;
    const double C245 = (-2 * C1487 * C1492) / C1114;
    const double C579 = -C1492 / C1114;
    const double C1163 = 2 * C1162;
    const double C410 = (-2 * C1487 * C1493) / C1114;
    const double C763 = -C1493 / C1114;
    const double C63 =
        ((-C1116 / C1114) / C1118 -
         ((C1404 - (C1115 * C1121) / C1114) * de) / C1114) /
            C1118 -
        ((C1115 * ((-C1121 / C1114) / C1118 - (0 * de) / C1114) + C578) * de) /
            C1114;
    const double C64 = ((-C1121 / C1114) / C1118 - (0 * de) / C1114) / C1118 -
                       (0 * de) / C1114;
    const double C247 = -C1121 / C1114;
    const double C581 = (-C1116 / C1114) / C1118 -
                        ((C1404 - (C1115 * C1121) / C1114) * de) / C1114;
    const double C582 = (-C1121 / C1114) / C1118 - (0 * de) / C1114;
    const double C62 =
        ((-(0 * de) / C1114) / C1118 -
         ((0 - (C1115 * C1116) / C1114) * de) / C1114) /
            C1118 -
        ((C1115 * ((-C1116 / C1114) / C1118 -
                   ((C1404 - (C1115 * C1121) / C1114) * de) / C1114) +
          C577) *
         de) /
            C1114 +
        (-C1121 / C1114) / C1118 - (0 * de) / C1114;
    const double C271 =
        ((-C1144 / C1114) / C1118 -
         ((C1425 - (C1143 * C1147) / C1114) * de) / C1114) /
            C1118 -
        ((C1143 * ((-C1147 / C1114) / C1118 - (0 * de) / C1114) + C580) * de) /
            C1114;
    const double C272 = ((-C1147 / C1114) / C1118 - (0 * de) / C1114) / C1118 -
                        (0 * de) / C1114;
    const double C605 = (-C1144 / C1114) / C1118 -
                        ((C1425 - (C1143 * C1147) / C1114) * de) / C1114;
    const double C606 = (-C1147 / C1114) / C1118 - (0 * de) / C1114;
    const double C270 =
        ((-(0 * de) / C1114) / C1118 -
         ((0 - (C1143 * C1144) / C1114) * de) / C1114) /
            C1118 -
        ((C1143 * ((-C1144 / C1114) / C1118 -
                   ((C1425 - (C1143 * C1147) / C1114) * de) / C1114) +
          C579) *
         de) /
            C1114 +
        (-C1147 / C1114) / C1118 - (0 * de) / C1114;
    const double C453 =
        ((-C1160 / C1114) / C1118 -
         ((C1436 - (C1159 * C1163) / C1114) * de) / C1114) /
            C1118 -
        ((C1159 * ((-C1163 / C1114) / C1118 - (0 * de) / C1114) + C764) * de) /
            C1114;
    const double C454 = ((-C1163 / C1114) / C1118 - (0 * de) / C1114) / C1118 -
                        (0 * de) / C1114;
    const double C807 = (-C1160 / C1114) / C1118 -
                        ((C1436 - (C1159 * C1163) / C1114) * de) / C1114;
    const double C808 = (-C1163 / C1114) / C1118 - (0 * de) / C1114;
    const double C452 =
        ((-(0 * de) / C1114) / C1118 -
         ((0 - (C1159 * C1160) / C1114) * de) / C1114) /
            C1118 -
        ((C1159 * ((-C1160 / C1114) / C1118 -
                   ((C1436 - (C1159 * C1163) / C1114) * de) / C1114) +
          C763) *
         de) /
            C1114 +
        (-C1163 / C1114) / C1118 - (0 * de) / C1114;
    d2eexx[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C61 * C65 + C53 * C68) * C581 + (C61 * C69 + C53 * C74) * C577 -
           (C61 * C66 + C53 * C70) * C582 - (C61 * C71 + C53 * C75) * C578) *
              C57 * C58 * C1436 * C579 +
          ((C61 * C583 + C53 * C584) * C582 -
           ((C61 * C250 + C53 * C254) * C577 +
            (C61 * C248 + C53 * C251) * C581) +
           (C61 * C585 + C53 * C586) * C578) *
              C57 * C58 * C1436 * C580)) /
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
         C1436) /
        (p * q * std::sqrt(p + q));
    d2eexz[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C61 * C65 + C53 * C68) * C112 +
                     (C61 * C113 + C53 * C116) * C1436) *
                        C57 * C58 * C579 -
                    ((C61 * C291 + C53 * C293) * C1436 +
                     (C61 * C248 + C53 * C251) * C112) *
                        C57 * C58 * C580) *
                       C577 +
                   (((C61 * C583 + C53 * C584) * C112 +
                     (C61 * C627 + C53 * C628) * C1436) *
                        C57 * C58 * C580 -
                    ((C61 * C114 + C53 * C117) * C1436 +
                     (C61 * C66 + C53 * C70) * C112) *
                        C57 * C58 * C579) *
                       C578)) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C133 * C65 + C57 * C134) * C581 + (C133 * C69 + C57 * C137) * C577 -
           (C133 * C66 + C57 * C135) * C582 -
           (C133 * C71 + C57 * C138) * C578) *
              C58 * C53 * C1436 * C579 +
          ((C133 * C583 + C57 * C647) * C582 -
           ((C133 * C250 + C57 * C311) * C577 +
            (C133 * C248 + C57 * C309) * C581) +
           (C133 * C585 + C57 * C648) * C578) *
              C58 * C53 * C1436 * C580)) /
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
         C1436) /
        (p * q * std::sqrt(p + q));
    d2eeyz[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C133 * C65 + C57 * C134) * C112 +
                     (C133 * C113 + C57 * C171) * C1436) *
                        C58 * C53 * C579 -
                    ((C133 * C291 + C57 * C343) * C1436 +
                     (C133 * C248 + C57 * C309) * C112) *
                        C58 * C53 * C580) *
                       C577 +
                   (((C133 * C583 + C57 * C647) * C112 +
                     (C133 * C627 + C57 * C686) * C1436) *
                        C58 * C53 * C580 -
                    ((C133 * C114 + C57 * C172) * C1436 +
                     (C133 * C66 + C57 * C135) * C112) *
                        C58 * C53 * C579) *
                       C578)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C188 * C65 + C58 * C189) * C581 + (C188 * C69 + C58 * C192) * C577 -
           (C188 * C66 + C58 * C190) * C582 -
           (C188 * C71 + C58 * C193) * C578) *
              C53 * C57 * C1436 * C579 +
          ((C188 * C583 + C58 * C705) * C582 -
           ((C188 * C250 + C58 * C361) * C577 +
            (C188 * C248 + C58 * C359) * C581) +
           (C188 * C585 + C58 * C706) * C578) *
              C53 * C57 * C1436 * C580)) /
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
         C1436) /
        (p * q * std::sqrt(p + q));
    d2eezz[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C188 * C65 + C58 * C189) * C112 +
                     (C188 * C113 + C58 * C226) * C1436) *
                        C53 * C57 * C579 -
                    ((C188 * C291 + C58 * C393) * C1436 +
                     (C188 * C248 + C58 * C359) * C112) *
                        C53 * C57 * C580) *
                       C577 +
                   (((C188 * C583 + C58 * C705) * C112 +
                     (C188 * C627 + C58 * C744) * C1436) *
                        C53 * C57 * C580 -
                    ((C188 * C114 + C58 * C227) * C1436 +
                     (C188 * C66 + C58 * C190) * C112) *
                        C53 * C57 * C579) *
                       C578)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C65 + C53 * C68) * C247 + (C61 * C69 + C53 * C74) * C1404) *
               C57 * C58 * C763 -
           ((C61 * C414 + C53 * C418) * C1404 +
            (C61 * C412 + C53 * C415) * C247) *
               C57 * C58 * C764) *
              C579 +
          (((C61 * C945 + C53 * C946) * C247 +
            (C61 * C947 + C53 * C948) * C1404) *
               C57 * C58 * C764 -
           ((C61 * C250 + C53 * C254) * C1404 +
            (C61 * C248 + C53 * C251) * C247) *
               C57 * C58 * C763) *
              C580)) /
        (p * q * std::sqrt(p + q));
    d2eexy[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C61 * C65 + C53 * C68) * C605 + (C61 * C92 + C53 * C95) * C579 -
           (C61 * C248 + C53 * C251) * C606 -
           (C61 * C273 + C53 * C275) * C580) *
              C57 * C58 * C1404 * C763 +
          ((C61 * C945 + C53 * C946) * C606 -
           ((C61 * C434 + C53 * C436) * C579 +
            (C61 * C412 + C53 * C415) * C605) +
           (C61 * C967 + C53 * C968) * C580) *
              C57 * C58 * C1404 * C764)) /
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
         C1404) /
        (p * q * std::sqrt(p + q));
    d2eeyx[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C133 * C65 + C57 * C134) * C247 +
                     (C133 * C69 + C57 * C137) * C1404) *
                        C58 * C53 * C763 -
                    ((C133 * C414 + C57 * C475) * C1404 +
                     (C133 * C412 + C57 * C473) * C247) *
                        C58 * C53 * C764) *
                       C579 +
                   (((C133 * C945 + C57 * C1007) * C247 +
                     (C133 * C947 + C57 * C1008) * C1404) *
                        C58 * C53 * C764 -
                    ((C133 * C250 + C57 * C311) * C1404 +
                     (C133 * C248 + C57 * C309) * C247) *
                        C58 * C53 * C763) *
                       C580)) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C133 * C65 + C57 * C134) * C605 + (C133 * C92 + C57 * C154) * C579 -
           (C133 * C248 + C57 * C309) * C606 -
           (C133 * C273 + C57 * C327) * C580) *
              C58 * C53 * C1404 * C763 +
          ((C133 * C945 + C57 * C1007) * C606 -
           ((C133 * C434 + C57 * C491) * C579 +
            (C133 * C412 + C57 * C473) * C605) +
           (C133 * C967 + C57 * C1027) * C580) *
              C58 * C53 * C1404 * C764)) /
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
                  C1404) /
                 (p * q * std::sqrt(p + q));
    d2eezx[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C188 * C65 + C58 * C189) * C247 +
                     (C188 * C69 + C58 * C192) * C1404) *
                        C53 * C57 * C763 -
                    ((C188 * C414 + C58 * C525) * C1404 +
                     (C188 * C412 + C58 * C523) * C247) *
                        C53 * C57 * C764) *
                       C579 +
                   (((C188 * C945 + C58 * C1065) * C247 +
                     (C188 * C947 + C58 * C1066) * C1404) *
                        C53 * C57 * C764 -
                    ((C188 * C250 + C58 * C361) * C1404 +
                     (C188 * C248 + C58 * C359) * C247) *
                        C53 * C57 * C763) *
                       C580)) /
                 (p * q * std::sqrt(p + q));
    d2eezy[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C188 * C65 + C58 * C189) * C605 + (C188 * C92 + C58 * C209) * C579 -
           (C188 * C248 + C58 * C359) * C606 -
           (C188 * C273 + C58 * C377) * C580) *
              C53 * C57 * C1404 * C763 +
          ((C188 * C945 + C58 * C1065) * C606 -
           ((C188 * C434 + C58 * C541) * C579 +
            (C188 * C412 + C58 * C523) * C605) +
           (C188 * C967 + C58 * C1085) * C580) *
              C53 * C57 * C1404 * C764)) /
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
                  C1404) /
                 (p * q * std::sqrt(p + q));
    d2eexx[2] +=
        (-std::pow(Pi, 2.5) *
         (((C61 * C65 + C53 * C68) * C247 + (C61 * C69 + C53 * C74) * C1404) *
              C57 * C58 * C1436 * C244 -
          ((C61 * C250 + C53 * C254) * C1404 +
           (C61 * C248 + C53 * C251) * C247) *
              C57 * C58 * C1436 * C245 +
          ((C61 * C249 + C53 * C252) * C247 +
           (C61 * C253 + C53 * C255) * C1404) *
              C57 * C58 * C1436 * C246)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C61 * C65 + C53 * C68) * C62 + (C61 * C69 + C53 * C74) * C54 -
          (C61 * C66 + C53 * C70) * C63 - (C61 * C71 + C53 * C75) * C55 +
          (C61 * C67 + C53 * C72) * C64 + (C61 * C73 + C53 * C76) * C56) *
         C57 * C58 * C1436 * C1425) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C61 * C65 + C53 * C68) * C247 + (C61 * C69 + C53 * C74) * C1404) *
              C57 * C58 * C409 -
          ((C61 * C414 + C53 * C418) * C1404 +
           (C61 * C412 + C53 * C415) * C247) *
              C57 * C58 * C410 +
          ((C61 * C413 + C53 * C416) * C247 +
           (C61 * C417 + C53 * C419) * C1404) *
              C57 * C58 * C411) *
         C1425) /
            (p * q * std::sqrt(p + q));
    d2eexy[2] +=
        (-std::pow(Pi, 2.5) *
         ((C61 * C65 + C53 * C68) * C270 + (C61 * C92 + C53 * C95) * C244 -
          (C61 * C248 + C53 * C251) * C271 - (C61 * C273 + C53 * C275) * C245 +
          (C61 * C249 + C53 * C252) * C272 + (C61 * C274 + C53 * C276) * C246) *
         C57 * C58 * C1404 * C1436) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C61 * C65 + C53 * C68) * C91 + (C61 * C92 + C53 * C95) * C1425) *
              C57 * C58 * C54 -
          ((C61 * C93 + C53 * C96) * C1425 + (C61 * C66 + C53 * C70) * C91) *
              C57 * C58 * C55 +
          ((C61 * C67 + C53 * C72) * C91 + (C61 * C94 + C53 * C97) * C1425) *
              C57 * C58 * C56) *
         C1436) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C61 * C65 + C53 * C68) * C91 + (C61 * C92 + C53 * C95) * C1425) *
              C57 * C58 * C1404 * C409 -
          ((C61 * C434 + C53 * C436) * C1425 +
           (C61 * C412 + C53 * C415) * C91) *
              C57 * C58 * C1404 * C410 +
          ((C61 * C413 + C53 * C416) * C91 +
           (C61 * C435 + C53 * C437) * C1425) *
              C57 * C58 * C1404 * C411)) /
            (p * q * std::sqrt(p + q));
    d2eexz[2] +=
        (-std::pow(Pi, 2.5) *
         (((C61 * C65 + C53 * C68) * C112 + (C61 * C113 + C53 * C116) * C1436) *
              C57 * C58 * C244 -
          ((C61 * C291 + C53 * C293) * C1436 +
           (C61 * C248 + C53 * C251) * C112) *
              C57 * C58 * C245 +
          ((C61 * C249 + C53 * C252) * C112 +
           (C61 * C292 + C53 * C294) * C1436) *
              C57 * C58 * C246) *
         C1404) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C61 * C65 + C53 * C68) * C112 + (C61 * C113 + C53 * C116) * C1436) *
              C57 * C58 * C1425 * C54 -
          ((C61 * C114 + C53 * C117) * C1436 + (C61 * C66 + C53 * C70) * C112) *
              C57 * C58 * C1425 * C55 +
          ((C61 * C67 + C53 * C72) * C112 + (C61 * C115 + C53 * C118) * C1436) *
              C57 * C58 * C1425 * C56)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C61 * C65 + C53 * C68) * C452 + (C61 * C113 + C53 * C116) * C409 -
          (C61 * C412 + C53 * C415) * C453 - (C61 * C455 + C53 * C457) * C410 +
          (C61 * C413 + C53 * C416) * C454 + (C61 * C456 + C53 * C458) * C411) *
         C57 * C58 * C1425 * C1404) /
            (p * q * std::sqrt(p + q));
    d2eeyx[2] +=
        (-std::pow(Pi, 2.5) * (((C133 * C65 + C57 * C134) * C247 +
                                (C133 * C69 + C57 * C137) * C1404) *
                                   C58 * C53 * C1436 * C244 -
                               ((C133 * C250 + C57 * C311) * C1404 +
                                (C133 * C248 + C57 * C309) * C247) *
                                   C58 * C53 * C1436 * C245 +
                               ((C133 * C249 + C57 * C310) * C247 +
                                (C133 * C253 + C57 * C312) * C1404) *
                                   C58 * C53 * C1436 * C246)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C133 * C65 + C57 * C134) * C62 + (C133 * C69 + C57 * C137) * C54 -
          (C133 * C66 + C57 * C135) * C63 - (C133 * C71 + C57 * C138) * C55 +
          (C133 * C67 + C57 * C136) * C64 + (C133 * C73 + C57 * C139) * C56) *
         C58 * C53 * C1436 * C1425) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C133 * C65 + C57 * C134) * C247 +
           (C133 * C69 + C57 * C137) * C1404) *
              C58 * C53 * C409 -
          ((C133 * C414 + C57 * C475) * C1404 +
           (C133 * C412 + C57 * C473) * C247) *
              C58 * C53 * C410 +
          ((C133 * C413 + C57 * C474) * C247 +
           (C133 * C417 + C57 * C476) * C1404) *
              C58 * C53 * C411) *
         C1425) /
            (p * q * std::sqrt(p + q));
    d2eeyy[2] +=
        (-std::pow(Pi, 2.5) *
         ((C133 * C65 + C57 * C134) * C270 + (C133 * C92 + C57 * C154) * C244 -
          (C133 * C248 + C57 * C309) * C271 -
          (C133 * C273 + C57 * C327) * C245 +
          (C133 * C249 + C57 * C310) * C272 +
          (C133 * C274 + C57 * C328) * C246) *
         C58 * C53 * C1404 * C1436) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C133 * C65 + C57 * C134) * C91 +
           (C133 * C92 + C57 * C154) * C1425) *
              C58 * C53 * C54 -
          ((C133 * C93 + C57 * C155) * C1425 +
           (C133 * C66 + C57 * C135) * C91) *
              C58 * C53 * C55 +
          ((C133 * C67 + C57 * C136) * C91 +
           (C133 * C94 + C57 * C156) * C1425) *
              C58 * C53 * C56) *
         C1436) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C133 * C65 + C57 * C134) * C91 +
           (C133 * C92 + C57 * C154) * C1425) *
              C58 * C53 * C1404 * C409 -
          ((C133 * C434 + C57 * C491) * C1425 +
           (C133 * C412 + C57 * C473) * C91) *
              C58 * C53 * C1404 * C410 +
          ((C133 * C413 + C57 * C474) * C91 +
           (C133 * C435 + C57 * C492) * C1425) *
              C58 * C53 * C1404 * C411)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[2] +=
        (-std::pow(Pi, 2.5) *
         (((C133 * C65 + C57 * C134) * C112 +
           (C133 * C113 + C57 * C171) * C1436) *
              C58 * C53 * C244 -
          ((C133 * C291 + C57 * C343) * C1436 +
           (C133 * C248 + C57 * C309) * C112) *
              C58 * C53 * C245 +
          ((C133 * C249 + C57 * C310) * C112 +
           (C133 * C292 + C57 * C344) * C1436) *
              C58 * C53 * C246) *
         C1404) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * (((C133 * C65 + C57 * C134) * C112 +
                               (C133 * C113 + C57 * C171) * C1436) *
                                  C58 * C53 * C1425 * C54 -
                              ((C133 * C114 + C57 * C172) * C1436 +
                               (C133 * C66 + C57 * C135) * C112) *
                                  C58 * C53 * C1425 * C55 +
                              ((C133 * C67 + C57 * C136) * C112 +
                               (C133 * C115 + C57 * C173) * C1436) *
                                  C58 * C53 * C1425 * C56)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C133 * C65 + C57 * C134) * C452 + (C133 * C113 + C57 * C171) * C409 -
          (C133 * C412 + C57 * C473) * C453 -
          (C133 * C455 + C57 * C507) * C410 +
          (C133 * C413 + C57 * C474) * C454 +
          (C133 * C456 + C57 * C508) * C411) *
         C58 * C53 * C1425 * C1404) /
            (p * q * std::sqrt(p + q));
    d2eezx[2] +=
        (-std::pow(Pi, 2.5) * (((C188 * C65 + C58 * C189) * C247 +
                                (C188 * C69 + C58 * C192) * C1404) *
                                   C53 * C57 * C1436 * C244 -
                               ((C188 * C250 + C58 * C361) * C1404 +
                                (C188 * C248 + C58 * C359) * C247) *
                                   C53 * C57 * C1436 * C245 +
                               ((C188 * C249 + C58 * C360) * C247 +
                                (C188 * C253 + C58 * C362) * C1404) *
                                   C53 * C57 * C1436 * C246)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C188 * C65 + C58 * C189) * C62 + (C188 * C69 + C58 * C192) * C54 -
          (C188 * C66 + C58 * C190) * C63 - (C188 * C71 + C58 * C193) * C55 +
          (C188 * C67 + C58 * C191) * C64 + (C188 * C73 + C58 * C194) * C56) *
         C53 * C57 * C1436 * C1425) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C188 * C65 + C58 * C189) * C247 +
           (C188 * C69 + C58 * C192) * C1404) *
              C53 * C57 * C409 -
          ((C188 * C414 + C58 * C525) * C1404 +
           (C188 * C412 + C58 * C523) * C247) *
              C53 * C57 * C410 +
          ((C188 * C413 + C58 * C524) * C247 +
           (C188 * C417 + C58 * C526) * C1404) *
              C53 * C57 * C411) *
         C1425) /
            (p * q * std::sqrt(p + q));
    d2eezy[2] +=
        (-std::pow(Pi, 2.5) *
         ((C188 * C65 + C58 * C189) * C270 + (C188 * C92 + C58 * C209) * C244 -
          (C188 * C248 + C58 * C359) * C271 -
          (C188 * C273 + C58 * C377) * C245 +
          (C188 * C249 + C58 * C360) * C272 +
          (C188 * C274 + C58 * C378) * C246) *
         C53 * C57 * C1404 * C1436) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C188 * C65 + C58 * C189) * C91 +
           (C188 * C92 + C58 * C209) * C1425) *
              C53 * C57 * C54 -
          ((C188 * C93 + C58 * C210) * C1425 +
           (C188 * C66 + C58 * C190) * C91) *
              C53 * C57 * C55 +
          ((C188 * C67 + C58 * C191) * C91 +
           (C188 * C94 + C58 * C211) * C1425) *
              C53 * C57 * C56) *
         C1436) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C188 * C65 + C58 * C189) * C91 +
           (C188 * C92 + C58 * C209) * C1425) *
              C53 * C57 * C1404 * C409 -
          ((C188 * C434 + C58 * C541) * C1425 +
           (C188 * C412 + C58 * C523) * C91) *
              C53 * C57 * C1404 * C410 +
          ((C188 * C413 + C58 * C524) * C91 +
           (C188 * C435 + C58 * C542) * C1425) *
              C53 * C57 * C1404 * C411)) /
            (p * q * std::sqrt(p + q));
    d2eezz[2] +=
        (-std::pow(Pi, 2.5) *
         (((C188 * C65 + C58 * C189) * C112 +
           (C188 * C113 + C58 * C226) * C1436) *
              C53 * C57 * C244 -
          ((C188 * C291 + C58 * C393) * C1436 +
           (C188 * C248 + C58 * C359) * C112) *
              C53 * C57 * C245 +
          ((C188 * C249 + C58 * C360) * C112 +
           (C188 * C292 + C58 * C394) * C1436) *
              C53 * C57 * C246) *
         C1404) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * (((C188 * C65 + C58 * C189) * C112 +
                               (C188 * C113 + C58 * C226) * C1436) *
                                  C53 * C57 * C1425 * C54 -
                              ((C188 * C114 + C58 * C227) * C1436 +
                               (C188 * C66 + C58 * C190) * C112) *
                                  C53 * C57 * C1425 * C55 +
                              ((C188 * C67 + C58 * C191) * C112 +
                               (C188 * C115 + C58 * C228) * C1436) *
                                  C53 * C57 * C1425 * C56)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C188 * C65 + C58 * C189) * C452 + (C188 * C113 + C58 * C226) * C409 -
          (C188 * C412 + C58 * C523) * C453 -
          (C188 * C455 + C58 * C557) * C410 +
          (C188 * C413 + C58 * C524) * C454 +
          (C188 * C456 + C58 * C558) * C411) *
         C53 * C57 * C1425 * C1404) /
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
         C1425) /
        (p * q * std::sqrt(p + q));
    d2eexy[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C65 + C53 * C68) * C91 + (C61 * C92 + C53 * C95) * C1425) *
               C57 * C58 * C577 -
           ((C61 * C93 + C53 * C96) * C1425 + (C61 * C66 + C53 * C70) * C91) *
               C57 * C58 * C578) *
              C763 +
          (((C61 * C765 + C53 * C766) * C91 +
            (C61 * C787 + C53 * C788) * C1425) *
               C57 * C58 * C578 -
           ((C61 * C434 + C53 * C436) * C1425 +
            (C61 * C412 + C53 * C415) * C91) *
               C57 * C58 * C577) *
              C764)) /
        (p * q * std::sqrt(p + q));
    d2eexz[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C61 * C65 + C53 * C68) * C807 + (C61 * C113 + C53 * C116) * C763 -
           (C61 * C412 + C53 * C415) * C808 -
           (C61 * C455 + C53 * C457) * C764) *
              C57 * C58 * C1425 * C577 +
          ((C61 * C765 + C53 * C766) * C808 -
           ((C61 * C114 + C53 * C117) * C763 + (C61 * C66 + C53 * C70) * C807) +
           (C61 * C809 + C53 * C810) * C764) *
              C57 * C58 * C1425 * C578)) /
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
         C1425) /
        (p * q * std::sqrt(p + q));
    d2eeyy[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C133 * C65 + C57 * C134) * C91 +
                     (C133 * C92 + C57 * C154) * C1425) *
                        C58 * C53 * C577 -
                    ((C133 * C93 + C57 * C155) * C1425 +
                     (C133 * C66 + C57 * C135) * C91) *
                        C58 * C53 * C578) *
                       C763 +
                   (((C133 * C765 + C57 * C829) * C91 +
                     (C133 * C787 + C57 * C849) * C1425) *
                        C58 * C53 * C578 -
                    ((C133 * C434 + C57 * C491) * C1425 +
                     (C133 * C412 + C57 * C473) * C91) *
                        C58 * C53 * C577) *
                       C764)) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C133 * C65 + C57 * C134) * C807 +
                    (C133 * C113 + C57 * C171) * C763 -
                    (C133 * C412 + C57 * C473) * C808 -
                    (C133 * C455 + C57 * C507) * C764) *
                       C58 * C53 * C1425 * C577 +
                   ((C133 * C765 + C57 * C829) * C808 -
                    ((C133 * C114 + C57 * C172) * C763 +
                     (C133 * C66 + C57 * C135) * C807) +
                    (C133 * C809 + C57 * C868) * C764) *
                       C58 * C53 * C1425 * C578)) /
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
         C1425) /
        (p * q * std::sqrt(p + q));
    d2eezy[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C188 * C65 + C58 * C189) * C91 +
                     (C188 * C92 + C58 * C209) * C1425) *
                        C53 * C57 * C577 -
                    ((C188 * C93 + C58 * C210) * C1425 +
                     (C188 * C66 + C58 * C190) * C91) *
                        C53 * C57 * C578) *
                       C763 +
                   (((C188 * C765 + C58 * C887) * C91 +
                     (C188 * C787 + C58 * C907) * C1425) *
                        C53 * C57 * C578 -
                    ((C188 * C434 + C58 * C541) * C1425 +
                     (C188 * C412 + C58 * C523) * C91) *
                        C53 * C57 * C577) *
                       C764)) /
                 (p * q * std::sqrt(p + q));
    d2eezz[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C188 * C65 + C58 * C189) * C807 +
                    (C188 * C113 + C58 * C226) * C763 -
                    (C188 * C412 + C58 * C523) * C808 -
                    (C188 * C455 + C58 * C557) * C764) *
                       C53 * C57 * C1425 * C577 +
                   ((C188 * C765 + C58 * C887) * C808 -
                    ((C188 * C114 + C58 * C227) * C763 +
                     (C188 * C66 + C58 * C190) * C807) +
                    (C188 * C809 + C58 * C926) * C764) *
                       C53 * C57 * C1425 * C578)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C61 * C65 + C53 * C68) * C62 + (C61 * C69 + C53 * C74) * C54 -
          (C61 * C66 + C53 * C70) * C63 - (C61 * C71 + C53 * C75) * C55 +
          (C61 * C67 + C53 * C72) * C64 + (C61 * C73 + C53 * C76) * C56) *
         C57 * C58 * C1436 * C1425) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C61 * C65 + C53 * C68) * C247 + (C61 * C69 + C53 * C74) * C1404) *
              C57 * C58 * C1436 * C244 -
          ((C61 * C250 + C53 * C254) * C1404 +
           (C61 * C248 + C53 * C251) * C247) *
              C57 * C58 * C1436 * C245 +
          ((C61 * C249 + C53 * C252) * C247 +
           (C61 * C253 + C53 * C255) * C1404) *
              C57 * C58 * C1436 * C246)) /
            (p * q * std::sqrt(p + q));
    d2eexy[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C61 * C65 + C53 * C68) * C91 + (C61 * C92 + C53 * C95) * C1425) *
              C57 * C58 * C54 -
          ((C61 * C93 + C53 * C96) * C1425 + (C61 * C66 + C53 * C70) * C91) *
              C57 * C58 * C55 +
          ((C61 * C67 + C53 * C72) * C91 + (C61 * C94 + C53 * C97) * C1425) *
              C57 * C58 * C56) *
         C1436) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C61 * C65 + C53 * C68) * C270 + (C61 * C92 + C53 * C95) * C244 -
          (C61 * C248 + C53 * C251) * C271 - (C61 * C273 + C53 * C275) * C245 +
          (C61 * C249 + C53 * C252) * C272 + (C61 * C274 + C53 * C276) * C246) *
         C57 * C58 * C1404 * C1436) /
            (p * q * std::sqrt(p + q));
    d2eexz[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C61 * C65 + C53 * C68) * C112 + (C61 * C113 + C53 * C116) * C1436) *
              C57 * C58 * C1425 * C54 -
          ((C61 * C114 + C53 * C117) * C1436 + (C61 * C66 + C53 * C70) * C112) *
              C57 * C58 * C1425 * C55 +
          ((C61 * C67 + C53 * C72) * C112 + (C61 * C115 + C53 * C118) * C1436) *
              C57 * C58 * C1425 * C56)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C61 * C65 + C53 * C68) * C112 + (C61 * C113 + C53 * C116) * C1436) *
              C57 * C58 * C244 -
          ((C61 * C291 + C53 * C293) * C1436 +
           (C61 * C248 + C53 * C251) * C112) *
              C57 * C58 * C245 +
          ((C61 * C249 + C53 * C252) * C112 +
           (C61 * C292 + C53 * C294) * C1436) *
              C57 * C58 * C246) *
         C1404) /
            (p * q * std::sqrt(p + q));
    d2eeyx[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C133 * C65 + C57 * C134) * C62 + (C133 * C69 + C57 * C137) * C54 -
          (C133 * C66 + C57 * C135) * C63 - (C133 * C71 + C57 * C138) * C55 +
          (C133 * C67 + C57 * C136) * C64 + (C133 * C73 + C57 * C139) * C56) *
         C58 * C53 * C1436 * C1425) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C133 * C65 + C57 * C134) * C247 +
           (C133 * C69 + C57 * C137) * C1404) *
              C58 * C53 * C1436 * C244 -
          ((C133 * C250 + C57 * C311) * C1404 +
           (C133 * C248 + C57 * C309) * C247) *
              C58 * C53 * C1436 * C245 +
          ((C133 * C249 + C57 * C310) * C247 +
           (C133 * C253 + C57 * C312) * C1404) *
              C58 * C53 * C1436 * C246)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C133 * C65 + C57 * C134) * C91 +
           (C133 * C92 + C57 * C154) * C1425) *
              C58 * C53 * C54 -
          ((C133 * C93 + C57 * C155) * C1425 +
           (C133 * C66 + C57 * C135) * C91) *
              C58 * C53 * C55 +
          ((C133 * C67 + C57 * C136) * C91 +
           (C133 * C94 + C57 * C156) * C1425) *
              C58 * C53 * C56) *
         C1436) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C133 * C65 + C57 * C134) * C270 + (C133 * C92 + C57 * C154) * C244 -
          (C133 * C248 + C57 * C309) * C271 -
          (C133 * C273 + C57 * C327) * C245 +
          (C133 * C249 + C57 * C310) * C272 +
          (C133 * C274 + C57 * C328) * C246) *
         C58 * C53 * C1404 * C1436) /
            (p * q * std::sqrt(p + q));
    d2eeyz[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C133 * C65 + C57 * C134) * C112 +
                    (C133 * C113 + C57 * C171) * C1436) *
                       C58 * C53 * C1425 * C54 -
                   ((C133 * C114 + C57 * C172) * C1436 +
                    (C133 * C66 + C57 * C135) * C112) *
                       C58 * C53 * C1425 * C55 +
                   ((C133 * C67 + C57 * C136) * C112 +
                    (C133 * C115 + C57 * C173) * C1436) *
                       C58 * C53 * C1425 * C56)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C133 * C65 + C57 * C134) * C112 +
                    (C133 * C113 + C57 * C171) * C1436) *
                       C58 * C53 * C244 -
                   ((C133 * C291 + C57 * C343) * C1436 +
                    (C133 * C248 + C57 * C309) * C112) *
                       C58 * C53 * C245 +
                   ((C133 * C249 + C57 * C310) * C112 +
                    (C133 * C292 + C57 * C344) * C1436) *
                       C58 * C53 * C246) *
                  C1404) /
                     (p * q * std::sqrt(p + q));
    d2eezx[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C188 * C65 + C58 * C189) * C62 + (C188 * C69 + C58 * C192) * C54 -
          (C188 * C66 + C58 * C190) * C63 - (C188 * C71 + C58 * C193) * C55 +
          (C188 * C67 + C58 * C191) * C64 + (C188 * C73 + C58 * C194) * C56) *
         C53 * C57 * C1436 * C1425) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C188 * C65 + C58 * C189) * C247 +
           (C188 * C69 + C58 * C192) * C1404) *
              C53 * C57 * C1436 * C244 -
          ((C188 * C250 + C58 * C361) * C1404 +
           (C188 * C248 + C58 * C359) * C247) *
              C53 * C57 * C1436 * C245 +
          ((C188 * C249 + C58 * C360) * C247 +
           (C188 * C253 + C58 * C362) * C1404) *
              C53 * C57 * C1436 * C246)) /
            (p * q * std::sqrt(p + q));
    d2eezy[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C188 * C65 + C58 * C189) * C91 +
           (C188 * C92 + C58 * C209) * C1425) *
              C53 * C57 * C54 -
          ((C188 * C93 + C58 * C210) * C1425 +
           (C188 * C66 + C58 * C190) * C91) *
              C53 * C57 * C55 +
          ((C188 * C67 + C58 * C191) * C91 +
           (C188 * C94 + C58 * C211) * C1425) *
              C53 * C57 * C56) *
         C1436) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C188 * C65 + C58 * C189) * C270 + (C188 * C92 + C58 * C209) * C244 -
          (C188 * C248 + C58 * C359) * C271 -
          (C188 * C273 + C58 * C377) * C245 +
          (C188 * C249 + C58 * C360) * C272 +
          (C188 * C274 + C58 * C378) * C246) *
         C53 * C57 * C1404 * C1436) /
            (p * q * std::sqrt(p + q));
    d2eezz[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C188 * C65 + C58 * C189) * C112 +
                    (C188 * C113 + C58 * C226) * C1436) *
                       C53 * C57 * C1425 * C54 -
                   ((C188 * C114 + C58 * C227) * C1436 +
                    (C188 * C66 + C58 * C190) * C112) *
                       C53 * C57 * C1425 * C55 +
                   ((C188 * C67 + C58 * C191) * C112 +
                    (C188 * C115 + C58 * C228) * C1436) *
                       C53 * C57 * C1425 * C56)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C188 * C65 + C58 * C189) * C112 +
                    (C188 * C113 + C58 * C226) * C1436) *
                       C53 * C57 * C244 -
                   ((C188 * C291 + C58 * C393) * C1436 +
                    (C188 * C248 + C58 * C359) * C112) *
                       C53 * C57 * C245 +
                   ((C188 * C249 + C58 * C360) * C112 +
                    (C188 * C292 + C58 * C394) * C1436) *
                       C53 * C57 * C246) *
                  C1404) /
                     (p * q * std::sqrt(p + q));
}
