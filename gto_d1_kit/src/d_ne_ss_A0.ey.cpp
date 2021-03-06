/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void vne_gradient_00_1(
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
    double C49 = be+ae;
    double C48 = be*ae;
    double C51 = yA-yB;
    double C47 = xA-xB;
    double C52 = zA-zB;
    double C59 = C48* (  ( std::pow(C52 , 2) ) + (  ( std::pow(C47 , 2) ) + ( std::pow(C51 , 2) )  )  ) ;
    double C63 =  ( std::exp( ( - ( C59/C49 )  ) ) ) * ( Pi*4 ) ;
    double cnst15 =  ( bs[1] ) *ae;
    double C46 = bs[0];
    double cnst22 =  (  ( C48* ( C46*C47 )  ) /C49 ) + ( cnst15* (  (  (  ( ae*xA ) + ( be*xB )  ) /C49 ) -xC )  ) ;
    gx[(Ai + 0) * matrix_size + Bi + 0] += - (  ( C63*cnst22 ) /C49 ) ;
    double cnst28 =  ( cnst15* (  (  (  ( zA*ae ) + ( be*zB )  ) /C49 ) -zC )  ) + (  ( C48* ( C46*C52 )  ) /C49 ) ;
    gz[(Ai + 0) * matrix_size + Bi + 0] += - (  ( C63*cnst28 ) /C49 ) ;
    double cnst34 =  (  (  ( C46*C51 ) *C48 ) /C49 ) + (  (  (  (  ( be*yB ) + ( ae*yA )  ) /C49 ) -yC ) *cnst15 ) ;
    gy[(Ai + 0) * matrix_size + Bi + 0] += - (  ( C63*cnst34 ) /C49 ) ;
}
