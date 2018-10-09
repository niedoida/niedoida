/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_spps_AA.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
void second_derivative_ee_0110_11(const double ae,
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
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    const double C1818 = ae + be;
    const double C1817 = xA - xB;
    const double C1816 = ae * be;
    const double C1835 = yA - yB;
    const double C1838 = zA - zB;
    const double C1869 = p + q;
    const double C1868 = p * q;
    const double C1874 = xP - xQ;
    const double C1873 = bs[2];
    const double C1881 = std::pow(ae, 2);
    const double C1879 = bs[3];
    const double C1892 = yP - yQ;
    const double C1901 = zP - zQ;
    const double C69 = bs[0];
    const double C2060 = ce + de;
    const double C2059 = xC - xD;
    const double C2065 = yC - yD;
    const double C2072 = zC - zD;
    const double C2103 = ce * de;
    const double C2099 = 2 * C1818;
    const double C2098 = std::pow(C1817, 2);
    const double C1819 = C1816 * C1817;
    const double C1851 = C1816 * C1835;
    const double C2101 = std::pow(C1835, 2);
    const double C1863 = C1816 * C1838;
    const double C2100 = std::pow(C1838, 2);
    const double C1870 = 2 * C1868;
    const double C1882 = C1874 * ae;
    const double C1878 = std::pow(C1874, 2);
    const double C1895 = C1892 * ae;
    const double C1894 = C1874 * C1892;
    const double C1911 = C1892 * C1874;
    const double C1916 = std::pow(C1892, 2);
    const double C1904 = C1901 * ae;
    const double C1903 = C1874 * C1901;
    const double C1920 = C1892 * C1901;
    const double C1925 = C1901 * C1874;
    const double C1930 = C1901 * C1892;
    const double C1935 = std::pow(C1901, 2);
    const double C2106 = 2 * C2060;
    const double C2105 = std::pow(C2059, 2);
    const double C2104 = std::pow(C2065, 2);
    const double C2102 = std::pow(C2072, 2);
    const double C2108 = std::pow(C2099, -1);
    const double C2107 = C2098 * C1816;
    const double C2110 = C2101 * C1816;
    const double C2109 = C2100 * C1816;
    const double C1872 = C1870 / C1869;
    const double C75 =
        ((std::pow(xP - xQ, 2) * bs[2] * std::pow(C1870 / C1869, 2) -
          (bs[1] * C1870) / C1869) *
         std::pow(ae, 2)) /
        std::pow(C1818, 2);
    const double C70 = -(C1874 * bs[1] * C1870) / C1869;
    const double C321 = -(C1892 * bs[1] * C1870) / C1869;
    const double C517 = -(C1901 * bs[1] * C1870) / C1869;
    const double C1884 = C1879 * C1882;
    const double C72 = (-(bs[1] * C1882 * C1870) / C1869) / C1818;
    const double C1897 = C1879 * C1895;
    const double C101 = (-(bs[1] * C1895 * C1870) / C1869) / C1818;
    const double C1896 = C1894 * C1881;
    const double C1912 = C1911 * C1881;
    const double C1906 = C1879 * C1904;
    const double C132 = (-(bs[1] * C1904 * C1870) / C1869) / C1818;
    const double C1905 = C1903 * C1881;
    const double C1921 = C1920 * C1881;
    const double C1926 = C1925 * C1881;
    const double C1931 = C1930 * C1881;
    const double C2114 = std::pow(C2106, -1);
    const double C2113 = C2105 * C2103;
    const double C2112 = C2104 * C2103;
    const double C2111 = C2102 * C2103;
    const double C2115 = C2107 / C1818;
    const double C2117 = C2110 / C1818;
    const double C2116 = C2109 / C1818;
    const double C1875 = std::pow(C1872, 2);
    const double C1880 = -C1872;
    const double C2120 = C2113 / C2060;
    const double C2119 = C2112 / C2060;
    const double C2118 = C2111 / C2060;
    const double C2121 = -C2115;
    const double C2123 = -C2117;
    const double C2122 = -C2116;
    const double C1877 = C1873 * C1875;
    const double C76 = (2 * ae * C1875 * C1873 * C1874 * ae +
                        C1874 *
                            (C1873 * C1875 +
                             std::pow(C1874, 2) * bs[3] * std::pow(-C1872, 3)) *
                            std::pow(ae, 2)) /
                       std::pow(C1818, 2);
    const double C104 =
        (C1875 * C1873 * C1874 * (yP - yQ) * C1881) / std::pow(C1818, 2);
    const double C135 =
        (C1875 * C1873 * C1874 * (zP - zQ) * C1881) / std::pow(C1818, 2);
    const double C162 =
        (C1875 * C1873 * C1892 * C1874 * C1881) / std::pow(C1818, 2);
    const double C184 =
        ((std::pow(C1892, 2) * C1873 * C1875 - (bs[1] * C1870) / C1869) *
         C1881) /
        std::pow(C1818, 2);
    const double C213 =
        (C1875 * C1873 * C1892 * C1901 * C1881) / std::pow(C1818, 2);
    const double C239 =
        (C1875 * C1873 * C1901 * C1874 * C1881) / std::pow(C1818, 2);
    const double C260 =
        (C1875 * C1873 * C1901 * C1892 * C1881) / std::pow(C1818, 2);
    const double C287 =
        ((std::pow(C1901, 2) * C1873 * C1875 - (bs[1] * C1870) / C1869) *
         C1881) /
        std::pow(C1818, 2);
    const double C73 = (C1874 * C1875 * C1873 * C1882) / C1818 -
                       (ae * bs[1] * C1870) / (C1869 * C1818);
    const double C102 = (C1874 * C1875 * C1873 * C1895) / C1818;
    const double C133 = (C1874 * C1875 * C1873 * C1904) / C1818;
    const double C323 = (C1892 * C1875 * C1873 * C1882) / C1818;
    const double C347 = (C1892 * C1875 * C1873 * C1895) / C1818 -
                        (ae * bs[1] * C1870) / (C1869 * C1818);
    const double C369 = (C1892 * C1875 * C1873 * C1904) / C1818;
    const double C519 = (C1901 * C1875 * C1873 * C1882) / C1818;
    const double C543 = (C1901 * C1875 * C1873 * C1895) / C1818;
    const double C565 = (C1901 * C1875 * C1873 * C1904) / C1818 -
                        (ae * bs[1] * C1870) / (C1869 * C1818);
    const double C1883 = std::pow(C1880, 3);
    const double C2126 = -C2120;
    const double C2125 = -C2119;
    const double C2124 = -C2118;
    const double C2127 = std::exp(C2121);
    const double C2129 = std::exp(C2123);
    const double C2128 = std::exp(C2122);
    const double C1885 = C1877 * ae;
    const double C71 = C1877 * C1878 - (bs[1] * C1870) / C1869;
    const double C320 = C1892 * C1874 * C1877;
    const double C516 = C1901 * C1874 * C1877;
    const double C889 = C1877 * C1916 - (bs[1] * C1870) / C1869;
    const double C1101 = C1901 * C1892 * C1877;
    const double C1619 = C1877 * C1935 - (bs[1] * C1870) / C1869;
    const double C1886 = C1883 * C1884;
    const double C1898 = C1883 * C1897;
    const double C1907 = C1883 * C1906;
    const double C105 = (ae * C1875 * C1873 * C1892 * ae +
                         C1874 * C1883 * C1879 * C1874 * C1892 * C1881) /
                        std::pow(C1818, 2);
    const double C136 = (ae * C1875 * C1873 * C1901 * ae +
                         C1874 * C1883 * C1879 * C1874 * C1901 * C1881) /
                        std::pow(C1818, 2);
    const double C163 = (ae * C1875 * C1873 * C1895 +
                         C1874 * C1883 * C1879 * C1892 * C1874 * C1881) /
                        std::pow(C1818, 2);
    const double C185 =
        (C1874 * (C1877 + std::pow(C1892, 2) * C1879 * C1883) * C1881) /
        std::pow(C1818, 2);
    const double C186 =
        ((C1877 + C1916 * C1879 * C1883) * C1881 +
         (C1879 * C1883 + C1916 * bs[4] * std::pow(C1872, 4)) * C1881 * C1878) /
        std::pow(C1818, 2);
    const double C214 =
        (C1874 * C1883 * C1879 * C1892 * C1901 * C1881) / std::pow(C1818, 2);
    const double C215 =
        (C1883 * C1879 * C1921 + std::pow(C1872, 4) * bs[4] * C1921 * C1878) /
        std::pow(C1818, 2);
    const double C240 = (ae * C1875 * C1873 * C1904 +
                         C1874 * C1883 * C1879 * C1901 * C1874 * C1881) /
                        std::pow(C1818, 2);
    const double C261 =
        (C1874 * C1883 * C1879 * C1901 * C1892 * C1881) / std::pow(C1818, 2);
    const double C262 =
        (C1883 * C1879 * C1931 + std::pow(C1872, 4) * bs[4] * C1931 * C1878) /
        std::pow(C1818, 2);
    const double C288 =
        (C1874 * (C1877 + std::pow(C1901, 2) * C1879 * C1883) * C1881) /
        std::pow(C1818, 2);
    const double C289 =
        ((C1877 + C1935 * C1879 * C1883) * C1881 +
         (C1879 * C1883 + C1935 * bs[4] * std::pow(C1872, 4)) * C1881 * C1878) /
        std::pow(C1818, 2);
    const double C325 =
        (C1892 * (C1877 + C1878 * C1879 * C1883) * C1881) / std::pow(C1818, 2);
    const double C349 =
        (ae * C1875 * C1873 * C1882 + C1892 * C1883 * C1879 * C1896) /
        std::pow(C1818, 2);
    const double C371 = (C1892 * C1883 * C1879 * C1905) / std::pow(C1818, 2);
    const double C391 =
        (ae * C1875 * C1873 * C1882 + C1892 * C1883 * C1879 * C1912) /
        std::pow(C1818, 2);
    const double C411 = (2 * ae * C1875 * C1873 * C1895 +
                         C1892 * (C1877 + C1916 * C1879 * C1883) * C1881) /
                        std::pow(C1818, 2);
    const double C433 =
        (ae * C1875 * C1873 * C1904 + C1892 * C1883 * C1879 * C1921) /
        std::pow(C1818, 2);
    const double C453 = (C1892 * C1883 * C1879 * C1926) / std::pow(C1818, 2);
    const double C473 =
        (ae * C1875 * C1873 * C1904 + C1892 * C1883 * C1879 * C1931) /
        std::pow(C1818, 2);
    const double C492 =
        (C1892 * C1874 * (C1879 * C1883 + C1935 * bs[4] * std::pow(C1872, 4)) *
         C1881) /
        std::pow(C1818, 2);
    const double C493 =
        (C1892 * (C1877 + C1935 * C1879 * C1883) * C1881) / std::pow(C1818, 2);
    const double C521 =
        (C1901 * (C1877 + C1878 * C1879 * C1883) * C1881) / std::pow(C1818, 2);
    const double C545 = (C1901 * C1883 * C1879 * C1896) / std::pow(C1818, 2);
    const double C567 =
        (ae * C1875 * C1873 * C1882 + C1901 * C1883 * C1879 * C1905) /
        std::pow(C1818, 2);
    const double C587 = (C1901 * C1883 * C1879 * C1912) / std::pow(C1818, 2);
    const double C606 =
        (C1901 * C1874 * (C1879 * C1883 + C1916 * bs[4] * std::pow(C1872, 4)) *
         C1881) /
        std::pow(C1818, 2);
    const double C607 =
        (C1901 * (C1877 + C1916 * C1879 * C1883) * C1881) / std::pow(C1818, 2);
    const double C629 =
        (ae * C1875 * C1873 * C1895 + C1901 * C1883 * C1879 * C1921) /
        std::pow(C1818, 2);
    const double C649 =
        (ae * C1875 * C1873 * C1882 + C1901 * C1883 * C1879 * C1926) /
        std::pow(C1818, 2);
    const double C669 =
        (ae * C1875 * C1873 * C1895 + C1901 * C1883 * C1879 * C1931) /
        std::pow(C1818, 2);
    const double C689 = (2 * ae * C1875 * C1873 * C1904 +
                         C1901 * (C1877 + C1935 * C1879 * C1883) * C1881) /
                        std::pow(C1818, 2);
    const double C891 =
        ((C1877 + C1878 * C1879 * C1883) * C1881 +
         (C1879 * C1883 + C1878 * bs[4] * std::pow(C1872, 4)) * C1881 * C1916) /
        std::pow(C1818, 2);
    const double C938 =
        (C1883 * C1879 * C1905 + std::pow(C1872, 4) * bs[4] * C1905 * C1916) /
        std::pow(C1818, 2);
    const double C1033 =
        (C1883 * C1879 * C1926 + std::pow(C1872, 4) * bs[4] * C1926 * C1916) /
        std::pow(C1818, 2);
    const double C1076 =
        ((C1877 + C1935 * C1879 * C1883) * C1881 +
         (C1879 * C1883 + C1935 * bs[4] * std::pow(C1872, 4)) * C1881 * C1916) /
        std::pow(C1818, 2);
    const double C1103 =
        (C1901 * C1892 * (C1879 * C1883 + C1878 * bs[4] * std::pow(C1872, 4)) *
         C1881) /
        std::pow(C1818, 2);
    const double C1621 =
        ((C1877 + C1878 * C1879 * C1883) * C1881 +
         (C1879 * C1883 + C1878 * bs[4] * std::pow(C1872, 4)) * C1881 * C1935) /
        std::pow(C1818, 2);
    const double C1647 =
        (C1883 * C1879 * C1896 + std::pow(C1872, 4) * bs[4] * C1896 * C1935) /
        std::pow(C1818, 2);
    const double C1694 =
        (C1883 * C1879 * C1912 + std::pow(C1872, 4) * bs[4] * C1912 * C1935) /
        std::pow(C1818, 2);
    const double C1721 =
        ((C1877 + C1916 * C1879 * C1883) * C1881 +
         (C1879 * C1883 + C1916 * bs[4] * std::pow(C1872, 4)) * C1881 * C1935) /
        std::pow(C1818, 2);
    const double C2132 = std::exp(C2126);
    const double C2131 = std::exp(C2125);
    const double C2130 = std::exp(C2124);
    const double C968 = C2127 * C323;
    const double C1697 = C2127 * C519;
    const double C1820 = C1819 * C2127;
    const double C57 = (C2127 * C1817 * ae) / C1818;
    const double C58 = C2108 * C2127;
    const double C109 = C2129 * C102;
    const double C1650 = C2129 * C543;
    const double C1852 = C1851 * C2129;
    const double C100 = -(2 * C1816 * (yA - yB) * C2129) / C1818;
    const double C183 =
        -((C2129 - (C1835 * 2 * C1816 * C1835 * C2129) / C1818) * 2 * C1816) /
        C1818;
    const double C737 =
        ((C2129 - (C1835 * 2 * C1816 * C1835 * C2129) / C1818) * ae) / C1818 -
        (0 * be) / (2 * std::pow(C1818, 2));
    const double C738 =
        (0 * ae) / C1818 - (C1816 * C1835 * C2129) / std::pow(C1818, 2);
    const double C711 = (C2129 * C1835 * ae) / C1818;
    const double C712 = C2108 * C2129;
    const double C140 = C2128 * C133;
    const double C941 = C2128 * C369;
    const double C1864 = C1863 * C2128;
    const double C131 = -(2 * C1816 * (zA - zB) * C2128) / C1818;
    const double C286 =
        -((C2128 - (C1838 * 2 * C1816 * C1838 * C2128) / C1818) * 2 * C1816) /
        C1818;
    const double C1320 =
        ((C2128 - (C1838 * 2 * C1816 * C1838 * C2128) / C1818) * ae) / C1818 -
        (0 * be) / (2 * std::pow(C1818, 2));
    const double C1321 =
        (0 * ae) / C1818 - (C1816 * C1838 * C2128) / std::pow(C1818, 2);
    const double C1281 = (C2128 * C1838 * ae) / C1818;
    const double C1282 = C2108 * C2128;
    const double C1887 = C1874 * C1886;
    const double C324 =
        (2 * ae * C1892 * C1886 +
         C1874 * C1892 * (C1879 * C1883 + C1878 * bs[4] * std::pow(C1872, 4)) *
             C1881) /
        std::pow(C1818, 2);
    const double C520 =
        (2 * ae * C1901 * C1886 +
         C1874 * C1901 * (C1879 * C1883 + C1878 * bs[4] * std::pow(C1872, 4)) *
             C1881) /
        std::pow(C1818, 2);
    const double C918 =
        (C1883 * C1879 * C1896 + ae * C1892 * C1886 +
         C1892 * (ae * C1886 + C1892 * std::pow(C1872, 4) * bs[4] * C1896)) /
        std::pow(C1818, 2);
    const double C965 =
        (C1883 * C1879 * C1912 + ae * C1892 * C1886 +
         C1892 * (ae * C1886 + C1892 * std::pow(C1872, 4) * bs[4] * C1912)) /
        std::pow(C1818, 2);
    const double C1125 =
        (C1901 * (ae * C1886 + C1892 * std::pow(C1872, 4) * bs[4] * C1896)) /
        std::pow(C1818, 2);
    const double C1145 = (ae * C1892 * C1886 +
                          C1901 * C1892 * std::pow(C1872, 4) * bs[4] * C1905) /
                         std::pow(C1818, 2);
    const double C1164 = (ae * C1901 * C1886 +
                          C1892 * C1901 * std::pow(C1872, 4) * bs[4] * C1912) /
                         std::pow(C1818, 2);
    const double C1223 = (ae * C1892 * C1886 +
                          C1901 * C1892 * std::pow(C1872, 4) * bs[4] * C1926) /
                         std::pow(C1818, 2);
    const double C1675 =
        (C1883 * C1879 * C1905 + ae * C1901 * C1886 +
         C1901 * (ae * C1886 + C1901 * std::pow(C1872, 4) * bs[4] * C1905)) /
        std::pow(C1818, 2);
    const double C1766 =
        (C1883 * C1879 * C1926 + ae * C1901 * C1886 +
         C1901 * (ae * C1886 + C1901 * std::pow(C1872, 4) * bs[4] * C1926)) /
        std::pow(C1818, 2);
    const double C890 = (C1875 * C1873 * C1882 + C1886 * C1916) / C1818;
    const double C1102 = (C1901 * C1892 * C1886) / C1818;
    const double C1620 = (C1875 * C1873 * C1882 + C1886 * C1935) / C1818;
    const double C1977 = C1892 * C1898;
    const double C106 =
        (C1883 * C1879 * C1896 + ae * C1874 * C1898 +
         C1874 * (ae * C1898 + C1874 * std::pow(C1872, 4) * bs[4] * C1896)) /
        std::pow(C1818, 2);
    const double C164 =
        (C1883 * C1879 * C1912 + ae * C1874 * C1898 +
         C1874 * (ae * C1898 + C1874 * std::pow(C1872, 4) * bs[4] * C1912)) /
        std::pow(C1818, 2);
    const double C410 =
        (2 * ae * C1874 * C1898 +
         C1892 * C1874 * (C1879 * C1883 + C1916 * bs[4] * std::pow(C1872, 4)) *
             C1881) /
        std::pow(C1818, 2);
    const double C544 =
        (C1901 * (ae * C1898 + C1874 * std::pow(C1872, 4) * bs[4] * C1896)) /
        std::pow(C1818, 2);
    const double C586 =
        (C1901 * (ae * C1898 + C1874 * std::pow(C1872, 4) * bs[4] * C1912)) /
        std::pow(C1818, 2);
    const double C628 = (ae * C1874 * C1898 +
                         C1901 * C1874 * std::pow(C1872, 4) * bs[4] * C1921) /
                        std::pow(C1818, 2);
    const double C668 = (ae * C1874 * C1898 +
                         C1901 * C1874 * std::pow(C1872, 4) * bs[4] * C1931) /
                        std::pow(C1818, 2);
    const double C1183 =
        (2 * ae * C1901 * C1898 +
         C1892 * C1901 * (C1879 * C1883 + C1916 * bs[4] * std::pow(C1872, 4)) *
             C1881) /
        std::pow(C1818, 2);
    const double C1747 =
        (C1883 * C1879 * C1921 + ae * C1901 * C1898 +
         C1901 * (ae * C1898 + C1901 * std::pow(C1872, 4) * bs[4] * C1921)) /
        std::pow(C1818, 2);
    const double C1788 =
        (C1883 * C1879 * C1931 + ae * C1901 * C1898 +
         C1901 * (ae * C1898 + C1901 * std::pow(C1872, 4) * bs[4] * C1931)) /
        std::pow(C1818, 2);
    const double C103 = (C1875 * C1873 * C1895 + C1898 * C1878) / C1818;
    const double C346 = (C1892 * C1874 * C1898 + C1874 * C1877 * ae) / C1818;
    const double C542 = (C1901 * C1874 * C1898) / C1818;
    const double C1646 = (C1875 * C1873 * C1895 + C1898 * C1935) / C1818;
    const double C2002 = C1901 * C1907;
    const double C137 =
        (C1883 * C1879 * C1905 + ae * C1874 * C1907 +
         C1874 * (ae * C1907 + C1874 * std::pow(C1872, 4) * bs[4] * C1905)) /
        std::pow(C1818, 2);
    const double C241 =
        (C1883 * C1879 * C1926 + ae * C1874 * C1907 +
         C1874 * (ae * C1907 + C1874 * std::pow(C1872, 4) * bs[4] * C1926)) /
        std::pow(C1818, 2);
    const double C370 =
        (C1892 * (ae * C1907 + C1874 * std::pow(C1872, 4) * bs[4] * C1905)) /
        std::pow(C1818, 2);
    const double C432 = (ae * C1874 * C1907 +
                         C1892 * C1874 * std::pow(C1872, 4) * bs[4] * C1921) /
                        std::pow(C1818, 2);
    const double C452 =
        (C1892 * (ae * C1907 + C1874 * std::pow(C1872, 4) * bs[4] * C1926)) /
        std::pow(C1818, 2);
    const double C472 = (ae * C1874 * C1907 +
                         C1892 * C1874 * std::pow(C1872, 4) * bs[4] * C1931) /
                        std::pow(C1818, 2);
    const double C688 =
        (2 * ae * C1874 * C1907 +
         C1901 * C1874 * (C1879 * C1883 + C1935 * bs[4] * std::pow(C1872, 4)) *
             C1881) /
        std::pow(C1818, 2);
    const double C1011 =
        (C1883 * C1879 * C1921 + ae * C1892 * C1907 +
         C1892 * (ae * C1907 + C1892 * std::pow(C1872, 4) * bs[4] * C1921)) /
        std::pow(C1818, 2);
    const double C1057 =
        (C1883 * C1879 * C1931 + ae * C1892 * C1907 +
         C1892 * (ae * C1907 + C1892 * std::pow(C1872, 4) * bs[4] * C1931)) /
        std::pow(C1818, 2);
    const double C1204 =
        (ae * (C1901 * C1907 + C1885) +
         C1892 * (ae * C1898 + C1901 * std::pow(C1872, 4) * bs[4] * C1921)) /
        std::pow(C1818, 2);
    const double C1261 =
        (2 * ae * C1892 * C1907 +
         C1901 * C1892 * (C1879 * C1883 + C1935 * bs[4] * std::pow(C1872, 4)) *
             C1881) /
        std::pow(C1818, 2);
    const double C134 = (C1875 * C1873 * C1904 + C1907 * C1878) / C1818;
    const double C368 = (C1892 * C1874 * C1907) / C1818;
    const double C564 = (C1901 * C1874 * C1907 + C1874 * C1877 * ae) / C1818;
    const double C937 = (C1875 * C1873 * C1904 + C1907 * C1916) / C1818;
    const double C1144 = (C1901 * C1892 * C1907 + C1892 * C1877 * ae) / C1818;
    const double C111 = C2129 * C105;
    const double C142 = C2128 * C136;
    const double C191 = C2129 * C185;
    const double C219 = C2128 * C214;
    const double C266 = C2129 * C261;
    const double C294 = C2128 * C288;
    const double C894 = C2127 * C325;
    const double C943 = C2128 * C371;
    const double C970 = C2127 * C391;
    const double C1014 = C2128 * C433;
    const double C1037 = C2127 * C453;
    const double C1079 = C2128 * C493;
    const double C1624 = C2127 * C521;
    const double C1652 = C2129 * C545;
    const double C1699 = C2127 * C587;
    const double C1724 = C2129 * C607;
    const double C1769 = C2127 * C649;
    const double C1791 = C2129 * C669;
    const double C63 = -(C2132 * C2059 * de) / C2060;
    const double C64 = C2114 * C2132;
    const double C317 = -(C2131 * C2065 * de) / C2060;
    const double C318 = C2114 * C2131;
    const double C514 = -(C2130 * C2072 * de) / C2060;
    const double C515 = C2114 * C2130;
    const double C65 =
        (((-4 * C1820) / C1818 -
          (C1817 * (C2127 - (C1817 * 2 * C1820) / C1818) * 2 * C1816) / C1818) *
         ae) /
        C1818;
    const double C66 = ((C2127 - (C1817 * 2 * C1820) / C1818) * ae) / C1818 -
                       (0 * be) / (2 * std::pow(C1818, 2));
    const double C67 =
        (-((C2127 - (C1817 * 2 * C1820) / C1818) * 2 * C1816) / C1818) /
        (2 * C1818);
    const double C68 = (0 * ae) / C1818 - C1820 / std::pow(C1818, 2);
    const double C713 =
        -((C2127 - (C1817 * 2 * C1820) / C1818) * 2 * C1816) / C1818;
    const double C714 = -(2 * C1820) / C1818;
    const double C793 =
        (((-4 * C1852) / C1818 -
          (C1835 * (C2129 - (C1835 * 2 * C1852) / C1818) * 2 * C1816) / C1818) *
         ae) /
        C1818;
    const double C794 =
        (-((C2129 - (C1835 * 2 * C1852) / C1818) * 2 * C1816) / C1818) /
        (2 * C1818);
    const double C110 = C100 * C73;
    const double C108 = C100 * C70;
    const double C190 = C100 * C102;
    const double C188 = C100 * C101;
    const double C265 = C100 * C133;
    const double C414 = C100 * C347;
    const double C610 = C100 * C543;
    const double C1651 = C100 * C519;
    const double C1649 = C100 * C517;
    const double C1790 = C100 * C565;
    const double C189 = C183 * C70;
    const double C1723 = C183 * C517;
    const double C799 = C737 * C102;
    const double C796 = C737 * C101;
    const double C993 = C737 * C347;
    const double C1186 = C737 * C543;
    const double C797 = C738 * C347;
    const double C1430 =
        (((-4 * C1864) / C1818 -
          (C1838 * (C2128 - (C1838 * 2 * C1864) / C1818) * 2 * C1816) / C1818) *
         ae) /
        C1818;
    const double C1431 =
        (-((C2128 - (C1838 * 2 * C1864) / C1818) * 2 * C1816) / C1818) /
        (2 * C1818);
    const double C141 = C131 * C73;
    const double C139 = C131 * C70;
    const double C218 = C131 * C102;
    const double C293 = C131 * C133;
    const double C291 = C131 * C132;
    const double C496 = C131 * C369;
    const double C692 = C131 * C565;
    const double C942 = C131 * C323;
    const double C940 = C131 * C321;
    const double C1013 = C131 * C347;
    const double C292 = C286 * C70;
    const double C1078 = C286 * C321;
    const double C1436 = C1320 * C133;
    const double C1433 = C1320 * C132;
    const double C1601 = C1320 * C369;
    const double C1813 = C1320 * C565;
    const double C1434 = C1321 * C565;
    const double C1888 = C1887 + C1885;
    const double C1978 = C1977 + C1885;
    const double C192 = C100 * C103;
    const double C413 = C100 * C346;
    const double C798 = C738 * C346;
    const double C609 = C100 * C542;
    const double C1725 = C100 * C1646;
    const double C2003 = C2002 + C1885;
    const double C295 = C131 * C134;
    const double C495 = C131 * C368;
    const double C691 = C131 * C564;
    const double C1435 = C1321 * C564;
    const double C1080 = C131 * C937;
    const double C1263 = C131 * C1144;
    const double C1600 = C1321 * C1144;
    const double C82 = C66 * C73;
    const double C79 = C66 * C72;
    const double C328 = C66 * C323;
    const double C524 = C66 * C519;
    const double C80 = C68 * C73;
    const double C893 = C713 * C321;
    const double C1623 = C713 * C517;
    const double C719 = C714 * C73;
    const double C717 = C714 * C323;
    const double C716 = C714 * C72;
    const double C895 = C714 * C890;
    const double C969 = C714 * C347;
    const double C967 = C714 * C321;
    const double C1036 = C714 * C369;
    const double C1106 = C714 * C519;
    const double C1105 = C714 * C1102;
    const double C1625 = C714 * C1620;
    const double C1698 = C714 * C543;
    const double C1696 = C714 * C517;
    const double C1768 = C714 * C565;
    const double C113 = C110 + C111;
    const double C112 = C108 + C109;
    const double C267 = C265 + C266;
    const double C1654 = C1651 + C1652;
    const double C1653 = C1649 + C1650;
    const double C1792 = C1790 + C1791;
    const double C193 = C189 + C190;
    const double C1726 = C1723 + C610;
    const double C144 = C141 + C142;
    const double C143 = C139 + C140;
    const double C220 = C218 + C219;
    const double C945 = C942 + C943;
    const double C944 = C940 + C941;
    const double C1015 = C1013 + C1014;
    const double C296 = C292 + C293;
    const double C1081 = C1078 + C496;
    const double C1889 = ae * C1888;
    const double C74 =
        (C1875 * C1873 * C1882 + C1874 * C1888 + C1874 * C1877 * ae) / C1818;
    const double C322 = (C1892 * C1888) / C1818;
    const double C518 = (C1901 * C1888) / C1818;
    const double C1979 = ae * C1978;
    const double C917 =
        (C1875 * C1873 * C1895 + C1892 * C1978 + C1892 * C1877 * ae) / C1818;
    const double C1124 = (C1901 * C1978) / C1818;
    const double C2004 = ae * C2003;
    const double C1674 =
        (C1875 * C1873 * C1904 + C1901 * C2003 + C1901 * C1877 * ae) / C1818;
    const double C896 = C893 + C717;
    const double C972 = C969 + C970;
    const double C971 = C967 + C968;
    const double C1038 = C1036 + C1037;
    const double C1626 = C1623 + C1106;
    const double C1701 = C1698 + C1699;
    const double C1700 = C1696 + C1697;
    const double C1770 = C1768 + C1769;
    const double C264 = C112 * C131;
    const double C268 = C267 * C2128;
    const double C1656 = C1654 * C2127;
    const double C1655 = C1653 * C714;
    const double C194 = C193 + C190;
    const double C1727 = C1726 + C610;
    const double C217 = C143 * C100;
    const double C221 = C220 * C2129;
    const double C947 = C945 * C2127;
    const double C946 = C944 * C714;
    const double C297 = C296 + C293;
    const double C1082 = C1081 + C496;
    const double C77 =
        ((C1877 + C1878 * C1879 * C1883) * C1881 + C1889 + C1889 +
         C1874 * (2 * ae * C1886 +
                  C1874 * (C1879 * C1883 + C1878 * bs[4] * std::pow(C1872, 4)) *
                      C1881)) /
        std::pow(C1818, 2);
    const double C348 =
        (C1889 +
         C1892 * (ae * C1898 + C1874 * std::pow(C1872, 4) * bs[4] * C1896)) /
        std::pow(C1818, 2);
    const double C390 =
        (C1889 +
         C1892 * (ae * C1898 + C1874 * std::pow(C1872, 4) * bs[4] * C1912)) /
        std::pow(C1818, 2);
    const double C566 =
        (C1889 +
         C1901 * (ae * C1907 + C1874 * std::pow(C1872, 4) * bs[4] * C1905)) /
        std::pow(C1818, 2);
    const double C648 =
        (C1889 +
         C1901 * (ae * C1907 + C1874 * std::pow(C1872, 4) * bs[4] * C1926)) /
        std::pow(C1818, 2);
    const double C81 = C68 * C74;
    const double C327 = C68 * C322;
    const double C718 = C714 * C322;
    const double C523 = C68 * C518;
    const double C1284 = C714 * C518;
    const double C990 =
        ((C1877 + C1916 * C1879 * C1883) * C1881 + C1979 + C1979 +
         C1892 * (2 * ae * C1898 +
                  C1892 * (C1879 * C1883 + C1916 * bs[4] * std::pow(C1872, 4)) *
                      C1881)) /
        std::pow(C1818, 2);
    const double C1242 =
        (C1979 +
         C1901 * (ae * C1907 + C1892 * std::pow(C1872, 4) * bs[4] * C1931)) /
        std::pow(C1818, 2);
    const double C992 = C738 * C917;
    const double C1185 = C738 * C1124;
    const double C1527 = C100 * C1124;
    const double C1810 =
        ((C1877 + C1935 * C1879 * C1883) * C1881 + C2004 + C2004 +
         C1901 * (2 * ae * C1907 +
                  C1901 * (C1879 * C1883 + C1935 * bs[4] * std::pow(C1872, 4)) *
                      C1881)) /
        std::pow(C1818, 2);
    const double C1812 = C1321 * C1674;
    const double C897 = C896 + C717;
    const double C1035 = C971 * C131;
    const double C1039 = C1038 * C2128;
    const double C1627 = C1626 + C1106;
    const double C1703 = C1701 * C2129;
    const double C1702 = C1700 * C100;
    const double C195 = C194 + C191;
    const double C1728 = C1727 + C1724;
    const double C298 = C297 + C294;
    const double C1083 = C1082 + C1079;
    const double C898 = C897 + C894;
    const double C1628 = C1627 + C1624;
    const double C1729 = C1728 * C2127;
    const double C299 = C298 * C2129;
    const double C899 = C898 * C2128;
    
    d2eexx[0] += (2 * std::pow(Pi, 2.5) *
                  ((C65 * C69 + C79 + C79 + C57 * C75 + C67 * C70 + C80 + C80 +
                    C58 * C76) *
                       C2128 * C2129 * C2130 * C2131 * C63 -
                   (C67 * C71 + C81 + C81 + C58 * C77 + C65 * C70 + C82 + C82 +
                    C57 * C76) *
                       C2128 * C2129 * C2130 * C2131 * C64)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[0] +=
        (2 * std::pow(Pi, 2.5) *
         (((C100 * C69 + C2129 * C101) * C66 +
           (C100 * C72 + C2129 * C104) * C57 + C112 * C68 + C113 * C58) *
              C2128 * C2130 * C2131 * C63 -
          ((C100 * C74 + C2129 * C106) * C58 +
           (C100 * C71 + C2129 * C103) * C68 + C113 * C57 + C112 * C66) *
              C2128 * C2130 * C2131 * C64)) /
        (p * q * std::sqrt(p + q));
    d2eexz[0] +=
        (2 * std::pow(Pi, 2.5) *
         (((C131 * C69 + C2128 * C132) * C66 +
           (C131 * C72 + C2128 * C135) * C57 + C143 * C68 + C144 * C58) *
              C2129 * C2130 * C2131 * C63 -
          ((C131 * C74 + C2128 * C137) * C58 +
           (C131 * C71 + C2128 * C134) * C68 + C144 * C57 + C143 * C66) *
              C2129 * C2130 * C2131 * C64)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[0] +=
        (2 * std::pow(Pi, 2.5) *
         (((C66 * C69 + C57 * C72 + C68 * C70 + C58 * C73) * C100 +
           (C66 * C101 + C57 * C162 + C68 * C102 + C58 * C163) * C2129) *
              C2128 * C2130 * C2131 * C63 -
          ((C68 * C103 + C58 * C164 + C66 * C102 + C57 * C163) * C2129 +
           (C68 * C71 + C58 * C74 + C66 * C70 + C57 * C73) * C100) *
              C2128 * C2130 * C2131 * C64)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[0] +=
        (2 * std::pow(Pi, 2.5) *
         (((C183 * C69 + C188 + C188 + C2129 * C184) * C57 + C195 * C58) *
              C2128 * C2130 * C2131 * C63 -
          ((C183 * C71 + C192 + C192 + C2129 * C186) * C58 + C195 * C57) *
              C2128 * C2130 * C2131 * C64)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[0] += (2 * std::pow(Pi, 2.5) *
                  ((((C131 * C69 + C2128 * C132) * C100 +
                     (C131 * C101 + C2128 * C213) * C2129) *
                        C57 +
                    (C217 + C221) * C58) *
                       C2130 * C2131 * C63 -
                   (((C131 * C103 + C2128 * C215) * C2129 +
                     (C131 * C71 + C2128 * C134) * C100) *
                        C58 +
                    (C221 + C217) * C57) *
                       C2130 * C2131 * C64)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[0] +=
        (2 * std::pow(Pi, 2.5) *
         (((C66 * C69 + C57 * C72 + C68 * C70 + C58 * C73) * C131 +
           (C66 * C132 + C57 * C239 + C68 * C133 + C58 * C240) * C2128) *
              C2129 * C2130 * C2131 * C63 -
          ((C68 * C134 + C58 * C241 + C66 * C133 + C57 * C240) * C2128 +
           (C68 * C71 + C58 * C74 + C66 * C70 + C57 * C73) * C131) *
              C2129 * C2130 * C2131 * C64)) /
        (p * q * std::sqrt(p + q));
    d2eezy[0] += (2 * std::pow(Pi, 2.5) *
                  ((((C100 * C69 + C2129 * C101) * C131 +
                     (C100 * C132 + C2129 * C260) * C2128) *
                        C57 +
                    (C264 + C268) * C58) *
                       C2130 * C2131 * C63 -
                   (((C100 * C134 + C2129 * C262) * C2128 +
                     (C100 * C71 + C2129 * C103) * C131) *
                        C58 +
                    (C268 + C264) * C57) *
                       C2130 * C2131 * C64)) /
                 (p * q * std::sqrt(p + q));
    d2eezz[0] += (2 * std::pow(Pi, 2.5) *
                  (((C286 * C69 + C291 + C291 + C2128 * C287) * C2129 * C57 +
                    C299 * C58) *
                       C2130 * C2131 * C63 -
                   ((C286 * C71 + C295 + C295 + C2128 * C289) * C2129 * C58 +
                    C299 * C57) *
                       C2130 * C2131 * C64)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[1] += (2 * std::pow(Pi, 2.5) *
                  ((C65 * C69 + C79 + C79 + C57 * C75 + C67 * C70 + C80 + C80 +
                    C58 * C76) *
                       C2128 * C2129 * C2130 * C317 -
                   (C67 * C320 + C327 + C327 + C58 * C324 + C65 * C321 + C328 +
                    C328 + C57 * C325) *
                       C2128 * C2129 * C2130 * C318) *
                  C2132) /
                 (p * q * std::sqrt(p + q));
    d2eexy[1] +=
        (2 * std::pow(Pi, 2.5) *
         (((C100 * C69 + C2129 * C101) * C66 +
           (C100 * C72 + C2129 * C104) * C57 + C112 * C68 + C113 * C58) *
              C2128 * C2130 * C317 -
          ((C100 * C322 + C2129 * C348) * C58 +
           (C100 * C320 + C2129 * C346) * C68 +
           (C100 * C323 + C2129 * C349) * C57 +
           (C100 * C321 + C2129 * C347) * C66) *
              C2128 * C2130 * C318) *
         C2132) /
        (p * q * std::sqrt(p + q));
    d2eexz[1] +=
        (2 * std::pow(Pi, 2.5) *
         (((C131 * C69 + C2128 * C132) * C66 +
           (C131 * C72 + C2128 * C135) * C57 + C143 * C68 + C144 * C58) *
              C2129 * C2130 * C317 -
          ((C131 * C322 + C2128 * C370) * C58 +
           (C131 * C320 + C2128 * C368) * C68 +
           (C131 * C323 + C2128 * C371) * C57 +
           (C131 * C321 + C2128 * C369) * C66) *
              C2129 * C2130 * C318) *
         C2132) /
        (p * q * std::sqrt(p + q));
    d2eeyx[1] +=
        (2 * std::pow(Pi, 2.5) *
         (((C66 * C69 + C57 * C72 + C68 * C70 + C58 * C73) * C100 +
           (C66 * C101 + C57 * C162 + C68 * C102 + C58 * C163) * C2129) *
              C2128 * C2130 * C317 -
          ((C68 * C346 + C58 * C390 + C66 * C347 + C57 * C391) * C2129 +
           (C68 * C320 + C58 * C322 + C66 * C321 + C57 * C323) * C100) *
              C2128 * C2130 * C318) *
         C2132) /
        (p * q * std::sqrt(p + q));
    d2eeyy[1] +=
        (2 * std::pow(Pi, 2.5) *
         (((C183 * C69 + C188 + C188 + C2129 * C184) * C57 + C195 * C58) *
              C2128 * C2130 * C317 -
          ((C183 * C320 + C413 + C413 + C2129 * C410) * C58 +
           (C183 * C321 + C414 + C414 + C2129 * C411) * C57) *
              C2128 * C2130 * C318) *
         C2132) /
        (p * q * std::sqrt(p + q));
    d2eeyz[1] += (2 * std::pow(Pi, 2.5) *
                  ((((C131 * C69 + C2128 * C132) * C100 +
                     (C131 * C101 + C2128 * C213) * C2129) *
                        C57 +
                    (C217 + C221) * C58) *
                       C2130 * C317 -
                   (((C131 * C346 + C2128 * C432) * C2129 +
                     (C131 * C320 + C2128 * C368) * C100) *
                        C58 +
                    ((C131 * C347 + C2128 * C433) * C2129 +
                     (C131 * C321 + C2128 * C369) * C100) *
                        C57) *
                       C2130 * C318) *
                  C2132) /
                 (p * q * std::sqrt(p + q));
    d2eezx[1] +=
        (2 * std::pow(Pi, 2.5) *
         (((C66 * C69 + C57 * C72 + C68 * C70 + C58 * C73) * C131 +
           (C66 * C132 + C57 * C239 + C68 * C133 + C58 * C240) * C2128) *
              C2129 * C2130 * C317 -
          ((C68 * C368 + C58 * C452 + C66 * C369 + C57 * C453) * C2128 +
           (C68 * C320 + C58 * C322 + C66 * C321 + C57 * C323) * C131) *
              C2129 * C2130 * C318) *
         C2132) /
        (p * q * std::sqrt(p + q));
    d2eezy[1] += (2 * std::pow(Pi, 2.5) *
                  ((((C100 * C69 + C2129 * C101) * C131 +
                     (C100 * C132 + C2129 * C260) * C2128) *
                        C57 +
                    (C264 + C268) * C58) *
                       C2130 * C317 -
                   (((C100 * C368 + C2129 * C472) * C2128 +
                     (C100 * C320 + C2129 * C346) * C131) *
                        C58 +
                    ((C100 * C369 + C2129 * C473) * C2128 +
                     (C100 * C321 + C2129 * C347) * C131) *
                        C57) *
                       C2130 * C318) *
                  C2132) /
                 (p * q * std::sqrt(p + q));
    d2eezz[1] += (2 * std::pow(Pi, 2.5) *
                  (((C286 * C69 + C291 + C291 + C2128 * C287) * C2129 * C57 +
                    C299 * C58) *
                       C2130 * C317 -
                   ((C286 * C320 + C495 + C495 + C2128 * C492) * C2129 * C58 +
                    (C286 * C321 + C496 + C496 + C2128 * C493) * C2129 * C57) *
                       C2130 * C318) *
                  C2132) /
                 (p * q * std::sqrt(p + q));
    d2eexx[2] += (2 * std::pow(Pi, 2.5) *
                  ((C65 * C69 + C79 + C79 + C57 * C75 + C67 * C70 + C80 + C80 +
                    C58 * C76) *
                       C2128 * C2129 * C514 -
                   (C67 * C516 + C523 + C523 + C58 * C520 + C65 * C517 + C524 +
                    C524 + C57 * C521) *
                       C2128 * C2129 * C515) *
                  C2131 * C2132) /
                 (p * q * std::sqrt(p + q));
    d2eexy[2] +=
        (2 * std::pow(Pi, 2.5) *
         (((C100 * C69 + C2129 * C101) * C66 +
           (C100 * C72 + C2129 * C104) * C57 + C112 * C68 + C113 * C58) *
              C2128 * C514 -
          ((C100 * C518 + C2129 * C544) * C58 +
           (C100 * C516 + C2129 * C542) * C68 +
           (C100 * C519 + C2129 * C545) * C57 +
           (C100 * C517 + C2129 * C543) * C66) *
              C2128 * C515) *
         C2131 * C2132) /
        (p * q * std::sqrt(p + q));
    d2eexz[2] +=
        (2 * std::pow(Pi, 2.5) *
         (((C131 * C69 + C2128 * C132) * C66 +
           (C131 * C72 + C2128 * C135) * C57 + C143 * C68 + C144 * C58) *
              C2129 * C514 -
          ((C131 * C518 + C2128 * C566) * C58 +
           (C131 * C516 + C2128 * C564) * C68 +
           (C131 * C519 + C2128 * C567) * C57 +
           (C131 * C517 + C2128 * C565) * C66) *
              C2129 * C515) *
         C2131 * C2132) /
        (p * q * std::sqrt(p + q));
    d2eeyx[2] +=
        (2 * std::pow(Pi, 2.5) *
         (((C66 * C69 + C57 * C72 + C68 * C70 + C58 * C73) * C100 +
           (C66 * C101 + C57 * C162 + C68 * C102 + C58 * C163) * C2129) *
              C2128 * C514 -
          ((C68 * C542 + C58 * C586 + C66 * C543 + C57 * C587) * C2129 +
           (C68 * C516 + C58 * C518 + C66 * C517 + C57 * C519) * C100) *
              C2128 * C515) *
         C2131 * C2132) /
        (p * q * std::sqrt(p + q));
    d2eeyy[2] +=
        (2 * std::pow(Pi, 2.5) *
         (((C183 * C69 + C188 + C188 + C2129 * C184) * C57 + C195 * C58) *
              C2128 * C514 -
          ((C183 * C516 + C609 + C609 + C2129 * C606) * C58 +
           (C183 * C517 + C610 + C610 + C2129 * C607) * C57) *
              C2128 * C515) *
         C2131 * C2132) /
        (p * q * std::sqrt(p + q));
    d2eeyz[2] += (2 * std::pow(Pi, 2.5) *
                  ((((C131 * C69 + C2128 * C132) * C100 +
                     (C131 * C101 + C2128 * C213) * C2129) *
                        C57 +
                    (C217 + C221) * C58) *
                       C514 -
                   (((C131 * C542 + C2128 * C628) * C2129 +
                     (C131 * C516 + C2128 * C564) * C100) *
                        C58 +
                    ((C131 * C543 + C2128 * C629) * C2129 +
                     (C131 * C517 + C2128 * C565) * C100) *
                        C57) *
                       C515) *
                  C2131 * C2132) /
                 (p * q * std::sqrt(p + q));
    d2eezx[2] +=
        (2 * std::pow(Pi, 2.5) *
         (((C66 * C69 + C57 * C72 + C68 * C70 + C58 * C73) * C131 +
           (C66 * C132 + C57 * C239 + C68 * C133 + C58 * C240) * C2128) *
              C2129 * C514 -
          ((C68 * C564 + C58 * C648 + C66 * C565 + C57 * C649) * C2128 +
           (C68 * C516 + C58 * C518 + C66 * C517 + C57 * C519) * C131) *
              C2129 * C515) *
         C2131 * C2132) /
        (p * q * std::sqrt(p + q));
    d2eezy[2] += (2 * std::pow(Pi, 2.5) *
                  ((((C100 * C69 + C2129 * C101) * C131 +
                     (C100 * C132 + C2129 * C260) * C2128) *
                        C57 +
                    (C264 + C268) * C58) *
                       C514 -
                   (((C100 * C564 + C2129 * C668) * C2128 +
                     (C100 * C516 + C2129 * C542) * C131) *
                        C58 +
                    ((C100 * C565 + C2129 * C669) * C2128 +
                     (C100 * C517 + C2129 * C543) * C131) *
                        C57) *
                       C515) *
                  C2131 * C2132) /
                 (p * q * std::sqrt(p + q));
    d2eezz[2] += (2 * std::pow(Pi, 2.5) *
                  (((C286 * C69 + C291 + C291 + C2128 * C287) * C2129 * C57 +
                    C299 * C58) *
                       C514 -
                   ((C286 * C516 + C691 + C691 + C2128 * C688) * C2129 * C58 +
                    (C286 * C517 + C692 + C692 + C2128 * C689) * C2129 * C57) *
                       C515) *
                  C2131 * C2132) /
                 (p * q * std::sqrt(p + q));
    d2eexx[3] += (2 * std::pow(Pi, 2.5) *
                  (((C713 * C69 + C716 + C716 + C2127 * C75) * C2128 * C711 +
                    (C713 * C321 + C717 + C717 + C2127 * C325) * C2128 * C712) *
                       C2130 * C2131 * C63 -
                   ((C713 * C320 + C718 + C718 + C2127 * C324) * C2128 * C712 +
                    (C713 * C70 + C719 + C719 + C2127 * C76) * C2128 * C711) *
                       C2130 * C2131 * C64)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[3] +=
        (2 * std::pow(Pi, 2.5) *
         (((C737 * C69 + C711 * C101 + C738 * C321 + C712 * C347) * C714 +
           (C737 * C72 + C711 * C104 + C738 * C323 + C712 * C349) * C2127) *
              C2128 * C2130 * C2131 * C63 -
          ((C738 * C322 + C712 * C348 + C737 * C73 + C711 * C105) * C2127 +
           (C738 * C320 + C712 * C346 + C737 * C70 + C711 * C102) * C714) *
              C2128 * C2130 * C2131 * C64)) /
        (p * q * std::sqrt(p + q));
    d2eexz[3] += (2 * std::pow(Pi, 2.5) *
                  ((((C131 * C69 + C2128 * C132) * C714 +
                     (C131 * C72 + C2128 * C135) * C2127) *
                        C711 +
                    ((C131 * C321 + C2128 * C369) * C714 +
                     (C131 * C323 + C2128 * C371) * C2127) *
                        C712) *
                       C2130 * C2131 * C63 -
                   (((C131 * C322 + C2128 * C370) * C2127 +
                     (C131 * C320 + C2128 * C368) * C714) *
                        C712 +
                    (C144 * C2127 + C143 * C714) * C711) *
                       C2130 * C2131 * C64)) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[3] += (2 * std::pow(Pi, 2.5) *
                  (((C714 * C69 + C2127 * C72) * C737 +
                    (C714 * C101 + C2127 * C162) * C711 +
                    (C714 * C321 + C2127 * C323) * C738 +
                    (C714 * C347 + C2127 * C391) * C712) *
                       C2128 * C2130 * C2131 * C63 -
                   ((C714 * C346 + C2127 * C390) * C712 +
                    (C714 * C320 + C2127 * C322) * C738 +
                    (C714 * C102 + C2127 * C163) * C711 +
                    (C714 * C70 + C2127 * C73) * C737) *
                       C2128 * C2130 * C2131 * C64)) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[3] += (2 * std::pow(Pi, 2.5) *
                  ((C793 * C69 + C796 + C796 + C711 * C184 + C794 * C321 +
                    C797 + C797 + C712 * C411) *
                       C2127 * C2128 * C2130 * C2131 * C63 -
                   (C794 * C320 + C798 + C798 + C712 * C410 + C793 * C70 +
                    C799 + C799 + C711 * C185) *
                       C2127 * C2128 * C2130 * C2131 * C64)) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[3] +=
        (2 * std::pow(Pi, 2.5) *
         (((C131 * C69 + C2128 * C132) * C737 +
           (C131 * C101 + C2128 * C213) * C711 +
           (C131 * C321 + C2128 * C369) * C738 +
           (C131 * C347 + C2128 * C433) * C712) *
              C2127 * C2130 * C2131 * C63 -
          ((C131 * C346 + C2128 * C432) * C712 +
           (C131 * C320 + C2128 * C368) * C738 + C220 * C711 + C143 * C737) *
              C2127 * C2130 * C2131 * C64)) /
        (p * q * std::sqrt(p + q));
    d2eezx[3] += (2 * std::pow(Pi, 2.5) *
                  ((((C714 * C69 + C2127 * C72) * C131 +
                     (C714 * C132 + C2127 * C239) * C2128) *
                        C711 +
                    ((C714 * C321 + C2127 * C323) * C131 +
                     (C714 * C369 + C2127 * C453) * C2128) *
                        C712) *
                       C2130 * C2131 * C63 -
                   (((C714 * C368 + C2127 * C452) * C2128 +
                     (C714 * C320 + C2127 * C322) * C131) *
                        C712 +
                    ((C714 * C133 + C2127 * C240) * C2128 +
                     (C714 * C70 + C2127 * C73) * C131) *
                        C711) *
                       C2130 * C2131 * C64)) /
                 (p * q * std::sqrt(p + q));
    d2eezy[3] +=
        (2 * std::pow(Pi, 2.5) *
         (((C737 * C69 + C711 * C101 + C738 * C321 + C712 * C347) * C131 +
           (C737 * C132 + C711 * C260 + C738 * C369 + C712 * C473) * C2128) *
              C2127 * C2130 * C2131 * C63 -
          ((C738 * C368 + C712 * C472 + C737 * C133 + C711 * C261) * C2128 +
           (C738 * C320 + C712 * C346 + C737 * C70 + C711 * C102) * C131) *
              C2127 * C2130 * C2131 * C64)) /
        (p * q * std::sqrt(p + q));
    d2eezz[3] +=
        (2 * std::pow(Pi, 2.5) *
         (((C286 * C69 + C291 + C291 + C2128 * C287) * C711 +
           (C286 * C321 + C496 + C496 + C2128 * C493) * C712) *
              C2127 * C2130 * C2131 * C63 -
          ((C286 * C320 + C495 + C495 + C2128 * C492) * C712 + C298 * C711) *
              C2127 * C2130 * C2131 * C64)) /
        (p * q * std::sqrt(p + q));
    d2eexx[4] += (2 * std::pow(Pi, 2.5) *
                  (((C713 * C69 + C716 + C716 + C2127 * C75) * C2128 * C711 +
                    C899 * C712) *
                       C2130 * C317 -
                   ((C713 * C889 + C895 + C895 + C2127 * C891) * C2128 * C712 +
                    C899 * C711) *
                       C2130 * C318) *
                  C2132) /
                 (p * q * std::sqrt(p + q));
    d2eexy[4] +=
        (2 * std::pow(Pi, 2.5) *
         (((C737 * C69 + C711 * C101 + C738 * C321 + C712 * C347) * C714 +
           (C737 * C72 + C711 * C104 + C738 * C323 + C712 * C349) * C2127) *
              C2128 * C2130 * C317 -
          ((C738 * C890 + C712 * C918 + C737 * C323 + C711 * C349) * C2127 +
           (C738 * C889 + C712 * C917 + C737 * C321 + C711 * C347) * C714) *
              C2128 * C2130 * C318) *
         C2132) /
        (p * q * std::sqrt(p + q));
    d2eexz[4] += (2 * std::pow(Pi, 2.5) *
                  ((((C131 * C69 + C2128 * C132) * C714 +
                     (C131 * C72 + C2128 * C135) * C2127) *
                        C711 +
                    (C946 + C947) * C712) *
                       C2130 * C317 -
                   (((C131 * C890 + C2128 * C938) * C2127 +
                     (C131 * C889 + C2128 * C937) * C714) *
                        C712 +
                    (C947 + C946) * C711) *
                       C2130 * C318) *
                  C2132) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[4] +=
        (2 * std::pow(Pi, 2.5) *
         (((C714 * C69 + C2127 * C72) * C737 +
           (C714 * C101 + C2127 * C162) * C711 + C971 * C738 + C972 * C712) *
              C2128 * C2130 * C317 -
          ((C714 * C917 + C2127 * C965) * C712 +
           (C714 * C889 + C2127 * C890) * C738 + C972 * C711 + C971 * C737) *
              C2128 * C2130 * C318) *
         C2132) /
        (p * q * std::sqrt(p + q));
    d2eeyy[4] += (2 * std::pow(Pi, 2.5) *
                  ((C793 * C69 + C796 + C796 + C711 * C184 + C794 * C321 +
                    C797 + C797 + C712 * C411) *
                       C2127 * C2128 * C2130 * C317 -
                   (C794 * C889 + C992 + C992 + C712 * C990 + C793 * C321 +
                    C993 + C993 + C711 * C411) *
                       C2127 * C2128 * C2130 * C318) *
                  C2132) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[4] +=
        (2 * std::pow(Pi, 2.5) *
         (((C131 * C69 + C2128 * C132) * C737 +
           (C131 * C101 + C2128 * C213) * C711 + C944 * C738 + C1015 * C712) *
              C2127 * C2130 * C317 -
          ((C131 * C917 + C2128 * C1011) * C712 +
           (C131 * C889 + C2128 * C937) * C738 + C1015 * C711 + C944 * C737) *
              C2127 * C2130 * C318) *
         C2132) /
        (p * q * std::sqrt(p + q));
    d2eezx[4] += (2 * std::pow(Pi, 2.5) *
                  ((((C714 * C69 + C2127 * C72) * C131 +
                     (C714 * C132 + C2127 * C239) * C2128) *
                        C711 +
                    (C1035 + C1039) * C712) *
                       C2130 * C317 -
                   (((C714 * C937 + C2127 * C1033) * C2128 +
                     (C714 * C889 + C2127 * C890) * C131) *
                        C712 +
                    (C1039 + C1035) * C711) *
                       C2130 * C318) *
                  C2132) /
                 (p * q * std::sqrt(p + q));
    d2eezy[4] +=
        (2 * std::pow(Pi, 2.5) *
         (((C737 * C69 + C711 * C101 + C738 * C321 + C712 * C347) * C131 +
           (C737 * C132 + C711 * C260 + C738 * C369 + C712 * C473) * C2128) *
              C2127 * C2130 * C317 -
          ((C738 * C937 + C712 * C1057 + C737 * C369 + C711 * C473) * C2128 +
           (C738 * C889 + C712 * C917 + C737 * C321 + C711 * C347) * C131) *
              C2127 * C2130 * C318) *
         C2132) /
        (p * q * std::sqrt(p + q));
    d2eezz[4] +=
        (2 * std::pow(Pi, 2.5) *
         (((C286 * C69 + C291 + C291 + C2128 * C287) * C711 + C1083 * C712) *
              C2127 * C2130 * C317 -
          ((C286 * C889 + C1080 + C1080 + C2128 * C1076) * C712 +
           C1083 * C711) *
              C2127 * C2130 * C318) *
         C2132) /
        (p * q * std::sqrt(p + q));
    d2eexx[5] +=
        (2 * std::pow(Pi, 2.5) *
         (((C713 * C69 + C716 + C716 + C2127 * C75) * C2128 * C711 +
           C899 * C712) *
              C514 -
          ((C713 * C1101 + C1105 + C1105 + C2127 * C1103) * C2128 * C712 +
           (C713 * C517 + C1106 + C1106 + C2127 * C521) * C2128 * C711) *
              C515) *
         C2131 * C2132) /
        (p * q * std::sqrt(p + q));
    d2eexy[5] +=
        (2 * std::pow(Pi, 2.5) *
         (((C737 * C69 + C711 * C101 + C738 * C321 + C712 * C347) * C714 +
           (C737 * C72 + C711 * C104 + C738 * C323 + C712 * C349) * C2127) *
              C2128 * C514 -
          ((C738 * C1102 + C712 * C1125 + C737 * C519 + C711 * C545) * C2127 +
           (C738 * C1101 + C712 * C1124 + C737 * C517 + C711 * C543) * C714) *
              C2128 * C515) *
         C2131 * C2132) /
        (p * q * std::sqrt(p + q));
    d2eexz[5] += (2 * std::pow(Pi, 2.5) *
                  ((((C131 * C69 + C2128 * C132) * C714 +
                     (C131 * C72 + C2128 * C135) * C2127) *
                        C711 +
                    (C946 + C947) * C712) *
                       C514 -
                   (((C131 * C1102 + C2128 * C1145) * C2127 +
                     (C131 * C1101 + C2128 * C1144) * C714) *
                        C712 +
                    ((C131 * C519 + C2128 * C567) * C2127 +
                     (C131 * C517 + C2128 * C565) * C714) *
                        C711) *
                       C515) *
                  C2131 * C2132) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[5] +=
        (2 * std::pow(Pi, 2.5) *
         (((C714 * C69 + C2127 * C72) * C737 +
           (C714 * C101 + C2127 * C162) * C711 + C971 * C738 + C972 * C712) *
              C2128 * C514 -
          ((C714 * C1124 + C2127 * C1164) * C712 +
           (C714 * C1101 + C2127 * C1102) * C738 +
           (C714 * C543 + C2127 * C587) * C711 +
           (C714 * C517 + C2127 * C519) * C737) *
              C2128 * C515) *
         C2131 * C2132) /
        (p * q * std::sqrt(p + q));
    d2eeyy[5] += (2 * std::pow(Pi, 2.5) *
                  ((C793 * C69 + C796 + C796 + C711 * C184 + C794 * C321 +
                    C797 + C797 + C712 * C411) *
                       C2127 * C2128 * C514 -
                   (C794 * C1101 + C1185 + C1185 + C712 * C1183 + C793 * C517 +
                    C1186 + C1186 + C711 * C607) *
                       C2127 * C2128 * C515) *
                  C2131 * C2132) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[5] +=
        (2 * std::pow(Pi, 2.5) *
         (((C131 * C69 + C2128 * C132) * C737 +
           (C131 * C101 + C2128 * C213) * C711 + C944 * C738 + C1015 * C712) *
              C2127 * C514 -
          ((C131 * C1124 + C2128 * C1204) * C712 +
           (C131 * C1101 + C2128 * C1144) * C738 +
           (C131 * C543 + C2128 * C629) * C711 +
           (C131 * C517 + C2128 * C565) * C737) *
              C2127 * C515) *
         C2131 * C2132) /
        (p * q * std::sqrt(p + q));
    d2eezx[5] += (2 * std::pow(Pi, 2.5) *
                  ((((C714 * C69 + C2127 * C72) * C131 +
                     (C714 * C132 + C2127 * C239) * C2128) *
                        C711 +
                    (C1035 + C1039) * C712) *
                       C514 -
                   (((C714 * C1144 + C2127 * C1223) * C2128 +
                     (C714 * C1101 + C2127 * C1102) * C131) *
                        C712 +
                    ((C714 * C565 + C2127 * C649) * C2128 +
                     (C714 * C517 + C2127 * C519) * C131) *
                        C711) *
                       C515) *
                  C2131 * C2132) /
                 (p * q * std::sqrt(p + q));
    d2eezy[5] +=
        (2 * std::pow(Pi, 2.5) *
         (((C737 * C69 + C711 * C101 + C738 * C321 + C712 * C347) * C131 +
           (C737 * C132 + C711 * C260 + C738 * C369 + C712 * C473) * C2128) *
              C2127 * C514 -
          ((C738 * C1144 + C712 * C1242 + C737 * C565 + C711 * C669) * C2128 +
           (C738 * C1101 + C712 * C1124 + C737 * C517 + C711 * C543) * C131) *
              C2127 * C515) *
         C2131 * C2132) /
        (p * q * std::sqrt(p + q));
    d2eezz[5] +=
        (2 * std::pow(Pi, 2.5) *
         (((C286 * C69 + C291 + C291 + C2128 * C287) * C711 + C1083 * C712) *
              C2127 * C514 -
          ((C286 * C1101 + C1263 + C1263 + C2128 * C1261) * C712 +
           (C286 * C517 + C692 + C692 + C2128 * C689) * C711) *
              C2127 * C515) *
         C2131 * C2132) /
        (p * q * std::sqrt(p + q));
    d2eexx[6] += (2 * std::pow(Pi, 2.5) *
                  (((C713 * C69 + C716 + C716 + C2127 * C75) * C1281 +
                    (C713 * C517 + C1106 + C1106 + C2127 * C521) * C1282) *
                       C2129 * C2130 * C2131 * C63 -
                   ((C713 * C516 + C1284 + C1284 + C2127 * C520) * C1282 +
                    (C713 * C70 + C719 + C719 + C2127 * C76) * C1281) *
                       C2129 * C2130 * C2131 * C64)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[6] += (2 * std::pow(Pi, 2.5) *
                  ((((C100 * C69 + C2129 * C101) * C714 +
                     (C100 * C72 + C2129 * C104) * C2127) *
                        C1281 +
                    ((C100 * C517 + C2129 * C543) * C714 +
                     (C100 * C519 + C2129 * C545) * C2127) *
                        C1282) *
                       C2130 * C2131 * C63 -
                   (((C100 * C518 + C2129 * C544) * C2127 +
                     (C100 * C516 + C2129 * C542) * C714) *
                        C1282 +
                    (C113 * C2127 + C112 * C714) * C1281) *
                       C2130 * C2131 * C64)) /
                 (p * q * std::sqrt(p + q));
    d2eexz[6] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1320 * C69 + C1281 * C132 + C1321 * C517 + C1282 * C565) * C714 +
           (C1320 * C72 + C1281 * C135 + C1321 * C519 + C1282 * C567) * C2127) *
              C2129 * C2130 * C2131 * C63 -
          ((C1321 * C518 + C1282 * C566 + C1320 * C73 + C1281 * C136) * C2127 +
           (C1321 * C516 + C1282 * C564 + C1320 * C70 + C1281 * C133) * C714) *
              C2129 * C2130 * C2131 * C64)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[6] += (2 * std::pow(Pi, 2.5) *
                  ((((C714 * C69 + C2127 * C72) * C100 +
                     (C714 * C101 + C2127 * C162) * C2129) *
                        C1281 +
                    ((C714 * C517 + C2127 * C519) * C100 +
                     (C714 * C543 + C2127 * C587) * C2129) *
                        C1282) *
                       C2130 * C2131 * C63 -
                   (((C714 * C542 + C2127 * C586) * C2129 +
                     (C714 * C516 + C2127 * C518) * C100) *
                        C1282 +
                    ((C714 * C102 + C2127 * C163) * C2129 +
                     (C714 * C70 + C2127 * C73) * C100) *
                        C1281) *
                       C2130 * C2131 * C64)) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[6] +=
        (2 * std::pow(Pi, 2.5) *
         (((C183 * C69 + C188 + C188 + C2129 * C184) * C2127 * C1281 +
           (C183 * C517 + C610 + C610 + C2129 * C607) * C2127 * C1282) *
              C2130 * C2131 * C63 -
          ((C183 * C516 + C609 + C609 + C2129 * C606) * C2127 * C1282 +
           C195 * C2127 * C1281) *
              C2130 * C2131 * C64)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[6] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1320 * C69 + C1281 * C132 + C1321 * C517 + C1282 * C565) * C100 +
           (C1320 * C101 + C1281 * C213 + C1321 * C543 + C1282 * C629) *
               C2129) *
              C2127 * C2130 * C2131 * C63 -
          ((C1321 * C542 + C1282 * C628 + C1320 * C102 + C1281 * C214) * C2129 +
           (C1321 * C516 + C1282 * C564 + C1320 * C70 + C1281 * C133) * C100) *
              C2127 * C2130 * C2131 * C64)) /
        (p * q * std::sqrt(p + q));
    d2eezx[6] += (2 * std::pow(Pi, 2.5) *
                  (((C714 * C69 + C2127 * C72) * C1320 +
                    (C714 * C132 + C2127 * C239) * C1281 +
                    (C714 * C517 + C2127 * C519) * C1321 +
                    (C714 * C565 + C2127 * C649) * C1282) *
                       C2129 * C2130 * C2131 * C63 -
                   ((C714 * C564 + C2127 * C648) * C1282 +
                    (C714 * C516 + C2127 * C518) * C1321 +
                    (C714 * C133 + C2127 * C240) * C1281 +
                    (C714 * C70 + C2127 * C73) * C1320) *
                       C2129 * C2130 * C2131 * C64)) /
                 (p * q * std::sqrt(p + q));
    d2eezy[6] +=
        (2 * std::pow(Pi, 2.5) *
         (((C100 * C69 + C2129 * C101) * C1320 +
           (C100 * C132 + C2129 * C260) * C1281 +
           (C100 * C517 + C2129 * C543) * C1321 +
           (C100 * C565 + C2129 * C669) * C1282) *
              C2127 * C2130 * C2131 * C63 -
          ((C100 * C564 + C2129 * C668) * C1282 +
           (C100 * C516 + C2129 * C542) * C1321 + C267 * C1281 + C112 * C1320) *
              C2127 * C2130 * C2131 * C64)) /
        (p * q * std::sqrt(p + q));
    d2eezz[6] += (2 * std::pow(Pi, 2.5) *
                  ((C1430 * C69 + C1433 + C1433 + C1281 * C287 + C1431 * C517 +
                    C1434 + C1434 + C1282 * C689) *
                       C2129 * C2127 * C2130 * C2131 * C63 -
                   (C1431 * C516 + C1435 + C1435 + C1282 * C688 + C1430 * C70 +
                    C1436 + C1436 + C1281 * C288) *
                       C2129 * C2127 * C2130 * C2131 * C64)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[7] += (2 * std::pow(Pi, 2.5) *
                  (((C713 * C69 + C716 + C716 + C2127 * C75) * C1281 +
                    (C713 * C517 + C1106 + C1106 + C2127 * C521) * C1282) *
                       C2129 * C2130 * C317 -
                   ((C713 * C1101 + C1105 + C1105 + C2127 * C1103) * C1282 +
                    C898 * C1281) *
                       C2129 * C2130 * C318) *
                  C2132) /
                 (p * q * std::sqrt(p + q));
    d2eexy[7] += (2 * std::pow(Pi, 2.5) *
                  ((((C100 * C69 + C2129 * C101) * C714 +
                     (C100 * C72 + C2129 * C104) * C2127) *
                        C1281 +
                    ((C100 * C517 + C2129 * C543) * C714 +
                     (C100 * C519 + C2129 * C545) * C2127) *
                        C1282) *
                       C2130 * C317 -
                   (((C100 * C1102 + C2129 * C1125) * C2127 +
                     (C100 * C1101 + C2129 * C1124) * C714) *
                        C1282 +
                    ((C100 * C323 + C2129 * C349) * C2127 +
                     (C100 * C321 + C2129 * C347) * C714) *
                        C1281) *
                       C2130 * C318) *
                  C2132) /
                 (p * q * std::sqrt(p + q));
    d2eexz[7] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1320 * C69 + C1281 * C132 + C1321 * C517 + C1282 * C565) * C714 +
           (C1320 * C72 + C1281 * C135 + C1321 * C519 + C1282 * C567) * C2127) *
              C2129 * C2130 * C317 -
          ((C1321 * C1102 + C1282 * C1145 + C1320 * C323 + C1281 * C371) *
               C2127 +
           (C1321 * C1101 + C1282 * C1144 + C1320 * C321 + C1281 * C369) *
               C714) *
              C2129 * C2130 * C318) *
         C2132) /
        (p * q * std::sqrt(p + q));
    d2eeyx[7] += (2 * std::pow(Pi, 2.5) *
                  ((((C714 * C69 + C2127 * C72) * C100 +
                     (C714 * C101 + C2127 * C162) * C2129) *
                        C1281 +
                    ((C714 * C517 + C2127 * C519) * C100 +
                     (C714 * C543 + C2127 * C587) * C2129) *
                        C1282) *
                       C2130 * C317 -
                   (((C714 * C1124 + C2127 * C1164) * C2129 +
                     (C714 * C1101 + C2127 * C1102) * C100) *
                        C1282 +
                    (C972 * C2129 + C971 * C100) * C1281) *
                       C2130 * C318) *
                  C2132) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[7] +=
        (2 * std::pow(Pi, 2.5) *
         (((C183 * C69 + C188 + C188 + C2129 * C184) * C2127 * C1281 +
           (C183 * C517 + C610 + C610 + C2129 * C607) * C2127 * C1282) *
              C2130 * C317 -
          ((C183 * C1101 + C1527 + C1527 + C2129 * C1183) * C2127 * C1282 +
           (C183 * C321 + C414 + C414 + C2129 * C411) * C2127 * C1281) *
              C2130 * C318) *
         C2132) /
        (p * q * std::sqrt(p + q));
    d2eeyz[7] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1320 * C69 + C1281 * C132 + C1321 * C517 + C1282 * C565) * C100 +
           (C1320 * C101 + C1281 * C213 + C1321 * C543 + C1282 * C629) *
               C2129) *
              C2127 * C2130 * C317 -
          ((C1321 * C1124 + C1282 * C1204 + C1320 * C347 + C1281 * C433) *
               C2129 +
           (C1321 * C1101 + C1282 * C1144 + C1320 * C321 + C1281 * C369) *
               C100) *
              C2127 * C2130 * C318) *
         C2132) /
        (p * q * std::sqrt(p + q));
    d2eezx[7] += (2 * std::pow(Pi, 2.5) *
                  (((C714 * C69 + C2127 * C72) * C1320 +
                    (C714 * C132 + C2127 * C239) * C1281 +
                    (C714 * C517 + C2127 * C519) * C1321 +
                    (C714 * C565 + C2127 * C649) * C1282) *
                       C2129 * C2130 * C317 -
                   ((C714 * C1144 + C2127 * C1223) * C1282 +
                    (C714 * C1101 + C2127 * C1102) * C1321 + C1038 * C1281 +
                    C971 * C1320) *
                       C2129 * C2130 * C318) *
                  C2132) /
                 (p * q * std::sqrt(p + q));
    d2eezy[7] += (2 * std::pow(Pi, 2.5) *
                  (((C100 * C69 + C2129 * C101) * C1320 +
                    (C100 * C132 + C2129 * C260) * C1281 +
                    (C100 * C517 + C2129 * C543) * C1321 +
                    (C100 * C565 + C2129 * C669) * C1282) *
                       C2127 * C2130 * C317 -
                   ((C100 * C1144 + C2129 * C1242) * C1282 +
                    (C100 * C1101 + C2129 * C1124) * C1321 +
                    (C100 * C369 + C2129 * C473) * C1281 +
                    (C100 * C321 + C2129 * C347) * C1320) *
                       C2127 * C2130 * C318) *
                  C2132) /
                 (p * q * std::sqrt(p + q));
    d2eezz[7] += (2 * std::pow(Pi, 2.5) *
                  ((C1430 * C69 + C1433 + C1433 + C1281 * C287 + C1431 * C517 +
                    C1434 + C1434 + C1282 * C689) *
                       C2129 * C2127 * C2130 * C317 -
                   (C1431 * C1101 + C1600 + C1600 + C1282 * C1261 +
                    C1430 * C321 + C1601 + C1601 + C1281 * C493) *
                       C2129 * C2127 * C2130 * C318) *
                  C2132) /
                 (p * q * std::sqrt(p + q));
    d2eexx[8] +=
        (2 * std::pow(Pi, 2.5) *
         (((C713 * C69 + C716 + C716 + C2127 * C75) * C1281 + C1628 * C1282) *
              C2129 * C514 -
          ((C713 * C1619 + C1625 + C1625 + C2127 * C1621) * C1282 +
           C1628 * C1281) *
              C2129 * C515) *
         C2131 * C2132) /
        (p * q * std::sqrt(p + q));
    d2eexy[8] += (2 * std::pow(Pi, 2.5) *
                  ((((C100 * C69 + C2129 * C101) * C714 +
                     (C100 * C72 + C2129 * C104) * C2127) *
                        C1281 +
                    (C1655 + C1656) * C1282) *
                       C514 -
                   (((C100 * C1620 + C2129 * C1647) * C2127 +
                     (C100 * C1619 + C2129 * C1646) * C714) *
                        C1282 +
                    (C1656 + C1655) * C1281) *
                       C515) *
                  C2131 * C2132) /
                 (p * q * std::sqrt(p + q));
    d2eexz[8] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1320 * C69 + C1281 * C132 + C1321 * C517 + C1282 * C565) * C714 +
           (C1320 * C72 + C1281 * C135 + C1321 * C519 + C1282 * C567) * C2127) *
              C2129 * C514 -
          ((C1321 * C1620 + C1282 * C1675 + C1320 * C519 + C1281 * C567) *
               C2127 +
           (C1321 * C1619 + C1282 * C1674 + C1320 * C517 + C1281 * C565) *
               C714) *
              C2129 * C515) *
         C2131 * C2132) /
        (p * q * std::sqrt(p + q));
    d2eeyx[8] += (2 * std::pow(Pi, 2.5) *
                  ((((C714 * C69 + C2127 * C72) * C100 +
                     (C714 * C101 + C2127 * C162) * C2129) *
                        C1281 +
                    (C1702 + C1703) * C1282) *
                       C514 -
                   (((C714 * C1646 + C2127 * C1694) * C2129 +
                     (C714 * C1619 + C2127 * C1620) * C100) *
                        C1282 +
                    (C1703 + C1702) * C1281) *
                       C515) *
                  C2131 * C2132) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[8] +=
        (2 * std::pow(Pi, 2.5) *
         (((C183 * C69 + C188 + C188 + C2129 * C184) * C2127 * C1281 +
           C1729 * C1282) *
              C514 -
          ((C183 * C1619 + C1725 + C1725 + C2129 * C1721) * C2127 * C1282 +
           C1729 * C1281) *
              C515) *
         C2131 * C2132) /
        (p * q * std::sqrt(p + q));
    d2eeyz[8] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1320 * C69 + C1281 * C132 + C1321 * C517 + C1282 * C565) * C100 +
           (C1320 * C101 + C1281 * C213 + C1321 * C543 + C1282 * C629) *
               C2129) *
              C2127 * C514 -
          ((C1321 * C1646 + C1282 * C1747 + C1320 * C543 + C1281 * C629) *
               C2129 +
           (C1321 * C1619 + C1282 * C1674 + C1320 * C517 + C1281 * C565) *
               C100) *
              C2127 * C515) *
         C2131 * C2132) /
        (p * q * std::sqrt(p + q));
    d2eezx[8] += (2 * std::pow(Pi, 2.5) *
                  (((C714 * C69 + C2127 * C72) * C1320 +
                    (C714 * C132 + C2127 * C239) * C1281 + C1700 * C1321 +
                    C1770 * C1282) *
                       C2129 * C514 -
                   ((C714 * C1674 + C2127 * C1766) * C1282 +
                    (C714 * C1619 + C2127 * C1620) * C1321 + C1770 * C1281 +
                    C1700 * C1320) *
                       C2129 * C515) *
                  C2131 * C2132) /
                 (p * q * std::sqrt(p + q));
    d2eezy[8] += (2 * std::pow(Pi, 2.5) *
                  (((C100 * C69 + C2129 * C101) * C1320 +
                    (C100 * C132 + C2129 * C260) * C1281 + C1653 * C1321 +
                    C1792 * C1282) *
                       C2127 * C514 -
                   ((C100 * C1674 + C2129 * C1788) * C1282 +
                    (C100 * C1619 + C2129 * C1646) * C1321 + C1792 * C1281 +
                    C1653 * C1320) *
                       C2127 * C515) *
                  C2131 * C2132) /
                 (p * q * std::sqrt(p + q));
    d2eezz[8] += (2 * std::pow(Pi, 2.5) *
                  ((C1430 * C69 + C1433 + C1433 + C1281 * C287 + C1431 * C517 +
                    C1434 + C1434 + C1282 * C689) *
                       C2129 * C2127 * C514 -
                   (C1431 * C1619 + C1812 + C1812 + C1282 * C1810 +
                    C1430 * C517 + C1813 + C1813 + C1281 * C689) *
                       C2129 * C2127 * C515) *
                  C2131 * C2132) /
                 (p * q * std::sqrt(p + q));
    
}
