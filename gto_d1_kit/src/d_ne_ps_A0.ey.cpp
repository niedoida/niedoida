/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void vne_gradient_10_1(
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
    double C70 = be*ae;
    double C89 =  (  ( ae*xA ) + ( be*xB )  ) /C65;
    double C96 = C89-xB;
    double C69 = xA-xB;
    double C81 = C69*C70;
    double C94 =  (  ( be*zB ) + ( zA*ae )  ) /C65;
    double C172 = C94-zB;
    double C102 = C94-zC;
    double C107 = C102*ae;
    double C73 = zA-zB;
    double C87 = C70*C73;
    double C98 = C89-xC;
    double C104 = C98*ae;
    double C92 =  (  ( be*yB ) + ( ae*yA )  ) /C65;
    double C146 = C92-yB;
    double C100 = C92-yC;
    double C106 = C100*ae;
    double C72 = yA-yB;
    double C105 = C70* (  ( std::pow(C73 , 2) ) + (  ( std::pow(C69 , 2) ) + ( std::pow(C72 , 2) )  )  ) ;
    double C116 = std::exp( ( - ( C105/C65 )  ) );
    double C193 = C116* ( Pi*2. ) ;
    double C117 = C116* ( Pi*4 ) ;
    double C85 = C72*C70;
    double C71 = bs[1];
    double C207 =  (  (  ( C193*C71 ) /C65 ) *ae ) /C65;
    double C75 = bs[2];
    double C216 =  (  ( C107*C75 ) + (  ( C87*C71 ) /C65 )  ) *C117;
    double C215 =  (  (  ( C85*C71 ) /C65 ) + ( C75*C106 )  ) *C117;
    double C214 =  (  ( C75*C104 ) + (  ( C81*C71 ) /C65 )  ) *C117;
    double C68 = bs[0];
    double C120 = C117* (  ( C107*C71 ) + (  ( C68*C87 ) /C65 )  ) ;
    gz[(Ai + 0) * matrix_size + Bi + 0] +=  (  (  ( C216*C98 ) /C65 ) - (  ( C120*C96 ) /C65 )  ) + (  ( C69*C120 ) /C65 ) ;
    gz[(Ai + 1) * matrix_size + Bi + 0] +=  (  ( C72*C120 ) /C65 ) + (  (  ( C100*C216 ) /C65 ) - (  ( C120*C146 ) /C65 )  ) ;
    double C118 = C117* (  (  ( C68*C81 ) /C65 ) + ( C104*C71 )  ) ;
    gx[(Ai + 1) * matrix_size + Bi + 0] +=  (  ( C118*C72 ) /C65 ) + (  (  ( C100*C214 ) /C65 ) - (  ( C118*C146 ) /C65 )  ) ;
    gx[(Ai + 2) * matrix_size + Bi + 0] +=  (  ( C118*C73 ) /C65 ) + (  (  ( C214*C102 ) /C65 ) - (  ( C118*C172 ) /C65 )  ) ;
    double C119 = C117* (  ( C71*C106 ) + (  ( C68*C85 ) /C65 )  ) ;
    gy[(Ai + 0) * matrix_size + Bi + 0] +=  (  (  ( C215*C98 ) /C65 ) - (  ( C96*C119 ) /C65 )  ) + (  ( C69*C119 ) /C65 ) ;
    gy[(Ai + 2) * matrix_size + Bi + 0] +=  (  (  ( C215*C102 ) /C65 ) - (  ( C119*C172 ) /C65 )  ) + (  ( C119*C73 ) /C65 ) ;
    double C63 =  ( C68*C193 ) /C65;
    double C206 =  ( ae*C63 ) /C65;
    double cnst65 =  (  (  ( C206- (  ( C119*C146 ) /C65 )  ) -C207 ) + (  ( C215*C100 ) /C65 )  ) -C63;
    gy[(Ai + 1) * matrix_size + Bi + 0] += cnst65+ (  ( C72*C119 ) /C65 ) ;
    double cnst69 =  (  (  ( C216*C102 ) /C65 ) + (  ( C206- (  ( C120*C172 ) /C65 )  ) -C207 )  ) -C63;
    gz[(Ai + 2) * matrix_size + Bi + 0] += cnst69+ (  ( C120*C73 ) /C65 ) ;
    double cnst73 =  (  (  ( C214*C98 ) /C65 ) + (  ( C206- (  ( C118*C96 ) /C65 )  ) -C207 )  ) -C63;
    gx[(Ai + 0) * matrix_size + Bi + 0] +=  (  ( C118*C69 ) /C65 ) +cnst73;
}
