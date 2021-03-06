/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void vne_gradient_01_3(
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
    double C55 = be+ae;
    double C74 =  (  ( be*yB ) + ( ae*yA )  ) /C55;
    double C106 = C74-yB;
    double C79 = C74-yC;
    double C72 =  (  ( be*xB ) + ( ae*xA )  ) /C55;
    double C76 = C72-xB;
    double C78 = C72-xC;
    double C75 =  (  ( be*zB ) + ( zA*ae )  ) /C55;
    double C80 = C75-zC;
    double C121 = C75-zB;
    double C77 =  (  ( std::pow( ( xA-xB )  , 2) ) + ( std::pow( ( yA-yB )  , 2) )  ) + ( std::pow( ( zA-zB )  , 2) ) ;
    double C84 = std::exp( ( - (  (  ( C77*ae ) *be ) /C55 )  ) );
    double C85 = C84*Pi;
    double C91 = 4* ( C85*C80 ) ;
    double C90 = 4* ( C85*C79 ) ;
    double C89 =  ( C85*C78 ) *4;
    double C56 = bs[1];
    double C52 =  (  (  ( C84*C56 ) *2. ) *Pi ) /C55;
    double C132 = C90*C56;
    double C130 = C89*C56;
    double C134 = C91*C56;
    double C61 = bs[2];
    double C131 = C89*C61;
    double cnst16 = C79*C131;
    gx[(Ai + 0) * matrix_size + Bi + 1] +=  ( C130*C106 ) -cnst16;
    gy[(Ai + 0) * matrix_size + Bi + 0] +=  ( C132*C76 ) -cnst16;
    double cnst17 = C80*C131;
    gz[(Ai + 0) * matrix_size + Bi + 0] +=  ( C134*C76 ) -cnst17;
    gx[(Ai + 0) * matrix_size + Bi + 2] +=  ( C130*C121 ) -cnst17;
    gx[(Ai + 0) * matrix_size + Bi + 0] +=  (  ( C130*C76 ) +C52 ) - ( C78*C131 ) ;
    gz[(Ai + 0) * matrix_size + Bi + 2] +=  (  ( C134*C121 ) +C52 ) - ( C80* ( C61*C91 )  ) ;
    double C133 = C90*C61;
    gy[(Ai + 0) * matrix_size + Bi + 1] +=  ( C52+ ( C132*C106 )  ) - ( C79*C133 ) ;
    double cnst21 = C80*C133;
    gy[(Ai + 0) * matrix_size + Bi + 2] +=  ( C121*C132 ) -cnst21;
    gz[(Ai + 0) * matrix_size + Bi + 1] +=  ( C134*C106 ) -cnst21;
}
