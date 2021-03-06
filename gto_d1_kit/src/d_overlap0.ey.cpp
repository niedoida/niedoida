/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void overlap_gradient_00(
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
    double C49 = be+ae;
    double C57 = std::sqrt( ( Pi/C49 ) );
    double cnst0 = be*C57;
    double cnst5 = std::pow(C57 , 2);
    double cnst8 = ae*2;
    gy[(Ai + 0) * matrix_size + Bi + 0] += cc* (  ( cnst8* ( - (  ( yAB*cnst0 ) /C49 )  )  ) *cnst5 ) ;
    gx[(Ai + 0) * matrix_size + Bi + 0] += cc* ( cnst5* (  ( - (  ( xAB*cnst0 ) /C49 )  ) *cnst8 )  ) ;
    gz[(Ai + 0) * matrix_size + Bi + 0] +=  (  ( - (  ( cnst0*zAB ) /C49 )  ) * (  ( cnst5*2 ) *ae )  ) *cc;
}
