/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void vne_gradient_20_3(
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
    double cnst0 = std::sqrt(0.75);
    double cnst1 = std::sqrt(3.0);
    double C115 = xA-xB;
    double C116 = yA-yB;
    double C113 = be+ae;
    double C132 =  (  ( ae*xA ) + ( be*xB )  ) /C113;
    double C138 = C132-xC;
    double C136 = C132-xB;
    double C134 =  (  ( be*yB ) + ( ae*yA )  ) /C113;
    double C239 = C134-yB;
    double C139 = C134-yC;
    double C117 = zA-zB;
    double C135 =  (  ( be*zB ) + ( zA*ae )  ) /C113;
    double C140 = C135-zC;
    double C321 = C135-zB;
    double C129 = 2*C113;
    double C141 =  ( be*ae ) * (  ( std::pow(C117 , 2) ) + (  ( std::pow(C115 , 2) ) + ( std::pow(C116 , 2) )  )  ) ;
    double C144 = std::exp( ( - ( C141/C113 )  ) );
    double C145 = C144*Pi;
    double C150 = 4* ( C145*C139 ) ;
    double C151 = 4* ( C145*C140 ) ;
    double C149 =  ( C145*C138 ) *4;
    double C556 = C144* ( Pi*2. ) ;
    double C120 = bs[3];
    double C569 = C149*C120;
    double C596 = C140*C569;
    double C589 = C139*C569;
    double C572 = C150*C120;
    double C594 = C572*C140;
    double C114 = bs[1];
    double C154 = C150*C114;
    double C571 = C154/C129;
    double C152 = C149*C114;
    double C568 = C152/C129;
    double C557 = C556*C114;
    double C108 = C557/C113;
    double cnst7 = C557*be;
    double C156 = C114*C151;
    double C574 = C156/C129;
    double C119 = bs[2];
    double C157 = C119*C151;
    double C322 = C157*C138;
    double C328 =  ( C321*C152 ) -C322;
    double C597 = C328- ( C117*C152 ) ;
    double C166 =  ( C156*C136 ) -C322;
    double C605 =  ( C157*C239 ) -C594;
    double C576 = C157/C129;
    double C331 =  (  ( C156*C321 ) +C108 ) - ( C157*C140 ) ;
    double C602 = C331- ( C156*C117 ) ;
    double C323 = C157*C139;
    double C329 =  ( C321*C154 ) -C323;
    double C599 = C329- ( C117*C154 ) ;
    double C248 =  ( C156*C239 ) -C323;
    double C595 = C248- ( C156*C116 ) ;
    double gz020000 =  (  (  (  (  ( C248*C239 ) +C574 ) - ( C139*C605 )  ) -C576 ) - ( C116*C248 )  ) - ( C116*C595 ) ;
    gz[(Ai + 0) * matrix_size + Bi + 0] +=  (  (  (  ( C248*C136 ) - ( C138*C605 )  ) - ( C116*C166 )  ) - ( C115*C595 )  ) *cnst1;
    double cnst77 =  (  (  (  ( C136*C166 ) +C574 ) - (  (  ( C157*C136 ) -C596 ) *C138 )  ) -C576 ) - ( C115*C166 ) ;
    double gz200000 = cnst77- ( C115* ( C166- ( C156*C115 )  )  ) ;
    gz[(Ai + 4) * matrix_size + Bi + 0] +=  ( gz200000*cnst0 ) - ( gz020000*cnst0 ) ;
    double C153 = C149*C119;
    double C167 =  ( C108+ ( C152*C136 )  ) - ( C153*C138 ) ;
    double C606 =  ( C321*C153 ) -C596;
    double cnst92 = C606*C139;
    double C570 = C153/C129;
    double gx002000 =  (  (  (  ( C568+ ( C321*C328 )  ) - ( C606*C140 )  ) -C570 ) - ( C117*C328 )  ) - ( C117*C597 ) ;
    double C603 =  ( C239*C153 ) -C589;
    double C155 = C119*C150;
    double C240 = C155*C138;
    double C165 =  ( C136*C154 ) -C240;
    gy[(Ai + 3) * matrix_size + Bi + 0] +=  (  (  (  ( C136*C329 ) -cnst92 ) - ( C117*C165 )  ) - ( C115*C599 )  ) *cnst1;
    double C246 =  ( C152*C239 ) -C240;
    double C590 = C246- ( C116*C152 ) ;
    double gx020000 =  (  (  (  ( C568+ ( C246*C239 )  ) - ( C139*C603 )  ) -C570 ) - ( C246*C116 )  ) - ( C116*C590 ) ;
    gx[(Ai + 1) * matrix_size + Bi + 0] +=  (  (  (  ( C239*C328 ) -cnst92 ) - ( C246*C117 )  ) - ( C116*C597 )  ) *cnst1;
    double C573 = C155/C129;
    double cnst126 =  (  (  ( C571+ ( C165*C136 )  ) - (  (  ( C155*C136 ) -C589 ) *C138 )  ) -C573 ) - ( C115*C165 ) ;
    double gy200000 = cnst126- ( C115* ( C165- ( C115*C154 )  )  ) ;
    double C249 =  ( C108+ ( C239*C154 )  ) - ( C155*C139 ) ;
    double C593 = C249- ( C116*C154 ) ;
    double C607 =  ( C155*C321 ) -C594;
    double gy002000 =  (  (  (  ( C571+ ( C321*C329 )  ) - ( C607*C140 )  ) -C573 ) - ( C117*C329 )  ) - ( C117*C599 ) ;
    double C563 = C119*C556;
    double C238 =  (  (  ( - (  ( C116*cnst7 ) /C113 )  ) /C113 ) - (  ( C563*C139 ) /C113 )  ) + (  ( C116*C557 ) /C113 ) ;
    double gx110000 =  (  (  (  ( C246*C136 ) +C238 ) - ( C138*C603 )  ) - ( C116*C167 )  ) - ( C115*C590 ) ;
    gx[(Ai + 0) * matrix_size + Bi + 0] += gx110000*cnst1;
    double C320 =  (  ( C117*C557 ) /C113 ) + (  (  ( - (  ( C117*cnst7 ) /C113 )  ) /C113 ) - (  ( C563*C140 ) /C113 )  ) ;
    double gx101000 =  (  (  (  ( C136*C328 ) +C320 ) - ( C606*C138 )  ) - ( C117*C167 )  ) - ( C115*C597 ) ;
    gx[(Ai + 3) * matrix_size + Bi + 0] += gx101000*cnst1;
    double gy011000 =  (  (  ( C320+ ( C329*C239 )  ) - ( C607*C139 )  ) - ( C117*C249 )  ) - ( C116*C599 ) ;
    gy[(Ai + 1) * matrix_size + Bi + 0] += gy011000*cnst1;
    double C110 = C563/C113;
    double C608 =  ( C110+ ( C157*C321 )  ) - ( C140* ( C151*C120 )  ) ;
    gz[(Ai + 1) * matrix_size + Bi + 0] +=  (  (  (  ( C331*C239 ) - ( C608*C139 )  ) - ( C117*C248 )  ) - ( C116*C602 )  ) *cnst1;
    double cnst165 =  (  (  ( C320+ (  ( C331*C321 ) +C574 )  ) - ( C608*C140 )  ) -C576 ) - ( C331*C117 ) ;
    gz[(Ai + 2) * matrix_size + Bi + 0] +=  ( cnst165- ( C117*C602 )  ) + (  ( - ( 0.5*gz200000 )  ) - ( 0.5*gz020000 )  ) ;
    gz[(Ai + 3) * matrix_size + Bi + 0] +=  (  (  (  ( C331*C136 ) - ( C608*C138 )  ) - ( C117*C166 )  ) - ( C115*C602 )  ) *cnst1;
    double C604 =  ( C110+ ( C155*C239 )  ) - ( C572*C139 ) ;
    gy[(Ai + 0) * matrix_size + Bi + 0] +=  (  (  (  ( C136*C249 ) - ( C138*C604 )  ) - ( C116*C165 )  ) - ( C115*C593 )  ) *cnst1;
    double cnst178 =  (  (  ( C238+ ( C571+ ( C239*C249 )  )  ) - ( C139*C604 )  ) -C573 ) - ( C116*C249 ) ;
    double gy020000 = cnst178- ( C116*C593 ) ;
    gy[(Ai + 4) * matrix_size + Bi + 0] +=  ( cnst0*gy200000 ) - ( cnst0*gy020000 ) ;
    gy[(Ai + 2) * matrix_size + Bi + 0] +=  (  ( - ( 0.5*gy200000 )  ) - ( 0.5*gy020000 )  ) +gy002000;
    double C109 =  (  ( C115*C557 ) /C113 ) + (  (  ( - (  ( C115*cnst7 ) /C113 )  ) /C113 ) - (  ( C563*C138 ) /C113 )  ) ;
    double cnst186 =  ( C109+ ( C568+ ( C167*C136 )  )  ) - (  (  ( C110+ ( C136*C153 )  ) - ( C138*C569 )  ) *C138 ) ;
    double gx200000 =  (  ( cnst186-C570 ) - ( C115*C167 )  ) - (  ( C167- ( C115*C152 )  ) *C115 ) ;
    gx[(Ai + 2) * matrix_size + Bi + 0] +=  (  ( - ( 0.5*gx200000 )  ) - ( 0.5*gx020000 )  ) +gx002000;
    gx[(Ai + 4) * matrix_size + Bi + 0] +=  ( gx200000*cnst0 ) - ( gx020000*cnst0 ) ;
}
