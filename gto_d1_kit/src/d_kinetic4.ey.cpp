/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void kinetic_gradient_10(double ae,
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
    const double C1510 = ae + be;
    const double C1516 = Pi / C1510;
    const double C1515 = ae + be;
    const double C1518 = std::sqrt(C1516);
    const double C1517 = Pi / C1515;
    const double C1519 = std::sqrt(C1517);
    const double C1408 = -(C1518 * be * xAB) / C1510;
    const double C1410 = -(C1518 * be * yAB) / C1510;
    const double C1411 = -(C1518 * be * zAB) / C1510;
    const double C1420 = ae * C1411;
    const double C1419 = ae * C1410;
    const double C1418 = be * zAB;
    const double C1417 = be * yAB;
    const double C1416 = std::pow(ae, 2);
    const double C1415 = be * xAB;
    const double C1414 = be * C1518;
    const double C1413 = ae + be;
    const double C1412 = ae * C1408;
    const double C1430 = 2 * C1420;
    const double C1429 = 2 * C1419;
    const double C1428 = C1415 / C1413;
    const double C1427 = std::pow(C1413, 2);
    const double C1426 = C1418 / C1413;
    const double C1425 = Pi / C1413;
    const double C1424 = C1417 / C1413;
    const double C1423 = C1412 * C1415;
    const double C1422 = 2 * C1414;
    const double C1421 = 2. * C1413;
    const double C1437 = std::pow(C1428, 2);
    const double C1436 = std::pow(C1426, 2);
    const double C1435 = std::sqrt(C1425);
    const double C1434 = 1 / C1421;
    const double C1433 = std::pow(C1424, 2);
    const double C1432 = 2 * C1423;
    const double C1431 = -C1422;
    const double C1443 = C1437 + C1434;
    const double C1442 = C1435 * C1415;
    const double C1441 = C1436 + C1434;
    const double C1440 = C1433 + C1434;
    const double C1439 = C1432 / C1413;
    const double C1438 = C1431 / C1421;
    const double C1448 = C1416 * C1443;
    const double C1447 = ae * C1442;
    const double C1446 = C1416 * C1441;
    const double C1445 = C1416 * C1440;
    const double C1444 = C1438 - C1439;
    const double C1453 = 2 * C1448;
    const double C1452 = -2 * C1447;
    const double C1451 = 2 * C1446;
    const double C1450 = 2 * C1445;
    const double C1449 = ae * C1444;
    const double C1457 = ae - C1453;
    const double C1456 = be * C1452;
    const double C1455 = ae - C1451;
    const double C1454 = ae - C1450;
    const double C1461 = C1457 * C1435;
    const double C1460 = C1456 / C1427;
    const double C1459 = C1455 * C1435;
    const double C1458 = C1454 * C1435;
    const double C1462 = C1461 * C1415;
    const double C1463 = C1462 / C1413;
    const double C1464 = C1460 - C1463;
    const double C1471 = C1419 * C1417;
    const double C1470 = be * C1519;
    const double C1469 = C1458 * C1417;
    const double C1468 = C1435 * C1417;
    const double C1475 = 2 * C1471;
    const double C1474 = 2 * C1470;
    const double C1473 = C1469 / C1413;
    const double C1472 = ae * C1468;
    const double C1478 = C1475 / C1413;
    const double C1477 = -C1474;
    const double C1476 = -2 * C1472;
    const double C1480 = C1477 / C1421;
    const double C1479 = be * C1476;
    const double C1482 = C1480 - C1478;
    const double C1481 = C1479 / C1427;
    const double C1484 = ae * C1482;
    const double C1483 = C1481 - C1473;
    const double C1491 = C1420 * C1418;
    const double C1490 = be * C1519;
    const double C1489 = C1459 * C1418;
    const double C1488 = C1435 * C1418;
    const double C1495 = 2 * C1491;
    const double C1494 = 2 * C1490;
    const double C1493 = C1489 / C1413;
    const double C1492 = ae * C1488;
    const double C1498 = C1495 / C1413;
    const double C1497 = -C1494;
    const double C1496 = -2 * C1492;
    const double C1500 = C1497 / C1421;
    const double C1499 = be * C1496;
    const double C1502 = C1500 - C1498;
    const double C1501 = C1499 / C1427;
    const double C1504 = ae * C1502;
    const double C1503 = C1501 - C1493;
    const double C1529 = C1480 - C1498;
    const double C1528 = be * C1430;
    const double C1527 = C1484 * C1417;
    const double C1526 = be * C1429;
    const double C1525 = C1449 * C1415;
    const double C1524 = 2 * C1412;
    const double C1535 = ae * C1529;
    const double C1534 = 4 * C1528;
    const double C1533 = 2 * C1527;
    const double C1532 = 4 * C1526;
    const double C1531 = 2 * C1525;
    const double C1530 = be * C1524;
    const double C1541 = C1535 * C1418;
    const double C1540 = -C1534;
    const double C1539 = C1533 / C1413;
    const double C1538 = -C1532;
    const double C1537 = C1531 / C1413;
    const double C1536 = 4 * C1530;
    const double C1545 = 2 * C1541;
    const double C1544 = C1540 / C1421;
    const double C1543 = C1538 / C1421;
    const double C1542 = -C1536;
    const double C1548 = C1545 / C1413;
    const double C1547 = C1543 - C1539;
    const double C1546 = C1542 / C1421;
    const double C1551 = C1544 - C1548;
    const double C1550 = ae * C1547;
    const double C1549 = C1546 - C1537;
    const double C1554 = ae * C1551;
    const double C1553 = -2 * C1550;
    const double C1552 = ae * C1549;
    const double C1556 = -2 * C1552;
    const double C1555 = -2 * C1554;
    const double gx100000 =
        (((2 * C1552 * C1415) / C1413 - (-6 * be * 2 * C1449) / C1421) *
         std::pow(C1519, 2)) /
            2.0 +
        C1444 * C1458 * C1519 + C1444 * C1519 * C1459;
    const double gx010000 = (C1519 * C1410 * C1556) / 2.0 +
                            2 * C1412 * C1483 * C1519 +
                            2 * C1412 * C1410 * C1459;
    const double gx001000 = (C1411 * C1519 * C1556) / 2.0 +
                            2 * C1412 * C1458 * C1411 +
                            2 * C1412 * C1519 * C1503;
    gx[(Ai + 0) * matrix_size + Bi + 0] += cc * gx100000;
    gx[(Ai + 1) * matrix_size + Bi + 0] += cc * gx010000;
    gx[(Ai + 2) * matrix_size + Bi + 0] += cc * gx001000;
    const double gy100000 = C1464 * C1429 * C1519 +
                            (C1519 * C1408 * C1553) / 2.0 +
                            C1408 * C1429 * C1459;
    const double gy010000 =
        C1461 * C1482 * C1519 +
        (C1519 * C1518 *
         ((2 * C1550 * C1417) / C1413 - (-6 * be * 2 * C1484) / C1421)) /
            2.0 +
        C1518 * C1482 * C1459;
    const double gy001000 = C1461 * C1429 * C1411 +
                            (C1411 * C1518 * C1553) / 2.0 +
                            C1518 * C1429 * C1503;
    gy[(Ai + 0) * matrix_size + Bi + 0] += cc * gy100000;
    gy[(Ai + 1) * matrix_size + Bi + 0] += cc * gy010000;
    gy[(Ai + 2) * matrix_size + Bi + 0] += cc * gy001000;
    const double gz100000 = C1464 * C1519 * C1430 + C1408 * C1458 * C1430 +
                            (C1408 * C1519 * C1555) / 2.0;
    const double gz010000 = C1461 * C1410 * C1430 + C1518 * C1483 * C1430 +
                            (C1518 * C1410 * C1555) / 2.0;
    const double gz001000 =
        C1461 * C1519 * C1502 + C1518 * C1458 * C1502 +
        (C1518 * C1519 *
         ((2 * ae * (C1544 - (2 * C1504 * C1418) / C1413) * C1418) / C1413 -
          (-6 * be * 2 * C1504) / C1421)) /
            2.0;
    gz[(Ai + 0) * matrix_size + Bi + 0] += cc * gz100000;
    gz[(Ai + 1) * matrix_size + Bi + 0] += cc * gz010000;
    gz[(Ai + 2) * matrix_size + Bi + 0] += cc * gz001000;
}

// Automatically generated, do not edit
