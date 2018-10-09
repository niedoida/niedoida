/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_ppss_AB.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
void second_derivative_ee_1100_12(const double ae,
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
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    const double C1634 = ae * be;
    const double C1633 = ae + be;
    const double C1632 = 0 * be;
    const double C1631 = xA - xB;
    const double C1663 = yA - yB;
    const double C1666 = zA - zB;
    const double C1723 = 0 * be;
    const double C1753 = 0 * be;
    const double C1773 = p + q;
    const double C1772 = p * q;
    const double C1778 = xP - xQ;
    const double C1777 = bs[2];
    const double C1783 = bs[3];
    const double C1794 = yP - yQ;
    const double C1804 = zP - zQ;
    const double C67 = bs[0];
    const double C2088 = ce + de;
    const double C2087 = ce * de;
    const double C1642 = 2 * C1634;
    const double C1635 = std::pow(C1633, 2);
    const double C1994 = 2 * C1633;
    const double C1636 = C1634 * C1631;
    const double C1985 = std::pow(C1631, 2);
    const double C2085 = C1631 * be;
    const double C2084 = C1631 * ae;
    const double C1683 = C1634 * C1663;
    const double C2029 = std::pow(C1663, 2);
    const double C2091 = C1663 * be;
    const double C2089 = C1663 * ae;
    const double C1695 = C1634 * C1666;
    const double C2044 = std::pow(C1666, 2);
    const double C2092 = C1666 * be;
    const double C2090 = C1666 * ae;
    const double C1774 = 2 * C1772;
    const double C1786 = C1778 * ae;
    const double C1785 = C1778 * be;
    const double C1782 = std::pow(C1778, 2);
    const double C1797 = C1794 * be;
    const double C1796 = C1778 * C1794;
    const double C1816 = C1794 * ae;
    const double C1815 = C1794 * C1778;
    const double C1824 = std::pow(C1794, 2);
    const double C1807 = C1804 * be;
    const double C1806 = C1778 * C1804;
    const double C1828 = C1794 * C1804;
    const double C1835 = C1804 * ae;
    const double C1834 = C1804 * C1778;
    const double C1843 = C1804 * C1794;
    const double C1849 = std::pow(C1804, 2);
    const double C58 = std::exp(-(std::pow(zC - zD, 2) * C2087) / C2088);
    const double C59 = std::exp(-(std::pow(yC - yD, 2) * C2087) / C2088);
    const double C60 = std::exp(-(std::pow(xC - xD, 2) * C2087) / C2088);
    const double C1637 = 2 * C1635;
    const double C2086 = std::pow(C1994, -1);
    const double C1986 = C1985 * C1634;
    const double C2030 = C2029 * C1634;
    const double C2045 = C2044 * C1634;
    const double C1776 = C1774 / C1773;
    const double C76 =
        ((std::pow(xP - xQ, 2) * bs[2] * std::pow(C1774 / C1773, 2) -
          (bs[1] * C1774) / C1773) *
         C1634) /
        C1635;
    const double C68 = -(C1778 * bs[1] * C1774) / C1773;
    const double C257 = -(C1794 * bs[1] * C1774) / C1773;
    const double C457 = -(C1804 * bs[1] * C1774) / C1773;
    const double C1789 = C1783 * C1786;
    const double C71 = (-(bs[1] * C1786 * C1774) / C1773) / C1633;
    const double C1788 = C1783 * C1785;
    const double C70 = (-(bs[1] * C1785 * C1774) / C1773) / C1633;
    const double C1799 = C1783 * C1797;
    const double C94 = (-(bs[1] * C1797 * C1774) / C1773) / C1633;
    const double C1798 = C1796 * ae;
    const double C1818 = C1783 * C1816;
    const double C135 = (-(bs[1] * C1816 * C1774) / C1773) / C1633;
    const double C1817 = C1815 * ae;
    const double C1809 = C1783 * C1807;
    const double C115 = (-(bs[1] * C1807 * C1774) / C1773) / C1633;
    const double C1808 = C1806 * ae;
    const double C1829 = C1828 * ae;
    const double C1837 = C1783 * C1835;
    const double C190 = (-(bs[1] * C1835 * C1774) / C1773) / C1633;
    const double C1836 = C1834 * ae;
    const double C1844 = C1843 * ae;
    const double C1987 = C1986 / C1633;
    const double C2031 = C2030 / C1633;
    const double C2046 = C2045 / C1633;
    const double C1779 = std::pow(C1776, 2);
    const double C1784 = -C1776;
    const double C1800 = C1798 * be;
    const double C1819 = C1817 * be;
    const double C1810 = C1808 * be;
    const double C1830 = C1829 * be;
    const double C1838 = C1836 * be;
    const double C1845 = C1844 * be;
    const double C1988 = -C1987;
    const double C2032 = -C2031;
    const double C2047 = -C2046;
    const double C1781 = C1777 * C1779;
    const double C77 =
        (ae * C1779 * C1777 * C1778 * be + be * C1779 * C1777 * C1778 * ae +
         C1778 *
             (C1777 * C1779 +
              std::pow(C1778, 2) * bs[3] * std::pow(-C1776, 3)) *
             C1634) /
        C1635;
    const double C97 = (C1779 * C1777 * C1778 * (yP - yQ) * ae * be) / C1635;
    const double C118 = (C1779 * C1777 * C1778 * (zP - zQ) * ae * be) / C1635;
    const double C138 = (C1779 * C1777 * C1794 * C1778 * ae * be) / C1635;
    const double C156 =
        ((std::pow(C1794, 2) * C1777 * C1779 - (bs[1] * C1774) / C1773) *
         C1634) /
        C1635;
    const double C173 = (C1779 * C1777 * C1794 * C1804 * ae * be) / C1635;
    const double C193 = (C1779 * C1777 * C1804 * C1778 * ae * be) / C1635;
    const double C210 = (C1779 * C1777 * C1804 * C1794 * ae * be) / C1635;
    const double C228 =
        ((std::pow(C1804, 2) * C1777 * C1779 - (bs[1] * C1774) / C1773) *
         C1634) /
        C1635;
    const double C72 = (C1778 * C1779 * C1777 * C1785) / C1633 -
                       (be * bs[1] * C1774) / (C1773 * C1633);
    const double C73 = (C1778 * C1779 * C1777 * C1786) / C1633 -
                       (ae * bs[1] * C1774) / (C1773 * C1633);
    const double C95 = (C1778 * C1779 * C1777 * C1797) / C1633;
    const double C116 = (C1778 * C1779 * C1777 * C1807) / C1633;
    const double C136 = (C1778 * C1779 * C1777 * C1816) / C1633;
    const double C191 = (C1778 * C1779 * C1777 * C1835) / C1633;
    const double C259 = (C1794 * C1779 * C1777 * C1785) / C1633;
    const double C260 = (C1794 * C1779 * C1777 * C1786) / C1633;
    const double C285 = (C1794 * C1779 * C1777 * C1797) / C1633 -
                        (be * bs[1] * C1774) / (C1773 * C1633);
    const double C307 = (C1794 * C1779 * C1777 * C1807) / C1633;
    const double C329 = (C1794 * C1779 * C1777 * C1816) / C1633 -
                        (ae * bs[1] * C1774) / (C1773 * C1633);
    const double C393 = (C1794 * C1779 * C1777 * C1835) / C1633;
    const double C459 = (C1804 * C1779 * C1777 * C1785) / C1633;
    const double C460 = (C1804 * C1779 * C1777 * C1786) / C1633;
    const double C483 = (C1804 * C1779 * C1777 * C1797) / C1633;
    const double C507 = (C1804 * C1779 * C1777 * C1807) / C1633 -
                        (be * bs[1] * C1774) / (C1773 * C1633);
    const double C529 = (C1804 * C1779 * C1777 * C1816) / C1633;
    const double C591 = (C1804 * C1779 * C1777 * C1835) / C1633 -
                        (ae * bs[1] * C1774) / (C1773 * C1633);
    const double C1787 = std::pow(C1784, 3);
    const double C1989 = std::exp(C1988);
    const double C2033 = std::exp(C2032);
    const double C2048 = std::exp(C2047);
    const double C69 = C1781 * C1782 - (bs[1] * C1774) / C1773;
    const double C258 = C1794 * C1778 * C1781;
    const double C458 = C1804 * C1778 * C1781;
    const double C831 = C1781 * C1824 - (bs[1] * C1774) / C1773;
    const double C983 = C1804 * C1794 * C1781;
    const double C1490 = C1781 * C1849 - (bs[1] * C1774) / C1773;
    const double C1791 = C1787 * C1789;
    const double C1790 = C1787 * C1788;
    const double C1801 = C1787 * C1799;
    const double C1811 = C1787 * C1809;
    const double C1820 = C1787 * C1818;
    const double C1839 = C1787 * C1837;
    const double C98 = (ae * C1779 * C1777 * C1794 * be +
                        C1778 * C1787 * C1783 * C1778 * C1794 * ae * be) /
                       C1635;
    const double C119 = (ae * C1779 * C1777 * C1804 * be +
                         C1778 * C1787 * C1783 * C1778 * C1804 * ae * be) /
                        C1635;
    const double C139 = (be * C1779 * C1777 * C1794 * ae +
                         C1778 * C1787 * C1783 * C1794 * C1778 * ae * be) /
                        C1635;
    const double C157 =
        (C1778 * (C1781 + std::pow(C1794, 2) * C1783 * C1787) * C1634) / C1635;
    const double C158 =
        ((C1781 + C1824 * C1783 * C1787) * C1634 +
         (C1783 * C1787 + C1824 * bs[4] * std::pow(C1776, 4)) * C1634 * C1782) /
        C1635;
    const double C174 =
        (C1778 * C1787 * C1783 * C1794 * C1804 * ae * be) / C1635;
    const double C175 =
        (C1787 * C1783 * C1830 + std::pow(C1776, 4) * bs[4] * C1830 * C1782) /
        C1635;
    const double C194 = (be * C1779 * C1777 * C1804 * ae +
                         C1778 * C1787 * C1783 * C1804 * C1778 * ae * be) /
                        C1635;
    const double C211 =
        (C1778 * C1787 * C1783 * C1804 * C1794 * ae * be) / C1635;
    const double C212 =
        (C1787 * C1783 * C1845 + std::pow(C1776, 4) * bs[4] * C1845 * C1782) /
        C1635;
    const double C229 =
        (C1778 * (C1781 + std::pow(C1804, 2) * C1783 * C1787) * C1634) / C1635;
    const double C230 =
        ((C1781 + C1849 * C1783 * C1787) * C1634 +
         (C1783 * C1787 + C1849 * bs[4] * std::pow(C1776, 4)) * C1634 * C1782) /
        C1635;
    const double C263 =
        (C1794 * (C1781 + C1782 * C1783 * C1787) * C1634) / C1635;
    const double C287 =
        (be * C1779 * C1777 * C1786 + C1794 * C1787 * C1783 * C1800) / C1635;
    const double C309 = (C1794 * C1787 * C1783 * C1810) / C1635;
    const double C331 =
        (ae * C1779 * C1777 * C1785 + C1794 * C1787 * C1783 * C1819) / C1635;
    const double C353 =
        (ae * C1779 * C1777 * C1797 + be * C1779 * C1777 * C1816 +
         C1794 * (C1781 + C1824 * C1783 * C1787) * C1634) /
        C1635;
    const double C373 =
        (ae * C1779 * C1777 * C1807 + C1794 * C1787 * C1783 * C1830) / C1635;
    const double C395 = (C1794 * C1787 * C1783 * C1838) / C1635;
    const double C415 =
        (be * C1779 * C1777 * C1835 + C1794 * C1787 * C1783 * C1845) / C1635;
    const double C435 =
        (C1794 * (C1781 + C1849 * C1783 * C1787) * C1634) / C1635;
    const double C436 =
        (C1794 * C1778 * (C1783 * C1787 + C1849 * bs[4] * std::pow(C1776, 4)) *
         C1634) /
        C1635;
    const double C463 =
        (C1804 * (C1781 + C1782 * C1783 * C1787) * C1634) / C1635;
    const double C485 = (C1804 * C1787 * C1783 * C1800) / C1635;
    const double C509 =
        (be * C1779 * C1777 * C1786 + C1804 * C1787 * C1783 * C1810) / C1635;
    const double C531 = (C1804 * C1787 * C1783 * C1819) / C1635;
    const double C551 =
        (C1804 * (C1781 + C1824 * C1783 * C1787) * C1634) / C1635;
    const double C552 =
        (C1804 * C1778 * (C1783 * C1787 + C1824 * bs[4] * std::pow(C1776, 4)) *
         C1634) /
        C1635;
    const double C571 =
        (be * C1779 * C1777 * C1816 + C1804 * C1787 * C1783 * C1830) / C1635;
    const double C593 =
        (ae * C1779 * C1777 * C1785 + C1804 * C1787 * C1783 * C1838) / C1635;
    const double C613 =
        (ae * C1779 * C1777 * C1797 + C1804 * C1787 * C1783 * C1845) / C1635;
    const double C635 =
        (ae * C1779 * C1777 * C1807 + be * C1779 * C1777 * C1835 +
         C1804 * (C1781 + C1849 * C1783 * C1787) * C1634) /
        C1635;
    const double C834 =
        ((C1781 + C1782 * C1783 * C1787) * C1634 +
         (C1783 * C1787 + C1782 * bs[4] * std::pow(C1776, 4)) * C1634 * C1824) /
        C1635;
    const double C869 =
        (C1787 * C1783 * C1810 + std::pow(C1776, 4) * bs[4] * C1810 * C1824) /
        C1635;
    const double C934 =
        (C1787 * C1783 * C1838 + std::pow(C1776, 4) * bs[4] * C1838 * C1824) /
        C1635;
    const double C964 =
        ((C1781 + C1849 * C1783 * C1787) * C1634 +
         (C1783 * C1787 + C1849 * bs[4] * std::pow(C1776, 4)) * C1634 * C1824) /
        C1635;
    const double C986 =
        (C1804 * C1794 * (C1783 * C1787 + C1782 * bs[4] * std::pow(C1776, 4)) *
         C1634) /
        C1635;
    const double C1493 =
        ((C1781 + C1782 * C1783 * C1787) * C1634 +
         (C1783 * C1787 + C1782 * bs[4] * std::pow(C1776, 4)) * C1634 * C1849) /
        C1635;
    const double C1509 =
        (C1787 * C1783 * C1800 + std::pow(C1776, 4) * bs[4] * C1800 * C1849) /
        C1635;
    const double C1544 =
        (C1787 * C1783 * C1819 + std::pow(C1776, 4) * bs[4] * C1819 * C1849) /
        C1635;
    const double C1559 =
        ((C1781 + C1824 * C1783 * C1787) * C1634 +
         (C1783 * C1787 + C1824 * bs[4] * std::pow(C1776, 4)) * C1634 * C1849) /
        C1635;
    const double C1638 = C1636 * C1989;
    const double C2094 = C2086 * C1989;
    const double C2093 = C1989 * C2084;
    const double C249 = -(C1989 * C2085) / C1633;
    const double C1684 = C1683 * C2033;
    const double C93 = -(2 * C1634 * (yA - yB) * C2033) / C1633;
    const double C155 =
        -((C2033 - (C1663 * 2 * C1634 * C1663 * C2033) / C1633) * C1642) /
        C1633;
    const double C283 =
        ((C2033 - (C1663 * 2 * C1634 * C1663 * C2033) / C1633) * ae) / C1633 -
        (0 * be) / C1637;
    const double C284 = (0 * ae) / C1633 - (C1634 * C1663 * C2033) / C1635;
    const double C2096 = C2086 * C2033;
    const double C2095 = C2033 * C2089;
    const double C657 = -(C2033 * C2091) / C1633;
    const double C1696 = C1695 * C2048;
    const double C114 = -(2 * C1634 * (zA - zB) * C2048) / C1633;
    const double C227 =
        -((C2048 - (C1666 * 2 * C1634 * C1666 * C2048) / C1633) * C1642) /
        C1633;
    const double C505 =
        ((C2048 - (C1666 * 2 * C1634 * C1666 * C2048) / C1633) * ae) / C1633 -
        (0 * be) / C1637;
    const double C506 = (0 * ae) / C1633 - (C1634 * C1666 * C2048) / C1635;
    const double C2098 = C2086 * C2048;
    const double C2097 = C2048 * C2090;
    const double C1161 = -(C2048 * C2092) / C1633;
    const double C853 =
        (C1787 * C1783 * C1800 + be * C1794 * C1791 +
         C1794 * (be * C1791 + C1794 * std::pow(C1776, 4) * bs[4] * C1800)) /
        C1635;
    const double C1006 =
        (C1804 * (be * C1791 + C1794 * std::pow(C1776, 4) * bs[4] * C1800)) /
        C1635;
    const double C1026 = (be * C1794 * C1791 +
                          C1804 * C1794 * std::pow(C1776, 4) * bs[4] * C1810) /
                         C1635;
    const double C1528 =
        (C1787 * C1783 * C1810 + be * C1804 * C1791 +
         C1804 * (be * C1791 + C1804 * std::pow(C1776, 4) * bs[4] * C1810)) /
        C1635;
    const double C75 =
        (C1779 * C1777 * C1786 + C1778 * (C1778 * C1791 + C1781 * ae) +
         C1778 * C1781 * ae) /
        C1633;
    const double C262 = (C1794 * (C1778 * C1791 + C1781 * ae)) / C1633;
    const double C462 = (C1804 * (C1778 * C1791 + C1781 * ae)) / C1633;
    const double C833 = (C1779 * C1777 * C1786 + C1791 * C1824) / C1633;
    const double C985 = (C1804 * C1794 * C1791) / C1633;
    const double C1492 = (C1779 * C1777 * C1786 + C1791 * C1849) / C1633;
    const double C78 =
        ((C1781 + C1782 * C1783 * C1787) * C1634 +
         ae * (C1778 * C1790 + C1781 * be) + be * (C1778 * C1791 + C1781 * ae) +
         C1778 * (ae * C1790 + be * C1791 +
                  C1778 * (C1783 * C1787 + C1782 * bs[4] * std::pow(C1776, 4)) *
                      C1634)) /
        C1635;
    const double C264 =
        (ae * C1794 * C1790 + be * C1794 * C1791 +
         C1778 * C1794 * (C1783 * C1787 + C1782 * bs[4] * std::pow(C1776, 4)) *
             C1634) /
        C1635;
    const double C464 =
        (ae * C1804 * C1790 + be * C1804 * C1791 +
         C1778 * C1804 * (C1783 * C1787 + C1782 * bs[4] * std::pow(C1776, 4)) *
             C1634) /
        C1635;
    const double C885 =
        (C1787 * C1783 * C1819 + ae * C1794 * C1790 +
         C1794 * (ae * C1790 + C1794 * std::pow(C1776, 4) * bs[4] * C1819)) /
        C1635;
    const double C1046 = (ae * C1804 * C1790 +
                          C1794 * C1804 * std::pow(C1776, 4) * bs[4] * C1819) /
                         C1635;
    const double C1104 = (ae * C1794 * C1790 +
                          C1804 * C1794 * std::pow(C1776, 4) * bs[4] * C1838) /
                         C1635;
    const double C1590 =
        (C1787 * C1783 * C1838 + ae * C1804 * C1790 +
         C1804 * (ae * C1790 + C1804 * std::pow(C1776, 4) * bs[4] * C1838)) /
        C1635;
    const double C74 =
        (C1779 * C1777 * C1785 + C1778 * (C1778 * C1790 + C1781 * be) +
         C1778 * C1781 * be) /
        C1633;
    const double C261 = (C1794 * (C1778 * C1790 + C1781 * be)) / C1633;
    const double C461 = (C1804 * (C1778 * C1790 + C1781 * be)) / C1633;
    const double C832 = (C1779 * C1777 * C1785 + C1790 * C1824) / C1633;
    const double C984 = (C1804 * C1794 * C1790) / C1633;
    const double C1491 = (C1779 * C1777 * C1785 + C1790 * C1849) / C1633;
    const double C99 =
        (C1787 * C1783 * C1800 + ae * C1778 * C1801 +
         C1778 * (ae * C1801 + C1778 * std::pow(C1776, 4) * bs[4] * C1800)) /
        C1635;
    const double C288 =
        (be * (C1778 * C1791 + C1781 * ae) +
         C1794 * (ae * C1801 + C1778 * std::pow(C1776, 4) * bs[4] * C1800)) /
        C1635;
    const double C486 =
        (C1804 * (ae * C1801 + C1778 * std::pow(C1776, 4) * bs[4] * C1800)) /
        C1635;
    const double C614 = (ae * C1778 * C1801 +
                         C1804 * C1778 * std::pow(C1776, 4) * bs[4] * C1845) /
                        C1635;
    const double C1605 =
        (C1787 * C1783 * C1845 + ae * C1804 * C1801 +
         C1804 * (ae * C1801 + C1804 * std::pow(C1776, 4) * bs[4] * C1845)) /
        C1635;
    const double C96 = (C1779 * C1777 * C1797 + C1801 * C1782) / C1633;
    const double C286 = (C1794 * C1778 * C1801 + C1778 * C1781 * be) / C1633;
    const double C484 = (C1804 * C1778 * C1801) / C1633;
    const double C852 =
        (C1779 * C1777 * C1797 + C1794 * (C1794 * C1801 + C1781 * be) +
         C1794 * C1781 * be) /
        C1633;
    const double C1005 = (C1804 * (C1794 * C1801 + C1781 * be)) / C1633;
    const double C1508 = (C1779 * C1777 * C1797 + C1801 * C1849) / C1633;
    const double C120 =
        (C1787 * C1783 * C1810 + ae * C1778 * C1811 +
         C1778 * (ae * C1811 + C1778 * std::pow(C1776, 4) * bs[4] * C1810)) /
        C1635;
    const double C310 =
        (C1794 * (ae * C1811 + C1778 * std::pow(C1776, 4) * bs[4] * C1810)) /
        C1635;
    const double C374 = (ae * C1778 * C1811 +
                         C1794 * C1778 * std::pow(C1776, 4) * bs[4] * C1830) /
                        C1635;
    const double C510 =
        (be * (C1778 * C1791 + C1781 * ae) +
         C1804 * (ae * C1811 + C1778 * std::pow(C1776, 4) * bs[4] * C1810)) /
        C1635;
    const double C918 =
        (C1787 * C1783 * C1830 + ae * C1794 * C1811 +
         C1794 * (ae * C1811 + C1794 * std::pow(C1776, 4) * bs[4] * C1830)) /
        C1635;
    const double C117 = (C1779 * C1777 * C1807 + C1811 * C1782) / C1633;
    const double C308 = (C1794 * C1778 * C1811) / C1633;
    const double C508 = (C1804 * C1778 * C1811 + C1778 * C1781 * be) / C1633;
    const double C868 = (C1779 * C1777 * C1807 + C1811 * C1824) / C1633;
    const double C1025 = (C1804 * C1794 * C1811 + C1794 * C1781 * be) / C1633;
    const double C1527 =
        (C1779 * C1777 * C1807 + C1804 * (C1804 * C1811 + C1781 * be) +
         C1804 * C1781 * be) /
        C1633;
    const double C140 =
        (C1787 * C1783 * C1819 + be * C1778 * C1820 +
         C1778 * (be * C1820 + C1778 * std::pow(C1776, 4) * bs[4] * C1819)) /
        C1635;
    const double C332 =
        (ae * (C1778 * C1790 + C1781 * be) +
         C1794 * (be * C1820 + C1778 * std::pow(C1776, 4) * bs[4] * C1819)) /
        C1635;
    const double C354 =
        (ae * C1778 * C1801 + be * C1778 * C1820 +
         C1794 * C1778 * (C1783 * C1787 + C1824 * bs[4] * std::pow(C1776, 4)) *
             C1634) /
        C1635;
    const double C532 =
        (C1804 * (be * C1820 + C1778 * std::pow(C1776, 4) * bs[4] * C1819)) /
        C1635;
    const double C572 = (be * C1778 * C1820 +
                         C1804 * C1778 * std::pow(C1776, 4) * bs[4] * C1830) /
                        C1635;
    const double C903 =
        ((C1781 + C1824 * C1783 * C1787) * C1634 +
         ae * (C1794 * C1801 + C1781 * be) + be * (C1794 * C1820 + C1781 * ae) +
         C1794 * (ae * C1801 + be * C1820 +
                  C1794 * (C1783 * C1787 + C1824 * bs[4] * std::pow(C1776, 4)) *
                      C1634)) /
        C1635;
    const double C1065 =
        (ae * C1804 * C1801 + be * C1804 * C1820 +
         C1794 * C1804 * (C1783 * C1787 + C1824 * bs[4] * std::pow(C1776, 4)) *
             C1634) /
        C1635;
    const double C1084 =
        (ae * (C1804 * C1811 + C1781 * be) +
         C1794 * (be * C1820 + C1804 * std::pow(C1776, 4) * bs[4] * C1830)) /
        C1635;
    const double C1574 =
        (C1787 * C1783 * C1830 + be * C1804 * C1820 +
         C1804 * (be * C1820 + C1804 * std::pow(C1776, 4) * bs[4] * C1830)) /
        C1635;
    const double C137 = (C1779 * C1777 * C1816 + C1820 * C1782) / C1633;
    const double C330 = (C1794 * C1778 * C1820 + C1778 * C1781 * ae) / C1633;
    const double C530 = (C1804 * C1778 * C1820) / C1633;
    const double C884 =
        (C1779 * C1777 * C1816 + C1794 * (C1794 * C1820 + C1781 * ae) +
         C1794 * C1781 * ae) /
        C1633;
    const double C1045 = (C1804 * (C1794 * C1820 + C1781 * ae)) / C1633;
    const double C1543 = (C1779 * C1777 * C1816 + C1820 * C1849) / C1633;
    const double C195 =
        (C1787 * C1783 * C1838 + be * C1778 * C1839 +
         C1778 * (be * C1839 + C1778 * std::pow(C1776, 4) * bs[4] * C1838)) /
        C1635;
    const double C396 =
        (C1794 * (be * C1839 + C1778 * std::pow(C1776, 4) * bs[4] * C1838)) /
        C1635;
    const double C416 = (be * C1778 * C1839 +
                         C1794 * C1778 * std::pow(C1776, 4) * bs[4] * C1845) /
                        C1635;
    const double C594 =
        (ae * (C1778 * C1790 + C1781 * be) +
         C1804 * (be * C1839 + C1778 * std::pow(C1776, 4) * bs[4] * C1838)) /
        C1635;
    const double C636 =
        (ae * C1778 * C1811 + be * C1778 * C1839 +
         C1804 * C1778 * (C1783 * C1787 + C1849 * bs[4] * std::pow(C1776, 4)) *
             C1634) /
        C1635;
    const double C949 =
        (C1787 * C1783 * C1845 + be * C1794 * C1839 +
         C1794 * (be * C1839 + C1794 * std::pow(C1776, 4) * bs[4] * C1845)) /
        C1635;
    const double C1123 =
        (ae * (C1794 * C1801 + C1781 * be) +
         C1804 * (be * C1839 + C1794 * std::pow(C1776, 4) * bs[4] * C1845)) /
        C1635;
    const double C1142 =
        (ae * C1794 * C1811 + be * C1794 * C1839 +
         C1804 * C1794 * (C1783 * C1787 + C1849 * bs[4] * std::pow(C1776, 4)) *
             C1634) /
        C1635;
    const double C1623 =
        ((C1781 + C1849 * C1783 * C1787) * C1634 +
         ae * (C1804 * C1811 + C1781 * be) + be * (C1804 * C1839 + C1781 * ae) +
         C1804 * (ae * C1811 + be * C1839 +
                  C1804 * (C1783 * C1787 + C1849 * bs[4] * std::pow(C1776, 4)) *
                      C1634)) /
        C1635;
    const double C192 = (C1779 * C1777 * C1835 + C1839 * C1782) / C1633;
    const double C394 = (C1794 * C1778 * C1839) / C1633;
    const double C592 = (C1804 * C1778 * C1839 + C1778 * C1781 * ae) / C1633;
    const double C933 = (C1779 * C1777 * C1835 + C1839 * C1824) / C1633;
    const double C1103 = (C1804 * C1794 * C1839 + C1794 * C1781 * ae) / C1633;
    const double C1589 =
        (C1779 * C1777 * C1835 + C1804 * (C1804 * C1839 + C1781 * ae) +
         C1804 * C1781 * ae) /
        C1633;
    const double C1641 = 2 * C1638;
    const double C65 =
        ((0 * ae) / C1633 - C1638 / C1635) / (2 * C1633) - (0 * be) / C1633;
    const double C661 = (0 * ae) / C1633 - C1638 / C1635;
    const double C55 = C2094 / C1994;
    const double C53 = C1989 / C1994 - (C2093 * C2085) / C1635;
    const double C54 = C2093 / C1637 - (C2094 * C2085) / C1633;
    const double C655 = C2093 / C1633;
    const double C1731 = 2 * C1684;
    const double C351 =
        (((-4 * C1684) / C1633 -
          (C1663 * (C2033 - (C1663 * 2 * C1684) / C1633) * C1642) / C1633) *
         ae) /
        C1633;
    const double C352 =
        (-((C2033 - (C1663 * 2 * C1684) / C1633) * C1642) / C1633) /
        (2 * C1633);
    const double C681 = (-(0 * be) / C1633) / (2 * C1633) -
                        ((C2033 - (C1663 * 2 * C1684) / C1633) * be) / C1633;
    const double C682 = (-(2 * C1684) / C1633) / (2 * C1633) - (0 * be) / C1633;
    const double C737 =
        -(((-4 * C1684) / C1633 -
           (C1663 * (C2033 - (C1663 * 2 * C1684) / C1633) * C1642) / C1633) *
          be) /
        C1633;
    const double C738 =
        (-((C2033 - (C1663 * 2 * C1684) / C1633) * C1642) / C1633) /
        (2 * C1633);
    const double C851 =
        ((0 * ae) / C1633 - C1684 / C1635) / (2 * C1633) - (0 * be) / C1633;
    const double C850 =
        (((C2033 - (C1663 * 2 * C1684) / C1633) * ae) / C1633 - C1723 / C1637) /
            (2 * C1633) -
        ((C1663 * ((0 * ae) / C1633 - C1684 / C1635) + C2096) * be) / C1633;
    const double C828 = C2096 / C1994;
    const double C251 = C2095 / C1633;
    const double C826 = C2033 / C1994 - (C2095 * C2091) / C1635;
    const double C827 = C2095 / C1637 - (C2096 * C2091) / C1633;
    const double C1761 = 2 * C1696;
    const double C633 =
        (((-4 * C1696) / C1633 -
          (C1666 * (C2048 - (C1666 * 2 * C1696) / C1633) * C1642) / C1633) *
         ae) /
        C1633;
    const double C634 =
        (-((C2048 - (C1666 * 2 * C1696) / C1633) * C1642) / C1633) /
        (2 * C1633);
    const double C1199 = (-(0 * be) / C1633) / (2 * C1633) -
                         ((C2048 - (C1666 * 2 * C1696) / C1633) * be) / C1633;
    const double C1200 =
        (-(2 * C1696) / C1633) / (2 * C1633) - (0 * be) / C1633;
    const double C1309 =
        -(((-4 * C1696) / C1633 -
           (C1666 * (C2048 - (C1666 * 2 * C1696) / C1633) * C1642) / C1633) *
          be) /
        C1633;
    const double C1310 =
        (-((C2048 - (C1666 * 2 * C1696) / C1633) * C1642) / C1633) /
        (2 * C1633);
    const double C1526 =
        ((0 * ae) / C1633 - C1696 / C1635) / (2 * C1633) - (0 * be) / C1633;
    const double C1525 =
        (((C2048 - (C1666 * 2 * C1696) / C1633) * ae) / C1633 - C1753 / C1637) /
            (2 * C1633) -
        ((C1666 * ((0 * ae) / C1633 - C1696 / C1635) + C2098) * be) / C1633;
    const double C1489 = C2098 / C1994;
    const double C455 = C2097 / C1633;
    const double C1487 = C2048 / C1994 - (C2097 * C2092) / C1635;
    const double C1488 = C2097 / C1637 - (C2098 * C2092) / C1633;
    const double C1643 = C1631 * C1641;
    const double C255 = (-C1641 / C1633) / (2 * C1633) - (0 * be) / C1633;
    const double C829 = -C1641 / C1633;
    const double C61 =
        (((0 - (C1631 * C1632) / C1633) * ae) / C1633 - (0 * be) / C1637) /
            (2 * C1633) -
        ((C1631 * (((C1989 - (C1631 * 2 * C1638) / C1633) * ae) / C1633 -
                   C1632 / C1637) +
          C655) *
         be) /
            C1633 +
        (0 * ae) / C1633 - C1638 / C1635;
    const double C1732 = C1663 * C1731;
    const double C849 =
        (((0 - (C1663 * C1723) / C1633) * ae) / C1633 - (0 * be) / C1637) /
            (2 * C1633) -
        ((C1663 * (((C2033 - (C1663 * 2 * C1684) / C1633) * ae) / C1633 -
                   C1723 / C1637) +
          C251) *
         be) /
            C1633 +
        (0 * ae) / C1633 - C1684 / C1635;
    const double C1762 = C1666 * C1761;
    const double C1524 =
        (((0 - (C1666 * C1753) / C1633) * ae) / C1633 - (0 * be) / C1637) /
            (2 * C1633) -
        ((C1666 * (((C2048 - (C1666 * 2 * C1696) / C1633) * ae) / C1633 -
                   C1753 / C1637) +
          C455) *
         be) /
            C1633 +
        (0 * ae) / C1633 - C1696 / C1635;
    const double C1644 = C1643 / C1633;
    const double C1733 = C1732 / C1633;
    const double C1763 = C1762 / C1633;
    const double C1645 = C1989 - C1644;
    const double C1734 = C2033 - C1733;
    const double C1764 = C2048 - C1763;
    const double C1646 = C1645 * C1642;
    const double C63 =
        ((C1645 * ae) / C1633 - C1632 / C1637) / (2 * C1633) -
        ((C1631 * ((0 * ae) / C1633 - C1638 / C1635) + C2094) * be) / C1633;
    const double C253 = (-C1632 / C1633) / (2 * C1633) - (C1645 * be) / C1633;
    const double C659 = (C1645 * ae) / C1633 - C1632 / C1637;
    const double C1735 = C1734 * C1642;
    const double C1765 = C1764 * C1642;
    const double C1651 = C1631 * C1646;
    const double C62 =
        (ae * -2 * C1632) / (C1635 * 2 * C1633) -
        (((C1631 * ((-4 * C1638) / C1633 - (C1631 * C1646) / C1633) * ae) /
              C1633 +
          2 * ((C1645 * ae) / C1633 - C1632 / C1637)) *
         be) /
            C1633 -
        C1646 / C1637;
    const double C66 = (-C1646 / C1633) / (4 * C1635);
    const double C256 = (-C1646 / C1633) / (2 * C1633);
    const double C662 = (-C1646 / C1633) / (2 * C1633);
    const double C830 = -C1646 / C1633;
    const double C1738 = C1663 * C1735;
    const double C900 =
        (ae * -2 * C1723) / (C1635 * 2 * C1633) -
        (((C1663 * ((-4 * C1684) / C1633 - (C1663 * C1735) / C1633) * ae) /
              C1633 +
          2 * ((C1734 * ae) / C1633 - C1723 / C1637)) *
         be) /
            C1633 -
        C1735 / C1637;
    const double C902 = (-C1735 / C1633) / (4 * C1635);
    const double C1768 = C1666 * C1765;
    const double C1620 =
        (ae * -2 * C1753) / (C1635 * 2 * C1633) -
        (((C1666 * ((-4 * C1696) / C1633 - (C1666 * C1765) / C1633) * ae) /
              C1633 +
          2 * ((C1764 * ae) / C1633 - C1753 / C1637)) *
         be) /
            C1633 -
        C1765 / C1637;
    const double C1622 = (-C1765 / C1633) / (4 * C1635);
    const double C64 =
        (((-4 * C1638) / C1633 - C1651 / C1633) * ae) / C1637 -
        ((2 * ((0 * ae) / C1633 - C1638 / C1635) - C1651 / C1637) * be) / C1633;
    const double C254 = -(((-4 * C1638) / C1633 - C1651 / C1633) * be) / C1633;
    const double C660 = (((-4 * C1638) / C1633 - C1651 / C1633) * ae) / C1633;
    const double C901 =
        (((-4 * C1684) / C1633 - C1738 / C1633) * ae) / C1637 -
        ((2 * ((0 * ae) / C1633 - C1684 / C1635) - C1738 / C1637) * be) / C1633;
    const double C1621 =
        (((-4 * C1696) / C1633 - C1768 / C1633) * ae) / C1637 -
        ((2 * ((0 * ae) / C1633 - C1696 / C1635) - C1768 / C1637) * be) / C1633;
    
    d2eexx[0] += (2 * std::pow(Pi, 2.5) *
                  (C61 * C70 - C62 * C67 - C61 * C71 + C53 * C76 + C63 * C72 -
                   C64 * C68 - C63 * C73 + C54 * C77 + C65 * C74 - C66 * C69 -
                   C65 * C75 + C55 * C78) *
                  C2048 * C2033 * C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eexy[0] +=
        (2 * std::pow(Pi, 2.5) *
         ((C2033 * C94 - C93 * C67) * C61 + (C2033 * C97 - C93 * C71) * C53 +
          (C2033 * C95 - C93 * C68) * C63 + (C2033 * C98 - C93 * C73) * C54 +
          (C2033 * C96 - C93 * C69) * C65 + (C2033 * C99 - C93 * C75) * C55) *
         C2048 * C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eexz[0] += (2 * std::pow(Pi, 2.5) *
                  ((C2048 * C115 - C114 * C67) * C61 +
                   (C2048 * C118 - C114 * C71) * C53 +
                   (C2048 * C116 - C114 * C68) * C63 +
                   (C2048 * C119 - C114 * C73) * C54 +
                   (C2048 * C117 - C114 * C69) * C65 +
                   (C2048 * C120 - C114 * C75) * C55) *
                  C2033 * C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[0] += (2 * std::pow(Pi, 2.5) *
                  ((C53 * C70 - C61 * C67 + C54 * C72 - C63 * C68 + C55 * C74 -
                    C65 * C69) *
                       C93 +
                   (C53 * C138 - C61 * C135 + C54 * C139 - C63 * C136 +
                    C55 * C140 - C65 * C137) *
                       C2033) *
                  C2048 * C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[0] += (2 * std::pow(Pi, 2.5) *
                  ((C93 * C94 - C155 * C67 - C93 * C135 + C2033 * C156) * C53 +
                   (C93 * C95 - C155 * C68 - C93 * C136 + C2033 * C157) * C54 +
                   (C93 * C96 - C155 * C69 - C93 * C137 + C2033 * C158) * C55) *
                  C2048 * C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[0] += (2 * std::pow(Pi, 2.5) *
                  (((C2048 * C115 - C114 * C67) * C93 +
                    (C2048 * C173 - C114 * C135) * C2033) *
                       C53 +
                   ((C2048 * C116 - C114 * C68) * C93 +
                    (C2048 * C174 - C114 * C136) * C2033) *
                       C54 +
                   ((C2048 * C117 - C114 * C69) * C93 +
                    (C2048 * C175 - C114 * C137) * C2033) *
                       C55) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eezx[0] += (2 * std::pow(Pi, 2.5) *
                  ((C53 * C70 - C61 * C67 + C54 * C72 - C63 * C68 + C55 * C74 -
                    C65 * C69) *
                       C114 +
                   (C53 * C193 - C61 * C190 + C54 * C194 - C63 * C191 +
                    C55 * C195 - C65 * C192) *
                       C2048) *
                  C2033 * C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eezy[0] += (2 * std::pow(Pi, 2.5) *
                  (((C2033 * C94 - C93 * C67) * C114 +
                    (C2033 * C210 - C93 * C190) * C2048) *
                       C53 +
                   ((C2033 * C95 - C93 * C68) * C114 +
                    (C2033 * C211 - C93 * C191) * C2048) *
                       C54 +
                   ((C2033 * C96 - C93 * C69) * C114 +
                    (C2033 * C212 - C93 * C192) * C2048) *
                       C55) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eezz[0] += (2 * std::pow(Pi, 2.5) *
                  ((C114 * C115 - C227 * C67 - C114 * C190 + C2048 * C228) *
                       C2033 * C53 +
                   (C114 * C116 - C227 * C68 - C114 * C191 + C2048 * C229) *
                       C2033 * C54 +
                   (C114 * C117 - C227 * C69 - C114 * C192 + C2048 * C230) *
                       C2033 * C55) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eexx[1] += (2 * std::pow(Pi, 2.5) *
                  ((C253 * C70 - C254 * C67 - C253 * C71 + C249 * C76 +
                    C255 * C72 - C256 * C68 - C255 * C73 + C2094 * C77) *
                       C2048 * C251 +
                   (C253 * C259 - C254 * C257 - C253 * C260 + C249 * C263 +
                    C255 * C261 - C256 * C258 - C255 * C262 + C2094 * C264) *
                       C2048 * C2096) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eexy[1] +=
        (2 * std::pow(Pi, 2.5) *
         ((C251 * C94 - C283 * C67 + C2096 * C285 - C284 * C257) * C253 +
          (C251 * C97 - C283 * C71 + C2096 * C287 - C284 * C260) * C249 +
          (C251 * C95 - C283 * C68 + C2096 * C286 - C284 * C258) * C255 +
          (C251 * C98 - C283 * C73 + C2096 * C288 - C284 * C262) * C2094) *
         C2048 * C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eexz[1] += (2 * std::pow(Pi, 2.5) *
                  (((C2048 * C115 - C114 * C67) * C253 +
                    (C2048 * C118 - C114 * C71) * C249 +
                    (C2048 * C116 - C114 * C68) * C255 +
                    (C2048 * C119 - C114 * C73) * C2094) *
                       C251 +
                   ((C2048 * C307 - C114 * C257) * C253 +
                    (C2048 * C309 - C114 * C260) * C249 +
                    (C2048 * C308 - C114 * C258) * C255 +
                    (C2048 * C310 - C114 * C262) * C2094) *
                       C2096) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[1] +=
        (2 * std::pow(Pi, 2.5) *
         ((C249 * C70 - C253 * C67 + C2094 * C72 - C255 * C68) * C283 +
          (C249 * C138 - C253 * C135 + C2094 * C139 - C255 * C136) * C251 +
          (C249 * C259 - C253 * C257 + C2094 * C261 - C255 * C258) * C284 +
          (C249 * C331 - C253 * C329 + C2094 * C332 - C255 * C330) * C2096) *
         C2048 * C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eeyy[1] += (2 * std::pow(Pi, 2.5) *
                  ((C283 * C94 - C351 * C67 - C283 * C135 + C251 * C156 +
                    C284 * C285 - C352 * C257 - C284 * C329 + C2096 * C353) *
                       C249 +
                   (C283 * C95 - C351 * C68 - C283 * C136 + C251 * C157 +
                    C284 * C286 - C352 * C258 - C284 * C330 + C2096 * C354) *
                       C2094) *
                  C2048 * C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[1] += (2 * std::pow(Pi, 2.5) *
                  (((C2048 * C115 - C114 * C67) * C283 +
                    (C2048 * C173 - C114 * C135) * C251 +
                    (C2048 * C307 - C114 * C257) * C284 +
                    (C2048 * C373 - C114 * C329) * C2096) *
                       C249 +
                   ((C2048 * C116 - C114 * C68) * C283 +
                    (C2048 * C174 - C114 * C136) * C251 +
                    (C2048 * C308 - C114 * C258) * C284 +
                    (C2048 * C374 - C114 * C330) * C2096) *
                       C2094) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eezx[1] +=
        (2 * std::pow(Pi, 2.5) *
         (((C249 * C70 - C253 * C67 + C2094 * C72 - C255 * C68) * C114 +
           (C249 * C193 - C253 * C190 + C2094 * C194 - C255 * C191) * C2048) *
              C251 +
          ((C249 * C259 - C253 * C257 + C2094 * C261 - C255 * C258) * C114 +
           (C249 * C395 - C253 * C393 + C2094 * C396 - C255 * C394) * C2048) *
              C2096) *
         C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eezy[1] +=
        (2 * std::pow(Pi, 2.5) *
         (((C251 * C94 - C283 * C67 + C2096 * C285 - C284 * C257) * C114 +
           (C251 * C210 - C283 * C190 + C2096 * C415 - C284 * C393) * C2048) *
              C249 +
          ((C251 * C95 - C283 * C68 + C2096 * C286 - C284 * C258) * C114 +
           (C251 * C211 - C283 * C191 + C2096 * C416 - C284 * C394) * C2048) *
              C2094) *
         C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eezz[1] +=
        (2 * std::pow(Pi, 2.5) *
         (((C114 * C115 - C227 * C67 - C114 * C190 + C2048 * C228) * C251 +
           (C114 * C307 - C227 * C257 - C114 * C393 + C2048 * C435) * C2096) *
              C249 +
          ((C114 * C116 - C227 * C68 - C114 * C191 + C2048 * C229) * C251 +
           (C114 * C308 - C227 * C258 - C114 * C394 + C2048 * C436) * C2096) *
              C2094) *
         C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eexx[2] += (2 * std::pow(Pi, 2.5) *
                  ((C253 * C70 - C254 * C67 - C253 * C71 + C249 * C76 +
                    C255 * C72 - C256 * C68 - C255 * C73 + C2094 * C77) *
                       C455 +
                   (C253 * C459 - C254 * C457 - C253 * C460 + C249 * C463 +
                    C255 * C461 - C256 * C458 - C255 * C462 + C2094 * C464) *
                       C2098) *
                  C2033 * C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eexy[2] +=
        (2 * std::pow(Pi, 2.5) *
         (((C2033 * C94 - C93 * C67) * C253 + (C2033 * C97 - C93 * C71) * C249 +
           (C2033 * C95 - C93 * C68) * C255 +
           (C2033 * C98 - C93 * C73) * C2094) *
              C455 +
          ((C2033 * C483 - C93 * C457) * C253 +
           (C2033 * C485 - C93 * C460) * C249 +
           (C2033 * C484 - C93 * C458) * C255 +
           (C2033 * C486 - C93 * C462) * C2094) *
              C2098) *
         C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eexz[2] +=
        (2 * std::pow(Pi, 2.5) *
         ((C455 * C115 - C505 * C67 + C2098 * C507 - C506 * C457) * C253 +
          (C455 * C118 - C505 * C71 + C2098 * C509 - C506 * C460) * C249 +
          (C455 * C116 - C505 * C68 + C2098 * C508 - C506 * C458) * C255 +
          (C455 * C119 - C505 * C73 + C2098 * C510 - C506 * C462) * C2094) *
         C2033 * C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eeyx[2] +=
        (2 * std::pow(Pi, 2.5) *
         (((C249 * C70 - C253 * C67 + C2094 * C72 - C255 * C68) * C93 +
           (C249 * C138 - C253 * C135 + C2094 * C139 - C255 * C136) * C2033) *
              C455 +
          ((C249 * C459 - C253 * C457 + C2094 * C461 - C255 * C458) * C93 +
           (C249 * C531 - C253 * C529 + C2094 * C532 - C255 * C530) * C2033) *
              C2098) *
         C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eeyy[2] +=
        (2 * std::pow(Pi, 2.5) *
         (((C93 * C94 - C155 * C67 - C93 * C135 + C2033 * C156) * C249 +
           (C93 * C95 - C155 * C68 - C93 * C136 + C2033 * C157) * C2094) *
              C455 +
          ((C93 * C483 - C155 * C457 - C93 * C529 + C2033 * C551) * C249 +
           (C93 * C484 - C155 * C458 - C93 * C530 + C2033 * C552) * C2094) *
              C2098) *
         C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eeyz[2] +=
        (2 * std::pow(Pi, 2.5) *
         (((C455 * C115 - C505 * C67 + C2098 * C507 - C506 * C457) * C93 +
           (C455 * C173 - C505 * C135 + C2098 * C571 - C506 * C529) * C2033) *
              C249 +
          ((C455 * C116 - C505 * C68 + C2098 * C508 - C506 * C458) * C93 +
           (C455 * C174 - C505 * C136 + C2098 * C572 - C506 * C530) * C2033) *
              C2094) *
         C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eezx[2] +=
        (2 * std::pow(Pi, 2.5) *
         ((C249 * C70 - C253 * C67 + C2094 * C72 - C255 * C68) * C505 +
          (C249 * C193 - C253 * C190 + C2094 * C194 - C255 * C191) * C455 +
          (C249 * C459 - C253 * C457 + C2094 * C461 - C255 * C458) * C506 +
          (C249 * C593 - C253 * C591 + C2094 * C594 - C255 * C592) * C2098) *
         C2033 * C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eezy[2] += (2 * std::pow(Pi, 2.5) *
                  (((C2033 * C94 - C93 * C67) * C505 +
                    (C2033 * C210 - C93 * C190) * C455 +
                    (C2033 * C483 - C93 * C457) * C506 +
                    (C2033 * C613 - C93 * C591) * C2098) *
                       C249 +
                   ((C2033 * C95 - C93 * C68) * C505 +
                    (C2033 * C211 - C93 * C191) * C455 +
                    (C2033 * C484 - C93 * C458) * C506 +
                    (C2033 * C614 - C93 * C592) * C2098) *
                       C2094) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eezz[2] += (2 * std::pow(Pi, 2.5) *
                  ((C505 * C115 - C633 * C67 - C505 * C190 + C455 * C228 +
                    C506 * C507 - C634 * C457 - C506 * C591 + C2098 * C635) *
                       C2033 * C249 +
                   (C505 * C116 - C633 * C68 - C505 * C191 + C455 * C229 +
                    C506 * C508 - C634 * C458 - C506 * C592 + C2098 * C636) *
                       C2033 * C2094) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eexx[3] += (2 * std::pow(Pi, 2.5) *
                  ((C659 * C70 - C660 * C67 - C659 * C71 + C655 * C76 +
                    C661 * C72 - C662 * C68 - C661 * C73 + C2094 * C77) *
                       C2048 * C657 +
                   (C659 * C259 - C660 * C257 - C659 * C260 + C655 * C263 +
                    C661 * C261 - C662 * C258 - C661 * C262 + C2094 * C264) *
                       C2048 * C2096) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eexy[3] +=
        (2 * std::pow(Pi, 2.5) *
         ((C657 * C94 - C681 * C67 + C2096 * C285 - C682 * C257) * C659 +
          (C657 * C97 - C681 * C71 + C2096 * C287 - C682 * C260) * C655 +
          (C657 * C95 - C681 * C68 + C2096 * C286 - C682 * C258) * C661 +
          (C657 * C98 - C681 * C73 + C2096 * C288 - C682 * C262) * C2094) *
         C2048 * C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eexz[3] += (2 * std::pow(Pi, 2.5) *
                  (((C2048 * C115 - C114 * C67) * C659 +
                    (C2048 * C118 - C114 * C71) * C655 +
                    (C2048 * C116 - C114 * C68) * C661 +
                    (C2048 * C119 - C114 * C73) * C2094) *
                       C657 +
                   ((C2048 * C307 - C114 * C257) * C659 +
                    (C2048 * C309 - C114 * C260) * C655 +
                    (C2048 * C308 - C114 * C258) * C661 +
                    (C2048 * C310 - C114 * C262) * C2094) *
                       C2096) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[3] +=
        (2 * std::pow(Pi, 2.5) *
         ((C655 * C70 - C659 * C67 + C2094 * C72 - C661 * C68) * C681 +
          (C655 * C138 - C659 * C135 + C2094 * C139 - C661 * C136) * C657 +
          (C655 * C259 - C659 * C257 + C2094 * C261 - C661 * C258) * C682 +
          (C655 * C331 - C659 * C329 + C2094 * C332 - C661 * C330) * C2096) *
         C2048 * C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eeyy[3] += (2 * std::pow(Pi, 2.5) *
                  ((C681 * C94 - C737 * C67 - C681 * C135 + C657 * C156 +
                    C682 * C285 - C738 * C257 - C682 * C329 + C2096 * C353) *
                       C655 +
                   (C681 * C95 - C737 * C68 - C681 * C136 + C657 * C157 +
                    C682 * C286 - C738 * C258 - C682 * C330 + C2096 * C354) *
                       C2094) *
                  C2048 * C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[3] += (2 * std::pow(Pi, 2.5) *
                  (((C2048 * C115 - C114 * C67) * C681 +
                    (C2048 * C173 - C114 * C135) * C657 +
                    (C2048 * C307 - C114 * C257) * C682 +
                    (C2048 * C373 - C114 * C329) * C2096) *
                       C655 +
                   ((C2048 * C116 - C114 * C68) * C681 +
                    (C2048 * C174 - C114 * C136) * C657 +
                    (C2048 * C308 - C114 * C258) * C682 +
                    (C2048 * C374 - C114 * C330) * C2096) *
                       C2094) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eezx[3] +=
        (2 * std::pow(Pi, 2.5) *
         (((C655 * C70 - C659 * C67 + C2094 * C72 - C661 * C68) * C114 +
           (C655 * C193 - C659 * C190 + C2094 * C194 - C661 * C191) * C2048) *
              C657 +
          ((C655 * C259 - C659 * C257 + C2094 * C261 - C661 * C258) * C114 +
           (C655 * C395 - C659 * C393 + C2094 * C396 - C661 * C394) * C2048) *
              C2096) *
         C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eezy[3] +=
        (2 * std::pow(Pi, 2.5) *
         (((C657 * C94 - C681 * C67 + C2096 * C285 - C682 * C257) * C114 +
           (C657 * C210 - C681 * C190 + C2096 * C415 - C682 * C393) * C2048) *
              C655 +
          ((C657 * C95 - C681 * C68 + C2096 * C286 - C682 * C258) * C114 +
           (C657 * C211 - C681 * C191 + C2096 * C416 - C682 * C394) * C2048) *
              C2094) *
         C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eezz[3] +=
        (2 * std::pow(Pi, 2.5) *
         (((C114 * C115 - C227 * C67 - C114 * C190 + C2048 * C228) * C657 +
           (C114 * C307 - C227 * C257 - C114 * C393 + C2048 * C435) * C2096) *
              C655 +
          ((C114 * C116 - C227 * C68 - C114 * C191 + C2048 * C229) * C657 +
           (C114 * C308 - C227 * C258 - C114 * C394 + C2048 * C436) * C2096) *
              C2094) *
         C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eexx[4] +=
        (2 * std::pow(Pi, 2.5) *
         ((C829 * C70 - C830 * C67 - C829 * C71 + C1989 * C76) * C2048 * C826 +
          (C829 * C259 - C830 * C257 - C829 * C260 + C1989 * C263) * C2048 *
              C827 +
          (C829 * C832 - C830 * C831 - C829 * C833 + C1989 * C834) * C2048 *
              C828) *
         C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eexy[4] += (2 * std::pow(Pi, 2.5) *
                  ((C826 * C94 - C849 * C67 + C827 * C285 - C850 * C257 +
                    C828 * C852 - C851 * C831) *
                       C829 +
                   (C826 * C97 - C849 * C71 + C827 * C287 - C850 * C260 +
                    C828 * C853 - C851 * C833) *
                       C1989) *
                  C2048 * C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eexz[4] += (2 * std::pow(Pi, 2.5) *
                  (((C2048 * C115 - C114 * C67) * C829 +
                    (C2048 * C118 - C114 * C71) * C1989) *
                       C826 +
                   ((C2048 * C307 - C114 * C257) * C829 +
                    (C2048 * C309 - C114 * C260) * C1989) *
                       C827 +
                   ((C2048 * C868 - C114 * C831) * C829 +
                    (C2048 * C869 - C114 * C833) * C1989) *
                       C828) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[4] += (2 * std::pow(Pi, 2.5) *
                  ((C1989 * C70 - C829 * C67) * C849 +
                   (C1989 * C138 - C829 * C135) * C826 +
                   (C1989 * C259 - C829 * C257) * C850 +
                   (C1989 * C331 - C829 * C329) * C827 +
                   (C1989 * C832 - C829 * C831) * C851 +
                   (C1989 * C885 - C829 * C884) * C828) *
                  C2048 * C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[4] += (2 * std::pow(Pi, 2.5) *
                  (C849 * C94 - C900 * C67 - C849 * C135 + C826 * C156 +
                   C850 * C285 - C901 * C257 - C850 * C329 + C827 * C353 +
                   C851 * C852 - C902 * C831 - C851 * C884 + C828 * C903) *
                  C1989 * C2048 * C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[4] += (2 * std::pow(Pi, 2.5) *
                  ((C2048 * C115 - C114 * C67) * C849 +
                   (C2048 * C173 - C114 * C135) * C826 +
                   (C2048 * C307 - C114 * C257) * C850 +
                   (C2048 * C373 - C114 * C329) * C827 +
                   (C2048 * C868 - C114 * C831) * C851 +
                   (C2048 * C918 - C114 * C884) * C828) *
                  C1989 * C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eezx[4] += (2 * std::pow(Pi, 2.5) *
                  (((C1989 * C70 - C829 * C67) * C114 +
                    (C1989 * C193 - C829 * C190) * C2048) *
                       C826 +
                   ((C1989 * C259 - C829 * C257) * C114 +
                    (C1989 * C395 - C829 * C393) * C2048) *
                       C827 +
                   ((C1989 * C832 - C829 * C831) * C114 +
                    (C1989 * C934 - C829 * C933) * C2048) *
                       C828) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eezy[4] += (2 * std::pow(Pi, 2.5) *
                  ((C826 * C94 - C849 * C67 + C827 * C285 - C850 * C257 +
                    C828 * C852 - C851 * C831) *
                       C114 +
                   (C826 * C210 - C849 * C190 + C827 * C415 - C850 * C393 +
                    C828 * C949 - C851 * C933) *
                       C2048) *
                  C1989 * C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eezz[4] +=
        (2 * std::pow(Pi, 2.5) *
         ((C114 * C115 - C227 * C67 - C114 * C190 + C2048 * C228) * C826 +
          (C114 * C307 - C227 * C257 - C114 * C393 + C2048 * C435) * C827 +
          (C114 * C868 - C227 * C831 - C114 * C933 + C2048 * C964) * C828) *
         C1989 * C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eexx[5] +=
        (2 * std::pow(Pi, 2.5) *
         (((C829 * C70 - C830 * C67 - C829 * C71 + C1989 * C76) * C455 +
           (C829 * C459 - C830 * C457 - C829 * C460 + C1989 * C463) * C2098) *
              C657 +
          ((C829 * C259 - C830 * C257 - C829 * C260 + C1989 * C263) * C455 +
           (C829 * C984 - C830 * C983 - C829 * C985 + C1989 * C986) * C2098) *
              C2096) *
         C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eexy[5] +=
        (2 * std::pow(Pi, 2.5) *
         (((C657 * C94 - C681 * C67 + C2096 * C285 - C682 * C257) * C829 +
           (C657 * C97 - C681 * C71 + C2096 * C287 - C682 * C260) * C1989) *
              C455 +
          ((C657 * C483 - C681 * C457 + C2096 * C1005 - C682 * C983) * C829 +
           (C657 * C485 - C681 * C460 + C2096 * C1006 - C682 * C985) * C1989) *
              C2098) *
         C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eexz[5] +=
        (2 * std::pow(Pi, 2.5) *
         (((C455 * C115 - C505 * C67 + C2098 * C507 - C506 * C457) * C829 +
           (C455 * C118 - C505 * C71 + C2098 * C509 - C506 * C460) * C1989) *
              C657 +
          ((C455 * C307 - C505 * C257 + C2098 * C1025 - C506 * C983) * C829 +
           (C455 * C309 - C505 * C260 + C2098 * C1026 - C506 * C985) * C1989) *
              C2096) *
         C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eeyx[5] += (2 * std::pow(Pi, 2.5) *
                  (((C1989 * C70 - C829 * C67) * C681 +
                    (C1989 * C138 - C829 * C135) * C657 +
                    (C1989 * C259 - C829 * C257) * C682 +
                    (C1989 * C331 - C829 * C329) * C2096) *
                       C455 +
                   ((C1989 * C459 - C829 * C457) * C681 +
                    (C1989 * C531 - C829 * C529) * C657 +
                    (C1989 * C984 - C829 * C983) * C682 +
                    (C1989 * C1046 - C829 * C1045) * C2096) *
                       C2098) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[5] += (2 * std::pow(Pi, 2.5) *
                  ((C681 * C94 - C737 * C67 - C681 * C135 + C657 * C156 +
                    C682 * C285 - C738 * C257 - C682 * C329 + C2096 * C353) *
                       C1989 * C455 +
                   (C681 * C483 - C737 * C457 - C681 * C529 + C657 * C551 +
                    C682 * C1005 - C738 * C983 - C682 * C1045 + C2096 * C1065) *
                       C1989 * C2098) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[5] +=
        (2 * std::pow(Pi, 2.5) *
         ((C455 * C115 - C505 * C67 + C2098 * C507 - C506 * C457) * C681 +
          (C455 * C173 - C505 * C135 + C2098 * C571 - C506 * C529) * C657 +
          (C455 * C307 - C505 * C257 + C2098 * C1025 - C506 * C983) * C682 +
          (C455 * C373 - C505 * C329 + C2098 * C1084 - C506 * C1045) * C2096) *
         C1989 * C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eezx[5] += (2 * std::pow(Pi, 2.5) *
                  (((C1989 * C70 - C829 * C67) * C505 +
                    (C1989 * C193 - C829 * C190) * C455 +
                    (C1989 * C459 - C829 * C457) * C506 +
                    (C1989 * C593 - C829 * C591) * C2098) *
                       C657 +
                   ((C1989 * C259 - C829 * C257) * C505 +
                    (C1989 * C395 - C829 * C393) * C455 +
                    (C1989 * C984 - C829 * C983) * C506 +
                    (C1989 * C1104 - C829 * C1103) * C2098) *
                       C2096) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eezy[5] +=
        (2 * std::pow(Pi, 2.5) *
         ((C657 * C94 - C681 * C67 + C2096 * C285 - C682 * C257) * C505 +
          (C657 * C210 - C681 * C190 + C2096 * C415 - C682 * C393) * C455 +
          (C657 * C483 - C681 * C457 + C2096 * C1005 - C682 * C983) * C506 +
          (C657 * C613 - C681 * C591 + C2096 * C1123 - C682 * C1103) * C2098) *
         C1989 * C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eezz[5] += (2 * std::pow(Pi, 2.5) *
                  ((C505 * C115 - C633 * C67 - C505 * C190 + C455 * C228 +
                    C506 * C507 - C634 * C457 - C506 * C591 + C2098 * C635) *
                       C657 +
                   (C505 * C307 - C633 * C257 - C505 * C393 + C455 * C435 +
                    C506 * C1025 - C634 * C983 - C506 * C1103 + C2098 * C1142) *
                       C2096) *
                  C1989 * C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eexx[6] += (2 * std::pow(Pi, 2.5) *
                  ((C659 * C70 - C660 * C67 - C659 * C71 + C655 * C76 +
                    C661 * C72 - C662 * C68 - C661 * C73 + C2094 * C77) *
                       C1161 +
                   (C659 * C459 - C660 * C457 - C659 * C460 + C655 * C463 +
                    C661 * C461 - C662 * C458 - C661 * C462 + C2094 * C464) *
                       C2098) *
                  C2033 * C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eexy[6] +=
        (2 * std::pow(Pi, 2.5) *
         (((C2033 * C94 - C93 * C67) * C659 + (C2033 * C97 - C93 * C71) * C655 +
           (C2033 * C95 - C93 * C68) * C661 +
           (C2033 * C98 - C93 * C73) * C2094) *
              C1161 +
          ((C2033 * C483 - C93 * C457) * C659 +
           (C2033 * C485 - C93 * C460) * C655 +
           (C2033 * C484 - C93 * C458) * C661 +
           (C2033 * C486 - C93 * C462) * C2094) *
              C2098) *
         C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eexz[6] +=
        (2 * std::pow(Pi, 2.5) *
         ((C1161 * C115 - C1199 * C67 + C2098 * C507 - C1200 * C457) * C659 +
          (C1161 * C118 - C1199 * C71 + C2098 * C509 - C1200 * C460) * C655 +
          (C1161 * C116 - C1199 * C68 + C2098 * C508 - C1200 * C458) * C661 +
          (C1161 * C119 - C1199 * C73 + C2098 * C510 - C1200 * C462) * C2094) *
         C2033 * C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eeyx[6] +=
        (2 * std::pow(Pi, 2.5) *
         (((C655 * C70 - C659 * C67 + C2094 * C72 - C661 * C68) * C93 +
           (C655 * C138 - C659 * C135 + C2094 * C139 - C661 * C136) * C2033) *
              C1161 +
          ((C655 * C459 - C659 * C457 + C2094 * C461 - C661 * C458) * C93 +
           (C655 * C531 - C659 * C529 + C2094 * C532 - C661 * C530) * C2033) *
              C2098) *
         C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eeyy[6] +=
        (2 * std::pow(Pi, 2.5) *
         (((C93 * C94 - C155 * C67 - C93 * C135 + C2033 * C156) * C655 +
           (C93 * C95 - C155 * C68 - C93 * C136 + C2033 * C157) * C2094) *
              C1161 +
          ((C93 * C483 - C155 * C457 - C93 * C529 + C2033 * C551) * C655 +
           (C93 * C484 - C155 * C458 - C93 * C530 + C2033 * C552) * C2094) *
              C2098) *
         C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eeyz[6] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1161 * C115 - C1199 * C67 + C2098 * C507 - C1200 * C457) * C93 +
           (C1161 * C173 - C1199 * C135 + C2098 * C571 - C1200 * C529) *
               C2033) *
              C655 +
          ((C1161 * C116 - C1199 * C68 + C2098 * C508 - C1200 * C458) * C93 +
           (C1161 * C174 - C1199 * C136 + C2098 * C572 - C1200 * C530) *
               C2033) *
              C2094) *
         C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eezx[6] +=
        (2 * std::pow(Pi, 2.5) *
         ((C655 * C70 - C659 * C67 + C2094 * C72 - C661 * C68) * C1199 +
          (C655 * C193 - C659 * C190 + C2094 * C194 - C661 * C191) * C1161 +
          (C655 * C459 - C659 * C457 + C2094 * C461 - C661 * C458) * C1200 +
          (C655 * C593 - C659 * C591 + C2094 * C594 - C661 * C592) * C2098) *
         C2033 * C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eezy[6] += (2 * std::pow(Pi, 2.5) *
                  (((C2033 * C94 - C93 * C67) * C1199 +
                    (C2033 * C210 - C93 * C190) * C1161 +
                    (C2033 * C483 - C93 * C457) * C1200 +
                    (C2033 * C613 - C93 * C591) * C2098) *
                       C655 +
                   ((C2033 * C95 - C93 * C68) * C1199 +
                    (C2033 * C211 - C93 * C191) * C1161 +
                    (C2033 * C484 - C93 * C458) * C1200 +
                    (C2033 * C614 - C93 * C592) * C2098) *
                       C2094) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eezz[6] += (2 * std::pow(Pi, 2.5) *
                  ((C1199 * C115 - C1309 * C67 - C1199 * C190 + C1161 * C228 +
                    C1200 * C507 - C1310 * C457 - C1200 * C591 + C2098 * C635) *
                       C2033 * C655 +
                   (C1199 * C116 - C1309 * C68 - C1199 * C191 + C1161 * C229 +
                    C1200 * C508 - C1310 * C458 - C1200 * C592 + C2098 * C636) *
                       C2033 * C2094) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eexx[7] +=
        (2 * std::pow(Pi, 2.5) *
         (((C829 * C70 - C830 * C67 - C829 * C71 + C1989 * C76) * C1161 +
           (C829 * C459 - C830 * C457 - C829 * C460 + C1989 * C463) * C2098) *
              C251 +
          ((C829 * C259 - C830 * C257 - C829 * C260 + C1989 * C263) * C1161 +
           (C829 * C984 - C830 * C983 - C829 * C985 + C1989 * C986) * C2098) *
              C2096) *
         C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eexy[7] +=
        (2 * std::pow(Pi, 2.5) *
         (((C251 * C94 - C283 * C67 + C2096 * C285 - C284 * C257) * C829 +
           (C251 * C97 - C283 * C71 + C2096 * C287 - C284 * C260) * C1989) *
              C1161 +
          ((C251 * C483 - C283 * C457 + C2096 * C1005 - C284 * C983) * C829 +
           (C251 * C485 - C283 * C460 + C2096 * C1006 - C284 * C985) * C1989) *
              C2098) *
         C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eexz[7] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1161 * C115 - C1199 * C67 + C2098 * C507 - C1200 * C457) * C829 +
           (C1161 * C118 - C1199 * C71 + C2098 * C509 - C1200 * C460) * C1989) *
              C251 +
          ((C1161 * C307 - C1199 * C257 + C2098 * C1025 - C1200 * C983) * C829 +
           (C1161 * C309 - C1199 * C260 + C2098 * C1026 - C1200 * C985) *
               C1989) *
              C2096) *
         C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eeyx[7] += (2 * std::pow(Pi, 2.5) *
                  (((C1989 * C70 - C829 * C67) * C283 +
                    (C1989 * C138 - C829 * C135) * C251 +
                    (C1989 * C259 - C829 * C257) * C284 +
                    (C1989 * C331 - C829 * C329) * C2096) *
                       C1161 +
                   ((C1989 * C459 - C829 * C457) * C283 +
                    (C1989 * C531 - C829 * C529) * C251 +
                    (C1989 * C984 - C829 * C983) * C284 +
                    (C1989 * C1046 - C829 * C1045) * C2096) *
                       C2098) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[7] += (2 * std::pow(Pi, 2.5) *
                  ((C283 * C94 - C351 * C67 - C283 * C135 + C251 * C156 +
                    C284 * C285 - C352 * C257 - C284 * C329 + C2096 * C353) *
                       C1989 * C1161 +
                   (C283 * C483 - C351 * C457 - C283 * C529 + C251 * C551 +
                    C284 * C1005 - C352 * C983 - C284 * C1045 + C2096 * C1065) *
                       C1989 * C2098) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[7] +=
        (2 * std::pow(Pi, 2.5) *
         ((C1161 * C115 - C1199 * C67 + C2098 * C507 - C1200 * C457) * C283 +
          (C1161 * C173 - C1199 * C135 + C2098 * C571 - C1200 * C529) * C251 +
          (C1161 * C307 - C1199 * C257 + C2098 * C1025 - C1200 * C983) * C284 +
          (C1161 * C373 - C1199 * C329 + C2098 * C1084 - C1200 * C1045) *
              C2096) *
         C1989 * C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eezx[7] += (2 * std::pow(Pi, 2.5) *
                  (((C1989 * C70 - C829 * C67) * C1199 +
                    (C1989 * C193 - C829 * C190) * C1161 +
                    (C1989 * C459 - C829 * C457) * C1200 +
                    (C1989 * C593 - C829 * C591) * C2098) *
                       C251 +
                   ((C1989 * C259 - C829 * C257) * C1199 +
                    (C1989 * C395 - C829 * C393) * C1161 +
                    (C1989 * C984 - C829 * C983) * C1200 +
                    (C1989 * C1104 - C829 * C1103) * C2098) *
                       C2096) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eezy[7] +=
        (2 * std::pow(Pi, 2.5) *
         ((C251 * C94 - C283 * C67 + C2096 * C285 - C284 * C257) * C1199 +
          (C251 * C210 - C283 * C190 + C2096 * C415 - C284 * C393) * C1161 +
          (C251 * C483 - C283 * C457 + C2096 * C1005 - C284 * C983) * C1200 +
          (C251 * C613 - C283 * C591 + C2096 * C1123 - C284 * C1103) * C2098) *
         C1989 * C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eezz[7] +=
        (2 * std::pow(Pi, 2.5) *
         ((C1199 * C115 - C1309 * C67 - C1199 * C190 + C1161 * C228 +
           C1200 * C507 - C1310 * C457 - C1200 * C591 + C2098 * C635) *
              C251 +
          (C1199 * C307 - C1309 * C257 - C1199 * C393 + C1161 * C435 +
           C1200 * C1025 - C1310 * C983 - C1200 * C1103 + C2098 * C1142) *
              C2096) *
         C1989 * C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eexx[8] +=
        (2 * std::pow(Pi, 2.5) *
         ((C829 * C70 - C830 * C67 - C829 * C71 + C1989 * C76) * C1487 +
          (C829 * C459 - C830 * C457 - C829 * C460 + C1989 * C463) * C1488 +
          (C829 * C1491 - C830 * C1490 - C829 * C1492 + C1989 * C1493) *
              C1489) *
         C2033 * C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eexy[8] += (2 * std::pow(Pi, 2.5) *
                  (((C2033 * C94 - C93 * C67) * C829 +
                    (C2033 * C97 - C93 * C71) * C1989) *
                       C1487 +
                   ((C2033 * C483 - C93 * C457) * C829 +
                    (C2033 * C485 - C93 * C460) * C1989) *
                       C1488 +
                   ((C2033 * C1508 - C93 * C1490) * C829 +
                    (C2033 * C1509 - C93 * C1492) * C1989) *
                       C1489) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eexz[8] += (2 * std::pow(Pi, 2.5) *
                  ((C1487 * C115 - C1524 * C67 + C1488 * C507 - C1525 * C457 +
                    C1489 * C1527 - C1526 * C1490) *
                       C829 +
                   (C1487 * C118 - C1524 * C71 + C1488 * C509 - C1525 * C460 +
                    C1489 * C1528 - C1526 * C1492) *
                       C1989) *
                  C2033 * C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[8] += (2 * std::pow(Pi, 2.5) *
                  (((C1989 * C70 - C829 * C67) * C93 +
                    (C1989 * C138 - C829 * C135) * C2033) *
                       C1487 +
                   ((C1989 * C459 - C829 * C457) * C93 +
                    (C1989 * C531 - C829 * C529) * C2033) *
                       C1488 +
                   ((C1989 * C1491 - C829 * C1490) * C93 +
                    (C1989 * C1544 - C829 * C1543) * C2033) *
                       C1489) *
                  C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[8] +=
        (2 * std::pow(Pi, 2.5) *
         ((C93 * C94 - C155 * C67 - C93 * C135 + C2033 * C156) * C1989 * C1487 +
          (C93 * C483 - C155 * C457 - C93 * C529 + C2033 * C551) * C1989 *
              C1488 +
          (C93 * C1508 - C155 * C1490 - C93 * C1543 + C2033 * C1559) * C1989 *
              C1489) *
         C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    d2eeyz[8] += (2 * std::pow(Pi, 2.5) *
                  ((C1487 * C115 - C1524 * C67 + C1488 * C507 - C1525 * C457 +
                    C1489 * C1527 - C1526 * C1490) *
                       C93 +
                   (C1487 * C173 - C1524 * C135 + C1488 * C571 - C1525 * C529 +
                    C1489 * C1574 - C1526 * C1543) *
                       C2033) *
                  C1989 * C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eezx[8] += (2 * std::pow(Pi, 2.5) *
                  ((C1989 * C70 - C829 * C67) * C1524 +
                   (C1989 * C193 - C829 * C190) * C1487 +
                   (C1989 * C459 - C829 * C457) * C1525 +
                   (C1989 * C593 - C829 * C591) * C1488 +
                   (C1989 * C1491 - C829 * C1490) * C1526 +
                   (C1989 * C1590 - C829 * C1589) * C1489) *
                  C2033 * C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eezy[8] += (2 * std::pow(Pi, 2.5) *
                  ((C2033 * C94 - C93 * C67) * C1524 +
                   (C2033 * C210 - C93 * C190) * C1487 +
                   (C2033 * C483 - C93 * C457) * C1525 +
                   (C2033 * C613 - C93 * C591) * C1488 +
                   (C2033 * C1508 - C93 * C1490) * C1526 +
                   (C2033 * C1605 - C93 * C1589) * C1489) *
                  C1989 * C58 * C59 * C60) /
                 (p * q * std::sqrt(p + q));
    d2eezz[8] +=
        (2 * std::pow(Pi, 2.5) *
         (C1524 * C115 - C1620 * C67 - C1524 * C190 + C1487 * C228 +
          C1525 * C507 - C1621 * C457 - C1525 * C591 + C1488 * C635 +
          C1526 * C1527 - C1622 * C1490 - C1526 * C1589 + C1489 * C1623) *
         C2033 * C1989 * C58 * C59 * C60) /
        (p * q * std::sqrt(p + q));
    
}
