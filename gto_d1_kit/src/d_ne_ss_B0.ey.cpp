/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void vne_gradient_00_2(
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
    double C50 = be*ae;
    double C47 = be+ae;
    double C51 = yA-yB;
    double C49 = xA-xB;
    double C52 = zA-zB;
    double C59 = C50* (  ( std::pow(C52 , 2) ) + (  ( std::pow(C49 , 2) ) + ( std::pow(C51 , 2) )  )  ) ;
    double C63 =  ( std::exp( ( - ( C59/C47 )  ) ) ) * ( Pi*4 ) ;
    double cnst15 = be* ( bs[1] ) ;
    double C48 = bs[0];
    double cnst22 =  ( cnst15* (  (  (  ( zA*ae ) + ( be*zB )  ) /C47 ) -zC )  ) - (  ( C50* ( C48*C52 )  ) /C47 ) ;
    gz[(Ai + 0) * matrix_size + Bi + 0] += - (  ( C63*cnst22 ) /C47 ) ;
    double cnst28 =  ( cnst15* (  (  (  ( ae*xA ) + ( be*xB )  ) /C47 ) -xC )  ) - (  ( C50* ( C48*C49 )  ) /C47 ) ;
    gx[(Ai + 0) * matrix_size + Bi + 0] += - (  ( C63*cnst28 ) /C47 ) ;
    double cnst34 =  (  (  (  (  ( be*yB ) + ( ae*yA )  ) /C47 ) -yC ) *cnst15 ) - (  (  ( C48*C51 ) *C50 ) /C47 ) ;
    gy[(Ai + 0) * matrix_size + Bi + 0] += - (  ( cnst34*C63 ) /C47 ) ;
}
