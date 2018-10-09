/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void kinetic_gradient_11(double ae,
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
    const double C1850 = ae + be;
    const double C1855 = Pi / C1850;
    const double C1856 = std::sqrt(C1855);
    const double C1872 = ae * zAB;
    const double C1871 = ae * yAB;
    const double C1870 = be * zAB;
    const double C1869 = std::pow(C1850, 2);
    const double C1868 = ae * xAB;
    const double C1867 = 2. * C1850;
    const double C1866 = be * yAB;
    const double C1865 = be * xAB;
    const double C1864 = Pi / C1850;
    const double C1875 = C1856 * C1870;
    const double C1874 = C1856 / C1867;
    const double C1873 = std::sqrt(C1864);
    const double C1597 = std::sqrt(Pi / (ae + be));
    const double C1598 = -(C1873 * C1865) / C1850;
    const double C1601 = -(C1873 * C1866) / C1850;
    const double C1602 = C1874 - (C1868 * C1856 * C1865) / C1869;
    const double C1603 = -C1875 / C1850;
    const double C1689 = (C1856 * C1871) / C1850;
    const double C1718 = (C1856 * C1872) / C1850;
    const double C1747 = (C1856 * C1868) / C1850;
    const double C1774 = C1874 - (C1871 * C1856 * C1866) / C1869;
    const double C1819 = C1874 - (C1872 * C1875) / C1869;
    const double C1613 = ae * C1603;
    const double C1612 = ae * C1601;
    const double C1611 = be * zAB;
    const double C1610 = be * yAB;
    const double C1609 = std::pow(ae, 2);
    const double C1608 = ae * xAB;
    const double C1607 = be * xAB;
    const double C1606 = ae * C1598;
    const double C1605 = ae + be;
    const double C1604 = be * C1597;
    const double C1625 = 2 * C1613;
    const double C1624 = 2 * C1612;
    const double C1623 = C1607 / C1605;
    const double C1622 = std::pow(C1605, 2);
    const double C1621 = C1611 / C1605;
    const double C1620 = 2 * C1606;
    const double C1619 = Pi / C1605;
    const double C1618 = C1610 / C1605;
    const double C1617 = 4. * C1606;
    const double C1616 = C1606 * C1607;
    const double C1615 = 2. * C1605;
    const double C1614 = 2 * C1604;
    const double C1634 = std::pow(C1623, 2);
    const double C1633 = std::pow(C1621, 2);
    const double C1632 = be * C1620;
    const double C1631 = std::sqrt(C1619);
    const double C1630 = 1 / C1615;
    const double C1629 = std::pow(C1618, 2);
    const double C1628 = C1617 / C1615;
    const double C1627 = 2 * C1616;
    const double C1626 = -C1614;
    const double C1642 = C1631 / C1615;
    const double C1641 = C1634 + C1630;
    const double C1640 = C1631 * C1607;
    const double C1639 = C1633 + C1630;
    const double C1638 = 4 * C1632;
    const double C1637 = C1629 + C1630;
    const double C1636 = C1627 / C1605;
    const double C1635 = C1626 / C1615;
    const double C1649 = C1608 * C1640;
    const double C1648 = C1609 * C1641;
    const double C1647 = ae * C1640;
    const double C1646 = C1609 * C1639;
    const double C1645 = -C1638;
    const double C1644 = C1609 * C1637;
    const double C1643 = C1635 - C1636;
    const double C1657 = C1649 / C1622;
    const double C1656 = 2 * C1648;
    const double C1655 = -2 * C1647;
    const double C1654 = 2 * C1646;
    const double C1653 = C1645 / C1615;
    const double C1652 = ae * C1643;
    const double C1651 = 2 * C1644;
    const double C1650 = C1643 * C1608;
    const double C1664 = C1642 - C1657;
    const double C1663 = ae - C1656;
    const double C1662 = be * C1655;
    const double C1661 = ae - C1654;
    const double C1660 = C1652 * C1607;
    const double C1659 = ae - C1651;
    const double C1658 = C1650 / C1605;
    const double C1671 = be * C1664;
    const double C1670 = C1663 * C1631;
    const double C1669 = C1662 / C1622;
    const double C1668 = C1661 * C1631;
    const double C1667 = 2 * C1660;
    const double C1666 = C1659 * C1631;
    const double C1665 = C1658 + C1628;
    const double C1675 = C1671 * ae;
    const double C1674 = C1670 / C1615;
    const double C1673 = C1670 * C1607;
    const double C1672 = C1667 / C1605;
    const double C1678 = 2 * C1675;
    const double C1677 = C1673 / C1605;
    const double C1676 = C1653 - C1672;
    const double C1681 = C1678 / C1605;
    const double C1680 = C1669 - C1677;
    const double C1679 = ae * C1676;
    const double C1682 = C1680 * C1608;
    const double C1683 = C1682 / C1605;
    const double C1684 = C1683 + C1674;
    const double C1685 = C1684 + C1681;
    const double C1693 = C1612 * C1610;
    const double C1692 = be * C1873;
    const double C1691 = ae * C1873;
    const double C1690 = ae * yAB;
    const double C1699 = 2 * C1693;
    const double C1698 = 2 * C1692;
    const double C1697 = 2. * C1691;
    const double C1696 = C1612 * C1690;
    const double C1695 = C1631 * C1690;
    const double C1694 = C1666 * C1690;
    const double C1705 = C1699 / C1605;
    const double C1704 = -C1698;
    const double C1703 = C1697 / C1615;
    const double C1702 = 2 * C1696;
    const double C1701 = be * C1695;
    const double C1700 = C1694 / C1605;
    const double C1708 = C1704 / C1615;
    const double C1707 = C1702 / C1605;
    const double C1706 = 2 * C1701;
    const double C1711 = C1708 - C1705;
    const double C1710 = C1707 + C1703;
    const double C1709 = ae * C1706;
    const double C1713 = ae * C1711;
    const double C1712 = C1709 / C1622;
    const double C1714 = C1700 + C1712;
    const double C1722 = C1613 * C1611;
    const double C1721 = be * C1873;
    const double C1720 = ae * C1873;
    const double C1719 = ae * zAB;
    const double C1728 = 2 * C1722;
    const double C1727 = 2 * C1721;
    const double C1726 = 2. * C1720;
    const double C1725 = C1613 * C1719;
    const double C1724 = C1631 * C1719;
    const double C1723 = C1668 * C1719;
    const double C1734 = C1728 / C1605;
    const double C1733 = -C1727;
    const double C1732 = C1726 / C1615;
    const double C1731 = 2 * C1725;
    const double C1730 = be * C1724;
    const double C1729 = C1723 / C1605;
    const double C1737 = C1733 / C1615;
    const double C1736 = C1731 / C1605;
    const double C1735 = 2 * C1730;
    const double C1740 = C1737 - C1734;
    const double C1739 = C1736 + C1732;
    const double C1738 = ae * C1735;
    const double C1742 = ae * C1740;
    const double C1741 = C1738 / C1622;
    const double C1743 = C1729 + C1741;
    const double C1753 = C1631 * C1608;
    const double C1752 = C1670 * C1608;
    const double C1751 = C1666 * C1610;
    const double C1750 = C1631 * C1610;
    const double C1749 = ae * C1597;
    const double C1748 = C1606 * C1608;
    const double C1759 = be * C1753;
    const double C1758 = C1752 / C1605;
    const double C1757 = C1751 / C1605;
    const double C1756 = ae * C1750;
    const double C1755 = 2. * C1749;
    const double C1754 = 2 * C1748;
    const double C1763 = 2 * C1759;
    const double C1762 = -2 * C1756;
    const double C1761 = C1755 / C1615;
    const double C1760 = C1754 / C1605;
    const double C1766 = ae * C1763;
    const double C1765 = be * C1762;
    const double C1764 = C1760 + C1761;
    const double C1768 = C1766 / C1622;
    const double C1767 = C1765 / C1622;
    const double C1770 = C1758 + C1768;
    const double C1769 = C1767 - C1757;
    const double C1781 = C1713 * C1610;
    const double C1780 = be * C1624;
    const double C1779 = 4. * C1612;
    const double C1778 = C1711 * C1690;
    const double C1777 = C1690 * C1750;
    const double C1776 = C1666 / C1615;
    const double C1775 = C1769 * C1690;
    const double C1787 = 2 * C1781;
    const double C1786 = 4 * C1780;
    const double C1785 = C1779 / C1615;
    const double C1784 = C1778 / C1605;
    const double C1783 = C1777 / C1622;
    const double C1782 = C1775 / C1605;
    const double C1792 = C1787 / C1605;
    const double C1791 = -C1786;
    const double C1790 = C1784 + C1785;
    const double C1789 = C1642 - C1783;
    const double C1788 = C1782 + C1776;
    const double C1794 = C1791 / C1615;
    const double C1793 = be * C1789;
    const double C1796 = C1794 - C1792;
    const double C1795 = C1793 * ae;
    const double C1798 = ae * C1796;
    const double C1797 = 2 * C1795;
    const double C1799 = C1797 / C1605;
    const double C1800 = C1788 + C1799;
    const double C1807 = C1668 * C1611;
    const double C1806 = C1631 * C1611;
    const double C1809 = C1807 / C1605;
    const double C1808 = ae * C1806;
    const double C1810 = -2 * C1808;
    const double C1811 = be * C1810;
    const double C1812 = C1811 / C1622;
    const double C1813 = C1812 - C1809;
    const double C1826 = C1742 * C1611;
    const double C1825 = be * C1625;
    const double C1824 = 4. * C1613;
    const double C1823 = C1740 * C1719;
    const double C1822 = C1719 * C1806;
    const double C1821 = C1668 / C1615;
    const double C1820 = C1813 * C1719;
    const double C1832 = 2 * C1826;
    const double C1831 = 4 * C1825;
    const double C1830 = C1824 / C1615;
    const double C1829 = C1823 / C1605;
    const double C1828 = C1822 / C1622;
    const double C1827 = C1820 / C1605;
    const double C1837 = C1832 / C1605;
    const double C1836 = -C1831;
    const double C1835 = C1829 + C1830;
    const double C1834 = C1642 - C1828;
    const double C1833 = C1827 + C1821;
    const double C1839 = C1836 / C1615;
    const double C1838 = be * C1834;
    const double C1841 = C1839 - C1837;
    const double C1840 = C1838 * ae;
    const double C1843 = ae * C1841;
    const double C1842 = 2 * C1840;
    const double C1844 = C1842 / C1605;
    const double C1845 = C1833 + C1844;
    const double C1893 = C1843 * C1611;
    const double C1892 = -2 * C1679;
    const double C1891 = -2 * C1843;
    const double C1890 = C1798 * C1610;
    const double C1889 = C1679 * C1608;
    const double C1888 = 2 * C1742;
    const double C1887 = C1843 * C1719;
    const double C1886 = 2 * C1713;
    const double C1885 = C1798 * C1690;
    const double C1884 = C1708 - C1734;
    const double C1883 = -2 * C1798;
    const double C1882 = C1679 * C1607;
    const double C1881 = 2 * C1652;
    const double C1906 = be * C1888;
    const double C1905 = 2 * C1893;
    const double C1904 = be * C1886;
    const double C1903 = 2 * C1890;
    const double C1902 = ae * C1881;
    const double C1901 = 2 * C1889;
    const double C1900 = ae * C1888;
    const double C1899 = 2 * C1887;
    const double C1898 = ae * C1886;
    const double C1897 = 2 * C1885;
    const double C1896 = ae * C1884;
    const double C1895 = 2 * C1882;
    const double C1894 = be * C1881;
    const double C1919 = 6 * C1906;
    const double C1918 = C1905 / C1605;
    const double C1917 = 6 * C1904;
    const double C1916 = C1903 / C1605;
    const double C1915 = 6. * C1902;
    const double C1914 = C1901 / C1605;
    const double C1913 = 6. * C1900;
    const double C1912 = C1899 / C1605;
    const double C1911 = 6. * C1898;
    const double C1910 = C1897 / C1605;
    const double C1909 = C1896 * C1611;
    const double C1908 = C1895 / C1605;
    const double C1907 = 6 * C1894;
    const double C1926 = -C1919;
    const double C1925 = -C1917;
    const double C1924 = C1915 / C1615;
    const double C1923 = C1913 / C1615;
    const double C1922 = C1911 / C1615;
    const double C1921 = 2 * C1909;
    const double C1920 = -C1907;
    const double C1933 = C1926 / C1615;
    const double C1932 = C1925 / C1615;
    const double C1931 = C1914 + C1924;
    const double C1930 = C1912 + C1923;
    const double C1929 = C1910 + C1922;
    const double C1928 = C1921 / C1605;
    const double C1927 = C1920 / C1615;
    const double C1937 = C1918 - C1933;
    const double C1936 = C1916 - C1932;
    const double C1935 = C1908 - C1927;
    const double C1934 = C1839 - C1928;
    const double C1938 = ae * C1934;
    const double C1939 = -2 * C1938;
    const double gx100100 =
        C1665 * C1666 * C1873 -
        ((((C1927 - C1908) * C1608) / C1605 + (2 * C1679 + 6 * C1679) / C1615) *
         std::pow(C1873, 2)) /
            2.0 +
        C1665 * C1873 * C1668;
    const double gx100010 = (C1873 * C1689 * C1935) / 2.0 +
                            C1643 * C1714 * C1873 + C1643 * C1689 * C1668;
    const double gx100001 = (C1718 * C1873 * C1935) / 2.0 +
                            C1643 * C1666 * C1718 + C1643 * C1873 * C1743;
    const double gx010100 = C1764 * C1769 * C1873 -
                            (C1873 * C1601 * C1931) / 2.0 +
                            C1764 * C1601 * C1668;
    const double gx010010 = (C1873 * C1774 * C1892) / 2.0 +
                            2 * C1606 * C1800 * C1873 +
                            2 * C1606 * C1774 * C1668;
    const double gx010001 = (C1718 * C1601 * C1892) / 2.0 +
                            2 * C1606 * C1769 * C1718 +
                            2 * C1606 * C1601 * C1743;
    const double gx001100 = C1764 * C1666 * C1603 -
                            (C1603 * C1873 * C1931) / 2.0 +
                            C1764 * C1873 * C1813;
    const double gx001010 = (C1603 * C1689 * C1892) / 2.0 +
                            2 * C1606 * C1714 * C1603 +
                            2 * C1606 * C1689 * C1813;
    const double gx001001 = (C1819 * C1873 * C1892) / 2.0 +
                            2 * C1606 * C1666 * C1819 +
                            2 * C1606 * C1873 * C1845;
    gx[(Ai + 0) * matrix_size + Bi + 0] += cc * gx100100;
    gx[(Ai + 0) * matrix_size + Bi + 1] += cc * gx100010;
    gx[(Ai + 0) * matrix_size + Bi + 2] += cc * gx100001;
    gx[(Ai + 1) * matrix_size + Bi + 0] += cc * gx010100;
    gx[(Ai + 1) * matrix_size + Bi + 1] += cc * gx010010;
    gx[(Ai + 1) * matrix_size + Bi + 2] += cc * gx010001;
    gx[(Ai + 2) * matrix_size + Bi + 0] += cc * gx001100;
    gx[(Ai + 2) * matrix_size + Bi + 1] += cc * gx001010;
    gx[(Ai + 2) * matrix_size + Bi + 2] += cc * gx001001;
    const double gy100100 = C1685 * C1624 * C1873 +
                            (C1873 * C1602 * C1883) / 2.0 +
                            C1602 * C1624 * C1668;
    const double gy100010 = C1680 * C1710 * C1873 -
                            (C1873 * C1598 * C1929) / 2.0 +
                            C1598 * C1710 * C1668;
    const double gy100001 = C1680 * C1624 * C1718 +
                            (C1718 * C1598 * C1883) / 2.0 +
                            C1598 * C1624 * C1743;
    const double gy010100 = C1770 * C1711 * C1873 +
                            (C1873 * C1747 * C1936) / 2.0 +
                            C1747 * C1711 * C1668;
    const double gy010010 = C1670 * C1790 * C1873 -
                            (C1873 * C1597 *
                             (((C1932 - C1916) * C1690) / C1605 +
                              (2 * C1798 + 6 * C1798) / C1615)) /
                                2.0 +
                            C1597 * C1790 * C1668;
    const double gy010001 = C1670 * C1711 * C1718 +
                            (C1718 * C1597 * C1936) / 2.0 +
                            C1597 * C1711 * C1743;
    const double gy001100 = C1770 * C1624 * C1603 +
                            (C1603 * C1747 * C1883) / 2.0 +
                            C1747 * C1624 * C1813;
    const double gy001010 = C1670 * C1710 * C1603 -
                            (C1603 * C1597 * C1929) / 2.0 +
                            C1597 * C1710 * C1813;
    const double gy001001 = C1670 * C1624 * C1819 +
                            (C1819 * C1597 * C1883) / 2.0 +
                            C1597 * C1624 * C1845;
    gy[(Ai + 0) * matrix_size + Bi + 0] += cc * gy100100;
    gy[(Ai + 0) * matrix_size + Bi + 1] += cc * gy100010;
    gy[(Ai + 0) * matrix_size + Bi + 2] += cc * gy100001;
    gy[(Ai + 1) * matrix_size + Bi + 0] += cc * gy010100;
    gy[(Ai + 1) * matrix_size + Bi + 1] += cc * gy010010;
    gy[(Ai + 1) * matrix_size + Bi + 2] += cc * gy010001;
    gy[(Ai + 2) * matrix_size + Bi + 0] += cc * gy001100;
    gy[(Ai + 2) * matrix_size + Bi + 1] += cc * gy001010;
    gy[(Ai + 2) * matrix_size + Bi + 2] += cc * gy001001;
    const double gz100100 = C1685 * C1873 * C1625 + C1602 * C1666 * C1625 +
                            (C1602 * C1873 * C1939) / 2.0;
    const double gz100010 = C1680 * C1689 * C1625 + C1598 * C1714 * C1625 +
                            (C1598 * C1689 * C1939) / 2.0;
    const double gz100001 = C1680 * C1873 * C1739 + C1598 * C1666 * C1739 -
                            (C1598 * C1873 * C1930) / 2.0;
    const double gz010100 = C1770 * C1601 * C1625 + C1747 * C1769 * C1625 +
                            (C1747 * C1601 * C1891) / 2.0;
    const double gz010010 = C1670 * C1774 * C1625 + C1597 * C1800 * C1625 +
                            (C1597 * C1774 * C1891) / 2.0;
    const double gz010001 = C1670 * C1601 * C1739 + C1597 * C1769 * C1739 -
                            (C1597 * C1601 * C1930) / 2.0;
    const double gz001100 = C1770 * C1873 * C1740 + C1747 * C1666 * C1740 +
                            (C1747 * C1873 * C1937) / 2.0;
    const double gz001010 = C1670 * C1689 * C1740 + C1597 * C1714 * C1740 +
                            (C1597 * C1689 * C1937) / 2.0;
    const double gz001001 = C1670 * C1873 * C1835 + C1597 * C1666 * C1835 -
                            (C1597 * C1873 *
                             (((C1933 - C1918) * C1719) / C1605 +
                              (2 * C1843 + 6 * C1843) / C1615)) /
                                2.0;
    gz[(Ai + 0) * matrix_size + Bi + 0] += cc * gz100100;
    gz[(Ai + 0) * matrix_size + Bi + 1] += cc * gz100010;
    gz[(Ai + 0) * matrix_size + Bi + 2] += cc * gz100001;
    gz[(Ai + 1) * matrix_size + Bi + 0] += cc * gz010100;
    gz[(Ai + 1) * matrix_size + Bi + 1] += cc * gz010010;
    gz[(Ai + 1) * matrix_size + Bi + 2] += cc * gz010001;
    gz[(Ai + 2) * matrix_size + Bi + 0] += cc * gz001100;
    gz[(Ai + 2) * matrix_size + Bi + 1] += cc * gz001010;
    gz[(Ai + 2) * matrix_size + Bi + 2] += cc * gz001001;
}

// Automatically generated, do not edit
