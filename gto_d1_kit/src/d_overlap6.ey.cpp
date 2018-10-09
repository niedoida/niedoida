/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void overlap_gradient_12(double ae,
                         double be,
                         double cc,
                         double xAB,
                         double yAB,
                         double zAB,
                         double* const gx,
                         double* const gy,
                         double* const gz,
                         std::size_t matrix_size,
                         std::size_t Ai,
                         std::size_t Bi)
{
    const double C1277 = ae + be;
    const double C1279 = Pi / C1277;
    const double C1280 = std::sqrt(C1279);
    const double C1286 = be * xAB;
    const double C1285 = ae * xAB;
    const double C1284 = 2. * C1277;
    const double C1287 = C1280 * C1286;
    const double C1298 = be * yAB;
    const double C1297 = ae * yAB;
    const double C1299 = C1280 * C1298;
    const double C1303 = be * zAB;
    const double C1302 = ae * zAB;
    const double C1304 = C1280 * C1303;
    const double C1314 = C1302 * C1304;
    const double C1313 = C1297 * C1299;
    const double C1312 = ae * zAB;
    const double C1311 = ae * yAB;
    const double C1310 = C1280 * C1285;
    const double C1309 = C1280 / C1284;
    const double C1308 = std::pow(C1277, 2);
    const double C1307 = be * xAB;
    const double C1317 = C1314 / C1308;
    const double C1316 = C1313 / C1308;
    const double C1315 = C1310 / C1277;
    const double C1319 = C1309 - C1317;
    const double C1318 = C1309 - C1316;
    const double C1182 = std::sqrt(Pi / (ae + be));
    const double C1183 = -(std::sqrt(Pi / C1277) * C1307) / C1277;
    const double C1184 =
        C1280 / (2. * C1277) - (ae * xAB * C1280 * C1307) / C1308;
    const double C1187 = ((C1309 - (C1285 * C1287) / C1308) * C1285) / C1277 +
                         (C1315 - C1287 / C1277) / C1284;
    const double C1188 = -(C1280 * be * yAB) / C1277;
    const double C1189 = -(C1280 * be * zAB) / C1277;
    const double C1206 = (C1280 * std::pow(C1311, 2)) / C1308 + C1309;
    const double C1207 = (C1280 * C1311) / C1277;
    const double C1213 = (C1280 * std::pow(C1312, 2)) / C1308 + C1309;
    const double C1214 = (C1280 * C1312) / C1277;
    const double C1227 = (C1280 * std::pow(C1285, 2)) / C1308 + C1309;
    const double C1230 = (C1318 * C1297) / C1277 +
                         ((C1280 * C1297) / C1277 - C1299 / C1277) / C1284;
    const double C1256 = (C1319 * C1302) / C1277 +
                         ((C1280 * C1302) / C1277 - C1304 / C1277) / C1284;
    const double C1194 = ae * xAB;
    const double C1193 = be * xAB;
    const double C1192 = ae * C1183;
    const double C1191 = ae + be;
    const double C1190 = be * C1182;
    const double C1197 = C1192 * C1193;
    const double C1196 = 2. * C1191;
    const double C1195 = 2 * C1190;
    const double C1199 = 2 * C1197;
    const double C1198 = -C1195;
    const double C1201 = C1199 / C1191;
    const double C1200 = C1198 / C1196;
    const double C1202 = C1200 - C1201;
    const double C1209 = ae * yAB;
    const double C1208 = ae * C1188;
    const double C1216 = ae * zAB;
    const double C1215 = ae * C1189;
    const double C1233 = be * yAB;
    const double C1232 = be * C1280;
    const double C1235 = C1208 * C1233;
    const double C1234 = 2 * C1232;
    const double C1237 = 2 * C1235;
    const double C1236 = -C1234;
    const double C1239 = C1237 / C1191;
    const double C1238 = C1236 / C1196;
    const double C1240 = C1238 - C1239;
    const double C1259 = be * zAB;
    const double C1258 = be * C1280;
    const double C1261 = C1215 * C1259;
    const double C1260 = 2 * C1258;
    const double C1263 = 2 * C1261;
    const double C1262 = -C1260;
    const double C1265 = C1263 / C1191;
    const double C1264 = C1262 / C1196;
    const double C1266 = C1264 - C1265;
    const double C1341 = 4. * C1215;
    const double C1340 = C1266 * C1216;
    const double C1339 = C1215 * C1303;
    const double C1338 = 4. * C1208;
    const double C1337 = C1240 * C1209;
    const double C1336 = ae * C1315;
    const double C1335 = 2 * C1192;
    const double C1334 = ae * C1214;
    const double C1333 = C1215 * C1216;
    const double C1332 = ae * C1207;
    const double C1331 = ae * C1280;
    const double C1330 = C1208 * C1209;
    const double C1329 = 2 * C1215;
    const double C1328 = 2 * C1208;
    const double C1327 = ae * C1182;
    const double C1326 = C1192 * C1194;
    const double C1325 = 4. * C1192;
    const double C1324 = C1202 * C1194;
    const double C1356 = C1341 / C1196;
    const double C1355 = C1340 / C1191;
    const double C1354 = 2 * C1339;
    const double C1353 = C1338 / C1196;
    const double C1352 = C1337 / C1191;
    const double C1351 = 2 * C1336;
    const double C1350 = 2 * C1334;
    const double C1349 = 2 * C1333;
    const double C1348 = 2 * C1332;
    const double C1347 = 2. * C1331;
    const double C1346 = 2 * C1330;
    const double C1345 = 2. * C1327;
    const double C1344 = 2 * C1326;
    const double C1343 = C1325 / C1196;
    const double C1342 = C1324 / C1191;
    const double C1368 = C1355 + C1356;
    const double C1367 = C1354 / C1191;
    const double C1366 = C1352 + C1353;
    const double C1365 = C1335 + C1351;
    const double C1364 = C1329 + C1350;
    const double C1363 = C1349 / C1191;
    const double C1362 = C1328 + C1348;
    const double C1361 = C1347 / C1196;
    const double C1360 = C1346 / C1191;
    const double C1359 = C1345 / C1196;
    const double C1358 = C1344 / C1191;
    const double C1357 = C1342 + C1343;
    const double C1375 = C1238 - C1367;
    const double C1374 = C1365 / C1196;
    const double C1373 = C1364 / C1196;
    const double C1372 = C1363 + C1361;
    const double C1371 = C1362 / C1196;
    const double C1370 = C1360 + C1361;
    const double C1369 = C1358 + C1359;
    const double C1378 = C1369 * C1194;
    const double C1377 = C1372 * C1216;
    const double C1376 = C1370 * C1209;
    const double C1381 = C1378 / C1191;
    const double C1380 = C1377 / C1191;
    const double C1379 = C1376 / C1191;
    const double C1384 = C1381 + C1374;
    const double C1383 = C1380 + C1373;
    const double C1382 = C1379 + C1371;
    const double gx100200 =
        ((C1357 * C1194) / C1191 + (C1369 + C1202 + 2 * ae * C1184) / C1196) *
        std::pow(C1280, 2);
    const double gx100020 = C1202 * C1206 * C1280;
    const double gx100002 = C1202 * C1280 * C1213;
    const double gx100110 = C1357 * C1207 * C1280;
    const double gx100101 = C1357 * C1280 * C1214;
    const double gx100011 = C1202 * C1207 * C1214;
    const double gx010200 = C1384 * C1188 * C1280;
    const double gx010020 = 2 * C1192 * C1230 * C1280;
    const double gx010002 = 2 * C1192 * C1188 * C1213;
    const double gx010110 = C1369 * C1318 * C1280;
    const double gx010101 = C1369 * C1188 * C1214;
    const double gx010011 = 2 * C1192 * C1318 * C1214;
    const double gx001200 = C1384 * C1280 * C1189;
    const double gx001020 = 2 * C1192 * C1206 * C1189;
    const double gx001002 = 2 * C1192 * C1280 * C1256;
    const double gx001110 = C1369 * C1207 * C1189;
    const double gx001101 = C1369 * C1280 * C1319;
    const double gx001011 = 2 * C1192 * C1207 * C1319;
    gx[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * gx100110;
    gx[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * gx100011;
    gx[(Ai + 0) * matrix_size + Bi + 2] +=
        cc * (-0.5 * gx100200 - 0.5 * gx100020 + gx100002);
    gx[(Ai + 0) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * gx100101;
    gx[(Ai + 0) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(0.75) * gx100200 - std::sqrt(0.75) * gx100020);
    gx[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * gx010110;
    gx[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * gx010011;
    gx[(Ai + 1) * matrix_size + Bi + 2] +=
        cc * (-0.5 * gx010200 - 0.5 * gx010020 + gx010002);
    gx[(Ai + 1) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * gx010101;
    gx[(Ai + 1) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(0.75) * gx010200 - std::sqrt(0.75) * gx010020);
    gx[(Ai + 2) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * gx001110;
    gx[(Ai + 2) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * gx001011;
    gx[(Ai + 2) * matrix_size + Bi + 2] +=
        cc * (-0.5 * gx001200 - 0.5 * gx001020 + gx001002);
    gx[(Ai + 2) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * gx001101;
    gx[(Ai + 2) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(0.75) * gx001200 - std::sqrt(0.75) * gx001020);
    const double gy100200 = C1187 * C1328 * C1280;
    const double gy100020 = C1183 * C1382 * C1280;
    const double gy100002 = C1183 * C1328 * C1213;
    const double gy100110 = C1184 * C1370 * C1280;
    const double gy100101 = C1184 * C1328 * C1214;
    const double gy100011 = C1183 * C1370 * C1214;
    const double gy010200 =
        C1227 * (C1238 - (2 * C1208 * C1298) / C1191) * C1280;
    const double gy010020 =
        C1182 *
        ((C1366 * C1209) / C1191 + (C1370 + C1240 + 2 * ae * C1318) / C1196) *
        C1280;
    const double gy010002 = C1182 * C1240 * C1213;
    const double gy010110 = C1315 * C1366 * C1280;
    const double gy010101 = C1315 * C1240 * C1214;
    const double gy010011 = C1182 * C1366 * C1214;
    const double gy001200 = C1227 * C1328 * C1189;
    const double gy001020 = C1182 * C1382 * C1189;
    const double gy001002 = C1182 * C1328 * C1256;
    const double gy001110 = C1315 * C1370 * C1189;
    const double gy001101 = C1315 * C1328 * C1319;
    const double gy001011 = C1182 * C1370 * C1319;
    gy[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * gy100110;
    gy[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * gy100011;
    gy[(Ai + 0) * matrix_size + Bi + 2] +=
        cc * (-0.5 * gy100200 - 0.5 * gy100020 + gy100002);
    gy[(Ai + 0) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * gy100101;
    gy[(Ai + 0) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(0.75) * gy100200 - std::sqrt(0.75) * gy100020);
    gy[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * gy010110;
    gy[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * gy010011;
    gy[(Ai + 1) * matrix_size + Bi + 2] +=
        cc * (-0.5 * gy010200 - 0.5 * gy010020 + gy010002);
    gy[(Ai + 1) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * gy010101;
    gy[(Ai + 1) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(0.75) * gy010200 - std::sqrt(0.75) * gy010020);
    gy[(Ai + 2) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * gy001110;
    gy[(Ai + 2) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * gy001011;
    gy[(Ai + 2) * matrix_size + Bi + 2] +=
        cc * (-0.5 * gy001200 - 0.5 * gy001020 + gy001002);
    gy[(Ai + 2) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * gy001101;
    gy[(Ai + 2) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(0.75) * gy001200 - std::sqrt(0.75) * gy001020);
    const double gz100200 = C1187 * C1280 * C1329;
    const double gz100020 = C1183 * C1206 * C1329;
    const double gz100002 = C1183 * C1280 * C1383;
    const double gz100110 = C1184 * C1207 * C1329;
    const double gz100101 = C1184 * C1280 * C1372;
    const double gz100011 = C1183 * C1207 * C1372;
    const double gz010200 = C1227 * C1188 * C1329;
    const double gz010020 = C1182 * C1230 * C1329;
    const double gz010002 = C1182 * C1188 * C1383;
    const double gz010110 = C1315 * C1318 * C1329;
    const double gz010101 = C1315 * C1188 * C1372;
    const double gz010011 = C1182 * C1318 * C1372;
    const double gz001200 = C1227 * C1280 * C1375;
    const double gz001020 = C1182 * C1206 * C1375;
    const double gz001002 =
        C1182 * C1280 *
        ((C1368 * C1216) / C1191 + (C1372 + C1266 + 2 * ae * C1319) / C1196);
    const double gz001110 = C1315 * C1207 * C1266;
    const double gz001101 = C1315 * C1280 * C1368;
    const double gz001011 = C1182 * C1207 * C1368;
    gz[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * gz100110;
    gz[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * gz100011;
    gz[(Ai + 0) * matrix_size + Bi + 2] +=
        cc * (-0.5 * gz100200 - 0.5 * gz100020 + gz100002);
    gz[(Ai + 0) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * gz100101;
    gz[(Ai + 0) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(0.75) * gz100200 - std::sqrt(0.75) * gz100020);
    gz[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * gz010110;
    gz[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * gz010011;
    gz[(Ai + 1) * matrix_size + Bi + 2] +=
        cc * (-0.5 * gz010200 - 0.5 * gz010020 + gz010002);
    gz[(Ai + 1) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * gz010101;
    gz[(Ai + 1) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(0.75) * gz010200 - std::sqrt(0.75) * gz010020);
    gz[(Ai + 2) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * gz001110;
    gz[(Ai + 2) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * gz001011;
    gz[(Ai + 2) * matrix_size + Bi + 2] +=
        cc * (-0.5 * gz001200 - 0.5 * gz001020 + gz001002);
    gz[(Ai + 2) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * gz001101;
    gz[(Ai + 2) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(0.75) * gz001200 - std::sqrt(0.75) * gz001020);
}

// Automatically generated, do not edit
