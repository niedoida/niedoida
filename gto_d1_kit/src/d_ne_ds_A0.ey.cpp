/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void vne_gradient_20_1(
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
    double C129 = xA-xB;
    double C132 = yA-yB;
    double C133 = zA-zB;
    double C685 = C129*be;
    double C693 = be*C133;
    double C130 = be*ae;
    double C151 = C132*C130;
    double C153 = C133*C130;
    double C144 = C129*C130;
    double C124 = be+ae;
    double C161 =  (  ( ae*yA ) + ( be*yB )  ) /C124;
    double C303 = C161-yB;
    double C164 =  (  ( zA*ae ) + ( be*zB )  ) /C124;
    double C175 = C164-zC;
    double C180 = C175*ae;
    double C404 = C164-zB;
    double C155 =  (  ( be*xB ) + ( ae*xA )  ) /C124;
    double C166 = C155-xB;
    double C168 = C155-xC;
    double C177 = C168*ae;
    double C690 = C132*be;
    double C172 = C161-yC;
    double C179 = C172*ae;
    double C150 = C124*2;
    double C159 =  ( std::pow(C124 , 2) ) *2;
    double C178 =  (  ( std::pow(C133 , 2) ) + (  ( std::pow(C132 , 2) ) + ( std::pow(C129 , 2) )  )  ) *C130;
    double C195 = std::exp( ( - ( C178/C124 )  ) );
    double C196 = C195* ( Pi*4 ) ;
    double C669 = C195* ( Pi*2. ) ;
    double C137 = bs[3];
    double C131 = bs[1];
    double C698 = C669*C131;
    double C148 =  ( ae* ( C698/C124 )  ) /C124;
    double C136 = bs[2];
    double C798 =  (  (  ( C136*C151 ) /C124 ) + ( C179*C137 )  ) *C196;
    double C199 =  (  ( C179*C136 ) + (  ( C131*C151 ) /C124 )  ) *C196;
    double C786 =  ( - ( C199/C124 )  ) /C150;
    double C818 =  (  ( C175*C798 ) /C124 ) - (  ( C199*C404 ) /C124 ) ;
    double C799 = C196* (  (  ( C136*C153 ) /C124 ) + ( C180*C137 )  ) ;
    double C201 = C196* (  (  ( C153*C131 ) /C124 ) + ( C136*C180 )  ) ;
    double C816 =  (  ( C172*C799 ) /C124 ) - (  ( C201*C303 ) /C124 ) ;
    double C788 =  ( - ( C201/C124 )  ) /C150;
    double C797 =  (  ( C177*C137 ) + (  ( C144*C136 ) /C124 )  ) *C196;
    double C699 = C669*C136;
    double C760 =  (  ( C699/C124 ) *ae ) /C124;
    double C815 =  (  ( C148- (  ( C199*C303 ) /C124 )  ) -C760 ) + (  ( C172*C798 ) /C124 ) ;
    double C819 =  (  ( C148- (  ( C404*C201 ) /C124 )  ) -C760 ) + (  ( C175*C799 ) /C124 ) ;
    double C121 =  (  ( C698*C129 ) /C124 ) + (  (  ( - (  ( C698*C685 ) /C124 )  ) /C124 ) - (  ( C699*C168 ) /C124 )  ) ;
    double C301 =  (  ( C698*C132 ) /C124 ) + (  (  ( - (  ( C698*C690 ) /C124 )  ) /C124 ) - (  ( C172*C699 ) /C124 )  ) ;
    double C770 =  ( ae*C301 ) /C124;
    double C402 =  (  ( C698*C133 ) /C124 ) + (  (  ( - (  ( C698*C693 ) /C124 )  ) /C124 ) - (  ( C699*C175 ) /C124 )  ) ;
    double C780 =  ( C402*ae ) /C124;
    double C198 =  (  ( C177*C136 ) + (  ( C144*C131 ) /C124 )  ) *C196;
    double cnst62 =  (  (  ( C148- (  ( C198*C166 ) /C124 )  ) -C760 ) + (  ( C797*C168 ) /C124 )  ) *C168;
    double C817 =  (  ( C797*C175 ) /C124 ) - (  ( C404*C198 ) /C124 ) ;
    double C784 =  ( - ( C198/C124 )  ) /C150;
    double C814 =  (  ( C172*C797 ) /C124 ) - (  ( C198*C303 ) /C124 ) ;
    double C128 = bs[0];
    double C670 = C128*C669;
    double C724 =  (  ( - (  ( C693*C670 ) /C124 )  ) /C124 ) - (  ( C698*C175 ) /C124 ) ;
    double C401 =  (  ( C133*C670 ) /C124 ) +C724;
    double C779 =  ( C401*ae ) /C124;
    double C723 =  (  ( - (  ( C690*C670 ) /C124 )  ) /C124 ) - (  ( C698*C172 ) /C124 ) ;
    double C300 =  (  ( C132*C670 ) /C124 ) +C723;
    double C769 =  ( C300*ae ) /C124;
    double C119 = C670/C124;
    double C143 =  ( C119*ae ) /C124;
    double C123 =  (  ( - (  ( C685*C670 ) /C124 )  ) /C124 ) - (  ( C698*C168 ) /C124 ) ;
    double C118 =  (  ( C129*C670 ) /C124 ) +C123;
    double C197 = C196* (  ( C177*C131 ) + (  ( C128*C144 ) /C124 )  ) ;
    double C417 =  (  ( C198*C175 ) /C124 ) - (  ( C404*C197 ) /C124 ) ;
    double C793 =  (  ( C133*C197 ) /C124 ) +C417;
    double C729 = C197/C159;
    double gx002000 =  (  (  (  (  ( C404*C417 ) -C729 ) - ( C817*C175 )  ) -C784 ) - ( C133*C417 )  ) - ( C793*C133 ) ;
    double C219 =  (  ( C198*C168 ) /C124 ) + (  ( C143- (  ( C166*C197 ) /C124 )  ) -C148 ) ;
    double cnst93 =  (  (  (  (  ( C417*C166 ) +C779 ) -C780 ) - ( C817*C168 )  ) - ( C219*C133 )  ) -C724;
    gx[(Ai + 3) * matrix_size + Bi + 0] += cnst1* ( cnst93- ( C129*C793 )  ) ;
    double cnst98 =  (  (  (  ( C118*ae ) /C124 ) + ( C219*C166 )  ) -C729 ) - (  ( ae*C121 ) /C124 ) ;
    double gx200000 =  (  (  (  (  ( cnst98-cnst62 ) -C784 ) -C118 ) - ( C129*C219 )  ) -C123 ) - ( C129* (  ( C219-C119 ) + (  ( C129*C197 ) /C124 )  )  ) ;
    double C316 =  (  ( C172*C198 ) /C124 ) - (  ( C303*C197 ) /C124 ) ;
    double C789 = C316+ (  ( C132*C197 ) /C124 ) ;
    double gx020000 =  (  (  (  (  ( C316*C303 ) -C729 ) - ( C172*C814 )  ) -C784 ) - ( C132*C316 )  ) - ( C132*C789 ) ;
    gx[(Ai + 4) * matrix_size + Bi + 0] +=  ( cnst0*gx200000 ) - ( gx020000*cnst0 ) ;
    gx[(Ai + 2) * matrix_size + Bi + 0] += gx002000+ (  ( - ( 0.5*gx200000 )  ) - ( gx020000*0.5 )  ) ;
    gx[(Ai + 1) * matrix_size + Bi + 0] +=  (  (  (  ( C303*C417 ) - ( C817*C172 )  ) - ( C316*C133 )  ) - ( C132*C793 )  ) *cnst1;
    double cnst131 =  (  (  (  (  ( C316*C166 ) +C769 ) -C770 ) - ( C814*C168 )  ) - ( C132*C219 )  ) -C723;
    gx[(Ai + 0) * matrix_size + Bi + 0] +=  ( cnst131- ( C129*C789 )  ) *cnst1;
    double C200 =  (  ( C179*C131 ) + (  ( C128*C151 ) /C124 )  ) *C196;
    double C320 =  (  ( C199*C172 ) /C124 ) + (  ( C143- (  ( C200*C303 ) /C124 )  ) -C148 ) ;
    double C791 =  (  ( C132*C200 ) /C124 ) + ( C320-C119 ) ;
    double C418 =  (  ( C199*C175 ) /C124 ) - (  ( C404*C200 ) /C124 ) ;
    double cnst150 =  (  (  (  (  ( C418*C303 ) +C779 ) -C780 ) - ( C172*C818 )  ) - ( C320*C133 )  ) -C724;
    double C734 = C200/C159;
    double cnst159 =  (  (  (  (  (  ( C320*C303 ) +C769 ) -C734 ) -C770 ) - ( C172*C815 )  ) -C786 ) -C300;
    double gy020000 =  (  ( cnst159- ( C132*C320 )  ) -C723 ) - ( C132*C791 ) ;
    double C794 =  (  ( C200*C133 ) /C124 ) +C418;
    double gy002000 =  (  (  (  (  ( C404*C418 ) -C734 ) - ( C818*C175 )  ) -C786 ) - ( C133*C418 )  ) - ( C794*C133 ) ;
    gy[(Ai + 1) * matrix_size + Bi + 0] +=  ( cnst150- ( C132*C794 )  ) *cnst1;
    double C216 =  (  ( C199*C168 ) /C124 ) - (  ( C200*C166 ) /C124 ) ;
    double cnst171 =  (  ( C216*C166 ) -C734 ) - ( C168* (  (  ( C168*C798 ) /C124 ) - (  ( C199*C166 ) /C124 )  )  ) ;
    gy[(Ai + 3) * matrix_size + Bi + 0] +=  (  (  (  ( C418*C166 ) - ( C168*C818 )  ) - ( C216*C133 )  ) - ( C129*C794 )  ) *cnst1;
    double gy200000 =  (  ( cnst171-C786 ) - ( C129*C216 )  ) - ( C129* ( C216+ (  ( C129*C200 ) /C124 )  )  ) ;
    gy[(Ai + 4) * matrix_size + Bi + 0] +=  ( cnst0*gy200000 ) - ( cnst0*gy020000 ) ;
    gy[(Ai + 2) * matrix_size + Bi + 0] +=  (  ( - ( 0.5*gy200000 )  ) - ( 0.5*gy020000 )  ) +gy002000;
    double gy110000 =  (  (  (  ( C320*C166 ) - ( C815*C168 )  ) -C118 ) - ( C132*C216 )  ) - ( C129*C791 ) ;
    gy[(Ai + 0) * matrix_size + Bi + 0] += gy110000*cnst1;
    double C202 =  (  ( C180*C131 ) + (  ( C128*C153 ) /C124 )  ) *C196;
    double C738 = C202/C159;
    double C217 =  (  ( C201*C168 ) /C124 ) - (  ( C202*C166 ) /C124 ) ;
    double cnst188 =  (  ( C217*C166 ) -C738 ) - (  (  (  ( C168*C799 ) /C124 ) - (  ( C201*C166 ) /C124 )  ) *C168 ) ;
    double C421 =  (  ( C143- (  ( C404*C202 ) /C124 )  ) -C148 ) + (  ( C201*C175 ) /C124 ) ;
    double cnst204 =  (  (  (  (  (  ( C404*C421 ) +C779 ) -C738 ) -C780 ) - ( C819*C175 )  ) -C788 ) -C401;
    double C796 =  ( C421-C119 ) + (  ( C202*C133 ) /C124 ) ;
    double gz101000 =  (  (  (  ( C421*C166 ) - ( C819*C168 )  ) -C118 ) - ( C217*C133 )  ) - ( C796*C129 ) ;
    gz[(Ai + 3) * matrix_size + Bi + 0] += gz101000*cnst1;
    double C318 =  (  ( C172*C201 ) /C124 ) - (  ( C202*C303 ) /C124 ) ;
    double C792 = C318+ (  ( C132*C202 ) /C124 ) ;
    double gz011000 =  (  (  (  ( C421*C303 ) - ( C172*C819 )  ) -C300 ) - ( C318*C133 )  ) - ( C796*C132 ) ;
    gz[(Ai + 1) * matrix_size + Bi + 0] += gz011000*cnst1;
    double gz020000 =  (  (  (  (  ( C318*C303 ) -C738 ) - ( C816*C172 )  ) -C788 ) - ( C132*C318 )  ) - ( C132*C792 ) ;
    gz[(Ai + 0) * matrix_size + Bi + 0] +=  (  (  (  ( C318*C166 ) - ( C816*C168 )  ) - ( C132*C217 )  ) - ( C129*C792 )  ) *cnst1;
    double gz200000 =  (  ( cnst188-C788 ) - ( C129*C217 )  ) - ( C129* (  (  ( C129*C202 ) /C124 ) +C217 )  ) ;
    gz[(Ai + 2) * matrix_size + Bi + 0] +=  (  (  ( cnst204- ( C133*C421 )  ) -C724 ) - ( C796*C133 )  ) + (  ( - ( 0.5*gz200000 )  ) - ( 0.5*gz020000 )  ) ;
    gz[(Ai + 4) * matrix_size + Bi + 0] +=  ( gz200000*cnst0 ) - ( cnst0*gz020000 ) ;
}
