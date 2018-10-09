/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_ppss_AC.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
void second_derivative_ee_1100_13(const double ae,
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
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    const double C1613 = ae * be;
    const double C1612 = ae + be;
    const double C1611 = 0 * be;
    const double C1610 = xA - xB;
    const double C1640 = yA - yB;
    const double C1647 = zA - zB;
    const double C1665 = 0 * be;
    const double C1681 = 0 * be;
    const double C1691 = p + q;
    const double C1690 = p * q;
    const double C1697 = ce + de;
    const double C1696 = xP - xQ;
    const double C1695 = bs[2];
    const double C1706 = ae * ce;
    const double C1702 = bs[3];
    const double C1715 = yP - yQ;
    const double C1725 = zP - zQ;
    const double C65 = bs[0];
    const double C2008 = ce * de;
    const double C1614 = std::pow(C1612, 2);
    const double C1915 = 2 * C1612;
    const double C1615 = C1613 * C1610;
    const double C1906 = std::pow(C1610, 2);
    const double C2006 = C1610 * be;
    const double C2005 = C1610 * ae;
    const double C1666 = C1613 * C1640;
    const double C1950 = std::pow(C1640, 2);
    const double C2011 = C1640 * be;
    const double C2009 = C1640 * ae;
    const double C1682 = C1613 * C1647;
    const double C1965 = std::pow(C1647, 2);
    const double C2012 = C1647 * be;
    const double C2010 = C1647 * ae;
    const double C1692 = 2 * C1690;
    const double C1699 = C1697 * C1612;
    const double C1707 = C1696 * ae;
    const double C1705 = std::pow(C1696, 2);
    const double C1703 = C1696 * ce;
    const double C1718 = C1696 * C1715;
    const double C1717 = C1715 * ce;
    const double C1737 = C1715 * C1696;
    const double C1736 = C1715 * ae;
    const double C1745 = std::pow(C1715, 2);
    const double C1728 = C1696 * C1725;
    const double C1727 = C1725 * ce;
    const double C1749 = C1715 * C1725;
    const double C1756 = C1725 * C1696;
    const double C1755 = C1725 * ae;
    const double C1764 = C1725 * C1715;
    const double C1770 = std::pow(C1725, 2);
    const double C56 = std::exp(-(std::pow(xC - xD, 2) * C2008) / C1697);
    const double C59 = std::exp(-(std::pow(zC - zD, 2) * C2008) / C1697);
    const double C60 = std::exp(-(std::pow(yC - yD, 2) * C2008) / C1697);
    const double C1616 = 2 * C1614;
    const double C2007 = std::pow(C1915, -1);
    const double C1907 = C1906 * C1613;
    const double C1951 = C1950 * C1613;
    const double C1966 = C1965 * C1613;
    const double C1694 = C1692 / C1691;
    const double C74 =
        (-((std::pow(xP - xQ, 2) * bs[2] * std::pow(C1692 / C1691, 2) -
            (bs[1] * C1692) / C1691) *
           ae * ce) /
         (ce + de)) /
        C1612;
    const double C66 = -(C1696 * bs[1] * C1692) / C1691;
    const double C253 = -(C1715 * bs[1] * C1692) / C1691;
    const double C451 = -(C1725 * bs[1] * C1692) / C1691;
    const double C1710 = C1702 * C1707;
    const double C68 = (-(bs[1] * C1707 * C1692) / C1691) / C1612;
    const double C1709 = C1702 * C1703;
    const double C71 = (bs[1] * C1703 * C1692) / (C1691 * C1697);
    const double C1720 = C1718 * ae;
    const double C1719 = C1702 * C1717;
    const double C92 = (bs[1] * C1717 * C1692) / (C1691 * C1697);
    const double C1739 = C1737 * ae;
    const double C1738 = C1702 * C1736;
    const double C134 = (-(bs[1] * C1736 * C1692) / C1691) / C1612;
    const double C1730 = C1728 * ae;
    const double C1729 = C1702 * C1727;
    const double C113 = (bs[1] * C1727 * C1692) / (C1691 * C1697);
    const double C1750 = C1749 * ae;
    const double C1758 = C1756 * ae;
    const double C1757 = C1702 * C1755;
    const double C189 = (-(bs[1] * C1755 * C1692) / C1691) / C1612;
    const double C1765 = C1764 * ae;
    const double C64 = -(2 * ce * de * (xC - xD) * C56) / (ce + de);
    const double C112 = -(2 * ce * de * (zC - zD) * C59) / (ce + de);
    const double C91 = -(2 * ce * de * (yC - yD) * C60) / (ce + de);
    const double C1908 = C1907 / C1612;
    const double C1952 = C1951 / C1612;
    const double C1967 = C1966 / C1612;
    const double C1698 = std::pow(C1694, 2);
    const double C1701 = -C1694;
    const double C1722 = C1720 * ce;
    const double C1741 = C1739 * ce;
    const double C1732 = C1730 * ce;
    const double C1751 = C1750 * ce;
    const double C1760 = C1758 * ce;
    const double C1766 = C1765 * ce;
    const double C1909 = -C1908;
    const double C1953 = -C1952;
    const double C1968 = -C1967;
    const double C1704 = C1695 * C1698;
    const double C75 =
        (-(C1698 * C1695 * C1696 * ae * ce) / C1697) / C1612 -
        (ae * C1698 * C1695 * C1696 * ce) / C1699 -
        (C1696 *
         (C1695 * C1698 + std::pow(C1696, 2) * bs[3] * std::pow(-C1694, 3)) *
         ae * ce) /
            C1699;
    const double C95 =
        (-(C1698 * C1695 * C1696 * (yP - yQ) * ae * ce) / C1697) / C1612;
    const double C116 =
        (-(C1698 * C1695 * C1696 * (zP - zQ) * ae * ce) / C1697) / C1612;
    const double C137 =
        (-(C1698 * C1695 * C1715 * C1696 * ae * ce) / C1697) / C1612;
    const double C154 =
        (-((std::pow(C1715, 2) * C1695 * C1698 - (bs[1] * C1692) / C1691) *
           C1706) /
         C1697) /
        C1612;
    const double C171 =
        (-(C1698 * C1695 * C1715 * C1725 * ae * ce) / C1697) / C1612;
    const double C192 =
        (-(C1698 * C1695 * C1725 * C1696 * ae * ce) / C1697) / C1612;
    const double C209 =
        (-(C1698 * C1695 * C1725 * C1715 * ae * ce) / C1697) / C1612;
    const double C226 =
        (-((std::pow(C1725, 2) * C1695 * C1698 - (bs[1] * C1692) / C1691) *
           C1706) /
         C1697) /
        C1612;
    const double C69 = (C1696 * C1698 * C1695 * C1707) / C1612 -
                       (ae * bs[1] * C1692) / (C1691 * C1612);
    const double C72 = (ce * bs[1] * C1692) / (C1691 * C1697) -
                       (C1696 * C1698 * C1695 * C1703) / C1697;
    const double C93 = -(C1696 * C1698 * C1695 * C1717) / C1697;
    const double C114 = -(C1696 * C1698 * C1695 * C1727) / C1697;
    const double C135 = (C1696 * C1698 * C1695 * C1736) / C1612;
    const double C190 = (C1696 * C1698 * C1695 * C1755) / C1612;
    const double C255 = (C1715 * C1698 * C1695 * C1707) / C1612;
    const double C257 = -(C1715 * C1698 * C1695 * C1703) / C1697;
    const double C279 = (ce * bs[1] * C1692) / (C1691 * C1697) -
                        (C1715 * C1698 * C1695 * C1717) / C1697;
    const double C301 = -(C1715 * C1698 * C1695 * C1727) / C1697;
    const double C325 = (C1715 * C1698 * C1695 * C1736) / C1612 -
                        (ae * bs[1] * C1692) / (C1691 * C1612);
    const double C387 = (C1715 * C1698 * C1695 * C1755) / C1612;
    const double C453 = (C1725 * C1698 * C1695 * C1707) / C1612;
    const double C455 = -(C1725 * C1698 * C1695 * C1703) / C1697;
    const double C477 = -(C1725 * C1698 * C1695 * C1717) / C1697;
    const double C499 = (ce * bs[1] * C1692) / (C1691 * C1697) -
                        (C1725 * C1698 * C1695 * C1727) / C1697;
    const double C521 = (C1725 * C1698 * C1695 * C1736) / C1612;
    const double C585 = (C1725 * C1698 * C1695 * C1755) / C1612 -
                        (ae * bs[1] * C1692) / (C1691 * C1612);
    const double C1708 = std::pow(C1701, 3);
    const double C1910 = std::exp(C1909);
    const double C1954 = std::exp(C1953);
    const double C1969 = std::exp(C1968);
    const double C67 = C1704 * C1705 - (bs[1] * C1692) / C1691;
    const double C254 = C1715 * C1696 * C1704;
    const double C452 = C1725 * C1696 * C1704;
    const double C818 = C1704 * C1745 - (bs[1] * C1692) / C1691;
    const double C967 = C1725 * C1715 * C1704;
    const double C1472 = C1704 * C1770 - (bs[1] * C1692) / C1691;
    const double C1712 = C1708 * C1710;
    const double C1711 = C1708 * C1709;
    const double C1721 = C1708 * C1719;
    const double C1731 = C1708 * C1729;
    const double C1740 = C1708 * C1738;
    const double C1759 = C1708 * C1757;
    const double C96 =
        (-(C1696 * C1708 * C1702 * C1696 * C1715 * ae * ce) / C1697) / C1612 -
        (ae * C1698 * C1695 * C1715 * ce) / C1699;
    const double C117 =
        (-(C1696 * C1708 * C1702 * C1696 * C1725 * ae * ce) / C1697) / C1612 -
        (ae * C1698 * C1695 * C1725 * ce) / C1699;
    const double C138 =
        (-(C1696 * C1708 * C1702 * C1715 * C1696 * ae * ce) / C1697) / C1612 -
        (C1698 * C1695 * C1715 * ae * ce) / C1699;
    const double C155 =
        (-(C1696 * (C1704 + std::pow(C1715, 2) * C1702 * C1708) * C1706) /
         C1697) /
        C1612;
    const double C156 =
        (-((C1702 * C1708 + C1745 * bs[4] * std::pow(C1694, 4)) * C1706 *
           C1705) /
         C1697) /
            C1612 -
        ((C1704 + C1745 * C1702 * C1708) * C1706) / C1699;
    const double C172 =
        (-(C1696 * C1708 * C1702 * C1715 * C1725 * ae * ce) / C1697) / C1612;
    const double C173 =
        (-(std::pow(C1694, 4) * bs[4] * C1751 * C1705) / C1697) / C1612 -
        (C1708 * C1702 * C1751) / C1699;
    const double C193 =
        (-(C1696 * C1708 * C1702 * C1725 * C1696 * ae * ce) / C1697) / C1612 -
        (C1698 * C1695 * C1725 * ae * ce) / C1699;
    const double C210 =
        (-(C1696 * C1708 * C1702 * C1725 * C1715 * ae * ce) / C1697) / C1612;
    const double C211 =
        (-(std::pow(C1694, 4) * bs[4] * C1766 * C1705) / C1697) / C1612 -
        (C1708 * C1702 * C1766) / C1699;
    const double C227 =
        (-(C1696 * (C1704 + std::pow(C1725, 2) * C1702 * C1708) * C1706) /
         C1697) /
        C1612;
    const double C228 =
        (-((C1702 * C1708 + C1770 * bs[4] * std::pow(C1694, 4)) * C1706 *
           C1705) /
         C1697) /
            C1612 -
        ((C1704 + C1770 * C1702 * C1708) * C1706) / C1699;
    const double C259 =
        (-(C1715 * (C1704 + C1705 * C1702 * C1708) * C1706) / C1697) / C1612;
    const double C281 = (-(C1715 * C1708 * C1702 * C1722) / C1697) / C1612 -
                        (C1698 * C1695 * C1707 * ce) / C1699;
    const double C303 = (-(C1715 * C1708 * C1702 * C1732) / C1697) / C1612;
    const double C327 = (-(C1715 * C1708 * C1702 * C1741) / C1697) / C1612 -
                        (ae * C1698 * C1695 * C1703) / C1699;
    const double C347 =
        (-(C1698 * C1695 * C1736 * ce) / C1697) / C1612 -
        (ae * C1698 * C1695 * C1717) / C1699 -
        (C1715 * (C1704 + C1745 * C1702 * C1708) * C1706) / C1699;
    const double C367 = (-(C1715 * C1708 * C1702 * C1751) / C1697) / C1612 -
                        (ae * C1698 * C1695 * C1727) / C1699;
    const double C389 = (-(C1715 * C1708 * C1702 * C1760) / C1697) / C1612;
    const double C409 = (-(C1715 * C1708 * C1702 * C1766) / C1697) / C1612 -
                        (C1698 * C1695 * C1755 * ce) / C1699;
    const double C429 =
        (-(C1715 * (C1704 + C1770 * C1702 * C1708) * C1706) / C1697) / C1612;
    const double C430 =
        (-(C1715 * C1696 *
           (C1702 * C1708 + C1770 * bs[4] * std::pow(C1694, 4)) * C1706) /
         C1697) /
        C1612;
    const double C457 =
        (-(C1725 * (C1704 + C1705 * C1702 * C1708) * C1706) / C1697) / C1612;
    const double C479 = (-(C1725 * C1708 * C1702 * C1722) / C1697) / C1612;
    const double C501 = (-(C1725 * C1708 * C1702 * C1732) / C1697) / C1612 -
                        (C1698 * C1695 * C1707 * ce) / C1699;
    const double C523 = (-(C1725 * C1708 * C1702 * C1741) / C1697) / C1612;
    const double C543 =
        (-(C1725 * (C1704 + C1745 * C1702 * C1708) * C1706) / C1697) / C1612;
    const double C544 =
        (-(C1725 * C1696 *
           (C1702 * C1708 + C1745 * bs[4] * std::pow(C1694, 4)) * C1706) /
         C1697) /
        C1612;
    const double C563 = (-(C1725 * C1708 * C1702 * C1751) / C1697) / C1612 -
                        (C1698 * C1695 * C1736 * ce) / C1699;
    const double C587 = (-(C1725 * C1708 * C1702 * C1760) / C1697) / C1612 -
                        (ae * C1698 * C1695 * C1703) / C1699;
    const double C607 = (-(C1725 * C1708 * C1702 * C1766) / C1697) / C1612 -
                        (ae * C1698 * C1695 * C1717) / C1699;
    const double C627 =
        (-(C1698 * C1695 * C1755 * ce) / C1697) / C1612 -
        (ae * C1698 * C1695 * C1727) / C1699 -
        (C1725 * (C1704 + C1770 * C1702 * C1708) * C1706) / C1699;
    const double C821 =
        (-((C1702 * C1708 + C1705 * bs[4] * std::pow(C1694, 4)) * C1706 *
           C1745) /
         C1697) /
            C1612 -
        ((C1704 + C1705 * C1702 * C1708) * C1706) / C1699;
    const double C853 =
        (-(std::pow(C1694, 4) * bs[4] * C1732 * C1745) / C1697) / C1612 -
        (C1708 * C1702 * C1732) / C1699;
    const double C918 =
        (-(std::pow(C1694, 4) * bs[4] * C1760 * C1745) / C1697) / C1612 -
        (C1708 * C1702 * C1760) / C1699;
    const double C948 =
        (-((C1702 * C1708 + C1770 * bs[4] * std::pow(C1694, 4)) * C1706 *
           C1745) /
         C1697) /
            C1612 -
        ((C1704 + C1770 * C1702 * C1708) * C1706) / C1699;
    const double C970 =
        (-(C1725 * C1715 *
           (C1702 * C1708 + C1705 * bs[4] * std::pow(C1694, 4)) * C1706) /
         C1697) /
        C1612;
    const double C1475 =
        (-((C1702 * C1708 + C1705 * bs[4] * std::pow(C1694, 4)) * C1706 *
           C1770) /
         C1697) /
            C1612 -
        ((C1704 + C1705 * C1702 * C1708) * C1706) / C1699;
    const double C1491 =
        (-(std::pow(C1694, 4) * bs[4] * C1722 * C1770) / C1697) / C1612 -
        (C1708 * C1702 * C1722) / C1699;
    const double C1523 =
        (-(std::pow(C1694, 4) * bs[4] * C1741 * C1770) / C1697) / C1612 -
        (C1708 * C1702 * C1741) / C1699;
    const double C1538 =
        (-((C1702 * C1708 + C1745 * bs[4] * std::pow(C1694, 4)) * C1706 *
           C1770) /
         C1697) /
            C1612 -
        ((C1704 + C1745 * C1702 * C1708) * C1706) / C1699;
    const double C1617 = C1615 * C1910;
    const double C2014 = C2007 * C1910;
    const double C2013 = C1910 * C2005;
    const double C247 = -(C1910 * C2006) / C1612;
    const double C1667 = C1666 * C1954;
    const double C133 = -(2 * C1613 * (yA - yB) * C1954) / C1612;
    const double C323 =
        ((C1954 - (C1640 * 2 * C1613 * C1640 * C1954) / C1612) * ae) / C1612 -
        (0 * be) / C1616;
    const double C324 = (0 * ae) / C1612 - (C1613 * C1640 * C1954) / C1614;
    const double C707 =
        (-(0 * be) / C1612) / (2 * C1612) -
        ((C1954 - (C1640 * 2 * C1613 * C1640 * C1954) / C1612) * be) / C1612;
    const double C708 =
        (-(2 * C1613 * C1640 * C1954) / C1612) / (2 * C1612) - (0 * be) / C1612;
    const double C2016 = C2007 * C1954;
    const double C2015 = C1954 * C2009;
    const double C649 = -(C1954 * C2011) / C1612;
    const double C1683 = C1682 * C1969;
    const double C188 = -(2 * C1613 * (zA - zB) * C1969) / C1612;
    const double C583 =
        ((C1969 - (C1647 * 2 * C1613 * C1647 * C1969) / C1612) * ae) / C1612 -
        (0 * be) / C1616;
    const double C584 = (0 * ae) / C1612 - (C1613 * C1647 * C1969) / C1614;
    const double C1255 =
        (-(0 * be) / C1612) / (2 * C1612) -
        ((C1969 - (C1647 * 2 * C1613 * C1647 * C1969) / C1612) * be) / C1612;
    const double C1256 =
        (-(2 * C1613 * C1647 * C1969) / C1612) / (2 * C1612) - (0 * be) / C1612;
    const double C2018 = C2007 * C1969;
    const double C2017 = C1969 * C2010;
    const double C1145 = -(C1969 * C2012) / C1612;
    const double C837 =
        (-(C1715 * C1712 * ce) / C1697) / C1612 -
        (C1708 * C1702 * C1722) / C1699 +
        C1715 *
            ((-(C1715 * std::pow(C1694, 4) * bs[4] * C1722) / C1697) / C1612 -
             (C1712 * ce) / C1699);
    const double C990 =
        C1725 *
        ((-(C1715 * std::pow(C1694, 4) * bs[4] * C1722) / C1697) / C1612 -
         (C1712 * ce) / C1699);
    const double C1010 =
        (-(C1725 * C1715 * std::pow(C1694, 4) * bs[4] * C1732) / C1697) /
            C1612 -
        (C1715 * C1712 * ce) / C1699;
    const double C1507 =
        (-(C1725 * C1712 * ce) / C1697) / C1612 -
        (C1708 * C1702 * C1732) / C1699 +
        C1725 *
            ((-(C1725 * std::pow(C1694, 4) * bs[4] * C1732) / C1697) / C1612 -
             (C1712 * ce) / C1699);
    const double C70 =
        (C1698 * C1695 * C1707 + C1696 * (C1696 * C1712 + C1704 * ae) +
         C1696 * C1704 * ae) /
        C1612;
    const double C256 = (C1715 * (C1696 * C1712 + C1704 * ae)) / C1612;
    const double C454 = (C1725 * (C1696 * C1712 + C1704 * ae)) / C1612;
    const double C819 = (C1698 * C1695 * C1707 + C1712 * C1745) / C1612;
    const double C968 = (C1725 * C1715 * C1712) / C1612;
    const double C1473 = (C1698 * C1695 * C1707 + C1712 * C1770) / C1612;
    const double C76 =
        (-(ae * (C1696 * C1711 + C1704 * ce)) / C1697) / C1612 -
        ((C1704 + C1705 * C1702 * C1708) * C1706) / C1699 -
        ((C1696 * C1712 + C1704 * ae) * ce) / C1699 +
        C1696 * ((-(C1712 * ce) / C1697) / C1612 - (ae * C1711) / C1699 -
                 (C1696 * (C1702 * C1708 + C1705 * bs[4] * std::pow(C1694, 4)) *
                  C1706) /
                     C1699);
    const double C260 =
        (-(C1715 * C1712 * ce) / C1697) / C1612 - (ae * C1715 * C1711) / C1699 -
        (C1696 * C1715 * (C1702 * C1708 + C1705 * bs[4] * std::pow(C1694, 4)) *
         C1706) /
            C1699;
    const double C458 =
        (-(C1725 * C1712 * ce) / C1697) / C1612 - (ae * C1725 * C1711) / C1699 -
        (C1696 * C1725 * (C1702 * C1708 + C1705 * bs[4] * std::pow(C1694, 4)) *
         C1706) /
            C1699;
    const double C872 =
        (-(ae * C1715 * C1711) / C1697) / C1612 -
        (C1708 * C1702 * C1741) / C1699 +
        C1715 *
            ((-(C1715 * std::pow(C1694, 4) * bs[4] * C1741) / C1697) / C1612 -
             (ae * C1711) / C1699);
    const double C1030 =
        (-(C1715 * C1725 * std::pow(C1694, 4) * bs[4] * C1741) / C1697) /
            C1612 -
        (ae * C1725 * C1711) / C1699;
    const double C1088 =
        (-(C1725 * C1715 * std::pow(C1694, 4) * bs[4] * C1760) / C1697) /
            C1612 -
        (ae * C1715 * C1711) / C1699;
    const double C1572 =
        (-(ae * C1725 * C1711) / C1697) / C1612 -
        (C1708 * C1702 * C1760) / C1699 +
        C1725 *
            ((-(C1725 * std::pow(C1694, 4) * bs[4] * C1760) / C1697) / C1612 -
             (ae * C1711) / C1699);
    const double C73 = -(C1696 * (C1696 * C1711 + C1704 * ce) +
                         C1698 * C1695 * C1703 + C1696 * C1704 * ce) /
                       C1697;
    const double C258 = -(C1715 * (C1696 * C1711 + C1704 * ce)) / C1697;
    const double C456 = -(C1725 * (C1696 * C1711 + C1704 * ce)) / C1697;
    const double C820 = -(C1711 * C1745 + C1698 * C1695 * C1703) / C1697;
    const double C969 = -(C1725 * C1715 * C1711) / C1697;
    const double C1474 = -(C1711 * C1770 + C1698 * C1695 * C1703) / C1697;
    const double C97 =
        (-(ae * C1696 * C1721) / C1697) / C1612 -
        (C1708 * C1702 * C1722) / C1699 +
        C1696 *
            ((-(C1696 * std::pow(C1694, 4) * bs[4] * C1722) / C1697) / C1612 -
             (ae * C1721) / C1699);
    const double C282 =
        C1715 *
            ((-(C1696 * std::pow(C1694, 4) * bs[4] * C1722) / C1697) / C1612 -
             (ae * C1721) / C1699) -
        ((C1696 * C1712 + C1704 * ae) * ce) / C1699;
    const double C480 =
        C1725 *
        ((-(C1696 * std::pow(C1694, 4) * bs[4] * C1722) / C1697) / C1612 -
         (ae * C1721) / C1699);
    const double C608 =
        (-(C1725 * C1696 * std::pow(C1694, 4) * bs[4] * C1766) / C1697) /
            C1612 -
        (ae * C1696 * C1721) / C1699;
    const double C1587 =
        (-(ae * C1725 * C1721) / C1697) / C1612 -
        (C1708 * C1702 * C1766) / C1699 +
        C1725 *
            ((-(C1725 * std::pow(C1694, 4) * bs[4] * C1766) / C1697) / C1612 -
             (ae * C1721) / C1699);
    const double C94 = -(C1721 * C1705 + C1698 * C1695 * C1717) / C1697;
    const double C280 = -(C1715 * C1696 * C1721 + C1696 * C1704 * ce) / C1697;
    const double C478 = -(C1725 * C1696 * C1721) / C1697;
    const double C836 = -(C1715 * (C1715 * C1721 + C1704 * ce) +
                          C1698 * C1695 * C1717 + C1715 * C1704 * ce) /
                        C1697;
    const double C989 = -(C1725 * (C1715 * C1721 + C1704 * ce)) / C1697;
    const double C1490 = -(C1721 * C1770 + C1698 * C1695 * C1717) / C1697;
    const double C118 =
        (-(ae * C1696 * C1731) / C1697) / C1612 -
        (C1708 * C1702 * C1732) / C1699 +
        C1696 *
            ((-(C1696 * std::pow(C1694, 4) * bs[4] * C1732) / C1697) / C1612 -
             (ae * C1731) / C1699);
    const double C304 =
        C1715 *
        ((-(C1696 * std::pow(C1694, 4) * bs[4] * C1732) / C1697) / C1612 -
         (ae * C1731) / C1699);
    const double C368 =
        (-(C1715 * C1696 * std::pow(C1694, 4) * bs[4] * C1751) / C1697) /
            C1612 -
        (ae * C1696 * C1731) / C1699;
    const double C502 =
        C1725 *
            ((-(C1696 * std::pow(C1694, 4) * bs[4] * C1732) / C1697) / C1612 -
             (ae * C1731) / C1699) -
        ((C1696 * C1712 + C1704 * ae) * ce) / C1699;
    const double C902 =
        (-(ae * C1715 * C1731) / C1697) / C1612 -
        (C1708 * C1702 * C1751) / C1699 +
        C1715 *
            ((-(C1715 * std::pow(C1694, 4) * bs[4] * C1751) / C1697) / C1612 -
             (ae * C1731) / C1699);
    const double C115 = -(C1731 * C1705 + C1698 * C1695 * C1727) / C1697;
    const double C302 = -(C1715 * C1696 * C1731) / C1697;
    const double C500 = -(C1725 * C1696 * C1731 + C1696 * C1704 * ce) / C1697;
    const double C852 = -(C1731 * C1745 + C1698 * C1695 * C1727) / C1697;
    const double C1009 = -(C1725 * C1715 * C1731 + C1715 * C1704 * ce) / C1697;
    const double C1506 = -(C1725 * (C1725 * C1731 + C1704 * ce) +
                           C1698 * C1695 * C1727 + C1725 * C1704 * ce) /
                         C1697;
    const double C139 =
        (-(C1696 * C1740 * ce) / C1697) / C1612 -
        (C1708 * C1702 * C1741) / C1699 +
        C1696 *
            ((-(C1696 * std::pow(C1694, 4) * bs[4] * C1741) / C1697) / C1612 -
             (C1740 * ce) / C1699);
    const double C328 =
        C1715 *
            ((-(C1696 * std::pow(C1694, 4) * bs[4] * C1741) / C1697) / C1612 -
             (C1740 * ce) / C1699) -
        (ae * (C1696 * C1711 + C1704 * ce)) / C1699;
    const double C348 =
        (-(C1696 * C1740 * ce) / C1697) / C1612 - (ae * C1696 * C1721) / C1699 -
        (C1715 * C1696 * (C1702 * C1708 + C1745 * bs[4] * std::pow(C1694, 4)) *
         C1706) /
            C1699;
    const double C524 =
        C1725 *
        ((-(C1696 * std::pow(C1694, 4) * bs[4] * C1741) / C1697) / C1612 -
         (C1740 * ce) / C1699);
    const double C564 =
        (-(C1725 * C1696 * std::pow(C1694, 4) * bs[4] * C1751) / C1697) /
            C1612 -
        (C1696 * C1740 * ce) / C1699;
    const double C887 =
        (-(ae * (C1715 * C1721 + C1704 * ce)) / C1697) / C1612 -
        ((C1704 + C1745 * C1702 * C1708) * C1706) / C1699 -
        ((C1715 * C1740 + C1704 * ae) * ce) / C1699 +
        C1715 * ((-(C1740 * ce) / C1697) / C1612 - (ae * C1721) / C1699 -
                 (C1715 * (C1702 * C1708 + C1745 * bs[4] * std::pow(C1694, 4)) *
                  C1706) /
                     C1699);
    const double C1049 =
        (-(C1725 * C1740 * ce) / C1697) / C1612 - (ae * C1725 * C1721) / C1699 -
        (C1715 * C1725 * (C1702 * C1708 + C1745 * bs[4] * std::pow(C1694, 4)) *
         C1706) /
            C1699;
    const double C1068 =
        C1715 *
            ((-(C1725 * std::pow(C1694, 4) * bs[4] * C1751) / C1697) / C1612 -
             (C1740 * ce) / C1699) -
        (ae * (C1725 * C1731 + C1704 * ce)) / C1699;
    const double C1553 =
        (-(C1725 * C1740 * ce) / C1697) / C1612 -
        (C1708 * C1702 * C1751) / C1699 +
        C1725 *
            ((-(C1725 * std::pow(C1694, 4) * bs[4] * C1751) / C1697) / C1612 -
             (C1740 * ce) / C1699);
    const double C136 = (C1698 * C1695 * C1736 + C1740 * C1705) / C1612;
    const double C326 = (C1715 * C1696 * C1740 + C1696 * C1704 * ae) / C1612;
    const double C522 = (C1725 * C1696 * C1740) / C1612;
    const double C871 =
        (C1698 * C1695 * C1736 + C1715 * (C1715 * C1740 + C1704 * ae) +
         C1715 * C1704 * ae) /
        C1612;
    const double C1029 = (C1725 * (C1715 * C1740 + C1704 * ae)) / C1612;
    const double C1522 = (C1698 * C1695 * C1736 + C1740 * C1770) / C1612;
    const double C194 =
        (-(C1696 * C1759 * ce) / C1697) / C1612 -
        (C1708 * C1702 * C1760) / C1699 +
        C1696 *
            ((-(C1696 * std::pow(C1694, 4) * bs[4] * C1760) / C1697) / C1612 -
             (C1759 * ce) / C1699);
    const double C390 =
        C1715 *
        ((-(C1696 * std::pow(C1694, 4) * bs[4] * C1760) / C1697) / C1612 -
         (C1759 * ce) / C1699);
    const double C410 =
        (-(C1715 * C1696 * std::pow(C1694, 4) * bs[4] * C1766) / C1697) /
            C1612 -
        (C1696 * C1759 * ce) / C1699;
    const double C588 =
        C1725 *
            ((-(C1696 * std::pow(C1694, 4) * bs[4] * C1760) / C1697) / C1612 -
             (C1759 * ce) / C1699) -
        (ae * (C1696 * C1711 + C1704 * ce)) / C1699;
    const double C628 =
        (-(C1696 * C1759 * ce) / C1697) / C1612 - (ae * C1696 * C1731) / C1699 -
        (C1725 * C1696 * (C1702 * C1708 + C1770 * bs[4] * std::pow(C1694, 4)) *
         C1706) /
            C1699;
    const double C933 =
        (-(C1715 * C1759 * ce) / C1697) / C1612 -
        (C1708 * C1702 * C1766) / C1699 +
        C1715 *
            ((-(C1715 * std::pow(C1694, 4) * bs[4] * C1766) / C1697) / C1612 -
             (C1759 * ce) / C1699);
    const double C1107 =
        C1725 *
            ((-(C1715 * std::pow(C1694, 4) * bs[4] * C1766) / C1697) / C1612 -
             (C1759 * ce) / C1699) -
        (ae * (C1715 * C1721 + C1704 * ce)) / C1699;
    const double C1126 =
        (-(C1715 * C1759 * ce) / C1697) / C1612 - (ae * C1715 * C1731) / C1699 -
        (C1725 * C1715 * (C1702 * C1708 + C1770 * bs[4] * std::pow(C1694, 4)) *
         C1706) /
            C1699;
    const double C1602 =
        (-(ae * (C1725 * C1731 + C1704 * ce)) / C1697) / C1612 -
        ((C1704 + C1770 * C1702 * C1708) * C1706) / C1699 -
        ((C1725 * C1759 + C1704 * ae) * ce) / C1699 +
        C1725 * ((-(C1759 * ce) / C1697) / C1612 - (ae * C1731) / C1699 -
                 (C1725 * (C1702 * C1708 + C1770 * bs[4] * std::pow(C1694, 4)) *
                  C1706) /
                     C1699);
    const double C191 = (C1698 * C1695 * C1755 + C1759 * C1705) / C1612;
    const double C388 = (C1715 * C1696 * C1759) / C1612;
    const double C586 = (C1725 * C1696 * C1759 + C1696 * C1704 * ae) / C1612;
    const double C917 = (C1698 * C1695 * C1755 + C1759 * C1745) / C1612;
    const double C1087 = (C1725 * C1715 * C1759 + C1715 * C1704 * ae) / C1612;
    const double C1571 =
        (C1698 * C1695 * C1755 + C1725 * (C1725 * C1759 + C1704 * ae) +
         C1725 * C1704 * ae) /
        C1612;
    const double C63 =
        ((0 * ae) / C1612 - C1617 / C1614) / (2 * C1612) - (0 * be) / C1612;
    const double C251 = (-C1611 / C1612) / (2 * C1612) -
                        ((C1910 - (C1610 * 2 * C1617) / C1612) * be) / C1612;
    const double C252 = (-(2 * C1617) / C1612) / (2 * C1612) - (0 * be) / C1612;
    const double C651 =
        ((C1910 - (C1610 * 2 * C1617) / C1612) * ae) / C1612 - C1611 / C1616;
    const double C652 = (0 * ae) / C1612 - C1617 / C1614;
    const double C817 = -(2 * C1617) / C1612;
    const double C62 =
        (((C1910 - (C1610 * 2 * C1617) / C1612) * ae) / C1612 - C1611 / C1616) /
            (2 * C1612) -
        ((C1610 * ((0 * ae) / C1612 - C1617 / C1614) + C2014) * be) / C1612;
    const double C55 = C2014 / C1915;
    const double C53 = C1910 / C1915 - (C2013 * C2006) / C1614;
    const double C54 = C2013 / C1616 - (C2014 * C2006) / C1612;
    const double C647 = C2013 / C1612;
    const double C870 =
        ((0 * ae) / C1612 - C1667 / C1614) / (2 * C1612) - (0 * be) / C1612;
    const double C869 =
        (((C1954 - (C1640 * 2 * C1667) / C1612) * ae) / C1612 - C1665 / C1616) /
            (2 * C1612) -
        ((C1640 * ((0 * ae) / C1612 - C1667 / C1614) + C2016) * be) / C1612;
    const double C816 = C2016 / C1915;
    const double C249 = C2015 / C1612;
    const double C814 = C1954 / C1915 - (C2015 * C2011) / C1614;
    const double C815 = C2015 / C1616 - (C2016 * C2011) / C1612;
    const double C1570 =
        ((0 * ae) / C1612 - C1683 / C1614) / (2 * C1612) - (0 * be) / C1612;
    const double C1569 =
        (((C1969 - (C1647 * 2 * C1683) / C1612) * ae) / C1612 - C1681 / C1616) /
            (2 * C1612) -
        ((C1647 * ((0 * ae) / C1612 - C1683 / C1614) + C2018) * be) / C1612;
    const double C1471 = C2018 / C1915;
    const double C449 = C2017 / C1612;
    const double C1469 = C1969 / C1915 - (C2017 * C2012) / C1614;
    const double C1470 = C2017 / C1616 - (C2018 * C2012) / C1612;
    const double C61 =
        (((0 - (C1610 * C1611) / C1612) * ae) / C1612 - (0 * be) / C1616) /
            (2 * C1612) -
        ((C1610 * (((C1910 - (C1610 * 2 * C1617) / C1612) * ae) / C1612 -
                   C1611 / C1616) +
          C647) *
         be) /
            C1612 +
        (0 * ae) / C1612 - C1617 / C1614;
    const double C868 =
        (((0 - (C1640 * C1665) / C1612) * ae) / C1612 - (0 * be) / C1616) /
            (2 * C1612) -
        ((C1640 * (((C1954 - (C1640 * 2 * C1667) / C1612) * ae) / C1612 -
                   C1665 / C1616) +
          C249) *
         be) /
            C1612 +
        (0 * ae) / C1612 - C1667 / C1614;
    const double C1568 =
        (((0 - (C1647 * C1681) / C1612) * ae) / C1612 - (0 * be) / C1616) /
            (2 * C1612) -
        ((C1647 * (((C1969 - (C1647 * 2 * C1683) / C1612) * ae) / C1612 -
                   C1681 / C1616) +
          C449) *
         be) /
            C1612 +
        (0 * ae) / C1612 - C1683 / C1614;
    
    d2eexx[0] += (2 * std::pow(Pi, 2.5) *
                  ((C61 * C65 + C53 * C68 + C62 * C66 + C54 * C69 + C63 * C67 +
                    C55 * C70) *
                       C64 +
                   (C61 * C71 + C53 * C74 + C62 * C72 + C54 * C75 + C63 * C73 +
                    C55 * C76) *
                       C56) *
                  C1954 * C1969 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eexy[0] += (2 * std::pow(Pi, 2.5) *
                  ((C61 * C65 + C53 * C68 + C62 * C66 + C54 * C69 + C63 * C67 +
                    C55 * C70) *
                       C91 +
                   (C61 * C92 + C53 * C95 + C62 * C93 + C54 * C96 + C63 * C94 +
                    C55 * C97) *
                       C60) *
                  C1954 * C1969 * C56 * C59) /
                 (p * q * std::sqrt(p + q));
    d2eexz[0] += (2 * std::pow(Pi, 2.5) *
                  ((C61 * C65 + C53 * C68 + C62 * C66 + C54 * C69 + C63 * C67 +
                    C55 * C70) *
                       C112 +
                   (C61 * C113 + C53 * C116 + C62 * C114 + C54 * C117 +
                    C63 * C115 + C55 * C118) *
                       C59) *
                  C1954 * C1969 * C60 * C56) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[0] += (2 * std::pow(Pi, 2.5) *
                  (((C133 * C65 + C1954 * C134) * C64 +
                    (C133 * C71 + C1954 * C137) * C56) *
                       C1969 * C53 +
                   ((C133 * C66 + C1954 * C135) * C64 +
                    (C133 * C72 + C1954 * C138) * C56) *
                       C1969 * C54 +
                   ((C133 * C67 + C1954 * C136) * C64 +
                    (C133 * C73 + C1954 * C139) * C56) *
                       C1969 * C55) *
                  C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[0] += (2 * std::pow(Pi, 2.5) *
                  (((C133 * C65 + C1954 * C134) * C91 +
                    (C133 * C92 + C1954 * C154) * C60) *
                       C1969 * C53 +
                   ((C133 * C66 + C1954 * C135) * C91 +
                    (C133 * C93 + C1954 * C155) * C60) *
                       C1969 * C54 +
                   ((C133 * C67 + C1954 * C136) * C91 +
                    (C133 * C94 + C1954 * C156) * C60) *
                       C1969 * C55) *
                  C56 * C59) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[0] += (2 * std::pow(Pi, 2.5) *
                  (((C133 * C65 + C1954 * C134) * C112 +
                    (C133 * C113 + C1954 * C171) * C59) *
                       C1969 * C53 +
                   ((C133 * C66 + C1954 * C135) * C112 +
                    (C133 * C114 + C1954 * C172) * C59) *
                       C1969 * C54 +
                   ((C133 * C67 + C1954 * C136) * C112 +
                    (C133 * C115 + C1954 * C173) * C59) *
                       C1969 * C55) *
                  C60 * C56) /
                 (p * q * std::sqrt(p + q));
    d2eezx[0] += (2 * std::pow(Pi, 2.5) *
                  (((C188 * C65 + C1969 * C189) * C64 +
                    (C188 * C71 + C1969 * C192) * C56) *
                       C53 +
                   ((C188 * C66 + C1969 * C190) * C64 +
                    (C188 * C72 + C1969 * C193) * C56) *
                       C54 +
                   ((C188 * C67 + C1969 * C191) * C64 +
                    (C188 * C73 + C1969 * C194) * C56) *
                       C55) *
                  C1954 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eezy[0] += (2 * std::pow(Pi, 2.5) *
                  (((C188 * C65 + C1969 * C189) * C91 +
                    (C188 * C92 + C1969 * C209) * C60) *
                       C53 +
                   ((C188 * C66 + C1969 * C190) * C91 +
                    (C188 * C93 + C1969 * C210) * C60) *
                       C54 +
                   ((C188 * C67 + C1969 * C191) * C91 +
                    (C188 * C94 + C1969 * C211) * C60) *
                       C55) *
                  C1954 * C56 * C59) /
                 (p * q * std::sqrt(p + q));
    d2eezz[0] += (2 * std::pow(Pi, 2.5) *
                  (((C188 * C65 + C1969 * C189) * C112 +
                    (C188 * C113 + C1969 * C226) * C59) *
                       C53 +
                   ((C188 * C66 + C1969 * C190) * C112 +
                    (C188 * C114 + C1969 * C227) * C59) *
                       C54 +
                   ((C188 * C67 + C1969 * C191) * C112 +
                    (C188 * C115 + C1969 * C228) * C59) *
                       C55) *
                  C1954 * C60 * C56) /
                 (p * q * std::sqrt(p + q));
    d2eexx[1] +=
        (2 * std::pow(Pi, 2.5) *
         (((C251 * C65 + C247 * C68 + C252 * C66 + C2014 * C69) * C64 +
           (C251 * C71 + C247 * C74 + C252 * C72 + C2014 * C75) * C56) *
              C249 +
          ((C251 * C253 + C247 * C255 + C252 * C254 + C2014 * C256) * C64 +
           (C251 * C257 + C247 * C259 + C252 * C258 + C2014 * C260) * C56) *
              C2016) *
         C1969 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eexy[1] +=
        (2 * std::pow(Pi, 2.5) *
         (((C251 * C65 + C247 * C68 + C252 * C66 + C2014 * C69) * C91 +
           (C251 * C92 + C247 * C95 + C252 * C93 + C2014 * C96) * C60) *
              C249 +
          ((C251 * C253 + C247 * C255 + C252 * C254 + C2014 * C256) * C91 +
           (C251 * C279 + C247 * C281 + C252 * C280 + C2014 * C282) * C60) *
              C2016) *
         C1969 * C56 * C59) /
        (p * q * std::sqrt(p + q));
    d2eexz[1] +=
        (2 * std::pow(Pi, 2.5) *
         (((C251 * C65 + C247 * C68 + C252 * C66 + C2014 * C69) * C112 +
           (C251 * C113 + C247 * C116 + C252 * C114 + C2014 * C117) * C59) *
              C249 +
          ((C251 * C253 + C247 * C255 + C252 * C254 + C2014 * C256) * C112 +
           (C251 * C301 + C247 * C303 + C252 * C302 + C2014 * C304) * C59) *
              C2016) *
         C1969 * C60 * C56) /
        (p * q * std::sqrt(p + q));
    d2eeyx[1] +=
        (2 * std::pow(Pi, 2.5) *
         (((C323 * C65 + C249 * C134 + C324 * C253 + C2016 * C325) * C64 +
           (C323 * C71 + C249 * C137 + C324 * C257 + C2016 * C327) * C56) *
              C1969 * C247 +
          ((C323 * C66 + C249 * C135 + C324 * C254 + C2016 * C326) * C64 +
           (C323 * C72 + C249 * C138 + C324 * C258 + C2016 * C328) * C56) *
              C1969 * C2014) *
         C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eeyy[1] +=
        (2 * std::pow(Pi, 2.5) *
         (((C323 * C65 + C249 * C134 + C324 * C253 + C2016 * C325) * C91 +
           (C323 * C92 + C249 * C154 + C324 * C279 + C2016 * C347) * C60) *
              C1969 * C247 +
          ((C323 * C66 + C249 * C135 + C324 * C254 + C2016 * C326) * C91 +
           (C323 * C93 + C249 * C155 + C324 * C280 + C2016 * C348) * C60) *
              C1969 * C2014) *
         C56 * C59) /
        (p * q * std::sqrt(p + q));
    d2eeyz[1] +=
        (2 * std::pow(Pi, 2.5) *
         (((C323 * C65 + C249 * C134 + C324 * C253 + C2016 * C325) * C112 +
           (C323 * C113 + C249 * C171 + C324 * C301 + C2016 * C367) * C59) *
              C1969 * C247 +
          ((C323 * C66 + C249 * C135 + C324 * C254 + C2016 * C326) * C112 +
           (C323 * C114 + C249 * C172 + C324 * C302 + C2016 * C368) * C59) *
              C1969 * C2014) *
         C60 * C56) /
        (p * q * std::sqrt(p + q));
    d2eezx[1] += (2 * std::pow(Pi, 2.5) *
                  ((((C188 * C65 + C1969 * C189) * C64 +
                     (C188 * C71 + C1969 * C192) * C56) *
                        C247 +
                    ((C188 * C66 + C1969 * C190) * C64 +
                     (C188 * C72 + C1969 * C193) * C56) *
                        C2014) *
                       C249 +
                   (((C188 * C253 + C1969 * C387) * C64 +
                     (C188 * C257 + C1969 * C389) * C56) *
                        C247 +
                    ((C188 * C254 + C1969 * C388) * C64 +
                     (C188 * C258 + C1969 * C390) * C56) *
                        C2014) *
                       C2016) *
                  C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eezy[1] += (2 * std::pow(Pi, 2.5) *
                  ((((C188 * C65 + C1969 * C189) * C91 +
                     (C188 * C92 + C1969 * C209) * C60) *
                        C247 +
                    ((C188 * C66 + C1969 * C190) * C91 +
                     (C188 * C93 + C1969 * C210) * C60) *
                        C2014) *
                       C249 +
                   (((C188 * C253 + C1969 * C387) * C91 +
                     (C188 * C279 + C1969 * C409) * C60) *
                        C247 +
                    ((C188 * C254 + C1969 * C388) * C91 +
                     (C188 * C280 + C1969 * C410) * C60) *
                        C2014) *
                       C2016) *
                  C56 * C59) /
                 (p * q * std::sqrt(p + q));
    d2eezz[1] += (2 * std::pow(Pi, 2.5) *
                  ((((C188 * C65 + C1969 * C189) * C112 +
                     (C188 * C113 + C1969 * C226) * C59) *
                        C247 +
                    ((C188 * C66 + C1969 * C190) * C112 +
                     (C188 * C114 + C1969 * C227) * C59) *
                        C2014) *
                       C249 +
                   (((C188 * C253 + C1969 * C387) * C112 +
                     (C188 * C301 + C1969 * C429) * C59) *
                        C247 +
                    ((C188 * C254 + C1969 * C388) * C112 +
                     (C188 * C302 + C1969 * C430) * C59) *
                        C2014) *
                       C2016) *
                  C60 * C56) /
                 (p * q * std::sqrt(p + q));
    d2eexx[2] +=
        (2 * std::pow(Pi, 2.5) *
         (((C251 * C65 + C247 * C68 + C252 * C66 + C2014 * C69) * C64 +
           (C251 * C71 + C247 * C74 + C252 * C72 + C2014 * C75) * C56) *
              C1954 * C449 +
          ((C251 * C451 + C247 * C453 + C252 * C452 + C2014 * C454) * C64 +
           (C251 * C455 + C247 * C457 + C252 * C456 + C2014 * C458) * C56) *
              C1954 * C2018) *
         C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eexy[2] +=
        (2 * std::pow(Pi, 2.5) *
         (((C251 * C65 + C247 * C68 + C252 * C66 + C2014 * C69) * C91 +
           (C251 * C92 + C247 * C95 + C252 * C93 + C2014 * C96) * C60) *
              C1954 * C449 +
          ((C251 * C451 + C247 * C453 + C252 * C452 + C2014 * C454) * C91 +
           (C251 * C477 + C247 * C479 + C252 * C478 + C2014 * C480) * C60) *
              C1954 * C2018) *
         C56 * C59) /
        (p * q * std::sqrt(p + q));
    d2eexz[2] +=
        (2 * std::pow(Pi, 2.5) *
         (((C251 * C65 + C247 * C68 + C252 * C66 + C2014 * C69) * C112 +
           (C251 * C113 + C247 * C116 + C252 * C114 + C2014 * C117) * C59) *
              C1954 * C449 +
          ((C251 * C451 + C247 * C453 + C252 * C452 + C2014 * C454) * C112 +
           (C251 * C499 + C247 * C501 + C252 * C500 + C2014 * C502) * C59) *
              C1954 * C2018) *
         C60 * C56) /
        (p * q * std::sqrt(p + q));
    d2eeyx[2] += (2 * std::pow(Pi, 2.5) *
                  ((((C133 * C65 + C1954 * C134) * C64 +
                     (C133 * C71 + C1954 * C137) * C56) *
                        C449 +
                    ((C133 * C451 + C1954 * C521) * C64 +
                     (C133 * C455 + C1954 * C523) * C56) *
                        C2018) *
                       C247 +
                   (((C133 * C66 + C1954 * C135) * C64 +
                     (C133 * C72 + C1954 * C138) * C56) *
                        C449 +
                    ((C133 * C452 + C1954 * C522) * C64 +
                     (C133 * C456 + C1954 * C524) * C56) *
                        C2018) *
                       C2014) *
                  C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[2] += (2 * std::pow(Pi, 2.5) *
                  ((((C133 * C65 + C1954 * C134) * C91 +
                     (C133 * C92 + C1954 * C154) * C60) *
                        C449 +
                    ((C133 * C451 + C1954 * C521) * C91 +
                     (C133 * C477 + C1954 * C543) * C60) *
                        C2018) *
                       C247 +
                   (((C133 * C66 + C1954 * C135) * C91 +
                     (C133 * C93 + C1954 * C155) * C60) *
                        C449 +
                    ((C133 * C452 + C1954 * C522) * C91 +
                     (C133 * C478 + C1954 * C544) * C60) *
                        C2018) *
                       C2014) *
                  C56 * C59) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[2] += (2 * std::pow(Pi, 2.5) *
                  ((((C133 * C65 + C1954 * C134) * C112 +
                     (C133 * C113 + C1954 * C171) * C59) *
                        C449 +
                    ((C133 * C451 + C1954 * C521) * C112 +
                     (C133 * C499 + C1954 * C563) * C59) *
                        C2018) *
                       C247 +
                   (((C133 * C66 + C1954 * C135) * C112 +
                     (C133 * C114 + C1954 * C172) * C59) *
                        C449 +
                    ((C133 * C452 + C1954 * C522) * C112 +
                     (C133 * C500 + C1954 * C564) * C59) *
                        C2018) *
                       C2014) *
                  C60 * C56) /
                 (p * q * std::sqrt(p + q));
    d2eezx[2] +=
        (2 * std::pow(Pi, 2.5) *
         (((C583 * C65 + C449 * C189 + C584 * C451 + C2018 * C585) * C64 +
           (C583 * C71 + C449 * C192 + C584 * C455 + C2018 * C587) * C56) *
              C247 +
          ((C583 * C66 + C449 * C190 + C584 * C452 + C2018 * C586) * C64 +
           (C583 * C72 + C449 * C193 + C584 * C456 + C2018 * C588) * C56) *
              C2014) *
         C1954 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eezy[2] +=
        (2 * std::pow(Pi, 2.5) *
         (((C583 * C65 + C449 * C189 + C584 * C451 + C2018 * C585) * C91 +
           (C583 * C92 + C449 * C209 + C584 * C477 + C2018 * C607) * C60) *
              C247 +
          ((C583 * C66 + C449 * C190 + C584 * C452 + C2018 * C586) * C91 +
           (C583 * C93 + C449 * C210 + C584 * C478 + C2018 * C608) * C60) *
              C2014) *
         C1954 * C56 * C59) /
        (p * q * std::sqrt(p + q));
    d2eezz[2] +=
        (2 * std::pow(Pi, 2.5) *
         (((C583 * C65 + C449 * C189 + C584 * C451 + C2018 * C585) * C112 +
           (C583 * C113 + C449 * C226 + C584 * C499 + C2018 * C627) * C59) *
              C247 +
          ((C583 * C66 + C449 * C190 + C584 * C452 + C2018 * C586) * C112 +
           (C583 * C114 + C449 * C227 + C584 * C500 + C2018 * C628) * C59) *
              C2014) *
         C1954 * C60 * C56) /
        (p * q * std::sqrt(p + q));
    d2eexx[3] +=
        (2 * std::pow(Pi, 2.5) *
         (((C651 * C65 + C647 * C68 + C652 * C66 + C2014 * C69) * C64 +
           (C651 * C71 + C647 * C74 + C652 * C72 + C2014 * C75) * C56) *
              C649 +
          ((C651 * C253 + C647 * C255 + C652 * C254 + C2014 * C256) * C64 +
           (C651 * C257 + C647 * C259 + C652 * C258 + C2014 * C260) * C56) *
              C2016) *
         C1969 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eexy[3] +=
        (2 * std::pow(Pi, 2.5) *
         (((C651 * C65 + C647 * C68 + C652 * C66 + C2014 * C69) * C91 +
           (C651 * C92 + C647 * C95 + C652 * C93 + C2014 * C96) * C60) *
              C649 +
          ((C651 * C253 + C647 * C255 + C652 * C254 + C2014 * C256) * C91 +
           (C651 * C279 + C647 * C281 + C652 * C280 + C2014 * C282) * C60) *
              C2016) *
         C1969 * C56 * C59) /
        (p * q * std::sqrt(p + q));
    d2eexz[3] +=
        (2 * std::pow(Pi, 2.5) *
         (((C651 * C65 + C647 * C68 + C652 * C66 + C2014 * C69) * C112 +
           (C651 * C113 + C647 * C116 + C652 * C114 + C2014 * C117) * C59) *
              C649 +
          ((C651 * C253 + C647 * C255 + C652 * C254 + C2014 * C256) * C112 +
           (C651 * C301 + C647 * C303 + C652 * C302 + C2014 * C304) * C59) *
              C2016) *
         C1969 * C60 * C56) /
        (p * q * std::sqrt(p + q));
    d2eeyx[3] +=
        (2 * std::pow(Pi, 2.5) *
         (((C707 * C65 + C649 * C134 + C708 * C253 + C2016 * C325) * C64 +
           (C707 * C71 + C649 * C137 + C708 * C257 + C2016 * C327) * C56) *
              C1969 * C647 +
          ((C707 * C66 + C649 * C135 + C708 * C254 + C2016 * C326) * C64 +
           (C707 * C72 + C649 * C138 + C708 * C258 + C2016 * C328) * C56) *
              C1969 * C2014) *
         C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eeyy[3] +=
        (2 * std::pow(Pi, 2.5) *
         (((C707 * C65 + C649 * C134 + C708 * C253 + C2016 * C325) * C91 +
           (C707 * C92 + C649 * C154 + C708 * C279 + C2016 * C347) * C60) *
              C1969 * C647 +
          ((C707 * C66 + C649 * C135 + C708 * C254 + C2016 * C326) * C91 +
           (C707 * C93 + C649 * C155 + C708 * C280 + C2016 * C348) * C60) *
              C1969 * C2014) *
         C56 * C59) /
        (p * q * std::sqrt(p + q));
    d2eeyz[3] +=
        (2 * std::pow(Pi, 2.5) *
         (((C707 * C65 + C649 * C134 + C708 * C253 + C2016 * C325) * C112 +
           (C707 * C113 + C649 * C171 + C708 * C301 + C2016 * C367) * C59) *
              C1969 * C647 +
          ((C707 * C66 + C649 * C135 + C708 * C254 + C2016 * C326) * C112 +
           (C707 * C114 + C649 * C172 + C708 * C302 + C2016 * C368) * C59) *
              C1969 * C2014) *
         C60 * C56) /
        (p * q * std::sqrt(p + q));
    d2eezx[3] += (2 * std::pow(Pi, 2.5) *
                  ((((C188 * C65 + C1969 * C189) * C64 +
                     (C188 * C71 + C1969 * C192) * C56) *
                        C647 +
                    ((C188 * C66 + C1969 * C190) * C64 +
                     (C188 * C72 + C1969 * C193) * C56) *
                        C2014) *
                       C649 +
                   (((C188 * C253 + C1969 * C387) * C64 +
                     (C188 * C257 + C1969 * C389) * C56) *
                        C647 +
                    ((C188 * C254 + C1969 * C388) * C64 +
                     (C188 * C258 + C1969 * C390) * C56) *
                        C2014) *
                       C2016) *
                  C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eezy[3] += (2 * std::pow(Pi, 2.5) *
                  ((((C188 * C65 + C1969 * C189) * C91 +
                     (C188 * C92 + C1969 * C209) * C60) *
                        C647 +
                    ((C188 * C66 + C1969 * C190) * C91 +
                     (C188 * C93 + C1969 * C210) * C60) *
                        C2014) *
                       C649 +
                   (((C188 * C253 + C1969 * C387) * C91 +
                     (C188 * C279 + C1969 * C409) * C60) *
                        C647 +
                    ((C188 * C254 + C1969 * C388) * C91 +
                     (C188 * C280 + C1969 * C410) * C60) *
                        C2014) *
                       C2016) *
                  C56 * C59) /
                 (p * q * std::sqrt(p + q));
    d2eezz[3] += (2 * std::pow(Pi, 2.5) *
                  ((((C188 * C65 + C1969 * C189) * C112 +
                     (C188 * C113 + C1969 * C226) * C59) *
                        C647 +
                    ((C188 * C66 + C1969 * C190) * C112 +
                     (C188 * C114 + C1969 * C227) * C59) *
                        C2014) *
                       C649 +
                   (((C188 * C253 + C1969 * C387) * C112 +
                     (C188 * C301 + C1969 * C429) * C59) *
                        C647 +
                    ((C188 * C254 + C1969 * C388) * C112 +
                     (C188 * C302 + C1969 * C430) * C59) *
                        C2014) *
                       C2016) *
                  C60 * C56) /
                 (p * q * std::sqrt(p + q));
    d2eexx[4] += (2 * std::pow(Pi, 2.5) *
                  (((C817 * C65 + C1910 * C68) * C64 +
                    (C817 * C71 + C1910 * C74) * C56) *
                       C814 +
                   ((C817 * C253 + C1910 * C255) * C64 +
                    (C817 * C257 + C1910 * C259) * C56) *
                       C815 +
                   ((C817 * C818 + C1910 * C819) * C64 +
                    (C817 * C820 + C1910 * C821) * C56) *
                       C816) *
                  C1969 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eexy[4] += (2 * std::pow(Pi, 2.5) *
                  (((C817 * C65 + C1910 * C68) * C91 +
                    (C817 * C92 + C1910 * C95) * C60) *
                       C814 +
                   ((C817 * C253 + C1910 * C255) * C91 +
                    (C817 * C279 + C1910 * C281) * C60) *
                       C815 +
                   ((C817 * C818 + C1910 * C819) * C91 +
                    (C817 * C836 + C1910 * C837) * C60) *
                       C816) *
                  C1969 * C56 * C59) /
                 (p * q * std::sqrt(p + q));
    d2eexz[4] += (2 * std::pow(Pi, 2.5) *
                  (((C817 * C65 + C1910 * C68) * C112 +
                    (C817 * C113 + C1910 * C116) * C59) *
                       C814 +
                   ((C817 * C253 + C1910 * C255) * C112 +
                    (C817 * C301 + C1910 * C303) * C59) *
                       C815 +
                   ((C817 * C818 + C1910 * C819) * C112 +
                    (C817 * C852 + C1910 * C853) * C59) *
                       C816) *
                  C1969 * C60 * C56) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[4] += (2 * std::pow(Pi, 2.5) *
                  ((C868 * C65 + C814 * C134 + C869 * C253 + C815 * C325 +
                    C870 * C818 + C816 * C871) *
                       C64 +
                   (C868 * C71 + C814 * C137 + C869 * C257 + C815 * C327 +
                    C870 * C820 + C816 * C872) *
                       C56) *
                  C1969 * C1910 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[4] += (2 * std::pow(Pi, 2.5) *
                  ((C868 * C65 + C814 * C134 + C869 * C253 + C815 * C325 +
                    C870 * C818 + C816 * C871) *
                       C91 +
                   (C868 * C92 + C814 * C154 + C869 * C279 + C815 * C347 +
                    C870 * C836 + C816 * C887) *
                       C60) *
                  C1969 * C1910 * C56 * C59) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[4] += (2 * std::pow(Pi, 2.5) *
                  ((C868 * C65 + C814 * C134 + C869 * C253 + C815 * C325 +
                    C870 * C818 + C816 * C871) *
                       C112 +
                   (C868 * C113 + C814 * C171 + C869 * C301 + C815 * C367 +
                    C870 * C852 + C816 * C902) *
                       C59) *
                  C1969 * C1910 * C60 * C56) /
                 (p * q * std::sqrt(p + q));
    d2eezx[4] += (2 * std::pow(Pi, 2.5) *
                  (((C188 * C65 + C1969 * C189) * C64 +
                    (C188 * C71 + C1969 * C192) * C56) *
                       C1910 * C814 +
                   ((C188 * C253 + C1969 * C387) * C64 +
                    (C188 * C257 + C1969 * C389) * C56) *
                       C1910 * C815 +
                   ((C188 * C818 + C1969 * C917) * C64 +
                    (C188 * C820 + C1969 * C918) * C56) *
                       C1910 * C816) *
                  C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eezy[4] += (2 * std::pow(Pi, 2.5) *
                  (((C188 * C65 + C1969 * C189) * C91 +
                    (C188 * C92 + C1969 * C209) * C60) *
                       C1910 * C814 +
                   ((C188 * C253 + C1969 * C387) * C91 +
                    (C188 * C279 + C1969 * C409) * C60) *
                       C1910 * C815 +
                   ((C188 * C818 + C1969 * C917) * C91 +
                    (C188 * C836 + C1969 * C933) * C60) *
                       C1910 * C816) *
                  C56 * C59) /
                 (p * q * std::sqrt(p + q));
    d2eezz[4] += (2 * std::pow(Pi, 2.5) *
                  (((C188 * C65 + C1969 * C189) * C112 +
                    (C188 * C113 + C1969 * C226) * C59) *
                       C1910 * C814 +
                   ((C188 * C253 + C1969 * C387) * C112 +
                    (C188 * C301 + C1969 * C429) * C59) *
                       C1910 * C815 +
                   ((C188 * C818 + C1969 * C917) * C112 +
                    (C188 * C852 + C1969 * C948) * C59) *
                       C1910 * C816) *
                  C60 * C56) /
                 (p * q * std::sqrt(p + q));
    d2eexx[5] += (2 * std::pow(Pi, 2.5) *
                  ((((C817 * C65 + C1910 * C68) * C64 +
                     (C817 * C71 + C1910 * C74) * C56) *
                        C649 +
                    ((C817 * C253 + C1910 * C255) * C64 +
                     (C817 * C257 + C1910 * C259) * C56) *
                        C2016) *
                       C449 +
                   (((C817 * C451 + C1910 * C453) * C64 +
                     (C817 * C455 + C1910 * C457) * C56) *
                        C649 +
                    ((C817 * C967 + C1910 * C968) * C64 +
                     (C817 * C969 + C1910 * C970) * C56) *
                        C2016) *
                       C2018) *
                  C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eexy[5] += (2 * std::pow(Pi, 2.5) *
                  ((((C817 * C65 + C1910 * C68) * C91 +
                     (C817 * C92 + C1910 * C95) * C60) *
                        C649 +
                    ((C817 * C253 + C1910 * C255) * C91 +
                     (C817 * C279 + C1910 * C281) * C60) *
                        C2016) *
                       C449 +
                   (((C817 * C451 + C1910 * C453) * C91 +
                     (C817 * C477 + C1910 * C479) * C60) *
                        C649 +
                    ((C817 * C967 + C1910 * C968) * C91 +
                     (C817 * C989 + C1910 * C990) * C60) *
                        C2016) *
                       C2018) *
                  C56 * C59) /
                 (p * q * std::sqrt(p + q));
    d2eexz[5] += (2 * std::pow(Pi, 2.5) *
                  ((((C817 * C65 + C1910 * C68) * C112 +
                     (C817 * C113 + C1910 * C116) * C59) *
                        C649 +
                    ((C817 * C253 + C1910 * C255) * C112 +
                     (C817 * C301 + C1910 * C303) * C59) *
                        C2016) *
                       C449 +
                   (((C817 * C451 + C1910 * C453) * C112 +
                     (C817 * C499 + C1910 * C501) * C59) *
                        C649 +
                    ((C817 * C967 + C1910 * C968) * C112 +
                     (C817 * C1009 + C1910 * C1010) * C59) *
                        C2016) *
                       C2018) *
                  C60 * C56) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[5] +=
        (2 * std::pow(Pi, 2.5) *
         (((C707 * C65 + C649 * C134 + C708 * C253 + C2016 * C325) * C64 +
           (C707 * C71 + C649 * C137 + C708 * C257 + C2016 * C327) * C56) *
              C449 +
          ((C707 * C451 + C649 * C521 + C708 * C967 + C2016 * C1029) * C64 +
           (C707 * C455 + C649 * C523 + C708 * C969 + C2016 * C1030) * C56) *
              C2018) *
         C1910 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eeyy[5] +=
        (2 * std::pow(Pi, 2.5) *
         (((C707 * C65 + C649 * C134 + C708 * C253 + C2016 * C325) * C91 +
           (C707 * C92 + C649 * C154 + C708 * C279 + C2016 * C347) * C60) *
              C449 +
          ((C707 * C451 + C649 * C521 + C708 * C967 + C2016 * C1029) * C91 +
           (C707 * C477 + C649 * C543 + C708 * C989 + C2016 * C1049) * C60) *
              C2018) *
         C1910 * C56 * C59) /
        (p * q * std::sqrt(p + q));
    d2eeyz[5] +=
        (2 * std::pow(Pi, 2.5) *
         (((C707 * C65 + C649 * C134 + C708 * C253 + C2016 * C325) * C112 +
           (C707 * C113 + C649 * C171 + C708 * C301 + C2016 * C367) * C59) *
              C449 +
          ((C707 * C451 + C649 * C521 + C708 * C967 + C2016 * C1029) * C112 +
           (C707 * C499 + C649 * C563 + C708 * C1009 + C2016 * C1068) * C59) *
              C2018) *
         C1910 * C60 * C56) /
        (p * q * std::sqrt(p + q));
    d2eezx[5] +=
        (2 * std::pow(Pi, 2.5) *
         (((C583 * C65 + C449 * C189 + C584 * C451 + C2018 * C585) * C64 +
           (C583 * C71 + C449 * C192 + C584 * C455 + C2018 * C587) * C56) *
              C1910 * C649 +
          ((C583 * C253 + C449 * C387 + C584 * C967 + C2018 * C1087) * C64 +
           (C583 * C257 + C449 * C389 + C584 * C969 + C2018 * C1088) * C56) *
              C1910 * C2016) *
         C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eezy[5] +=
        (2 * std::pow(Pi, 2.5) *
         (((C583 * C65 + C449 * C189 + C584 * C451 + C2018 * C585) * C91 +
           (C583 * C92 + C449 * C209 + C584 * C477 + C2018 * C607) * C60) *
              C1910 * C649 +
          ((C583 * C253 + C449 * C387 + C584 * C967 + C2018 * C1087) * C91 +
           (C583 * C279 + C449 * C409 + C584 * C989 + C2018 * C1107) * C60) *
              C1910 * C2016) *
         C56 * C59) /
        (p * q * std::sqrt(p + q));
    d2eezz[5] +=
        (2 * std::pow(Pi, 2.5) *
         (((C583 * C65 + C449 * C189 + C584 * C451 + C2018 * C585) * C112 +
           (C583 * C113 + C449 * C226 + C584 * C499 + C2018 * C627) * C59) *
              C1910 * C649 +
          ((C583 * C253 + C449 * C387 + C584 * C967 + C2018 * C1087) * C112 +
           (C583 * C301 + C449 * C429 + C584 * C1009 + C2018 * C1126) * C59) *
              C1910 * C2016) *
         C60 * C56) /
        (p * q * std::sqrt(p + q));
    d2eexx[6] +=
        (2 * std::pow(Pi, 2.5) *
         (((C651 * C65 + C647 * C68 + C652 * C66 + C2014 * C69) * C64 +
           (C651 * C71 + C647 * C74 + C652 * C72 + C2014 * C75) * C56) *
              C1954 * C1145 +
          ((C651 * C451 + C647 * C453 + C652 * C452 + C2014 * C454) * C64 +
           (C651 * C455 + C647 * C457 + C652 * C456 + C2014 * C458) * C56) *
              C1954 * C2018) *
         C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eexy[6] +=
        (2 * std::pow(Pi, 2.5) *
         (((C651 * C65 + C647 * C68 + C652 * C66 + C2014 * C69) * C91 +
           (C651 * C92 + C647 * C95 + C652 * C93 + C2014 * C96) * C60) *
              C1954 * C1145 +
          ((C651 * C451 + C647 * C453 + C652 * C452 + C2014 * C454) * C91 +
           (C651 * C477 + C647 * C479 + C652 * C478 + C2014 * C480) * C60) *
              C1954 * C2018) *
         C56 * C59) /
        (p * q * std::sqrt(p + q));
    d2eexz[6] +=
        (2 * std::pow(Pi, 2.5) *
         (((C651 * C65 + C647 * C68 + C652 * C66 + C2014 * C69) * C112 +
           (C651 * C113 + C647 * C116 + C652 * C114 + C2014 * C117) * C59) *
              C1954 * C1145 +
          ((C651 * C451 + C647 * C453 + C652 * C452 + C2014 * C454) * C112 +
           (C651 * C499 + C647 * C501 + C652 * C500 + C2014 * C502) * C59) *
              C1954 * C2018) *
         C60 * C56) /
        (p * q * std::sqrt(p + q));
    d2eeyx[6] += (2 * std::pow(Pi, 2.5) *
                  ((((C133 * C65 + C1954 * C134) * C64 +
                     (C133 * C71 + C1954 * C137) * C56) *
                        C1145 +
                    ((C133 * C451 + C1954 * C521) * C64 +
                     (C133 * C455 + C1954 * C523) * C56) *
                        C2018) *
                       C647 +
                   (((C133 * C66 + C1954 * C135) * C64 +
                     (C133 * C72 + C1954 * C138) * C56) *
                        C1145 +
                    ((C133 * C452 + C1954 * C522) * C64 +
                     (C133 * C456 + C1954 * C524) * C56) *
                        C2018) *
                       C2014) *
                  C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[6] += (2 * std::pow(Pi, 2.5) *
                  ((((C133 * C65 + C1954 * C134) * C91 +
                     (C133 * C92 + C1954 * C154) * C60) *
                        C1145 +
                    ((C133 * C451 + C1954 * C521) * C91 +
                     (C133 * C477 + C1954 * C543) * C60) *
                        C2018) *
                       C647 +
                   (((C133 * C66 + C1954 * C135) * C91 +
                     (C133 * C93 + C1954 * C155) * C60) *
                        C1145 +
                    ((C133 * C452 + C1954 * C522) * C91 +
                     (C133 * C478 + C1954 * C544) * C60) *
                        C2018) *
                       C2014) *
                  C56 * C59) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[6] += (2 * std::pow(Pi, 2.5) *
                  ((((C133 * C65 + C1954 * C134) * C112 +
                     (C133 * C113 + C1954 * C171) * C59) *
                        C1145 +
                    ((C133 * C451 + C1954 * C521) * C112 +
                     (C133 * C499 + C1954 * C563) * C59) *
                        C2018) *
                       C647 +
                   (((C133 * C66 + C1954 * C135) * C112 +
                     (C133 * C114 + C1954 * C172) * C59) *
                        C1145 +
                    ((C133 * C452 + C1954 * C522) * C112 +
                     (C133 * C500 + C1954 * C564) * C59) *
                        C2018) *
                       C2014) *
                  C60 * C56) /
                 (p * q * std::sqrt(p + q));
    d2eezx[6] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1255 * C65 + C1145 * C189 + C1256 * C451 + C2018 * C585) * C64 +
           (C1255 * C71 + C1145 * C192 + C1256 * C455 + C2018 * C587) * C56) *
              C647 +
          ((C1255 * C66 + C1145 * C190 + C1256 * C452 + C2018 * C586) * C64 +
           (C1255 * C72 + C1145 * C193 + C1256 * C456 + C2018 * C588) * C56) *
              C2014) *
         C1954 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eezy[6] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1255 * C65 + C1145 * C189 + C1256 * C451 + C2018 * C585) * C91 +
           (C1255 * C92 + C1145 * C209 + C1256 * C477 + C2018 * C607) * C60) *
              C647 +
          ((C1255 * C66 + C1145 * C190 + C1256 * C452 + C2018 * C586) * C91 +
           (C1255 * C93 + C1145 * C210 + C1256 * C478 + C2018 * C608) * C60) *
              C2014) *
         C1954 * C56 * C59) /
        (p * q * std::sqrt(p + q));
    d2eezz[6] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1255 * C65 + C1145 * C189 + C1256 * C451 + C2018 * C585) * C112 +
           (C1255 * C113 + C1145 * C226 + C1256 * C499 + C2018 * C627) * C59) *
              C647 +
          ((C1255 * C66 + C1145 * C190 + C1256 * C452 + C2018 * C586) * C112 +
           (C1255 * C114 + C1145 * C227 + C1256 * C500 + C2018 * C628) * C59) *
              C2014) *
         C1954 * C60 * C56) /
        (p * q * std::sqrt(p + q));
    d2eexx[7] += (2 * std::pow(Pi, 2.5) *
                  ((((C817 * C65 + C1910 * C68) * C64 +
                     (C817 * C71 + C1910 * C74) * C56) *
                        C249 +
                    ((C817 * C253 + C1910 * C255) * C64 +
                     (C817 * C257 + C1910 * C259) * C56) *
                        C2016) *
                       C1145 +
                   (((C817 * C451 + C1910 * C453) * C64 +
                     (C817 * C455 + C1910 * C457) * C56) *
                        C249 +
                    ((C817 * C967 + C1910 * C968) * C64 +
                     (C817 * C969 + C1910 * C970) * C56) *
                        C2016) *
                       C2018) *
                  C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eexy[7] += (2 * std::pow(Pi, 2.5) *
                  ((((C817 * C65 + C1910 * C68) * C91 +
                     (C817 * C92 + C1910 * C95) * C60) *
                        C249 +
                    ((C817 * C253 + C1910 * C255) * C91 +
                     (C817 * C279 + C1910 * C281) * C60) *
                        C2016) *
                       C1145 +
                   (((C817 * C451 + C1910 * C453) * C91 +
                     (C817 * C477 + C1910 * C479) * C60) *
                        C249 +
                    ((C817 * C967 + C1910 * C968) * C91 +
                     (C817 * C989 + C1910 * C990) * C60) *
                        C2016) *
                       C2018) *
                  C56 * C59) /
                 (p * q * std::sqrt(p + q));
    d2eexz[7] += (2 * std::pow(Pi, 2.5) *
                  ((((C817 * C65 + C1910 * C68) * C112 +
                     (C817 * C113 + C1910 * C116) * C59) *
                        C249 +
                    ((C817 * C253 + C1910 * C255) * C112 +
                     (C817 * C301 + C1910 * C303) * C59) *
                        C2016) *
                       C1145 +
                   (((C817 * C451 + C1910 * C453) * C112 +
                     (C817 * C499 + C1910 * C501) * C59) *
                        C249 +
                    ((C817 * C967 + C1910 * C968) * C112 +
                     (C817 * C1009 + C1910 * C1010) * C59) *
                        C2016) *
                       C2018) *
                  C60 * C56) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[7] +=
        (2 * std::pow(Pi, 2.5) *
         (((C323 * C65 + C249 * C134 + C324 * C253 + C2016 * C325) * C64 +
           (C323 * C71 + C249 * C137 + C324 * C257 + C2016 * C327) * C56) *
              C1145 +
          ((C323 * C451 + C249 * C521 + C324 * C967 + C2016 * C1029) * C64 +
           (C323 * C455 + C249 * C523 + C324 * C969 + C2016 * C1030) * C56) *
              C2018) *
         C1910 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eeyy[7] +=
        (2 * std::pow(Pi, 2.5) *
         (((C323 * C65 + C249 * C134 + C324 * C253 + C2016 * C325) * C91 +
           (C323 * C92 + C249 * C154 + C324 * C279 + C2016 * C347) * C60) *
              C1145 +
          ((C323 * C451 + C249 * C521 + C324 * C967 + C2016 * C1029) * C91 +
           (C323 * C477 + C249 * C543 + C324 * C989 + C2016 * C1049) * C60) *
              C2018) *
         C1910 * C56 * C59) /
        (p * q * std::sqrt(p + q));
    d2eeyz[7] +=
        (2 * std::pow(Pi, 2.5) *
         (((C323 * C65 + C249 * C134 + C324 * C253 + C2016 * C325) * C112 +
           (C323 * C113 + C249 * C171 + C324 * C301 + C2016 * C367) * C59) *
              C1145 +
          ((C323 * C451 + C249 * C521 + C324 * C967 + C2016 * C1029) * C112 +
           (C323 * C499 + C249 * C563 + C324 * C1009 + C2016 * C1068) * C59) *
              C2018) *
         C1910 * C60 * C56) /
        (p * q * std::sqrt(p + q));
    d2eezx[7] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1255 * C65 + C1145 * C189 + C1256 * C451 + C2018 * C585) * C64 +
           (C1255 * C71 + C1145 * C192 + C1256 * C455 + C2018 * C587) * C56) *
              C1910 * C249 +
          ((C1255 * C253 + C1145 * C387 + C1256 * C967 + C2018 * C1087) * C64 +
           (C1255 * C257 + C1145 * C389 + C1256 * C969 + C2018 * C1088) * C56) *
              C1910 * C2016) *
         C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eezy[7] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1255 * C65 + C1145 * C189 + C1256 * C451 + C2018 * C585) * C91 +
           (C1255 * C92 + C1145 * C209 + C1256 * C477 + C2018 * C607) * C60) *
              C1910 * C249 +
          ((C1255 * C253 + C1145 * C387 + C1256 * C967 + C2018 * C1087) * C91 +
           (C1255 * C279 + C1145 * C409 + C1256 * C989 + C2018 * C1107) * C60) *
              C1910 * C2016) *
         C56 * C59) /
        (p * q * std::sqrt(p + q));
    d2eezz[7] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1255 * C65 + C1145 * C189 + C1256 * C451 + C2018 * C585) * C112 +
           (C1255 * C113 + C1145 * C226 + C1256 * C499 + C2018 * C627) * C59) *
              C1910 * C249 +
          ((C1255 * C253 + C1145 * C387 + C1256 * C967 + C2018 * C1087) * C112 +
           (C1255 * C301 + C1145 * C429 + C1256 * C1009 + C2018 * C1126) *
               C59) *
              C1910 * C2016) *
         C60 * C56) /
        (p * q * std::sqrt(p + q));
    d2eexx[8] += (2 * std::pow(Pi, 2.5) *
                  (((C817 * C65 + C1910 * C68) * C64 +
                    (C817 * C71 + C1910 * C74) * C56) *
                       C1954 * C1469 +
                   ((C817 * C451 + C1910 * C453) * C64 +
                    (C817 * C455 + C1910 * C457) * C56) *
                       C1954 * C1470 +
                   ((C817 * C1472 + C1910 * C1473) * C64 +
                    (C817 * C1474 + C1910 * C1475) * C56) *
                       C1954 * C1471) *
                  C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eexy[8] += (2 * std::pow(Pi, 2.5) *
                  (((C817 * C65 + C1910 * C68) * C91 +
                    (C817 * C92 + C1910 * C95) * C60) *
                       C1954 * C1469 +
                   ((C817 * C451 + C1910 * C453) * C91 +
                    (C817 * C477 + C1910 * C479) * C60) *
                       C1954 * C1470 +
                   ((C817 * C1472 + C1910 * C1473) * C91 +
                    (C817 * C1490 + C1910 * C1491) * C60) *
                       C1954 * C1471) *
                  C56 * C59) /
                 (p * q * std::sqrt(p + q));
    d2eexz[8] += (2 * std::pow(Pi, 2.5) *
                  (((C817 * C65 + C1910 * C68) * C112 +
                    (C817 * C113 + C1910 * C116) * C59) *
                       C1954 * C1469 +
                   ((C817 * C451 + C1910 * C453) * C112 +
                    (C817 * C499 + C1910 * C501) * C59) *
                       C1954 * C1470 +
                   ((C817 * C1472 + C1910 * C1473) * C112 +
                    (C817 * C1506 + C1910 * C1507) * C59) *
                       C1954 * C1471) *
                  C60 * C56) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[8] += (2 * std::pow(Pi, 2.5) *
                  (((C133 * C65 + C1954 * C134) * C64 +
                    (C133 * C71 + C1954 * C137) * C56) *
                       C1469 +
                   ((C133 * C451 + C1954 * C521) * C64 +
                    (C133 * C455 + C1954 * C523) * C56) *
                       C1470 +
                   ((C133 * C1472 + C1954 * C1522) * C64 +
                    (C133 * C1474 + C1954 * C1523) * C56) *
                       C1471) *
                  C1910 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[8] += (2 * std::pow(Pi, 2.5) *
                  (((C133 * C65 + C1954 * C134) * C91 +
                    (C133 * C92 + C1954 * C154) * C60) *
                       C1469 +
                   ((C133 * C451 + C1954 * C521) * C91 +
                    (C133 * C477 + C1954 * C543) * C60) *
                       C1470 +
                   ((C133 * C1472 + C1954 * C1522) * C91 +
                    (C133 * C1490 + C1954 * C1538) * C60) *
                       C1471) *
                  C1910 * C56 * C59) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[8] += (2 * std::pow(Pi, 2.5) *
                  (((C133 * C65 + C1954 * C134) * C112 +
                    (C133 * C113 + C1954 * C171) * C59) *
                       C1469 +
                   ((C133 * C451 + C1954 * C521) * C112 +
                    (C133 * C499 + C1954 * C563) * C59) *
                       C1470 +
                   ((C133 * C1472 + C1954 * C1522) * C112 +
                    (C133 * C1506 + C1954 * C1553) * C59) *
                       C1471) *
                  C1910 * C60 * C56) /
                 (p * q * std::sqrt(p + q));
    d2eezx[8] += (2 * std::pow(Pi, 2.5) *
                  ((C1568 * C65 + C1469 * C189 + C1569 * C451 + C1470 * C585 +
                    C1570 * C1472 + C1471 * C1571) *
                       C64 +
                   (C1568 * C71 + C1469 * C192 + C1569 * C455 + C1470 * C587 +
                    C1570 * C1474 + C1471 * C1572) *
                       C56) *
                  C1910 * C1954 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eezy[8] += (2 * std::pow(Pi, 2.5) *
                  ((C1568 * C65 + C1469 * C189 + C1569 * C451 + C1470 * C585 +
                    C1570 * C1472 + C1471 * C1571) *
                       C91 +
                   (C1568 * C92 + C1469 * C209 + C1569 * C477 + C1470 * C607 +
                    C1570 * C1490 + C1471 * C1587) *
                       C60) *
                  C1910 * C1954 * C56 * C59) /
                 (p * q * std::sqrt(p + q));
    d2eezz[8] += (2 * std::pow(Pi, 2.5) *
                  ((C1568 * C65 + C1469 * C189 + C1569 * C451 + C1470 * C585 +
                    C1570 * C1472 + C1471 * C1571) *
                       C112 +
                   (C1568 * C113 + C1469 * C226 + C1569 * C499 + C1470 * C627 +
                    C1570 * C1506 + C1471 * C1602) *
                       C59) *
                  C1910 * C1954 * C60 * C56) /
                 (p * q * std::sqrt(p + q));
    
}
