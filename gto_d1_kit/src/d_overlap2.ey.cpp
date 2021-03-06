/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void overlap_gradient_02(
double ae , 
double be , 
double cc , 
double xAB , 
double yAB , 
double zAB , 
double* const gx , 
double* const gy , 
double* const gz , 
std::size_t matrix_size , 
std::size_t Ai , 
std::size_t Bi ) 
{
    double cnst1 = std::sqrt(0.75);
    double cnst2 = cc* ( std::sqrt(3.0) ) ;
    double C178 = ae*zAB;
    double C162 = xAB*ae;
    double cnst5 = ae*2;
    double C163 = be+ae;
    double C209 = std::sqrt( ( Pi/C163 ) );
    double cnst6 = be*C209;
    double C177 =  ( - (  ( cnst6*zAB ) /C163 )  ) *ae;
    double C218 = C177*2;
    double C161 =  ( - (  ( xAB*cnst6 ) /C163 )  ) *ae;
    double cnst11 = C161*2;
    double C176 =  ( C178*C209 ) /C163;
    double C155 =  ( C162*C209 ) /C163;
    double cnst22 = std::pow(C209 , 2);
    double C164 = 2.*C163;
    double C226 =  (  ( C209*ae ) *2. ) /C164;
    double C231 =  (  (  ( C177*C178 ) *2 ) /C163 ) +C226;
    gz[(Ai + 0) * matrix_size + Bi + 3] += cnst2* (  ( C155*C209 ) *C231 ) ;
    double C229 =  (  (  ( C162*C161 ) *2 ) /C163 ) +C226;
    gx[(Ai + 0) * matrix_size + Bi + 3] += cnst2* (  ( C209*C229 ) *C176 ) ;
    double gx000200 = cnst22* (  (  ( C162*C229 ) /C163 ) + (  ( cnst11+ ( cnst5*C155 )  ) /C164 )  ) ;
    double C210 = C209/C164;
    double C205 = std::pow(C163 , 2);
    double C158 = C210+ (  (  ( std::pow(C162 , 2) ) *C209 ) /C205 ) ;
    double gz000200 = C218* ( C158*C209 ) ;
    double C175 =  (  ( C209* ( std::pow(C178 , 2) )  ) /C205 ) +C210;
    double C170 =  ( - (  ( yAB*cnst6 ) /C163 )  ) *ae;
    double C217 = C170*2;
    double gy000200 =  ( C158*C217 ) *C209;
    gy[(Ai + 0) * matrix_size + Bi + 3] += cnst2* (  ( C155*C217 ) *C176 ) ;
    double C171 = yAB*ae;
    double C230 =  (  (  ( C171*C170 ) *2 ) /C163 ) +C226;
    gy[(Ai + 0) * matrix_size + Bi + 0] += cnst2* (  ( C155*C230 ) *C209 ) ;
    gy[(Ai + 0) * matrix_size + Bi + 1] += cnst2* (  ( C230*C209 ) *C176 ) ;
    double C168 = C210+ (  (  ( std::pow(C171 , 2) ) *C209 ) /C205 ) ;
    double gx000020 = C209* ( C168*cnst11 ) ;
    gx[(Ai + 0) * matrix_size + Bi + 4] += cc* (  ( gx000200*cnst1 ) - ( gx000020*cnst1 )  ) ;
    gx[(Ai + 0) * matrix_size + Bi + 2] += cc* (  ( C175* ( C209*cnst11 )  ) + (  ( - ( gx000200*0.5 )  ) - ( 0.5*gx000020 )  )  ) ;
    double gz000020 = C218* ( C168*C209 ) ;
    gz[(Ai + 0) * matrix_size + Bi + 4] += cc* (  ( gz000200*cnst1 ) - ( gz000020*cnst1 )  ) ;
    double cnst67 =  (  ( - ( 0.5*gz000200 )  ) - ( gz000020*0.5 )  ) + (  (  (  ( C178*C231 ) /C163 ) + (  (  ( cnst5*C176 ) +C218 ) /C164 )  ) *cnst22 ) ;
    gz[(Ai + 0) * matrix_size + Bi + 2] += cc*cnst67;
    double C169 =  ( C171*C209 ) /C163;
    gz[(Ai + 0) * matrix_size + Bi + 0] += cnst2* ( C218* ( C169*C155 )  ) ;
    gz[(Ai + 0) * matrix_size + Bi + 1] += cnst2* (  ( C169*C209 ) *C231 ) ;
    gx[(Ai + 0) * matrix_size + Bi + 0] += cnst2* (  ( C169*C229 ) *C209 ) ;
    double gy000020 =  (  (  ( C171*C230 ) /C163 ) + (  (  ( cnst5*C169 ) +C217 ) /C164 )  ) *cnst22;
    gy[(Ai + 0) * matrix_size + Bi + 2] += cc* (  ( C175* ( C217*C209 )  ) + (  ( - ( 0.5*gy000200 )  ) - ( 0.5*gy000020 )  )  ) ;
    gy[(Ai + 0) * matrix_size + Bi + 4] += cc* (  ( gy000200*cnst1 ) - ( cnst1*gy000020 )  ) ;
    gx[(Ai + 0) * matrix_size + Bi + 1] +=  (  ( C169*cnst11 ) *C176 ) *cnst2;
}
