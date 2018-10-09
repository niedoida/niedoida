/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_sspp_AB.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
void second_derivative_ee_0011_12(const double ae,
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
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    const double C1589 = ae + be;
    const double C1588 = ae * be;
    const double C1587 = xA - xB;
    const double C1596 = yA - yB;
    const double C1599 = zA - zB;
    const double C1602 = p + q;
    const double C1601 = p * q;
    const double C1607 = xP - xQ;
    const double C1606 = bs[2];
    const double C1612 = bs[3];
    const double C1623 = yP - yQ;
    const double C1633 = zP - zQ;
    const double C63 = bs[0];
    const double C1826 = ce + de;
    const double C1825 = ce * de;
    const double C1824 = xC - xD;
    const double C1839 = yC - yD;
    const double C1848 = zC - zD;
    const double C53 = std::exp(-(std::pow(C1587, 2) * C1588) / C1589);
    const double C55 = std::exp(-(std::pow(C1596, 2) * C1588) / C1589);
    const double C54 = std::exp(-(std::pow(C1599, 2) * C1588) / C1589);
    const double C1603 = 2 * C1601;
    const double C1615 = C1607 * ae;
    const double C1614 = C1607 * be;
    const double C1611 = std::pow(C1607, 2);
    const double C1626 = C1623 * be;
    const double C1625 = C1607 * C1623;
    const double C1645 = C1623 * ae;
    const double C1644 = C1623 * C1607;
    const double C1653 = std::pow(C1623, 2);
    const double C1636 = C1633 * be;
    const double C1635 = C1607 * C1633;
    const double C1657 = C1623 * C1633;
    const double C1664 = C1633 * ae;
    const double C1663 = C1633 * C1607;
    const double C1672 = C1633 * C1623;
    const double C1678 = std::pow(C1633, 2);
    const double C1836 = 2 * C1826;
    const double C1890 = std::pow(C1826, 2);
    const double C1827 = std::pow(C1824, 2);
    const double C1889 = C1824 * de;
    const double C1888 = C1824 * ce;
    const double C1861 = std::pow(C1839, 2);
    const double C1894 = C1839 * de;
    const double C1892 = C1839 * ce;
    const double C1878 = std::pow(C1848, 2);
    const double C1895 = C1848 * de;
    const double C1893 = C1848 * ce;
    const double C61 = -(2 * ae * be * (xA - xB) * C53) / (ae + be);
    const double C62 =
        -((C53 - (C1587 * 2 * C1588 * C1587 * C53) / C1589) * 2 * C1588) /
        C1589;
    const double C89 = -(2 * C1588 * (yA - yB) * C55) / C1589;
    const double C151 =
        -((C55 - (C1596 * 2 * C1588 * C1596 * C55) / C1589) * 2 * C1588) /
        C1589;
    const double C110 = -(2 * C1588 * (zA - zB) * C54) / C1589;
    const double C223 =
        -((C54 - (C1599 * 2 * C1588 * C1599 * C54) / C1589) * 2 * C1588) /
        C1589;
    const double C1605 = C1603 / C1602;
    const double C72 =
        ((std::pow(xP - xQ, 2) * bs[2] * std::pow(C1603 / C1602, 2) -
          (bs[1] * C1603) / C1602) *
         C1588) /
        std::pow(C1589, 2);
    const double C64 = -(C1607 * bs[1] * C1603) / C1602;
    const double C249 = -(C1623 * bs[1] * C1603) / C1602;
    const double C445 = -(C1633 * bs[1] * C1603) / C1602;
    const double C1618 = C1612 * C1615;
    const double C67 = (-(bs[1] * C1615 * C1603) / C1602) / C1589;
    const double C1617 = C1612 * C1614;
    const double C66 = (-(bs[1] * C1614 * C1603) / C1602) / C1589;
    const double C1628 = C1612 * C1626;
    const double C90 = (-(bs[1] * C1626 * C1603) / C1602) / C1589;
    const double C1627 = C1625 * ae;
    const double C1647 = C1612 * C1645;
    const double C131 = (-(bs[1] * C1645 * C1603) / C1602) / C1589;
    const double C1646 = C1644 * ae;
    const double C1638 = C1612 * C1636;
    const double C111 = (-(bs[1] * C1636 * C1603) / C1602) / C1589;
    const double C1637 = C1635 * ae;
    const double C1658 = C1657 * ae;
    const double C1666 = C1612 * C1664;
    const double C186 = (-(bs[1] * C1664 * C1603) / C1602) / C1589;
    const double C1665 = C1663 * ae;
    const double C1673 = C1672 * ae;
    const double C1891 = std::pow(C1836, -1);
    const double C1897 = 2 * C1890;
    const double C1828 = C1827 * C1825;
    const double C1862 = C1861 * C1825;
    const double C1879 = C1878 * C1825;
    const double C1608 = std::pow(C1605, 2);
    const double C1613 = -C1605;
    const double C1629 = C1627 * be;
    const double C1648 = C1646 * be;
    const double C1639 = C1637 * be;
    const double C1659 = C1658 * be;
    const double C1667 = C1665 * be;
    const double C1674 = C1673 * be;
    const double C1829 = C1828 / C1826;
    const double C1863 = C1862 / C1826;
    const double C1880 = C1879 / C1826;
    const double C1610 = C1606 * C1608;
    const double C73 =
        (ae * C1608 * C1606 * C1607 * be + be * C1608 * C1606 * C1607 * ae +
         C1607 *
             (C1606 * C1608 +
              std::pow(C1607, 2) * bs[3] * std::pow(-C1605, 3)) *
             C1588) /
        std::pow(C1589, 2);
    const double C93 =
        (C1608 * C1606 * C1607 * (yP - yQ) * ae * be) / std::pow(C1589, 2);
    const double C114 =
        (C1608 * C1606 * C1607 * (zP - zQ) * ae * be) / std::pow(C1589, 2);
    const double C134 =
        (C1608 * C1606 * C1623 * C1607 * ae * be) / std::pow(C1589, 2);
    const double C152 =
        ((std::pow(C1623, 2) * C1606 * C1608 - (bs[1] * C1603) / C1602) *
         C1588) /
        std::pow(C1589, 2);
    const double C169 =
        (C1608 * C1606 * C1623 * C1633 * ae * be) / std::pow(C1589, 2);
    const double C189 =
        (C1608 * C1606 * C1633 * C1607 * ae * be) / std::pow(C1589, 2);
    const double C206 =
        (C1608 * C1606 * C1633 * C1623 * ae * be) / std::pow(C1589, 2);
    const double C224 =
        ((std::pow(C1633, 2) * C1606 * C1608 - (bs[1] * C1603) / C1602) *
         C1588) /
        std::pow(C1589, 2);
    const double C68 = (C1607 * C1608 * C1606 * C1614) / C1589 -
                       (be * bs[1] * C1603) / (C1602 * C1589);
    const double C69 = (C1607 * C1608 * C1606 * C1615) / C1589 -
                       (ae * bs[1] * C1603) / (C1602 * C1589);
    const double C91 = (C1607 * C1608 * C1606 * C1626) / C1589;
    const double C112 = (C1607 * C1608 * C1606 * C1636) / C1589;
    const double C132 = (C1607 * C1608 * C1606 * C1645) / C1589;
    const double C187 = (C1607 * C1608 * C1606 * C1664) / C1589;
    const double C251 = (C1623 * C1608 * C1606 * C1614) / C1589;
    const double C252 = (C1623 * C1608 * C1606 * C1615) / C1589;
    const double C275 = (C1623 * C1608 * C1606 * C1626) / C1589 -
                        (be * bs[1] * C1603) / (C1602 * C1589);
    const double C297 = (C1623 * C1608 * C1606 * C1636) / C1589;
    const double C319 = (C1623 * C1608 * C1606 * C1645) / C1589 -
                        (ae * bs[1] * C1603) / (C1602 * C1589);
    const double C381 = (C1623 * C1608 * C1606 * C1664) / C1589;
    const double C447 = (C1633 * C1608 * C1606 * C1614) / C1589;
    const double C448 = (C1633 * C1608 * C1606 * C1615) / C1589;
    const double C471 = (C1633 * C1608 * C1606 * C1626) / C1589;
    const double C493 = (C1633 * C1608 * C1606 * C1636) / C1589 -
                        (be * bs[1] * C1603) / (C1602 * C1589);
    const double C515 = (C1633 * C1608 * C1606 * C1645) / C1589;
    const double C577 = (C1633 * C1608 * C1606 * C1664) / C1589 -
                        (ae * bs[1] * C1603) / (C1602 * C1589);
    const double C1616 = std::pow(C1613, 3);
    const double C1830 = -C1829;
    const double C1864 = -C1863;
    const double C1881 = -C1880;
    const double C65 = C1610 * C1611 - (bs[1] * C1603) / C1602;
    const double C250 = C1623 * C1607 * C1610;
    const double C446 = C1633 * C1607 * C1610;
    const double C805 = C1610 * C1653 - (bs[1] * C1603) / C1602;
    const double C951 = C1633 * C1623 * C1610;
    const double C1454 = C1610 * C1678 - (bs[1] * C1603) / C1602;
    const double C1620 = C1616 * C1618;
    const double C1619 = C1616 * C1617;
    const double C1630 = C1616 * C1628;
    const double C1640 = C1616 * C1638;
    const double C1649 = C1616 * C1647;
    const double C1668 = C1616 * C1666;
    const double C94 = (ae * C1608 * C1606 * C1623 * be +
                        C1607 * C1616 * C1612 * C1607 * C1623 * ae * be) /
                       std::pow(C1589, 2);
    const double C115 = (ae * C1608 * C1606 * C1633 * be +
                         C1607 * C1616 * C1612 * C1607 * C1633 * ae * be) /
                        std::pow(C1589, 2);
    const double C135 = (be * C1608 * C1606 * C1623 * ae +
                         C1607 * C1616 * C1612 * C1623 * C1607 * ae * be) /
                        std::pow(C1589, 2);
    const double C153 =
        (C1607 * (C1610 + std::pow(C1623, 2) * C1612 * C1616) * C1588) /
        std::pow(C1589, 2);
    const double C154 =
        ((C1610 + C1653 * C1612 * C1616) * C1588 +
         (C1612 * C1616 + C1653 * bs[4] * std::pow(C1605, 4)) * C1588 * C1611) /
        std::pow(C1589, 2);
    const double C170 =
        (C1607 * C1616 * C1612 * C1623 * C1633 * ae * be) / std::pow(C1589, 2);
    const double C171 =
        (C1616 * C1612 * C1659 + std::pow(C1605, 4) * bs[4] * C1659 * C1611) /
        std::pow(C1589, 2);
    const double C190 = (be * C1608 * C1606 * C1633 * ae +
                         C1607 * C1616 * C1612 * C1633 * C1607 * ae * be) /
                        std::pow(C1589, 2);
    const double C207 =
        (C1607 * C1616 * C1612 * C1633 * C1623 * ae * be) / std::pow(C1589, 2);
    const double C208 =
        (C1616 * C1612 * C1674 + std::pow(C1605, 4) * bs[4] * C1674 * C1611) /
        std::pow(C1589, 2);
    const double C225 =
        (C1607 * (C1610 + std::pow(C1633, 2) * C1612 * C1616) * C1588) /
        std::pow(C1589, 2);
    const double C226 =
        ((C1610 + C1678 * C1612 * C1616) * C1588 +
         (C1612 * C1616 + C1678 * bs[4] * std::pow(C1605, 4)) * C1588 * C1611) /
        std::pow(C1589, 2);
    const double C255 =
        (C1623 * (C1610 + C1611 * C1612 * C1616) * C1588) / std::pow(C1589, 2);
    const double C277 =
        (be * C1608 * C1606 * C1615 + C1623 * C1616 * C1612 * C1629) /
        std::pow(C1589, 2);
    const double C299 = (C1623 * C1616 * C1612 * C1639) / std::pow(C1589, 2);
    const double C321 =
        (ae * C1608 * C1606 * C1614 + C1623 * C1616 * C1612 * C1648) /
        std::pow(C1589, 2);
    const double C341 =
        (ae * C1608 * C1606 * C1626 + be * C1608 * C1606 * C1645 +
         C1623 * (C1610 + C1653 * C1612 * C1616) * C1588) /
        std::pow(C1589, 2);
    const double C361 =
        (ae * C1608 * C1606 * C1636 + C1623 * C1616 * C1612 * C1659) /
        std::pow(C1589, 2);
    const double C383 = (C1623 * C1616 * C1612 * C1667) / std::pow(C1589, 2);
    const double C403 =
        (be * C1608 * C1606 * C1664 + C1623 * C1616 * C1612 * C1674) /
        std::pow(C1589, 2);
    const double C423 =
        (C1623 * (C1610 + C1678 * C1612 * C1616) * C1588) / std::pow(C1589, 2);
    const double C424 =
        (C1623 * C1607 * (C1612 * C1616 + C1678 * bs[4] * std::pow(C1605, 4)) *
         C1588) /
        std::pow(C1589, 2);
    const double C451 =
        (C1633 * (C1610 + C1611 * C1612 * C1616) * C1588) / std::pow(C1589, 2);
    const double C473 = (C1633 * C1616 * C1612 * C1629) / std::pow(C1589, 2);
    const double C495 =
        (be * C1608 * C1606 * C1615 + C1633 * C1616 * C1612 * C1639) /
        std::pow(C1589, 2);
    const double C517 = (C1633 * C1616 * C1612 * C1648) / std::pow(C1589, 2);
    const double C537 =
        (C1633 * (C1610 + C1653 * C1612 * C1616) * C1588) / std::pow(C1589, 2);
    const double C538 =
        (C1633 * C1607 * (C1612 * C1616 + C1653 * bs[4] * std::pow(C1605, 4)) *
         C1588) /
        std::pow(C1589, 2);
    const double C557 =
        (be * C1608 * C1606 * C1645 + C1633 * C1616 * C1612 * C1659) /
        std::pow(C1589, 2);
    const double C579 =
        (ae * C1608 * C1606 * C1614 + C1633 * C1616 * C1612 * C1667) /
        std::pow(C1589, 2);
    const double C599 =
        (ae * C1608 * C1606 * C1626 + C1633 * C1616 * C1612 * C1674) /
        std::pow(C1589, 2);
    const double C619 =
        (ae * C1608 * C1606 * C1636 + be * C1608 * C1606 * C1664 +
         C1633 * (C1610 + C1678 * C1612 * C1616) * C1588) /
        std::pow(C1589, 2);
    const double C808 =
        ((C1610 + C1611 * C1612 * C1616) * C1588 +
         (C1612 * C1616 + C1611 * bs[4] * std::pow(C1605, 4)) * C1588 * C1653) /
        std::pow(C1589, 2);
    const double C840 =
        (C1616 * C1612 * C1639 + std::pow(C1605, 4) * bs[4] * C1639 * C1653) /
        std::pow(C1589, 2);
    const double C902 =
        (C1616 * C1612 * C1667 + std::pow(C1605, 4) * bs[4] * C1667 * C1653) /
        std::pow(C1589, 2);
    const double C932 =
        ((C1610 + C1678 * C1612 * C1616) * C1588 +
         (C1612 * C1616 + C1678 * bs[4] * std::pow(C1605, 4)) * C1588 * C1653) /
        std::pow(C1589, 2);
    const double C954 =
        (C1633 * C1623 * (C1612 * C1616 + C1611 * bs[4] * std::pow(C1605, 4)) *
         C1588) /
        std::pow(C1589, 2);
    const double C1457 =
        ((C1610 + C1611 * C1612 * C1616) * C1588 +
         (C1612 * C1616 + C1611 * bs[4] * std::pow(C1605, 4)) * C1588 * C1678) /
        std::pow(C1589, 2);
    const double C1473 =
        (C1616 * C1612 * C1629 + std::pow(C1605, 4) * bs[4] * C1629 * C1678) /
        std::pow(C1589, 2);
    const double C1505 =
        (C1616 * C1612 * C1648 + std::pow(C1605, 4) * bs[4] * C1648 * C1678) /
        std::pow(C1589, 2);
    const double C1520 =
        ((C1610 + C1653 * C1612 * C1616) * C1588 +
         (C1612 * C1616 + C1653 * bs[4] * std::pow(C1605, 4)) * C1588 * C1678) /
        std::pow(C1589, 2);
    const double C1831 = std::exp(C1830);
    const double C1865 = std::exp(C1864);
    const double C1882 = std::exp(C1881);
    const double C824 =
        (C1616 * C1612 * C1629 + be * C1623 * C1620 +
         C1623 * (be * C1620 + C1623 * std::pow(C1605, 4) * bs[4] * C1629)) /
        std::pow(C1589, 2);
    const double C974 =
        (C1633 * (be * C1620 + C1623 * std::pow(C1605, 4) * bs[4] * C1629)) /
        std::pow(C1589, 2);
    const double C994 = (be * C1623 * C1620 +
                         C1633 * C1623 * std::pow(C1605, 4) * bs[4] * C1639) /
                        std::pow(C1589, 2);
    const double C1489 =
        (C1616 * C1612 * C1639 + be * C1633 * C1620 +
         C1633 * (be * C1620 + C1633 * std::pow(C1605, 4) * bs[4] * C1639)) /
        std::pow(C1589, 2);
    const double C71 =
        (C1608 * C1606 * C1615 + C1607 * (C1607 * C1620 + C1610 * ae) +
         C1607 * C1610 * ae) /
        C1589;
    const double C254 = (C1623 * (C1607 * C1620 + C1610 * ae)) / C1589;
    const double C450 = (C1633 * (C1607 * C1620 + C1610 * ae)) / C1589;
    const double C807 = (C1608 * C1606 * C1615 + C1620 * C1653) / C1589;
    const double C953 = (C1633 * C1623 * C1620) / C1589;
    const double C1456 = (C1608 * C1606 * C1615 + C1620 * C1678) / C1589;
    const double C74 =
        ((C1610 + C1611 * C1612 * C1616) * C1588 +
         ae * (C1607 * C1619 + C1610 * be) + be * (C1607 * C1620 + C1610 * ae) +
         C1607 * (ae * C1619 + be * C1620 +
                  C1607 * (C1612 * C1616 + C1611 * bs[4] * std::pow(C1605, 4)) *
                      C1588)) /
        std::pow(C1589, 2);
    const double C256 =
        (ae * C1623 * C1619 + be * C1623 * C1620 +
         C1607 * C1623 * (C1612 * C1616 + C1611 * bs[4] * std::pow(C1605, 4)) *
             C1588) /
        std::pow(C1589, 2);
    const double C452 =
        (ae * C1633 * C1619 + be * C1633 * C1620 +
         C1607 * C1633 * (C1612 * C1616 + C1611 * bs[4] * std::pow(C1605, 4)) *
             C1588) /
        std::pow(C1589, 2);
    const double C856 =
        (C1616 * C1612 * C1648 + ae * C1623 * C1619 +
         C1623 * (ae * C1619 + C1623 * std::pow(C1605, 4) * bs[4] * C1648)) /
        std::pow(C1589, 2);
    const double C1014 = (ae * C1633 * C1619 +
                          C1623 * C1633 * std::pow(C1605, 4) * bs[4] * C1648) /
                         std::pow(C1589, 2);
    const double C1072 = (ae * C1623 * C1619 +
                          C1633 * C1623 * std::pow(C1605, 4) * bs[4] * C1667) /
                         std::pow(C1589, 2);
    const double C1551 =
        (C1616 * C1612 * C1667 + ae * C1633 * C1619 +
         C1633 * (ae * C1619 + C1633 * std::pow(C1605, 4) * bs[4] * C1667)) /
        std::pow(C1589, 2);
    const double C70 =
        (C1608 * C1606 * C1614 + C1607 * (C1607 * C1619 + C1610 * be) +
         C1607 * C1610 * be) /
        C1589;
    const double C253 = (C1623 * (C1607 * C1619 + C1610 * be)) / C1589;
    const double C449 = (C1633 * (C1607 * C1619 + C1610 * be)) / C1589;
    const double C806 = (C1608 * C1606 * C1614 + C1619 * C1653) / C1589;
    const double C952 = (C1633 * C1623 * C1619) / C1589;
    const double C1455 = (C1608 * C1606 * C1614 + C1619 * C1678) / C1589;
    const double C95 =
        (C1616 * C1612 * C1629 + ae * C1607 * C1630 +
         C1607 * (ae * C1630 + C1607 * std::pow(C1605, 4) * bs[4] * C1629)) /
        std::pow(C1589, 2);
    const double C278 =
        (be * (C1607 * C1620 + C1610 * ae) +
         C1623 * (ae * C1630 + C1607 * std::pow(C1605, 4) * bs[4] * C1629)) /
        std::pow(C1589, 2);
    const double C474 =
        (C1633 * (ae * C1630 + C1607 * std::pow(C1605, 4) * bs[4] * C1629)) /
        std::pow(C1589, 2);
    const double C600 = (ae * C1607 * C1630 +
                         C1633 * C1607 * std::pow(C1605, 4) * bs[4] * C1674) /
                        std::pow(C1589, 2);
    const double C1566 =
        (C1616 * C1612 * C1674 + ae * C1633 * C1630 +
         C1633 * (ae * C1630 + C1633 * std::pow(C1605, 4) * bs[4] * C1674)) /
        std::pow(C1589, 2);
    const double C92 = (C1608 * C1606 * C1626 + C1630 * C1611) / C1589;
    const double C276 = (C1623 * C1607 * C1630 + C1607 * C1610 * be) / C1589;
    const double C472 = (C1633 * C1607 * C1630) / C1589;
    const double C823 =
        (C1608 * C1606 * C1626 + C1623 * (C1623 * C1630 + C1610 * be) +
         C1623 * C1610 * be) /
        C1589;
    const double C973 = (C1633 * (C1623 * C1630 + C1610 * be)) / C1589;
    const double C1472 = (C1608 * C1606 * C1626 + C1630 * C1678) / C1589;
    const double C116 =
        (C1616 * C1612 * C1639 + ae * C1607 * C1640 +
         C1607 * (ae * C1640 + C1607 * std::pow(C1605, 4) * bs[4] * C1639)) /
        std::pow(C1589, 2);
    const double C300 =
        (C1623 * (ae * C1640 + C1607 * std::pow(C1605, 4) * bs[4] * C1639)) /
        std::pow(C1589, 2);
    const double C362 = (ae * C1607 * C1640 +
                         C1623 * C1607 * std::pow(C1605, 4) * bs[4] * C1659) /
                        std::pow(C1589, 2);
    const double C496 =
        (be * (C1607 * C1620 + C1610 * ae) +
         C1633 * (ae * C1640 + C1607 * std::pow(C1605, 4) * bs[4] * C1639)) /
        std::pow(C1589, 2);
    const double C886 =
        (C1616 * C1612 * C1659 + ae * C1623 * C1640 +
         C1623 * (ae * C1640 + C1623 * std::pow(C1605, 4) * bs[4] * C1659)) /
        std::pow(C1589, 2);
    const double C113 = (C1608 * C1606 * C1636 + C1640 * C1611) / C1589;
    const double C298 = (C1623 * C1607 * C1640) / C1589;
    const double C494 = (C1633 * C1607 * C1640 + C1607 * C1610 * be) / C1589;
    const double C839 = (C1608 * C1606 * C1636 + C1640 * C1653) / C1589;
    const double C993 = (C1633 * C1623 * C1640 + C1623 * C1610 * be) / C1589;
    const double C1488 =
        (C1608 * C1606 * C1636 + C1633 * (C1633 * C1640 + C1610 * be) +
         C1633 * C1610 * be) /
        C1589;
    const double C136 =
        (C1616 * C1612 * C1648 + be * C1607 * C1649 +
         C1607 * (be * C1649 + C1607 * std::pow(C1605, 4) * bs[4] * C1648)) /
        std::pow(C1589, 2);
    const double C322 =
        (ae * (C1607 * C1619 + C1610 * be) +
         C1623 * (be * C1649 + C1607 * std::pow(C1605, 4) * bs[4] * C1648)) /
        std::pow(C1589, 2);
    const double C342 =
        (ae * C1607 * C1630 + be * C1607 * C1649 +
         C1623 * C1607 * (C1612 * C1616 + C1653 * bs[4] * std::pow(C1605, 4)) *
             C1588) /
        std::pow(C1589, 2);
    const double C518 =
        (C1633 * (be * C1649 + C1607 * std::pow(C1605, 4) * bs[4] * C1648)) /
        std::pow(C1589, 2);
    const double C558 = (be * C1607 * C1649 +
                         C1633 * C1607 * std::pow(C1605, 4) * bs[4] * C1659) /
                        std::pow(C1589, 2);
    const double C871 =
        ((C1610 + C1653 * C1612 * C1616) * C1588 +
         ae * (C1623 * C1630 + C1610 * be) + be * (C1623 * C1649 + C1610 * ae) +
         C1623 * (ae * C1630 + be * C1649 +
                  C1623 * (C1612 * C1616 + C1653 * bs[4] * std::pow(C1605, 4)) *
                      C1588)) /
        std::pow(C1589, 2);
    const double C1033 =
        (ae * C1633 * C1630 + be * C1633 * C1649 +
         C1623 * C1633 * (C1612 * C1616 + C1653 * bs[4] * std::pow(C1605, 4)) *
             C1588) /
        std::pow(C1589, 2);
    const double C1052 =
        (ae * (C1633 * C1640 + C1610 * be) +
         C1623 * (be * C1649 + C1633 * std::pow(C1605, 4) * bs[4] * C1659)) /
        std::pow(C1589, 2);
    const double C1535 =
        (C1616 * C1612 * C1659 + be * C1633 * C1649 +
         C1633 * (be * C1649 + C1633 * std::pow(C1605, 4) * bs[4] * C1659)) /
        std::pow(C1589, 2);
    const double C133 = (C1608 * C1606 * C1645 + C1649 * C1611) / C1589;
    const double C320 = (C1623 * C1607 * C1649 + C1607 * C1610 * ae) / C1589;
    const double C516 = (C1633 * C1607 * C1649) / C1589;
    const double C855 =
        (C1608 * C1606 * C1645 + C1623 * (C1623 * C1649 + C1610 * ae) +
         C1623 * C1610 * ae) /
        C1589;
    const double C1013 = (C1633 * (C1623 * C1649 + C1610 * ae)) / C1589;
    const double C1504 = (C1608 * C1606 * C1645 + C1649 * C1678) / C1589;
    const double C191 =
        (C1616 * C1612 * C1667 + be * C1607 * C1668 +
         C1607 * (be * C1668 + C1607 * std::pow(C1605, 4) * bs[4] * C1667)) /
        std::pow(C1589, 2);
    const double C384 =
        (C1623 * (be * C1668 + C1607 * std::pow(C1605, 4) * bs[4] * C1667)) /
        std::pow(C1589, 2);
    const double C404 = (be * C1607 * C1668 +
                         C1623 * C1607 * std::pow(C1605, 4) * bs[4] * C1674) /
                        std::pow(C1589, 2);
    const double C580 =
        (ae * (C1607 * C1619 + C1610 * be) +
         C1633 * (be * C1668 + C1607 * std::pow(C1605, 4) * bs[4] * C1667)) /
        std::pow(C1589, 2);
    const double C620 =
        (ae * C1607 * C1640 + be * C1607 * C1668 +
         C1633 * C1607 * (C1612 * C1616 + C1678 * bs[4] * std::pow(C1605, 4)) *
             C1588) /
        std::pow(C1589, 2);
    const double C917 =
        (C1616 * C1612 * C1674 + be * C1623 * C1668 +
         C1623 * (be * C1668 + C1623 * std::pow(C1605, 4) * bs[4] * C1674)) /
        std::pow(C1589, 2);
    const double C1091 =
        (ae * (C1623 * C1630 + C1610 * be) +
         C1633 * (be * C1668 + C1623 * std::pow(C1605, 4) * bs[4] * C1674)) /
        std::pow(C1589, 2);
    const double C1110 =
        (ae * C1623 * C1640 + be * C1623 * C1668 +
         C1633 * C1623 * (C1612 * C1616 + C1678 * bs[4] * std::pow(C1605, 4)) *
             C1588) /
        std::pow(C1589, 2);
    const double C1581 =
        ((C1610 + C1678 * C1612 * C1616) * C1588 +
         ae * (C1633 * C1640 + C1610 * be) + be * (C1633 * C1668 + C1610 * ae) +
         C1633 * (ae * C1640 + be * C1668 +
                  C1633 * (C1612 * C1616 + C1678 * bs[4] * std::pow(C1605, 4)) *
                      C1588)) /
        std::pow(C1589, 2);
    const double C188 = (C1608 * C1606 * C1664 + C1668 * C1611) / C1589;
    const double C382 = (C1623 * C1607 * C1668) / C1589;
    const double C578 = (C1633 * C1607 * C1668 + C1607 * C1610 * ae) / C1589;
    const double C901 = (C1608 * C1606 * C1664 + C1668 * C1653) / C1589;
    const double C1071 = (C1633 * C1623 * C1668 + C1623 * C1610 * ae) / C1589;
    const double C1550 =
        (C1608 * C1606 * C1664 + C1633 * (C1633 * C1668 + C1610 * ae) +
         C1633 * C1610 * ae) /
        C1589;
    const double C1898 = C1891 * C1831;
    const double C1896 = C1831 * C1888;
    const double C247 = -(C1831 * C1889) / C1826;
    const double C1900 = C1891 * C1865;
    const double C1899 = C1865 * C1892;
    const double C639 = -(C1865 * C1894) / C1826;
    const double C1902 = C1891 * C1882;
    const double C1901 = C1882 * C1893;
    const double C1129 = -(C1882 * C1895) / C1826;
    const double C60 = C1898 / C1836;
    const double C58 = C1831 / C1836 - (C1896 * C1889) / C1890;
    const double C59 = C1896 / C1897 - (C1898 * C1889) / C1826;
    const double C641 = C1896 / C1826;
    const double C803 = C1900 / C1836;
    const double C245 = C1899 / C1826;
    const double C801 = C1865 / C1836 - (C1899 * C1894) / C1890;
    const double C802 = C1899 / C1897 - (C1900 * C1894) / C1826;
    const double C1453 = C1902 / C1836;
    const double C443 = C1901 / C1826;
    const double C1451 = C1882 / C1836 - (C1901 * C1895) / C1890;
    const double C1452 = C1901 / C1897 - (C1902 * C1895) / C1826;
    
    d2eexx[0] += (2 * std::pow(Pi, 2.5) *
                  ((C61 * C66 - C62 * C63 - C61 * C67 + C53 * C72) * C54 * C55 *
                       C1882 * C1865 * C58 -
                   (C61 * C68 - C62 * C64 - C61 * C69 + C53 * C73) * C54 * C55 *
                       C1882 * C1865 * C59 +
                   (C61 * C70 - C62 * C65 - C61 * C71 + C53 * C74) * C54 * C55 *
                       C1882 * C1865 * C60)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[0] +=
        (2 * std::pow(Pi, 2.5) *
         (((C55 * C90 - C89 * C63) * C61 + (C55 * C93 - C89 * C67) * C53) *
              C54 * C1882 * C1865 * C58 +
          ((C89 * C64 - C55 * C91) * C61 + (C89 * C69 - C55 * C94) * C53) *
              C54 * C1882 * C1865 * C59 +
          ((C55 * C92 - C89 * C65) * C61 + (C55 * C95 - C89 * C71) * C53) *
              C54 * C1882 * C1865 * C60)) /
        (p * q * std::sqrt(p + q));
    d2eexz[0] +=
        (2 * std::pow(Pi, 2.5) *
         (((C54 * C111 - C110 * C63) * C61 + (C54 * C114 - C110 * C67) * C53) *
              C55 * C1882 * C1865 * C58 +
          ((C110 * C64 - C54 * C112) * C61 + (C110 * C69 - C54 * C115) * C53) *
              C55 * C1882 * C1865 * C59 +
          ((C54 * C113 - C110 * C65) * C61 + (C54 * C116 - C110 * C71) * C53) *
              C55 * C1882 * C1865 * C60)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[0] +=
        (2 * std::pow(Pi, 2.5) *
         (((C53 * C66 - C61 * C63) * C89 + (C53 * C134 - C61 * C131) * C55) *
              C54 * C1882 * C1865 * C58 +
          ((C61 * C64 - C53 * C68) * C89 + (C61 * C132 - C53 * C135) * C55) *
              C54 * C1882 * C1865 * C59 +
          ((C53 * C70 - C61 * C65) * C89 + (C53 * C136 - C61 * C133) * C55) *
              C54 * C1882 * C1865 * C60)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[0] += (2 * std::pow(Pi, 2.5) *
                  ((C89 * C90 - C151 * C63 - C89 * C131 + C55 * C152) * C53 *
                       C54 * C1882 * C1865 * C58 -
                   (C89 * C91 - C151 * C64 - C89 * C132 + C55 * C153) * C53 *
                       C54 * C1882 * C1865 * C59 +
                   (C89 * C92 - C151 * C65 - C89 * C133 + C55 * C154) * C53 *
                       C54 * C1882 * C1865 * C60)) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[0] +=
        (2 * std::pow(Pi, 2.5) *
         (((C54 * C111 - C110 * C63) * C89 + (C54 * C169 - C110 * C131) * C55) *
              C53 * C1882 * C1865 * C58 +
          ((C110 * C64 - C54 * C112) * C89 + (C110 * C132 - C54 * C170) * C55) *
              C53 * C1882 * C1865 * C59 +
          ((C54 * C113 - C110 * C65) * C89 + (C54 * C171 - C110 * C133) * C55) *
              C53 * C1882 * C1865 * C60)) /
        (p * q * std::sqrt(p + q));
    d2eezx[0] +=
        (2 * std::pow(Pi, 2.5) *
         (((C53 * C66 - C61 * C63) * C110 + (C53 * C189 - C61 * C186) * C54) *
              C55 * C1882 * C1865 * C58 +
          ((C61 * C64 - C53 * C68) * C110 + (C61 * C187 - C53 * C190) * C54) *
              C55 * C1882 * C1865 * C59 +
          ((C53 * C70 - C61 * C65) * C110 + (C53 * C191 - C61 * C188) * C54) *
              C55 * C1882 * C1865 * C60)) /
        (p * q * std::sqrt(p + q));
    d2eezy[0] +=
        (2 * std::pow(Pi, 2.5) *
         (((C55 * C90 - C89 * C63) * C110 + (C55 * C206 - C89 * C186) * C54) *
              C53 * C1882 * C1865 * C58 +
          ((C89 * C64 - C55 * C91) * C110 + (C89 * C187 - C55 * C207) * C54) *
              C53 * C1882 * C1865 * C59 +
          ((C55 * C92 - C89 * C65) * C110 + (C55 * C208 - C89 * C188) * C54) *
              C53 * C1882 * C1865 * C60)) /
        (p * q * std::sqrt(p + q));
    d2eezz[0] += (2 * std::pow(Pi, 2.5) *
                  ((C110 * C111 - C223 * C63 - C110 * C186 + C54 * C224) * C55 *
                       C53 * C1882 * C1865 * C58 -
                   (C110 * C112 - C223 * C64 - C110 * C187 + C54 * C225) * C55 *
                       C53 * C1882 * C1865 * C59 +
                   (C110 * C113 - C223 * C65 - C110 * C188 + C54 * C226) * C55 *
                       C53 * C1882 * C1865 * C60)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[1] += (2 * std::pow(Pi, 2.5) *
                  (((C61 * C66 - C62 * C63 - C61 * C67 + C53 * C72) * C54 *
                        C55 * C1882 * C245 -
                    (C61 * C251 - C62 * C249 - C61 * C252 + C53 * C255) * C54 *
                        C55 * C1882 * C1900) *
                       C247 +
                   ((C61 * C253 - C62 * C250 - C61 * C254 + C53 * C256) * C54 *
                        C55 * C1882 * C1900 -
                    (C61 * C68 - C62 * C64 - C61 * C69 + C53 * C73) * C54 *
                        C55 * C1882 * C245) *
                       C1898)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[1] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C55 * C90 - C89 * C63) * C61 + (C55 * C93 - C89 * C67) * C53) *
               C54 * C1882 * C245 +
           ((C89 * C249 - C55 * C275) * C61 + (C89 * C252 - C55 * C277) * C53) *
               C54 * C1882 * C1900) *
              C247 +
          (((C89 * C64 - C55 * C91) * C61 + (C89 * C69 - C55 * C94) * C53) *
               C54 * C1882 * C245 +
           ((C55 * C276 - C89 * C250) * C61 + (C55 * C278 - C89 * C254) * C53) *
               C54 * C1882 * C1900) *
              C1898)) /
        (p * q * std::sqrt(p + q));
    d2eexz[1] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C54 * C111 - C110 * C63) * C61 + (C54 * C114 - C110 * C67) * C53) *
               C55 * C1882 * C245 +
           ((C110 * C249 - C54 * C297) * C61 +
            (C110 * C252 - C54 * C299) * C53) *
               C55 * C1882 * C1900) *
              C247 +
          (((C110 * C64 - C54 * C112) * C61 + (C110 * C69 - C54 * C115) * C53) *
               C55 * C1882 * C245 +
           ((C54 * C298 - C110 * C250) * C61 +
            (C54 * C300 - C110 * C254) * C53) *
               C55 * C1882 * C1900) *
              C1898)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[1] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C53 * C66 - C61 * C63) * C89 + (C53 * C134 - C61 * C131) * C55) *
               C54 * C1882 * C245 +
           ((C61 * C249 - C53 * C251) * C89 + (C61 * C319 - C53 * C321) * C55) *
               C54 * C1882 * C1900) *
              C247 +
          (((C61 * C64 - C53 * C68) * C89 + (C61 * C132 - C53 * C135) * C55) *
               C54 * C1882 * C245 +
           ((C53 * C253 - C61 * C250) * C89 + (C53 * C322 - C61 * C320) * C55) *
               C54 * C1882 * C1900) *
              C1898)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[1] += (2 * std::pow(Pi, 2.5) *
                  (((C89 * C90 - C151 * C63 - C89 * C131 + C55 * C152) * C53 *
                        C54 * C1882 * C245 -
                    (C89 * C275 - C151 * C249 - C89 * C319 + C55 * C341) * C53 *
                        C54 * C1882 * C1900) *
                       C247 +
                   ((C89 * C276 - C151 * C250 - C89 * C320 + C55 * C342) * C53 *
                        C54 * C1882 * C1900 -
                    (C89 * C91 - C151 * C64 - C89 * C132 + C55 * C153) * C53 *
                        C54 * C1882 * C245) *
                       C1898)) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[1] += (2 * std::pow(Pi, 2.5) *
                  ((((C54 * C111 - C110 * C63) * C89 +
                     (C54 * C169 - C110 * C131) * C55) *
                        C53 * C1882 * C245 +
                    ((C110 * C249 - C54 * C297) * C89 +
                     (C110 * C319 - C54 * C361) * C55) *
                        C53 * C1882 * C1900) *
                       C247 +
                   (((C110 * C64 - C54 * C112) * C89 +
                     (C110 * C132 - C54 * C170) * C55) *
                        C53 * C1882 * C245 +
                    ((C54 * C298 - C110 * C250) * C89 +
                     (C54 * C362 - C110 * C320) * C55) *
                        C53 * C1882 * C1900) *
                       C1898)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[1] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C53 * C66 - C61 * C63) * C110 + (C53 * C189 - C61 * C186) * C54) *
               C55 * C1882 * C245 +
           ((C61 * C249 - C53 * C251) * C110 +
            (C61 * C381 - C53 * C383) * C54) *
               C55 * C1882 * C1900) *
              C247 +
          (((C61 * C64 - C53 * C68) * C110 + (C61 * C187 - C53 * C190) * C54) *
               C55 * C1882 * C245 +
           ((C53 * C253 - C61 * C250) * C110 +
            (C53 * C384 - C61 * C382) * C54) *
               C55 * C1882 * C1900) *
              C1898)) /
        (p * q * std::sqrt(p + q));
    d2eezy[1] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C55 * C90 - C89 * C63) * C110 + (C55 * C206 - C89 * C186) * C54) *
               C53 * C1882 * C245 +
           ((C89 * C249 - C55 * C275) * C110 +
            (C89 * C381 - C55 * C403) * C54) *
               C53 * C1882 * C1900) *
              C247 +
          (((C89 * C64 - C55 * C91) * C110 + (C89 * C187 - C55 * C207) * C54) *
               C53 * C1882 * C245 +
           ((C55 * C276 - C89 * C250) * C110 +
            (C55 * C404 - C89 * C382) * C54) *
               C53 * C1882 * C1900) *
              C1898)) /
        (p * q * std::sqrt(p + q));
    d2eezz[1] += (2 * std::pow(Pi, 2.5) *
                  (((C110 * C111 - C223 * C63 - C110 * C186 + C54 * C224) *
                        C55 * C53 * C1882 * C245 -
                    (C110 * C297 - C223 * C249 - C110 * C381 + C54 * C423) *
                        C55 * C53 * C1882 * C1900) *
                       C247 +
                   ((C110 * C298 - C223 * C250 - C110 * C382 + C54 * C424) *
                        C55 * C53 * C1882 * C1900 -
                    (C110 * C112 - C223 * C64 - C110 * C187 + C54 * C225) *
                        C55 * C53 * C1882 * C245) *
                       C1898)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[2] +=
        (2 * std::pow(Pi, 2.5) *
         (((C61 * C66 - C62 * C63 - C61 * C67 + C53 * C72) * C54 * C55 * C443 -
           (C61 * C447 - C62 * C445 - C61 * C448 + C53 * C451) * C54 * C55 *
               C1902) *
              C1865 * C247 +
          ((C61 * C449 - C62 * C446 - C61 * C450 + C53 * C452) * C54 * C55 *
               C1902 -
           (C61 * C68 - C62 * C64 - C61 * C69 + C53 * C73) * C54 * C55 * C443) *
              C1865 * C1898)) /
        (p * q * std::sqrt(p + q));
    d2eexy[2] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C55 * C90 - C89 * C63) * C61 + (C55 * C93 - C89 * C67) * C53) *
               C54 * C443 +
           ((C89 * C445 - C55 * C471) * C61 + (C89 * C448 - C55 * C473) * C53) *
               C54 * C1902) *
              C1865 * C247 +
          (((C89 * C64 - C55 * C91) * C61 + (C89 * C69 - C55 * C94) * C53) *
               C54 * C443 +
           ((C55 * C472 - C89 * C446) * C61 + (C55 * C474 - C89 * C450) * C53) *
               C54 * C1902) *
              C1865 * C1898)) /
        (p * q * std::sqrt(p + q));
    d2eexz[2] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C54 * C111 - C110 * C63) * C61 + (C54 * C114 - C110 * C67) * C53) *
               C55 * C443 +
           ((C110 * C445 - C54 * C493) * C61 +
            (C110 * C448 - C54 * C495) * C53) *
               C55 * C1902) *
              C1865 * C247 +
          (((C110 * C64 - C54 * C112) * C61 + (C110 * C69 - C54 * C115) * C53) *
               C55 * C443 +
           ((C54 * C494 - C110 * C446) * C61 +
            (C54 * C496 - C110 * C450) * C53) *
               C55 * C1902) *
              C1865 * C1898)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[2] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C53 * C66 - C61 * C63) * C89 + (C53 * C134 - C61 * C131) * C55) *
               C54 * C443 +
           ((C61 * C445 - C53 * C447) * C89 + (C61 * C515 - C53 * C517) * C55) *
               C54 * C1902) *
              C1865 * C247 +
          (((C61 * C64 - C53 * C68) * C89 + (C61 * C132 - C53 * C135) * C55) *
               C54 * C443 +
           ((C53 * C449 - C61 * C446) * C89 + (C53 * C518 - C61 * C516) * C55) *
               C54 * C1902) *
              C1865 * C1898)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[2] += (2 * std::pow(Pi, 2.5) *
                  (((C89 * C90 - C151 * C63 - C89 * C131 + C55 * C152) * C53 *
                        C54 * C443 -
                    (C89 * C471 - C151 * C445 - C89 * C515 + C55 * C537) * C53 *
                        C54 * C1902) *
                       C1865 * C247 +
                   ((C89 * C472 - C151 * C446 - C89 * C516 + C55 * C538) * C53 *
                        C54 * C1902 -
                    (C89 * C91 - C151 * C64 - C89 * C132 + C55 * C153) * C53 *
                        C54 * C443) *
                       C1865 * C1898)) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[2] += (2 * std::pow(Pi, 2.5) *
                  ((((C54 * C111 - C110 * C63) * C89 +
                     (C54 * C169 - C110 * C131) * C55) *
                        C53 * C443 +
                    ((C110 * C445 - C54 * C493) * C89 +
                     (C110 * C515 - C54 * C557) * C55) *
                        C53 * C1902) *
                       C1865 * C247 +
                   (((C110 * C64 - C54 * C112) * C89 +
                     (C110 * C132 - C54 * C170) * C55) *
                        C53 * C443 +
                    ((C54 * C494 - C110 * C446) * C89 +
                     (C54 * C558 - C110 * C516) * C55) *
                        C53 * C1902) *
                       C1865 * C1898)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[2] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C53 * C66 - C61 * C63) * C110 + (C53 * C189 - C61 * C186) * C54) *
               C55 * C443 +
           ((C61 * C445 - C53 * C447) * C110 +
            (C61 * C577 - C53 * C579) * C54) *
               C55 * C1902) *
              C1865 * C247 +
          (((C61 * C64 - C53 * C68) * C110 + (C61 * C187 - C53 * C190) * C54) *
               C55 * C443 +
           ((C53 * C449 - C61 * C446) * C110 +
            (C53 * C580 - C61 * C578) * C54) *
               C55 * C1902) *
              C1865 * C1898)) /
        (p * q * std::sqrt(p + q));
    d2eezy[2] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C55 * C90 - C89 * C63) * C110 + (C55 * C206 - C89 * C186) * C54) *
               C53 * C443 +
           ((C89 * C445 - C55 * C471) * C110 +
            (C89 * C577 - C55 * C599) * C54) *
               C53 * C1902) *
              C1865 * C247 +
          (((C89 * C64 - C55 * C91) * C110 + (C89 * C187 - C55 * C207) * C54) *
               C53 * C443 +
           ((C55 * C472 - C89 * C446) * C110 +
            (C55 * C600 - C89 * C578) * C54) *
               C53 * C1902) *
              C1865 * C1898)) /
        (p * q * std::sqrt(p + q));
    d2eezz[2] += (2 * std::pow(Pi, 2.5) *
                  (((C110 * C111 - C223 * C63 - C110 * C186 + C54 * C224) *
                        C55 * C53 * C443 -
                    (C110 * C493 - C223 * C445 - C110 * C577 + C54 * C619) *
                        C55 * C53 * C1902) *
                       C1865 * C247 +
                   ((C110 * C494 - C223 * C446 - C110 * C578 + C54 * C620) *
                        C55 * C53 * C1902 -
                    (C110 * C112 - C223 * C64 - C110 * C187 + C54 * C225) *
                        C55 * C53 * C443) *
                       C1865 * C1898)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[3] += (2 * std::pow(Pi, 2.5) *
                  (((C61 * C66 - C62 * C63 - C61 * C67 + C53 * C72) * C54 *
                        C55 * C1882 * C639 -
                    (C61 * C251 - C62 * C249 - C61 * C252 + C53 * C255) * C54 *
                        C55 * C1882 * C1900) *
                       C641 +
                   ((C61 * C253 - C62 * C250 - C61 * C254 + C53 * C256) * C54 *
                        C55 * C1882 * C1900 -
                    (C61 * C68 - C62 * C64 - C61 * C69 + C53 * C73) * C54 *
                        C55 * C1882 * C639) *
                       C1898)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[3] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C55 * C90 - C89 * C63) * C61 + (C55 * C93 - C89 * C67) * C53) *
               C54 * C1882 * C639 +
           ((C89 * C249 - C55 * C275) * C61 + (C89 * C252 - C55 * C277) * C53) *
               C54 * C1882 * C1900) *
              C641 +
          (((C89 * C64 - C55 * C91) * C61 + (C89 * C69 - C55 * C94) * C53) *
               C54 * C1882 * C639 +
           ((C55 * C276 - C89 * C250) * C61 + (C55 * C278 - C89 * C254) * C53) *
               C54 * C1882 * C1900) *
              C1898)) /
        (p * q * std::sqrt(p + q));
    d2eexz[3] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C54 * C111 - C110 * C63) * C61 + (C54 * C114 - C110 * C67) * C53) *
               C55 * C1882 * C639 +
           ((C110 * C249 - C54 * C297) * C61 +
            (C110 * C252 - C54 * C299) * C53) *
               C55 * C1882 * C1900) *
              C641 +
          (((C110 * C64 - C54 * C112) * C61 + (C110 * C69 - C54 * C115) * C53) *
               C55 * C1882 * C639 +
           ((C54 * C298 - C110 * C250) * C61 +
            (C54 * C300 - C110 * C254) * C53) *
               C55 * C1882 * C1900) *
              C1898)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[3] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C53 * C66 - C61 * C63) * C89 + (C53 * C134 - C61 * C131) * C55) *
               C54 * C1882 * C639 +
           ((C61 * C249 - C53 * C251) * C89 + (C61 * C319 - C53 * C321) * C55) *
               C54 * C1882 * C1900) *
              C641 +
          (((C61 * C64 - C53 * C68) * C89 + (C61 * C132 - C53 * C135) * C55) *
               C54 * C1882 * C639 +
           ((C53 * C253 - C61 * C250) * C89 + (C53 * C322 - C61 * C320) * C55) *
               C54 * C1882 * C1900) *
              C1898)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[3] += (2 * std::pow(Pi, 2.5) *
                  (((C89 * C90 - C151 * C63 - C89 * C131 + C55 * C152) * C53 *
                        C54 * C1882 * C639 -
                    (C89 * C275 - C151 * C249 - C89 * C319 + C55 * C341) * C53 *
                        C54 * C1882 * C1900) *
                       C641 +
                   ((C89 * C276 - C151 * C250 - C89 * C320 + C55 * C342) * C53 *
                        C54 * C1882 * C1900 -
                    (C89 * C91 - C151 * C64 - C89 * C132 + C55 * C153) * C53 *
                        C54 * C1882 * C639) *
                       C1898)) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[3] += (2 * std::pow(Pi, 2.5) *
                  ((((C54 * C111 - C110 * C63) * C89 +
                     (C54 * C169 - C110 * C131) * C55) *
                        C53 * C1882 * C639 +
                    ((C110 * C249 - C54 * C297) * C89 +
                     (C110 * C319 - C54 * C361) * C55) *
                        C53 * C1882 * C1900) *
                       C641 +
                   (((C110 * C64 - C54 * C112) * C89 +
                     (C110 * C132 - C54 * C170) * C55) *
                        C53 * C1882 * C639 +
                    ((C54 * C298 - C110 * C250) * C89 +
                     (C54 * C362 - C110 * C320) * C55) *
                        C53 * C1882 * C1900) *
                       C1898)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[3] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C53 * C66 - C61 * C63) * C110 + (C53 * C189 - C61 * C186) * C54) *
               C55 * C1882 * C639 +
           ((C61 * C249 - C53 * C251) * C110 +
            (C61 * C381 - C53 * C383) * C54) *
               C55 * C1882 * C1900) *
              C641 +
          (((C61 * C64 - C53 * C68) * C110 + (C61 * C187 - C53 * C190) * C54) *
               C55 * C1882 * C639 +
           ((C53 * C253 - C61 * C250) * C110 +
            (C53 * C384 - C61 * C382) * C54) *
               C55 * C1882 * C1900) *
              C1898)) /
        (p * q * std::sqrt(p + q));
    d2eezy[3] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C55 * C90 - C89 * C63) * C110 + (C55 * C206 - C89 * C186) * C54) *
               C53 * C1882 * C639 +
           ((C89 * C249 - C55 * C275) * C110 +
            (C89 * C381 - C55 * C403) * C54) *
               C53 * C1882 * C1900) *
              C641 +
          (((C89 * C64 - C55 * C91) * C110 + (C89 * C187 - C55 * C207) * C54) *
               C53 * C1882 * C639 +
           ((C55 * C276 - C89 * C250) * C110 +
            (C55 * C404 - C89 * C382) * C54) *
               C53 * C1882 * C1900) *
              C1898)) /
        (p * q * std::sqrt(p + q));
    d2eezz[3] += (2 * std::pow(Pi, 2.5) *
                  (((C110 * C111 - C223 * C63 - C110 * C186 + C54 * C224) *
                        C55 * C53 * C1882 * C639 -
                    (C110 * C297 - C223 * C249 - C110 * C381 + C54 * C423) *
                        C55 * C53 * C1882 * C1900) *
                       C641 +
                   ((C110 * C298 - C223 * C250 - C110 * C382 + C54 * C424) *
                        C55 * C53 * C1882 * C1900 -
                    (C110 * C112 - C223 * C64 - C110 * C187 + C54 * C225) *
                        C55 * C53 * C1882 * C639) *
                       C1898)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[4] += (2 * std::pow(Pi, 2.5) *
                  ((C61 * C66 - C62 * C63 - C61 * C67 + C53 * C72) * C54 * C55 *
                       C1882 * C801 -
                   (C61 * C251 - C62 * C249 - C61 * C252 + C53 * C255) * C54 *
                       C55 * C1882 * C802 +
                   (C61 * C806 - C62 * C805 - C61 * C807 + C53 * C808) * C54 *
                       C55 * C1882 * C803) *
                  C1831) /
                 (p * q * std::sqrt(p + q));
    d2eexy[4] +=
        (2 * std::pow(Pi, 2.5) *
         (((C55 * C90 - C89 * C63) * C61 + (C55 * C93 - C89 * C67) * C53) *
              C54 * C1882 * C801 +
          ((C89 * C249 - C55 * C275) * C61 + (C89 * C252 - C55 * C277) * C53) *
              C54 * C1882 * C802 +
          ((C55 * C823 - C89 * C805) * C61 + (C55 * C824 - C89 * C807) * C53) *
              C54 * C1882 * C803) *
         C1831) /
        (p * q * std::sqrt(p + q));
    d2eexz[4] +=
        (2 * std::pow(Pi, 2.5) *
         (((C54 * C111 - C110 * C63) * C61 + (C54 * C114 - C110 * C67) * C53) *
              C55 * C1882 * C801 +
          ((C110 * C249 - C54 * C297) * C61 +
           (C110 * C252 - C54 * C299) * C53) *
              C55 * C1882 * C802 +
          ((C54 * C839 - C110 * C805) * C61 +
           (C54 * C840 - C110 * C807) * C53) *
              C55 * C1882 * C803) *
         C1831) /
        (p * q * std::sqrt(p + q));
    d2eeyx[4] +=
        (2 * std::pow(Pi, 2.5) *
         (((C53 * C66 - C61 * C63) * C89 + (C53 * C134 - C61 * C131) * C55) *
              C54 * C1882 * C801 +
          ((C61 * C249 - C53 * C251) * C89 + (C61 * C319 - C53 * C321) * C55) *
              C54 * C1882 * C802 +
          ((C53 * C806 - C61 * C805) * C89 + (C53 * C856 - C61 * C855) * C55) *
              C54 * C1882 * C803) *
         C1831) /
        (p * q * std::sqrt(p + q));
    d2eeyy[4] += (2 * std::pow(Pi, 2.5) *
                  ((C89 * C90 - C151 * C63 - C89 * C131 + C55 * C152) * C53 *
                       C54 * C1882 * C801 -
                   (C89 * C275 - C151 * C249 - C89 * C319 + C55 * C341) * C53 *
                       C54 * C1882 * C802 +
                   (C89 * C823 - C151 * C805 - C89 * C855 + C55 * C871) * C53 *
                       C54 * C1882 * C803) *
                  C1831) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[4] +=
        (2 * std::pow(Pi, 2.5) *
         (((C54 * C111 - C110 * C63) * C89 + (C54 * C169 - C110 * C131) * C55) *
              C53 * C1882 * C801 +
          ((C110 * C249 - C54 * C297) * C89 +
           (C110 * C319 - C54 * C361) * C55) *
              C53 * C1882 * C802 +
          ((C54 * C839 - C110 * C805) * C89 +
           (C54 * C886 - C110 * C855) * C55) *
              C53 * C1882 * C803) *
         C1831) /
        (p * q * std::sqrt(p + q));
    d2eezx[4] +=
        (2 * std::pow(Pi, 2.5) *
         (((C53 * C66 - C61 * C63) * C110 + (C53 * C189 - C61 * C186) * C54) *
              C55 * C1882 * C801 +
          ((C61 * C249 - C53 * C251) * C110 + (C61 * C381 - C53 * C383) * C54) *
              C55 * C1882 * C802 +
          ((C53 * C806 - C61 * C805) * C110 + (C53 * C902 - C61 * C901) * C54) *
              C55 * C1882 * C803) *
         C1831) /
        (p * q * std::sqrt(p + q));
    d2eezy[4] +=
        (2 * std::pow(Pi, 2.5) *
         (((C55 * C90 - C89 * C63) * C110 + (C55 * C206 - C89 * C186) * C54) *
              C53 * C1882 * C801 +
          ((C89 * C249 - C55 * C275) * C110 + (C89 * C381 - C55 * C403) * C54) *
              C53 * C1882 * C802 +
          ((C55 * C823 - C89 * C805) * C110 + (C55 * C917 - C89 * C901) * C54) *
              C53 * C1882 * C803) *
         C1831) /
        (p * q * std::sqrt(p + q));
    d2eezz[4] += (2 * std::pow(Pi, 2.5) *
                  ((C110 * C111 - C223 * C63 - C110 * C186 + C54 * C224) * C55 *
                       C53 * C1882 * C801 -
                   (C110 * C297 - C223 * C249 - C110 * C381 + C54 * C423) *
                       C55 * C53 * C1882 * C802 +
                   (C110 * C839 - C223 * C805 - C110 * C901 + C54 * C932) *
                       C55 * C53 * C1882 * C803) *
                  C1831) /
                 (p * q * std::sqrt(p + q));
    d2eexx[5] +=
        (2 * std::pow(Pi, 2.5) *
         (((C61 * C66 - C62 * C63 - C61 * C67 + C53 * C72) * C54 * C55 * C443 -
           (C61 * C447 - C62 * C445 - C61 * C448 + C53 * C451) * C54 * C55 *
               C1902) *
              C639 +
          ((C61 * C952 - C62 * C951 - C61 * C953 + C53 * C954) * C54 * C55 *
               C1902 -
           (C61 * C251 - C62 * C249 - C61 * C252 + C53 * C255) * C54 * C55 *
               C443) *
              C1900) *
         C1831) /
        (p * q * std::sqrt(p + q));
    d2eexy[5] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C55 * C90 - C89 * C63) * C61 + (C55 * C93 - C89 * C67) * C53) *
               C54 * C443 +
           ((C89 * C445 - C55 * C471) * C61 + (C89 * C448 - C55 * C473) * C53) *
               C54 * C1902) *
              C639 +
          (((C89 * C249 - C55 * C275) * C61 + (C89 * C252 - C55 * C277) * C53) *
               C54 * C443 +
           ((C55 * C973 - C89 * C951) * C61 + (C55 * C974 - C89 * C953) * C53) *
               C54 * C1902) *
              C1900) *
         C1831) /
        (p * q * std::sqrt(p + q));
    d2eexz[5] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C54 * C111 - C110 * C63) * C61 + (C54 * C114 - C110 * C67) * C53) *
               C55 * C443 +
           ((C110 * C445 - C54 * C493) * C61 +
            (C110 * C448 - C54 * C495) * C53) *
               C55 * C1902) *
              C639 +
          (((C110 * C249 - C54 * C297) * C61 +
            (C110 * C252 - C54 * C299) * C53) *
               C55 * C443 +
           ((C54 * C993 - C110 * C951) * C61 +
            (C54 * C994 - C110 * C953) * C53) *
               C55 * C1902) *
              C1900) *
         C1831) /
        (p * q * std::sqrt(p + q));
    d2eeyx[5] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C53 * C66 - C61 * C63) * C89 + (C53 * C134 - C61 * C131) * C55) *
               C54 * C443 +
           ((C61 * C445 - C53 * C447) * C89 + (C61 * C515 - C53 * C517) * C55) *
               C54 * C1902) *
              C639 +
          (((C61 * C249 - C53 * C251) * C89 + (C61 * C319 - C53 * C321) * C55) *
               C54 * C443 +
           ((C53 * C952 - C61 * C951) * C89 +
            (C53 * C1014 - C61 * C1013) * C55) *
               C54 * C1902) *
              C1900) *
         C1831) /
        (p * q * std::sqrt(p + q));
    d2eeyy[5] += (2 * std::pow(Pi, 2.5) *
                  (((C89 * C90 - C151 * C63 - C89 * C131 + C55 * C152) * C53 *
                        C54 * C443 -
                    (C89 * C471 - C151 * C445 - C89 * C515 + C55 * C537) * C53 *
                        C54 * C1902) *
                       C639 +
                   ((C89 * C973 - C151 * C951 - C89 * C1013 + C55 * C1033) *
                        C53 * C54 * C1902 -
                    (C89 * C275 - C151 * C249 - C89 * C319 + C55 * C341) * C53 *
                        C54 * C443) *
                       C1900) *
                  C1831) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[5] += (2 * std::pow(Pi, 2.5) *
                  ((((C54 * C111 - C110 * C63) * C89 +
                     (C54 * C169 - C110 * C131) * C55) *
                        C53 * C443 +
                    ((C110 * C445 - C54 * C493) * C89 +
                     (C110 * C515 - C54 * C557) * C55) *
                        C53 * C1902) *
                       C639 +
                   (((C110 * C249 - C54 * C297) * C89 +
                     (C110 * C319 - C54 * C361) * C55) *
                        C53 * C443 +
                    ((C54 * C993 - C110 * C951) * C89 +
                     (C54 * C1052 - C110 * C1013) * C55) *
                        C53 * C1902) *
                       C1900) *
                  C1831) /
                 (p * q * std::sqrt(p + q));
    d2eezx[5] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C53 * C66 - C61 * C63) * C110 + (C53 * C189 - C61 * C186) * C54) *
               C55 * C443 +
           ((C61 * C445 - C53 * C447) * C110 +
            (C61 * C577 - C53 * C579) * C54) *
               C55 * C1902) *
              C639 +
          (((C61 * C249 - C53 * C251) * C110 +
            (C61 * C381 - C53 * C383) * C54) *
               C55 * C443 +
           ((C53 * C952 - C61 * C951) * C110 +
            (C53 * C1072 - C61 * C1071) * C54) *
               C55 * C1902) *
              C1900) *
         C1831) /
        (p * q * std::sqrt(p + q));
    d2eezy[5] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C55 * C90 - C89 * C63) * C110 + (C55 * C206 - C89 * C186) * C54) *
               C53 * C443 +
           ((C89 * C445 - C55 * C471) * C110 +
            (C89 * C577 - C55 * C599) * C54) *
               C53 * C1902) *
              C639 +
          (((C89 * C249 - C55 * C275) * C110 +
            (C89 * C381 - C55 * C403) * C54) *
               C53 * C443 +
           ((C55 * C973 - C89 * C951) * C110 +
            (C55 * C1091 - C89 * C1071) * C54) *
               C53 * C1902) *
              C1900) *
         C1831) /
        (p * q * std::sqrt(p + q));
    d2eezz[5] += (2 * std::pow(Pi, 2.5) *
                  (((C110 * C111 - C223 * C63 - C110 * C186 + C54 * C224) *
                        C55 * C53 * C443 -
                    (C110 * C493 - C223 * C445 - C110 * C577 + C54 * C619) *
                        C55 * C53 * C1902) *
                       C639 +
                   ((C110 * C993 - C223 * C951 - C110 * C1071 + C54 * C1110) *
                        C55 * C53 * C1902 -
                    (C110 * C297 - C223 * C249 - C110 * C381 + C54 * C423) *
                        C55 * C53 * C443) *
                       C1900) *
                  C1831) /
                 (p * q * std::sqrt(p + q));
    d2eexx[6] +=
        (2 * std::pow(Pi, 2.5) *
         (((C61 * C66 - C62 * C63 - C61 * C67 + C53 * C72) * C54 * C55 * C1129 -
           (C61 * C447 - C62 * C445 - C61 * C448 + C53 * C451) * C54 * C55 *
               C1902) *
              C1865 * C641 +
          ((C61 * C449 - C62 * C446 - C61 * C450 + C53 * C452) * C54 * C55 *
               C1902 -
           (C61 * C68 - C62 * C64 - C61 * C69 + C53 * C73) * C54 * C55 *
               C1129) *
              C1865 * C1898)) /
        (p * q * std::sqrt(p + q));
    d2eexy[6] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C55 * C90 - C89 * C63) * C61 + (C55 * C93 - C89 * C67) * C53) *
               C54 * C1129 +
           ((C89 * C445 - C55 * C471) * C61 + (C89 * C448 - C55 * C473) * C53) *
               C54 * C1902) *
              C1865 * C641 +
          (((C89 * C64 - C55 * C91) * C61 + (C89 * C69 - C55 * C94) * C53) *
               C54 * C1129 +
           ((C55 * C472 - C89 * C446) * C61 + (C55 * C474 - C89 * C450) * C53) *
               C54 * C1902) *
              C1865 * C1898)) /
        (p * q * std::sqrt(p + q));
    d2eexz[6] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C54 * C111 - C110 * C63) * C61 + (C54 * C114 - C110 * C67) * C53) *
               C55 * C1129 +
           ((C110 * C445 - C54 * C493) * C61 +
            (C110 * C448 - C54 * C495) * C53) *
               C55 * C1902) *
              C1865 * C641 +
          (((C110 * C64 - C54 * C112) * C61 + (C110 * C69 - C54 * C115) * C53) *
               C55 * C1129 +
           ((C54 * C494 - C110 * C446) * C61 +
            (C54 * C496 - C110 * C450) * C53) *
               C55 * C1902) *
              C1865 * C1898)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[6] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C53 * C66 - C61 * C63) * C89 + (C53 * C134 - C61 * C131) * C55) *
               C54 * C1129 +
           ((C61 * C445 - C53 * C447) * C89 + (C61 * C515 - C53 * C517) * C55) *
               C54 * C1902) *
              C1865 * C641 +
          (((C61 * C64 - C53 * C68) * C89 + (C61 * C132 - C53 * C135) * C55) *
               C54 * C1129 +
           ((C53 * C449 - C61 * C446) * C89 + (C53 * C518 - C61 * C516) * C55) *
               C54 * C1902) *
              C1865 * C1898)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[6] += (2 * std::pow(Pi, 2.5) *
                  (((C89 * C90 - C151 * C63 - C89 * C131 + C55 * C152) * C53 *
                        C54 * C1129 -
                    (C89 * C471 - C151 * C445 - C89 * C515 + C55 * C537) * C53 *
                        C54 * C1902) *
                       C1865 * C641 +
                   ((C89 * C472 - C151 * C446 - C89 * C516 + C55 * C538) * C53 *
                        C54 * C1902 -
                    (C89 * C91 - C151 * C64 - C89 * C132 + C55 * C153) * C53 *
                        C54 * C1129) *
                       C1865 * C1898)) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[6] += (2 * std::pow(Pi, 2.5) *
                  ((((C54 * C111 - C110 * C63) * C89 +
                     (C54 * C169 - C110 * C131) * C55) *
                        C53 * C1129 +
                    ((C110 * C445 - C54 * C493) * C89 +
                     (C110 * C515 - C54 * C557) * C55) *
                        C53 * C1902) *
                       C1865 * C641 +
                   (((C110 * C64 - C54 * C112) * C89 +
                     (C110 * C132 - C54 * C170) * C55) *
                        C53 * C1129 +
                    ((C54 * C494 - C110 * C446) * C89 +
                     (C54 * C558 - C110 * C516) * C55) *
                        C53 * C1902) *
                       C1865 * C1898)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[6] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C53 * C66 - C61 * C63) * C110 + (C53 * C189 - C61 * C186) * C54) *
               C55 * C1129 +
           ((C61 * C445 - C53 * C447) * C110 +
            (C61 * C577 - C53 * C579) * C54) *
               C55 * C1902) *
              C1865 * C641 +
          (((C61 * C64 - C53 * C68) * C110 + (C61 * C187 - C53 * C190) * C54) *
               C55 * C1129 +
           ((C53 * C449 - C61 * C446) * C110 +
            (C53 * C580 - C61 * C578) * C54) *
               C55 * C1902) *
              C1865 * C1898)) /
        (p * q * std::sqrt(p + q));
    d2eezy[6] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C55 * C90 - C89 * C63) * C110 + (C55 * C206 - C89 * C186) * C54) *
               C53 * C1129 +
           ((C89 * C445 - C55 * C471) * C110 +
            (C89 * C577 - C55 * C599) * C54) *
               C53 * C1902) *
              C1865 * C641 +
          (((C89 * C64 - C55 * C91) * C110 + (C89 * C187 - C55 * C207) * C54) *
               C53 * C1129 +
           ((C55 * C472 - C89 * C446) * C110 +
            (C55 * C600 - C89 * C578) * C54) *
               C53 * C1902) *
              C1865 * C1898)) /
        (p * q * std::sqrt(p + q));
    d2eezz[6] += (2 * std::pow(Pi, 2.5) *
                  (((C110 * C111 - C223 * C63 - C110 * C186 + C54 * C224) *
                        C55 * C53 * C1129 -
                    (C110 * C493 - C223 * C445 - C110 * C577 + C54 * C619) *
                        C55 * C53 * C1902) *
                       C1865 * C641 +
                   ((C110 * C494 - C223 * C446 - C110 * C578 + C54 * C620) *
                        C55 * C53 * C1902 -
                    (C110 * C112 - C223 * C64 - C110 * C187 + C54 * C225) *
                        C55 * C53 * C1129) *
                       C1865 * C1898)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[7] +=
        (2 * std::pow(Pi, 2.5) *
         (((C61 * C66 - C62 * C63 - C61 * C67 + C53 * C72) * C54 * C55 * C1129 -
           (C61 * C447 - C62 * C445 - C61 * C448 + C53 * C451) * C54 * C55 *
               C1902) *
              C245 +
          ((C61 * C952 - C62 * C951 - C61 * C953 + C53 * C954) * C54 * C55 *
               C1902 -
           (C61 * C251 - C62 * C249 - C61 * C252 + C53 * C255) * C54 * C55 *
               C1129) *
              C1900) *
         C1831) /
        (p * q * std::sqrt(p + q));
    d2eexy[7] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C55 * C90 - C89 * C63) * C61 + (C55 * C93 - C89 * C67) * C53) *
               C54 * C1129 +
           ((C89 * C445 - C55 * C471) * C61 + (C89 * C448 - C55 * C473) * C53) *
               C54 * C1902) *
              C245 +
          (((C89 * C249 - C55 * C275) * C61 + (C89 * C252 - C55 * C277) * C53) *
               C54 * C1129 +
           ((C55 * C973 - C89 * C951) * C61 + (C55 * C974 - C89 * C953) * C53) *
               C54 * C1902) *
              C1900) *
         C1831) /
        (p * q * std::sqrt(p + q));
    d2eexz[7] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C54 * C111 - C110 * C63) * C61 + (C54 * C114 - C110 * C67) * C53) *
               C55 * C1129 +
           ((C110 * C445 - C54 * C493) * C61 +
            (C110 * C448 - C54 * C495) * C53) *
               C55 * C1902) *
              C245 +
          (((C110 * C249 - C54 * C297) * C61 +
            (C110 * C252 - C54 * C299) * C53) *
               C55 * C1129 +
           ((C54 * C993 - C110 * C951) * C61 +
            (C54 * C994 - C110 * C953) * C53) *
               C55 * C1902) *
              C1900) *
         C1831) /
        (p * q * std::sqrt(p + q));
    d2eeyx[7] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C53 * C66 - C61 * C63) * C89 + (C53 * C134 - C61 * C131) * C55) *
               C54 * C1129 +
           ((C61 * C445 - C53 * C447) * C89 + (C61 * C515 - C53 * C517) * C55) *
               C54 * C1902) *
              C245 +
          (((C61 * C249 - C53 * C251) * C89 + (C61 * C319 - C53 * C321) * C55) *
               C54 * C1129 +
           ((C53 * C952 - C61 * C951) * C89 +
            (C53 * C1014 - C61 * C1013) * C55) *
               C54 * C1902) *
              C1900) *
         C1831) /
        (p * q * std::sqrt(p + q));
    d2eeyy[7] += (2 * std::pow(Pi, 2.5) *
                  (((C89 * C90 - C151 * C63 - C89 * C131 + C55 * C152) * C53 *
                        C54 * C1129 -
                    (C89 * C471 - C151 * C445 - C89 * C515 + C55 * C537) * C53 *
                        C54 * C1902) *
                       C245 +
                   ((C89 * C973 - C151 * C951 - C89 * C1013 + C55 * C1033) *
                        C53 * C54 * C1902 -
                    (C89 * C275 - C151 * C249 - C89 * C319 + C55 * C341) * C53 *
                        C54 * C1129) *
                       C1900) *
                  C1831) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[7] += (2 * std::pow(Pi, 2.5) *
                  ((((C54 * C111 - C110 * C63) * C89 +
                     (C54 * C169 - C110 * C131) * C55) *
                        C53 * C1129 +
                    ((C110 * C445 - C54 * C493) * C89 +
                     (C110 * C515 - C54 * C557) * C55) *
                        C53 * C1902) *
                       C245 +
                   (((C110 * C249 - C54 * C297) * C89 +
                     (C110 * C319 - C54 * C361) * C55) *
                        C53 * C1129 +
                    ((C54 * C993 - C110 * C951) * C89 +
                     (C54 * C1052 - C110 * C1013) * C55) *
                        C53 * C1902) *
                       C1900) *
                  C1831) /
                 (p * q * std::sqrt(p + q));
    d2eezx[7] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C53 * C66 - C61 * C63) * C110 + (C53 * C189 - C61 * C186) * C54) *
               C55 * C1129 +
           ((C61 * C445 - C53 * C447) * C110 +
            (C61 * C577 - C53 * C579) * C54) *
               C55 * C1902) *
              C245 +
          (((C61 * C249 - C53 * C251) * C110 +
            (C61 * C381 - C53 * C383) * C54) *
               C55 * C1129 +
           ((C53 * C952 - C61 * C951) * C110 +
            (C53 * C1072 - C61 * C1071) * C54) *
               C55 * C1902) *
              C1900) *
         C1831) /
        (p * q * std::sqrt(p + q));
    d2eezy[7] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C55 * C90 - C89 * C63) * C110 + (C55 * C206 - C89 * C186) * C54) *
               C53 * C1129 +
           ((C89 * C445 - C55 * C471) * C110 +
            (C89 * C577 - C55 * C599) * C54) *
               C53 * C1902) *
              C245 +
          (((C89 * C249 - C55 * C275) * C110 +
            (C89 * C381 - C55 * C403) * C54) *
               C53 * C1129 +
           ((C55 * C973 - C89 * C951) * C110 +
            (C55 * C1091 - C89 * C1071) * C54) *
               C53 * C1902) *
              C1900) *
         C1831) /
        (p * q * std::sqrt(p + q));
    d2eezz[7] += (2 * std::pow(Pi, 2.5) *
                  (((C110 * C111 - C223 * C63 - C110 * C186 + C54 * C224) *
                        C55 * C53 * C1129 -
                    (C110 * C493 - C223 * C445 - C110 * C577 + C54 * C619) *
                        C55 * C53 * C1902) *
                       C245 +
                   ((C110 * C993 - C223 * C951 - C110 * C1071 + C54 * C1110) *
                        C55 * C53 * C1902 -
                    (C110 * C297 - C223 * C249 - C110 * C381 + C54 * C423) *
                        C55 * C53 * C1129) *
                       C1900) *
                  C1831) /
                 (p * q * std::sqrt(p + q));
    d2eexx[8] +=
        (2 * std::pow(Pi, 2.5) *
         ((C61 * C66 - C62 * C63 - C61 * C67 + C53 * C72) * C54 * C55 * C1451 -
          (C61 * C447 - C62 * C445 - C61 * C448 + C53 * C451) * C54 * C55 *
              C1452 +
          (C61 * C1455 - C62 * C1454 - C61 * C1456 + C53 * C1457) * C54 * C55 *
              C1453) *
         C1865 * C1831) /
        (p * q * std::sqrt(p + q));
    d2eexy[8] +=
        (2 * std::pow(Pi, 2.5) *
         (((C55 * C90 - C89 * C63) * C61 + (C55 * C93 - C89 * C67) * C53) *
              C54 * C1451 +
          ((C89 * C445 - C55 * C471) * C61 + (C89 * C448 - C55 * C473) * C53) *
              C54 * C1452 +
          ((C55 * C1472 - C89 * C1454) * C61 +
           (C55 * C1473 - C89 * C1456) * C53) *
              C54 * C1453) *
         C1865 * C1831) /
        (p * q * std::sqrt(p + q));
    d2eexz[8] +=
        (2 * std::pow(Pi, 2.5) *
         (((C54 * C111 - C110 * C63) * C61 + (C54 * C114 - C110 * C67) * C53) *
              C55 * C1451 +
          ((C110 * C445 - C54 * C493) * C61 +
           (C110 * C448 - C54 * C495) * C53) *
              C55 * C1452 +
          ((C54 * C1488 - C110 * C1454) * C61 +
           (C54 * C1489 - C110 * C1456) * C53) *
              C55 * C1453) *
         C1865 * C1831) /
        (p * q * std::sqrt(p + q));
    d2eeyx[8] +=
        (2 * std::pow(Pi, 2.5) *
         (((C53 * C66 - C61 * C63) * C89 + (C53 * C134 - C61 * C131) * C55) *
              C54 * C1451 +
          ((C61 * C445 - C53 * C447) * C89 + (C61 * C515 - C53 * C517) * C55) *
              C54 * C1452 +
          ((C53 * C1455 - C61 * C1454) * C89 +
           (C53 * C1505 - C61 * C1504) * C55) *
              C54 * C1453) *
         C1865 * C1831) /
        (p * q * std::sqrt(p + q));
    d2eeyy[8] += (2 * std::pow(Pi, 2.5) *
                  ((C89 * C90 - C151 * C63 - C89 * C131 + C55 * C152) * C53 *
                       C54 * C1451 -
                   (C89 * C471 - C151 * C445 - C89 * C515 + C55 * C537) * C53 *
                       C54 * C1452 +
                   (C89 * C1472 - C151 * C1454 - C89 * C1504 + C55 * C1520) *
                       C53 * C54 * C1453) *
                  C1865 * C1831) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[8] +=
        (2 * std::pow(Pi, 2.5) *
         (((C54 * C111 - C110 * C63) * C89 + (C54 * C169 - C110 * C131) * C55) *
              C53 * C1451 +
          ((C110 * C445 - C54 * C493) * C89 +
           (C110 * C515 - C54 * C557) * C55) *
              C53 * C1452 +
          ((C54 * C1488 - C110 * C1454) * C89 +
           (C54 * C1535 - C110 * C1504) * C55) *
              C53 * C1453) *
         C1865 * C1831) /
        (p * q * std::sqrt(p + q));
    d2eezx[8] +=
        (2 * std::pow(Pi, 2.5) *
         (((C53 * C66 - C61 * C63) * C110 + (C53 * C189 - C61 * C186) * C54) *
              C55 * C1451 +
          ((C61 * C445 - C53 * C447) * C110 + (C61 * C577 - C53 * C579) * C54) *
              C55 * C1452 +
          ((C53 * C1455 - C61 * C1454) * C110 +
           (C53 * C1551 - C61 * C1550) * C54) *
              C55 * C1453) *
         C1865 * C1831) /
        (p * q * std::sqrt(p + q));
    d2eezy[8] +=
        (2 * std::pow(Pi, 2.5) *
         (((C55 * C90 - C89 * C63) * C110 + (C55 * C206 - C89 * C186) * C54) *
              C53 * C1451 +
          ((C89 * C445 - C55 * C471) * C110 + (C89 * C577 - C55 * C599) * C54) *
              C53 * C1452 +
          ((C55 * C1472 - C89 * C1454) * C110 +
           (C55 * C1566 - C89 * C1550) * C54) *
              C53 * C1453) *
         C1865 * C1831) /
        (p * q * std::sqrt(p + q));
    d2eezz[8] += (2 * std::pow(Pi, 2.5) *
                  ((C110 * C111 - C223 * C63 - C110 * C186 + C54 * C224) * C55 *
                       C53 * C1451 -
                   (C110 * C493 - C223 * C445 - C110 * C577 + C54 * C619) *
                       C55 * C53 * C1452 +
                   (C110 * C1488 - C223 * C1454 - C110 * C1550 + C54 * C1581) *
                       C55 * C53 * C1453) *
                  C1865 * C1831) /
                 (p * q * std::sqrt(p + q));
    
}
