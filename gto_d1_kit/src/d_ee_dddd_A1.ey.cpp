/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2222_1_vr(const double ae,
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
                            const double* const g,
                            double* const vrx,
                            double* const vry,
                            double* const vrz)
{
    const double xAB = xA - xB;
    const double yAB = yA - yB;
    const double zAB = zA - zB;
    const double xCD = xC - xD;
    const double yCD = yC - yD;
    const double zCD = zC - zD;
    const double p = ae + be;
    const double q = ce + de;
    const double muab = ae * be / p;
    const double mucd = ce * de / q;
    const double rAB2 = xAB * xAB + yAB * yAB + zAB * zAB;
    const double rCD2 = xCD * xCD + yCD * yCD + zCD * zCD;
    const double xP = (ae * xA + be * xB) / p;
    const double yP = (ae * yA + be * yB) / p;
    const double zP = (ae * zA + be * zB) / p;
    const double xQ = (ce * xC + de * xD) / q;
    const double yQ = (ce * yC + de * yD) / q;
    const double zQ = (ce * zC + de * zD) / q;
    const double kab = std::exp(-muab * rAB2);
    const double kcd = std::exp(-mucd * rCD2);
    const double C157751 = g[1314];
    const double C157783 = g[1316];
    const double C157814 = g[1318];
    const double C157829 = g[1319];
    const double C157844 = g[1320];
    const double C158631 = g[1330];
    const double C158677 = g[1333];
    const double C158692 = g[1334];
    const double C158723 = g[1336];
    const double C159279 = g[1344];
    const double C159310 = g[1346];
    const double C159325 = g[1347];
    const double C159340 = g[1348];
    const double C159371 = g[1350];
    const double C159936 = g[1357];
    const double C160126 = g[1362];
    const double C160443 = g[1370];
    const double C160728 = g[1374];
    const double C160759 = g[1376];
    const double C160774 = g[1377];
    const double C160789 = g[1378];
    const double C161290 = g[1386];
    const double C161321 = g[1388];
    const double C161336 = g[1389];
    const double C161917 = g[1397];
    const double C162222 = g[1405];
    const double C162353 = g[1409];
    const double C162552 = g[1412];
    const double C162613 = g[1415];
    const double C162644 = g[1417];
    const double C162659 = g[1418];
    const double C162674 = g[1419];
    const double C163375 = g[1431];
    const double C163518 = g[1434];
    const double C163649 = g[1438];
    const double C163735 = g[1441];
    const double C163750 = g[1442];
    const double C163894 = g[1447];
    const double C163910 = g[1448];
    const double C163955 = g[1449];
    const double C164001 = g[1450];
    const double C164322 = g[1455];
    const double C164337 = g[1456];
    const double C164671 = g[1462];
    const double C164702 = g[1463];
    const double C164717 = g[1464];
    const double C165092 = g[1471];
    const double C165107 = g[1472];
    const double C165122 = g[1473];
    const double C165137 = g[1474];
    const double C165472 = g[1480];
    const double C165487 = g[1481];
    const double C165502 = g[1482];
    const double C165517 = g[1483];
    const double C165893 = g[1490];
    const double C165924 = g[1491];
    const double C165954 = g[1493];
    const double C165969 = g[1494];
    const double C166316 = g[1500];
    const double C166390 = g[1501];
    const double C166406 = g[1502];
    const double C166587 = g[1504];
    const double C166602 = g[1505];
    const double C166632 = g[1507];
    const double C166782 = g[1508];
    const double C166825 = g[1509];
    const double C166840 = g[1510];
    const double C166855 = g[1511];
    const double C167015 = g[1513];
    const double C167030 = g[1514];
    const double C167060 = g[1516];
    const double C167269 = g[1520];
    const double C167284 = g[1521];
    const double C167415 = g[1522];
    const double C167430 = g[1523];
    const double C167445 = g[1524];
    const double C167503 = g[1526];
    const double C167518 = g[1527];
    const double C167678 = g[1529];
    const double C167693 = g[1530];
    const double C189051 = g[1615];
    const double C190869 = g[1628];
    const double C190914 = g[1629];
    const double C190945 = g[1630];
    const double C191077 = g[1631];
    const double C191120 = g[1632];
    const double C191321 = g[1633];
    const double C191378 = g[1634];
    const double C213703 = g[1668];
    const double C215099 = g[1672];
    const double C215130 = g[1673];
    const double C215146 = g[1674];
    const double C218843 = g[1675];
    const double C218863 = g[1676];
    const double C218879 = g[1677];
    const double C218895 = g[1678];
    const double C218926 = g[1679];
    const double C219000 = g[1680];
    const double C219088 = g[1681];
    const double C219103 = g[1682];
    const double C219133 = g[1683];
    const double C219206 = g[1684];
    const double C219221 = g[1685];
    const double C219250 = g[1686];
    const double C219265 = g[1687];
    const double C219281 = g[1688];
    const double C219310 = g[1689];
    const double C219326 = g[1690];
    const double C219341 = g[1691];
    const double C219522 = g[1692];
    const double C219553 = g[1693];
    const double C219570 = g[1694];
    const double C219602 = g[1695];
    const double C219661 = g[1696];
    const double C219677 = g[1697];
    const double C219709 = g[1698];
    const double C219739 = g[1699];
    const double C219754 = g[1700];
    const double C219769 = g[1701];
    const double C219857 = g[1702];
    const double C219872 = g[1703];
    const double C219931 = g[1704];
    const double C219947 = g[1705];
    const double C219977 = g[1706];
    const double C219992 = g[1707];
    const double C220050 = g[1708];
    const double C220065 = g[1709];
    const double C220094 = g[1710];
    const double C220240 = g[1711];
    const double C220256 = g[1712];
    const double C220301 = g[1713];
    const double C220317 = g[1714];
    const double C220348 = g[1715];
    const double C220378 = g[1716];
    const double C220409 = g[1717];
    const double C220453 = g[1718];
    const double C220498 = g[1719];
    const double C220513 = g[1720];
    const double C220558 = g[1721];
    const double C220574 = g[1722];
    const double C220618 = g[1723];
    const double C220633 = g[1724];
    const double C220721 = g[1725];
    const double C220796 = g[1726];
    const double C220856 = g[1727];
    const double C220872 = g[1728];
    const double C220888 = g[1729];
    const double C220932 = g[1730];
    const double C220978 = g[1731];
    const double C220994 = g[1732];
    const double C221024 = g[1733];
    const double C221084 = g[1734];
    const double C221099 = g[1735];
    const double C221143 = g[1736];
    const double C221159 = g[1737];
    const double C221204 = g[1738];
    const double C221219 = g[1739];
    const double C221264 = g[1740];
    const double C221279 = g[1741];
    const double C221308 = g[1742];
    const double C221325 = g[1743];
    const double C221341 = g[1744];
    const double C221363 = g[1745];
    const double C221394 = g[1746];
    const double C221537 = g[1747];
    const double C221553 = g[1748];
    const double C221625 = g[1749];
    const double C221641 = g[1750];
    const double C221657 = g[1751];
    const double C221687 = g[1752];
    const double C221718 = g[1753];
    const double C221734 = g[1754];
    const double C221765 = g[1755];
    const double C221781 = g[1756];
    const double C221826 = g[1757];
    const double C221956 = g[1758];
    const double C222030 = g[1759];
    const double C222046 = g[1760];
    const double C222077 = g[1761];
    const double C222093 = g[1762];
    const double C222109 = g[1763];
    const double C222125 = g[1764];
    const double C222141 = g[1765];
    const double C222157 = g[1766];
    const double C222273 = g[1767];
    const double C222317 = g[1768];
    const double C222378 = g[1769];
    const double C222423 = g[1770];
    const double C222439 = g[1771];
    const double C222455 = g[1772];
    const double C222471 = g[1773];
    const double C222517 = g[1774];
    const double C222533 = g[1775];
    const double C222549 = g[1776];
    const double C222679 = g[1777];
    const double C222696 = g[1778];
    const double C222776 = g[1779];
    const double C222792 = g[1780];
    const double C222823 = g[1781];
    const double C222883 = g[1782];
    const double C222898 = g[1783];
    const double C222970 = g[1784];
    const double C223013 = g[1785];
    const double C223057 = g[1786];
    const double C223132 = g[1787];
    const double C223148 = g[1788];
    const double C223178 = g[1789];
    const double C223222 = g[1790];
    const double C223238 = g[1791];
    const double C223298 = g[1792];
    const double C223358 = g[1793];
    const double C223388 = g[1794];
    const double C223404 = g[1795];
    const double C223450 = g[1796];
    const double C223493 = g[1797];
    const double C223544 = g[1798];
    const double C223560 = g[1799];
    const double C223650 = g[1800];
    const double C223724 = g[1801];
    const double C223753 = g[1802];
    const double C223768 = g[1803];
    const double C223784 = g[1804];
    const double C223828 = g[1805];
    const double C223886 = g[1806];
    const double C223902 = g[1807];
    const double C223954 = g[1808];
    const double C223970 = g[1809];
    const double C224044 = g[1810];
    const double C224090 = g[1811];
    const double C224136 = g[1812];
    const double C224151 = g[1813];
    const double C224187 = g[1814];
    const double C224231 = g[1815];
    const double C224277 = g[1816];
    const double C224330 = g[1817];
    const double C224374 = g[1818];
    const double C224427 = g[1819];
    const double C224612 = g[1820];
    const double C225008 = g[1821];
    const double C225024 = g[1822];
    const double C225098 = g[1823];
    const double C225113 = g[1824];
    const double C225204 = g[1825];
    const double C225309 = g[1826];
    const double C225741 = g[1827];
    const double C225757 = g[1828];
    const double C225802 = g[1829];
    const double C225832 = g[1830];
    const double C225891 = g[1831];
    const double C225996 = g[1832];
    const double C226244 = g[1833];
    const double C226303 = g[1834];
    const double C226333 = g[1835];
    const double C226349 = g[1836];
    const double C226409 = g[1837];
    const double C226439 = g[1838];
    const double C226558 = g[1839];
    const double C226945 = g[1840];
    const double C227104 = g[1841];
    const double C227264 = g[1842];
    const double C227325 = g[1843];
    const double C227500 = g[1844];
    const double C227559 = g[1845];
    const double C227634 = g[1846];
    const double C227783 = g[1847];
    const double C227899 = g[1848];
    const double C227915 = g[1849];
    const double C227931 = g[1850];
    const double C228066 = g[1851];
    const double C228212 = g[1852];
    const double C228293 = g[1853];
    const double C228427 = g[1854];
    const double C228672 = g[1855];
    const double C228834 = g[1856];
    const double C228923 = g[1857];
    const double C228969 = g[1858];
    const double C229122 = g[1859];
    const double C229138 = g[1860];
    const double C229169 = g[1861];
    const double C229459 = g[1862];
    const double C229540 = g[1863];
    const double C229600 = g[1864];
    const double C229783 = g[1865];
    const double C229829 = g[1866];
    const double C229925 = g[1867];
    const double C230687 = g[1868];
    const double C230765 = g[1869];
    const double C231462 = g[1870];
    const double C231900 = g[1871];
    const double C232063 = g[1872];
    const double C232901 = g[1873];
    const double C233002 = g[1874];
    const double C233105 = g[1875];
    const double C233270 = g[1876];
    const double C233475 = g[1877];
    const double C233565 = g[1878];
    const double C233683 = g[1879];
    const double C233836 = g[1880];
    const double C234155 = g[1881];
    const double C234171 = g[1882];
    const double C234319 = g[1883];
    const double C234408 = g[1884];
    const double C234665 = g[1885];
    const double C235079 = g[1886];
    const double C235125 = g[1887];
    const double C235308 = g[1888];
    const double C235354 = g[1889];
    const double C235450 = g[1890];
    const double C218846 = p + q;
    const double C218845 = p * q;
    const double C235582 = bs[9];
    const double C235581 = bs[8];
    const double C235579 = bs[7];
    const double C235577 = bs[6];
    const double C235575 = bs[5];
    const double C235571 = bs[4];
    const double C235563 = bs[3];
    const double C235550 = bs[2];
    const double C235536 = std::pow(Pi, 2.5);
    const double C235533 = bs[1];
    const double C235532 = ae * be;
    const double C235531 = bs[0];
    const double C235528 = zP - zQ;
    const double C235527 = be * zAB;
    const double C235525 = yP - yQ;
    const double C235524 = be * yAB;
    const double C235521 = 2 * p;
    const double C235520 = xP - xQ;
    const double C235519 = std::pow(p, 2);
    const double C235517 = be * xAB;
    const double C235516 = ae / p;
    const double C218847 = C218846 * p;
    const double C235537 = std::sqrt(C218846);
    const double C235535 = p * C218846;
    const double C235534 = kab * C218845;
    const double C235518 = ae * C218845;
    const double C235691 = 4 * C235536;
    const double C235689 = kab * C235532;
    const double C235676 = C235528 * C218845;
    const double C235674 = C235525 * C218845;
    const double C235670 = C235520 * C218845;
    const double C235669 = C218846 * C235519;
    const double C235667 = C235516 - 1;
    const double C235692 = C218845 * C235537;
    const double C235690 = kcd * C235534;
    const double C235853 = C229169 * C235518;
    const double C235841 = C227899 * C235518;
    const double C235831 = C227104 * C235518;
    const double C235826 = C226409 * C235518;
    const double C235825 = C226349 * C235518;
    const double C235824 = C226303 * C235518;
    const double C235820 = C225832 * C235518;
    const double C235819 = C225802 * C235518;
    const double C235818 = C225757 * C235518;
    const double C235812 = C225113 * C235518;
    const double C235811 = C225098 * C235518;
    const double C235805 = C224427 * C235518;
    const double C235803 = C224330 * C235518;
    const double C235801 = C224187 * C235518;
    const double C235800 = C224151 * C235518;
    const double C235799 = C224136 * C235518;
    const double C235797 = C223954 * C235518;
    const double C235794 = C223828 * C235518;
    const double C235793 = C223784 * C235518;
    const double C235792 = C223768 * C235518;
    const double C235791 = C223753 * C235518;
    const double C235790 = C223724 * C235518;
    const double C235789 = C223650 * C235518;
    const double C235787 = C223493 * C235518;
    const double C235786 = C223450 * C235518;
    const double C235785 = C223358 * C235518;
    const double C235781 = C223222 * C235518;
    const double C235780 = C223148 * C235518;
    const double C235777 = C223057 * C235518;
    const double C235775 = C223013 * C235518;
    const double C235774 = C222970 * C235518;
    const double C235773 = C222898 * C235518;
    const double C235772 = C222883 * C235518;
    const double C235770 = C222823 * C235518;
    const double C235769 = C222792 * C235518;
    const double C235768 = C222696 * C235518;
    const double C235765 = C222533 * C235518;
    const double C235764 = C222471 * C235518;
    const double C235762 = C222439 * C235518;
    const double C235761 = C222423 * C235518;
    const double C235759 = C222273 * C235518;
    const double C235758 = C222141 * C235518;
    const double C235756 = C222093 * C235518;
    const double C235755 = C222046 * C235518;
    const double C235752 = C221956 * C235518;
    const double C235750 = C221781 * C235518;
    const double C235749 = C221765 * C235518;
    const double C235746 = C221657 * C235518;
    const double C235744 = C221625 * C235518;
    const double C235742 = C221553 * C235518;
    const double C235741 = C221537 * C235518;
    const double C235740 = C221394 * C235518;
    const double C235739 = C221363 * C235518;
    const double C235738 = C221341 * C235518;
    const double C235736 = C221308 * C235518;
    const double C235735 = C221279 * C235518;
    const double C235734 = C221264 * C235518;
    const double C235733 = C221219 * C235518;
    const double C235732 = C221204 * C235518;
    const double C235731 = C221143 * C235518;
    const double C235730 = C221099 * C235518;
    const double C235729 = C221084 * C235518;
    const double C235728 = C221024 * C235518;
    const double C235725 = C220888 * C235518;
    const double C235723 = C220796 * C235518;
    const double C235722 = C220721 * C235518;
    const double C235720 = C220633 * C235518;
    const double C235719 = C220618 * C235518;
    const double C235718 = C220574 * C235518;
    const double C235717 = C220513 * C235518;
    const double C235716 = C220498 * C235518;
    const double C235715 = C220453 * C235518;
    const double C235714 = C220409 * C235518;
    const double C235712 = C220348 * C235518;
    const double C235710 = C220240 * C235518;
    const double C235708 = C220094 * C235518;
    const double C235707 = C220065 * C235518;
    const double C235706 = C220050 * C235518;
    const double C235705 = C219992 * C235518;
    const double C235704 = C219977 * C235518;
    const double C235703 = C219947 * C235518;
    const double C235702 = C219872 * C235518;
    const double C235701 = C219857 * C235518;
    const double C235700 = C219769 * C235518;
    const double C235699 = C219739 * C235518;
    const double C235698 = C219709 * C235518;
    const double C235695 = C219602 * C235518;
    const double C235687 = C219341 * C235518;
    const double C235686 = C219326 * C235518;
    const double C235684 = C219310 * C235518;
    const double C235683 = C219281 * C235518;
    const double C235682 = C219250 * C235518;
    const double C235681 = C219221 * C235518;
    const double C235680 = C219206 * C235518;
    const double C235679 = C219133 * C235518;
    const double C235678 = C219088 * C235518;
    const double C235677 = C219000 * C235518;
    const double C235671 = C218863 * C235518;
    const double C235668 = C218843 * C235518;
    const double C235930 = kcd * C235689;
    const double C236186 = C235667 * C222883;
    const double C236173 = C235667 * C225802;
    const double C236162 = C235667 * C219281;
    const double C236156 = C235667 * C166782;
    const double C236154 = C235667 * C166587;
    const double C236152 = C235667 * C166406;
    const double C236147 = C235667 * C164001;
    const double C236145 = C235667 * C164671;
    const double C236143 = C235667 * C164322;
    const double C236136 = C235667 * C159371;
    const double C236134 = C235667 * C160126;
    const double C236126 = C235667 * C224330;
    const double C236122 = C235667 * C224187;
    const double C236118 = C235667 * C223954;
    const double C236115 = C235667 * C223753;
    const double C236113 = C235667 * C223724;
    const double C236110 = C235667 * C223493;
    const double C236105 = C235667 * C223148;
    const double C236103 = C235667 * C223057;
    const double C236101 = C235667 * C223013;
    const double C236099 = C235667 * C222970;
    const double C236097 = C235667 * C222898;
    const double C236095 = C235667 * C222792;
    const double C236091 = C235667 * C222696;
    const double C236089 = C235667 * C222141;
    const double C236087 = C235667 * C222046;
    const double C236082 = C235667 * C221956;
    const double C236080 = C235667 * C221781;
    const double C236076 = C235667 * C221657;
    const double C236073 = C235667 * C221553;
    const double C236071 = C235667 * C221765;
    const double C236069 = C235667 * C221625;
    const double C236067 = C235667 * C221394;
    const double C236064 = C235667 * C221363;
    const double C236062 = C235667 * C221537;
    const double C236059 = C235667 * C221341;
    const double C236055 = C235667 * C220574;
    const double C236053 = C235667 * C220513;
    const double C236050 = C235667 * C220453;
    const double C236048 = C235667 * C220409;
    const double C236045 = C235667 * C220094;
    const double C236043 = C235667 * C220065;
    const double C236040 = C235667 * C219947;
    const double C236038 = C235667 * C219857;
    const double C236034 = C235667 * C219341;
    const double C236031 = C235667 * C219977;
    const double C236029 = C235667 * C219221;
    const double C236025 = C235667 * C219739;
    const double C236022 = C235667 * C219088;
    const double C236019 = C235667 * C219310;
    const double C236017 = C235667 * C218843;
    const double C236015 = C235667 * C219133;
    const double C236013 = C235667 * C219000;
    const double C236010 = C235667 * C219326;
    const double C236007 = C235667 * C218863;
    const double C236005 = C235667 * C215099;
    const double C236003 = C235667 * C215146;
    const double C236001 = C235667 * C191378;
    const double C235999 = C235667 * C191321;
    const double C235997 = C235667 * C191077;
    const double C235995 = C235667 * C190945;
    const double C235993 = C235667 * C190869;
    const double C235991 = C235667 * C167503;
    const double C235987 = C235667 * C167030;
    const double C235984 = C235667 * C167445;
    const double C235982 = C235667 * C167015;
    const double C235979 = C235667 * C166316;
    const double C235977 = C235667 * C167518;
    const double C235975 = C235667 * C213703;
    const double C235973 = C235667 * C167678;
    const double C235971 = C235667 * C167060;
    const double C235969 = C235667 * C167415;
    const double C235967 = C235667 * C189051;
    const double C235964 = C235667 * C165893;
    const double C235961 = C235667 * C165092;
    const double C235958 = C235667 * C163894;
    const double C235956 = C235667 * C165954;
    const double C235954 = C235667 * C165924;
    const double C235952 = C235667 * C163518;
    const double C235950 = C235667 * C162613;
    const double C235948 = C235667 * C165502;
    const double C235946 = C235667 * C165137;
    const double C235944 = C235667 * C165107;
    const double C235942 = C235667 * C162222;
    const double C235940 = C235667 * C160728;
    const double C235938 = C235667 * C163375;
    const double C235934 = C235667 * C161917;
    const double C235927 = C235667 * C157829;
    const double C235925 = C235667 * C163910;
    const double C235922 = C235667 * C157751;
    const double C235920 = C235667 * C163750;
    const double C235918 = C235667 * C163649;
    const double C235916 = C235667 * C162644;
    const double C235914 = C235667 * C162552;
    const double C235912 = C235667 * C162353;
    const double C235910 = C235667 * C160759;
    const double C235908 = C235667 * C160443;
    const double C235903 = C235667 * C157814;
    const double C235901 = C235667 * C157783;
    const double C236128 = C235582 * C235690;
    const double C236125 = C235581 * C235690;
    const double C236121 = C235579 * C235690;
    const double C236117 = C235577 * C235690;
    const double C236109 = C235575 * C235690;
    const double C236093 = C235571 * C235690;
    const double C236061 = C235563 * C235690;
    const double C236012 = C235550 * C235690;
    const double C235931 = C235533 * C235690;
    const double C236187 = C235853 / C235669;
    const double C236174 = C235841 / C235669;
    const double C236163 = C235831 / C235669;
    const double C236157 = C235826 / C235669;
    const double C236155 = C235825 / C235669;
    const double C236153 = C235824 / C235669;
    const double C236148 = C235820 / C235669;
    const double C236146 = C235819 / C235669;
    const double C236144 = C235818 / C235669;
    const double C236137 = C235812 / C235669;
    const double C236135 = C235811 / C235669;
    const double C236127 = C235805 / C235669;
    const double C236123 = C235803 / C235669;
    const double C236119 = C235801 / C235669;
    const double C236116 = C235800 / C235669;
    const double C236114 = C235799 / C235669;
    const double C236111 = C235797 / C235669;
    const double C236106 = C235794 / C235669;
    const double C236104 = C235793 / C235669;
    const double C236102 = C235792 / C235669;
    const double C236100 = C235791 / C235669;
    const double C236098 = C235790 / C235669;
    const double C236096 = C235789 / C235669;
    const double C236092 = C235787 / C235669;
    const double C236090 = C235786 / C235669;
    const double C236088 = C235785 / C235669;
    const double C236083 = C235781 / C235669;
    const double C236081 = C235780 / C235669;
    const double C236077 = C235777 / C235669;
    const double C236074 = C235775 / C235669;
    const double C236072 = C235774 / C235669;
    const double C236070 = C235773 / C235669;
    const double C236068 = C235772 / C235669;
    const double C236065 = C235770 / C235669;
    const double C236063 = C235769 / C235669;
    const double C236060 = C235768 / C235669;
    const double C236056 = C235765 / C235669;
    const double C236054 = C235764 / C235669;
    const double C236051 = C235762 / C235669;
    const double C236049 = C235761 / C235669;
    const double C236046 = C235759 / C235669;
    const double C236044 = C235758 / C235669;
    const double C236041 = C235756 / C235669;
    const double C236039 = C235755 / C235669;
    const double C236035 = C235752 / C235669;
    const double C236032 = C235750 / C235669;
    const double C236030 = C235749 / C235669;
    const double C236026 = C235746 / C235669;
    const double C236023 = C235744 / C235669;
    const double C236020 = C235742 / C235669;
    const double C236018 = C235741 / C235669;
    const double C236016 = C235740 / C235669;
    const double C236014 = C235739 / C235669;
    const double C236011 = C235738 / C235669;
    const double C236008 = C235736 / C235669;
    const double C236006 = C235735 / C235669;
    const double C236004 = C235734 / C235669;
    const double C236002 = C235733 / C235669;
    const double C236000 = C235732 / C235669;
    const double C235998 = C235731 / C235669;
    const double C235996 = C235730 / C235669;
    const double C235994 = C235729 / C235669;
    const double C235992 = C235728 / C235669;
    const double C235988 = C235725 / C235669;
    const double C235985 = C235723 / C235669;
    const double C235983 = C235722 / C235669;
    const double C235980 = C235720 / C235669;
    const double C235978 = C235719 / C235669;
    const double C235976 = C235718 / C235669;
    const double C235974 = C235717 / C235669;
    const double C235972 = C235716 / C235669;
    const double C235970 = C235715 / C235669;
    const double C235968 = C235714 / C235669;
    const double C235965 = C235712 / C235669;
    const double C235962 = C235710 / C235669;
    const double C235959 = C235708 / C235669;
    const double C235957 = C235707 / C235669;
    const double C235955 = C235706 / C235669;
    const double C235953 = C235705 / C235669;
    const double C235951 = C235704 / C235669;
    const double C235949 = C235703 / C235669;
    const double C235947 = C235702 / C235669;
    const double C235945 = C235701 / C235669;
    const double C235943 = C235700 / C235669;
    const double C235941 = C235699 / C235669;
    const double C235939 = C235698 / C235669;
    const double C235935 = C235695 / C235669;
    const double C235928 = C235687 / C235669;
    const double C235926 = C235686 / C235669;
    const double C235923 = C235684 / C235669;
    const double C235921 = C235683 / C235669;
    const double C235919 = C235682 / C235669;
    const double C235917 = C235681 / C235669;
    const double C235915 = C235680 / C235669;
    const double C235913 = C235679 / C235669;
    const double C235911 = C235678 / C235669;
    const double C235909 = C235677 / C235669;
    const double C235904 = C235671 / C235669;
    const double C235902 = C235668 / C235669;
    const double C236287 = C235581 * C235930;
    const double C236285 = C235579 * C235930;
    const double C236282 = C235577 * C235930;
    const double C236279 = C235575 * C235930;
    const double C236276 = C235571 * C235930;
    const double C236272 = C235563 * C235930;
    const double C236265 = C235550 * C235930;
    const double C236252 = C235533 * C235930;
    const double C236237 = C235531 * C235930;
    const double C236288 = C236128 * ae;
    const double C236286 = C236125 * ae;
    const double C236283 = C236121 * ae;
    const double C236280 = C236117 * ae;
    const double C236277 = C236109 * ae;
    const double C236273 = C236093 * ae;
    const double C236266 = C236061 * ae;
    const double C236253 = C236012 * ae;
    const double C236238 = C235931 * ae;
    const double C224431 =
        -(((xAB * C236287) / p + (C235520 * C236288) / C235535) * C235691) /
        C235692;
    const double C229967 =
        -(((yAB * C236287) / p + (C235525 * C236288) / C235535) * C235691) /
        C235692;
    const double C235478 =
        -(((zAB * C236287) / p + (C235528 * C236288) / C235535) * C235691) /
        C235692;
    const double C224334 =
        -(((xAB * C236285) / p + (C235520 * C236286) / C235535) * C235691) /
        C235692;
    const double C229871 =
        -(((yAB * C236285) / p + (C235525 * C236286) / C235535) * C235691) /
        C235692;
    const double C235382 =
        -(((zAB * C236285) / p + (C235528 * C236286) / C235535) * C235691) /
        C235692;
    const double C224191 =
        -(((xAB * C236282) / p + (C235520 * C236283) / C235535) * C235691) /
        C235692;
    const double C229729 =
        -(((yAB * C236282) / p + (C235525 * C236283) / C235535) * C235691) /
        C235692;
    const double C235240 =
        -(((zAB * C236282) / p + (C235528 * C236283) / C235535) * C235691) /
        C235692;
    const double C223958 =
        -(((xAB * C236279) / p + (C235520 * C236280) / C235535) * C235691) /
        C235692;
    const double C229500 =
        -(((yAB * C236279) / p + (C235525 * C236280) / C235535) * C235691) /
        C235692;
    const double C235011 =
        -(((zAB * C236279) / p + (C235528 * C236280) / C235535) * C235691) /
        C235692;
    const double C223497 =
        -(((xAB * C236276) / p + (C235520 * C236277) / C235535) * C235691) /
        C235692;
    const double C229053 =
        -(((yAB * C236276) / p + (C235525 * C236277) / C235535) * C235691) /
        C235692;
    const double C234567 =
        -(((zAB * C236276) / p + (C235528 * C236277) / C235535) * C235691) /
        C235692;
    const double C222684 =
        -(((xAB * C236272) / p + (C235520 * C236273) / C235535) * C235691) /
        C235692;
    const double C228253 =
        -(((yAB * C236272) / p + (C235525 * C236273) / C235535) * C235691) /
        C235692;
    const double C233768 =
        -(((zAB * C236272) / p + (C235528 * C236273) / C235535) * C235691) /
        C235692;
    const double C221329 =
        -(((xAB * C236265) / p + (C235520 * C236266) / C235535) * C235691) /
        C235692;
    const double C226897 =
        -(((yAB * C236265) / p + (C235525 * C236266) / C235535) * C235691) /
        C235692;
    const double C232418 =
        -(((zAB * C236265) / p + (C235528 * C236266) / C235535) * C235691) /
        C235692;
    const double C218883 =
        -(((xAB * C236252) / p + (C235520 * C236253) / C235535) * C235691) /
        C235692;
    const double C224513 =
        -(((yAB * C236252) / p + (C235525 * C236253) / C235535) * C235691) /
        C235692;
    const double C230049 =
        -(((zAB * C236252) / p + (C235528 * C236253) / C235535) * C235691) /
        C235692;
    const double C157848 =
        -(((xAB * C236237) / p + (C235520 * C236238) / C235535) * C235691) /
        C235692;
    const double C181743 =
        -(((yAB * C236237) / p + (C235525 * C236238) / C235535) * C235691) /
        C235692;
    const double C205502 =
        -(((zAB * C236237) / p + (C235528 * C236238) / C235535) * C235691) /
        C235692;
    const double C235580 = C224334 * C218845;
    const double C224378 = C236126 - (C224334 * C235517) / p - C236127 -
                           (C224431 * C235670) / C218847;
    const double C224393 =
        -((C224334 * C235524) / p + (C224431 * C235674) / C218847);
    const double C224408 =
        -((C224334 * C235527) / p + (C224431 * C235676) / C218847);
    const double C235624 = C229871 * C218845;
    const double C229914 =
        -((C229871 * C235517) / p + (C229967 * C235670) / C218847);
    const double C229930 = C236126 - (C229871 * C235524) / p - C236127 -
                           (C229967 * C235674) / C218847;
    const double C229945 =
        -((C229871 * C235527) / p + (C229967 * C235676) / C218847);
    const double C235666 = C235382 * C218845;
    const double C235425 =
        -((C235382 * C235517) / p + (C235478 * C235670) / C218847);
    const double C235440 =
        -((C235382 * C235524) / p + (C235478 * C235674) / C218847);
    const double C235456 = C236126 - (C235382 * C235527) / p - C236127 -
                           (C235478 * C235676) / C218847;
    const double C235578 = C224191 * C218845;
    const double C224235 = C236122 - (C224191 * C235517) / p - C236123 -
                           (C224334 * C235670) / C218847;
    const double C224250 =
        -((C224191 * C235524) / p + (C224334 * C235674) / C218847);
    const double C224265 =
        -((C224191 * C235527) / p + (C224334 * C235676) / C218847);
    const double C235623 = C229729 * C218845;
    const double C229772 =
        -((C229729 * C235517) / p + (C229871 * C235670) / C218847);
    const double C229788 = C236122 - (C229729 * C235524) / p - C236123 -
                           (C229871 * C235674) / C218847;
    const double C229803 =
        -((C229729 * C235527) / p + (C229871 * C235676) / C218847);
    const double C235665 = C235240 * C218845;
    const double C235283 =
        -((C235240 * C235517) / p + (C235382 * C235670) / C218847);
    const double C235298 =
        -((C235240 * C235524) / p + (C235382 * C235674) / C218847);
    const double C235314 = C236122 - (C235240 * C235527) / p - C236123 -
                           (C235382 * C235676) / C218847;
    const double C235576 = C223958 * C218845;
    const double C223974 = C236118 - (C223958 * C235517) / p - C236119 -
                           (C224191 * C235670) / C218847;
    const double C224003 =
        -((C223958 * C235524) / p + (C224191 * C235674) / C218847);
    const double C224032 =
        -((C223958 * C235527) / p + (C224191 * C235676) / C218847);
    const double C235622 = C229500 * C218845;
    const double C229515 =
        -((C229500 * C235517) / p + (C229729 * C235670) / C218847);
    const double C229545 = C236118 - (C229500 * C235524) / p - C236119 -
                           (C229729 * C235674) / C218847;
    const double C229574 =
        -((C229500 * C235527) / p + (C229729 * C235676) / C218847);
    const double C235664 = C235011 * C218845;
    const double C235026 =
        -((C235011 * C235517) / p + (C235240 * C235670) / C218847);
    const double C235055 =
        -((C235011 * C235524) / p + (C235240 * C235674) / C218847);
    const double C235085 = C236118 - (C235011 * C235527) / p - C236119 -
                           (C235240 * C235676) / C218847;
    const double C235572 = C223497 * C218845;
    const double C223548 = C236110 - (C223497 * C235517) / p - C236111 -
                           (C223958 * C235670) / C218847;
    const double C223579 =
        -((C223497 * C235524) / p + (C223958 * C235674) / C218847);
    const double C223609 =
        -((C223497 * C235527) / p + (C223958 * C235676) / C218847);
    const double C235619 = C229053 * C218845;
    const double C229096 =
        -((C229053 * C235517) / p + (C229500 * C235670) / C218847);
    const double C229127 = C236110 - (C229053 * C235524) / p - C236111 -
                           (C229500 * C235674) / C218847;
    const double C229158 =
        -((C229053 * C235527) / p + (C229500 * C235676) / C218847);
    const double C235661 = C234567 * C218845;
    const double C234610 =
        -((C234567 * C235517) / p + (C235011 * C235670) / C218847);
    const double C234640 =
        -((C234567 * C235524) / p + (C235011 * C235674) / C218847);
    const double C234671 = C236110 - (C234567 * C235527) / p - C236111 -
                           (C235011 * C235676) / C218847;
    const double C235562 = C222684 * C218845;
    const double C222683 = C236091 - (C222684 * C235517) / p - C236092 -
                           (C223497 * C235670) / C218847;
    const double C222721 =
        -((C222684 * C235524) / p + (C223497 * C235674) / C218847);
    const double C222750 =
        -((C222684 * C235527) / p + (C223497 * C235676) / C218847);
    const double C235611 = C228253 * C218845;
    const double C228268 =
        -((C228253 * C235517) / p + (C229053 * C235670) / C218847);
    const double C228298 = C236091 - (C228253 * C235524) / p - C236092 -
                           (C229053 * C235674) / C218847;
    const double C228327 =
        -((C228253 * C235527) / p + (C229053 * C235676) / C218847);
    const double C235653 = C233768 * C218845;
    const double C233783 =
        -((C233768 * C235517) / p + (C234567 * C235670) / C218847);
    const double C233812 =
        -((C233768 * C235524) / p + (C234567 * C235674) / C218847);
    const double C233842 = C236091 - (C233768 * C235527) / p - C236092 -
                           (C234567 * C235676) / C218847;
    const double C235549 = C221329 * C218845;
    const double C221313 = C236059 - (C221329 * C235517) / p - C236060 -
                           (C222684 * C235670) / C218847;
    const double C221382 =
        -((C221329 * C235524) / p + (C222684 * C235674) / C218847);
    const double C221413 =
        -((C221329 * C235527) / p + (C222684 * C235676) / C218847);
    const double C235599 = C226897 * C218845;
    const double C226898 =
        -((C226897 * C235517) / p + (C228253 * C235670) / C218847);
    const double C226950 = C236059 - (C226897 * C235524) / p - C236060 -
                           (C228253 * C235674) / C218847;
    const double C226980 =
        -((C226897 * C235527) / p + (C228253 * C235676) / C218847);
    const double C235641 = C232418 * C218845;
    const double C232419 =
        -((C232418 * C235517) / p + (C233768 * C235670) / C218847);
    const double C232470 =
        -((C232418 * C235524) / p + (C233768 * C235674) / C218847);
    const double C232500 = C236059 - (C232418 * C235527) / p - C236060 -
                           (C233768 * C235676) / C218847;
    const double C235522 = C218883 * C218845;
    const double C218867 = C236010 - (C218883 * C235517) / p - C236011 -
                           (C221329 * C235670) / C218847;
    const double C219018 =
        -((C218883 * C235524) / p + (C221329 * C235674) / C218847);
    const double C219151 =
        -((C218883 * C235527) / p + (C221329 * C235676) / C218847);
    const double C235583 = C224513 * C218845;
    const double C224498 =
        -((C224513 * C235517) / p + (C226897 * C235670) / C218847);
    const double C224646 = C236010 - (C224513 * C235524) / p - C236011 -
                           (C226897 * C235674) / C218847;
    const double C224776 =
        -((C224513 * C235527) / p + (C226897 * C235676) / C218847);
    const double C235625 = C230049 * C218845;
    const double C230034 =
        -((C230049 * C235517) / p + (C232418 * C235670) / C218847);
    const double C230181 =
        -((C230049 * C235524) / p + (C232418 * C235674) / C218847);
    const double C230311 = C236010 - (C230049 * C235527) / p - C236011 -
                           (C232418 * C235676) / C218847;
    const double C157802 = C235925 - (C157848 * C235517) / p - C235926 -
                           (C218883 * C235670) / C218847;
    const double C158711 =
        -((C157848 * C235524) / p + (C218883 * C235674) / C218847);
    const double C159359 =
        -((C157848 * C235527) / p + (C218883 * C235676) / C218847);
    const double C181700 =
        -((C181743 * C235517) / p + (C224513 * C235670) / C218847);
    const double C182597 = C235925 - (C181743 * C235524) / p - C235926 -
                           (C224513 * C235674) / C218847;
    const double C183235 =
        -((C181743 * C235527) / p + (C224513 * C235676) / C218847);
    const double C205459 =
        -((C205502 * C235517) / p + (C230049 * C235670) / C218847);
    const double C206350 =
        -((C205502 * C235524) / p + (C230049 * C235674) / C218847);
    const double C206984 = C235925 - (C205502 * C235527) / p - C235926 -
                           (C230049 * C235676) / C218847;
    const double C235804 = C235580 / C218847;
    const double C235858 = C235624 / C218847;
    const double C235900 = C235666 / C218847;
    const double C235802 = C235578 / C218847;
    const double C235857 = C235623 / C218847;
    const double C235899 = C235665 / C218847;
    const double C235798 = C235576 / C218847;
    const double C235856 = C235622 / C218847;
    const double C235898 = C235664 / C218847;
    const double C235788 = C235572 / C218847;
    const double C235852 = C235619 / C218847;
    const double C235895 = C235661 / C218847;
    const double C235767 = C235562 / C218847;
    const double C235844 = C235611 / C218847;
    const double C235887 = C235653 / C218847;
    const double C235737 = C235549 / C218847;
    const double C235830 = C235599 / C218847;
    const double C235875 = C235641 / C218847;
    const double C235672 = C235522 / C218847;
    const double C219269 =
        -((C219151 * C235524) / p + (C221413 * C235674) / C218847);
    const double C235806 = C235583 / C218847;
    const double C224890 = C236162 - (C224776 * C235524) / p - C236163 -
                           (C226980 * C235674) / C218847;
    const double C235859 = C235625 / C218847;
    const double C230425 =
        -((C230311 * C235524) / p + (C232500 * C235674) / C218847);
    const double C155986 = C235918 - (C158711 * C235517) / p - C235919 -
                           (C219018 * C235670) / C218847;
    const double C156869 = C235920 - (C159359 * C235517) / p - C235921 -
                           (C219151 * C235670) / C218847;
    const double C157313 =
        -((C159359 * C235524) / p + (C219151 * C235674) / C218847);
    const double C179901 =
        -((C182597 * C235517) / p + (C224646 * C235670) / C218847);
    const double C180778 =
        -((C183235 * C235517) / p + (C224776 * C235670) / C218847);
    const double C181219 = C235920 - (C183235 * C235524) / p - C235921 -
                           (C224776 * C235674) / C218847;
    const double C203660 =
        -((C206350 * C235517) / p + (C230181 * C235670) / C218847);
    const double C204537 =
        -((C206984 * C235517) / p + (C230311 * C235670) / C218847);
    const double C204978 =
        -((C206984 * C235524) / p + (C230311 * C235674) / C218847);
    const double C236124 = C224191 - C235804;
    const double C236192 = C229729 - C235858;
    const double C236234 = C235240 - C235900;
    const double C236120 = C223958 - C235802;
    const double C236191 = C229500 - C235857;
    const double C236233 = C235011 - C235899;
    const double C236112 = C223497 - C235798;
    const double C236190 = C229053 - C235856;
    const double C236232 = C234567 - C235898;
    const double C236094 = C222684 - C235788;
    const double C236185 = C228253 - C235852;
    const double C236229 = C233768 - C235895;
    const double C236058 = C221329 - C235767;
    const double C236177 = C226897 - C235844;
    const double C236221 = C232418 - C235887;
    const double C236009 = C218883 - C235737;
    const double C236161 = C224513 - C235830;
    const double C236209 = C230049 - C235875;
    const double C235905 = C157848 - C235672;
    const double C236129 = C181743 - C235806;
    const double C236193 = C205502 - C235859;
    const double C156430 = C235667 * C163735 - (C157313 * C235517) / p -
                           (C219265 * C235518) / C235669 -
                           (C219269 * C235670) / C218847;
    const double C180342 =
        -((C181219 * C235517) / p + (C224890 * C235670) / C218847);
    const double C204101 =
        -((C204978 * C235517) / p + (C230425 * C235670) / C218847);
    const double C236284 = C236124 / C235521;
    const double C236324 = C236192 / C235521;
    const double C236360 = C236234 / C235521;
    const double C236281 = C236120 / C235521;
    const double C236323 = C236191 / C235521;
    const double C236359 = C236233 / C235521;
    const double C236278 = C236112 / C235521;
    const double C236322 = C236190 / C235521;
    const double C236358 = C236232 / C235521;
    const double C236274 = C236094 / C235521;
    const double C236320 = C236185 / C235521;
    const double C236356 = C236229 / C235521;
    const double C236264 = C236058 / C235521;
    const double C236314 = C236177 / C235521;
    const double C236350 = C236221 / C235521;
    const double C236251 = C236009 / C235521;
    const double C236303 = C236161 / C235521;
    const double C236339 = C236209 / C235521;
    const double C236235 = C235905 / C235521;
    const double C236289 = C236129 / C235521;
    const double C236325 = C236193 / C235521;
    const double C224281 = C235667 * C224231 - (C224235 * C235517) / p -
                           (C224374 * C235518) / C235669 -
                           (C224378 * C235670) / C218847 + C236284;
    const double C224296 =
        C236284 - ((C224250 * C235524) / p + (C224393 * C235674) / C218847);
    const double C224311 =
        C236284 - ((C224265 * C235527) / p + (C224408 * C235676) / C218847);
    const double C229818 =
        C236324 - ((C229772 * C235517) / p + (C229914 * C235670) / C218847);
    const double C229834 = C235667 * C229783 - (C229788 * C235524) / p -
                           (C229925 * C235518) / C235669 -
                           (C229930 * C235674) / C218847 + C236324;
    const double C229849 =
        C236324 - ((C229803 * C235527) / p + (C229945 * C235676) / C218847);
    const double C235329 =
        C236360 - ((C235283 * C235517) / p + (C235425 * C235670) / C218847);
    const double C235344 =
        C236360 - ((C235298 * C235524) / p + (C235440 * C235674) / C218847);
    const double C235360 = C235667 * C235308 - (C235314 * C235527) / p -
                           (C235450 * C235518) / C235669 -
                           (C235456 * C235676) / C218847 + C236360;
    const double C224048 = C235667 * C223970 - (C223974 * C235517) / p -
                           (C224231 * C235518) / C235669 -
                           (C224235 * C235670) / C218847 + C236281;
    const double C224063 =
        C236281 - ((C224003 * C235524) / p + (C224250 * C235674) / C218847);
    const double C224078 =
        C236281 - ((C224032 * C235527) / p + (C224265 * C235676) / C218847);
    const double C229589 =
        C236323 - ((C229515 * C235517) / p + (C229772 * C235670) / C218847);
    const double C229605 = C235667 * C229540 - (C229545 * C235524) / p -
                           (C229783 * C235518) / C235669 -
                           (C229788 * C235674) / C218847 + C236323;
    const double C229620 =
        C236323 - ((C229574 * C235527) / p + (C229803 * C235676) / C218847);
    const double C235100 =
        C236359 - ((C235026 * C235517) / p + (C235283 * C235670) / C218847);
    const double C235115 =
        C236359 - ((C235055 * C235524) / p + (C235298 * C235674) / C218847);
    const double C235131 = C235667 * C235079 - (C235085 * C235527) / p -
                           (C235308 * C235518) / C235669 -
                           (C235314 * C235676) / C218847 + C236359;
    const double C223564 = C235667 * C223544 - (C223548 * C235517) / p -
                           (C223970 * C235518) / C235669 -
                           (C223974 * C235670) / C218847 + C236278;
    const double C223594 =
        C236278 - ((C223579 * C235524) / p + (C224003 * C235674) / C218847);
    const double C223624 =
        C236278 - ((C223609 * C235527) / p + (C224032 * C235676) / C218847);
    const double C229111 =
        C236322 - ((C229096 * C235517) / p + (C229515 * C235670) / C218847);
    const double C229143 = C235667 * C229122 - (C229127 * C235524) / p -
                           (C229540 * C235518) / C235669 -
                           (C229545 * C235674) / C218847 + C236322;
    const double C229174 =
        C236322 - ((C229158 * C235527) / p + (C229574 * C235676) / C218847);
    const double C234625 =
        C236358 - ((C234610 * C235517) / p + (C235026 * C235670) / C218847);
    const double C234655 =
        C236358 - ((C234640 * C235524) / p + (C235055 * C235674) / C218847);
    const double C234686 = C235667 * C234665 - (C234671 * C235527) / p -
                           (C235079 * C235518) / C235669 -
                           (C235085 * C235676) / C218847 + C236358;
    const double C222780 = C235667 * C222679 - (C222683 * C235517) / p -
                           (C223544 * C235518) / C235669 -
                           (C223548 * C235670) / C218847 + C236274;
    const double C222811 =
        C236274 - ((C222721 * C235524) / p + (C223579 * C235674) / C218847);
    const double C222856 =
        C236274 - ((C222750 * C235527) / p + (C223609 * C235676) / C218847);
    const double C228342 =
        C236320 - ((C228268 * C235517) / p + (C229096 * C235670) / C218847);
    const double C228372 = C235667 * C228293 - (C228298 * C235524) / p -
                           (C229122 * C235518) / C235669 -
                           (C229127 * C235674) / C218847 + C236320;
    const double C228416 =
        C236320 - ((C228327 * C235527) / p + (C229158 * C235676) / C218847);
    const double C233857 =
        C236356 - ((C233783 * C235517) / p + (C234610 * C235670) / C218847);
    const double C233887 =
        C236356 - ((C233812 * C235524) / p + (C234640 * C235674) / C218847);
    const double C233931 = C235667 * C233836 - (C233842 * C235527) / p -
                           (C234665 * C235518) / C235669 -
                           (C234671 * C235676) / C218847 + C236356;
    const double C221312 = C235667 * C221325 - (C221313 * C235517) / p -
                           (C222679 * C235518) / C235669 -
                           (C222683 * C235670) / C218847 + C236264;
    const double C221367 =
        C236264 - ((C221382 * C235524) / p + (C222721 * C235674) / C218847);
    const double C221398 =
        C236264 - ((C221413 * C235527) / p + (C222750 * C235676) / C218847);
    const double C226913 =
        C236314 - ((C226898 * C235517) / p + (C228268 * C235670) / C218847);
    const double C226965 = C235667 * C226945 - (C226950 * C235524) / p -
                           (C228293 * C235518) / C235669 -
                           (C228298 * C235674) / C218847 + C236314;
    const double C226995 =
        C236314 - ((C226980 * C235527) / p + (C228327 * C235676) / C218847);
    const double C232434 =
        C236350 - ((C232419 * C235517) / p + (C233783 * C235670) / C218847);
    const double C232485 =
        C236350 - ((C232470 * C235524) / p + (C233812 * C235674) / C218847);
    const double C232515 = C235667 * C227104 - (C232500 * C235527) / p -
                           (C233836 * C235518) / C235669 -
                           (C233842 * C235676) / C218847 + C236350;
    const double C218851 = C235667 * C218879 - (C218867 * C235517) / p -
                           (C221325 * C235518) / C235669 -
                           (C221313 * C235670) / C218847 + C236251;
    const double C218900 =
        C236251 - ((C219018 * C235524) / p + (C221382 * C235674) / C218847);
    const double C218931 =
        C236251 - ((C219151 * C235527) / p + (C221413 * C235676) / C218847);
    const double C224482 =
        C236303 - ((C224498 * C235517) / p + (C226898 * C235670) / C218847);
    const double C224528 = C235667 * C219250 - (C224646 * C235524) / p -
                           (C226945 * C235518) / C235669 -
                           (C226950 * C235674) / C218847 + C236303;
    const double C224558 =
        C236303 - ((C224776 * C235527) / p + (C226980 * C235676) / C218847);
    const double C230018 =
        C236339 - ((C230034 * C235517) / p + (C232419 * C235670) / C218847);
    const double C230064 =
        C236339 - ((C230181 * C235524) / p + (C232470 * C235674) / C218847);
    const double C230094 = C236162 - (C230311 * C235527) / p - C236163 -
                           (C232500 * C235676) / C218847 + C236339;
    const double C143693 = C235667 * C157844 - (C157802 * C235517) / p -
                           (C218879 * C235518) / C235669 -
                           (C218867 * C235670) / C218847 + C236235;
    const double C148268 =
        C236235 - ((C158711 * C235524) / p + (C219018 * C235674) / C218847);
    const double C152394 =
        C236235 - ((C159359 * C235527) / p + (C219151 * C235676) / C218847);
    const double C167835 =
        C236289 - ((C181700 * C235517) / p + (C224498 * C235670) / C218847);
    const double C172323 = C235918 - (C182597 * C235524) / p - C235919 -
                           (C224646 * C235674) / C218847 + C236289;
    const double C176372 =
        C236289 - ((C183235 * C235527) / p + (C224776 * C235676) / C218847);
    const double C191609 =
        C236325 - ((C205459 * C235517) / p + (C230034 * C235670) / C218847);
    const double C196091 =
        C236325 - ((C206350 * C235524) / p + (C230181 * C235674) / C218847);
    const double C200135 = C235920 - (C206984 * C235527) / p - C235921 -
                           (C230311 * C235676) / C218847 + C236325;
    const double C224094 = C235667 * C224044 - (C224048 * C235517) / p -
                           (C224277 * C235518) / C235669 -
                           (C224281 * C235670) / C218847 +
                           (C223974 - (C224235 * C218845) / C218847) / p;
    const double C224109 =
        (C224003 - (C224250 * C218845) / C218847) / p -
        ((C224063 * C235524) / p + (C224296 * C235674) / C218847);
    const double C224124 =
        (C224032 - (C224265 * C218845) / C218847) / p -
        ((C224078 * C235527) / p + (C224311 * C235676) / C218847);
    const double C229635 =
        (C229515 - (C229772 * C218845) / C218847) / p -
        ((C229589 * C235517) / p + (C229818 * C235670) / C218847);
    const double C229650 = C235667 * C229600 - (C229605 * C235524) / p -
                           (C229829 * C235518) / C235669 -
                           (C229834 * C235674) / C218847 +
                           (C229545 - (C229788 * C218845) / C218847) / p;
    const double C229665 =
        (C229574 - (C229803 * C218845) / C218847) / p -
        ((C229620 * C235527) / p + (C229849 * C235676) / C218847);
    const double C235146 =
        (C235026 - (C235283 * C218845) / C218847) / p -
        ((C235100 * C235517) / p + (C235329 * C235670) / C218847);
    const double C235161 =
        (C235055 - (C235298 * C218845) / C218847) / p -
        ((C235115 * C235524) / p + (C235344 * C235674) / C218847);
    const double C235176 = C235667 * C235125 - (C235131 * C235527) / p -
                           (C235354 * C235518) / C235669 -
                           (C235360 * C235676) / C218847 +
                           (C235085 - (C235314 * C218845) / C218847) / p;
    const double C223654 = C235667 * C223560 - (C223564 * C235517) / p -
                           (C224044 * C235518) / C235669 -
                           (C224048 * C235670) / C218847 +
                           (C223548 - (C223974 * C218845) / C218847) / p;
    const double C223669 =
        (C223579 - (C224003 * C218845) / C218847) / p -
        ((C223594 * C235524) / p + (C224063 * C235674) / C218847);
    const double C223712 =
        (C223609 - (C224032 * C218845) / C218847) / p -
        ((C223624 * C235527) / p + (C224078 * C235676) / C218847);
    const double C229203 =
        (C229096 - (C229515 * C218845) / C218847) / p -
        ((C229111 * C235517) / p + (C229589 * C235670) / C218847);
    const double C229218 = C235667 * C229138 - (C229143 * C235524) / p -
                           (C229600 * C235518) / C235669 -
                           (C229605 * C235674) / C218847 +
                           (C229127 - (C229545 * C218845) / C218847) / p;
    const double C229261 =
        (C229158 - (C229574 * C218845) / C218847) / p -
        ((C229174 * C235527) / p + (C229620 * C235676) / C218847);
    const double C234715 =
        (C234610 - (C235026 * C218845) / C218847) / p -
        ((C234625 * C235517) / p + (C235100 * C235670) / C218847);
    const double C234730 =
        (C234640 - (C235055 * C218845) / C218847) / p -
        ((C234655 * C235524) / p + (C235115 * C235674) / C218847);
    const double C234773 = C235667 * C229169 - (C234686 * C235527) / p -
                           (C235125 * C235518) / C235669 -
                           (C235131 * C235676) / C218847 +
                           (C234671 - (C235085 * C218845) / C218847) / p;
    const double C222796 = C235667 * C222776 - (C222780 * C235517) / p -
                           (C223560 * C235518) / C235669 -
                           (C223564 * C235670) / C218847 +
                           (C222683 - (C223548 * C218845) / C218847) / p;
    const double C222841 =
        (C222721 - (C223579 * C218845) / C218847) / p -
        ((C222811 * C235524) / p + (C223594 * C235674) / C218847);
    const double C235564 = C222856 * C218845;
    const double C222857 =
        -((C222856 * C235524) / p + (C223624 * C235674) / C218847);
    const double C222944 =
        (C222750 - (C223609 * C218845) / C218847) / p -
        ((C222856 * C235527) / p + (C223624 * C235676) / C218847);
    const double C228357 =
        (C228268 - (C229096 * C218845) / C218847) / p -
        ((C228342 * C235517) / p + (C229111 * C235670) / C218847);
    const double C228401 = C235667 * C222823 - (C228372 * C235524) / p -
                           (C229138 * C235518) / C235669 -
                           (C229143 * C235674) / C218847 +
                           (C228298 - (C229127 * C218845) / C218847) / p;
    const double C235612 = C228416 * C218845;
    const double C228432 = C236186 - (C228416 * C235524) / p - C236187 -
                           (C229174 * C235674) / C218847;
    const double C228503 =
        (C228327 - (C229158 * C218845) / C218847) / p -
        ((C228416 * C235527) / p + (C229174 * C235676) / C218847);
    const double C233872 =
        (C233783 - (C234610 * C218845) / C218847) / p -
        ((C233857 * C235517) / p + (C234625 * C235670) / C218847);
    const double C233916 =
        (C233812 - (C234640 * C218845) / C218847) / p -
        ((C233887 * C235524) / p + (C234655 * C235674) / C218847);
    const double C235654 = C233931 * C218845;
    const double C233946 =
        -((C233931 * C235524) / p + (C234686 * C235674) / C218847);
    const double C234017 = C236186 - (C233931 * C235527) / p - C236187 -
                           (C234686 * C235676) / C218847 +
                           (C233842 - (C234671 * C218845) / C218847) / p;
    const double C221541 = C235667 * C221308 - (C221312 * C235517) / p -
                           (C222776 * C235518) / C235669 -
                           (C222780 * C235670) / C218847 +
                           (C221313 - (C222683 * C218845) / C218847) / p;
    const double C235552 = C221367 * C218845;
    const double C221629 =
        (C221382 - (C222721 * C218845) / C218847) / p -
        ((C221367 * C235524) / p + (C222811 * C235674) / C218847);
    const double C221645 = C236064 - (C221367 * C235517) / p - C236065 -
                           (C222811 * C235670) / C218847;
    const double C235553 = C221398 * C218845;
    const double C221706 =
        -((C221398 * C235524) / p + (C222856 * C235674) / C218847);
    const double C221722 = C236067 - (C221398 * C235517) / p - C236068 -
                           (C222856 * C235670) / C218847;
    const double C221769 =
        (C221413 - (C222750 * C218845) / C218847) / p -
        ((C221398 * C235527) / p + (C222856 * C235676) / C218847);
    const double C227123 =
        (C226898 - (C228268 * C218845) / C218847) / p -
        ((C226913 * C235517) / p + (C228342 * C235670) / C218847);
    const double C235601 = C226965 * C218845;
    const double C227209 = C236064 - (C226965 * C235524) / p - C236065 -
                           (C228372 * C235674) / C218847 +
                           (C226950 - (C228298 * C218845) / C218847) / p;
    const double C227224 =
        -((C226965 * C235517) / p + (C228372 * C235670) / C218847);
    const double C235602 = C226995 * C218845;
    const double C227269 = C236067 - (C226995 * C235524) / p - C236068 -
                           (C228416 * C235674) / C218847;
    const double C227299 =
        -((C226995 * C235517) / p + (C228416 * C235670) / C218847);
    const double C227345 =
        (C226980 - (C228327 * C218845) / C218847) / p -
        ((C226995 * C235527) / p + (C228416 * C235676) / C218847);
    const double C232642 =
        (C232419 - (C233783 * C218845) / C218847) / p -
        ((C232434 * C235517) / p + (C233857 * C235670) / C218847);
    const double C235643 = C232485 * C218845;
    const double C232728 =
        (C232470 - (C233812 * C218845) / C218847) / p -
        ((C232485 * C235524) / p + (C233887 * C235674) / C218847);
    const double C232743 =
        -((C232485 * C235517) / p + (C233887 * C235670) / C218847);
    const double C235644 = C232515 * C218845;
    const double C232787 =
        -((C232515 * C235524) / p + (C233931 * C235674) / C218847);
    const double C232817 =
        -((C232515 * C235517) / p + (C233931 * C235670) / C218847);
    const double C232862 = C236067 - (C232515 * C235527) / p - C236068 -
                           (C233931 * C235676) / C218847 +
                           (C232500 - (C233842 * C218845) / C218847) / p;
    const double C218850 = C236007 - (C218851 * C235517) / p - C236008 -
                           (C221312 * C235670) / C218847 +
                           (C218867 - (C221313 * C218845) / C218847) / p;
    const double C218988 =
        -((C218851 * C235527) / p + (C221312 * C235676) / C218847);
    const double C235523 = C218900 * C218845;
    const double C218899 = C236013 - (C218900 * C235517) / p - C236014 -
                           (C221367 * C235670) / C218847;
    const double C219033 =
        (C219018 - (C221382 * C218845) / C218847) / p -
        ((C218900 * C235524) / p + (C221367 * C235674) / C218847);
    const double C219107 =
        -((C218900 * C235527) / p + (C221367 * C235676) / C218847);
    const double C235526 = C218931 * C218845;
    const double C218930 = C236015 - (C218931 * C235517) / p - C236016 -
                           (C221398 * C235670) / C218847;
    const double C219062 =
        -((C218931 * C235524) / p + (C221398 * C235674) / C218847);
    const double C219180 =
        (C219151 - (C221413 * C218845) / C218847) / p -
        ((C218931 * C235527) / p + (C221398 * C235676) / C218847);
    const double C224483 =
        (C224498 - (C226898 * C218845) / C218847) / p -
        ((C224482 * C235517) / p + (C226913 * C235670) / C218847);
    const double C224617 =
        -((C224482 * C235527) / p + (C226913 * C235676) / C218847);
    const double C235584 = C224528 * C218845;
    const double C224529 =
        -((C224528 * C235517) / p + (C226965 * C235670) / C218847);
    const double C224661 = C236013 - (C224528 * C235524) / p - C236014 -
                           (C226965 * C235674) / C218847 +
                           (C224646 - (C226950 * C218845) / C218847) / p;
    const double C224733 =
        -((C224528 * C235527) / p + (C226965 * C235676) / C218847);
    const double C235585 = C224558 * C218845;
    const double C224559 =
        -((C224558 * C235517) / p + (C226995 * C235670) / C218847);
    const double C224690 = C236015 - (C224558 * C235524) / p - C236016 -
                           (C226995 * C235674) / C218847;
    const double C224805 =
        (C224776 - (C226980 * C218845) / C218847) / p -
        ((C224558 * C235527) / p + (C226995 * C235676) / C218847);
    const double C230019 =
        (C230034 - (C232419 * C218845) / C218847) / p -
        ((C230018 * C235517) / p + (C232434 * C235670) / C218847);
    const double C230152 = C236007 - (C230018 * C235527) / p - C236008 -
                           (C232434 * C235676) / C218847;
    const double C235626 = C230064 * C218845;
    const double C230065 =
        -((C230064 * C235517) / p + (C232485 * C235670) / C218847);
    const double C230196 =
        (C230181 - (C232470 * C218845) / C218847) / p -
        ((C230064 * C235524) / p + (C232485 * C235674) / C218847);
    const double C230268 = C236013 - (C230064 * C235527) / p - C236014 -
                           (C232485 * C235676) / C218847;
    const double C235627 = C230094 * C218845;
    const double C230095 =
        -((C230094 * C235517) / p + (C232515 * C235670) / C218847);
    const double C230225 =
        -((C230094 * C235524) / p + (C232515 * C235674) / C218847);
    const double C230340 = C236015 - (C230094 * C235527) / p - C236016 -
                           (C232515 * C235676) / C218847 +
                           (C230311 - (C232500 * C218845) / C218847) / p;
    const double C143676 = C235903 - (C143693 * C235517) / p - C235904 -
                           (C218851 * C235670) / C218847 +
                           (C157802 - (C218867 * C218845) / C218847) / p;
    const double C145032 =
        -((C143693 * C235524) / p + (C218851 * C235674) / C218847);
    const double C145962 =
        -((C143693 * C235527) / p + (C218851 * C235676) / C218847);
    const double C148252 = C235908 - (C148268 * C235517) / p - C235909 -
                           (C218900 * C235670) / C218847;
    const double C149169 =
        (C158711 - (C219018 * C218845) / C218847) / p -
        ((C148268 * C235524) / p + (C218900 * C235674) / C218847);
    const double C150093 =
        -((C148268 * C235527) / p + (C218900 * C235676) / C218847);
    const double C152378 = C235912 - (C152394 * C235517) / p - C235913 -
                           (C218931 * C235670) / C218847;
    const double C153240 =
        -((C152394 * C235524) / p + (C218931 * C235674) / C218847);
    const double C153731 =
        (C159359 - (C219151 * C218845) / C218847) / p -
        ((C152394 * C235527) / p + (C218931 * C235676) / C218847);
    const double C167819 =
        (C181700 - (C224498 * C218845) / C218847) / p -
        ((C167835 * C235517) / p + (C224482 * C235670) / C218847);
    const double C169156 = C235903 - (C167835 * C235524) / p - C235904 -
                           (C224482 * C235674) / C218847;
    const double C170070 =
        -((C167835 * C235527) / p + (C224482 * C235676) / C218847);
    const double C172308 =
        -((C172323 * C235517) / p + (C224528 * C235670) / C218847);
    const double C173216 = C235908 - (C172323 * C235524) / p - C235909 -
                           (C224528 * C235674) / C218847 +
                           (C182597 - (C224646 * C218845) / C218847) / p;
    const double C174124 =
        -((C172323 * C235527) / p + (C224528 * C235676) / C218847);
    const double C176357 =
        -((C176372 * C235517) / p + (C224558 * C235670) / C218847);
    const double C177213 = C235912 - (C176372 * C235524) / p - C235913 -
                           (C224558 * C235674) / C218847;
    const double C177698 =
        (C183235 - (C224776 * C218845) / C218847) / p -
        ((C176372 * C235527) / p + (C224558 * C235676) / C218847);
    const double C191593 =
        (C205459 - (C230034 * C218845) / C218847) / p -
        ((C191609 * C235517) / p + (C230018 * C235670) / C218847);
    const double C192929 =
        -((C191609 * C235524) / p + (C230018 * C235674) / C218847);
    const double C193842 = C235903 - (C191609 * C235527) / p - C235904 -
                           (C230018 * C235676) / C218847;
    const double C196076 =
        -((C196091 * C235517) / p + (C230064 * C235670) / C218847);
    const double C196984 =
        (C206350 - (C230181 * C218845) / C218847) / p -
        ((C196091 * C235524) / p + (C230064 * C235674) / C218847);
    const double C197891 = C235908 - (C196091 * C235527) / p - C235909 -
                           (C230064 * C235676) / C218847;
    const double C200120 =
        -((C200135 * C235517) / p + (C230094 * C235670) / C218847);
    const double C200976 =
        -((C200135 * C235524) / p + (C230094 * C235674) / C218847);
    const double C201461 = C235912 - (C200135 * C235527) / p - C235913 -
                           (C230094 * C235676) / C218847 +
                           (C206984 - (C230311 * C218845) / C218847) / p;
    const double C223772 =
        C235667 * C223650 - (C223654 * C235517) / p -
        (C224090 * C235518) / C235669 - (C224094 * C235670) / C218847 +
        (3 * (C223564 - (C224048 * C218845) / C218847)) / C235521;
    const double C235573 = C223669 * C218845;
    const double C223788 =
        (3 * (C223594 - (C224063 * C218845) / C218847)) / C235521 -
        ((C223669 * C235524) / p + (C224109 * C235674) / C218847);
    const double C223890 = C236113 - (C223669 * C235517) / p - C236114 -
                           (C224109 * C235670) / C218847;
    const double C235574 = C223712 * C218845;
    const double C223832 =
        (3 * (C223624 - (C224078 * C218845) / C218847)) / C235521 -
        ((C223712 * C235527) / p + (C224124 * C235676) / C218847);
    const double C223906 = C236115 - (C223712 * C235517) / p - C236116 -
                           (C224124 * C235670) / C218847;
    const double C223921 =
        -((C223712 * C235524) / p + (C224124 * C235674) / C218847);
    const double C229318 =
        (3 * (C229111 - (C229589 * C218845) / C218847)) / C235521 -
        ((C229203 * C235517) / p + (C229635 * C235670) / C218847);
    const double C235620 = C229218 * C218845;
    const double C229333 =
        C236113 - (C229218 * C235524) / p - C236114 -
        (C229650 * C235674) / C218847 +
        (3 * (C229143 - (C229605 * C218845) / C218847)) / C235521;
    const double C229433 =
        -((C229218 * C235517) / p + (C229650 * C235670) / C218847);
    const double C235621 = C229261 * C218845;
    const double C229376 =
        (3 * (C229174 - (C229620 * C218845) / C218847)) / C235521 -
        ((C229261 * C235527) / p + (C229665 * C235676) / C218847);
    const double C229448 =
        -((C229261 * C235517) / p + (C229665 * C235670) / C218847);
    const double C229464 = C236115 - (C229261 * C235524) / p - C236116 -
                           (C229665 * C235674) / C218847;
    const double C234830 =
        (3 * (C234625 - (C235100 * C218845) / C218847)) / C235521 -
        ((C234715 * C235517) / p + (C235146 * C235670) / C218847);
    const double C235662 = C234730 * C218845;
    const double C234845 =
        (3 * (C234655 - (C235115 * C218845) / C218847)) / C235521 -
        ((C234730 * C235524) / p + (C235161 * C235674) / C218847);
    const double C234945 =
        -((C234730 * C235517) / p + (C235161 * C235670) / C218847);
    const double C235663 = C234773 * C218845;
    const double C234888 =
        C236115 - (C234773 * C235527) / p - C236116 -
        (C235176 * C235676) / C218847 +
        (3 * (C234686 - (C235131 * C218845) / C218847)) / C235521;
    const double C234960 =
        -((C234773 * C235517) / p + (C235176 * C235670) / C218847);
    const double C234975 =
        -((C234773 * C235524) / p + (C235176 * C235674) / C218847);
    const double C235565 = C222796 * C218845;
    const double C223017 =
        C236095 - (C222796 * C235517) / p - C236096 -
        (C223654 * C235670) / C218847 +
        (3 * (C222780 - (C223564 * C218845) / C218847)) / C235521;
    const double C223090 =
        -((C222796 * C235527) / p + (C223654 * C235676) / C218847);
    const double C235566 = C222841 * C218845;
    const double C223061 =
        (3 * (C222811 - (C223594 * C218845) / C218847)) / C235521 -
        ((C222841 * C235524) / p + (C223669 * C235674) / C218847);
    const double C223105 =
        -((C222841 * C235527) / p + (C223669 * C235676) / C218847);
    const double C223136 = C236097 - (C222841 * C235517) / p - C236098 -
                           (C223669 * C235670) / C218847;
    const double C235771 = C235564 / C218847;
    const double C235567 = C222944 * C218845;
    const double C223120 =
        -((C222944 * C235524) / p + (C223712 * C235674) / C218847);
    const double C223152 =
        (3 * (C222856 - (C223624 * C218845) / C218847)) / C235521 -
        ((C222944 * C235527) / p + (C223712 * C235676) / C218847);
    const double C223182 = C236099 - (C222944 * C235517) / p - C236100 -
                           (C223712 * C235670) / C218847;
    const double C235613 = C228357 * C218845;
    const double C228574 =
        (3 * (C228342 - (C229111 * C218845) / C218847)) / C235521 -
        ((C228357 * C235517) / p + (C229203 * C235670) / C218847);
    const double C228646 =
        -((C228357 * C235527) / p + (C229203 * C235676) / C218847);
    const double C235614 = C228401 * C218845;
    const double C228617 =
        C236097 - (C228401 * C235524) / p - C236098 -
        (C229218 * C235674) / C218847 +
        (3 * (C228372 - (C229143 * C218845) / C218847)) / C235521;
    const double C228661 =
        -((C228401 * C235527) / p + (C229218 * C235676) / C218847);
    const double C228692 =
        -((C228401 * C235517) / p + (C229218 * C235670) / C218847);
    const double C235845 = C235612 / C218847;
    const double C235615 = C228503 * C218845;
    const double C228677 = C236099 - (C228503 * C235524) / p - C236100 -
                           (C229261 * C235674) / C218847;
    const double C228707 =
        (3 * (C228416 - (C229174 * C218845) / C218847)) / C235521 -
        ((C228503 * C235527) / p + (C229261 * C235676) / C218847);
    const double C228736 =
        -((C228503 * C235517) / p + (C229261 * C235670) / C218847);
    const double C235655 = C233872 * C218845;
    const double C234088 =
        (3 * (C233857 - (C234625 * C218845) / C218847)) / C235521 -
        ((C233872 * C235517) / p + (C234715 * C235670) / C218847);
    const double C234161 = C236095 - (C233872 * C235527) / p - C236096 -
                           (C234715 * C235676) / C218847;
    const double C235656 = C233916 * C218845;
    const double C234131 =
        (3 * (C233887 - (C234655 * C218845) / C218847)) / C235521 -
        ((C233916 * C235524) / p + (C234730 * C235674) / C218847);
    const double C234177 = C236097 - (C233916 * C235527) / p - C236098 -
                           (C234730 * C235676) / C218847;
    const double C234207 =
        -((C233916 * C235517) / p + (C234730 * C235670) / C218847);
    const double C235888 = C235654 / C218847;
    const double C235657 = C234017 * C218845;
    const double C234192 =
        -((C234017 * C235524) / p + (C234773 * C235674) / C218847);
    const double C234222 =
        C236099 - (C234017 * C235527) / p - C236100 -
        (C234773 * C235676) / C218847 +
        (3 * (C233931 - (C234686 * C218845) / C218847)) / C235521;
    const double C234251 =
        -((C234017 * C235517) / p + (C234773 * C235670) / C218847);
    const double C235551 = C221541 * C218845;
    const double C221557 =
        C236062 - (C221541 * C235517) / p - C236063 -
        (C222796 * C235670) / C218847 +
        (3 * (C221312 - (C222780 * C218845) / C218847)) / C235521;
    const double C221753 =
        -((C221541 * C235524) / p + (C222796 * C235674) / C218847);
    const double C221814 =
        -((C221541 * C235527) / p + (C222796 * C235676) / C218847);
    const double C235745 = C235552 / C218847;
    const double C235554 = C221629 * C218845;
    const double C221661 =
        (3 * (C221367 - (C222811 * C218845) / C218847)) / C235521 -
        ((C221629 * C235524) / p + (C222841 * C235674) / C218847);
    const double C221738 = C236069 - (C221629 * C235517) / p - C236070 -
                           (C222841 * C235670) / C218847;
    const double C221915 =
        -((C221629 * C235527) / p + (C222841 * C235676) / C218847);
    const double C235747 = C235553 / C218847;
    const double C235555 = C221769 * C218845;
    const double C221830 = C236071 - (C221769 * C235517) / p - C236072 -
                           (C222944 * C235670) / C218847;
    const double C221930 =
        -((C221769 * C235524) / p + (C222944 * C235674) / C218847);
    const double C235600 = C227123 * C218845;
    const double C227138 =
        (3 * (C226913 - (C228342 * C218845) / C218847)) / C235521 -
        ((C227123 * C235517) / p + (C228357 * C235670) / C218847);
    const double C227330 = C236062 - (C227123 * C235524) / p - C236063 -
                           (C228357 * C235674) / C218847;
    const double C227389 =
        -((C227123 * C235527) / p + (C228357 * C235676) / C218847);
    const double C235833 = C235601 / C218847;
    const double C235603 = C227209 * C218845;
    const double C227253 =
        C236069 - (C227209 * C235524) / p - C236070 -
        (C228401 * C235674) / C218847 +
        (3 * (C226965 - (C228372 * C218845) / C218847)) / C235521;
    const double C227314 =
        -((C227209 * C235517) / p + (C228401 * C235670) / C218847);
    const double C227489 =
        -((C227209 * C235527) / p + (C228401 * C235676) / C218847);
    const double C235834 = C235602 / C218847;
    const double C235604 = C227345 * C218845;
    const double C227404 =
        -((C227345 * C235517) / p + (C228503 * C235670) / C218847);
    const double C227505 = C236071 - (C227345 * C235524) / p - C236072 -
                           (C228503 * C235674) / C218847;
    const double C235642 = C232642 * C218845;
    const double C232657 =
        (3 * (C232434 - (C233857 * C218845) / C218847)) / C235521 -
        ((C232642 * C235517) / p + (C233872 * C235670) / C218847);
    const double C232847 =
        -((C232642 * C235524) / p + (C233872 * C235674) / C218847);
    const double C232907 = C236062 - (C232642 * C235527) / p - C236063 -
                           (C233872 * C235676) / C218847;
    const double C235877 = C235643 / C218847;
    const double C235645 = C232728 * C218845;
    const double C232772 =
        (3 * (C232485 - (C233887 * C218845) / C218847)) / C235521 -
        ((C232728 * C235524) / p + (C233916 * C235674) / C218847);
    const double C232832 =
        -((C232728 * C235517) / p + (C233916 * C235670) / C218847);
    const double C233008 = C236069 - (C232728 * C235527) / p - C236070 -
                           (C233916 * C235676) / C218847;
    const double C235878 = C235644 / C218847;
    const double C235646 = C232862 * C218845;
    const double C232922 =
        -((C232862 * C235517) / p + (C234017 * C235670) / C218847);
    const double C233023 =
        -((C232862 * C235524) / p + (C234017 * C235674) / C218847);
    const double C235529 = C218850 * C218845;
    const double C219314 =
        C236017 - (C218850 * C235517) / p - C236018 -
        (C221541 * C235670) / C218847 +
        (3 * (C218851 - (C221312 * C218845) / C218847)) / C235521;
    const double C219410 =
        -((C218850 * C235524) / p + (C221541 * C235674) / C218847);
    const double C219440 =
        -((C218850 * C235527) / p + (C221541 * C235676) / C218847);
    const double C235673 = C235523 / C218847;
    const double C235538 = C219033 * C218845;
    const double C219526 = C236022 - (C219033 * C235517) / p - C236023 -
                           (C221629 * C235670) / C218847;
    const double C219773 =
        -((C219033 * C235527) / p + (C221629 * C235676) / C218847);
    const double C235675 = C235526 / C218847;
    const double C235540 = C219180 * C218845;
    const double C219665 = C236029 - (C219180 * C235517) / p - C236030 -
                           (C221769 * C235670) / C218847;
    const double C219904 =
        -((C219180 * C235524) / p + (C221769 * C235674) / C218847);
    const double C235586 = C224483 * C218845;
    const double C224933 =
        (3 * (C224482 - (C226913 * C218845) / C218847)) / C235521 -
        ((C224483 * C235517) / p + (C227123 * C235670) / C218847);
    const double C225029 = C236017 - (C224483 * C235524) / p - C236018 -
                           (C227123 * C235674) / C218847;
    const double C225059 =
        -((C224483 * C235527) / p + (C227123 * C235676) / C218847);
    const double C235807 = C235584 / C218847;
    const double C235588 = C224661 * C218845;
    const double C225146 =
        -((C224661 * C235517) / p + (C227209 * C235670) / C218847);
    const double C225386 =
        -((C224661 * C235527) / p + (C227209 * C235676) / C218847);
    const double C235808 = C235585 / C218847;
    const double C235590 = C224805 * C218845;
    const double C225282 =
        -((C224805 * C235517) / p + (C227345 * C235670) / C218847);
    const double C225515 = C236029 - (C224805 * C235524) / p - C236030 -
                           (C227345 * C235674) / C218847;
    const double C235628 = C230019 * C218845;
    const double C230468 =
        (3 * (C230018 - (C232434 * C218845) / C218847)) / C235521 -
        ((C230019 * C235517) / p + (C232642 * C235670) / C218847);
    const double C230562 =
        -((C230019 * C235524) / p + (C232642 * C235674) / C218847);
    const double C230592 = C236017 - (C230019 * C235527) / p - C236018 -
                           (C232642 * C235676) / C218847;
    const double C235860 = C235626 / C218847;
    const double C235630 = C230196 * C218845;
    const double C230677 =
        -((C230196 * C235517) / p + (C232728 * C235670) / C218847);
    const double C230917 = C236022 - (C230196 * C235527) / p - C236023 -
                           (C232728 * C235676) / C218847;
    const double C235861 = C235627 / C218847;
    const double C235632 = C230340 * C218845;
    const double C230814 =
        -((C230340 * C235517) / p + (C232862 * C235670) / C218847);
    const double C231046 =
        -((C230340 * C235524) / p + (C232862 * C235674) / C218847);
    const double C143659 =
        C235901 - (C143676 * C235517) / p - C235902 -
        (C218850 * C235670) / C218847 +
        (3 * (C143693 - (C218851 * C218845) / C218847)) / C235521;
    const double C146843 =
        -((C143676 * C235524) / p + (C218850 * C235674) / C218847);
    const double C147305 =
        -((C143676 * C235527) / p + (C218850 * C235676) / C218847);
    const double C147766 =
        -((C145962 * C235524) / p + (C218988 * C235674) / C218847);
    const double C150974 = C235910 - (C149169 * C235517) / p - C235911 -
                           (C219033 * C235670) / C218847;
    const double C151894 =
        -((C149169 * C235527) / p + (C219033 * C235676) / C218847);
    const double C151436 = C235667 * C161321 - (C150093 * C235517) / p -
                           (C219103 * C235518) / C235669 -
                           (C219107 * C235670) / C218847;
    const double C154608 = C235914 - (C153240 * C235517) / p - C235915 -
                           (C219062 * C235670) / C218847;
    const double C155070 = C235916 - (C153731 * C235517) / p - C235917 -
                           (C219180 * C235670) / C218847;
    const double C155530 =
        -((C153731 * C235524) / p + (C219180 * C235674) / C218847);
    const double C167803 =
        (3 * (C167835 - (C224482 * C218845) / C218847)) / C235521 -
        ((C167819 * C235517) / p + (C224483 * C235670) / C218847);
    const double C170936 = C235901 - (C167819 * C235524) / p - C235902 -
                           (C224483 * C235674) / C218847;
    const double C171385 =
        -((C167819 * C235527) / p + (C224483 * C235676) / C218847);
    const double C171833 = C235667 * C159310 - (C170070 * C235524) / p -
                           (C224612 * C235518) / C235669 -
                           (C224617 * C235674) / C218847;
    const double C174990 =
        -((C173216 * C235517) / p + (C224661 * C235670) / C218847);
    const double C175884 =
        -((C173216 * C235527) / p + (C224661 * C235676) / C218847);
    const double C175439 =
        -((C174124 * C235517) / p + (C224733 * C235670) / C218847);
    const double C178560 =
        -((C177213 * C235517) / p + (C224690 * C235670) / C218847);
    const double C179009 =
        -((C177698 * C235517) / p + (C224805 * C235670) / C218847);
    const double C179456 = C235916 - (C177698 * C235524) / p - C235917 -
                           (C224805 * C235674) / C218847;
    const double C191577 =
        (3 * (C191609 - (C230018 * C218845) / C218847)) / C235521 -
        ((C191593 * C235517) / p + (C230019 * C235670) / C218847);
    const double C194707 =
        -((C191593 * C235524) / p + (C230019 * C235674) / C218847);
    const double C195155 = C235901 - (C191593 * C235527) / p - C235902 -
                           (C230019 * C235676) / C218847;
    const double C195602 =
        -((C193842 * C235524) / p + (C230152 * C235674) / C218847);
    const double C198756 =
        -((C196984 * C235517) / p + (C230196 * C235670) / C218847);
    const double C199648 = C235910 - (C196984 * C235527) / p - C235911 -
                           (C230196 * C235676) / C218847;
    const double C199204 =
        -((C197891 * C235517) / p + (C230268 * C235670) / C218847);
    const double C202322 =
        -((C200976 * C235517) / p + (C230225 * C235670) / C218847);
    const double C202770 =
        -((C201461 * C235517) / p + (C230340 * C235670) / C218847);
    const double C203216 =
        -((C201461 * C235524) / p + (C230340 * C235674) / C218847);
    const double C235795 = C235573 / C218847;
    const double C235796 = C235574 / C218847;
    const double C235854 = C235620 / C218847;
    const double C235855 = C235621 / C218847;
    const double C235896 = C235662 / C218847;
    const double C235897 = C235663 / C218847;
    const double C235776 = C235565 / C218847;
    const double C235568 = C223017 * C218845;
    const double C223226 = C236101 - (C223017 * C235517) / p - C236102 -
                           (C223772 * C235670) / C218847 +
                           (2 * (C222796 - (C223654 * C218845) / C218847)) / p;
    const double C223257 =
        -((C223017 * C235527) / p + (C223772 * C235676) / C218847);
    const double C223286 =
        -((C223017 * C235524) / p + (C223772 * C235674) / C218847);
    const double C235778 = C235566 / C218847;
    const double C235569 = C223061 * C218845;
    const double C223242 = C236103 - (C223061 * C235517) / p - C236104 -
                           (C223788 * C235670) / C218847;
    const double C223346 =
        -((C223061 * C235527) / p + (C223788 * C235676) / C218847);
    const double C236066 = C221398 - C235771;
    const double C235779 = C235567 / C218847;
    const double C235570 = C223152 * C218845;
    const double C223302 = C236105 - (C223152 * C235517) / p - C236106 -
                           (C223832 * C235670) / C218847;
    const double C223376 =
        -((C223152 * C235524) / p + (C223832 * C235674) / C218847);
    const double C235846 = C235613 / C218847;
    const double C235616 = C228574 * C218845;
    const double C228779 =
        (2 * (C228357 - (C229203 * C218845) / C218847)) / p -
        ((C228574 * C235517) / p + (C229318 * C235670) / C218847);
    const double C228809 =
        -((C228574 * C235527) / p + (C229318 * C235676) / C218847);
    const double C228839 = C236101 - (C228574 * C235524) / p - C236102 -
                           (C229318 * C235674) / C218847;
    const double C235847 = C235614 / C218847;
    const double C235617 = C228617 * C218845;
    const double C228794 =
        -((C228617 * C235517) / p + (C229333 * C235670) / C218847);
    const double C228898 =
        -((C228617 * C235527) / p + (C229333 * C235676) / C218847);
    const double C236178 = C226995 - C235845;
    const double C235848 = C235615 / C218847;
    const double C235618 = C228707 * C218845;
    const double C228854 =
        -((C228707 * C235517) / p + (C229376 * C235670) / C218847);
    const double C228928 = C236105 - (C228707 * C235524) / p - C236106 -
                           (C229376 * C235674) / C218847;
    const double C235889 = C235655 / C218847;
    const double C235658 = C234088 * C218845;
    const double C234294 =
        (2 * (C233872 - (C234715 * C218845) / C218847)) / p -
        ((C234088 * C235517) / p + (C234830 * C235670) / C218847);
    const double C234325 = C236101 - (C234088 * C235527) / p - C236102 -
                           (C234830 * C235676) / C218847;
    const double C234354 =
        -((C234088 * C235524) / p + (C234830 * C235674) / C218847);
    const double C235890 = C235656 / C218847;
    const double C235659 = C234131 * C218845;
    const double C234309 =
        -((C234131 * C235517) / p + (C234845 * C235670) / C218847);
    const double C234414 = C236103 - (C234131 * C235527) / p - C236104 -
                           (C234845 * C235676) / C218847;
    const double C236222 = C232515 - C235888;
    const double C235891 = C235657 / C218847;
    const double C235660 = C234222 * C218845;
    const double C234369 =
        -((C234222 * C235517) / p + (C234888 * C235670) / C218847);
    const double C234443 =
        -((C234222 * C235524) / p + (C234888 * C235674) / C218847);
    const double C235743 = C235551 / C218847;
    const double C235556 = C221557 * C218845;
    const double C221989 =
        -((C221557 * C235524) / p + (C223017 * C235674) / C218847);
    const double C222018 =
        -((C221557 * C235527) / p + (C223017 * C235676) / C218847);
    const double C236024 = C218900 - C235745;
    const double C235748 = C235554 / C218847;
    const double C235557 = C221661 * C218845;
    const double C222034 = C236076 - (C221661 * C235517) / p - C236077 -
                           (C223061 * C235670) / C218847;
    const double C222190 =
        -((C221661 * C235527) / p + (C223061 * C235676) / C218847);
    const double C236027 = C218931 - C235747;
    const double C235751 = C235555 / C218847;
    const double C235832 = C235600 / C218847;
    const double C235605 = C227138 * C218845;
    const double C227564 = C236073 - (C227138 * C235524) / p - C236074 -
                           (C228574 * C235674) / C218847;
    const double C227593 =
        -((C227138 * C235527) / p + (C228574 * C235676) / C218847);
    const double C236165 = C224528 - C235833;
    const double C235835 = C235603 / C218847;
    const double C235606 = C227253 * C218845;
    const double C227608 =
        -((C227253 * C235517) / p + (C228617 * C235670) / C218847);
    const double C227758 =
        -((C227253 * C235527) / p + (C228617 * C235676) / C218847);
    const double C236166 = C224558 - C235834;
    const double C235836 = C235604 / C218847;
    const double C235876 = C235642 / C218847;
    const double C235647 = C232657 * C218845;
    const double C233081 =
        -((C232657 * C235524) / p + (C234088 * C235674) / C218847);
    const double C233111 = C236073 - (C232657 * C235527) / p - C236074 -
                           (C234088 * C235676) / C218847;
    const double C236211 = C230064 - C235877;
    const double C235879 = C235645 / C218847;
    const double C235648 = C232772 * C218845;
    const double C233126 =
        -((C232772 * C235517) / p + (C234131 * C235670) / C218847);
    const double C233276 = C236076 - (C232772 * C235527) / p - C236077 -
                           (C234131 * C235676) / C218847;
    const double C236212 = C230094 - C235878;
    const double C235880 = C235646 / C218847;
    const double C235685 = C235529 / C218847;
    const double C235530 = C219314 * C218845;
    const double C219395 =
        -((C219314 * C235524) / p + (C221557 * C235674) / C218847);
    const double C219425 =
        -((C219314 * C235527) / p + (C221557 * C235676) / C218847);
    const double C235906 = C148268 - C235673;
    const double C235693 = C235538 / C218847;
    const double C235907 = C152394 - C235675;
    const double C235696 = C235540 / C218847;
    const double C235809 = C235586 / C218847;
    const double C235587 = C224933 * C218845;
    const double C225013 = C236019 - (C224933 * C235524) / p - C236020 -
                           (C227138 * C235674) / C218847;
    const double C225044 =
        -((C224933 * C235527) / p + (C227138 * C235676) / C218847);
    const double C236130 = C172323 - C235807;
    const double C235813 = C235588 / C218847;
    const double C236131 = C176372 - C235808;
    const double C235815 = C235590 / C218847;
    const double C235862 = C235628 / C218847;
    const double C235629 = C230468 * C218845;
    const double C230547 =
        -((C230468 * C235524) / p + (C232657 * C235674) / C218847);
    const double C230577 = C236019 - (C230468 * C235527) / p - C236020 -
                           (C232657 * C235676) / C218847;
    const double C236194 = C196091 - C235860;
    const double C235864 = C235630 / C218847;
    const double C236195 = C200135 - C235861;
    const double C235866 = C235632 / C218847;
    const double C157895 =
        -((C143659 * C235524) / p + (C219314 * C235674) / C218847);
    const double C157943 =
        -((C143659 * C235527) / p + (C219314 * C235676) / C218847);
    const double C158589 =
        -((C147305 * C235524) / p + (C219440 * C235674) / C218847);
    const double C160672 = C235942 - (C151894 * C235517) / p - C235943 -
                           (C219773 * C235670) / C218847;
    const double C162540 = C235952 - (C155530 * C235517) / p - C235953 -
                           (C219904 * C235670) / C218847;
    const double C181787 = C235922 - (C167803 * C235524) / p - C235923 -
                           (C224933 * C235674) / C218847;
    const double C181832 =
        -((C167803 * C235527) / p + (C224933 * C235676) / C218847);
    const double C182482 = C236136 - (C171385 * C235524) / p - C236137 -
                           (C225059 * C235674) / C218847;
    const double C184534 =
        -((C175884 * C235517) / p + (C225386 * C235670) / C218847);
    const double C186383 =
        -((C179456 * C235517) / p + (C225515 * C235670) / C218847);
    const double C205546 =
        -((C191577 * C235524) / p + (C230468 * C235674) / C218847);
    const double C205591 = C235922 - (C191577 * C235527) / p - C235923 -
                           (C230468 * C235676) / C218847;
    const double C206235 =
        -((C195155 * C235524) / p + (C230592 * C235674) / C218847);
    const double C208274 =
        -((C199648 * C235517) / p + (C230917 * C235670) / C218847);
    const double C210107 =
        -((C203216 * C235517) / p + (C231046 * C235670) / C218847);
    const double C236107 = C222841 - C235795;
    const double C236108 = C222944 - C235796;
    const double C236188 = C228401 - C235854;
    const double C236189 = C228503 - C235855;
    const double C236230 = C233916 - C235896;
    const double C236231 = C234017 - C235897;
    const double C236075 = C221541 - C235776;
    const double C235782 = C235568 / C218847;
    const double C236078 = C221629 - C235778;
    const double C235783 = C235569 / C218847;
    const double C221691 = C236066 / C235521 - ((C221706 * C235524) / p +
                                                (C222857 * C235674) / C218847);
    const double C221785 =
        (3 * C236066) / C235521 -
        ((C221769 * C235527) / p + (C222944 * C235676) / C218847);
    const double C236079 = C221769 - C235779;
    const double C235784 = C235570 / C218847;
    const double C236179 = C227123 - C235846;
    const double C235849 = C235616 / C218847;
    const double C236180 = C227209 - C235847;
    const double C235850 = C235617 / C218847;
    const double C227284 = C235667 * C227264 - (C227269 * C235524) / p -
                           (C228427 * C235518) / C235669 -
                           (C228432 * C235674) / C218847 + C236178 / C235521;
    const double C227374 =
        (3 * C236178) / C235521 -
        ((C227345 * C235527) / p + (C228503 * C235676) / C218847);
    const double C236181 = C227345 - C235848;
    const double C235851 = C235618 / C218847;
    const double C236223 = C232642 - C235889;
    const double C235892 = C235658 / C218847;
    const double C236224 = C232728 - C235890;
    const double C235893 = C235659 / C218847;
    const double C232802 = C236222 / C235521 - ((C232787 * C235524) / p +
                                                (C233946 * C235674) / C218847);
    const double C232891 = C236071 - (C232862 * C235527) / p - C236072 -
                           (C234017 * C235676) / C218847 +
                           (3 * C236222) / C235521;
    const double C236225 = C232862 - C235891;
    const double C235894 = C235660 / C218847;
    const double C236021 = C218850 - C235743;
    const double C235753 = C235556 / C218847;
    const double C219541 = C235667 * C218895 - (C218899 * C235517) / p -
                           (C221641 * C235518) / C235669 -
                           (C221645 * C235670) / C218847 + C236024 / C235521;
    const double C219558 =
        (3 * C236024) / C235521 -
        ((C219033 * C235524) / p + (C221629 * C235674) / C218847);
    const double C236028 = C219033 - C235748;
    const double C235754 = C235557 / C218847;
    const double C236254 = C236027 / C235521;
    const double C219682 =
        (3 * C236027) / C235521 -
        ((C219180 * C235527) / p + (C221769 * C235676) / C218847);
    const double C236033 = C219180 - C235751;
    const double C236164 = C224483 - C235832;
    const double C235837 = C235605 / C218847;
    const double C225161 = C236165 / C235521 - ((C224529 * C235517) / p +
                                                (C227224 * C235670) / C218847);
    const double C225176 = C236022 - (C224661 * C235524) / p - C236023 -
                           (C227209 * C235674) / C218847 +
                           (3 * C236165) / C235521;
    const double C236167 = C224661 - C235835;
    const double C235838 = C235606 / C218847;
    const double C236304 = C236166 / C235521;
    const double C225297 =
        (3 * C236166) / C235521 -
        ((C224805 * C235527) / p + (C227345 * C235676) / C218847);
    const double C236168 = C224805 - C235836;
    const double C236210 = C230019 - C235876;
    const double C235881 = C235647 / C218847;
    const double C230693 = C236211 / C235521 - ((C230065 * C235517) / p +
                                                (C232743 * C235670) / C218847);
    const double C230708 =
        (3 * C236211) / C235521 -
        ((C230196 * C235524) / p + (C232728 * C235674) / C218847);
    const double C236213 = C230196 - C235879;
    const double C235882 = C235648 / C218847;
    const double C236340 = C236212 / C235521;
    const double C230829 = C236029 - (C230340 * C235527) / p - C236030 -
                           (C232862 * C235676) / C218847 +
                           (3 * C236212) / C235521;
    const double C236214 = C230340 - C235880;
    const double C235924 = C143676 - C235685;
    const double C235688 = C235530 / C218847;
    const double C145014 = C235667 * C158677 - (C148252 * C235517) / p -
                           (C218895 * C235518) / C235669 -
                           (C218899 * C235670) / C218847 + C235906 / C235521;
    const double C149152 =
        (3 * C235906) / C235521 -
        ((C149169 * C235524) / p + (C219033 * C235674) / C218847);
    const double C235932 = C149169 - C235693;
    const double C236236 = C235907 / C235521;
    const double C153714 =
        (3 * C235907) / C235521 -
        ((C153731 * C235527) / p + (C219180 * C235676) / C218847);
    const double C235936 = C153731 - C235696;
    const double C236132 = C167819 - C235809;
    const double C235810 = C235587 / C218847;
    const double C169139 = C236130 / C235521 - ((C172308 * C235517) / p +
                                                (C224529 * C235670) / C218847);
    const double C173200 = C235910 - (C173216 * C235524) / p - C235911 -
                           (C224661 * C235674) / C218847 +
                           (3 * C236130) / C235521;
    const double C236138 = C173216 - C235813;
    const double C236290 = C236131 / C235521;
    const double C177682 =
        (3 * C236131) / C235521 -
        ((C177698 * C235527) / p + (C224805 * C235676) / C218847);
    const double C236140 = C177698 - C235815;
    const double C236196 = C191593 - C235862;
    const double C235863 = C235629 / C218847;
    const double C192912 = C236194 / C235521 - ((C196076 * C235517) / p +
                                                (C230065 * C235670) / C218847);
    const double C196968 =
        (3 * C236194) / C235521 -
        ((C196984 * C235524) / p + (C230196 * C235674) / C218847);
    const double C236198 = C196984 - C235864;
    const double C236326 = C236195 / C235521;
    const double C201445 = C235916 - (C201461 * C235527) / p - C235917 -
                           (C230340 * C235676) / C218847 +
                           (3 * C236195) / C235521;
    const double C236200 = C201461 - C235866;
    const double C158574 =
        -((C157943 * C235524) / p + (C219425 * C235674) / C218847);
    const double C182467 = C236134 - (C181832 * C235524) / p - C236135 -
                           (C225044 * C235674) / C218847;
    const double C206220 =
        -((C205591 * C235524) / p + (C230577 * C235674) / C218847);
    const double C223331 = (2 * C236107) / p - ((C223061 * C235524) / p +
                                                (C223788 * C235674) / C218847);
    const double C223392 = C235667 * C223132 - (C223136 * C235517) / p -
                           (C223886 * C235518) / C235669 -
                           (C223890 * C235670) / C218847 + C236107 / C235521;
    const double C236275 = C236108 / C235521;
    const double C223438 = (2 * C236108) / p - ((C223152 * C235527) / p +
                                                (C223832 * C235676) / C218847);
    const double C228883 = C236103 - (C228617 * C235524) / p - C236104 -
                           (C229333 * C235674) / C218847 + (2 * C236188) / p;
    const double C228943 = C236188 / C235521 - ((C228692 * C235517) / p +
                                                (C229433 * C235670) / C218847);
    const double C236321 = C236189 / C235521;
    const double C228989 = (2 * C236189) / p - ((C228707 * C235527) / p +
                                                (C229376 * C235676) / C218847);
    const double C234398 = (2 * C236230) / p - ((C234131 * C235524) / p +
                                                (C234845 * C235674) / C218847);
    const double C234458 = C236230 / C235521 - ((C234207 * C235517) / p +
                                                (C234945 * C235670) / C218847);
    const double C236357 = C236231 / C235521;
    const double C234503 = C236105 - (C234222 * C235527) / p - C236106 -
                           (C234888 * C235676) / C218847 + (2 * C236231) / p;
    const double C221960 = C236073 - (C221557 * C235517) / p - C236074 -
                           (C223017 * C235670) / C218847 + (2 * C236075) / p;
    const double C222065 = C236075 / C235521 - ((C221814 * C235527) / p +
                                                (C223090 * C235676) / C218847);
    const double C236084 = C221557 - C235782;
    const double C236267 = C236078 / C235521;
    const double C222050 = (2 * C236078) / p - ((C221661 * C235524) / p +
                                                (C223061 * C235674) / C218847);
    const double C236085 = C221661 - C235783;
    const double C235558 = C221785 * C218845;
    const double C222129 = C236080 - (C221785 * C235517) / p - C236081 -
                           (C223152 * C235670) / C218847;
    const double C222219 =
        -((C221785 * C235524) / p + (C223152 * C235674) / C218847);
    const double C236268 = C236079 / C235521;
    const double C222145 = (2 * C236079) / p - ((C221785 * C235527) / p +
                                                (C223152 * C235676) / C218847);
    const double C236086 = C221785 - C235784;
    const double C227534 = (2 * C236179) / p - ((C227138 * C235517) / p +
                                                (C228574 * C235670) / C218847);
    const double C227639 = C236179 / C235521 - ((C227389 * C235527) / p +
                                                (C228646 * C235676) / C218847);
    const double C236182 = C227138 - C235849;
    const double C236315 = C236180 / C235521;
    const double C227623 = C236076 - (C227253 * C235524) / p - C236077 -
                           (C228617 * C235674) / C218847 + (2 * C236180) / p;
    const double C236183 = C227253 - C235850;
    const double C235607 = C227374 * C218845;
    const double C227699 =
        -((C227374 * C235517) / p + (C228707 * C235670) / C218847);
    const double C227788 = C236080 - (C227374 * C235524) / p - C236081 -
                           (C228707 * C235674) / C218847;
    const double C236316 = C236181 / C235521;
    const double C227714 = (2 * C236181) / p - ((C227374 * C235527) / p +
                                                (C228707 * C235676) / C218847);
    const double C236184 = C227374 - C235851;
    const double C233052 = (2 * C236223) / p - ((C232657 * C235517) / p +
                                                (C234088 * C235670) / C218847);
    const double C233156 = C235667 * C232901 - (C232907 * C235527) / p -
                           (C234155 * C235518) / C235669 -
                           (C234161 * C235676) / C218847 + C236223 / C235521;
    const double C236226 = C232657 - C235892;
    const double C236351 = C236224 / C235521;
    const double C233141 = (2 * C236224) / p - ((C232772 * C235524) / p +
                                                (C234131 * C235674) / C218847);
    const double C236227 = C232772 - C235893;
    const double C235649 = C232891 * C218845;
    const double C233216 =
        -((C232891 * C235517) / p + (C234222 * C235670) / C218847);
    const double C233305 =
        -((C232891 * C235524) / p + (C234222 * C235674) / C218847);
    const double C236352 = C236225 / C235521;
    const double C233231 = C236080 - (C232891 * C235527) / p - C236081 -
                           (C234222 * C235676) / C218847 + (2 * C236225) / p;
    const double C236228 = C232891 - C235894;
    const double C236256 = C236021 / C235521;
    const double C219345 = C236019 - (C219314 * C235517) / p - C236020 -
                           (C221557 * C235670) / C218847 + (2 * C236021) / p;
    const double C236036 = C219314 - C235753;
    const double C235539 = C219558 * C218845;
    const double C219557 = C236025 - (C219558 * C235517) / p - C236026 -
                           (C221661 * C235670) / C218847;
    const double C219831 =
        -((C219558 * C235527) / p + (C221661 * C235676) / C218847);
    const double C236255 = C236028 / C235521;
    const double C219816 = (2 * C236028) / p - ((C219558 * C235524) / p +
                                                (C221661 * C235674) / C218847);
    const double C236037 = C219558 - C235754;
    const double C219575 =
        C236254 - ((C219062 * C235524) / p + (C221706 * C235674) / C218847);
    const double C219590 = C235667 * C218926 - (C218930 * C235517) / p -
                           (C221718 * C235518) / C235669 -
                           (C221722 * C235670) / C218847 + C236254;
    const double C235541 = C219682 * C218845;
    const double C219681 = C236031 - (C219682 * C235517) / p - C236032 -
                           (C221785 * C235670) / C218847;
    const double C219919 =
        -((C219682 * C235524) / p + (C221785 * C235674) / C218847);
    const double C236257 = C236033 / C235521;
    const double C220038 = (2 * C236033) / p - ((C219682 * C235527) / p +
                                                (C221785 * C235676) / C218847);
    const double C236306 = C236164 / C235521;
    const double C224962 = (2 * C236164) / p - ((C224933 * C235517) / p +
                                                (C227138 * C235670) / C218847);
    const double C236169 = C224933 - C235837;
    const double C235589 = C225176 * C218845;
    const double C225177 =
        -((C225176 * C235517) / p + (C227253 * C235670) / C218847);
    const double C225444 =
        -((C225176 * C235527) / p + (C227253 * C235676) / C218847);
    const double C236305 = C236167 / C235521;
    const double C225429 = C236025 - (C225176 * C235524) / p - C236026 -
                           (C227253 * C235674) / C218847 + (2 * C236167) / p;
    const double C236170 = C225176 - C235838;
    const double C225192 = C235667 * C219206 - (C224690 * C235524) / p -
                           (C227264 * C235518) / C235669 -
                           (C227269 * C235674) / C218847 + C236304;
    const double C225209 =
        C236304 - ((C224559 * C235517) / p + (C227299 * C235670) / C218847);
    const double C235591 = C225297 * C218845;
    const double C225298 =
        -((C225297 * C235517) / p + (C227374 * C235670) / C218847);
    const double C225530 = C236031 - (C225297 * C235524) / p - C236032 -
                           (C227374 * C235674) / C218847;
    const double C236307 = C236168 / C235521;
    const double C225645 = (2 * C236168) / p - ((C225297 * C235527) / p +
                                                (C227374 * C235676) / C218847);
    const double C236342 = C236210 / C235521;
    const double C230497 = (2 * C236210) / p - ((C230468 * C235517) / p +
                                                (C232657 * C235670) / C218847);
    const double C236215 = C230468 - C235881;
    const double C235631 = C230708 * C218845;
    const double C230709 =
        -((C230708 * C235517) / p + (C232772 * C235670) / C218847);
    const double C230975 = C236025 - (C230708 * C235527) / p - C236026 -
                           (C232772 * C235676) / C218847;
    const double C236341 = C236213 / C235521;
    const double C230960 = (2 * C236213) / p - ((C230708 * C235524) / p +
                                                (C232772 * C235674) / C218847);
    const double C236216 = C230708 - C235882;
    const double C230724 =
        C236340 - ((C230225 * C235524) / p + (C232787 * C235674) / C218847);
    const double C230740 =
        C236340 - ((C230095 * C235517) / p + (C232817 * C235670) / C218847);
    const double C235633 = C230829 * C218845;
    const double C230830 =
        -((C230829 * C235517) / p + (C232891 * C235670) / C218847);
    const double C231061 =
        -((C230829 * C235524) / p + (C232891 * C235674) / C218847);
    const double C236343 = C236214 / C235521;
    const double C231176 = C236031 - (C230829 * C235527) / p - C236032 -
                           (C232891 * C235676) / C218847 + (2 * C236214) / p;
    const double C236240 = C235924 / C235521;
    const double C157755 = C235922 - (C143659 * C235517) / p - C235923 -
                           (C219314 * C235670) / C218847 + (2 * C235924) / p;
    const double C235929 = C143659 - C235688;
    const double C158789 =
        -((C145014 * C235527) / p + (C219541 * C235676) / C218847);
    const double C160505 = C235940 - (C149152 * C235517) / p - C235941 -
                           (C219558 * C235670) / C218847;
    const double C160856 =
        -((C149152 * C235527) / p + (C219558 * C235676) / C218847);
    const double C236241 = C235932 / C235521;
    const double C160823 = (2 * C235932) / p - ((C149152 * C235524) / p +
                                                (C219558 * C235674) / C218847);
    const double C145944 = C235667 * C159325 - (C152378 * C235517) / p -
                           (C218926 * C235518) / C235669 -
                           (C218930 * C235670) / C218847 + C236236;
    const double C150076 =
        C236236 - ((C153240 * C235524) / p + (C219062 * C235674) / C218847);
    const double C162457 = C235950 - (C153714 * C235517) / p - C235951 -
                           (C219682 * C235670) / C218847;
    const double C162585 =
        -((C153714 * C235524) / p + (C219682 * C235674) / C218847);
    const double C236243 = C235936 / C235521;
    const double C162741 = (2 * C235936) / p - ((C153714 * C235527) / p +
                                                (C219682 * C235676) / C218847);
    const double C236292 = C236132 / C235521;
    const double C181656 = (2 * C236132) / p - ((C167803 * C235517) / p +
                                                (C224933 * C235670) / C218847);
    const double C236133 = C167803 - C235810;
    const double C182670 =
        -((C169139 * C235527) / p + (C225161 * C235676) / C218847);
    const double C184366 =
        -((C173200 * C235517) / p + (C225176 * C235670) / C218847);
    const double C184708 =
        -((C173200 * C235527) / p + (C225176 * C235676) / C218847);
    const double C236293 = C236138 / C235521;
    const double C184677 = C235940 - (C173200 * C235524) / p - C235941 -
                           (C225176 * C235674) / C218847 + (2 * C236138) / p;
    const double C170053 =
        C236290 - ((C176357 * C235517) / p + (C224559 * C235670) / C218847);
    const double C174108 = C235914 - (C177213 * C235524) / p - C235915 -
                           (C224690 * C235674) / C218847 + C236290;
    const double C186300 =
        -((C177682 * C235517) / p + (C225297 * C235670) / C218847);
    const double C186426 = C235950 - (C177682 * C235524) / p - C235951 -
                           (C225297 * C235674) / C218847;
    const double C236295 = C236140 / C235521;
    const double C186572 = (2 * C236140) / p - ((C177682 * C235527) / p +
                                                (C225297 * C235676) / C218847);
    const double C236328 = C236196 / C235521;
    const double C205415 = (2 * C236196) / p - ((C191577 * C235517) / p +
                                                (C230468 * C235670) / C218847);
    const double C236197 = C191577 - C235863;
    const double C206423 = C235667 * C158631 - (C192912 * C235527) / p -
                           (C230687 * C235518) / C235669 -
                           (C230693 * C235676) / C218847;
    const double C208107 =
        -((C196968 * C235517) / p + (C230708 * C235670) / C218847);
    const double C208448 = C235940 - (C196968 * C235527) / p - C235941 -
                           (C230708 * C235676) / C218847;
    const double C236329 = C236198 / C235521;
    const double C208417 = (2 * C236198) / p - ((C196968 * C235524) / p +
                                                (C230708 * C235674) / C218847);
    const double C193825 =
        C236326 - ((C200120 * C235517) / p + (C230095 * C235670) / C218847);
    const double C197875 =
        C236326 - ((C200976 * C235524) / p + (C230225 * C235674) / C218847);
    const double C210024 =
        -((C201445 * C235517) / p + (C230829 * C235670) / C218847);
    const double C210150 =
        -((C201445 * C235524) / p + (C230829 * C235674) / C218847);
    const double C236331 = C236200 / C235521;
    const double C210296 = C235950 - (C201445 * C235527) / p - C235951 -
                           (C230829 * C235676) / C218847 + (2 * C236200) / p;
    const double C223408 = C235667 * C223178 - (C223182 * C235517) / p -
                           (C223902 * C235518) / C235669 -
                           (C223906 * C235670) / C218847 + C236275;
    const double C223423 =
        C236275 - ((C223120 * C235524) / p + (C223921 * C235674) / C218847);
    const double C228958 =
        C236321 - ((C228736 * C235517) / p + (C229448 * C235670) / C218847);
    const double C228974 = C235667 * C228672 - (C228677 * C235524) / p -
                           (C229459 * C235518) / C235669 -
                           (C229464 * C235674) / C218847 + C236321;
    const double C234473 =
        C236357 - ((C234251 * C235517) / p + (C234960 * C235670) / C218847);
    const double C234488 =
        C236357 - ((C234192 * C235524) / p + (C234975 * C235674) / C218847);
    const double C235559 = C221960 * C218845;
    const double C222351 =
        -((C221960 * C235524) / p + (C223226 * C235674) / C218847);
    const double C222397 =
        -((C221960 * C235527) / p + (C223226 * C235676) / C218847);
    const double C236270 = C236084 / C235521;
    const double C222277 = C236082 - (C221960 * C235517) / p - C236083 -
                           (C223226 * C235670) / C218847 +
                           (5 * C236084) / C235521;
    const double C222081 =
        C236267 - ((C221915 * C235527) / p + (C223105 * C235676) / C218847);
    const double C222113 = C235667 * C221734 - (C221738 * C235517) / p -
                           (C223132 * C235518) / C235669 -
                           (C223136 * C235670) / C218847 + C236267;
    const double C235560 = C222050 * C218845;
    const double C222459 = C236087 - (C222050 * C235517) / p - C236088 -
                           (C223331 * C235670) / C218847;
    const double C222610 =
        -((C222050 * C235527) / p + (C223331 * C235676) / C218847);
    const double C236269 = C236085 / C235521;
    const double C222427 =
        (5 * C236085) / C235521 -
        ((C222050 * C235524) / p + (C223331 * C235674) / C218847);
    const double C235757 = C235558 / C218847;
    const double C222097 =
        C236268 - ((C221930 * C235524) / p + (C223120 * C235674) / C218847);
    const double C222161 = C235667 * C221826 - (C221830 * C235517) / p -
                           (C223178 * C235518) / C235669 -
                           (C223182 * C235670) / C218847 + C236268;
    const double C235561 = C222145 * C218845;
    const double C222553 = C236089 - (C222145 * C235517) / p - C236090 -
                           (C223438 * C235670) / C218847;
    const double C222653 =
        -((C222145 * C235524) / p + (C223438 * C235674) / C218847);
    const double C236271 = C236086 / C235521;
    const double C222537 =
        (5 * C236086) / C235521 -
        ((C222145 * C235527) / p + (C223438 * C235676) / C218847);
    const double C235608 = C227534 * C218845;
    const double C227920 = C236082 - (C227534 * C235524) / p - C236083 -
                           (C228779 * C235674) / C218847;
    const double C227966 =
        -((C227534 * C235527) / p + (C228779 * C235676) / C218847);
    const double C236318 = C236182 / C235521;
    const double C227845 =
        (5 * C236182) / C235521 -
        ((C227534 * C235517) / p + (C228779 * C235670) / C218847);
    const double C227654 =
        C236315 - ((C227489 * C235527) / p + (C228661 * C235676) / C218847);
    const double C227684 =
        C236315 - ((C227314 * C235517) / p + (C228692 * C235670) / C218847);
    const double C235609 = C227623 * C218845;
    const double C228025 =
        -((C227623 * C235517) / p + (C228883 * C235670) / C218847);
    const double C228173 =
        -((C227623 * C235527) / p + (C228883 * C235676) / C218847);
    const double C236317 = C236183 / C235521;
    const double C227995 = C236087 - (C227623 * C235524) / p - C236088 -
                           (C228883 * C235674) / C218847 +
                           (5 * C236183) / C235521;
    const double C235839 = C235607 / C218847;
    const double C227669 = C235667 * C227500 - (C227505 * C235524) / p -
                           (C228672 * C235518) / C235669 -
                           (C228677 * C235674) / C218847 + C236316;
    const double C227729 =
        C236316 - ((C227404 * C235517) / p + (C228736 * C235670) / C218847);
    const double C235610 = C227714 * C218845;
    const double C228116 =
        -((C227714 * C235517) / p + (C228989 * C235670) / C218847);
    const double C228217 = C236089 - (C227714 * C235524) / p - C236090 -
                           (C228989 * C235674) / C218847;
    const double C236319 = C236184 / C235521;
    const double C228101 =
        (5 * C236184) / C235521 -
        ((C227714 * C235527) / p + (C228989 * C235676) / C218847);
    const double C235650 = C233052 * C218845;
    const double C233435 =
        -((C233052 * C235524) / p + (C234294 * C235674) / C218847);
    const double C233481 = C236082 - (C233052 * C235527) / p - C236083 -
                           (C234294 * C235676) / C218847;
    const double C236354 = C236226 / C235521;
    const double C233362 =
        (5 * C236226) / C235521 -
        ((C233052 * C235517) / p + (C234294 * C235670) / C218847);
    const double C233171 = C235667 * C233002 - (C233008 * C235527) / p -
                           (C234171 * C235518) / C235669 -
                           (C234177 * C235676) / C218847 + C236351;
    const double C233201 =
        C236351 - ((C232832 * C235517) / p + (C234207 * C235670) / C218847);
    const double C235651 = C233141 * C218845;
    const double C233540 =
        -((C233141 * C235517) / p + (C234398 * C235670) / C218847);
    const double C233689 = C236087 - (C233141 * C235527) / p - C236088 -
                           (C234398 * C235676) / C218847;
    const double C236353 = C236227 / C235521;
    const double C233510 =
        (5 * C236227) / C235521 -
        ((C233141 * C235524) / p + (C234398 * C235674) / C218847);
    const double C235883 = C235649 / C218847;
    const double C233186 =
        C236352 - ((C233023 * C235524) / p + (C234192 * C235674) / C218847);
    const double C233246 =
        C236352 - ((C232922 * C235517) / p + (C234251 * C235670) / C218847);
    const double C235652 = C233231 * C218845;
    const double C233631 =
        -((C233231 * C235517) / p + (C234503 * C235670) / C218847);
    const double C233732 =
        -((C233231 * C235524) / p + (C234503 * C235674) / C218847);
    const double C236355 = C236228 / C235521;
    const double C233616 = C236089 - (C233231 * C235527) / p - C236090 -
                           (C234503 * C235676) / C218847 +
                           (5 * C236228) / C235521;
    const double C219621 =
        C236256 - ((C219410 * C235524) / p + (C221753 * C235674) / C218847);
    const double C219697 =
        C236256 - ((C219440 * C235527) / p + (C221814 * C235676) / C218847);
    const double C235542 = C219345 * C218845;
    const double C220141 =
        -((C219345 * C235524) / p + (C221960 * C235674) / C218847);
    const double C220185 =
        -((C219345 * C235527) / p + (C221960 * C235676) / C218847);
    const double C236258 = C236036 / C235521;
    const double C220098 = C236034 - (C219345 * C235517) / p - C236035 -
                           (C221960 * C235670) / C218847 +
                           (5 * C236036) / C235521;
    const double C235694 = C235539 / C218847;
    const double C219606 = C235667 * C219522 - (C219526 * C235517) / p -
                           (C221734 * C235518) / C235669 -
                           (C221738 * C235670) / C218847 + C236255;
    const double C219935 =
        C236255 - ((C219773 * C235527) / p + (C221915 * C235676) / C218847);
    const double C235543 = C219816 * C218845;
    const double C220260 = C236038 - (C219816 * C235517) / p - C236039 -
                           (C222050 * C235670) / C218847;
    const double C220472 =
        -((C219816 * C235527) / p + (C222050 * C235676) / C218847);
    const double C236259 = C236037 / C235521;
    const double C220413 =
        (5 * C236037) / C235521 -
        ((C219816 * C235524) / p + (C222050 * C235674) / C218847);
    const double C219574 = C235667 * C219754 - (C219575 * C235517) / p -
                           (C221687 * C235518) / C235669 -
                           (C221691 * C235670) / C218847;
    const double C235697 = C235541 / C218847;
    const double C219713 = C235667 * C219661 - (C219665 * C235517) / p -
                           (C221826 * C235518) / C235669 -
                           (C221830 * C235670) / C218847 + C236257;
    const double C219951 =
        C236257 - ((C219904 * C235524) / p + (C221930 * C235674) / C218847);
    const double C235544 = C220038 * C218845;
    const double C220382 = C236043 - (C220038 * C235517) / p - C236044 -
                           (C222145 * C235670) / C218847;
    const double C220546 =
        -((C220038 * C235524) / p + (C222145 * C235674) / C218847);
    const double C225239 = C235667 * C225024 - (C225029 * C235524) / p -
                           (C227325 * C235518) / C235669 -
                           (C227330 * C235674) / C218847 + C236306;
    const double C225314 =
        C236306 - ((C225059 * C235527) / p + (C227389 * C235676) / C218847);
    const double C235592 = C224962 * C218845;
    const double C225746 = C236034 - (C224962 * C235524) / p - C236035 -
                           (C227534 * C235674) / C218847;
    const double C225791 =
        -((C224962 * C235527) / p + (C227534 * C235676) / C218847);
    const double C236308 = C236169 / C235521;
    const double C225702 =
        (5 * C236169) / C235521 -
        ((C224962 * C235517) / p + (C227534 * C235670) / C218847);
    const double C235814 = C235589 / C218847;
    const double C225224 =
        C236305 - ((C225146 * C235517) / p + (C227314 * C235670) / C218847);
    const double C225545 =
        C236305 - ((C225386 * C235527) / p + (C227489 * C235676) / C218847);
    const double C235593 = C225429 * C218845;
    const double C225866 =
        -((C225429 * C235517) / p + (C227623 * C235670) / C218847);
    const double C226074 =
        -((C225429 * C235527) / p + (C227623 * C235676) / C218847);
    const double C236309 = C236170 / C235521;
    const double C226016 = C236038 - (C225429 * C235524) / p - C236039 -
                           (C227623 * C235674) / C218847 +
                           (5 * C236170) / C235521;
    const double C225193 =
        -((C225192 * C235517) / p + (C227284 * C235670) / C218847);
    const double C235816 = C235591 / C218847;
    const double C225329 =
        C236307 - ((C225282 * C235517) / p + (C227404 * C235670) / C218847);
    const double C225560 = C235667 * C219992 - (C225515 * C235524) / p -
                           (C227500 * C235518) / C235669 -
                           (C227505 * C235674) / C218847 + C236307;
    const double C235594 = C225645 * C218845;
    const double C225985 =
        -((C225645 * C235517) / p + (C227714 * C235670) / C218847);
    const double C226146 = C236043 - (C225645 * C235524) / p - C236044 -
                           (C227714 * C235674) / C218847;
    const double C230771 =
        C236342 - ((C230562 * C235524) / p + (C232847 * C235674) / C218847);
    const double C230845 = C235667 * C225113 - (C230592 * C235527) / p -
                           (C232901 * C235518) / C235669 -
                           (C232907 * C235676) / C218847 + C236342;
    const double C235634 = C230497 * C218845;
    const double C231276 =
        -((C230497 * C235524) / p + (C233052 * C235674) / C218847);
    const double C231320 = C236034 - (C230497 * C235527) / p - C236035 -
                           (C233052 * C235676) / C218847;
    const double C236344 = C236215 / C235521;
    const double C231233 =
        (5 * C236215) / C235521 -
        ((C230497 * C235517) / p + (C233052 * C235670) / C218847);
    const double C235865 = C235631 / C218847;
    const double C230755 =
        C236341 - ((C230677 * C235517) / p + (C232832 * C235670) / C218847);
    const double C231076 = C235667 * C219769 - (C230917 * C235527) / p -
                           (C233002 * C235518) / C235669 -
                           (C233008 * C235676) / C218847 + C236341;
    const double C235635 = C230960 * C218845;
    const double C231393 =
        -((C230960 * C235517) / p + (C233141 * C235670) / C218847);
    const double C231600 = C236038 - (C230960 * C235527) / p - C236039 -
                           (C233141 * C235676) / C218847;
    const double C236345 = C236216 / C235521;
    const double C231542 =
        (5 * C236216) / C235521 -
        ((C230960 * C235524) / p + (C233141 * C235674) / C218847);
    const double C230725 =
        -((C230724 * C235517) / p + (C232802 * C235670) / C218847);
    const double C235867 = C235633 / C218847;
    const double C230860 =
        C236343 - ((C230814 * C235517) / p + (C232922 * C235670) / C218847);
    const double C231091 =
        C236343 - ((C231046 * C235524) / p + (C233023 * C235674) / C218847);
    const double C235636 = C231176 * C218845;
    const double C231512 =
        -((C231176 * C235517) / p + (C233231 * C235670) / C218847);
    const double C231672 =
        -((C231176 * C235524) / p + (C233231 * C235674) / C218847);
    const double C158078 =
        C236240 - ((C146843 * C235524) / p + (C219410 * C235674) / C218847);
    const double C158326 =
        C236240 - ((C147305 * C235527) / p + (C219440 * C235676) / C218847);
    const double C158487 =
        -((C157755 * C235524) / p + (C219345 * C235674) / C218847);
    const double C158545 =
        -((C157755 * C235527) / p + (C219345 * C235676) / C218847);
    const double C236239 = C235929 / C235521;
    const double C157833 = C235927 - (C157755 * C235517) / p - C235928 -
                           (C219345 * C235670) / C218847 +
                           (5 * C235929) / C235521;
    const double C161248 = C235946 - (C160856 * C235517) / p - C235947 -
                           (C219831 * C235670) / C218847;
    const double C158757 = C235667 * C160789 - (C150974 * C235517) / p -
                           (C219522 * C235518) / C235669 -
                           (C219526 * C235670) / C218847 + C236241;
    const double C161113 =
        C236241 - ((C151894 * C235527) / p + (C219773 * C235676) / C218847);
    const double C161218 = C235944 - (C160823 * C235517) / p - C235945 -
                           (C219816 * C235670) / C218847;
    const double C161263 =
        -((C160823 * C235527) / p + (C219816 * C235676) / C218847);
    const double C159045 =
        -((C145944 * C235524) / p + (C219590 * C235674) / C218847);
    const double C160601 = C235667 * C161290 - (C150076 * C235517) / p -
                           (C219754 * C235518) / C235669 -
                           (C219575 * C235670) / C218847;
    const double C163115 = C235954 - (C162585 * C235517) / p - C235955 -
                           (C219919 * C235670) / C218847;
    const double C159437 = C235667 * C162674 - (C155070 * C235517) / p -
                           (C219661 * C235518) / C235669 -
                           (C219665 * C235670) / C218847 + C236243;
    const double C161417 =
        C236243 - ((C155530 * C235524) / p + (C219904 * C235674) / C218847);
    const double C163159 = C235956 - (C162741 * C235517) / p - C235957 -
                           (C220038 * C235670) / C218847;
    const double C163174 =
        -((C162741 * C235524) / p + (C220038 * C235674) / C218847);
    const double C181967 = C235667 * C158723 - (C170936 * C235524) / p -
                           (C225024 * C235518) / C235669 -
                           (C225029 * C235674) / C218847 + C236292;
    const double C182217 =
        C236292 - ((C171385 * C235527) / p + (C225059 * C235676) / C218847);
    const double C182378 = C235927 - (C181656 * C235524) / p - C235928 -
                           (C224962 * C235674) / C218847;
    const double C182438 =
        -((C181656 * C235527) / p + (C224962 * C235676) / C218847);
    const double C236291 = C236133 / C235521;
    const double C181729 =
        (5 * C236133) / C235521 -
        ((C181656 * C235517) / p + (C224962 * C235670) / C218847);
    const double C185105 =
        -((C184708 * C235517) / p + (C225444 * C235670) / C218847);
    const double C182640 =
        C236293 - ((C174990 * C235517) / p + (C225146 * C235670) / C218847);
    const double C184969 =
        C236293 - ((C175884 * C235527) / p + (C225386 * C235676) / C218847);
    const double C185074 =
        -((C184677 * C235517) / p + (C225429 * C235670) / C218847);
    const double C185120 =
        -((C184677 * C235527) / p + (C225429 * C235676) / C218847);
    const double C182927 = C235667 * C159279 - (C170053 * C235524) / p -
                           (C225204 * C235518) / C235669 -
                           (C225209 * C235674) / C218847;
    const double C184463 =
        -((C174108 * C235517) / p + (C225192 * C235670) / C218847);
    const double C186950 =
        -((C186426 * C235517) / p + (C225530 * C235670) / C218847);
    const double C183308 =
        C236295 - ((C179009 * C235517) / p + (C225282 * C235670) / C218847);
    const double C185264 = C235952 - (C179456 * C235524) / p - C235953 -
                           (C225515 * C235674) / C218847 + C236295;
    const double C186995 =
        -((C186572 * C235517) / p + (C225645 * C235670) / C218847);
    const double C187010 = C235956 - (C186572 * C235524) / p - C235957 -
                           (C225645 * C235674) / C218847;
    const double C205724 =
        C236328 - ((C194707 * C235524) / p + (C230562 * C235674) / C218847);
    const double C205972 = C236136 - (C195155 * C235527) / p - C236137 -
                           (C230592 * C235676) / C218847 + C236328;
    const double C206133 =
        -((C205415 * C235524) / p + (C230497 * C235674) / C218847);
    const double C206191 = C235927 - (C205415 * C235527) / p - C235928 -
                           (C230497 * C235676) / C218847;
    const double C236327 = C236197 / C235521;
    const double C205488 =
        (5 * C236197) / C235521 -
        ((C205415 * C235517) / p + (C230497 * C235670) / C218847);
    const double C208840 =
        -((C208448 * C235517) / p + (C230975 * C235670) / C218847);
    const double C206393 =
        C236329 - ((C198756 * C235517) / p + (C230677 * C235670) / C218847);
    const double C208703 = C235942 - (C199648 * C235527) / p - C235943 -
                           (C230917 * C235676) / C218847 + C236329;
    const double C208810 =
        -((C208417 * C235517) / p + (C230960 * C235670) / C218847);
    const double C208855 = C235944 - (C208417 * C235527) / p - C235945 -
                           (C230960 * C235676) / C218847;
    const double C206677 =
        -((C193825 * C235524) / p + (C230740 * C235674) / C218847);
    const double C208203 =
        -((C197875 * C235517) / p + (C230724 * C235670) / C218847);
    const double C210671 =
        -((C210150 * C235517) / p + (C231061 * C235670) / C218847);
    const double C207057 =
        C236331 - ((C202770 * C235517) / p + (C230814 * C235670) / C218847);
    const double C208999 =
        C236331 - ((C203216 * C235524) / p + (C231046 * C235674) / C218847);
    const double C210715 =
        -((C210296 * C235517) / p + (C231176 * C235670) / C218847);
    const double C210730 =
        -((C210296 * C235524) / p + (C231176 * C235674) / C218847);
    const double C235760 = C235559 / C218847;
    const double C222336 =
        C236270 - ((C222018 * C235527) / p + (C223257 * C235676) / C218847);
    const double C222366 =
        C236270 - ((C221989 * C235524) / p + (C223286 * C235674) / C218847);
    const double C222490 = C235667 * C222109 - (C222113 * C235517) / p -
                           (C223388 * C235518) / C235669 -
                           (C223392 * C235670) / C218847 +
                           (C221738 - (C223136 * C218845) / C218847) / p;
    const double C235763 = C235560 / C218847;
    const double C222321 = C235667 * C222030 - (C222034 * C235517) / p -
                           (C223238 * C235518) / C235669 -
                           (C223242 * C235670) / C218847 + C236269;
    const double C222443 =
        C236269 - ((C222190 * C235527) / p + (C223346 * C235676) / C218847);
    const double C236042 = C219682 - C235757;
    const double C222521 =
        (C221930 - (C223120 * C218845) / C218847) / p -
        ((C222097 * C235524) / p + (C223423 * C235674) / C218847);
    const double C222505 = C235667 * C222157 - (C222161 * C235517) / p -
                           (C223404 * C235518) / C235669 -
                           (C223408 * C235670) / C218847 +
                           (C221830 - (C223182 * C218845) / C218847) / p;
    const double C235766 = C235561 / C218847;
    const double C222382 = C235667 * C222125 - (C222129 * C235517) / p -
                           (C223298 * C235518) / C235669 -
                           (C223302 * C235670) / C218847 + C236271;
    const double C222475 =
        C236271 - ((C222219 * C235524) / p + (C223376 * C235674) / C218847);
    const double C235840 = C235608 / C218847;
    const double C227904 =
        C236318 - ((C227593 * C235527) / p + (C228809 * C235676) / C218847);
    const double C227936 = C235667 * C227559 - (C227564 * C235524) / p -
                           (C228834 * C235518) / C235669 -
                           (C228839 * C235674) / C218847 + C236318;
    const double C228055 =
        (C227314 - (C228692 * C218845) / C218847) / p -
        ((C227684 * C235517) / p + (C228943 * C235670) / C218847);
    const double C235842 = C235609 / C218847;
    const double C227888 =
        C236317 - ((C227608 * C235517) / p + (C228794 * C235670) / C218847);
    const double C228010 =
        C236317 - ((C227758 * C235527) / p + (C228898 * C235676) / C218847);
    const double C236171 = C225297 - C235839;
    const double C228086 = C235667 * C222093 - (C227669 * C235524) / p -
                           (C228969 * C235518) / C235669 -
                           (C228974 * C235674) / C218847 +
                           (C227505 - (C228677 * C218845) / C218847) / p;
    const double C228071 =
        (C227404 - (C228736 * C218845) / C218847) / p -
        ((C227729 * C235517) / p + (C228958 * C235670) / C218847);
    const double C235843 = C235610 / C218847;
    const double C227951 =
        C236319 - ((C227699 * C235517) / p + (C228854 * C235670) / C218847);
    const double C228040 = C235667 * C227783 - (C227788 * C235524) / p -
                           (C228923 * C235518) / C235669 -
                           (C228928 * C235674) / C218847 + C236319;
    const double C235884 = C235650 / C218847;
    const double C233420 = C235667 * C233105 - (C233111 * C235527) / p -
                           (C234319 * C235518) / C235669 -
                           (C234325 * C235676) / C218847 + C236354;
    const double C233450 =
        C236354 - ((C233081 * C235524) / p + (C234354 * C235674) / C218847);
    const double C233571 =
        (C232832 - (C234207 * C218845) / C218847) / p -
        ((C233201 * C235517) / p + (C234458 * C235670) / C218847);
    const double C235885 = C235651 / C218847;
    const double C233405 =
        C236353 - ((C233126 * C235517) / p + (C234309 * C235670) / C218847);
    const double C233525 = C235667 * C233270 - (C233276 * C235527) / p -
                           (C234408 * C235518) / C235669 -
                           (C234414 * C235676) / C218847 + C236353;
    const double C236217 = C230829 - C235883;
    const double C233601 =
        (C233023 - (C234192 * C218845) / C218847) / p -
        ((C233186 * C235524) / p + (C234488 * C235674) / C218847);
    const double C233586 =
        (C232922 - (C234251 * C218845) / C218847) / p -
        ((C233246 * C235517) / p + (C234473 * C235670) / C218847);
    const double C235886 = C235652 / C218847;
    const double C233465 =
        C236355 - ((C233216 * C235517) / p + (C234369 * C235670) / C218847);
    const double C233555 =
        C236355 - ((C233305 * C235524) / p + (C234443 * C235674) / C218847);
    const double C220289 =
        -((C219697 * C235524) / p + (C222065 * C235674) / C218847);
    const double C235709 = C235542 / C218847;
    const double C220156 =
        C236258 - ((C219395 * C235524) / p + (C221989 * C235674) / C218847);
    const double C220200 =
        C236258 - ((C219425 * C235527) / p + (C222018 * C235676) / C218847);
    const double C235545 = C220098 * C218845;
    const double C220652 =
        -((C220098 * C235524) / p + (C222277 * C235674) / C218847);
    const double C220667 =
        -((C220098 * C235527) / p + (C222277 * C235676) / C218847);
    const double C235933 = C149152 - C235694;
    const double C220336 = C235667 * C219602 - (C219606 * C235517) / p -
                           (C222109 * C235518) / C235669 -
                           (C222113 * C235670) / C218847 +
                           (C219526 - (C221738 * C218845) / C218847) / p;
    const double C220305 = C235667 * C219931 - (C219935 * C235517) / p -
                           (C222077 * C235518) / C235669 -
                           (C222081 * C235670) / C218847;
    const double C235711 = C235543 / C218847;
    const double C220244 = C235667 * C219553 - (C219557 * C235517) / p -
                           (C222030 * C235518) / C235669 -
                           (C222034 * C235670) / C218847 + C236259;
    const double C220457 =
        C236259 - ((C219831 * C235527) / p + (C222190 * C235676) / C218847);
    const double C235546 = C220413 * C218845;
    const double C220860 = C236048 - (C220413 * C235517) / p - C236049 -
                           (C222427 * C235670) / C218847;
    const double C221072 =
        -((C220413 * C235527) / p + (C222427 * C235676) / C218847);
    const double C235937 = C153714 - C235697;
    const double C220397 = C235667 * C219709 - (C219713 * C235517) / p -
                           (C222157 * C235518) / C235669 -
                           (C222161 * C235670) / C218847 +
                           (C219665 - (C221830 * C218845) / C218847) / p;
    const double C220321 = C236040 - (C219951 * C235517) / p - C236041 -
                           (C222097 * C235670) / C218847;
    const double C220562 =
        (C219904 - (C221930 * C218845) / C218847) / p -
        ((C219951 * C235524) / p + (C222097 * C235674) / C218847);
    const double C235713 = C235544 / C218847;
    const double C225896 = C235667 * C225309 - (C225314 * C235524) / p -
                           (C227634 * C235518) / C235669 -
                           (C227639 * C235674) / C218847;
    const double C235817 = C235592 / C218847;
    const double C225762 = C235667 * C225008 - (C225013 * C235524) / p -
                           (C227559 * C235518) / C235669 -
                           (C227564 * C235674) / C218847 + C236308;
    const double C225807 =
        C236308 - ((C225044 * C235527) / p + (C227593 * C235676) / C218847);
    const double C235595 = C225702 * C218845;
    const double C226249 = C236045 - (C225702 * C235524) / p - C236046 -
                           (C227845 * C235674) / C218847;
    const double C226264 =
        -((C225702 * C235527) / p + (C227845 * C235676) / C218847);
    const double C236139 = C173200 - C235814;
    const double C225941 =
        (C225146 - (C227314 * C218845) / C218847) / p -
        ((C225224 * C235517) / p + (C227684 * C235670) / C218847);
    const double C225911 =
        -((C225545 * C235517) / p + (C227654 * C235670) / C218847);
    const double C235821 = C235593 / C218847;
    const double C225851 =
        C236309 - ((C225177 * C235517) / p + (C227608 * C235670) / C218847);
    const double C226059 =
        C236309 - ((C225444 * C235527) / p + (C227758 * C235676) / C218847);
    const double C235596 = C226016 * C218845;
    const double C226459 =
        -((C226016 * C235517) / p + (C227995 * C235670) / C218847);
    const double C226666 =
        -((C226016 * C235527) / p + (C227995 * C235676) / C218847);
    const double C236141 = C177682 - C235816;
    const double C226001 =
        (C225282 - (C227404 * C218845) / C218847) / p -
        ((C225329 * C235517) / p + (C227729 * C235670) / C218847);
    const double C225926 =
        -((C225560 * C235517) / p + (C227669 * C235670) / C218847);
    const double C226161 = C236040 - (C225560 * C235524) / p - C236041 -
                           (C227669 * C235674) / C218847 +
                           (C225515 - (C227505 * C218845) / C218847) / p;
    const double C235822 = C235594 / C218847;
    const double C231422 =
        -((C230845 * C235524) / p + (C233156 * C235674) / C218847);
    const double C235868 = C235634 / C218847;
    const double C231291 =
        C236344 - ((C230547 * C235524) / p + (C233081 * C235674) / C218847);
    const double C231335 = C235667 * C225098 - (C230577 * C235527) / p -
                           (C233105 * C235518) / C235669 -
                           (C233111 * C235676) / C218847 + C236344;
    const double C235637 = C231233 * C218845;
    const double C231774 =
        -((C231233 * C235524) / p + (C233362 * C235674) / C218847);
    const double C231789 = C236045 - (C231233 * C235527) / p - C236046 -
                           (C233362 * C235676) / C218847;
    const double C236199 = C196968 - C235865;
    const double C231468 =
        (C230677 - (C232832 * C218845) / C218847) / p -
        ((C230755 * C235517) / p + (C233201 * C235670) / C218847);
    const double C231437 =
        -((C231076 * C235517) / p + (C233171 * C235670) / C218847);
    const double C235869 = C235635 / C218847;
    const double C231378 =
        C236345 - ((C230709 * C235517) / p + (C233126 * C235670) / C218847);
    const double C231585 = C235667 * C219872 - (C230975 * C235527) / p -
                           (C233270 * C235518) / C235669 -
                           (C233276 * C235676) / C218847 + C236345;
    const double C235638 = C231542 * C218845;
    const double C231980 =
        -((C231542 * C235517) / p + (C233510 * C235670) / C218847);
    const double C232187 = C236048 - (C231542 * C235527) / p - C236049 -
                           (C233510 * C235676) / C218847;
    const double C236201 = C201445 - C235867;
    const double C231527 =
        (C230814 - (C232922 * C218845) / C218847) / p -
        ((C230860 * C235517) / p + (C233246 * C235670) / C218847);
    const double C231452 =
        -((C231091 * C235517) / p + (C233186 * C235670) / C218847);
    const double C231687 =
        (C231046 - (C233023 * C218845) / C218847) / p -
        ((C231091 * C235524) / p + (C233186 * C235674) / C218847);
    const double C235870 = C235636 / C218847;
    const double C159222 =
        -((C158078 * C235527) / p + (C219621 * C235676) / C218847);
    const double C159823 =
        -((C158326 * C235524) / p + (C219697 * C235674) / C218847);
    const double C164294 =
        -((C158545 * C235524) / p + (C220185 * C235674) / C218847);
    const double C158049 =
        C236239 - ((C157895 * C235524) / p + (C219395 * C235674) / C218847);
    const double C158297 =
        C236239 - ((C157943 * C235527) / p + (C219425 * C235676) / C218847);
    const double C163959 =
        -((C157833 * C235524) / p + (C220098 * C235674) / C218847);
    const double C164005 =
        -((C157833 * C235527) / p + (C220098 * C235676) / C218847);
    const double C159164 = C235934 - (C158757 * C235517) / p - C235935 -
                           (C219606 * C235670) / C218847 +
                           (C150974 - (C219526 * C218845) / C218847) / p;
    const double C159251 =
        -((C158757 * C235527) / p + (C219606 * C235676) / C218847);
    const double C161818 = C235667 * C165472 - (C161113 * C235517) / p -
                           (C219931 * C235518) / C235669 -
                           (C219935 * C235670) / C218847;
    const double C165445 = C235971 - (C161263 * C235517) / p - C235972 -
                           (C220472 * C235670) / C218847;
    const double C159030 = C235667 * C161336 - (C160601 * C235517) / p -
                           (C219570 * C235518) / C235669 -
                           (C219574 * C235670) / C218847 +
                           (C150076 - (C219575 * C218845) / C218847) / C235521;
    const double C159895 = C235938 - (C159437 * C235517) / p - C235939 -
                           (C219713 * C235670) / C218847 +
                           (C155070 - (C219665 * C218845) / C218847) / p;
    const double C159924 =
        -((C159437 * C235524) / p + (C219713 * C235674) / C218847);
    const double C161862 = C235948 - (C161417 * C235517) / p - C235949 -
                           (C219951 * C235670) / C218847;
    const double C161891 =
        (C155530 - (C219904 * C218845) / C218847) / p -
        ((C161417 * C235524) / p + (C219951 * C235674) / C218847);
    const double C166258 = C235977 - (C163174 * C235517) / p - C235978 -
                           (C220546 * C235670) / C218847;
    const double C183105 =
        -((C181967 * C235527) / p + (C225239 * C235676) / C218847);
    const double C183695 = C235667 * C159340 - (C182217 * C235524) / p -
                           (C225309 * C235518) / C235669 -
                           (C225314 * C235674) / C218847;
    const double C188115 = C236147 - (C182438 * C235524) / p - C236148 -
                           (C225791 * C235674) / C218847;
    const double C181938 = C235667 * C159936 - (C181787 * C235524) / p -
                           (C225008 * C235518) / C235669 -
                           (C225013 * C235674) / C218847 + C236291;
    const double C182188 =
        C236291 - ((C181832 * C235527) / p + (C225044 * C235676) / C218847);
    const double C187780 = C235958 - (C181729 * C235524) / p - C235959 -
                           (C225702 * C235674) / C218847;
    const double C187825 =
        -((C181729 * C235527) / p + (C225702 * C235676) / C218847);
    const double C183046 =
        (C174990 - (C225146 * C218845) / C218847) / p -
        ((C182640 * C235517) / p + (C225224 * C235670) / C218847);
    const double C183134 =
        -((C182640 * C235527) / p + (C225224 * C235676) / C218847);
    const double C185669 =
        -((C184969 * C235517) / p + (C225545 * C235670) / C218847);
    const double C189255 =
        -((C185120 * C235517) / p + (C226074 * C235670) / C218847);
    const double C182912 =
        (C174108 - (C225192 * C218845) / C218847) / C235521 -
        ((C184463 * C235517) / p + (C225193 * C235670) / C218847);
    const double C183768 =
        (C179009 - (C225282 * C218845) / C218847) / p -
        ((C183308 * C235517) / p + (C225329 * C235670) / C218847);
    const double C183797 = C235938 - (C183308 * C235524) / p - C235939 -
                           (C225329 * C235674) / C218847;
    const double C185714 =
        -((C185264 * C235517) / p + (C225560 * C235670) / C218847);
    const double C185743 = C235948 - (C185264 * C235524) / p - C235949 -
                           (C225560 * C235674) / C218847 +
                           (C179456 - (C225515 * C218845) / C218847) / p;
    const double C190058 =
        -((C187010 * C235517) / p + (C226146 * C235670) / C218847);
    const double C206854 = C235667 * C158692 - (C205724 * C235527) / p -
                           (C230765 * C235518) / C235669 -
                           (C230771 * C235676) / C218847;
    const double C207441 =
        -((C205972 * C235524) / p + (C230845 * C235674) / C218847);
    const double C211829 =
        -((C206191 * C235524) / p + (C231320 * C235674) / C218847);
    const double C205695 =
        C236327 - ((C205546 * C235524) / p + (C230547 * C235674) / C218847);
    const double C205943 = C236134 - (C205591 * C235527) / p - C236135 -
                           (C230577 * C235676) / C218847 + C236327;
    const double C211491 =
        -((C205488 * C235524) / p + (C231233 * C235674) / C218847);
    const double C211538 = C235958 - (C205488 * C235527) / p - C235959 -
                           (C231233 * C235676) / C218847;
    const double C206796 =
        (C198756 - (C230677 * C218845) / C218847) / p -
        ((C206393 * C235517) / p + (C230755 * C235670) / C218847);
    const double C206883 = C235934 - (C206393 * C235527) / p - C235935 -
                           (C230755 * C235676) / C218847;
    const double C209400 =
        -((C208703 * C235517) / p + (C231076 * C235670) / C218847);
    const double C212969 =
        -((C208855 * C235517) / p + (C231600 * C235670) / C218847);
    const double C206662 =
        (C197875 - (C230724 * C218845) / C218847) / C235521 -
        ((C208203 * C235517) / p + (C230725 * C235670) / C218847);
    const double C207513 =
        (C202770 - (C230814 * C218845) / C218847) / p -
        ((C207057 * C235517) / p + (C230860 * C235670) / C218847);
    const double C207542 =
        -((C207057 * C235524) / p + (C230860 * C235674) / C218847);
    const double C209444 =
        -((C208999 * C235517) / p + (C231091 * C235670) / C218847);
    const double C209473 =
        (C203216 - (C231046 * C218845) / C218847) / p -
        ((C208999 * C235524) / p + (C231091 * C235674) / C218847);
    const double C213772 =
        -((C210730 * C235517) / p + (C231672 * C235670) / C218847);
    const double C236047 = C219345 - C235760;
    const double C236052 = C219816 - C235763;
    const double C236260 = C236042 / C235521;
    const double C220578 =
        (5 * C236042) / C235521 -
        ((C220038 * C235527) / p + (C222145 * C235676) / C218847);
    const double C236057 = C220038 - C235766;
    const double C236172 = C224962 - C235840;
    const double C236175 = C225429 - C235842;
    const double C236310 = C236171 / C235521;
    const double C226176 =
        (5 * C236171) / C235521 -
        ((C225645 * C235527) / p + (C227714 * C235676) / C218847);
    const double C236176 = C225645 - C235843;
    const double C236218 = C230497 - C235884;
    const double C236219 = C230960 - C235885;
    const double C236346 = C236217 / C235521;
    const double C231702 = C236043 - (C231176 * C235527) / p - C236044 -
                           (C233231 * C235676) / C218847 +
                           (5 * C236217) / C235521;
    const double C236220 = C231176 - C235886;
    const double C235960 = C157755 - C235709;
    const double C220784 =
        (C219395 - (C221989 * C218845) / C218847) / p -
        ((C220156 * C235524) / p + (C222366 * C235674) / C218847);
    const double C220740 =
        -((C220200 * C235524) / p + (C222336 * C235674) / C218847);
    const double C220844 =
        (C219425 - (C222018 * C218845) / C218847) / p -
        ((C220200 * C235527) / p + (C222336 * C235676) / C218847);
    const double C235721 = C235545 / C218847;
    const double C236242 = C235933 / C235521;
    const double C160949 =
        (5 * C235933) / C235521 -
        ((C160823 * C235524) / p + (C219816 * C235674) / C218847);
    const double C220951 =
        -((C220336 * C235527) / p + (C222490 * C235676) / C218847);
    const double C235963 = C160823 - C235711;
    const double C220725 = C235667 * C220240 - (C220244 * C235517) / p -
                           (C222317 * C235518) / C235669 -
                           (C222321 * C235670) / C218847 +
                           (C219557 - (C222034 * C218845) / C218847) / p;
    const double C220876 = C236050 - (C220457 * C235517) / p - C236051 -
                           (C222443 * C235670) / C218847;
    const double C221163 =
        (C219831 - (C222190 * C218845) / C218847) / p -
        ((C220457 * C235527) / p + (C222443 * C235676) / C218847);
    const double C235724 = C235546 / C218847;
    const double C236244 = C235937 / C235521;
    const double C163010 =
        (5 * C235937) / C235521 -
        ((C162741 * C235527) / p + (C220038 * C235676) / C218847);
    const double C220966 =
        -((C220397 * C235524) / p + (C222505 * C235674) / C218847);
    const double C220982 = C235667 * C220558 - (C220562 * C235517) / p -
                           (C222517 * C235518) / C235669 -
                           (C222521 * C235670) / C218847;
    const double C235966 = C162741 - C235713;
    const double C236142 = C181656 - C235817;
    const double C226383 = C235667 * C225757 - (C225762 * C235524) / p -
                           (C227931 * C235518) / C235669 -
                           (C227936 * C235674) / C218847 +
                           (C225013 - (C227564 * C218845) / C218847) / p;
    const double C226338 = C236173 - (C225807 * C235524) / p - C236174 -
                           (C227904 * C235674) / C218847;
    const double C226444 =
        (C225044 - (C227593 * C218845) / C218847) / p -
        ((C225807 * C235527) / p + (C227904 * C235676) / C218847);
    const double C235823 = C235595 / C218847;
    const double C236294 = C236139 / C235521;
    const double C184800 = C235944 - (C184677 * C235524) / p - C235945 -
                           (C225429 * C235674) / C218847 +
                           (5 * C236139) / C235521;
    const double C226547 =
        -((C225941 * C235527) / p + (C228055 * C235676) / C218847);
    const double C236149 = C184677 - C235821;
    const double C226322 =
        (C225177 - (C227608 * C218845) / C218847) / p -
        ((C225851 * C235517) / p + (C227888 * C235670) / C218847);
    const double C226474 =
        -((C226059 * C235517) / p + (C228010 * C235670) / C218847);
    const double C226753 =
        (C225444 - (C227758 * C218845) / C218847) / p -
        ((C226059 * C235527) / p + (C228010 * C235676) / C218847);
    const double C235827 = C235596 / C218847;
    const double C236296 = C236141 / C235521;
    const double C186845 =
        (5 * C236141) / C235521 -
        ((C186572 * C235527) / p + (C225645 * C235676) / C218847);
    const double C226563 = C235667 * C225996 - (C226001 * C235524) / p -
                           (C228066 * C235518) / C235669 -
                           (C228071 * C235674) / C218847;
    const double C226578 =
        -((C226161 * C235517) / p + (C228086 * C235670) / C218847);
    const double C236150 = C186572 - C235822;
    const double C236202 = C205415 - C235868;
    const double C231906 =
        (C230547 - (C233081 * C218845) / C218847) / p -
        ((C231291 * C235524) / p + (C233450 * C235674) / C218847);
    const double C231861 =
        -((C231335 * C235524) / p + (C233420 * C235674) / C218847);
    const double C231965 = C236173 - (C231335 * C235527) / p - C236174 -
                           (C233420 * C235676) / C218847 +
                           (C230577 - (C233111 * C218845) / C218847) / p;
    const double C235871 = C235637 / C218847;
    const double C236330 = C236199 / C235521;
    const double C208539 =
        (5 * C236199) / C235521 -
        ((C208417 * C235524) / p + (C230960 * C235674) / C218847);
    const double C232069 = C235667 * C231462 - (C231468 * C235527) / p -
                           (C233565 * C235518) / C235669 -
                           (C233571 * C235676) / C218847;
    const double C236203 = C208417 - C235869;
    const double C231846 =
        (C230709 - (C233126 * C218845) / C218847) / p -
        ((C231378 * C235517) / p + (C233405 * C235670) / C218847);
    const double C231995 =
        -((C231585 * C235517) / p + (C233525 * C235670) / C218847);
    const double C232274 = C236050 - (C231585 * C235527) / p - C236051 -
                           (C233525 * C235676) / C218847 +
                           (C230975 - (C233276 * C218845) / C218847) / p;
    const double C235872 = C235638 / C218847;
    const double C236332 = C236201 / C235521;
    const double C210563 = C235956 - (C210296 * C235527) / p - C235957 -
                           (C231176 * C235676) / C218847 +
                           (5 * C236201) / C235521;
    const double C232084 =
        -((C231527 * C235524) / p + (C233586 * C235674) / C218847);
    const double C232099 =
        -((C231687 * C235517) / p + (C233601 * C235670) / C218847);
    const double C236204 = C210296 - C235870;
    const double C164538 =
        (C158326 - (C219697 * C218845) / C218847) / C235521 -
        ((C159823 * C235524) / p + (C220289 * C235674) / C218847);
    const double C164098 =
        (C157895 - (C219395 * C218845) / C218847) / p -
        ((C158049 * C235524) / p + (C220156 * C235674) / C218847);
    const double C164128 =
        -((C158049 * C235527) / p + (C220156 * C235676) / C218847);
    const double C164204 =
        -((C158297 * C235524) / p + (C220200 * C235674) / C218847);
    const double C164234 =
        (C157943 - (C219425 * C218845) / C218847) / p -
        ((C158297 * C235527) / p + (C220200 * C235676) / C218847);
    const double C166426 =
        -((C164005 * C235524) / p + (C220667 * C235674) / C218847);
    const double C164643 =
        -((C159164 * C235527) / p + (C220336 * C235676) / C218847);
    const double C164553 = C235667 * C165487 - (C161818 * C235517) / p -
                           (C220301 * C235518) / C235669 -
                           (C220305 * C235670) / C218847 +
                           (C161113 - (C219935 * C218845) / C218847) / C235521;
    const double C164991 =
        -((C159895 * C235524) / p + (C220397 * C235674) / C218847);
    const double C164583 = C235667 * C165517 - (C161862 * C235517) / p -
                           (C220317 * C235518) / C235669 -
                           (C220321 * C235670) / C218847 +
                           (C161417 - (C219951 * C218845) / C218847) / C235521;
    const double C165791 = C235667 * C167269 - (C161891 * C235517) / p -
                           (C220558 * C235518) / C235669 -
                           (C220562 * C235670) / C218847;
    const double C188356 = C235667 * C164702 - (C183695 * C235524) / p -
                           (C225891 * C235518) / C235669 -
                           (C225896 * C235674) / C218847 +
                           (C182217 - (C225314 * C218845) / C218847) / C235521;
    const double C187916 = C236143 - (C181938 * C235524) / p - C236144 -
                           (C225762 * C235674) / C218847 +
                           (C181787 - (C225013 * C218845) / C218847) / p;
    const double C187946 =
        -((C181938 * C235527) / p + (C225762 * C235676) / C218847);
    const double C188025 = C236145 - (C182188 * C235524) / p - C236146 -
                           (C225807 * C235674) / C218847;
    const double C188055 =
        (C181832 - (C225044 * C218845) / C218847) / p -
        ((C182188 * C235527) / p + (C225807 * C235676) / C218847);
    const double C190220 = C236152 - (C187825 * C235524) / p - C236153 -
                           (C226264 * C235674) / C218847;
    const double C188461 =
        -((C183046 * C235527) / p + (C225941 * C235676) / C218847);
    const double C188371 =
        (C184969 - (C225545 * C218845) / C218847) / C235521 -
        ((C185669 * C235517) / p + (C225911 * C235670) / C218847);
    const double C188807 = C235667 * C164717 - (C183768 * C235524) / p -
                           (C225996 * C235518) / C235669 -
                           (C226001 * C235674) / C218847;
    const double C188401 =
        (C185264 - (C225560 * C218845) / C218847) / C235521 -
        ((C185714 * C235517) / p + (C225926 * C235670) / C218847);
    const double C189597 =
        -((C185743 * C235517) / p + (C226161 * C235670) / C218847);
    const double C212067 =
        (C205972 - (C230845 * C218845) / C218847) / C235521 -
        ((C207441 * C235524) / p + (C231422 * C235674) / C218847);
    const double C211628 =
        (C205546 - (C230547 * C218845) / C218847) / p -
        ((C205695 * C235524) / p + (C231291 * C235674) / C218847);
    const double C211659 = C236143 - (C205695 * C235527) / p - C236144 -
                           (C231291 * C235676) / C218847;
    const double C211735 =
        -((C205943 * C235524) / p + (C231335 * C235674) / C218847);
    const double C211766 = C236145 - (C205943 * C235527) / p - C236146 -
                           (C231335 * C235676) / C218847 +
                           (C205591 - (C230577 * C218845) / C218847) / p;
    const double C213934 =
        -((C211538 * C235524) / p + (C231789 * C235674) / C218847);
    const double C212176 = C235667 * C164337 - (C206796 * C235527) / p -
                           (C231462 * C235518) / C235669 -
                           (C231468 * C235676) / C218847;
    const double C212082 =
        (C208703 - (C231076 * C218845) / C218847) / C235521 -
        ((C209400 * C235517) / p + (C231437 * C235670) / C218847);
    const double C212521 =
        -((C207513 * C235524) / p + (C231527 * C235674) / C218847);
    const double C212113 =
        (C208999 - (C231091 * C218845) / C218847) / C235521 -
        ((C209444 * C235517) / p + (C231452 * C235670) / C218847);
    const double C213311 =
        -((C209473 * C235517) / p + (C231687 * C235670) / C218847);
    const double C236261 = C236047 / C235521;
    const double C220637 = C236045 - (C220098 * C235517) / p - C236046 -
                           (C222277 * C235670) / C218847 + (3 * C236047) / p;
    const double C236262 = C236052 / C235521;
    const double C221057 = (3 * C236052) / p - ((C220413 * C235524) / p +
                                                (C222427 * C235674) / C218847);
    const double C220352 = C235667 * C219677 - (C219681 * C235517) / p -
                           (C222125 * C235518) / C235669 -
                           (C222129 * C235670) / C218847 + C236260;
    const double C220517 =
        C236260 - ((C219919 * C235524) / p + (C222219 * C235674) / C218847);
    const double C235548 = C220578 * C218845;
    const double C220998 = C236055 - (C220578 * C235517) / p - C236056 -
                           (C222537 * C235670) / C218847;
    const double C221192 =
        -((C220578 * C235524) / p + (C222537 * C235674) / C218847);
    const double C236263 = C236057 / C235521;
    const double C221252 = (3 * C236057) / p - ((C220578 * C235527) / p +
                                                (C222537 * C235676) / C218847);
    const double C236311 = C236172 / C235521;
    const double C226233 = (3 * C236172) / p - ((C225702 * C235517) / p +
                                                (C227845 * C235670) / C218847);
    const double C236312 = C236175 / C235521;
    const double C226651 = C236048 - (C226016 * C235524) / p - C236049 -
                           (C227995 * C235674) / C218847 + (3 * C236175) / p;
    const double C225956 =
        C236310 - ((C225298 * C235517) / p + (C227699 * C235670) / C218847);
    const double C226117 = C235667 * C220050 - (C225530 * C235524) / p -
                           (C227783 * C235518) / C235669 -
                           (C227788 * C235674) / C218847 + C236310;
    const double C235598 = C226176 * C218845;
    const double C226593 =
        -((C226176 * C235517) / p + (C228101 * C235670) / C218847);
    const double C226782 = C236055 - (C226176 * C235524) / p - C236056 -
                           (C228101 * C235674) / C218847;
    const double C236313 = C236176 / C235521;
    const double C226840 = (3 * C236176) / p - ((C226176 * C235527) / p +
                                                (C228101 * C235676) / C218847);
    const double C236347 = C236218 / C235521;
    const double C231759 = (3 * C236218) / p - ((C231233 * C235517) / p +
                                                (C233362 * C235670) / C218847);
    const double C236348 = C236219 / C235521;
    const double C232172 = (3 * C236219) / p - ((C231542 * C235524) / p +
                                                (C233510 * C235674) / C218847);
    const double C231483 =
        C236346 - ((C230830 * C235517) / p + (C233216 * C235670) / C218847);
    const double C231643 =
        C236346 - ((C231061 * C235524) / p + (C233305 * C235674) / C218847);
    const double C235640 = C231702 * C218845;
    const double C232114 =
        -((C231702 * C235517) / p + (C233616 * C235670) / C218847);
    const double C232303 =
        -((C231702 * C235524) / p + (C233616 * C235674) / C218847);
    const double C236349 = C236220 / C235521;
    const double C232361 = C236055 - (C231702 * C235527) / p - C236056 -
                           (C233616 * C235676) / C218847 + (3 * C236220) / p;
    const double C236245 = C235960 / C235521;
    const double C163898 = C235958 - (C157833 * C235517) / p - C235959 -
                           (C220098 * C235670) / C218847 + (3 * C235960) / p;
    const double C235981 = C157833 - C235721;
    const double C158881 = C235667 * C160774 - (C160505 * C235517) / p -
                           (C219553 * C235518) / C235669 -
                           (C219557 * C235670) / C218847 + C236242;
    const double C161098 =
        C236242 - ((C160856 * C235527) / p + (C219831 * C235676) / C218847);
    const double C165219 = C235967 - (C160949 * C235517) / p - C235968 -
                           (C220413 * C235670) / C218847;
    const double C165280 =
        -((C160949 * C235527) / p + (C220413 * C235676) / C218847);
    const double C236246 = C235963 / C235521;
    const double C165249 = (3 * C235963) / p - ((C160949 * C235524) / p +
                                                (C220413 * C235674) / C218847);
    const double C235986 = C160949 - C235724;
    const double C159704 = C235667 * C162659 - (C162457 * C235517) / p -
                           (C219677 * C235518) / C235669 -
                           (C219681 * C235670) / C218847 + C236244;
    const double C161713 =
        C236244 - ((C162585 * C235524) / p + (C219919 * C235674) / C218847);
    const double C166153 = C235975 - (C163010 * C235517) / p - C235976 -
                           (C220578 * C235670) / C218847;
    const double C166168 =
        -((C163010 * C235524) / p + (C220578 * C235674) / C218847);
    const double C236247 = C235966 / C235521;
    const double C166198 = (3 * C235966) / p - ((C163010 * C235527) / p +
                                                (C220578 * C235676) / C218847);
    const double C236297 = C236142 / C235521;
    const double C187719 = (3 * C236142) / p - ((C181729 * C235517) / p +
                                                (C225702 * C235670) / C218847);
    const double C236151 = C181729 - C235823;
    const double C182761 =
        C236294 - ((C184366 * C235517) / p + (C225177 * C235670) / C218847);
    const double C184954 =
        C236294 - ((C184708 * C235527) / p + (C225444 * C235676) / C218847);
    const double C189024 =
        -((C184800 * C235517) / p + (C226016 * C235670) / C218847);
    const double C189087 =
        -((C184800 * C235527) / p + (C226016 * C235676) / C218847);
    const double C236298 = C236149 / C235521;
    const double C189056 = C235967 - (C184800 * C235524) / p - C235968 -
                           (C226016 * C235674) / C218847 + (3 * C236149) / p;
    const double C236158 = C184800 - C235827;
    const double C183576 =
        C236296 - ((C186300 * C235517) / p + (C225298 * C235670) / C218847);
    const double C185564 = C235954 - (C186426 * C235524) / p - C235955 -
                           (C225530 * C235674) / C218847 + C236296;
    const double C189953 =
        -((C186845 * C235517) / p + (C226176 * C235670) / C218847);
    const double C189968 = C235975 - (C186845 * C235524) / p - C235976 -
                           (C226176 * C235674) / C218847;
    const double C236299 = C236150 / C235521;
    const double C189998 = (3 * C236150) / p - ((C186845 * C235527) / p +
                                                (C226176 * C235676) / C218847);
    const double C236333 = C236202 / C235521;
    const double C211432 = (3 * C236202) / p - ((C205488 * C235517) / p +
                                                (C231233 * C235670) / C218847);
    const double C236205 = C205488 - C235871;
    const double C206513 =
        C236330 - ((C208107 * C235517) / p + (C230709 * C235670) / C218847);
    const double C208688 = C235946 - (C208448 * C235527) / p - C235947 -
                           (C230975 * C235676) / C218847 + C236330;
    const double C212738 =
        -((C208539 * C235517) / p + (C231542 * C235670) / C218847);
    const double C212800 = C235967 - (C208539 * C235527) / p - C235968 -
                           (C231542 * C235676) / C218847;
    const double C236334 = C236203 / C235521;
    const double C212768 = (3 * C236203) / p - ((C208539 * C235524) / p +
                                                (C231542 * C235674) / C218847);
    const double C236206 = C208539 - C235872;
    const double C207322 =
        C236332 - ((C210024 * C235517) / p + (C230830 * C235670) / C218847);
    const double C209293 =
        C236332 - ((C210150 * C235524) / p + (C231061 * C235674) / C218847);
    const double C213662 =
        -((C210563 * C235517) / p + (C231702 * C235670) / C218847);
    const double C213677 =
        -((C210563 * C235524) / p + (C231702 * C235674) / C218847);
    const double C236335 = C236204 / C235521;
    const double C213709 = C235975 - (C210563 * C235527) / p - C235976 -
                           (C231702 * C235676) / C218847 + (3 * C236204) / p;
    const double C166515 =
        -((C164098 * C235527) / p + (C220784 * C235676) / C218847);
    const double C166456 =
        (C158297 - (C220200 * C218845) / C218847) / C235521 -
        ((C164204 * C235524) / p + (C220740 * C235674) / C218847);
    const double C166575 =
        -((C164234 * C235524) / p + (C220844 * C235674) / C218847);
    const double C166740 =
        (C159164 - (C220336 * C218845) / C218847) / C235521 -
        ((C164643 * C235527) / p + (C220951 * C235676) / C218847);
    const double C166755 =
        (C159895 - (C220397 * C218845) / C218847) / C235521 -
        ((C164991 * C235524) / p + (C220966 * C235674) / C218847);
    const double C166770 = C235667 * C167284 - (C165791 * C235517) / p -
                           (C220978 * C235518) / C235669 -
                           (C220982 * C235670) / C218847 +
                           (C161891 - (C220562 * C218845) / C218847) / C235521;
    const double C190309 =
        -((C187916 * C235527) / p + (C226383 * C235676) / C218847);
    const double C190250 = C235667 * C166825 - (C188025 * C235524) / p -
                           (C226333 * C235518) / C235669 -
                           (C226338 * C235674) / C218847 +
                           (C182188 - (C225807 * C218845) / C218847) / C235521;
    const double C190369 = C235667 * C166840 - (C188055 * C235524) / p -
                           (C226439 * C235518) / C235669 -
                           (C226444 * C235674) / C218847;
    const double C190530 =
        (C183046 - (C225941 * C218845) / C218847) / C235521 -
        ((C188461 * C235527) / p + (C226547 * C235676) / C218847);
    const double C190545 = C235667 * C166855 - (C188807 * C235524) / p -
                           (C226558 * C235518) / C235669 -
                           (C226563 * C235674) / C218847 +
                           (C183768 - (C226001 * C218845) / C218847) / C235521;
    const double C190560 =
        (C185743 - (C226161 * C218845) / C218847) / C235521 -
        ((C189597 * C235517) / p + (C226578 * C235670) / C218847);
    const double C214023 = C235667 * C166602 - (C211628 * C235527) / p -
                           (C231900 * C235518) / C235669 -
                           (C231906 * C235676) / C218847;
    const double C213964 =
        (C205943 - (C231335 * C218845) / C218847) / C235521 -
        ((C211735 * C235524) / p + (C231861 * C235674) / C218847);
    const double C214083 =
        -((C211766 * C235524) / p + (C231965 * C235674) / C218847);
    const double C214244 = C235667 * C166632 - (C212176 * C235527) / p -
                           (C232063 * C235518) / C235669 -
                           (C232069 * C235676) / C218847 +
                           (C206796 - (C231468 * C218845) / C218847) / C235521;
    const double C214259 =
        (C207513 - (C231527 * C218845) / C218847) / C235521 -
        ((C212521 * C235524) / p + (C232084 * C235674) / C218847);
    const double C214274 =
        (C209473 - (C231687 * C218845) / C218847) / C235521 -
        ((C213311 * C235517) / p + (C232099 * C235670) / C218847);
    const double C220755 =
        C236261 - ((C220141 * C235524) / p + (C222351 * C235674) / C218847);
    const double C220815 =
        C236261 - ((C220185 * C235527) / p + (C222397 * C235676) / C218847);
    const double C220892 = C235667 * C220256 - (C220260 * C235517) / p -
                           (C222455 * C235518) / C235669 -
                           (C222459 * C235670) / C218847 + C236262;
    const double C221147 =
        C236262 - ((C220472 * C235527) / p + (C222610 * C235676) / C218847);
    const double C220800 = C235667 * C220348 - (C220352 * C235517) / p -
                           (C222378 * C235518) / C235669 -
                           (C222382 * C235670) / C218847 +
                           (C219681 - (C222129 * C218845) / C218847) / p;
    const double C235547 = C220517 * C218845;
    const double C220936 = C236053 - (C220517 * C235517) / p - C236054 -
                           (C222475 * C235670) / C218847;
    const double C221131 =
        (C219919 - (C222219 * C218845) / C218847) / p -
        ((C220517 * C235524) / p + (C222475 * C235674) / C218847);
    const double C235727 = C235548 / C218847;
    const double C221028 = C235667 * C220378 - (C220382 * C235517) / p -
                           (C222549 * C235518) / C235669 -
                           (C222553 * C235670) / C218847 + C236263;
    const double C221223 =
        C236263 - ((C220546 * C235524) / p + (C222653 * C235674) / C218847);
    const double C226354 = C235667 * C225741 - (C225746 * C235524) / p -
                           (C227915 * C235518) / C235669 -
                           (C227920 * C235674) / C218847 + C236311;
    const double C226414 =
        C236311 - ((C225791 * C235527) / p + (C227966 * C235676) / C218847);
    const double C226489 =
        C236312 - ((C225866 * C235517) / p + (C228025 * C235670) / C218847);
    const double C226738 =
        C236312 - ((C226074 * C235527) / p + (C228173 * C235676) / C218847);
    const double C226398 =
        (C225298 - (C227699 * C218845) / C218847) / p -
        ((C225956 * C235517) / p + (C227951 * C235670) / C218847);
    const double C235597 = C226117 * C218845;
    const double C226532 =
        -((C226117 * C235517) / p + (C228040 * C235670) / C218847);
    const double C226723 = C236053 - (C226117 * C235524) / p - C236054 -
                           (C228040 * C235674) / C218847 +
                           (C225530 - (C227788 * C218845) / C218847) / p;
    const double C235829 = C235598 / C218847;
    const double C226622 =
        C236313 - ((C225985 * C235517) / p + (C228116 * C235670) / C218847);
    const double C226811 = C235667 * C220618 - (C226146 * C235524) / p -
                           (C228212 * C235518) / C235669 -
                           (C228217 * C235674) / C218847 + C236313;
    const double C231876 =
        C236347 - ((C231276 * C235524) / p + (C233435 * C235674) / C218847);
    const double C231936 = C235667 * C225832 - (C231320 * C235527) / p -
                           (C233475 * C235518) / C235669 -
                           (C233481 * C235676) / C218847 + C236347;
    const double C232010 =
        C236348 - ((C231393 * C235517) / p + (C233540 * C235670) / C218847);
    const double C232259 = C235667 * C220498 - (C231600 * C235527) / p -
                           (C233683 * C235518) / C235669 -
                           (C233689 * C235676) / C218847 + C236348;
    const double C231921 =
        (C230830 - (C233216 * C218845) / C218847) / p -
        ((C231483 * C235517) / p + (C233465 * C235670) / C218847);
    const double C235639 = C231643 * C218845;
    const double C232053 =
        -((C231643 * C235517) / p + (C233555 * C235670) / C218847);
    const double C232244 =
        (C231061 - (C233305 * C218845) / C218847) / p -
        ((C231643 * C235524) / p + (C233555 * C235674) / C218847);
    const double C235874 = C235640 / C218847;
    const double C232143 =
        C236349 - ((C231512 * C235517) / p + (C233631 * C235670) / C218847);
    const double C232332 =
        C236349 - ((C231672 * C235524) / p + (C233732 * C235674) / C218847);
    const double C164068 =
        C236245 - ((C158487 * C235524) / p + (C220141 * C235674) / C218847);
    const double C164189 =
        C236245 - ((C158545 * C235527) / p + (C220185 * C235676) / C218847);
    const double C166394 =
        -((C163898 * C235524) / p + (C220637 * C235674) / C218847);
    const double C166410 =
        -((C163898 * C235527) / p + (C220637 * C235676) / C218847);
    const double C236248 = C235981 / C235521;
    const double C166320 = C235979 - (C163898 * C235517) / p - C235980 -
                           (C220637 * C235670) / C218847 +
                           (7 * C235981) / C235521;
    const double C164418 = C235961 - (C158881 * C235517) / p - C235962 -
                           (C220244 * C235670) / C218847 +
                           (C160505 - (C219557 * C218845) / C218847) / p;
    const double C164478 =
        -((C158881 * C235527) / p + (C220244 * C235676) / C218847);
    const double C165340 = C235969 - (C161098 * C235517) / p - C235970 -
                           (C220457 * C235670) / C218847;
    const double C165385 =
        (C160856 - (C219831 * C218845) / C218847) / p -
        ((C161098 * C235527) / p + (C220457 * C235676) / C218847);
    const double C167152 = C235995 - (C165280 * C235517) / p - C235996 -
                           (C221072 * C235670) / C218847;
    const double C164448 = C235667 * C165122 - (C161218 * C235517) / p -
                           (C220256 * C235518) / C235669 -
                           (C220260 * C235670) / C218847 + C236246;
    const double C165355 =
        C236246 - ((C161263 * C235527) / p + (C220472 * C235676) / C218847);
    const double C167137 = C235993 - (C165249 * C235517) / p - C235994 -
                           (C221057 * C235670) / C218847;
    const double C167167 =
        -((C165249 * C235527) / p + (C221057 * C235676) / C218847);
    const double C236249 = C235986 / C235521;
    const double C167093 =
        (7 * C235986) / C235521 -
        ((C165249 * C235524) / p + (C221057 * C235674) / C218847);
    const double C164886 = C235964 - (C159704 * C235517) / p - C235965 -
                           (C220352 * C235670) / C218847 +
                           (C162457 - (C219681 * C218845) / C218847) / p;
    const double C164901 =
        -((C159704 * C235524) / p + (C220352 * C235674) / C218847);
    const double C165686 = C235973 - (C161713 * C235517) / p - C235974 -
                           (C220517 * C235670) / C218847;
    const double C165701 =
        (C162585 - (C219919 * C218845) / C218847) / p -
        ((C161713 * C235524) / p + (C220517 * C235674) / C218847);
    const double C167636 = C236003 - (C166168 * C235517) / p - C236004 -
                           (C221192 * C235670) / C218847;
    const double C164931 = C235667 * C165969 - (C163159 * C235517) / p -
                           (C220378 * C235518) / C235669 -
                           (C220382 * C235670) / C218847 + C236247;
    const double C165731 =
        C236247 - ((C163174 * C235524) / p + (C220546 * C235674) / C218847);
    const double C167651 = C236005 - (C166198 * C235517) / p - C236006 -
                           (C221252 * C235670) / C218847;
    const double C167666 =
        -((C166198 * C235524) / p + (C221252 * C235674) / C218847);
    const double C187885 = C235667 * C163955 - (C182378 * C235524) / p -
                           (C225741 * C235518) / C235669 -
                           (C225746 * C235674) / C218847 + C236297;
    const double C188010 =
        C236297 - ((C182438 * C235527) / p + (C225791 * C235676) / C218847);
    const double C190190 = C235979 - (C187719 * C235524) / p - C235980 -
                           (C226233 * C235674) / C218847;
    const double C190205 =
        -((C187719 * C235527) / p + (C226233 * C235676) / C218847);
    const double C236300 = C236151 / C235521;
    const double C190117 =
        (7 * C236151) / C235521 -
        ((C187719 * C235517) / p + (C226233 * C235670) / C218847);
    const double C188232 =
        (C184366 - (C225177 * C218845) / C218847) / p -
        ((C182761 * C235517) / p + (C225851 * C235670) / C218847);
    const double C188293 =
        -((C182761 * C235527) / p + (C225851 * C235676) / C218847);
    const double C189150 =
        -((C184954 * C235517) / p + (C226059 * C235670) / C218847);
    const double C189195 =
        (C184708 - (C225444 * C218845) / C218847) / p -
        ((C184954 * C235527) / p + (C226059 * C235676) / C218847);
    const double C190934 =
        -((C189087 * C235517) / p + (C226666 * C235670) / C218847);
    const double C188263 =
        C236298 - ((C185074 * C235517) / p + (C225866 * C235670) / C218847);
    const double C189165 =
        C236298 - ((C185120 * C235527) / p + (C226074 * C235676) / C218847);
    const double C190919 =
        -((C189056 * C235517) / p + (C226651 * C235670) / C218847);
    const double C190950 =
        -((C189056 * C235527) / p + (C226651 * C235676) / C218847);
    const double C236301 = C236158 / C235521;
    const double C190874 = C235993 - (C189056 * C235524) / p - C235994 -
                           (C226651 * C235674) / C218847 +
                           (7 * C236158) / C235521;
    const double C188702 =
        (C186300 - (C225298 * C218845) / C218847) / p -
        ((C183576 * C235517) / p + (C225956 * C235670) / C218847);
    const double C188717 = C235964 - (C183576 * C235524) / p - C235965 -
                           (C225956 * C235674) / C218847;
    const double C189492 =
        -((C185564 * C235517) / p + (C226117 * C235670) / C218847);
    const double C189507 = C235973 - (C185564 * C235524) / p - C235974 -
                           (C226117 * C235674) / C218847 +
                           (C186426 - (C225530 * C218845) / C218847) / p;
    const double C191412 =
        -((C189968 * C235517) / p + (C226782 * C235670) / C218847);
    const double C188747 =
        C236299 - ((C186995 * C235517) / p + (C225985 * C235670) / C218847);
    const double C189537 = C235977 - (C187010 * C235524) / p - C235978 -
                           (C226146 * C235674) / C218847 + C236299;
    const double C191427 =
        -((C189998 * C235517) / p + (C226840 * C235670) / C218847);
    const double C191442 = C236005 - (C189998 * C235524) / p - C236006 -
                           (C226840 * C235674) / C218847;
    const double C211598 =
        C236333 - ((C206133 * C235524) / p + (C231276 * C235674) / C218847);
    const double C211720 = C236147 - (C206191 * C235527) / p - C236148 -
                           (C231320 * C235676) / C218847 + C236333;
    const double C213904 =
        -((C211432 * C235524) / p + (C231759 * C235674) / C218847);
    const double C213919 = C235979 - (C211432 * C235527) / p - C235980 -
                           (C231759 * C235676) / C218847;
    const double C236336 = C236205 / C235521;
    const double C213831 =
        (7 * C236205) / C235521 -
        ((C211432 * C235517) / p + (C231759 * C235670) / C218847);
    const double C211946 =
        (C208107 - (C230709 * C218845) / C218847) / p -
        ((C206513 * C235517) / p + (C231378 * C235670) / C218847);
    const double C212007 = C235961 - (C206513 * C235527) / p - C235962 -
                           (C231378 * C235676) / C218847;
    const double C212860 =
        -((C208688 * C235517) / p + (C231585 * C235670) / C218847);
    const double C212906 = C235969 - (C208688 * C235527) / p - C235970 -
                           (C231585 * C235676) / C218847 +
                           (C208448 - (C230975 * C218845) / C218847) / p;
    const double C214646 =
        -((C212800 * C235517) / p + (C232187 * C235670) / C218847);
    const double C211976 =
        C236334 - ((C208810 * C235517) / p + (C231393 * C235670) / C218847);
    const double C212875 = C235971 - (C208855 * C235527) / p - C235972 -
                           (C231600 * C235676) / C218847 + C236334;
    const double C214631 =
        -((C212768 * C235517) / p + (C232172 * C235670) / C218847);
    const double C214661 = C235993 - (C212768 * C235527) / p - C235994 -
                           (C232172 * C235676) / C218847;
    const double C236337 = C236206 / C235521;
    const double C214587 =
        (7 * C236206) / C235521 -
        ((C212768 * C235524) / p + (C232172 * C235674) / C218847);
    const double C212412 =
        (C210024 - (C230830 * C218845) / C218847) / p -
        ((C207322 * C235517) / p + (C231483 * C235670) / C218847);
    const double C212427 =
        -((C207322 * C235524) / p + (C231483 * C235674) / C218847);
    const double C213202 =
        -((C209293 * C235517) / p + (C231643 * C235670) / C218847);
    const double C213217 =
        (C210150 - (C231061 * C218845) / C218847) / p -
        ((C209293 * C235524) / p + (C231643 * C235674) / C218847);
    const double C215120 =
        -((C213677 * C235517) / p + (C232303 * C235670) / C218847);
    const double C212458 =
        C236335 - ((C210715 * C235517) / p + (C231512 * C235670) / C218847);
    const double C213248 =
        C236335 - ((C210730 * C235524) / p + (C231672 * C235674) / C218847);
    const double C215136 =
        -((C213709 * C235517) / p + (C232361 * C235670) / C218847);
    const double C215152 =
        -((C213709 * C235524) / p + (C232361 * C235674) / C218847);
    const double C235726 = C235547 / C218847;
    const double C235990 = C163010 - C235727;
    const double C235828 = C235597 / C218847;
    const double C236160 = C186845 - C235829;
    const double C235873 = C235639 / C218847;
    const double C236208 = C210563 - C235874;
    const double C166471 =
        (C158487 - (C220141 * C218845) / C218847) / p -
        ((C164068 * C235524) / p + (C220755 * C235674) / C218847);
    const double C166500 =
        -((C164068 * C235527) / p + (C220755 * C235676) / C218847);
    const double C166545 =
        -((C164189 * C235524) / p + (C220815 * C235674) / C218847);
    const double C166560 =
        (C158545 - (C220185 * C218845) / C218847) / p -
        ((C164189 * C235527) / p + (C220815 * C235676) / C218847);
    const double C166349 =
        C236248 - ((C163959 * C235524) / p + (C220652 * C235674) / C218847);
    const double C166378 =
        C236248 - ((C164005 * C235527) / p + (C220667 * C235676) / C218847);
    const double C166441 =
        C235982 - (C164418 * C235517) / p - C235983 -
        (C220725 * C235670) / C218847 +
        (3 * (C158881 - (C220244 * C218845) / C218847)) / C235521;
    const double C166695 =
        -((C164418 * C235527) / p + (C220725 * C235676) / C218847);
    const double C166665 = C235667 * C167430 - (C165340 * C235517) / p -
                           (C220872 * C235518) / C235669 -
                           (C220876 * C235670) / C218847 +
                           (C161098 - (C220457 * C218845) / C218847) / C235521;
    const double C167212 = C235667 * C191120 - (C165385 * C235517) / p -
                           (C221159 * C235518) / C235669 -
                           (C221163 * C235670) / C218847;
    const double C166680 = C235987 - (C164448 * C235517) / p - C235988 -
                           (C220892 * C235670) / C218847 +
                           (C161218 - (C220260 * C218845) / C218847) / p;
    const double C166710 =
        -((C164448 * C235527) / p + (C220892 * C235676) / C218847);
    const double C167197 = C235997 - (C165355 * C235517) / p - C235998 -
                           (C221147 * C235670) / C218847;
    const double C167227 =
        (C161263 - (C220472 * C218845) / C218847) / p -
        ((C165355 * C235527) / p + (C221147 * C235676) / C218847);
    const double C166650 = C235667 * C190914 - (C165219 * C235517) / p -
                           (C220856 * C235518) / C235669 -
                           (C220860 * C235670) / C218847 + C236249;
    const double C167122 =
        C236249 - ((C165280 * C235527) / p + (C221072 * C235676) / C218847);
    const double C166530 =
        C235984 - (C164886 * C235517) / p - C235985 -
        (C220800 * C235670) / C218847 +
        (3 * (C159704 - (C220352 * C218845) / C218847)) / C235521;
    const double C166958 =
        -((C164886 * C235524) / p + (C220800 * C235674) / C218847);
    const double C167373 = C235999 - (C165701 * C235517) / p - C236000 -
                           (C221131 * C235670) / C218847;
    const double C166973 = C235991 - (C164931 * C235517) / p - C235992 -
                           (C221028 * C235670) / C218847 +
                           (C163159 - (C220382 * C218845) / C218847) / p;
    const double C166988 =
        -((C164931 * C235524) / p + (C221028 * C235674) / C218847);
    const double C167388 = C236001 - (C165731 * C235517) / p - C236002 -
                           (C221223 * C235670) / C218847;
    const double C167403 =
        (C163174 - (C220546 * C218845) / C218847) / p -
        ((C165731 * C235524) / p + (C221223 * C235674) / C218847);
    const double C190265 = C236154 - (C187885 * C235524) / p - C236155 -
                           (C226354 * C235674) / C218847 +
                           (C182378 - (C225746 * C218845) / C218847) / p;
    const double C190294 =
        -((C187885 * C235527) / p + (C226354 * C235676) / C218847);
    const double C190339 = C236156 - (C188010 * C235524) / p - C236157 -
                           (C226414 * C235674) / C218847;
    const double C190354 =
        (C182438 - (C225791 * C218845) / C218847) / p -
        ((C188010 * C235527) / p + (C226414 * C235676) / C218847);
    const double C190146 = C235667 * C166390 - (C187780 * C235524) / p -
                           (C226244 * C235518) / C235669 -
                           (C226249 * C235674) / C218847 + C236300;
    const double C190175 =
        C236300 - ((C187825 * C235527) / p + (C226264 * C235676) / C218847);
    const double C190235 =
        (3 * (C182761 - (C225851 * C218845) / C218847)) / C235521 -
        ((C188232 * C235517) / p + (C226322 * C235670) / C218847);
    const double C190485 =
        -((C188232 * C235527) / p + (C226322 * C235676) / C218847);
    const double C190455 =
        (C184954 - (C226059 * C218845) / C218847) / C235521 -
        ((C189150 * C235517) / p + (C226474 * C235670) / C218847);
    const double C190995 =
        -((C189195 * C235517) / p + (C226753 * C235670) / C218847);
    const double C190470 =
        (C185074 - (C225866 * C218845) / C218847) / p -
        ((C188263 * C235517) / p + (C226489 * C235670) / C218847);
    const double C190500 =
        -((C188263 * C235527) / p + (C226489 * C235676) / C218847);
    const double C190980 =
        -((C189165 * C235517) / p + (C226738 * C235670) / C218847);
    const double C191010 =
        (C185120 - (C226074 * C218845) / C218847) / p -
        ((C189165 * C235527) / p + (C226738 * C235676) / C218847);
    const double C190440 =
        C236301 - ((C189024 * C235517) / p + (C226459 * C235670) / C218847);
    const double C190903 =
        C236301 - ((C189087 * C235527) / p + (C226666 * C235676) / C218847);
    const double C190324 =
        (3 * (C183576 - (C225956 * C218845) / C218847)) / C235521 -
        ((C188702 * C235517) / p + (C226398 * C235670) / C218847);
    const double C190744 = C235984 - (C188702 * C235524) / p - C235985 -
                           (C226398 * C235674) / C218847;
    const double C191154 =
        -((C189507 * C235517) / p + (C226723 * C235670) / C218847);
    const double C190759 =
        (C186995 - (C225985 * C218845) / C218847) / p -
        ((C188747 * C235517) / p + (C226622 * C235670) / C218847);
    const double C190774 = C235991 - (C188747 * C235524) / p - C235992 -
                           (C226622 * C235674) / C218847;
    const double C191169 =
        -((C189537 * C235517) / p + (C226811 * C235670) / C218847);
    const double C191184 = C236001 - (C189537 * C235524) / p - C236002 -
                           (C226811 * C235674) / C218847 +
                           (C187010 - (C226146 * C218845) / C218847) / p;
    const double C213979 =
        (C206133 - (C231276 * C218845) / C218847) / p -
        ((C211598 * C235524) / p + (C231876 * C235674) / C218847);
    const double C214008 = C236154 - (C211598 * C235527) / p - C236155 -
                           (C231876 * C235676) / C218847;
    const double C214053 =
        -((C211720 * C235524) / p + (C231936 * C235674) / C218847);
    const double C214068 = C236156 - (C211720 * C235527) / p - C236157 -
                           (C231936 * C235676) / C218847 +
                           (C206191 - (C231320 * C218845) / C218847) / p;
    const double C213860 =
        C236336 - ((C211491 * C235524) / p + (C231774 * C235674) / C218847);
    const double C213889 = C236152 - (C211538 * C235527) / p - C236153 -
                           (C231789 * C235676) / C218847 + C236336;
    const double C213949 =
        (3 * (C206513 - (C231378 * C218845) / C218847)) / C235521 -
        ((C211946 * C235517) / p + (C231846 * C235670) / C218847);
    const double C214199 = C235982 - (C211946 * C235527) / p - C235983 -
                           (C231846 * C235676) / C218847;
    const double C214169 =
        (C208688 - (C231585 * C218845) / C218847) / C235521 -
        ((C212860 * C235517) / p + (C231995 * C235670) / C218847);
    const double C214706 =
        -((C212906 * C235517) / p + (C232274 * C235670) / C218847);
    const double C214184 =
        (C208810 - (C231393 * C218845) / C218847) / p -
        ((C211976 * C235517) / p + (C232010 * C235670) / C218847);
    const double C214214 = C235987 - (C211976 * C235527) / p - C235988 -
                           (C232010 * C235676) / C218847;
    const double C214691 =
        -((C212875 * C235517) / p + (C232259 * C235670) / C218847);
    const double C214721 = C235997 - (C212875 * C235527) / p - C235998 -
                           (C232259 * C235676) / C218847 +
                           (C208855 - (C231600 * C218845) / C218847) / p;
    const double C214154 =
        C236337 - ((C212738 * C235517) / p + (C231980 * C235670) / C218847);
    const double C214616 = C235995 - (C212800 * C235527) / p - C235996 -
                           (C232187 * C235676) / C218847 + C236337;
    const double C214038 =
        (3 * (C207322 - (C231483 * C218845) / C218847)) / C235521 -
        ((C212412 * C235517) / p + (C231921 * C235670) / C218847);
    const double C214458 =
        -((C212412 * C235524) / p + (C231921 * C235674) / C218847);
    const double C214863 =
        -((C213217 * C235517) / p + (C232244 * C235670) / C218847);
    const double C214473 =
        (C210715 - (C231512 * C218845) / C218847) / p -
        ((C212458 * C235517) / p + (C232143 * C235670) / C218847);
    const double C214488 =
        -((C212458 * C235524) / p + (C232143 * C235674) / C218847);
    const double C214878 =
        -((C213248 * C235517) / p + (C232332 * C235670) / C218847);
    const double C214893 =
        (C210730 - (C231672 * C218845) / C218847) / p -
        ((C213248 * C235524) / p + (C232332 * C235674) / C218847);
    const double C235989 = C161713 - C235726;
    const double C236250 = C235990 / C235521;
    const double C167621 =
        (7 * C235990) / C235521 -
        ((C166198 * C235527) / p + (C221252 * C235676) / C218847);
    const double C236159 = C185564 - C235828;
    const double C236302 = C236160 / C235521;
    const double C191397 =
        (7 * C236160) / C235521 -
        ((C189998 * C235527) / p + (C226840 * C235676) / C218847);
    const double C236207 = C209293 - C235873;
    const double C236338 = C236208 / C235521;
    const double C215105 = C236005 - (C213709 * C235527) / p - C236006 -
                           (C232361 * C235676) / C218847 +
                           (7 * C236208) / C235521;
    const double C166725 = C235667 * C167693 - (C165686 * C235517) / p -
                           (C220932 * C235518) / C235669 -
                           (C220936 * C235670) / C218847 + C235989 / C235521;
    const double C167182 =
        (3 * C235989) / C235521 -
        ((C165701 * C235524) / p + (C221131 * C235674) / C218847);
    const double C166943 = C235667 * C215130 - (C166153 * C235517) / p -
                           (C220994 * C235518) / C235669 -
                           (C220998 * C235670) / C218847 + C236250;
    const double C167358 =
        C236250 - ((C166168 * C235524) / p + (C221192 * C235674) / C218847);
    const double C190515 = C236159 / C235521 - ((C189492 * C235517) / p +
                                                (C226532 * C235670) / C218847);
    const double C190965 = C235999 - (C189507 * C235524) / p - C236000 -
                           (C226723 * C235674) / C218847 +
                           (3 * C236159) / C235521;
    const double C190729 =
        C236302 - ((C189953 * C235517) / p + (C226593 * C235670) / C218847);
    const double C191139 = C236003 - (C189968 * C235524) / p - C236004 -
                           (C226782 * C235674) / C218847 + C236302;
    const double C214229 = C236207 / C235521 - ((C213202 * C235517) / p +
                                                (C232053 * C235670) / C218847);
    const double C214676 =
        (3 * C236207) / C235521 -
        ((C213217 * C235524) / p + (C232244 * C235674) / C218847);
    const double C214443 =
        C236338 - ((C213662 * C235517) / p + (C232114 * C235670) / C218847);
    const double C214848 =
        C236338 - ((C213677 * C235524) / p + (C232303 * C235674) / C218847);
    vrx[0] = C143659;
    vrx[1] = C143676;
    vrx[2] = C143693;
    vrx[3] = C145014;
    vrx[4] = C145032;
    vrx[5] = C145944;
    vrx[6] = C145962;
    vrx[7] = C146843;
    vrx[8] = C147305;
    vrx[9] = C147766;
    vrx[10] = C148252;
    vrx[11] = C148268;
    vrx[12] = C149152;
    vrx[13] = C149169;
    vrx[14] = C150076;
    vrx[15] = C150093;
    vrx[16] = C150974;
    vrx[17] = C151436;
    vrx[18] = C151894;
    vrx[19] = C152378;
    vrx[20] = C152394;
    vrx[21] = C153240;
    vrx[22] = C153714;
    vrx[23] = C153731;
    vrx[24] = C154608;
    vrx[25] = C155070;
    vrx[26] = C155530;
    vrx[27] = C155986;
    vrx[28] = C156430;
    vrx[29] = C156869;
    vrx[30] = C157313;
    vrx[31] = C157755;
    vrx[32] = C157802;
    vrx[33] = C157833;
    vrx[34] = C157848;
    vrx[35] = C157895;
    vrx[36] = C157943;
    vrx[37] = C158049;
    vrx[38] = C158078;
    vrx[39] = C158297;
    vrx[40] = C158326;
    vrx[41] = C158487;
    vrx[42] = C158545;
    vrx[43] = C158574;
    vrx[44] = C158589;
    vrx[45] = C158711;
    vrx[46] = C158757;
    vrx[47] = C158789;
    vrx[48] = C158881;
    vrx[49] = C159030;
    vrx[50] = C159045;
    vrx[51] = C159164;
    vrx[52] = C159222;
    vrx[53] = C159251;
    vrx[54] = C159359;
    vrx[55] = C159437;
    vrx[56] = C159704;
    vrx[57] = C159823;
    vrx[58] = C159895;
    vrx[59] = C159924;
    vrx[60] = C160505;
    vrx[61] = C160601;
    vrx[62] = C160672;
    vrx[63] = C160823;
    vrx[64] = C160856;
    vrx[65] = C160949;
    vrx[66] = C161098;
    vrx[67] = C161113;
    vrx[68] = C161218;
    vrx[69] = C161248;
    vrx[70] = C161263;
    vrx[71] = C161417;
    vrx[72] = C161713;
    vrx[73] = C161818;
    vrx[74] = C161862;
    vrx[75] = C161891;
    vrx[76] = C162457;
    vrx[77] = C162540;
    vrx[78] = C162585;
    vrx[79] = C162741;
    vrx[80] = C163010;
    vrx[81] = C163115;
    vrx[82] = C163159;
    vrx[83] = C163174;
    vrx[84] = C163898;
    vrx[85] = C163959;
    vrx[86] = C164005;
    vrx[87] = C164068;
    vrx[88] = C164098;
    vrx[89] = C164128;
    vrx[90] = C164189;
    vrx[91] = C164204;
    vrx[92] = C164234;
    vrx[93] = C164294;
    vrx[94] = C164418;
    vrx[95] = C164448;
    vrx[96] = C164478;
    vrx[97] = C164538;
    vrx[98] = C164553;
    vrx[99] = C164583;
    vrx[100] = C164643;
    vrx[101] = C164886;
    vrx[102] = C164901;
    vrx[103] = C164931;
    vrx[104] = C164991;
    vrx[105] = C165219;
    vrx[106] = C165249;
    vrx[107] = C165280;
    vrx[108] = C165340;
    vrx[109] = C165355;
    vrx[110] = C165385;
    vrx[111] = C165445;
    vrx[112] = C165686;
    vrx[113] = C165701;
    vrx[114] = C165731;
    vrx[115] = C165791;
    vrx[116] = C166153;
    vrx[117] = C166168;
    vrx[118] = C166198;
    vrx[119] = C166258;
    vrx[120] = C166320;
    vrx[121] = C166349;
    vrx[122] = C166378;
    vrx[123] = C166394;
    vrx[124] = C166410;
    vrx[125] = C166426;
    vrx[126] = C166441;
    vrx[127] = C166456;
    vrx[128] = C166471;
    vrx[129] = C166500;
    vrx[130] = C166515;
    vrx[131] = C166530;
    vrx[132] = C166545;
    vrx[133] = C166560;
    vrx[134] = C166575;
    vrx[135] = C166650;
    vrx[136] = C166665;
    vrx[137] = C166680;
    vrx[138] = C166695;
    vrx[139] = C166710;
    vrx[140] = C166725;
    vrx[141] = C166740;
    vrx[142] = C166755;
    vrx[143] = C166770;
    vrx[144] = C166943;
    vrx[145] = C166958;
    vrx[146] = C166973;
    vrx[147] = C166988;
    vrx[148] = C167093;
    vrx[149] = C167122;
    vrx[150] = C167137;
    vrx[151] = C167152;
    vrx[152] = C167167;
    vrx[153] = C167182;
    vrx[154] = C167197;
    vrx[155] = C167212;
    vrx[156] = C167227;
    vrx[157] = C167358;
    vrx[158] = C167373;
    vrx[159] = C167388;
    vrx[160] = C167403;
    vrx[161] = C167621;
    vrx[162] = C167636;
    vrx[163] = C167651;
    vrx[164] = C167666;
    vry[0] = C167803;
    vry[1] = C167819;
    vry[2] = C167835;
    vry[3] = C169139;
    vry[4] = C169156;
    vry[5] = C170053;
    vry[6] = C170070;
    vry[7] = C170936;
    vry[8] = C171385;
    vry[9] = C171833;
    vry[10] = C172308;
    vry[11] = C172323;
    vry[12] = C173200;
    vry[13] = C173216;
    vry[14] = C174108;
    vry[15] = C174124;
    vry[16] = C174990;
    vry[17] = C175439;
    vry[18] = C175884;
    vry[19] = C176357;
    vry[20] = C176372;
    vry[21] = C177213;
    vry[22] = C177682;
    vry[23] = C177698;
    vry[24] = C178560;
    vry[25] = C179009;
    vry[26] = C179456;
    vry[27] = C179901;
    vry[28] = C180342;
    vry[29] = C180778;
    vry[30] = C181219;
    vry[31] = C181656;
    vry[32] = C181700;
    vry[33] = C181729;
    vry[34] = C181743;
    vry[35] = C181787;
    vry[36] = C181832;
    vry[37] = C181938;
    vry[38] = C181967;
    vry[39] = C182188;
    vry[40] = C182217;
    vry[41] = C182378;
    vry[42] = C182438;
    vry[43] = C182467;
    vry[44] = C182482;
    vry[45] = C182597;
    vry[46] = C182640;
    vry[47] = C182670;
    vry[48] = C182761;
    vry[49] = C182912;
    vry[50] = C182927;
    vry[51] = C183046;
    vry[52] = C183105;
    vry[53] = C183134;
    vry[54] = C183235;
    vry[55] = C183308;
    vry[56] = C183576;
    vry[57] = C183695;
    vry[58] = C183768;
    vry[59] = C183797;
    vry[60] = C184366;
    vry[61] = C184463;
    vry[62] = C184534;
    vry[63] = C184677;
    vry[64] = C184708;
    vry[65] = C184800;
    vry[66] = C184954;
    vry[67] = C184969;
    vry[68] = C185074;
    vry[69] = C185105;
    vry[70] = C185120;
    vry[71] = C185264;
    vry[72] = C185564;
    vry[73] = C185669;
    vry[74] = C185714;
    vry[75] = C185743;
    vry[76] = C186300;
    vry[77] = C186383;
    vry[78] = C186426;
    vry[79] = C186572;
    vry[80] = C186845;
    vry[81] = C186950;
    vry[82] = C186995;
    vry[83] = C187010;
    vry[84] = C187719;
    vry[85] = C187780;
    vry[86] = C187825;
    vry[87] = C187885;
    vry[88] = C187916;
    vry[89] = C187946;
    vry[90] = C188010;
    vry[91] = C188025;
    vry[92] = C188055;
    vry[93] = C188115;
    vry[94] = C188232;
    vry[95] = C188263;
    vry[96] = C188293;
    vry[97] = C188356;
    vry[98] = C188371;
    vry[99] = C188401;
    vry[100] = C188461;
    vry[101] = C188702;
    vry[102] = C188717;
    vry[103] = C188747;
    vry[104] = C188807;
    vry[105] = C189024;
    vry[106] = C189056;
    vry[107] = C189087;
    vry[108] = C189150;
    vry[109] = C189165;
    vry[110] = C189195;
    vry[111] = C189255;
    vry[112] = C189492;
    vry[113] = C189507;
    vry[114] = C189537;
    vry[115] = C189597;
    vry[116] = C189953;
    vry[117] = C189968;
    vry[118] = C189998;
    vry[119] = C190058;
    vry[120] = C190117;
    vry[121] = C190146;
    vry[122] = C190175;
    vry[123] = C190190;
    vry[124] = C190205;
    vry[125] = C190220;
    vry[126] = C190235;
    vry[127] = C190250;
    vry[128] = C190265;
    vry[129] = C190294;
    vry[130] = C190309;
    vry[131] = C190324;
    vry[132] = C190339;
    vry[133] = C190354;
    vry[134] = C190369;
    vry[135] = C190440;
    vry[136] = C190455;
    vry[137] = C190470;
    vry[138] = C190485;
    vry[139] = C190500;
    vry[140] = C190515;
    vry[141] = C190530;
    vry[142] = C190545;
    vry[143] = C190560;
    vry[144] = C190729;
    vry[145] = C190744;
    vry[146] = C190759;
    vry[147] = C190774;
    vry[148] = C190874;
    vry[149] = C190903;
    vry[150] = C190919;
    vry[151] = C190934;
    vry[152] = C190950;
    vry[153] = C190965;
    vry[154] = C190980;
    vry[155] = C190995;
    vry[156] = C191010;
    vry[157] = C191139;
    vry[158] = C191154;
    vry[159] = C191169;
    vry[160] = C191184;
    vry[161] = C191397;
    vry[162] = C191412;
    vry[163] = C191427;
    vry[164] = C191442;
    vrz[0] = C191577;
    vrz[1] = C191593;
    vrz[2] = C191609;
    vrz[3] = C192912;
    vrz[4] = C192929;
    vrz[5] = C193825;
    vrz[6] = C193842;
    vrz[7] = C194707;
    vrz[8] = C195155;
    vrz[9] = C195602;
    vrz[10] = C196076;
    vrz[11] = C196091;
    vrz[12] = C196968;
    vrz[13] = C196984;
    vrz[14] = C197875;
    vrz[15] = C197891;
    vrz[16] = C198756;
    vrz[17] = C199204;
    vrz[18] = C199648;
    vrz[19] = C200120;
    vrz[20] = C200135;
    vrz[21] = C200976;
    vrz[22] = C201445;
    vrz[23] = C201461;
    vrz[24] = C202322;
    vrz[25] = C202770;
    vrz[26] = C203216;
    vrz[27] = C203660;
    vrz[28] = C204101;
    vrz[29] = C204537;
    vrz[30] = C204978;
    vrz[31] = C205415;
    vrz[32] = C205459;
    vrz[33] = C205488;
    vrz[34] = C205502;
    vrz[35] = C205546;
    vrz[36] = C205591;
    vrz[37] = C205695;
    vrz[38] = C205724;
    vrz[39] = C205943;
    vrz[40] = C205972;
    vrz[41] = C206133;
    vrz[42] = C206191;
    vrz[43] = C206220;
    vrz[44] = C206235;
    vrz[45] = C206350;
    vrz[46] = C206393;
    vrz[47] = C206423;
    vrz[48] = C206513;
    vrz[49] = C206662;
    vrz[50] = C206677;
    vrz[51] = C206796;
    vrz[52] = C206854;
    vrz[53] = C206883;
    vrz[54] = C206984;
    vrz[55] = C207057;
    vrz[56] = C207322;
    vrz[57] = C207441;
    vrz[58] = C207513;
    vrz[59] = C207542;
    vrz[60] = C208107;
    vrz[61] = C208203;
    vrz[62] = C208274;
    vrz[63] = C208417;
    vrz[64] = C208448;
    vrz[65] = C208539;
    vrz[66] = C208688;
    vrz[67] = C208703;
    vrz[68] = C208810;
    vrz[69] = C208840;
    vrz[70] = C208855;
    vrz[71] = C208999;
    vrz[72] = C209293;
    vrz[73] = C209400;
    vrz[74] = C209444;
    vrz[75] = C209473;
    vrz[76] = C210024;
    vrz[77] = C210107;
    vrz[78] = C210150;
    vrz[79] = C210296;
    vrz[80] = C210563;
    vrz[81] = C210671;
    vrz[82] = C210715;
    vrz[83] = C210730;
    vrz[84] = C211432;
    vrz[85] = C211491;
    vrz[86] = C211538;
    vrz[87] = C211598;
    vrz[88] = C211628;
    vrz[89] = C211659;
    vrz[90] = C211720;
    vrz[91] = C211735;
    vrz[92] = C211766;
    vrz[93] = C211829;
    vrz[94] = C211946;
    vrz[95] = C211976;
    vrz[96] = C212007;
    vrz[97] = C212067;
    vrz[98] = C212082;
    vrz[99] = C212113;
    vrz[100] = C212176;
    vrz[101] = C212412;
    vrz[102] = C212427;
    vrz[103] = C212458;
    vrz[104] = C212521;
    vrz[105] = C212738;
    vrz[106] = C212768;
    vrz[107] = C212800;
    vrz[108] = C212860;
    vrz[109] = C212875;
    vrz[110] = C212906;
    vrz[111] = C212969;
    vrz[112] = C213202;
    vrz[113] = C213217;
    vrz[114] = C213248;
    vrz[115] = C213311;
    vrz[116] = C213662;
    vrz[117] = C213677;
    vrz[118] = C213709;
    vrz[119] = C213772;
    vrz[120] = C213831;
    vrz[121] = C213860;
    vrz[122] = C213889;
    vrz[123] = C213904;
    vrz[124] = C213919;
    vrz[125] = C213934;
    vrz[126] = C213949;
    vrz[127] = C213964;
    vrz[128] = C213979;
    vrz[129] = C214008;
    vrz[130] = C214023;
    vrz[131] = C214038;
    vrz[132] = C214053;
    vrz[133] = C214068;
    vrz[134] = C214083;
    vrz[135] = C214154;
    vrz[136] = C214169;
    vrz[137] = C214184;
    vrz[138] = C214199;
    vrz[139] = C214214;
    vrz[140] = C214229;
    vrz[141] = C214244;
    vrz[142] = C214259;
    vrz[143] = C214274;
    vrz[144] = C214443;
    vrz[145] = C214458;
    vrz[146] = C214473;
    vrz[147] = C214488;
    vrz[148] = C214587;
    vrz[149] = C214616;
    vrz[150] = C214631;
    vrz[151] = C214646;
    vrz[152] = C214661;
    vrz[153] = C214676;
    vrz[154] = C214691;
    vrz[155] = C214706;
    vrz[156] = C214721;
    vrz[157] = C214848;
    vrz[158] = C214863;
    vrz[159] = C214878;
    vrz[160] = C214893;
    vrz[161] = C215105;
    vrz[162] = C215120;
    vrz[163] = C215136;
    vrz[164] = C215152;
}
