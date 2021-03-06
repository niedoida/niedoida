/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void vne_gradient_20_2(
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
    double C131 = yA-yB;
    double C132 = zA-zB;
    double C694 = be*C132;
    double C124 = be+ae;
    double C155 =  (  ( ae*xA ) + ( be*xB )  ) /C124;
    double C168 = C155-xC;
    double C178 = be*C168;
    double C166 = C155-xB;
    double C160 =  (  ( ae*yA ) + ( be*yB )  ) /C124;
    double C304 = C160-yB;
    double C154 =  ( be/C124 ) -1;
    double C130 = be*ae;
    double C143 = C129*C130;
    double C151 = C131*C130;
    double C153 = C132*C130;
    double C163 =  (  ( zA*ae ) + ( be*zB )  ) /C124;
    double C405 = C163-zB;
    double C175 = C163-zC;
    double C181 = C175*be;
    double C691 = C131*be;
    double C686 = C129*be;
    double C172 = C160-yC;
    double C180 = C172*be;
    double C159 =  ( std::pow(C124 , 2) ) *2;
    double C179 =  (  ( std::pow(C132 , 2) ) + (  ( std::pow(C131 , 2) ) + ( std::pow(C129 , 2) )  )  ) *C130;
    double C196 = std::exp( ( - ( C179/C124 )  ) );
    double C197 = C196* ( Pi*4 ) ;
    double C670 = C196* ( Pi*2. ) ;
    double C149 = 2*C124;
    double C136 = bs[3];
    double C127 = bs[1];
    double C699 = C670*C127;
    double C120 = C699/C124;
    double C731 = C154*C120;
    double C147 =  ( be*C120 ) /C124;
    double C135 = bs[2];
    double C799 =  (  ( C181*C136 ) - (  ( C153*C135 ) /C124 )  ) *C197;
    double C797 =  (  ( C178*C136 ) - (  ( C135*C143 ) /C124 )  ) *C197;
    double C199 =  (  ( C178*C135 ) - (  ( C127*C143 ) /C124 )  ) *C197;
    double C814 =  (  ( C172*C797 ) /C124 ) - (  ( C199*C304 ) /C124 ) ;
    double C817 =  (  ( C175*C797 ) /C124 ) - (  ( C199*C405 ) /C124 ) ;
    double C784 =  ( - ( C199/C124 )  ) /C149;
    double C202 = C197* (  ( C135*C181 ) - (  ( C153*C127 ) /C124 )  ) ;
    double C788 =  ( - ( C202/C124 )  ) /C149;
    double C816 =  (  ( C799*C172 ) /C124 ) - (  ( C304*C202 ) /C124 ) ;
    double C200 =  (  ( C180*C135 ) - (  ( C151*C127 ) /C124 )  ) *C197;
    double C786 =  ( - ( C200/C124 )  ) /C149;
    double C700 = C670*C135;
    double C762 =  ( be* ( C700/C124 )  ) /C124;
    double C819 =  (  ( C799*C175 ) /C124 ) + (  ( C731- (  ( C202*C405 ) /C124 )  ) -C762 ) ;
    double cnst47 =  (  (  ( C168*C797 ) /C124 ) + (  ( C731- (  ( C199*C166 ) /C124 )  ) -C762 )  ) *C168;
    double C403 =  (  ( C699*C132 ) /C124 ) + (  (  ( - (  ( C699*C694 ) /C124 )  ) /C124 ) - (  ( C175*C700 ) /C124 )  ) ;
    double C780 =  ( be*C403 ) /C124;
    double C121 =  (  ( C699*C129 ) /C124 ) + (  (  ( - (  ( C699*C686 ) /C124 )  ) /C124 ) - (  ( C700*C168 ) /C124 )  ) ;
    double C302 =  (  ( C699*C131 ) /C124 ) + (  (  ( - (  ( C699*C691 ) /C124 )  ) /C124 ) - (  ( C172*C700 ) /C124 )  ) ;
    double C771 =  ( be*C302 ) /C124;
    double C798 =  (  ( C180*C136 ) - (  ( C135*C151 ) /C124 )  ) *C197;
    double C818 =  (  ( C175*C798 ) /C124 ) - (  ( C200*C405 ) /C124 ) ;
    double C815 =  (  ( C172*C798 ) /C124 ) + (  ( C731- (  ( C200*C304 ) /C124 )  ) -C762 ) ;
    double C128 = bs[0];
    double C198 =  (  ( C178*C127 ) - (  ( C128*C143 ) /C124 )  ) *C197;
    double C730 = C198/C159;
    double C317 =  (  ( C172*C199 ) /C124 ) - (  ( C304*C198 ) /C124 ) ;
    double C789 =  (  ( C131*C198 ) /C124 ) +C317;
    double gx020000 =  (  (  (  (  ( C304*C317 ) -C730 ) - ( C172*C814 )  ) -C784 ) - ( C131*C317 )  ) - ( C131*C789 ) ;
    double C418 =  (  ( C199*C175 ) /C124 ) - (  ( C198*C405 ) /C124 ) ;
    double C793 =  (  ( C198*C132 ) /C124 ) +C418;
    double gx002000 =  (  (  (  (  ( C418*C405 ) -C730 ) - ( C175*C817 )  ) -C784 ) - ( C132*C418 )  ) - ( C793*C132 ) ;
    gx[(Ai + 1) * matrix_size + Bi + 0] +=  (  (  (  ( C304*C418 ) - ( C172*C817 )  ) - ( C132*C317 )  ) - ( C131*C793 )  ) *cnst1;
    double C203 =  (  ( C181*C127 ) - (  ( C128*C153 ) /C124 )  ) *C197;
    double C319 =  (  ( C172*C202 ) /C124 ) - (  ( C304*C203 ) /C124 ) ;
    double C740 = C203/C159;
    double C218 =  (  ( C168*C202 ) /C124 ) - (  ( C203*C166 ) /C124 ) ;
    double cnst111 =  (  ( C166*C218 ) -C740 ) - (  (  (  ( C799*C168 ) /C124 ) - (  ( C166*C202 ) /C124 )  ) *C168 ) ;
    double gz200000 =  (  ( cnst111-C788 ) - ( C129*C218 )  ) - ( C129* (  (  ( C129*C203 ) /C124 ) +C218 )  ) ;
    double C792 = C319+ (  ( C131*C203 ) /C124 ) ;
    gz[(Ai + 0) * matrix_size + Bi + 0] +=  (  (  (  ( C319*C166 ) - ( C168*C816 )  ) - ( C131*C218 )  ) - ( C129*C792 )  ) *cnst1;
    double gz020000 =  (  (  (  (  ( C304*C319 ) -C740 ) - ( C172*C816 )  ) -C788 ) - ( C131*C319 )  ) - ( C131*C792 ) ;
    gz[(Ai + 4) * matrix_size + Bi + 0] +=  ( gz200000*cnst0 ) - ( cnst0*gz020000 ) ;
    double C671 = C128*C670;
    double C119 = C671/C124;
    double C167 = C119*C154;
    double C422 =  (  ( C175*C202 ) /C124 ) + (  ( C167- (  ( C203*C405 ) /C124 )  ) -C147 ) ;
    double C796 =  ( C119+C422 ) + (  ( C203*C132 ) /C124 ) ;
    double C220 =  (  ( C167- (  ( C198*C166 ) /C124 )  ) -C147 ) + (  ( C199*C168 ) /C124 ) ;
    double C123 =  (  ( - (  ( C686*C671 ) /C124 )  ) /C124 ) - (  ( C699*C168 ) /C124 ) ;
    double C725 =  (  ( - (  ( C694*C671 ) /C124 )  ) /C124 ) - (  ( C699*C175 ) /C124 ) ;
    double C402 = C725+ (  ( C671*C132 ) /C124 ) ;
    double C757 = C402*C154;
    double cnst150 =  (  (  (  (  ( C757+ ( C422*C405 )  ) -C740 ) -C780 ) - ( C175*C819 )  ) -C788 ) +C402;
    gz[(Ai + 2) * matrix_size + Bi + 0] +=  (  ( - ( 0.5*gz200000 )  ) - ( 0.5*gz020000 )  ) + (  ( C725+ ( cnst150- ( C422*C132 )  )  ) - ( C132*C796 )  ) ;
    double cnst157 = C725+ (  (  (  (  ( C166*C418 ) +C757 ) -C780 ) - ( C817*C168 )  ) - ( C132*C220 )  ) ;
    gx[(Ai + 3) * matrix_size + Bi + 0] +=  ( cnst157- ( C129*C793 )  ) *cnst1;
    double C118 = C123+ (  ( C129*C671 ) /C124 ) ;
    double gz101000 =  (  (  (  ( C422*C166 ) - ( C819*C168 )  ) +C118 ) - ( C132*C218 )  ) - ( C129*C796 ) ;
    gz[(Ai + 3) * matrix_size + Bi + 0] += cnst1*gz101000;
    double cnst166 =  (  (  (  ( C166*C220 ) + ( C118*C154 )  ) -C730 ) - (  ( be*C121 ) /C124 )  ) -cnst47;
    double gx200000 =  ( C123+ (  ( C118+ ( cnst166-C784 )  ) - ( C129*C220 )  )  ) - ( C129* (  ( C119+C220 ) + (  ( C129*C198 ) /C124 )  )  ) ;
    gx[(Ai + 4) * matrix_size + Bi + 0] +=  ( cnst0*gx200000 ) - ( gx020000*cnst0 ) ;
    gx[(Ai + 2) * matrix_size + Bi + 0] +=  (  ( - ( 0.5*gx200000 )  ) - ( gx020000*0.5 )  ) +gx002000;
    double C724 =  (  ( - (  ( C691*C671 ) /C124 )  ) /C124 ) - (  ( C699*C172 ) /C124 ) ;
    double C301 =  (  ( C131*C671 ) /C124 ) +C724;
    double C746 = C301*C154;
    double cnst179 = C724+ (  (  (  (  ( C166*C317 ) +C746 ) -C771 ) - ( C168*C814 )  ) - ( C131*C220 )  ) ;
    gx[(Ai + 0) * matrix_size + Bi + 0] +=  ( cnst179- ( C129*C789 )  ) *cnst1;
    double gz011000 =  (  ( C301+ (  ( C422*C304 ) - ( C172*C819 )  )  ) - ( C319*C132 )  ) - ( C131*C796 ) ;
    gz[(Ai + 1) * matrix_size + Bi + 0] += gz011000*cnst1;
    double C201 =  (  ( C180*C127 ) - (  ( C128*C151 ) /C124 )  ) *C197;
    double C736 = C201/C159;
    double C419 =  (  ( C200*C175 ) /C124 ) - (  ( C201*C405 ) /C124 ) ;
    double C217 =  (  ( C200*C168 ) /C124 ) - (  ( C166*C201 ) /C124 ) ;
    double cnst198 =  (  ( C166*C217 ) -C736 ) - (  (  (  ( C798*C168 ) /C124 ) - (  ( C200*C166 ) /C124 )  ) *C168 ) ;
    double gy200000 =  (  ( cnst198-C786 ) - ( C129*C217 )  ) - ( C129* ( C217+ (  ( C129*C201 ) /C124 )  )  ) ;
    double C321 =  (  ( C167- (  ( C304*C201 ) /C124 )  ) -C147 ) + (  ( C200*C172 ) /C124 ) ;
    double cnst216 = C301+ (  (  (  (  ( C746+ ( C321*C304 )  ) -C736 ) -C771 ) - ( C172*C815 )  ) -C786 ) ;
    double C791 =  (  ( C131*C201 ) /C124 ) + ( C119+C321 ) ;
    double cnst221 = C725+ (  (  (  (  ( C304*C419 ) +C757 ) -C780 ) - ( C172*C818 )  ) - ( C321*C132 )  ) ;
    double gy020000 =  (  ( cnst216- ( C131*C321 )  ) +C724 ) - ( C131*C791 ) ;
    gy[(Ai + 4) * matrix_size + Bi + 0] +=  ( cnst0*gy200000 ) - ( cnst0*gy020000 ) ;
    double gy110000 =  (  (  (  ( C321*C166 ) - ( C815*C168 )  ) +C118 ) - ( C131*C217 )  ) - ( C129*C791 ) ;
    gy[(Ai + 0) * matrix_size + Bi + 0] += gy110000*cnst1;
    double C794 =  (  ( C132*C201 ) /C124 ) +C419;
    gy[(Ai + 1) * matrix_size + Bi + 0] +=  ( cnst221- ( C131*C794 )  ) *cnst1;
    double gy002000 =  (  (  (  (  ( C419*C405 ) -C736 ) - ( C818*C175 )  ) -C786 ) - ( C132*C419 )  ) - ( C794*C132 ) ;
    gy[(Ai + 2) * matrix_size + Bi + 0] +=  (  ( - ( 0.5*gy200000 )  ) - ( 0.5*gy020000 )  ) +gy002000;
    gy[(Ai + 3) * matrix_size + Bi + 0] +=  (  (  (  ( C166*C419 ) - ( C818*C168 )  ) - ( C217*C132 )  ) - ( C129*C794 )  ) *cnst1;
}
