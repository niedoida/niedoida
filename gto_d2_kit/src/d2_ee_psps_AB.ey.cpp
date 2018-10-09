/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_psps_AB.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
void second_derivative_ee_1010_12(const double ae,
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
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    const double C1779 = xA - xB;
    const double C1778 = ae + be;
    const double C1782 = ae * be;
    const double C1796 = yA - yB;
    const double C1799 = zA - zB;
    const double C1830 = p + q;
    const double C1829 = p * q;
    const double C1835 = xP - xQ;
    const double C1834 = bs[2];
    const double C1840 = bs[3];
    const double C1851 = yP - yQ;
    const double C1861 = zP - zQ;
    const double C69 = bs[0];
    const double C2055 = ce + de;
    const double C2054 = xC - xD;
    const double C2060 = yC - yD;
    const double C2067 = zC - zD;
    const double C2098 = ce * de;
    const double C2093 = std::pow(C1779, 2);
    const double C2094 = 2 * C1778;
    const double C1783 = C1782 * C1779;
    const double C1812 = C1782 * C1796;
    const double C2096 = std::pow(C1796, 2);
    const double C1824 = C1782 * C1799;
    const double C2095 = std::pow(C1799, 2);
    const double C1831 = 2 * C1829;
    const double C1843 = C1835 * ae;
    const double C1842 = C1835 * be;
    const double C1839 = std::pow(C1835, 2);
    const double C1854 = C1851 * be;
    const double C1853 = C1835 * C1851;
    const double C1873 = C1851 * ae;
    const double C1872 = C1851 * C1835;
    const double C1881 = std::pow(C1851, 2);
    const double C1864 = C1861 * be;
    const double C1863 = C1835 * C1861;
    const double C1885 = C1851 * C1861;
    const double C1892 = C1861 * ae;
    const double C1891 = C1861 * C1835;
    const double C1900 = C1861 * C1851;
    const double C1906 = std::pow(C1861, 2);
    const double C2101 = 2 * C2055;
    const double C2100 = std::pow(C2054, 2);
    const double C2099 = std::pow(C2060, 2);
    const double C2097 = std::pow(C2067, 2);
    const double C2102 = C2093 * C1782;
    const double C2103 = std::pow(C2094, -1);
    const double C2105 = C2096 * C1782;
    const double C2104 = C2095 * C1782;
    const double C1833 = C1831 / C1830;
    const double C78 =
        ((std::pow(xP - xQ, 2) * bs[2] * std::pow(C1831 / C1830, 2) -
          (bs[1] * C1831) / C1830) *
         C1782) /
        std::pow(C1778, 2);
    const double C70 = -(C1835 * bs[1] * C1831) / C1830;
    const double C314 = -(C1851 * bs[1] * C1831) / C1830;
    const double C510 = -(C1861 * bs[1] * C1831) / C1830;
    const double C1846 = C1840 * C1843;
    const double C73 = (-(bs[1] * C1843 * C1831) / C1830) / C1778;
    const double C1845 = C1840 * C1842;
    const double C72 = (-(bs[1] * C1842 * C1831) / C1830) / C1778;
    const double C1856 = C1840 * C1854;
    const double C100 = (-(bs[1] * C1854 * C1831) / C1830) / C1778;
    const double C1855 = C1853 * ae;
    const double C1875 = C1840 * C1873;
    const double C157 = (-(bs[1] * C1873 * C1831) / C1830) / C1778;
    const double C1874 = C1872 * ae;
    const double C1866 = C1840 * C1864;
    const double C129 = (-(bs[1] * C1864 * C1831) / C1830) / C1778;
    const double C1865 = C1863 * ae;
    const double C1886 = C1885 * ae;
    const double C1894 = C1840 * C1892;
    const double C233 = (-(bs[1] * C1892 * C1831) / C1830) / C1778;
    const double C1893 = C1891 * ae;
    const double C1901 = C1900 * ae;
    const double C2109 = std::pow(C2101, -1);
    const double C2108 = C2100 * C2098;
    const double C2107 = C2099 * C2098;
    const double C2106 = C2097 * C2098;
    const double C2110 = C2102 / C1778;
    const double C2112 = C2105 / C1778;
    const double C2111 = C2104 / C1778;
    const double C1836 = std::pow(C1833, 2);
    const double C1841 = -C1833;
    const double C1857 = C1855 * be;
    const double C1876 = C1874 * be;
    const double C1867 = C1865 * be;
    const double C1887 = C1886 * be;
    const double C1895 = C1893 * be;
    const double C1902 = C1901 * be;
    const double C2115 = C2108 / C2055;
    const double C2114 = C2107 / C2055;
    const double C2113 = C2106 / C2055;
    const double C2116 = -C2110;
    const double C2118 = -C2112;
    const double C2117 = -C2111;
    const double C1838 = C1834 * C1836;
    const double C79 =
        (ae * C1836 * C1834 * C1835 * be + be * C1836 * C1834 * C1835 * ae +
         C1835 *
             (C1834 * C1836 +
              std::pow(C1835, 2) * bs[3] * std::pow(-C1833, 3)) *
             C1782) /
        std::pow(C1778, 2);
    const double C103 =
        (C1836 * C1834 * C1835 * (yP - yQ) * ae * be) / std::pow(C1778, 2);
    const double C132 =
        (C1836 * C1834 * C1835 * (zP - zQ) * ae * be) / std::pow(C1778, 2);
    const double C160 =
        (C1836 * C1834 * C1851 * C1835 * ae * be) / std::pow(C1778, 2);
    const double C182 =
        ((std::pow(C1851, 2) * C1834 * C1836 - (bs[1] * C1831) / C1830) *
         C1782) /
        std::pow(C1778, 2);
    const double C210 =
        (C1836 * C1834 * C1851 * C1861 * ae * be) / std::pow(C1778, 2);
    const double C236 =
        (C1836 * C1834 * C1861 * C1835 * ae * be) / std::pow(C1778, 2);
    const double C257 =
        (C1836 * C1834 * C1861 * C1851 * ae * be) / std::pow(C1778, 2);
    const double C281 =
        ((std::pow(C1861, 2) * C1834 * C1836 - (bs[1] * C1831) / C1830) *
         C1782) /
        std::pow(C1778, 2);
    const double C74 = (C1835 * C1836 * C1834 * C1842) / C1778 -
                       (be * bs[1] * C1831) / (C1830 * C1778);
    const double C75 = (C1835 * C1836 * C1834 * C1843) / C1778 -
                       (ae * bs[1] * C1831) / (C1830 * C1778);
    const double C101 = (C1835 * C1836 * C1834 * C1854) / C1778;
    const double C130 = (C1835 * C1836 * C1834 * C1864) / C1778;
    const double C158 = (C1835 * C1836 * C1834 * C1873) / C1778;
    const double C234 = (C1835 * C1836 * C1834 * C1892) / C1778;
    const double C317 = (C1851 * C1836 * C1834 * C1842) / C1778;
    const double C318 = (C1851 * C1836 * C1834 * C1843) / C1778;
    const double C339 = (C1851 * C1836 * C1834 * C1854) / C1778 -
                        (be * bs[1] * C1831) / (C1830 * C1778);
    const double C361 = (C1851 * C1836 * C1834 * C1864) / C1778;
    const double C383 = (C1851 * C1836 * C1834 * C1873) / C1778 -
                        (ae * bs[1] * C1831) / (C1830 * C1778);
    const double C445 = (C1851 * C1836 * C1834 * C1892) / C1778;
    const double C513 = (C1861 * C1836 * C1834 * C1842) / C1778;
    const double C514 = (C1861 * C1836 * C1834 * C1843) / C1778;
    const double C535 = (C1861 * C1836 * C1834 * C1854) / C1778;
    const double C557 = (C1861 * C1836 * C1834 * C1864) / C1778 -
                        (be * bs[1] * C1831) / (C1830 * C1778);
    const double C579 = (C1861 * C1836 * C1834 * C1873) / C1778;
    const double C641 = (C1861 * C1836 * C1834 * C1892) / C1778 -
                        (ae * bs[1] * C1831) / (C1830 * C1778);
    const double C1844 = std::pow(C1841, 3);
    const double C2121 = -C2115;
    const double C2120 = -C2114;
    const double C2119 = -C2113;
    const double C2122 = std::exp(C2116);
    const double C2124 = std::exp(C2118);
    const double C2123 = std::exp(C2117);
    const double C71 = C1838 * C1839 - (bs[1] * C1831) / C1830;
    const double C313 = C1851 * C1835 * C1838;
    const double C509 = C1861 * C1835 * C1838;
    const double C874 = C1838 * C1881 - (bs[1] * C1831) / C1830;
    const double C1079 = C1861 * C1851 * C1838;
    const double C1587 = C1838 * C1906 - (bs[1] * C1831) / C1830;
    const double C1848 = C1844 * C1846;
    const double C1847 = C1844 * C1845;
    const double C1858 = C1844 * C1856;
    const double C1868 = C1844 * C1866;
    const double C1877 = C1844 * C1875;
    const double C1896 = C1844 * C1894;
    const double C104 = (ae * C1836 * C1834 * C1851 * be +
                         C1835 * C1844 * C1840 * C1835 * C1851 * ae * be) /
                        std::pow(C1778, 2);
    const double C133 = (ae * C1836 * C1834 * C1861 * be +
                         C1835 * C1844 * C1840 * C1835 * C1861 * ae * be) /
                        std::pow(C1778, 2);
    const double C161 = (be * C1836 * C1834 * C1851 * ae +
                         C1835 * C1844 * C1840 * C1851 * C1835 * ae * be) /
                        std::pow(C1778, 2);
    const double C183 =
        (C1835 * (C1838 + std::pow(C1851, 2) * C1840 * C1844) * C1782) /
        std::pow(C1778, 2);
    const double C184 =
        ((C1838 + C1881 * C1840 * C1844) * C1782 +
         (C1840 * C1844 + C1881 * bs[4] * std::pow(C1833, 4)) * C1782 * C1839) /
        std::pow(C1778, 2);
    const double C211 =
        (C1835 * C1844 * C1840 * C1851 * C1861 * ae * be) / std::pow(C1778, 2);
    const double C212 =
        (C1844 * C1840 * C1887 + std::pow(C1833, 4) * bs[4] * C1887 * C1839) /
        std::pow(C1778, 2);
    const double C237 = (be * C1836 * C1834 * C1861 * ae +
                         C1835 * C1844 * C1840 * C1861 * C1835 * ae * be) /
                        std::pow(C1778, 2);
    const double C258 =
        (C1835 * C1844 * C1840 * C1861 * C1851 * ae * be) / std::pow(C1778, 2);
    const double C259 =
        (C1844 * C1840 * C1902 + std::pow(C1833, 4) * bs[4] * C1902 * C1839) /
        std::pow(C1778, 2);
    const double C282 =
        (C1835 * (C1838 + std::pow(C1861, 2) * C1840 * C1844) * C1782) /
        std::pow(C1778, 2);
    const double C283 =
        ((C1838 + C1906 * C1840 * C1844) * C1782 +
         (C1840 * C1844 + C1906 * bs[4] * std::pow(C1833, 4)) * C1782 * C1839) /
        std::pow(C1778, 2);
    const double C320 =
        (C1851 * (C1838 + C1839 * C1840 * C1844) * C1782) / std::pow(C1778, 2);
    const double C341 =
        (be * C1836 * C1834 * C1843 + C1851 * C1844 * C1840 * C1857) /
        std::pow(C1778, 2);
    const double C363 = (C1851 * C1844 * C1840 * C1867) / std::pow(C1778, 2);
    const double C385 =
        (ae * C1836 * C1834 * C1842 + C1851 * C1844 * C1840 * C1876) /
        std::pow(C1778, 2);
    const double C406 =
        (ae * C1836 * C1834 * C1854 + be * C1836 * C1834 * C1873 +
         C1851 * (C1838 + C1881 * C1840 * C1844) * C1782) /
        std::pow(C1778, 2);
    const double C425 =
        (ae * C1836 * C1834 * C1864 + C1851 * C1844 * C1840 * C1887) /
        std::pow(C1778, 2);
    const double C447 = (C1851 * C1844 * C1840 * C1895) / std::pow(C1778, 2);
    const double C467 =
        (be * C1836 * C1834 * C1892 + C1851 * C1844 * C1840 * C1902) /
        std::pow(C1778, 2);
    const double C487 =
        (C1851 * C1835 * (C1840 * C1844 + C1906 * bs[4] * std::pow(C1833, 4)) *
         C1782) /
        std::pow(C1778, 2);
    const double C488 =
        (C1851 * (C1838 + C1906 * C1840 * C1844) * C1782) / std::pow(C1778, 2);
    const double C516 =
        (C1861 * (C1838 + C1839 * C1840 * C1844) * C1782) / std::pow(C1778, 2);
    const double C537 = (C1861 * C1844 * C1840 * C1857) / std::pow(C1778, 2);
    const double C559 =
        (be * C1836 * C1834 * C1843 + C1861 * C1844 * C1840 * C1867) /
        std::pow(C1778, 2);
    const double C581 = (C1861 * C1844 * C1840 * C1876) / std::pow(C1778, 2);
    const double C601 =
        (C1861 * C1835 * (C1840 * C1844 + C1881 * bs[4] * std::pow(C1833, 4)) *
         C1782) /
        std::pow(C1778, 2);
    const double C602 =
        (C1861 * (C1838 + C1881 * C1840 * C1844) * C1782) / std::pow(C1778, 2);
    const double C621 =
        (be * C1836 * C1834 * C1873 + C1861 * C1844 * C1840 * C1887) /
        std::pow(C1778, 2);
    const double C643 =
        (ae * C1836 * C1834 * C1842 + C1861 * C1844 * C1840 * C1895) /
        std::pow(C1778, 2);
    const double C663 =
        (ae * C1836 * C1834 * C1854 + C1861 * C1844 * C1840 * C1902) /
        std::pow(C1778, 2);
    const double C684 =
        (ae * C1836 * C1834 * C1864 + be * C1836 * C1834 * C1892 +
         C1861 * (C1838 + C1906 * C1840 * C1844) * C1782) /
        std::pow(C1778, 2);
    const double C877 =
        ((C1838 + C1839 * C1840 * C1844) * C1782 +
         (C1840 * C1844 + C1839 * bs[4] * std::pow(C1833, 4)) * C1782 * C1881) /
        std::pow(C1778, 2);
    const double C925 =
        (C1844 * C1840 * C1867 + std::pow(C1833, 4) * bs[4] * C1867 * C1881) /
        std::pow(C1778, 2);
    const double C1013 =
        (C1844 * C1840 * C1895 + std::pow(C1833, 4) * bs[4] * C1895 * C1881) /
        std::pow(C1778, 2);
    const double C1053 =
        ((C1838 + C1906 * C1840 * C1844) * C1782 +
         (C1840 * C1844 + C1906 * bs[4] * std::pow(C1833, 4)) * C1782 * C1881) /
        std::pow(C1778, 2);
    const double C1082 =
        (C1861 * C1851 * (C1840 * C1844 + C1839 * bs[4] * std::pow(C1833, 4)) *
         C1782) /
        std::pow(C1778, 2);
    const double C1590 =
        ((C1838 + C1839 * C1840 * C1844) * C1782 +
         (C1840 * C1844 + C1839 * bs[4] * std::pow(C1833, 4)) * C1782 * C1906) /
        std::pow(C1778, 2);
    const double C1617 =
        (C1844 * C1840 * C1857 + std::pow(C1833, 4) * bs[4] * C1857 * C1906) /
        std::pow(C1778, 2);
    const double C1661 =
        (C1844 * C1840 * C1876 + std::pow(C1833, 4) * bs[4] * C1876 * C1906) /
        std::pow(C1778, 2);
    const double C1684 =
        ((C1838 + C1881 * C1840 * C1844) * C1782 +
         (C1840 * C1844 + C1881 * bs[4] * std::pow(C1833, 4)) * C1782 * C1906) /
        std::pow(C1778, 2);
    const double C2127 = std::exp(C2121);
    const double C2126 = std::exp(C2120);
    const double C2125 = std::exp(C2119);
    const double C951 = C2122 * C317;
    const double C1663 = C2122 * C513;
    const double C1784 = C1783 * C2122;
    const double C65 =
        (-(0 * be) / C1778) / (2 * C1778) -
        ((C2122 - (C1779 * 2 * ae * be * C1779 * C2122) / C1778) * be) / C1778;
    const double C57 = -(C2122 * C1779 * be) / C1778;
    const double C58 = C2103 * C2122;
    const double C107 = C2124 * C101;
    const double C1619 = C2124 * C535;
    const double C1813 = C1812 * C2124;
    const double C99 = -(2 * C1782 * (yA - yB) * C2124) / C1778;
    const double C181 =
        -((C2124 - (C1796 * 2 * C1782 * C1796 * C2124) / C1778) * 2 * C1782) /
        C1778;
    const double C726 =
        (-(0 * be) / C1778) / (2 * C1778) -
        ((C2124 - (C1796 * 2 * C1782 * C1796 * C2124) / C1778) * be) / C1778;
    const double C727 =
        (-(2 * C1782 * C1796 * C2124) / C1778) / (2 * C1778) - (0 * be) / C1778;
    const double C704 = -(C2124 * C1796 * be) / C1778;
    const double C705 = C2103 * C2124;
    const double C136 = C2123 * C130;
    const double C927 = C2123 * C361;
    const double C1825 = C1824 * C2123;
    const double C128 = -(2 * C1782 * (zA - zB) * C2123) / C1778;
    const double C280 =
        -((C2123 - (C1799 * 2 * C1782 * C1799 * C2123) / C1778) * 2 * C1782) /
        C1778;
    const double C1295 =
        (-(0 * be) / C1778) / (2 * C1778) -
        ((C2123 - (C1799 * 2 * C1782 * C1799 * C2123) / C1778) * be) / C1778;
    const double C1296 =
        (-(2 * C1782 * C1799 * C2123) / C1778) / (2 * C1778) - (0 * be) / C1778;
    const double C1257 = -(C2123 * C1799 * be) / C1778;
    const double C1258 = C2103 * C2123;
    const double C905 =
        (C1844 * C1840 * C1857 + be * C1851 * C1848 +
         C1851 * (be * C1848 + C1851 * std::pow(C1833, 4) * bs[4] * C1857)) /
        std::pow(C1778, 2);
    const double C1102 =
        (C1861 * (be * C1848 + C1851 * std::pow(C1833, 4) * bs[4] * C1857)) /
        std::pow(C1778, 2);
    const double C1122 = (be * C1851 * C1848 +
                          C1861 * C1851 * std::pow(C1833, 4) * bs[4] * C1867) /
                         std::pow(C1778, 2);
    const double C1641 =
        (C1844 * C1840 * C1867 + be * C1861 * C1848 +
         C1861 * (be * C1848 + C1861 * std::pow(C1833, 4) * bs[4] * C1867)) /
        std::pow(C1778, 2);
    const double C77 =
        (C1836 * C1834 * C1843 + C1835 * (C1835 * C1848 + C1838 * ae) +
         C1835 * C1838 * ae) /
        C1778;
    const double C316 = (C1851 * (C1835 * C1848 + C1838 * ae)) / C1778;
    const double C512 = (C1861 * (C1835 * C1848 + C1838 * ae)) / C1778;
    const double C876 = (C1836 * C1834 * C1843 + C1848 * C1881) / C1778;
    const double C1081 = (C1861 * C1851 * C1848) / C1778;
    const double C1589 = (C1836 * C1834 * C1843 + C1848 * C1906) / C1778;
    const double C80 =
        ((C1838 + C1839 * C1840 * C1844) * C1782 +
         ae * (C1835 * C1847 + C1838 * be) + be * (C1835 * C1848 + C1838 * ae) +
         C1835 * (ae * C1847 + be * C1848 +
                  C1835 * (C1840 * C1844 + C1839 * bs[4] * std::pow(C1833, 4)) *
                      C1782)) /
        std::pow(C1778, 2);
    const double C319 =
        (ae * C1851 * C1847 + be * C1851 * C1848 +
         C1835 * C1851 * (C1840 * C1844 + C1839 * bs[4] * std::pow(C1833, 4)) *
             C1782) /
        std::pow(C1778, 2);
    const double C515 =
        (ae * C1861 * C1847 + be * C1861 * C1848 +
         C1835 * C1861 * (C1840 * C1844 + C1839 * bs[4] * std::pow(C1833, 4)) *
             C1782) /
        std::pow(C1778, 2);
    const double C949 =
        (C1844 * C1840 * C1876 + ae * C1851 * C1847 +
         C1851 * (ae * C1847 + C1851 * std::pow(C1833, 4) * bs[4] * C1876)) /
        std::pow(C1778, 2);
    const double C1142 = (ae * C1861 * C1847 +
                          C1851 * C1861 * std::pow(C1833, 4) * bs[4] * C1876) /
                         std::pow(C1778, 2);
    const double C1200 = (ae * C1851 * C1847 +
                          C1861 * C1851 * std::pow(C1833, 4) * bs[4] * C1895) /
                         std::pow(C1778, 2);
    const double C1731 =
        (C1844 * C1840 * C1895 + ae * C1861 * C1847 +
         C1861 * (ae * C1847 + C1861 * std::pow(C1833, 4) * bs[4] * C1895)) /
        std::pow(C1778, 2);
    const double C76 =
        (C1836 * C1834 * C1842 + C1835 * (C1835 * C1847 + C1838 * be) +
         C1835 * C1838 * be) /
        C1778;
    const double C315 = (C1851 * (C1835 * C1847 + C1838 * be)) / C1778;
    const double C511 = (C1861 * (C1835 * C1847 + C1838 * be)) / C1778;
    const double C875 = (C1836 * C1834 * C1842 + C1847 * C1881) / C1778;
    const double C1080 = (C1861 * C1851 * C1847) / C1778;
    const double C1588 = (C1836 * C1834 * C1842 + C1847 * C1906) / C1778;
    const double C105 =
        (C1844 * C1840 * C1857 + ae * C1835 * C1858 +
         C1835 * (ae * C1858 + C1835 * std::pow(C1833, 4) * bs[4] * C1857)) /
        std::pow(C1778, 2);
    const double C342 =
        (be * (C1835 * C1848 + C1838 * ae) +
         C1851 * (ae * C1858 + C1835 * std::pow(C1833, 4) * bs[4] * C1857)) /
        std::pow(C1778, 2);
    const double C538 =
        (C1861 * (ae * C1858 + C1835 * std::pow(C1833, 4) * bs[4] * C1857)) /
        std::pow(C1778, 2);
    const double C664 = (ae * C1835 * C1858 +
                         C1861 * C1835 * std::pow(C1833, 4) * bs[4] * C1902) /
                        std::pow(C1778, 2);
    const double C1752 =
        (C1844 * C1840 * C1902 + ae * C1861 * C1858 +
         C1861 * (ae * C1858 + C1861 * std::pow(C1833, 4) * bs[4] * C1902)) /
        std::pow(C1778, 2);
    const double C102 = (C1836 * C1834 * C1854 + C1858 * C1839) / C1778;
    const double C340 = (C1851 * C1835 * C1858 + C1835 * C1838 * be) / C1778;
    const double C536 = (C1861 * C1835 * C1858) / C1778;
    const double C904 =
        (C1836 * C1834 * C1854 + C1851 * (C1851 * C1858 + C1838 * be) +
         C1851 * C1838 * be) /
        C1778;
    const double C1101 = (C1861 * (C1851 * C1858 + C1838 * be)) / C1778;
    const double C1616 = (C1836 * C1834 * C1854 + C1858 * C1906) / C1778;
    const double C134 =
        (C1844 * C1840 * C1867 + ae * C1835 * C1868 +
         C1835 * (ae * C1868 + C1835 * std::pow(C1833, 4) * bs[4] * C1867)) /
        std::pow(C1778, 2);
    const double C364 =
        (C1851 * (ae * C1868 + C1835 * std::pow(C1833, 4) * bs[4] * C1867)) /
        std::pow(C1778, 2);
    const double C426 = (ae * C1835 * C1868 +
                         C1851 * C1835 * std::pow(C1833, 4) * bs[4] * C1887) /
                        std::pow(C1778, 2);
    const double C560 =
        (be * (C1835 * C1848 + C1838 * ae) +
         C1861 * (ae * C1868 + C1835 * std::pow(C1833, 4) * bs[4] * C1867)) /
        std::pow(C1778, 2);
    const double C991 =
        (C1844 * C1840 * C1887 + ae * C1851 * C1868 +
         C1851 * (ae * C1868 + C1851 * std::pow(C1833, 4) * bs[4] * C1887)) /
        std::pow(C1778, 2);
    const double C131 = (C1836 * C1834 * C1864 + C1868 * C1839) / C1778;
    const double C362 = (C1851 * C1835 * C1868) / C1778;
    const double C558 = (C1861 * C1835 * C1868 + C1835 * C1838 * be) / C1778;
    const double C924 = (C1836 * C1834 * C1864 + C1868 * C1881) / C1778;
    const double C1121 = (C1861 * C1851 * C1868 + C1851 * C1838 * be) / C1778;
    const double C1640 =
        (C1836 * C1834 * C1864 + C1861 * (C1861 * C1868 + C1838 * be) +
         C1861 * C1838 * be) /
        C1778;
    const double C162 =
        (C1844 * C1840 * C1876 + be * C1835 * C1877 +
         C1835 * (be * C1877 + C1835 * std::pow(C1833, 4) * bs[4] * C1876)) /
        std::pow(C1778, 2);
    const double C386 =
        (ae * (C1835 * C1847 + C1838 * be) +
         C1851 * (be * C1877 + C1835 * std::pow(C1833, 4) * bs[4] * C1876)) /
        std::pow(C1778, 2);
    const double C405 =
        (ae * C1835 * C1858 + be * C1835 * C1877 +
         C1851 * C1835 * (C1840 * C1844 + C1881 * bs[4] * std::pow(C1833, 4)) *
             C1782) /
        std::pow(C1778, 2);
    const double C582 =
        (C1861 * (be * C1877 + C1835 * std::pow(C1833, 4) * bs[4] * C1876)) /
        std::pow(C1778, 2);
    const double C622 = (be * C1835 * C1877 +
                         C1861 * C1835 * std::pow(C1833, 4) * bs[4] * C1887) /
                        std::pow(C1778, 2);
    const double C972 =
        ((C1838 + C1881 * C1840 * C1844) * C1782 +
         ae * (C1851 * C1858 + C1838 * be) + be * (C1851 * C1877 + C1838 * ae) +
         C1851 * (ae * C1858 + be * C1877 +
                  C1851 * (C1840 * C1844 + C1881 * bs[4] * std::pow(C1833, 4)) *
                      C1782)) /
        std::pow(C1778, 2);
    const double C1161 =
        (ae * C1861 * C1858 + be * C1861 * C1877 +
         C1851 * C1861 * (C1840 * C1844 + C1881 * bs[4] * std::pow(C1833, 4)) *
             C1782) /
        std::pow(C1778, 2);
    const double C1180 =
        (ae * (C1861 * C1868 + C1838 * be) +
         C1851 * (be * C1877 + C1861 * std::pow(C1833, 4) * bs[4] * C1887)) /
        std::pow(C1778, 2);
    const double C1711 =
        (C1844 * C1840 * C1887 + be * C1861 * C1877 +
         C1861 * (be * C1877 + C1861 * std::pow(C1833, 4) * bs[4] * C1887)) /
        std::pow(C1778, 2);
    const double C159 = (C1836 * C1834 * C1873 + C1877 * C1839) / C1778;
    const double C384 = (C1851 * C1835 * C1877 + C1835 * C1838 * ae) / C1778;
    const double C580 = (C1861 * C1835 * C1877) / C1778;
    const double C948 =
        (C1836 * C1834 * C1873 + C1851 * (C1851 * C1877 + C1838 * ae) +
         C1851 * C1838 * ae) /
        C1778;
    const double C1141 = (C1861 * (C1851 * C1877 + C1838 * ae)) / C1778;
    const double C1660 = (C1836 * C1834 * C1873 + C1877 * C1906) / C1778;
    const double C238 =
        (C1844 * C1840 * C1895 + be * C1835 * C1896 +
         C1835 * (be * C1896 + C1835 * std::pow(C1833, 4) * bs[4] * C1895)) /
        std::pow(C1778, 2);
    const double C448 =
        (C1851 * (be * C1896 + C1835 * std::pow(C1833, 4) * bs[4] * C1895)) /
        std::pow(C1778, 2);
    const double C468 = (be * C1835 * C1896 +
                         C1851 * C1835 * std::pow(C1833, 4) * bs[4] * C1902) /
                        std::pow(C1778, 2);
    const double C644 =
        (ae * (C1835 * C1847 + C1838 * be) +
         C1861 * (be * C1896 + C1835 * std::pow(C1833, 4) * bs[4] * C1895)) /
        std::pow(C1778, 2);
    const double C683 =
        (ae * C1835 * C1868 + be * C1835 * C1896 +
         C1861 * C1835 * (C1840 * C1844 + C1906 * bs[4] * std::pow(C1833, 4)) *
             C1782) /
        std::pow(C1778, 2);
    const double C1034 =
        (C1844 * C1840 * C1902 + be * C1851 * C1896 +
         C1851 * (be * C1896 + C1851 * std::pow(C1833, 4) * bs[4] * C1902)) /
        std::pow(C1778, 2);
    const double C1219 =
        (ae * (C1851 * C1858 + C1838 * be) +
         C1861 * (be * C1896 + C1851 * std::pow(C1833, 4) * bs[4] * C1902)) /
        std::pow(C1778, 2);
    const double C1238 =
        (ae * C1851 * C1868 + be * C1851 * C1896 +
         C1861 * C1851 * (C1840 * C1844 + C1906 * bs[4] * std::pow(C1833, 4)) *
             C1782) /
        std::pow(C1778, 2);
    const double C1773 =
        ((C1838 + C1906 * C1840 * C1844) * C1782 +
         ae * (C1861 * C1868 + C1838 * be) + be * (C1861 * C1896 + C1838 * ae) +
         C1861 * (ae * C1868 + be * C1896 +
                  C1861 * (C1840 * C1844 + C1906 * bs[4] * std::pow(C1833, 4)) *
                      C1782)) /
        std::pow(C1778, 2);
    const double C235 = (C1836 * C1834 * C1892 + C1896 * C1839) / C1778;
    const double C446 = (C1851 * C1835 * C1896) / C1778;
    const double C642 = (C1861 * C1835 * C1896 + C1835 * C1838 * ae) / C1778;
    const double C1012 = (C1836 * C1834 * C1892 + C1896 * C1881) / C1778;
    const double C1199 = (C1861 * C1851 * C1896 + C1851 * C1838 * ae) / C1778;
    const double C1730 =
        (C1836 * C1834 * C1892 + C1861 * (C1861 * C1896 + C1838 * ae) +
         C1861 * C1838 * ae) /
        C1778;
    const double C109 = C2124 * C104;
    const double C138 = C2123 * C133;
    const double C189 = C2124 * C183;
    const double C214 = C2123 * C211;
    const double C261 = C2124 * C258;
    const double C288 = C2123 * C282;
    const double C882 = C2122 * C320;
    const double C929 = C2123 * C363;
    const double C953 = C2122 * C385;
    const double C993 = C2123 * C425;
    const double C1015 = C2122 * C447;
    const double C1058 = C2123 * C488;
    const double C1595 = C2122 * C516;
    const double C1621 = C2124 * C537;
    const double C1665 = C2122 * C581;
    const double C1689 = C2124 * C602;
    const double C1733 = C2122 * C643;
    const double C1754 = C2124 * C663;
    const double C63 = -(C2127 * C2054 * de) / C2055;
    const double C64 = C2109 * C2127;
    const double C310 = -(C2126 * C2060 * de) / C2055;
    const double C311 = C2109 * C2126;
    const double C507 = -(C2125 * C2067 * de) / C2055;
    const double C508 = C2109 * C2125;
    const double C66 =
        -(((-4 * C1784) / C1778 -
           (C1779 * (C2122 - (C1779 * 2 * C1784) / C1778) * 2 * C1782) /
               C1778) *
          be) /
        C1778;
    const double C67 = (-(2 * C1784) / C1778) / (2 * C1778) - (0 * be) / C1778;
    const double C68 =
        (-((C2122 - (C1779 * 2 * C1784) / C1778) * 2 * C1782) / C1778) /
        (2 * C1778);
    const double C706 = -(2 * C1784) / C1778;
    const double C707 =
        -((C2122 - (C1779 * 2 * C1784) / C1778) * 2 * C1782) / C1778;
    const double C782 =
        -(((-4 * C1813) / C1778 -
           (C1796 * (C2124 - (C1796 * 2 * C1813) / C1778) * 2 * C1782) /
               C1778) *
          be) /
        C1778;
    const double C783 =
        (-((C2124 - (C1796 * 2 * C1813) / C1778) * 2 * C1782) / C1778) /
        (2 * C1778);
    const double C110 = C99 * C75;
    const double C108 = C99 * C70;
    const double C188 = C99 * C158;
    const double C186 = C99 * C101;
    const double C262 = C99 * C234;
    const double C1622 = C99 * C514;
    const double C1620 = C99 * C510;
    const double C1688 = C99 * C579;
    const double C1686 = C99 * C535;
    const double C1755 = C99 * C641;
    const double C187 = C181 * C70;
    const double C1687 = C181 * C510;
    const double C1405 =
        -(((-4 * C1825) / C1778 -
           (C1799 * (C2123 - (C1799 * 2 * C1825) / C1778) * 2 * C1782) /
               C1778) *
          be) /
        C1778;
    const double C1406 =
        (-((C2123 - (C1799 * 2 * C1825) / C1778) * 2 * C1782) / C1778) /
        (2 * C1778);
    const double C139 = C128 * C75;
    const double C137 = C128 * C70;
    const double C215 = C128 * C158;
    const double C287 = C128 * C234;
    const double C285 = C128 * C130;
    const double C930 = C128 * C318;
    const double C928 = C128 * C314;
    const double C994 = C128 * C383;
    const double C1057 = C128 * C445;
    const double C1055 = C128 * C361;
    const double C286 = C280 * C70;
    const double C1056 = C280 * C314;
    const double C881 = C706 * C318;
    const double C879 = C706 * C317;
    const double C954 = C706 * C383;
    const double C952 = C706 * C314;
    const double C1016 = C706 * C445;
    const double C1594 = C706 * C514;
    const double C1592 = C706 * C513;
    const double C1666 = C706 * C579;
    const double C1664 = C706 * C510;
    const double C1734 = C706 * C641;
    const double C880 = C707 * C314;
    const double C1593 = C707 * C510;
    const double C190 = C186 - C187;
    const double C1690 = C1686 - C1687;
    const double C289 = C285 - C286;
    const double C1059 = C1055 - C1056;
    const double C883 = C879 - C880;
    const double C1596 = C1592 - C1593;
    const double C191 = C190 - C188;
    const double C1691 = C1690 - C1688;
    const double C290 = C289 - C287;
    const double C1060 = C1059 - C1057;
    const double C884 = C883 - C881;
    const double C1597 = C1596 - C1594;
    const double C192 = C191 + C189;
    const double C1692 = C1691 + C1689;
    const double C291 = C290 + C288;
    const double C1061 = C1060 + C1058;
    const double C885 = C884 + C882;
    const double C1598 = C1597 + C1595;
    const double C1693 = C1692 * C2122;
    const double C292 = C291 * C2124;
    const double C886 = C885 * C2123;
    
    d2eexx[0] += (2 * std::pow(Pi, 2.5) *
                  ((C65 * C72 - C66 * C69 - C65 * C73 + C57 * C78 + C67 * C74 -
                    C68 * C70 - C67 * C75 + C58 * C79) *
                       C2123 * C2124 * C2125 * C2126 * C63 -
                   (C67 * C76 - C68 * C71 - C67 * C77 + C58 * C80 + C65 * C74 -
                    C66 * C70 - C65 * C75 + C57 * C79) *
                       C2123 * C2124 * C2125 * C2126 * C64)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[0] +=
        (2 * std::pow(Pi, 2.5) *
         (((C2124 * C100 - C99 * C69) * C65 + (C2124 * C103 - C99 * C73) * C57 +
           (C107 - C108) * C67 + (C109 - C110) * C58) *
              C2123 * C2125 * C2126 * C63 +
          ((C108 - C107) * C65 + (C110 - C109) * C57 +
           (C99 * C71 - C2124 * C102) * C67 +
           (C99 * C77 - C2124 * C105) * C58) *
              C2123 * C2125 * C2126 * C64)) /
        (p * q * std::sqrt(p + q));
    d2eexz[0] += (2 * std::pow(Pi, 2.5) *
                  (((C2123 * C129 - C128 * C69) * C65 +
                    (C2123 * C132 - C128 * C73) * C57 + (C136 - C137) * C67 +
                    (C138 - C139) * C58) *
                       C2124 * C2125 * C2126 * C63 +
                   ((C137 - C136) * C65 + (C139 - C138) * C57 +
                    (C128 * C71 - C2123 * C131) * C67 +
                    (C128 * C77 - C2123 * C134) * C58) *
                       C2124 * C2125 * C2126 * C64)) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[0] +=
        (2 * std::pow(Pi, 2.5) *
         (((C57 * C72 - C65 * C69 + C58 * C74 - C67 * C70) * C99 +
           (C57 * C160 - C65 * C157 + C58 * C161 - C67 * C158) * C2124) *
              C2123 * C2125 * C2126 * C63 +
          ((C65 * C70 - C57 * C74 + C67 * C71 - C58 * C76) * C99 +
           (C65 * C158 - C57 * C161 + C67 * C159 - C58 * C162) * C2124) *
              C2123 * C2125 * C2126 * C64)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[0] +=
        (2 * std::pow(Pi, 2.5) *
         (((C99 * C100 - C181 * C69 - C99 * C157 + C2124 * C182) * C57 +
           C192 * C58) *
              C2123 * C2125 * C2126 * C63 -
          ((C99 * C102 - C181 * C71 - C99 * C159 + C2124 * C184) * C58 +
           C192 * C57) *
              C2123 * C2125 * C2126 * C64)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[0] += (2 * std::pow(Pi, 2.5) *
                  ((((C2123 * C129 - C128 * C69) * C99 +
                     (C2123 * C210 - C128 * C157) * C2124) *
                        C57 +
                    ((C136 - C137) * C99 + (C214 - C215) * C2124) * C58) *
                       C2125 * C2126 * C63 +
                   (((C137 - C136) * C99 + (C215 - C214) * C2124) * C57 +
                    ((C128 * C71 - C2123 * C131) * C99 +
                     (C128 * C159 - C2123 * C212) * C2124) *
                        C58) *
                       C2125 * C2126 * C64)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[0] +=
        (2 * std::pow(Pi, 2.5) *
         (((C57 * C72 - C65 * C69 + C58 * C74 - C67 * C70) * C128 +
           (C57 * C236 - C65 * C233 + C58 * C237 - C67 * C234) * C2123) *
              C2124 * C2125 * C2126 * C63 +
          ((C65 * C70 - C57 * C74 + C67 * C71 - C58 * C76) * C128 +
           (C65 * C234 - C57 * C237 + C67 * C235 - C58 * C238) * C2123) *
              C2124 * C2125 * C2126 * C64)) /
        (p * q * std::sqrt(p + q));
    d2eezy[0] += (2 * std::pow(Pi, 2.5) *
                  ((((C2124 * C100 - C99 * C69) * C128 +
                     (C2124 * C257 - C99 * C233) * C2123) *
                        C57 +
                    ((C107 - C108) * C128 + (C261 - C262) * C2123) * C58) *
                       C2125 * C2126 * C63 +
                   (((C108 - C107) * C128 + (C262 - C261) * C2123) * C57 +
                    ((C99 * C71 - C2124 * C102) * C128 +
                     (C99 * C235 - C2124 * C259) * C2123) *
                        C58) *
                       C2125 * C2126 * C64)) /
                 (p * q * std::sqrt(p + q));
    d2eezz[0] += (2 * std::pow(Pi, 2.5) *
                  (((C128 * C129 - C280 * C69 - C128 * C233 + C2123 * C281) *
                        C2124 * C57 +
                    C292 * C58) *
                       C2125 * C2126 * C63 -
                   ((C128 * C131 - C280 * C71 - C128 * C235 + C2123 * C283) *
                        C2124 * C58 +
                    C292 * C57) *
                       C2125 * C2126 * C64)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[1] += (2 * std::pow(Pi, 2.5) *
                  ((C65 * C72 - C66 * C69 - C65 * C73 + C57 * C78 + C67 * C74 -
                    C68 * C70 - C67 * C75 + C58 * C79) *
                       C2123 * C2124 * C2125 * C310 -
                   (C67 * C315 - C68 * C313 - C67 * C316 + C58 * C319 +
                    C65 * C317 - C66 * C314 - C65 * C318 + C57 * C320) *
                       C2123 * C2124 * C2125 * C311) *
                  C2127) /
                 (p * q * std::sqrt(p + q));
    d2eexy[1] +=
        (2 * std::pow(Pi, 2.5) *
         (((C2124 * C100 - C99 * C69) * C65 + (C2124 * C103 - C99 * C73) * C57 +
           (C107 - C108) * C67 + (C109 - C110) * C58) *
              C2123 * C2125 * C310 +
          ((C99 * C314 - C2124 * C339) * C65 +
           (C99 * C318 - C2124 * C341) * C57 +
           (C99 * C313 - C2124 * C340) * C67 +
           (C99 * C316 - C2124 * C342) * C58) *
              C2123 * C2125 * C311) *
         C2127) /
        (p * q * std::sqrt(p + q));
    d2eexz[1] += (2 * std::pow(Pi, 2.5) *
                  (((C2123 * C129 - C128 * C69) * C65 +
                    (C2123 * C132 - C128 * C73) * C57 + (C136 - C137) * C67 +
                    (C138 - C139) * C58) *
                       C2124 * C2125 * C310 +
                   ((C128 * C314 - C2123 * C361) * C65 +
                    (C128 * C318 - C2123 * C363) * C57 +
                    (C128 * C313 - C2123 * C362) * C67 +
                    (C128 * C316 - C2123 * C364) * C58) *
                       C2124 * C2125 * C311) *
                  C2127) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[1] +=
        (2 * std::pow(Pi, 2.5) *
         (((C57 * C72 - C65 * C69 + C58 * C74 - C67 * C70) * C99 +
           (C57 * C160 - C65 * C157 + C58 * C161 - C67 * C158) * C2124) *
              C2123 * C2125 * C310 +
          ((C65 * C314 - C57 * C317 + C67 * C313 - C58 * C315) * C99 +
           (C65 * C383 - C57 * C385 + C67 * C384 - C58 * C386) * C2124) *
              C2123 * C2125 * C311) *
         C2127) /
        (p * q * std::sqrt(p + q));
    d2eeyy[1] +=
        (2 * std::pow(Pi, 2.5) *
         (((C99 * C100 - C181 * C69 - C99 * C157 + C2124 * C182) * C57 +
           C192 * C58) *
              C2123 * C2125 * C310 -
          ((C99 * C340 - C181 * C313 - C99 * C384 + C2124 * C405) * C58 +
           (C99 * C339 - C181 * C314 - C99 * C383 + C2124 * C406) * C57) *
              C2123 * C2125 * C311) *
         C2127) /
        (p * q * std::sqrt(p + q));
    d2eeyz[1] += (2 * std::pow(Pi, 2.5) *
                  ((((C2123 * C129 - C128 * C69) * C99 +
                     (C2123 * C210 - C128 * C157) * C2124) *
                        C57 +
                    ((C136 - C137) * C99 + (C214 - C215) * C2124) * C58) *
                       C2125 * C310 +
                   (((C128 * C314 - C2123 * C361) * C99 +
                     (C128 * C383 - C2123 * C425) * C2124) *
                        C57 +
                    ((C128 * C313 - C2123 * C362) * C99 +
                     (C128 * C384 - C2123 * C426) * C2124) *
                        C58) *
                       C2125 * C311) *
                  C2127) /
                 (p * q * std::sqrt(p + q));
    d2eezx[1] +=
        (2 * std::pow(Pi, 2.5) *
         (((C57 * C72 - C65 * C69 + C58 * C74 - C67 * C70) * C128 +
           (C57 * C236 - C65 * C233 + C58 * C237 - C67 * C234) * C2123) *
              C2124 * C2125 * C310 +
          ((C65 * C314 - C57 * C317 + C67 * C313 - C58 * C315) * C128 +
           (C65 * C445 - C57 * C447 + C67 * C446 - C58 * C448) * C2123) *
              C2124 * C2125 * C311) *
         C2127) /
        (p * q * std::sqrt(p + q));
    d2eezy[1] += (2 * std::pow(Pi, 2.5) *
                  ((((C2124 * C100 - C99 * C69) * C128 +
                     (C2124 * C257 - C99 * C233) * C2123) *
                        C57 +
                    ((C107 - C108) * C128 + (C261 - C262) * C2123) * C58) *
                       C2125 * C310 +
                   (((C99 * C314 - C2124 * C339) * C128 +
                     (C99 * C445 - C2124 * C467) * C2123) *
                        C57 +
                    ((C99 * C313 - C2124 * C340) * C128 +
                     (C99 * C446 - C2124 * C468) * C2123) *
                        C58) *
                       C2125 * C311) *
                  C2127) /
                 (p * q * std::sqrt(p + q));
    d2eezz[1] += (2 * std::pow(Pi, 2.5) *
                  (((C128 * C129 - C280 * C69 - C128 * C233 + C2123 * C281) *
                        C2124 * C57 +
                    C292 * C58) *
                       C2125 * C310 -
                   ((C128 * C362 - C280 * C313 - C128 * C446 + C2123 * C487) *
                        C2124 * C58 +
                    (C128 * C361 - C280 * C314 - C128 * C445 + C2123 * C488) *
                        C2124 * C57) *
                       C2125 * C311) *
                  C2127) /
                 (p * q * std::sqrt(p + q));
    d2eexx[2] += (2 * std::pow(Pi, 2.5) *
                  ((C65 * C72 - C66 * C69 - C65 * C73 + C57 * C78 + C67 * C74 -
                    C68 * C70 - C67 * C75 + C58 * C79) *
                       C2123 * C2124 * C507 -
                   (C67 * C511 - C68 * C509 - C67 * C512 + C58 * C515 +
                    C65 * C513 - C66 * C510 - C65 * C514 + C57 * C516) *
                       C2123 * C2124 * C508) *
                  C2126 * C2127) /
                 (p * q * std::sqrt(p + q));
    d2eexy[2] +=
        (2 * std::pow(Pi, 2.5) *
         (((C2124 * C100 - C99 * C69) * C65 + (C2124 * C103 - C99 * C73) * C57 +
           (C107 - C108) * C67 + (C109 - C110) * C58) *
              C2123 * C507 +
          ((C99 * C510 - C2124 * C535) * C65 +
           (C99 * C514 - C2124 * C537) * C57 +
           (C99 * C509 - C2124 * C536) * C67 +
           (C99 * C512 - C2124 * C538) * C58) *
              C2123 * C508) *
         C2126 * C2127) /
        (p * q * std::sqrt(p + q));
    d2eexz[2] += (2 * std::pow(Pi, 2.5) *
                  (((C2123 * C129 - C128 * C69) * C65 +
                    (C2123 * C132 - C128 * C73) * C57 + (C136 - C137) * C67 +
                    (C138 - C139) * C58) *
                       C2124 * C507 +
                   ((C128 * C510 - C2123 * C557) * C65 +
                    (C128 * C514 - C2123 * C559) * C57 +
                    (C128 * C509 - C2123 * C558) * C67 +
                    (C128 * C512 - C2123 * C560) * C58) *
                       C2124 * C508) *
                  C2126 * C2127) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[2] +=
        (2 * std::pow(Pi, 2.5) *
         (((C57 * C72 - C65 * C69 + C58 * C74 - C67 * C70) * C99 +
           (C57 * C160 - C65 * C157 + C58 * C161 - C67 * C158) * C2124) *
              C2123 * C507 +
          ((C65 * C510 - C57 * C513 + C67 * C509 - C58 * C511) * C99 +
           (C65 * C579 - C57 * C581 + C67 * C580 - C58 * C582) * C2124) *
              C2123 * C508) *
         C2126 * C2127) /
        (p * q * std::sqrt(p + q));
    d2eeyy[2] +=
        (2 * std::pow(Pi, 2.5) *
         (((C99 * C100 - C181 * C69 - C99 * C157 + C2124 * C182) * C57 +
           C192 * C58) *
              C2123 * C507 -
          ((C99 * C536 - C181 * C509 - C99 * C580 + C2124 * C601) * C58 +
           (C99 * C535 - C181 * C510 - C99 * C579 + C2124 * C602) * C57) *
              C2123 * C508) *
         C2126 * C2127) /
        (p * q * std::sqrt(p + q));
    d2eeyz[2] += (2 * std::pow(Pi, 2.5) *
                  ((((C2123 * C129 - C128 * C69) * C99 +
                     (C2123 * C210 - C128 * C157) * C2124) *
                        C57 +
                    ((C136 - C137) * C99 + (C214 - C215) * C2124) * C58) *
                       C507 +
                   (((C128 * C510 - C2123 * C557) * C99 +
                     (C128 * C579 - C2123 * C621) * C2124) *
                        C57 +
                    ((C128 * C509 - C2123 * C558) * C99 +
                     (C128 * C580 - C2123 * C622) * C2124) *
                        C58) *
                       C508) *
                  C2126 * C2127) /
                 (p * q * std::sqrt(p + q));
    d2eezx[2] +=
        (2 * std::pow(Pi, 2.5) *
         (((C57 * C72 - C65 * C69 + C58 * C74 - C67 * C70) * C128 +
           (C57 * C236 - C65 * C233 + C58 * C237 - C67 * C234) * C2123) *
              C2124 * C507 +
          ((C65 * C510 - C57 * C513 + C67 * C509 - C58 * C511) * C128 +
           (C65 * C641 - C57 * C643 + C67 * C642 - C58 * C644) * C2123) *
              C2124 * C508) *
         C2126 * C2127) /
        (p * q * std::sqrt(p + q));
    d2eezy[2] += (2 * std::pow(Pi, 2.5) *
                  ((((C2124 * C100 - C99 * C69) * C128 +
                     (C2124 * C257 - C99 * C233) * C2123) *
                        C57 +
                    ((C107 - C108) * C128 + (C261 - C262) * C2123) * C58) *
                       C507 +
                   (((C99 * C510 - C2124 * C535) * C128 +
                     (C99 * C641 - C2124 * C663) * C2123) *
                        C57 +
                    ((C99 * C509 - C2124 * C536) * C128 +
                     (C99 * C642 - C2124 * C664) * C2123) *
                        C58) *
                       C508) *
                  C2126 * C2127) /
                 (p * q * std::sqrt(p + q));
    d2eezz[2] += (2 * std::pow(Pi, 2.5) *
                  (((C128 * C129 - C280 * C69 - C128 * C233 + C2123 * C281) *
                        C2124 * C57 +
                    C292 * C58) *
                       C507 -
                   ((C128 * C558 - C280 * C509 - C128 * C642 + C2123 * C683) *
                        C2124 * C58 +
                    (C128 * C557 - C280 * C510 - C128 * C641 + C2123 * C684) *
                        C2124 * C57) *
                       C508) *
                  C2126 * C2127) /
                 (p * q * std::sqrt(p + q));
    d2eexx[3] +=
        (2 * std::pow(Pi, 2.5) *
         (((C706 * C72 - C707 * C69 - C706 * C73 + C2122 * C78) * C2123 * C704 +
           (C706 * C317 - C707 * C314 - C706 * C318 + C2122 * C320) * C2123 *
               C705) *
              C2125 * C2126 * C63 -
          ((C706 * C315 - C707 * C313 - C706 * C316 + C2122 * C319) * C2123 *
               C705 +
           (C706 * C74 - C707 * C70 - C706 * C75 + C2122 * C79) * C2123 *
               C704) *
              C2125 * C2126 * C64)) /
        (p * q * std::sqrt(p + q));
    d2eexy[3] +=
        (2 * std::pow(Pi, 2.5) *
         (((C704 * C100 - C726 * C69 + C705 * C339 - C727 * C314) * C706 +
           (C704 * C103 - C726 * C73 + C705 * C341 - C727 * C318) * C2122) *
              C2123 * C2125 * C2126 * C63 +
          ((C726 * C70 - C704 * C101 + C727 * C313 - C705 * C340) * C706 +
           (C726 * C75 - C704 * C104 + C727 * C316 - C705 * C342) * C2122) *
              C2123 * C2125 * C2126 * C64)) /
        (p * q * std::sqrt(p + q));
    d2eexz[3] += (2 * std::pow(Pi, 2.5) *
                  ((((C2123 * C129 - C128 * C69) * C706 +
                     (C2123 * C132 - C128 * C73) * C2122) *
                        C704 +
                    ((C2123 * C361 - C128 * C314) * C706 +
                     (C2123 * C363 - C128 * C318) * C2122) *
                        C705) *
                       C2125 * C2126 * C63 +
                   (((C137 - C136) * C706 + (C139 - C138) * C2122) * C704 +
                    ((C128 * C313 - C2123 * C362) * C706 +
                     (C128 * C316 - C2123 * C364) * C2122) *
                        C705) *
                       C2125 * C2126 * C64)) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[3] += (2 * std::pow(Pi, 2.5) *
                  (((C2122 * C72 - C706 * C69) * C726 +
                    (C2122 * C160 - C706 * C157) * C704 +
                    (C2122 * C317 - C706 * C314) * C727 +
                    (C2122 * C385 - C706 * C383) * C705) *
                       C2123 * C2125 * C2126 * C63 +
                   ((C706 * C70 - C2122 * C74) * C726 +
                    (C706 * C158 - C2122 * C161) * C704 +
                    (C706 * C313 - C2122 * C315) * C727 +
                    (C706 * C384 - C2122 * C386) * C705) *
                       C2123 * C2125 * C2126 * C64)) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[3] += (2 * std::pow(Pi, 2.5) *
                  ((C726 * C100 - C782 * C69 - C726 * C157 + C704 * C182 +
                    C727 * C339 - C783 * C314 - C727 * C383 + C705 * C406) *
                       C2122 * C2123 * C2125 * C2126 * C63 -
                   (C727 * C340 - C783 * C313 - C727 * C384 + C705 * C405 +
                    C726 * C101 - C782 * C70 - C726 * C158 + C704 * C183) *
                       C2122 * C2123 * C2125 * C2126 * C64)) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[3] += (2 * std::pow(Pi, 2.5) *
                  (((C2123 * C129 - C128 * C69) * C726 +
                    (C2123 * C210 - C128 * C157) * C704 +
                    (C2123 * C361 - C128 * C314) * C727 +
                    (C2123 * C425 - C128 * C383) * C705) *
                       C2122 * C2125 * C2126 * C63 +
                   ((C137 - C136) * C726 + (C215 - C214) * C704 +
                    (C128 * C313 - C2123 * C362) * C727 +
                    (C128 * C384 - C2123 * C426) * C705) *
                       C2122 * C2125 * C2126 * C64)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[3] += (2 * std::pow(Pi, 2.5) *
                  ((((C2122 * C72 - C706 * C69) * C128 +
                     (C2122 * C236 - C706 * C233) * C2123) *
                        C704 +
                    ((C2122 * C317 - C706 * C314) * C128 +
                     (C2122 * C447 - C706 * C445) * C2123) *
                        C705) *
                       C2125 * C2126 * C63 +
                   (((C706 * C70 - C2122 * C74) * C128 +
                     (C706 * C234 - C2122 * C237) * C2123) *
                        C704 +
                    ((C706 * C313 - C2122 * C315) * C128 +
                     (C706 * C446 - C2122 * C448) * C2123) *
                        C705) *
                       C2125 * C2126 * C64)) /
                 (p * q * std::sqrt(p + q));
    d2eezy[3] +=
        (2 * std::pow(Pi, 2.5) *
         (((C704 * C100 - C726 * C69 + C705 * C339 - C727 * C314) * C128 +
           (C704 * C257 - C726 * C233 + C705 * C467 - C727 * C445) * C2123) *
              C2122 * C2125 * C2126 * C63 +
          ((C726 * C70 - C704 * C101 + C727 * C313 - C705 * C340) * C128 +
           (C726 * C234 - C704 * C258 + C727 * C446 - C705 * C468) * C2123) *
              C2122 * C2125 * C2126 * C64)) /
        (p * q * std::sqrt(p + q));
    d2eezz[3] +=
        (2 * std::pow(Pi, 2.5) *
         (((C128 * C129 - C280 * C69 - C128 * C233 + C2123 * C281) * C704 +
           (C128 * C361 - C280 * C314 - C128 * C445 + C2123 * C488) * C705) *
              C2122 * C2125 * C2126 * C63 -
          ((C128 * C362 - C280 * C313 - C128 * C446 + C2123 * C487) * C705 +
           C291 * C704) *
              C2122 * C2125 * C2126 * C64)) /
        (p * q * std::sqrt(p + q));
    d2eexx[4] +=
        (2 * std::pow(Pi, 2.5) *
         (((C706 * C72 - C707 * C69 - C706 * C73 + C2122 * C78) * C2123 * C704 +
           C886 * C705) *
              C2125 * C310 -
          ((C706 * C875 - C707 * C874 - C706 * C876 + C2122 * C877) * C2123 *
               C705 +
           C886 * C704) *
              C2125 * C311) *
         C2127) /
        (p * q * std::sqrt(p + q));
    d2eexy[4] +=
        (2 * std::pow(Pi, 2.5) *
         (((C704 * C100 - C726 * C69 + C705 * C339 - C727 * C314) * C706 +
           (C704 * C103 - C726 * C73 + C705 * C341 - C727 * C318) * C2122) *
              C2123 * C2125 * C310 +
          ((C726 * C314 - C704 * C339 + C727 * C874 - C705 * C904) * C706 +
           (C726 * C318 - C704 * C341 + C727 * C876 - C705 * C905) * C2122) *
              C2123 * C2125 * C311) *
         C2127) /
        (p * q * std::sqrt(p + q));
    d2eexz[4] += (2 * std::pow(Pi, 2.5) *
                  ((((C2123 * C129 - C128 * C69) * C706 +
                     (C2123 * C132 - C128 * C73) * C2122) *
                        C704 +
                    ((C927 - C928) * C706 + (C929 - C930) * C2122) * C705) *
                       C2125 * C310 +
                   (((C928 - C927) * C706 + (C930 - C929) * C2122) * C704 +
                    ((C128 * C874 - C2123 * C924) * C706 +
                     (C128 * C876 - C2123 * C925) * C2122) *
                        C705) *
                       C2125 * C311) *
                  C2127) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[4] += (2 * std::pow(Pi, 2.5) *
                  (((C2122 * C72 - C706 * C69) * C726 +
                    (C2122 * C160 - C706 * C157) * C704 + (C951 - C952) * C727 +
                    (C953 - C954) * C705) *
                       C2123 * C2125 * C310 +
                   ((C952 - C951) * C726 + (C954 - C953) * C704 +
                    (C706 * C874 - C2122 * C875) * C727 +
                    (C706 * C948 - C2122 * C949) * C705) *
                       C2123 * C2125 * C311) *
                  C2127) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[4] += (2 * std::pow(Pi, 2.5) *
                  ((C726 * C100 - C782 * C69 - C726 * C157 + C704 * C182 +
                    C727 * C339 - C783 * C314 - C727 * C383 + C705 * C406) *
                       C2122 * C2123 * C2125 * C310 -
                   (C727 * C904 - C783 * C874 - C727 * C948 + C705 * C972 +
                    C726 * C339 - C782 * C314 - C726 * C383 + C704 * C406) *
                       C2122 * C2123 * C2125 * C311) *
                  C2127) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[4] += (2 * std::pow(Pi, 2.5) *
                  (((C2123 * C129 - C128 * C69) * C726 +
                    (C2123 * C210 - C128 * C157) * C704 + (C927 - C928) * C727 +
                    (C993 - C994) * C705) *
                       C2122 * C2125 * C310 +
                   ((C928 - C927) * C726 + (C994 - C993) * C704 +
                    (C128 * C874 - C2123 * C924) * C727 +
                    (C128 * C948 - C2123 * C991) * C705) *
                       C2122 * C2125 * C311) *
                  C2127) /
                 (p * q * std::sqrt(p + q));
    d2eezx[4] += (2 * std::pow(Pi, 2.5) *
                  ((((C2122 * C72 - C706 * C69) * C128 +
                     (C2122 * C236 - C706 * C233) * C2123) *
                        C704 +
                    ((C951 - C952) * C128 + (C1015 - C1016) * C2123) * C705) *
                       C2125 * C310 +
                   (((C952 - C951) * C128 + (C1016 - C1015) * C2123) * C704 +
                    ((C706 * C874 - C2122 * C875) * C128 +
                     (C706 * C1012 - C2122 * C1013) * C2123) *
                        C705) *
                       C2125 * C311) *
                  C2127) /
                 (p * q * std::sqrt(p + q));
    d2eezy[4] +=
        (2 * std::pow(Pi, 2.5) *
         (((C704 * C100 - C726 * C69 + C705 * C339 - C727 * C314) * C128 +
           (C704 * C257 - C726 * C233 + C705 * C467 - C727 * C445) * C2123) *
              C2122 * C2125 * C310 +
          ((C726 * C314 - C704 * C339 + C727 * C874 - C705 * C904) * C128 +
           (C726 * C445 - C704 * C467 + C727 * C1012 - C705 * C1034) * C2123) *
              C2122 * C2125 * C311) *
         C2127) /
        (p * q * std::sqrt(p + q));
    d2eezz[4] +=
        (2 * std::pow(Pi, 2.5) *
         (((C128 * C129 - C280 * C69 - C128 * C233 + C2123 * C281) * C704 +
           C1061 * C705) *
              C2122 * C2125 * C310 -
          ((C128 * C924 - C280 * C874 - C128 * C1012 + C2123 * C1053) * C705 +
           C1061 * C704) *
              C2122 * C2125 * C311) *
         C2127) /
        (p * q * std::sqrt(p + q));
    d2eexx[5] +=
        (2 * std::pow(Pi, 2.5) *
         (((C706 * C72 - C707 * C69 - C706 * C73 + C2122 * C78) * C2123 * C704 +
           C886 * C705) *
              C507 -
          ((C706 * C1080 - C707 * C1079 - C706 * C1081 + C2122 * C1082) *
               C2123 * C705 +
           (C706 * C513 - C707 * C510 - C706 * C514 + C2122 * C516) * C2123 *
               C704) *
              C508) *
         C2126 * C2127) /
        (p * q * std::sqrt(p + q));
    d2eexy[5] +=
        (2 * std::pow(Pi, 2.5) *
         (((C704 * C100 - C726 * C69 + C705 * C339 - C727 * C314) * C706 +
           (C704 * C103 - C726 * C73 + C705 * C341 - C727 * C318) * C2122) *
              C2123 * C507 +
          ((C726 * C510 - C704 * C535 + C727 * C1079 - C705 * C1101) * C706 +
           (C726 * C514 - C704 * C537 + C727 * C1081 - C705 * C1102) * C2122) *
              C2123 * C508) *
         C2126 * C2127) /
        (p * q * std::sqrt(p + q));
    d2eexz[5] += (2 * std::pow(Pi, 2.5) *
                  ((((C2123 * C129 - C128 * C69) * C706 +
                     (C2123 * C132 - C128 * C73) * C2122) *
                        C704 +
                    ((C927 - C928) * C706 + (C929 - C930) * C2122) * C705) *
                       C507 +
                   (((C128 * C510 - C2123 * C557) * C706 +
                     (C128 * C514 - C2123 * C559) * C2122) *
                        C704 +
                    ((C128 * C1079 - C2123 * C1121) * C706 +
                     (C128 * C1081 - C2123 * C1122) * C2122) *
                        C705) *
                       C508) *
                  C2126 * C2127) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[5] += (2 * std::pow(Pi, 2.5) *
                  (((C2122 * C72 - C706 * C69) * C726 +
                    (C2122 * C160 - C706 * C157) * C704 + (C951 - C952) * C727 +
                    (C953 - C954) * C705) *
                       C2123 * C507 +
                   ((C706 * C510 - C2122 * C513) * C726 +
                    (C706 * C579 - C2122 * C581) * C704 +
                    (C706 * C1079 - C2122 * C1080) * C727 +
                    (C706 * C1141 - C2122 * C1142) * C705) *
                       C2123 * C508) *
                  C2126 * C2127) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[5] += (2 * std::pow(Pi, 2.5) *
                  ((C726 * C100 - C782 * C69 - C726 * C157 + C704 * C182 +
                    C727 * C339 - C783 * C314 - C727 * C383 + C705 * C406) *
                       C2122 * C2123 * C507 -
                   (C727 * C1101 - C783 * C1079 - C727 * C1141 + C705 * C1161 +
                    C726 * C535 - C782 * C510 - C726 * C579 + C704 * C602) *
                       C2122 * C2123 * C508) *
                  C2126 * C2127) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[5] += (2 * std::pow(Pi, 2.5) *
                  (((C2123 * C129 - C128 * C69) * C726 +
                    (C2123 * C210 - C128 * C157) * C704 + (C927 - C928) * C727 +
                    (C993 - C994) * C705) *
                       C2122 * C507 +
                   ((C128 * C510 - C2123 * C557) * C726 +
                    (C128 * C579 - C2123 * C621) * C704 +
                    (C128 * C1079 - C2123 * C1121) * C727 +
                    (C128 * C1141 - C2123 * C1180) * C705) *
                       C2122 * C508) *
                  C2126 * C2127) /
                 (p * q * std::sqrt(p + q));
    d2eezx[5] += (2 * std::pow(Pi, 2.5) *
                  ((((C2122 * C72 - C706 * C69) * C128 +
                     (C2122 * C236 - C706 * C233) * C2123) *
                        C704 +
                    ((C951 - C952) * C128 + (C1015 - C1016) * C2123) * C705) *
                       C507 +
                   (((C706 * C510 - C2122 * C513) * C128 +
                     (C706 * C641 - C2122 * C643) * C2123) *
                        C704 +
                    ((C706 * C1079 - C2122 * C1080) * C128 +
                     (C706 * C1199 - C2122 * C1200) * C2123) *
                        C705) *
                       C508) *
                  C2126 * C2127) /
                 (p * q * std::sqrt(p + q));
    d2eezy[5] +=
        (2 * std::pow(Pi, 2.5) *
         (((C704 * C100 - C726 * C69 + C705 * C339 - C727 * C314) * C128 +
           (C704 * C257 - C726 * C233 + C705 * C467 - C727 * C445) * C2123) *
              C2122 * C507 +
          ((C726 * C510 - C704 * C535 + C727 * C1079 - C705 * C1101) * C128 +
           (C726 * C641 - C704 * C663 + C727 * C1199 - C705 * C1219) * C2123) *
              C2122 * C508) *
         C2126 * C2127) /
        (p * q * std::sqrt(p + q));
    d2eezz[5] +=
        (2 * std::pow(Pi, 2.5) *
         (((C128 * C129 - C280 * C69 - C128 * C233 + C2123 * C281) * C704 +
           C1061 * C705) *
              C2122 * C507 -
          ((C128 * C1121 - C280 * C1079 - C128 * C1199 + C2123 * C1238) * C705 +
           (C128 * C557 - C280 * C510 - C128 * C641 + C2123 * C684) * C704) *
              C2122 * C508) *
         C2126 * C2127) /
        (p * q * std::sqrt(p + q));
    d2eexx[6] +=
        (2 * std::pow(Pi, 2.5) *
         (((C706 * C72 - C707 * C69 - C706 * C73 + C2122 * C78) * C1257 +
           (C706 * C513 - C707 * C510 - C706 * C514 + C2122 * C516) * C1258) *
              C2124 * C2125 * C2126 * C63 -
          ((C706 * C511 - C707 * C509 - C706 * C512 + C2122 * C515) * C1258 +
           (C706 * C74 - C707 * C70 - C706 * C75 + C2122 * C79) * C1257) *
              C2124 * C2125 * C2126 * C64)) /
        (p * q * std::sqrt(p + q));
    d2eexy[6] += (2 * std::pow(Pi, 2.5) *
                  ((((C2124 * C100 - C99 * C69) * C706 +
                     (C2124 * C103 - C99 * C73) * C2122) *
                        C1257 +
                    ((C2124 * C535 - C99 * C510) * C706 +
                     (C2124 * C537 - C99 * C514) * C2122) *
                        C1258) *
                       C2125 * C2126 * C63 +
                   (((C108 - C107) * C706 + (C110 - C109) * C2122) * C1257 +
                    ((C99 * C509 - C2124 * C536) * C706 +
                     (C99 * C512 - C2124 * C538) * C2122) *
                        C1258) *
                       C2125 * C2126 * C64)) /
                 (p * q * std::sqrt(p + q));
    d2eexz[6] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1257 * C129 - C1295 * C69 + C1258 * C557 - C1296 * C510) * C706 +
           (C1257 * C132 - C1295 * C73 + C1258 * C559 - C1296 * C514) * C2122) *
              C2124 * C2125 * C2126 * C63 +
          ((C1295 * C70 - C1257 * C130 + C1296 * C509 - C1258 * C558) * C706 +
           (C1295 * C75 - C1257 * C133 + C1296 * C512 - C1258 * C560) * C2122) *
              C2124 * C2125 * C2126 * C64)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[6] += (2 * std::pow(Pi, 2.5) *
                  ((((C2122 * C72 - C706 * C69) * C99 +
                     (C2122 * C160 - C706 * C157) * C2124) *
                        C1257 +
                    ((C2122 * C513 - C706 * C510) * C99 +
                     (C2122 * C581 - C706 * C579) * C2124) *
                        C1258) *
                       C2125 * C2126 * C63 +
                   (((C706 * C70 - C2122 * C74) * C99 +
                     (C706 * C158 - C2122 * C161) * C2124) *
                        C1257 +
                    ((C706 * C509 - C2122 * C511) * C99 +
                     (C706 * C580 - C2122 * C582) * C2124) *
                        C1258) *
                       C2125 * C2126 * C64)) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[6] += (2 * std::pow(Pi, 2.5) *
                  (((C99 * C100 - C181 * C69 - C99 * C157 + C2124 * C182) *
                        C2122 * C1257 +
                    (C99 * C535 - C181 * C510 - C99 * C579 + C2124 * C602) *
                        C2122 * C1258) *
                       C2125 * C2126 * C63 -
                   ((C99 * C536 - C181 * C509 - C99 * C580 + C2124 * C601) *
                        C2122 * C1258 +
                    C192 * C2122 * C1257) *
                       C2125 * C2126 * C64)) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[6] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1257 * C129 - C1295 * C69 + C1258 * C557 - C1296 * C510) * C99 +
           (C1257 * C210 - C1295 * C157 + C1258 * C621 - C1296 * C579) *
               C2124) *
              C2122 * C2125 * C2126 * C63 +
          ((C1295 * C70 - C1257 * C130 + C1296 * C509 - C1258 * C558) * C99 +
           (C1295 * C158 - C1257 * C211 + C1296 * C580 - C1258 * C622) *
               C2124) *
              C2122 * C2125 * C2126 * C64)) /
        (p * q * std::sqrt(p + q));
    d2eezx[6] += (2 * std::pow(Pi, 2.5) *
                  (((C2122 * C72 - C706 * C69) * C1295 +
                    (C2122 * C236 - C706 * C233) * C1257 +
                    (C2122 * C513 - C706 * C510) * C1296 +
                    (C2122 * C643 - C706 * C641) * C1258) *
                       C2124 * C2125 * C2126 * C63 +
                   ((C706 * C70 - C2122 * C74) * C1295 +
                    (C706 * C234 - C2122 * C237) * C1257 +
                    (C706 * C509 - C2122 * C511) * C1296 +
                    (C706 * C642 - C2122 * C644) * C1258) *
                       C2124 * C2125 * C2126 * C64)) /
                 (p * q * std::sqrt(p + q));
    d2eezy[6] += (2 * std::pow(Pi, 2.5) *
                  (((C2124 * C100 - C99 * C69) * C1295 +
                    (C2124 * C257 - C99 * C233) * C1257 +
                    (C2124 * C535 - C99 * C510) * C1296 +
                    (C2124 * C663 - C99 * C641) * C1258) *
                       C2122 * C2125 * C2126 * C63 +
                   ((C108 - C107) * C1295 + (C262 - C261) * C1257 +
                    (C99 * C509 - C2124 * C536) * C1296 +
                    (C99 * C642 - C2124 * C664) * C1258) *
                       C2122 * C2125 * C2126 * C64)) /
                 (p * q * std::sqrt(p + q));
    d2eezz[6] += (2 * std::pow(Pi, 2.5) *
                  ((C1295 * C129 - C1405 * C69 - C1295 * C233 + C1257 * C281 +
                    C1296 * C557 - C1406 * C510 - C1296 * C641 + C1258 * C684) *
                       C2124 * C2122 * C2125 * C2126 * C63 -
                   (C1296 * C558 - C1406 * C509 - C1296 * C642 + C1258 * C683 +
                    C1295 * C130 - C1405 * C70 - C1295 * C234 + C1257 * C282) *
                       C2124 * C2122 * C2125 * C2126 * C64)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[7] +=
        (2 * std::pow(Pi, 2.5) *
         (((C706 * C72 - C707 * C69 - C706 * C73 + C2122 * C78) * C1257 +
           (C706 * C513 - C707 * C510 - C706 * C514 + C2122 * C516) * C1258) *
              C2124 * C2125 * C310 -
          ((C706 * C1080 - C707 * C1079 - C706 * C1081 + C2122 * C1082) *
               C1258 +
           C885 * C1257) *
              C2124 * C2125 * C311) *
         C2127) /
        (p * q * std::sqrt(p + q));
    d2eexy[7] += (2 * std::pow(Pi, 2.5) *
                  ((((C2124 * C100 - C99 * C69) * C706 +
                     (C2124 * C103 - C99 * C73) * C2122) *
                        C1257 +
                    ((C2124 * C535 - C99 * C510) * C706 +
                     (C2124 * C537 - C99 * C514) * C2122) *
                        C1258) *
                       C2125 * C310 +
                   (((C99 * C314 - C2124 * C339) * C706 +
                     (C99 * C318 - C2124 * C341) * C2122) *
                        C1257 +
                    ((C99 * C1079 - C2124 * C1101) * C706 +
                     (C99 * C1081 - C2124 * C1102) * C2122) *
                        C1258) *
                       C2125 * C311) *
                  C2127) /
                 (p * q * std::sqrt(p + q));
    d2eexz[7] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1257 * C129 - C1295 * C69 + C1258 * C557 - C1296 * C510) * C706 +
           (C1257 * C132 - C1295 * C73 + C1258 * C559 - C1296 * C514) * C2122) *
              C2124 * C2125 * C310 +
          ((C1295 * C314 - C1257 * C361 + C1296 * C1079 - C1258 * C1121) *
               C706 +
           (C1295 * C318 - C1257 * C363 + C1296 * C1081 - C1258 * C1122) *
               C2122) *
              C2124 * C2125 * C311) *
         C2127) /
        (p * q * std::sqrt(p + q));
    d2eeyx[7] += (2 * std::pow(Pi, 2.5) *
                  ((((C2122 * C72 - C706 * C69) * C99 +
                     (C2122 * C160 - C706 * C157) * C2124) *
                        C1257 +
                    ((C2122 * C513 - C706 * C510) * C99 +
                     (C2122 * C581 - C706 * C579) * C2124) *
                        C1258) *
                       C2125 * C310 +
                   (((C952 - C951) * C99 + (C954 - C953) * C2124) * C1257 +
                    ((C706 * C1079 - C2122 * C1080) * C99 +
                     (C706 * C1141 - C2122 * C1142) * C2124) *
                        C1258) *
                       C2125 * C311) *
                  C2127) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[7] += (2 * std::pow(Pi, 2.5) *
                  (((C99 * C100 - C181 * C69 - C99 * C157 + C2124 * C182) *
                        C2122 * C1257 +
                    (C99 * C535 - C181 * C510 - C99 * C579 + C2124 * C602) *
                        C2122 * C1258) *
                       C2125 * C310 -
                   ((C99 * C1101 - C181 * C1079 - C99 * C1141 + C2124 * C1161) *
                        C2122 * C1258 +
                    (C99 * C339 - C181 * C314 - C99 * C383 + C2124 * C406) *
                        C2122 * C1257) *
                       C2125 * C311) *
                  C2127) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[7] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1257 * C129 - C1295 * C69 + C1258 * C557 - C1296 * C510) * C99 +
           (C1257 * C210 - C1295 * C157 + C1258 * C621 - C1296 * C579) *
               C2124) *
              C2122 * C2125 * C310 +
          ((C1295 * C314 - C1257 * C361 + C1296 * C1079 - C1258 * C1121) * C99 +
           (C1295 * C383 - C1257 * C425 + C1296 * C1141 - C1258 * C1180) *
               C2124) *
              C2122 * C2125 * C311) *
         C2127) /
        (p * q * std::sqrt(p + q));
    d2eezx[7] += (2 * std::pow(Pi, 2.5) *
                  (((C2122 * C72 - C706 * C69) * C1295 +
                    (C2122 * C236 - C706 * C233) * C1257 +
                    (C2122 * C513 - C706 * C510) * C1296 +
                    (C2122 * C643 - C706 * C641) * C1258) *
                       C2124 * C2125 * C310 +
                   ((C952 - C951) * C1295 + (C1016 - C1015) * C1257 +
                    (C706 * C1079 - C2122 * C1080) * C1296 +
                    (C706 * C1199 - C2122 * C1200) * C1258) *
                       C2124 * C2125 * C311) *
                  C2127) /
                 (p * q * std::sqrt(p + q));
    d2eezy[7] += (2 * std::pow(Pi, 2.5) *
                  (((C2124 * C100 - C99 * C69) * C1295 +
                    (C2124 * C257 - C99 * C233) * C1257 +
                    (C2124 * C535 - C99 * C510) * C1296 +
                    (C2124 * C663 - C99 * C641) * C1258) *
                       C2122 * C2125 * C310 +
                   ((C99 * C314 - C2124 * C339) * C1295 +
                    (C99 * C445 - C2124 * C467) * C1257 +
                    (C99 * C1079 - C2124 * C1101) * C1296 +
                    (C99 * C1199 - C2124 * C1219) * C1258) *
                       C2122 * C2125 * C311) *
                  C2127) /
                 (p * q * std::sqrt(p + q));
    d2eezz[7] +=
        (2 * std::pow(Pi, 2.5) *
         ((C1295 * C129 - C1405 * C69 - C1295 * C233 + C1257 * C281 +
           C1296 * C557 - C1406 * C510 - C1296 * C641 + C1258 * C684) *
              C2124 * C2122 * C2125 * C310 -
          (C1296 * C1121 - C1406 * C1079 - C1296 * C1199 + C1258 * C1238 +
           C1295 * C361 - C1405 * C314 - C1295 * C445 + C1257 * C488) *
              C2124 * C2122 * C2125 * C311) *
         C2127) /
        (p * q * std::sqrt(p + q));
    d2eexx[8] +=
        (2 * std::pow(Pi, 2.5) *
         (((C706 * C72 - C707 * C69 - C706 * C73 + C2122 * C78) * C1257 +
           C1598 * C1258) *
              C2124 * C507 -
          ((C706 * C1588 - C707 * C1587 - C706 * C1589 + C2122 * C1590) *
               C1258 +
           C1598 * C1257) *
              C2124 * C508) *
         C2126 * C2127) /
        (p * q * std::sqrt(p + q));
    d2eexy[8] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C2124 * C100 - C99 * C69) * C706 +
            (C2124 * C103 - C99 * C73) * C2122) *
               C1257 +
           ((C1619 - C1620) * C706 + (C1621 - C1622) * C2122) * C1258) *
              C507 +
          (((C1620 - C1619) * C706 + (C1622 - C1621) * C2122) * C1257 +
           ((C99 * C1587 - C2124 * C1616) * C706 +
            (C99 * C1589 - C2124 * C1617) * C2122) *
               C1258) *
              C508) *
         C2126 * C2127) /
        (p * q * std::sqrt(p + q));
    d2eexz[8] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1257 * C129 - C1295 * C69 + C1258 * C557 - C1296 * C510) * C706 +
           (C1257 * C132 - C1295 * C73 + C1258 * C559 - C1296 * C514) * C2122) *
              C2124 * C507 +
          ((C1295 * C510 - C1257 * C557 + C1296 * C1587 - C1258 * C1640) *
               C706 +
           (C1295 * C514 - C1257 * C559 + C1296 * C1589 - C1258 * C1641) *
               C2122) *
              C2124 * C508) *
         C2126 * C2127) /
        (p * q * std::sqrt(p + q));
    d2eeyx[8] += (2 * std::pow(Pi, 2.5) *
                  ((((C2122 * C72 - C706 * C69) * C99 +
                     (C2122 * C160 - C706 * C157) * C2124) *
                        C1257 +
                    ((C1663 - C1664) * C99 + (C1665 - C1666) * C2124) * C1258) *
                       C507 +
                   (((C1664 - C1663) * C99 + (C1666 - C1665) * C2124) * C1257 +
                    ((C706 * C1587 - C2122 * C1588) * C99 +
                     (C706 * C1660 - C2122 * C1661) * C2124) *
                        C1258) *
                       C508) *
                  C2126 * C2127) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[8] += (2 * std::pow(Pi, 2.5) *
                  (((C99 * C100 - C181 * C69 - C99 * C157 + C2124 * C182) *
                        C2122 * C1257 +
                    C1693 * C1258) *
                       C507 -
                   ((C99 * C1616 - C181 * C1587 - C99 * C1660 + C2124 * C1684) *
                        C2122 * C1258 +
                    C1693 * C1257) *
                       C508) *
                  C2126 * C2127) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[8] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1257 * C129 - C1295 * C69 + C1258 * C557 - C1296 * C510) * C99 +
           (C1257 * C210 - C1295 * C157 + C1258 * C621 - C1296 * C579) *
               C2124) *
              C2122 * C507 +
          ((C1295 * C510 - C1257 * C557 + C1296 * C1587 - C1258 * C1640) * C99 +
           (C1295 * C579 - C1257 * C621 + C1296 * C1660 - C1258 * C1711) *
               C2124) *
              C2122 * C508) *
         C2126 * C2127) /
        (p * q * std::sqrt(p + q));
    d2eezx[8] += (2 * std::pow(Pi, 2.5) *
                  (((C2122 * C72 - C706 * C69) * C1295 +
                    (C2122 * C236 - C706 * C233) * C1257 +
                    (C1663 - C1664) * C1296 + (C1733 - C1734) * C1258) *
                       C2124 * C507 +
                   ((C1664 - C1663) * C1295 + (C1734 - C1733) * C1257 +
                    (C706 * C1587 - C2122 * C1588) * C1296 +
                    (C706 * C1730 - C2122 * C1731) * C1258) *
                       C2124 * C508) *
                  C2126 * C2127) /
                 (p * q * std::sqrt(p + q));
    d2eezy[8] += (2 * std::pow(Pi, 2.5) *
                  (((C2124 * C100 - C99 * C69) * C1295 +
                    (C2124 * C257 - C99 * C233) * C1257 +
                    (C1619 - C1620) * C1296 + (C1754 - C1755) * C1258) *
                       C2122 * C507 +
                   ((C1620 - C1619) * C1295 + (C1755 - C1754) * C1257 +
                    (C99 * C1587 - C2124 * C1616) * C1296 +
                    (C99 * C1730 - C2124 * C1752) * C1258) *
                       C2122 * C508) *
                  C2126 * C2127) /
                 (p * q * std::sqrt(p + q));
    d2eezz[8] +=
        (2 * std::pow(Pi, 2.5) *
         ((C1295 * C129 - C1405 * C69 - C1295 * C233 + C1257 * C281 +
           C1296 * C557 - C1406 * C510 - C1296 * C641 + C1258 * C684) *
              C2124 * C2122 * C507 -
          (C1296 * C1640 - C1406 * C1587 - C1296 * C1730 + C1258 * C1773 +
           C1295 * C557 - C1405 * C510 - C1295 * C641 + C1257 * C684) *
              C2124 * C2122 * C508) *
         C2126 * C2127) /
        (p * q * std::sqrt(p + q));
    
}
