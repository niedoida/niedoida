/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_sdss_AA.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
void second_derivative_ee_0200_11(const double ae,
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
    const double C1142 = ae * be;
    const double C1141 = xA - xB;
    const double C1140 = ae + be;
    const double C1139 = 0 * be;
    const double C1174 = yA - yB;
    const double C1177 = zA - zB;
    const double C1188 = 0 * be;
    const double C1214 = 0 * be;
    const double C1260 = p + q;
    const double C1259 = p * q;
    const double C1265 = xP - xQ;
    const double C1264 = bs[2];
    const double C1272 = std::pow(ae, 2);
    const double C1270 = bs[3];
    const double C1283 = yP - yQ;
    const double C1292 = zP - zQ;
    const double C67 = bs[0];
    const double C1527 = ce + de;
    const double C1526 = ce * de;
    const double C1145 = 2 * C1142;
    const double C1144 = C1142 * C1141;
    const double C1438 = std::pow(C1141, 2);
    const double C1524 = C1141 * ae;
    const double C1143 = std::pow(C1140, 2);
    const double C1525 = 2 * C1140;
    const double C1189 = C1142 * C1174;
    const double C1461 = std::pow(C1174, 2);
    const double C1528 = C1174 * ae;
    const double C1215 = C1142 * C1177;
    const double C1472 = std::pow(C1177, 2);
    const double C1529 = C1177 * ae;
    const double C1261 = 2 * C1259;
    const double C1273 = C1265 * ae;
    const double C1269 = std::pow(C1265, 2);
    const double C1286 = C1283 * ae;
    const double C1285 = C1265 * C1283;
    const double C1302 = C1283 * C1265;
    const double C1307 = std::pow(C1283, 2);
    const double C1295 = C1292 * ae;
    const double C1294 = C1265 * C1292;
    const double C1311 = C1283 * C1292;
    const double C1316 = C1292 * C1265;
    const double C1321 = C1292 * C1283;
    const double C1326 = std::pow(C1292, 2);
    const double C58 = std::exp(-(std::pow(zC - zD, 2) * C1526) / C1527);
    const double C59 = std::exp(-(std::pow(yC - yD, 2) * C1526) / C1527);
    const double C60 = std::exp(-(std::pow(xC - xD, 2) * C1526) / C1527);
    const double C1439 = C1438 * C1142;
    const double C1147 = 2 * C1143;
    const double C1532 = std::pow(C1525, -2);
    const double C1530 = std::pow(C1525, -1);
    const double C1462 = C1461 * C1142;
    const double C1473 = C1472 * C1142;
    const double C1263 = C1261 / C1260;
    const double C73 =
        ((std::pow(xP - xQ, 2) * bs[2] * std::pow(C1261 / C1260, 2) -
          (bs[1] * C1261) / C1260) *
         std::pow(ae, 2)) /
        C1143;
    const double C68 = -(C1265 * bs[1] * C1261) / C1260;
    const double C251 = -(C1283 * bs[1] * C1261) / C1260;
    const double C420 = -(C1292 * bs[1] * C1261) / C1260;
    const double C1275 = C1270 * C1273;
    const double C70 = (-(bs[1] * C1273 * C1261) / C1260) / C1140;
    const double C1288 = C1270 * C1286;
    const double C94 = (-(bs[1] * C1286 * C1261) / C1260) / C1140;
    const double C1287 = C1285 * C1272;
    const double C1303 = C1302 * C1272;
    const double C1297 = C1270 * C1295;
    const double C115 = (-(bs[1] * C1295 * C1261) / C1260) / C1140;
    const double C1296 = C1294 * C1272;
    const double C1312 = C1311 * C1272;
    const double C1317 = C1316 * C1272;
    const double C1322 = C1321 * C1272;
    const double C1440 = C1439 / C1140;
    const double C1463 = C1462 / C1140;
    const double C1474 = C1473 / C1140;
    const double C1266 = std::pow(C1263, 2);
    const double C1271 = -C1263;
    const double C1441 = -C1440;
    const double C1464 = -C1463;
    const double C1475 = -C1474;
    const double C1268 = C1264 * C1266;
    const double C74 = (2 * ae * C1266 * C1264 * C1265 * ae +
                        C1265 *
                            (C1264 * C1266 +
                             std::pow(C1265, 2) * bs[3] * std::pow(-C1263, 3)) *
                            std::pow(ae, 2)) /
                       C1143;
    const double C97 = (C1266 * C1264 * C1265 * (yP - yQ) * C1272) / C1143;
    const double C118 = (C1266 * C1264 * C1265 * (zP - zQ) * C1272) / C1143;
    const double C135 = (C1266 * C1264 * C1283 * C1265 * C1272) / C1143;
    const double C153 =
        ((std::pow(C1283, 2) * C1264 * C1266 - (bs[1] * C1261) / C1260) *
         C1272) /
        C1143;
    const double C173 = (C1266 * C1264 * C1283 * C1292 * C1272) / C1143;
    const double C190 = (C1266 * C1264 * C1292 * C1265 * C1272) / C1143;
    const double C207 = (C1266 * C1264 * C1292 * C1283 * C1272) / C1143;
    const double C225 =
        ((std::pow(C1292, 2) * C1264 * C1266 - (bs[1] * C1261) / C1260) *
         C1272) /
        C1143;
    const double C71 = (C1265 * C1266 * C1264 * C1273) / C1140 -
                       (ae * bs[1] * C1261) / (C1260 * C1140);
    const double C95 = (C1265 * C1266 * C1264 * C1286) / C1140;
    const double C116 = (C1265 * C1266 * C1264 * C1295) / C1140;
    const double C253 = (C1283 * C1266 * C1264 * C1273) / C1140;
    const double C277 = (C1283 * C1266 * C1264 * C1286) / C1140 -
                        (ae * bs[1] * C1261) / (C1260 * C1140);
    const double C295 = (C1283 * C1266 * C1264 * C1295) / C1140;
    const double C422 = (C1292 * C1266 * C1264 * C1273) / C1140;
    const double C442 = (C1292 * C1266 * C1264 * C1286) / C1140;
    const double C463 = (C1292 * C1266 * C1264 * C1295) / C1140 -
                        (ae * bs[1] * C1261) / (C1260 * C1140);
    const double C1274 = std::pow(C1271, 3);
    const double C1442 = std::exp(C1441);
    const double C1465 = std::exp(C1464);
    const double C1476 = std::exp(C1475);
    const double C1276 = C1268 * ae;
    const double C69 = C1268 * C1269 - (bs[1] * C1261) / C1260;
    const double C252 = C1268 * C1307 - (bs[1] * C1261) / C1260;
    const double C421 = C1268 * C1326 - (bs[1] * C1261) / C1260;
    const double C597 = C1283 * C1265 * C1268;
    const double C787 = C1292 * C1265 * C1268;
    const double C973 = C1292 * C1283 * C1268;
    const double C1277 = C1274 * C1275;
    const double C1289 = C1274 * C1288;
    const double C1298 = C1274 * C1297;
    const double C98 = (ae * C1266 * C1264 * C1283 * ae +
                        C1265 * C1274 * C1270 * C1265 * C1283 * C1272) /
                       C1143;
    const double C119 = (ae * C1266 * C1264 * C1292 * ae +
                         C1265 * C1274 * C1270 * C1265 * C1292 * C1272) /
                        C1143;
    const double C136 = (ae * C1266 * C1264 * C1286 +
                         C1265 * C1274 * C1270 * C1283 * C1265 * C1272) /
                        C1143;
    const double C154 =
        (C1265 * (C1268 + std::pow(C1283, 2) * C1270 * C1274) * C1272) / C1143;
    const double C155 =
        ((C1268 + C1307 * C1270 * C1274) * C1272 +
         (C1270 * C1274 + C1307 * bs[4] * std::pow(C1263, 4)) * C1272 * C1269) /
        C1143;
    const double C174 = (C1265 * C1274 * C1270 * C1283 * C1292 * C1272) / C1143;
    const double C175 =
        (C1274 * C1270 * C1312 + std::pow(C1263, 4) * bs[4] * C1312 * C1269) /
        C1143;
    const double C191 = (ae * C1266 * C1264 * C1295 +
                         C1265 * C1274 * C1270 * C1292 * C1265 * C1272) /
                        C1143;
    const double C208 = (C1265 * C1274 * C1270 * C1292 * C1283 * C1272) / C1143;
    const double C209 =
        (C1274 * C1270 * C1322 + std::pow(C1263, 4) * bs[4] * C1322 * C1269) /
        C1143;
    const double C226 =
        (C1265 * (C1268 + std::pow(C1292, 2) * C1270 * C1274) * C1272) / C1143;
    const double C227 =
        ((C1268 + C1326 * C1270 * C1274) * C1272 +
         (C1270 * C1274 + C1326 * bs[4] * std::pow(C1263, 4)) * C1272 * C1269) /
        C1143;
    const double C255 =
        (C1283 * (C1268 + C1269 * C1270 * C1274) * C1272) / C1143;
    const double C256 =
        ((C1268 + C1269 * C1270 * C1274) * C1272 +
         (C1270 * C1274 + C1269 * bs[4] * std::pow(C1263, 4)) * C1272 * C1307) /
        C1143;
    const double C279 =
        (ae * C1266 * C1264 * C1273 + C1283 * C1274 * C1270 * C1287) / C1143;
    const double C297 = (C1283 * C1274 * C1270 * C1296) / C1143;
    const double C298 =
        (C1274 * C1270 * C1296 + std::pow(C1263, 4) * bs[4] * C1296 * C1307) /
        C1143;
    const double C313 =
        (ae * C1266 * C1264 * C1273 + C1283 * C1274 * C1270 * C1303) / C1143;
    const double C332 = (2 * ae * C1266 * C1264 * C1286 +
                         C1283 * (C1268 + C1307 * C1270 * C1274) * C1272) /
                        C1143;
    const double C351 =
        (ae * C1266 * C1264 * C1295 + C1283 * C1274 * C1270 * C1312) / C1143;
    const double C367 = (C1283 * C1274 * C1270 * C1317) / C1143;
    const double C368 =
        (C1274 * C1270 * C1317 + std::pow(C1263, 4) * bs[4] * C1317 * C1307) /
        C1143;
    const double C383 =
        (ae * C1266 * C1264 * C1295 + C1283 * C1274 * C1270 * C1322) / C1143;
    const double C399 =
        (C1283 * (C1268 + C1326 * C1270 * C1274) * C1272) / C1143;
    const double C400 =
        ((C1268 + C1326 * C1270 * C1274) * C1272 +
         (C1270 * C1274 + C1326 * bs[4] * std::pow(C1263, 4)) * C1272 * C1307) /
        C1143;
    const double C424 =
        (C1292 * (C1268 + C1269 * C1270 * C1274) * C1272) / C1143;
    const double C425 =
        ((C1268 + C1269 * C1270 * C1274) * C1272 +
         (C1270 * C1274 + C1269 * bs[4] * std::pow(C1263, 4)) * C1272 * C1326) /
        C1143;
    const double C444 = (C1292 * C1274 * C1270 * C1287) / C1143;
    const double C445 =
        (C1274 * C1270 * C1287 + std::pow(C1263, 4) * bs[4] * C1287 * C1326) /
        C1143;
    const double C465 =
        (ae * C1266 * C1264 * C1273 + C1292 * C1274 * C1270 * C1296) / C1143;
    const double C481 = (C1292 * C1274 * C1270 * C1303) / C1143;
    const double C482 =
        (C1274 * C1270 * C1303 + std::pow(C1263, 4) * bs[4] * C1303 * C1326) /
        C1143;
    const double C497 =
        (C1292 * (C1268 + C1307 * C1270 * C1274) * C1272) / C1143;
    const double C498 =
        ((C1268 + C1307 * C1270 * C1274) * C1272 +
         (C1270 * C1274 + C1307 * bs[4] * std::pow(C1263, 4)) * C1272 * C1326) /
        C1143;
    const double C515 =
        (ae * C1266 * C1264 * C1286 + C1292 * C1274 * C1270 * C1312) / C1143;
    const double C531 =
        (ae * C1266 * C1264 * C1273 + C1292 * C1274 * C1270 * C1317) / C1143;
    const double C547 =
        (ae * C1266 * C1264 * C1286 + C1292 * C1274 * C1270 * C1322) / C1143;
    const double C566 = (2 * ae * C1266 * C1264 * C1295 +
                         C1292 * (C1268 + C1326 * C1270 * C1274) * C1272) /
                        C1143;
    const double C765 =
        (C1283 * C1265 * (C1270 * C1274 + C1326 * bs[4] * std::pow(C1263, 4)) *
         C1272) /
        C1143;
    const double C871 =
        (C1292 * C1265 * (C1270 * C1274 + C1307 * bs[4] * std::pow(C1263, 4)) *
         C1272) /
        C1143;
    const double C975 =
        (C1292 * C1283 * (C1270 * C1274 + C1269 * bs[4] * std::pow(C1263, 4)) *
         C1272) /
        C1143;
    const double C1146 = C1144 * C1442;
    const double C1531 = C1442 * C1524;
    const double C53 = (C1442 * std::pow(C1524, 2)) / C1143 + C1442 / C1525;
    const double C55 = C1532 * C1442;
    const double C590 = C1530 * C1442;
    const double C1190 = C1189 * C1465;
    const double C93 = -(2 * C1142 * (yA - yB) * C1465) / C1140;
    const double C152 =
        -((C1465 - (C1174 * 2 * C1142 * C1174 * C1465) / C1140) * C1145) /
        C1140;
    const double C1533 = C1465 * C1528;
    const double C246 = (C1465 * std::pow(C1528, 2)) / C1143 + C1465 / C1525;
    const double C248 = C1532 * C1465;
    const double C592 = C1530 * C1465;
    const double C1216 = C1215 * C1476;
    const double C114 = -(2 * C1142 * (zA - zB) * C1476) / C1140;
    const double C224 =
        -((C1476 - (C1177 * 2 * C1142 * C1177 * C1476) / C1140) * C1145) /
        C1140;
    const double C1534 = C1476 * C1529;
    const double C417 = (C1476 * std::pow(C1529, 2)) / C1143 + C1476 / C1525;
    const double C419 = C1532 * C1476;
    const double C786 = C1530 * C1476;
    const double C1278 = C1265 * C1277;
    const double C280 =
        (C1274 * C1270 * C1287 + ae * C1283 * C1277 +
         C1283 * (ae * C1277 + C1283 * std::pow(C1263, 4) * bs[4] * C1287)) /
        C1143;
    const double C314 =
        (C1274 * C1270 * C1303 + ae * C1283 * C1277 +
         C1283 * (ae * C1277 + C1283 * std::pow(C1263, 4) * bs[4] * C1303)) /
        C1143;
    const double C466 =
        (C1274 * C1270 * C1296 + ae * C1292 * C1277 +
         C1292 * (ae * C1277 + C1292 * std::pow(C1263, 4) * bs[4] * C1296)) /
        C1143;
    const double C532 =
        (C1274 * C1270 * C1317 + ae * C1292 * C1277 +
         C1292 * (ae * C1277 + C1292 * std::pow(C1263, 4) * bs[4] * C1317)) /
        C1143;
    const double C599 =
        (2 * ae * C1283 * C1277 +
         C1265 * C1283 * (C1270 * C1274 + C1269 * bs[4] * std::pow(C1263, 4)) *
             C1272) /
        C1143;
    const double C789 =
        (2 * ae * C1292 * C1277 +
         C1265 * C1292 * (C1270 * C1274 + C1269 * bs[4] * std::pow(C1263, 4)) *
             C1272) /
        C1143;
    const double C996 =
        (C1292 * (ae * C1277 + C1283 * std::pow(C1263, 4) * bs[4] * C1287)) /
        C1143;
    const double C1016 = (ae * C1283 * C1277 +
                          C1292 * C1283 * std::pow(C1263, 4) * bs[4] * C1296) /
                         C1143;
    const double C1035 = (ae * C1292 * C1277 +
                          C1283 * C1292 * std::pow(C1263, 4) * bs[4] * C1303) /
                         C1143;
    const double C1094 = (ae * C1283 * C1277 +
                          C1292 * C1283 * std::pow(C1263, 4) * bs[4] * C1317) /
                         C1143;
    const double C254 = (C1266 * C1264 * C1273 + C1277 * C1307) / C1140;
    const double C423 = (C1266 * C1264 * C1273 + C1277 * C1326) / C1140;
    const double C974 = (C1292 * C1283 * C1277) / C1140;
    const double C1337 = C1283 * C1289;
    const double C99 =
        (C1274 * C1270 * C1287 + ae * C1265 * C1289 +
         C1265 * (ae * C1289 + C1265 * std::pow(C1263, 4) * bs[4] * C1287)) /
        C1143;
    const double C137 =
        (C1274 * C1270 * C1303 + ae * C1265 * C1289 +
         C1265 * (ae * C1289 + C1265 * std::pow(C1263, 4) * bs[4] * C1303)) /
        C1143;
    const double C516 =
        (C1274 * C1270 * C1312 + ae * C1292 * C1289 +
         C1292 * (ae * C1289 + C1292 * std::pow(C1263, 4) * bs[4] * C1312)) /
        C1143;
    const double C548 =
        (C1274 * C1270 * C1322 + ae * C1292 * C1289 +
         C1292 * (ae * C1289 + C1292 * std::pow(C1263, 4) * bs[4] * C1322)) /
        C1143;
    const double C685 =
        (2 * ae * C1265 * C1289 +
         C1283 * C1265 * (C1270 * C1274 + C1307 * bs[4] * std::pow(C1263, 4)) *
             C1272) /
        C1143;
    const double C811 =
        (C1292 * (ae * C1289 + C1265 * std::pow(C1263, 4) * bs[4] * C1287)) /
        C1143;
    const double C852 =
        (C1292 * (ae * C1289 + C1265 * std::pow(C1263, 4) * bs[4] * C1303)) /
        C1143;
    const double C891 = (ae * C1265 * C1289 +
                         C1292 * C1265 * std::pow(C1263, 4) * bs[4] * C1312) /
                        C1143;
    const double C929 = (ae * C1265 * C1289 +
                         C1292 * C1265 * std::pow(C1263, 4) * bs[4] * C1322) /
                        C1143;
    const double C1054 =
        (2 * ae * C1292 * C1289 +
         C1283 * C1292 * (C1270 * C1274 + C1307 * bs[4] * std::pow(C1263, 4)) *
             C1272) /
        C1143;
    const double C96 = (C1266 * C1264 * C1286 + C1289 * C1269) / C1140;
    const double C443 = (C1266 * C1264 * C1286 + C1289 * C1326) / C1140;
    const double C624 = (C1283 * C1265 * C1289 + C1265 * C1268 * ae) / C1140;
    const double C810 = (C1292 * C1265 * C1289) / C1140;
    const double C1366 = C1292 * C1298;
    const double C120 =
        (C1274 * C1270 * C1296 + ae * C1265 * C1298 +
         C1265 * (ae * C1298 + C1265 * std::pow(C1263, 4) * bs[4] * C1296)) /
        C1143;
    const double C192 =
        (C1274 * C1270 * C1317 + ae * C1265 * C1298 +
         C1265 * (ae * C1298 + C1265 * std::pow(C1263, 4) * bs[4] * C1317)) /
        C1143;
    const double C352 =
        (C1274 * C1270 * C1312 + ae * C1283 * C1298 +
         C1283 * (ae * C1298 + C1283 * std::pow(C1263, 4) * bs[4] * C1312)) /
        C1143;
    const double C384 =
        (C1274 * C1270 * C1322 + ae * C1283 * C1298 +
         C1283 * (ae * C1298 + C1283 * std::pow(C1263, 4) * bs[4] * C1322)) /
        C1143;
    const double C645 =
        (C1283 * (ae * C1298 + C1265 * std::pow(C1263, 4) * bs[4] * C1296)) /
        C1143;
    const double C708 = (ae * C1265 * C1298 +
                         C1283 * C1265 * std::pow(C1263, 4) * bs[4] * C1312) /
                        C1143;
    const double C727 =
        (C1283 * (ae * C1298 + C1265 * std::pow(C1263, 4) * bs[4] * C1317)) /
        C1143;
    const double C746 = (ae * C1265 * C1298 +
                         C1283 * C1265 * std::pow(C1263, 4) * bs[4] * C1322) /
                        C1143;
    const double C950 =
        (2 * ae * C1265 * C1298 +
         C1292 * C1265 * (C1270 * C1274 + C1326 * bs[4] * std::pow(C1263, 4)) *
             C1272) /
        C1143;
    const double C1132 =
        (2 * ae * C1283 * C1298 +
         C1292 * C1283 * (C1270 * C1274 + C1326 * bs[4] * std::pow(C1263, 4)) *
             C1272) /
        C1143;
    const double C117 = (C1266 * C1264 * C1295 + C1298 * C1269) / C1140;
    const double C296 = (C1266 * C1264 * C1295 + C1298 * C1307) / C1140;
    const double C644 = (C1283 * C1265 * C1298) / C1140;
    const double C832 = (C1292 * C1265 * C1298 + C1265 * C1268 * ae) / C1140;
    const double C1015 = (C1292 * C1283 * C1298 + C1283 * C1268 * ae) / C1140;
    const double C1148 = 2 * C1146;
    const double C66 =
        ((0 * ae) / C1140 - C1146 / C1143) / (2 * C1140) + (0 * ae) / C1140;
    const double C596 = (0 * ae) / C1140 - C1146 / C1143;
    const double C54 = (2 * C1530 * C1531) / C1140;
    const double C589 = C1531 / C1140;
    const double C1198 = 2 * C1190;
    const double C276 =
        ((0 * ae) / C1140 - C1190 / C1143) / (2 * C1140) + (0 * ae) / C1140;
    const double C623 = (0 * ae) / C1140 - C1190 / C1143;
    const double C158 = C93 * C95;
    const double C157 = C93 * C94;
    const double C500 = C93 * C442;
    const double C247 = (2 * C1530 * C1533) / C1140;
    const double C591 = C1533 / C1140;
    const double C275 =
        (((C1465 - (C1174 * 2 * C1190) / C1140) * ae) / C1140 - C1188 / C1147) /
            (2 * C1140) +
        ((C1174 * ((0 * ae) / C1140 - C1190 / C1143) + C592) * ae) / C1140;
    const double C1224 = 2 * C1216;
    const double C462 =
        ((0 * ae) / C1140 - C1216 / C1143) / (2 * C1140) + (0 * ae) / C1140;
    const double C831 = (0 * ae) / C1140 - C1216 / C1143;
    const double C230 = C114 * C116;
    const double C229 = C114 * C115;
    const double C402 = C114 * C295;
    const double C418 = (2 * C1530 * C1534) / C1140;
    const double C785 = C1534 / C1140;
    const double C461 =
        (((C1476 - (C1177 * 2 * C1216) / C1140) * ae) / C1140 - C1214 / C1147) /
            (2 * C1140) +
        ((C1177 * ((0 * ae) / C1140 - C1216 / C1143) + C786) * ae) / C1140;
    const double C1279 = C1278 + C1276;
    const double C1338 = C1337 + C1276;
    const double C159 = C93 * C96;
    const double C501 = C93 * C443;
    const double C873 = C93 * C810;
    const double C1367 = C1366 + C1276;
    const double C231 = C114 * C117;
    const double C403 = C114 * C296;
    const double C767 = C114 * C644;
    const double C1149 = C1141 * C1148;
    const double C250 = -C1148 / C1140;
    const double C602 = C596 * C71;
    const double C1199 = C1174 * C1198;
    const double C690 = C623 * C624;
    const double C688 = C623 * C277;
    const double C274 =
        (((0 - (C1174 * C1188) / C1140) * ae) / C1140 - (0 * be) / C1147) /
            (2 * C1140) +
        ((C1174 * (((C1465 - (C1174 * 2 * C1190) / C1140) * ae) / C1140 -
                   C1188 / C1147) +
          C591) *
         ae) /
            C1140 +
        (0 * ae) / C1140 - C1190 / C1143;
    const double C336 = C275 * C277;
    const double C1225 = C1177 * C1224;
    const double C955 = C831 * C832;
    const double C953 = C831 * C463;
    const double C1135 = C831 * C1015;
    const double C460 =
        (((0 - (C1177 * C1214) / C1140) * ae) / C1140 - (0 * be) / C1147) /
            (2 * C1140) +
        ((C1177 * (((C1476 - (C1177 * 2 * C1216) / C1140) * ae) / C1140 -
                   C1214 / C1147) +
          C785) *
         ae) /
            C1140 +
        (0 * ae) / C1140 - C1216 / C1143;
    const double C570 = C461 * C463;
    const double C1280 = ae * C1279;
    const double C72 =
        (C1266 * C1264 * C1273 + C1265 * C1279 + C1265 * C1268 * ae) / C1140;
    const double C598 = (C1283 * C1279) / C1140;
    const double C788 = (C1292 * C1279) / C1140;
    const double C1339 = ae * C1338;
    const double C278 =
        (C1266 * C1264 * C1286 + C1283 * C1338 + C1283 * C1268 * ae) / C1140;
    const double C995 = (C1292 * C1338) / C1140;
    const double C1368 = ae * C1367;
    const double C464 =
        (C1266 * C1264 * C1295 + C1292 * C1367 + C1292 * C1268 * ae) / C1140;
    const double C1150 = C1149 / C1140;
    const double C260 = C250 * C254;
    const double C259 = C250 * C253;
    const double C258 = C250 * C70;
    const double C428 = C250 * C423;
    const double C427 = C250 * C422;
    const double C977 = C250 * C974;
    const double C1200 = C1199 / C1140;
    const double C335 = C274 * C94;
    const double C1226 = C1225 / C1140;
    const double C569 = C460 * C115;
    const double C75 =
        ((C1268 + C1269 * C1270 * C1274) * C1272 + C1280 + C1280 +
         C1265 * (2 * ae * C1277 +
                  C1265 * (C1270 * C1274 + C1269 * bs[4] * std::pow(C1263, 4)) *
                      C1272)) /
        C1143;
    const double C625 =
        (C1280 +
         C1283 * (ae * C1289 + C1265 * std::pow(C1263, 4) * bs[4] * C1287)) /
        C1143;
    const double C664 =
        (C1280 +
         C1283 * (ae * C1289 + C1265 * std::pow(C1263, 4) * bs[4] * C1303)) /
        C1143;
    const double C833 =
        (C1280 +
         C1292 * (ae * C1298 + C1265 * std::pow(C1263, 4) * bs[4] * C1296)) /
        C1143;
    const double C910 =
        (C1280 +
         C1292 * (ae * C1298 + C1265 * std::pow(C1263, 4) * bs[4] * C1317)) /
        C1143;
    const double C79 = C66 * C72;
    const double C604 = C596 * C598;
    const double C792 = C596 * C788;
    const double C333 =
        ((C1268 + C1307 * C1270 * C1274) * C1272 + C1339 + C1339 +
         C1283 * (2 * ae * C1289 +
                  C1283 * (C1270 * C1274 + C1307 * bs[4] * std::pow(C1263, 4)) *
                      C1272)) /
        C1143;
    const double C1113 =
        (C1339 +
         C1292 * (ae * C1298 + C1283 * std::pow(C1263, 4) * bs[4] * C1322)) /
        C1143;
    const double C337 = C276 * C278;
    const double C1057 = C623 * C995;
    const double C567 =
        ((C1268 + C1326 * C1270 * C1274) * C1272 + C1368 + C1368 +
         C1292 * (2 * ae * C1298 +
                  C1292 * (C1270 * C1274 + C1326 * bs[4] * std::pow(C1263, 4)) *
                      C1272)) /
        C1143;
    const double C1075 =
        (C1368 +
         C1283 * (ae * C1289 + C1292 * std::pow(C1263, 4) * bs[4] * C1312)) /
        C1143;
    const double C571 = C462 * C464;
    const double C1151 = C1442 - C1150;
    const double C1201 = C1465 - C1200;
    const double C1227 = C1476 - C1226;
    const double C1152 = C1151 * C1145;
    const double C62 =
        (((0 - (C1141 * C1139) / C1140) * ae) / C1140 - (0 * be) / C1147) /
            (2 * C1140) +
        ((C1141 * ((C1151 * ae) / C1140 - C1139 / C1147) + C589) * ae) / C1140 +
        (0 * ae) / C1140 - C1146 / C1143;
    const double C64 =
        ((C1151 * ae) / C1140 - C1139 / C1147) / (2 * C1140) +
        ((C1141 * ((0 * ae) / C1140 - C1146 / C1143) + C590) * ae) / C1140;
    const double C594 = (C1151 * ae) / C1140 - C1139 / C1147;
    const double C1202 = C1201 * C1145;
    const double C622 = (C1201 * ae) / C1140 - C1188 / C1147;
    const double C1228 = C1227 * C1145;
    const double C830 = (C1227 * ae) / C1140 - C1214 / C1147;
    const double C1160 = C1141 * C1152;
    const double C61 =
        (ae * -2 * C1139) / (C1143 * 2 * C1140) +
        (((C1141 * ((-4 * C1146) / C1140 - (C1141 * C1152) / C1140) * ae) /
              C1140 +
          2 * ((C1151 * ae) / C1140 - C1139 / C1147)) *
         ae) /
            C1140 -
        C1152 / C1147;
    const double C65 = (-C1152 / C1140) / (4 * C1143);
    const double C249 = -C1152 / C1140;
    const double C595 = (-C1152 / C1140) / (2 * C1140);
    const double C77 = C62 * C70;
    const double C78 = C64 * C71;
    const double C603 = C594 * C253;
    const double C601 = C594 * C70;
    const double C791 = C594 * C422;
    const double C1205 = C1174 * C1202;
    const double C329 =
        (ae * -2 * C1188) / (C1143 * 2 * C1140) +
        (((C1174 * ((-4 * C1190) / C1140 - (C1174 * C1202) / C1140) * ae) /
              C1140 +
          2 * ((C1201 * ae) / C1140 - C1188 / C1147)) *
         ae) /
            C1140 -
        C1202 / C1147;
    const double C331 = (-C1202 / C1140) / (4 * C1143);
    const double C684 = (-C1202 / C1140) / (2 * C1140);
    const double C689 = C622 * C95;
    const double C687 = C622 * C94;
    const double C1056 = C622 * C442;
    const double C1231 = C1177 * C1228;
    const double C563 =
        (ae * -2 * C1214) / (C1143 * 2 * C1140) +
        (((C1177 * ((-4 * C1216) / C1140 - (C1177 * C1228) / C1140) * ae) /
              C1140 +
          2 * ((C1227 * ae) / C1140 - C1214 / C1147)) *
         ae) /
            C1140 -
        C1228 / C1147;
    const double C565 = (-C1228 / C1140) / (4 * C1143);
    const double C949 = (-C1228 / C1140) / (2 * C1140);
    const double C954 = C830 * C116;
    const double C952 = C830 * C115;
    const double C1134 = C830 * C295;
    const double C63 =
        (((-4 * C1146) / C1140 - C1160 / C1140) * ae) / C1147 +
        ((2 * ((0 * ae) / C1140 - C1146 / C1143) - C1160 / C1147) * ae) / C1140;
    const double C593 = (((-4 * C1146) / C1140 - C1160 / C1140) * ae) / C1140;
    const double C330 =
        (((-4 * C1190) / C1140 - C1205 / C1140) * ae) / C1147 +
        ((2 * ((0 * ae) / C1140 - C1190 / C1143) - C1205 / C1147) * ae) / C1140;
    const double C683 = (((-4 * C1190) / C1140 - C1205 / C1140) * ae) / C1140;
    const double C564 =
        (((-4 * C1216) / C1140 - C1231 / C1140) * ae) / C1147 +
        ((2 * ((0 * ae) / C1140 - C1216 / C1143) - C1231 / C1147) * ae) / C1140;
    const double C948 = (((-4 * C1216) / C1140 - C1231 / C1140) * ae) / C1140;
    d2eexx[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((C593 * C67 + C601 + C601 + C589 * C73 + C595 * C68 + C602 +
                    C602 + C590 * C74) *
                       C1476 * C591 +
                   (C593 * C251 + C603 + C603 + C589 * C255 + C595 * C597 +
                    C604 + C604 + C590 * C599) *
                       C1476 * C592) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eexy[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C622 * C67 + C591 * C94 + C623 * C251 + C592 * C277) * C594 +
          (C622 * C70 + C591 * C97 + C623 * C253 + C592 * C279) * C589 +
          (C622 * C68 + C591 * C95 + C623 * C597 + C592 * C624) * C596 +
          (C622 * C71 + C591 * C98 + C623 * C598 + C592 * C625) * C590) *
         C1476 * C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eexz[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C114 * C67 + C1476 * C115) * C594 +
                    (C114 * C70 + C1476 * C118) * C589 +
                    (C114 * C68 + C1476 * C116) * C596 +
                    (C114 * C71 + C1476 * C119) * C590) *
                       C591 +
                   ((C114 * C251 + C1476 * C295) * C594 +
                    (C114 * C253 + C1476 * C297) * C589 +
                    (C114 * C597 + C1476 * C644) * C596 +
                    (C114 * C598 + C1476 * C645) * C590) *
                       C592) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C594 * C67 + C589 * C70 + C596 * C68 + C590 * C71) * C622 +
          (C594 * C94 + C589 * C135 + C596 * C95 + C590 * C136) * C591 +
          (C594 * C251 + C589 * C253 + C596 * C597 + C590 * C598) * C623 +
          (C594 * C277 + C589 * C313 + C596 * C624 + C590 * C664) * C592) *
         C1476 * C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eeyy[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((C683 * C67 + C687 + C687 + C591 * C153 + C684 * C251 +
                    C688 + C688 + C592 * C332) *
                       C589 +
                   (C683 * C68 + C689 + C689 + C591 * C154 + C684 * C597 +
                    C690 + C690 + C592 * C685) *
                       C590) *
                  C1476 * C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C114 * C67 + C1476 * C115) * C622 +
                    (C114 * C94 + C1476 * C173) * C591 +
                    (C114 * C251 + C1476 * C295) * C623 +
                    (C114 * C277 + C1476 * C351) * C592) *
                       C589 +
                   ((C114 * C68 + C1476 * C116) * C622 +
                    (C114 * C95 + C1476 * C174) * C591 +
                    (C114 * C597 + C1476 * C644) * C623 +
                    (C114 * C624 + C1476 * C708) * C592) *
                       C590) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eezx[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C594 * C67 + C589 * C70 + C596 * C68 + C590 * C71) * C114 +
           (C594 * C115 + C589 * C190 + C596 * C116 + C590 * C191) * C1476) *
              C591 +
          ((C594 * C251 + C589 * C253 + C596 * C597 + C590 * C598) * C114 +
           (C594 * C295 + C589 * C367 + C596 * C644 + C590 * C727) * C1476) *
              C592) *
         C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eezy[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C622 * C67 + C591 * C94 + C623 * C251 + C592 * C277) * C114 +
           (C622 * C115 + C591 * C207 + C623 * C295 + C592 * C383) * C1476) *
              C589 +
          ((C622 * C68 + C591 * C95 + C623 * C597 + C592 * C624) * C114 +
           (C622 * C116 + C591 * C208 + C623 * C644 + C592 * C746) * C1476) *
              C590) *
         C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eezz[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C224 * C67 + C229 + C229 + C1476 * C225) * C591 +
                    (C224 * C251 + C402 + C402 + C1476 * C399) * C592) *
                       C589 +
                   ((C224 * C68 + C230 + C230 + C1476 * C226) * C591 +
                    (C224 * C597 + C767 + C767 + C1476 * C765) * C592) *
                       C590) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eexx[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C249 * C67 + C258 + C258 + C1442 * C73) * C785 +
                    (C249 * C420 + C427 + C427 + C1442 * C424) * C786) *
                       C591 +
                   ((C249 * C251 + C259 + C259 + C1442 * C255) * C785 +
                    (C249 * C973 + C977 + C977 + C1442 * C975) * C786) *
                       C592) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eexy[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C622 * C67 + C591 * C94 + C623 * C251 + C592 * C277) * C250 +
           (C622 * C70 + C591 * C97 + C623 * C253 + C592 * C279) * C1442) *
              C785 +
          ((C622 * C420 + C591 * C442 + C623 * C973 + C592 * C995) * C250 +
           (C622 * C422 + C591 * C444 + C623 * C974 + C592 * C996) * C1442) *
              C786) *
         C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eexz[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C830 * C67 + C785 * C115 + C831 * C420 + C786 * C463) * C250 +
           (C830 * C70 + C785 * C118 + C831 * C422 + C786 * C465) * C1442) *
              C591 +
          ((C830 * C251 + C785 * C295 + C831 * C973 + C786 * C1015) * C250 +
           (C830 * C253 + C785 * C297 + C831 * C974 + C786 * C1016) * C1442) *
              C592) *
         C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eeyx[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C250 * C67 + C1442 * C70) * C622 +
                    (C250 * C94 + C1442 * C135) * C591 +
                    (C250 * C251 + C1442 * C253) * C623 +
                    (C250 * C277 + C1442 * C313) * C592) *
                       C785 +
                   ((C250 * C420 + C1442 * C422) * C622 +
                    (C250 * C442 + C1442 * C481) * C591 +
                    (C250 * C973 + C1442 * C974) * C623 +
                    (C250 * C995 + C1442 * C1035) * C592) *
                       C786) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((C683 * C67 + C687 + C687 + C591 * C153 + C684 * C251 +
                    C688 + C688 + C592 * C332) *
                       C1442 * C785 +
                   (C683 * C420 + C1056 + C1056 + C591 * C497 + C684 * C973 +
                    C1057 + C1057 + C592 * C1054) *
                       C1442 * C786) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C830 * C67 + C785 * C115 + C831 * C420 + C786 * C463) * C622 +
          (C830 * C94 + C785 * C173 + C831 * C442 + C786 * C515) * C591 +
          (C830 * C251 + C785 * C295 + C831 * C973 + C786 * C1015) * C623 +
          (C830 * C277 + C785 * C351 + C831 * C995 + C786 * C1075) * C592) *
         C1442 * C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eezx[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C250 * C67 + C1442 * C70) * C830 +
                    (C250 * C115 + C1442 * C190) * C785 +
                    (C250 * C420 + C1442 * C422) * C831 +
                    (C250 * C463 + C1442 * C531) * C786) *
                       C591 +
                   ((C250 * C251 + C1442 * C253) * C830 +
                    (C250 * C295 + C1442 * C367) * C785 +
                    (C250 * C973 + C1442 * C974) * C831 +
                    (C250 * C1015 + C1442 * C1094) * C786) *
                       C592) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eezy[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C622 * C67 + C591 * C94 + C623 * C251 + C592 * C277) * C830 +
          (C622 * C115 + C591 * C207 + C623 * C295 + C592 * C383) * C785 +
          (C622 * C420 + C591 * C442 + C623 * C973 + C592 * C995) * C831 +
          (C622 * C463 + C591 * C547 + C623 * C1015 + C592 * C1113) * C786) *
         C1442 * C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eezz[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((C948 * C67 + C952 + C952 + C785 * C225 + C949 * C420 +
                    C953 + C953 + C786 * C566) *
                       C591 +
                   (C948 * C251 + C1134 + C1134 + C785 * C399 + C949 * C973 +
                    C1135 + C1135 + C786 * C1132) *
                       C592) *
                  C1442 * C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eexx[2] += (-std::pow(Pi, 2.5) *
                  ((C249 * C67 + C258 + C258 + C1442 * C73) * C1476 * C246 +
                   (C249 * C251 + C259 + C259 + C1442 * C255) * C1476 * C247 +
                   (C249 * C252 + C260 + C260 + C1442 * C256) * C1476 * C248) *
                  C58 * C59 * C60) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (C61 * C67 + C77 + C77 + C53 * C73 + C63 * C68 + C78 + C78 +
                   C54 * C74 + C65 * C69 + C79 + C79 + C55 * C75) *
                  C1476 * C1465 * C58 * C59 * C60) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((C249 * C67 + C258 + C258 + C1442 * C73) * C417 +
                   (C249 * C420 + C427 + C427 + C1442 * C424) * C418 +
                   (C249 * C421 + C428 + C428 + C1442 * C425) * C419) *
                  C1465 * C58 * C59 * C60) /
                     (p * q * std::sqrt(p + q));
    d2eexy[2] +=
        (-std::pow(Pi, 2.5) *
         ((C274 * C67 + C246 * C94 + C275 * C251 + C247 * C277 + C276 * C252 +
           C248 * C278) *
              C250 +
          (C274 * C70 + C246 * C97 + C275 * C253 + C247 * C279 + C276 * C254 +
           C248 * C280) *
              C1442) *
         C1476 * C58 * C59 * C60) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C93 * C67 + C1465 * C94) * C62 + (C93 * C70 + C1465 * C97) * C53 +
          (C93 * C68 + C1465 * C95) * C64 + (C93 * C71 + C1465 * C98) * C54 +
          (C93 * C69 + C1465 * C96) * C66 + (C93 * C72 + C1465 * C99) * C55) *
         C1476 * C58 * C59 * C60) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C93 * C67 + C1465 * C94) * C250 +
           (C93 * C70 + C1465 * C97) * C1442) *
              C417 +
          ((C93 * C420 + C1465 * C442) * C250 +
           (C93 * C422 + C1465 * C444) * C1442) *
              C418 +
          ((C93 * C421 + C1465 * C443) * C250 +
           (C93 * C423 + C1465 * C445) * C1442) *
              C419) *
         C58 * C59 * C60) /
            (p * q * std::sqrt(p + q));
    d2eexz[2] += (-std::pow(Pi, 2.5) *
                  (((C114 * C67 + C1476 * C115) * C250 +
                    (C114 * C70 + C1476 * C118) * C1442) *
                       C246 +
                   ((C114 * C251 + C1476 * C295) * C250 +
                    (C114 * C253 + C1476 * C297) * C1442) *
                       C247 +
                   ((C114 * C252 + C1476 * C296) * C250 +
                    (C114 * C254 + C1476 * C298) * C1442) *
                       C248) *
                  C58 * C59 * C60) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  ((C114 * C67 + C1476 * C115) * C62 +
                   (C114 * C70 + C1476 * C118) * C53 +
                   (C114 * C68 + C1476 * C116) * C64 +
                   (C114 * C71 + C1476 * C119) * C54 +
                   (C114 * C69 + C1476 * C117) * C66 +
                   (C114 * C72 + C1476 * C120) * C55) *
                  C1465 * C58 * C59 * C60) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((C460 * C67 + C417 * C115 + C461 * C420 + C418 * C463 +
                    C462 * C421 + C419 * C464) *
                       C250 +
                   (C460 * C70 + C417 * C118 + C461 * C422 + C418 * C465 +
                    C462 * C423 + C419 * C466) *
                       C1442) *
                  C1465 * C58 * C59 * C60) /
                     (p * q * std::sqrt(p + q));
    d2eeyx[2] += (-std::pow(Pi, 2.5) *
                  ((C250 * C67 + C1442 * C70) * C274 +
                   (C250 * C94 + C1442 * C135) * C246 +
                   (C250 * C251 + C1442 * C253) * C275 +
                   (C250 * C277 + C1442 * C313) * C247 +
                   (C250 * C252 + C1442 * C254) * C276 +
                   (C250 * C278 + C1442 * C314) * C248) *
                  C1476 * C58 * C59 * C60) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  ((C62 * C67 + C53 * C70 + C64 * C68 + C54 * C71 + C66 * C69 +
                    C55 * C72) *
                       C93 +
                   (C62 * C94 + C53 * C135 + C64 * C95 + C54 * C136 +
                    C66 * C96 + C55 * C137) *
                       C1465) *
                  C1476 * C58 * C59 * C60) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C250 * C67 + C1442 * C70) * C93 +
                    (C250 * C94 + C1442 * C135) * C1465) *
                       C417 +
                   ((C250 * C420 + C1442 * C422) * C93 +
                    (C250 * C442 + C1442 * C481) * C1465) *
                       C418 +
                   ((C250 * C421 + C1442 * C423) * C93 +
                    (C250 * C443 + C1442 * C482) * C1465) *
                       C419) *
                  C58 * C59 * C60) /
                     (p * q * std::sqrt(p + q));
    d2eeyy[2] +=
        (-std::pow(Pi, 2.5) *
         (C329 * C67 + C335 + C335 + C246 * C153 + C330 * C251 + C336 + C336 +
          C247 * C332 + C331 * C252 + C337 + C337 + C248 * C333) *
         C1442 * C1476 * C58 * C59 * C60) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C152 * C67 + C157 + C157 + C1465 * C153) * C53 +
          (C152 * C68 + C158 + C158 + C1465 * C154) * C54 +
          (C152 * C69 + C159 + C159 + C1465 * C155) * C55) *
         C1476 * C58 * C59 * C60) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C152 * C67 + C157 + C157 + C1465 * C153) * C1442 * C417 +
          (C152 * C420 + C500 + C500 + C1465 * C497) * C1442 * C418 +
          (C152 * C421 + C501 + C501 + C1465 * C498) * C1442 * C419) *
         C58 * C59 * C60) /
            (p * q * std::sqrt(p + q));
    d2eeyz[2] += (-std::pow(Pi, 2.5) *
                  ((C114 * C67 + C1476 * C115) * C274 +
                   (C114 * C94 + C1476 * C173) * C246 +
                   (C114 * C251 + C1476 * C295) * C275 +
                   (C114 * C277 + C1476 * C351) * C247 +
                   (C114 * C252 + C1476 * C296) * C276 +
                   (C114 * C278 + C1476 * C352) * C248) *
                  C1442 * C58 * C59 * C60) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (((C114 * C67 + C1476 * C115) * C93 +
                    (C114 * C94 + C1476 * C173) * C1465) *
                       C53 +
                   ((C114 * C68 + C1476 * C116) * C93 +
                    (C114 * C95 + C1476 * C174) * C1465) *
                       C54 +
                   ((C114 * C69 + C1476 * C117) * C93 +
                    (C114 * C96 + C1476 * C175) * C1465) *
                       C55) *
                  C58 * C59 * C60) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((C460 * C67 + C417 * C115 + C461 * C420 + C418 * C463 +
                    C462 * C421 + C419 * C464) *
                       C93 +
                   (C460 * C94 + C417 * C173 + C461 * C442 + C418 * C515 +
                    C462 * C443 + C419 * C516) *
                       C1465) *
                  C1442 * C58 * C59 * C60) /
                     (p * q * std::sqrt(p + q));
    d2eezx[2] += (-std::pow(Pi, 2.5) *
                  (((C250 * C67 + C1442 * C70) * C114 +
                    (C250 * C115 + C1442 * C190) * C1476) *
                       C246 +
                   ((C250 * C251 + C1442 * C253) * C114 +
                    (C250 * C295 + C1442 * C367) * C1476) *
                       C247 +
                   ((C250 * C252 + C1442 * C254) * C114 +
                    (C250 * C296 + C1442 * C368) * C1476) *
                       C248) *
                  C58 * C59 * C60) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  ((C62 * C67 + C53 * C70 + C64 * C68 + C54 * C71 + C66 * C69 +
                    C55 * C72) *
                       C114 +
                   (C62 * C115 + C53 * C190 + C64 * C116 + C54 * C191 +
                    C66 * C117 + C55 * C192) *
                       C1476) *
                  C1465 * C58 * C59 * C60) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((C250 * C67 + C1442 * C70) * C460 +
                   (C250 * C115 + C1442 * C190) * C417 +
                   (C250 * C420 + C1442 * C422) * C461 +
                   (C250 * C463 + C1442 * C531) * C418 +
                   (C250 * C421 + C1442 * C423) * C462 +
                   (C250 * C464 + C1442 * C532) * C419) *
                  C1465 * C58 * C59 * C60) /
                     (p * q * std::sqrt(p + q));
    d2eezy[2] += (-std::pow(Pi, 2.5) *
                  ((C274 * C67 + C246 * C94 + C275 * C251 + C247 * C277 +
                    C276 * C252 + C248 * C278) *
                       C114 +
                   (C274 * C115 + C246 * C207 + C275 * C295 + C247 * C383 +
                    C276 * C296 + C248 * C384) *
                       C1476) *
                  C1442 * C58 * C59 * C60) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (((C93 * C67 + C1465 * C94) * C114 +
                    (C93 * C115 + C1465 * C207) * C1476) *
                       C53 +
                   ((C93 * C68 + C1465 * C95) * C114 +
                    (C93 * C116 + C1465 * C208) * C1476) *
                       C54 +
                   ((C93 * C69 + C1465 * C96) * C114 +
                    (C93 * C117 + C1465 * C209) * C1476) *
                       C55) *
                  C58 * C59 * C60) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((C93 * C67 + C1465 * C94) * C460 +
                   (C93 * C115 + C1465 * C207) * C417 +
                   (C93 * C420 + C1465 * C442) * C461 +
                   (C93 * C463 + C1465 * C547) * C418 +
                   (C93 * C421 + C1465 * C443) * C462 +
                   (C93 * C464 + C1465 * C548) * C419) *
                  C1442 * C58 * C59 * C60) /
                     (p * q * std::sqrt(p + q));
    d2eezz[2] +=
        (-std::pow(Pi, 2.5) *
         ((C224 * C67 + C229 + C229 + C1476 * C225) * C246 +
          (C224 * C251 + C402 + C402 + C1476 * C399) * C247 +
          (C224 * C252 + C403 + C403 + C1476 * C400) * C248) *
         C1442 * C58 * C59 * C60) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C224 * C67 + C229 + C229 + C1476 * C225) * C1465 * C53 +
          (C224 * C68 + C230 + C230 + C1476 * C226) * C1465 * C54 +
          (C224 * C69 + C231 + C231 + C1476 * C227) * C1465 * C55) *
         C58 * C59 * C60) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (C563 * C67 + C569 + C569 + C417 * C225 + C564 * C420 + C570 + C570 +
          C418 * C566 + C565 * C421 + C571 + C571 + C419 * C567) *
         C1465 * C1442 * C58 * C59 * C60) /
            (p * q * std::sqrt(p + q));
    d2eexx[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((C593 * C67 + C601 + C601 + C589 * C73 + C595 * C68 + C602 +
                    C602 + C590 * C74) *
                       C785 +
                   (C593 * C420 + C791 + C791 + C589 * C424 + C595 * C787 +
                    C792 + C792 + C590 * C789) *
                       C786) *
                  C1465 * C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eexy[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C93 * C67 + C1465 * C94) * C594 + (C93 * C70 + C1465 * C97) * C589 +
           (C93 * C68 + C1465 * C95) * C596 +
           (C93 * C71 + C1465 * C98) * C590) *
              C785 +
          ((C93 * C420 + C1465 * C442) * C594 +
           (C93 * C422 + C1465 * C444) * C589 +
           (C93 * C787 + C1465 * C810) * C596 +
           (C93 * C788 + C1465 * C811) * C590) *
              C786) *
         C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eexz[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C830 * C67 + C785 * C115 + C831 * C420 + C786 * C463) * C594 +
          (C830 * C70 + C785 * C118 + C831 * C422 + C786 * C465) * C589 +
          (C830 * C68 + C785 * C116 + C831 * C787 + C786 * C832) * C596 +
          (C830 * C71 + C785 * C119 + C831 * C788 + C786 * C833) * C590) *
         C1465 * C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eeyx[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C594 * C67 + C589 * C70 + C596 * C68 + C590 * C71) * C93 +
           (C594 * C94 + C589 * C135 + C596 * C95 + C590 * C136) * C1465) *
              C785 +
          ((C594 * C420 + C589 * C422 + C596 * C787 + C590 * C788) * C93 +
           (C594 * C442 + C589 * C481 + C596 * C810 + C590 * C852) * C1465) *
              C786) *
         C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eeyy[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C152 * C67 + C157 + C157 + C1465 * C153) * C589 +
                    (C152 * C68 + C158 + C158 + C1465 * C154) * C590) *
                       C785 +
                   ((C152 * C420 + C500 + C500 + C1465 * C497) * C589 +
                    (C152 * C787 + C873 + C873 + C1465 * C871) * C590) *
                       C786) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C830 * C67 + C785 * C115 + C831 * C420 + C786 * C463) * C93 +
           (C830 * C94 + C785 * C173 + C831 * C442 + C786 * C515) * C1465) *
              C589 +
          ((C830 * C68 + C785 * C116 + C831 * C787 + C786 * C832) * C93 +
           (C830 * C95 + C785 * C174 + C831 * C810 + C786 * C891) * C1465) *
              C590) *
         C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eezx[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C594 * C67 + C589 * C70 + C596 * C68 + C590 * C71) * C830 +
          (C594 * C115 + C589 * C190 + C596 * C116 + C590 * C191) * C785 +
          (C594 * C420 + C589 * C422 + C596 * C787 + C590 * C788) * C831 +
          (C594 * C463 + C589 * C531 + C596 * C832 + C590 * C910) * C786) *
         C1465 * C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eezy[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C93 * C67 + C1465 * C94) * C830 +
                    (C93 * C115 + C1465 * C207) * C785 +
                    (C93 * C420 + C1465 * C442) * C831 +
                    (C93 * C463 + C1465 * C547) * C786) *
                       C589 +
                   ((C93 * C68 + C1465 * C95) * C830 +
                    (C93 * C116 + C1465 * C208) * C785 +
                    (C93 * C787 + C1465 * C810) * C831 +
                    (C93 * C832 + C1465 * C929) * C786) *
                       C590) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eezz[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((C948 * C67 + C952 + C952 + C785 * C225 + C949 * C420 +
                    C953 + C953 + C786 * C566) *
                       C1465 * C589 +
                   (C948 * C68 + C954 + C954 + C785 * C226 + C949 * C787 +
                    C955 + C955 + C786 * C950) *
                       C1465 * C590) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eexx[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (C61 * C67 + C77 + C77 + C53 * C73 + C63 * C68 + C78 + C78 +
                   C54 * C74 + C65 * C69 + C79 + C79 + C55 * C75) *
                  C1476 * C1465 * C58 * C59 * C60) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((C249 * C67 + C258 + C258 + C1442 * C73) * C1476 * C246 +
                   (C249 * C251 + C259 + C259 + C1442 * C255) * C1476 * C247 +
                   (C249 * C252 + C260 + C260 + C1442 * C256) * C1476 * C248) *
                  C58 * C59 * C60) /
                     (p * q * std::sqrt(p + q));
    d2eexy[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C93 * C67 + C1465 * C94) * C62 + (C93 * C70 + C1465 * C97) * C53 +
          (C93 * C68 + C1465 * C95) * C64 + (C93 * C71 + C1465 * C98) * C54 +
          (C93 * C69 + C1465 * C96) * C66 + (C93 * C72 + C1465 * C99) * C55) *
         C1476 * C58 * C59 * C60) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C274 * C67 + C246 * C94 + C275 * C251 + C247 * C277 + C276 * C252 +
           C248 * C278) *
              C250 +
          (C274 * C70 + C246 * C97 + C275 * C253 + C247 * C279 + C276 * C254 +
           C248 * C280) *
              C1442) *
         C1476 * C58 * C59 * C60) /
            (p * q * std::sqrt(p + q));
    d2eexz[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((C114 * C67 + C1476 * C115) * C62 +
                   (C114 * C70 + C1476 * C118) * C53 +
                   (C114 * C68 + C1476 * C116) * C64 +
                   (C114 * C71 + C1476 * C119) * C54 +
                   (C114 * C69 + C1476 * C117) * C66 +
                   (C114 * C72 + C1476 * C120) * C55) *
                  C1465 * C58 * C59 * C60) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C114 * C67 + C1476 * C115) * C250 +
                    (C114 * C70 + C1476 * C118) * C1442) *
                       C246 +
                   ((C114 * C251 + C1476 * C295) * C250 +
                    (C114 * C253 + C1476 * C297) * C1442) *
                       C247 +
                   ((C114 * C252 + C1476 * C296) * C250 +
                    (C114 * C254 + C1476 * C298) * C1442) *
                       C248) *
                  C58 * C59 * C60) /
                     (p * q * std::sqrt(p + q));
    d2eeyx[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((C62 * C67 + C53 * C70 + C64 * C68 + C54 * C71 + C66 * C69 +
                    C55 * C72) *
                       C93 +
                   (C62 * C94 + C53 * C135 + C64 * C95 + C54 * C136 +
                    C66 * C96 + C55 * C137) *
                       C1465) *
                  C1476 * C58 * C59 * C60) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((C250 * C67 + C1442 * C70) * C274 +
                   (C250 * C94 + C1442 * C135) * C246 +
                   (C250 * C251 + C1442 * C253) * C275 +
                   (C250 * C277 + C1442 * C313) * C247 +
                   (C250 * C252 + C1442 * C254) * C276 +
                   (C250 * C278 + C1442 * C314) * C248) *
                  C1476 * C58 * C59 * C60) /
                     (p * q * std::sqrt(p + q));
    d2eeyy[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C152 * C67 + C157 + C157 + C1465 * C153) * C53 +
          (C152 * C68 + C158 + C158 + C1465 * C154) * C54 +
          (C152 * C69 + C159 + C159 + C1465 * C155) * C55) *
         C1476 * C58 * C59 * C60) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (C329 * C67 + C335 + C335 + C246 * C153 + C330 * C251 + C336 + C336 +
          C247 * C332 + C331 * C252 + C337 + C337 + C248 * C333) *
         C1442 * C1476 * C58 * C59 * C60) /
            (p * q * std::sqrt(p + q));
    d2eeyz[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C114 * C67 + C1476 * C115) * C93 +
                    (C114 * C94 + C1476 * C173) * C1465) *
                       C53 +
                   ((C114 * C68 + C1476 * C116) * C93 +
                    (C114 * C95 + C1476 * C174) * C1465) *
                       C54 +
                   ((C114 * C69 + C1476 * C117) * C93 +
                    (C114 * C96 + C1476 * C175) * C1465) *
                       C55) *
                  C58 * C59 * C60) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((C114 * C67 + C1476 * C115) * C274 +
                   (C114 * C94 + C1476 * C173) * C246 +
                   (C114 * C251 + C1476 * C295) * C275 +
                   (C114 * C277 + C1476 * C351) * C247 +
                   (C114 * C252 + C1476 * C296) * C276 +
                   (C114 * C278 + C1476 * C352) * C248) *
                  C1442 * C58 * C59 * C60) /
                     (p * q * std::sqrt(p + q));
    d2eezx[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((C62 * C67 + C53 * C70 + C64 * C68 + C54 * C71 + C66 * C69 +
                    C55 * C72) *
                       C114 +
                   (C62 * C115 + C53 * C190 + C64 * C116 + C54 * C191 +
                    C66 * C117 + C55 * C192) *
                       C1476) *
                  C1465 * C58 * C59 * C60) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C250 * C67 + C1442 * C70) * C114 +
                    (C250 * C115 + C1442 * C190) * C1476) *
                       C246 +
                   ((C250 * C251 + C1442 * C253) * C114 +
                    (C250 * C295 + C1442 * C367) * C1476) *
                       C247 +
                   ((C250 * C252 + C1442 * C254) * C114 +
                    (C250 * C296 + C1442 * C368) * C1476) *
                       C248) *
                  C58 * C59 * C60) /
                     (p * q * std::sqrt(p + q));
    d2eezy[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C93 * C67 + C1465 * C94) * C114 +
                    (C93 * C115 + C1465 * C207) * C1476) *
                       C53 +
                   ((C93 * C68 + C1465 * C95) * C114 +
                    (C93 * C116 + C1465 * C208) * C1476) *
                       C54 +
                   ((C93 * C69 + C1465 * C96) * C114 +
                    (C93 * C117 + C1465 * C209) * C1476) *
                       C55) *
                  C58 * C59 * C60) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((C274 * C67 + C246 * C94 + C275 * C251 + C247 * C277 +
                    C276 * C252 + C248 * C278) *
                       C114 +
                   (C274 * C115 + C246 * C207 + C275 * C295 + C247 * C383 +
                    C276 * C296 + C248 * C384) *
                       C1476) *
                  C1442 * C58 * C59 * C60) /
                     (p * q * std::sqrt(p + q));
    d2eezz[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((C224 * C67 + C229 + C229 + C1476 * C225) * C1465 * C53 +
                   (C224 * C68 + C230 + C230 + C1476 * C226) * C1465 * C54 +
                   (C224 * C69 + C231 + C231 + C1476 * C227) * C1465 * C55) *
                  C58 * C59 * C60) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((C224 * C67 + C229 + C229 + C1476 * C225) * C246 +
                   (C224 * C251 + C402 + C402 + C1476 * C399) * C247 +
                   (C224 * C252 + C403 + C403 + C1476 * C400) * C248) *
                  C1442 * C58 * C59 * C60) /
                     (p * q * std::sqrt(p + q));
}
