/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void vne_gradient_11_2(
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
    double C103 = xA-xB;
    double C105 = yA-yB;
    double C106 = zA-zB;
    double C691 = be*C106;
    double C98 = be+ae;
    double C129 =  (  ( ae*xA ) + ( be*xB )  ) /C98;
    double C142 = C129-xC;
    double C152 = be*C142;
    double C140 = C129-xB;
    double C134 =  (  ( ae*yA ) + ( be*yB )  ) /C98;
    double C250 = C134-yB;
    double C128 =  ( be/C98 ) -1;
    double C104 = be*ae;
    double C117 = C103*C104;
    double C125 = C105*C104;
    double C127 = C106*C104;
    double C137 =  (  ( zA*ae ) + ( be*zB )  ) /C98;
    double C322 = C137-zB;
    double C149 = C137-zC;
    double C155 = C149*be;
    double C688 = C105*be;
    double C683 = C103*be;
    double C146 = C134-yC;
    double C154 = C146*be;
    double C133 =  ( std::pow(C98 , 2) ) *2;
    double C153 =  (  ( std::pow(C106 , 2) ) + (  ( std::pow(C105 , 2) ) + ( std::pow(C103 , 2) )  )  ) *C104;
    double C170 = std::exp( ( - ( C153/C98 )  ) );
    double C171 = C170* ( Pi*4 ) ;
    double C670 = C170* ( Pi*2. ) ;
    double C123 = 2*C98;
    double C110 = bs[3];
    double C101 = bs[1];
    double C695 = C670*C101;
    double C95 = C695/C98;
    double C710 = C128*C95;
    double C121 =  ( be*C95 ) /C98;
    double C109 = bs[2];
    double C771 =  (  ( C152*C110 ) - (  ( C109*C117 ) /C98 )  ) *C171;
    double C696 = C670*C109;
    double C742 =  ( be* ( C696/C98 )  ) /C98;
    double C248 =  (  ( C695*C105 ) /C98 ) + (  (  ( - (  ( C695*C688 ) /C98 )  ) /C98 ) - (  ( C146*C696 ) /C98 )  ) ;
    double C750 =  ( be*C248 ) /C98;
    double C320 =  (  ( C695*C106 ) /C98 ) + (  (  ( - (  ( C695*C691 ) /C98 )  ) /C98 ) - (  ( C149*C696 ) /C98 )  ) ;
    double C755 =  ( be*C320 ) /C98;
    double C96 =  (  ( C695*C103 ) /C98 ) + (  (  ( - (  ( C695*C683 ) /C98 )  ) /C98 ) - (  ( C142*C696 ) /C98 )  ) ;
    double C176 = C171* (  ( C109*C155 ) - (  ( C127*C101 ) /C98 )  ) ;
    double C765 =  ( - ( C176/C98 )  ) /C123;
    double C772 = C171* (  ( C154*C110 ) - (  ( C109*C125 ) /C98 )  ) ;
    double C773 =  (  ( C155*C110 ) - (  ( C127*C109 ) /C98 )  ) *C171;
    double C793 =  (  ( C710- (  ( C176*C322 ) /C98 )  ) -C742 ) + (  ( C149*C773 ) /C98 ) ;
    double C790 =  (  ( C146*C773 ) /C98 ) - (  ( C250*C176 ) /C98 ) ;
    double C173 = C171* (  ( C152*C109 ) - (  ( C101*C117 ) /C98 )  ) ;
    double C788 =  (  ( C146*C771 ) /C98 ) - (  ( C250*C173 ) /C98 ) ;
    double C791 =  (  ( C149*C771 ) /C98 ) - (  ( C173*C322 ) /C98 ) ;
    double cnst54 =  (  (  ( C710- (  ( C173*C140 ) /C98 )  ) -C742 ) + (  ( C771*C142 ) /C98 )  ) *C142;
    double C761 =  ( - ( C173/C98 )  ) /C123;
    double C174 =  (  ( C154*C109 ) - (  ( C125*C101 ) /C98 )  ) *C171;
    double C763 =  ( - ( C174/C98 )  ) /C123;
    double C789 =  (  ( C772*C146 ) /C98 ) + (  ( C710- (  ( C174*C250 ) /C98 )  ) -C742 ) ;
    double C792 =  (  ( C772*C149 ) /C98 ) - (  ( C174*C322 ) /C98 ) ;
    double C102 = bs[0];
    double C177 =  (  ( C155*C101 ) - (  ( C102*C127 ) /C98 )  ) *C171;
    double C719 = C177/C133;
    double C192 =  (  ( C142*C176 ) /C98 ) - (  ( C177*C140 ) /C98 ) ;
    double cnst65 =  (  ( C140*C192 ) -C719 ) - ( C142* (  (  ( C142*C773 ) /C98 ) - (  ( C140*C176 ) /C98 )  )  ) ;
    gz[(Ai + 0) * matrix_size + Bi + 0] +=  ( cnst65-C765 ) - ( C103*C192 ) ;
    double C264 =  (  ( C146*C176 ) /C98 ) - (  ( C250*C177 ) /C98 ) ;
    double C805 =  ( C264*C140 ) - ( C790*C142 ) ;
    gz[(Ai + 1) * matrix_size + Bi + 0] += C805- ( C105*C192 ) ;
    gz[(Ai + 1) * matrix_size + Bi + 1] +=  (  (  (  ( C250*C264 ) -C719 ) - ( C146*C790 )  ) -C765 ) - ( C105*C264 ) ;
    gz[(Ai + 0) * matrix_size + Bi + 1] += C805- ( C103*C264 ) ;
    double C671 = C102*C670;
    double C141 = C128* ( C671/C98 ) ;
    double C338 =  (  ( C149*C176 ) /C98 ) + (  ( C141- (  ( C177*C322 ) /C98 )  ) -C121 ) ;
    double C811 =  ( C338*C250 ) - ( C146*C793 ) ;
    gz[(Ai + 1) * matrix_size + Bi + 2] += C811- ( C105*C338 ) ;
    double C808 =  ( C338*C140 ) - ( C793*C142 ) ;
    gz[(Ai + 0) * matrix_size + Bi + 2] += C808- ( C103*C338 ) ;
    double C319 =  (  (  ( - (  ( C691*C671 ) /C98 )  ) /C98 ) - (  ( C695*C149 ) /C98 )  ) + (  ( C671*C106 ) /C98 ) ;
    double C731 = C319*C128;
    double cnst91 = C319+ (  (  (  (  (  ( C338*C322 ) +C731 ) -C719 ) -C755 ) - ( C149*C793 )  ) -C765 ) ;
    gz[(Ai + 2) * matrix_size + Bi + 2] += cnst91- ( C338*C106 ) ;
    double C93 =  (  (  ( - (  ( C683*C671 ) /C98 )  ) /C98 ) - (  ( C695*C142 ) /C98 )  ) + (  ( C103*C671 ) /C98 ) ;
    gz[(Ai + 2) * matrix_size + Bi + 0] +=  ( C93+C808 ) - ( C192*C106 ) ;
    double C247 =  (  (  ( - (  ( C688*C671 ) /C98 )  ) /C98 ) - (  ( C695*C146 ) /C98 )  ) + (  ( C105*C671 ) /C98 ) ;
    gz[(Ai + 2) * matrix_size + Bi + 1] +=  ( C811+C247 ) - ( C264*C106 ) ;
    double C723 = C247*C128;
    double C172 =  (  ( C152*C101 ) - (  ( C102*C117 ) /C98 )  ) *C171;
    double C709 = C172/C133;
    double C262 =  (  ( C146*C173 ) /C98 ) - (  ( C250*C172 ) /C98 ) ;
    double C803 =  (  ( C723+ ( C262*C140 )  ) -C750 ) - ( C788*C142 ) ;
    gx[(Ai + 0) * matrix_size + Bi + 1] +=  ( C803+C247 ) - ( C103*C262 ) ;
    gx[(Ai + 1) * matrix_size + Bi + 1] +=  (  (  (  ( C250*C262 ) -C709 ) - ( C146*C788 )  ) -C761 ) - ( C105*C262 ) ;
    double C334 =  (  ( C149*C173 ) /C98 ) - (  ( C322*C172 ) /C98 ) ;
    double C809 =  ( C250*C334 ) - ( C146*C791 ) ;
    gx[(Ai + 2) * matrix_size + Bi + 1] += C809- ( C262*C106 ) ;
    gx[(Ai + 2) * matrix_size + Bi + 2] +=  (  (  (  ( C334*C322 ) -C709 ) - ( C149*C791 )  ) -C761 ) - ( C334*C106 ) ;
    gx[(Ai + 1) * matrix_size + Bi + 2] += C809- ( C105*C334 ) ;
    double C806 =  (  ( C731+ ( C334*C140 )  ) -C755 ) - ( C142*C791 ) ;
    gx[(Ai + 0) * matrix_size + Bi + 2] +=  ( C319+C806 ) - ( C103*C334 ) ;
    double C194 =  (  ( C173*C142 ) /C98 ) + (  ( C141- (  ( C140*C172 ) /C98 )  ) -C121 ) ;
    gx[(Ai + 1) * matrix_size + Bi + 0] += C803- ( C105*C194 ) ;
    double cnst131 =  (  (  (  ( C140*C194 ) + ( C93*C128 )  ) -C709 ) - (  ( be*C96 ) /C98 )  ) -cnst54;
    gx[(Ai + 0) * matrix_size + Bi + 0] +=  (  ( cnst131-C761 ) +C93 ) - ( C103*C194 ) ;
    gx[(Ai + 2) * matrix_size + Bi + 0] += C806- ( C106*C194 ) ;
    double C175 =  (  ( C154*C101 ) - (  ( C102*C125 ) /C98 )  ) *C171;
    double C191 =  (  ( C174*C142 ) /C98 ) - (  ( C175*C140 ) /C98 ) ;
    double C715 = C175/C133;
    double cnst140 =  (  ( C140*C191 ) -C715 ) - (  (  (  ( C772*C142 ) /C98 ) - (  ( C174*C140 ) /C98 )  ) *C142 ) ;
    gy[(Ai + 0) * matrix_size + Bi + 0] +=  ( cnst140-C763 ) - ( C103*C191 ) ;
    double C335 =  (  ( C174*C149 ) /C98 ) - (  ( C175*C322 ) /C98 ) ;
    double C807 =  ( C140*C335 ) - ( C142*C792 ) ;
    gy[(Ai + 2) * matrix_size + Bi + 0] += C807- ( C106*C191 ) ;
    gy[(Ai + 0) * matrix_size + Bi + 2] += C807- ( C103*C335 ) ;
    gy[(Ai + 2) * matrix_size + Bi + 2] +=  (  (  (  ( C322*C335 ) -C715 ) - ( C149*C792 )  ) -C763 ) - ( C106*C335 ) ;
    double C810 =  (  (  ( C250*C335 ) +C731 ) -C755 ) - ( C146*C792 ) ;
    gy[(Ai + 1) * matrix_size + Bi + 2] +=  ( C810+C319 ) - ( C105*C335 ) ;
    double C266 =  (  ( C174*C146 ) /C98 ) + (  ( C141- (  ( C175*C250 ) /C98 )  ) -C121 ) ;
    gy[(Ai + 2) * matrix_size + Bi + 1] += C810- ( C106*C266 ) ;
    double cnst159 =  (  (  (  (  ( C723+ ( C250*C266 )  ) -C715 ) -C750 ) - ( C146*C789 )  ) -C763 ) +C247;
    gy[(Ai + 1) * matrix_size + Bi + 1] += cnst159- ( C105*C266 ) ;
    double C804 =  ( C140*C266 ) - ( C789*C142 ) ;
    gy[(Ai + 0) * matrix_size + Bi + 1] += C804- ( C103*C266 ) ;
    gy[(Ai + 1) * matrix_size + Bi + 0] +=  ( C93+C804 ) - ( C105*C191 ) ;
}
