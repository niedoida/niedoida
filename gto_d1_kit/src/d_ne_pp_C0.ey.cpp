/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void vne_gradient_11_3(
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
    double C90 = xA-xB;
    double C92 = zA-zB;
    double C88 = be+ae;
    double C104 = 2*C88;
    double C107 =  (  ( ae*xA ) + ( be*xB )  ) /C88;
    double C111 = C107-xB;
    double C113 = C107-xC;
    double C110 =  (  ( be*zB ) + ( zA*ae )  ) /C88;
    double C115 = C110-zC;
    double C244 = C110-zB;
    double C109 =  (  ( be*yB ) + ( ae*yA )  ) /C88;
    double C114 = C109-yC;
    double C188 = C109-yB;
    double C91 = yA-yB;
    double C116 =  ( be*ae ) * (  ( std::pow(C92 , 2) ) + (  ( std::pow(C90 , 2) ) + ( std::pow(C91 , 2) )  )  ) ;
    double C119 = std::exp( ( - ( C116/C88 )  ) );
    double C535 = C119* ( Pi*2. ) ;
    double C120 = C119*Pi;
    double C125 = 4* ( C120*C114 ) ;
    double C124 =  ( C120*C113 ) *4;
    double C126 =  ( C120*C115 ) *4;
    double C95 = bs[3];
    double C551 = C125*C95;
    double C575 = C551*C115;
    double C548 = C124*C95;
    double C577 = C548*C115;
    double C572 = C548*C114;
    double C89 = bs[1];
    double C536 = C535*C89;
    double C83 = C536/C88;
    double cnst7 = be*C536;
    double C131 = C89*C126;
    double C553 = C131/C104;
    double C127 = C124*C89;
    double C547 = C127/C104;
    double C129 = C89*C125;
    double C550 = C129/C104;
    double C94 = bs[2];
    double C542 = C94*C535;
    double C84 =  (  ( C90*C536 ) /C88 ) + (  (  ( - (  ( C90*cnst7 ) /C88 )  ) /C88 ) - (  ( C113*C542 ) /C88 )  ) ;
    double C243 =  (  ( C92*C536 ) /C88 ) + (  (  ( - (  ( C92*cnst7 ) /C88 )  ) /C88 ) - (  ( C542*C115 ) /C88 )  ) ;
    double C85 = C542/C88;
    double C187 =  (  ( C91*C536 ) /C88 ) + (  (  ( - (  ( C91*cnst7 ) /C88 )  ) /C88 ) - (  ( C114*C542 ) /C88 )  ) ;
    double C128 = C94*C124;
    double C549 = C128/C104;
    double C585 =  ( C128*C244 ) -C577;
    double C592 = C585*C114;
    double C582 =  ( C188*C128 ) -C572;
    double C142 =  (  ( C127*C111 ) +C83 ) - ( C113*C128 ) ;
    double cnst41 =  (  (  ( C111*C142 ) +C547 ) +C84 ) - ( C113* (  (  ( C128*C111 ) +C85 ) - ( C548*C113 )  )  ) ;
    gx[(Ai + 0) * matrix_size + Bi + 0] +=  ( cnst41-C549 ) - ( C90*C142 ) ;
    double C132 = C94*C126;
    double C254 =  (  ( C131*C244 ) +C83 ) - ( C132*C115 ) ;
    double C245 = C132*C113;
    double C141 =  ( C131*C111 ) -C245;
    double C251 =  ( C127*C244 ) -C245;
    double C603 =  ( C251*C188 ) -C592;
    gx[(Ai + 1) * matrix_size + Bi + 2] += C603- ( C251*C91 ) ;
    gx[(Ai + 2) * matrix_size + Bi + 2] +=  (  (  ( C547+ ( C251*C244 )  ) - ( C585*C115 )  ) -C549 ) - ( C251*C92 ) ;
    double C600 =  (  ( C251*C111 ) +C243 ) - ( C585*C113 ) ;
    gx[(Ai + 0) * matrix_size + Bi + 2] += C600- ( C251*C90 ) ;
    gx[(Ai + 2) * matrix_size + Bi + 0] += C600- ( C92*C142 ) ;
    double C584 =  ( C188*C132 ) -C575;
    double C246 = C132*C114;
    double C252 =  ( C129*C244 ) -C246;
    double C601 =  ( C252*C111 ) -C592;
    gy[(Ai + 0) * matrix_size + Bi + 2] += C601- ( C90*C252 ) ;
    double C197 =  ( C188*C131 ) -C246;
    double C599 =  ( C197*C111 ) - ( C584*C113 ) ;
    gz[(Ai + 1) * matrix_size + Bi + 0] += C599- ( C91*C141 ) ;
    gz[(Ai + 0) * matrix_size + Bi + 1] += C599- ( C90*C197 ) ;
    double C555 = C132/C104;
    gz[(Ai + 1) * matrix_size + Bi + 1] +=  (  (  ( C553+ ( C188*C197 )  ) - ( C584*C114 )  ) -C555 ) - ( C91*C197 ) ;
    gz[(Ai + 0) * matrix_size + Bi + 0] +=  (  (  (  ( C111*C141 ) +C553 ) - (  (  ( C132*C111 ) -C577 ) *C113 )  ) -C555 ) - ( C90*C141 ) ;
    double C587 =  (  ( C132*C244 ) +C85 ) - (  ( C95*C126 ) *C115 ) ;
    double C602 =  ( C254*C111 ) - ( C587*C113 ) ;
    gz[(Ai + 2) * matrix_size + Bi + 0] += C602- ( C92*C141 ) ;
    gz[(Ai + 0) * matrix_size + Bi + 2] += C602- ( C90*C254 ) ;
    double C605 =  ( C188*C254 ) - ( C587*C114 ) ;
    gz[(Ai + 2) * matrix_size + Bi + 1] += C605- ( C92*C197 ) ;
    gz[(Ai + 1) * matrix_size + Bi + 2] += C605- ( C91*C254 ) ;
    gz[(Ai + 2) * matrix_size + Bi + 2] +=  (  (  (  (  ( C254*C244 ) +C553 ) +C243 ) - ( C587*C115 )  ) -C555 ) - ( C92*C254 ) ;
    double C130 = C94*C125;
    double C586 =  ( C130*C244 ) -C575;
    double C604 =  (  ( C252*C188 ) +C243 ) - ( C586*C114 ) ;
    gy[(Ai + 1) * matrix_size + Bi + 2] += C604- ( C252*C91 ) ;
    double C189 = C130*C113;
    double C140 =  ( C129*C111 ) -C189;
    gy[(Ai + 2) * matrix_size + Bi + 0] += C601- ( C92*C140 ) ;
    double C195 =  ( C188*C127 ) -C189;
    gx[(Ai + 2) * matrix_size + Bi + 1] += C603- ( C92*C195 ) ;
    gx[(Ai + 1) * matrix_size + Bi + 1] +=  (  (  ( C547+ ( C188*C195 )  ) - ( C582*C114 )  ) -C549 ) - ( C91*C195 ) ;
    double C597 =  (  ( C195*C111 ) +C187 ) - ( C582*C113 ) ;
    gx[(Ai + 1) * matrix_size + Bi + 0] += C597- ( C91*C142 ) ;
    gx[(Ai + 0) * matrix_size + Bi + 1] += C597- ( C90*C195 ) ;
    double C198 =  (  ( C188*C129 ) +C83 ) - ( C130*C114 ) ;
    gy[(Ai + 2) * matrix_size + Bi + 1] += C604- ( C92*C198 ) ;
    double C552 = C130/C104;
    gy[(Ai + 2) * matrix_size + Bi + 2] +=  (  (  ( C550+ ( C252*C244 )  ) - ( C586*C115 )  ) -C552 ) - ( C92*C252 ) ;
    gy[(Ai + 0) * matrix_size + Bi + 0] +=  (  (  ( C550+ ( C111*C140 )  ) - ( C113* (  ( C130*C111 ) -C572 )  )  ) -C552 ) - ( C90*C140 ) ;
    double C583 =  (  ( C188*C130 ) +C85 ) - ( C551*C114 ) ;
    gy[(Ai + 1) * matrix_size + Bi + 1] +=  (  (  (  ( C550+ ( C188*C198 )  ) +C187 ) - ( C114*C583 )  ) -C552 ) - ( C91*C198 ) ;
    double C598 =  ( C198*C111 ) - ( C113*C583 ) ;
    gy[(Ai + 1) * matrix_size + Bi + 0] += C598- ( C91*C140 ) ;
    gy[(Ai + 0) * matrix_size + Bi + 1] += C598- ( C90*C198 ) ;
}
