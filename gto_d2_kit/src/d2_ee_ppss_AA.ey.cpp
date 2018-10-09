/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_ppss_AA.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
void second_derivative_ee_1100_11(const double ae,
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
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    const double C1664 = ae * be;
    const double C1663 = xA - xB;
    const double C1662 = ae + be;
    const double C1661 = 0 * be;
    const double C1696 = yA - yB;
    const double C1699 = zA - zB;
    const double C1756 = 0 * be;
    const double C1786 = 0 * be;
    const double C1806 = p + q;
    const double C1805 = p * q;
    const double C1811 = xP - xQ;
    const double C1810 = bs[2];
    const double C1818 = std::pow(ae, 2);
    const double C1816 = bs[3];
    const double C1829 = yP - yQ;
    const double C1838 = zP - zQ;
    const double C67 = bs[0];
    const double C2087 = ce + de;
    const double C2086 = ce * de;
    const double C1667 = 2 * C1664;
    const double C1666 = C1664 * C1663;
    const double C1984 = std::pow(C1663, 2);
    const double C2084 = C1663 * be;
    const double C2083 = C1663 * ae;
    const double C1665 = std::pow(C1662, 2);
    const double C1993 = 2 * C1662;
    const double C1716 = C1664 * C1696;
    const double C2028 = std::pow(C1696, 2);
    const double C2090 = C1696 * be;
    const double C2088 = C1696 * ae;
    const double C1728 = C1664 * C1699;
    const double C2043 = std::pow(C1699, 2);
    const double C2091 = C1699 * be;
    const double C2089 = C1699 * ae;
    const double C1807 = 2 * C1805;
    const double C1819 = C1811 * ae;
    const double C1815 = std::pow(C1811, 2);
    const double C1832 = C1829 * ae;
    const double C1831 = C1811 * C1829;
    const double C1848 = C1829 * C1811;
    const double C1853 = std::pow(C1829, 2);
    const double C1841 = C1838 * ae;
    const double C1840 = C1811 * C1838;
    const double C1857 = C1829 * C1838;
    const double C1862 = C1838 * C1811;
    const double C1867 = C1838 * C1829;
    const double C1872 = std::pow(C1838, 2);
    const double C58 = std::exp(-(std::pow(zC - zD, 2) * C2086) / C2087);
    const double C59 = std::exp(-(std::pow(yC - yD, 2) * C2086) / C2087);
    const double C60 = std::exp(-(std::pow(xC - xD, 2) * C2086) / C2087);
    const double C1985 = C1984 * C1664;
    const double C1669 = 2 * C1665;
    const double C2085 = std::pow(C1993, -1);
    const double C2029 = C2028 * C1664;
    const double C2044 = C2043 * C1664;
    const double C1809 = C1807 / C1806;
    const double C73 =
        ((std::pow(xP - xQ, 2) * bs[2] * std::pow(C1807 / C1806, 2) -
          (bs[1] * C1807) / C1806) *
         std::pow(ae, 2)) /
        C1665;
    const double C68 = -(C1811 * bs[1] * C1807) / C1806;
    const double C257 = -(C1829 * bs[1] * C1807) / C1806;
    const double C461 = -(C1838 * bs[1] * C1807) / C1806;
    const double C1821 = C1816 * C1819;
    const double C70 = (-(bs[1] * C1819 * C1807) / C1806) / C1662;
    const double C1834 = C1816 * C1832;
    const double C94 = (-(bs[1] * C1832 * C1807) / C1806) / C1662;
    const double C1833 = C1831 * C1818;
    const double C1849 = C1848 * C1818;
    const double C1843 = C1816 * C1841;
    const double C115 = (-(bs[1] * C1841 * C1807) / C1806) / C1662;
    const double C1842 = C1840 * C1818;
    const double C1858 = C1857 * C1818;
    const double C1863 = C1862 * C1818;
    const double C1868 = C1867 * C1818;
    const double C1986 = C1985 / C1662;
    const double C2030 = C2029 / C1662;
    const double C2045 = C2044 / C1662;
    const double C1812 = std::pow(C1809, 2);
    const double C1817 = -C1809;
    const double C1987 = -C1986;
    const double C2031 = -C2030;
    const double C2046 = -C2045;
    const double C1814 = C1810 * C1812;
    const double C74 = (2 * ae * C1812 * C1810 * C1811 * ae +
                        C1811 *
                            (C1810 * C1812 +
                             std::pow(C1811, 2) * bs[3] * std::pow(-C1809, 3)) *
                            std::pow(ae, 2)) /
                       C1665;
    const double C97 = (C1812 * C1810 * C1811 * (yP - yQ) * C1818) / C1665;
    const double C118 = (C1812 * C1810 * C1811 * (zP - zQ) * C1818) / C1665;
    const double C135 = (C1812 * C1810 * C1829 * C1811 * C1818) / C1665;
    const double C153 =
        ((std::pow(C1829, 2) * C1810 * C1812 - (bs[1] * C1807) / C1806) *
         C1818) /
        C1665;
    const double C173 = (C1812 * C1810 * C1829 * C1838 * C1818) / C1665;
    const double C190 = (C1812 * C1810 * C1838 * C1811 * C1818) / C1665;
    const double C207 = (C1812 * C1810 * C1838 * C1829 * C1818) / C1665;
    const double C225 =
        ((std::pow(C1838, 2) * C1810 * C1812 - (bs[1] * C1807) / C1806) *
         C1818) /
        C1665;
    const double C71 = (C1811 * C1812 * C1810 * C1819) / C1662 -
                       (ae * bs[1] * C1807) / (C1806 * C1662);
    const double C95 = (C1811 * C1812 * C1810 * C1832) / C1662;
    const double C116 = (C1811 * C1812 * C1810 * C1841) / C1662;
    const double C259 = (C1829 * C1812 * C1810 * C1819) / C1662;
    const double C287 = (C1829 * C1812 * C1810 * C1832) / C1662 -
                        (ae * bs[1] * C1807) / (C1806 * C1662);
    const double C309 = (C1829 * C1812 * C1810 * C1841) / C1662;
    const double C463 = (C1838 * C1812 * C1810 * C1819) / C1662;
    const double C487 = (C1838 * C1812 * C1810 * C1832) / C1662;
    const double C511 = (C1838 * C1812 * C1810 * C1841) / C1662 -
                        (ae * bs[1] * C1807) / (C1806 * C1662);
    const double C1820 = std::pow(C1817, 3);
    const double C1988 = std::exp(C1987);
    const double C2032 = std::exp(C2031);
    const double C2047 = std::exp(C2046);
    const double C1822 = C1814 * ae;
    const double C69 = C1814 * C1815 - (bs[1] * C1807) / C1806;
    const double C258 = C1829 * C1811 * C1814;
    const double C462 = C1838 * C1811 * C1814;
    const double C845 = C1814 * C1853 - (bs[1] * C1807) / C1806;
    const double C1001 = C1838 * C1829 * C1814;
    const double C1521 = C1814 * C1872 - (bs[1] * C1807) / C1806;
    const double C1823 = C1820 * C1821;
    const double C1835 = C1820 * C1834;
    const double C1844 = C1820 * C1843;
    const double C98 = (ae * C1812 * C1810 * C1829 * ae +
                        C1811 * C1820 * C1816 * C1811 * C1829 * C1818) /
                       C1665;
    const double C119 = (ae * C1812 * C1810 * C1838 * ae +
                         C1811 * C1820 * C1816 * C1811 * C1838 * C1818) /
                        C1665;
    const double C136 = (ae * C1812 * C1810 * C1832 +
                         C1811 * C1820 * C1816 * C1829 * C1811 * C1818) /
                        C1665;
    const double C154 =
        (C1811 * (C1814 + std::pow(C1829, 2) * C1816 * C1820) * C1818) / C1665;
    const double C155 =
        ((C1814 + C1853 * C1816 * C1820) * C1818 +
         (C1816 * C1820 + C1853 * bs[4] * std::pow(C1809, 4)) * C1818 * C1815) /
        C1665;
    const double C174 = (C1811 * C1820 * C1816 * C1829 * C1838 * C1818) / C1665;
    const double C175 =
        (C1820 * C1816 * C1858 + std::pow(C1809, 4) * bs[4] * C1858 * C1815) /
        C1665;
    const double C191 = (ae * C1812 * C1810 * C1841 +
                         C1811 * C1820 * C1816 * C1838 * C1811 * C1818) /
                        C1665;
    const double C208 = (C1811 * C1820 * C1816 * C1838 * C1829 * C1818) / C1665;
    const double C209 =
        (C1820 * C1816 * C1868 + std::pow(C1809, 4) * bs[4] * C1868 * C1815) /
        C1665;
    const double C226 =
        (C1811 * (C1814 + std::pow(C1838, 2) * C1816 * C1820) * C1818) / C1665;
    const double C227 =
        ((C1814 + C1872 * C1816 * C1820) * C1818 +
         (C1816 * C1820 + C1872 * bs[4] * std::pow(C1809, 4)) * C1818 * C1815) /
        C1665;
    const double C261 =
        (C1829 * (C1814 + C1815 * C1816 * C1820) * C1818) / C1665;
    const double C289 =
        (ae * C1812 * C1810 * C1819 + C1829 * C1820 * C1816 * C1833) / C1665;
    const double C311 = (C1829 * C1820 * C1816 * C1842) / C1665;
    const double C331 =
        (ae * C1812 * C1810 * C1819 + C1829 * C1820 * C1816 * C1849) / C1665;
    const double C353 = (2 * ae * C1812 * C1810 * C1832 +
                         C1829 * (C1814 + C1853 * C1816 * C1820) * C1818) /
                        C1665;
    const double C377 =
        (ae * C1812 * C1810 * C1841 + C1829 * C1820 * C1816 * C1858) / C1665;
    const double C397 = (C1829 * C1820 * C1816 * C1863) / C1665;
    const double C417 =
        (ae * C1812 * C1810 * C1841 + C1829 * C1820 * C1816 * C1868) / C1665;
    const double C437 =
        (C1829 * (C1814 + C1872 * C1816 * C1820) * C1818) / C1665;
    const double C438 =
        (C1829 * C1811 * (C1816 * C1820 + C1872 * bs[4] * std::pow(C1809, 4)) *
         C1818) /
        C1665;
    const double C465 =
        (C1838 * (C1814 + C1815 * C1816 * C1820) * C1818) / C1665;
    const double C489 = (C1838 * C1820 * C1816 * C1833) / C1665;
    const double C513 =
        (ae * C1812 * C1810 * C1819 + C1838 * C1820 * C1816 * C1842) / C1665;
    const double C533 = (C1838 * C1820 * C1816 * C1849) / C1665;
    const double C553 =
        (C1838 * (C1814 + C1853 * C1816 * C1820) * C1818) / C1665;
    const double C554 =
        (C1838 * C1811 * (C1816 * C1820 + C1853 * bs[4] * std::pow(C1809, 4)) *
         C1818) /
        C1665;
    const double C575 =
        (ae * C1812 * C1810 * C1832 + C1838 * C1820 * C1816 * C1858) / C1665;
    const double C595 =
        (ae * C1812 * C1810 * C1819 + C1838 * C1820 * C1816 * C1863) / C1665;
    const double C615 =
        (ae * C1812 * C1810 * C1832 + C1838 * C1820 * C1816 * C1868) / C1665;
    const double C637 = (2 * ae * C1812 * C1810 * C1841 +
                         C1838 * (C1814 + C1872 * C1816 * C1820) * C1818) /
                        C1665;
    const double C847 =
        ((C1814 + C1815 * C1816 * C1820) * C1818 +
         (C1816 * C1820 + C1815 * bs[4] * std::pow(C1809, 4)) * C1818 * C1853) /
        C1665;
    const double C885 =
        (C1820 * C1816 * C1842 + std::pow(C1809, 4) * bs[4] * C1842 * C1853) /
        C1665;
    const double C951 =
        (C1820 * C1816 * C1863 + std::pow(C1809, 4) * bs[4] * C1863 * C1853) /
        C1665;
    const double C981 =
        ((C1814 + C1872 * C1816 * C1820) * C1818 +
         (C1816 * C1820 + C1872 * bs[4] * std::pow(C1809, 4)) * C1818 * C1853) /
        C1665;
    const double C1003 =
        (C1838 * C1829 * (C1816 * C1820 + C1815 * bs[4] * std::pow(C1809, 4)) *
         C1818) /
        C1665;
    const double C1523 =
        ((C1814 + C1815 * C1816 * C1820) * C1818 +
         (C1816 * C1820 + C1815 * bs[4] * std::pow(C1809, 4)) * C1818 * C1872) /
        C1665;
    const double C1540 =
        (C1820 * C1816 * C1833 + std::pow(C1809, 4) * bs[4] * C1833 * C1872) /
        C1665;
    const double C1574 =
        (C1820 * C1816 * C1849 + std::pow(C1809, 4) * bs[4] * C1849 * C1872) /
        C1665;
    const double C1589 =
        ((C1814 + C1853 * C1816 * C1820) * C1818 +
         (C1816 * C1820 + C1853 * bs[4] * std::pow(C1809, 4)) * C1818 * C1872) /
        C1665;
    const double C1668 = C1666 * C1988;
    const double C2093 = C2085 * C1988;
    const double C2092 = C1988 * C2083;
    const double C249 = -(C1988 * C2084) / C1662;
    const double C1717 = C1716 * C2032;
    const double C93 = -(2 * C1664 * (yA - yB) * C2032) / C1662;
    const double C152 =
        -((C2032 - (C1696 * 2 * C1664 * C1696 * C2032) / C1662) * C1667) /
        C1662;
    const double C285 =
        ((C2032 - (C1696 * 2 * C1664 * C1696 * C2032) / C1662) * ae) / C1662 -
        (0 * be) / C1669;
    const double C286 = (0 * ae) / C1662 - (C1664 * C1696 * C2032) / C1665;
    const double C2095 = C2085 * C2032;
    const double C2094 = C2032 * C2088;
    const double C663 = -(C2032 * C2090) / C1662;
    const double C1729 = C1728 * C2047;
    const double C114 = -(2 * C1664 * (zA - zB) * C2047) / C1662;
    const double C224 =
        -((C2047 - (C1699 * 2 * C1664 * C1699 * C2047) / C1662) * C1667) /
        C1662;
    const double C509 =
        ((C2047 - (C1699 * 2 * C1664 * C1699 * C2047) / C1662) * ae) / C1662 -
        (0 * be) / C1669;
    const double C510 = (0 * ae) / C1662 - (C1664 * C1699 * C2047) / C1665;
    const double C2097 = C2085 * C2047;
    const double C2096 = C2047 * C2089;
    const double C1182 = -(C2047 * C2091) / C1662;
    const double C1824 = C1811 * C1823;
    const double C262 =
        (2 * ae * C1829 * C1823 +
         C1811 * C1829 * (C1816 * C1820 + C1815 * bs[4] * std::pow(C1809, 4)) *
             C1818) /
        C1665;
    const double C466 =
        (2 * ae * C1838 * C1823 +
         C1811 * C1838 * (C1816 * C1820 + C1815 * bs[4] * std::pow(C1809, 4)) *
             C1818) /
        C1665;
    const double C869 =
        (C1820 * C1816 * C1833 + ae * C1829 * C1823 +
         C1829 * (ae * C1823 + C1829 * std::pow(C1809, 4) * bs[4] * C1833)) /
        C1665;
    const double C900 =
        (C1820 * C1816 * C1849 + ae * C1829 * C1823 +
         C1829 * (ae * C1823 + C1829 * std::pow(C1809, 4) * bs[4] * C1849)) /
        C1665;
    const double C1025 =
        (C1838 * (ae * C1823 + C1829 * std::pow(C1809, 4) * bs[4] * C1833)) /
        C1665;
    const double C1045 = (ae * C1829 * C1823 +
                          C1838 * C1829 * std::pow(C1809, 4) * bs[4] * C1842) /
                         C1665;
    const double C1064 = (ae * C1838 * C1823 +
                          C1829 * C1838 * std::pow(C1809, 4) * bs[4] * C1849) /
                         C1665;
    const double C1123 = (ae * C1829 * C1823 +
                          C1838 * C1829 * std::pow(C1809, 4) * bs[4] * C1863) /
                         C1665;
    const double C1559 =
        (C1820 * C1816 * C1842 + ae * C1838 * C1823 +
         C1838 * (ae * C1823 + C1838 * std::pow(C1809, 4) * bs[4] * C1842)) /
        C1665;
    const double C1620 =
        (C1820 * C1816 * C1863 + ae * C1838 * C1823 +
         C1838 * (ae * C1823 + C1838 * std::pow(C1809, 4) * bs[4] * C1863)) /
        C1665;
    const double C846 = (C1812 * C1810 * C1819 + C1823 * C1853) / C1662;
    const double C1002 = (C1838 * C1829 * C1823) / C1662;
    const double C1522 = (C1812 * C1810 * C1819 + C1823 * C1872) / C1662;
    const double C1914 = C1829 * C1835;
    const double C99 =
        (C1820 * C1816 * C1833 + ae * C1811 * C1835 +
         C1811 * (ae * C1835 + C1811 * std::pow(C1809, 4) * bs[4] * C1833)) /
        C1665;
    const double C137 =
        (C1820 * C1816 * C1849 + ae * C1811 * C1835 +
         C1811 * (ae * C1835 + C1811 * std::pow(C1809, 4) * bs[4] * C1849)) /
        C1665;
    const double C354 =
        (2 * ae * C1811 * C1835 +
         C1829 * C1811 * (C1816 * C1820 + C1853 * bs[4] * std::pow(C1809, 4)) *
             C1818) /
        C1665;
    const double C490 =
        (C1838 * (ae * C1835 + C1811 * std::pow(C1809, 4) * bs[4] * C1833)) /
        C1665;
    const double C534 =
        (C1838 * (ae * C1835 + C1811 * std::pow(C1809, 4) * bs[4] * C1849)) /
        C1665;
    const double C576 = (ae * C1811 * C1835 +
                         C1838 * C1811 * std::pow(C1809, 4) * bs[4] * C1858) /
                        C1665;
    const double C616 = (ae * C1811 * C1835 +
                         C1838 * C1811 * std::pow(C1809, 4) * bs[4] * C1868) /
                        C1665;
    const double C1083 =
        (2 * ae * C1838 * C1835 +
         C1829 * C1838 * (C1816 * C1820 + C1853 * bs[4] * std::pow(C1809, 4)) *
             C1818) /
        C1665;
    const double C1605 =
        (C1820 * C1816 * C1858 + ae * C1838 * C1835 +
         C1838 * (ae * C1835 + C1838 * std::pow(C1809, 4) * bs[4] * C1858)) /
        C1665;
    const double C1635 =
        (C1820 * C1816 * C1868 + ae * C1838 * C1835 +
         C1838 * (ae * C1835 + C1838 * std::pow(C1809, 4) * bs[4] * C1868)) /
        C1665;
    const double C96 = (C1812 * C1810 * C1832 + C1835 * C1815) / C1662;
    const double C288 = (C1829 * C1811 * C1835 + C1811 * C1814 * ae) / C1662;
    const double C488 = (C1838 * C1811 * C1835) / C1662;
    const double C1539 = (C1812 * C1810 * C1832 + C1835 * C1872) / C1662;
    const double C1939 = C1838 * C1844;
    const double C120 =
        (C1820 * C1816 * C1842 + ae * C1811 * C1844 +
         C1811 * (ae * C1844 + C1811 * std::pow(C1809, 4) * bs[4] * C1842)) /
        C1665;
    const double C192 =
        (C1820 * C1816 * C1863 + ae * C1811 * C1844 +
         C1811 * (ae * C1844 + C1811 * std::pow(C1809, 4) * bs[4] * C1863)) /
        C1665;
    const double C312 =
        (C1829 * (ae * C1844 + C1811 * std::pow(C1809, 4) * bs[4] * C1842)) /
        C1665;
    const double C378 = (ae * C1811 * C1844 +
                         C1829 * C1811 * std::pow(C1809, 4) * bs[4] * C1858) /
                        C1665;
    const double C398 =
        (C1829 * (ae * C1844 + C1811 * std::pow(C1809, 4) * bs[4] * C1863)) /
        C1665;
    const double C418 = (ae * C1811 * C1844 +
                         C1829 * C1811 * std::pow(C1809, 4) * bs[4] * C1868) /
                        C1665;
    const double C638 =
        (2 * ae * C1811 * C1844 +
         C1838 * C1811 * (C1816 * C1820 + C1872 * bs[4] * std::pow(C1809, 4)) *
             C1818) /
        C1665;
    const double C936 =
        (C1820 * C1816 * C1858 + ae * C1829 * C1844 +
         C1829 * (ae * C1844 + C1829 * std::pow(C1809, 4) * bs[4] * C1858)) /
        C1665;
    const double C966 =
        (C1820 * C1816 * C1868 + ae * C1829 * C1844 +
         C1829 * (ae * C1844 + C1829 * std::pow(C1809, 4) * bs[4] * C1868)) /
        C1665;
    const double C1104 =
        (ae * (C1838 * C1844 + C1822) +
         C1829 * (ae * C1835 + C1838 * std::pow(C1809, 4) * bs[4] * C1858)) /
        C1665;
    const double C1161 =
        (2 * ae * C1829 * C1844 +
         C1838 * C1829 * (C1816 * C1820 + C1872 * bs[4] * std::pow(C1809, 4)) *
             C1818) /
        C1665;
    const double C117 = (C1812 * C1810 * C1841 + C1844 * C1815) / C1662;
    const double C310 = (C1829 * C1811 * C1844) / C1662;
    const double C512 = (C1838 * C1811 * C1844 + C1811 * C1814 * ae) / C1662;
    const double C884 = (C1812 * C1810 * C1841 + C1844 * C1853) / C1662;
    const double C1044 = (C1838 * C1829 * C1844 + C1829 * C1814 * ae) / C1662;
    const double C1670 = 2 * C1668;
    const double C66 =
        ((0 * ae) / C1662 - C1668 / C1665) / (2 * C1662) - (0 * be) / C1662;
    const double C668 = (0 * ae) / C1662 - C1668 / C1665;
    const double C55 = C2093 / C1993;
    const double C53 = C1988 / C1993 - (C2092 * C2084) / C1665;
    const double C54 = C2092 / C1669 - (C2093 * C2084) / C1662;
    const double C661 = C2092 / C1662;
    const double C1764 = 2 * C1717;
    const double C351 =
        (((-4 * C1717) / C1662 -
          (C1696 * (C2032 - (C1696 * 2 * C1717) / C1662) * C1667) / C1662) *
         ae) /
        C1662;
    const double C352 =
        (-((C2032 - (C1696 * 2 * C1717) / C1662) * C1667) / C1662) /
        (2 * C1662);
    const double C691 = (-(0 * be) / C1662) / (2 * C1662) -
                        ((C2032 - (C1696 * 2 * C1717) / C1662) * be) / C1662;
    const double C692 = (-(2 * C1717) / C1662) / (2 * C1662) - (0 * be) / C1662;
    const double C747 =
        -(((-4 * C1717) / C1662 -
           (C1696 * (C2032 - (C1696 * 2 * C1717) / C1662) * C1667) / C1662) *
          be) /
        C1662;
    const double C748 =
        (-((C2032 - (C1696 * 2 * C1717) / C1662) * C1667) / C1662) /
        (2 * C1662);
    const double C867 =
        ((0 * ae) / C1662 - C1717 / C1665) / (2 * C1662) - (0 * be) / C1662;
    const double C158 = C93 * C95;
    const double C157 = C93 * C94;
    const double C556 = C93 * C487;
    const double C358 = C285 * C95;
    const double C356 = C285 * C94;
    const double C1429 = C285 * C487;
    const double C357 = C286 * C287;
    const double C866 =
        (((C2032 - (C1696 * 2 * C1717) / C1662) * ae) / C1662 - C1756 / C1669) /
            (2 * C1662) -
        ((C1696 * ((0 * ae) / C1662 - C1717 / C1665) + C2095) * be) / C1662;
    const double C842 = C2095 / C1993;
    const double C251 = C2094 / C1662;
    const double C840 = C2032 / C1993 - (C2094 * C2090) / C1665;
    const double C841 = C2094 / C1669 - (C2095 * C2090) / C1662;
    const double C1794 = 2 * C1729;
    const double C635 =
        (((-4 * C1729) / C1662 -
          (C1699 * (C2047 - (C1699 * 2 * C1729) / C1662) * C1667) / C1662) *
         ae) /
        C1662;
    const double C636 =
        (-((C2047 - (C1699 * 2 * C1729) / C1662) * C1667) / C1662) /
        (2 * C1662);
    const double C1222 = (-(0 * be) / C1662) / (2 * C1662) -
                         ((C2047 - (C1699 * 2 * C1729) / C1662) * be) / C1662;
    const double C1223 =
        (-(2 * C1729) / C1662) / (2 * C1662) - (0 * be) / C1662;
    const double C1332 =
        -(((-4 * C1729) / C1662 -
           (C1699 * (C2047 - (C1699 * 2 * C1729) / C1662) * C1667) / C1662) *
          be) /
        C1662;
    const double C1333 =
        (-((C2047 - (C1699 * 2 * C1729) / C1662) * C1667) / C1662) /
        (2 * C1662);
    const double C1557 =
        ((0 * ae) / C1662 - C1729 / C1665) / (2 * C1662) - (0 * be) / C1662;
    const double C230 = C114 * C116;
    const double C229 = C114 * C115;
    const double C440 = C114 * C309;
    const double C642 = C509 * C116;
    const double C640 = C509 * C115;
    const double C1163 = C509 * C309;
    const double C641 = C510 * C511;
    const double C1556 =
        (((C2047 - (C1699 * 2 * C1729) / C1662) * ae) / C1662 - C1786 / C1669) /
            (2 * C1662) -
        ((C1699 * ((0 * ae) / C1662 - C1729 / C1665) + C2097) * be) / C1662;
    const double C1520 = C2097 / C1993;
    const double C459 = C2096 / C1662;
    const double C1518 = C2047 / C1993 - (C2096 * C2091) / C1665;
    const double C1519 = C2096 / C1669 - (C2097 * C2091) / C1662;
    const double C1825 = C1824 + C1822;
    const double C1915 = C1914 + C1822;
    const double C159 = C93 * C96;
    const double C359 = C286 * C288;
    const double C557 = C93 * C488;
    const double C1591 = C93 * C1539;
    const double C1940 = C1939 + C1822;
    const double C231 = C114 * C117;
    const double C441 = C114 * C310;
    const double C643 = C510 * C512;
    const double C983 = C114 * C884;
    const double C1164 = C510 * C1044;
    const double C1671 = C1663 * C1670;
    const double C256 = (-C1670 / C1662) / (2 * C1662) - (0 * be) / C1662;
    const double C844 = -C1670 / C1662;
    const double C671 = C668 * C71;
    const double C1765 = C1696 * C1764;
    const double C752 = C691 * C95;
    const double C750 = C691 * C94;
    const double C1085 = C691 * C487;
    const double C753 = C692 * C288;
    const double C751 = C692 * C287;
    const double C921 = C866 * C287;
    const double C865 =
        (((0 - (C1696 * C1756) / C1662) * ae) / C1662 - (0 * be) / C1669) /
            (2 * C1662) -
        ((C1696 * (((C2032 - (C1696 * 2 * C1717) / C1662) * ae) / C1662 -
                   C1756 / C1669) +
          C251) *
         be) /
            C1662 +
        (0 * ae) / C1662 - C1717 / C1665;
    const double C1795 = C1699 * C1794;
    const double C1337 = C1222 * C116;
    const double C1335 = C1222 * C115;
    const double C1503 = C1222 * C309;
    const double C1338 = C1223 * C512;
    const double C1336 = C1223 * C511;
    const double C1504 = C1223 * C1044;
    const double C1656 = C1556 * C511;
    const double C1555 =
        (((0 - (C1699 * C1786) / C1662) * ae) / C1662 - (0 * be) / C1669) /
            (2 * C1662) -
        ((C1699 * (((C2047 - (C1699 * 2 * C1729) / C1662) * ae) / C1662 -
                   C1786 / C1669) +
          C459) *
         be) /
            C1662 +
        (0 * ae) / C1662 - C1729 / C1665;
    const double C1826 = ae * C1825;
    const double C72 =
        (C1812 * C1810 * C1819 + C1811 * C1825 + C1811 * C1814 * ae) / C1662;
    const double C260 = (C1829 * C1825) / C1662;
    const double C464 = (C1838 * C1825) / C1662;
    const double C1916 = ae * C1915;
    const double C868 =
        (C1812 * C1810 * C1832 + C1829 * C1915 + C1829 * C1814 * ae) / C1662;
    const double C1024 = (C1838 * C1915) / C1662;
    const double C1941 = ae * C1940;
    const double C1558 =
        (C1812 * C1810 * C1841 + C1838 * C1940 + C1838 * C1814 * ae) / C1662;
    const double C1672 = C1671 / C1662;
    const double C265 = C256 * C71;
    const double C851 = C844 * C846;
    const double C850 = C844 * C259;
    const double C849 = C844 * C70;
    const double C1006 = C844 * C1002;
    const double C1005 = C844 * C463;
    const double C1525 = C844 * C1522;
    const double C1766 = C1765 / C1662;
    const double C920 = C865 * C94;
    const double C1796 = C1795 / C1662;
    const double C1655 = C1555 * C115;
    const double C75 =
        ((C1814 + C1815 * C1816 * C1820) * C1818 + C1826 + C1826 +
         C1811 * (2 * ae * C1823 +
                  C1811 * (C1816 * C1820 + C1815 * bs[4] * std::pow(C1809, 4)) *
                      C1818)) /
        C1665;
    const double C290 =
        (C1826 +
         C1829 * (ae * C1835 + C1811 * std::pow(C1809, 4) * bs[4] * C1833)) /
        C1665;
    const double C332 =
        (C1826 +
         C1829 * (ae * C1835 + C1811 * std::pow(C1809, 4) * bs[4] * C1849)) /
        C1665;
    const double C514 =
        (C1826 +
         C1838 * (ae * C1844 + C1811 * std::pow(C1809, 4) * bs[4] * C1842)) /
        C1665;
    const double C596 =
        (C1826 +
         C1838 * (ae * C1844 + C1811 * std::pow(C1809, 4) * bs[4] * C1863)) /
        C1665;
    const double C79 = C66 * C72;
    const double C267 = C256 * C260;
    const double C673 = C668 * C260;
    const double C469 = C256 * C464;
    const double C1186 = C668 * C464;
    const double C918 =
        ((C1814 + C1853 * C1816 * C1820) * C1818 + C1916 + C1916 +
         C1829 * (2 * ae * C1835 +
                  C1829 * (C1816 * C1820 + C1853 * bs[4] * std::pow(C1809, 4)) *
                      C1818)) /
        C1665;
    const double C1142 =
        (C1916 +
         C1838 * (ae * C1844 + C1829 * std::pow(C1809, 4) * bs[4] * C1868)) /
        C1665;
    const double C922 = C867 * C868;
    const double C1086 = C692 * C1024;
    const double C1430 = C286 * C1024;
    const double C1653 =
        ((C1814 + C1872 * C1816 * C1820) * C1818 + C1941 + C1941 +
         C1838 * (2 * ae * C1844 +
                  C1838 * (C1816 * C1820 + C1872 * bs[4] * std::pow(C1809, 4)) *
                      C1818)) /
        C1665;
    const double C1657 = C1557 * C1558;
    const double C1673 = C1988 - C1672;
    const double C1767 = C2032 - C1766;
    const double C1797 = C2047 - C1796;
    const double C1674 = C1673 * C1667;
    const double C62 =
        (((0 - (C1663 * C1661) / C1662) * ae) / C1662 - (0 * be) / C1669) /
            (2 * C1662) -
        ((C1663 * ((C1673 * ae) / C1662 - C1661 / C1669) + C661) * be) / C1662 +
        (0 * ae) / C1662 - C1668 / C1665;
    const double C64 =
        ((C1673 * ae) / C1662 - C1661 / C1669) / (2 * C1662) -
        ((C1663 * ((0 * ae) / C1662 - C1668 / C1665) + C2093) * be) / C1662;
    const double C254 = (-C1661 / C1662) / (2 * C1662) - (C1673 * be) / C1662;
    const double C666 = (C1673 * ae) / C1662 - C1661 / C1669;
    const double C1768 = C1767 * C1667;
    const double C1798 = C1797 * C1667;
    const double C1682 = C1663 * C1674;
    const double C61 =
        (ae * -2 * C1661) / (C1665 * 2 * C1662) -
        (((C1663 * ((-4 * C1668) / C1662 - (C1663 * C1674) / C1662) * ae) /
              C1662 +
          2 * ((C1673 * ae) / C1662 - C1661 / C1669)) *
         be) /
            C1662 -
        C1674 / C1669;
    const double C65 = (-C1674 / C1662) / (4 * C1665);
    const double C255 = (-C1674 / C1662) / (2 * C1662);
    const double C667 = (-C1674 / C1662) / (2 * C1662);
    const double C843 = -C1674 / C1662;
    const double C77 = C62 * C70;
    const double C78 = C64 * C71;
    const double C266 = C254 * C259;
    const double C264 = C254 * C70;
    const double C468 = C254 * C463;
    const double C672 = C666 * C259;
    const double C670 = C666 * C70;
    const double C1185 = C666 * C463;
    const double C1771 = C1696 * C1768;
    const double C915 =
        (ae * -2 * C1756) / (C1665 * 2 * C1662) -
        (((C1696 * ((-4 * C1717) / C1662 - (C1696 * C1768) / C1662) * ae) /
              C1662 +
          2 * ((C1767 * ae) / C1662 - C1756 / C1669)) *
         be) /
            C1662 -
        C1768 / C1669;
    const double C917 = (-C1768 / C1662) / (4 * C1665);
    const double C1801 = C1699 * C1798;
    const double C1650 =
        (ae * -2 * C1786) / (C1665 * 2 * C1662) -
        (((C1699 * ((-4 * C1729) / C1662 - (C1699 * C1798) / C1662) * ae) /
              C1662 +
          2 * ((C1797 * ae) / C1662 - C1786 / C1669)) *
         be) /
            C1662 -
        C1798 / C1669;
    const double C1652 = (-C1798 / C1662) / (4 * C1665);
    const double C63 =
        (((-4 * C1668) / C1662 - C1682 / C1662) * ae) / C1669 -
        ((2 * ((0 * ae) / C1662 - C1668 / C1665) - C1682 / C1669) * be) / C1662;
    const double C253 = -(((-4 * C1668) / C1662 - C1682 / C1662) * be) / C1662;
    const double C665 = (((-4 * C1668) / C1662 - C1682 / C1662) * ae) / C1662;
    const double C916 =
        (((-4 * C1717) / C1662 - C1771 / C1662) * ae) / C1669 -
        ((2 * ((0 * ae) / C1662 - C1717 / C1665) - C1771 / C1669) * be) / C1662;
    const double C1651 =
        (((-4 * C1729) / C1662 - C1801 / C1662) * ae) / C1669 -
        ((2 * ((0 * ae) / C1662 - C1729 / C1665) - C1801 / C1669) * be) / C1662;
    
    d2eexx[0] += (2 * std::pow(Pi, 2.5) *
                  (C61 * C67 + C77 + C77 + C53 * C73 + C63 * C68 + C78 + C78 +
                   C54 * C74 + C65 * C69 + C79 + C79 + C55 * C75) *
                  C2047 * C2032 * C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eexy[0] +=
        (2 * std::pow(Pi, 2.5) *
         ((C93 * C67 + C2032 * C94) * C62 + (C93 * C70 + C2032 * C97) * C53 +
          (C93 * C68 + C2032 * C95) * C64 + (C93 * C71 + C2032 * C98) * C54 +
          (C93 * C69 + C2032 * C96) * C66 + (C93 * C72 + C2032 * C99) * C55) *
         C2047 * C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eexz[0] += (2 * std::pow(Pi, 2.5) *
                  ((C114 * C67 + C2047 * C115) * C62 +
                   (C114 * C70 + C2047 * C118) * C53 +
                   (C114 * C68 + C2047 * C116) * C64 +
                   (C114 * C71 + C2047 * C119) * C54 +
                   (C114 * C69 + C2047 * C117) * C66 +
                   (C114 * C72 + C2047 * C120) * C55) *
                  C2032 * C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[0] += (2 * std::pow(Pi, 2.5) *
                  ((C62 * C67 + C53 * C70 + C64 * C68 + C54 * C71 + C66 * C69 +
                    C55 * C72) *
                       C93 +
                   (C62 * C94 + C53 * C135 + C64 * C95 + C54 * C136 +
                    C66 * C96 + C55 * C137) *
                       C2032) *
                  C2047 * C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[0] += (2 * std::pow(Pi, 2.5) *
                  ((C152 * C67 + C157 + C157 + C2032 * C153) * C53 +
                   (C152 * C68 + C158 + C158 + C2032 * C154) * C54 +
                   (C152 * C69 + C159 + C159 + C2032 * C155) * C55) *
                  C2047 * C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[0] += (2 * std::pow(Pi, 2.5) *
                  (((C114 * C67 + C2047 * C115) * C93 +
                    (C114 * C94 + C2047 * C173) * C2032) *
                       C53 +
                   ((C114 * C68 + C2047 * C116) * C93 +
                    (C114 * C95 + C2047 * C174) * C2032) *
                       C54 +
                   ((C114 * C69 + C2047 * C117) * C93 +
                    (C114 * C96 + C2047 * C175) * C2032) *
                       C55) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eezx[0] += (2 * std::pow(Pi, 2.5) *
                  ((C62 * C67 + C53 * C70 + C64 * C68 + C54 * C71 + C66 * C69 +
                    C55 * C72) *
                       C114 +
                   (C62 * C115 + C53 * C190 + C64 * C116 + C54 * C191 +
                    C66 * C117 + C55 * C192) *
                       C2047) *
                  C2032 * C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eezy[0] += (2 * std::pow(Pi, 2.5) *
                  (((C93 * C67 + C2032 * C94) * C114 +
                    (C93 * C115 + C2032 * C207) * C2047) *
                       C53 +
                   ((C93 * C68 + C2032 * C95) * C114 +
                    (C93 * C116 + C2032 * C208) * C2047) *
                       C54 +
                   ((C93 * C69 + C2032 * C96) * C114 +
                    (C93 * C117 + C2032 * C209) * C2047) *
                       C55) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eezz[0] += (2 * std::pow(Pi, 2.5) *
                  ((C224 * C67 + C229 + C229 + C2047 * C225) * C2032 * C53 +
                   (C224 * C68 + C230 + C230 + C2047 * C226) * C2032 * C54 +
                   (C224 * C69 + C231 + C231 + C2047 * C227) * C2032 * C55) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eexx[1] += (2 * std::pow(Pi, 2.5) *
                  ((C253 * C67 + C264 + C264 + C249 * C73 + C255 * C68 + C265 +
                    C265 + C2093 * C74) *
                       C2047 * C251 +
                   (C253 * C257 + C266 + C266 + C249 * C261 + C255 * C258 +
                    C267 + C267 + C2093 * C262) *
                       C2047 * C2095) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eexy[1] +=
        (2 * std::pow(Pi, 2.5) *
         ((C285 * C67 + C251 * C94 + C286 * C257 + C2095 * C287) * C254 +
          (C285 * C70 + C251 * C97 + C286 * C259 + C2095 * C289) * C249 +
          (C285 * C68 + C251 * C95 + C286 * C258 + C2095 * C288) * C256 +
          (C285 * C71 + C251 * C98 + C286 * C260 + C2095 * C290) * C2093) *
         C2047 * C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eexz[1] += (2 * std::pow(Pi, 2.5) *
                  (((C114 * C67 + C2047 * C115) * C254 +
                    (C114 * C70 + C2047 * C118) * C249 +
                    (C114 * C68 + C2047 * C116) * C256 +
                    (C114 * C71 + C2047 * C119) * C2093) *
                       C251 +
                   ((C114 * C257 + C2047 * C309) * C254 +
                    (C114 * C259 + C2047 * C311) * C249 +
                    (C114 * C258 + C2047 * C310) * C256 +
                    (C114 * C260 + C2047 * C312) * C2093) *
                       C2095) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[1] +=
        (2 * std::pow(Pi, 2.5) *
         ((C254 * C67 + C249 * C70 + C256 * C68 + C2093 * C71) * C285 +
          (C254 * C94 + C249 * C135 + C256 * C95 + C2093 * C136) * C251 +
          (C254 * C257 + C249 * C259 + C256 * C258 + C2093 * C260) * C286 +
          (C254 * C287 + C249 * C331 + C256 * C288 + C2093 * C332) * C2095) *
         C2047 * C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eeyy[1] += (2 * std::pow(Pi, 2.5) *
                  ((C351 * C67 + C356 + C356 + C251 * C153 + C352 * C257 +
                    C357 + C357 + C2095 * C353) *
                       C249 +
                   (C351 * C68 + C358 + C358 + C251 * C154 + C352 * C258 +
                    C359 + C359 + C2095 * C354) *
                       C2093) *
                  C2047 * C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[1] += (2 * std::pow(Pi, 2.5) *
                  (((C114 * C67 + C2047 * C115) * C285 +
                    (C114 * C94 + C2047 * C173) * C251 +
                    (C114 * C257 + C2047 * C309) * C286 +
                    (C114 * C287 + C2047 * C377) * C2095) *
                       C249 +
                   ((C114 * C68 + C2047 * C116) * C285 +
                    (C114 * C95 + C2047 * C174) * C251 +
                    (C114 * C258 + C2047 * C310) * C286 +
                    (C114 * C288 + C2047 * C378) * C2095) *
                       C2093) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eezx[1] +=
        (2 * std::pow(Pi, 2.5) *
         (((C254 * C67 + C249 * C70 + C256 * C68 + C2093 * C71) * C114 +
           (C254 * C115 + C249 * C190 + C256 * C116 + C2093 * C191) * C2047) *
              C251 +
          ((C254 * C257 + C249 * C259 + C256 * C258 + C2093 * C260) * C114 +
           (C254 * C309 + C249 * C397 + C256 * C310 + C2093 * C398) * C2047) *
              C2095) *
         C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eezy[1] +=
        (2 * std::pow(Pi, 2.5) *
         (((C285 * C67 + C251 * C94 + C286 * C257 + C2095 * C287) * C114 +
           (C285 * C115 + C251 * C207 + C286 * C309 + C2095 * C417) * C2047) *
              C249 +
          ((C285 * C68 + C251 * C95 + C286 * C258 + C2095 * C288) * C114 +
           (C285 * C116 + C251 * C208 + C286 * C310 + C2095 * C418) * C2047) *
              C2093) *
         C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eezz[1] += (2 * std::pow(Pi, 2.5) *
                  (((C224 * C67 + C229 + C229 + C2047 * C225) * C251 +
                    (C224 * C257 + C440 + C440 + C2047 * C437) * C2095) *
                       C249 +
                   ((C224 * C68 + C230 + C230 + C2047 * C226) * C251 +
                    (C224 * C258 + C441 + C441 + C2047 * C438) * C2095) *
                       C2093) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eexx[2] += (2 * std::pow(Pi, 2.5) *
                  ((C253 * C67 + C264 + C264 + C249 * C73 + C255 * C68 + C265 +
                    C265 + C2093 * C74) *
                       C459 +
                   (C253 * C461 + C468 + C468 + C249 * C465 + C255 * C462 +
                    C469 + C469 + C2093 * C466) *
                       C2097) *
                  C2032 * C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eexy[2] +=
        (2 * std::pow(Pi, 2.5) *
         (((C93 * C67 + C2032 * C94) * C254 + (C93 * C70 + C2032 * C97) * C249 +
           (C93 * C68 + C2032 * C95) * C256 +
           (C93 * C71 + C2032 * C98) * C2093) *
              C459 +
          ((C93 * C461 + C2032 * C487) * C254 +
           (C93 * C463 + C2032 * C489) * C249 +
           (C93 * C462 + C2032 * C488) * C256 +
           (C93 * C464 + C2032 * C490) * C2093) *
              C2097) *
         C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eexz[2] +=
        (2 * std::pow(Pi, 2.5) *
         ((C509 * C67 + C459 * C115 + C510 * C461 + C2097 * C511) * C254 +
          (C509 * C70 + C459 * C118 + C510 * C463 + C2097 * C513) * C249 +
          (C509 * C68 + C459 * C116 + C510 * C462 + C2097 * C512) * C256 +
          (C509 * C71 + C459 * C119 + C510 * C464 + C2097 * C514) * C2093) *
         C2032 * C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eeyx[2] +=
        (2 * std::pow(Pi, 2.5) *
         (((C254 * C67 + C249 * C70 + C256 * C68 + C2093 * C71) * C93 +
           (C254 * C94 + C249 * C135 + C256 * C95 + C2093 * C136) * C2032) *
              C459 +
          ((C254 * C461 + C249 * C463 + C256 * C462 + C2093 * C464) * C93 +
           (C254 * C487 + C249 * C533 + C256 * C488 + C2093 * C534) * C2032) *
              C2097) *
         C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eeyy[2] += (2 * std::pow(Pi, 2.5) *
                  (((C152 * C67 + C157 + C157 + C2032 * C153) * C249 +
                    (C152 * C68 + C158 + C158 + C2032 * C154) * C2093) *
                       C459 +
                   ((C152 * C461 + C556 + C556 + C2032 * C553) * C249 +
                    (C152 * C462 + C557 + C557 + C2032 * C554) * C2093) *
                       C2097) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[2] +=
        (2 * std::pow(Pi, 2.5) *
         (((C509 * C67 + C459 * C115 + C510 * C461 + C2097 * C511) * C93 +
           (C509 * C94 + C459 * C173 + C510 * C487 + C2097 * C575) * C2032) *
              C249 +
          ((C509 * C68 + C459 * C116 + C510 * C462 + C2097 * C512) * C93 +
           (C509 * C95 + C459 * C174 + C510 * C488 + C2097 * C576) * C2032) *
              C2093) *
         C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eezx[2] +=
        (2 * std::pow(Pi, 2.5) *
         ((C254 * C67 + C249 * C70 + C256 * C68 + C2093 * C71) * C509 +
          (C254 * C115 + C249 * C190 + C256 * C116 + C2093 * C191) * C459 +
          (C254 * C461 + C249 * C463 + C256 * C462 + C2093 * C464) * C510 +
          (C254 * C511 + C249 * C595 + C256 * C512 + C2093 * C596) * C2097) *
         C2032 * C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eezy[2] += (2 * std::pow(Pi, 2.5) *
                  (((C93 * C67 + C2032 * C94) * C509 +
                    (C93 * C115 + C2032 * C207) * C459 +
                    (C93 * C461 + C2032 * C487) * C510 +
                    (C93 * C511 + C2032 * C615) * C2097) *
                       C249 +
                   ((C93 * C68 + C2032 * C95) * C509 +
                    (C93 * C116 + C2032 * C208) * C459 +
                    (C93 * C462 + C2032 * C488) * C510 +
                    (C93 * C512 + C2032 * C616) * C2097) *
                       C2093) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eezz[2] += (2 * std::pow(Pi, 2.5) *
                  ((C635 * C67 + C640 + C640 + C459 * C225 + C636 * C461 +
                    C641 + C641 + C2097 * C637) *
                       C2032 * C249 +
                   (C635 * C68 + C642 + C642 + C459 * C226 + C636 * C462 +
                    C643 + C643 + C2097 * C638) *
                       C2032 * C2093) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eexx[3] += (2 * std::pow(Pi, 2.5) *
                  ((C665 * C67 + C670 + C670 + C661 * C73 + C667 * C68 + C671 +
                    C671 + C2093 * C74) *
                       C2047 * C663 +
                   (C665 * C257 + C672 + C672 + C661 * C261 + C667 * C258 +
                    C673 + C673 + C2093 * C262) *
                       C2047 * C2095) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eexy[3] +=
        (2 * std::pow(Pi, 2.5) *
         ((C691 * C67 + C663 * C94 + C692 * C257 + C2095 * C287) * C666 +
          (C691 * C70 + C663 * C97 + C692 * C259 + C2095 * C289) * C661 +
          (C691 * C68 + C663 * C95 + C692 * C258 + C2095 * C288) * C668 +
          (C691 * C71 + C663 * C98 + C692 * C260 + C2095 * C290) * C2093) *
         C2047 * C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eexz[3] += (2 * std::pow(Pi, 2.5) *
                  (((C114 * C67 + C2047 * C115) * C666 +
                    (C114 * C70 + C2047 * C118) * C661 +
                    (C114 * C68 + C2047 * C116) * C668 +
                    (C114 * C71 + C2047 * C119) * C2093) *
                       C663 +
                   ((C114 * C257 + C2047 * C309) * C666 +
                    (C114 * C259 + C2047 * C311) * C661 +
                    (C114 * C258 + C2047 * C310) * C668 +
                    (C114 * C260 + C2047 * C312) * C2093) *
                       C2095) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[3] +=
        (2 * std::pow(Pi, 2.5) *
         ((C666 * C67 + C661 * C70 + C668 * C68 + C2093 * C71) * C691 +
          (C666 * C94 + C661 * C135 + C668 * C95 + C2093 * C136) * C663 +
          (C666 * C257 + C661 * C259 + C668 * C258 + C2093 * C260) * C692 +
          (C666 * C287 + C661 * C331 + C668 * C288 + C2093 * C332) * C2095) *
         C2047 * C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eeyy[3] += (2 * std::pow(Pi, 2.5) *
                  ((C747 * C67 + C750 + C750 + C663 * C153 + C748 * C257 +
                    C751 + C751 + C2095 * C353) *
                       C661 +
                   (C747 * C68 + C752 + C752 + C663 * C154 + C748 * C258 +
                    C753 + C753 + C2095 * C354) *
                       C2093) *
                  C2047 * C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[3] += (2 * std::pow(Pi, 2.5) *
                  (((C114 * C67 + C2047 * C115) * C691 +
                    (C114 * C94 + C2047 * C173) * C663 +
                    (C114 * C257 + C2047 * C309) * C692 +
                    (C114 * C287 + C2047 * C377) * C2095) *
                       C661 +
                   ((C114 * C68 + C2047 * C116) * C691 +
                    (C114 * C95 + C2047 * C174) * C663 +
                    (C114 * C258 + C2047 * C310) * C692 +
                    (C114 * C288 + C2047 * C378) * C2095) *
                       C2093) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eezx[3] +=
        (2 * std::pow(Pi, 2.5) *
         (((C666 * C67 + C661 * C70 + C668 * C68 + C2093 * C71) * C114 +
           (C666 * C115 + C661 * C190 + C668 * C116 + C2093 * C191) * C2047) *
              C663 +
          ((C666 * C257 + C661 * C259 + C668 * C258 + C2093 * C260) * C114 +
           (C666 * C309 + C661 * C397 + C668 * C310 + C2093 * C398) * C2047) *
              C2095) *
         C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eezy[3] +=
        (2 * std::pow(Pi, 2.5) *
         (((C691 * C67 + C663 * C94 + C692 * C257 + C2095 * C287) * C114 +
           (C691 * C115 + C663 * C207 + C692 * C309 + C2095 * C417) * C2047) *
              C661 +
          ((C691 * C68 + C663 * C95 + C692 * C258 + C2095 * C288) * C114 +
           (C691 * C116 + C663 * C208 + C692 * C310 + C2095 * C418) * C2047) *
              C2093) *
         C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eezz[3] += (2 * std::pow(Pi, 2.5) *
                  (((C224 * C67 + C229 + C229 + C2047 * C225) * C663 +
                    (C224 * C257 + C440 + C440 + C2047 * C437) * C2095) *
                       C661 +
                   ((C224 * C68 + C230 + C230 + C2047 * C226) * C663 +
                    (C224 * C258 + C441 + C441 + C2047 * C438) * C2095) *
                       C2093) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eexx[4] += (2 * std::pow(Pi, 2.5) *
                  ((C843 * C67 + C849 + C849 + C1988 * C73) * C2047 * C840 +
                   (C843 * C257 + C850 + C850 + C1988 * C261) * C2047 * C841 +
                   (C843 * C845 + C851 + C851 + C1988 * C847) * C2047 * C842) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eexy[4] += (2 * std::pow(Pi, 2.5) *
                  ((C865 * C67 + C840 * C94 + C866 * C257 + C841 * C287 +
                    C867 * C845 + C842 * C868) *
                       C844 +
                   (C865 * C70 + C840 * C97 + C866 * C259 + C841 * C289 +
                    C867 * C846 + C842 * C869) *
                       C1988) *
                  C2047 * C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eexz[4] += (2 * std::pow(Pi, 2.5) *
                  (((C114 * C67 + C2047 * C115) * C844 +
                    (C114 * C70 + C2047 * C118) * C1988) *
                       C840 +
                   ((C114 * C257 + C2047 * C309) * C844 +
                    (C114 * C259 + C2047 * C311) * C1988) *
                       C841 +
                   ((C114 * C845 + C2047 * C884) * C844 +
                    (C114 * C846 + C2047 * C885) * C1988) *
                       C842) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[4] += (2 * std::pow(Pi, 2.5) *
                  ((C844 * C67 + C1988 * C70) * C865 +
                   (C844 * C94 + C1988 * C135) * C840 +
                   (C844 * C257 + C1988 * C259) * C866 +
                   (C844 * C287 + C1988 * C331) * C841 +
                   (C844 * C845 + C1988 * C846) * C867 +
                   (C844 * C868 + C1988 * C900) * C842) *
                  C2047 * C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[4] +=
        (2 * std::pow(Pi, 2.5) *
         (C915 * C67 + C920 + C920 + C840 * C153 + C916 * C257 + C921 + C921 +
          C841 * C353 + C917 * C845 + C922 + C922 + C842 * C918) *
         C1988 * C2047 * C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eeyz[4] += (2 * std::pow(Pi, 2.5) *
                  ((C114 * C67 + C2047 * C115) * C865 +
                   (C114 * C94 + C2047 * C173) * C840 +
                   (C114 * C257 + C2047 * C309) * C866 +
                   (C114 * C287 + C2047 * C377) * C841 +
                   (C114 * C845 + C2047 * C884) * C867 +
                   (C114 * C868 + C2047 * C936) * C842) *
                  C1988 * C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eezx[4] += (2 * std::pow(Pi, 2.5) *
                  (((C844 * C67 + C1988 * C70) * C114 +
                    (C844 * C115 + C1988 * C190) * C2047) *
                       C840 +
                   ((C844 * C257 + C1988 * C259) * C114 +
                    (C844 * C309 + C1988 * C397) * C2047) *
                       C841 +
                   ((C844 * C845 + C1988 * C846) * C114 +
                    (C844 * C884 + C1988 * C951) * C2047) *
                       C842) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eezy[4] += (2 * std::pow(Pi, 2.5) *
                  ((C865 * C67 + C840 * C94 + C866 * C257 + C841 * C287 +
                    C867 * C845 + C842 * C868) *
                       C114 +
                   (C865 * C115 + C840 * C207 + C866 * C309 + C841 * C417 +
                    C867 * C884 + C842 * C966) *
                       C2047) *
                  C1988 * C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eezz[4] += (2 * std::pow(Pi, 2.5) *
                  ((C224 * C67 + C229 + C229 + C2047 * C225) * C840 +
                   (C224 * C257 + C440 + C440 + C2047 * C437) * C841 +
                   (C224 * C845 + C983 + C983 + C2047 * C981) * C842) *
                  C1988 * C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eexx[5] += (2 * std::pow(Pi, 2.5) *
                  (((C843 * C67 + C849 + C849 + C1988 * C73) * C459 +
                    (C843 * C461 + C1005 + C1005 + C1988 * C465) * C2097) *
                       C663 +
                   ((C843 * C257 + C850 + C850 + C1988 * C261) * C459 +
                    (C843 * C1001 + C1006 + C1006 + C1988 * C1003) * C2097) *
                       C2095) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eexy[5] +=
        (2 * std::pow(Pi, 2.5) *
         (((C691 * C67 + C663 * C94 + C692 * C257 + C2095 * C287) * C844 +
           (C691 * C70 + C663 * C97 + C692 * C259 + C2095 * C289) * C1988) *
              C459 +
          ((C691 * C461 + C663 * C487 + C692 * C1001 + C2095 * C1024) * C844 +
           (C691 * C463 + C663 * C489 + C692 * C1002 + C2095 * C1025) * C1988) *
              C2097) *
         C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eexz[5] +=
        (2 * std::pow(Pi, 2.5) *
         (((C509 * C67 + C459 * C115 + C510 * C461 + C2097 * C511) * C844 +
           (C509 * C70 + C459 * C118 + C510 * C463 + C2097 * C513) * C1988) *
              C663 +
          ((C509 * C257 + C459 * C309 + C510 * C1001 + C2097 * C1044) * C844 +
           (C509 * C259 + C459 * C311 + C510 * C1002 + C2097 * C1045) * C1988) *
              C2095) *
         C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eeyx[5] += (2 * std::pow(Pi, 2.5) *
                  (((C844 * C67 + C1988 * C70) * C691 +
                    (C844 * C94 + C1988 * C135) * C663 +
                    (C844 * C257 + C1988 * C259) * C692 +
                    (C844 * C287 + C1988 * C331) * C2095) *
                       C459 +
                   ((C844 * C461 + C1988 * C463) * C691 +
                    (C844 * C487 + C1988 * C533) * C663 +
                    (C844 * C1001 + C1988 * C1002) * C692 +
                    (C844 * C1024 + C1988 * C1064) * C2095) *
                       C2097) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[5] += (2 * std::pow(Pi, 2.5) *
                  ((C747 * C67 + C750 + C750 + C663 * C153 + C748 * C257 +
                    C751 + C751 + C2095 * C353) *
                       C1988 * C459 +
                   (C747 * C461 + C1085 + C1085 + C663 * C553 + C748 * C1001 +
                    C1086 + C1086 + C2095 * C1083) *
                       C1988 * C2097) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[5] +=
        (2 * std::pow(Pi, 2.5) *
         ((C509 * C67 + C459 * C115 + C510 * C461 + C2097 * C511) * C691 +
          (C509 * C94 + C459 * C173 + C510 * C487 + C2097 * C575) * C663 +
          (C509 * C257 + C459 * C309 + C510 * C1001 + C2097 * C1044) * C692 +
          (C509 * C287 + C459 * C377 + C510 * C1024 + C2097 * C1104) * C2095) *
         C1988 * C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eezx[5] += (2 * std::pow(Pi, 2.5) *
                  (((C844 * C67 + C1988 * C70) * C509 +
                    (C844 * C115 + C1988 * C190) * C459 +
                    (C844 * C461 + C1988 * C463) * C510 +
                    (C844 * C511 + C1988 * C595) * C2097) *
                       C663 +
                   ((C844 * C257 + C1988 * C259) * C509 +
                    (C844 * C309 + C1988 * C397) * C459 +
                    (C844 * C1001 + C1988 * C1002) * C510 +
                    (C844 * C1044 + C1988 * C1123) * C2097) *
                       C2095) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eezy[5] +=
        (2 * std::pow(Pi, 2.5) *
         ((C691 * C67 + C663 * C94 + C692 * C257 + C2095 * C287) * C509 +
          (C691 * C115 + C663 * C207 + C692 * C309 + C2095 * C417) * C459 +
          (C691 * C461 + C663 * C487 + C692 * C1001 + C2095 * C1024) * C510 +
          (C691 * C511 + C663 * C615 + C692 * C1044 + C2095 * C1142) * C2097) *
         C1988 * C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eezz[5] += (2 * std::pow(Pi, 2.5) *
                  ((C635 * C67 + C640 + C640 + C459 * C225 + C636 * C461 +
                    C641 + C641 + C2097 * C637) *
                       C663 +
                   (C635 * C257 + C1163 + C1163 + C459 * C437 + C636 * C1001 +
                    C1164 + C1164 + C2097 * C1161) *
                       C2095) *
                  C1988 * C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eexx[6] += (2 * std::pow(Pi, 2.5) *
                  ((C665 * C67 + C670 + C670 + C661 * C73 + C667 * C68 + C671 +
                    C671 + C2093 * C74) *
                       C1182 +
                   (C665 * C461 + C1185 + C1185 + C661 * C465 + C667 * C462 +
                    C1186 + C1186 + C2093 * C466) *
                       C2097) *
                  C2032 * C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eexy[6] +=
        (2 * std::pow(Pi, 2.5) *
         (((C93 * C67 + C2032 * C94) * C666 + (C93 * C70 + C2032 * C97) * C661 +
           (C93 * C68 + C2032 * C95) * C668 +
           (C93 * C71 + C2032 * C98) * C2093) *
              C1182 +
          ((C93 * C461 + C2032 * C487) * C666 +
           (C93 * C463 + C2032 * C489) * C661 +
           (C93 * C462 + C2032 * C488) * C668 +
           (C93 * C464 + C2032 * C490) * C2093) *
              C2097) *
         C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eexz[6] +=
        (2 * std::pow(Pi, 2.5) *
         ((C1222 * C67 + C1182 * C115 + C1223 * C461 + C2097 * C511) * C666 +
          (C1222 * C70 + C1182 * C118 + C1223 * C463 + C2097 * C513) * C661 +
          (C1222 * C68 + C1182 * C116 + C1223 * C462 + C2097 * C512) * C668 +
          (C1222 * C71 + C1182 * C119 + C1223 * C464 + C2097 * C514) * C2093) *
         C2032 * C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eeyx[6] +=
        (2 * std::pow(Pi, 2.5) *
         (((C666 * C67 + C661 * C70 + C668 * C68 + C2093 * C71) * C93 +
           (C666 * C94 + C661 * C135 + C668 * C95 + C2093 * C136) * C2032) *
              C1182 +
          ((C666 * C461 + C661 * C463 + C668 * C462 + C2093 * C464) * C93 +
           (C666 * C487 + C661 * C533 + C668 * C488 + C2093 * C534) * C2032) *
              C2097) *
         C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eeyy[6] += (2 * std::pow(Pi, 2.5) *
                  (((C152 * C67 + C157 + C157 + C2032 * C153) * C661 +
                    (C152 * C68 + C158 + C158 + C2032 * C154) * C2093) *
                       C1182 +
                   ((C152 * C461 + C556 + C556 + C2032 * C553) * C661 +
                    (C152 * C462 + C557 + C557 + C2032 * C554) * C2093) *
                       C2097) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[6] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1222 * C67 + C1182 * C115 + C1223 * C461 + C2097 * C511) * C93 +
           (C1222 * C94 + C1182 * C173 + C1223 * C487 + C2097 * C575) * C2032) *
              C661 +
          ((C1222 * C68 + C1182 * C116 + C1223 * C462 + C2097 * C512) * C93 +
           (C1222 * C95 + C1182 * C174 + C1223 * C488 + C2097 * C576) * C2032) *
              C2093) *
         C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eezx[6] +=
        (2 * std::pow(Pi, 2.5) *
         ((C666 * C67 + C661 * C70 + C668 * C68 + C2093 * C71) * C1222 +
          (C666 * C115 + C661 * C190 + C668 * C116 + C2093 * C191) * C1182 +
          (C666 * C461 + C661 * C463 + C668 * C462 + C2093 * C464) * C1223 +
          (C666 * C511 + C661 * C595 + C668 * C512 + C2093 * C596) * C2097) *
         C2032 * C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eezy[6] += (2 * std::pow(Pi, 2.5) *
                  (((C93 * C67 + C2032 * C94) * C1222 +
                    (C93 * C115 + C2032 * C207) * C1182 +
                    (C93 * C461 + C2032 * C487) * C1223 +
                    (C93 * C511 + C2032 * C615) * C2097) *
                       C661 +
                   ((C93 * C68 + C2032 * C95) * C1222 +
                    (C93 * C116 + C2032 * C208) * C1182 +
                    (C93 * C462 + C2032 * C488) * C1223 +
                    (C93 * C512 + C2032 * C616) * C2097) *
                       C2093) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eezz[6] += (2 * std::pow(Pi, 2.5) *
                  ((C1332 * C67 + C1335 + C1335 + C1182 * C225 + C1333 * C461 +
                    C1336 + C1336 + C2097 * C637) *
                       C2032 * C661 +
                   (C1332 * C68 + C1337 + C1337 + C1182 * C226 + C1333 * C462 +
                    C1338 + C1338 + C2097 * C638) *
                       C2032 * C2093) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eexx[7] += (2 * std::pow(Pi, 2.5) *
                  (((C843 * C67 + C849 + C849 + C1988 * C73) * C1182 +
                    (C843 * C461 + C1005 + C1005 + C1988 * C465) * C2097) *
                       C251 +
                   ((C843 * C257 + C850 + C850 + C1988 * C261) * C1182 +
                    (C843 * C1001 + C1006 + C1006 + C1988 * C1003) * C2097) *
                       C2095) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eexy[7] +=
        (2 * std::pow(Pi, 2.5) *
         (((C285 * C67 + C251 * C94 + C286 * C257 + C2095 * C287) * C844 +
           (C285 * C70 + C251 * C97 + C286 * C259 + C2095 * C289) * C1988) *
              C1182 +
          ((C285 * C461 + C251 * C487 + C286 * C1001 + C2095 * C1024) * C844 +
           (C285 * C463 + C251 * C489 + C286 * C1002 + C2095 * C1025) * C1988) *
              C2097) *
         C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eexz[7] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1222 * C67 + C1182 * C115 + C1223 * C461 + C2097 * C511) * C844 +
           (C1222 * C70 + C1182 * C118 + C1223 * C463 + C2097 * C513) * C1988) *
              C251 +
          ((C1222 * C257 + C1182 * C309 + C1223 * C1001 + C2097 * C1044) *
               C844 +
           (C1222 * C259 + C1182 * C311 + C1223 * C1002 + C2097 * C1045) *
               C1988) *
              C2095) *
         C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eeyx[7] += (2 * std::pow(Pi, 2.5) *
                  (((C844 * C67 + C1988 * C70) * C285 +
                    (C844 * C94 + C1988 * C135) * C251 +
                    (C844 * C257 + C1988 * C259) * C286 +
                    (C844 * C287 + C1988 * C331) * C2095) *
                       C1182 +
                   ((C844 * C461 + C1988 * C463) * C285 +
                    (C844 * C487 + C1988 * C533) * C251 +
                    (C844 * C1001 + C1988 * C1002) * C286 +
                    (C844 * C1024 + C1988 * C1064) * C2095) *
                       C2097) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[7] += (2 * std::pow(Pi, 2.5) *
                  ((C351 * C67 + C356 + C356 + C251 * C153 + C352 * C257 +
                    C357 + C357 + C2095 * C353) *
                       C1988 * C1182 +
                   (C351 * C461 + C1429 + C1429 + C251 * C553 + C352 * C1001 +
                    C1430 + C1430 + C2095 * C1083) *
                       C1988 * C2097) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[7] +=
        (2 * std::pow(Pi, 2.5) *
         ((C1222 * C67 + C1182 * C115 + C1223 * C461 + C2097 * C511) * C285 +
          (C1222 * C94 + C1182 * C173 + C1223 * C487 + C2097 * C575) * C251 +
          (C1222 * C257 + C1182 * C309 + C1223 * C1001 + C2097 * C1044) * C286 +
          (C1222 * C287 + C1182 * C377 + C1223 * C1024 + C2097 * C1104) *
              C2095) *
         C1988 * C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eezx[7] += (2 * std::pow(Pi, 2.5) *
                  (((C844 * C67 + C1988 * C70) * C1222 +
                    (C844 * C115 + C1988 * C190) * C1182 +
                    (C844 * C461 + C1988 * C463) * C1223 +
                    (C844 * C511 + C1988 * C595) * C2097) *
                       C251 +
                   ((C844 * C257 + C1988 * C259) * C1222 +
                    (C844 * C309 + C1988 * C397) * C1182 +
                    (C844 * C1001 + C1988 * C1002) * C1223 +
                    (C844 * C1044 + C1988 * C1123) * C2097) *
                       C2095) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eezy[7] +=
        (2 * std::pow(Pi, 2.5) *
         ((C285 * C67 + C251 * C94 + C286 * C257 + C2095 * C287) * C1222 +
          (C285 * C115 + C251 * C207 + C286 * C309 + C2095 * C417) * C1182 +
          (C285 * C461 + C251 * C487 + C286 * C1001 + C2095 * C1024) * C1223 +
          (C285 * C511 + C251 * C615 + C286 * C1044 + C2095 * C1142) * C2097) *
         C1988 * C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eezz[7] += (2 * std::pow(Pi, 2.5) *
                  ((C1332 * C67 + C1335 + C1335 + C1182 * C225 + C1333 * C461 +
                    C1336 + C1336 + C2097 * C637) *
                       C251 +
                   (C1332 * C257 + C1503 + C1503 + C1182 * C437 +
                    C1333 * C1001 + C1504 + C1504 + C2097 * C1161) *
                       C2095) *
                  C1988 * C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eexx[8] += (2 * std::pow(Pi, 2.5) *
                  ((C843 * C67 + C849 + C849 + C1988 * C73) * C1518 +
                   (C843 * C461 + C1005 + C1005 + C1988 * C465) * C1519 +
                   (C843 * C1521 + C1525 + C1525 + C1988 * C1523) * C1520) *
                  C2032 * C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eexy[8] += (2 * std::pow(Pi, 2.5) *
                  (((C93 * C67 + C2032 * C94) * C844 +
                    (C93 * C70 + C2032 * C97) * C1988) *
                       C1518 +
                   ((C93 * C461 + C2032 * C487) * C844 +
                    (C93 * C463 + C2032 * C489) * C1988) *
                       C1519 +
                   ((C93 * C1521 + C2032 * C1539) * C844 +
                    (C93 * C1522 + C2032 * C1540) * C1988) *
                       C1520) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eexz[8] += (2 * std::pow(Pi, 2.5) *
                  ((C1555 * C67 + C1518 * C115 + C1556 * C461 + C1519 * C511 +
                    C1557 * C1521 + C1520 * C1558) *
                       C844 +
                   (C1555 * C70 + C1518 * C118 + C1556 * C463 + C1519 * C513 +
                    C1557 * C1522 + C1520 * C1559) *
                       C1988) *
                  C2032 * C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[8] += (2 * std::pow(Pi, 2.5) *
                  (((C844 * C67 + C1988 * C70) * C93 +
                    (C844 * C94 + C1988 * C135) * C2032) *
                       C1518 +
                   ((C844 * C461 + C1988 * C463) * C93 +
                    (C844 * C487 + C1988 * C533) * C2032) *
                       C1519 +
                   ((C844 * C1521 + C1988 * C1522) * C93 +
                    (C844 * C1539 + C1988 * C1574) * C2032) *
                       C1520) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[8] +=
        (2 * std::pow(Pi, 2.5) *
         ((C152 * C67 + C157 + C157 + C2032 * C153) * C1988 * C1518 +
          (C152 * C461 + C556 + C556 + C2032 * C553) * C1988 * C1519 +
          (C152 * C1521 + C1591 + C1591 + C2032 * C1589) * C1988 * C1520) *
         C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eeyz[8] += (2 * std::pow(Pi, 2.5) *
                  ((C1555 * C67 + C1518 * C115 + C1556 * C461 + C1519 * C511 +
                    C1557 * C1521 + C1520 * C1558) *
                       C93 +
                   (C1555 * C94 + C1518 * C173 + C1556 * C487 + C1519 * C575 +
                    C1557 * C1539 + C1520 * C1605) *
                       C2032) *
                  C1988 * C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eezx[8] += (2 * std::pow(Pi, 2.5) *
                  ((C844 * C67 + C1988 * C70) * C1555 +
                   (C844 * C115 + C1988 * C190) * C1518 +
                   (C844 * C461 + C1988 * C463) * C1556 +
                   (C844 * C511 + C1988 * C595) * C1519 +
                   (C844 * C1521 + C1988 * C1522) * C1557 +
                   (C844 * C1558 + C1988 * C1620) * C1520) *
                  C2032 * C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eezy[8] += (2 * std::pow(Pi, 2.5) *
                  ((C93 * C67 + C2032 * C94) * C1555 +
                   (C93 * C115 + C2032 * C207) * C1518 +
                   (C93 * C461 + C2032 * C487) * C1556 +
                   (C93 * C511 + C2032 * C615) * C1519 +
                   (C93 * C1521 + C2032 * C1539) * C1557 +
                   (C93 * C1558 + C2032 * C1635) * C1520) *
                  C1988 * C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eezz[8] += (2 * std::pow(Pi, 2.5) *
                  (C1650 * C67 + C1655 + C1655 + C1518 * C225 + C1651 * C461 +
                   C1656 + C1656 + C1519 * C637 + C1652 * C1521 + C1657 +
                   C1657 + C1520 * C1653) *
                  C2032 * C1988 * C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    
}
