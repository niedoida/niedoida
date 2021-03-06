/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void kinetic_gradient_11(
double ae , 
double be , 
double cc , 
double xAB , 
double yAB , 
double zAB , 
double* const gx , 
double* const gy , 
double* const gz , 
std::size_t matrix_size , 
std::size_t Ai , 
std::size_t Bi ) 
{
    double C1608 = xAB*ae;
    double C1719 = ae*zAB;
    double C1690 = yAB*ae;
    double C1611 = be*zAB;
    double C1610 = be*yAB;
    double C1607 = xAB*be;
    double C1605 = be+ae;
    double C1615 = 2.*C1605;
    double C1630 = 1/C1615;
    double C1631 = std::sqrt( ( Pi/C1605 ) );
    double C1640 = C1607*C1631;
    double C1598 = - ( C1640/C1605 ) ;
    double cnst1 = C1631*C1598;
    double C1606 = C1598*ae;
    double C1761 =  (  ( C1631*ae ) *2. ) /C1615;
    double C1806 = C1631*C1611;
    double C1603 = - ( C1806/C1605 ) ;
    double C1613 = C1603*ae;
    double cnst3 = C1603*C1631;
    double C1642 = C1631/C1615;
    double C1601 = - (  ( C1610*C1631 ) /C1605 ) ;
    double C1612 = C1601*ae;
    double cnst5 = C1601*C1631;
    double C1724 = C1719*C1631;
    double C1718 = C1724/C1605;
    double cnst7 = C1631*C1718;
    double C1695 = C1690*C1631;
    double C1689 = C1695/C1605;
    double cnst11 = C1631*C1689;
    double C1753 = C1631*C1608;
    double C1747 = C1753/C1605;
    double cnst14 = C1631*C1747;
    double cnst15 = C1631*C1631;
    double C1625 = C1613*2;
    double C1609 = std::pow(ae , 2);
    double C1666 = C1631* ( ae- (  ( C1609* ( C1630+ ( std::pow( ( C1610/C1605 )  , 2) )  )  ) *2 )  ) ;
    double C1670 = C1631* ( ae- (  ( C1609* (  ( std::pow( ( C1607/C1605 )  , 2) ) +C1630 )  ) *2 )  ) ;
    double C1622 = std::pow(C1605 , 2);
    double C1664 = C1642- (  ( C1607*C1753 ) /C1622 ) ;
    double cnst23 = C1631*C1664;
    double C1834 = C1642- (  ( C1719*C1806 ) /C1622 ) ;
    double cnst26 = C1834*C1631;
    double C1789 = C1642- (  ( C1610*C1695 ) /C1622 ) ;
    double cnst27 = C1631*C1789;
    double C1763 =  ( C1640*ae ) *2;
    double C1680 =  (  ( be* ( -C1763 )  ) /C1622 ) - (  ( C1607*C1670 ) /C1605 ) ;
    double C1685 =  (  ( C1670/C1615 ) + (  ( C1680*C1608 ) /C1605 )  ) + (  (  (  ( be*C1664 ) *ae ) *2 ) /C1605 ) ;
    double C1770 =  (  ( C1670*C1608 ) /C1605 ) + (  ( C1763*ae ) /C1622 ) ;
    double C1620 = C1606*2;
    double C1668 = C1631* ( ae- (  (  ( C1630+ ( std::pow( ( C1611/C1605 )  , 2) )  ) *C1609 ) *2 )  ) ;
    double C1710 = C1761+ (  (  ( C1690*C1612 ) *2 ) /C1605 ) ;
    double C1764 =  (  (  ( C1606*C1608 ) *2 ) /C1605 ) +C1761;
    double C1737 =  ( - (  ( be*C1631 ) *2 )  ) /C1615;
    double C1711 = C1737- (  (  ( C1610*C1612 ) *2 ) /C1605 ) ;
    double C1713 = C1711*ae;
    double C1886 = C1713*2;
    double C1932 =  ( - ( 6* ( be*C1886 )  )  ) /C1615;
    double C1643 = C1737- (  (  ( C1607*C1606 ) *2 ) /C1605 ) ;
    double C1652 = C1643*ae;
    double C1881 = 2*C1652;
    double C1927 =  ( - ( 6* ( be*C1881 )  )  ) /C1615;
    double C1679 =  (  (  ( - ( 4* ( C1620*be )  )  ) /C1615 ) - (  (  ( C1607*C1652 ) *2 ) /C1605 )  ) *ae;
    double C1931 =  (  ( 6.* ( C1881*ae )  ) /C1615 ) + (  (  ( C1608*C1679 ) *2 ) /C1605 ) ;
    double cnst72 = 2*C1679;
    double C1892 = -cnst72;
    double C1908 =  (  ( C1607*C1679 ) *2 ) /C1605;
    double cnst88 =  (  (  ( C1608* ( C1927-C1908 )  ) /C1605 ) + (  ( cnst72+ ( 6*C1679 )  ) /C1615 )  ) * ( std::pow(C1631 , 2) ) ;
    double C1935 = C1908-C1927;
    double C1884 = C1737- (  (  ( C1613*C1611 ) *2 ) /C1605 ) ;
    double C1896 = C1884*ae;
    double C1888 = C1896*2;
    double C1933 =  ( - ( 6* ( be*C1888 )  )  ) /C1615;
    double C1938 =  (  (  ( - ( 4* ( C1625*be )  )  ) /C1615 ) - (  (  ( C1896*C1611 ) *2 ) /C1605 )  ) *ae;
    double C1930 =  (  (  ( C1719*C1938 ) *2 ) /C1605 ) + (  ( 6.* ( C1888*ae )  ) /C1615 ) ;
    double cnst105 = C1938*2;
    double C1939 = -cnst105;
    double gz100100 =  (  ( C1625* ( C1631*C1685 )  ) + ( C1625* ( C1666*C1664 )  )  ) + (  ( C1939*cnst23 ) /2.0 ) ;
    gz[(Ai + 0) * matrix_size + Bi + 0] += gz100100*cc;
    double C1918 =  (  ( C1938*C1611 ) *2 ) /C1605;
    double C1937 = C1918-C1933;
    double gz001100 =  (  ( cnst14*C1937 ) /2.0 ) + (  ( C1884* ( C1747*C1666 )  ) + ( C1884* ( C1631*C1770 )  )  ) ;
    gz[(Ai + 2) * matrix_size + Bi + 0] += cc*gz001100;
    double cnst124 =  (  (  ( 6*C1938 ) +cnst105 ) /C1615 ) + (  ( C1719* ( C1933-C1918 )  ) /C1605 ) ;
    double C1739 = C1761+ (  (  ( C1719*C1613 ) *2 ) /C1605 ) ;
    double gz100001 =  (  ( C1739* ( C1680*C1631 )  ) + (  ( C1666*C1598 ) *C1739 )  ) - (  ( C1930*cnst1 ) /2.0 ) ;
    gz[(Ai + 0) * matrix_size + Bi + 2] += cc*gz100001;
    double C1706 =  ( be*C1695 ) *2;
    double C1769 =  (  ( be* ( -C1706 )  ) /C1622 ) - (  ( C1610*C1666 ) /C1605 ) ;
    double C1800 =  (  (  (  ( be*C1789 ) *ae ) *2 ) /C1605 ) + (  (  ( C1690*C1769 ) /C1605 ) + ( C1666/C1615 )  ) ;
    double gz010010 =  (  ( C1625* ( C1631*C1800 )  ) + ( C1625* ( C1670*C1789 )  )  ) + (  ( C1939*cnst27 ) /2.0 ) ;
    gz[(Ai + 1) * matrix_size + Bi + 1] += cc*gz010010;
    double gx010010 =  ( C1668* ( C1620*C1789 )  ) + (  (  ( C1620*C1800 ) *C1631 ) + (  ( C1892*cnst27 ) /2.0 )  ) ;
    gx[(Ai + 1) * matrix_size + Bi + 1] += cc*gx010010;
    double gz010001 =  (  ( C1739* ( C1601*C1670 )  ) + ( C1739* ( C1631*C1769 )  )  ) - (  ( cnst5*C1930 ) /2.0 ) ;
    gz[(Ai + 1) * matrix_size + Bi + 2] += cc*gz010001;
    double gx010100 =  (  (  ( C1769*C1764 ) *C1631 ) - (  ( C1931*cnst5 ) /2.0 )  ) + ( C1668* ( C1601*C1764 )  ) ;
    gx[(Ai + 1) * matrix_size + Bi + 0] += cc*gx010100;
    double C1714 =  (  ( C1690*C1666 ) /C1605 ) + (  ( C1706*ae ) /C1622 ) ;
    double cnst149 = C1603* ( C1620*C1714 ) ;
    double gz100010 =  ( cnst149+ ( C1625* ( C1680*C1689 )  )  ) + (  ( C1939* ( C1689*C1598 )  ) /2.0 ) ;
    gz[(Ai + 0) * matrix_size + Bi + 1] += cc*gz100010;
    double gz001010 =  (  ( C1884* ( C1631*C1714 )  ) + (  ( C1670*C1689 ) *C1884 )  ) + (  ( cnst11*C1937 ) /2.0 ) ;
    gz[(Ai + 2) * matrix_size + Bi + 1] += cc*gz001010;
    double gx100010 =  (  (  ( cnst11*C1935 ) /2.0 ) + (  ( C1643*C1714 ) *C1631 )  ) + ( C1668* ( C1643*C1689 )  ) ;
    gx[(Ai + 0) * matrix_size + Bi + 1] += cc*gx100010;
    double C1624 = C1612*2;
    double C1798 =  (  (  ( - ( 4* ( C1624*be )  )  ) /C1615 ) - (  (  ( C1713*C1610 ) *2 ) /C1605 )  ) *ae;
    double C1916 =  (  ( C1798*C1610 ) *2 ) /C1605;
    double C1936 = C1916-C1932;
    double gy010100 =  ( C1668* ( C1747*C1711 )  ) + (  ( C1631* ( C1770*C1711 )  ) + (  ( cnst14*C1936 ) /2.0 )  ) ;
    gy[(Ai + 1) * matrix_size + Bi + 0] += cc*gy010100;
    double C1929 =  (  (  ( C1798*C1690 ) *2 ) /C1605 ) + (  (  ( ae*C1886 ) *6. ) /C1615 ) ;
    double gy100010 =  (  ( C1631* ( C1680*C1710 )  ) - (  ( C1929*cnst1 ) /2.0 )  ) + ( C1668* ( C1598*C1710 )  ) ;
    gy[(Ai + 0) * matrix_size + Bi + 1] += cc*gy100010;
    double cnst173 = C1798*2;
    double C1883 = -cnst173;
    double cnst185 =  (  (  ( C1932-C1916 ) *C1690 ) /C1605 ) + (  (  ( C1798*6 ) +cnst173 ) /C1615 ) ;
    double gy100100 =  ( C1668* ( C1624*C1664 )  ) + (  (  ( C1624*C1685 ) *C1631 ) + (  ( cnst23*C1883 ) /2.0 )  ) ;
    gy[(Ai + 0) * matrix_size + Bi + 0] += cc*gy100100;
    double cnst202 =  ( C1624*C1770 ) *C1603;
    double gz010100 =  ( cnst202+ (  ( C1747*C1769 ) *C1625 )  ) + (  ( C1939* ( C1601*C1747 )  ) /2.0 ) ;
    gz[(Ai + 1) * matrix_size + Bi + 0] += cc*gz010100;
    double C1735 =  ( be*C1724 ) *2;
    double C1743 =  (  ( C1668*C1719 ) /C1605 ) + (  ( C1735*ae ) /C1622 ) ;
    double gy010001 =  (  (  ( C1670*C1711 ) *C1718 ) + (  ( cnst7*C1936 ) /2.0 )  ) + (  ( C1631*C1711 ) *C1743 ) ;
    gy[(Ai + 1) * matrix_size + Bi + 2] += gy010001*cc;
    double gx100001 =  (  (  ( C1935*cnst7 ) /2.0 ) + (  ( C1643*C1666 ) *C1718 )  ) + ( C1743* ( C1643*C1631 )  ) ;
    gx[(Ai + 0) * matrix_size + Bi + 2] += cc*gx100001;
    double cnst207 = C1743* ( C1601*C1620 ) ;
    double gy100001 = cnst207+ (  (  (  ( C1598*C1718 ) *C1883 ) /2.0 ) + (  ( C1624*C1680 ) *C1718 )  ) ;
    gy[(Ai + 0) * matrix_size + Bi + 2] += cc*gy100001;
    double gx010001 =  (  (  (  ( C1601*C1718 ) *C1892 ) /2.0 ) + (  ( C1620*C1769 ) *C1718 )  ) +cnst207;
    gx[(Ai + 1) * matrix_size + Bi + 2] += cc*gx010001;
    double C1813 =  (  ( be* ( -C1735 )  ) /C1622 ) - (  ( C1668*C1611 ) /C1605 ) ;
    double C1845 =  (  (  (  ( C1834*be ) *ae ) *2 ) /C1605 ) + (  ( C1668/C1615 ) + (  ( C1719*C1813 ) /C1605 )  ) ;
    double gx001001 =  (  ( C1620*C1631 ) *C1845 ) + (  (  ( C1620*C1666 ) *C1834 ) + (  ( cnst26*C1892 ) /2.0 )  ) ;
    gx[(Ai + 2) * matrix_size + Bi + 2] += cc*gx001001;
    double gy001001 =  ( C1845* ( C1624*C1631 )  ) + (  (  ( cnst26*C1883 ) /2.0 ) + (  ( C1670*C1624 ) *C1834 )  ) ;
    gy[(Ai + 2) * matrix_size + Bi + 2] += cc*gy001001;
    double gx001100 =  (  ( C1603* ( C1666*C1764 )  ) - (  ( C1931*cnst3 ) /2.0 )  ) + ( C1813* ( C1631*C1764 )  ) ;
    gx[(Ai + 2) * matrix_size + Bi + 0] += gx001100*cc;
    double gy001100 =  ( C1813* ( C1624*C1747 )  ) + ( cnst202+ (  (  ( C1603*C1747 ) *C1883 ) /2.0 )  ) ;
    gy[(Ai + 2) * matrix_size + Bi + 0] += cc*gy001100;
    double gx001010 =  ( cnst149+ (  (  ( C1603*C1689 ) *C1892 ) /2.0 )  ) + (  ( C1620*C1689 ) *C1813 ) ;
    gx[(Ai + 2) * matrix_size + Bi + 1] += gx001010*cc;
    double gy001010 =  ( C1813* ( C1631*C1710 )  ) + (  ( C1603* ( C1670*C1710 )  ) - (  ( C1929*cnst3 ) /2.0 )  ) ;
    gy[(Ai + 2) * matrix_size + Bi + 1] += cc*gy001010;
    double C1835 =  (  ( C1719*C1884 ) /C1605 ) + (  ( C1613*4. ) /C1615 ) ;
    double gz001001 =  (  (  ( C1670*C1631 ) *C1835 ) + ( C1835* ( C1631*C1666 )  )  ) - (  ( cnst124*cnst15 ) /2.0 ) ;
    gz[(Ai + 2) * matrix_size + Bi + 2] += cc*gz001001;
    double C1665 =  (  ( C1643*C1608 ) /C1605 ) + (  ( C1606*4. ) /C1615 ) ;
    double gx100100 =  (  (  ( C1666*C1665 ) *C1631 ) - ( cnst88/2.0 )  ) + ( C1668* ( C1631*C1665 )  ) ;
    gx[(Ai + 0) * matrix_size + Bi + 0] += gx100100*cc;
    double C1790 =  (  ( C1612*4. ) /C1615 ) + (  ( C1690*C1711 ) /C1605 ) ;
    double gy010010 =  (  ( C1631* ( C1790*C1670 )  ) - (  ( cnst15*cnst185 ) /2.0 )  ) + ( C1668* ( C1790*C1631 )  ) ;
    gy[(Ai + 1) * matrix_size + Bi + 1] += cc*gy010010;
}
