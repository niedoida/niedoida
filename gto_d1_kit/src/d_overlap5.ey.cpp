/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void overlap_gradient_11(
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
    double C854 = xAB*ae;
    double C859 = ae*zAB;
    double C805 = be+ae;
    double C855 = std::pow(C805 , 2);
    double C798 = std::sqrt( ( Pi/C805 ) );
    double cnst0 = C854*C798;
    double C817 = cnst0/C805;
    double C814 =  ( C859*C798 ) /C805;
    double C807 = 2.*C805;
    double C893 =  (  ( C798*ae ) *2. ) /C807;
    double C900 =  ( - (  ( be*C798 ) *2 )  ) /C807;
    double C861 = C798/C807;
    double C852 = xAB*be;
    double C799 = - (  ( C798*C852 ) /C805 ) ;
    double C806 = C799*ae;
    double C903 =  (  ( 2* ( C854*C806 )  ) /C805 ) +C893;
    double C905 = C900- (  (  ( C852*C806 ) *2 ) /C805 ) ;
    gx[(Ai + 0) * matrix_size + Bi + 2] += cc* ( C814* ( C798*C905 )  ) ;
    double gx100100 =  ( std::pow(C798 , 2) ) * (  (  ( C854*C905 ) /C805 ) + (  ( C806*4. ) /C807 )  ) ;
    gx[(Ai + 0) * matrix_size + Bi + 0] += gx100100*cc;
    double cnst14 = C806*2;
    double C802 = C861- (  ( C852*cnst0 ) /C855 ) ;
    double C857 = be*zAB;
    double C863 = C857*C798;
    double C804 = - ( C863/C805 ) ;
    gx[(Ai + 2) * matrix_size + Bi + 0] += cc* (  ( C798*C903 ) *C804 ) ;
    double C832 = C804*ae;
    double C902 = C893+ (  (  ( C832*C859 ) *2 ) /C805 ) ;
    gz[(Ai + 0) * matrix_size + Bi + 2] += cc* (  ( C798*C799 ) *C902 ) ;
    double C907 = C900- (  (  ( C857*C832 ) *2 ) /C805 ) ;
    gz[(Ai + 2) * matrix_size + Bi + 0] += cc* (  ( C798*C817 ) *C907 ) ;
    double C871 = C832*2;
    gz[(Ai + 0) * matrix_size + Bi + 0] += cc* ( C871* ( C798*C802 )  ) ;
    gz[(Ai + 2) * matrix_size + Bi + 2] += cc* (  ( C798*C798 ) * (  (  ( C907*C859 ) /C805 ) + (  ( C832*4. ) /C807 )  )  ) ;
    double C831 = C861- (  ( C859*C863 ) /C855 ) ;
    gx[(Ai + 2) * matrix_size + Bi + 2] += cc* (  ( cnst14*C798 ) *C831 ) ;
    double C858 = yAB*ae;
    double C811 =  ( C798*C858 ) /C805;
    const double res0 = cc* ( C804* ( cnst14*C811 )  ) ;
    gx[(Ai + 2) * matrix_size + Bi + 1] += res0;
    gz[(Ai + 0) * matrix_size + Bi + 1] += res0;
    gx[(Ai + 0) * matrix_size + Bi + 1] += cc* ( C798* ( C905*C811 )  ) ;
    gz[(Ai + 2) * matrix_size + Bi + 1] +=  ( C907* ( C798*C811 )  ) *cc;
    double C856 = be*yAB;
    double C862 = C856*C798;
    double C803 = - ( C862/C805 ) ;
    gz[(Ai + 1) * matrix_size + Bi + 2] += cc* (  ( C798*C803 ) *C902 ) ;
    double C821 = ae*C803;
    double C901 =  (  ( 2* ( C821*C858 )  ) /C805 ) +C893;
    gy[(Ai + 0) * matrix_size + Bi + 1] += cc* ( C798* ( C799*C901 )  ) ;
    gy[(Ai + 2) * matrix_size + Bi + 1] += cc* ( C804* ( C798*C901 )  ) ;
    double C906 = C900- (  (  ( C856*C821 ) *2 ) /C805 ) ;
    gy[(Ai + 1) * matrix_size + Bi + 2] +=  ( C814* ( C906*C798 )  ) *cc;
    gy[(Ai + 1) * matrix_size + Bi + 0] += cc* ( C798* ( C906*C817 )  ) ;
    gy[(Ai + 1) * matrix_size + Bi + 1] +=  ( C798* ( C798* (  (  ( C906*C858 ) /C805 ) + (  ( C821*4. ) /C807 )  )  )  ) *cc;
    double C870 = C821*2;
    gy[(Ai + 2) * matrix_size + Bi + 2] += cc* (  ( C870*C798 ) *C831 ) ;
    const double res1 = cc* ( C804* ( C870*C817 )  ) ;
    gy[(Ai + 2) * matrix_size + Bi + 0] += res1;
    gz[(Ai + 1) * matrix_size + Bi + 0] += res1;
    gy[(Ai + 0) * matrix_size + Bi + 0] += cc* (  ( C870*C802 ) *C798 ) ;
    const double res2 = cc* (  ( cnst14*C803 ) *C814 ) ;
    gx[(Ai + 1) * matrix_size + Bi + 2] += res2;
    gy[(Ai + 0) * matrix_size + Bi + 2] += res2;
    gx[(Ai + 1) * matrix_size + Bi + 0] += cc* (  ( C803*C903 ) *C798 ) ;
    double C820 = C861- (  ( C862*C858 ) /C855 ) ;
    gx[(Ai + 1) * matrix_size + Bi + 1] += cc* ( C798* ( cnst14*C820 )  ) ;
    gz[(Ai + 1) * matrix_size + Bi + 1] += cc* (  ( C820*C798 ) *C871 ) ;
}
