/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void vne_gradient_01_1(
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
    double C63 = bs[1];
    double C67 = bs[2];
    double C60 = bs[0];
    double C57 = be+ae;
    double C62 = be*ae;
    double C64 = yA-yB;
    double C77 = C64*C62;
    double C83 =  (  ( ae*yA ) + ( be*yB )  ) /C57;
    double C115 = C83-yB;
    double C88 = C83-yC;
    double C92 = C88*ae;
    double C61 = xA-xB;
    double C73 = C61*C62;
    double C81 =  (  ( ae*xA ) + ( be*xB )  ) /C57;
    double C86 = C81-xC;
    double C90 = C86*ae;
    double C85 = C81-xB;
    double C84 =  (  ( be*zB ) + ( zA*ae )  ) /C57;
    double C133 = C84-zB;
    double C89 = C84-zC;
    double C93 = C89*ae;
    double C65 = zA-zB;
    double C91 =  (  (  ( std::pow(C61 , 2) ) + ( std::pow(C64 , 2) )  ) + ( std::pow(C65 , 2) )  ) *C62;
    double C96 = std::exp( ( - ( C91/C57 )  ) );
    double C97 = C96* ( Pi*4 ) ;
    double C189 =  (  (  ( C77*C63 ) /C57 ) + ( C92*C67 )  ) *C97;
    double C188 = C97* (  (  ( C63*C73 ) /C57 ) + ( C90*C67 )  ) ;
    double C190 = C97* (  ( C92*C63 ) + (  ( C60*C77 ) /C57 )  ) ;
    gy[(Ai + 0) * matrix_size + Bi + 0] +=  (  ( C86*C189 ) /C57 ) - (  ( C85*C190 ) /C57 ) ;
    gy[(Ai + 0) * matrix_size + Bi + 2] +=  (  ( C89*C189 ) /C57 ) - (  ( C133*C190 ) /C57 ) ;
    double C187 = C97* (  ( C90*C63 ) + (  ( C60*C73 ) /C57 )  ) ;
    gx[(Ai + 0) * matrix_size + Bi + 2] +=  (  ( C188*C89 ) /C57 ) - (  ( C187*C133 ) /C57 ) ;
    gx[(Ai + 0) * matrix_size + Bi + 1] +=  (  ( C88*C188 ) /C57 ) - (  ( C115*C187 ) /C57 ) ;
    double C154 = C96* ( Pi*2. ) ;
    double C175 =  ( ae* (  ( C154*C63 ) /C57 )  ) /C57;
    double C173 =  ( ae* (  ( C60*C154 ) /C57 )  ) /C57;
    gy[(Ai + 0) * matrix_size + Bi + 1] +=  (  ( C88*C189 ) /C57 ) + (  ( C173- (  ( C115*C190 ) /C57 )  ) -C175 ) ;
    gx[(Ai + 0) * matrix_size + Bi + 0] +=  (  ( C188*C86 ) /C57 ) + (  ( C173- (  ( C187*C85 ) /C57 )  ) -C175 ) ;
    double C79 = C65*C62;
    double C192 = C97* (  (  ( C60*C79 ) /C57 ) + ( C63*C93 )  ) ;
    double C191 = C97* (  ( C67*C93 ) + (  ( C79*C63 ) /C57 )  ) ;
    gz[(Ai + 0) * matrix_size + Bi + 1] +=  (  ( C191*C88 ) /C57 ) - (  ( C192*C115 ) /C57 ) ;
    gz[(Ai + 0) * matrix_size + Bi + 0] +=  (  ( C191*C86 ) /C57 ) - (  ( C192*C85 ) /C57 ) ;
    gz[(Ai + 0) * matrix_size + Bi + 2] +=  (  ( C191*C89 ) /C57 ) + (  ( C173- (  ( C192*C133 ) /C57 )  ) -C175 ) ;
}
