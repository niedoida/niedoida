/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_sspp_AA.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
void second_derivative_ee_0011_11(const double ae,
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
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    const double C1587 = ae + be;
    const double C1586 = ae * be;
    const double C1585 = xA - xB;
    const double C1596 = yA - yB;
    const double C1599 = zA - zB;
    const double C1602 = p + q;
    const double C1601 = p * q;
    const double C1607 = xP - xQ;
    const double C1606 = bs[2];
    const double C1614 = std::pow(ae, 2);
    const double C1612 = bs[3];
    const double C1625 = yP - yQ;
    const double C1634 = zP - zQ;
    const double C63 = bs[0];
    const double C1792 = ce + de;
    const double C1791 = ce * de;
    const double C1790 = xC - xD;
    const double C1805 = yC - yD;
    const double C1814 = zC - zD;
    const double C53 = std::exp(-(std::pow(C1585, 2) * C1586) / C1587);
    const double C55 = std::exp(-(std::pow(C1596, 2) * C1586) / C1587);
    const double C54 = std::exp(-(std::pow(C1599, 2) * C1586) / C1587);
    const double C1603 = 2 * C1601;
    const double C1615 = C1607 * ae;
    const double C1611 = std::pow(C1607, 2);
    const double C1628 = C1625 * ae;
    const double C1627 = C1607 * C1625;
    const double C1644 = C1625 * C1607;
    const double C1649 = std::pow(C1625, 2);
    const double C1637 = C1634 * ae;
    const double C1636 = C1607 * C1634;
    const double C1653 = C1625 * C1634;
    const double C1658 = C1634 * C1607;
    const double C1663 = C1634 * C1625;
    const double C1668 = std::pow(C1634, 2);
    const double C1802 = 2 * C1792;
    const double C1856 = std::pow(C1792, 2);
    const double C1793 = std::pow(C1790, 2);
    const double C1855 = C1790 * de;
    const double C1854 = C1790 * ce;
    const double C1827 = std::pow(C1805, 2);
    const double C1860 = C1805 * de;
    const double C1858 = C1805 * ce;
    const double C1844 = std::pow(C1814, 2);
    const double C1861 = C1814 * de;
    const double C1859 = C1814 * ce;
    const double C61 =
        -((C53 - (C1585 * 2 * C1586 * C1585 * C53) / C1587) * 2 * C1586) /
        C1587;
    const double C62 = -(2 * C1586 * C1585 * C53) / C1587;
    const double C89 = -(2 * C1586 * (yA - yB) * C55) / C1587;
    const double C148 =
        -((C55 - (C1596 * 2 * C1586 * C1596 * C55) / C1587) * 2 * C1586) /
        C1587;
    const double C110 = -(2 * C1586 * (zA - zB) * C54) / C1587;
    const double C220 =
        -((C54 - (C1599 * 2 * C1586 * C1599 * C54) / C1587) * 2 * C1586) /
        C1587;
    const double C1605 = C1603 / C1602;
    const double C69 =
        ((std::pow(xP - xQ, 2) * bs[2] * std::pow(C1603 / C1602, 2) -
          (bs[1] * C1603) / C1602) *
         std::pow(ae, 2)) /
        std::pow(C1587, 2);
    const double C64 = -(C1607 * bs[1] * C1603) / C1602;
    const double C249 = -(C1625 * bs[1] * C1603) / C1602;
    const double C445 = -(C1634 * bs[1] * C1603) / C1602;
    const double C1617 = C1612 * C1615;
    const double C66 = (-(bs[1] * C1615 * C1603) / C1602) / C1587;
    const double C1630 = C1612 * C1628;
    const double C90 = (-(bs[1] * C1628 * C1603) / C1602) / C1587;
    const double C1629 = C1627 * C1614;
    const double C1645 = C1644 * C1614;
    const double C1639 = C1612 * C1637;
    const double C111 = (-(bs[1] * C1637 * C1603) / C1602) / C1587;
    const double C1638 = C1636 * C1614;
    const double C1654 = C1653 * C1614;
    const double C1659 = C1658 * C1614;
    const double C1664 = C1663 * C1614;
    const double C1857 = std::pow(C1802, -1);
    const double C1863 = 2 * C1856;
    const double C1794 = C1793 * C1791;
    const double C1828 = C1827 * C1791;
    const double C1845 = C1844 * C1791;
    const double C1608 = std::pow(C1605, 2);
    const double C1613 = -C1605;
    const double C73 = C62 * C66;
    const double C153 = C89 * C90;
    const double C225 = C110 * C111;
    const double C1795 = C1794 / C1792;
    const double C1829 = C1828 / C1792;
    const double C1846 = C1845 / C1792;
    const double C1610 = C1606 * C1608;
    const double C70 = (2 * ae * C1608 * C1606 * C1607 * ae +
                        C1607 *
                            (C1606 * C1608 +
                             std::pow(C1607, 2) * bs[3] * std::pow(-C1605, 3)) *
                            std::pow(ae, 2)) /
                       std::pow(C1587, 2);
    const double C93 =
        (C1608 * C1606 * C1607 * (yP - yQ) * C1614) / std::pow(C1587, 2);
    const double C114 =
        (C1608 * C1606 * C1607 * (zP - zQ) * C1614) / std::pow(C1587, 2);
    const double C131 =
        (C1608 * C1606 * C1625 * C1607 * C1614) / std::pow(C1587, 2);
    const double C149 =
        ((std::pow(C1625, 2) * C1606 * C1608 - (bs[1] * C1603) / C1602) *
         C1614) /
        std::pow(C1587, 2);
    const double C169 =
        (C1608 * C1606 * C1625 * C1634 * C1614) / std::pow(C1587, 2);
    const double C186 =
        (C1608 * C1606 * C1634 * C1607 * C1614) / std::pow(C1587, 2);
    const double C203 =
        (C1608 * C1606 * C1634 * C1625 * C1614) / std::pow(C1587, 2);
    const double C221 =
        ((std::pow(C1634, 2) * C1606 * C1608 - (bs[1] * C1603) / C1602) *
         C1614) /
        std::pow(C1587, 2);
    const double C67 = (C1607 * C1608 * C1606 * C1615) / C1587 -
                       (ae * bs[1] * C1603) / (C1602 * C1587);
    const double C91 = (C1607 * C1608 * C1606 * C1628) / C1587;
    const double C112 = (C1607 * C1608 * C1606 * C1637) / C1587;
    const double C251 = (C1625 * C1608 * C1606 * C1615) / C1587;
    const double C275 = (C1625 * C1608 * C1606 * C1628) / C1587 -
                        (ae * bs[1] * C1603) / (C1602 * C1587);
    const double C297 = (C1625 * C1608 * C1606 * C1637) / C1587;
    const double C447 = (C1634 * C1608 * C1606 * C1615) / C1587;
    const double C471 = (C1634 * C1608 * C1606 * C1628) / C1587;
    const double C493 = (C1634 * C1608 * C1606 * C1637) / C1587 -
                        (ae * bs[1] * C1603) / (C1602 * C1587);
    const double C1616 = std::pow(C1613, 3);
    const double C1796 = -C1795;
    const double C1830 = -C1829;
    const double C1847 = -C1846;
    const double C1618 = C1610 * ae;
    const double C65 = C1610 * C1611 - (bs[1] * C1603) / C1602;
    const double C250 = C1625 * C1607 * C1610;
    const double C446 = C1634 * C1607 * C1610;
    const double C805 = C1610 * C1649 - (bs[1] * C1603) / C1602;
    const double C951 = C1634 * C1625 * C1610;
    const double C1454 = C1610 * C1668 - (bs[1] * C1603) / C1602;
    const double C74 = C62 * C67;
    const double C154 = C89 * C91;
    const double C226 = C110 * C112;
    const double C256 = C62 * C251;
    const double C342 = C89 * C275;
    const double C424 = C110 * C297;
    const double C452 = C62 * C447;
    const double C538 = C89 * C471;
    const double C620 = C110 * C493;
    const double C1619 = C1616 * C1617;
    const double C1631 = C1616 * C1630;
    const double C1640 = C1616 * C1639;
    const double C94 = (ae * C1608 * C1606 * C1625 * ae +
                        C1607 * C1616 * C1612 * C1607 * C1625 * C1614) /
                       std::pow(C1587, 2);
    const double C115 = (ae * C1608 * C1606 * C1634 * ae +
                         C1607 * C1616 * C1612 * C1607 * C1634 * C1614) /
                        std::pow(C1587, 2);
    const double C132 = (ae * C1608 * C1606 * C1628 +
                         C1607 * C1616 * C1612 * C1625 * C1607 * C1614) /
                        std::pow(C1587, 2);
    const double C150 =
        (C1607 * (C1610 + std::pow(C1625, 2) * C1612 * C1616) * C1614) /
        std::pow(C1587, 2);
    const double C151 =
        ((C1610 + C1649 * C1612 * C1616) * C1614 +
         (C1612 * C1616 + C1649 * bs[4] * std::pow(C1605, 4)) * C1614 * C1611) /
        std::pow(C1587, 2);
    const double C170 =
        (C1607 * C1616 * C1612 * C1625 * C1634 * C1614) / std::pow(C1587, 2);
    const double C171 =
        (C1616 * C1612 * C1654 + std::pow(C1605, 4) * bs[4] * C1654 * C1611) /
        std::pow(C1587, 2);
    const double C187 = (ae * C1608 * C1606 * C1637 +
                         C1607 * C1616 * C1612 * C1634 * C1607 * C1614) /
                        std::pow(C1587, 2);
    const double C204 =
        (C1607 * C1616 * C1612 * C1634 * C1625 * C1614) / std::pow(C1587, 2);
    const double C205 =
        (C1616 * C1612 * C1664 + std::pow(C1605, 4) * bs[4] * C1664 * C1611) /
        std::pow(C1587, 2);
    const double C222 =
        (C1607 * (C1610 + std::pow(C1634, 2) * C1612 * C1616) * C1614) /
        std::pow(C1587, 2);
    const double C223 =
        ((C1610 + C1668 * C1612 * C1616) * C1614 +
         (C1612 * C1616 + C1668 * bs[4] * std::pow(C1605, 4)) * C1614 * C1611) /
        std::pow(C1587, 2);
    const double C253 =
        (C1625 * (C1610 + C1611 * C1612 * C1616) * C1614) / std::pow(C1587, 2);
    const double C277 =
        (ae * C1608 * C1606 * C1615 + C1625 * C1616 * C1612 * C1629) /
        std::pow(C1587, 2);
    const double C299 = (C1625 * C1616 * C1612 * C1638) / std::pow(C1587, 2);
    const double C319 =
        (ae * C1608 * C1606 * C1615 + C1625 * C1616 * C1612 * C1645) /
        std::pow(C1587, 2);
    const double C339 = (2 * ae * C1608 * C1606 * C1628 +
                         C1625 * (C1610 + C1649 * C1612 * C1616) * C1614) /
                        std::pow(C1587, 2);
    const double C361 =
        (ae * C1608 * C1606 * C1637 + C1625 * C1616 * C1612 * C1654) /
        std::pow(C1587, 2);
    const double C381 = (C1625 * C1616 * C1612 * C1659) / std::pow(C1587, 2);
    const double C401 =
        (ae * C1608 * C1606 * C1637 + C1625 * C1616 * C1612 * C1664) /
        std::pow(C1587, 2);
    const double C421 =
        (C1625 * (C1610 + C1668 * C1612 * C1616) * C1614) / std::pow(C1587, 2);
    const double C422 =
        (C1625 * C1607 * (C1612 * C1616 + C1668 * bs[4] * std::pow(C1605, 4)) *
         C1614) /
        std::pow(C1587, 2);
    const double C449 =
        (C1634 * (C1610 + C1611 * C1612 * C1616) * C1614) / std::pow(C1587, 2);
    const double C473 = (C1634 * C1616 * C1612 * C1629) / std::pow(C1587, 2);
    const double C495 =
        (ae * C1608 * C1606 * C1615 + C1634 * C1616 * C1612 * C1638) /
        std::pow(C1587, 2);
    const double C515 = (C1634 * C1616 * C1612 * C1645) / std::pow(C1587, 2);
    const double C535 =
        (C1634 * (C1610 + C1649 * C1612 * C1616) * C1614) / std::pow(C1587, 2);
    const double C536 =
        (C1634 * C1607 * (C1612 * C1616 + C1649 * bs[4] * std::pow(C1605, 4)) *
         C1614) /
        std::pow(C1587, 2);
    const double C557 =
        (ae * C1608 * C1606 * C1628 + C1634 * C1616 * C1612 * C1654) /
        std::pow(C1587, 2);
    const double C577 =
        (ae * C1608 * C1606 * C1615 + C1634 * C1616 * C1612 * C1659) /
        std::pow(C1587, 2);
    const double C597 =
        (ae * C1608 * C1606 * C1628 + C1634 * C1616 * C1612 * C1664) /
        std::pow(C1587, 2);
    const double C617 = (2 * ae * C1608 * C1606 * C1637 +
                         C1634 * (C1610 + C1668 * C1612 * C1616) * C1614) /
                        std::pow(C1587, 2);
    const double C807 =
        ((C1610 + C1611 * C1612 * C1616) * C1614 +
         (C1612 * C1616 + C1611 * bs[4] * std::pow(C1605, 4)) * C1614 * C1649) /
        std::pow(C1587, 2);
    const double C840 =
        (C1616 * C1612 * C1638 + std::pow(C1605, 4) * bs[4] * C1638 * C1649) /
        std::pow(C1587, 2);
    const double C901 =
        (C1616 * C1612 * C1659 + std::pow(C1605, 4) * bs[4] * C1659 * C1649) /
        std::pow(C1587, 2);
    const double C931 =
        ((C1610 + C1668 * C1612 * C1616) * C1614 +
         (C1612 * C1616 + C1668 * bs[4] * std::pow(C1605, 4)) * C1614 * C1649) /
        std::pow(C1587, 2);
    const double C953 =
        (C1634 * C1625 * (C1612 * C1616 + C1611 * bs[4] * std::pow(C1605, 4)) *
         C1614) /
        std::pow(C1587, 2);
    const double C1456 =
        ((C1610 + C1611 * C1612 * C1616) * C1614 +
         (C1612 * C1616 + C1611 * bs[4] * std::pow(C1605, 4)) * C1614 * C1668) /
        std::pow(C1587, 2);
    const double C1473 =
        (C1616 * C1612 * C1629 + std::pow(C1605, 4) * bs[4] * C1629 * C1668) /
        std::pow(C1587, 2);
    const double C1504 =
        (C1616 * C1612 * C1645 + std::pow(C1605, 4) * bs[4] * C1645 * C1668) /
        std::pow(C1587, 2);
    const double C1519 =
        ((C1610 + C1649 * C1612 * C1616) * C1614 +
         (C1612 * C1616 + C1649 * bs[4] * std::pow(C1605, 4)) * C1614 * C1668) /
        std::pow(C1587, 2);
    const double C1797 = std::exp(C1796);
    const double C1831 = std::exp(C1830);
    const double C1848 = std::exp(C1847);
    const double C1620 = C1607 * C1619;
    const double C254 =
        (2 * ae * C1625 * C1619 +
         C1607 * C1625 * (C1612 * C1616 + C1611 * bs[4] * std::pow(C1605, 4)) *
             C1614) /
        std::pow(C1587, 2);
    const double C450 =
        (2 * ae * C1634 * C1619 +
         C1607 * C1634 * (C1612 * C1616 + C1611 * bs[4] * std::pow(C1605, 4)) *
             C1614) /
        std::pow(C1587, 2);
    const double C824 =
        (C1616 * C1612 * C1629 + ae * C1625 * C1619 +
         C1625 * (ae * C1619 + C1625 * std::pow(C1605, 4) * bs[4] * C1629)) /
        std::pow(C1587, 2);
    const double C855 =
        (C1616 * C1612 * C1645 + ae * C1625 * C1619 +
         C1625 * (ae * C1619 + C1625 * std::pow(C1605, 4) * bs[4] * C1645)) /
        std::pow(C1587, 2);
    const double C974 =
        (C1634 * (ae * C1619 + C1625 * std::pow(C1605, 4) * bs[4] * C1629)) /
        std::pow(C1587, 2);
    const double C994 = (ae * C1625 * C1619 +
                         C1634 * C1625 * std::pow(C1605, 4) * bs[4] * C1638) /
                        std::pow(C1587, 2);
    const double C1013 = (ae * C1634 * C1619 +
                          C1625 * C1634 * std::pow(C1605, 4) * bs[4] * C1645) /
                         std::pow(C1587, 2);
    const double C1071 = (ae * C1625 * C1619 +
                          C1634 * C1625 * std::pow(C1605, 4) * bs[4] * C1659) /
                         std::pow(C1587, 2);
    const double C1489 =
        (C1616 * C1612 * C1638 + ae * C1634 * C1619 +
         C1634 * (ae * C1619 + C1634 * std::pow(C1605, 4) * bs[4] * C1638)) /
        std::pow(C1587, 2);
    const double C1550 =
        (C1616 * C1612 * C1659 + ae * C1634 * C1619 +
         C1634 * (ae * C1619 + C1634 * std::pow(C1605, 4) * bs[4] * C1659)) /
        std::pow(C1587, 2);
    const double C806 = (C1608 * C1606 * C1615 + C1619 * C1649) / C1587;
    const double C952 = (C1634 * C1625 * C1619) / C1587;
    const double C1455 = (C1608 * C1606 * C1615 + C1619 * C1668) / C1587;
    const double C1710 = C1625 * C1631;
    const double C95 =
        (C1616 * C1612 * C1629 + ae * C1607 * C1631 +
         C1607 * (ae * C1631 + C1607 * std::pow(C1605, 4) * bs[4] * C1629)) /
        std::pow(C1587, 2);
    const double C133 =
        (C1616 * C1612 * C1645 + ae * C1607 * C1631 +
         C1607 * (ae * C1631 + C1607 * std::pow(C1605, 4) * bs[4] * C1645)) /
        std::pow(C1587, 2);
    const double C340 =
        (2 * ae * C1607 * C1631 +
         C1625 * C1607 * (C1612 * C1616 + C1649 * bs[4] * std::pow(C1605, 4)) *
             C1614) /
        std::pow(C1587, 2);
    const double C474 =
        (C1634 * (ae * C1631 + C1607 * std::pow(C1605, 4) * bs[4] * C1629)) /
        std::pow(C1587, 2);
    const double C516 =
        (C1634 * (ae * C1631 + C1607 * std::pow(C1605, 4) * bs[4] * C1645)) /
        std::pow(C1587, 2);
    const double C558 = (ae * C1607 * C1631 +
                         C1634 * C1607 * std::pow(C1605, 4) * bs[4] * C1654) /
                        std::pow(C1587, 2);
    const double C598 = (ae * C1607 * C1631 +
                         C1634 * C1607 * std::pow(C1605, 4) * bs[4] * C1664) /
                        std::pow(C1587, 2);
    const double C1032 =
        (2 * ae * C1634 * C1631 +
         C1625 * C1634 * (C1612 * C1616 + C1649 * bs[4] * std::pow(C1605, 4)) *
             C1614) /
        std::pow(C1587, 2);
    const double C1535 =
        (C1616 * C1612 * C1654 + ae * C1634 * C1631 +
         C1634 * (ae * C1631 + C1634 * std::pow(C1605, 4) * bs[4] * C1654)) /
        std::pow(C1587, 2);
    const double C1565 =
        (C1616 * C1612 * C1664 + ae * C1634 * C1631 +
         C1634 * (ae * C1631 + C1634 * std::pow(C1605, 4) * bs[4] * C1664)) /
        std::pow(C1587, 2);
    const double C92 = (C1608 * C1606 * C1628 + C1631 * C1611) / C1587;
    const double C276 = (C1625 * C1607 * C1631 + C1607 * C1610 * ae) / C1587;
    const double C472 = (C1634 * C1607 * C1631) / C1587;
    const double C1472 = (C1608 * C1606 * C1628 + C1631 * C1668) / C1587;
    const double C1735 = C1634 * C1640;
    const double C116 =
        (C1616 * C1612 * C1638 + ae * C1607 * C1640 +
         C1607 * (ae * C1640 + C1607 * std::pow(C1605, 4) * bs[4] * C1638)) /
        std::pow(C1587, 2);
    const double C188 =
        (C1616 * C1612 * C1659 + ae * C1607 * C1640 +
         C1607 * (ae * C1640 + C1607 * std::pow(C1605, 4) * bs[4] * C1659)) /
        std::pow(C1587, 2);
    const double C300 =
        (C1625 * (ae * C1640 + C1607 * std::pow(C1605, 4) * bs[4] * C1638)) /
        std::pow(C1587, 2);
    const double C362 = (ae * C1607 * C1640 +
                         C1625 * C1607 * std::pow(C1605, 4) * bs[4] * C1654) /
                        std::pow(C1587, 2);
    const double C382 =
        (C1625 * (ae * C1640 + C1607 * std::pow(C1605, 4) * bs[4] * C1659)) /
        std::pow(C1587, 2);
    const double C402 = (ae * C1607 * C1640 +
                         C1625 * C1607 * std::pow(C1605, 4) * bs[4] * C1664) /
                        std::pow(C1587, 2);
    const double C618 =
        (2 * ae * C1607 * C1640 +
         C1634 * C1607 * (C1612 * C1616 + C1668 * bs[4] * std::pow(C1605, 4)) *
             C1614) /
        std::pow(C1587, 2);
    const double C886 =
        (C1616 * C1612 * C1654 + ae * C1625 * C1640 +
         C1625 * (ae * C1640 + C1625 * std::pow(C1605, 4) * bs[4] * C1654)) /
        std::pow(C1587, 2);
    const double C916 =
        (C1616 * C1612 * C1664 + ae * C1625 * C1640 +
         C1625 * (ae * C1640 + C1625 * std::pow(C1605, 4) * bs[4] * C1664)) /
        std::pow(C1587, 2);
    const double C1052 =
        (ae * (C1634 * C1640 + C1618) +
         C1625 * (ae * C1631 + C1634 * std::pow(C1605, 4) * bs[4] * C1654)) /
        std::pow(C1587, 2);
    const double C1109 =
        (2 * ae * C1625 * C1640 +
         C1634 * C1625 * (C1612 * C1616 + C1668 * bs[4] * std::pow(C1605, 4)) *
             C1614) /
        std::pow(C1587, 2);
    const double C113 = (C1608 * C1606 * C1637 + C1640 * C1611) / C1587;
    const double C298 = (C1625 * C1607 * C1640) / C1587;
    const double C494 = (C1634 * C1607 * C1640 + C1607 * C1610 * ae) / C1587;
    const double C839 = (C1608 * C1606 * C1637 + C1640 * C1649) / C1587;
    const double C993 = (C1634 * C1625 * C1640 + C1625 * C1610 * ae) / C1587;
    const double C1864 = C1857 * C1797;
    const double C1862 = C1797 * C1854;
    const double C247 = -(C1797 * C1855) / C1792;
    const double C1866 = C1857 * C1831;
    const double C1865 = C1831 * C1858;
    const double C639 = -(C1831 * C1860) / C1792;
    const double C1868 = C1857 * C1848;
    const double C1867 = C1848 * C1859;
    const double C1129 = -(C1848 * C1861) / C1792;
    const double C1621 = C1620 + C1618;
    const double C809 = C62 * C806;
    const double C955 = C62 * C952;
    const double C1458 = C62 * C1455;
    const double C1711 = C1710 + C1618;
    const double C155 = C89 * C92;
    const double C343 = C89 * C276;
    const double C539 = C89 * C472;
    const double C1521 = C89 * C1472;
    const double C1736 = C1735 + C1618;
    const double C227 = C110 * C113;
    const double C425 = C110 * C298;
    const double C621 = C110 * C494;
    const double C933 = C110 * C839;
    const double C1111 = C110 * C993;
    const double C60 = C1864 / C1802;
    const double C58 = C1797 / C1802 - (C1862 * C1855) / C1856;
    const double C59 = C1862 / C1863 - (C1864 * C1855) / C1792;
    const double C641 = C1862 / C1792;
    const double C803 = C1866 / C1802;
    const double C245 = C1865 / C1792;
    const double C801 = C1831 / C1802 - (C1865 * C1860) / C1856;
    const double C802 = C1865 / C1863 - (C1866 * C1860) / C1792;
    const double C1453 = C1868 / C1802;
    const double C443 = C1867 / C1792;
    const double C1451 = C1848 / C1802 - (C1867 * C1861) / C1856;
    const double C1452 = C1867 / C1863 - (C1868 * C1861) / C1792;
    const double C1622 = ae * C1621;
    const double C68 =
        (C1608 * C1606 * C1615 + C1607 * C1621 + C1607 * C1610 * ae) / C1587;
    const double C252 = (C1625 * C1621) / C1587;
    const double C448 = (C1634 * C1621) / C1587;
    const double C1712 = ae * C1711;
    const double C823 =
        (C1608 * C1606 * C1628 + C1625 * C1711 + C1625 * C1610 * ae) / C1587;
    const double C973 = (C1634 * C1711) / C1587;
    const double C1737 = ae * C1736;
    const double C1488 =
        (C1608 * C1606 * C1637 + C1634 * C1736 + C1634 * C1610 * ae) / C1587;
    const double C71 =
        ((C1610 + C1611 * C1612 * C1616) * C1614 + C1622 + C1622 +
         C1607 * (2 * ae * C1619 +
                  C1607 * (C1612 * C1616 + C1611 * bs[4] * std::pow(C1605, 4)) *
                      C1614)) /
        std::pow(C1587, 2);
    const double C278 =
        (C1622 +
         C1625 * (ae * C1631 + C1607 * std::pow(C1605, 4) * bs[4] * C1629)) /
        std::pow(C1587, 2);
    const double C320 =
        (C1622 +
         C1625 * (ae * C1631 + C1607 * std::pow(C1605, 4) * bs[4] * C1645)) /
        std::pow(C1587, 2);
    const double C496 =
        (C1622 +
         C1634 * (ae * C1640 + C1607 * std::pow(C1605, 4) * bs[4] * C1638)) /
        std::pow(C1587, 2);
    const double C578 =
        (C1622 +
         C1634 * (ae * C1640 + C1607 * std::pow(C1605, 4) * bs[4] * C1659)) /
        std::pow(C1587, 2);
    const double C75 = C62 * C68;
    const double C257 = C62 * C252;
    const double C453 = C62 * C448;
    const double C870 =
        ((C1610 + C1649 * C1612 * C1616) * C1614 + C1712 + C1712 +
         C1625 * (2 * ae * C1631 +
                  C1625 * (C1612 * C1616 + C1649 * bs[4] * std::pow(C1605, 4)) *
                      C1614)) /
        std::pow(C1587, 2);
    const double C1090 =
        (C1712 +
         C1634 * (ae * C1640 + C1625 * std::pow(C1605, 4) * bs[4] * C1664)) /
        std::pow(C1587, 2);
    const double C872 = C89 * C823;
    const double C1034 = C89 * C973;
    const double C1580 =
        ((C1610 + C1668 * C1612 * C1616) * C1614 + C1737 + C1737 +
         C1634 * (2 * ae * C1640 +
                  C1634 * (C1612 * C1616 + C1668 * bs[4] * std::pow(C1605, 4)) *
                      C1614)) /
        std::pow(C1587, 2);
    const double C1582 = C110 * C1488;
    
    d2eexx[0] += (2 * std::pow(Pi, 2.5) *
                  ((C61 * C63 + C73 + C73 + C53 * C69) * C54 * C55 * C1848 *
                       C1831 * C58 -
                   (C61 * C64 + C74 + C74 + C53 * C70) * C54 * C55 * C1848 *
                       C1831 * C59 +
                   (C61 * C65 + C75 + C75 + C53 * C71) * C54 * C55 * C1848 *
                       C1831 * C60)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[0] +=
        (2 * std::pow(Pi, 2.5) *
         (((C89 * C63 + C55 * C90) * C62 + (C89 * C66 + C55 * C93) * C53) *
              C54 * C1848 * C1831 * C58 -
          ((C89 * C67 + C55 * C94) * C53 + (C89 * C64 + C55 * C91) * C62) *
              C54 * C1848 * C1831 * C59 +
          ((C89 * C65 + C55 * C92) * C62 + (C89 * C68 + C55 * C95) * C53) *
              C54 * C1848 * C1831 * C60)) /
        (p * q * std::sqrt(p + q));
    d2eexz[0] +=
        (2 * std::pow(Pi, 2.5) *
         (((C110 * C63 + C54 * C111) * C62 + (C110 * C66 + C54 * C114) * C53) *
              C55 * C1848 * C1831 * C58 -
          ((C110 * C67 + C54 * C115) * C53 + (C110 * C64 + C54 * C112) * C62) *
              C55 * C1848 * C1831 * C59 +
          ((C110 * C65 + C54 * C113) * C62 + (C110 * C68 + C54 * C116) * C53) *
              C55 * C1848 * C1831 * C60)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[0] +=
        (2 * std::pow(Pi, 2.5) *
         (((C62 * C63 + C53 * C66) * C89 + (C62 * C90 + C53 * C131) * C55) *
              C54 * C1848 * C1831 * C58 -
          ((C62 * C91 + C53 * C132) * C55 + (C62 * C64 + C53 * C67) * C89) *
              C54 * C1848 * C1831 * C59 +
          ((C62 * C65 + C53 * C68) * C89 + (C62 * C92 + C53 * C133) * C55) *
              C54 * C1848 * C1831 * C60)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[0] += (2 * std::pow(Pi, 2.5) *
                  ((C148 * C63 + C153 + C153 + C55 * C149) * C53 * C54 * C1848 *
                       C1831 * C58 -
                   (C148 * C64 + C154 + C154 + C55 * C150) * C53 * C54 * C1848 *
                       C1831 * C59 +
                   (C148 * C65 + C155 + C155 + C55 * C151) * C53 * C54 * C1848 *
                       C1831 * C60)) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[0] +=
        (2 * std::pow(Pi, 2.5) *
         (((C110 * C63 + C54 * C111) * C89 + (C110 * C90 + C54 * C169) * C55) *
              C53 * C1848 * C1831 * C58 -
          ((C110 * C91 + C54 * C170) * C55 + (C110 * C64 + C54 * C112) * C89) *
              C53 * C1848 * C1831 * C59 +
          ((C110 * C65 + C54 * C113) * C89 + (C110 * C92 + C54 * C171) * C55) *
              C53 * C1848 * C1831 * C60)) /
        (p * q * std::sqrt(p + q));
    d2eezx[0] +=
        (2 * std::pow(Pi, 2.5) *
         (((C62 * C63 + C53 * C66) * C110 + (C62 * C111 + C53 * C186) * C54) *
              C55 * C1848 * C1831 * C58 -
          ((C62 * C112 + C53 * C187) * C54 + (C62 * C64 + C53 * C67) * C110) *
              C55 * C1848 * C1831 * C59 +
          ((C62 * C65 + C53 * C68) * C110 + (C62 * C113 + C53 * C188) * C54) *
              C55 * C1848 * C1831 * C60)) /
        (p * q * std::sqrt(p + q));
    d2eezy[0] +=
        (2 * std::pow(Pi, 2.5) *
         (((C89 * C63 + C55 * C90) * C110 + (C89 * C111 + C55 * C203) * C54) *
              C53 * C1848 * C1831 * C58 -
          ((C89 * C112 + C55 * C204) * C54 + (C89 * C64 + C55 * C91) * C110) *
              C53 * C1848 * C1831 * C59 +
          ((C89 * C65 + C55 * C92) * C110 + (C89 * C113 + C55 * C205) * C54) *
              C53 * C1848 * C1831 * C60)) /
        (p * q * std::sqrt(p + q));
    d2eezz[0] += (2 * std::pow(Pi, 2.5) *
                  ((C220 * C63 + C225 + C225 + C54 * C221) * C55 * C53 * C1848 *
                       C1831 * C58 -
                   (C220 * C64 + C226 + C226 + C54 * C222) * C55 * C53 * C1848 *
                       C1831 * C59 +
                   (C220 * C65 + C227 + C227 + C54 * C223) * C55 * C53 * C1848 *
                       C1831 * C60)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[1] +=
        (2 * std::pow(Pi, 2.5) *
         (((C61 * C63 + C73 + C73 + C53 * C69) * C54 * C55 * C1848 * C245 -
           (C61 * C249 + C256 + C256 + C53 * C253) * C54 * C55 * C1848 *
               C1866) *
              C247 +
          ((C61 * C250 + C257 + C257 + C53 * C254) * C54 * C55 * C1848 * C1866 -
           (C61 * C64 + C74 + C74 + C53 * C70) * C54 * C55 * C1848 * C245) *
              C1864)) /
        (p * q * std::sqrt(p + q));
    d2eexy[1] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C89 * C63 + C55 * C90) * C62 + (C89 * C66 + C55 * C93) * C53) *
               C54 * C1848 * C245 -
           ((C89 * C251 + C55 * C277) * C53 + (C89 * C249 + C55 * C275) * C62) *
               C54 * C1848 * C1866) *
              C247 +
          (((C89 * C250 + C55 * C276) * C62 + (C89 * C252 + C55 * C278) * C53) *
               C54 * C1848 * C1866 -
           ((C89 * C67 + C55 * C94) * C53 + (C89 * C64 + C55 * C91) * C62) *
               C54 * C1848 * C245) *
              C1864)) /
        (p * q * std::sqrt(p + q));
    d2eexz[1] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C110 * C63 + C54 * C111) * C62 + (C110 * C66 + C54 * C114) * C53) *
               C55 * C1848 * C245 -
           ((C110 * C251 + C54 * C299) * C53 +
            (C110 * C249 + C54 * C297) * C62) *
               C55 * C1848 * C1866) *
              C247 +
          (((C110 * C250 + C54 * C298) * C62 +
            (C110 * C252 + C54 * C300) * C53) *
               C55 * C1848 * C1866 -
           ((C110 * C67 + C54 * C115) * C53 + (C110 * C64 + C54 * C112) * C62) *
               C55 * C1848 * C245) *
              C1864)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[1] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C62 * C63 + C53 * C66) * C89 + (C62 * C90 + C53 * C131) * C55) *
               C54 * C1848 * C245 -
           ((C62 * C275 + C53 * C319) * C55 + (C62 * C249 + C53 * C251) * C89) *
               C54 * C1848 * C1866) *
              C247 +
          (((C62 * C250 + C53 * C252) * C89 + (C62 * C276 + C53 * C320) * C55) *
               C54 * C1848 * C1866 -
           ((C62 * C91 + C53 * C132) * C55 + (C62 * C64 + C53 * C67) * C89) *
               C54 * C1848 * C245) *
              C1864)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[1] +=
        (2 * std::pow(Pi, 2.5) *
         (((C148 * C63 + C153 + C153 + C55 * C149) * C53 * C54 * C1848 * C245 -
           (C148 * C249 + C342 + C342 + C55 * C339) * C53 * C54 * C1848 *
               C1866) *
              C247 +
          ((C148 * C250 + C343 + C343 + C55 * C340) * C53 * C54 * C1848 *
               C1866 -
           (C148 * C64 + C154 + C154 + C55 * C150) * C53 * C54 * C1848 * C245) *
              C1864)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[1] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C110 * C63 + C54 * C111) * C89 + (C110 * C90 + C54 * C169) * C55) *
               C53 * C1848 * C245 -
           ((C110 * C275 + C54 * C361) * C55 +
            (C110 * C249 + C54 * C297) * C89) *
               C53 * C1848 * C1866) *
              C247 +
          (((C110 * C250 + C54 * C298) * C89 +
            (C110 * C276 + C54 * C362) * C55) *
               C53 * C1848 * C1866 -
           ((C110 * C91 + C54 * C170) * C55 + (C110 * C64 + C54 * C112) * C89) *
               C53 * C1848 * C245) *
              C1864)) /
        (p * q * std::sqrt(p + q));
    d2eezx[1] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C62 * C63 + C53 * C66) * C110 + (C62 * C111 + C53 * C186) * C54) *
               C55 * C1848 * C245 -
           ((C62 * C297 + C53 * C381) * C54 +
            (C62 * C249 + C53 * C251) * C110) *
               C55 * C1848 * C1866) *
              C247 +
          (((C62 * C250 + C53 * C252) * C110 +
            (C62 * C298 + C53 * C382) * C54) *
               C55 * C1848 * C1866 -
           ((C62 * C112 + C53 * C187) * C54 + (C62 * C64 + C53 * C67) * C110) *
               C55 * C1848 * C245) *
              C1864)) /
        (p * q * std::sqrt(p + q));
    d2eezy[1] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C89 * C63 + C55 * C90) * C110 + (C89 * C111 + C55 * C203) * C54) *
               C53 * C1848 * C245 -
           ((C89 * C297 + C55 * C401) * C54 +
            (C89 * C249 + C55 * C275) * C110) *
               C53 * C1848 * C1866) *
              C247 +
          (((C89 * C250 + C55 * C276) * C110 +
            (C89 * C298 + C55 * C402) * C54) *
               C53 * C1848 * C1866 -
           ((C89 * C112 + C55 * C204) * C54 + (C89 * C64 + C55 * C91) * C110) *
               C53 * C1848 * C245) *
              C1864)) /
        (p * q * std::sqrt(p + q));
    d2eezz[1] +=
        (2 * std::pow(Pi, 2.5) *
         (((C220 * C63 + C225 + C225 + C54 * C221) * C55 * C53 * C1848 * C245 -
           (C220 * C249 + C424 + C424 + C54 * C421) * C55 * C53 * C1848 *
               C1866) *
              C247 +
          ((C220 * C250 + C425 + C425 + C54 * C422) * C55 * C53 * C1848 *
               C1866 -
           (C220 * C64 + C226 + C226 + C54 * C222) * C55 * C53 * C1848 * C245) *
              C1864)) /
        (p * q * std::sqrt(p + q));
    d2eexx[2] +=
        (2 * std::pow(Pi, 2.5) *
         (((C61 * C63 + C73 + C73 + C53 * C69) * C54 * C55 * C443 -
           (C61 * C445 + C452 + C452 + C53 * C449) * C54 * C55 * C1868) *
              C1831 * C247 +
          ((C61 * C446 + C453 + C453 + C53 * C450) * C54 * C55 * C1868 -
           (C61 * C64 + C74 + C74 + C53 * C70) * C54 * C55 * C443) *
              C1831 * C1864)) /
        (p * q * std::sqrt(p + q));
    d2eexy[2] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C89 * C63 + C55 * C90) * C62 + (C89 * C66 + C55 * C93) * C53) *
               C54 * C443 -
           ((C89 * C447 + C55 * C473) * C53 + (C89 * C445 + C55 * C471) * C62) *
               C54 * C1868) *
              C1831 * C247 +
          (((C89 * C446 + C55 * C472) * C62 + (C89 * C448 + C55 * C474) * C53) *
               C54 * C1868 -
           ((C89 * C67 + C55 * C94) * C53 + (C89 * C64 + C55 * C91) * C62) *
               C54 * C443) *
              C1831 * C1864)) /
        (p * q * std::sqrt(p + q));
    d2eexz[2] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C110 * C63 + C54 * C111) * C62 + (C110 * C66 + C54 * C114) * C53) *
               C55 * C443 -
           ((C110 * C447 + C54 * C495) * C53 +
            (C110 * C445 + C54 * C493) * C62) *
               C55 * C1868) *
              C1831 * C247 +
          (((C110 * C446 + C54 * C494) * C62 +
            (C110 * C448 + C54 * C496) * C53) *
               C55 * C1868 -
           ((C110 * C67 + C54 * C115) * C53 + (C110 * C64 + C54 * C112) * C62) *
               C55 * C443) *
              C1831 * C1864)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[2] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C62 * C63 + C53 * C66) * C89 + (C62 * C90 + C53 * C131) * C55) *
               C54 * C443 -
           ((C62 * C471 + C53 * C515) * C55 + (C62 * C445 + C53 * C447) * C89) *
               C54 * C1868) *
              C1831 * C247 +
          (((C62 * C446 + C53 * C448) * C89 + (C62 * C472 + C53 * C516) * C55) *
               C54 * C1868 -
           ((C62 * C91 + C53 * C132) * C55 + (C62 * C64 + C53 * C67) * C89) *
               C54 * C443) *
              C1831 * C1864)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[2] +=
        (2 * std::pow(Pi, 2.5) *
         (((C148 * C63 + C153 + C153 + C55 * C149) * C53 * C54 * C443 -
           (C148 * C445 + C538 + C538 + C55 * C535) * C53 * C54 * C1868) *
              C1831 * C247 +
          ((C148 * C446 + C539 + C539 + C55 * C536) * C53 * C54 * C1868 -
           (C148 * C64 + C154 + C154 + C55 * C150) * C53 * C54 * C443) *
              C1831 * C1864)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[2] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C110 * C63 + C54 * C111) * C89 + (C110 * C90 + C54 * C169) * C55) *
               C53 * C443 -
           ((C110 * C471 + C54 * C557) * C55 +
            (C110 * C445 + C54 * C493) * C89) *
               C53 * C1868) *
              C1831 * C247 +
          (((C110 * C446 + C54 * C494) * C89 +
            (C110 * C472 + C54 * C558) * C55) *
               C53 * C1868 -
           ((C110 * C91 + C54 * C170) * C55 + (C110 * C64 + C54 * C112) * C89) *
               C53 * C443) *
              C1831 * C1864)) /
        (p * q * std::sqrt(p + q));
    d2eezx[2] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C62 * C63 + C53 * C66) * C110 + (C62 * C111 + C53 * C186) * C54) *
               C55 * C443 -
           ((C62 * C493 + C53 * C577) * C54 +
            (C62 * C445 + C53 * C447) * C110) *
               C55 * C1868) *
              C1831 * C247 +
          (((C62 * C446 + C53 * C448) * C110 +
            (C62 * C494 + C53 * C578) * C54) *
               C55 * C1868 -
           ((C62 * C112 + C53 * C187) * C54 + (C62 * C64 + C53 * C67) * C110) *
               C55 * C443) *
              C1831 * C1864)) /
        (p * q * std::sqrt(p + q));
    d2eezy[2] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C89 * C63 + C55 * C90) * C110 + (C89 * C111 + C55 * C203) * C54) *
               C53 * C443 -
           ((C89 * C493 + C55 * C597) * C54 +
            (C89 * C445 + C55 * C471) * C110) *
               C53 * C1868) *
              C1831 * C247 +
          (((C89 * C446 + C55 * C472) * C110 +
            (C89 * C494 + C55 * C598) * C54) *
               C53 * C1868 -
           ((C89 * C112 + C55 * C204) * C54 + (C89 * C64 + C55 * C91) * C110) *
               C53 * C443) *
              C1831 * C1864)) /
        (p * q * std::sqrt(p + q));
    d2eezz[2] +=
        (2 * std::pow(Pi, 2.5) *
         (((C220 * C63 + C225 + C225 + C54 * C221) * C55 * C53 * C443 -
           (C220 * C445 + C620 + C620 + C54 * C617) * C55 * C53 * C1868) *
              C1831 * C247 +
          ((C220 * C446 + C621 + C621 + C54 * C618) * C55 * C53 * C1868 -
           (C220 * C64 + C226 + C226 + C54 * C222) * C55 * C53 * C443) *
              C1831 * C1864)) /
        (p * q * std::sqrt(p + q));
    d2eexx[3] +=
        (2 * std::pow(Pi, 2.5) *
         (((C61 * C63 + C73 + C73 + C53 * C69) * C54 * C55 * C1848 * C639 -
           (C61 * C249 + C256 + C256 + C53 * C253) * C54 * C55 * C1848 *
               C1866) *
              C641 +
          ((C61 * C250 + C257 + C257 + C53 * C254) * C54 * C55 * C1848 * C1866 -
           (C61 * C64 + C74 + C74 + C53 * C70) * C54 * C55 * C1848 * C639) *
              C1864)) /
        (p * q * std::sqrt(p + q));
    d2eexy[3] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C89 * C63 + C55 * C90) * C62 + (C89 * C66 + C55 * C93) * C53) *
               C54 * C1848 * C639 -
           ((C89 * C251 + C55 * C277) * C53 + (C89 * C249 + C55 * C275) * C62) *
               C54 * C1848 * C1866) *
              C641 +
          (((C89 * C250 + C55 * C276) * C62 + (C89 * C252 + C55 * C278) * C53) *
               C54 * C1848 * C1866 -
           ((C89 * C67 + C55 * C94) * C53 + (C89 * C64 + C55 * C91) * C62) *
               C54 * C1848 * C639) *
              C1864)) /
        (p * q * std::sqrt(p + q));
    d2eexz[3] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C110 * C63 + C54 * C111) * C62 + (C110 * C66 + C54 * C114) * C53) *
               C55 * C1848 * C639 -
           ((C110 * C251 + C54 * C299) * C53 +
            (C110 * C249 + C54 * C297) * C62) *
               C55 * C1848 * C1866) *
              C641 +
          (((C110 * C250 + C54 * C298) * C62 +
            (C110 * C252 + C54 * C300) * C53) *
               C55 * C1848 * C1866 -
           ((C110 * C67 + C54 * C115) * C53 + (C110 * C64 + C54 * C112) * C62) *
               C55 * C1848 * C639) *
              C1864)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[3] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C62 * C63 + C53 * C66) * C89 + (C62 * C90 + C53 * C131) * C55) *
               C54 * C1848 * C639 -
           ((C62 * C275 + C53 * C319) * C55 + (C62 * C249 + C53 * C251) * C89) *
               C54 * C1848 * C1866) *
              C641 +
          (((C62 * C250 + C53 * C252) * C89 + (C62 * C276 + C53 * C320) * C55) *
               C54 * C1848 * C1866 -
           ((C62 * C91 + C53 * C132) * C55 + (C62 * C64 + C53 * C67) * C89) *
               C54 * C1848 * C639) *
              C1864)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[3] +=
        (2 * std::pow(Pi, 2.5) *
         (((C148 * C63 + C153 + C153 + C55 * C149) * C53 * C54 * C1848 * C639 -
           (C148 * C249 + C342 + C342 + C55 * C339) * C53 * C54 * C1848 *
               C1866) *
              C641 +
          ((C148 * C250 + C343 + C343 + C55 * C340) * C53 * C54 * C1848 *
               C1866 -
           (C148 * C64 + C154 + C154 + C55 * C150) * C53 * C54 * C1848 * C639) *
              C1864)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[3] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C110 * C63 + C54 * C111) * C89 + (C110 * C90 + C54 * C169) * C55) *
               C53 * C1848 * C639 -
           ((C110 * C275 + C54 * C361) * C55 +
            (C110 * C249 + C54 * C297) * C89) *
               C53 * C1848 * C1866) *
              C641 +
          (((C110 * C250 + C54 * C298) * C89 +
            (C110 * C276 + C54 * C362) * C55) *
               C53 * C1848 * C1866 -
           ((C110 * C91 + C54 * C170) * C55 + (C110 * C64 + C54 * C112) * C89) *
               C53 * C1848 * C639) *
              C1864)) /
        (p * q * std::sqrt(p + q));
    d2eezx[3] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C62 * C63 + C53 * C66) * C110 + (C62 * C111 + C53 * C186) * C54) *
               C55 * C1848 * C639 -
           ((C62 * C297 + C53 * C381) * C54 +
            (C62 * C249 + C53 * C251) * C110) *
               C55 * C1848 * C1866) *
              C641 +
          (((C62 * C250 + C53 * C252) * C110 +
            (C62 * C298 + C53 * C382) * C54) *
               C55 * C1848 * C1866 -
           ((C62 * C112 + C53 * C187) * C54 + (C62 * C64 + C53 * C67) * C110) *
               C55 * C1848 * C639) *
              C1864)) /
        (p * q * std::sqrt(p + q));
    d2eezy[3] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C89 * C63 + C55 * C90) * C110 + (C89 * C111 + C55 * C203) * C54) *
               C53 * C1848 * C639 -
           ((C89 * C297 + C55 * C401) * C54 +
            (C89 * C249 + C55 * C275) * C110) *
               C53 * C1848 * C1866) *
              C641 +
          (((C89 * C250 + C55 * C276) * C110 +
            (C89 * C298 + C55 * C402) * C54) *
               C53 * C1848 * C1866 -
           ((C89 * C112 + C55 * C204) * C54 + (C89 * C64 + C55 * C91) * C110) *
               C53 * C1848 * C639) *
              C1864)) /
        (p * q * std::sqrt(p + q));
    d2eezz[3] +=
        (2 * std::pow(Pi, 2.5) *
         (((C220 * C63 + C225 + C225 + C54 * C221) * C55 * C53 * C1848 * C639 -
           (C220 * C249 + C424 + C424 + C54 * C421) * C55 * C53 * C1848 *
               C1866) *
              C641 +
          ((C220 * C250 + C425 + C425 + C54 * C422) * C55 * C53 * C1848 *
               C1866 -
           (C220 * C64 + C226 + C226 + C54 * C222) * C55 * C53 * C1848 * C639) *
              C1864)) /
        (p * q * std::sqrt(p + q));
    d2eexx[4] +=
        (2 * std::pow(Pi, 2.5) *
         ((C61 * C63 + C73 + C73 + C53 * C69) * C54 * C55 * C1848 * C801 -
          (C61 * C249 + C256 + C256 + C53 * C253) * C54 * C55 * C1848 * C802 +
          (C61 * C805 + C809 + C809 + C53 * C807) * C54 * C55 * C1848 * C803) *
         C1797) /
        (p * q * std::sqrt(p + q));
    d2eexy[4] +=
        (2 * std::pow(Pi, 2.5) *
         (((C89 * C63 + C55 * C90) * C62 + (C89 * C66 + C55 * C93) * C53) *
              C54 * C1848 * C801 -
          ((C89 * C251 + C55 * C277) * C53 + (C89 * C249 + C55 * C275) * C62) *
              C54 * C1848 * C802 +
          ((C89 * C805 + C55 * C823) * C62 + (C89 * C806 + C55 * C824) * C53) *
              C54 * C1848 * C803) *
         C1797) /
        (p * q * std::sqrt(p + q));
    d2eexz[4] +=
        (2 * std::pow(Pi, 2.5) *
         (((C110 * C63 + C54 * C111) * C62 + (C110 * C66 + C54 * C114) * C53) *
              C55 * C1848 * C801 -
          ((C110 * C251 + C54 * C299) * C53 +
           (C110 * C249 + C54 * C297) * C62) *
              C55 * C1848 * C802 +
          ((C110 * C805 + C54 * C839) * C62 +
           (C110 * C806 + C54 * C840) * C53) *
              C55 * C1848 * C803) *
         C1797) /
        (p * q * std::sqrt(p + q));
    d2eeyx[4] +=
        (2 * std::pow(Pi, 2.5) *
         (((C62 * C63 + C53 * C66) * C89 + (C62 * C90 + C53 * C131) * C55) *
              C54 * C1848 * C801 -
          ((C62 * C275 + C53 * C319) * C55 + (C62 * C249 + C53 * C251) * C89) *
              C54 * C1848 * C802 +
          ((C62 * C805 + C53 * C806) * C89 + (C62 * C823 + C53 * C855) * C55) *
              C54 * C1848 * C803) *
         C1797) /
        (p * q * std::sqrt(p + q));
    d2eeyy[4] +=
        (2 * std::pow(Pi, 2.5) *
         ((C148 * C63 + C153 + C153 + C55 * C149) * C53 * C54 * C1848 * C801 -
          (C148 * C249 + C342 + C342 + C55 * C339) * C53 * C54 * C1848 * C802 +
          (C148 * C805 + C872 + C872 + C55 * C870) * C53 * C54 * C1848 * C803) *
         C1797) /
        (p * q * std::sqrt(p + q));
    d2eeyz[4] +=
        (2 * std::pow(Pi, 2.5) *
         (((C110 * C63 + C54 * C111) * C89 + (C110 * C90 + C54 * C169) * C55) *
              C53 * C1848 * C801 -
          ((C110 * C275 + C54 * C361) * C55 +
           (C110 * C249 + C54 * C297) * C89) *
              C53 * C1848 * C802 +
          ((C110 * C805 + C54 * C839) * C89 +
           (C110 * C823 + C54 * C886) * C55) *
              C53 * C1848 * C803) *
         C1797) /
        (p * q * std::sqrt(p + q));
    d2eezx[4] +=
        (2 * std::pow(Pi, 2.5) *
         (((C62 * C63 + C53 * C66) * C110 + (C62 * C111 + C53 * C186) * C54) *
              C55 * C1848 * C801 -
          ((C62 * C297 + C53 * C381) * C54 + (C62 * C249 + C53 * C251) * C110) *
              C55 * C1848 * C802 +
          ((C62 * C805 + C53 * C806) * C110 + (C62 * C839 + C53 * C901) * C54) *
              C55 * C1848 * C803) *
         C1797) /
        (p * q * std::sqrt(p + q));
    d2eezy[4] +=
        (2 * std::pow(Pi, 2.5) *
         (((C89 * C63 + C55 * C90) * C110 + (C89 * C111 + C55 * C203) * C54) *
              C53 * C1848 * C801 -
          ((C89 * C297 + C55 * C401) * C54 + (C89 * C249 + C55 * C275) * C110) *
              C53 * C1848 * C802 +
          ((C89 * C805 + C55 * C823) * C110 + (C89 * C839 + C55 * C916) * C54) *
              C53 * C1848 * C803) *
         C1797) /
        (p * q * std::sqrt(p + q));
    d2eezz[4] +=
        (2 * std::pow(Pi, 2.5) *
         ((C220 * C63 + C225 + C225 + C54 * C221) * C55 * C53 * C1848 * C801 -
          (C220 * C249 + C424 + C424 + C54 * C421) * C55 * C53 * C1848 * C802 +
          (C220 * C805 + C933 + C933 + C54 * C931) * C55 * C53 * C1848 * C803) *
         C1797) /
        (p * q * std::sqrt(p + q));
    d2eexx[5] +=
        (2 * std::pow(Pi, 2.5) *
         (((C61 * C63 + C73 + C73 + C53 * C69) * C54 * C55 * C443 -
           (C61 * C445 + C452 + C452 + C53 * C449) * C54 * C55 * C1868) *
              C639 +
          ((C61 * C951 + C955 + C955 + C53 * C953) * C54 * C55 * C1868 -
           (C61 * C249 + C256 + C256 + C53 * C253) * C54 * C55 * C443) *
              C1866) *
         C1797) /
        (p * q * std::sqrt(p + q));
    d2eexy[5] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C89 * C63 + C55 * C90) * C62 + (C89 * C66 + C55 * C93) * C53) *
               C54 * C443 -
           ((C89 * C447 + C55 * C473) * C53 + (C89 * C445 + C55 * C471) * C62) *
               C54 * C1868) *
              C639 +
          (((C89 * C951 + C55 * C973) * C62 + (C89 * C952 + C55 * C974) * C53) *
               C54 * C1868 -
           ((C89 * C251 + C55 * C277) * C53 + (C89 * C249 + C55 * C275) * C62) *
               C54 * C443) *
              C1866) *
         C1797) /
        (p * q * std::sqrt(p + q));
    d2eexz[5] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C110 * C63 + C54 * C111) * C62 + (C110 * C66 + C54 * C114) * C53) *
               C55 * C443 -
           ((C110 * C447 + C54 * C495) * C53 +
            (C110 * C445 + C54 * C493) * C62) *
               C55 * C1868) *
              C639 +
          (((C110 * C951 + C54 * C993) * C62 +
            (C110 * C952 + C54 * C994) * C53) *
               C55 * C1868 -
           ((C110 * C251 + C54 * C299) * C53 +
            (C110 * C249 + C54 * C297) * C62) *
               C55 * C443) *
              C1866) *
         C1797) /
        (p * q * std::sqrt(p + q));
    d2eeyx[5] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C62 * C63 + C53 * C66) * C89 + (C62 * C90 + C53 * C131) * C55) *
               C54 * C443 -
           ((C62 * C471 + C53 * C515) * C55 + (C62 * C445 + C53 * C447) * C89) *
               C54 * C1868) *
              C639 +
          (((C62 * C951 + C53 * C952) * C89 +
            (C62 * C973 + C53 * C1013) * C55) *
               C54 * C1868 -
           ((C62 * C275 + C53 * C319) * C55 + (C62 * C249 + C53 * C251) * C89) *
               C54 * C443) *
              C1866) *
         C1797) /
        (p * q * std::sqrt(p + q));
    d2eeyy[5] +=
        (2 * std::pow(Pi, 2.5) *
         (((C148 * C63 + C153 + C153 + C55 * C149) * C53 * C54 * C443 -
           (C148 * C445 + C538 + C538 + C55 * C535) * C53 * C54 * C1868) *
              C639 +
          ((C148 * C951 + C1034 + C1034 + C55 * C1032) * C53 * C54 * C1868 -
           (C148 * C249 + C342 + C342 + C55 * C339) * C53 * C54 * C443) *
              C1866) *
         C1797) /
        (p * q * std::sqrt(p + q));
    d2eeyz[5] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C110 * C63 + C54 * C111) * C89 + (C110 * C90 + C54 * C169) * C55) *
               C53 * C443 -
           ((C110 * C471 + C54 * C557) * C55 +
            (C110 * C445 + C54 * C493) * C89) *
               C53 * C1868) *
              C639 +
          (((C110 * C951 + C54 * C993) * C89 +
            (C110 * C973 + C54 * C1052) * C55) *
               C53 * C1868 -
           ((C110 * C275 + C54 * C361) * C55 +
            (C110 * C249 + C54 * C297) * C89) *
               C53 * C443) *
              C1866) *
         C1797) /
        (p * q * std::sqrt(p + q));
    d2eezx[5] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C62 * C63 + C53 * C66) * C110 + (C62 * C111 + C53 * C186) * C54) *
               C55 * C443 -
           ((C62 * C493 + C53 * C577) * C54 +
            (C62 * C445 + C53 * C447) * C110) *
               C55 * C1868) *
              C639 +
          (((C62 * C951 + C53 * C952) * C110 +
            (C62 * C993 + C53 * C1071) * C54) *
               C55 * C1868 -
           ((C62 * C297 + C53 * C381) * C54 +
            (C62 * C249 + C53 * C251) * C110) *
               C55 * C443) *
              C1866) *
         C1797) /
        (p * q * std::sqrt(p + q));
    d2eezy[5] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C89 * C63 + C55 * C90) * C110 + (C89 * C111 + C55 * C203) * C54) *
               C53 * C443 -
           ((C89 * C493 + C55 * C597) * C54 +
            (C89 * C445 + C55 * C471) * C110) *
               C53 * C1868) *
              C639 +
          (((C89 * C951 + C55 * C973) * C110 +
            (C89 * C993 + C55 * C1090) * C54) *
               C53 * C1868 -
           ((C89 * C297 + C55 * C401) * C54 +
            (C89 * C249 + C55 * C275) * C110) *
               C53 * C443) *
              C1866) *
         C1797) /
        (p * q * std::sqrt(p + q));
    d2eezz[5] +=
        (2 * std::pow(Pi, 2.5) *
         (((C220 * C63 + C225 + C225 + C54 * C221) * C55 * C53 * C443 -
           (C220 * C445 + C620 + C620 + C54 * C617) * C55 * C53 * C1868) *
              C639 +
          ((C220 * C951 + C1111 + C1111 + C54 * C1109) * C55 * C53 * C1868 -
           (C220 * C249 + C424 + C424 + C54 * C421) * C55 * C53 * C443) *
              C1866) *
         C1797) /
        (p * q * std::sqrt(p + q));
    d2eexx[6] +=
        (2 * std::pow(Pi, 2.5) *
         (((C61 * C63 + C73 + C73 + C53 * C69) * C54 * C55 * C1129 -
           (C61 * C445 + C452 + C452 + C53 * C449) * C54 * C55 * C1868) *
              C1831 * C641 +
          ((C61 * C446 + C453 + C453 + C53 * C450) * C54 * C55 * C1868 -
           (C61 * C64 + C74 + C74 + C53 * C70) * C54 * C55 * C1129) *
              C1831 * C1864)) /
        (p * q * std::sqrt(p + q));
    d2eexy[6] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C89 * C63 + C55 * C90) * C62 + (C89 * C66 + C55 * C93) * C53) *
               C54 * C1129 -
           ((C89 * C447 + C55 * C473) * C53 + (C89 * C445 + C55 * C471) * C62) *
               C54 * C1868) *
              C1831 * C641 +
          (((C89 * C446 + C55 * C472) * C62 + (C89 * C448 + C55 * C474) * C53) *
               C54 * C1868 -
           ((C89 * C67 + C55 * C94) * C53 + (C89 * C64 + C55 * C91) * C62) *
               C54 * C1129) *
              C1831 * C1864)) /
        (p * q * std::sqrt(p + q));
    d2eexz[6] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C110 * C63 + C54 * C111) * C62 + (C110 * C66 + C54 * C114) * C53) *
               C55 * C1129 -
           ((C110 * C447 + C54 * C495) * C53 +
            (C110 * C445 + C54 * C493) * C62) *
               C55 * C1868) *
              C1831 * C641 +
          (((C110 * C446 + C54 * C494) * C62 +
            (C110 * C448 + C54 * C496) * C53) *
               C55 * C1868 -
           ((C110 * C67 + C54 * C115) * C53 + (C110 * C64 + C54 * C112) * C62) *
               C55 * C1129) *
              C1831 * C1864)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[6] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C62 * C63 + C53 * C66) * C89 + (C62 * C90 + C53 * C131) * C55) *
               C54 * C1129 -
           ((C62 * C471 + C53 * C515) * C55 + (C62 * C445 + C53 * C447) * C89) *
               C54 * C1868) *
              C1831 * C641 +
          (((C62 * C446 + C53 * C448) * C89 + (C62 * C472 + C53 * C516) * C55) *
               C54 * C1868 -
           ((C62 * C91 + C53 * C132) * C55 + (C62 * C64 + C53 * C67) * C89) *
               C54 * C1129) *
              C1831 * C1864)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[6] +=
        (2 * std::pow(Pi, 2.5) *
         (((C148 * C63 + C153 + C153 + C55 * C149) * C53 * C54 * C1129 -
           (C148 * C445 + C538 + C538 + C55 * C535) * C53 * C54 * C1868) *
              C1831 * C641 +
          ((C148 * C446 + C539 + C539 + C55 * C536) * C53 * C54 * C1868 -
           (C148 * C64 + C154 + C154 + C55 * C150) * C53 * C54 * C1129) *
              C1831 * C1864)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[6] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C110 * C63 + C54 * C111) * C89 + (C110 * C90 + C54 * C169) * C55) *
               C53 * C1129 -
           ((C110 * C471 + C54 * C557) * C55 +
            (C110 * C445 + C54 * C493) * C89) *
               C53 * C1868) *
              C1831 * C641 +
          (((C110 * C446 + C54 * C494) * C89 +
            (C110 * C472 + C54 * C558) * C55) *
               C53 * C1868 -
           ((C110 * C91 + C54 * C170) * C55 + (C110 * C64 + C54 * C112) * C89) *
               C53 * C1129) *
              C1831 * C1864)) /
        (p * q * std::sqrt(p + q));
    d2eezx[6] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C62 * C63 + C53 * C66) * C110 + (C62 * C111 + C53 * C186) * C54) *
               C55 * C1129 -
           ((C62 * C493 + C53 * C577) * C54 +
            (C62 * C445 + C53 * C447) * C110) *
               C55 * C1868) *
              C1831 * C641 +
          (((C62 * C446 + C53 * C448) * C110 +
            (C62 * C494 + C53 * C578) * C54) *
               C55 * C1868 -
           ((C62 * C112 + C53 * C187) * C54 + (C62 * C64 + C53 * C67) * C110) *
               C55 * C1129) *
              C1831 * C1864)) /
        (p * q * std::sqrt(p + q));
    d2eezy[6] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C89 * C63 + C55 * C90) * C110 + (C89 * C111 + C55 * C203) * C54) *
               C53 * C1129 -
           ((C89 * C493 + C55 * C597) * C54 +
            (C89 * C445 + C55 * C471) * C110) *
               C53 * C1868) *
              C1831 * C641 +
          (((C89 * C446 + C55 * C472) * C110 +
            (C89 * C494 + C55 * C598) * C54) *
               C53 * C1868 -
           ((C89 * C112 + C55 * C204) * C54 + (C89 * C64 + C55 * C91) * C110) *
               C53 * C1129) *
              C1831 * C1864)) /
        (p * q * std::sqrt(p + q));
    d2eezz[6] +=
        (2 * std::pow(Pi, 2.5) *
         (((C220 * C63 + C225 + C225 + C54 * C221) * C55 * C53 * C1129 -
           (C220 * C445 + C620 + C620 + C54 * C617) * C55 * C53 * C1868) *
              C1831 * C641 +
          ((C220 * C446 + C621 + C621 + C54 * C618) * C55 * C53 * C1868 -
           (C220 * C64 + C226 + C226 + C54 * C222) * C55 * C53 * C1129) *
              C1831 * C1864)) /
        (p * q * std::sqrt(p + q));
    d2eexx[7] +=
        (2 * std::pow(Pi, 2.5) *
         (((C61 * C63 + C73 + C73 + C53 * C69) * C54 * C55 * C1129 -
           (C61 * C445 + C452 + C452 + C53 * C449) * C54 * C55 * C1868) *
              C245 +
          ((C61 * C951 + C955 + C955 + C53 * C953) * C54 * C55 * C1868 -
           (C61 * C249 + C256 + C256 + C53 * C253) * C54 * C55 * C1129) *
              C1866) *
         C1797) /
        (p * q * std::sqrt(p + q));
    d2eexy[7] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C89 * C63 + C55 * C90) * C62 + (C89 * C66 + C55 * C93) * C53) *
               C54 * C1129 -
           ((C89 * C447 + C55 * C473) * C53 + (C89 * C445 + C55 * C471) * C62) *
               C54 * C1868) *
              C245 +
          (((C89 * C951 + C55 * C973) * C62 + (C89 * C952 + C55 * C974) * C53) *
               C54 * C1868 -
           ((C89 * C251 + C55 * C277) * C53 + (C89 * C249 + C55 * C275) * C62) *
               C54 * C1129) *
              C1866) *
         C1797) /
        (p * q * std::sqrt(p + q));
    d2eexz[7] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C110 * C63 + C54 * C111) * C62 + (C110 * C66 + C54 * C114) * C53) *
               C55 * C1129 -
           ((C110 * C447 + C54 * C495) * C53 +
            (C110 * C445 + C54 * C493) * C62) *
               C55 * C1868) *
              C245 +
          (((C110 * C951 + C54 * C993) * C62 +
            (C110 * C952 + C54 * C994) * C53) *
               C55 * C1868 -
           ((C110 * C251 + C54 * C299) * C53 +
            (C110 * C249 + C54 * C297) * C62) *
               C55 * C1129) *
              C1866) *
         C1797) /
        (p * q * std::sqrt(p + q));
    d2eeyx[7] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C62 * C63 + C53 * C66) * C89 + (C62 * C90 + C53 * C131) * C55) *
               C54 * C1129 -
           ((C62 * C471 + C53 * C515) * C55 + (C62 * C445 + C53 * C447) * C89) *
               C54 * C1868) *
              C245 +
          (((C62 * C951 + C53 * C952) * C89 +
            (C62 * C973 + C53 * C1013) * C55) *
               C54 * C1868 -
           ((C62 * C275 + C53 * C319) * C55 + (C62 * C249 + C53 * C251) * C89) *
               C54 * C1129) *
              C1866) *
         C1797) /
        (p * q * std::sqrt(p + q));
    d2eeyy[7] +=
        (2 * std::pow(Pi, 2.5) *
         (((C148 * C63 + C153 + C153 + C55 * C149) * C53 * C54 * C1129 -
           (C148 * C445 + C538 + C538 + C55 * C535) * C53 * C54 * C1868) *
              C245 +
          ((C148 * C951 + C1034 + C1034 + C55 * C1032) * C53 * C54 * C1868 -
           (C148 * C249 + C342 + C342 + C55 * C339) * C53 * C54 * C1129) *
              C1866) *
         C1797) /
        (p * q * std::sqrt(p + q));
    d2eeyz[7] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C110 * C63 + C54 * C111) * C89 + (C110 * C90 + C54 * C169) * C55) *
               C53 * C1129 -
           ((C110 * C471 + C54 * C557) * C55 +
            (C110 * C445 + C54 * C493) * C89) *
               C53 * C1868) *
              C245 +
          (((C110 * C951 + C54 * C993) * C89 +
            (C110 * C973 + C54 * C1052) * C55) *
               C53 * C1868 -
           ((C110 * C275 + C54 * C361) * C55 +
            (C110 * C249 + C54 * C297) * C89) *
               C53 * C1129) *
              C1866) *
         C1797) /
        (p * q * std::sqrt(p + q));
    d2eezx[7] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C62 * C63 + C53 * C66) * C110 + (C62 * C111 + C53 * C186) * C54) *
               C55 * C1129 -
           ((C62 * C493 + C53 * C577) * C54 +
            (C62 * C445 + C53 * C447) * C110) *
               C55 * C1868) *
              C245 +
          (((C62 * C951 + C53 * C952) * C110 +
            (C62 * C993 + C53 * C1071) * C54) *
               C55 * C1868 -
           ((C62 * C297 + C53 * C381) * C54 +
            (C62 * C249 + C53 * C251) * C110) *
               C55 * C1129) *
              C1866) *
         C1797) /
        (p * q * std::sqrt(p + q));
    d2eezy[7] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C89 * C63 + C55 * C90) * C110 + (C89 * C111 + C55 * C203) * C54) *
               C53 * C1129 -
           ((C89 * C493 + C55 * C597) * C54 +
            (C89 * C445 + C55 * C471) * C110) *
               C53 * C1868) *
              C245 +
          (((C89 * C951 + C55 * C973) * C110 +
            (C89 * C993 + C55 * C1090) * C54) *
               C53 * C1868 -
           ((C89 * C297 + C55 * C401) * C54 +
            (C89 * C249 + C55 * C275) * C110) *
               C53 * C1129) *
              C1866) *
         C1797) /
        (p * q * std::sqrt(p + q));
    d2eezz[7] +=
        (2 * std::pow(Pi, 2.5) *
         (((C220 * C63 + C225 + C225 + C54 * C221) * C55 * C53 * C1129 -
           (C220 * C445 + C620 + C620 + C54 * C617) * C55 * C53 * C1868) *
              C245 +
          ((C220 * C951 + C1111 + C1111 + C54 * C1109) * C55 * C53 * C1868 -
           (C220 * C249 + C424 + C424 + C54 * C421) * C55 * C53 * C1129) *
              C1866) *
         C1797) /
        (p * q * std::sqrt(p + q));
    d2eexx[8] +=
        (2 * std::pow(Pi, 2.5) *
         ((C61 * C63 + C73 + C73 + C53 * C69) * C54 * C55 * C1451 -
          (C61 * C445 + C452 + C452 + C53 * C449) * C54 * C55 * C1452 +
          (C61 * C1454 + C1458 + C1458 + C53 * C1456) * C54 * C55 * C1453) *
         C1831 * C1797) /
        (p * q * std::sqrt(p + q));
    d2eexy[8] +=
        (2 * std::pow(Pi, 2.5) *
         (((C89 * C63 + C55 * C90) * C62 + (C89 * C66 + C55 * C93) * C53) *
              C54 * C1451 -
          ((C89 * C447 + C55 * C473) * C53 + (C89 * C445 + C55 * C471) * C62) *
              C54 * C1452 +
          ((C89 * C1454 + C55 * C1472) * C62 +
           (C89 * C1455 + C55 * C1473) * C53) *
              C54 * C1453) *
         C1831 * C1797) /
        (p * q * std::sqrt(p + q));
    d2eexz[8] +=
        (2 * std::pow(Pi, 2.5) *
         (((C110 * C63 + C54 * C111) * C62 + (C110 * C66 + C54 * C114) * C53) *
              C55 * C1451 -
          ((C110 * C447 + C54 * C495) * C53 +
           (C110 * C445 + C54 * C493) * C62) *
              C55 * C1452 +
          ((C110 * C1454 + C54 * C1488) * C62 +
           (C110 * C1455 + C54 * C1489) * C53) *
              C55 * C1453) *
         C1831 * C1797) /
        (p * q * std::sqrt(p + q));
    d2eeyx[8] +=
        (2 * std::pow(Pi, 2.5) *
         (((C62 * C63 + C53 * C66) * C89 + (C62 * C90 + C53 * C131) * C55) *
              C54 * C1451 -
          ((C62 * C471 + C53 * C515) * C55 + (C62 * C445 + C53 * C447) * C89) *
              C54 * C1452 +
          ((C62 * C1454 + C53 * C1455) * C89 +
           (C62 * C1472 + C53 * C1504) * C55) *
              C54 * C1453) *
         C1831 * C1797) /
        (p * q * std::sqrt(p + q));
    d2eeyy[8] +=
        (2 * std::pow(Pi, 2.5) *
         ((C148 * C63 + C153 + C153 + C55 * C149) * C53 * C54 * C1451 -
          (C148 * C445 + C538 + C538 + C55 * C535) * C53 * C54 * C1452 +
          (C148 * C1454 + C1521 + C1521 + C55 * C1519) * C53 * C54 * C1453) *
         C1831 * C1797) /
        (p * q * std::sqrt(p + q));
    d2eeyz[8] +=
        (2 * std::pow(Pi, 2.5) *
         (((C110 * C63 + C54 * C111) * C89 + (C110 * C90 + C54 * C169) * C55) *
              C53 * C1451 -
          ((C110 * C471 + C54 * C557) * C55 +
           (C110 * C445 + C54 * C493) * C89) *
              C53 * C1452 +
          ((C110 * C1454 + C54 * C1488) * C89 +
           (C110 * C1472 + C54 * C1535) * C55) *
              C53 * C1453) *
         C1831 * C1797) /
        (p * q * std::sqrt(p + q));
    d2eezx[8] +=
        (2 * std::pow(Pi, 2.5) *
         (((C62 * C63 + C53 * C66) * C110 + (C62 * C111 + C53 * C186) * C54) *
              C55 * C1451 -
          ((C62 * C493 + C53 * C577) * C54 + (C62 * C445 + C53 * C447) * C110) *
              C55 * C1452 +
          ((C62 * C1454 + C53 * C1455) * C110 +
           (C62 * C1488 + C53 * C1550) * C54) *
              C55 * C1453) *
         C1831 * C1797) /
        (p * q * std::sqrt(p + q));
    d2eezy[8] +=
        (2 * std::pow(Pi, 2.5) *
         (((C89 * C63 + C55 * C90) * C110 + (C89 * C111 + C55 * C203) * C54) *
              C53 * C1451 -
          ((C89 * C493 + C55 * C597) * C54 + (C89 * C445 + C55 * C471) * C110) *
              C53 * C1452 +
          ((C89 * C1454 + C55 * C1472) * C110 +
           (C89 * C1488 + C55 * C1565) * C54) *
              C53 * C1453) *
         C1831 * C1797) /
        (p * q * std::sqrt(p + q));
    d2eezz[8] +=
        (2 * std::pow(Pi, 2.5) *
         ((C220 * C63 + C225 + C225 + C54 * C221) * C55 * C53 * C1451 -
          (C220 * C445 + C620 + C620 + C54 * C617) * C55 * C53 * C1452 +
          (C220 * C1454 + C1582 + C1582 + C54 * C1580) * C55 * C53 * C1453) *
         C1831 * C1797) /
        (p * q * std::sqrt(p + q));
    
}
