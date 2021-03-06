/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void vne_gradient_00_3(
double ae , 
double be , 
double xA , 
double yA , 
double zA , 
double xB , 
double yB , 
double zB , 
double xC , 
double yC , 
double zC , 
const double* bs , 
double* const gx , 
double* const gy , 
double* const gz , 
std::size_t matrix_size , 
std::size_t Ai , 
std::size_t Bi ) 
{
    double C50 = be+ae;
    double C55 =  ( std::pow( ( zA-zB )  , 2) ) + (  ( std::pow( ( xA-xB )  , 2) ) + ( std::pow( ( yA-yB )  , 2) )  ) ;
    double cnst16 =  ( 4* ( bs[1] )  ) * (  ( std::exp( ( - (  (  ( be*ae ) *C55 ) /C50 )  ) ) ) *Pi ) ;
    gx[(Ai + 0) * matrix_size + Bi + 0] += cnst16* (  (  (  ( ae*xA ) + ( be*xB )  ) /C50 ) -xC ) ;
    gz[(Ai + 0) * matrix_size + Bi + 0] += cnst16* (  (  (  ( zA*ae ) + ( be*zB )  ) /C50 ) -zC ) ;
    gy[(Ai + 0) * matrix_size + Bi + 0] +=  (  (  (  ( ae*yA ) + ( be*yB )  ) /C50 ) -yC ) *cnst16;
}
