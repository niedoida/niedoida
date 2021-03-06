/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void vne_gradient_10_3(
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
    double C64 = be+ae;
    double C83 =  (  ( be*yB ) + ( ae*yA )  ) /C64;
    double C127 = C83-yB;
    double C88 = C83-yC;
    double C67 = yA-yB;
    double C81 =  (  ( be*xB ) + ( ae*xA )  ) /C64;
    double C85 = C81-xB;
    double C87 = C81-xC;
    double C66 = xA-xB;
    double C84 =  (  ( be*zB ) + ( zA*ae )  ) /C64;
    double C151 = C84-zB;
    double C89 = C84-zC;
    double C68 = zA-zB;
    double cnst0 =  (  (  ( std::pow(C66 , 2) ) + ( std::pow(C67 , 2) )  ) + ( std::pow(C68 , 2) )  ) *ae;
    double C93 = std::exp( ( - (  ( cnst0*be ) /C64 )  ) );
    double C94 = C93*Pi;
    double C99 = 4* ( C94*C88 ) ;
    double C98 =  ( C94*C87 ) *4;
    double C100 =  ( C94*C89 ) *4;
    double C65 = bs[1];
    double C103 = C100*C65;
    double C101 = C98*C65;
    double C102 = C99*C65;
    double C61 =  (  (  ( C93*C65 ) *2. ) *Pi ) /C64;
    double C70 = bs[2];
    double C160 = C70*C98;
    gx[(Ai + 0) * matrix_size + Bi + 0] +=  (  ( C61+ ( C101*C85 )  ) - ( C160*C87 )  ) - ( C66*C101 ) ;
    double cnst27 = C160*C88;
    gy[(Ai + 0) * matrix_size + Bi + 0] +=  (  ( C102*C85 ) -cnst27 ) - ( C102*C66 ) ;
    gx[(Ai + 1) * matrix_size + Bi + 0] +=  (  ( C127*C101 ) -cnst27 ) - ( C67*C101 ) ;
    double cnst30 = C89*C160;
    gz[(Ai + 0) * matrix_size + Bi + 0] +=  (  ( C103*C85 ) -cnst30 ) - ( C103*C66 ) ;
    gx[(Ai + 2) * matrix_size + Bi + 0] +=  (  ( C101*C151 ) -cnst30 ) - ( C68*C101 ) ;
    gz[(Ai + 2) * matrix_size + Bi + 0] +=  (  ( C61+ ( C103*C151 )  ) - ( C89* ( C100*C70 )  )  ) - ( C68*C103 ) ;
    double C161 = C99*C70;
    double cnst35 = C89*C161;
    gy[(Ai + 2) * matrix_size + Bi + 0] +=  (  ( C102*C151 ) -cnst35 ) - ( C68*C102 ) ;
    gz[(Ai + 1) * matrix_size + Bi + 0] +=  (  ( C103*C127 ) -cnst35 ) - ( C67*C103 ) ;
    gy[(Ai + 1) * matrix_size + Bi + 0] +=  (  (  ( C102*C127 ) +C61 ) - ( C161*C88 )  ) - ( C67*C102 ) ;
}
