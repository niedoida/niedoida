/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void overlap_gradient_30(
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
    double cnst1 = std::sqrt( ( 5.0/8.0 ) );
    double cnst2 = std::sqrt(6.0);
    double cnst4 = cc* ( std::sqrt(15.0) ) ;
    double cnst5 = std::sqrt(7.5);
    double cnst7 = std::sqrt( ( 45./8.0 ) );
    double C16063 = be*zAB;
    double C16032 = xAB*be;
    double cnst9 = std::sqrt( ( 3.0/8.0 ) );
    double cnst11 = be*2;
    double C16030 = be+ae;
    double C16034 = 2.*C16030;
    double C16021 = std::sqrt( ( Pi/C16030 ) );
    double C16112 = C16021/C16034;
    double C16061 = be*C16021;
    double C16028 = - (  ( zAB*C16061 ) /C16030 ) ;
    double C16062 = C16028*ae;
    double C16128 = C16062*2;
    double C16068 =  ( - ( C16061*2 )  ) /C16034;
    double C16070 = C16068- (  (  ( C16062*C16063 ) *2 ) /C16030 ) ;
    double C16147 =  (  ( C16128- (  ( be*C16028 ) *2 )  ) /C16034 ) - (  ( C16070*C16063 ) /C16030 ) ;
    double C16022 = - (  ( C16032*C16021 ) /C16030 ) ;
    double C16031 = C16022*ae;
    double C16124 = C16031*2;
    double C16040 = C16068- (  (  ( C16032*C16031 ) *2 ) /C16030 ) ;
    double C16145 =  (  ( C16124- (  ( C16022*be ) *2 )  ) /C16034 ) - (  ( C16032*C16040 ) /C16030 ) ;
    double gx201000 =  ( C16145*C16021 ) *C16028;
    double cnst32 = C16021*2.;
    double C16097 = std::pow(C16030 , 2);
    double C16118 = C16112+ (  (  ( std::pow(C16063 , 2) ) *C16021 ) /C16097 ) ;
    double cnst43 =  (  (  ( C16070*2 ) - ( cnst11*C16118 )  ) /C16034 ) - (  ( C16063*C16147 ) /C16030 ) ;
    double C16109 = C16097*2.;
    double C16059 =  (  ( - ( cnst32*C16063 )  ) /C16109 ) - (  ( C16063*C16118 ) /C16030 ) ;
    double C16023 =  (  ( C16021* ( std::pow(C16032 , 2) )  ) /C16097 ) +C16112;
    double C16026 =  (  ( - ( C16032*cnst32 )  ) /C16109 ) - (  ( C16032*C16023 ) /C16030 ) ;
    double gz300000 = C16128* ( C16021*C16026 ) ;
    double cnst56 =  (  (  ( C16040*2 ) - ( cnst11*C16023 )  ) /C16034 ) - (  ( C16032*C16145 ) /C16030 ) ;
    double gx300000 = cnst56* ( std::pow(C16021 , 2) ) ;
    double gz201000 =  ( C16021*C16023 ) *C16070;
    double cnst64 = std::sqrt( ( 45.0/8.0 ) );
    double C16027 = - (  ( yAB*C16061 ) /C16030 ) ;
    double cnst68 =  ( C16118* ( C16027*C16124 )  ) *cnst2;
    gz[(Ai + 1) * matrix_size + Bi + 0] += cnst4* ( C16070* ( C16022*C16027 )  ) ;
    double C16047 = C16027*ae;
    double C16127 = C16047*2;
    double gz210000 =  ( C16127*C16023 ) *C16028;
    double gy300000 =  ( C16127*C16026 ) *C16021;
    gx[(Ai + 1) * matrix_size + Bi + 0] +=  (  ( C16027*C16040 ) *C16028 ) *cnst4;
    double gx210000 =  ( C16027*C16145 ) *C16021;
    double C16048 = be*yAB;
    double C16055 = C16068- (  (  ( C16047*C16048 ) *2 ) /C16030 ) ;
    double gy210000 = C16021* ( C16055*C16023 ) ;
    gy[(Ai + 1) * matrix_size + Bi + 0] +=  (  ( C16022*C16055 ) *C16028 ) *cnst4;
    double C16146 =  (  ( C16127- (  ( C16027*be ) *2 )  ) /C16034 ) - (  ( C16048*C16055 ) /C16030 ) ;
    double gy021000 = C16028* ( C16146*C16021 ) ;
    gy[(Ai + 3) * matrix_size + Bi + 0] += cc* (  (  ( C16059* ( C16127*C16021 )  ) - ( gz210000*1.5 )  ) - ( 1.5*gy021000 )  ) ;
    gy[(Ai + 5) * matrix_size + Bi + 0] += cc* (  ( gz210000*cnst5 ) - ( gy021000*cnst5 )  ) ;
    double gy120000 =  ( C16022*C16146 ) *C16021;
    gy[(Ai + 6) * matrix_size + Bi + 0] += cc* (  ( cnst64*gy120000 ) + ( gy300000*cnst1 )  ) ;
    gy[(Ai + 4) * matrix_size + Bi + 0] += cc* ( cnst68- (  ( cnst9*gy120000 ) + ( cnst9*gy300000 )  )  ) ;
    double C16117 = C16112+ (  (  ( std::pow(C16048 , 2) ) *C16021 ) /C16097 ) ;
    double cnst112 =  (  (  ( C16055*2 ) - ( cnst11*C16117 )  ) /C16034 ) - (  ( C16048*C16146 ) /C16030 ) ;
    double gy030000 =  ( cnst112*C16021 ) *C16021;
    double cnst115 =  ( cnst9*gy030000 ) + (  ( cnst9*gy210000 ) + ( cnst2* ( C16118* ( C16021*C16055 )  )  )  ) ;
    gy[(Ai + 2) * matrix_size + Bi + 0] += - ( cc*cnst115 ) ;
    gy[(Ai + 0) * matrix_size + Bi + 0] += cc* (  ( gy210000*cnst7 ) - ( gy030000*cnst1 )  ) ;
    double gz120000 = C16028* ( C16117*C16124 ) ;
    gx[(Ai + 5) * matrix_size + Bi + 0] += cc* (  ( gx201000*cnst5 ) - ( gz120000*cnst5 )  ) ;
    double cnst124 =  ( cnst2* (  ( C16022*C16021 ) *C16147 )  ) - (  ( cnst9*gz300000 ) + ( cnst9*gz120000 )  ) ;
    gz[(Ai + 4) * matrix_size + Bi + 0] += cc*cnst124;
    gz[(Ai + 6) * matrix_size + Bi + 0] += cc* (  ( gz300000*cnst1 ) + ( gz120000*cnst64 )  ) ;
    gx[(Ai + 3) * matrix_size + Bi + 0] += cc* (  (  ( C16059* ( C16021*C16124 )  ) - ( gx201000*1.5 )  ) - ( gz120000*1.5 )  ) ;
    double gz021000 =  ( C16021*C16117 ) *C16070;
    gz[(Ai + 5) * matrix_size + Bi + 0] += cc* (  ( gz201000*cnst5 ) - ( cnst5*gz021000 )  ) ;
    gz[(Ai + 3) * matrix_size + Bi + 0] += cc* (  (  (  ( C16021*C16021 ) *cnst43 ) - ( 1.5*gz201000 )  ) - ( 1.5*gz021000 )  ) ;
    double gx120000 =  ( C16040*C16117 ) *C16021;
    double cnst139 =  ( cnst2* (  ( C16021*C16040 ) *C16118 )  ) - (  ( cnst9*gx300000 ) + ( cnst9*gx120000 )  ) ;
    gx[(Ai + 4) * matrix_size + Bi + 0] += cnst139*cc;
    gx[(Ai + 6) * matrix_size + Bi + 0] += cc* (  ( cnst64*gx120000 ) + ( gx300000*cnst1 )  ) ;
    double C16044 =  (  ( - ( C16048*cnst32 )  ) /C16109 ) - (  ( C16048*C16117 ) /C16030 ) ;
    double gx030000 =  ( C16044*C16124 ) *C16021;
    gx[(Ai + 0) * matrix_size + Bi + 0] += cc* (  ( gx210000*cnst7 ) - ( gx030000*cnst1 )  ) ;
    gx[(Ai + 2) * matrix_size + Bi + 0] += - ( cc* (  ( cnst9*gx030000 ) + (  ( cnst9*gx210000 ) +cnst68 )  )  ) ;
    double gz030000 = C16128* ( C16044*C16021 ) ;
    double cnst153 =  (  (  (  ( C16027*C16021 ) *C16147 ) *cnst2 ) + ( cnst9*gz210000 )  ) + ( cnst9*gz030000 ) ;
    gz[(Ai + 2) * matrix_size + Bi + 0] += - ( cc*cnst153 ) ;
    gz[(Ai + 0) * matrix_size + Bi + 0] += cc* (  ( gz210000*cnst7 ) - ( gz030000*cnst1 )  ) ;
}
