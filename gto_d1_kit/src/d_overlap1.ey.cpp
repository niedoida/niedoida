/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void overlap_gradient_01(
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
    double C78 = be+ae;
    double C99 = std::sqrt( ( Pi/C78 ) );
    double cnst0 = std::pow(C99 , 2);
    double cnst1 = be*C99;
    double cnst4 =  (  ( - (  ( xAB*cnst1 ) /C78 )  ) *ae ) *2;
    double C111 =  (  ( - (  ( cnst1*zAB ) /C78 )  ) *ae ) *2;
    double C105 = C99*ae;
    double C112 =  ( C105*2. ) / ( 2.*C78 ) ;
    double C75 =  ( xAB*C105 ) /C78;
    double C85 =  ( C105*zAB ) /C78;
    gx[(Ai + 0) * matrix_size + Bi + 0] += cc* (  (  (  ( xAB* ( cnst4*ae )  ) /C78 ) +C112 ) *cnst0 ) ;
    gz[(Ai + 0) * matrix_size + Bi + 2] += cc* ( cnst0* ( C112+ (  ( zAB* ( C111*ae )  ) /C78 )  )  ) ;
    gz[(Ai + 0) * matrix_size + Bi + 0] += cc* (  ( C99*C75 ) *C111 ) ;
    gx[(Ai + 0) * matrix_size + Bi + 2] += cc* (  ( C99*cnst4 ) *C85 ) ;
    double C82 =  ( yAB*C105 ) /C78;
    gx[(Ai + 0) * matrix_size + Bi + 1] += cc* ( C99* ( C82*cnst4 )  ) ;
    gz[(Ai + 0) * matrix_size + Bi + 1] += cc* (  ( C82*C99 ) *C111 ) ;
    double C110 =  (  ( - (  ( yAB*cnst1 ) /C78 )  ) *ae ) *2;
    gy[(Ai + 0) * matrix_size + Bi + 2] += cc* ( C85* ( C110*C99 )  ) ;
    gy[(Ai + 0) * matrix_size + Bi + 1] +=  (  (  (  ( yAB* ( C110*ae )  ) /C78 ) +C112 ) *cnst0 ) *cc;
    gy[(Ai + 0) * matrix_size + Bi + 0] += cc* (  ( C110*C75 ) *C99 ) ;
}
