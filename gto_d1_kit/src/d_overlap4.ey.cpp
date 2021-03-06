/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void overlap_gradient_10(
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
    double C727 = be+ae;
    double C721 = std::sqrt( ( Pi/C727 ) );
    double C752 = be*C721;
    double C726 = - (  ( C752*zAB ) /C727 ) ;
    double cnst8 =  (  ( - (  ( xAB*C752 ) /C727 )  ) *ae ) *2;
    double C757 =  ( - ( C752*2 )  ) / ( 2.*C727 ) ;
    double C725 = - (  ( yAB*C752 ) /C727 ) ;
    double C753 =  ( C725*ae ) *2;
    const double res0 = cc* ( C721* ( cnst8*C725 )  ) ;
    gx[(Ai + 1) * matrix_size + Bi + 0] += res0;
    gy[(Ai + 0) * matrix_size + Bi + 0] += res0;
    gx[(Ai + 0) * matrix_size + Bi + 0] += cc* (  ( std::pow(C721 , 2) ) * ( C757- (  ( xAB* ( cnst8*be )  ) /C727 )  )  ) ;
    const double res1 = cc* ( C726* ( cnst8*C721 )  ) ;
    gx[(Ai + 2) * matrix_size + Bi + 0] += res1;
    gz[(Ai + 0) * matrix_size + Bi + 0] += res1;
    const double res2 = cc* ( C726* ( C753*C721 )  ) ;
    gy[(Ai + 2) * matrix_size + Bi + 0] += res2;
    gz[(Ai + 1) * matrix_size + Bi + 0] += res2;
    gz[(Ai + 2) * matrix_size + Bi + 0] += cc* (  ( C757- (  (  ( be* (  ( C726*ae ) *2 )  ) *zAB ) /C727 )  ) * ( C721*C721 )  ) ;
    gy[(Ai + 1) * matrix_size + Bi + 0] += cc* ( C721* (  ( C757- (  ( yAB* ( C753*be )  ) /C727 )  ) *C721 )  ) ;
}
