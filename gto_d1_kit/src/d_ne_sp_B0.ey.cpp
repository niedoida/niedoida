/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void vne_gradient_01_2(
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
    double C60 = bs[1];
    double C67 = bs[2];
    double C61 = bs[0];
    double C63 = be*ae;
    double C57 = be+ae;
    double C64 = yA-yB;
    double C78 = C64*C63;
    double C83 =  (  ( ae*yA ) + ( be*yB )  ) /C57;
    double C115 = C83-yB;
    double C88 = C83-yC;
    double C92 = C88*be;
    double C81 =  (  ( ae*xA ) + ( be*xB )  ) /C57;
    double C85 = C81-xB;
    double C86 = C81-xC;
    double C90 = C86*be;
    double C62 = xA-xB;
    double C73 = C62*C63;
    double C84 =  (  ( be*zB ) + ( zA*ae )  ) /C57;
    double C133 = C84-zB;
    double C89 = C84-zC;
    double C93 = C89*be;
    double C65 = zA-zB;
    double C91 =  (  ( std::pow(C65 , 2) ) + (  ( std::pow(C62 , 2) ) + ( std::pow(C64 , 2) )  )  ) *C63;
    double C96 = std::exp( ( - ( C91/C57 )  ) );
    double C97 = C96* ( Pi*4 ) ;
    double C190 = C97* (  ( C92*C67 ) - (  ( C78*C60 ) /C57 )  ) ;
    double C189 = C97* (  ( C90*C67 ) - (  ( C60*C73 ) /C57 )  ) ;
    double C191 = C97* (  ( C92*C60 ) - (  ( C61*C78 ) /C57 )  ) ;
    gy[(Ai + 0) * matrix_size + Bi + 0] +=  (  ( C86*C190 ) /C57 ) - (  ( C85*C191 ) /C57 ) ;
    gy[(Ai + 0) * matrix_size + Bi + 2] +=  (  ( C89*C190 ) /C57 ) - (  ( C133*C191 ) /C57 ) ;
    double C188 =  (  ( C90*C60 ) - (  ( C61*C73 ) /C57 )  ) *C97;
    gx[(Ai + 0) * matrix_size + Bi + 2] +=  (  ( C189*C89 ) /C57 ) - (  ( C133*C188 ) /C57 ) ;
    gx[(Ai + 0) * matrix_size + Bi + 1] +=  (  ( C189*C88 ) /C57 ) - (  ( C188*C115 ) /C57 ) ;
    double C154 = C96* ( Pi*2. ) ;
    double C175 =  ( be* (  ( C154*C60 ) /C57 )  ) /C57;
    double C181 =  (  ( be/C57 ) -1 ) * (  ( C61*C154 ) /C57 ) ;
    gy[(Ai + 0) * matrix_size + Bi + 1] +=  (  ( C181- (  ( C115*C191 ) /C57 )  ) -C175 ) + (  ( C88*C190 ) /C57 ) ;
    gx[(Ai + 0) * matrix_size + Bi + 0] +=  (  ( C181- (  ( C188*C85 ) /C57 )  ) -C175 ) + (  ( C189*C86 ) /C57 ) ;
    double C80 = C65*C63;
    double C193 = C97* (  ( C60*C93 ) - (  ( C61*C80 ) /C57 )  ) ;
    double C192 =  (  ( C67*C93 ) - (  ( C80*C60 ) /C57 )  ) *C97;
    gz[(Ai + 0) * matrix_size + Bi + 1] +=  (  ( C192*C88 ) /C57 ) - (  ( C193*C115 ) /C57 ) ;
    gz[(Ai + 0) * matrix_size + Bi + 0] +=  (  ( C192*C86 ) /C57 ) - (  ( C193*C85 ) /C57 ) ;
    gz[(Ai + 0) * matrix_size + Bi + 2] +=  (  ( C192*C89 ) /C57 ) + (  ( C181- (  ( C193*C133 ) /C57 )  ) -C175 ) ;
}
