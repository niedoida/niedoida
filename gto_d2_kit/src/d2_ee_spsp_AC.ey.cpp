/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_spsp_AC.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
void second_derivative_ee_0101_13(const double ae,
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
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    const double C1794 = ae + be;
    const double C1793 = xA - xB;
    const double C1802 = ce + de;
    const double C1801 = xC - xD;
    const double C1819 = yC - yD;
    const double C1826 = zC - zD;
    const double C1835 = yA - yB;
    const double C1842 = zA - zB;
    const double C1848 = p + q;
    const double C1847 = p * q;
    const double C1853 = xP - xQ;
    const double C1852 = bs[2];
    const double C1862 = ae * ce;
    const double C1858 = bs[3];
    const double C1871 = yP - yQ;
    const double C1881 = zP - zQ;
    const double C69 = bs[0];
    const double C2125 = ce * de;
    const double C2122 = ae * be;
    const double C2123 = 2 * C1794;
    const double C2121 = std::pow(C1793, 2);
    const double C1854 = C1802 * C1794;
    const double C2126 = 2 * C1802;
    const double C2124 = std::pow(C1801, 2);
    const double C2130 = std::pow(C1819, 2);
    const double C2129 = std::pow(C1826, 2);
    const double C2127 = std::pow(C1835, 2);
    const double C2128 = std::pow(C1842, 2);
    const double C1849 = 2 * C1847;
    const double C1863 = C1853 * ae;
    const double C1861 = std::pow(C1853, 2);
    const double C1859 = C1853 * ce;
    const double C1874 = C1853 * C1871;
    const double C1873 = C1871 * ce;
    const double C1893 = C1871 * C1853;
    const double C1892 = C1871 * ae;
    const double C1901 = std::pow(C1871, 2);
    const double C1884 = C1853 * C1881;
    const double C1883 = C1881 * ce;
    const double C1905 = C1871 * C1881;
    const double C1912 = C1881 * C1853;
    const double C1911 = C1881 * ae;
    const double C1920 = C1881 * C1871;
    const double C1926 = std::pow(C1881, 2);
    const double C2132 = std::pow(C2123, -1);
    const double C2131 = C2121 * C2122;
    const double C2134 = std::pow(C2126, -1);
    const double C2133 = C2124 * C2125;
    const double C2138 = C2130 * C2125;
    const double C2137 = C2129 * C2125;
    const double C2135 = C2127 * C2122;
    const double C2136 = C2128 * C2122;
    const double C1851 = C1849 / C1848;
    const double C78 =
        (-((std::pow(xP - xQ, 2) * bs[2] * std::pow(C1849 / C1848, 2) -
            (bs[1] * C1849) / C1848) *
           ae * ce) /
         C1802) /
        C1794;
    const double C70 = -(C1853 * bs[1] * C1849) / C1848;
    const double C320 = -(C1871 * bs[1] * C1849) / C1848;
    const double C518 = -(C1881 * bs[1] * C1849) / C1848;
    const double C1866 = C1858 * C1863;
    const double C72 = (-(bs[1] * C1863 * C1849) / C1848) / C1794;
    const double C1865 = C1858 * C1859;
    const double C74 = (bs[1] * C1859 * C1849) / (C1848 * C1802);
    const double C1876 = C1874 * ae;
    const double C1875 = C1858 * C1873;
    const double C100 = (bs[1] * C1873 * C1849) / (C1848 * C1802);
    const double C1895 = C1893 * ae;
    const double C1894 = C1858 * C1892;
    const double C150 = (-(bs[1] * C1892 * C1849) / C1848) / C1794;
    const double C1886 = C1884 * ae;
    const double C1885 = C1858 * C1883;
    const double C125 = (bs[1] * C1883 * C1849) / (C1848 * C1802);
    const double C1906 = C1905 * ae;
    const double C1914 = C1912 * ae;
    const double C1913 = C1858 * C1911;
    const double C233 = (-(bs[1] * C1911 * C1849) / C1848) / C1794;
    const double C1921 = C1920 * ae;
    const double C2139 = C2131 / C1794;
    const double C2140 = C2133 / C1802;
    const double C2144 = C2138 / C1802;
    const double C2143 = C2137 / C1802;
    const double C2141 = C2135 / C1794;
    const double C2142 = C2136 / C1794;
    const double C1855 = std::pow(C1851, 2);
    const double C1857 = -C1851;
    const double C1878 = C1876 * ce;
    const double C1897 = C1895 * ce;
    const double C1888 = C1886 * ce;
    const double C1907 = C1906 * ce;
    const double C1916 = C1914 * ce;
    const double C1922 = C1921 * ce;
    const double C2145 = -C2139;
    const double C2146 = -C2140;
    const double C2150 = -C2144;
    const double C2149 = -C2143;
    const double C2147 = -C2141;
    const double C2148 = -C2142;
    const double C1860 = C1852 * C1855;
    const double C79 =
        (-(C1855 * C1852 * C1853 * ae * ce) / C1802) / C1794 -
        (ae * C1855 * C1852 * C1853 * ce) / C1854 -
        (C1853 *
         (C1852 * C1855 + std::pow(C1853, 2) * bs[3] * std::pow(-C1851, 3)) *
         ae * ce) /
            C1854;
    const double C103 =
        (-(C1855 * C1852 * C1853 * (yP - yQ) * ae * ce) / C1802) / C1794;
    const double C128 =
        (-(C1855 * C1852 * C1853 * (zP - zQ) * ae * ce) / C1802) / C1794;
    const double C153 =
        (-(C1855 * C1852 * C1871 * C1853 * ae * ce) / C1802) / C1794;
    const double C180 =
        (-((std::pow(C1871, 2) * C1852 * C1855 - (bs[1] * C1849) / C1848) *
           C1862) /
         C1802) /
        C1794;
    const double C206 =
        (-(C1855 * C1852 * C1871 * C1881 * ae * ce) / C1802) / C1794;
    const double C236 =
        (-(C1855 * C1852 * C1881 * C1853 * ae * ce) / C1802) / C1794;
    const double C263 =
        (-(C1855 * C1852 * C1881 * C1871 * ae * ce) / C1802) / C1794;
    const double C289 =
        (-((std::pow(C1881, 2) * C1852 * C1855 - (bs[1] * C1849) / C1848) *
           C1862) /
         C1802) /
        C1794;
    const double C73 = (C1853 * C1855 * C1852 * C1863) / C1794 -
                       (ae * bs[1] * C1849) / (C1848 * C1794);
    const double C75 = (ce * bs[1] * C1849) / (C1848 * C1802) -
                       (C1853 * C1855 * C1852 * C1859) / C1802;
    const double C101 = -(C1853 * C1855 * C1852 * C1873) / C1802;
    const double C126 = -(C1853 * C1855 * C1852 * C1883) / C1802;
    const double C151 = (C1853 * C1855 * C1852 * C1892) / C1794;
    const double C234 = (C1853 * C1855 * C1852 * C1911) / C1794;
    const double C322 = -(C1871 * C1855 * C1852 * C1859) / C1802;
    const double C324 = (C1871 * C1855 * C1852 * C1863) / C1794;
    const double C348 = (ce * bs[1] * C1849) / (C1848 * C1802) -
                        (C1871 * C1855 * C1852 * C1873) / C1802;
    const double C370 = -(C1871 * C1855 * C1852 * C1883) / C1802;
    const double C392 = (C1871 * C1855 * C1852 * C1892) / C1794 -
                        (ae * bs[1] * C1849) / (C1848 * C1794);
    const double C454 = (C1871 * C1855 * C1852 * C1911) / C1794;
    const double C520 = -(C1881 * C1855 * C1852 * C1859) / C1802;
    const double C522 = (C1881 * C1855 * C1852 * C1863) / C1794;
    const double C544 = -(C1881 * C1855 * C1852 * C1873) / C1802;
    const double C568 = (ce * bs[1] * C1849) / (C1848 * C1802) -
                        (C1881 * C1855 * C1852 * C1883) / C1802;
    const double C590 = (C1881 * C1855 * C1852 * C1892) / C1794;
    const double C652 = (C1881 * C1855 * C1852 * C1911) / C1794 -
                        (ae * bs[1] * C1849) / (C1848 * C1794);
    const double C1864 = std::pow(C1857, 3);
    const double C2151 = std::exp(C2145);
    const double C2152 = std::exp(C2146);
    const double C2156 = std::exp(C2150);
    const double C2155 = std::exp(C2149);
    const double C2153 = std::exp(C2147);
    const double C2154 = std::exp(C2148);
    const double C71 = C1860 * C1861 - (bs[1] * C1849) / C1848;
    const double C319 = C1871 * C1853 * C1860;
    const double C517 = C1881 * C1853 * C1860;
    const double C881 = C1860 * C1901 - (bs[1] * C1849) / C1848;
    const double C1091 = C1881 * C1871 * C1860;
    const double C1597 = C1860 * C1926 - (bs[1] * C1849) / C1848;
    const double C1868 = C1864 * C1866;
    const double C1867 = C1864 * C1865;
    const double C1877 = C1864 * C1875;
    const double C1887 = C1864 * C1885;
    const double C1896 = C1864 * C1894;
    const double C1915 = C1864 * C1913;
    const double C104 =
        (-(C1853 * C1864 * C1858 * C1853 * C1871 * ae * ce) / C1802) / C1794 -
        (ae * C1855 * C1852 * C1871 * ce) / C1854;
    const double C129 =
        (-(C1853 * C1864 * C1858 * C1853 * C1881 * ae * ce) / C1802) / C1794 -
        (ae * C1855 * C1852 * C1881 * ce) / C1854;
    const double C154 =
        (-(C1853 * C1864 * C1858 * C1871 * C1853 * ae * ce) / C1802) / C1794 -
        (C1855 * C1852 * C1871 * ae * ce) / C1854;
    const double C181 =
        (-(C1853 * (C1860 + std::pow(C1871, 2) * C1858 * C1864) * C1862) /
         C1802) /
        C1794;
    const double C182 =
        (-((C1858 * C1864 + C1901 * bs[4] * std::pow(C1851, 4)) * C1862 *
           C1861) /
         C1802) /
            C1794 -
        ((C1860 + C1901 * C1858 * C1864) * C1862) / C1854;
    const double C207 =
        (-(C1853 * C1864 * C1858 * C1871 * C1881 * ae * ce) / C1802) / C1794;
    const double C208 =
        (-(std::pow(C1851, 4) * bs[4] * C1907 * C1861) / C1802) / C1794 -
        (C1864 * C1858 * C1907) / C1854;
    const double C237 =
        (-(C1853 * C1864 * C1858 * C1881 * C1853 * ae * ce) / C1802) / C1794 -
        (C1855 * C1852 * C1881 * ae * ce) / C1854;
    const double C264 =
        (-(C1853 * C1864 * C1858 * C1881 * C1871 * ae * ce) / C1802) / C1794;
    const double C265 =
        (-(std::pow(C1851, 4) * bs[4] * C1922 * C1861) / C1802) / C1794 -
        (C1864 * C1858 * C1922) / C1854;
    const double C290 =
        (-(C1853 * (C1860 + std::pow(C1881, 2) * C1858 * C1864) * C1862) /
         C1802) /
        C1794;
    const double C291 =
        (-((C1858 * C1864 + C1926 * bs[4] * std::pow(C1851, 4)) * C1862 *
           C1861) /
         C1802) /
            C1794 -
        ((C1860 + C1926 * C1858 * C1864) * C1862) / C1854;
    const double C326 =
        (-(C1871 * (C1860 + C1861 * C1858 * C1864) * C1862) / C1802) / C1794;
    const double C350 = (-(C1871 * C1864 * C1858 * C1878) / C1802) / C1794 -
                        (C1855 * C1852 * C1863 * ce) / C1854;
    const double C372 = (-(C1871 * C1864 * C1858 * C1888) / C1802) / C1794;
    const double C394 = (-(C1871 * C1864 * C1858 * C1897) / C1802) / C1794 -
                        (ae * C1855 * C1852 * C1859) / C1854;
    const double C413 =
        (-(C1855 * C1852 * C1892 * ce) / C1802) / C1794 -
        (ae * C1855 * C1852 * C1873) / C1854 -
        (C1871 * (C1860 + C1901 * C1858 * C1864) * C1862) / C1854;
    const double C434 = (-(C1871 * C1864 * C1858 * C1907) / C1802) / C1794 -
                        (ae * C1855 * C1852 * C1883) / C1854;
    const double C456 = (-(C1871 * C1864 * C1858 * C1916) / C1802) / C1794;
    const double C475 = (-(C1871 * C1864 * C1858 * C1922) / C1802) / C1794 -
                        (C1855 * C1852 * C1911 * ce) / C1854;
    const double C495 =
        (-(C1871 * C1853 *
           (C1858 * C1864 + C1926 * bs[4] * std::pow(C1851, 4)) * C1862) /
         C1802) /
        C1794;
    const double C496 =
        (-(C1871 * (C1860 + C1926 * C1858 * C1864) * C1862) / C1802) / C1794;
    const double C524 =
        (-(C1881 * (C1860 + C1861 * C1858 * C1864) * C1862) / C1802) / C1794;
    const double C546 = (-(C1881 * C1864 * C1858 * C1878) / C1802) / C1794;
    const double C570 = (-(C1881 * C1864 * C1858 * C1888) / C1802) / C1794 -
                        (C1855 * C1852 * C1863 * ce) / C1854;
    const double C592 = (-(C1881 * C1864 * C1858 * C1897) / C1802) / C1794;
    const double C611 =
        (-(C1881 * C1853 *
           (C1858 * C1864 + C1901 * bs[4] * std::pow(C1851, 4)) * C1862) /
         C1802) /
        C1794;
    const double C612 =
        (-(C1881 * (C1860 + C1901 * C1858 * C1864) * C1862) / C1802) / C1794;
    const double C631 = (-(C1881 * C1864 * C1858 * C1907) / C1802) / C1794 -
                        (C1855 * C1852 * C1892 * ce) / C1854;
    const double C654 = (-(C1881 * C1864 * C1858 * C1916) / C1802) / C1794 -
                        (ae * C1855 * C1852 * C1859) / C1854;
    const double C674 = (-(C1881 * C1864 * C1858 * C1922) / C1802) / C1794 -
                        (ae * C1855 * C1852 * C1873) / C1854;
    const double C693 =
        (-(C1855 * C1852 * C1911 * ce) / C1802) / C1794 -
        (ae * C1855 * C1852 * C1883) / C1854 -
        (C1881 * (C1860 + C1926 * C1858 * C1864) * C1862) / C1854;
    const double C884 =
        (-((C1858 * C1864 + C1861 * bs[4] * std::pow(C1851, 4)) * C1862 *
           C1901) /
         C1802) /
            C1794 -
        ((C1860 + C1861 * C1858 * C1864) * C1862) / C1854;
    const double C935 =
        (-(std::pow(C1851, 4) * bs[4] * C1888 * C1901) / C1802) / C1794 -
        (C1864 * C1858 * C1888) / C1854;
    const double C1018 =
        (-(std::pow(C1851, 4) * bs[4] * C1916 * C1901) / C1802) / C1794 -
        (C1864 * C1858 * C1916) / C1854;
    const double C1067 =
        (-((C1858 * C1864 + C1926 * bs[4] * std::pow(C1851, 4)) * C1862 *
           C1901) /
         C1802) /
            C1794 -
        ((C1860 + C1926 * C1858 * C1864) * C1862) / C1854;
    const double C1094 =
        (-(C1881 * C1871 *
           (C1858 * C1864 + C1861 * bs[4] * std::pow(C1851, 4)) * C1862) /
         C1802) /
        C1794;
    const double C1600 =
        (-((C1858 * C1864 + C1861 * bs[4] * std::pow(C1851, 4)) * C1862 *
           C1926) /
         C1802) /
            C1794 -
        ((C1860 + C1861 * C1858 * C1864) * C1862) / C1854;
    const double C1628 =
        (-(std::pow(C1851, 4) * bs[4] * C1878 * C1926) / C1802) / C1794 -
        (C1864 * C1858 * C1878) / C1854;
    const double C1676 =
        (-(std::pow(C1851, 4) * bs[4] * C1897 * C1926) / C1802) / C1794 -
        (C1864 * C1858 * C1897) / C1854;
    const double C1703 =
        (-((C1858 * C1864 + C1901 * bs[4] * std::pow(C1851, 4)) * C1862 *
           C1926) /
         C1802) /
            C1794 -
        ((C1860 + C1901 * C1858 * C1864) * C1862) / C1854;
    const double C887 = C2151 * C324;
    const double C1603 = C2151 * C522;
    const double C65 =
        ((C2151 - (C1793 * 2 * ae * be * C1793 * C2151) / C1794) * ae) / C1794 -
        (0 * be) / (2 * std::pow(C1794, 2));
    const double C66 =
        (0 * ae) / C1794 - (ae * be * C1793 * C2151) / std::pow(C1794, 2);
    const double C716 = -(2 * ae * be * C1793 * C2151) / C1794;
    const double C57 = (C2151 * C1793 * ae) / C1794;
    const double C58 = C2132 * C2151;
    const double C67 =
        ((C2152 - (C1801 * 2 * ce * de * C1801 * C2152) / C1802) * ce) / C1802 -
        (0 * de) / (2 * std::pow(C1802, 2));
    const double C68 =
        (0 * ce) / C1802 - (ce * de * C1801 * C2152) / std::pow(C1802, 2);
    const double C318 = -(2 * ce * de * C1801 * C2152) / C1802;
    const double C59 = (C2152 * C1801 * ce) / C1802;
    const double C60 = C2134 * C2152;
    const double C99 = -(2 * ce * de * (yC - yD) * C2156) / C1802;
    const double C345 =
        ((C2156 - (C1819 * 2 * ce * de * C1819 * C2156) / C1802) * ce) / C1802 -
        (0 * de) / (2 * std::pow(C1802, 2));
    const double C346 =
        (0 * ce) / C1802 - (ce * de * C1819 * C2156) / std::pow(C1802, 2);
    const double C316 = (C2156 * C1819 * ce) / C1802;
    const double C317 = C2134 * C2156;
    const double C124 = -(2 * ce * de * (zC - zD) * C2155) / C1802;
    const double C565 =
        ((C2155 - (C1826 * 2 * ce * de * C1826 * C2155) / C1802) * ce) / C1802 -
        (0 * de) / (2 * std::pow(C1802, 2));
    const double C566 =
        (0 * ce) / C1802 - (ce * de * C1826 * C2155) / std::pow(C1802, 2);
    const double C515 = (C2155 * C1826 * ce) / C1802;
    const double C516 = C2134 * C2155;
    const double C158 = C2153 * C151;
    const double C1679 = C2153 * C590;
    const double C149 = -(2 * ae * be * (yA - yB) * C2153) / C1794;
    const double C771 =
        ((C2153 - (C1835 * 2 * ae * be * C1835 * C2153) / C1794) * ae) / C1794 -
        (0 * be) / (2 * std::pow(C1794, 2));
    const double C772 =
        (0 * ae) / C1794 - (ae * be * C1835 * C2153) / std::pow(C1794, 2);
    const double C714 = (C2153 * C1835 * ae) / C1794;
    const double C715 = C2132 * C2153;
    const double C241 = C2154 * C234;
    const double C1021 = C2154 * C454;
    const double C232 = -(2 * ae * be * (zA - zB) * C2154) / C1794;
    const double C1379 =
        ((C2154 - (C1842 * 2 * ae * be * C1842 * C2154) / C1794) * ae) / C1794 -
        (0 * be) / (2 * std::pow(C1794, 2));
    const double C1380 =
        (0 * ae) / C1794 - (ae * be * C1842 * C2154) / std::pow(C1794, 2);
    const double C1269 = (C2154 * C1842 * ae) / C1794;
    const double C1270 = C2132 * C2154;
    const double C912 =
        (-(C1871 * C1868 * ce) / C1802) / C1794 -
        (C1864 * C1858 * C1878) / C1854 +
        C1871 *
            ((-(C1871 * std::pow(C1851, 4) * bs[4] * C1878) / C1802) / C1794 -
             (C1868 * ce) / C1854);
    const double C1114 =
        C1881 *
        ((-(C1871 * std::pow(C1851, 4) * bs[4] * C1878) / C1802) / C1794 -
         (C1868 * ce) / C1854);
    const double C1134 =
        (-(C1881 * C1871 * std::pow(C1851, 4) * bs[4] * C1888) / C1802) /
            C1794 -
        (C1871 * C1868 * ce) / C1854;
    const double C1653 =
        (-(C1881 * C1868 * ce) / C1802) / C1794 -
        (C1864 * C1858 * C1888) / C1854 +
        C1881 *
            ((-(C1881 * std::pow(C1851, 4) * bs[4] * C1888) / C1802) / C1794 -
             (C1868 * ce) / C1854);
    const double C76 =
        (C1855 * C1852 * C1863 + C1853 * (C1853 * C1868 + C1860 * ae) +
         C1853 * C1860 * ae) /
        C1794;
    const double C323 = (C1871 * (C1853 * C1868 + C1860 * ae)) / C1794;
    const double C521 = (C1881 * (C1853 * C1868 + C1860 * ae)) / C1794;
    const double C883 = (C1855 * C1852 * C1863 + C1868 * C1901) / C1794;
    const double C1093 = (C1881 * C1871 * C1868) / C1794;
    const double C1599 = (C1855 * C1852 * C1863 + C1868 * C1926) / C1794;
    const double C80 =
        (-(ae * (C1853 * C1867 + C1860 * ce)) / C1802) / C1794 -
        ((C1860 + C1861 * C1858 * C1864) * C1862) / C1854 -
        ((C1853 * C1868 + C1860 * ae) * ce) / C1854 +
        C1853 * ((-(C1868 * ce) / C1802) / C1794 - (ae * C1867) / C1854 -
                 (C1853 * (C1858 * C1864 + C1861 * bs[4] * std::pow(C1851, 4)) *
                  C1862) /
                     C1854);
    const double C325 =
        (-(C1871 * C1868 * ce) / C1802) / C1794 - (ae * C1871 * C1867) / C1854 -
        (C1853 * C1871 * (C1858 * C1864 + C1861 * bs[4] * std::pow(C1851, 4)) *
         C1862) /
            C1854;
    const double C523 =
        (-(C1881 * C1868 * ce) / C1802) / C1794 - (ae * C1881 * C1867) / C1854 -
        (C1853 * C1881 * (C1858 * C1864 + C1861 * bs[4] * std::pow(C1851, 4)) *
         C1862) /
            C1854;
    const double C960 =
        (-(ae * C1871 * C1867) / C1802) / C1794 -
        (C1864 * C1858 * C1897) / C1854 +
        C1871 *
            ((-(C1871 * std::pow(C1851, 4) * bs[4] * C1897) / C1802) / C1794 -
             (ae * C1867) / C1854);
    const double C1154 =
        (-(C1871 * C1881 * std::pow(C1851, 4) * bs[4] * C1897) / C1802) /
            C1794 -
        (ae * C1881 * C1867) / C1854;
    const double C1212 =
        (-(C1881 * C1871 * std::pow(C1851, 4) * bs[4] * C1916) / C1802) /
            C1794 -
        (ae * C1871 * C1867) / C1854;
    const double C1750 =
        (-(ae * C1881 * C1867) / C1802) / C1794 -
        (C1864 * C1858 * C1916) / C1854 +
        C1881 *
            ((-(C1881 * std::pow(C1851, 4) * bs[4] * C1916) / C1802) / C1794 -
             (ae * C1867) / C1854);
    const double C77 = -(C1853 * (C1853 * C1867 + C1860 * ce) +
                         C1855 * C1852 * C1859 + C1853 * C1860 * ce) /
                       C1802;
    const double C321 = -(C1871 * (C1853 * C1867 + C1860 * ce)) / C1802;
    const double C519 = -(C1881 * (C1853 * C1867 + C1860 * ce)) / C1802;
    const double C882 = -(C1867 * C1901 + C1855 * C1852 * C1859) / C1802;
    const double C1092 = -(C1881 * C1871 * C1867) / C1802;
    const double C1598 = -(C1867 * C1926 + C1855 * C1852 * C1859) / C1802;
    const double C105 =
        (-(ae * C1853 * C1877) / C1802) / C1794 -
        (C1864 * C1858 * C1878) / C1854 +
        C1853 *
            ((-(C1853 * std::pow(C1851, 4) * bs[4] * C1878) / C1802) / C1794 -
             (ae * C1877) / C1854);
    const double C349 =
        C1871 *
            ((-(C1853 * std::pow(C1851, 4) * bs[4] * C1878) / C1802) / C1794 -
             (ae * C1877) / C1854) -
        ((C1853 * C1868 + C1860 * ae) * ce) / C1854;
    const double C545 =
        C1881 *
        ((-(C1853 * std::pow(C1851, 4) * bs[4] * C1878) / C1802) / C1794 -
         (ae * C1877) / C1854);
    const double C673 =
        (-(C1881 * C1853 * std::pow(C1851, 4) * bs[4] * C1922) / C1802) /
            C1794 -
        (ae * C1853 * C1877) / C1854;
    const double C1769 =
        (-(ae * C1881 * C1877) / C1802) / C1794 -
        (C1864 * C1858 * C1922) / C1854 +
        C1881 *
            ((-(C1881 * std::pow(C1851, 4) * bs[4] * C1922) / C1802) / C1794 -
             (ae * C1877) / C1854);
    const double C102 = -(C1877 * C1861 + C1855 * C1852 * C1873) / C1802;
    const double C347 = -(C1871 * C1853 * C1877 + C1853 * C1860 * ce) / C1802;
    const double C543 = -(C1881 * C1853 * C1877) / C1802;
    const double C911 = -(C1871 * (C1871 * C1877 + C1860 * ce) +
                          C1855 * C1852 * C1873 + C1871 * C1860 * ce) /
                        C1802;
    const double C1113 = -(C1881 * (C1871 * C1877 + C1860 * ce)) / C1802;
    const double C1627 = -(C1877 * C1926 + C1855 * C1852 * C1873) / C1802;
    const double C130 =
        (-(ae * C1853 * C1887) / C1802) / C1794 -
        (C1864 * C1858 * C1888) / C1854 +
        C1853 *
            ((-(C1853 * std::pow(C1851, 4) * bs[4] * C1888) / C1802) / C1794 -
             (ae * C1887) / C1854);
    const double C371 =
        C1871 *
        ((-(C1853 * std::pow(C1851, 4) * bs[4] * C1888) / C1802) / C1794 -
         (ae * C1887) / C1854);
    const double C433 =
        (-(C1871 * C1853 * std::pow(C1851, 4) * bs[4] * C1907) / C1802) /
            C1794 -
        (ae * C1853 * C1887) / C1854;
    const double C569 =
        C1881 *
            ((-(C1853 * std::pow(C1851, 4) * bs[4] * C1888) / C1802) / C1794 -
             (ae * C1887) / C1854) -
        ((C1853 * C1868 + C1860 * ae) * ce) / C1854;
    const double C998 =
        (-(ae * C1871 * C1887) / C1802) / C1794 -
        (C1864 * C1858 * C1907) / C1854 +
        C1871 *
            ((-(C1871 * std::pow(C1851, 4) * bs[4] * C1907) / C1802) / C1794 -
             (ae * C1887) / C1854);
    const double C127 = -(C1887 * C1861 + C1855 * C1852 * C1883) / C1802;
    const double C369 = -(C1871 * C1853 * C1887) / C1802;
    const double C567 = -(C1881 * C1853 * C1887 + C1853 * C1860 * ce) / C1802;
    const double C934 = -(C1887 * C1901 + C1855 * C1852 * C1883) / C1802;
    const double C1133 = -(C1881 * C1871 * C1887 + C1871 * C1860 * ce) / C1802;
    const double C1652 = -(C1881 * (C1881 * C1887 + C1860 * ce) +
                           C1855 * C1852 * C1883 + C1881 * C1860 * ce) /
                         C1802;
    const double C155 =
        (-(C1853 * C1896 * ce) / C1802) / C1794 -
        (C1864 * C1858 * C1897) / C1854 +
        C1853 *
            ((-(C1853 * std::pow(C1851, 4) * bs[4] * C1897) / C1802) / C1794 -
             (C1896 * ce) / C1854);
    const double C393 =
        C1871 *
            ((-(C1853 * std::pow(C1851, 4) * bs[4] * C1897) / C1802) / C1794 -
             (C1896 * ce) / C1854) -
        (ae * (C1853 * C1867 + C1860 * ce)) / C1854;
    const double C414 =
        (-(C1853 * C1896 * ce) / C1802) / C1794 - (ae * C1853 * C1877) / C1854 -
        (C1871 * C1853 * (C1858 * C1864 + C1901 * bs[4] * std::pow(C1851, 4)) *
         C1862) /
            C1854;
    const double C591 =
        C1881 *
        ((-(C1853 * std::pow(C1851, 4) * bs[4] * C1897) / C1802) / C1794 -
         (C1896 * ce) / C1854);
    const double C632 =
        (-(C1881 * C1853 * std::pow(C1851, 4) * bs[4] * C1907) / C1802) /
            C1794 -
        (C1853 * C1896 * ce) / C1854;
    const double C979 =
        (-(ae * (C1871 * C1877 + C1860 * ce)) / C1802) / C1794 -
        ((C1860 + C1901 * C1858 * C1864) * C1862) / C1854 -
        ((C1871 * C1896 + C1860 * ae) * ce) / C1854 +
        C1871 * ((-(C1896 * ce) / C1802) / C1794 - (ae * C1877) / C1854 -
                 (C1871 * (C1858 * C1864 + C1901 * bs[4] * std::pow(C1851, 4)) *
                  C1862) /
                     C1854);
    const double C1173 =
        (-(C1881 * C1896 * ce) / C1802) / C1794 - (ae * C1881 * C1877) / C1854 -
        (C1871 * C1881 * (C1858 * C1864 + C1901 * bs[4] * std::pow(C1851, 4)) *
         C1862) /
            C1854;
    const double C1192 =
        C1871 *
            ((-(C1881 * std::pow(C1851, 4) * bs[4] * C1907) / C1802) / C1794 -
             (C1896 * ce) / C1854) -
        (ae * (C1881 * C1887 + C1860 * ce)) / C1854;
    const double C1727 =
        (-(C1881 * C1896 * ce) / C1802) / C1794 -
        (C1864 * C1858 * C1907) / C1854 +
        C1881 *
            ((-(C1881 * std::pow(C1851, 4) * bs[4] * C1907) / C1802) / C1794 -
             (C1896 * ce) / C1854);
    const double C152 = (C1855 * C1852 * C1892 + C1896 * C1861) / C1794;
    const double C391 = (C1871 * C1853 * C1896 + C1853 * C1860 * ae) / C1794;
    const double C589 = (C1881 * C1853 * C1896) / C1794;
    const double C959 =
        (C1855 * C1852 * C1892 + C1871 * (C1871 * C1896 + C1860 * ae) +
         C1871 * C1860 * ae) /
        C1794;
    const double C1153 = (C1881 * (C1871 * C1896 + C1860 * ae)) / C1794;
    const double C1675 = (C1855 * C1852 * C1892 + C1896 * C1926) / C1794;
    const double C238 =
        (-(C1853 * C1915 * ce) / C1802) / C1794 -
        (C1864 * C1858 * C1916) / C1854 +
        C1853 *
            ((-(C1853 * std::pow(C1851, 4) * bs[4] * C1916) / C1802) / C1794 -
             (C1915 * ce) / C1854);
    const double C455 =
        C1871 *
        ((-(C1853 * std::pow(C1851, 4) * bs[4] * C1916) / C1802) / C1794 -
         (C1915 * ce) / C1854);
    const double C476 =
        (-(C1871 * C1853 * std::pow(C1851, 4) * bs[4] * C1922) / C1802) /
            C1794 -
        (C1853 * C1915 * ce) / C1854;
    const double C653 =
        C1881 *
            ((-(C1853 * std::pow(C1851, 4) * bs[4] * C1916) / C1802) / C1794 -
             (C1915 * ce) / C1854) -
        (ae * (C1853 * C1867 + C1860 * ce)) / C1854;
    const double C694 =
        (-(C1853 * C1915 * ce) / C1802) / C1794 - (ae * C1853 * C1887) / C1854 -
        (C1881 * C1853 * (C1858 * C1864 + C1926 * bs[4] * std::pow(C1851, 4)) *
         C1862) /
            C1854;
    const double C1045 =
        (-(C1871 * C1915 * ce) / C1802) / C1794 -
        (C1864 * C1858 * C1922) / C1854 +
        C1871 *
            ((-(C1871 * std::pow(C1851, 4) * bs[4] * C1922) / C1802) / C1794 -
             (C1915 * ce) / C1854);
    const double C1231 =
        C1881 *
            ((-(C1871 * std::pow(C1851, 4) * bs[4] * C1922) / C1802) / C1794 -
             (C1915 * ce) / C1854) -
        (ae * (C1871 * C1877 + C1860 * ce)) / C1854;
    const double C1250 =
        (-(C1871 * C1915 * ce) / C1802) / C1794 - (ae * C1871 * C1887) / C1854 -
        (C1881 * C1871 * (C1858 * C1864 + C1926 * bs[4] * std::pow(C1851, 4)) *
         C1862) /
            C1854;
    const double C1788 =
        (-(ae * (C1881 * C1887 + C1860 * ce)) / C1802) / C1794 -
        ((C1860 + C1926 * C1858 * C1864) * C1862) / C1854 -
        ((C1881 * C1915 + C1860 * ae) * ce) / C1854 +
        C1881 * ((-(C1915 * ce) / C1802) / C1794 - (ae * C1887) / C1854 -
                 (C1881 * (C1858 * C1864 + C1926 * bs[4] * std::pow(C1851, 4)) *
                  C1862) /
                     C1854);
    const double C235 = (C1855 * C1852 * C1911 + C1915 * C1861) / C1794;
    const double C453 = (C1871 * C1853 * C1915) / C1794;
    const double C651 = (C1881 * C1853 * C1915 + C1853 * C1860 * ae) / C1794;
    const double C1017 = (C1855 * C1852 * C1911 + C1915 * C1901) / C1794;
    const double C1211 = (C1881 * C1871 * C1915 + C1871 * C1860 * ae) / C1794;
    const double C1749 =
        (C1855 * C1852 * C1911 + C1881 * (C1881 * C1915 + C1860 * ae) +
         C1881 * C1860 * ae) /
        C1794;
    const double C160 = C2153 * C154;
    const double C186 = C2153 * C181;
    const double C212 = C2153 * C207;
    const double C243 = C2154 * C237;
    const double C269 = C2154 * C264;
    const double C295 = C2154 * C290;
    const double C889 = C2151 * C326;
    const double C915 = C2151 * C350;
    const double C939 = C2151 * C372;
    const double C1023 = C2154 * C456;
    const double C1048 = C2154 * C475;
    const double C1071 = C2154 * C496;
    const double C1605 = C2151 * C524;
    const double C1632 = C2151 * C546;
    const double C1656 = C2151 * C570;
    const double C1681 = C2153 * C592;
    const double C1707 = C2153 * C612;
    const double C1730 = C2153 * C631;
    const double C888 = C716 * C322;
    const double C886 = C716 * C320;
    const double C914 = C716 * C348;
    const double C938 = C716 * C370;
    const double C1604 = C716 * C520;
    const double C1602 = C716 * C518;
    const double C1631 = C716 * C544;
    const double C1655 = C716 * C568;
    const double C159 = C149 * C75;
    const double C157 = C149 * C70;
    const double C185 = C149 * C101;
    const double C211 = C149 * C126;
    const double C1680 = C149 * C520;
    const double C1678 = C149 * C518;
    const double C1706 = C149 * C544;
    const double C1729 = C149 * C568;
    const double C242 = C232 * C75;
    const double C240 = C232 * C70;
    const double C268 = C232 * C101;
    const double C294 = C232 * C126;
    const double C1022 = C232 * C322;
    const double C1020 = C232 * C320;
    const double C1047 = C232 * C348;
    const double C1070 = C232 * C370;
    const double C891 = C888 + C889;
    const double C890 = C886 + C887;
    const double C916 = C914 + C915;
    const double C940 = C938 + C939;
    const double C1607 = C1604 + C1605;
    const double C1606 = C1602 + C1603;
    const double C1633 = C1631 + C1632;
    const double C1657 = C1655 + C1656;
    const double C162 = C159 + C160;
    const double C161 = C157 + C158;
    const double C187 = C185 + C186;
    const double C213 = C211 + C212;
    const double C1683 = C1680 + C1681;
    const double C1682 = C1678 + C1679;
    const double C1708 = C1706 + C1707;
    const double C1731 = C1729 + C1730;
    const double C245 = C242 + C243;
    const double C244 = C240 + C241;
    const double C270 = C268 + C269;
    const double C296 = C294 + C295;
    const double C1025 = C1022 + C1023;
    const double C1024 = C1020 + C1021;
    const double C1049 = C1047 + C1048;
    const double C1072 = C1070 + C1071;
    const double C893 = C891 * C2152;
    const double C892 = C890 * C318;
    const double C937 = C890 * C124;
    const double C941 = C940 * C2155;
    const double C1609 = C1607 * C2152;
    const double C1608 = C1606 * C318;
    const double C1630 = C1606 * C99;
    const double C1634 = C1633 * C2156;
    const double C184 = C161 * C99;
    const double C210 = C161 * C124;
    const double C188 = C187 * C2156;
    const double C214 = C213 * C2155;
    const double C1685 = C1683 * C2152;
    const double C1684 = C1682 * C318;
    const double C1705 = C1682 * C99;
    const double C1709 = C1708 * C2156;
    const double C267 = C244 * C99;
    const double C293 = C244 * C124;
    const double C271 = C270 * C2156;
    const double C297 = C296 * C2155;
    const double C1027 = C1025 * C2152;
    const double C1026 = C1024 * C318;
    const double C1069 = C1024 * C124;
    const double C1073 = C1072 * C2155;
    
    d2eexx[0] += (2 * std::pow(Pi, 2.5) *
                  ((C65 * C69 + C57 * C72 + C66 * C70 + C58 * C73) * C67 +
                   (C65 * C74 + C57 * C78 + C66 * C75 + C58 * C79) * C59 -
                   (C66 * C71 + C58 * C76 + C65 * C70 + C57 * C73) * C68 -
                   (C66 * C77 + C58 * C80 + C65 * C75 + C57 * C79) * C60) *
                  C2153 * C2154 * C2155 * C2156) /
                 (p * q * std::sqrt(p + q));
    d2eexy[0] +=
        (2 * std::pow(Pi, 2.5) *
         (((C65 * C69 + C57 * C72 + C66 * C70 + C58 * C73) * C99 +
           (C65 * C100 + C57 * C103 + C66 * C101 + C58 * C104) * C2156) *
              C2153 * C2154 * C59 -
          ((C66 * C102 + C58 * C105 + C65 * C101 + C57 * C104) * C2156 +
           (C66 * C71 + C58 * C76 + C65 * C70 + C57 * C73) * C99) *
              C2153 * C2154 * C60) *
         C2155) /
        (p * q * std::sqrt(p + q));
    d2eexz[0] +=
        (2 * std::pow(Pi, 2.5) *
         (((C65 * C69 + C57 * C72 + C66 * C70 + C58 * C73) * C124 +
           (C65 * C125 + C57 * C128 + C66 * C126 + C58 * C129) * C2155) *
              C2153 * C2154 * C2156 * C59 -
          ((C66 * C127 + C58 * C130 + C65 * C126 + C57 * C129) * C2155 +
           (C66 * C71 + C58 * C76 + C65 * C70 + C57 * C73) * C124) *
              C2153 * C2154 * C2156 * C60)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[0] +=
        (2 * std::pow(Pi, 2.5) *
         (((C149 * C69 + C2153 * C150) * C67 +
           (C149 * C74 + C2153 * C153) * C59 - C161 * C68 - C162 * C60) *
              C2154 * C57 +
          (C161 * C67 + C162 * C59 - (C149 * C71 + C2153 * C152) * C68 -
           (C149 * C77 + C2153 * C155) * C60) *
              C2154 * C58) *
         C2155 * C2156) /
        (p * q * std::sqrt(p + q));
    d2eeyy[0] += (2 * std::pow(Pi, 2.5) *
                  ((((C149 * C69 + C2153 * C150) * C99 +
                     (C149 * C100 + C2153 * C180) * C2156) *
                        C2154 * C57 +
                    (C184 + C188) * C2154 * C58) *
                       C59 -
                   (((C149 * C102 + C2153 * C182) * C2156 +
                     (C149 * C71 + C2153 * C152) * C99) *
                        C2154 * C58 +
                    (C188 + C184) * C2154 * C57) *
                       C60) *
                  C2155) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[0] += (2 * std::pow(Pi, 2.5) *
                  ((((C149 * C69 + C2153 * C150) * C124 +
                     (C149 * C125 + C2153 * C206) * C2155) *
                        C2154 * C57 +
                    (C210 + C214) * C2154 * C58) *
                       C2156 * C59 -
                   (((C149 * C127 + C2153 * C208) * C2155 +
                     (C149 * C71 + C2153 * C152) * C124) *
                        C2154 * C58 +
                    (C214 + C210) * C2154 * C57) *
                       C2156 * C60)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[0] +=
        (2 * std::pow(Pi, 2.5) *
         (((C232 * C69 + C2154 * C233) * C67 +
           (C232 * C74 + C2154 * C236) * C59 - C244 * C68 - C245 * C60) *
              C57 +
          (C244 * C67 + C245 * C59 - (C232 * C71 + C2154 * C235) * C68 -
           (C232 * C77 + C2154 * C238) * C60) *
              C58) *
         C2153 * C2155 * C2156) /
        (p * q * std::sqrt(p + q));
    d2eezy[0] += (2 * std::pow(Pi, 2.5) *
                  ((((C232 * C69 + C2154 * C233) * C99 +
                     (C232 * C100 + C2154 * C263) * C2156) *
                        C57 +
                    (C267 + C271) * C58) *
                       C2153 * C59 -
                   (((C232 * C102 + C2154 * C265) * C2156 +
                     (C232 * C71 + C2154 * C235) * C99) *
                        C58 +
                    (C271 + C267) * C57) *
                       C2153 * C60) *
                  C2155) /
                 (p * q * std::sqrt(p + q));
    d2eezz[0] += (2 * std::pow(Pi, 2.5) *
                  ((((C232 * C69 + C2154 * C233) * C124 +
                     (C232 * C125 + C2154 * C289) * C2155) *
                        C57 +
                    (C293 + C297) * C58) *
                       C2153 * C2156 * C59 -
                   (((C232 * C127 + C2154 * C291) * C2155 +
                     (C232 * C71 + C2154 * C235) * C124) *
                        C58 +
                    (C297 + C293) * C57) *
                       C2153 * C2156 * C60)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[1] +=
        (2 * std::pow(Pi, 2.5) *
         (((C65 * C69 + C57 * C72 + C66 * C70 + C58 * C73) * C318 +
           (C65 * C74 + C57 * C78 + C66 * C75 + C58 * C79) * C2152) *
              C2153 * C2154 * C2155 * C316 -
          ((C66 * C321 + C58 * C325 + C65 * C322 + C57 * C326) * C2152 +
           (C66 * C319 + C58 * C323 + C65 * C320 + C57 * C324) * C318) *
              C2153 * C2154 * C2155 * C317)) /
        (p * q * std::sqrt(p + q));
    d2eexy[1] += (2 * std::pow(Pi, 2.5) *
                  ((C65 * C69 + C57 * C72 + C66 * C70 + C58 * C73) * C345 +
                   (C65 * C100 + C57 * C103 + C66 * C101 + C58 * C104) * C316 -
                   (C66 * C319 + C58 * C323 + C65 * C320 + C57 * C324) * C346 -
                   (C66 * C347 + C58 * C349 + C65 * C348 + C57 * C350) * C317) *
                  C2153 * C2154 * C2152 * C2155) /
                 (p * q * std::sqrt(p + q));
    d2eexz[1] +=
        (2 * std::pow(Pi, 2.5) *
         (((C65 * C69 + C57 * C72 + C66 * C70 + C58 * C73) * C124 +
           (C65 * C125 + C57 * C128 + C66 * C126 + C58 * C129) * C2155) *
              C2153 * C2154 * C316 -
          ((C66 * C369 + C58 * C371 + C65 * C370 + C57 * C372) * C2155 +
           (C66 * C319 + C58 * C323 + C65 * C320 + C57 * C324) * C124) *
              C2153 * C2154 * C317) *
         C2152) /
        (p * q * std::sqrt(p + q));
    d2eeyx[1] += (2 * std::pow(Pi, 2.5) *
                  ((((C149 * C69 + C2153 * C150) * C318 +
                     (C149 * C74 + C2153 * C153) * C2152) *
                        C2154 * C57 +
                    (C161 * C318 + C162 * C2152) * C2154 * C58) *
                       C2155 * C316 -
                   (((C149 * C321 + C2153 * C393) * C2152 +
                     (C149 * C319 + C2153 * C391) * C318) *
                        C2154 * C58 +
                    ((C149 * C322 + C2153 * C394) * C2152 +
                     (C149 * C320 + C2153 * C392) * C318) *
                        C2154 * C57) *
                       C2155 * C317)) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[1] +=
        (2 * std::pow(Pi, 2.5) *
         (((C149 * C69 + C2153 * C150) * C345 +
           (C149 * C100 + C2153 * C180) * C316 -
           (C149 * C320 + C2153 * C392) * C346 -
           (C149 * C348 + C2153 * C413) * C317) *
              C2154 * C57 +
          (C161 * C345 + C187 * C316 - (C149 * C319 + C2153 * C391) * C346 -
           (C149 * C347 + C2153 * C414) * C317) *
              C2154 * C58) *
         C2152 * C2155) /
        (p * q * std::sqrt(p + q));
    d2eeyz[1] += (2 * std::pow(Pi, 2.5) *
                  ((((C149 * C69 + C2153 * C150) * C124 +
                     (C149 * C125 + C2153 * C206) * C2155) *
                        C2154 * C57 +
                    (C210 + C214) * C2154 * C58) *
                       C316 -
                   (((C149 * C369 + C2153 * C433) * C2155 +
                     (C149 * C319 + C2153 * C391) * C124) *
                        C2154 * C58 +
                    ((C149 * C370 + C2153 * C434) * C2155 +
                     (C149 * C320 + C2153 * C392) * C124) *
                        C2154 * C57) *
                       C317) *
                  C2152) /
                 (p * q * std::sqrt(p + q));
    d2eezx[1] += (2 * std::pow(Pi, 2.5) *
                  ((((C232 * C69 + C2154 * C233) * C318 +
                     (C232 * C74 + C2154 * C236) * C2152) *
                        C57 +
                    (C244 * C318 + C245 * C2152) * C58) *
                       C2153 * C2155 * C316 -
                   (((C232 * C321 + C2154 * C455) * C2152 +
                     (C232 * C319 + C2154 * C453) * C318) *
                        C58 +
                    ((C232 * C322 + C2154 * C456) * C2152 +
                     (C232 * C320 + C2154 * C454) * C318) *
                        C57) *
                       C2153 * C2155 * C317)) /
                 (p * q * std::sqrt(p + q));
    d2eezy[1] +=
        (2 * std::pow(Pi, 2.5) *
         (((C232 * C69 + C2154 * C233) * C345 +
           (C232 * C100 + C2154 * C263) * C316 -
           (C232 * C320 + C2154 * C454) * C346 -
           (C232 * C348 + C2154 * C475) * C317) *
              C57 +
          (C244 * C345 + C270 * C316 - (C232 * C319 + C2154 * C453) * C346 -
           (C232 * C347 + C2154 * C476) * C317) *
              C58) *
         C2153 * C2152 * C2155) /
        (p * q * std::sqrt(p + q));
    d2eezz[1] += (2 * std::pow(Pi, 2.5) *
                  ((((C232 * C69 + C2154 * C233) * C124 +
                     (C232 * C125 + C2154 * C289) * C2155) *
                        C57 +
                    (C293 + C297) * C58) *
                       C2153 * C316 -
                   (((C232 * C369 + C2154 * C495) * C2155 +
                     (C232 * C319 + C2154 * C453) * C124) *
                        C58 +
                    ((C232 * C370 + C2154 * C496) * C2155 +
                     (C232 * C320 + C2154 * C454) * C124) *
                        C57) *
                       C2153 * C317) *
                  C2152) /
                 (p * q * std::sqrt(p + q));
    d2eexx[2] +=
        (2 * std::pow(Pi, 2.5) *
         (((C65 * C69 + C57 * C72 + C66 * C70 + C58 * C73) * C318 +
           (C65 * C74 + C57 * C78 + C66 * C75 + C58 * C79) * C2152) *
              C2153 * C2154 * C515 -
          ((C66 * C519 + C58 * C523 + C65 * C520 + C57 * C524) * C2152 +
           (C66 * C517 + C58 * C521 + C65 * C518 + C57 * C522) * C318) *
              C2153 * C2154 * C516) *
         C2156) /
        (p * q * std::sqrt(p + q));
    d2eexy[2] +=
        (2 * std::pow(Pi, 2.5) *
         (((C65 * C69 + C57 * C72 + C66 * C70 + C58 * C73) * C99 +
           (C65 * C100 + C57 * C103 + C66 * C101 + C58 * C104) * C2156) *
              C2153 * C2154 * C2152 * C515 -
          ((C66 * C543 + C58 * C545 + C65 * C544 + C57 * C546) * C2156 +
           (C66 * C517 + C58 * C521 + C65 * C518 + C57 * C522) * C99) *
              C2153 * C2154 * C2152 * C516)) /
        (p * q * std::sqrt(p + q));
    d2eexz[2] += (2 * std::pow(Pi, 2.5) *
                  ((C65 * C69 + C57 * C72 + C66 * C70 + C58 * C73) * C565 +
                   (C65 * C125 + C57 * C128 + C66 * C126 + C58 * C129) * C515 -
                   (C66 * C517 + C58 * C521 + C65 * C518 + C57 * C522) * C566 -
                   (C66 * C567 + C58 * C569 + C65 * C568 + C57 * C570) * C516) *
                  C2153 * C2154 * C2156 * C2152) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[2] += (2 * std::pow(Pi, 2.5) *
                  ((((C149 * C69 + C2153 * C150) * C318 +
                     (C149 * C74 + C2153 * C153) * C2152) *
                        C2154 * C57 +
                    (C161 * C318 + C162 * C2152) * C2154 * C58) *
                       C515 -
                   (((C149 * C519 + C2153 * C591) * C2152 +
                     (C149 * C517 + C2153 * C589) * C318) *
                        C2154 * C58 +
                    ((C149 * C520 + C2153 * C592) * C2152 +
                     (C149 * C518 + C2153 * C590) * C318) *
                        C2154 * C57) *
                       C516) *
                  C2156) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[2] += (2 * std::pow(Pi, 2.5) *
                  ((((C149 * C69 + C2153 * C150) * C99 +
                     (C149 * C100 + C2153 * C180) * C2156) *
                        C2154 * C57 +
                    (C184 + C188) * C2154 * C58) *
                       C2152 * C515 -
                   (((C149 * C543 + C2153 * C611) * C2156 +
                     (C149 * C517 + C2153 * C589) * C99) *
                        C2154 * C58 +
                    ((C149 * C544 + C2153 * C612) * C2156 +
                     (C149 * C518 + C2153 * C590) * C99) *
                        C2154 * C57) *
                       C2152 * C516)) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[2] +=
        (2 * std::pow(Pi, 2.5) *
         (((C149 * C69 + C2153 * C150) * C565 +
           (C149 * C125 + C2153 * C206) * C515 -
           (C149 * C518 + C2153 * C590) * C566 -
           (C149 * C568 + C2153 * C631) * C516) *
              C2154 * C57 +
          (C161 * C565 + C213 * C515 - (C149 * C517 + C2153 * C589) * C566 -
           (C149 * C567 + C2153 * C632) * C516) *
              C2154 * C58) *
         C2156 * C2152) /
        (p * q * std::sqrt(p + q));
    d2eezx[2] += (2 * std::pow(Pi, 2.5) *
                  ((((C232 * C69 + C2154 * C233) * C318 +
                     (C232 * C74 + C2154 * C236) * C2152) *
                        C57 +
                    (C244 * C318 + C245 * C2152) * C58) *
                       C2153 * C515 -
                   (((C232 * C519 + C2154 * C653) * C2152 +
                     (C232 * C517 + C2154 * C651) * C318) *
                        C58 +
                    ((C232 * C520 + C2154 * C654) * C2152 +
                     (C232 * C518 + C2154 * C652) * C318) *
                        C57) *
                       C2153 * C516) *
                  C2156) /
                 (p * q * std::sqrt(p + q));
    d2eezy[2] += (2 * std::pow(Pi, 2.5) *
                  ((((C232 * C69 + C2154 * C233) * C99 +
                     (C232 * C100 + C2154 * C263) * C2156) *
                        C57 +
                    (C267 + C271) * C58) *
                       C2153 * C2152 * C515 -
                   (((C232 * C543 + C2154 * C673) * C2156 +
                     (C232 * C517 + C2154 * C651) * C99) *
                        C58 +
                    ((C232 * C544 + C2154 * C674) * C2156 +
                     (C232 * C518 + C2154 * C652) * C99) *
                        C57) *
                       C2153 * C2152 * C516)) /
                 (p * q * std::sqrt(p + q));
    d2eezz[2] +=
        (2 * std::pow(Pi, 2.5) *
         (((C232 * C69 + C2154 * C233) * C565 +
           (C232 * C125 + C2154 * C289) * C515 -
           (C232 * C518 + C2154 * C652) * C566 -
           (C232 * C568 + C2154 * C693) * C516) *
              C57 +
          (C244 * C565 + C296 * C515 - (C232 * C517 + C2154 * C651) * C566 -
           (C232 * C567 + C2154 * C694) * C516) *
              C58) *
         C2153 * C2156 * C2152) /
        (p * q * std::sqrt(p + q));
    d2eexx[3] +=
        (2 * std::pow(Pi, 2.5) *
         (((C716 * C69 + C2151 * C72) * C67 + (C716 * C74 + C2151 * C78) * C59 -
           (C716 * C70 + C2151 * C73) * C68 -
           (C716 * C75 + C2151 * C79) * C60) *
              C714 +
          ((C716 * C320 + C2151 * C324) * C67 +
           (C716 * C322 + C2151 * C326) * C59 -
           (C716 * C319 + C2151 * C323) * C68 -
           (C716 * C321 + C2151 * C325) * C60) *
              C715) *
         C2154 * C2155 * C2156) /
        (p * q * std::sqrt(p + q));
    d2eexy[3] += (2 * std::pow(Pi, 2.5) *
                  ((((C716 * C69 + C2151 * C72) * C99 +
                     (C716 * C100 + C2151 * C103) * C2156) *
                        C714 +
                    ((C716 * C320 + C2151 * C324) * C99 +
                     (C716 * C348 + C2151 * C350) * C2156) *
                        C715) *
                       C2154 * C59 -
                   (((C716 * C347 + C2151 * C349) * C2156 +
                     (C716 * C319 + C2151 * C323) * C99) *
                        C715 +
                    ((C716 * C101 + C2151 * C104) * C2156 +
                     (C716 * C70 + C2151 * C73) * C99) *
                        C714) *
                       C2154 * C60) *
                  C2155) /
                 (p * q * std::sqrt(p + q));
    d2eexz[3] += (2 * std::pow(Pi, 2.5) *
                  ((((C716 * C69 + C2151 * C72) * C124 +
                     (C716 * C125 + C2151 * C128) * C2155) *
                        C714 +
                    ((C716 * C320 + C2151 * C324) * C124 +
                     (C716 * C370 + C2151 * C372) * C2155) *
                        C715) *
                       C2154 * C2156 * C59 -
                   (((C716 * C369 + C2151 * C371) * C2155 +
                     (C716 * C319 + C2151 * C323) * C124) *
                        C715 +
                    ((C716 * C126 + C2151 * C129) * C2155 +
                     (C716 * C70 + C2151 * C73) * C124) *
                        C714) *
                       C2154 * C2156 * C60)) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[3] +=
        (2 * std::pow(Pi, 2.5) *
         ((C771 * C69 + C714 * C150 + C772 * C320 + C715 * C392) * C67 +
          (C771 * C74 + C714 * C153 + C772 * C322 + C715 * C394) * C59 -
          (C772 * C319 + C715 * C391 + C771 * C70 + C714 * C151) * C68 -
          (C772 * C321 + C715 * C393 + C771 * C75 + C714 * C154) * C60) *
         C2154 * C2151 * C2155 * C2156) /
        (p * q * std::sqrt(p + q));
    d2eeyy[3] +=
        (2 * std::pow(Pi, 2.5) *
         (((C771 * C69 + C714 * C150 + C772 * C320 + C715 * C392) * C99 +
           (C771 * C100 + C714 * C180 + C772 * C348 + C715 * C413) * C2156) *
              C2154 * C2151 * C59 -
          ((C772 * C347 + C715 * C414 + C771 * C101 + C714 * C181) * C2156 +
           (C772 * C319 + C715 * C391 + C771 * C70 + C714 * C151) * C99) *
              C2154 * C2151 * C60) *
         C2155) /
        (p * q * std::sqrt(p + q));
    d2eeyz[3] +=
        (2 * std::pow(Pi, 2.5) *
         (((C771 * C69 + C714 * C150 + C772 * C320 + C715 * C392) * C124 +
           (C771 * C125 + C714 * C206 + C772 * C370 + C715 * C434) * C2155) *
              C2154 * C2151 * C2156 * C59 -
          ((C772 * C369 + C715 * C433 + C771 * C126 + C714 * C207) * C2155 +
           (C772 * C319 + C715 * C391 + C771 * C70 + C714 * C151) * C124) *
              C2154 * C2151 * C2156 * C60)) /
        (p * q * std::sqrt(p + q));
    d2eezx[3] +=
        (2 * std::pow(Pi, 2.5) *
         (((C232 * C69 + C2154 * C233) * C67 +
           (C232 * C74 + C2154 * C236) * C59 - C244 * C68 - C245 * C60) *
              C2151 * C714 +
          ((C232 * C320 + C2154 * C454) * C67 +
           (C232 * C322 + C2154 * C456) * C59 -
           (C232 * C319 + C2154 * C453) * C68 -
           (C232 * C321 + C2154 * C455) * C60) *
              C2151 * C715) *
         C2155 * C2156) /
        (p * q * std::sqrt(p + q));
    d2eezy[3] += (2 * std::pow(Pi, 2.5) *
                  ((((C232 * C69 + C2154 * C233) * C99 +
                     (C232 * C100 + C2154 * C263) * C2156) *
                        C2151 * C714 +
                    ((C232 * C320 + C2154 * C454) * C99 +
                     (C232 * C348 + C2154 * C475) * C2156) *
                        C2151 * C715) *
                       C59 -
                   (((C232 * C347 + C2154 * C476) * C2156 +
                     (C232 * C319 + C2154 * C453) * C99) *
                        C2151 * C715 +
                    (C271 + C267) * C2151 * C714) *
                       C60) *
                  C2155) /
                 (p * q * std::sqrt(p + q));
    d2eezz[3] += (2 * std::pow(Pi, 2.5) *
                  ((((C232 * C69 + C2154 * C233) * C124 +
                     (C232 * C125 + C2154 * C289) * C2155) *
                        C2151 * C714 +
                    ((C232 * C320 + C2154 * C454) * C124 +
                     (C232 * C370 + C2154 * C496) * C2155) *
                        C2151 * C715) *
                       C2156 * C59 -
                   (((C232 * C369 + C2154 * C495) * C2155 +
                     (C232 * C319 + C2154 * C453) * C124) *
                        C2151 * C715 +
                    (C297 + C293) * C2151 * C714) *
                       C2156 * C60)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[4] += (2 * std::pow(Pi, 2.5) *
                  ((((C716 * C69 + C2151 * C72) * C318 +
                     (C716 * C74 + C2151 * C78) * C2152) *
                        C714 +
                    (C892 + C893) * C715) *
                       C2154 * C2155 * C316 -
                   (((C716 * C882 + C2151 * C884) * C2152 +
                     (C716 * C881 + C2151 * C883) * C318) *
                        C715 +
                    (C893 + C892) * C714) *
                       C2154 * C2155 * C317)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[4] +=
        (2 * std::pow(Pi, 2.5) *
         (((C716 * C69 + C2151 * C72) * C345 +
           (C716 * C100 + C2151 * C103) * C316 - C890 * C346 - C916 * C317) *
              C714 +
          (C890 * C345 + C916 * C316 - (C716 * C881 + C2151 * C883) * C346 -
           (C716 * C911 + C2151 * C912) * C317) *
              C715) *
         C2154 * C2152 * C2155) /
        (p * q * std::sqrt(p + q));
    d2eexz[4] += (2 * std::pow(Pi, 2.5) *
                  ((((C716 * C69 + C2151 * C72) * C124 +
                     (C716 * C125 + C2151 * C128) * C2155) *
                        C714 +
                    (C937 + C941) * C715) *
                       C2154 * C316 -
                   (((C716 * C934 + C2151 * C935) * C2155 +
                     (C716 * C881 + C2151 * C883) * C124) *
                        C715 +
                    (C941 + C937) * C714) *
                       C2154 * C317) *
                  C2152) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[4] +=
        (2 * std::pow(Pi, 2.5) *
         (((C771 * C69 + C714 * C150 + C772 * C320 + C715 * C392) * C318 +
           (C771 * C74 + C714 * C153 + C772 * C322 + C715 * C394) * C2152) *
              C2154 * C2151 * C2155 * C316 -
          ((C772 * C882 + C715 * C960 + C771 * C322 + C714 * C394) * C2152 +
           (C772 * C881 + C715 * C959 + C771 * C320 + C714 * C392) * C318) *
              C2154 * C2151 * C2155 * C317)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[4] +=
        (2 * std::pow(Pi, 2.5) *
         ((C771 * C69 + C714 * C150 + C772 * C320 + C715 * C392) * C345 +
          (C771 * C100 + C714 * C180 + C772 * C348 + C715 * C413) * C316 -
          (C772 * C881 + C715 * C959 + C771 * C320 + C714 * C392) * C346 -
          (C772 * C911 + C715 * C979 + C771 * C348 + C714 * C413) * C317) *
         C2154 * C2151 * C2152 * C2155) /
        (p * q * std::sqrt(p + q));
    d2eeyz[4] +=
        (2 * std::pow(Pi, 2.5) *
         (((C771 * C69 + C714 * C150 + C772 * C320 + C715 * C392) * C124 +
           (C771 * C125 + C714 * C206 + C772 * C370 + C715 * C434) * C2155) *
              C2154 * C2151 * C316 -
          ((C772 * C934 + C715 * C998 + C771 * C370 + C714 * C434) * C2155 +
           (C772 * C881 + C715 * C959 + C771 * C320 + C714 * C392) * C124) *
              C2154 * C2151 * C317) *
         C2152) /
        (p * q * std::sqrt(p + q));
    d2eezx[4] += (2 * std::pow(Pi, 2.5) *
                  ((((C232 * C69 + C2154 * C233) * C318 +
                     (C232 * C74 + C2154 * C236) * C2152) *
                        C2151 * C714 +
                    (C1026 + C1027) * C2151 * C715) *
                       C2155 * C316 -
                   (((C232 * C882 + C2154 * C1018) * C2152 +
                     (C232 * C881 + C2154 * C1017) * C318) *
                        C2151 * C715 +
                    (C1027 + C1026) * C2151 * C714) *
                       C2155 * C317)) /
                 (p * q * std::sqrt(p + q));
    d2eezy[4] +=
        (2 * std::pow(Pi, 2.5) *
         (((C232 * C69 + C2154 * C233) * C345 +
           (C232 * C100 + C2154 * C263) * C316 - C1024 * C346 - C1049 * C317) *
              C2151 * C714 +
          (C1024 * C345 + C1049 * C316 - (C232 * C881 + C2154 * C1017) * C346 -
           (C232 * C911 + C2154 * C1045) * C317) *
              C2151 * C715) *
         C2152 * C2155) /
        (p * q * std::sqrt(p + q));
    d2eezz[4] += (2 * std::pow(Pi, 2.5) *
                  ((((C232 * C69 + C2154 * C233) * C124 +
                     (C232 * C125 + C2154 * C289) * C2155) *
                        C2151 * C714 +
                    (C1069 + C1073) * C2151 * C715) *
                       C316 -
                   (((C232 * C934 + C2154 * C1067) * C2155 +
                     (C232 * C881 + C2154 * C1017) * C124) *
                        C2151 * C715 +
                    (C1073 + C1069) * C2151 * C714) *
                       C317) *
                  C2152) /
                 (p * q * std::sqrt(p + q));
    d2eexx[5] += (2 * std::pow(Pi, 2.5) *
                  ((((C716 * C69 + C2151 * C72) * C318 +
                     (C716 * C74 + C2151 * C78) * C2152) *
                        C714 +
                    (C892 + C893) * C715) *
                       C2154 * C515 -
                   (((C716 * C1092 + C2151 * C1094) * C2152 +
                     (C716 * C1091 + C2151 * C1093) * C318) *
                        C715 +
                    ((C716 * C520 + C2151 * C524) * C2152 +
                     (C716 * C518 + C2151 * C522) * C318) *
                        C714) *
                       C2154 * C516) *
                  C2156) /
                 (p * q * std::sqrt(p + q));
    d2eexy[5] += (2 * std::pow(Pi, 2.5) *
                  ((((C716 * C69 + C2151 * C72) * C99 +
                     (C716 * C100 + C2151 * C103) * C2156) *
                        C714 +
                    (C890 * C99 + C916 * C2156) * C715) *
                       C2154 * C2152 * C515 -
                   (((C716 * C1113 + C2151 * C1114) * C2156 +
                     (C716 * C1091 + C2151 * C1093) * C99) *
                        C715 +
                    ((C716 * C544 + C2151 * C546) * C2156 +
                     (C716 * C518 + C2151 * C522) * C99) *
                        C714) *
                       C2154 * C2152 * C516)) /
                 (p * q * std::sqrt(p + q));
    d2eexz[5] +=
        (2 * std::pow(Pi, 2.5) *
         (((C716 * C69 + C2151 * C72) * C565 +
           (C716 * C125 + C2151 * C128) * C515 -
           (C716 * C518 + C2151 * C522) * C566 -
           (C716 * C568 + C2151 * C570) * C516) *
              C714 +
          (C890 * C565 + C940 * C515 - (C716 * C1091 + C2151 * C1093) * C566 -
           (C716 * C1133 + C2151 * C1134) * C516) *
              C715) *
         C2154 * C2156 * C2152) /
        (p * q * std::sqrt(p + q));
    d2eeyx[5] +=
        (2 * std::pow(Pi, 2.5) *
         (((C771 * C69 + C714 * C150 + C772 * C320 + C715 * C392) * C318 +
           (C771 * C74 + C714 * C153 + C772 * C322 + C715 * C394) * C2152) *
              C2154 * C2151 * C515 -
          ((C772 * C1092 + C715 * C1154 + C771 * C520 + C714 * C592) * C2152 +
           (C772 * C1091 + C715 * C1153 + C771 * C518 + C714 * C590) * C318) *
              C2154 * C2151 * C516) *
         C2156) /
        (p * q * std::sqrt(p + q));
    d2eeyy[5] +=
        (2 * std::pow(Pi, 2.5) *
         (((C771 * C69 + C714 * C150 + C772 * C320 + C715 * C392) * C99 +
           (C771 * C100 + C714 * C180 + C772 * C348 + C715 * C413) * C2156) *
              C2154 * C2151 * C2152 * C515 -
          ((C772 * C1113 + C715 * C1173 + C771 * C544 + C714 * C612) * C2156 +
           (C772 * C1091 + C715 * C1153 + C771 * C518 + C714 * C590) * C99) *
              C2154 * C2151 * C2152 * C516)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[5] +=
        (2 * std::pow(Pi, 2.5) *
         ((C771 * C69 + C714 * C150 + C772 * C320 + C715 * C392) * C565 +
          (C771 * C125 + C714 * C206 + C772 * C370 + C715 * C434) * C515 -
          (C772 * C1091 + C715 * C1153 + C771 * C518 + C714 * C590) * C566 -
          (C772 * C1133 + C715 * C1192 + C771 * C568 + C714 * C631) * C516) *
         C2154 * C2151 * C2156 * C2152) /
        (p * q * std::sqrt(p + q));
    d2eezx[5] += (2 * std::pow(Pi, 2.5) *
                  ((((C232 * C69 + C2154 * C233) * C318 +
                     (C232 * C74 + C2154 * C236) * C2152) *
                        C2151 * C714 +
                    (C1026 + C1027) * C2151 * C715) *
                       C515 -
                   (((C232 * C1092 + C2154 * C1212) * C2152 +
                     (C232 * C1091 + C2154 * C1211) * C318) *
                        C2151 * C715 +
                    ((C232 * C520 + C2154 * C654) * C2152 +
                     (C232 * C518 + C2154 * C652) * C318) *
                        C2151 * C714) *
                       C516) *
                  C2156) /
                 (p * q * std::sqrt(p + q));
    d2eezy[5] += (2 * std::pow(Pi, 2.5) *
                  ((((C232 * C69 + C2154 * C233) * C99 +
                     (C232 * C100 + C2154 * C263) * C2156) *
                        C2151 * C714 +
                    (C1024 * C99 + C1049 * C2156) * C2151 * C715) *
                       C2152 * C515 -
                   (((C232 * C1113 + C2154 * C1231) * C2156 +
                     (C232 * C1091 + C2154 * C1211) * C99) *
                        C2151 * C715 +
                    ((C232 * C544 + C2154 * C674) * C2156 +
                     (C232 * C518 + C2154 * C652) * C99) *
                        C2151 * C714) *
                       C2152 * C516)) /
                 (p * q * std::sqrt(p + q));
    d2eezz[5] +=
        (2 * std::pow(Pi, 2.5) *
         (((C232 * C69 + C2154 * C233) * C565 +
           (C232 * C125 + C2154 * C289) * C515 -
           (C232 * C518 + C2154 * C652) * C566 -
           (C232 * C568 + C2154 * C693) * C516) *
              C2151 * C714 +
          (C1024 * C565 + C1072 * C515 - (C232 * C1091 + C2154 * C1211) * C566 -
           (C232 * C1133 + C2154 * C1250) * C516) *
              C2151 * C715) *
         C2156 * C2152) /
        (p * q * std::sqrt(p + q));
    d2eexx[6] +=
        (2 * std::pow(Pi, 2.5) *
         (((C716 * C69 + C2151 * C72) * C67 + (C716 * C74 + C2151 * C78) * C59 -
           (C716 * C70 + C2151 * C73) * C68 -
           (C716 * C75 + C2151 * C79) * C60) *
              C2153 * C1269 +
          ((C716 * C518 + C2151 * C522) * C67 +
           (C716 * C520 + C2151 * C524) * C59 -
           (C716 * C517 + C2151 * C521) * C68 -
           (C716 * C519 + C2151 * C523) * C60) *
              C2153 * C1270) *
         C2155 * C2156) /
        (p * q * std::sqrt(p + q));
    d2eexy[6] += (2 * std::pow(Pi, 2.5) *
                  ((((C716 * C69 + C2151 * C72) * C99 +
                     (C716 * C100 + C2151 * C103) * C2156) *
                        C2153 * C1269 +
                    ((C716 * C518 + C2151 * C522) * C99 +
                     (C716 * C544 + C2151 * C546) * C2156) *
                        C2153 * C1270) *
                       C59 -
                   (((C716 * C543 + C2151 * C545) * C2156 +
                     (C716 * C517 + C2151 * C521) * C99) *
                        C2153 * C1270 +
                    ((C716 * C101 + C2151 * C104) * C2156 +
                     (C716 * C70 + C2151 * C73) * C99) *
                        C2153 * C1269) *
                       C60) *
                  C2155) /
                 (p * q * std::sqrt(p + q));
    d2eexz[6] += (2 * std::pow(Pi, 2.5) *
                  ((((C716 * C69 + C2151 * C72) * C124 +
                     (C716 * C125 + C2151 * C128) * C2155) *
                        C2153 * C1269 +
                    ((C716 * C518 + C2151 * C522) * C124 +
                     (C716 * C568 + C2151 * C570) * C2155) *
                        C2153 * C1270) *
                       C2156 * C59 -
                   (((C716 * C567 + C2151 * C569) * C2155 +
                     (C716 * C517 + C2151 * C521) * C124) *
                        C2153 * C1270 +
                    ((C716 * C126 + C2151 * C129) * C2155 +
                     (C716 * C70 + C2151 * C73) * C124) *
                        C2153 * C1269) *
                       C2156 * C60)) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[6] +=
        (2 * std::pow(Pi, 2.5) *
         (((C149 * C69 + C2153 * C150) * C67 +
           (C149 * C74 + C2153 * C153) * C59 - C161 * C68 - C162 * C60) *
              C1269 +
          ((C149 * C518 + C2153 * C590) * C67 +
           (C149 * C520 + C2153 * C592) * C59 -
           (C149 * C517 + C2153 * C589) * C68 -
           (C149 * C519 + C2153 * C591) * C60) *
              C1270) *
         C2151 * C2155 * C2156) /
        (p * q * std::sqrt(p + q));
    d2eeyy[6] += (2 * std::pow(Pi, 2.5) *
                  ((((C149 * C69 + C2153 * C150) * C99 +
                     (C149 * C100 + C2153 * C180) * C2156) *
                        C1269 +
                    ((C149 * C518 + C2153 * C590) * C99 +
                     (C149 * C544 + C2153 * C612) * C2156) *
                        C1270) *
                       C2151 * C59 -
                   (((C149 * C543 + C2153 * C611) * C2156 +
                     (C149 * C517 + C2153 * C589) * C99) *
                        C1270 +
                    (C188 + C184) * C1269) *
                       C2151 * C60) *
                  C2155) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[6] += (2 * std::pow(Pi, 2.5) *
                  ((((C149 * C69 + C2153 * C150) * C124 +
                     (C149 * C125 + C2153 * C206) * C2155) *
                        C1269 +
                    ((C149 * C518 + C2153 * C590) * C124 +
                     (C149 * C568 + C2153 * C631) * C2155) *
                        C1270) *
                       C2151 * C2156 * C59 -
                   (((C149 * C567 + C2153 * C632) * C2155 +
                     (C149 * C517 + C2153 * C589) * C124) *
                        C1270 +
                    (C214 + C210) * C1269) *
                       C2151 * C2156 * C60)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[6] +=
        (2 * std::pow(Pi, 2.5) *
         ((C1379 * C69 + C1269 * C233 + C1380 * C518 + C1270 * C652) * C67 +
          (C1379 * C74 + C1269 * C236 + C1380 * C520 + C1270 * C654) * C59 -
          (C1380 * C517 + C1270 * C651 + C1379 * C70 + C1269 * C234) * C68 -
          (C1380 * C519 + C1270 * C653 + C1379 * C75 + C1269 * C237) * C60) *
         C2151 * C2153 * C2155 * C2156) /
        (p * q * std::sqrt(p + q));
    d2eezy[6] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1379 * C69 + C1269 * C233 + C1380 * C518 + C1270 * C652) * C99 +
           (C1379 * C100 + C1269 * C263 + C1380 * C544 + C1270 * C674) *
               C2156) *
              C2151 * C2153 * C59 -
          ((C1380 * C543 + C1270 * C673 + C1379 * C101 + C1269 * C264) * C2156 +
           (C1380 * C517 + C1270 * C651 + C1379 * C70 + C1269 * C234) * C99) *
              C2151 * C2153 * C60) *
         C2155) /
        (p * q * std::sqrt(p + q));
    d2eezz[6] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1379 * C69 + C1269 * C233 + C1380 * C518 + C1270 * C652) * C124 +
           (C1379 * C125 + C1269 * C289 + C1380 * C568 + C1270 * C693) *
               C2155) *
              C2151 * C2153 * C2156 * C59 -
          ((C1380 * C567 + C1270 * C694 + C1379 * C126 + C1269 * C290) * C2155 +
           (C1380 * C517 + C1270 * C651 + C1379 * C70 + C1269 * C234) * C124) *
              C2151 * C2153 * C2156 * C60)) /
        (p * q * std::sqrt(p + q));
    d2eexx[7] += (2 * std::pow(Pi, 2.5) *
                  ((((C716 * C69 + C2151 * C72) * C318 +
                     (C716 * C74 + C2151 * C78) * C2152) *
                        C2153 * C1269 +
                    ((C716 * C518 + C2151 * C522) * C318 +
                     (C716 * C520 + C2151 * C524) * C2152) *
                        C2153 * C1270) *
                       C2155 * C316 -
                   (((C716 * C1092 + C2151 * C1094) * C2152 +
                     (C716 * C1091 + C2151 * C1093) * C318) *
                        C2153 * C1270 +
                    (C893 + C892) * C2153 * C1269) *
                       C2155 * C317)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[7] +=
        (2 * std::pow(Pi, 2.5) *
         (((C716 * C69 + C2151 * C72) * C345 +
           (C716 * C100 + C2151 * C103) * C316 - C890 * C346 - C916 * C317) *
              C2153 * C1269 +
          ((C716 * C518 + C2151 * C522) * C345 +
           (C716 * C544 + C2151 * C546) * C316 -
           (C716 * C1091 + C2151 * C1093) * C346 -
           (C716 * C1113 + C2151 * C1114) * C317) *
              C2153 * C1270) *
         C2152 * C2155) /
        (p * q * std::sqrt(p + q));
    d2eexz[7] += (2 * std::pow(Pi, 2.5) *
                  ((((C716 * C69 + C2151 * C72) * C124 +
                     (C716 * C125 + C2151 * C128) * C2155) *
                        C2153 * C1269 +
                    ((C716 * C518 + C2151 * C522) * C124 +
                     (C716 * C568 + C2151 * C570) * C2155) *
                        C2153 * C1270) *
                       C316 -
                   (((C716 * C1133 + C2151 * C1134) * C2155 +
                     (C716 * C1091 + C2151 * C1093) * C124) *
                        C2153 * C1270 +
                    (C941 + C937) * C2153 * C1269) *
                       C317) *
                  C2152) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[7] += (2 * std::pow(Pi, 2.5) *
                  ((((C149 * C69 + C2153 * C150) * C318 +
                     (C149 * C74 + C2153 * C153) * C2152) *
                        C1269 +
                    ((C149 * C518 + C2153 * C590) * C318 +
                     (C149 * C520 + C2153 * C592) * C2152) *
                        C1270) *
                       C2151 * C2155 * C316 -
                   (((C149 * C1092 + C2153 * C1154) * C2152 +
                     (C149 * C1091 + C2153 * C1153) * C318) *
                        C1270 +
                    ((C149 * C322 + C2153 * C394) * C2152 +
                     (C149 * C320 + C2153 * C392) * C318) *
                        C1269) *
                       C2151 * C2155 * C317)) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[7] += (2 * std::pow(Pi, 2.5) *
                  (((C149 * C69 + C2153 * C150) * C345 +
                    (C149 * C100 + C2153 * C180) * C316 -
                    (C149 * C320 + C2153 * C392) * C346 -
                    (C149 * C348 + C2153 * C413) * C317) *
                       C1269 +
                   ((C149 * C518 + C2153 * C590) * C345 +
                    (C149 * C544 + C2153 * C612) * C316 -
                    (C149 * C1091 + C2153 * C1153) * C346 -
                    (C149 * C1113 + C2153 * C1173) * C317) *
                       C1270) *
                  C2151 * C2152 * C2155) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[7] += (2 * std::pow(Pi, 2.5) *
                  ((((C149 * C69 + C2153 * C150) * C124 +
                     (C149 * C125 + C2153 * C206) * C2155) *
                        C1269 +
                    ((C149 * C518 + C2153 * C590) * C124 +
                     (C149 * C568 + C2153 * C631) * C2155) *
                        C1270) *
                       C2151 * C316 -
                   (((C149 * C1133 + C2153 * C1192) * C2155 +
                     (C149 * C1091 + C2153 * C1153) * C124) *
                        C1270 +
                    ((C149 * C370 + C2153 * C434) * C2155 +
                     (C149 * C320 + C2153 * C392) * C124) *
                        C1269) *
                       C2151 * C317) *
                  C2152) /
                 (p * q * std::sqrt(p + q));
    d2eezx[7] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1379 * C69 + C1269 * C233 + C1380 * C518 + C1270 * C652) * C318 +
           (C1379 * C74 + C1269 * C236 + C1380 * C520 + C1270 * C654) * C2152) *
              C2151 * C2153 * C2155 * C316 -
          ((C1380 * C1092 + C1270 * C1212 + C1379 * C322 + C1269 * C456) *
               C2152 +
           (C1380 * C1091 + C1270 * C1211 + C1379 * C320 + C1269 * C454) *
               C318) *
              C2151 * C2153 * C2155 * C317)) /
        (p * q * std::sqrt(p + q));
    d2eezy[7] +=
        (2 * std::pow(Pi, 2.5) *
         ((C1379 * C69 + C1269 * C233 + C1380 * C518 + C1270 * C652) * C345 +
          (C1379 * C100 + C1269 * C263 + C1380 * C544 + C1270 * C674) * C316 -
          (C1380 * C1091 + C1270 * C1211 + C1379 * C320 + C1269 * C454) * C346 -
          (C1380 * C1113 + C1270 * C1231 + C1379 * C348 + C1269 * C475) *
              C317) *
         C2151 * C2153 * C2152 * C2155) /
        (p * q * std::sqrt(p + q));
    d2eezz[7] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1379 * C69 + C1269 * C233 + C1380 * C518 + C1270 * C652) * C124 +
           (C1379 * C125 + C1269 * C289 + C1380 * C568 + C1270 * C693) *
               C2155) *
              C2151 * C2153 * C316 -
          ((C1380 * C1133 + C1270 * C1250 + C1379 * C370 + C1269 * C496) *
               C2155 +
           (C1380 * C1091 + C1270 * C1211 + C1379 * C320 + C1269 * C454) *
               C124) *
              C2151 * C2153 * C317) *
         C2152) /
        (p * q * std::sqrt(p + q));
    d2eexx[8] += (2 * std::pow(Pi, 2.5) *
                  ((((C716 * C69 + C2151 * C72) * C318 +
                     (C716 * C74 + C2151 * C78) * C2152) *
                        C2153 * C1269 +
                    (C1608 + C1609) * C2153 * C1270) *
                       C515 -
                   (((C716 * C1598 + C2151 * C1600) * C2152 +
                     (C716 * C1597 + C2151 * C1599) * C318) *
                        C2153 * C1270 +
                    (C1609 + C1608) * C2153 * C1269) *
                       C516) *
                  C2156) /
                 (p * q * std::sqrt(p + q));
    d2eexy[8] += (2 * std::pow(Pi, 2.5) *
                  ((((C716 * C69 + C2151 * C72) * C99 +
                     (C716 * C100 + C2151 * C103) * C2156) *
                        C2153 * C1269 +
                    (C1630 + C1634) * C2153 * C1270) *
                       C2152 * C515 -
                   (((C716 * C1627 + C2151 * C1628) * C2156 +
                     (C716 * C1597 + C2151 * C1599) * C99) *
                        C2153 * C1270 +
                    (C1634 + C1630) * C2153 * C1269) *
                       C2152 * C516)) /
                 (p * q * std::sqrt(p + q));
    d2eexz[8] +=
        (2 * std::pow(Pi, 2.5) *
         (((C716 * C69 + C2151 * C72) * C565 +
           (C716 * C125 + C2151 * C128) * C515 - C1606 * C566 - C1657 * C516) *
              C2153 * C1269 +
          (C1606 * C565 + C1657 * C515 - (C716 * C1597 + C2151 * C1599) * C566 -
           (C716 * C1652 + C2151 * C1653) * C516) *
              C2153 * C1270) *
         C2156 * C2152) /
        (p * q * std::sqrt(p + q));
    d2eeyx[8] += (2 * std::pow(Pi, 2.5) *
                  ((((C149 * C69 + C2153 * C150) * C318 +
                     (C149 * C74 + C2153 * C153) * C2152) *
                        C1269 +
                    (C1684 + C1685) * C1270) *
                       C2151 * C515 -
                   (((C149 * C1598 + C2153 * C1676) * C2152 +
                     (C149 * C1597 + C2153 * C1675) * C318) *
                        C1270 +
                    (C1685 + C1684) * C1269) *
                       C2151 * C516) *
                  C2156) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[8] += (2 * std::pow(Pi, 2.5) *
                  ((((C149 * C69 + C2153 * C150) * C99 +
                     (C149 * C100 + C2153 * C180) * C2156) *
                        C1269 +
                    (C1705 + C1709) * C1270) *
                       C2151 * C2152 * C515 -
                   (((C149 * C1627 + C2153 * C1703) * C2156 +
                     (C149 * C1597 + C2153 * C1675) * C99) *
                        C1270 +
                    (C1709 + C1705) * C1269) *
                       C2151 * C2152 * C516)) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[8] +=
        (2 * std::pow(Pi, 2.5) *
         (((C149 * C69 + C2153 * C150) * C565 +
           (C149 * C125 + C2153 * C206) * C515 - C1682 * C566 - C1731 * C516) *
              C1269 +
          (C1682 * C565 + C1731 * C515 - (C149 * C1597 + C2153 * C1675) * C566 -
           (C149 * C1652 + C2153 * C1727) * C516) *
              C1270) *
         C2151 * C2156 * C2152) /
        (p * q * std::sqrt(p + q));
    d2eezx[8] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1379 * C69 + C1269 * C233 + C1380 * C518 + C1270 * C652) * C318 +
           (C1379 * C74 + C1269 * C236 + C1380 * C520 + C1270 * C654) * C2152) *
              C2151 * C2153 * C515 -
          ((C1380 * C1598 + C1270 * C1750 + C1379 * C520 + C1269 * C654) *
               C2152 +
           (C1380 * C1597 + C1270 * C1749 + C1379 * C518 + C1269 * C652) *
               C318) *
              C2151 * C2153 * C516) *
         C2156) /
        (p * q * std::sqrt(p + q));
    d2eezy[8] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1379 * C69 + C1269 * C233 + C1380 * C518 + C1270 * C652) * C99 +
           (C1379 * C100 + C1269 * C263 + C1380 * C544 + C1270 * C674) *
               C2156) *
              C2151 * C2153 * C2152 * C515 -
          ((C1380 * C1627 + C1270 * C1769 + C1379 * C544 + C1269 * C674) *
               C2156 +
           (C1380 * C1597 + C1270 * C1749 + C1379 * C518 + C1269 * C652) *
               C99) *
              C2151 * C2153 * C2152 * C516)) /
        (p * q * std::sqrt(p + q));
    d2eezz[8] +=
        (2 * std::pow(Pi, 2.5) *
         ((C1379 * C69 + C1269 * C233 + C1380 * C518 + C1270 * C652) * C565 +
          (C1379 * C125 + C1269 * C289 + C1380 * C568 + C1270 * C693) * C515 -
          (C1380 * C1597 + C1270 * C1749 + C1379 * C518 + C1269 * C652) * C566 -
          (C1380 * C1652 + C1270 * C1788 + C1379 * C568 + C1269 * C693) *
              C516) *
         C2151 * C2153 * C2156 * C2152) /
        (p * q * std::sqrt(p + q));
    
}
