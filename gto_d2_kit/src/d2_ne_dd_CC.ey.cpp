/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ne_dd_CC.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
// Automatically generated, do not edit
void vne_second_derivative_22_33(double ae,
                                 double be,
                                 double xA,
                                 double yA,
                                 double zA,
                                 double xB,
                                 double yB,
                                 double zB,
                                 double xC,
                                 double yC,
                                 double zC,
                                 const double* bs,
                                 double* const d2nexx,
                                 double* const d2nexy,
                                 double* const d2nexz,
                                 double* const d2neyx,
                                 double* const d2neyy,
                                 double* const d2neyz,
                                 double* const d2nezx,
                                 double* const d2nezy,
                                 double* const d2nezz,
                                 std::size_t matrix_size,
                                 std::size_t Ai,
                                 std::size_t Bi)
{
    const double C1433 = ae + be;
    const double C1432 = ae * be;
    const double C1431 = xA - xB;
    const double C1438 = C1431 * be;
    const double C1437 = 2 * C1433;
    const double C1436 = std::pow(C1433, 2);
    const double C1435 = C1431 * ae;
    const double C1434 = std::pow(C1431, 2);
    const double C1439 = C1434 * C1432;
    const double C1440 = C1439 / C1433;
    const double C1441 = -C1440;
    const double C1442 = std::exp(C1441);
    const double C1444 = C1442 * C1435;
    const double C1443 = C1442 / C1437;
    const double C1445 = C1444 * C1438;
    const double C1446 = C1445 / C1436;
    const double C1447 = C1443 - C1446;
    const double C1450 = 2 * C1436;
    const double C1449 = std::pow(C1437, -1);
    const double C1452 = C1449 * C1442;
    const double C1451 = C1444 / C1450;
    const double C1453 = C1452 * C1438;
    const double C1454 = C1453 / C1433;
    const double C1455 = C1451 - C1454;
    const double C1460 = yA - yB;
    const double C1461 = std::pow(C1460, 2);
    const double C1462 = C1461 * C1432;
    const double C1463 = C1462 / C1433;
    const double C1464 = -C1463;
    const double C1465 = std::exp(C1464);
    const double C1472 = zA - zB;
    const double C1473 = std::pow(C1472, 2);
    const double C1474 = C1473 * C1432;
    const double C1475 = C1474 / C1433;
    const double C1476 = -C1475;
    const double C1477 = std::exp(C1476);
    const double C1497 = C1460 * be;
    const double C1496 = C1465 / C1437;
    const double C1495 = C1460 * ae;
    const double C1498 = C1465 * C1495;
    const double C1499 = C1498 * C1497;
    const double C1500 = C1499 / C1436;
    const double C1501 = C1496 - C1500;
    const double C1504 = C1449 * C1465;
    const double C1503 = C1498 / C1450;
    const double C1505 = C1504 * C1497;
    const double C1506 = C1505 / C1433;
    const double C1507 = C1503 - C1506;
    const double C1524 = C1472 * be;
    const double C1523 = C1477 / C1437;
    const double C1522 = C1472 * ae;
    const double C1525 = C1477 * C1522;
    const double C1526 = C1525 * C1524;
    const double C1527 = C1526 / C1436;
    const double C1528 = C1523 - C1527;
    const double C1531 = C1449 * C1477;
    const double C1530 = C1525 / C1450;
    const double C1532 = C1531 * C1524;
    const double C1533 = C1532 / C1433;
    const double C1534 = C1530 - C1533;
    const double C1603 = C1534 / C1437;
    const double C1602 = C1522 * C1531;
    const double C1601 = 2 * C1531;
    const double C1600 = C1534 * C1522;
    const double C1599 = C1477 * C1524;
    const double C1598 = C1525 / C1433;
    const double C1597 = C1528 * C1522;
    const double C1596 = C1472 * be;
    const double C1595 = C1507 / C1437;
    const double C1594 = C1495 * C1504;
    const double C1593 = 2 * C1504;
    const double C1592 = C1507 * C1495;
    const double C1591 = C1465 * C1497;
    const double C1590 = C1498 / C1433;
    const double C1589 = C1501 * C1495;
    const double C1588 = C1460 * be;
    const double C1587 = C1477 / C1437;
    const double C1586 = C1472 * ae;
    const double C1585 = C1465 / C1437;
    const double C1584 = C1460 * ae;
    const double C1583 = C1436 * C1437;
    const double C1582 = 4 * C1436;
    const double C1581 = C1455 / C1437;
    const double C1580 = C1435 * C1452;
    const double C1579 = std::pow(C1437, -2);
    const double C1578 = 2 * C1452;
    const double C1577 = C1455 * C1435;
    const double C1576 = C1449 * C1444;
    const double C1575 = C1442 * C1438;
    const double C1574 = C1444 / C1433;
    const double C1573 = C1447 * C1435;
    const double C1572 = std::pow(C1435, 2);
    const double C1571 = ae + be;
    const double C1570 = ae * be;
    const double C1630 = C1531 / C1582;
    const double C1629 = C1602 / C1450;
    const double C1628 = C1601 + C1528;
    const double C1627 = C1600 / C1433;
    const double C1626 = C1599 / C1433;
    const double C1625 = C1597 / C1433;
    const double C1624 = C1504 / C1582;
    const double C1623 = C1594 / C1450;
    const double C1622 = C1593 + C1501;
    const double C1621 = C1592 / C1433;
    const double C1620 = C1591 / C1433;
    const double C1619 = C1589 / C1433;
    const double C1618 = C1452 / C1582;
    const double C1617 = C1579 * C1477;
    const double C1616 = C1477 * C1586;
    const double C1615 = C1579 * C1465;
    const double C1614 = C1465 * C1584;
    const double C1613 = 4 * C1583;
    const double C1612 = C1433 * C1582;
    const double C1611 = C1580 / C1450;
    const double C1610 = C1579 * C1442;
    const double C1609 = C1578 + C1447;
    const double C1608 = C1577 / C1433;
    const double C1607 = 2 * C1576;
    const double C1606 = C1575 / C1433;
    const double C1605 = C1573 / C1433;
    const double C1604 = C1442 * C1572;
    const double C1641 = C1629 + C1603;
    const double C1640 = C1628 / C1437;
    const double C1639 = C1598 - C1626;
    const double C1638 = C1623 + C1595;
    const double C1637 = C1622 / C1437;
    const double C1636 = C1590 - C1620;
    const double C1635 = C1611 + C1581;
    const double C1634 = C1609 / C1437;
    const double C1633 = C1607 / C1433;
    const double C1632 = C1574 - C1606;
    const double C1631 = C1604 / C1436;
    const double C1648 = C1627 + C1640;
    const double C1647 = C1639 / C1437;
    const double C1646 = C1621 + C1637;
    const double C1645 = C1636 / C1437;
    const double C1644 = C1608 + C1634;
    const double C1643 = C1632 / C1437;
    const double C1642 = C1631 + C1443;
    const double C1651 = C1625 + C1647;
    const double C1650 = C1619 + C1645;
    const double C1649 = C1605 + C1643;
    const double C59 = std::exp(-(std::pow(zA - zB, 2) * C1570) / C1571);
    const double C60 = std::exp(-(std::pow(yA - yB, 2) * C1570) / C1571);
    const double C61 = (C1642 + 2 * C1447) / C1437 - (C1649 * C1438) / C1433;
    const double C62 =
        (C1633 + 2 * C1455 + C1649) / C1437 - (C1644 * C1438) / C1433;
    const double C63 =
        (C1610 + C1452 / C1433 + C1644) / C1437 - (C1635 * C1438) / C1433;
    const double C64 = C1635 / C1437 - C1453 / C1612;
    const double C65 = C1452 / C1613;
    const double C328 = (C1465 * std::pow(C1584, 2)) / C1436 + C1585;
    const double C329 = (2 * C1449 * C1614) / C1433;
    const double C331 = (C1442 * std::pow(C1438, 2)) / C1436 + C1443;
    const double C332 = (-2 * C1449 * C1575) / C1433;
    const double C380 = (C1477 * std::pow(C1586, 2)) / C1436 + C1587;
    const double C381 = (2 * C1449 * C1616) / C1433;
    const double C421 = C1614 / C1433;
    const double C422 = C1449 * C1465;
    const double C423 = C1643 - (C1447 * C1438) / C1433;
    const double C424 = C1634 - (C1455 * C1438) / C1433;
    const double C425 = C1581 - C1453 / C1450;
    const double C454 = C1616 / C1433;
    const double C455 = C1449 * C1477;
    const double C506 = (C1465 * std::pow(C1588, 2)) / C1436 + C1585;
    const double C507 = (-2 * C1449 * C1465 * C1588) / C1433;
    const double C532 =
        ((C1465 * std::pow(C1495, 2)) / C1436 + C1496 + 2 * C1501) / C1437 -
        (C1650 * C1497) / C1433;
    const double C533 =
        ((2 * C1449 * C1498) / C1433 + 2 * C1507 + C1650) / C1437 -
        (C1646 * C1497) / C1433;
    const double C534 =
        (C1615 + C1504 / C1433 + C1646) / C1437 - (C1638 * C1497) / C1433;
    const double C535 = C1638 / C1437 - C1505 / C1612;
    const double C536 = C1504 / C1613;
    const double C695 = C1645 - (C1501 * C1497) / C1433;
    const double C696 = C1637 - (C1507 * C1497) / C1433;
    const double C697 = C1595 - C1505 / C1450;
    const double C806 = (C1477 * std::pow(C1596, 2)) / C1436 + C1587;
    const double C807 = (-2 * C1449 * C1477 * C1596) / C1433;
    const double C849 =
        ((C1477 * std::pow(C1522, 2)) / C1436 + C1523 + 2 * C1528) / C1437 -
        (C1651 * C1524) / C1433;
    const double C850 =
        ((2 * C1449 * C1525) / C1433 + 2 * C1534 + C1651) / C1437 -
        (C1648 * C1524) / C1433;
    const double C851 =
        (C1617 + C1531 / C1433 + C1648) / C1437 - (C1641 * C1524) / C1433;
    const double C852 = C1641 / C1437 - C1532 / C1612;
    const double C853 = C1531 / C1613;
    const double C973 = C1647 - (C1528 * C1524) / C1433;
    const double C974 = C1640 - (C1534 * C1524) / C1433;
    const double C975 = C1603 - C1532 / C1450;
    const double C1060 = -C1620;
    const double C1090 = -C1606;
    const double C1134 = C1504 / C1437;
    const double C1137 = C1452 / C1437;
    const double C1198 = -C1626;
    const double C1286 = C1531 / C1437;
    const double C78 = be * zB;
    const double C77 = ae * zA;
    const double C76 = be * yB;
    const double C75 = ae * yA;
    const double C74 = bs[6];
    const double C73 = bs[5];
    const double C72 = bs[4];
    const double C71 = bs[3];
    const double C70 = bs[1];
    const double C69 = bs[2];
    const double C68 = ae + be;
    const double C67 = be * xB;
    const double C66 = ae * xA;
    const double C82 = C77 + C78;
    const double C81 = C75 + C76;
    const double C80 = 2 * C68;
    const double C79 = C66 + C67;
    const double C90 = C82 / C68;
    const double C89 = C81 / C68;
    const double C88 = std::pow(C80, 6);
    const double C87 = std::pow(C80, 4);
    const double C86 = -C80;
    const double C85 = C70 * C80;
    const double C84 = std::pow(C80, 2);
    const double C83 = C79 / C68;
    const double C97 = C90 - zC;
    const double C96 = C89 - yC;
    const double C95 = std::pow(C86, 5);
    const double C94 = C72 * C87;
    const double C93 = std::pow(C86, 3);
    const double C92 = C69 * C84;
    const double C91 = C83 - xC;
    const double C112 = std::pow(C97, 2);
    const double C111 = C97 * C96;
    const double C110 = C97 * C91;
    const double C109 = C96 * C97;
    const double C108 = std::pow(C96, 2);
    const double C107 = C96 * C91;
    const double C106 = C68 * C97;
    const double C105 = C91 * C97;
    const double C104 = C68 * C96;
    const double C103 = C91 * C96;
    const double C102 = C73 * C95;
    const double C101 = C91 * C94;
    const double C100 = C71 * C93;
    const double C99 = C68 * C91;
    const double C98 = std::pow(C91, 2);
    const double C152 = C112 * C73;
    const double C151 = C112 * C72;
    const double C150 = C112 * C71;
    const double C149 = C111 * C73;
    const double C148 = C111 * C72;
    const double C147 = C111 * C71;
    const double C146 = C110 * C73;
    const double C145 = C110 * C72;
    const double C144 = C110 * C71;
    const double C143 = C109 * C73;
    const double C142 = C109 * C72;
    const double C141 = C109 * C71;
    const double C140 = C108 * C73;
    const double C139 = C108 * C72;
    const double C138 = C108 * C71;
    const double C137 = C107 * C73;
    const double C136 = C107 * C72;
    const double C135 = C107 * C71;
    const double C134 = C106 * C73;
    const double C133 = C105 * C73;
    const double C132 = C106 * C72;
    const double C131 = C105 * C72;
    const double C130 = C106 * C71;
    const double C129 = C105 * C71;
    const double C128 = C106 * C69;
    const double C127 = C104 * C73;
    const double C126 = C103 * C73;
    const double C125 = C104 * C72;
    const double C124 = C103 * C72;
    const double C123 = C104 * C71;
    const double C122 = C103 * C71;
    const double C121 = C104 * C69;
    const double C120 = C99 * C73;
    const double C119 = C94 * C98;
    const double C118 = C98 * C73;
    const double C117 = C99 * C72;
    const double C116 = C91 * C100;
    const double C115 = C98 * C72;
    const double C114 = C99 * C71;
    const double C113 = C98 * C71;
    const double C191 = C152 * C95;
    const double C190 = C151 * C87;
    const double C189 = C150 * C93;
    const double C188 = C149 * C95;
    const double C187 = C148 * C87;
    const double C186 = C147 * C93;
    const double C185 = C146 * C95;
    const double C184 = C145 * C87;
    const double C183 = C144 * C93;
    const double C182 = C143 * C95;
    const double C181 = C142 * C87;
    const double C180 = C141 * C93;
    const double C179 = C140 * C95;
    const double C178 = C139 * C87;
    const double C177 = C138 * C93;
    const double C176 = C137 * C95;
    const double C175 = C136 * C87;
    const double C174 = C135 * C93;
    const double C173 = C134 * C87;
    const double C172 = C133 * C95;
    const double C171 = C132 * C93;
    const double C170 = C131 * C87;
    const double C169 = C130 * C84;
    const double C168 = C129 * C93;
    const double C167 = C128 * C80;
    const double C166 = C127 * C87;
    const double C165 = C126 * C95;
    const double C164 = C125 * C93;
    const double C163 = C124 * C87;
    const double C162 = C123 * C84;
    const double C161 = C122 * C93;
    const double C160 = C121 * C80;
    const double C159 = C120 * C87;
    const double C158 = C100 + C119;
    const double C157 = C118 * C95;
    const double C156 = C117 * C93;
    const double C155 = C115 * C87;
    const double C154 = C114 * C84;
    const double C153 = C113 * C93;
    const double C233 = C94 + C191;
    const double C232 = C100 + C190;
    const double C231 = C92 + C189;
    const double C230 = C188 * C98;
    const double C229 = C91 * C185;
    const double C228 = C91 * C184;
    const double C227 = C182 * C98;
    const double C226 = C94 + C179;
    const double C225 = C100 + C178;
    const double C224 = C92 + C177;
    const double C223 = C91 * C176;
    const double C222 = C91 * C175;
    const double C221 = -2 * C173;
    const double C220 = 2 * C173;
    const double C219 = C173 * C98;
    const double C218 = C91 * C172;
    const double C217 = -2 * C171;
    const double C216 = 2 * C171;
    const double C215 = C171 * C98;
    const double C214 = C91 * C170;
    const double C213 = -2 * C169;
    const double C212 = 2 * C169;
    const double C211 = 2 * C167;
    const double C210 = -2 * C166;
    const double C209 = 2 * C166;
    const double C208 = C166 * C98;
    const double C207 = C91 * C165;
    const double C206 = -2 * C164;
    const double C205 = 2 * C164;
    const double C204 = C164 * C98;
    const double C203 = C91 * C163;
    const double C202 = -2 * C162;
    const double C201 = 2 * C162;
    const double C200 = 2 * C160;
    const double C199 = 2 * C159;
    const double C198 = C94 + C157;
    const double C197 = -4 * C156;
    const double C196 = 2 * C156;
    const double C195 = C100 + C155;
    const double C194 = -4 * C154;
    const double C193 = 2 * C154;
    const double C192 = C92 + C153;
    const double C260 = C233 * C98;
    const double C259 = C187 + C230;
    const double C258 = C217 + C229;
    const double C257 = C213 + C228;
    const double C256 = C181 + C227;
    const double C255 = C226 * C98;
    const double C254 = C206 + C223;
    const double C253 = C202 + C222;
    const double C252 = C91 * C220;
    const double C251 = 2 * C219;
    const double C250 = C217 + C218;
    const double C249 = C91 * C216;
    const double C248 = 2 * C215;
    const double C247 = C213 + C214;
    const double C246 = C91 * C212;
    const double C245 = C91 * C209;
    const double C244 = 2 * C208;
    const double C243 = C206 + C207;
    const double C242 = C91 * C205;
    const double C241 = 2 * C204;
    const double C240 = C202 + C203;
    const double C239 = C91 * C201;
    const double C238 = C91 * C199;
    const double C237 = C91 * C198;
    const double C236 = C91 * C196;
    const double C235 = C91 * C195;
    const double C234 = C91 * C193;
    const double C283 = C232 + C260;
    const double C282 = C91 * C258;
    const double C281 = C184 - C249;
    const double C280 = C225 + C255;
    const double C279 = C91 * C254;
    const double C278 = C175 - C242;
    const double C277 = C216 + C251;
    const double C276 = 2 * C249;
    const double C275 = C91 * C250;
    const double C274 = C170 - C249;
    const double C273 = C212 + C248;
    const double C272 = C205 + C244;
    const double C271 = 2 * C242;
    const double C270 = C91 * C243;
    const double C269 = C163 - C242;
    const double C268 = C201 + C241;
    const double C267 = C94 - C238;
    const double C266 = C238 - C94;
    const double C265 = C197 + C237;
    const double C264 = C100 - C236;
    const double C263 = C236 - C100;
    const double C262 = C194 + C235;
    const double C261 = C92 - C234;
    const double C294 = C281 + C282;
    const double C293 = C278 + C279;
    const double C292 = C91 * C277;
    const double C291 = C274 + C275;
    const double C290 = C91 * C272;
    const double C289 = C269 + C270;
    const double C288 = C91 * C266;
    const double C287 = 2 * C263;
    const double C286 = C91 * C265;
    const double C285 = C195 + C264;
    const double C284 = C91 * C263;
    const double C299 = C276 + C292;
    const double C298 = C271 + C290;
    const double C297 = C196 + C288;
    const double C296 = C285 + C264;
    const double C295 = C193 + C284;
    const double C303 = C101 - C297;
    const double C302 = C297 - C101;
    const double C301 = C296 + C286;
    const double C300 = C116 - C295;
    const double C304 = C91 * C302;
    const double C305 = C287 + C304;
    const double C306 = C158 - C305;
    const double C351 = C91 * C232;
    const double C350 = C91 * C187;
    const double C349 = C96 * C277;
    const double C348 = C96 * C249;
    const double C347 = C91 * C181;
    const double C346 = C96 * C212;
    const double C345 = C96 * C272;
    const double C344 = C96 * C242;
    const double C343 = C91 * C225;
    const double C342 = C96 * C201;
    const double C341 = C96 * C302;
    const double C340 = -2 * C154;
    const double C339 = C266 * C108;
    const double C338 = C96 * C263;
    const double C337 = C198 * C108;
    const double C336 = C96 * C195;
    const double C335 = C96 * C193;
    const double C334 = C99 * C69;
    const double C357 = C158 - C345;
    const double C356 = C116 - C344;
    const double C355 = C92 - C342;
    const double C354 = C263 + C339;
    const double C353 = C195 + C337;
    const double C352 = C334 * C80;
    const double C358 = 2 * C352;
    const double C394 = C97 * C277;
    const double C393 = C97 * C249;
    const double C392 = C97 * C212;
    const double C391 = C97 * C272;
    const double C390 = C97 * C242;
    const double C389 = C97 * C201;
    const double C388 = C97 * C302;
    const double C387 = C266 * C112;
    const double C386 = C97 * C263;
    const double C385 = C198 * C112;
    const double C384 = C97 * C195;
    const double C383 = C97 * C193;
    const double C399 = C158 - C394;
    const double C398 = C116 - C393;
    const double C397 = C92 - C392;
    const double C396 = C263 + C387;
    const double C395 = C195 + C385;
    const double C429 = C96 * C266;
    const double C428 = C96 * C198;
    const double C427 = C96 * C196;
    const double C431 = C91 * C428;
    const double C430 = -2 * C427;
    const double C432 = C430 + C431;
    const double C458 = C97 * C266;
    const double C457 = C97 * C198;
    const double C456 = C97 * C196;
    const double C460 = C91 * C457;
    const double C459 = -2 * C456;
    const double C461 = C459 + C460;
    const double C484 = C97 * C429;
    const double C483 = C97 * C428;
    const double C569 = C233 * C108;
    const double C568 = C96 * C188;
    const double C567 = C96 * C187;
    const double C566 = C185 * C108;
    const double C565 = C96 * C220;
    const double C564 = C173 * C108;
    const double C563 = C96 * C182;
    const double C562 = C96 * C216;
    const double C561 = C171 * C108;
    const double C560 = C96 * C181;
    const double C559 = C96 * C94;
    const double C558 = C96 * C209;
    const double C557 = C94 * C108;
    const double C556 = C96 * C226;
    const double C555 = -4 * C164;
    const double C554 = C96 * C205;
    const double C553 = C96 * C100;
    const double C552 = C96 * C225;
    const double C551 = -4 * C162;
    const double C550 = C96 * C176;
    const double C549 = C175 - C427;
    const double C548 = C96 * C175;
    const double C547 = C172 * C108;
    const double C546 = -2 * C159;
    const double C545 = C96 * C199;
    const double C544 = C159 * C108;
    const double C543 = 2 * C427;
    const double C542 = C96 * C165;
    const double C541 = -2 * C156;
    const double C540 = C163 - C427;
    const double C539 = C156 * C108;
    const double C538 = C96 * C163;
    const double C594 = C232 + C569;
    const double C593 = C217 + C568;
    const double C592 = C187 - C562;
    const double C591 = C213 + C567;
    const double C590 = C184 + C566;
    const double C589 = 2 * C564;
    const double C588 = 2 * C562;
    const double C587 = C217 + C563;
    const double C586 = C181 - C562;
    const double C585 = 2 * C561;
    const double C584 = C213 + C560;
    const double C583 = C94 - C558;
    const double C582 = C558 - C94;
    const double C581 = C100 + C557;
    const double C580 = C555 + C556;
    const double C579 = C100 - C554;
    const double C578 = C554 - C100;
    const double C577 = C551 + C552;
    const double C576 = C541 + C550;
    const double C575 = C340 + C548;
    const double C574 = C170 + C547;
    const double C573 = 2 * C544;
    const double C572 = C541 + C542;
    const double C571 = 2 * C539;
    const double C570 = C340 + C538;
    const double C607 = C96 * C593;
    const double C606 = C216 + C589;
    const double C605 = C96 * C587;
    const double C604 = C212 + C585;
    const double C603 = C96 * C582;
    const double C602 = 2 * C578;
    const double C601 = C96 * C580;
    const double C600 = C225 + C579;
    const double C599 = C96 * C578;
    const double C598 = C96 * C576;
    const double C597 = C196 + C573;
    const double C596 = C96 * C572;
    const double C595 = C193 + C571;
    const double C616 = C592 + C607;
    const double C615 = C96 * C606;
    const double C614 = C586 + C605;
    const double C613 = C205 + C603;
    const double C612 = C600 + C579;
    const double C611 = C201 + C599;
    const double C610 = C549 + C598;
    const double C609 = C96 * C597;
    const double C608 = C540 + C596;
    const double C622 = C588 + C615;
    const double C621 = C559 - C613;
    const double C620 = C613 - C559;
    const double C619 = C612 + C601;
    const double C618 = C553 - C611;
    const double C617 = C543 + C609;
    const double C623 = C96 * C620;
    const double C624 = C602 + C623;
    const double C625 = C581 - C624;
    const double C663 = C97 * C606;
    const double C662 = C96 * C232;
    const double C661 = C96 * C184;
    const double C660 = C97 * C562;
    const double C659 = C97 * C182;
    const double C658 = C97 * C216;
    const double C657 = C97 * C181;
    const double C656 = C582 * C112;
    const double C655 = C97 * C205;
    const double C654 = C97 * C578;
    const double C653 = C226 * C112;
    const double C652 = C97 * C225;
    const double C651 = C176 * C112;
    const double C650 = C97 * C175;
    const double C649 = C97 * C597;
    const double C648 = C97 * C427;
    const double C647 = C96 * C170;
    const double C671 = C581 - C663;
    const double C670 = C553 - C660;
    const double C669 = C206 + C659;
    const double C668 = C181 - C655;
    const double C667 = C202 + C657;
    const double C666 = C578 + C656;
    const double C665 = C225 + C653;
    const double C664 = C175 + C651;
    const double C672 = C97 * C669;
    const double C673 = C668 + C672;
    const double C711 = C91 * C233;
    const double C710 = C91 * C188;
    const double C709 = C96 * C252;
    const double C708 = C252 * C108;
    const double C707 = C91 * C182;
    const double C706 = C96 * C245;
    const double C705 = C96 * C101;
    const double C704 = C91 * C226;
    const double C703 = -2 * C242;
    const double C702 = C96 * C254;
    const double C701 = C96 * C243;
    const double C719 = C96 * C710;
    const double C718 = C249 + C708;
    const double C717 = C96 * C707;
    const double C716 = C101 - C706;
    const double C715 = C706 - C101;
    const double C714 = C96 * C704;
    const double C713 = C264 + C702;
    const double C712 = C264 + C701;
    const double C723 = C719 - C249;
    const double C722 = C717 - C249;
    const double C721 = C96 * C715;
    const double C720 = C703 + C714;
    const double C724 = C242 + C721;
    const double C725 = C705 - C724;
    const double C750 = C97 * C707;
    const double C749 = C97 * C715;
    const double C748 = C97 * C704;
    const double C747 = C97 * C254;
    const double C751 = C750 - C242;
    const double C779 = C96 * C669;
    const double C778 = C100 - C658;
    const double C777 = C97 * C582;
    const double C776 = C97 * C620;
    const double C775 = C97 * C226;
    const double C774 = -2 * C655;
    const double C773 = C97 * C176;
    const double C782 = C778 + C779;
    const double C781 = C96 * C775;
    const double C780 = C96 * C773;
    const double C784 = C774 + C781;
    const double C783 = C780 - C456;
    const double C881 = C97 * C94;
    const double C880 = C97 * C220;
    const double C879 = C94 * C112;
    const double C878 = C97 * C233;
    const double C877 = -4 * C171;
    const double C876 = C232 + C778;
    const double C875 = C658 - C100;
    const double C874 = C97 * C100;
    const double C873 = C97 * C232;
    const double C872 = -4 * C169;
    const double C871 = C97 * C188;
    const double C870 = C187 - C655;
    const double C869 = C97 * C187;
    const double C868 = C97 * C185;
    const double C867 = C184 - C456;
    const double C866 = C97 * C184;
    const double C865 = C97 * C209;
    const double C864 = C166 * C112;
    const double C863 = 2 * C655;
    const double C862 = C164 * C112;
    const double C861 = C97 * C199;
    const double C860 = C159 * C112;
    const double C859 = 2 * C456;
    const double C858 = C97 * C172;
    const double C857 = C170 - C456;
    const double C856 = C156 * C112;
    const double C855 = C97 * C170;
    const double C854 = C165 * C112;
    const double C900 = C94 - C880;
    const double C899 = C880 - C94;
    const double C898 = 2 * C875;
    const double C897 = C100 + C879;
    const double C896 = C877 + C878;
    const double C895 = C876 + C778;
    const double C894 = C97 * C875;
    const double C893 = C872 + C873;
    const double C892 = C206 + C871;
    const double C891 = C202 + C869;
    const double C890 = C541 + C868;
    const double C889 = C340 + C866;
    const double C888 = 2 * C864;
    const double C887 = 2 * C862;
    const double C886 = 2 * C860;
    const double C885 = C541 + C858;
    const double C884 = 2 * C856;
    const double C883 = C340 + C855;
    const double C882 = C163 + C854;
    const double C910 = C97 * C899;
    const double C909 = C97 * C896;
    const double C908 = C212 + C894;
    const double C907 = C97 * C892;
    const double C906 = C97 * C890;
    const double C905 = C205 + C888;
    const double C904 = C201 + C887;
    const double C903 = C196 + C886;
    const double C902 = C97 * C885;
    const double C901 = C193 + C884;
    const double C918 = C216 + C910;
    const double C917 = C895 + C909;
    const double C916 = C874 - C908;
    const double C915 = C870 + C907;
    const double C914 = C867 + C906;
    const double C913 = C97 * C905;
    const double C912 = C97 * C903;
    const double C911 = C857 + C902;
    const double C922 = C881 - C918;
    const double C921 = C918 - C881;
    const double C920 = C863 + C913;
    const double C919 = C859 + C912;
    const double C923 = C97 * C921;
    const double C924 = C898 + C923;
    const double C925 = C897 - C924;
    const double C950 = C97 * C709;
    const double C949 = C96 * C711;
    const double C948 = C96 * C258;
    const double C947 = C96 * C250;
    const double C951 = C705 - C950;
    const double C985 = C97 * C252;
    const double C984 = C97 * C101;
    const double C983 = C97 * C711;
    const double C982 = -2 * C249;
    const double C981 = C97 * C710;
    const double C980 = C97 * C258;
    const double C979 = C97 * C245;
    const double C978 = C245 * C112;
    const double C977 = C97 * C250;
    const double C992 = C101 - C985;
    const double C991 = C985 - C101;
    const double C990 = C982 + C983;
    const double C989 = C981 - C242;
    const double C988 = C264 + C980;
    const double C987 = C242 + C978;
    const double C986 = C264 + C977;
    const double C993 = C97 * C991;
    const double C994 = C249 + C993;
    const double C995 = C984 - C994;
    const double C1025 = C97 * C565;
    const double C1024 = C97 * C559;
    const double C1023 = C96 * C233;
    const double C1022 = -2 * C562;
    const double C1021 = C97 * C593;
    const double C1020 = C96 * C185;
    const double C1019 = C97 * C545;
    const double C1018 = C545 * C112;
    const double C1017 = C96 * C172;
    const double C1032 = C559 - C1025;
    const double C1031 = C1025 - C559;
    const double C1030 = C97 * C1023;
    const double C1029 = C579 + C1021;
    const double C1028 = C97 * C1020;
    const double C1027 = C427 + C1018;
    const double C1026 = C97 * C1017;
    const double C1036 = C97 * C1031;
    const double C1035 = C1022 + C1030;
    const double C1034 = C1028 - C427;
    const double C1033 = C1026 - C427;
    const double C1037 = C562 + C1036;
    const double C1038 = C1024 - C1037;
    const double C2048 = -2 * C565;
    const double C2047 = C1023 + C1032;
    const double C2046 = 2 * C1035;
    const double C2045 = C593 - C777;
    const double C2044 = 2 * C1029;
    const double C2043 = C1020 - C1019;
    const double C2042 = 2 * C1034;
    const double C2041 = -2 * C920;
    const double C2040 = C1017 - C1019;
    const double C2039 = 2 * C1033;
    const double C2038 = C97 * C572;
    const double C2037 = 2 * C483;
    const double C2036 = -2 * C252;
    const double C2035 = C711 + C992;
    const double C2034 = 2 * C990;
    const double C2033 = C710 - C979;
    const double C2032 = 2 * C989;
    const double C2031 = C258 - C458;
    const double C2030 = 2 * C988;
    const double C2029 = 2 * C751;
    const double C2028 = 2 * C748;
    const double C2027 = 2 * C747;
    const double C2026 = C250 - C458;
    const double C2025 = 2 * C986;
    const double C2024 = C97 * C243;
    const double C2023 = -2 * C919;
    const double C2022 = -2 * C709;
    const double C2021 = C949 + C951;
    const double C2020 = C723 - C749;
    const double C2019 = C948 - C484;
    const double C2018 = C707 - C979;
    const double C2017 = -2 * C987;
    const double C2016 = C947 - C484;
    const double C2015 = -2 * C1027;
    const double C2014 = C97 * C917;
    const double C2013 = 2 * C893;
    const double C2012 = C97 * C915;
    const double C2011 = 2 * C891;
    const double C2010 = C97 * C914;
    const double C2009 = 2 * C889;
    const double C2008 = 2 * C669;
    const double C2007 = C97 * C673;
    const double C2006 = 2 * C667;
    const double C2005 = 2 * C775;
    const double C2004 = C97 * C665;
    const double C2003 = 2 * C652;
    const double C2002 = 2 * C773;
    const double C2001 = C97 * C664;
    const double C2000 = 2 * C650;
    const double C1999 = C97 * C911;
    const double C1998 = 2 * C883;
    const double C1997 = C97 * C882;
    const double C1996 = C97 * C163;
    const double C1995 = 2 * C457;
    const double C1994 = C97 * C395;
    const double C1993 = 2 * C384;
    const double C1992 = -2 * C622;
    const double C1991 = C669 + C1032;
    const double C1990 = 2 * C782;
    const double C1989 = -2 * C865;
    const double C1988 = C775 - C777;
    const double C1987 = 2 * C784;
    const double C1986 = C773 - C1019;
    const double C1985 = 2 * C783;
    const double C1984 = -2 * C718;
    const double C1983 = C751 + C951;
    const double C1982 = -2 * C979;
    const double C1981 = C748 - C749;
    const double C1980 = C747 - C484;
    const double C1979 = -2 * C649;
    const double C1978 = 2 * C949;
    const double C1977 = C710 - C709;
    const double C1976 = 2 * C723;
    const double C1975 = 2 * C948;
    const double C1974 = C707 - C709;
    const double C1973 = 2 * C722;
    const double C1972 = -2 * C245;
    const double C1971 = C704 + C716;
    const double C1970 = 2 * C720;
    const double C1969 = C254 - C429;
    const double C1968 = 2 * C713;
    const double C1967 = 2 * C947;
    const double C1966 = C243 - C429;
    const double C1965 = 2 * C712;
    const double C1964 = -2 * C617;
    const double C1963 = -2 * C606;
    const double C1962 = C594 + C671;
    const double C1961 = C97 * C594;
    const double C1960 = -2 * C604;
    const double C1959 = C97 * C1035;
    const double C1958 = C662 + C670;
    const double C1957 = C616 - C776;
    const double C1956 = C97 * C616;
    const double C1955 = C97 * C1029;
    const double C1954 = C591 - C654;
    const double C1953 = C590 - C649;
    const double C1952 = C97 * C590;
    const double C1951 = C97 * C1034;
    const double C1950 = C661 - C648;
    const double C1949 = C182 - C865;
    const double C1948 = C673 + C1038;
    const double C1947 = C96 * C782;
    const double C1946 = C667 + C670;
    const double C1945 = C96 * C673;
    const double C1944 = -2 * C905;
    const double C1943 = C665 - C666;
    const double C1942 = C96 * C784;
    const double C1941 = C652 - C654;
    const double C1940 = C96 * C665;
    const double C1939 = -2 * C904;
    const double C1938 = C664 - C1027;
    const double C1937 = C96 * C783;
    const double C1936 = C650 - C648;
    const double C1935 = C96 * C664;
    const double C1934 = C574 - C649;
    const double C1933 = C97 * C574;
    const double C1932 = C97 * C1033;
    const double C1931 = C647 - C648;
    const double C1930 = C97 * C608;
    const double C1929 = C572 * C112;
    const double C1928 = C97 * C353;
    const double C1927 = C428 * C112;
    const double C1926 = 2 * C1023;
    const double C1925 = C96 * C594;
    const double C1924 = 2 * C662;
    const double C1923 = C188 - C565;
    const double C1922 = 2 * C593;
    const double C1921 = C96 * C616;
    const double C1920 = 2 * C591;
    const double C1919 = 2 * C1020;
    const double C1918 = C96 * C590;
    const double C1917 = 2 * C661;
    const double C1916 = C96 * C614;
    const double C1915 = 2 * C584;
    const double C1914 = C96 * C619;
    const double C1913 = 2 * C577;
    const double C1912 = C96 * C610;
    const double C1911 = 2 * C575;
    const double C1910 = 2 * C1017;
    const double C1909 = C96 * C574;
    const double C1908 = 2 * C647;
    const double C1907 = C165 - C545;
    const double C1906 = 2 * C572;
    const double C1905 = C96 * C608;
    const double C1904 = 2 * C570;
    const double C1903 = 2 * C428;
    const double C1902 = C96 * C353;
    const double C1901 = 2 * C336;
    const double C1900 = -2 * C349;
    const double C1899 = C97 * C949;
    const double C1898 = -2 * C348;
    const double C1897 = C97 * C662;
    const double C1896 = -2 * C346;
    const double C1895 = C97 * C723;
    const double C1894 = C97 * C591;
    const double C1893 = C97 * C948;
    const double C1892 = C97 * C661;
    const double C1891 = C96 * C751;
    const double C1890 = C96 * C667;
    const double C1889 = -2 * C391;
    const double C1888 = C96 * C748;
    const double C1887 = -2 * C390;
    const double C1886 = C96 * C652;
    const double C1885 = -2 * C389;
    const double C1884 = C96 * C747;
    const double C1883 = C96 * C650;
    const double C1882 = C97 * C947;
    const double C1881 = C97 * C647;
    const double C1880 = C97 * C712;
    const double C1879 = C97 * C570;
    const double C1878 = -2 * C1019;
    const double C1877 = C483 - C484;
    const double C1876 = C91 * C483;
    const double C1875 = -2 * C648;
    const double C1874 = C97 * C336;
    const double C1873 = -2 * C299;
    const double C1872 = -2 * C861;
    const double C1871 = C457 - C458;
    const double C1870 = 2 * C461;
    const double C1869 = -2 * C298;
    const double C1868 = -2 * C545;
    const double C1867 = C428 - C429;
    const double C1866 = 2 * C432;
    const double C1865 = -2 * C277;
    const double C1864 = C283 + C399;
    const double C1863 = C97 * C283;
    const double C1862 = -2 * C273;
    const double C1861 = C97 * C990;
    const double C1860 = C351 + C398;
    const double C1859 = C97 * C351;
    const double C1858 = -2 * C246;
    const double C1857 = C97 * C893;
    const double C1856 = C231 + C397;
    const double C1855 = C97 * C231;
    const double C1854 = 4 * C167;
    const double C1853 = C259 - C391;
    const double C1852 = C97 * C259;
    const double C1851 = C97 * C989;
    const double C1850 = C350 - C390;
    const double C1849 = C97 * C350;
    const double C1848 = C97 * C891;
    const double C1847 = C186 - C389;
    const double C1846 = C97 * C186;
    const double C1845 = C294 - C388;
    const double C1844 = C97 * C294;
    const double C1843 = C97 * C988;
    const double C1842 = C257 - C386;
    const double C1841 = C97 * C257;
    const double C1840 = C97 * C889;
    const double C1839 = C183 - C383;
    const double C1838 = C97 * C183;
    const double C1837 = C256 - C391;
    const double C1836 = C97 * C256;
    const double C1835 = C97 * C751;
    const double C1834 = C347 - C390;
    const double C1833 = C97 * C347;
    const double C1832 = C97 * C667;
    const double C1831 = C180 - C389;
    const double C1830 = C97 * C180;
    const double C1829 = C97 * C280;
    const double C1828 = C704 * C112;
    const double C1827 = C97 * C343;
    const double C1826 = C225 * C112;
    const double C1825 = C97 * C224;
    const double C1824 = C97 * C293;
    const double C1823 = C254 * C112;
    const double C1822 = C97 * C253;
    const double C1821 = C175 * C112;
    const double C1820 = C97 * C174;
    const double C1819 = C291 - C388;
    const double C1818 = C97 * C291;
    const double C1817 = C97 * C986;
    const double C1816 = C247 - C386;
    const double C1815 = C97 * C247;
    const double C1814 = C97 * C883;
    const double C1813 = C168 - C383;
    const double C1812 = C97 * C168;
    const double C1811 = C97 * C289;
    const double C1810 = C243 * C112;
    const double C1809 = C97 * C240;
    const double C1808 = C163 * C112;
    const double C1807 = C97 * C161;
    const double C1806 = -2 * C903;
    const double C1805 = C395 - C396;
    const double C1804 = C91 * C461;
    const double C1803 = C384 - C386;
    const double C1802 = C91 * C395;
    const double C1801 = -2 * C901;
    const double C1800 = C91 * C384;
    const double C1799 = -2 * C383;
    const double C1798 = C195 * C112;
    const double C1797 = C97 * C192;
    const double C1796 = C96 * C283;
    const double C1795 = C711 * C108;
    const double C1794 = C96 * C351;
    const double C1793 = C232 * C108;
    const double C1792 = C96 * C231;
    const double C1791 = C259 - C349;
    const double C1790 = C96 * C259;
    const double C1789 = C96 * C723;
    const double C1788 = C350 - C348;
    const double C1787 = C96 * C350;
    const double C1786 = C96 * C591;
    const double C1785 = C186 - C346;
    const double C1784 = C96 * C186;
    const double C1783 = C96 * C294;
    const double C1782 = C258 * C108;
    const double C1781 = C96 * C257;
    const double C1780 = C184 * C108;
    const double C1779 = C96 * C183;
    const double C1778 = C256 - C349;
    const double C1777 = C96 * C256;
    const double C1776 = C96 * C722;
    const double C1775 = C347 - C348;
    const double C1774 = C96 * C347;
    const double C1773 = C96 * C584;
    const double C1772 = C180 - C346;
    const double C1771 = C96 * C180;
    const double C1770 = -2 * C272;
    const double C1769 = C280 + C357;
    const double C1768 = C96 * C280;
    const double C1767 = -2 * C268;
    const double C1766 = C96 * C720;
    const double C1765 = C343 + C356;
    const double C1764 = C96 * C343;
    const double C1763 = -2 * C239;
    const double C1762 = C96 * C577;
    const double C1761 = C224 + C355;
    const double C1760 = C96 * C224;
    const double C1759 = 4 * C160;
    const double C1758 = C293 - C341;
    const double C1757 = C96 * C293;
    const double C1756 = C96 * C713;
    const double C1755 = C253 - C338;
    const double C1754 = C96 * C253;
    const double C1753 = C96 * C575;
    const double C1752 = C174 - C335;
    const double C1751 = C96 * C174;
    const double C1750 = C96 * C291;
    const double C1749 = C250 * C108;
    const double C1748 = C96 * C247;
    const double C1747 = C170 * C108;
    const double C1746 = C96 * C168;
    const double C1745 = C289 - C341;
    const double C1744 = C96 * C289;
    const double C1743 = C96 * C712;
    const double C1742 = C240 - C338;
    const double C1741 = C96 * C240;
    const double C1740 = C96 * C570;
    const double C1739 = C161 - C335;
    const double C1738 = C96 * C161;
    const double C1737 = -2 * C597;
    const double C1736 = C353 - C354;
    const double C1735 = C91 * C432;
    const double C1734 = C336 - C338;
    const double C1733 = C91 * C353;
    const double C1732 = -2 * C595;
    const double C1731 = C91 * C336;
    const double C1730 = -2 * C335;
    const double C1729 = C195 * C108;
    const double C1728 = C96 * C192;
    const double C1727 = C112 * C74;
    const double C1726 = 2 * C711;
    const double C1725 = C91 * C283;
    const double C1724 = 2 * C351;
    const double C1723 = C232 * C98;
    const double C1722 = C91 * C231;
    const double C1721 = C112 * C69;
    const double C1720 = C111 * C74;
    const double C1719 = 2 * C710;
    const double C1718 = C91 * C259;
    const double C1717 = 2 * C350;
    const double C1716 = C187 * C98;
    const double C1715 = C91 * C186;
    const double C1714 = C111 * C69;
    const double C1713 = C110 * C74;
    const double C1712 = C185 - C252;
    const double C1711 = 2 * C258;
    const double C1710 = C91 * C294;
    const double C1709 = 2 * C257;
    const double C1708 = C91 * C257;
    const double C1707 = C183 - C246;
    const double C1706 = C91 * C183;
    const double C1705 = C110 * C69;
    const double C1704 = C109 * C74;
    const double C1703 = 2 * C707;
    const double C1702 = C91 * C256;
    const double C1701 = 2 * C347;
    const double C1700 = C181 * C98;
    const double C1699 = C91 * C180;
    const double C1698 = C109 * C69;
    const double C1697 = C108 * C74;
    const double C1696 = 2 * C704;
    const double C1695 = C91 * C280;
    const double C1694 = 2 * C343;
    const double C1693 = C225 * C98;
    const double C1692 = C91 * C224;
    const double C1691 = C108 * C69;
    const double C1690 = C107 * C74;
    const double C1689 = C176 - C245;
    const double C1688 = 2 * C254;
    const double C1687 = C91 * C293;
    const double C1686 = 2 * C253;
    const double C1685 = C91 * C253;
    const double C1684 = C174 - C239;
    const double C1683 = C91 * C174;
    const double C1682 = C107 * C69;
    const double C1681 = C105 * C74;
    const double C1680 = C172 - C252;
    const double C1679 = 2 * C250;
    const double C1678 = C91 * C291;
    const double C1677 = 2 * C247;
    const double C1676 = C91 * C247;
    const double C1675 = C168 - C246;
    const double C1674 = C91 * C168;
    const double C1673 = C105 * C69;
    const double C1672 = C103 * C74;
    const double C1671 = C165 - C245;
    const double C1670 = 2 * C243;
    const double C1669 = C91 * C289;
    const double C1668 = 2 * C240;
    const double C1667 = C91 * C240;
    const double C1666 = C161 - C239;
    const double C1665 = C91 * C161;
    const double C1664 = C103 * C69;
    const double C1663 = C98 * C74;
    const double C1662 = C91 * C301;
    const double C1661 = 2 * C262;
    const double C1660 = C91 * C262;
    const double C1659 = C192 + C261;
    const double C1658 = C91 * C192;
    const double C1657 = 4 * C352;
    const double C1656 = C98 * C69;
    const double C2386 = C1528 * C1794;
    const double C2385 = C1528 * C1792;
    const double C2384 = C1528 * C1781;
    const double C2383 = C1528 * C1779;
    const double C2382 = C1528 * C1748;
    const double C2381 = C1528 * C1746;
    const double C2380 = C1534 * C1880;
    const double C2379 = C1534 * C1879;
    const double C2378 = C1534 * C1874;
    const double C2377 = C1528 * C1728;
    const double C2376 = C1528 * C1722;
    const double C2375 = C1528 * C1715;
    const double C2374 = C1528 * C1699;
    const double C2373 = C1534 * C1827;
    const double C2372 = C1528 * C1692;
    const double C2371 = C1534 * C1825;
    const double C2370 = C1534 * C1822;
    const double C2369 = C1534 * C1820;
    const double C2368 = C1534 * C1809;
    const double C2367 = C1534 * C1807;
    const double C2366 = C1534 * C1797;
    const double C2365 = C1198 * C1796;
    const double C2364 = C1198 * C1783;
    const double C2363 = C1198 * C1750;
    const double C2362 = C1648 * C1825;
    const double C2361 = C1648 * C1820;
    const double C2360 = C1648 * C1807;
    const double C2359 = C1648 * C1797;
    const double C2358 = C1198 * C1794;
    const double C2357 = C1198 * C1792;
    const double C2356 = C1198 * C1781;
    const double C2355 = C1198 * C1779;
    const double C2354 = C1198 * C1748;
    const double C2353 = C1198 * C1746;
    const double C2352 = C1531 * C1880;
    const double C2351 = C1531 * C1930;
    const double C2350 = C1531 * C1879;
    const double C2349 = C1531 * C1928;
    const double C2348 = C1531 * C1874;
    const double C2347 = C1198 * C1728;
    const double C2346 = C1198 * C1722;
    const double C2345 = C1198 * C1715;
    const double C2344 = C1198 * C1699;
    const double C2343 = C1531 * C1829;
    const double C2342 = C1531 * C1827;
    const double C2341 = C1198 * C1692;
    const double C2340 = C1531 * C1825;
    const double C2339 = C1531 * C1824;
    const double C2338 = C1531 * C1822;
    const double C2337 = C1531 * C1820;
    const double C2336 = C1531 * C1811;
    const double C2335 = C1531 * C1809;
    const double C2334 = C1531 * C1807;
    const double C2333 = C1531 * C1797;
    const double C2332 = C2047 + C1032;
    const double C2331 = C2046 + C1038;
    const double C2330 = C2044 - C666;
    const double C2329 = C2042 - C1027;
    const double C2328 = C2039 - C1027;
    const double C2327 = 2 * C2038;
    const double C2326 = C2035 + C992;
    const double C2325 = C2034 + C995;
    const double C2324 = C2032 - C987;
    const double C2323 = C2030 - C396;
    const double C2322 = C2029 - C987;
    const double C2321 = C974 * C1825;
    const double C2320 = C974 * C1820;
    const double C2319 = C2025 - C396;
    const double C2318 = 2 * C2024;
    const double C2317 = C974 * C1807;
    const double C2316 = C974 * C1797;
    const double C2315 = C2021 + C951;
    const double C2314 = C2013 + C916;
    const double C2313 = C2011 - C904;
    const double C2312 = C2009 - C901;
    const double C2311 = C2008 - C905;
    const double C2310 = C2006 - C904;
    const double C2309 = C2003 + C2004;
    const double C2308 = C2000 + C2001;
    const double C2307 = C1998 - C901;
    const double C2306 = 2 * C1996;
    const double C2305 = C1993 + C1994;
    const double C2304 = C806 * C1792;
    const double C2303 = C806 * C1779;
    const double C2302 = C806 * C1746;
    const double C2301 = C807 * C1879;
    const double C2300 = C807 * C1874;
    const double C2299 = C806 * C1728;
    const double C2298 = C806 * C1722;
    const double C2297 = C806 * C1715;
    const double C2296 = C806 * C1699;
    const double C2295 = C807 * C1827;
    const double C2294 = C806 * C1692;
    const double C2293 = C807 * C1825;
    const double C2292 = C807 * C1822;
    const double C2291 = C807 * C1820;
    const double C2290 = C807 * C1809;
    const double C2289 = C807 * C1807;
    const double C2288 = C807 * C1797;
    const double C2287 = C1990 + C671;
    const double C2286 = C1988 - C777;
    const double C2285 = C1987 - C776;
    const double C2284 = C1985 - C649;
    const double C2283 = C1981 - C749;
    const double C2282 = C455 * C1930;
    const double C2281 = C455 * C1928;
    const double C2280 = C1976 - C718;
    const double C2279 = C1973 - C718;
    const double C2278 = C1971 + C716;
    const double C2277 = C1970 + C725;
    const double C2276 = C1968 - C354;
    const double C2275 = C1965 - C354;
    const double C2274 = C1962 + C671;
    const double C2273 = C1960 + C1961;
    const double C2272 = C1958 + C670;
    const double C2271 = C380 * C1792;
    const double C2270 = C618 + C1956;
    const double C2269 = C1954 + C1955;
    const double C2268 = C1952 - C595;
    const double C2267 = C1950 + C1951;
    const double C2266 = C380 * C1779;
    const double C2265 = C1946 + C1947;
    const double C2264 = C916 + C1945;
    const double C2263 = C1943 - C666;
    const double C2262 = C1941 - C654;
    const double C2261 = C1939 + C1940;
    const double C2260 = C1936 + C1937;
    const double C2259 = C1935 - C901;
    const double C2258 = C1933 - C595;
    const double C2257 = C1931 + C1932;
    const double C2256 = C380 * C1746;
    const double C2255 = C570 + C1929;
    const double C2254 = C381 * C1879;
    const double C2253 = C336 + C1927;
    const double C2252 = C381 * C1874;
    const double C2251 = C380 * C1728;
    const double C2250 = C1924 + C1925;
    const double C2249 = C1922 - C606;
    const double C2248 = C1920 - C604;
    const double C2247 = C1917 + C1918;
    const double C2246 = C1915 - C604;
    const double C2245 = C1913 + C618;
    const double C2244 = C1911 - C595;
    const double C2243 = C1908 + C1909;
    const double C2242 = C1906 - C597;
    const double C2241 = C1904 - C595;
    const double C2240 = C1901 + C1902;
    const double C2239 = C454 * C1796;
    const double C2238 = C1898 + C1899;
    const double C2237 = C454 * C1794;
    const double C2236 = C1896 + C1897;
    const double C2235 = C454 * C1792;
    const double C2234 = C356 + C1895;
    const double C2233 = C355 + C1894;
    const double C2232 = C454 * C1783;
    const double C2231 = C1893 - C338;
    const double C2230 = C454 * C1781;
    const double C2229 = C1892 - C335;
    const double C2228 = C454 * C1779;
    const double C2227 = C398 + C1891;
    const double C2226 = C397 + C1890;
    const double C2225 = C1887 + C1888;
    const double C2224 = C1885 + C1886;
    const double C2223 = C1884 - C386;
    const double C2222 = C1883 - C383;
    const double C2221 = C454 * C1750;
    const double C2220 = C1882 - C338;
    const double C2219 = C454 * C1748;
    const double C2218 = C1881 - C335;
    const double C2217 = C454 * C1746;
    const double C2216 = C455 * C1880;
    const double C2215 = C455 * C1879;
    const double C2214 = C1877 - C484;
    const double C2213 = C1875 + C1876;
    const double C2212 = C455 * C1874;
    const double C2211 = C454 * C1728;
    const double C2210 = C454 * C1722;
    const double C2209 = C454 * C1715;
    const double C2208 = C454 * C1699;
    const double C2207 = C455 * C1829;
    const double C2206 = C455 * C1827;
    const double C2205 = C454 * C1692;
    const double C2204 = C455 * C1825;
    const double C2203 = C455 * C1824;
    const double C2202 = C455 * C1822;
    const double C2201 = C455 * C1820;
    const double C2200 = C455 * C1811;
    const double C2199 = C455 * C1809;
    const double C2198 = C455 * C1807;
    const double C2197 = C1871 - C458;
    const double C2196 = C1870 - C388;
    const double C2195 = C455 * C1797;
    const double C2194 = C1867 - C429;
    const double C2193 = C1866 - C341;
    const double C2192 = C1864 + C399;
    const double C2191 = C1862 + C1863;
    const double C2190 = C1860 + C398;
    const double C2189 = C1858 + C1859;
    const double C2188 = C380 * C1722;
    const double C2187 = C1856 + C397;
    const double C2186 = C1854 + C1855;
    const double C2185 = C1852 - C268;
    const double C2184 = C1850 + C1851;
    const double C2183 = C1849 - C239;
    const double C2182 = C380 * C1715;
    const double C2181 = C1847 + C1848;
    const double C2180 = C200 + C1846;
    const double C2179 = C300 + C1844;
    const double C2178 = C1842 + C1843;
    const double C2177 = C261 + C1841;
    const double C2176 = C1839 + C1840;
    const double C2175 = C358 + C1838;
    const double C2174 = C1836 - C268;
    const double C2173 = C1834 + C1835;
    const double C2172 = C1833 - C239;
    const double C2171 = C380 * C1699;
    const double C2170 = C1831 + C1832;
    const double C2169 = C200 + C1830;
    const double C2168 = C343 + C1828;
    const double C2167 = C381 * C1827;
    const double C2166 = C380 * C1692;
    const double C2165 = C224 + C1826;
    const double C2164 = C381 * C1825;
    const double C2163 = C253 + C1823;
    const double C2162 = C381 * C1822;
    const double C2161 = C174 + C1821;
    const double C2160 = C381 * C1820;
    const double C2159 = C300 + C1818;
    const double C2158 = C1816 + C1817;
    const double C2157 = C261 + C1815;
    const double C2156 = C1813 + C1814;
    const double C2155 = C358 + C1812;
    const double C2154 = C240 + C1810;
    const double C2153 = C381 * C1809;
    const double C2152 = C161 + C1808;
    const double C2151 = C381 * C1807;
    const double C2150 = C1805 - C396;
    const double C2149 = C1803 - C386;
    const double C2148 = C1801 + C1802;
    const double C2147 = C1799 + C1800;
    const double C2146 = C192 + C1798;
    const double C2145 = C381 * C1797;
    const double C2144 = C59 * C1796;
    const double C2143 = C351 + C1795;
    const double C2142 = C59 * C1794;
    const double C2141 = C231 + C1793;
    const double C2140 = C59 * C1792;
    const double C2139 = C1790 - C273;
    const double C2138 = C1788 + C1789;
    const double C2137 = C1787 - C246;
    const double C2136 = C1785 + C1786;
    const double C2135 = C211 + C1784;
    const double C2134 = C59 * C1783;
    const double C2133 = C257 + C1782;
    const double C2132 = C59 * C1781;
    const double C2131 = C183 + C1780;
    const double C2130 = C59 * C1779;
    const double C2129 = C1777 - C273;
    const double C2128 = C1775 + C1776;
    const double C2127 = C1774 - C246;
    const double C2126 = C1772 + C1773;
    const double C2125 = C211 + C1771;
    const double C2124 = C1769 + C357;
    const double C2123 = C1767 + C1768;
    const double C2122 = C1765 + C356;
    const double C2121 = C1763 + C1764;
    const double C2120 = C1761 + C355;
    const double C2119 = C1759 + C1760;
    const double C2118 = C300 + C1757;
    const double C2117 = C1755 + C1756;
    const double C2116 = C261 + C1754;
    const double C2115 = C1752 + C1753;
    const double C2114 = C358 + C1751;
    const double C2113 = C59 * C1750;
    const double C2112 = C247 + C1749;
    const double C2111 = C59 * C1748;
    const double C2110 = C168 + C1747;
    const double C2109 = C59 * C1746;
    const double C2108 = C300 + C1744;
    const double C2107 = C1742 + C1743;
    const double C2106 = C261 + C1741;
    const double C2105 = C1739 + C1740;
    const double C2104 = C358 + C1738;
    const double C2103 = C1736 - C354;
    const double C2102 = C1734 - C338;
    const double C2101 = C1732 + C1733;
    const double C2100 = C1730 + C1731;
    const double C2099 = C192 + C1729;
    const double C2098 = C59 * C1728;
    const double C2097 = C1727 * C88;
    const double C2096 = C1724 + C1725;
    const double C2095 = C231 + C1723;
    const double C2094 = C59 * C1722;
    const double C2093 = C1721 * C84;
    const double C2092 = C1720 * C88;
    const double C2091 = C1717 + C1718;
    const double C2090 = C186 + C1716;
    const double C2089 = C59 * C1715;
    const double C2088 = C1714 * C84;
    const double C2087 = C1713 * C88;
    const double C2086 = C1711 - C277;
    const double C2085 = C1709 - C273;
    const double C2084 = C1707 + C1708;
    const double C2083 = C211 + C1706;
    const double C2082 = C1705 * C84;
    const double C2081 = C1704 * C88;
    const double C2080 = C1701 + C1702;
    const double C2079 = C180 + C1700;
    const double C2078 = C59 * C1699;
    const double C2077 = C1698 * C84;
    const double C2076 = C1697 * C88;
    const double C2075 = C1694 + C1695;
    const double C2074 = C224 + C1693;
    const double C2073 = C59 * C1692;
    const double C2072 = C1691 * C84;
    const double C2071 = C1690 * C88;
    const double C2070 = C1688 - C272;
    const double C2069 = C1686 - C268;
    const double C2068 = C1684 + C1685;
    const double C2067 = C200 + C1683;
    const double C2066 = C1682 * C84;
    const double C2065 = C1681 * C88;
    const double C2064 = C1679 - C277;
    const double C2063 = C1677 - C273;
    const double C2062 = C1675 + C1676;
    const double C2061 = C211 + C1674;
    const double C2060 = C1673 * C84;
    const double C2059 = C1672 * C88;
    const double C2058 = C1670 - C272;
    const double C2057 = C1668 - C268;
    const double C2056 = C1666 + C1667;
    const double C2055 = C200 + C1665;
    const double C2054 = C1664 * C84;
    const double C2053 = C1663 * C88;
    const double C2052 = C1661 + C300;
    const double C2051 = C1659 + C261;
    const double C2050 = C1657 + C1658;
    const double C2049 = C1656 * C84;
    const double C2890 = C1534 * C2238;
    const double C2889 = C1534 * C2236;
    const double C2888 = C1534 * C2234;
    const double C2887 = C1528 * C2137;
    const double C2886 = C1286 * C2269;
    const double C2885 = C1534 * C2233;
    const double C2884 = C1528 * C2135;
    const double C2883 = C1534 * C2231;
    const double C2882 = C1286 * C2267;
    const double C2881 = C1534 * C2229;
    const double C2880 = C1534 * C2227;
    const double C2879 = C1528 * C2127;
    const double C2878 = C1286 * C2264;
    const double C2877 = C1534 * C2226;
    const double C2876 = C1528 * C2125;
    const double C2875 = C1534 * C2225;
    const double C2874 = C1528 * C2121;
    const double C2873 = C1286 * C2261;
    const double C2872 = C1534 * C2224;
    const double C2871 = C1528 * C2119;
    const double C2870 = C1534 * C2223;
    const double C2869 = C1528 * C2116;
    const double C2868 = C1286 * C2259;
    const double C2867 = C1534 * C2222;
    const double C2866 = C1528 * C2114;
    const double C2865 = C1534 * C2220;
    const double C2864 = C1286 * C2257;
    const double C2863 = C1534 * C2218;
    const double C2862 = C1528 * C2106;
    const double C2861 = C1286 * C2255;
    const double C2860 = C1528 * C2104;
    const double C2859 = C1534 * C2213;
    const double C2858 = C1528 * C2100;
    const double C2857 = C1286 * C2253;
    const double C2856 = C2377 + C2378;
    const double C2855 = C1534 * C2189;
    const double C2854 = C1534 * C2186;
    const double C2853 = C1286 * C2184;
    const double C2852 = C1534 * C2183;
    const double C2851 = C1286 * C2181;
    const double C2850 = C1534 * C2180;
    const double C2849 = C1528 * C2088;
    const double C2848 = C1286 * C2178;
    const double C2847 = C1534 * C2177;
    const double C2846 = C1528 * C2083;
    const double C2845 = C1286 * C2176;
    const double C2844 = C1534 * C2175;
    const double C2843 = C1528 * C2082;
    const double C2842 = C1286 * C2173;
    const double C2841 = C1534 * C2172;
    const double C2840 = C1286 * C2170;
    const double C2839 = C1534 * C2169;
    const double C2838 = C1528 * C2077;
    const double C2837 = C1286 * C2168;
    const double C2836 = C2372 + C2373;
    const double C2835 = C1286 * C2165;
    const double C2834 = C1286 * C2163;
    const double C2833 = C1528 * C2067;
    const double C2832 = C1286 * C2161;
    const double C2831 = C1528 * C2066;
    const double C2830 = C1286 * C2158;
    const double C2829 = C1534 * C2157;
    const double C2828 = C1528 * C2061;
    const double C2827 = C1286 * C2156;
    const double C2826 = C1534 * C2155;
    const double C2825 = C1528 * C2060;
    const double C2824 = C1286 * C2154;
    const double C2823 = C1528 * C2055;
    const double C2822 = C1286 * C2152;
    const double C2821 = C1528 * C2054;
    const double C2820 = C1286 * C2148;
    const double C2819 = C1534 * C2147;
    const double C2818 = C1528 * C2050;
    const double C2817 = C1286 * C2146;
    const double C2816 = C1198 * C2139;
    const double C2815 = C1198 * C2129;
    const double C2814 = C1198 * C2123;
    const double C2813 = C1198 * C2118;
    const double C2812 = C1198 * C2108;
    const double C2811 = C1648 * C2186;
    const double C2810 = C1641 * C2181;
    const double C2809 = C1648 * C2180;
    const double C2808 = C1651 * C2088;
    const double C2807 = C1641 * C2176;
    const double C2806 = C1648 * C2175;
    const double C2805 = C1651 * C2082;
    const double C2804 = C1641 * C2170;
    const double C2803 = C1648 * C2169;
    const double C2802 = C1651 * C2077;
    const double C2801 = C1641 * C2165;
    const double C2800 = C1641 * C2161;
    const double C2799 = C1651 * C2066;
    const double C2798 = C1641 * C2156;
    const double C2797 = C1648 * C2155;
    const double C2796 = C1651 * C2060;
    const double C2795 = C1641 * C2152;
    const double C2794 = C1651 * C2054;
    const double C2793 = C1641 * C2146;
    const double C2792 = C1198 * C2143;
    const double C2791 = C1531 * C2238;
    const double C2790 = C1531 * C2273;
    const double C2789 = C1198 * C2141;
    const double C2788 = C1531 * C2236;
    const double C2787 = C1198 * C2138;
    const double C2786 = C1531 * C2234;
    const double C2785 = C1198 * C2137;
    const double C2784 = C1531 * C2270;
    const double C2783 = C1198 * C2136;
    const double C2782 = C1531 * C2233;
    const double C2781 = C1198 * C2135;
    const double C2780 = C1198 * C2133;
    const double C2779 = C1531 * C2231;
    const double C2778 = C1531 * C2268;
    const double C2777 = C1198 * C2131;
    const double C2776 = C1531 * C2229;
    const double C2775 = C1198 * C2128;
    const double C2774 = C1531 * C2227;
    const double C2773 = C1198 * C2127;
    const double C2772 = C1531 * C2265;
    const double C2771 = C1198 * C2126;
    const double C2770 = C1531 * C2226;
    const double C2769 = C1198 * C2125;
    const double C2768 = C1531 * C2225;
    const double C2767 = C1198 * C2121;
    const double C2766 = C1531 * C2224;
    const double C2765 = C1198 * C2119;
    const double C2764 = C1198 * C2117;
    const double C2763 = C1531 * C2223;
    const double C2762 = C1198 * C2116;
    const double C2761 = C1531 * C2260;
    const double C2760 = C1198 * C2115;
    const double C2759 = C1531 * C2222;
    const double C2758 = C1198 * C2114;
    const double C2757 = C1198 * C2112;
    const double C2756 = C1531 * C2220;
    const double C2755 = C1531 * C2258;
    const double C2754 = C1198 * C2110;
    const double C2753 = C1531 * C2218;
    const double C2752 = C1198 * C2107;
    const double C2751 = C1198 * C2106;
    const double C2750 = C1198 * C2105;
    const double C2749 = C1198 * C2104;
    const double C2748 = C1198 * C2101;
    const double C2747 = C1531 * C2213;
    const double C2746 = C1198 * C2100;
    const double C2745 = C1198 * C2099;
    const double C2744 = C2347 + C2348;
    const double C2743 = C1531 * C2191;
    const double C2742 = C1198 * C2095;
    const double C2741 = C1531 * C2189;
    const double C2740 = C1531 * C2186;
    const double C2739 = C1531 * C2185;
    const double C2738 = C1198 * C2090;
    const double C2737 = C1531 * C2183;
    const double C2736 = C1531 * C2180;
    const double C2735 = C1198 * C2088;
    const double C2734 = C1531 * C2179;
    const double C2733 = C1198 * C2084;
    const double C2732 = C1531 * C2177;
    const double C2731 = C1198 * C2083;
    const double C2730 = C1531 * C2175;
    const double C2729 = C1198 * C2082;
    const double C2728 = C1531 * C2174;
    const double C2727 = C1198 * C2079;
    const double C2726 = C1531 * C2172;
    const double C2725 = C1531 * C2169;
    const double C2724 = C1198 * C2077;
    const double C2723 = C1198 * C2074;
    const double C2722 = C2341 + C2342;
    const double C2721 = C1198 * C2068;
    const double C2720 = C1198 * C2067;
    const double C2719 = C1198 * C2066;
    const double C2718 = C1531 * C2159;
    const double C2717 = C1198 * C2062;
    const double C2716 = C1531 * C2157;
    const double C2715 = C1198 * C2061;
    const double C2714 = C1531 * C2155;
    const double C2713 = C1198 * C2060;
    const double C2712 = C1198 * C2056;
    const double C2711 = C1198 * C2055;
    const double C2710 = C1198 * C2054;
    const double C2709 = C1531 * C2147;
    const double C2708 = C1198 * C2050;
    const double C2707 = C2331 + C1038;
    const double C2706 = C96 * C2087;
    const double C2705 = C96 * C2065;
    const double C2704 = C2325 + C995;
    const double C2703 = C974 * C2186;
    const double C2702 = C975 * C2181;
    const double C2701 = C974 * C2180;
    const double C2700 = C973 * C2088;
    const double C2699 = C975 * C2176;
    const double C2698 = C974 * C2175;
    const double C2697 = C973 * C2082;
    const double C2696 = C975 * C2170;
    const double C2695 = C974 * C2169;
    const double C2694 = C973 * C2077;
    const double C2693 = C1630 * C2309;
    const double C2692 = C975 * C2165;
    const double C2691 = C1630 * C2308;
    const double C2690 = C975 * C2161;
    const double C2689 = C973 * C2066;
    const double C2688 = C975 * C2156;
    const double C2687 = C974 * C2155;
    const double C2686 = C973 * C2060;
    const double C2685 = C975 * C2152;
    const double C2684 = C973 * C2054;
    const double C2683 = C1630 * C2305;
    const double C2682 = C975 * C2146;
    const double C2681 = C2314 + C916;
    const double C2680 = C2313 + C2012;
    const double C2679 = C2312 + C2010;
    const double C2678 = C2310 + C2007;
    const double C2677 = C2307 + C1999;
    const double C2676 = C2306 + C1997;
    const double C2675 = C807 * C2236;
    const double C2674 = C807 * C2233;
    const double C2673 = C806 * C2135;
    const double C2672 = C807 * C2229;
    const double C2671 = C807 * C2226;
    const double C2670 = C806 * C2125;
    const double C2669 = C807 * C2224;
    const double C2668 = C806 * C2119;
    const double C2667 = C807 * C2222;
    const double C2666 = C806 * C2114;
    const double C2665 = C807 * C2218;
    const double C2664 = C806 * C2104;
    const double C2663 = C2299 + C2300;
    const double C2662 = C807 * C2189;
    const double C2661 = C807 * C2186;
    const double C2660 = C807 * C2183;
    const double C2659 = C807 * C2180;
    const double C2658 = C806 * C2088;
    const double C2657 = C807 * C2177;
    const double C2656 = C806 * C2083;
    const double C2655 = C807 * C2175;
    const double C2654 = C806 * C2082;
    const double C2653 = C807 * C2172;
    const double C2652 = C807 * C2169;
    const double C2651 = C806 * C2077;
    const double C2650 = C2294 + C2295;
    const double C2649 = C806 * C2067;
    const double C2648 = C806 * C2066;
    const double C2647 = C807 * C2157;
    const double C2646 = C806 * C2061;
    const double C2645 = C807 * C2155;
    const double C2644 = C806 * C2060;
    const double C2643 = C806 * C2055;
    const double C2642 = C806 * C2054;
    const double C2641 = C807 * C2147;
    const double C2640 = C806 * C2050;
    const double C2639 = C2285 - C776;
    const double C2638 = C97 * C2071;
    const double C2637 = C454 * C2143;
    const double C2636 = C455 * C2273;
    const double C2635 = C454 * C2141;
    const double C2634 = C454 * C2138;
    const double C2633 = C455 * C2270;
    const double C2632 = C454 * C2136;
    const double C2631 = C454 * C2133;
    const double C2630 = C455 * C2268;
    const double C2629 = C454 * C2131;
    const double C2628 = C454 * C2128;
    const double C2627 = C455 * C2265;
    const double C2626 = C454 * C2126;
    const double C2625 = C454 * C2117;
    const double C2624 = C455 * C2260;
    const double C2623 = C454 * C2115;
    const double C2622 = C454 * C2112;
    const double C2621 = C455 * C2258;
    const double C2620 = C454 * C2110;
    const double C2619 = C454 * C2107;
    const double C2618 = C454 * C2105;
    const double C2617 = C454 * C2101;
    const double C2616 = C454 * C2099;
    const double C2615 = C91 * C2092;
    const double C2614 = C91 * C2081;
    const double C2613 = C2277 + C725;
    const double C2612 = C2272 + C1959;
    const double C2611 = C381 * C2236;
    const double C2610 = C1617 * C2269;
    const double C2609 = C381 * C2233;
    const double C2608 = C380 * C2135;
    const double C2607 = C1617 * C2267;
    const double C2606 = C381 * C2229;
    const double C2605 = C97 * C2081;
    const double C2604 = C1617 * C2264;
    const double C2603 = C381 * C2226;
    const double C2602 = C380 * C2125;
    const double C2601 = C2262 + C1942;
    const double C2600 = C1617 * C2261;
    const double C2599 = C381 * C2224;
    const double C2598 = C380 * C2119;
    const double C2597 = C2071 * C112;
    const double C2596 = C1617 * C2259;
    const double C2595 = C381 * C2222;
    const double C2594 = C380 * C2114;
    const double C2593 = C1617 * C2257;
    const double C2592 = C381 * C2218;
    const double C2591 = C1617 * C2255;
    const double C2590 = C380 * C2104;
    const double C2589 = C1617 * C2253;
    const double C2588 = C2251 + C2252;
    const double C2587 = C59 * C2250;
    const double C2586 = C96 * C2092;
    const double C2585 = C2248 + C1921;
    const double C2584 = C2087 * C108;
    const double C2583 = C59 * C2247;
    const double C2582 = C2246 + C1916;
    const double C2581 = C2245 + C618;
    const double C2580 = C2244 + C1912;
    const double C2579 = C2065 * C108;
    const double C2578 = C59 * C2243;
    const double C2577 = C96 * C2059;
    const double C2576 = C2241 + C1905;
    const double C2575 = C59 * C2240;
    const double C2574 = C455 * C2238;
    const double C2573 = C455 * C2236;
    const double C2572 = C454 * C2139;
    const double C2571 = C455 * C2234;
    const double C2570 = C454 * C2137;
    const double C2569 = C455 * C2233;
    const double C2568 = C454 * C2135;
    const double C2567 = C455 * C2231;
    const double C2566 = C455 * C2229;
    const double C2565 = C454 * C2129;
    const double C2564 = C455 * C2227;
    const double C2563 = C454 * C2127;
    const double C2562 = C455 * C2226;
    const double C2561 = C454 * C2125;
    const double C2560 = C454 * C2123;
    const double C2559 = C455 * C2225;
    const double C2558 = C454 * C2121;
    const double C2557 = C455 * C2224;
    const double C2556 = C454 * C2119;
    const double C2555 = C454 * C2118;
    const double C2554 = C455 * C2223;
    const double C2553 = C454 * C2116;
    const double C2552 = C455 * C2222;
    const double C2551 = C454 * C2114;
    const double C2550 = C455 * C2220;
    const double C2549 = C455 * C2218;
    const double C2548 = C454 * C2108;
    const double C2547 = C454 * C2106;
    const double C2546 = C454 * C2104;
    const double C2545 = C455 * C2213;
    const double C2544 = C454 * C2100;
    const double C2543 = C2211 + C2212;
    const double C2542 = C455 * C2191;
    const double C2541 = C454 * C2095;
    const double C2540 = C455 * C2189;
    const double C2539 = C455 * C2186;
    const double C2538 = C455 * C2185;
    const double C2537 = C454 * C2090;
    const double C2536 = C455 * C2183;
    const double C2535 = C455 * C2180;
    const double C2534 = C454 * C2088;
    const double C2533 = C455 * C2179;
    const double C2532 = C454 * C2084;
    const double C2531 = C455 * C2177;
    const double C2530 = C454 * C2083;
    const double C2529 = C455 * C2175;
    const double C2528 = C454 * C2082;
    const double C2527 = C455 * C2174;
    const double C2526 = C454 * C2079;
    const double C2525 = C455 * C2172;
    const double C2524 = C455 * C2169;
    const double C2523 = C454 * C2077;
    const double C2522 = C454 * C2074;
    const double C2521 = C2205 + C2206;
    const double C2520 = C454 * C2068;
    const double C2519 = C454 * C2067;
    const double C2518 = C454 * C2066;
    const double C2517 = C455 * C2159;
    const double C2516 = C454 * C2062;
    const double C2515 = C455 * C2157;
    const double C2514 = C454 * C2061;
    const double C2513 = C455 * C2155;
    const double C2512 = C454 * C2060;
    const double C2511 = C454 * C2056;
    const double C2510 = C454 * C2055;
    const double C2509 = C454 * C2054;
    const double C2508 = C2196 - C388;
    const double C2507 = C455 * C2147;
    const double C2506 = C454 * C2050;
    const double C2505 = C2193 - C341;
    const double C2504 = C2190 + C1861;
    const double C2503 = C381 * C2189;
    const double C2502 = C2187 + C1857;
    const double C2501 = C381 * C2186;
    const double C2500 = C1617 * C2184;
    const double C2499 = C381 * C2183;
    const double C2498 = C1617 * C2181;
    const double C2497 = C381 * C2180;
    const double C2496 = C380 * C2088;
    const double C2495 = C1617 * C2178;
    const double C2494 = C381 * C2177;
    const double C2493 = C380 * C2083;
    const double C2492 = C1617 * C2176;
    const double C2491 = C381 * C2175;
    const double C2490 = C380 * C2082;
    const double C2489 = C1617 * C2173;
    const double C2488 = C381 * C2172;
    const double C2487 = C1617 * C2170;
    const double C2486 = C381 * C2169;
    const double C2485 = C380 * C2077;
    const double C2484 = C1617 * C2168;
    const double C2483 = C2166 + C2167;
    const double C2482 = C1617 * C2165;
    const double C2481 = C1617 * C2163;
    const double C2480 = C380 * C2067;
    const double C2479 = C1617 * C2161;
    const double C2478 = C380 * C2066;
    const double C2477 = C1617 * C2158;
    const double C2476 = C381 * C2157;
    const double C2475 = C380 * C2061;
    const double C2474 = C1617 * C2156;
    const double C2473 = C381 * C2155;
    const double C2472 = C380 * C2060;
    const double C2471 = C1617 * C2154;
    const double C2470 = C380 * C2055;
    const double C2469 = C1617 * C2152;
    const double C2468 = C380 * C2054;
    const double C2467 = C2149 + C1804;
    const double C2466 = C1617 * C2148;
    const double C2465 = C381 * C2147;
    const double C2464 = C380 * C2050;
    const double C2463 = C1617 * C2146;
    const double C2462 = C59 * C2143;
    const double C2461 = C59 * C2141;
    const double C2460 = C59 * C2139;
    const double C2459 = C59 * C2138;
    const double C2458 = C59 * C2137;
    const double C2457 = C59 * C2136;
    const double C2456 = C59 * C2135;
    const double C2455 = C59 * C2133;
    const double C2454 = C59 * C2131;
    const double C2453 = C59 * C2129;
    const double C2452 = C59 * C2128;
    const double C2451 = C59 * C2127;
    const double C2450 = C59 * C2126;
    const double C2449 = C59 * C2125;
    const double C2448 = C59 * C2123;
    const double C2447 = C2122 + C1766;
    const double C2446 = C59 * C2121;
    const double C2445 = C2120 + C1762;
    const double C2444 = C59 * C2119;
    const double C2443 = C59 * C2118;
    const double C2442 = C59 * C2117;
    const double C2441 = C59 * C2116;
    const double C2440 = C59 * C2115;
    const double C2439 = C59 * C2114;
    const double C2438 = C59 * C2112;
    const double C2437 = C59 * C2110;
    const double C2436 = C59 * C2108;
    const double C2435 = C59 * C2107;
    const double C2434 = C59 * C2106;
    const double C2433 = C59 * C2105;
    const double C2432 = C59 * C2104;
    const double C2431 = C2102 + C1735;
    const double C2430 = C59 * C2101;
    const double C2429 = C59 * C2100;
    const double C2428 = C59 * C2099;
    const double C2427 = C102 + C2097;
    const double C2426 = C59 * C2096;
    const double C2425 = C59 * C2095;
    const double C2424 = C2093 - C85;
    const double C2423 = C2092 * C98;
    const double C2422 = C59 * C2091;
    const double C2421 = C59 * C2090;
    const double C2420 = C59 * C2088;
    const double C2419 = C91 * C2087;
    const double C2418 = C2085 + C1710;
    const double C2417 = C59 * C2084;
    const double C2416 = C59 * C2083;
    const double C2415 = C59 * C2082;
    const double C2414 = C2081 * C98;
    const double C2413 = C59 * C2080;
    const double C2412 = C59 * C2079;
    const double C2411 = C59 * C2077;
    const double C2410 = C102 + C2076;
    const double C2409 = C59 * C2075;
    const double C2408 = C59 * C2074;
    const double C2407 = C2072 - C85;
    const double C2406 = C91 * C2071;
    const double C2405 = C2069 + C1687;
    const double C2404 = C59 * C2068;
    const double C2403 = C59 * C2067;
    const double C2402 = C59 * C2066;
    const double C2401 = C91 * C2065;
    const double C2400 = C2063 + C1678;
    const double C2399 = C59 * C2062;
    const double C2398 = C59 * C2061;
    const double C2397 = C59 * C2060;
    const double C2396 = C91 * C2059;
    const double C2395 = C2057 + C1669;
    const double C2394 = C59 * C2056;
    const double C2393 = C59 * C2055;
    const double C2392 = C59 * C2054;
    const double C2391 = C102 + C2053;
    const double C2390 = C2052 + C300;
    const double C2389 = C2051 + C1660;
    const double C2388 = C59 * C2050;
    const double C2387 = C2049 - C85;
    const double C3192 = C2386 + C2890;
    const double C3191 = C1286 * C2612;
    const double C3190 = C2385 + C2889;
    const double C3189 = C2887 + C2888;
    const double C3188 = C2884 + C2885;
    const double C3187 = C2384 + C2883;
    const double C3186 = C2383 + C2881;
    const double C3185 = C2879 + C2880;
    const double C3184 = C2876 + C2877;
    const double C3183 = C2874 + C2875;
    const double C3182 = C2871 + C2872;
    const double C3181 = C2869 + C2870;
    const double C3180 = C2866 + C2867;
    const double C3179 = C2382 + C2865;
    const double C3178 = C2381 + C2863;
    const double C3177 = C2862 + C2380;
    const double C3176 = C2860 + C2379;
    const double C3175 = C2858 + C2859;
    const double C3174 = C2856 + C2857;
    const double C3173 = C1286 * C2504;
    const double C3172 = C2376 + C2855;
    const double C3171 = C1286 * C2502;
    const double C3170 = C1528 * C2424;
    const double C3169 = C2375 + C2852;
    const double C3168 = C2849 + C2850;
    const double C3167 = C2846 + C2847;
    const double C3166 = C2843 + C2844;
    const double C3165 = C2374 + C2841;
    const double C3164 = C2838 + C2839;
    const double C3163 = C2836 + C2837;
    const double C3162 = C1528 * C2407;
    const double C3161 = C2833 + C2370;
    const double C3160 = C2831 + C2369;
    const double C3159 = C2828 + C2829;
    const double C3158 = C2825 + C2826;
    const double C3157 = C2823 + C2368;
    const double C3156 = C2821 + C2367;
    const double C3155 = C2818 + C2819;
    const double C3154 = C1528 * C2387;
    const double C3153 = C1198 * C2431;
    const double C3152 = C1641 * C2502;
    const double C3151 = C1651 * C2424;
    const double C3150 = C2808 + C2809;
    const double C3149 = C2805 + C2806;
    const double C3148 = C2802 + C2803;
    const double C3147 = C1651 * C2407;
    const double C3146 = C2799 + C2361;
    const double C3145 = C2796 + C2797;
    const double C3144 = C2794 + C2360;
    const double C3143 = C1651 * C2387;
    const double C3142 = C2358 + C2791;
    const double C3141 = C2789 + C2790;
    const double C3140 = C2357 + C2788;
    const double C3139 = C2785 + C2786;
    const double C3138 = C2783 + C2784;
    const double C3137 = C2781 + C2782;
    const double C3136 = C2356 + C2779;
    const double C3135 = C2777 + C2778;
    const double C3134 = C2355 + C2776;
    const double C3133 = C2773 + C2774;
    const double C3132 = C2771 + C2772;
    const double C3131 = C2769 + C2770;
    const double C3130 = C1198 * C2447;
    const double C3129 = C2767 + C2768;
    const double C3128 = C1531 * C2601;
    const double C3127 = C1198 * C2445;
    const double C3126 = C2765 + C2766;
    const double C3125 = C2762 + C2763;
    const double C3124 = C2760 + C2761;
    const double C3123 = C2758 + C2759;
    const double C3122 = C2354 + C2756;
    const double C3121 = C2754 + C2755;
    const double C3120 = C2353 + C2753;
    const double C3119 = C2751 + C2352;
    const double C3118 = C2750 + C2351;
    const double C3117 = C2749 + C2350;
    const double C3116 = C2746 + C2747;
    const double C3115 = C2745 + C2349;
    const double C3114 = C2742 + C2743;
    const double C3113 = C2346 + C2741;
    const double C3112 = C1198 * C2424;
    const double C3111 = C2738 + C2739;
    const double C3110 = C2345 + C2737;
    const double C3109 = C2735 + C2736;
    const double C3108 = C2733 + C2734;
    const double C3107 = C2731 + C2732;
    const double C3106 = C2729 + C2730;
    const double C3105 = C2727 + C2728;
    const double C3104 = C2344 + C2726;
    const double C3103 = C2724 + C2725;
    const double C3102 = C2723 + C2343;
    const double C3101 = C1198 * C2407;
    const double C3100 = C2721 + C2339;
    const double C3099 = C2720 + C2338;
    const double C3098 = C2719 + C2337;
    const double C3097 = C2717 + C2718;
    const double C3096 = C2715 + C2716;
    const double C3095 = C2713 + C2714;
    const double C3094 = C2712 + C2336;
    const double C3093 = C2711 + C2335;
    const double C3092 = C2710 + C2334;
    const double C3091 = C1531 * C2467;
    const double C3090 = C1198 * C2389;
    const double C3089 = C2708 + C2709;
    const double C3088 = C1198 * C2387;
    const double C3087 = C96 * C2427;
    const double C3086 = C97 * C2706;
    const double C3085 = C97 * C2705;
    const double C3084 = C975 * C2502;
    const double C3083 = C973 * C2424;
    const double C3082 = C97 * C2615;
    const double C3081 = C1630 * C2680;
    const double C3080 = C2700 + C2701;
    const double C3079 = C1630 * C2679;
    const double C3078 = C2697 + C2698;
    const double C3077 = C1630 * C2678;
    const double C3076 = C2694 + C2695;
    const double C3075 = C973 * C2407;
    const double C3074 = C2689 + C2320;
    const double C3073 = C1630 * C2677;
    const double C3072 = C2686 + C2687;
    const double C3071 = C1630 * C2676;
    const double C3070 = C2684 + C2317;
    const double C3069 = C973 * C2387;
    const double C3068 = C2681 + C2014;
    const double C3067 = C2304 + C2675;
    const double C3066 = C2673 + C2674;
    const double C3065 = C2303 + C2672;
    const double C3064 = C2670 + C2671;
    const double C3063 = C2668 + C2669;
    const double C3062 = C2666 + C2667;
    const double C3061 = C2302 + C2665;
    const double C3060 = C2664 + C2301;
    const double C3059 = C2663 + C2589;
    const double C3058 = C2298 + C2662;
    const double C3057 = C806 * C2424;
    const double C3056 = C2297 + C2660;
    const double C3055 = C2658 + C2659;
    const double C3054 = C2656 + C2657;
    const double C3053 = C2654 + C2655;
    const double C3052 = C2296 + C2653;
    const double C3051 = C2651 + C2652;
    const double C3050 = C2650 + C2484;
    const double C3049 = C806 * C2407;
    const double C3048 = C2649 + C2292;
    const double C3047 = C2648 + C2291;
    const double C3046 = C2646 + C2647;
    const double C3045 = C2644 + C2645;
    const double C3044 = C2643 + C2290;
    const double C3043 = C2642 + C2289;
    const double C3042 = C2640 + C2641;
    const double C3041 = C806 * C2387;
    const double C3040 = C97 * C2410;
    const double C3039 = C96 * C2638;
    const double C3038 = C2635 + C2636;
    const double C3037 = C2632 + C2633;
    const double C3036 = C2629 + C2630;
    const double C3035 = C97 * C2614;
    const double C3034 = C2626 + C2627;
    const double C3033 = C454 * C2447;
    const double C3032 = C455 * C2601;
    const double C3031 = C454 * C2445;
    const double C3030 = C2623 + C2624;
    const double C3029 = C2620 + C2621;
    const double C3028 = C2618 + C2282;
    const double C3027 = C2616 + C2281;
    const double C3026 = C91 * C2427;
    const double C3025 = C2587 * C1624;
    const double C3024 = C96 * C2615;
    const double C3023 = C2583 * C1624;
    const double C3022 = C96 * C2614;
    const double C3021 = C91 * C2410;
    const double C3020 = C2578 * C1624;
    const double C3019 = C2575 * C1624;
    const double C3018 = C1617 * C2612;
    const double C3017 = C2271 + C2611;
    const double C3016 = C2608 + C2609;
    const double C3015 = C2266 + C2606;
    const double C3014 = C210 + C2605;
    const double C3013 = C2602 + C2603;
    const double C3012 = C2410 * C112;
    const double C3011 = C2598 + C2599;
    const double C3010 = C176 + C2597;
    const double C3009 = C2594 + C2595;
    const double C3008 = C2256 + C2592;
    const double C3007 = C2590 + C2254;
    const double C3006 = C2588 + C2589;
    const double C3005 = C2427 * C108;
    const double C3004 = C221 + C2586;
    const double C3003 = C59 * C2585;
    const double C3002 = C185 + C2584;
    const double C3001 = C59 * C2582;
    const double C3000 = C2581 + C1914;
    const double C2999 = C59 * C2580;
    const double C2998 = C172 + C2579;
    const double C2997 = C546 + C2577;
    const double C2996 = C59 * C2576;
    const double C2995 = C2237 + C2574;
    const double C2994 = C2235 + C2573;
    const double C2993 = C2570 + C2571;
    const double C2992 = C2568 + C2569;
    const double C2991 = C2230 + C2567;
    const double C2990 = C2228 + C2566;
    const double C2989 = C2563 + C2564;
    const double C2988 = C2561 + C2562;
    const double C2987 = C2558 + C2559;
    const double C2986 = C2556 + C2557;
    const double C2985 = C2553 + C2554;
    const double C2984 = C2551 + C2552;
    const double C2983 = C2219 + C2550;
    const double C2982 = C2217 + C2549;
    const double C2981 = C2547 + C2216;
    const double C2980 = C2546 + C2215;
    const double C2979 = C454 * C2431;
    const double C2978 = C2544 + C2545;
    const double C2977 = C2541 + C2542;
    const double C2976 = C2210 + C2540;
    const double C2975 = C454 * C2424;
    const double C2974 = C2537 + C2538;
    const double C2973 = C2209 + C2536;
    const double C2972 = C2534 + C2535;
    const double C2971 = C2532 + C2533;
    const double C2970 = C2530 + C2531;
    const double C2969 = C2528 + C2529;
    const double C2968 = C2526 + C2527;
    const double C2967 = C2208 + C2525;
    const double C2966 = C2523 + C2524;
    const double C2965 = C2522 + C2207;
    const double C2964 = C454 * C2407;
    const double C2963 = C2520 + C2203;
    const double C2962 = C2519 + C2202;
    const double C2961 = C2518 + C2201;
    const double C2960 = C2516 + C2517;
    const double C2959 = C2514 + C2515;
    const double C2958 = C2512 + C2513;
    const double C2957 = C2511 + C2200;
    const double C2956 = C2510 + C2199;
    const double C2955 = C2509 + C2198;
    const double C2954 = C97 * C2391;
    const double C2953 = C455 * C2467;
    const double C2952 = C454 * C2389;
    const double C2951 = C2506 + C2507;
    const double C2950 = C454 * C2387;
    const double C2949 = C96 * C2391;
    const double C2948 = C1617 * C2504;
    const double C2947 = C2188 + C2503;
    const double C2946 = C1617 * C2502;
    const double C2945 = C380 * C2424;
    const double C2944 = C2182 + C2499;
    const double C2943 = C2496 + C2497;
    const double C2942 = C2493 + C2494;
    const double C2941 = C2490 + C2491;
    const double C2940 = C2171 + C2488;
    const double C2939 = C2485 + C2486;
    const double C2938 = C2483 + C2484;
    const double C2937 = C380 * C2407;
    const double C2936 = C2480 + C2162;
    const double C2935 = C2478 + C2160;
    const double C2934 = C2475 + C2476;
    const double C2933 = C2472 + C2473;
    const double C2932 = C2470 + C2153;
    const double C2931 = C2468 + C2151;
    const double C2930 = C2391 * C112;
    const double C2929 = C2464 + C2465;
    const double C2928 = C380 * C2387;
    const double C2927 = C2462 * C1615;
    const double C2926 = C2461 * C1615;
    const double C2925 = C2459 * C1615;
    const double C2924 = C2457 * C1615;
    const double C2923 = C2455 * C1615;
    const double C2922 = C2454 * C1615;
    const double C2921 = C2452 * C1615;
    const double C2920 = C2450 * C1615;
    const double C2919 = C59 * C2447;
    const double C2918 = C59 * C2445;
    const double C2917 = C2442 * C1615;
    const double C2916 = C2440 * C1615;
    const double C2915 = C2438 * C1615;
    const double C2914 = C2437 * C1615;
    const double C2913 = C2435 * C1615;
    const double C2912 = C2433 * C1615;
    const double C2911 = C2391 * C108;
    const double C2910 = C59 * C2431;
    const double C2909 = C2430 * C1615;
    const double C2908 = C2428 * C1615;
    const double C2907 = C2427 * C98;
    const double C2906 = C59 * C2424;
    const double C2905 = C188 + C2423;
    const double C2904 = C221 + C2419;
    const double C2903 = C59 * C2418;
    const double C2902 = C182 + C2414;
    const double C2901 = C2410 * C98;
    const double C2900 = C59 * C2407;
    const double C2899 = C210 + C2406;
    const double C2898 = C59 * C2405;
    const double C2897 = C221 + C2401;
    const double C2896 = C59 * C2400;
    const double C2895 = C210 + C2396;
    const double C2894 = C59 * C2395;
    const double C2893 = C2390 + C1662;
    const double C2892 = C59 * C2389;
    const double C2891 = C59 * C2387;
    const double C3362 = C3190 + C3191;
    const double C3361 = C3188 + C2886;
    const double C3360 = C3186 + C2882;
    const double C3359 = C3184 + C2878;
    const double C3358 = C3182 + C2873;
    const double C3357 = C3180 + C2868;
    const double C3356 = C3178 + C2864;
    const double C3355 = C3176 + C2861;
    const double C3354 = C3172 + C3173;
    const double C3353 = C3170 + C2854;
    const double C3352 = C3169 + C2853;
    const double C3351 = C3168 + C2851;
    const double C3350 = C3167 + C2848;
    const double C3349 = C3166 + C2845;
    const double C3348 = C3165 + C2842;
    const double C3347 = C3164 + C2840;
    const double C3346 = C3162 + C2371;
    const double C3345 = C3161 + C2834;
    const double C3344 = C3160 + C2832;
    const double C3343 = C3159 + C2830;
    const double C3342 = C3158 + C2827;
    const double C3341 = C3157 + C2824;
    const double C3340 = C3156 + C2822;
    const double C3339 = C3155 + C2820;
    const double C3338 = C3154 + C2366;
    const double C3337 = C3151 + C2811;
    const double C3336 = C3150 + C2810;
    const double C3335 = C3149 + C2807;
    const double C3334 = C3148 + C2804;
    const double C3333 = C3147 + C2362;
    const double C3332 = C3146 + C2800;
    const double C3331 = C3145 + C2798;
    const double C3330 = C3144 + C2795;
    const double C3329 = C3143 + C2359;
    const double C3328 = C3127 + C3128;
    const double C3327 = C3112 + C2740;
    const double C3326 = C3101 + C2340;
    const double C3325 = C3090 + C3091;
    const double C3324 = C3088 + C2333;
    const double C3323 = C97 * C3087;
    const double C3322 = C97 * C3004;
    const double C3321 = C3086 - C545;
    const double C3320 = C3085 - C545;
    const double C3319 = C2997 * C112;
    const double C3318 = C97 * C3026;
    const double C3317 = C1630 * C3068;
    const double C3316 = C3083 + C2703;
    const double C3315 = C3082 - C245;
    const double C3314 = C3080 + C2702;
    const double C3313 = C97 * C2904;
    const double C3312 = C3078 + C2699;
    const double C3311 = C3076 + C2696;
    const double C3310 = C3075 + C2321;
    const double C3309 = C3074 + C2690;
    const double C3308 = C97 * C2897;
    const double C3307 = C3072 + C2688;
    const double C3306 = C2895 * C112;
    const double C3305 = C3070 + C2685;
    const double C3304 = C3069 + C2316;
    const double C3303 = C96 * C3026;
    const double C3302 = C96 * C2904;
    const double C3301 = C3021 * C112;
    const double C3300 = C2899 * C112;
    const double C3299 = C96 * C2897;
    const double C3298 = C2949 * C112;
    const double C3297 = C97 * C3010;
    const double C3296 = C3067 + C3018;
    const double C3295 = C3066 + C2610;
    const double C3294 = C3065 + C2607;
    const double C3293 = C3064 + C2604;
    const double C3292 = C3063 + C2600;
    const double C3291 = C3062 + C2596;
    const double C3290 = C3061 + C2593;
    const double C3289 = C3060 + C2591;
    const double C3288 = C3058 + C2948;
    const double C3287 = C3057 + C2661;
    const double C3286 = C3056 + C2500;
    const double C3285 = C3055 + C2498;
    const double C3284 = C3054 + C2495;
    const double C3283 = C3053 + C2492;
    const double C3282 = C3052 + C2489;
    const double C3281 = C3051 + C2487;
    const double C3280 = C3049 + C2293;
    const double C3279 = C3048 + C2481;
    const double C3278 = C3047 + C2479;
    const double C3277 = C3046 + C2477;
    const double C3276 = C3045 + C2474;
    const double C3275 = C3044 + C2471;
    const double C3274 = C3043 + C2469;
    const double C3273 = C3042 + C2466;
    const double C3272 = C3041 + C2288;
    const double C3271 = C96 * C3014;
    const double C3270 = C96 * C3040;
    const double C3269 = C3039 - C861;
    const double C3268 = C3035 - C245;
    const double C3267 = C97 * C3021;
    const double C3266 = C3031 + C3032;
    const double C3265 = C97 * C2899;
    const double C3264 = C3026 * C108;
    const double C3263 = C3024 - C252;
    const double C3262 = C3003 * C1624;
    const double C3261 = C2904 * C108;
    const double C3260 = C3022 - C252;
    const double C3259 = C3001 * C1624;
    const double C3258 = C96 * C3021;
    const double C3257 = C96 * C2899;
    const double C3256 = C2999 * C1624;
    const double C3255 = C2897 * C108;
    const double C3254 = C96 * C2895;
    const double C3253 = C2996 * C1624;
    const double C3252 = C3017 + C3018;
    const double C3251 = C3016 + C2610;
    const double C3250 = C97 * C3002;
    const double C3249 = C3015 + C2607;
    const double C3248 = C97 * C3014;
    const double C3247 = C3013 + C2604;
    const double C3246 = C226 + C3012;
    const double C3245 = C3011 + C2600;
    const double C3244 = C96 * C3010;
    const double C3243 = C3009 + C2596;
    const double C3242 = C97 * C2998;
    const double C3241 = C3008 + C2593;
    const double C3240 = C3007 + C2591;
    const double C3239 = C233 + C3005;
    const double C3238 = C96 * C3004;
    const double C3237 = C96 * C3002;
    const double C3236 = C59 * C3000;
    const double C3235 = C96 * C2998;
    const double C3234 = C96 * C2997;
    const double C3233 = C97 * C2949;
    const double C3232 = C2975 + C2539;
    const double C3231 = C2964 + C2204;
    const double C3230 = C91 * C2954;
    const double C3229 = C2952 + C2953;
    const double C3228 = C2950 + C2195;
    const double C3227 = C91 * C2949;
    const double C3226 = C2947 + C2948;
    const double C3225 = C2945 + C2501;
    const double C3224 = C97 * C2905;
    const double C3223 = C2944 + C2500;
    const double C3222 = C2943 + C2498;
    const double C3221 = C2942 + C2495;
    const double C3220 = C2941 + C2492;
    const double C3219 = C97 * C2902;
    const double C3218 = C2940 + C2489;
    const double C3217 = C2939 + C2487;
    const double C3216 = C2937 + C2164;
    const double C3215 = C2936 + C2481;
    const double C3214 = C2935 + C2479;
    const double C3213 = C2934 + C2477;
    const double C3212 = C2933 + C2474;
    const double C3211 = C2932 + C2471;
    const double C3210 = C2931 + C2469;
    const double C3209 = C198 + C2930;
    const double C3208 = C2929 + C2466;
    const double C3207 = C2928 + C2145;
    const double C3206 = C96 * C2905;
    const double C3205 = C96 * C2902;
    const double C3204 = C2919 * C1615;
    const double C3203 = C2918 * C1615;
    const double C3202 = C198 + C2911;
    const double C3201 = C233 + C2907;
    const double C3200 = C91 * C2905;
    const double C3199 = C91 * C2904;
    const double C3198 = C91 * C2902;
    const double C3197 = C226 + C2901;
    const double C3196 = C91 * C2899;
    const double C3195 = C91 * C2897;
    const double C3194 = C91 * C2895;
    const double C3193 = C59 * C2893;
    const double C3462 = C3353 + C3171;
    const double C3461 = C3346 + C2835;
    const double C3460 = C3338 + C2817;
    const double C3459 = C3337 + C3152;
    const double C3458 = C3336 + C3081;
    const double C3457 = C3335 + C3079;
    const double C3456 = C3334 + C3077;
    const double C3455 = C3333 + C2801;
    const double C3454 = C3332 + C2691;
    const double C3453 = C3331 + C3073;
    const double C3452 = C3330 + C3071;
    const double C3451 = C3329 + C2793;
    const double C3450 = C2048 + C3323;
    const double C3449 = C583 + C3322;
    const double C3448 = C97 * C3321;
    const double C3447 = C97 * C3320;
    const double C3446 = C572 + C3319;
    const double C3445 = C2036 + C3318;
    const double C3444 = C3316 + C3084;
    const double C3443 = C97 * C3315;
    const double C3442 = C3314 + C3081;
    const double C3441 = C267 + C3313;
    const double C3440 = C3312 + C3079;
    const double C3439 = C3311 + C3077;
    const double C3438 = C3310 + C2692;
    const double C3437 = C3309 + C2691;
    const double C3436 = C267 + C3308;
    const double C3435 = C3307 + C3073;
    const double C3434 = C243 + C3306;
    const double C3433 = C3305 + C3071;
    const double C3432 = C3304 + C2682;
    const double C3431 = C97 * C3303;
    const double C3430 = C97 * C3263;
    const double C3429 = C97 * C3302;
    const double C3428 = C97 * C3268;
    const double C3427 = C704 + C3301;
    const double C3426 = C254 + C3300;
    const double C3425 = C97 * C3299;
    const double C3424 = C428 + C3298;
    const double C3423 = C97 * C3246;
    const double C3422 = C2002 + C3297;
    const double C3421 = C97 * C3209;
    const double C3420 = C3287 + C2946;
    const double C3419 = C3280 + C2482;
    const double C3418 = C3272 + C2463;
    const double C3417 = C900 + C3271;
    const double C3416 = C1989 + C3270;
    const double C3415 = C96 * C3269;
    const double C3414 = C96 * C3268;
    const double C3413 = C96 * C3267;
    const double C3412 = C96 * C3265;
    const double C3411 = C97 * C3202;
    const double C3410 = C711 + C3264;
    const double C3409 = C96 * C3263;
    const double C3408 = C258 + C3261;
    const double C3407 = C96 * C3260;
    const double C3406 = C1972 + C3258;
    const double C3405 = C3236 * C1624;
    const double C3404 = C267 + C3257;
    const double C3403 = C250 + C3255;
    const double C3402 = C267 + C3254;
    const double C3401 = C97 * C3239;
    const double C3400 = C3250 - C597;
    const double C3399 = C1949 + C3248;
    const double C3398 = C96 * C3246;
    const double C3397 = C3244 - C903;
    const double C3396 = C3242 - C597;
    const double C3395 = C3202 * C112;
    const double C3394 = C96 * C3239;
    const double C3393 = C1923 + C3238;
    const double C3392 = C1919 + C3237;
    const double C3391 = C1910 + C3235;
    const double C3390 = C1907 + C3234;
    const double C3389 = C96 * C3202;
    const double C3388 = C96 * C3201;
    const double C3387 = C97 * C3197;
    const double C3386 = C91 * C3233;
    const double C3385 = C1872 + C3230;
    const double C3384 = C1868 + C3227;
    const double C3383 = C97 * C3201;
    const double C3382 = C3225 + C2946;
    const double C3381 = C3224 - C272;
    const double C3380 = C3219 - C272;
    const double C3379 = C3197 * C112;
    const double C3378 = C3216 + C2482;
    const double C3377 = C91 * C3209;
    const double C3376 = C3207 + C2463;
    const double C3375 = C3201 * C108;
    const double C3374 = C3206 - C277;
    const double C3373 = C3205 - C277;
    const double C3372 = C96 * C3197;
    const double C3371 = C91 * C3202;
    const double C3370 = C91 * C3201;
    const double C3369 = C1719 + C3200;
    const double C3368 = C1712 + C3199;
    const double C3367 = C1703 + C3198;
    const double C3366 = C91 * C3197;
    const double C3365 = C1689 + C3196;
    const double C3364 = C1680 + C3195;
    const double C3363 = C1671 + C3194;
    const double C3565 = C3459 + C3317;
    const double C3564 = C3455 + C2693;
    const double C3563 = C3451 + C2683;
    const double C3562 = C97 * C3450;
    const double C3561 = C97 * C3449;
    const double C3560 = C2043 + C3448;
    const double C3559 = C96 * C3422;
    const double C3558 = C2040 + C3447;
    const double C3557 = C97 * C3446;
    const double C3556 = C97 * C3424;
    const double C3555 = C97 * C3445;
    const double C3554 = C3444 + C3317;
    const double C3553 = C2033 + C3443;
    const double C3552 = C97 * C3441;
    const double C3551 = C97 * C3427;
    const double C3550 = C3438 + C2693;
    const double C3549 = C97 * C3426;
    const double C3548 = C97 * C3436;
    const double C3547 = C97 * C3434;
    const double C3546 = C3432 + C2683;
    const double C3545 = C2022 + C3431;
    const double C3544 = C716 + C3430;
    const double C3543 = C3429 - C429;
    const double C3542 = C2018 + C3428;
    const double C3541 = C96 * C3427;
    const double C3540 = C96 * C3426;
    const double C3539 = C3425 - C429;
    const double C3538 = C3402 * C112;
    const double C3537 = C91 * C3424;
    const double C3536 = C97 * C3399;
    const double C3535 = C2005 + C3423;
    const double C3534 = C1995 + C3421;
    const double C3533 = C97 * C3392;
    const double C3532 = C96 * C3417;
    const double C3531 = C96 * C3416;
    const double C3530 = C1986 + C3415;
    const double C3529 = C97 * C3391;
    const double C3528 = C97 * C3410;
    const double C3527 = C97 * C3408;
    const double C3526 = C992 + C3414;
    const double C3525 = C1982 + C3413;
    const double C3524 = C3412 - C458;
    const double C3523 = C97 * C3403;
    const double C3522 = C91 * C3411;
    const double C3521 = C96 * C3410;
    const double C3520 = C1977 + C3409;
    const double C3519 = C96 * C3408;
    const double C3518 = C1974 + C3407;
    const double C3517 = C96 * C3406;
    const double C3516 = C96 * C3404;
    const double C3515 = C96 * C3403;
    const double C3514 = C96 * C3402;
    const double C3513 = C1963 + C3401;
    const double C3512 = C97 * C3393;
    const double C3511 = C97 * C3400;
    const double C3510 = C96 * C3399;
    const double C3509 = C1944 + C3398;
    const double C3508 = C96 * C3397;
    const double C3507 = C97 * C3396;
    const double C3506 = C3390 * C112;
    const double C3505 = C353 + C3395;
    const double C3504 = C1926 + C3394;
    const double C3503 = C96 * C3393;
    const double C3502 = C96 * C3390;
    const double C3501 = C1903 + C3389;
    const double C3500 = C97 * C3388;
    const double C3499 = C97 * C3374;
    const double C3498 = C96 * C3368;
    const double C3497 = C96 * C3380;
    const double C3496 = C96 * C3387;
    const double C3495 = C97 * C3365;
    const double C3494 = C96 * C3364;
    const double C3493 = C1878 + C3386;
    const double C3492 = C97 * C3369;
    const double C3491 = C97 * C3367;
    const double C3490 = C91 * C3385;
    const double C3489 = C96 * C3369;
    const double C3488 = C96 * C3367;
    const double C3487 = C91 * C3384;
    const double C3486 = C1865 + C3383;
    const double C3485 = C97 * C3381;
    const double C3484 = C97 * C3368;
    const double C3483 = C97 * C3380;
    const double C3482 = C280 + C3379;
    const double C3481 = C3365 * C112;
    const double C3480 = C97 * C3364;
    const double C3479 = C3363 * C112;
    const double C3478 = C1806 + C3377;
    const double C3477 = C283 + C3375;
    const double C3476 = C96 * C3374;
    const double C3475 = C3368 * C108;
    const double C3474 = C96 * C3373;
    const double C3473 = C1770 + C3372;
    const double C3472 = C96 * C3365;
    const double C3471 = C3364 * C108;
    const double C3470 = C96 * C3363;
    const double C3469 = C1737 + C3371;
    const double C3468 = C1726 + C3370;
    const double C3467 = C91 * C3368;
    const double C3466 = C1696 + C3366;
    const double C3465 = C91 * C3365;
    const double C3464 = C91 * C3364;
    const double C3463 = C91 * C3363;
    const double C3667 = C2332 + C3562;
    const double C3666 = C2045 + C3561;
    const double C3665 = C97 * C3560;
    const double C3664 = C96 * C3535;
    const double C3663 = C3559 - C919;
    const double C3662 = C97 * C3558;
    const double C3661 = C2327 + C3557;
    const double C3660 = C2037 + C3556;
    const double C3659 = C2326 + C3555;
    const double C3658 = C97 * C3553;
    const double C3657 = C2031 + C3552;
    const double C3656 = C97 * C3542;
    const double C3655 = C2028 + C3551;
    const double C3654 = C2027 + C3549;
    const double C3653 = C2026 + C3548;
    const double C3652 = C2318 + C3547;
    const double C3651 = C91 * C3534;
    const double C3650 = C97 * C3545;
    const double C3649 = C97 * C3544;
    const double C3648 = C97 * C3543;
    const double C3647 = C96 * C3542;
    const double C3646 = C2017 + C3541;
    const double C3645 = C3540 - C396;
    const double C3644 = C97 * C3539;
    const double C3643 = C712 + C3538;
    const double C3642 = C2015 + C3537;
    const double C3641 = C2311 + C3536;
    const double C3640 = C97 * C3504;
    const double C3639 = C3533 - C617;
    const double C3638 = C1991 + C3532;
    const double C3637 = C2286 + C3531;
    const double C3636 = C96 * C3530;
    const double C3635 = C3529 - C617;
    const double C3634 = C97 * C3501;
    const double C3633 = C1984 + C3528;
    const double C3632 = C97 * C3520;
    const double C3631 = C3527 - C354;
    const double C3630 = C96 * C3526;
    const double C3629 = C96 * C3525;
    const double C3628 = C96 * C3524;
    const double C3627 = C3523 - C354;
    const double C3626 = C1979 + C3522;
    const double C3625 = C1978 + C3521;
    const double C3624 = C96 * C3520;
    const double C3623 = C1975 + C3519;
    const double C3622 = C96 * C3518;
    const double C3621 = C2278 + C3517;
    const double C3620 = C1969 + C3516;
    const double C3619 = C1967 + C3515;
    const double C3618 = C1966 + C3514;
    const double C3617 = C91 * C3501;
    const double C3616 = C97 * C3513;
    const double C3615 = C621 + C3512;
    const double C3614 = C1953 + C3511;
    const double C3613 = C922 + C3510;
    const double C3612 = C96 * C3509;
    const double C3611 = C1938 + C3508;
    const double C3610 = C1934 + C3507;
    const double C3609 = C608 + C3506;
    const double C3608 = C1617 * C3505;
    const double C3607 = C2249 + C3503;
    const double C3606 = C2242 + C3502;
    const double C3605 = C1900 + C3500;
    const double C3604 = C357 + C3499;
    const double C3603 = C97 * C3498;
    const double C3602 = C399 + C3497;
    const double C3601 = C1889 + C3496;
    const double C3600 = C96 * C3495;
    const double C3599 = C97 * C3494;
    const double C3598 = C91 * C3493;
    const double C3597 = C97 * C3468;
    const double C3596 = C3492 - C298;
    const double C3595 = C3491 - C298;
    const double C3594 = C97 * C3466;
    const double C3593 = C2197 + C3490;
    const double C3592 = C96 * C3468;
    const double C3591 = C3489 - C299;
    const double C3590 = C3488 - C299;
    const double C3589 = C96 * C3466;
    const double C3588 = C2194 + C3487;
    const double C3587 = C97 * C3486;
    const double C3586 = C1853 + C3485;
    const double C3585 = C303 + C3484;
    const double C3584 = C1837 + C3483;
    const double C3583 = C1617 * C3482;
    const double C3582 = C293 + C3481;
    const double C3581 = C303 + C3480;
    const double C3580 = C289 + C3479;
    const double C3579 = C91 * C3478;
    const double C3578 = C59 * C3477;
    const double C3577 = C1791 + C3476;
    const double C3576 = C294 + C3475;
    const double C3575 = C1778 + C3474;
    const double C3574 = C96 * C3473;
    const double C3573 = C303 + C3472;
    const double C3572 = C291 + C3471;
    const double C3571 = C303 + C3470;
    const double C3570 = C91 * C3469;
    const double C3569 = C2086 + C3467;
    const double C3568 = C2070 + C3465;
    const double C3567 = C2064 + C3464;
    const double C3566 = C2058 + C3463;
    const double C3779 = C1286 * C3646;
    const double C3778 = C1286 * C3645;
    const double C3777 = C1286 * C3643;
    const double C3776 = C1286 * C3642;
    const double C3775 = C1531 * C3605;
    const double C3774 = C1531 * C3604;
    const double C3773 = C1531 * C3602;
    const double C3772 = C1531 * C3601;
    const double C3771 = C1531 * C3633;
    const double C3770 = C1531 * C3631;
    const double C3769 = C1531 * C3627;
    const double C3768 = C1531 * C3626;
    const double C3767 = C97 * C3667;
    const double C3766 = C97 * C3666;
    const double C3765 = C2329 + C3665;
    const double C3764 = C96 * C3641;
    const double C3763 = C2041 + C3664;
    const double C3762 = C1630 * C3663;
    const double C3761 = C2328 + C3662;
    const double C3760 = C1630 * C3661;
    const double C3759 = C1630 * C3660;
    const double C3758 = C97 * C3659;
    const double C3757 = C2324 + C3658;
    const double C3756 = C97 * C3657;
    const double C3755 = C2322 + C3656;
    const double C3754 = C1630 * C3655;
    const double C3753 = C1630 * C3654;
    const double C3752 = C97 * C3653;
    const double C3751 = C1630 * C3652;
    const double C3750 = C2023 + C3651;
    const double C3749 = C2315 + C3650;
    const double C3748 = C2020 + C3649;
    const double C3747 = C2019 + C3648;
    const double C3746 = C995 + C3647;
    const double C3745 = C1617 * C3646;
    const double C3744 = C1617 * C3645;
    const double C3743 = C2016 + C3644;
    const double C3742 = C1617 * C3643;
    const double C3741 = C1617 * C3642;
    const double C3740 = C1992 + C3640;
    const double C3739 = C97 * C3607;
    const double C3738 = C96 * C3638;
    const double C3737 = C96 * C3637;
    const double C3736 = C2284 + C3636;
    const double C3735 = C97 * C3606;
    const double C3734 = C455 * C3633;
    const double C3733 = C725 + C3632;
    const double C3732 = C455 * C3631;
    const double C3731 = C1983 + C3630;
    const double C3730 = C2283 + C3629;
    const double C3729 = C1980 + C3628;
    const double C3728 = C455 * C3627;
    const double C3727 = C97 * C3618;
    const double C3726 = C455 * C3626;
    const double C3725 = C59 * C3625;
    const double C3724 = C2280 + C3624;
    const double C3723 = C59 * C3623;
    const double C3722 = C2279 + C3622;
    const double C3721 = C96 * C3621;
    const double C3720 = C96 * C3620;
    const double C3719 = C59 * C3619;
    const double C3718 = C96 * C3618;
    const double C3717 = C1964 + C3617;
    const double C3716 = C2274 + C3616;
    const double C3715 = C97 * C3615;
    const double C3714 = C1617 * C3614;
    const double C3713 = C96 * C3613;
    const double C3712 = C2263 + C3612;
    const double C3711 = C1617 * C3611;
    const double C3710 = C1617 * C3610;
    const double C3709 = C1617 * C3609;
    const double C3708 = C455 * C3605;
    const double C3707 = C455 * C3604;
    const double C3706 = C3603 - C341;
    const double C3705 = C455 * C3602;
    const double C3704 = C455 * C3601;
    const double C3703 = C3600 - C388;
    const double C3702 = C3599 - C341;
    const double C3701 = C97 * C3571;
    const double C3700 = C2214 + C3598;
    const double C3699 = C1873 + C3597;
    const double C3698 = C97 * C3569;
    const double C3697 = C97 * C3568;
    const double C3696 = C97 * C3567;
    const double C3695 = C97 * C3566;
    const double C3694 = C91 * C3593;
    const double C3693 = C59 * C3592;
    const double C3692 = C59 * C3591;
    const double C3691 = C96 * C3569;
    const double C3690 = C59 * C3590;
    const double C3689 = C1869 + C3589;
    const double C3688 = C96 * C3568;
    const double C3687 = C96 * C3567;
    const double C3686 = C96 * C3566;
    const double C3685 = C91 * C3588;
    const double C3684 = C2192 + C3587;
    const double C3683 = C1617 * C3586;
    const double C3682 = C97 * C3585;
    const double C3681 = C1617 * C3584;
    const double C3680 = C1617 * C3582;
    const double C3679 = C97 * C3581;
    const double C3678 = C1617 * C3580;
    const double C3677 = C2150 + C3579;
    const double C3676 = C3578 * C1615;
    const double C3675 = C59 * C3577;
    const double C3674 = C59 * C3576;
    const double C3673 = C59 * C3575;
    const double C3672 = C2124 + C3574;
    const double C3671 = C96 * C3573;
    const double C3670 = C59 * C3572;
    const double C3669 = C96 * C3571;
    const double C3668 = C2103 + C3570;
    const double C3878 = C1286 * C3749;
    const double C3877 = C1286 * C3748;
    const double C3876 = C1286 * C3747;
    const double C3875 = C1286 * C3746;
    const double C3874 = C3183 + C3779;
    const double C3873 = C3181 + C3778;
    const double C3872 = C1286 * C3743;
    const double C3871 = C3177 + C3777;
    const double C3870 = C3175 + C3776;
    const double C3869 = C2365 + C3775;
    const double C3868 = C2816 + C3774;
    const double C3867 = C1531 * C3706;
    const double C3866 = C2815 + C3773;
    const double C3865 = C2814 + C3772;
    const double C3864 = C1531 * C3703;
    const double C3863 = C1531 * C3702;
    const double C3862 = C1531 * C3701;
    const double C3861 = C1531 * C3700;
    const double C3860 = C2792 + C3771;
    const double C3859 = C1531 * C3733;
    const double C3858 = C2780 + C3770;
    const double C3857 = C1531 * C3731;
    const double C3856 = C1531 * C3730;
    const double C3855 = C1531 * C3729;
    const double C3854 = C2757 + C3769;
    const double C3853 = C1531 * C3727;
    const double C3852 = C2748 + C3768;
    const double C3851 = C2707 + C3767;
    const double C3850 = C2330 + C3766;
    const double C3849 = C1630 * C3765;
    const double C3848 = C925 + C3764;
    const double C3847 = C1630 * C3763;
    const double C3846 = C1630 * C3761;
    const double C3845 = C2704 + C3758;
    const double C3844 = C1630 * C3757;
    const double C3843 = C2323 + C3756;
    const double C3842 = C1630 * C3755;
    const double C3841 = C2319 + C3752;
    const double C3840 = C1630 * C3750;
    const double C3839 = C1617 * C3749;
    const double C3838 = C1617 * C3748;
    const double C3837 = C1617 * C3747;
    const double C3836 = C1617 * C3746;
    const double C3835 = C1617 * C3743;
    const double C3834 = C625 + C3739;
    const double C3833 = C2287 + C3738;
    const double C3832 = C2639 + C3737;
    const double C3831 = C2637 + C3734;
    const double C3830 = C455 * C3733;
    const double C3829 = C2631 + C3732;
    const double C3828 = C455 * C3731;
    const double C3827 = C455 * C3730;
    const double C3826 = C455 * C3729;
    const double C3825 = C2622 + C3728;
    const double C3824 = C455 * C3727;
    const double C3823 = C2617 + C3726;
    const double C3822 = C3725 * C1624;
    const double C3821 = C59 * C3724;
    const double C3820 = C3723 * C1624;
    const double C3819 = C59 * C3722;
    const double C3818 = C2613 + C3721;
    const double C3817 = C2276 + C3720;
    const double C3816 = C3719 * C1624;
    const double C3815 = C2275 + C3718;
    const double C3814 = C59 * C3717;
    const double C3813 = C1617 * C3716;
    const double C3812 = C1957 + C3715;
    const double C3811 = C1948 + C3713;
    const double C3810 = C1617 * C3712;
    const double C3809 = C2239 + C3708;
    const double C3808 = C2572 + C3707;
    const double C3807 = C455 * C3706;
    const double C3806 = C2565 + C3705;
    const double C3805 = C2560 + C3704;
    const double C3804 = C455 * C3703;
    const double C3803 = C455 * C3702;
    const double C3802 = C455 * C3701;
    const double C3801 = C455 * C3700;
    const double C3800 = C306 + C3698;
    const double C3799 = C306 + C3696;
    const double C3798 = C2508 + C3694;
    const double C3797 = C59 * C3691;
    const double C3796 = C59 * C3689;
    const double C3795 = C306 + C3688;
    const double C3794 = C59 * C3687;
    const double C3793 = C306 + C3686;
    const double C3792 = C2505 + C3685;
    const double C3791 = C1617 * C3684;
    const double C3790 = C1845 + C3682;
    const double C3789 = C1819 + C3679;
    const double C3788 = C1617 * C3677;
    const double C3787 = C3675 * C1615;
    const double C3786 = C3674 * C1615;
    const double C3785 = C3673 * C1615;
    const double C3784 = C59 * C3672;
    const double C3783 = C1758 + C3671;
    const double C3782 = C3670 * C1615;
    const double C3781 = C1745 + C3669;
    const double C3780 = C59 * C3668;
    const double C3926 = C3192 + C3878;
    const double C3925 = C3189 + C3877;
    const double C3924 = C3187 + C3876;
    const double C3923 = C3185 + C3875;
    const double C3922 = C3179 + C3872;
    const double C3921 = C2364 + C3867;
    const double C3920 = C2813 + C3864;
    const double C3919 = C2363 + C3863;
    const double C3918 = C2812 + C3862;
    const double C3917 = C3153 + C3861;
    const double C3916 = C2787 + C3859;
    const double C3915 = C2775 + C3857;
    const double C3914 = C3130 + C3856;
    const double C3913 = C2764 + C3855;
    const double C3912 = C2752 + C3853;
    const double C3911 = C1630 * C3851;
    const double C3910 = C1630 * C3850;
    const double C3909 = C1630 * C3848;
    const double C3908 = C1630 * C3845;
    const double C3907 = C1630 * C3843;
    const double C3906 = C1630 * C3841;
    const double C3905 = C2634 + C3830;
    const double C3904 = C2628 + C3828;
    const double C3903 = C3033 + C3827;
    const double C3902 = C2625 + C3826;
    const double C3901 = C2619 + C3824;
    const double C3900 = C3821 * C1624;
    const double C3899 = C3819 * C1624;
    const double C3898 = C59 * C3818;
    const double C3897 = C59 * C3817;
    const double C3896 = C59 * C3815;
    const double C3895 = C3814 * C1624;
    const double C3894 = C1617 * C3812;
    const double C3893 = C1617 * C3811;
    const double C3892 = C2232 + C3807;
    const double C3891 = C2555 + C3804;
    const double C3890 = C2221 + C3803;
    const double C3889 = C2548 + C3802;
    const double C3888 = C2979 + C3801;
    const double C3887 = C59 * C3795;
    const double C3886 = C59 * C3793;
    const double C3885 = C59 * C3792;
    const double C3884 = C1617 * C3790;
    const double C3883 = C1617 * C3789;
    const double C3882 = C3784 * C1615;
    const double C3881 = C59 * C3783;
    const double C3880 = C59 * C3781;
    const double C3879 = C3780 * C1615;
    const double C3931 = C3898 * C1624;
    const double C3930 = C3897 * C1624;
    const double C3929 = C3896 * C1624;
    const double C3928 = C3881 * C1615;
    const double C3927 = C3880 * C1615;
    const double d2nexx200200 =
        (2 * Pi *
         (C2891 * C60 * C61 + C2388 * C60 * C62 + C2892 * C60 * C63 +
          C3193 * C60 * C64 +
          C59 *
              (3 * C301 + C306 + C306 +
               C91 * (2 * C265 + C303 + C303 +
                      C91 * (C198 + C267 + C267 +
                             C91 * (-4 * C159 + C91 * C2391)))) *
              C60 * C65)) /
        C68;
    const double d2nexx200020 =
        (2 * Pi *
         ((C2891 * C328 + C2098 * C329 + C2908) * C331 +
          (C2388 * C328 + C2429 * C329 + C2909) * C332 +
          (C2892 * C328 + C2910 * C329 + C3879) * C1610)) /
        C68;
    const double d2nexx200002 =
        (2 * Pi *
         (C3376 * C60 * C331 + C3208 * C60 * C332 +
          (C380 * C2389 + C381 * C2467 + C3788) * C60 * C1610)) /
        C68;
    const double d2nexx200110 = (2 * Pi *
                                 ((C2891 * C421 + C2098 * C422) * C423 +
                                  (C2388 * C421 + C2429 * C422) * C424 +
                                  (C2892 * C421 + C2910 * C422) * C425 +
                                  (C3193 * C421 + C3885 * C422) * C1618)) /
                                C68;
    const double d2nexx200101 =
        (2 * Pi *
         (C3228 * C60 * C423 + C2951 * C60 * C424 + C3229 * C60 * C425 +
          (C454 * C2893 + C455 * C3798) * C60 * C1618)) /
        C68;
    const double d2nexx200011 = (2 * Pi *
                                 ((C3228 * C421 + C2543 * C422) * C331 +
                                  (C2951 * C421 + C2978 * C422) * C332 +
                                  (C3229 * C421 + C3888 * C422) * C1610)) /
                                C68;
    const double d2nexx020200 =
        (2 * Pi *
         ((C2891 * C506 + C2098 * C507 + C2908) * C1642 +
          (C2388 * C506 + C2429 * C507 + C2909) * C1633 +
          (C2892 * C506 + C2910 * C507 + C3879) * C1610)) /
        C68;
    const double d2nexx020020 =
        (2 * Pi *
         (C2891 * C532 + C2098 * C533 + C2428 * C534 + C2575 * C535 +
          C59 * (3 * C353 + C96 * C3501) * C536) *
         C1442) /
        C68;
    const double d2nexx020002 =
        (2 * Pi *
         (C3376 * C506 + C3006 * C507 +
          (C380 * C2099 + C381 * C1928 + C3608) * C1615) *
         C1442) /
        C68;
    const double d2nexx020110 =
        (2 * Pi *
         ((C2891 * C695 + C2098 * C696 + C2428 * C697 + C3019) * C1574 +
          (C2388 * C695 + C2429 * C696 + C2430 * C697 + C3895) * C1452)) /
        C68;
    const double d2nexx020101 =
        (2 * Pi *
         ((C3228 * C506 + C2543 * C507 + C3027 * C1615) * C1574 +
          (C2951 * C506 + C2978 * C507 + C3823 * C1615) * C1452)) /
        C68;
    const double d2nexx020011 = (2 * Pi *
                                 (C3228 * C695 + C2543 * C696 + C3027 * C697 +
                                  (C454 * C2240 + C455 * C3634) * C1624) *
                                 C1442) /
                                C68;
    const double d2nexx002200 =
        (2 * Pi *
         (C3418 * C60 * C1642 + C3273 * C60 * C1633 +
          (C806 * C2389 + C807 * C2467 + C3788) * C60 * C1610)) /
        C68;
    const double d2nexx002020 =
        (2 * Pi *
         (C3418 * C328 + C3059 * C329 +
          (C806 * C2099 + C807 * C1928 + C3608) * C1615) *
         C1442) /
        C68;
    const double d2nexx002002 =
        (2 * Pi *
         (C849 * C2387 + C850 * C1797 + C851 * C2146 + C852 * C2305 +
          C853 * (3 * C395 + C97 * C3534)) *
         C60 * C1442) /
        C68;
    const double d2nexx002110 =
        (2 * Pi *
         ((C3418 * C421 + C3059 * C422) * C1574 +
          (C3273 * C421 + (C806 * C2100 + C807 * C2213 + C3741) * C422) *
              C1452)) /
        C68;
    const double d2nexx002101 =
        (2 * Pi *
         (C3546 * C60 * C1574 +
          (C973 * C2050 + C974 * C2147 + C975 * C2148 + C3840) * C60 * C1452)) /
        C68;
    const double d2nexx002011 =
        (2 * Pi *
         (C3546 * C421 +
          (C973 * C1728 + C974 * C1874 + C975 * C2253 + C3759) * C422) *
         C1442) /
        C68;
    const double d2nexx110200 = (2 * Pi *
                                 ((C2891 * C1060 + C2098 * C1504) * C1649 +
                                  (C2388 * C1060 + C2429 * C1504) * C1644 +
                                  (C2892 * C1060 + C2910 * C1504) * C1635 +
                                  (C3193 * C1060 + C3885 * C1504) * C1618)) /
                                C68;
    const double d2nexx110020 =
        (2 * Pi *
         ((C2891 * C1650 + C2098 * C1646 + C2428 * C1638 + C3019) * C1090 +
          (C2388 * C1650 + C2429 * C1646 + C2430 * C1638 + C3895) * C1452)) /
        C68;
    const double d2nexx110002 =
        (2 * Pi *
         ((C3376 * C1060 + C3006 * C1504) * C1090 +
          (C3208 * C1060 + (C380 * C2100 + C381 * C2213 + C3741) * C1504) *
              C1452)) /
        C68;
    const double d2nexx110110 =
        (2 * Pi *
         ((C2891 * C1501 + C2098 * C1507 + C2428 * C1134) * C1447 +
          (C2388 * C1501 + C2429 * C1507 + C2430 * C1134) * C1455 +
          (C2892 * C1501 + C2910 * C1507 + C3780 * C1134) * C1137)) /
        C68;
    const double d2nexx110101 = (2 * Pi *
                                 ((C3228 * C1060 + C2543 * C1504) * C1447 +
                                  (C2951 * C1060 + C2978 * C1504) * C1455 +
                                  (C3229 * C1060 + C3888 * C1504) * C1137)) /
                                C68;
    const double d2nexx110011 =
        (2 * Pi *
         ((C3228 * C1501 + C2543 * C1507 + C3027 * C1134) * C1090 +
          (C2951 * C1501 + C2978 * C1507 + C3823 * C1134) * C1452)) /
        C68;
    const double d2nexx101200 =
        (2 * Pi *
         (C3324 * C60 * C1649 + C3089 * C60 * C1644 + C3325 * C60 * C1635 +
          (C1198 * C2893 + C1531 * C3798) * C60 * C1618)) /
        C68;
    const double d2nexx101020 =
        (2 * Pi *
         ((C3324 * C328 + C2744 * C329 + C3115 * C1615) * C1090 +
          (C3089 * C328 + C3116 * C329 + C3852 * C1615) * C1452)) /
        C68;
    const double d2nexx101002 =
        (2 * Pi *
         (C3563 * C60 * C1090 +
          (C1651 * C2050 + C1648 * C2147 + C1641 * C2148 + C3840) * C60 *
              C1452)) /
        C68;
    const double d2nexx101110 = (2 * Pi *
                                 ((C3324 * C421 + C2744 * C422) * C1447 +
                                  (C3089 * C421 + C3116 * C422) * C1455 +
                                  (C3325 * C421 + C3917 * C422) * C1137)) /
                                C68;
    const double d2nexx101101 =
        (2 * Pi *
         (C3460 * C60 * C1447 + C3339 * C60 * C1455 +
          (C1528 * C2389 + C1534 * C2467 + C1286 * C3677) * C60 * C1137)) /
        C68;
    const double d2nexx101011 = (2 * Pi *
                                 ((C3460 * C421 + C3174 * C422) * C1090 +
                                  (C3339 * C421 + C3870 * C422) * C1452)) /
                                C68;
    const double d2nexx011200 = (2 * Pi *
                                 ((C3324 * C1060 + C2744 * C1504) * C1642 +
                                  (C3089 * C1060 + C3116 * C1504) * C1633 +
                                  (C3325 * C1060 + C3917 * C1504) * C1610)) /
                                C68;
    const double d2nexx011020 =
        (2 * Pi *
         (C3324 * C1650 + C2744 * C1646 + C3115 * C1638 +
          (C1198 * C2240 + C1531 * C3634) * C1624) *
         C1442) /
        C68;
    const double d2nexx011002 =
        (2 * Pi *
         (C3563 * C1060 +
          (C1651 * C1728 + C1648 * C1874 + C1641 * C2253 + C3759) * C1504) *
         C1442) /
        C68;
    const double d2nexx011110 =
        (2 * Pi *
         ((C3324 * C1501 + C2744 * C1507 + C3115 * C1134) * C1574 +
          (C3089 * C1501 + C3116 * C1507 + C3852 * C1134) * C1452)) /
        C68;
    const double d2nexx011101 = (2 * Pi *
                                 ((C3460 * C1060 + C3174 * C1504) * C1574 +
                                  (C3339 * C1060 + C3870 * C1504) * C1452)) /
                                C68;
    const double d2nexx011011 =
        (2 * Pi *
         (C3460 * C1501 + C3174 * C1507 +
          (C1528 * C2099 + C1534 * C1928 + C1286 * C3505) * C1134) *
         C1442) /
        C68;
    d2nexx[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(9.) * d2nexx110110;
    d2nexx[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(9.) * d2nexx110011;
    d2nexx[(Ai + 0) * matrix_size + Bi + 2] +=
        std::sqrt(3.0) * d2nexx110002 -
        (std::sqrt(0.75) * d2nexx110020 + std::sqrt(0.75) * d2nexx110200);
    d2nexx[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(9.) * d2nexx110101;
    d2nexx[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(2.25) * d2nexx110200 - std::sqrt(2.25) * d2nexx110020;
    d2nexx[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(9.) * d2nexx011110;
    d2nexx[(Ai + 1) * matrix_size + Bi + 1] += std::sqrt(9.) * d2nexx011011;
    d2nexx[(Ai + 1) * matrix_size + Bi + 2] +=
        std::sqrt(3.0) * d2nexx011002 -
        (std::sqrt(0.75) * d2nexx011020 + std::sqrt(0.75) * d2nexx011200);
    d2nexx[(Ai + 1) * matrix_size + Bi + 3] += std::sqrt(9.) * d2nexx011101;
    d2nexx[(Ai + 1) * matrix_size + Bi + 4] +=
        std::sqrt(2.25) * d2nexx011200 - std::sqrt(2.25) * d2nexx011020;
    d2nexx[(Ai + 2) * matrix_size + Bi + 0] +=
        std::sqrt(3.0) * d2nexx002110 -
        (std::sqrt(0.75) * d2nexx020110 + std::sqrt(0.75) * d2nexx200110);
    d2nexx[(Ai + 2) * matrix_size + Bi + 1] +=
        std::sqrt(3.0) * d2nexx002011 -
        (std::sqrt(0.75) * d2nexx020011 + std::sqrt(0.75) * d2nexx200011);
    d2nexx[(Ai + 2) * matrix_size + Bi + 2] +=
        0.25 * d2nexx200200 + 0.25 * d2nexx200020 - 0.5 * d2nexx200002 +
        0.25 * d2nexx020200 + 0.25 * d2nexx020020 - 0.5 * d2nexx020002 -
        0.5 * d2nexx002200 - 0.5 * d2nexx002020 + d2nexx002002;
    d2nexx[(Ai + 2) * matrix_size + Bi + 3] +=
        std::sqrt(3.0) * d2nexx002101 -
        (std::sqrt(0.75) * d2nexx020101 + std::sqrt(0.75) * d2nexx200101);
    d2nexx[(Ai + 2) * matrix_size + Bi + 4] +=
        std::sqrt(0.1875) * d2nexx200020 - std::sqrt(0.1875) * d2nexx200200 -
        std::sqrt(0.1875) * d2nexx020200 + std::sqrt(0.1875) * d2nexx020020 +
        std::sqrt(0.75) * d2nexx002200 - std::sqrt(0.75) * d2nexx002020;
    d2nexx[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(9.) * d2nexx101110;
    d2nexx[(Ai + 3) * matrix_size + Bi + 1] += std::sqrt(9.) * d2nexx101011;
    d2nexx[(Ai + 3) * matrix_size + Bi + 2] +=
        std::sqrt(3.0) * d2nexx101002 -
        (std::sqrt(0.75) * d2nexx101020 + std::sqrt(0.75) * d2nexx101200);
    d2nexx[(Ai + 3) * matrix_size + Bi + 3] += std::sqrt(9.) * d2nexx101101;
    d2nexx[(Ai + 3) * matrix_size + Bi + 4] +=
        std::sqrt(2.25) * d2nexx101200 - std::sqrt(2.25) * d2nexx101020;
    d2nexx[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(2.25) * d2nexx200110 - std::sqrt(2.25) * d2nexx020110;
    d2nexx[(Ai + 4) * matrix_size + Bi + 1] +=
        std::sqrt(2.25) * d2nexx200011 - std::sqrt(2.25) * d2nexx020011;
    d2nexx[(Ai + 4) * matrix_size + Bi + 2] +=
        std::sqrt(0.75) * d2nexx200002 -
        (std::sqrt(0.1875) * d2nexx200020 + std::sqrt(0.1875) * d2nexx200200) +
        std::sqrt(0.1875) * d2nexx020200 + std::sqrt(0.1875) * d2nexx020020 -
        std::sqrt(0.75) * d2nexx020002;
    d2nexx[(Ai + 4) * matrix_size + Bi + 3] +=
        std::sqrt(2.25) * d2nexx200101 - std::sqrt(2.25) * d2nexx020101;
    d2nexx[(Ai + 4) * matrix_size + Bi + 4] +=
        std::sqrt(0.5625) * d2nexx200200 - std::sqrt(0.5625) * d2nexx200020 -
        std::sqrt(0.5625) * d2nexx020200 + std::sqrt(0.5625) * d2nexx020020;
    const double d2nexy200200 =
        (2 * Pi *
         (C2392 * C60 * C61 + C2393 * C60 * C62 + C2394 * C60 * C63 +
          C2894 * C60 * C64 +
          C59 * (3 * C289 - C298 + C91 * C3566) * C60 * C65)) /
        C68;
    const double d2nexy200020 =
        (2 * Pi *
         ((C2392 * C328 + C2432 * C329 + C2912) * C331 +
          (C2393 * C328 + C2434 * C329 + C2913) * C332 +
          (C2394 * C328 + C2436 * C329 + C3927) * C1610)) /
        C68;
    const double d2nexy200002 =
        (2 * Pi *
         (C3210 * C60 * C331 + C3211 * C60 * C332 +
          (C380 * C2056 + C381 * C1811 + C3678) * C60 * C1610)) /
        C68;
    const double d2nexy200110 = (2 * Pi *
                                 ((C2392 * C421 + C2432 * C422) * C423 +
                                  (C2393 * C421 + C2434 * C422) * C424 +
                                  (C2394 * C421 + C2436 * C422) * C425 +
                                  (C2894 * C421 + C3886 * C422) * C1618)) /
                                C68;
    const double d2nexy200101 =
        (2 * Pi *
         (C2955 * C60 * C423 + C2956 * C60 * C424 + C2957 * C60 * C425 +
          (C454 * C2395 + C455 * C3695) * C60 * C1618)) /
        C68;
    const double d2nexy200011 = (2 * Pi *
                                 ((C2955 * C421 + C2980 * C422) * C331 +
                                  (C2956 * C421 + C2981 * C422) * C332 +
                                  (C2957 * C421 + C3889 * C422) * C1610)) /
                                C68;
    const double d2nexy020200 =
        (2 * Pi *
         ((C2392 * C506 + C2432 * C507 + C2912) * C1642 +
          (C2393 * C506 + C2434 * C507 + C2913) * C1633 +
          (C2394 * C506 + C2436 * C507 + C3927) * C1610)) /
        C68;
    const double d2nexy020020 =
        (2 * Pi *
         (C2392 * C532 + C2432 * C533 + C2433 * C534 + C2996 * C535 +
          C59 * (3 * C608 - C617 + C96 * C3606) * C536) *
         C1442) /
        C68;
    const double d2nexy020002 =
        (2 * Pi *
         (C3210 * C506 + C3240 * C507 +
          (C380 * C2105 + C381 * C1930 + C3709) * C1615) *
         C1442) /
        C68;
    const double d2nexy020110 =
        (2 * Pi *
         ((C2392 * C695 + C2432 * C696 + C2433 * C697 + C3253) * C1574 +
          (C2393 * C695 + C2434 * C696 + C2435 * C697 + C3929) * C1452)) /
        C68;
    const double d2nexy020101 =
        (2 * Pi *
         ((C2955 * C506 + C2980 * C507 + C3028 * C1615) * C1574 +
          (C2956 * C506 + C2981 * C507 + C3901 * C1615) * C1452)) /
        C68;
    const double d2nexy020011 = (2 * Pi *
                                 (C2955 * C695 + C2980 * C696 + C3028 * C697 +
                                  (C454 * C2576 + C455 * C3735) * C1624) *
                                 C1442) /
                                C68;
    const double d2nexy002200 =
        (2 * Pi *
         (C3274 * C60 * C1642 + C3275 * C60 * C1633 +
          (C806 * C2056 + C807 * C1811 + C3678) * C60 * C1610)) /
        C68;
    const double d2nexy002020 =
        (2 * Pi *
         (C3274 * C328 + C3289 * C329 +
          (C806 * C2105 + C807 * C1930 + C3709) * C1615) *
         C1442) /
        C68;
    const double d2nexy002002 =
        (2 * Pi *
         (C849 * C2054 + C850 * C1807 + C851 * C2152 + C852 * C2676 +
          C853 * (3 * C882 +
                  C97 * (2 * C97 * C165 + C97 * (C165 + C2059 * C112)))) *
         C60 * C1442) /
        C68;
    const double d2nexy002110 =
        (2 * Pi *
         ((C3274 * C421 + C3289 * C422) * C1574 +
          (C3275 * C421 + (C806 * C2106 + C807 * C1880 + C3742) * C422) *
              C1452)) /
        C68;
    const double d2nexy002101 =
        (2 * Pi *
         (C3433 * C60 * C1574 +
          (C973 * C2055 + C974 * C1809 + C975 * C2154 + C3751) * C60 * C1452)) /
        C68;
    const double d2nexy002011 =
        (2 * Pi *
         (C3433 * C421 +
          (C973 * C2104 + C974 * C1879 + C975 * C2255 + C3760) * C422) *
         C1442) /
        C68;
    const double d2nexy110200 = (2 * Pi *
                                 ((C2392 * C1060 + C2432 * C1504) * C1649 +
                                  (C2393 * C1060 + C2434 * C1504) * C1644 +
                                  (C2394 * C1060 + C2436 * C1504) * C1635 +
                                  (C2894 * C1060 + C3886 * C1504) * C1618)) /
                                C68;
    const double d2nexy110020 =
        (2 * Pi *
         ((C2392 * C1650 + C2432 * C1646 + C2433 * C1638 + C3253) * C1090 +
          (C2393 * C1650 + C2434 * C1646 + C2435 * C1638 + C3929) * C1452)) /
        C68;
    const double d2nexy110002 =
        (2 * Pi *
         ((C3210 * C1060 + C3240 * C1504) * C1090 +
          (C3211 * C1060 + (C380 * C2106 + C381 * C1880 + C3742) * C1504) *
              C1452)) /
        C68;
    const double d2nexy110110 =
        (2 * Pi *
         ((C2392 * C1501 + C2432 * C1507 + C2433 * C1134) * C1447 +
          (C2393 * C1501 + C2434 * C1507 + C2435 * C1134) * C1455 +
          (C2394 * C1501 + C2436 * C1507 + C3880 * C1134) * C1137)) /
        C68;
    const double d2nexy110101 = (2 * Pi *
                                 ((C2955 * C1060 + C2980 * C1504) * C1447 +
                                  (C2956 * C1060 + C2981 * C1504) * C1455 +
                                  (C2957 * C1060 + C3889 * C1504) * C1137)) /
                                C68;
    const double d2nexy110011 =
        (2 * Pi *
         ((C2955 * C1501 + C2980 * C1507 + C3028 * C1134) * C1090 +
          (C2956 * C1501 + C2981 * C1507 + C3901 * C1134) * C1452)) /
        C68;
    const double d2nexy101200 =
        (2 * Pi *
         (C3092 * C60 * C1649 + C3093 * C60 * C1644 + C3094 * C60 * C1635 +
          (C1198 * C2395 + C1531 * C3695) * C60 * C1618)) /
        C68;
    const double d2nexy101020 =
        (2 * Pi *
         ((C3092 * C328 + C3117 * C329 + C3118 * C1615) * C1090 +
          (C3093 * C328 + C3119 * C329 + C3912 * C1615) * C1452)) /
        C68;
    const double d2nexy101002 =
        (2 * Pi *
         (C3452 * C60 * C1090 +
          (C1651 * C2055 + C1648 * C1809 + C1641 * C2154 + C3751) * C60 *
              C1452)) /
        C68;
    const double d2nexy101110 = (2 * Pi *
                                 ((C3092 * C421 + C3117 * C422) * C1447 +
                                  (C3093 * C421 + C3119 * C422) * C1455 +
                                  (C3094 * C421 + C3918 * C422) * C1137)) /
                                C68;
    const double d2nexy101101 =
        (2 * Pi *
         (C3340 * C60 * C1447 + C3341 * C60 * C1455 +
          (C1528 * C2056 + C1534 * C1811 + C1286 * C3580) * C60 * C1137)) /
        C68;
    const double d2nexy101011 = (2 * Pi *
                                 ((C3340 * C421 + C3355 * C422) * C1090 +
                                  (C3341 * C421 + C3871 * C422) * C1452)) /
                                C68;
    const double d2nexy011200 = (2 * Pi *
                                 ((C3092 * C1060 + C3117 * C1504) * C1642 +
                                  (C3093 * C1060 + C3119 * C1504) * C1633 +
                                  (C3094 * C1060 + C3918 * C1504) * C1610)) /
                                C68;
    const double d2nexy011020 =
        (2 * Pi *
         (C3092 * C1650 + C3117 * C1646 + C3118 * C1638 +
          (C1198 * C2576 + C1531 * C3735) * C1624) *
         C1442) /
        C68;
    const double d2nexy011002 =
        (2 * Pi *
         (C3452 * C1060 +
          (C1651 * C2104 + C1648 * C1879 + C1641 * C2255 + C3760) * C1504) *
         C1442) /
        C68;
    const double d2nexy011110 =
        (2 * Pi *
         ((C3092 * C1501 + C3117 * C1507 + C3118 * C1134) * C1574 +
          (C3093 * C1501 + C3119 * C1507 + C3912 * C1134) * C1452)) /
        C68;
    const double d2nexy011101 = (2 * Pi *
                                 ((C3340 * C1060 + C3355 * C1504) * C1574 +
                                  (C3341 * C1060 + C3871 * C1504) * C1452)) /
                                C68;
    const double d2nexy011011 =
        (2 * Pi *
         (C3340 * C1501 + C3355 * C1507 +
          (C1528 * C2105 + C1534 * C1930 + C1286 * C3609) * C1134) *
         C1442) /
        C68;
    d2nexy[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(9.) * d2nexy110110;
    d2nexy[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(9.) * d2nexy110011;
    d2nexy[(Ai + 0) * matrix_size + Bi + 2] +=
        std::sqrt(3.0) * d2nexy110002 -
        (std::sqrt(0.75) * d2nexy110020 + std::sqrt(0.75) * d2nexy110200);
    d2nexy[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(9.) * d2nexy110101;
    d2nexy[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(2.25) * d2nexy110200 - std::sqrt(2.25) * d2nexy110020;
    d2nexy[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(9.) * d2nexy011110;
    d2nexy[(Ai + 1) * matrix_size + Bi + 1] += std::sqrt(9.) * d2nexy011011;
    d2nexy[(Ai + 1) * matrix_size + Bi + 2] +=
        std::sqrt(3.0) * d2nexy011002 -
        (std::sqrt(0.75) * d2nexy011020 + std::sqrt(0.75) * d2nexy011200);
    d2nexy[(Ai + 1) * matrix_size + Bi + 3] += std::sqrt(9.) * d2nexy011101;
    d2nexy[(Ai + 1) * matrix_size + Bi + 4] +=
        std::sqrt(2.25) * d2nexy011200 - std::sqrt(2.25) * d2nexy011020;
    d2nexy[(Ai + 2) * matrix_size + Bi + 0] +=
        std::sqrt(3.0) * d2nexy002110 -
        (std::sqrt(0.75) * d2nexy020110 + std::sqrt(0.75) * d2nexy200110);
    d2nexy[(Ai + 2) * matrix_size + Bi + 1] +=
        std::sqrt(3.0) * d2nexy002011 -
        (std::sqrt(0.75) * d2nexy020011 + std::sqrt(0.75) * d2nexy200011);
    d2nexy[(Ai + 2) * matrix_size + Bi + 2] +=
        0.25 * d2nexy200200 + 0.25 * d2nexy200020 - 0.5 * d2nexy200002 +
        0.25 * d2nexy020200 + 0.25 * d2nexy020020 - 0.5 * d2nexy020002 -
        0.5 * d2nexy002200 - 0.5 * d2nexy002020 + d2nexy002002;
    d2nexy[(Ai + 2) * matrix_size + Bi + 3] +=
        std::sqrt(3.0) * d2nexy002101 -
        (std::sqrt(0.75) * d2nexy020101 + std::sqrt(0.75) * d2nexy200101);
    d2nexy[(Ai + 2) * matrix_size + Bi + 4] +=
        std::sqrt(0.1875) * d2nexy200020 - std::sqrt(0.1875) * d2nexy200200 -
        std::sqrt(0.1875) * d2nexy020200 + std::sqrt(0.1875) * d2nexy020020 +
        std::sqrt(0.75) * d2nexy002200 - std::sqrt(0.75) * d2nexy002020;
    d2nexy[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(9.) * d2nexy101110;
    d2nexy[(Ai + 3) * matrix_size + Bi + 1] += std::sqrt(9.) * d2nexy101011;
    d2nexy[(Ai + 3) * matrix_size + Bi + 2] +=
        std::sqrt(3.0) * d2nexy101002 -
        (std::sqrt(0.75) * d2nexy101020 + std::sqrt(0.75) * d2nexy101200);
    d2nexy[(Ai + 3) * matrix_size + Bi + 3] += std::sqrt(9.) * d2nexy101101;
    d2nexy[(Ai + 3) * matrix_size + Bi + 4] +=
        std::sqrt(2.25) * d2nexy101200 - std::sqrt(2.25) * d2nexy101020;
    d2nexy[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(2.25) * d2nexy200110 - std::sqrt(2.25) * d2nexy020110;
    d2nexy[(Ai + 4) * matrix_size + Bi + 1] +=
        std::sqrt(2.25) * d2nexy200011 - std::sqrt(2.25) * d2nexy020011;
    d2nexy[(Ai + 4) * matrix_size + Bi + 2] +=
        std::sqrt(0.75) * d2nexy200002 -
        (std::sqrt(0.1875) * d2nexy200020 + std::sqrt(0.1875) * d2nexy200200) +
        std::sqrt(0.1875) * d2nexy020200 + std::sqrt(0.1875) * d2nexy020020 -
        std::sqrt(0.75) * d2nexy020002;
    d2nexy[(Ai + 4) * matrix_size + Bi + 3] +=
        std::sqrt(2.25) * d2nexy200101 - std::sqrt(2.25) * d2nexy020101;
    d2nexy[(Ai + 4) * matrix_size + Bi + 4] +=
        std::sqrt(0.5625) * d2nexy200200 - std::sqrt(0.5625) * d2nexy200020 -
        std::sqrt(0.5625) * d2nexy020200 + std::sqrt(0.5625) * d2nexy020020;
    const double d2nexz200200 =
        (2 * Pi *
         (C2397 * C60 * C61 + C2398 * C60 * C62 + C2399 * C60 * C63 +
          C2896 * C60 * C64 +
          C59 * (3 * C291 - C299 + C91 * C3567) * C60 * C65)) /
        C68;
    const double d2nexz200020 =
        (2 * Pi *
         ((C2397 * C328 + C2109 * C329 + C2914) * C331 +
          (C2398 * C328 + C2111 * C329 + C2915) * C332 +
          (C2399 * C328 + C2113 * C329 + C3782) * C1610)) /
        C68;
    const double d2nexz200002 =
        (2 * Pi *
         (C3212 * C60 * C331 + C3213 * C60 * C332 +
          (C380 * C2062 + C381 * C2159 + C3883) * C60 * C1610)) /
        C68;
    const double d2nexz200110 = (2 * Pi *
                                 ((C2397 * C421 + C2109 * C422) * C423 +
                                  (C2398 * C421 + C2111 * C422) * C424 +
                                  (C2399 * C421 + C2113 * C422) * C425 +
                                  (C2896 * C421 + C3794 * C422) * C1618)) /
                                C68;
    const double d2nexz200101 =
        (2 * Pi *
         (C2958 * C60 * C423 + C2959 * C60 * C424 + C2960 * C60 * C425 +
          (C454 * C2400 + C455 * C3799) * C60 * C1618)) /
        C68;
    const double d2nexz200011 = (2 * Pi *
                                 ((C2958 * C421 + C2982 * C422) * C331 +
                                  (C2959 * C421 + C2983 * C422) * C332 +
                                  (C2960 * C421 + C3890 * C422) * C1610)) /
                                C68;
    const double d2nexz020200 =
        (2 * Pi *
         ((C2397 * C506 + C2109 * C507 + C2914) * C1642 +
          (C2398 * C506 + C2111 * C507 + C2915) * C1633 +
          (C2399 * C506 + C2113 * C507 + C3782) * C1610)) /
        C68;
    const double d2nexz020020 =
        (2 * Pi *
         (C2397 * C532 + C2109 * C533 + C2437 * C534 + C2578 * C535 +
          C59 * (3 * C574 + C96 * C3391) * C536) *
         C1442) /
        C68;
    const double d2nexz020002 =
        (2 * Pi *
         (C3212 * C506 + C3241 * C507 +
          (C380 * C2110 + C381 * C2258 + C3710) * C1615) *
         C1442) /
        C68;
    const double d2nexz020110 =
        (2 * Pi *
         ((C2397 * C695 + C2109 * C696 + C2437 * C697 + C3020) * C1574 +
          (C2398 * C695 + C2111 * C696 + C2438 * C697 + C3816) * C1452)) /
        C68;
    const double d2nexz020101 =
        (2 * Pi *
         ((C2958 * C506 + C2982 * C507 + C3029 * C1615) * C1574 +
          (C2959 * C506 + C2983 * C507 + C3825 * C1615) * C1452)) /
        C68;
    const double d2nexz020011 = (2 * Pi *
                                 (C2958 * C695 + C2982 * C696 + C3029 * C697 +
                                  (C454 * C2243 + C455 * C3635) * C1624) *
                                 C1442) /
                                C68;
    const double d2nexz002200 =
        (2 * Pi *
         (C3276 * C60 * C1642 + C3277 * C60 * C1633 +
          (C806 * C2062 + C807 * C2159 + C3883) * C60 * C1610)) /
        C68;
    const double d2nexz002020 =
        (2 * Pi *
         (C3276 * C328 + C3290 * C329 +
          (C806 * C2110 + C807 * C2258 + C3710) * C1615) *
         C1442) /
        C68;
    const double d2nexz002002 =
        (2 * Pi *
         (C849 * C2060 + C850 * C2155 + C851 * C2156 + C852 * C2677 +
          C853 * (3 * C911 - C919 +
                  C97 * (2 * C885 - C903 +
                         C97 * (C172 - C861 + C97 * (C546 + C97 * C2065))))) *
         C60 * C1442) /
        C68;
    const double d2nexz002110 =
        (2 * Pi *
         ((C3276 * C421 + C3290 * C422) * C1574 +
          (C3277 * C421 + (C806 * C1748 + C807 * C2220 + C3835) * C422) *
              C1452)) /
        C68;
    const double d2nexz002101 =
        (2 * Pi *
         (C3435 * C60 * C1574 +
          (C973 * C2061 + C974 * C2157 + C975 * C2158 + C3906) * C60 * C1452)) /
        C68;
    const double d2nexz002011 =
        (2 * Pi *
         (C3435 * C421 +
          (C973 * C1746 + C974 * C2218 + C975 * C2257 + C3846) * C422) *
         C1442) /
        C68;
    const double d2nexz110200 = (2 * Pi *
                                 ((C2397 * C1060 + C2109 * C1504) * C1649 +
                                  (C2398 * C1060 + C2111 * C1504) * C1644 +
                                  (C2399 * C1060 + C2113 * C1504) * C1635 +
                                  (C2896 * C1060 + C3794 * C1504) * C1618)) /
                                C68;
    const double d2nexz110020 =
        (2 * Pi *
         ((C2397 * C1650 + C2109 * C1646 + C2437 * C1638 + C3020) * C1090 +
          (C2398 * C1650 + C2111 * C1646 + C2438 * C1638 + C3816) * C1452)) /
        C68;
    const double d2nexz110002 =
        (2 * Pi *
         ((C3212 * C1060 + C3241 * C1504) * C1090 +
          (C3213 * C1060 + (C380 * C1748 + C381 * C2220 + C3835) * C1504) *
              C1452)) /
        C68;
    const double d2nexz110110 =
        (2 * Pi *
         ((C2397 * C1501 + C2109 * C1507 + C2437 * C1134) * C1447 +
          (C2398 * C1501 + C2111 * C1507 + C2438 * C1134) * C1455 +
          (C2399 * C1501 + C2113 * C1507 + C3670 * C1134) * C1137)) /
        C68;
    const double d2nexz110101 = (2 * Pi *
                                 ((C2958 * C1060 + C2982 * C1504) * C1447 +
                                  (C2959 * C1060 + C2983 * C1504) * C1455 +
                                  (C2960 * C1060 + C3890 * C1504) * C1137)) /
                                C68;
    const double d2nexz110011 =
        (2 * Pi *
         ((C2958 * C1501 + C2982 * C1507 + C3029 * C1134) * C1090 +
          (C2959 * C1501 + C2983 * C1507 + C3825 * C1134) * C1452)) /
        C68;
    const double d2nexz101200 =
        (2 * Pi *
         (C3095 * C60 * C1649 + C3096 * C60 * C1644 + C3097 * C60 * C1635 +
          (C1198 * C2400 + C1531 * C3799) * C60 * C1618)) /
        C68;
    const double d2nexz101020 =
        (2 * Pi *
         ((C3095 * C328 + C3120 * C329 + C3121 * C1615) * C1090 +
          (C3096 * C328 + C3122 * C329 + C3854 * C1615) * C1452)) /
        C68;
    const double d2nexz101002 =
        (2 * Pi *
         (C3453 * C60 * C1090 +
          (C1651 * C2061 + C1648 * C2157 + C1641 * C2158 + C3906) * C60 *
              C1452)) /
        C68;
    const double d2nexz101110 = (2 * Pi *
                                 ((C3095 * C421 + C3120 * C422) * C1447 +
                                  (C3096 * C421 + C3122 * C422) * C1455 +
                                  (C3097 * C421 + C3919 * C422) * C1137)) /
                                C68;
    const double d2nexz101101 =
        (2 * Pi *
         (C3342 * C60 * C1447 + C3343 * C60 * C1455 +
          (C1528 * C2062 + C1534 * C2159 + C1286 * C3789) * C60 * C1137)) /
        C68;
    const double d2nexz101011 = (2 * Pi *
                                 ((C3342 * C421 + C3356 * C422) * C1090 +
                                  (C3343 * C421 + C3922 * C422) * C1452)) /
                                C68;
    const double d2nexz011200 = (2 * Pi *
                                 ((C3095 * C1060 + C3120 * C1504) * C1642 +
                                  (C3096 * C1060 + C3122 * C1504) * C1633 +
                                  (C3097 * C1060 + C3919 * C1504) * C1610)) /
                                C68;
    const double d2nexz011020 =
        (2 * Pi *
         (C3095 * C1650 + C3120 * C1646 + C3121 * C1638 +
          (C1198 * C2243 + C1531 * C3635) * C1624) *
         C1442) /
        C68;
    const double d2nexz011002 =
        (2 * Pi *
         (C3453 * C1060 +
          (C1651 * C1746 + C1648 * C2218 + C1641 * C2257 + C3846) * C1504) *
         C1442) /
        C68;
    const double d2nexz011110 =
        (2 * Pi *
         ((C3095 * C1501 + C3120 * C1507 + C3121 * C1134) * C1574 +
          (C3096 * C1501 + C3122 * C1507 + C3854 * C1134) * C1452)) /
        C68;
    const double d2nexz011101 = (2 * Pi *
                                 ((C3342 * C1060 + C3356 * C1504) * C1574 +
                                  (C3343 * C1060 + C3922 * C1504) * C1452)) /
                                C68;
    const double d2nexz011011 =
        (2 * Pi *
         (C3342 * C1501 + C3356 * C1507 +
          (C1528 * C2110 + C1534 * C2258 + C1286 * C3610) * C1134) *
         C1442) /
        C68;
    d2nexz[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(9.) * d2nexz110110;
    d2nexz[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(9.) * d2nexz110011;
    d2nexz[(Ai + 0) * matrix_size + Bi + 2] +=
        std::sqrt(3.0) * d2nexz110002 -
        (std::sqrt(0.75) * d2nexz110020 + std::sqrt(0.75) * d2nexz110200);
    d2nexz[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(9.) * d2nexz110101;
    d2nexz[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(2.25) * d2nexz110200 - std::sqrt(2.25) * d2nexz110020;
    d2nexz[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(9.) * d2nexz011110;
    d2nexz[(Ai + 1) * matrix_size + Bi + 1] += std::sqrt(9.) * d2nexz011011;
    d2nexz[(Ai + 1) * matrix_size + Bi + 2] +=
        std::sqrt(3.0) * d2nexz011002 -
        (std::sqrt(0.75) * d2nexz011020 + std::sqrt(0.75) * d2nexz011200);
    d2nexz[(Ai + 1) * matrix_size + Bi + 3] += std::sqrt(9.) * d2nexz011101;
    d2nexz[(Ai + 1) * matrix_size + Bi + 4] +=
        std::sqrt(2.25) * d2nexz011200 - std::sqrt(2.25) * d2nexz011020;
    d2nexz[(Ai + 2) * matrix_size + Bi + 0] +=
        std::sqrt(3.0) * d2nexz002110 -
        (std::sqrt(0.75) * d2nexz020110 + std::sqrt(0.75) * d2nexz200110);
    d2nexz[(Ai + 2) * matrix_size + Bi + 1] +=
        std::sqrt(3.0) * d2nexz002011 -
        (std::sqrt(0.75) * d2nexz020011 + std::sqrt(0.75) * d2nexz200011);
    d2nexz[(Ai + 2) * matrix_size + Bi + 2] +=
        0.25 * d2nexz200200 + 0.25 * d2nexz200020 - 0.5 * d2nexz200002 +
        0.25 * d2nexz020200 + 0.25 * d2nexz020020 - 0.5 * d2nexz020002 -
        0.5 * d2nexz002200 - 0.5 * d2nexz002020 + d2nexz002002;
    d2nexz[(Ai + 2) * matrix_size + Bi + 3] +=
        std::sqrt(3.0) * d2nexz002101 -
        (std::sqrt(0.75) * d2nexz020101 + std::sqrt(0.75) * d2nexz200101);
    d2nexz[(Ai + 2) * matrix_size + Bi + 4] +=
        std::sqrt(0.1875) * d2nexz200020 - std::sqrt(0.1875) * d2nexz200200 -
        std::sqrt(0.1875) * d2nexz020200 + std::sqrt(0.1875) * d2nexz020020 +
        std::sqrt(0.75) * d2nexz002200 - std::sqrt(0.75) * d2nexz002020;
    d2nexz[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(9.) * d2nexz101110;
    d2nexz[(Ai + 3) * matrix_size + Bi + 1] += std::sqrt(9.) * d2nexz101011;
    d2nexz[(Ai + 3) * matrix_size + Bi + 2] +=
        std::sqrt(3.0) * d2nexz101002 -
        (std::sqrt(0.75) * d2nexz101020 + std::sqrt(0.75) * d2nexz101200);
    d2nexz[(Ai + 3) * matrix_size + Bi + 3] += std::sqrt(9.) * d2nexz101101;
    d2nexz[(Ai + 3) * matrix_size + Bi + 4] +=
        std::sqrt(2.25) * d2nexz101200 - std::sqrt(2.25) * d2nexz101020;
    d2nexz[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(2.25) * d2nexz200110 - std::sqrt(2.25) * d2nexz020110;
    d2nexz[(Ai + 4) * matrix_size + Bi + 1] +=
        std::sqrt(2.25) * d2nexz200011 - std::sqrt(2.25) * d2nexz020011;
    d2nexz[(Ai + 4) * matrix_size + Bi + 2] +=
        std::sqrt(0.75) * d2nexz200002 -
        (std::sqrt(0.1875) * d2nexz200020 + std::sqrt(0.1875) * d2nexz200200) +
        std::sqrt(0.1875) * d2nexz020200 + std::sqrt(0.1875) * d2nexz020020 -
        std::sqrt(0.75) * d2nexz020002;
    d2nexz[(Ai + 4) * matrix_size + Bi + 3] +=
        std::sqrt(2.25) * d2nexz200101 - std::sqrt(2.25) * d2nexz020101;
    d2nexz[(Ai + 4) * matrix_size + Bi + 4] +=
        std::sqrt(0.5625) * d2nexz200200 - std::sqrt(0.5625) * d2nexz200020 -
        std::sqrt(0.5625) * d2nexz020200 + std::sqrt(0.5625) * d2nexz020020;
    const double d2neyx200200 =
        (2 * Pi *
         (C2402 * C60 * C61 + C2403 * C60 * C62 + C2404 * C60 * C63 +
          C2898 * C60 * C64 +
          C59 * (3 * C293 - C298 + C91 * C3568) * C60 * C65)) /
        C68;
    const double d2neyx200020 =
        (2 * Pi *
         ((C2402 * C328 + C2439 * C329 + C2916) * C331 +
          (C2403 * C328 + C2441 * C329 + C2917) * C332 +
          (C2404 * C328 + C2443 * C329 + C3928) * C1610)) /
        C68;
    const double d2neyx200002 =
        (2 * Pi *
         (C3214 * C60 * C331 + C3215 * C60 * C332 +
          (C380 * C2068 + C381 * C1824 + C3680) * C60 * C1610)) /
        C68;
    const double d2neyx200110 = (2 * Pi *
                                 ((C2402 * C421 + C2439 * C422) * C423 +
                                  (C2403 * C421 + C2441 * C422) * C424 +
                                  (C2404 * C421 + C2443 * C422) * C425 +
                                  (C2898 * C421 + C3887 * C422) * C1618)) /
                                C68;
    const double d2neyx200101 =
        (2 * Pi *
         (C2961 * C60 * C423 + C2962 * C60 * C424 + C2963 * C60 * C425 +
          (C454 * C2405 + C455 * C3697) * C60 * C1618)) /
        C68;
    const double d2neyx200011 = (2 * Pi *
                                 ((C2961 * C421 + C2984 * C422) * C331 +
                                  (C2962 * C421 + C2985 * C422) * C332 +
                                  (C2963 * C421 + C3891 * C422) * C1610)) /
                                C68;
    const double d2neyx020200 =
        (2 * Pi *
         ((C2402 * C506 + C2439 * C507 + C2916) * C1642 +
          (C2403 * C506 + C2441 * C507 + C2917) * C1633 +
          (C2404 * C506 + C2443 * C507 + C3928) * C1610)) /
        C68;
    const double d2neyx020020 =
        (2 * Pi *
         (C2402 * C532 + C2439 * C533 + C2440 * C534 + C2999 * C535 +
          C59 *
              (3 * C610 - C617 +
               C96 * (2 * C576 - C597 +
                      C96 * (C176 - C545 + C96 * (C546 + C96 * C2071)))) *
              C536) *
         C1442) /
        C68;
    const double d2neyx020002 =
        (2 * Pi *
         (C3214 * C506 + C3243 * C507 +
          (C380 * C2115 + C381 * C2260 + C3711) * C1615) *
         C1442) /
        C68;
    const double d2neyx020110 =
        (2 * Pi *
         ((C2402 * C695 + C2439 * C696 + C2440 * C697 + C3256) * C1574 +
          (C2403 * C695 + C2441 * C696 + C2442 * C697 + C3930) * C1452)) /
        C68;
    const double d2neyx020101 =
        (2 * Pi *
         ((C2961 * C506 + C2984 * C507 + C3030 * C1615) * C1574 +
          (C2962 * C506 + C2985 * C507 + C3902 * C1615) * C1452)) /
        C68;
    const double d2neyx020011 = (2 * Pi *
                                 (C2961 * C695 + C2984 * C696 + C3030 * C697 +
                                  (C454 * C2580 + C455 * C3736) * C1624) *
                                 C1442) /
                                C68;
    const double d2neyx002200 =
        (2 * Pi *
         (C3278 * C60 * C1642 + C3279 * C60 * C1633 +
          (C806 * C2068 + C807 * C1824 + C3680) * C60 * C1610)) /
        C68;
    const double d2neyx002020 =
        (2 * Pi *
         (C3278 * C328 + C3291 * C329 +
          (C806 * C2115 + C807 * C2260 + C3711) * C1615) *
         C1442) /
        C68;
    const double d2neyx002002 =
        (2 * Pi *
         (C849 * C2066 + C850 * C1820 + C851 * C2161 + C852 * C2308 +
          C853 * (3 * C664 + C97 * C3422)) *
         C60 * C1442) /
        C68;
    const double d2neyx002110 =
        (2 * Pi *
         ((C3278 * C421 + C3291 * C422) * C1574 +
          (C3279 * C421 + (C806 * C2116 + C807 * C2223 + C3744) * C422) *
              C1452)) /
        C68;
    const double d2neyx002101 =
        (2 * Pi *
         (C3437 * C60 * C1574 +
          (C973 * C2067 + C974 * C1822 + C975 * C2163 + C3753) * C60 * C1452)) /
        C68;
    const double d2neyx002011 =
        (2 * Pi *
         (C3437 * C421 +
          (C973 * C2114 + C974 * C2222 + C975 * C2259 + C3762) * C422) *
         C1442) /
        C68;
    const double d2neyx110200 = (2 * Pi *
                                 ((C2402 * C1060 + C2439 * C1504) * C1649 +
                                  (C2403 * C1060 + C2441 * C1504) * C1644 +
                                  (C2404 * C1060 + C2443 * C1504) * C1635 +
                                  (C2898 * C1060 + C3887 * C1504) * C1618)) /
                                C68;
    const double d2neyx110020 =
        (2 * Pi *
         ((C2402 * C1650 + C2439 * C1646 + C2440 * C1638 + C3256) * C1090 +
          (C2403 * C1650 + C2441 * C1646 + C2442 * C1638 + C3930) * C1452)) /
        C68;
    const double d2neyx110002 =
        (2 * Pi *
         ((C3214 * C1060 + C3243 * C1504) * C1090 +
          (C3215 * C1060 + (C380 * C2116 + C381 * C2223 + C3744) * C1504) *
              C1452)) /
        C68;
    const double d2neyx110110 =
        (2 * Pi *
         ((C2402 * C1501 + C2439 * C1507 + C2440 * C1134) * C1447 +
          (C2403 * C1501 + C2441 * C1507 + C2442 * C1134) * C1455 +
          (C2404 * C1501 + C2443 * C1507 + C3881 * C1134) * C1137)) /
        C68;
    const double d2neyx110101 = (2 * Pi *
                                 ((C2961 * C1060 + C2984 * C1504) * C1447 +
                                  (C2962 * C1060 + C2985 * C1504) * C1455 +
                                  (C2963 * C1060 + C3891 * C1504) * C1137)) /
                                C68;
    const double d2neyx110011 =
        (2 * Pi *
         ((C2961 * C1501 + C2984 * C1507 + C3030 * C1134) * C1090 +
          (C2962 * C1501 + C2985 * C1507 + C3902 * C1134) * C1452)) /
        C68;
    const double d2neyx101200 =
        (2 * Pi *
         (C3098 * C60 * C1649 + C3099 * C60 * C1644 + C3100 * C60 * C1635 +
          (C1198 * C2405 + C1531 * C3697) * C60 * C1618)) /
        C68;
    const double d2neyx101020 =
        (2 * Pi *
         ((C3098 * C328 + C3123 * C329 + C3124 * C1615) * C1090 +
          (C3099 * C328 + C3125 * C329 + C3913 * C1615) * C1452)) /
        C68;
    const double d2neyx101002 =
        (2 * Pi *
         (C3454 * C60 * C1090 +
          (C1651 * C2067 + C1648 * C1822 + C1641 * C2163 + C3753) * C60 *
              C1452)) /
        C68;
    const double d2neyx101110 = (2 * Pi *
                                 ((C3098 * C421 + C3123 * C422) * C1447 +
                                  (C3099 * C421 + C3125 * C422) * C1455 +
                                  (C3100 * C421 + C3920 * C422) * C1137)) /
                                C68;
    const double d2neyx101101 =
        (2 * Pi *
         (C3344 * C60 * C1447 + C3345 * C60 * C1455 +
          (C1528 * C2068 + C1534 * C1824 + C1286 * C3582) * C60 * C1137)) /
        C68;
    const double d2neyx101011 = (2 * Pi *
                                 ((C3344 * C421 + C3357 * C422) * C1090 +
                                  (C3345 * C421 + C3873 * C422) * C1452)) /
                                C68;
    const double d2neyx011200 = (2 * Pi *
                                 ((C3098 * C1060 + C3123 * C1504) * C1642 +
                                  (C3099 * C1060 + C3125 * C1504) * C1633 +
                                  (C3100 * C1060 + C3920 * C1504) * C1610)) /
                                C68;
    const double d2neyx011020 =
        (2 * Pi *
         (C3098 * C1650 + C3123 * C1646 + C3124 * C1638 +
          (C1198 * C2580 + C1531 * C3736) * C1624) *
         C1442) /
        C68;
    const double d2neyx011002 =
        (2 * Pi *
         (C3454 * C1060 +
          (C1651 * C2114 + C1648 * C2222 + C1641 * C2259 + C3762) * C1504) *
         C1442) /
        C68;
    const double d2neyx011110 =
        (2 * Pi *
         ((C3098 * C1501 + C3123 * C1507 + C3124 * C1134) * C1574 +
          (C3099 * C1501 + C3125 * C1507 + C3913 * C1134) * C1452)) /
        C68;
    const double d2neyx011101 = (2 * Pi *
                                 ((C3344 * C1060 + C3357 * C1504) * C1574 +
                                  (C3345 * C1060 + C3873 * C1504) * C1452)) /
                                C68;
    const double d2neyx011011 =
        (2 * Pi *
         (C3344 * C1501 + C3357 * C1507 +
          (C1528 * C2115 + C1534 * C2260 + C1286 * C3611) * C1134) *
         C1442) /
        C68;
    d2neyx[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(9.) * d2neyx110110;
    d2neyx[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(9.) * d2neyx110011;
    d2neyx[(Ai + 0) * matrix_size + Bi + 2] +=
        std::sqrt(3.0) * d2neyx110002 -
        (std::sqrt(0.75) * d2neyx110020 + std::sqrt(0.75) * d2neyx110200);
    d2neyx[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(9.) * d2neyx110101;
    d2neyx[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(2.25) * d2neyx110200 - std::sqrt(2.25) * d2neyx110020;
    d2neyx[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(9.) * d2neyx011110;
    d2neyx[(Ai + 1) * matrix_size + Bi + 1] += std::sqrt(9.) * d2neyx011011;
    d2neyx[(Ai + 1) * matrix_size + Bi + 2] +=
        std::sqrt(3.0) * d2neyx011002 -
        (std::sqrt(0.75) * d2neyx011020 + std::sqrt(0.75) * d2neyx011200);
    d2neyx[(Ai + 1) * matrix_size + Bi + 3] += std::sqrt(9.) * d2neyx011101;
    d2neyx[(Ai + 1) * matrix_size + Bi + 4] +=
        std::sqrt(2.25) * d2neyx011200 - std::sqrt(2.25) * d2neyx011020;
    d2neyx[(Ai + 2) * matrix_size + Bi + 0] +=
        std::sqrt(3.0) * d2neyx002110 -
        (std::sqrt(0.75) * d2neyx020110 + std::sqrt(0.75) * d2neyx200110);
    d2neyx[(Ai + 2) * matrix_size + Bi + 1] +=
        std::sqrt(3.0) * d2neyx002011 -
        (std::sqrt(0.75) * d2neyx020011 + std::sqrt(0.75) * d2neyx200011);
    d2neyx[(Ai + 2) * matrix_size + Bi + 2] +=
        0.25 * d2neyx200200 + 0.25 * d2neyx200020 - 0.5 * d2neyx200002 +
        0.25 * d2neyx020200 + 0.25 * d2neyx020020 - 0.5 * d2neyx020002 -
        0.5 * d2neyx002200 - 0.5 * d2neyx002020 + d2neyx002002;
    d2neyx[(Ai + 2) * matrix_size + Bi + 3] +=
        std::sqrt(3.0) * d2neyx002101 -
        (std::sqrt(0.75) * d2neyx020101 + std::sqrt(0.75) * d2neyx200101);
    d2neyx[(Ai + 2) * matrix_size + Bi + 4] +=
        std::sqrt(0.1875) * d2neyx200020 - std::sqrt(0.1875) * d2neyx200200 -
        std::sqrt(0.1875) * d2neyx020200 + std::sqrt(0.1875) * d2neyx020020 +
        std::sqrt(0.75) * d2neyx002200 - std::sqrt(0.75) * d2neyx002020;
    d2neyx[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(9.) * d2neyx101110;
    d2neyx[(Ai + 3) * matrix_size + Bi + 1] += std::sqrt(9.) * d2neyx101011;
    d2neyx[(Ai + 3) * matrix_size + Bi + 2] +=
        std::sqrt(3.0) * d2neyx101002 -
        (std::sqrt(0.75) * d2neyx101020 + std::sqrt(0.75) * d2neyx101200);
    d2neyx[(Ai + 3) * matrix_size + Bi + 3] += std::sqrt(9.) * d2neyx101101;
    d2neyx[(Ai + 3) * matrix_size + Bi + 4] +=
        std::sqrt(2.25) * d2neyx101200 - std::sqrt(2.25) * d2neyx101020;
    d2neyx[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(2.25) * d2neyx200110 - std::sqrt(2.25) * d2neyx020110;
    d2neyx[(Ai + 4) * matrix_size + Bi + 1] +=
        std::sqrt(2.25) * d2neyx200011 - std::sqrt(2.25) * d2neyx020011;
    d2neyx[(Ai + 4) * matrix_size + Bi + 2] +=
        std::sqrt(0.75) * d2neyx200002 -
        (std::sqrt(0.1875) * d2neyx200020 + std::sqrt(0.1875) * d2neyx200200) +
        std::sqrt(0.1875) * d2neyx020200 + std::sqrt(0.1875) * d2neyx020020 -
        std::sqrt(0.75) * d2neyx020002;
    d2neyx[(Ai + 4) * matrix_size + Bi + 3] +=
        std::sqrt(2.25) * d2neyx200101 - std::sqrt(2.25) * d2neyx020101;
    d2neyx[(Ai + 4) * matrix_size + Bi + 4] +=
        std::sqrt(0.5625) * d2neyx200200 - std::sqrt(0.5625) * d2neyx200020 -
        std::sqrt(0.5625) * d2neyx020200 + std::sqrt(0.5625) * d2neyx020020;
    const double d2neyy200200 =
        (2 * Pi *
         (C2900 * C60 * C61 + C2073 * C60 * C62 + C2408 * C60 * C63 +
          C2409 * C60 * C64 + C59 * (3 * C280 + C91 * C3466) * C60 * C65)) /
        C68;
    const double d2neyy200020 =
        (2 * Pi *
         ((C2900 * C328 + C2444 * C329 + C3203) * C331 +
          (C2073 * C328 + C2446 * C329 + C3204) * C332 +
          (C2408 * C328 + C2448 * C329 + C3882) * C1610)) /
        C68;
    const double d2neyy200002 =
        (2 * Pi *
         (C3378 * C60 * C331 + C2938 * C60 * C332 +
          (C380 * C2074 + C381 * C1829 + C3583) * C60 * C1610)) /
        C68;
    const double d2neyy200110 = (2 * Pi *
                                 ((C2900 * C421 + C2444 * C422) * C423 +
                                  (C2073 * C421 + C2446 * C422) * C424 +
                                  (C2408 * C421 + C2448 * C422) * C425 +
                                  (C2409 * C421 + C3796 * C422) * C1618)) /
                                C68;
    const double d2neyy200101 =
        (2 * Pi *
         (C3231 * C60 * C423 + C2521 * C60 * C424 + C2965 * C60 * C425 +
          (C454 * C2075 + C455 * C3594) * C60 * C1618)) /
        C68;
    const double d2neyy200011 = (2 * Pi *
                                 ((C3231 * C421 + C2986 * C422) * C331 +
                                  (C2521 * C421 + C2987 * C422) * C332 +
                                  (C2965 * C421 + C3805 * C422) * C1610)) /
                                C68;
    const double d2neyy020200 =
        (2 * Pi *
         ((C2900 * C506 + C2444 * C507 + C3203) * C1642 +
          (C2073 * C506 + C2446 * C507 + C3204) * C1633 +
          (C2408 * C506 + C2448 * C507 + C3882) * C1610)) /
        C68;
    const double d2neyy020020 =
        (2 * Pi *
         (C2900 * C532 + C2444 * C533 + C2918 * C534 + C3236 * C535 +
          C59 *
              (3 * C619 + C625 + C625 +
               C96 * (2 * C580 + C621 + C621 +
                      C96 * (C226 + C583 + C583 +
                             C96 * (-4 * C166 + C96 * C2410)))) *
              C536) *
         C1442) /
        C68;
    const double d2neyy020002 =
        (2 * Pi *
         (C3378 * C506 + C3245 * C507 +
          (C380 * C2445 + C381 * C2601 + C3810) * C1615) *
         C1442) /
        C68;
    const double d2neyy020110 =
        (2 * Pi *
         ((C2900 * C695 + C2444 * C696 + C2918 * C697 + C3405) * C1574 +
          (C2073 * C695 + C2446 * C696 + C2919 * C697 + C3931) * C1452)) /
        C68;
    const double d2neyy020101 =
        (2 * Pi *
         ((C3231 * C506 + C2986 * C507 + C3266 * C1615) * C1574 +
          (C2521 * C506 + C2987 * C507 + C3903 * C1615) * C1452)) /
        C68;
    const double d2neyy020011 = (2 * Pi *
                                 (C3231 * C695 + C2986 * C696 + C3266 * C697 +
                                  (C454 * C3000 + C455 * C3832) * C1624) *
                                 C1442) /
                                C68;
    const double d2neyy002200 =
        (2 * Pi *
         (C3419 * C60 * C1642 + C3050 * C60 * C1633 +
          (C806 * C2074 + C807 * C1829 + C3583) * C60 * C1610)) /
        C68;
    const double d2neyy002020 =
        (2 * Pi *
         (C3419 * C328 + C3292 * C329 +
          (C806 * C2445 + C807 * C2601 + C3810) * C1615) *
         C1442) /
        C68;
    const double d2neyy002002 =
        (2 * Pi *
         (C849 * C2407 + C850 * C1825 + C851 * C2165 + C852 * C2309 +
          C853 * (3 * C665 + C97 * C3535)) *
         C60 * C1442) /
        C68;
    const double d2neyy002110 =
        (2 * Pi *
         ((C3419 * C421 + C3292 * C422) * C1574 +
          (C3050 * C421 + (C806 * C2121 + C807 * C2225 + C3745) * C422) *
              C1452)) /
        C68;
    const double d2neyy002101 =
        (2 * Pi *
         (C3550 * C60 * C1574 +
          (C973 * C1692 + C974 * C1827 + C975 * C2168 + C3754) * C60 * C1452)) /
        C68;
    const double d2neyy002011 =
        (2 * Pi *
         (C3550 * C421 +
          (C973 * C2119 + C974 * C2224 + C975 * C2261 + C3847) * C422) *
         C1442) /
        C68;
    const double d2neyy110200 = (2 * Pi *
                                 ((C2900 * C1060 + C2444 * C1504) * C1649 +
                                  (C2073 * C1060 + C2446 * C1504) * C1644 +
                                  (C2408 * C1060 + C2448 * C1504) * C1635 +
                                  (C2409 * C1060 + C3796 * C1504) * C1618)) /
                                C68;
    const double d2neyy110020 =
        (2 * Pi *
         ((C2900 * C1650 + C2444 * C1646 + C2918 * C1638 + C3405) * C1090 +
          (C2073 * C1650 + C2446 * C1646 + C2919 * C1638 + C3931) * C1452)) /
        C68;
    const double d2neyy110002 =
        (2 * Pi *
         ((C3378 * C1060 + C3245 * C1504) * C1090 +
          (C2938 * C1060 + (C380 * C2121 + C381 * C2225 + C3745) * C1504) *
              C1452)) /
        C68;
    const double d2neyy110110 =
        (2 * Pi *
         ((C2900 * C1501 + C2444 * C1507 + C2918 * C1134) * C1447 +
          (C2073 * C1501 + C2446 * C1507 + C2919 * C1134) * C1455 +
          (C2408 * C1501 + C2448 * C1507 + C3784 * C1134) * C1137)) /
        C68;
    const double d2neyy110101 = (2 * Pi *
                                 ((C3231 * C1060 + C2986 * C1504) * C1447 +
                                  (C2521 * C1060 + C2987 * C1504) * C1455 +
                                  (C2965 * C1060 + C3805 * C1504) * C1137)) /
                                C68;
    const double d2neyy110011 =
        (2 * Pi *
         ((C3231 * C1501 + C2986 * C1507 + C3266 * C1134) * C1090 +
          (C2521 * C1501 + C2987 * C1507 + C3903 * C1134) * C1452)) /
        C68;
    const double d2neyy101200 =
        (2 * Pi *
         (C3326 * C60 * C1649 + C2722 * C60 * C1644 + C3102 * C60 * C1635 +
          (C1198 * C2075 + C1531 * C3594) * C60 * C1618)) /
        C68;
    const double d2neyy101020 =
        (2 * Pi *
         ((C3326 * C328 + C3126 * C329 + C3328 * C1615) * C1090 +
          (C2722 * C328 + C3129 * C329 + C3914 * C1615) * C1452)) /
        C68;
    const double d2neyy101002 =
        (2 * Pi *
         (C3564 * C60 * C1090 +
          (C1651 * C1692 + C1648 * C1827 + C1641 * C2168 + C3754) * C60 *
              C1452)) /
        C68;
    const double d2neyy101110 = (2 * Pi *
                                 ((C3326 * C421 + C3126 * C422) * C1447 +
                                  (C2722 * C421 + C3129 * C422) * C1455 +
                                  (C3102 * C421 + C3865 * C422) * C1137)) /
                                C68;
    const double d2neyy101101 =
        (2 * Pi *
         (C3461 * C60 * C1447 + C3163 * C60 * C1455 +
          (C1528 * C2074 + C1534 * C1829 + C1286 * C3482) * C60 * C1137)) /
        C68;
    const double d2neyy101011 = (2 * Pi *
                                 ((C3461 * C421 + C3358 * C422) * C1090 +
                                  (C3163 * C421 + C3874 * C422) * C1452)) /
                                C68;
    const double d2neyy011200 = (2 * Pi *
                                 ((C3326 * C1060 + C3126 * C1504) * C1642 +
                                  (C2722 * C1060 + C3129 * C1504) * C1633 +
                                  (C3102 * C1060 + C3865 * C1504) * C1610)) /
                                C68;
    const double d2neyy011020 =
        (2 * Pi *
         (C3326 * C1650 + C3126 * C1646 + C3328 * C1638 +
          (C1198 * C3000 + C1531 * C3832) * C1624) *
         C1442) /
        C68;
    const double d2neyy011002 =
        (2 * Pi *
         (C3564 * C1060 +
          (C1651 * C2119 + C1648 * C2224 + C1641 * C2261 + C3847) * C1504) *
         C1442) /
        C68;
    const double d2neyy011110 =
        (2 * Pi *
         ((C3326 * C1501 + C3126 * C1507 + C3328 * C1134) * C1574 +
          (C2722 * C1501 + C3129 * C1507 + C3914 * C1134) * C1452)) /
        C68;
    const double d2neyy011101 = (2 * Pi *
                                 ((C3461 * C1060 + C3358 * C1504) * C1574 +
                                  (C3163 * C1060 + C3874 * C1504) * C1452)) /
                                C68;
    const double d2neyy011011 =
        (2 * Pi *
         (C3461 * C1501 + C3358 * C1507 +
          (C1528 * C2445 + C1534 * C2601 + C1286 * C3712) * C1134) *
         C1442) /
        C68;
    d2neyy[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(9.) * d2neyy110110;
    d2neyy[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(9.) * d2neyy110011;
    d2neyy[(Ai + 0) * matrix_size + Bi + 2] +=
        std::sqrt(3.0) * d2neyy110002 -
        (std::sqrt(0.75) * d2neyy110020 + std::sqrt(0.75) * d2neyy110200);
    d2neyy[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(9.) * d2neyy110101;
    d2neyy[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(2.25) * d2neyy110200 - std::sqrt(2.25) * d2neyy110020;
    d2neyy[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(9.) * d2neyy011110;
    d2neyy[(Ai + 1) * matrix_size + Bi + 1] += std::sqrt(9.) * d2neyy011011;
    d2neyy[(Ai + 1) * matrix_size + Bi + 2] +=
        std::sqrt(3.0) * d2neyy011002 -
        (std::sqrt(0.75) * d2neyy011020 + std::sqrt(0.75) * d2neyy011200);
    d2neyy[(Ai + 1) * matrix_size + Bi + 3] += std::sqrt(9.) * d2neyy011101;
    d2neyy[(Ai + 1) * matrix_size + Bi + 4] +=
        std::sqrt(2.25) * d2neyy011200 - std::sqrt(2.25) * d2neyy011020;
    d2neyy[(Ai + 2) * matrix_size + Bi + 0] +=
        std::sqrt(3.0) * d2neyy002110 -
        (std::sqrt(0.75) * d2neyy020110 + std::sqrt(0.75) * d2neyy200110);
    d2neyy[(Ai + 2) * matrix_size + Bi + 1] +=
        std::sqrt(3.0) * d2neyy002011 -
        (std::sqrt(0.75) * d2neyy020011 + std::sqrt(0.75) * d2neyy200011);
    d2neyy[(Ai + 2) * matrix_size + Bi + 2] +=
        0.25 * d2neyy200200 + 0.25 * d2neyy200020 - 0.5 * d2neyy200002 +
        0.25 * d2neyy020200 + 0.25 * d2neyy020020 - 0.5 * d2neyy020002 -
        0.5 * d2neyy002200 - 0.5 * d2neyy002020 + d2neyy002002;
    d2neyy[(Ai + 2) * matrix_size + Bi + 3] +=
        std::sqrt(3.0) * d2neyy002101 -
        (std::sqrt(0.75) * d2neyy020101 + std::sqrt(0.75) * d2neyy200101);
    d2neyy[(Ai + 2) * matrix_size + Bi + 4] +=
        std::sqrt(0.1875) * d2neyy200020 - std::sqrt(0.1875) * d2neyy200200 -
        std::sqrt(0.1875) * d2neyy020200 + std::sqrt(0.1875) * d2neyy020020 +
        std::sqrt(0.75) * d2neyy002200 - std::sqrt(0.75) * d2neyy002020;
    d2neyy[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(9.) * d2neyy101110;
    d2neyy[(Ai + 3) * matrix_size + Bi + 1] += std::sqrt(9.) * d2neyy101011;
    d2neyy[(Ai + 3) * matrix_size + Bi + 2] +=
        std::sqrt(3.0) * d2neyy101002 -
        (std::sqrt(0.75) * d2neyy101020 + std::sqrt(0.75) * d2neyy101200);
    d2neyy[(Ai + 3) * matrix_size + Bi + 3] += std::sqrt(9.) * d2neyy101101;
    d2neyy[(Ai + 3) * matrix_size + Bi + 4] +=
        std::sqrt(2.25) * d2neyy101200 - std::sqrt(2.25) * d2neyy101020;
    d2neyy[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(2.25) * d2neyy200110 - std::sqrt(2.25) * d2neyy020110;
    d2neyy[(Ai + 4) * matrix_size + Bi + 1] +=
        std::sqrt(2.25) * d2neyy200011 - std::sqrt(2.25) * d2neyy020011;
    d2neyy[(Ai + 4) * matrix_size + Bi + 2] +=
        std::sqrt(0.75) * d2neyy200002 -
        (std::sqrt(0.1875) * d2neyy200020 + std::sqrt(0.1875) * d2neyy200200) +
        std::sqrt(0.1875) * d2neyy020200 + std::sqrt(0.1875) * d2neyy020020 -
        std::sqrt(0.75) * d2neyy020002;
    d2neyy[(Ai + 4) * matrix_size + Bi + 3] +=
        std::sqrt(2.25) * d2neyy200101 - std::sqrt(2.25) * d2neyy020101;
    d2neyy[(Ai + 4) * matrix_size + Bi + 4] +=
        std::sqrt(0.5625) * d2neyy200200 - std::sqrt(0.5625) * d2neyy200020 -
        std::sqrt(0.5625) * d2neyy020200 + std::sqrt(0.5625) * d2neyy020020;
    const double d2neyz200200 =
        (2 * Pi *
         (C2411 * C60 * C61 + C2078 * C60 * C62 + C2412 * C60 * C63 +
          C2413 * C60 * C64 + C59 * (3 * C256 + C91 * C3367) * C60 * C65)) /
        C68;
    const double d2neyz200020 =
        (2 * Pi *
         ((C2411 * C328 + C2449 * C329 + C2920) * C331 +
          (C2078 * C328 + C2451 * C329 + C2921) * C332 +
          (C2412 * C328 + C2453 * C329 + C3785) * C1610)) /
        C68;
    const double d2neyz200002 =
        (2 * Pi *
         (C3217 * C60 * C331 + C3218 * C60 * C332 +
          (C380 * C2079 + C381 * C2174 + C3681) * C60 * C1610)) /
        C68;
    const double d2neyz200110 = (2 * Pi *
                                 ((C2411 * C421 + C2449 * C422) * C423 +
                                  (C2078 * C421 + C2451 * C422) * C424 +
                                  (C2412 * C421 + C2453 * C422) * C425 +
                                  (C2413 * C421 + C3690 * C422) * C1618)) /
                                C68;
    const double d2neyz200101 =
        (2 * Pi *
         (C2966 * C60 * C423 + C2967 * C60 * C424 + C2968 * C60 * C425 +
          (C454 * C2080 + C455 * C3595) * C60 * C1618)) /
        C68;
    const double d2neyz200011 = (2 * Pi *
                                 ((C2966 * C421 + C2988 * C422) * C331 +
                                  (C2967 * C421 + C2989 * C422) * C332 +
                                  (C2968 * C421 + C3806 * C422) * C1610)) /
                                C68;
    const double d2neyz020200 =
        (2 * Pi *
         ((C2411 * C506 + C2449 * C507 + C2920) * C1642 +
          (C2078 * C506 + C2451 * C507 + C2921) * C1633 +
          (C2412 * C506 + C2453 * C507 + C3785) * C1610)) /
        C68;
    const double d2neyz020020 =
        (2 * Pi *
         (C2411 * C532 + C2449 * C533 + C2450 * C534 + C3001 * C535 +
          C59 *
              (3 * C614 - C622 +
               C96 * (2 * C587 - C606 +
                      C96 * (C182 - C565 + C96 * (C221 + C96 * C2081)))) *
              C536) *
         C1442) /
        C68;
    const double d2neyz020002 =
        (2 * Pi *
         (C3217 * C506 + C3247 * C507 +
          (C380 * C2126 + C381 * C2265 + C3893) * C1615) *
         C1442) /
        C68;
    const double d2neyz020110 =
        (2 * Pi *
         ((C2411 * C695 + C2449 * C696 + C2450 * C697 + C3259) * C1574 +
          (C2078 * C695 + C2451 * C696 + C2452 * C697 + C3899) * C1452)) /
        C68;
    const double d2neyz020101 =
        (2 * Pi *
         ((C2966 * C506 + C2988 * C507 + C3034 * C1615) * C1574 +
          (C2967 * C506 + C2989 * C507 + C3904 * C1615) * C1452)) /
        C68;
    const double d2neyz020011 = (2 * Pi *
                                 (C2966 * C695 + C2988 * C696 + C3034 * C697 +
                                  (C454 * C2582 + C455 * C3833) * C1624) *
                                 C1442) /
                                C68;
    const double d2neyz002200 =
        (2 * Pi *
         (C3281 * C60 * C1642 + C3282 * C60 * C1633 +
          (C806 * C2079 + C807 * C2174 + C3681) * C60 * C1610)) /
        C68;
    const double d2neyz002020 =
        (2 * Pi *
         (C3281 * C328 + C3293 * C329 +
          (C806 * C2126 + C807 * C2265 + C3893) * C1615) *
         C1442) /
        C68;
    const double d2neyz002002 =
        (2 * Pi *
         (C849 * C2077 + C850 * C2169 + C851 * C2170 + C852 * C2678 +
          C853 * (3 * C673 - C920 + C97 * C3641)) *
         C60 * C1442) /
        C68;
    const double d2neyz002110 =
        (2 * Pi *
         ((C3281 * C421 + C3293 * C422) * C1574 +
          (C3282 * C421 + (C806 * C2127 + C807 * C2227 + C3836) * C422) *
              C1452)) /
        C68;
    const double d2neyz002101 =
        (2 * Pi *
         (C3439 * C60 * C1574 +
          (C973 * C1699 + C974 * C2172 + C975 * C2173 + C3842) * C60 * C1452)) /
        C68;
    const double d2neyz002011 =
        (2 * Pi *
         (C3439 * C421 +
          (C973 * C2125 + C974 * C2226 + C975 * C2264 + C3909) * C422) *
         C1442) /
        C68;
    const double d2neyz110200 = (2 * Pi *
                                 ((C2411 * C1060 + C2449 * C1504) * C1649 +
                                  (C2078 * C1060 + C2451 * C1504) * C1644 +
                                  (C2412 * C1060 + C2453 * C1504) * C1635 +
                                  (C2413 * C1060 + C3690 * C1504) * C1618)) /
                                C68;
    const double d2neyz110020 =
        (2 * Pi *
         ((C2411 * C1650 + C2449 * C1646 + C2450 * C1638 + C3259) * C1090 +
          (C2078 * C1650 + C2451 * C1646 + C2452 * C1638 + C3899) * C1452)) /
        C68;
    const double d2neyz110002 =
        (2 * Pi *
         ((C3217 * C1060 + C3247 * C1504) * C1090 +
          (C3218 * C1060 + (C380 * C2127 + C381 * C2227 + C3836) * C1504) *
              C1452)) /
        C68;
    const double d2neyz110110 =
        (2 * Pi *
         ((C2411 * C1501 + C2449 * C1507 + C2450 * C1134) * C1447 +
          (C2078 * C1501 + C2451 * C1507 + C2452 * C1134) * C1455 +
          (C2412 * C1501 + C2453 * C1507 + C3673 * C1134) * C1137)) /
        C68;
    const double d2neyz110101 = (2 * Pi *
                                 ((C2966 * C1060 + C2988 * C1504) * C1447 +
                                  (C2967 * C1060 + C2989 * C1504) * C1455 +
                                  (C2968 * C1060 + C3806 * C1504) * C1137)) /
                                C68;
    const double d2neyz110011 =
        (2 * Pi *
         ((C2966 * C1501 + C2988 * C1507 + C3034 * C1134) * C1090 +
          (C2967 * C1501 + C2989 * C1507 + C3904 * C1134) * C1452)) /
        C68;
    const double d2neyz101200 =
        (2 * Pi *
         (C3103 * C60 * C1649 + C3104 * C60 * C1644 + C3105 * C60 * C1635 +
          (C1198 * C2080 + C1531 * C3595) * C60 * C1618)) /
        C68;
    const double d2neyz101020 =
        (2 * Pi *
         ((C3103 * C328 + C3131 * C329 + C3132 * C1615) * C1090 +
          (C3104 * C328 + C3133 * C329 + C3915 * C1615) * C1452)) /
        C68;
    const double d2neyz101002 =
        (2 * Pi *
         (C3456 * C60 * C1090 +
          (C1651 * C1699 + C1648 * C2172 + C1641 * C2173 + C3842) * C60 *
              C1452)) /
        C68;
    const double d2neyz101110 = (2 * Pi *
                                 ((C3103 * C421 + C3131 * C422) * C1447 +
                                  (C3104 * C421 + C3133 * C422) * C1455 +
                                  (C3105 * C421 + C3866 * C422) * C1137)) /
                                C68;
    const double d2neyz101101 =
        (2 * Pi *
         (C3347 * C60 * C1447 + C3348 * C60 * C1455 +
          (C1528 * C2079 + C1534 * C2174 + C1286 * C3584) * C60 * C1137)) /
        C68;
    const double d2neyz101011 = (2 * Pi *
                                 ((C3347 * C421 + C3359 * C422) * C1090 +
                                  (C3348 * C421 + C3923 * C422) * C1452)) /
                                C68;
    const double d2neyz011200 = (2 * Pi *
                                 ((C3103 * C1060 + C3131 * C1504) * C1642 +
                                  (C3104 * C1060 + C3133 * C1504) * C1633 +
                                  (C3105 * C1060 + C3866 * C1504) * C1610)) /
                                C68;
    const double d2neyz011020 =
        (2 * Pi *
         (C3103 * C1650 + C3131 * C1646 + C3132 * C1638 +
          (C1198 * C2582 + C1531 * C3833) * C1624) *
         C1442) /
        C68;
    const double d2neyz011002 =
        (2 * Pi *
         (C3456 * C1060 +
          (C1651 * C2125 + C1648 * C2226 + C1641 * C2264 + C3909) * C1504) *
         C1442) /
        C68;
    const double d2neyz011110 =
        (2 * Pi *
         ((C3103 * C1501 + C3131 * C1507 + C3132 * C1134) * C1574 +
          (C3104 * C1501 + C3133 * C1507 + C3915 * C1134) * C1452)) /
        C68;
    const double d2neyz011101 = (2 * Pi *
                                 ((C3347 * C1060 + C3359 * C1504) * C1574 +
                                  (C3348 * C1060 + C3923 * C1504) * C1452)) /
                                C68;
    const double d2neyz011011 =
        (2 * Pi *
         (C3347 * C1501 + C3359 * C1507 +
          (C1528 * C2126 + C1534 * C2265 + C1286 * C3811) * C1134) *
         C1442) /
        C68;
    d2neyz[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(9.) * d2neyz110110;
    d2neyz[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(9.) * d2neyz110011;
    d2neyz[(Ai + 0) * matrix_size + Bi + 2] +=
        std::sqrt(3.0) * d2neyz110002 -
        (std::sqrt(0.75) * d2neyz110020 + std::sqrt(0.75) * d2neyz110200);
    d2neyz[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(9.) * d2neyz110101;
    d2neyz[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(2.25) * d2neyz110200 - std::sqrt(2.25) * d2neyz110020;
    d2neyz[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(9.) * d2neyz011110;
    d2neyz[(Ai + 1) * matrix_size + Bi + 1] += std::sqrt(9.) * d2neyz011011;
    d2neyz[(Ai + 1) * matrix_size + Bi + 2] +=
        std::sqrt(3.0) * d2neyz011002 -
        (std::sqrt(0.75) * d2neyz011020 + std::sqrt(0.75) * d2neyz011200);
    d2neyz[(Ai + 1) * matrix_size + Bi + 3] += std::sqrt(9.) * d2neyz011101;
    d2neyz[(Ai + 1) * matrix_size + Bi + 4] +=
        std::sqrt(2.25) * d2neyz011200 - std::sqrt(2.25) * d2neyz011020;
    d2neyz[(Ai + 2) * matrix_size + Bi + 0] +=
        std::sqrt(3.0) * d2neyz002110 -
        (std::sqrt(0.75) * d2neyz020110 + std::sqrt(0.75) * d2neyz200110);
    d2neyz[(Ai + 2) * matrix_size + Bi + 1] +=
        std::sqrt(3.0) * d2neyz002011 -
        (std::sqrt(0.75) * d2neyz020011 + std::sqrt(0.75) * d2neyz200011);
    d2neyz[(Ai + 2) * matrix_size + Bi + 2] +=
        0.25 * d2neyz200200 + 0.25 * d2neyz200020 - 0.5 * d2neyz200002 +
        0.25 * d2neyz020200 + 0.25 * d2neyz020020 - 0.5 * d2neyz020002 -
        0.5 * d2neyz002200 - 0.5 * d2neyz002020 + d2neyz002002;
    d2neyz[(Ai + 2) * matrix_size + Bi + 3] +=
        std::sqrt(3.0) * d2neyz002101 -
        (std::sqrt(0.75) * d2neyz020101 + std::sqrt(0.75) * d2neyz200101);
    d2neyz[(Ai + 2) * matrix_size + Bi + 4] +=
        std::sqrt(0.1875) * d2neyz200020 - std::sqrt(0.1875) * d2neyz200200 -
        std::sqrt(0.1875) * d2neyz020200 + std::sqrt(0.1875) * d2neyz020020 +
        std::sqrt(0.75) * d2neyz002200 - std::sqrt(0.75) * d2neyz002020;
    d2neyz[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(9.) * d2neyz101110;
    d2neyz[(Ai + 3) * matrix_size + Bi + 1] += std::sqrt(9.) * d2neyz101011;
    d2neyz[(Ai + 3) * matrix_size + Bi + 2] +=
        std::sqrt(3.0) * d2neyz101002 -
        (std::sqrt(0.75) * d2neyz101020 + std::sqrt(0.75) * d2neyz101200);
    d2neyz[(Ai + 3) * matrix_size + Bi + 3] += std::sqrt(9.) * d2neyz101101;
    d2neyz[(Ai + 3) * matrix_size + Bi + 4] +=
        std::sqrt(2.25) * d2neyz101200 - std::sqrt(2.25) * d2neyz101020;
    d2neyz[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(2.25) * d2neyz200110 - std::sqrt(2.25) * d2neyz020110;
    d2neyz[(Ai + 4) * matrix_size + Bi + 1] +=
        std::sqrt(2.25) * d2neyz200011 - std::sqrt(2.25) * d2neyz020011;
    d2neyz[(Ai + 4) * matrix_size + Bi + 2] +=
        std::sqrt(0.75) * d2neyz200002 -
        (std::sqrt(0.1875) * d2neyz200020 + std::sqrt(0.1875) * d2neyz200200) +
        std::sqrt(0.1875) * d2neyz020200 + std::sqrt(0.1875) * d2neyz020020 -
        std::sqrt(0.75) * d2neyz020002;
    d2neyz[(Ai + 4) * matrix_size + Bi + 3] +=
        std::sqrt(2.25) * d2neyz200101 - std::sqrt(2.25) * d2neyz020101;
    d2neyz[(Ai + 4) * matrix_size + Bi + 4] +=
        std::sqrt(0.5625) * d2neyz200200 - std::sqrt(0.5625) * d2neyz200020 -
        std::sqrt(0.5625) * d2neyz020200 + std::sqrt(0.5625) * d2neyz020020;
    const double d2nezx200200 =
        (2 * Pi *
         (C2415 * C60 * C61 + C2416 * C60 * C62 + C2417 * C60 * C63 +
          C2903 * C60 * C64 +
          C59 * (3 * C294 - C299 + C91 * C3569) * C60 * C65)) /
        C68;
    const double d2nezx200020 =
        (2 * Pi *
         ((C2415 * C328 + C2130 * C329 + C2922) * C331 +
          (C2416 * C328 + C2132 * C329 + C2923) * C332 +
          (C2417 * C328 + C2134 * C329 + C3786) * C1610)) /
        C68;
    const double d2nezx200002 =
        (2 * Pi *
         (C3220 * C60 * C331 + C3221 * C60 * C332 +
          (C380 * C2084 + C381 * C2179 + C3884) * C60 * C1610)) /
        C68;
    const double d2nezx200110 = (2 * Pi *
                                 ((C2415 * C421 + C2130 * C422) * C423 +
                                  (C2416 * C421 + C2132 * C422) * C424 +
                                  (C2417 * C421 + C2134 * C422) * C425 +
                                  (C2903 * C421 + C3797 * C422) * C1618)) /
                                C68;
    const double d2nezx200101 =
        (2 * Pi *
         (C2969 * C60 * C423 + C2970 * C60 * C424 + C2971 * C60 * C425 +
          (C454 * C2418 + C455 * C3800) * C60 * C1618)) /
        C68;
    const double d2nezx200011 = (2 * Pi *
                                 ((C2969 * C421 + C2990 * C422) * C331 +
                                  (C2970 * C421 + C2991 * C422) * C332 +
                                  (C2971 * C421 + C3892 * C422) * C1610)) /
                                C68;
    const double d2nezx020200 =
        (2 * Pi *
         ((C2415 * C506 + C2130 * C507 + C2922) * C1642 +
          (C2416 * C506 + C2132 * C507 + C2923) * C1633 +
          (C2417 * C506 + C2134 * C507 + C3786) * C1610)) /
        C68;
    const double d2nezx020020 =
        (2 * Pi *
         (C2415 * C532 + C2130 * C533 + C2454 * C534 + C2583 * C535 +
          C59 * (3 * C590 + C96 * C3392) * C536) *
         C1442) /
        C68;
    const double d2nezx020002 =
        (2 * Pi *
         (C3220 * C506 + C3249 * C507 +
          (C380 * C2131 + C381 * C2268 + C3714) * C1615) *
         C1442) /
        C68;
    const double d2nezx020110 =
        (2 * Pi *
         ((C2415 * C695 + C2130 * C696 + C2454 * C697 + C3023) * C1574 +
          (C2416 * C695 + C2132 * C696 + C2455 * C697 + C3820) * C1452)) /
        C68;
    const double d2nezx020101 =
        (2 * Pi *
         ((C2969 * C506 + C2990 * C507 + C3036 * C1615) * C1574 +
          (C2970 * C506 + C2991 * C507 + C3829 * C1615) * C1452)) /
        C68;
    const double d2nezx020011 = (2 * Pi *
                                 (C2969 * C695 + C2990 * C696 + C3036 * C697 +
                                  (C454 * C2247 + C455 * C3639) * C1624) *
                                 C1442) /
                                C68;
    const double d2nezx002200 =
        (2 * Pi *
         (C3283 * C60 * C1642 + C3284 * C60 * C1633 +
          (C806 * C2084 + C807 * C2179 + C3884) * C60 * C1610)) /
        C68;
    const double d2nezx002020 =
        (2 * Pi *
         (C3283 * C328 + C3294 * C329 +
          (C806 * C2131 + C807 * C2268 + C3714) * C1615) *
         C1442) /
        C68;
    const double d2nezx002002 =
        (2 * Pi *
         (C849 * C2082 + C850 * C2175 + C851 * C2176 + C852 * C2679 +
          C853 * (3 * C914 - C919 +
                  C97 * (2 * C890 - C903 +
                         C97 * (C185 - C861 + C97 * (C546 + C97 * C2087))))) *
         C60 * C1442) /
        C68;
    const double d2nezx002110 =
        (2 * Pi *
         ((C3283 * C421 + C3294 * C422) * C1574 +
          (C3284 * C421 + (C806 * C1781 + C807 * C2231 + C3837) * C422) *
              C1452)) /
        C68;
    const double d2nezx002101 =
        (2 * Pi *
         (C3440 * C60 * C1574 +
          (C973 * C2083 + C974 * C2177 + C975 * C2178 + C3907) * C60 * C1452)) /
        C68;
    const double d2nezx002011 =
        (2 * Pi *
         (C3440 * C421 +
          (C973 * C1779 + C974 * C2229 + C975 * C2267 + C3849) * C422) *
         C1442) /
        C68;
    const double d2nezx110200 = (2 * Pi *
                                 ((C2415 * C1060 + C2130 * C1504) * C1649 +
                                  (C2416 * C1060 + C2132 * C1504) * C1644 +
                                  (C2417 * C1060 + C2134 * C1504) * C1635 +
                                  (C2903 * C1060 + C3797 * C1504) * C1618)) /
                                C68;
    const double d2nezx110020 =
        (2 * Pi *
         ((C2415 * C1650 + C2130 * C1646 + C2454 * C1638 + C3023) * C1090 +
          (C2416 * C1650 + C2132 * C1646 + C2455 * C1638 + C3820) * C1452)) /
        C68;
    const double d2nezx110002 =
        (2 * Pi *
         ((C3220 * C1060 + C3249 * C1504) * C1090 +
          (C3221 * C1060 + (C380 * C1781 + C381 * C2231 + C3837) * C1504) *
              C1452)) /
        C68;
    const double d2nezx110110 =
        (2 * Pi *
         ((C2415 * C1501 + C2130 * C1507 + C2454 * C1134) * C1447 +
          (C2416 * C1501 + C2132 * C1507 + C2455 * C1134) * C1455 +
          (C2417 * C1501 + C2134 * C1507 + C3674 * C1134) * C1137)) /
        C68;
    const double d2nezx110101 = (2 * Pi *
                                 ((C2969 * C1060 + C2990 * C1504) * C1447 +
                                  (C2970 * C1060 + C2991 * C1504) * C1455 +
                                  (C2971 * C1060 + C3892 * C1504) * C1137)) /
                                C68;
    const double d2nezx110011 =
        (2 * Pi *
         ((C2969 * C1501 + C2990 * C1507 + C3036 * C1134) * C1090 +
          (C2970 * C1501 + C2991 * C1507 + C3829 * C1134) * C1452)) /
        C68;
    const double d2nezx101200 =
        (2 * Pi *
         (C3106 * C60 * C1649 + C3107 * C60 * C1644 + C3108 * C60 * C1635 +
          (C1198 * C2418 + C1531 * C3800) * C60 * C1618)) /
        C68;
    const double d2nezx101020 =
        (2 * Pi *
         ((C3106 * C328 + C3134 * C329 + C3135 * C1615) * C1090 +
          (C3107 * C328 + C3136 * C329 + C3858 * C1615) * C1452)) /
        C68;
    const double d2nezx101002 =
        (2 * Pi *
         (C3457 * C60 * C1090 +
          (C1651 * C2083 + C1648 * C2177 + C1641 * C2178 + C3907) * C60 *
              C1452)) /
        C68;
    const double d2nezx101110 = (2 * Pi *
                                 ((C3106 * C421 + C3134 * C422) * C1447 +
                                  (C3107 * C421 + C3136 * C422) * C1455 +
                                  (C3108 * C421 + C3921 * C422) * C1137)) /
                                C68;
    const double d2nezx101101 =
        (2 * Pi *
         (C3349 * C60 * C1447 + C3350 * C60 * C1455 +
          (C1528 * C2084 + C1534 * C2179 + C1286 * C3790) * C60 * C1137)) /
        C68;
    const double d2nezx101011 = (2 * Pi *
                                 ((C3349 * C421 + C3360 * C422) * C1090 +
                                  (C3350 * C421 + C3924 * C422) * C1452)) /
                                C68;
    const double d2nezx011200 = (2 * Pi *
                                 ((C3106 * C1060 + C3134 * C1504) * C1642 +
                                  (C3107 * C1060 + C3136 * C1504) * C1633 +
                                  (C3108 * C1060 + C3921 * C1504) * C1610)) /
                                C68;
    const double d2nezx011020 =
        (2 * Pi *
         (C3106 * C1650 + C3134 * C1646 + C3135 * C1638 +
          (C1198 * C2247 + C1531 * C3639) * C1624) *
         C1442) /
        C68;
    const double d2nezx011002 =
        (2 * Pi *
         (C3457 * C1060 +
          (C1651 * C1779 + C1648 * C2229 + C1641 * C2267 + C3849) * C1504) *
         C1442) /
        C68;
    const double d2nezx011110 =
        (2 * Pi *
         ((C3106 * C1501 + C3134 * C1507 + C3135 * C1134) * C1574 +
          (C3107 * C1501 + C3136 * C1507 + C3858 * C1134) * C1452)) /
        C68;
    const double d2nezx011101 = (2 * Pi *
                                 ((C3349 * C1060 + C3360 * C1504) * C1574 +
                                  (C3350 * C1060 + C3924 * C1504) * C1452)) /
                                C68;
    const double d2nezx011011 =
        (2 * Pi *
         (C3349 * C1501 + C3360 * C1507 +
          (C1528 * C2131 + C1534 * C2268 + C1286 * C3614) * C1134) *
         C1442) /
        C68;
    d2nezx[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(9.) * d2nezx110110;
    d2nezx[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(9.) * d2nezx110011;
    d2nezx[(Ai + 0) * matrix_size + Bi + 2] +=
        std::sqrt(3.0) * d2nezx110002 -
        (std::sqrt(0.75) * d2nezx110020 + std::sqrt(0.75) * d2nezx110200);
    d2nezx[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(9.) * d2nezx110101;
    d2nezx[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(2.25) * d2nezx110200 - std::sqrt(2.25) * d2nezx110020;
    d2nezx[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(9.) * d2nezx011110;
    d2nezx[(Ai + 1) * matrix_size + Bi + 1] += std::sqrt(9.) * d2nezx011011;
    d2nezx[(Ai + 1) * matrix_size + Bi + 2] +=
        std::sqrt(3.0) * d2nezx011002 -
        (std::sqrt(0.75) * d2nezx011020 + std::sqrt(0.75) * d2nezx011200);
    d2nezx[(Ai + 1) * matrix_size + Bi + 3] += std::sqrt(9.) * d2nezx011101;
    d2nezx[(Ai + 1) * matrix_size + Bi + 4] +=
        std::sqrt(2.25) * d2nezx011200 - std::sqrt(2.25) * d2nezx011020;
    d2nezx[(Ai + 2) * matrix_size + Bi + 0] +=
        std::sqrt(3.0) * d2nezx002110 -
        (std::sqrt(0.75) * d2nezx020110 + std::sqrt(0.75) * d2nezx200110);
    d2nezx[(Ai + 2) * matrix_size + Bi + 1] +=
        std::sqrt(3.0) * d2nezx002011 -
        (std::sqrt(0.75) * d2nezx020011 + std::sqrt(0.75) * d2nezx200011);
    d2nezx[(Ai + 2) * matrix_size + Bi + 2] +=
        0.25 * d2nezx200200 + 0.25 * d2nezx200020 - 0.5 * d2nezx200002 +
        0.25 * d2nezx020200 + 0.25 * d2nezx020020 - 0.5 * d2nezx020002 -
        0.5 * d2nezx002200 - 0.5 * d2nezx002020 + d2nezx002002;
    d2nezx[(Ai + 2) * matrix_size + Bi + 3] +=
        std::sqrt(3.0) * d2nezx002101 -
        (std::sqrt(0.75) * d2nezx020101 + std::sqrt(0.75) * d2nezx200101);
    d2nezx[(Ai + 2) * matrix_size + Bi + 4] +=
        std::sqrt(0.1875) * d2nezx200020 - std::sqrt(0.1875) * d2nezx200200 -
        std::sqrt(0.1875) * d2nezx020200 + std::sqrt(0.1875) * d2nezx020020 +
        std::sqrt(0.75) * d2nezx002200 - std::sqrt(0.75) * d2nezx002020;
    d2nezx[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(9.) * d2nezx101110;
    d2nezx[(Ai + 3) * matrix_size + Bi + 1] += std::sqrt(9.) * d2nezx101011;
    d2nezx[(Ai + 3) * matrix_size + Bi + 2] +=
        std::sqrt(3.0) * d2nezx101002 -
        (std::sqrt(0.75) * d2nezx101020 + std::sqrt(0.75) * d2nezx101200);
    d2nezx[(Ai + 3) * matrix_size + Bi + 3] += std::sqrt(9.) * d2nezx101101;
    d2nezx[(Ai + 3) * matrix_size + Bi + 4] +=
        std::sqrt(2.25) * d2nezx101200 - std::sqrt(2.25) * d2nezx101020;
    d2nezx[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(2.25) * d2nezx200110 - std::sqrt(2.25) * d2nezx020110;
    d2nezx[(Ai + 4) * matrix_size + Bi + 1] +=
        std::sqrt(2.25) * d2nezx200011 - std::sqrt(2.25) * d2nezx020011;
    d2nezx[(Ai + 4) * matrix_size + Bi + 2] +=
        std::sqrt(0.75) * d2nezx200002 -
        (std::sqrt(0.1875) * d2nezx200020 + std::sqrt(0.1875) * d2nezx200200) +
        std::sqrt(0.1875) * d2nezx020200 + std::sqrt(0.1875) * d2nezx020020 -
        std::sqrt(0.75) * d2nezx020002;
    d2nezx[(Ai + 4) * matrix_size + Bi + 3] +=
        std::sqrt(2.25) * d2nezx200101 - std::sqrt(2.25) * d2nezx020101;
    d2nezx[(Ai + 4) * matrix_size + Bi + 4] +=
        std::sqrt(0.5625) * d2nezx200200 - std::sqrt(0.5625) * d2nezx200020 -
        std::sqrt(0.5625) * d2nezx020200 + std::sqrt(0.5625) * d2nezx020020;
    const double d2nezy200200 =
        (2 * Pi *
         (C2420 * C60 * C61 + C2089 * C60 * C62 + C2421 * C60 * C63 +
          C2422 * C60 * C64 + C59 * (3 * C259 + C91 * C3369) * C60 * C65)) /
        C68;
    const double d2nezy200020 =
        (2 * Pi *
         ((C2420 * C328 + C2456 * C329 + C2924) * C331 +
          (C2089 * C328 + C2458 * C329 + C2925) * C332 +
          (C2421 * C328 + C2460 * C329 + C3787) * C1610)) /
        C68;
    const double d2nezy200002 =
        (2 * Pi *
         (C3222 * C60 * C331 + C3223 * C60 * C332 +
          (C380 * C2090 + C381 * C2185 + C3683) * C60 * C1610)) /
        C68;
    const double d2nezy200110 = (2 * Pi *
                                 ((C2420 * C421 + C2456 * C422) * C423 +
                                  (C2089 * C421 + C2458 * C422) * C424 +
                                  (C2421 * C421 + C2460 * C422) * C425 +
                                  (C2422 * C421 + C3692 * C422) * C1618)) /
                                C68;
    const double d2nezy200101 =
        (2 * Pi *
         (C2972 * C60 * C423 + C2973 * C60 * C424 + C2974 * C60 * C425 +
          (C454 * C2091 + C455 * C3596) * C60 * C1618)) /
        C68;
    const double d2nezy200011 = (2 * Pi *
                                 ((C2972 * C421 + C2992 * C422) * C331 +
                                  (C2973 * C421 + C2993 * C422) * C332 +
                                  (C2974 * C421 + C3808 * C422) * C1610)) /
                                C68;
    const double d2nezy020200 =
        (2 * Pi *
         ((C2420 * C506 + C2456 * C507 + C2924) * C1642 +
          (C2089 * C506 + C2458 * C507 + C2925) * C1633 +
          (C2421 * C506 + C2460 * C507 + C3787) * C1610)) /
        C68;
    const double d2nezy020020 =
        (2 * Pi *
         (C2420 * C532 + C2456 * C533 + C2457 * C534 + C3003 * C535 +
          C59 * (3 * C616 - C622 + C96 * C3607) * C536) *
         C1442) /
        C68;
    const double d2nezy020002 =
        (2 * Pi *
         (C3222 * C506 + C3251 * C507 +
          (C380 * C2136 + C381 * C2270 + C3894) * C1615) *
         C1442) /
        C68;
    const double d2nezy020110 =
        (2 * Pi *
         ((C2420 * C695 + C2456 * C696 + C2457 * C697 + C3262) * C1574 +
          (C2089 * C695 + C2458 * C696 + C2459 * C697 + C3900) * C1452)) /
        C68;
    const double d2nezy020101 =
        (2 * Pi *
         ((C2972 * C506 + C2992 * C507 + C3037 * C1615) * C1574 +
          (C2973 * C506 + C2993 * C507 + C3905 * C1615) * C1452)) /
        C68;
    const double d2nezy020011 = (2 * Pi *
                                 (C2972 * C695 + C2992 * C696 + C3037 * C697 +
                                  (C454 * C2585 + C455 * C3834) * C1624) *
                                 C1442) /
                                C68;
    const double d2nezy002200 =
        (2 * Pi *
         (C3285 * C60 * C1642 + C3286 * C60 * C1633 +
          (C806 * C2090 + C807 * C2185 + C3683) * C60 * C1610)) /
        C68;
    const double d2nezy002020 =
        (2 * Pi *
         (C3285 * C328 + C3295 * C329 +
          (C806 * C2136 + C807 * C2270 + C3894) * C1615) *
         C1442) /
        C68;
    const double d2nezy002002 =
        (2 * Pi *
         (C849 * C2088 + C850 * C2180 + C851 * C2181 + C852 * C2680 +
          C853 * (3 * C915 - C920 +
                  C97 * (2 * C892 - C905 +
                         C97 * (C188 - C865 + C97 * (C210 + C97 * C2092))))) *
         C60 * C1442) /
        C68;
    const double d2nezy002110 =
        (2 * Pi *
         ((C3285 * C421 + C3295 * C422) * C1574 +
          (C3286 * C421 + (C806 * C2137 + C807 * C2234 + C3838) * C422) *
              C1452)) /
        C68;
    const double d2nezy002101 =
        (2 * Pi *
         (C3442 * C60 * C1574 +
          (C973 * C1715 + C974 * C2183 + C975 * C2184 + C3844) * C60 * C1452)) /
        C68;
    const double d2nezy002011 =
        (2 * Pi *
         (C3442 * C421 +
          (C973 * C2135 + C974 * C2233 + C975 * C2269 + C3910) * C422) *
         C1442) /
        C68;
    const double d2nezy110200 = (2 * Pi *
                                 ((C2420 * C1060 + C2456 * C1504) * C1649 +
                                  (C2089 * C1060 + C2458 * C1504) * C1644 +
                                  (C2421 * C1060 + C2460 * C1504) * C1635 +
                                  (C2422 * C1060 + C3692 * C1504) * C1618)) /
                                C68;
    const double d2nezy110020 =
        (2 * Pi *
         ((C2420 * C1650 + C2456 * C1646 + C2457 * C1638 + C3262) * C1090 +
          (C2089 * C1650 + C2458 * C1646 + C2459 * C1638 + C3900) * C1452)) /
        C68;
    const double d2nezy110002 =
        (2 * Pi *
         ((C3222 * C1060 + C3251 * C1504) * C1090 +
          (C3223 * C1060 + (C380 * C2137 + C381 * C2234 + C3838) * C1504) *
              C1452)) /
        C68;
    const double d2nezy110110 =
        (2 * Pi *
         ((C2420 * C1501 + C2456 * C1507 + C2457 * C1134) * C1447 +
          (C2089 * C1501 + C2458 * C1507 + C2459 * C1134) * C1455 +
          (C2421 * C1501 + C2460 * C1507 + C3675 * C1134) * C1137)) /
        C68;
    const double d2nezy110101 = (2 * Pi *
                                 ((C2972 * C1060 + C2992 * C1504) * C1447 +
                                  (C2973 * C1060 + C2993 * C1504) * C1455 +
                                  (C2974 * C1060 + C3808 * C1504) * C1137)) /
                                C68;
    const double d2nezy110011 =
        (2 * Pi *
         ((C2972 * C1501 + C2992 * C1507 + C3037 * C1134) * C1090 +
          (C2973 * C1501 + C2993 * C1507 + C3905 * C1134) * C1452)) /
        C68;
    const double d2nezy101200 =
        (2 * Pi *
         (C3109 * C60 * C1649 + C3110 * C60 * C1644 + C3111 * C60 * C1635 +
          (C1198 * C2091 + C1531 * C3596) * C60 * C1618)) /
        C68;
    const double d2nezy101020 =
        (2 * Pi *
         ((C3109 * C328 + C3137 * C329 + C3138 * C1615) * C1090 +
          (C3110 * C328 + C3139 * C329 + C3916 * C1615) * C1452)) /
        C68;
    const double d2nezy101002 =
        (2 * Pi *
         (C3458 * C60 * C1090 +
          (C1651 * C1715 + C1648 * C2183 + C1641 * C2184 + C3844) * C60 *
              C1452)) /
        C68;
    const double d2nezy101110 = (2 * Pi *
                                 ((C3109 * C421 + C3137 * C422) * C1447 +
                                  (C3110 * C421 + C3139 * C422) * C1455 +
                                  (C3111 * C421 + C3868 * C422) * C1137)) /
                                C68;
    const double d2nezy101101 =
        (2 * Pi *
         (C3351 * C60 * C1447 + C3352 * C60 * C1455 +
          (C1528 * C2090 + C1534 * C2185 + C1286 * C3586) * C60 * C1137)) /
        C68;
    const double d2nezy101011 = (2 * Pi *
                                 ((C3351 * C421 + C3361 * C422) * C1090 +
                                  (C3352 * C421 + C3925 * C422) * C1452)) /
                                C68;
    const double d2nezy011200 = (2 * Pi *
                                 ((C3109 * C1060 + C3137 * C1504) * C1642 +
                                  (C3110 * C1060 + C3139 * C1504) * C1633 +
                                  (C3111 * C1060 + C3868 * C1504) * C1610)) /
                                C68;
    const double d2nezy011020 =
        (2 * Pi *
         (C3109 * C1650 + C3137 * C1646 + C3138 * C1638 +
          (C1198 * C2585 + C1531 * C3834) * C1624) *
         C1442) /
        C68;
    const double d2nezy011002 =
        (2 * Pi *
         (C3458 * C1060 +
          (C1651 * C2135 + C1648 * C2233 + C1641 * C2269 + C3910) * C1504) *
         C1442) /
        C68;
    const double d2nezy011110 =
        (2 * Pi *
         ((C3109 * C1501 + C3137 * C1507 + C3138 * C1134) * C1574 +
          (C3110 * C1501 + C3139 * C1507 + C3916 * C1134) * C1452)) /
        C68;
    const double d2nezy011101 = (2 * Pi *
                                 ((C3351 * C1060 + C3361 * C1504) * C1574 +
                                  (C3352 * C1060 + C3925 * C1504) * C1452)) /
                                C68;
    const double d2nezy011011 =
        (2 * Pi *
         (C3351 * C1501 + C3361 * C1507 +
          (C1528 * C2136 + C1534 * C2270 + C1286 * C3812) * C1134) *
         C1442) /
        C68;
    d2nezy[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(9.) * d2nezy110110;
    d2nezy[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(9.) * d2nezy110011;
    d2nezy[(Ai + 0) * matrix_size + Bi + 2] +=
        std::sqrt(3.0) * d2nezy110002 -
        (std::sqrt(0.75) * d2nezy110020 + std::sqrt(0.75) * d2nezy110200);
    d2nezy[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(9.) * d2nezy110101;
    d2nezy[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(2.25) * d2nezy110200 - std::sqrt(2.25) * d2nezy110020;
    d2nezy[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(9.) * d2nezy011110;
    d2nezy[(Ai + 1) * matrix_size + Bi + 1] += std::sqrt(9.) * d2nezy011011;
    d2nezy[(Ai + 1) * matrix_size + Bi + 2] +=
        std::sqrt(3.0) * d2nezy011002 -
        (std::sqrt(0.75) * d2nezy011020 + std::sqrt(0.75) * d2nezy011200);
    d2nezy[(Ai + 1) * matrix_size + Bi + 3] += std::sqrt(9.) * d2nezy011101;
    d2nezy[(Ai + 1) * matrix_size + Bi + 4] +=
        std::sqrt(2.25) * d2nezy011200 - std::sqrt(2.25) * d2nezy011020;
    d2nezy[(Ai + 2) * matrix_size + Bi + 0] +=
        std::sqrt(3.0) * d2nezy002110 -
        (std::sqrt(0.75) * d2nezy020110 + std::sqrt(0.75) * d2nezy200110);
    d2nezy[(Ai + 2) * matrix_size + Bi + 1] +=
        std::sqrt(3.0) * d2nezy002011 -
        (std::sqrt(0.75) * d2nezy020011 + std::sqrt(0.75) * d2nezy200011);
    d2nezy[(Ai + 2) * matrix_size + Bi + 2] +=
        0.25 * d2nezy200200 + 0.25 * d2nezy200020 - 0.5 * d2nezy200002 +
        0.25 * d2nezy020200 + 0.25 * d2nezy020020 - 0.5 * d2nezy020002 -
        0.5 * d2nezy002200 - 0.5 * d2nezy002020 + d2nezy002002;
    d2nezy[(Ai + 2) * matrix_size + Bi + 3] +=
        std::sqrt(3.0) * d2nezy002101 -
        (std::sqrt(0.75) * d2nezy020101 + std::sqrt(0.75) * d2nezy200101);
    d2nezy[(Ai + 2) * matrix_size + Bi + 4] +=
        std::sqrt(0.1875) * d2nezy200020 - std::sqrt(0.1875) * d2nezy200200 -
        std::sqrt(0.1875) * d2nezy020200 + std::sqrt(0.1875) * d2nezy020020 +
        std::sqrt(0.75) * d2nezy002200 - std::sqrt(0.75) * d2nezy002020;
    d2nezy[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(9.) * d2nezy101110;
    d2nezy[(Ai + 3) * matrix_size + Bi + 1] += std::sqrt(9.) * d2nezy101011;
    d2nezy[(Ai + 3) * matrix_size + Bi + 2] +=
        std::sqrt(3.0) * d2nezy101002 -
        (std::sqrt(0.75) * d2nezy101020 + std::sqrt(0.75) * d2nezy101200);
    d2nezy[(Ai + 3) * matrix_size + Bi + 3] += std::sqrt(9.) * d2nezy101101;
    d2nezy[(Ai + 3) * matrix_size + Bi + 4] +=
        std::sqrt(2.25) * d2nezy101200 - std::sqrt(2.25) * d2nezy101020;
    d2nezy[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(2.25) * d2nezy200110 - std::sqrt(2.25) * d2nezy020110;
    d2nezy[(Ai + 4) * matrix_size + Bi + 1] +=
        std::sqrt(2.25) * d2nezy200011 - std::sqrt(2.25) * d2nezy020011;
    d2nezy[(Ai + 4) * matrix_size + Bi + 2] +=
        std::sqrt(0.75) * d2nezy200002 -
        (std::sqrt(0.1875) * d2nezy200020 + std::sqrt(0.1875) * d2nezy200200) +
        std::sqrt(0.1875) * d2nezy020200 + std::sqrt(0.1875) * d2nezy020020 -
        std::sqrt(0.75) * d2nezy020002;
    d2nezy[(Ai + 4) * matrix_size + Bi + 3] +=
        std::sqrt(2.25) * d2nezy200101 - std::sqrt(2.25) * d2nezy020101;
    d2nezy[(Ai + 4) * matrix_size + Bi + 4] +=
        std::sqrt(0.5625) * d2nezy200200 - std::sqrt(0.5625) * d2nezy200020 -
        std::sqrt(0.5625) * d2nezy020200 + std::sqrt(0.5625) * d2nezy020020;
    const double d2nezz200200 =
        (2 * Pi *
         (C2906 * C60 * C61 + C2094 * C60 * C62 + C2425 * C60 * C63 +
          C2426 * C60 * C64 + C59 * (3 * C283 + C91 * C3468) * C60 * C65)) /
        C68;
    const double d2nezz200020 =
        (2 * Pi *
         ((C2906 * C328 + C2140 * C329 + C2926) * C331 +
          (C2094 * C328 + C2142 * C329 + C2927) * C332 +
          (C2425 * C328 + C2144 * C329 + C3676) * C1610)) /
        C68;
    const double d2nezz200002 =
        (2 * Pi *
         (C3382 * C60 * C331 + C3226 * C60 * C332 +
          (C380 * C2095 + C381 * C2191 + C3791) * C60 * C1610)) /
        C68;
    const double d2nezz200110 = (2 * Pi *
                                 ((C2906 * C421 + C2140 * C422) * C423 +
                                  (C2094 * C421 + C2142 * C422) * C424 +
                                  (C2425 * C421 + C2144 * C422) * C425 +
                                  (C2426 * C421 + C3693 * C422) * C1618)) /
                                C68;
    const double d2nezz200101 =
        (2 * Pi *
         (C3232 * C60 * C423 + C2976 * C60 * C424 + C2977 * C60 * C425 +
          (C454 * C2096 + C455 * C3699) * C60 * C1618)) /
        C68;
    const double d2nezz200011 = (2 * Pi *
                                 ((C3232 * C421 + C2994 * C422) * C331 +
                                  (C2976 * C421 + C2995 * C422) * C332 +
                                  (C2977 * C421 + C3809 * C422) * C1610)) /
                                C68;
    const double d2nezz020200 =
        (2 * Pi *
         ((C2906 * C506 + C2140 * C507 + C2926) * C1642 +
          (C2094 * C506 + C2142 * C507 + C2927) * C1633 +
          (C2425 * C506 + C2144 * C507 + C3676) * C1610)) /
        C68;
    const double d2nezz020020 =
        (2 * Pi *
         (C2906 * C532 + C2140 * C533 + C2461 * C534 + C2587 * C535 +
          C59 * (3 * C594 + C96 * C3504) * C536) *
         C1442) /
        C68;
    const double d2nezz020002 =
        (2 * Pi *
         (C3382 * C506 + C3252 * C507 +
          (C380 * C2141 + C381 * C2273 + C3813) * C1615) *
         C1442) /
        C68;
    const double d2nezz020110 =
        (2 * Pi *
         ((C2906 * C695 + C2140 * C696 + C2461 * C697 + C3025) * C1574 +
          (C2094 * C695 + C2142 * C696 + C2462 * C697 + C3822) * C1452)) /
        C68;
    const double d2nezz020101 =
        (2 * Pi *
         ((C3232 * C506 + C2994 * C507 + C3038 * C1615) * C1574 +
          (C2976 * C506 + C2995 * C507 + C3831 * C1615) * C1452)) /
        C68;
    const double d2nezz020011 = (2 * Pi *
                                 (C3232 * C695 + C2994 * C696 + C3038 * C697 +
                                  (C454 * C2250 + C455 * C3740) * C1624) *
                                 C1442) /
                                C68;
    const double d2nezz002200 =
        (2 * Pi *
         (C3420 * C60 * C1642 + C3288 * C60 * C1633 +
          (C806 * C2095 + C807 * C2191 + C3791) * C60 * C1610)) /
        C68;
    const double d2nezz002020 =
        (2 * Pi *
         (C3420 * C328 + C3296 * C329 +
          (C806 * C2141 + C807 * C2273 + C3813) * C1615) *
         C1442) /
        C68;
    const double d2nezz002002 =
        (2 * Pi *
         (C849 * C2424 + C850 * C2186 + C851 * C2502 + C852 * C3068 +
          C853 * (3 * C917 + C925 + C925 +
                  C97 * (2 * C896 + C922 + C922 +
                         C97 * (C233 + C900 + C900 +
                                C97 * (-4 * C173 + C97 * C2427))))) *
         C60 * C1442) /
        C68;
    const double d2nezz002110 =
        (2 * Pi *
         ((C3420 * C421 + C3296 * C422) * C1574 +
          (C3288 * C421 + (C806 * C1794 + C807 * C2238 + C3839) * C422) *
              C1452)) /
        C68;
    const double d2nezz002101 =
        (2 * Pi *
         (C3554 * C60 * C1574 +
          (C973 * C1722 + C974 * C2189 + C975 * C2504 + C3908) * C60 * C1452)) /
        C68;
    const double d2nezz002011 =
        (2 * Pi *
         (C3554 * C421 +
          (C973 * C1792 + C974 * C2236 + C975 * C2612 + C3911) * C422) *
         C1442) /
        C68;
    const double d2nezz110200 = (2 * Pi *
                                 ((C2906 * C1060 + C2140 * C1504) * C1649 +
                                  (C2094 * C1060 + C2142 * C1504) * C1644 +
                                  (C2425 * C1060 + C2144 * C1504) * C1635 +
                                  (C2426 * C1060 + C3693 * C1504) * C1618)) /
                                C68;
    const double d2nezz110020 =
        (2 * Pi *
         ((C2906 * C1650 + C2140 * C1646 + C2461 * C1638 + C3025) * C1090 +
          (C2094 * C1650 + C2142 * C1646 + C2462 * C1638 + C3822) * C1452)) /
        C68;
    const double d2nezz110002 =
        (2 * Pi *
         ((C3382 * C1060 + C3252 * C1504) * C1090 +
          (C3226 * C1060 + (C380 * C1794 + C381 * C2238 + C3839) * C1504) *
              C1452)) /
        C68;
    const double d2nezz110110 =
        (2 * Pi *
         ((C2906 * C1501 + C2140 * C1507 + C2461 * C1134) * C1447 +
          (C2094 * C1501 + C2142 * C1507 + C2462 * C1134) * C1455 +
          (C2425 * C1501 + C2144 * C1507 + C3578 * C1134) * C1137)) /
        C68;
    const double d2nezz110101 = (2 * Pi *
                                 ((C3232 * C1060 + C2994 * C1504) * C1447 +
                                  (C2976 * C1060 + C2995 * C1504) * C1455 +
                                  (C2977 * C1060 + C3809 * C1504) * C1137)) /
                                C68;
    const double d2nezz110011 =
        (2 * Pi *
         ((C3232 * C1501 + C2994 * C1507 + C3038 * C1134) * C1090 +
          (C2976 * C1501 + C2995 * C1507 + C3831 * C1134) * C1452)) /
        C68;
    const double d2nezz101200 =
        (2 * Pi *
         (C3327 * C60 * C1649 + C3113 * C60 * C1644 + C3114 * C60 * C1635 +
          (C1198 * C2096 + C1531 * C3699) * C60 * C1618)) /
        C68;
    const double d2nezz101020 =
        (2 * Pi *
         ((C3327 * C328 + C3140 * C329 + C3141 * C1615) * C1090 +
          (C3113 * C328 + C3142 * C329 + C3860 * C1615) * C1452)) /
        C68;
    const double d2nezz101002 =
        (2 * Pi *
         (C3565 * C60 * C1090 +
          (C1651 * C1722 + C1648 * C2189 + C1641 * C2504 + C3908) * C60 *
              C1452)) /
        C68;
    const double d2nezz101110 = (2 * Pi *
                                 ((C3327 * C421 + C3140 * C422) * C1447 +
                                  (C3113 * C421 + C3142 * C422) * C1455 +
                                  (C3114 * C421 + C3869 * C422) * C1137)) /
                                C68;
    const double d2nezz101101 =
        (2 * Pi *
         (C3462 * C60 * C1447 + C3354 * C60 * C1455 +
          (C1528 * C2095 + C1534 * C2191 + C1286 * C3684) * C60 * C1137)) /
        C68;
    const double d2nezz101011 = (2 * Pi *
                                 ((C3462 * C421 + C3362 * C422) * C1090 +
                                  (C3354 * C421 + C3926 * C422) * C1452)) /
                                C68;
    const double d2nezz011200 = (2 * Pi *
                                 ((C3327 * C1060 + C3140 * C1504) * C1642 +
                                  (C3113 * C1060 + C3142 * C1504) * C1633 +
                                  (C3114 * C1060 + C3869 * C1504) * C1610)) /
                                C68;
    const double d2nezz011020 =
        (2 * Pi *
         (C3327 * C1650 + C3140 * C1646 + C3141 * C1638 +
          (C1198 * C2250 + C1531 * C3740) * C1624) *
         C1442) /
        C68;
    const double d2nezz011002 =
        (2 * Pi *
         (C3565 * C1060 +
          (C1651 * C1792 + C1648 * C2236 + C1641 * C2612 + C3911) * C1504) *
         C1442) /
        C68;
    const double d2nezz011110 =
        (2 * Pi *
         ((C3327 * C1501 + C3140 * C1507 + C3141 * C1134) * C1574 +
          (C3113 * C1501 + C3142 * C1507 + C3860 * C1134) * C1452)) /
        C68;
    const double d2nezz011101 = (2 * Pi *
                                 ((C3462 * C1060 + C3362 * C1504) * C1574 +
                                  (C3354 * C1060 + C3926 * C1504) * C1452)) /
                                C68;
    const double d2nezz011011 =
        (2 * Pi *
         (C3462 * C1501 + C3362 * C1507 +
          (C1528 * C2141 + C1534 * C2273 + C1286 * C3716) * C1134) *
         C1442) /
        C68;
    d2nezz[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(9.) * d2nezz110110;
    d2nezz[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(9.) * d2nezz110011;
    d2nezz[(Ai + 0) * matrix_size + Bi + 2] +=
        std::sqrt(3.0) * d2nezz110002 -
        (std::sqrt(0.75) * d2nezz110020 + std::sqrt(0.75) * d2nezz110200);
    d2nezz[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(9.) * d2nezz110101;
    d2nezz[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(2.25) * d2nezz110200 - std::sqrt(2.25) * d2nezz110020;
    d2nezz[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(9.) * d2nezz011110;
    d2nezz[(Ai + 1) * matrix_size + Bi + 1] += std::sqrt(9.) * d2nezz011011;
    d2nezz[(Ai + 1) * matrix_size + Bi + 2] +=
        std::sqrt(3.0) * d2nezz011002 -
        (std::sqrt(0.75) * d2nezz011020 + std::sqrt(0.75) * d2nezz011200);
    d2nezz[(Ai + 1) * matrix_size + Bi + 3] += std::sqrt(9.) * d2nezz011101;
    d2nezz[(Ai + 1) * matrix_size + Bi + 4] +=
        std::sqrt(2.25) * d2nezz011200 - std::sqrt(2.25) * d2nezz011020;
    d2nezz[(Ai + 2) * matrix_size + Bi + 0] +=
        std::sqrt(3.0) * d2nezz002110 -
        (std::sqrt(0.75) * d2nezz020110 + std::sqrt(0.75) * d2nezz200110);
    d2nezz[(Ai + 2) * matrix_size + Bi + 1] +=
        std::sqrt(3.0) * d2nezz002011 -
        (std::sqrt(0.75) * d2nezz020011 + std::sqrt(0.75) * d2nezz200011);
    d2nezz[(Ai + 2) * matrix_size + Bi + 2] +=
        0.25 * d2nezz200200 + 0.25 * d2nezz200020 - 0.5 * d2nezz200002 +
        0.25 * d2nezz020200 + 0.25 * d2nezz020020 - 0.5 * d2nezz020002 -
        0.5 * d2nezz002200 - 0.5 * d2nezz002020 + d2nezz002002;
    d2nezz[(Ai + 2) * matrix_size + Bi + 3] +=
        std::sqrt(3.0) * d2nezz002101 -
        (std::sqrt(0.75) * d2nezz020101 + std::sqrt(0.75) * d2nezz200101);
    d2nezz[(Ai + 2) * matrix_size + Bi + 4] +=
        std::sqrt(0.1875) * d2nezz200020 - std::sqrt(0.1875) * d2nezz200200 -
        std::sqrt(0.1875) * d2nezz020200 + std::sqrt(0.1875) * d2nezz020020 +
        std::sqrt(0.75) * d2nezz002200 - std::sqrt(0.75) * d2nezz002020;
    d2nezz[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(9.) * d2nezz101110;
    d2nezz[(Ai + 3) * matrix_size + Bi + 1] += std::sqrt(9.) * d2nezz101011;
    d2nezz[(Ai + 3) * matrix_size + Bi + 2] +=
        std::sqrt(3.0) * d2nezz101002 -
        (std::sqrt(0.75) * d2nezz101020 + std::sqrt(0.75) * d2nezz101200);
    d2nezz[(Ai + 3) * matrix_size + Bi + 3] += std::sqrt(9.) * d2nezz101101;
    d2nezz[(Ai + 3) * matrix_size + Bi + 4] +=
        std::sqrt(2.25) * d2nezz101200 - std::sqrt(2.25) * d2nezz101020;
    d2nezz[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(2.25) * d2nezz200110 - std::sqrt(2.25) * d2nezz020110;
    d2nezz[(Ai + 4) * matrix_size + Bi + 1] +=
        std::sqrt(2.25) * d2nezz200011 - std::sqrt(2.25) * d2nezz020011;
    d2nezz[(Ai + 4) * matrix_size + Bi + 2] +=
        std::sqrt(0.75) * d2nezz200002 -
        (std::sqrt(0.1875) * d2nezz200020 + std::sqrt(0.1875) * d2nezz200200) +
        std::sqrt(0.1875) * d2nezz020200 + std::sqrt(0.1875) * d2nezz020020 -
        std::sqrt(0.75) * d2nezz020002;
    d2nezz[(Ai + 4) * matrix_size + Bi + 3] +=
        std::sqrt(2.25) * d2nezz200101 - std::sqrt(2.25) * d2nezz020101;
    d2nezz[(Ai + 4) * matrix_size + Bi + 4] +=
        std::sqrt(0.5625) * d2nezz200200 - std::sqrt(0.5625) * d2nezz200020 -
        std::sqrt(0.5625) * d2nezz020200 + std::sqrt(0.5625) * d2nezz020020;
}
