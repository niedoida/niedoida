/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_sdss_AB.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
void second_derivative_ee_0200_12(const double ae,
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
    const double C1130 = ae * be;
    const double C1129 = ae + be;
    const double C1128 = 0 * be;
    const double C1127 = xA - xB;
    const double C1159 = yA - yB;
    const double C1162 = zA - zB;
    const double C1173 = 0 * be;
    const double C1199 = 0 * be;
    const double C1245 = p + q;
    const double C1244 = p * q;
    const double C1250 = xP - xQ;
    const double C1249 = bs[2];
    const double C1255 = bs[3];
    const double C1266 = yP - yQ;
    const double C1276 = zP - zQ;
    const double C67 = bs[0];
    const double C1546 = ce + de;
    const double C1545 = ce * de;
    const double C1138 = 2 * C1130;
    const double C1131 = std::pow(C1129, 2);
    const double C1544 = 2 * C1129;
    const double C1132 = C1130 * C1127;
    const double C1457 = std::pow(C1127, 2);
    const double C1543 = C1127 * ae;
    const double C1174 = C1130 * C1159;
    const double C1480 = std::pow(C1159, 2);
    const double C1547 = C1159 * ae;
    const double C1200 = C1130 * C1162;
    const double C1491 = std::pow(C1162, 2);
    const double C1548 = C1162 * ae;
    const double C1246 = 2 * C1244;
    const double C1258 = C1250 * ae;
    const double C1257 = C1250 * be;
    const double C1254 = std::pow(C1250, 2);
    const double C1269 = C1266 * be;
    const double C1268 = C1250 * C1266;
    const double C1288 = C1266 * ae;
    const double C1287 = C1266 * C1250;
    const double C1296 = std::pow(C1266, 2);
    const double C1279 = C1276 * be;
    const double C1278 = C1250 * C1276;
    const double C1300 = C1266 * C1276;
    const double C1307 = C1276 * ae;
    const double C1306 = C1276 * C1250;
    const double C1315 = C1276 * C1266;
    const double C1321 = std::pow(C1276, 2);
    const double C58 = std::exp(-(std::pow(zC - zD, 2) * C1545) / C1546);
    const double C59 = std::exp(-(std::pow(yC - yD, 2) * C1545) / C1546);
    const double C60 = std::exp(-(std::pow(xC - xD, 2) * C1545) / C1546);
    const double C1133 = 2 * C1131;
    const double C1551 = std::pow(C1544, -2);
    const double C1549 = std::pow(C1544, -1);
    const double C1458 = C1457 * C1130;
    const double C1481 = C1480 * C1130;
    const double C1492 = C1491 * C1130;
    const double C1248 = C1246 / C1245;
    const double C76 =
        ((std::pow(xP - xQ, 2) * bs[2] * std::pow(C1246 / C1245, 2) -
          (bs[1] * C1246) / C1245) *
         C1130) /
        C1131;
    const double C68 = -(C1250 * bs[1] * C1246) / C1245;
    const double C251 = -(C1266 * bs[1] * C1246) / C1245;
    const double C418 = -(C1276 * bs[1] * C1246) / C1245;
    const double C1261 = C1255 * C1258;
    const double C71 = (-(bs[1] * C1258 * C1246) / C1245) / C1129;
    const double C1260 = C1255 * C1257;
    const double C70 = (-(bs[1] * C1257 * C1246) / C1245) / C1129;
    const double C1271 = C1255 * C1269;
    const double C94 = (-(bs[1] * C1269 * C1246) / C1245) / C1129;
    const double C1270 = C1268 * ae;
    const double C1290 = C1255 * C1288;
    const double C135 = (-(bs[1] * C1288 * C1246) / C1245) / C1129;
    const double C1289 = C1287 * ae;
    const double C1281 = C1255 * C1279;
    const double C115 = (-(bs[1] * C1279 * C1246) / C1245) / C1129;
    const double C1280 = C1278 * ae;
    const double C1301 = C1300 * ae;
    const double C1309 = C1255 * C1307;
    const double C190 = (-(bs[1] * C1307 * C1246) / C1245) / C1129;
    const double C1308 = C1306 * ae;
    const double C1316 = C1315 * ae;
    const double C1459 = C1458 / C1129;
    const double C1482 = C1481 / C1129;
    const double C1493 = C1492 / C1129;
    const double C1251 = std::pow(C1248, 2);
    const double C1256 = -C1248;
    const double C1272 = C1270 * be;
    const double C1291 = C1289 * be;
    const double C1282 = C1280 * be;
    const double C1302 = C1301 * be;
    const double C1310 = C1308 * be;
    const double C1317 = C1316 * be;
    const double C1460 = -C1459;
    const double C1483 = -C1482;
    const double C1494 = -C1493;
    const double C1253 = C1249 * C1251;
    const double C77 =
        (ae * C1251 * C1249 * C1250 * be + be * C1251 * C1249 * C1250 * ae +
         C1250 *
             (C1249 * C1251 +
              std::pow(C1250, 2) * bs[3] * std::pow(-C1248, 3)) *
             C1130) /
        C1131;
    const double C97 = (C1251 * C1249 * C1250 * (yP - yQ) * ae * be) / C1131;
    const double C118 = (C1251 * C1249 * C1250 * (zP - zQ) * ae * be) / C1131;
    const double C138 = (C1251 * C1249 * C1266 * C1250 * ae * be) / C1131;
    const double C156 =
        ((std::pow(C1266, 2) * C1249 * C1251 - (bs[1] * C1246) / C1245) *
         C1130) /
        C1131;
    const double C173 = (C1251 * C1249 * C1266 * C1276 * ae * be) / C1131;
    const double C193 = (C1251 * C1249 * C1276 * C1250 * ae * be) / C1131;
    const double C210 = (C1251 * C1249 * C1276 * C1266 * ae * be) / C1131;
    const double C228 =
        ((std::pow(C1276, 2) * C1249 * C1251 - (bs[1] * C1246) / C1245) *
         C1130) /
        C1131;
    const double C72 = (C1250 * C1251 * C1249 * C1257) / C1129 -
                       (be * bs[1] * C1246) / (C1245 * C1129);
    const double C73 = (C1250 * C1251 * C1249 * C1258) / C1129 -
                       (ae * bs[1] * C1246) / (C1245 * C1129);
    const double C95 = (C1250 * C1251 * C1249 * C1269) / C1129;
    const double C116 = (C1250 * C1251 * C1249 * C1279) / C1129;
    const double C136 = (C1250 * C1251 * C1249 * C1288) / C1129;
    const double C191 = (C1250 * C1251 * C1249 * C1307) / C1129;
    const double C253 = (C1266 * C1251 * C1249 * C1257) / C1129;
    const double C254 = (C1266 * C1251 * C1249 * C1258) / C1129;
    const double C276 = (C1266 * C1251 * C1249 * C1269) / C1129 -
                        (be * bs[1] * C1246) / (C1245 * C1129);
    const double C294 = (C1266 * C1251 * C1249 * C1279) / C1129;
    const double C312 = (C1266 * C1251 * C1249 * C1288) / C1129 -
                        (ae * bs[1] * C1246) / (C1245 * C1129);
    const double C365 = (C1266 * C1251 * C1249 * C1307) / C1129;
    const double C420 = (C1276 * C1251 * C1249 * C1257) / C1129;
    const double C421 = (C1276 * C1251 * C1249 * C1258) / C1129;
    const double C440 = (C1276 * C1251 * C1249 * C1269) / C1129;
    const double C461 = (C1276 * C1251 * C1249 * C1279) / C1129 -
                        (be * bs[1] * C1246) / (C1245 * C1129);
    const double C479 = (C1276 * C1251 * C1249 * C1288) / C1129;
    const double C529 = (C1276 * C1251 * C1249 * C1307) / C1129 -
                        (ae * bs[1] * C1246) / (C1245 * C1129);
    const double C1259 = std::pow(C1256, 3);
    const double C1461 = std::exp(C1460);
    const double C1484 = std::exp(C1483);
    const double C1495 = std::exp(C1494);
    const double C69 = C1253 * C1254 - (bs[1] * C1246) / C1245;
    const double C252 = C1253 * C1296 - (bs[1] * C1246) / C1245;
    const double C419 = C1253 * C1321 - (bs[1] * C1246) / C1245;
    const double C594 = C1266 * C1250 * C1253;
    const double C778 = C1276 * C1250 * C1253;
    const double C960 = C1276 * C1266 * C1253;
    const double C1263 = C1259 * C1261;
    const double C1262 = C1259 * C1260;
    const double C1273 = C1259 * C1271;
    const double C1283 = C1259 * C1281;
    const double C1292 = C1259 * C1290;
    const double C1311 = C1259 * C1309;
    const double C98 = (ae * C1251 * C1249 * C1266 * be +
                        C1250 * C1259 * C1255 * C1250 * C1266 * ae * be) /
                       C1131;
    const double C119 = (ae * C1251 * C1249 * C1276 * be +
                         C1250 * C1259 * C1255 * C1250 * C1276 * ae * be) /
                        C1131;
    const double C139 = (be * C1251 * C1249 * C1266 * ae +
                         C1250 * C1259 * C1255 * C1266 * C1250 * ae * be) /
                        C1131;
    const double C157 =
        (C1250 * (C1253 + std::pow(C1266, 2) * C1255 * C1259) * C1130) / C1131;
    const double C158 =
        ((C1253 + C1296 * C1255 * C1259) * C1130 +
         (C1255 * C1259 + C1296 * bs[4] * std::pow(C1248, 4)) * C1130 * C1254) /
        C1131;
    const double C174 =
        (C1250 * C1259 * C1255 * C1266 * C1276 * ae * be) / C1131;
    const double C175 =
        (C1259 * C1255 * C1302 + std::pow(C1248, 4) * bs[4] * C1302 * C1254) /
        C1131;
    const double C194 = (be * C1251 * C1249 * C1276 * ae +
                         C1250 * C1259 * C1255 * C1276 * C1250 * ae * be) /
                        C1131;
    const double C211 =
        (C1250 * C1259 * C1255 * C1276 * C1266 * ae * be) / C1131;
    const double C212 =
        (C1259 * C1255 * C1317 + std::pow(C1248, 4) * bs[4] * C1317 * C1254) /
        C1131;
    const double C229 =
        (C1250 * (C1253 + std::pow(C1276, 2) * C1255 * C1259) * C1130) / C1131;
    const double C230 =
        ((C1253 + C1321 * C1255 * C1259) * C1130 +
         (C1255 * C1259 + C1321 * bs[4] * std::pow(C1248, 4)) * C1130 * C1254) /
        C1131;
    const double C257 =
        (C1266 * (C1253 + C1254 * C1255 * C1259) * C1130) / C1131;
    const double C258 =
        ((C1253 + C1254 * C1255 * C1259) * C1130 +
         (C1255 * C1259 + C1254 * bs[4] * std::pow(C1248, 4)) * C1130 * C1296) /
        C1131;
    const double C278 =
        (be * C1251 * C1249 * C1258 + C1266 * C1259 * C1255 * C1272) / C1131;
    const double C296 = (C1266 * C1259 * C1255 * C1282) / C1131;
    const double C297 =
        (C1259 * C1255 * C1282 + std::pow(C1248, 4) * bs[4] * C1282 * C1296) /
        C1131;
    const double C314 =
        (ae * C1251 * C1249 * C1257 + C1266 * C1259 * C1255 * C1291) / C1131;
    const double C333 =
        (ae * C1251 * C1249 * C1269 + be * C1251 * C1249 * C1288 +
         C1266 * (C1253 + C1296 * C1255 * C1259) * C1130) /
        C1131;
    const double C349 =
        (ae * C1251 * C1249 * C1279 + C1266 * C1259 * C1255 * C1302) / C1131;
    const double C367 = (C1266 * C1259 * C1255 * C1310) / C1131;
    const double C368 =
        (C1259 * C1255 * C1310 + std::pow(C1248, 4) * bs[4] * C1310 * C1296) /
        C1131;
    const double C383 =
        (be * C1251 * C1249 * C1307 + C1266 * C1259 * C1255 * C1317) / C1131;
    const double C399 =
        (C1266 * (C1253 + C1321 * C1255 * C1259) * C1130) / C1131;
    const double C400 =
        ((C1253 + C1321 * C1255 * C1259) * C1130 +
         (C1255 * C1259 + C1321 * bs[4] * std::pow(C1248, 4)) * C1130 * C1296) /
        C1131;
    const double C424 =
        (C1276 * (C1253 + C1254 * C1255 * C1259) * C1130) / C1131;
    const double C425 =
        ((C1253 + C1254 * C1255 * C1259) * C1130 +
         (C1255 * C1259 + C1254 * bs[4] * std::pow(C1248, 4)) * C1130 * C1321) /
        C1131;
    const double C442 = (C1276 * C1259 * C1255 * C1272) / C1131;
    const double C443 =
        (C1259 * C1255 * C1272 + std::pow(C1248, 4) * bs[4] * C1272 * C1321) /
        C1131;
    const double C463 =
        (be * C1251 * C1249 * C1258 + C1276 * C1259 * C1255 * C1282) / C1131;
    const double C481 = (C1276 * C1259 * C1255 * C1291) / C1131;
    const double C482 =
        (C1259 * C1255 * C1291 + std::pow(C1248, 4) * bs[4] * C1291 * C1321) /
        C1131;
    const double C497 =
        (C1276 * (C1253 + C1296 * C1255 * C1259) * C1130) / C1131;
    const double C498 =
        ((C1253 + C1296 * C1255 * C1259) * C1130 +
         (C1255 * C1259 + C1296 * bs[4] * std::pow(C1248, 4)) * C1130 * C1321) /
        C1131;
    const double C513 =
        (be * C1251 * C1249 * C1288 + C1276 * C1259 * C1255 * C1302) / C1131;
    const double C531 =
        (ae * C1251 * C1249 * C1257 + C1276 * C1259 * C1255 * C1310) / C1131;
    const double C547 =
        (ae * C1251 * C1249 * C1269 + C1276 * C1259 * C1255 * C1317) / C1131;
    const double C566 =
        (ae * C1251 * C1249 * C1279 + be * C1251 * C1249 * C1307 +
         C1276 * (C1253 + C1321 * C1255 * C1259) * C1130) /
        C1131;
    const double C757 =
        (C1266 * C1250 * (C1255 * C1259 + C1321 * bs[4] * std::pow(C1248, 4)) *
         C1130) /
        C1131;
    const double C862 =
        (C1276 * C1250 * (C1255 * C1259 + C1296 * bs[4] * std::pow(C1248, 4)) *
         C1130) /
        C1131;
    const double C963 =
        (C1276 * C1266 * (C1255 * C1259 + C1254 * bs[4] * std::pow(C1248, 4)) *
         C1130) /
        C1131;
    const double C1134 = C1132 * C1461;
    const double C1550 = C1461 * C1543;
    const double C53 = (C1461 * std::pow(C1543, 2)) / C1131 + C1461 / C1544;
    const double C55 = C1551 * C1461;
    const double C587 = C1549 * C1461;
    const double C1175 = C1174 * C1484;
    const double C93 = -(2 * C1130 * (yA - yB) * C1484) / C1129;
    const double C155 =
        -((C1484 - (C1159 * 2 * C1130 * C1159 * C1484) / C1129) * C1138) /
        C1129;
    const double C1552 = C1484 * C1547;
    const double C246 = (C1484 * std::pow(C1547, 2)) / C1131 + C1484 / C1544;
    const double C248 = C1551 * C1484;
    const double C589 = C1549 * C1484;
    const double C1201 = C1200 * C1495;
    const double C114 = -(2 * C1130 * (zA - zB) * C1495) / C1129;
    const double C227 =
        -((C1495 - (C1162 * 2 * C1130 * C1162 * C1495) / C1129) * C1138) /
        C1129;
    const double C1553 = C1495 * C1548;
    const double C415 = (C1495 * std::pow(C1548, 2)) / C1131 + C1495 / C1544;
    const double C417 = C1551 * C1495;
    const double C777 = C1549 * C1495;
    const double C279 =
        (C1259 * C1255 * C1272 + be * C1266 * C1263 +
         C1266 * (be * C1263 + C1266 * std::pow(C1248, 4) * bs[4] * C1272)) /
        C1131;
    const double C464 =
        (C1259 * C1255 * C1282 + be * C1276 * C1263 +
         C1276 * (be * C1263 + C1276 * std::pow(C1248, 4) * bs[4] * C1282)) /
        C1131;
    const double C983 =
        (C1276 * (be * C1263 + C1266 * std::pow(C1248, 4) * bs[4] * C1272)) /
        C1131;
    const double C1003 = (be * C1266 * C1263 +
                          C1276 * C1266 * std::pow(C1248, 4) * bs[4] * C1282) /
                         C1131;
    const double C75 =
        (C1251 * C1249 * C1258 + C1250 * (C1250 * C1263 + C1253 * ae) +
         C1250 * C1253 * ae) /
        C1129;
    const double C256 = (C1251 * C1249 * C1258 + C1263 * C1296) / C1129;
    const double C423 = (C1251 * C1249 * C1258 + C1263 * C1321) / C1129;
    const double C596 = (C1266 * (C1250 * C1263 + C1253 * ae)) / C1129;
    const double C780 = (C1276 * (C1250 * C1263 + C1253 * ae)) / C1129;
    const double C962 = (C1276 * C1266 * C1263) / C1129;
    const double C78 =
        ((C1253 + C1254 * C1255 * C1259) * C1130 +
         ae * (C1250 * C1262 + C1253 * be) + be * (C1250 * C1263 + C1253 * ae) +
         C1250 * (ae * C1262 + be * C1263 +
                  C1250 * (C1255 * C1259 + C1254 * bs[4] * std::pow(C1248, 4)) *
                      C1130)) /
        C1131;
    const double C315 =
        (C1259 * C1255 * C1291 + ae * C1266 * C1262 +
         C1266 * (ae * C1262 + C1266 * std::pow(C1248, 4) * bs[4] * C1291)) /
        C1131;
    const double C532 =
        (C1259 * C1255 * C1310 + ae * C1276 * C1262 +
         C1276 * (ae * C1262 + C1276 * std::pow(C1248, 4) * bs[4] * C1310)) /
        C1131;
    const double C597 =
        (ae * C1266 * C1262 + be * C1266 * C1263 +
         C1250 * C1266 * (C1255 * C1259 + C1254 * bs[4] * std::pow(C1248, 4)) *
             C1130) /
        C1131;
    const double C781 =
        (ae * C1276 * C1262 + be * C1276 * C1263 +
         C1250 * C1276 * (C1255 * C1259 + C1254 * bs[4] * std::pow(C1248, 4)) *
             C1130) /
        C1131;
    const double C1023 = (ae * C1276 * C1262 +
                          C1266 * C1276 * std::pow(C1248, 4) * bs[4] * C1291) /
                         C1131;
    const double C1081 = (ae * C1266 * C1262 +
                          C1276 * C1266 * std::pow(C1248, 4) * bs[4] * C1310) /
                         C1131;
    const double C74 =
        (C1251 * C1249 * C1257 + C1250 * (C1250 * C1262 + C1253 * be) +
         C1250 * C1253 * be) /
        C1129;
    const double C255 = (C1251 * C1249 * C1257 + C1262 * C1296) / C1129;
    const double C422 = (C1251 * C1249 * C1257 + C1262 * C1321) / C1129;
    const double C595 = (C1266 * (C1250 * C1262 + C1253 * be)) / C1129;
    const double C779 = (C1276 * (C1250 * C1262 + C1253 * be)) / C1129;
    const double C961 = (C1276 * C1266 * C1262) / C1129;
    const double C99 =
        (C1259 * C1255 * C1272 + ae * C1250 * C1273 +
         C1250 * (ae * C1273 + C1250 * std::pow(C1248, 4) * bs[4] * C1272)) /
        C1131;
    const double C548 =
        (C1259 * C1255 * C1317 + ae * C1276 * C1273 +
         C1276 * (ae * C1273 + C1276 * std::pow(C1248, 4) * bs[4] * C1317)) /
        C1131;
    const double C619 =
        (be * (C1250 * C1263 + C1253 * ae) +
         C1266 * (ae * C1273 + C1250 * std::pow(C1248, 4) * bs[4] * C1272)) /
        C1131;
    const double C801 =
        (C1276 * (ae * C1273 + C1250 * std::pow(C1248, 4) * bs[4] * C1272)) /
        C1131;
    const double C920 = (ae * C1250 * C1273 +
                         C1276 * C1250 * std::pow(C1248, 4) * bs[4] * C1317) /
                        C1131;
    const double C96 = (C1251 * C1249 * C1269 + C1273 * C1254) / C1129;
    const double C277 =
        (C1251 * C1249 * C1269 + C1266 * (C1266 * C1273 + C1253 * be) +
         C1266 * C1253 * be) /
        C1129;
    const double C441 = (C1251 * C1249 * C1269 + C1273 * C1321) / C1129;
    const double C618 = (C1266 * C1250 * C1273 + C1250 * C1253 * be) / C1129;
    const double C800 = (C1276 * C1250 * C1273) / C1129;
    const double C982 = (C1276 * (C1266 * C1273 + C1253 * be)) / C1129;
    const double C120 =
        (C1259 * C1255 * C1282 + ae * C1250 * C1283 +
         C1250 * (ae * C1283 + C1250 * std::pow(C1248, 4) * bs[4] * C1282)) /
        C1131;
    const double C350 =
        (C1259 * C1255 * C1302 + ae * C1266 * C1283 +
         C1266 * (ae * C1283 + C1266 * std::pow(C1248, 4) * bs[4] * C1302)) /
        C1131;
    const double C639 =
        (C1266 * (ae * C1283 + C1250 * std::pow(C1248, 4) * bs[4] * C1282)) /
        C1131;
    const double C699 = (ae * C1250 * C1283 +
                         C1266 * C1250 * std::pow(C1248, 4) * bs[4] * C1302) /
                        C1131;
    const double C823 =
        (be * (C1250 * C1263 + C1253 * ae) +
         C1276 * (ae * C1283 + C1250 * std::pow(C1248, 4) * bs[4] * C1282)) /
        C1131;
    const double C117 = (C1251 * C1249 * C1279 + C1283 * C1254) / C1129;
    const double C295 = (C1251 * C1249 * C1279 + C1283 * C1296) / C1129;
    const double C462 =
        (C1251 * C1249 * C1279 + C1276 * (C1276 * C1283 + C1253 * be) +
         C1276 * C1253 * be) /
        C1129;
    const double C638 = (C1266 * C1250 * C1283) / C1129;
    const double C822 = (C1276 * C1250 * C1283 + C1250 * C1253 * be) / C1129;
    const double C1002 = (C1276 * C1266 * C1283 + C1266 * C1253 * be) / C1129;
    const double C140 =
        (C1259 * C1255 * C1291 + be * C1250 * C1292 +
         C1250 * (be * C1292 + C1250 * std::pow(C1248, 4) * bs[4] * C1291)) /
        C1131;
    const double C334 =
        ((C1253 + C1296 * C1255 * C1259) * C1130 +
         ae * (C1266 * C1273 + C1253 * be) + be * (C1266 * C1292 + C1253 * ae) +
         C1266 * (ae * C1273 + be * C1292 +
                  C1266 * (C1255 * C1259 + C1296 * bs[4] * std::pow(C1248, 4)) *
                      C1130)) /
        C1131;
    const double C514 =
        (C1259 * C1255 * C1302 + be * C1276 * C1292 +
         C1276 * (be * C1292 + C1276 * std::pow(C1248, 4) * bs[4] * C1302)) /
        C1131;
    const double C659 =
        (ae * (C1250 * C1262 + C1253 * be) +
         C1266 * (be * C1292 + C1250 * std::pow(C1248, 4) * bs[4] * C1291)) /
        C1131;
    const double C680 =
        (ae * C1250 * C1273 + be * C1250 * C1292 +
         C1266 * C1250 * (C1255 * C1259 + C1296 * bs[4] * std::pow(C1248, 4)) *
             C1130) /
        C1131;
    const double C843 =
        (C1276 * (be * C1292 + C1250 * std::pow(C1248, 4) * bs[4] * C1291)) /
        C1131;
    const double C881 = (be * C1250 * C1292 +
                         C1276 * C1250 * std::pow(C1248, 4) * bs[4] * C1302) /
                        C1131;
    const double C1042 =
        (ae * C1276 * C1273 + be * C1276 * C1292 +
         C1266 * C1276 * (C1255 * C1259 + C1296 * bs[4] * std::pow(C1248, 4)) *
             C1130) /
        C1131;
    const double C1061 =
        (ae * (C1276 * C1283 + C1253 * be) +
         C1266 * (be * C1292 + C1276 * std::pow(C1248, 4) * bs[4] * C1302)) /
        C1131;
    const double C137 = (C1251 * C1249 * C1288 + C1292 * C1254) / C1129;
    const double C313 =
        (C1251 * C1249 * C1288 + C1266 * (C1266 * C1292 + C1253 * ae) +
         C1266 * C1253 * ae) /
        C1129;
    const double C480 = (C1251 * C1249 * C1288 + C1292 * C1321) / C1129;
    const double C658 = (C1266 * C1250 * C1292 + C1250 * C1253 * ae) / C1129;
    const double C842 = (C1276 * C1250 * C1292) / C1129;
    const double C1022 = (C1276 * (C1266 * C1292 + C1253 * ae)) / C1129;
    const double C195 =
        (C1259 * C1255 * C1310 + be * C1250 * C1311 +
         C1250 * (be * C1311 + C1250 * std::pow(C1248, 4) * bs[4] * C1310)) /
        C1131;
    const double C384 =
        (C1259 * C1255 * C1317 + be * C1266 * C1311 +
         C1266 * (be * C1311 + C1266 * std::pow(C1248, 4) * bs[4] * C1317)) /
        C1131;
    const double C567 =
        ((C1253 + C1321 * C1255 * C1259) * C1130 +
         ae * (C1276 * C1283 + C1253 * be) + be * (C1276 * C1311 + C1253 * ae) +
         C1276 * (ae * C1283 + be * C1311 +
                  C1276 * (C1255 * C1259 + C1321 * bs[4] * std::pow(C1248, 4)) *
                      C1130)) /
        C1131;
    const double C719 =
        (C1266 * (be * C1311 + C1250 * std::pow(C1248, 4) * bs[4] * C1310)) /
        C1131;
    const double C738 = (be * C1250 * C1311 +
                         C1266 * C1250 * std::pow(C1248, 4) * bs[4] * C1317) /
                        C1131;
    const double C901 =
        (ae * (C1250 * C1262 + C1253 * be) +
         C1276 * (be * C1311 + C1250 * std::pow(C1248, 4) * bs[4] * C1310)) /
        C1131;
    const double C941 =
        (ae * C1250 * C1283 + be * C1250 * C1311 +
         C1276 * C1250 * (C1255 * C1259 + C1321 * bs[4] * std::pow(C1248, 4)) *
             C1130) /
        C1131;
    const double C1100 =
        (ae * (C1266 * C1273 + C1253 * be) +
         C1276 * (be * C1311 + C1266 * std::pow(C1248, 4) * bs[4] * C1317)) /
        C1131;
    const double C1119 =
        (ae * C1266 * C1283 + be * C1266 * C1311 +
         C1276 * C1266 * (C1255 * C1259 + C1321 * bs[4] * std::pow(C1248, 4)) *
             C1130) /
        C1131;
    const double C192 = (C1251 * C1249 * C1307 + C1311 * C1254) / C1129;
    const double C366 = (C1251 * C1249 * C1307 + C1311 * C1296) / C1129;
    const double C530 =
        (C1251 * C1249 * C1307 + C1276 * (C1276 * C1311 + C1253 * ae) +
         C1276 * C1253 * ae) /
        C1129;
    const double C718 = (C1266 * C1250 * C1311) / C1129;
    const double C900 = (C1276 * C1250 * C1311 + C1250 * C1253 * ae) / C1129;
    const double C1080 = (C1276 * C1266 * C1311 + C1266 * C1253 * ae) / C1129;
    const double C1137 = 2 * C1134;
    const double C65 =
        ((0 * ae) / C1129 - C1134 / C1131) / (2 * C1129) + (0 * ae) / C1129;
    const double C592 = (0 * ae) / C1129 - C1134 / C1131;
    const double C54 = (2 * C1549 * C1550) / C1129;
    const double C586 = C1550 / C1129;
    const double C1183 = 2 * C1175;
    const double C275 =
        ((0 * ae) / C1129 - C1175 / C1131) / (2 * C1129) + (0 * ae) / C1129;
    const double C617 = (0 * ae) / C1129 - C1175 / C1131;
    const double C247 = (2 * C1549 * C1552) / C1129;
    const double C588 = C1552 / C1129;
    const double C274 =
        (((C1484 - (C1159 * 2 * C1175) / C1129) * ae) / C1129 - C1173 / C1133) /
            (2 * C1129) +
        ((C1159 * ((0 * ae) / C1129 - C1175 / C1131) + C589) * ae) / C1129;
    const double C1209 = 2 * C1201;
    const double C460 =
        ((0 * ae) / C1129 - C1201 / C1131) / (2 * C1129) + (0 * ae) / C1129;
    const double C821 = (0 * ae) / C1129 - C1201 / C1131;
    const double C416 = (2 * C1549 * C1553) / C1129;
    const double C776 = C1553 / C1129;
    const double C459 =
        (((C1495 - (C1162 * 2 * C1201) / C1129) * ae) / C1129 - C1199 / C1133) /
            (2 * C1129) +
        ((C1162 * ((0 * ae) / C1129 - C1201 / C1131) + C777) * ae) / C1129;
    const double C1139 = C1127 * C1137;
    const double C249 = -C1137 / C1129;
    const double C61 =
        (((0 - (C1127 * C1128) / C1129) * ae) / C1129 - (0 * be) / C1133) /
            (2 * C1129) +
        ((C1127 * (((C1461 - (C1127 * 2 * C1134) / C1129) * ae) / C1129 -
                   C1128 / C1133) +
          C586) *
         ae) /
            C1129 +
        (0 * ae) / C1129 - C1134 / C1131;
    const double C1184 = C1159 * C1183;
    const double C273 =
        (((0 - (C1159 * C1173) / C1129) * ae) / C1129 - (0 * be) / C1133) /
            (2 * C1129) +
        ((C1159 * (((C1484 - (C1159 * 2 * C1175) / C1129) * ae) / C1129 -
                   C1173 / C1133) +
          C588) *
         ae) /
            C1129 +
        (0 * ae) / C1129 - C1175 / C1131;
    const double C1210 = C1162 * C1209;
    const double C458 =
        (((0 - (C1162 * C1199) / C1129) * ae) / C1129 - (0 * be) / C1133) /
            (2 * C1129) +
        ((C1162 * (((C1495 - (C1162 * 2 * C1201) / C1129) * ae) / C1129 -
                   C1199 / C1133) +
          C776) *
         ae) /
            C1129 +
        (0 * ae) / C1129 - C1201 / C1131;
    const double C1140 = C1139 / C1129;
    const double C1185 = C1184 / C1129;
    const double C1211 = C1210 / C1129;
    const double C1141 = C1461 - C1140;
    const double C1186 = C1484 - C1185;
    const double C1212 = C1495 - C1211;
    const double C1142 = C1141 * C1138;
    const double C63 =
        ((C1141 * ae) / C1129 - C1128 / C1133) / (2 * C1129) +
        ((C1127 * ((0 * ae) / C1129 - C1134 / C1131) + C587) * ae) / C1129;
    const double C590 = (C1141 * ae) / C1129 - C1128 / C1133;
    const double C1187 = C1186 * C1138;
    const double C616 = (C1186 * ae) / C1129 - C1173 / C1133;
    const double C1213 = C1212 * C1138;
    const double C820 = (C1212 * ae) / C1129 - C1199 / C1133;
    const double C1147 = C1127 * C1142;
    const double C62 =
        (ae * -2 * C1128) / (C1131 * 2 * C1129) +
        (((C1127 * ((-4 * C1134) / C1129 - (C1127 * C1142) / C1129) * ae) /
              C1129 +
          2 * ((C1141 * ae) / C1129 - C1128 / C1133)) *
         ae) /
            C1129 -
        C1142 / C1133;
    const double C66 = (-C1142 / C1129) / (4 * C1131);
    const double C250 = -C1142 / C1129;
    const double C593 = (-C1142 / C1129) / (2 * C1129);
    const double C1190 = C1159 * C1187;
    const double C330 =
        (ae * -2 * C1173) / (C1131 * 2 * C1129) +
        (((C1159 * ((-4 * C1175) / C1129 - (C1159 * C1187) / C1129) * ae) /
              C1129 +
          2 * ((C1186 * ae) / C1129 - C1173 / C1133)) *
         ae) /
            C1129 -
        C1187 / C1133;
    const double C332 = (-C1187 / C1129) / (4 * C1131);
    const double C679 = (-C1187 / C1129) / (2 * C1129);
    const double C1216 = C1162 * C1213;
    const double C563 =
        (ae * -2 * C1199) / (C1131 * 2 * C1129) +
        (((C1162 * ((-4 * C1201) / C1129 - (C1162 * C1213) / C1129) * ae) /
              C1129 +
          2 * ((C1212 * ae) / C1129 - C1199 / C1133)) *
         ae) /
            C1129 -
        C1213 / C1133;
    const double C565 = (-C1213 / C1129) / (4 * C1131);
    const double C940 = (-C1213 / C1129) / (2 * C1129);
    const double C64 =
        (((-4 * C1134) / C1129 - C1147 / C1129) * ae) / C1133 +
        ((2 * ((0 * ae) / C1129 - C1134 / C1131) - C1147 / C1133) * ae) / C1129;
    const double C591 = (((-4 * C1134) / C1129 - C1147 / C1129) * ae) / C1129;
    const double C331 =
        (((-4 * C1175) / C1129 - C1190 / C1129) * ae) / C1133 +
        ((2 * ((0 * ae) / C1129 - C1175 / C1131) - C1190 / C1133) * ae) / C1129;
    const double C678 = (((-4 * C1175) / C1129 - C1190 / C1129) * ae) / C1129;
    const double C564 =
        (((-4 * C1201) / C1129 - C1216 / C1129) * ae) / C1133 +
        ((2 * ((0 * ae) / C1129 - C1201 / C1131) - C1216 / C1133) * ae) / C1129;
    const double C939 = (((-4 * C1201) / C1129 - C1216 / C1129) * ae) / C1129;
    d2eexx[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((C590 * C70 - C591 * C67 - C590 * C71 + C586 * C76 +
                    C592 * C72 - C593 * C68 - C592 * C73 + C587 * C77) *
                       C1495 * C588 +
                   (C590 * C253 - C591 * C251 - C590 * C254 + C586 * C257 +
                    C592 * C595 - C593 * C594 - C592 * C596 + C587 * C597) *
                       C1495 * C589) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eexy[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C588 * C94 - C616 * C67 + C589 * C276 - C617 * C251) * C590 +
          (C588 * C97 - C616 * C71 + C589 * C278 - C617 * C254) * C586 +
          (C588 * C95 - C616 * C68 + C589 * C618 - C617 * C594) * C592 +
          (C588 * C98 - C616 * C73 + C589 * C619 - C617 * C596) * C587) *
         C1495 * C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eexz[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C1495 * C115 - C114 * C67) * C590 +
                    (C1495 * C118 - C114 * C71) * C586 +
                    (C1495 * C116 - C114 * C68) * C592 +
                    (C1495 * C119 - C114 * C73) * C587) *
                       C588 +
                   ((C1495 * C294 - C114 * C251) * C590 +
                    (C1495 * C296 - C114 * C254) * C586 +
                    (C1495 * C638 - C114 * C594) * C592 +
                    (C1495 * C639 - C114 * C596) * C587) *
                       C589) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C586 * C70 - C590 * C67 + C587 * C72 - C592 * C68) * C616 +
          (C586 * C138 - C590 * C135 + C587 * C139 - C592 * C136) * C588 +
          (C586 * C253 - C590 * C251 + C587 * C595 - C592 * C594) * C617 +
          (C586 * C314 - C590 * C312 + C587 * C659 - C592 * C658) * C589) *
         C1495 * C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eeyy[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((C616 * C94 - C678 * C67 - C616 * C135 + C588 * C156 +
                    C617 * C276 - C679 * C251 - C617 * C312 + C589 * C333) *
                       C586 +
                   (C616 * C95 - C678 * C68 - C616 * C136 + C588 * C157 +
                    C617 * C618 - C679 * C594 - C617 * C658 + C589 * C680) *
                       C587) *
                  C1495 * C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C1495 * C115 - C114 * C67) * C616 +
                    (C1495 * C173 - C114 * C135) * C588 +
                    (C1495 * C294 - C114 * C251) * C617 +
                    (C1495 * C349 - C114 * C312) * C589) *
                       C586 +
                   ((C1495 * C116 - C114 * C68) * C616 +
                    (C1495 * C174 - C114 * C136) * C588 +
                    (C1495 * C638 - C114 * C594) * C617 +
                    (C1495 * C699 - C114 * C658) * C589) *
                       C587) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eezx[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C586 * C70 - C590 * C67 + C587 * C72 - C592 * C68) * C114 +
           (C586 * C193 - C590 * C190 + C587 * C194 - C592 * C191) * C1495) *
              C588 +
          ((C586 * C253 - C590 * C251 + C587 * C595 - C592 * C594) * C114 +
           (C586 * C367 - C590 * C365 + C587 * C719 - C592 * C718) * C1495) *
              C589) *
         C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eezy[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C588 * C94 - C616 * C67 + C589 * C276 - C617 * C251) * C114 +
           (C588 * C210 - C616 * C190 + C589 * C383 - C617 * C365) * C1495) *
              C586 +
          ((C588 * C95 - C616 * C68 + C589 * C618 - C617 * C594) * C114 +
           (C588 * C211 - C616 * C191 + C589 * C738 - C617 * C718) * C1495) *
              C587) *
         C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eezz[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C114 * C115 - C227 * C67 - C114 * C190 + C1495 * C228) * C588 +
           (C114 * C294 - C227 * C251 - C114 * C365 + C1495 * C399) * C589) *
              C586 +
          ((C114 * C116 - C227 * C68 - C114 * C191 + C1495 * C229) * C588 +
           (C114 * C638 - C227 * C594 - C114 * C718 + C1495 * C757) * C589) *
              C587) *
         C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eexx[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C249 * C70 - C250 * C67 - C249 * C71 + C1461 * C76) * C776 +
           (C249 * C420 - C250 * C418 - C249 * C421 + C1461 * C424) * C777) *
              C588 +
          ((C249 * C253 - C250 * C251 - C249 * C254 + C1461 * C257) * C776 +
           (C249 * C961 - C250 * C960 - C249 * C962 + C1461 * C963) * C777) *
              C589) *
         C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eexy[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C588 * C94 - C616 * C67 + C589 * C276 - C617 * C251) * C249 +
           (C588 * C97 - C616 * C71 + C589 * C278 - C617 * C254) * C1461) *
              C776 +
          ((C588 * C440 - C616 * C418 + C589 * C982 - C617 * C960) * C249 +
           (C588 * C442 - C616 * C421 + C589 * C983 - C617 * C962) * C1461) *
              C777) *
         C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eexz[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C776 * C115 - C820 * C67 + C777 * C461 - C821 * C418) * C249 +
           (C776 * C118 - C820 * C71 + C777 * C463 - C821 * C421) * C1461) *
              C588 +
          ((C776 * C294 - C820 * C251 + C777 * C1002 - C821 * C960) * C249 +
           (C776 * C296 - C820 * C254 + C777 * C1003 - C821 * C962) * C1461) *
              C589) *
         C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eeyx[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C1461 * C70 - C249 * C67) * C616 +
                    (C1461 * C138 - C249 * C135) * C588 +
                    (C1461 * C253 - C249 * C251) * C617 +
                    (C1461 * C314 - C249 * C312) * C589) *
                       C776 +
                   ((C1461 * C420 - C249 * C418) * C616 +
                    (C1461 * C481 - C249 * C479) * C588 +
                    (C1461 * C961 - C249 * C960) * C617 +
                    (C1461 * C1023 - C249 * C1022) * C589) *
                       C777) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((C616 * C94 - C678 * C67 - C616 * C135 + C588 * C156 +
                    C617 * C276 - C679 * C251 - C617 * C312 + C589 * C333) *
                       C1461 * C776 +
                   (C616 * C440 - C678 * C418 - C616 * C479 + C588 * C497 +
                    C617 * C982 - C679 * C960 - C617 * C1022 + C589 * C1042) *
                       C1461 * C777) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C776 * C115 - C820 * C67 + C777 * C461 - C821 * C418) * C616 +
          (C776 * C173 - C820 * C135 + C777 * C513 - C821 * C479) * C588 +
          (C776 * C294 - C820 * C251 + C777 * C1002 - C821 * C960) * C617 +
          (C776 * C349 - C820 * C312 + C777 * C1061 - C821 * C1022) * C589) *
         C1461 * C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eezx[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C1461 * C70 - C249 * C67) * C820 +
                    (C1461 * C193 - C249 * C190) * C776 +
                    (C1461 * C420 - C249 * C418) * C821 +
                    (C1461 * C531 - C249 * C529) * C777) *
                       C588 +
                   ((C1461 * C253 - C249 * C251) * C820 +
                    (C1461 * C367 - C249 * C365) * C776 +
                    (C1461 * C961 - C249 * C960) * C821 +
                    (C1461 * C1081 - C249 * C1080) * C777) *
                       C589) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eezy[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C588 * C94 - C616 * C67 + C589 * C276 - C617 * C251) * C820 +
          (C588 * C210 - C616 * C190 + C589 * C383 - C617 * C365) * C776 +
          (C588 * C440 - C616 * C418 + C589 * C982 - C617 * C960) * C821 +
          (C588 * C547 - C616 * C529 + C589 * C1100 - C617 * C1080) * C777) *
         C1461 * C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eezz[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((C820 * C115 - C939 * C67 - C820 * C190 + C776 * C228 +
                    C821 * C461 - C940 * C418 - C821 * C529 + C777 * C566) *
                       C588 +
                   (C820 * C294 - C939 * C251 - C820 * C365 + C776 * C399 +
                    C821 * C1002 - C940 * C960 - C821 * C1080 + C777 * C1119) *
                       C589) *
                  C1461 * C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eexx[2] +=
        (-std::pow(Pi, 2.5) *
         ((C249 * C70 - C250 * C67 - C249 * C71 + C1461 * C76) * C1495 * C246 +
          (C249 * C253 - C250 * C251 - C249 * C254 + C1461 * C257) * C1495 *
              C247 +
          (C249 * C255 - C250 * C252 - C249 * C256 + C1461 * C258) * C1495 *
              C248) *
         C58 * C59 * C60) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (C61 * C70 - C62 * C67 - C61 * C71 + C53 * C76 + C63 * C72 -
          C64 * C68 - C63 * C73 + C54 * C77 + C65 * C74 - C66 * C69 -
          C65 * C75 + C55 * C78) *
         C1495 * C1484 * C58 * C59 * C60) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C249 * C70 - C250 * C67 - C249 * C71 + C1461 * C76) * C415 +
          (C249 * C420 - C250 * C418 - C249 * C421 + C1461 * C424) * C416 +
          (C249 * C422 - C250 * C419 - C249 * C423 + C1461 * C425) * C417) *
         C1484 * C58 * C59 * C60) /
            (p * q * std::sqrt(p + q));
    d2eexy[2] +=
        (-std::pow(Pi, 2.5) *
         ((C246 * C94 - C273 * C67 + C247 * C276 - C274 * C251 + C248 * C277 -
           C275 * C252) *
              C249 +
          (C246 * C97 - C273 * C71 + C247 * C278 - C274 * C254 + C248 * C279 -
           C275 * C256) *
              C1461) *
         C1495 * C58 * C59 * C60) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C1484 * C94 - C93 * C67) * C61 + (C1484 * C97 - C93 * C71) * C53 +
          (C1484 * C95 - C93 * C68) * C63 + (C1484 * C98 - C93 * C73) * C54 +
          (C1484 * C96 - C93 * C69) * C65 + (C1484 * C99 - C93 * C75) * C55) *
         C1495 * C58 * C59 * C60) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C1484 * C94 - C93 * C67) * C249 +
           (C1484 * C97 - C93 * C71) * C1461) *
              C415 +
          ((C1484 * C440 - C93 * C418) * C249 +
           (C1484 * C442 - C93 * C421) * C1461) *
              C416 +
          ((C1484 * C441 - C93 * C419) * C249 +
           (C1484 * C443 - C93 * C423) * C1461) *
              C417) *
         C58 * C59 * C60) /
            (p * q * std::sqrt(p + q));
    d2eexz[2] += (-std::pow(Pi, 2.5) *
                  (((C1495 * C115 - C114 * C67) * C249 +
                    (C1495 * C118 - C114 * C71) * C1461) *
                       C246 +
                   ((C1495 * C294 - C114 * C251) * C249 +
                    (C1495 * C296 - C114 * C254) * C1461) *
                       C247 +
                   ((C1495 * C295 - C114 * C252) * C249 +
                    (C1495 * C297 - C114 * C256) * C1461) *
                       C248) *
                  C58 * C59 * C60) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  ((C1495 * C115 - C114 * C67) * C61 +
                   (C1495 * C118 - C114 * C71) * C53 +
                   (C1495 * C116 - C114 * C68) * C63 +
                   (C1495 * C119 - C114 * C73) * C54 +
                   (C1495 * C117 - C114 * C69) * C65 +
                   (C1495 * C120 - C114 * C75) * C55) *
                  C1484 * C58 * C59 * C60) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((C415 * C115 - C458 * C67 + C416 * C461 - C459 * C418 +
                    C417 * C462 - C460 * C419) *
                       C249 +
                   (C415 * C118 - C458 * C71 + C416 * C463 - C459 * C421 +
                    C417 * C464 - C460 * C423) *
                       C1461) *
                  C1484 * C58 * C59 * C60) /
                     (p * q * std::sqrt(p + q));
    d2eeyx[2] += (-std::pow(Pi, 2.5) *
                  ((C1461 * C70 - C249 * C67) * C273 +
                   (C1461 * C138 - C249 * C135) * C246 +
                   (C1461 * C253 - C249 * C251) * C274 +
                   (C1461 * C314 - C249 * C312) * C247 +
                   (C1461 * C255 - C249 * C252) * C275 +
                   (C1461 * C315 - C249 * C313) * C248) *
                  C1495 * C58 * C59 * C60) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  ((C53 * C70 - C61 * C67 + C54 * C72 - C63 * C68 + C55 * C74 -
                    C65 * C69) *
                       C93 +
                   (C53 * C138 - C61 * C135 + C54 * C139 - C63 * C136 +
                    C55 * C140 - C65 * C137) *
                       C1484) *
                  C1495 * C58 * C59 * C60) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C1461 * C70 - C249 * C67) * C93 +
                    (C1461 * C138 - C249 * C135) * C1484) *
                       C415 +
                   ((C1461 * C420 - C249 * C418) * C93 +
                    (C1461 * C481 - C249 * C479) * C1484) *
                       C416 +
                   ((C1461 * C422 - C249 * C419) * C93 +
                    (C1461 * C482 - C249 * C480) * C1484) *
                       C417) *
                  C58 * C59 * C60) /
                     (p * q * std::sqrt(p + q));
    d2eeyy[2] +=
        (-std::pow(Pi, 2.5) *
         (C273 * C94 - C330 * C67 - C273 * C135 + C246 * C156 + C274 * C276 -
          C331 * C251 - C274 * C312 + C247 * C333 + C275 * C277 - C332 * C252 -
          C275 * C313 + C248 * C334) *
         C1461 * C1495 * C58 * C59 * C60) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C93 * C94 - C155 * C67 - C93 * C135 + C1484 * C156) * C53 +
          (C93 * C95 - C155 * C68 - C93 * C136 + C1484 * C157) * C54 +
          (C93 * C96 - C155 * C69 - C93 * C137 + C1484 * C158) * C55) *
         C1495 * C58 * C59 * C60) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C93 * C94 - C155 * C67 - C93 * C135 + C1484 * C156) * C1461 * C415 +
          (C93 * C440 - C155 * C418 - C93 * C479 + C1484 * C497) * C1461 *
              C416 +
          (C93 * C441 - C155 * C419 - C93 * C480 + C1484 * C498) * C1461 *
              C417) *
         C58 * C59 * C60) /
            (p * q * std::sqrt(p + q));
    d2eeyz[2] += (-std::pow(Pi, 2.5) *
                  ((C1495 * C115 - C114 * C67) * C273 +
                   (C1495 * C173 - C114 * C135) * C246 +
                   (C1495 * C294 - C114 * C251) * C274 +
                   (C1495 * C349 - C114 * C312) * C247 +
                   (C1495 * C295 - C114 * C252) * C275 +
                   (C1495 * C350 - C114 * C313) * C248) *
                  C1461 * C58 * C59 * C60) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (((C1495 * C115 - C114 * C67) * C93 +
                    (C1495 * C173 - C114 * C135) * C1484) *
                       C53 +
                   ((C1495 * C116 - C114 * C68) * C93 +
                    (C1495 * C174 - C114 * C136) * C1484) *
                       C54 +
                   ((C1495 * C117 - C114 * C69) * C93 +
                    (C1495 * C175 - C114 * C137) * C1484) *
                       C55) *
                  C58 * C59 * C60) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((C415 * C115 - C458 * C67 + C416 * C461 - C459 * C418 +
                    C417 * C462 - C460 * C419) *
                       C93 +
                   (C415 * C173 - C458 * C135 + C416 * C513 - C459 * C479 +
                    C417 * C514 - C460 * C480) *
                       C1484) *
                  C1461 * C58 * C59 * C60) /
                     (p * q * std::sqrt(p + q));
    d2eezx[2] += (-std::pow(Pi, 2.5) *
                  (((C1461 * C70 - C249 * C67) * C114 +
                    (C1461 * C193 - C249 * C190) * C1495) *
                       C246 +
                   ((C1461 * C253 - C249 * C251) * C114 +
                    (C1461 * C367 - C249 * C365) * C1495) *
                       C247 +
                   ((C1461 * C255 - C249 * C252) * C114 +
                    (C1461 * C368 - C249 * C366) * C1495) *
                       C248) *
                  C58 * C59 * C60) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  ((C53 * C70 - C61 * C67 + C54 * C72 - C63 * C68 + C55 * C74 -
                    C65 * C69) *
                       C114 +
                   (C53 * C193 - C61 * C190 + C54 * C194 - C63 * C191 +
                    C55 * C195 - C65 * C192) *
                       C1495) *
                  C1484 * C58 * C59 * C60) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((C1461 * C70 - C249 * C67) * C458 +
                   (C1461 * C193 - C249 * C190) * C415 +
                   (C1461 * C420 - C249 * C418) * C459 +
                   (C1461 * C531 - C249 * C529) * C416 +
                   (C1461 * C422 - C249 * C419) * C460 +
                   (C1461 * C532 - C249 * C530) * C417) *
                  C1484 * C58 * C59 * C60) /
                     (p * q * std::sqrt(p + q));
    d2eezy[2] += (-std::pow(Pi, 2.5) *
                  ((C246 * C94 - C273 * C67 + C247 * C276 - C274 * C251 +
                    C248 * C277 - C275 * C252) *
                       C114 +
                   (C246 * C210 - C273 * C190 + C247 * C383 - C274 * C365 +
                    C248 * C384 - C275 * C366) *
                       C1495) *
                  C1461 * C58 * C59 * C60) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (((C1484 * C94 - C93 * C67) * C114 +
                    (C1484 * C210 - C93 * C190) * C1495) *
                       C53 +
                   ((C1484 * C95 - C93 * C68) * C114 +
                    (C1484 * C211 - C93 * C191) * C1495) *
                       C54 +
                   ((C1484 * C96 - C93 * C69) * C114 +
                    (C1484 * C212 - C93 * C192) * C1495) *
                       C55) *
                  C58 * C59 * C60) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((C1484 * C94 - C93 * C67) * C458 +
                   (C1484 * C210 - C93 * C190) * C415 +
                   (C1484 * C440 - C93 * C418) * C459 +
                   (C1484 * C547 - C93 * C529) * C416 +
                   (C1484 * C441 - C93 * C419) * C460 +
                   (C1484 * C548 - C93 * C530) * C417) *
                  C1461 * C58 * C59 * C60) /
                     (p * q * std::sqrt(p + q));
    d2eezz[2] +=
        (-std::pow(Pi, 2.5) *
         ((C114 * C115 - C227 * C67 - C114 * C190 + C1495 * C228) * C246 +
          (C114 * C294 - C227 * C251 - C114 * C365 + C1495 * C399) * C247 +
          (C114 * C295 - C227 * C252 - C114 * C366 + C1495 * C400) * C248) *
         C1461 * C58 * C59 * C60) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C114 * C115 - C227 * C67 - C114 * C190 + C1495 * C228) * C1484 *
              C53 +
          (C114 * C116 - C227 * C68 - C114 * C191 + C1495 * C229) * C1484 *
              C54 +
          (C114 * C117 - C227 * C69 - C114 * C192 + C1495 * C230) * C1484 *
              C55) *
         C58 * C59 * C60) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (C458 * C115 - C563 * C67 - C458 * C190 + C415 * C228 + C459 * C461 -
          C564 * C418 - C459 * C529 + C416 * C566 + C460 * C462 - C565 * C419 -
          C460 * C530 + C417 * C567) *
         C1484 * C1461 * C58 * C59 * C60) /
            (p * q * std::sqrt(p + q));
    d2eexx[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((C590 * C70 - C591 * C67 - C590 * C71 + C586 * C76 +
                    C592 * C72 - C593 * C68 - C592 * C73 + C587 * C77) *
                       C776 +
                   (C590 * C420 - C591 * C418 - C590 * C421 + C586 * C424 +
                    C592 * C779 - C593 * C778 - C592 * C780 + C587 * C781) *
                       C777) *
                  C1484 * C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eexy[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C1484 * C94 - C93 * C67) * C590 + (C1484 * C97 - C93 * C71) * C586 +
           (C1484 * C95 - C93 * C68) * C592 +
           (C1484 * C98 - C93 * C73) * C587) *
              C776 +
          ((C1484 * C440 - C93 * C418) * C590 +
           (C1484 * C442 - C93 * C421) * C586 +
           (C1484 * C800 - C93 * C778) * C592 +
           (C1484 * C801 - C93 * C780) * C587) *
              C777) *
         C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eexz[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C776 * C115 - C820 * C67 + C777 * C461 - C821 * C418) * C590 +
          (C776 * C118 - C820 * C71 + C777 * C463 - C821 * C421) * C586 +
          (C776 * C116 - C820 * C68 + C777 * C822 - C821 * C778) * C592 +
          (C776 * C119 - C820 * C73 + C777 * C823 - C821 * C780) * C587) *
         C1484 * C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eeyx[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C586 * C70 - C590 * C67 + C587 * C72 - C592 * C68) * C93 +
           (C586 * C138 - C590 * C135 + C587 * C139 - C592 * C136) * C1484) *
              C776 +
          ((C586 * C420 - C590 * C418 + C587 * C779 - C592 * C778) * C93 +
           (C586 * C481 - C590 * C479 + C587 * C843 - C592 * C842) * C1484) *
              C777) *
         C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eeyy[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C93 * C94 - C155 * C67 - C93 * C135 + C1484 * C156) * C586 +
           (C93 * C95 - C155 * C68 - C93 * C136 + C1484 * C157) * C587) *
              C776 +
          ((C93 * C440 - C155 * C418 - C93 * C479 + C1484 * C497) * C586 +
           (C93 * C800 - C155 * C778 - C93 * C842 + C1484 * C862) * C587) *
              C777) *
         C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eeyz[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C776 * C115 - C820 * C67 + C777 * C461 - C821 * C418) * C93 +
           (C776 * C173 - C820 * C135 + C777 * C513 - C821 * C479) * C1484) *
              C586 +
          ((C776 * C116 - C820 * C68 + C777 * C822 - C821 * C778) * C93 +
           (C776 * C174 - C820 * C136 + C777 * C881 - C821 * C842) * C1484) *
              C587) *
         C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eezx[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C586 * C70 - C590 * C67 + C587 * C72 - C592 * C68) * C820 +
          (C586 * C193 - C590 * C190 + C587 * C194 - C592 * C191) * C776 +
          (C586 * C420 - C590 * C418 + C587 * C779 - C592 * C778) * C821 +
          (C586 * C531 - C590 * C529 + C587 * C901 - C592 * C900) * C777) *
         C1484 * C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eezy[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C1484 * C94 - C93 * C67) * C820 +
                    (C1484 * C210 - C93 * C190) * C776 +
                    (C1484 * C440 - C93 * C418) * C821 +
                    (C1484 * C547 - C93 * C529) * C777) *
                       C586 +
                   ((C1484 * C95 - C93 * C68) * C820 +
                    (C1484 * C211 - C93 * C191) * C776 +
                    (C1484 * C800 - C93 * C778) * C821 +
                    (C1484 * C920 - C93 * C900) * C777) *
                       C587) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eezz[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((C820 * C115 - C939 * C67 - C820 * C190 + C776 * C228 +
                    C821 * C461 - C940 * C418 - C821 * C529 + C777 * C566) *
                       C1484 * C586 +
                   (C820 * C116 - C939 * C68 - C820 * C191 + C776 * C229 +
                    C821 * C822 - C940 * C778 - C821 * C900 + C777 * C941) *
                       C1484 * C587) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eexx[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (C61 * C70 - C62 * C67 - C61 * C71 + C53 * C76 + C63 * C72 -
          C64 * C68 - C63 * C73 + C54 * C77 + C65 * C74 - C66 * C69 -
          C65 * C75 + C55 * C78) *
         C1495 * C1484 * C58 * C59 * C60) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C249 * C70 - C250 * C67 - C249 * C71 + C1461 * C76) * C1495 * C246 +
          (C249 * C253 - C250 * C251 - C249 * C254 + C1461 * C257) * C1495 *
              C247 +
          (C249 * C255 - C250 * C252 - C249 * C256 + C1461 * C258) * C1495 *
              C248) *
         C58 * C59 * C60) /
            (p * q * std::sqrt(p + q));
    d2eexy[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C1484 * C94 - C93 * C67) * C61 + (C1484 * C97 - C93 * C71) * C53 +
          (C1484 * C95 - C93 * C68) * C63 + (C1484 * C98 - C93 * C73) * C54 +
          (C1484 * C96 - C93 * C69) * C65 + (C1484 * C99 - C93 * C75) * C55) *
         C1495 * C58 * C59 * C60) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C246 * C94 - C273 * C67 + C247 * C276 - C274 * C251 + C248 * C277 -
           C275 * C252) *
              C249 +
          (C246 * C97 - C273 * C71 + C247 * C278 - C274 * C254 + C248 * C279 -
           C275 * C256) *
              C1461) *
         C1495 * C58 * C59 * C60) /
            (p * q * std::sqrt(p + q));
    d2eexz[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((C1495 * C115 - C114 * C67) * C61 +
                   (C1495 * C118 - C114 * C71) * C53 +
                   (C1495 * C116 - C114 * C68) * C63 +
                   (C1495 * C119 - C114 * C73) * C54 +
                   (C1495 * C117 - C114 * C69) * C65 +
                   (C1495 * C120 - C114 * C75) * C55) *
                  C1484 * C58 * C59 * C60) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C1495 * C115 - C114 * C67) * C249 +
                    (C1495 * C118 - C114 * C71) * C1461) *
                       C246 +
                   ((C1495 * C294 - C114 * C251) * C249 +
                    (C1495 * C296 - C114 * C254) * C1461) *
                       C247 +
                   ((C1495 * C295 - C114 * C252) * C249 +
                    (C1495 * C297 - C114 * C256) * C1461) *
                       C248) *
                  C58 * C59 * C60) /
                     (p * q * std::sqrt(p + q));
    d2eeyx[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((C53 * C70 - C61 * C67 + C54 * C72 - C63 * C68 + C55 * C74 -
                    C65 * C69) *
                       C93 +
                   (C53 * C138 - C61 * C135 + C54 * C139 - C63 * C136 +
                    C55 * C140 - C65 * C137) *
                       C1484) *
                  C1495 * C58 * C59 * C60) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((C1461 * C70 - C249 * C67) * C273 +
                   (C1461 * C138 - C249 * C135) * C246 +
                   (C1461 * C253 - C249 * C251) * C274 +
                   (C1461 * C314 - C249 * C312) * C247 +
                   (C1461 * C255 - C249 * C252) * C275 +
                   (C1461 * C315 - C249 * C313) * C248) *
                  C1495 * C58 * C59 * C60) /
                     (p * q * std::sqrt(p + q));
    d2eeyy[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((C93 * C94 - C155 * C67 - C93 * C135 + C1484 * C156) * C53 +
                   (C93 * C95 - C155 * C68 - C93 * C136 + C1484 * C157) * C54 +
                   (C93 * C96 - C155 * C69 - C93 * C137 + C1484 * C158) * C55) *
                  C1495 * C58 * C59 * C60) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (C273 * C94 - C330 * C67 - C273 * C135 + C246 * C156 +
                   C274 * C276 - C331 * C251 - C274 * C312 + C247 * C333 +
                   C275 * C277 - C332 * C252 - C275 * C313 + C248 * C334) *
                  C1461 * C1495 * C58 * C59 * C60) /
                     (p * q * std::sqrt(p + q));
    d2eeyz[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C1495 * C115 - C114 * C67) * C93 +
                    (C1495 * C173 - C114 * C135) * C1484) *
                       C53 +
                   ((C1495 * C116 - C114 * C68) * C93 +
                    (C1495 * C174 - C114 * C136) * C1484) *
                       C54 +
                   ((C1495 * C117 - C114 * C69) * C93 +
                    (C1495 * C175 - C114 * C137) * C1484) *
                       C55) *
                  C58 * C59 * C60) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((C1495 * C115 - C114 * C67) * C273 +
                   (C1495 * C173 - C114 * C135) * C246 +
                   (C1495 * C294 - C114 * C251) * C274 +
                   (C1495 * C349 - C114 * C312) * C247 +
                   (C1495 * C295 - C114 * C252) * C275 +
                   (C1495 * C350 - C114 * C313) * C248) *
                  C1461 * C58 * C59 * C60) /
                     (p * q * std::sqrt(p + q));
    d2eezx[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((C53 * C70 - C61 * C67 + C54 * C72 - C63 * C68 + C55 * C74 -
                    C65 * C69) *
                       C114 +
                   (C53 * C193 - C61 * C190 + C54 * C194 - C63 * C191 +
                    C55 * C195 - C65 * C192) *
                       C1495) *
                  C1484 * C58 * C59 * C60) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C1461 * C70 - C249 * C67) * C114 +
                    (C1461 * C193 - C249 * C190) * C1495) *
                       C246 +
                   ((C1461 * C253 - C249 * C251) * C114 +
                    (C1461 * C367 - C249 * C365) * C1495) *
                       C247 +
                   ((C1461 * C255 - C249 * C252) * C114 +
                    (C1461 * C368 - C249 * C366) * C1495) *
                       C248) *
                  C58 * C59 * C60) /
                     (p * q * std::sqrt(p + q));
    d2eezy[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C1484 * C94 - C93 * C67) * C114 +
                    (C1484 * C210 - C93 * C190) * C1495) *
                       C53 +
                   ((C1484 * C95 - C93 * C68) * C114 +
                    (C1484 * C211 - C93 * C191) * C1495) *
                       C54 +
                   ((C1484 * C96 - C93 * C69) * C114 +
                    (C1484 * C212 - C93 * C192) * C1495) *
                       C55) *
                  C58 * C59 * C60) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((C246 * C94 - C273 * C67 + C247 * C276 - C274 * C251 +
                    C248 * C277 - C275 * C252) *
                       C114 +
                   (C246 * C210 - C273 * C190 + C247 * C383 - C274 * C365 +
                    C248 * C384 - C275 * C366) *
                       C1495) *
                  C1461 * C58 * C59 * C60) /
                     (p * q * std::sqrt(p + q));
    d2eezz[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C114 * C115 - C227 * C67 - C114 * C190 + C1495 * C228) * C1484 *
              C53 +
          (C114 * C116 - C227 * C68 - C114 * C191 + C1495 * C229) * C1484 *
              C54 +
          (C114 * C117 - C227 * C69 - C114 * C192 + C1495 * C230) * C1484 *
              C55) *
         C58 * C59 * C60) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C114 * C115 - C227 * C67 - C114 * C190 + C1495 * C228) * C246 +
          (C114 * C294 - C227 * C251 - C114 * C365 + C1495 * C399) * C247 +
          (C114 * C295 - C227 * C252 - C114 * C366 + C1495 * C400) * C248) *
         C1461 * C58 * C59 * C60) /
            (p * q * std::sqrt(p + q));
}
