/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void vne_gradient_10_2(
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
    double C65 = be+ae;
    double C71 = be*ae;
    double C70 = xA-xB;
    double C81 = C70*C71;
    double C89 =  (  ( ae*xA ) + ( be*xB )  ) /C65;
    double C96 = C89-xB;
    double C73 = zA-zB;
    double C88 = C71*C73;
    double C94 =  (  ( be*zB ) + ( zA*ae )  ) /C65;
    double C102 = C94-zC;
    double C107 = be*C102;
    double C172 = C94-zB;
    double C97 = C89-xC;
    double C104 = C97*be;
    double C68 = bs[1];
    double C75 = bs[2];
    double C69 = bs[0];
    double C92 =  (  ( be*yB ) + ( ae*yA )  ) /C65;
    double C146 = C92-yB;
    double C100 = C92-yC;
    double C106 = C100*be;
    double C72 = yA-yB;
    double C105 = C71* (  ( std::pow(C73 , 2) ) + (  ( std::pow(C70 , 2) ) + ( std::pow(C72 , 2) )  )  ) ;
    double C116 = std::exp( ( - ( C105/C65 )  ) );
    double C193 = C116* ( Pi*2. ) ;
    double C207 =  (  (  ( C193*C68 ) /C65 ) *be ) /C65;
    double C63 =  ( C69*C193 ) /C65;
    double C211 =  (  ( be/C65 ) -1 ) *C63;
    double C117 = C116* ( Pi*4 ) ;
    double C215 = C117* (  ( C75*C104 ) - (  ( C81*C68 ) /C65 )  ) ;
    double C217 =  (  ( C107*C75 ) - (  ( C88*C68 ) /C65 )  ) *C117;
    double C120 = C117* (  ( C107*C68 ) - (  ( C69*C88 ) /C65 )  ) ;
    double cnst19 =  (  (  ( C211- (  ( C120*C172 ) /C65 )  ) -C207 ) + (  ( C217*C102 ) /C65 )  ) +C63;
    gz[(Ai + 0) * matrix_size + Bi + 0] +=  (  (  ( C97*C217 ) /C65 ) - (  ( C120*C96 ) /C65 )  ) + (  ( C120*C70 ) /C65 ) ;
    gz[(Ai + 1) * matrix_size + Bi + 0] +=  (  ( C72*C120 ) /C65 ) + (  (  ( C100*C217 ) /C65 ) - (  ( C120*C146 ) /C65 )  ) ;
    gz[(Ai + 2) * matrix_size + Bi + 0] += cnst19+ (  ( C120*C73 ) /C65 ) ;
    double C118 =  (  ( C104*C68 ) - (  ( C69*C81 ) /C65 )  ) *C117;
    double cnst37 =  (  (  ( C211- (  ( C118*C96 ) /C65 )  ) -C207 ) + (  ( C97*C215 ) /C65 )  ) +C63;
    gx[(Ai + 0) * matrix_size + Bi + 0] += cnst37+ (  ( C118*C70 ) /C65 ) ;
    gx[(Ai + 1) * matrix_size + Bi + 0] +=  (  ( C118*C72 ) /C65 ) + (  (  ( C100*C215 ) /C65 ) - (  ( C118*C146 ) /C65 )  ) ;
    gx[(Ai + 2) * matrix_size + Bi + 0] +=  (  ( C118*C73 ) /C65 ) + (  (  ( C215*C102 ) /C65 ) - (  ( C118*C172 ) /C65 )  ) ;
    double C86 = C72*C71;
    double C216 = C117* (  ( C75*C106 ) - (  ( C86*C68 ) /C65 )  ) ;
    double C119 =  (  ( C68*C106 ) - (  ( C69*C86 ) /C65 )  ) *C117;
    double cnst61 =  (  (  ( C211- (  ( C146*C119 ) /C65 )  ) -C207 ) + (  ( C216*C100 ) /C65 )  ) +C63;
    gy[(Ai + 0) * matrix_size + Bi + 0] +=  (  (  ( C216*C97 ) /C65 ) - (  ( C119*C96 ) /C65 )  ) + (  ( C70*C119 ) /C65 ) ;
    gy[(Ai + 1) * matrix_size + Bi + 0] += cnst61+ (  ( C72*C119 ) /C65 ) ;
    gy[(Ai + 2) * matrix_size + Bi + 0] +=  (  ( C119*C73 ) /C65 ) + (  (  ( C216*C102 ) /C65 ) - (  ( C119*C172 ) /C65 )  ) ;
}
