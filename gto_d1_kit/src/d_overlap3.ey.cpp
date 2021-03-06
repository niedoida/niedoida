/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void overlap_gradient_03(
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
    double cnst9 = std::sqrt( ( 3.0/8.0 ) );
    double C386 = ae*zAB;
    double C354 = xAB*ae;
    double C355 = be+ae;
    double C421 = std::pow(C355 , 2);
    double C436 = C421*2.;
    double C359 = 2.*C355;
    double C441 = std::sqrt( ( Pi/C355 ) );
    double cnst11 = be*C441;
    double C353 =  ( - (  ( xAB*cnst11 ) /C355 )  ) *ae;
    double C454 = C353*2;
    double C385 =  ( - (  ( zAB*cnst11 ) /C355 )  ) *ae;
    double C457 = C385*2;
    double C346 =  ( C354*C441 ) /C355;
    double C440 = C441*C386;
    double C383 = C440/C355;
    double C442 = C441/C359;
    double C391 =  (  ( C441*ae ) *2. ) /C359;
    double C363 =  (  (  ( C353*C354 ) *2 ) /C355 ) +C391;
    double C474 =  (  ( C354*C363 ) /C355 ) + (  (  (  ( C346*ae ) *2 ) +C454 ) /C359 ) ;
    double gx000201 = C383* ( C441*C474 ) ;
    double C393 =  (  (  ( C385*C386 ) *2 ) /C355 ) +C391;
    double C476 =  (  ( C393*C386 ) /C355 ) + (  ( C457+ (  ( C383*ae ) *2 )  ) /C359 ) ;
    double C448 = C442+ (  ( C441* ( std::pow(C386 , 2) )  ) /C421 ) ;
    double C382 =  (  ( C448*C386 ) /C355 ) + (  ( C440*2. ) /C436 ) ;
    double C347 = C442+ (  ( C441* ( std::pow(C354 , 2) )  ) /C421 ) ;
    double gz000201 =  ( C441*C347 ) *C393;
    double C350 =  (  ( C354* ( C441*2. )  ) /C436 ) + (  ( C354*C347 ) /C355 ) ;
    double gz000300 = C457* ( C350*C441 ) ;
    double cnst48 = ae*2;
    double gx000300 =  ( std::pow(C441 , 2) ) * (  (  ( C354*C474 ) /C355 ) + (  (  ( cnst48*C347 ) + ( C363*2 )  ) /C359 )  ) ;
    double gz000003 =  ( C441*C441 ) * (  (  (  ( cnst48*C448 ) + ( C393*2 )  ) /C359 ) + (  ( C476*C386 ) /C355 )  ) ;
    double cnst60 = std::sqrt( ( 45.0/8.0 ) );
    double C371 = yAB*ae;
    double C438 = C371*C441;
    double C368 = C438/C355;
    gx[(Ai + 0) * matrix_size + Bi + 1] +=  ( C383* ( C363*C368 )  ) *cnst4;
    gz[(Ai + 0) * matrix_size + Bi + 1] += cnst4* ( C393* ( C346*C368 )  ) ;
    double gz000210 = C457* ( C368*C347 ) ;
    double gx000210 =  ( C368*C474 ) *C441;
    double C447 = C442+ (  ( C441* ( std::pow(C371 , 2) )  ) /C421 ) ;
    double gz000120 = C457* ( C346*C447 ) ;
    double cnst84 =  (  (  ( C346*C441 ) *C476 ) *cnst2 ) - (  ( gz000300*cnst9 ) + ( gz000120*cnst9 )  ) ;
    gz[(Ai + 0) * matrix_size + Bi + 4] += cc*cnst84;
    gz[(Ai + 0) * matrix_size + Bi + 6] += cc* (  ( gz000300*cnst1 ) + ( gz000120*cnst60 )  ) ;
    double gx000120 =  ( C447*C363 ) *C441;
    double cnst90 =  ( cnst2* ( C448* ( C441*C363 )  )  ) - (  ( gx000300*cnst9 ) + ( gx000120*cnst9 )  ) ;
    gx[(Ai + 0) * matrix_size + Bi + 4] += cc*cnst90;
    gx[(Ai + 0) * matrix_size + Bi + 6] += cc* (  ( gx000120*cnst60 ) + ( gx000300*cnst1 )  ) ;
    double gz000021 =  ( C447*C441 ) *C393;
    gz[(Ai + 0) * matrix_size + Bi + 5] += cc* (  ( cnst5*gz000201 ) - ( cnst5*gz000021 )  ) ;
    gz[(Ai + 0) * matrix_size + Bi + 3] += cc* (  ( gz000003- ( gz000201*1.5 )  ) - ( 1.5*gz000021 )  ) ;
    double C367 =  (  ( C371*C447 ) /C355 ) + (  ( C438*2. ) /C436 ) ;
    double gx000030 = C441* ( C367*C454 ) ;
    double cnst103 =  (  ( cnst2* (  ( C454*C368 ) *C448 )  ) + ( gx000210*cnst9 )  ) + ( gx000030*cnst9 ) ;
    gx[(Ai + 0) * matrix_size + Bi + 2] += - ( cc*cnst103 ) ;
    gx[(Ai + 0) * matrix_size + Bi + 0] += cc* (  ( gx000210*cnst7 ) - ( gx000030*cnst1 )  ) ;
    double gz000030 =  ( C367*C441 ) *C457;
    gz[(Ai + 0) * matrix_size + Bi + 0] += cc* (  ( cnst7*gz000210 ) - ( gz000030*cnst1 )  ) ;
    double cnst111 =  (  ( cnst9*gz000210 ) + ( cnst2* ( C476* ( C441*C368 )  )  )  ) + ( gz000030*cnst9 ) ;
    gz[(Ai + 0) * matrix_size + Bi + 2] += - ( cc*cnst111 ) ;
    double gx000021 = C383* ( C447*C454 ) ;
    gx[(Ai + 0) * matrix_size + Bi + 5] += cc* (  ( cnst5*gx000201 ) - ( cnst5*gx000021 )  ) ;
    gx[(Ai + 0) * matrix_size + Bi + 3] += cc* (  (  ( C382* ( C441*C454 )  ) - ( 1.5*gx000201 )  ) - ( gx000021*1.5 )  ) ;
    double C370 =  ( - (  ( yAB*cnst11 ) /C355 )  ) *ae;
    double C456 = C370*2;
    double gy000201 = C383* ( C456*C347 ) ;
    double gy000300 =  ( C350*C456 ) *C441;
    double C378 = C391+ (  (  ( C370*C371 ) *2 ) /C355 ) ;
    double C475 =  (  ( C371*C378 ) /C355 ) + (  (  (  ( ae*C368 ) *2 ) +C456 ) /C359 ) ;
    double gy000021 = C383* ( C441*C475 ) ;
    gy[(Ai + 0) * matrix_size + Bi + 3] += cc* (  (  ( C382* ( C441*C456 )  ) - ( gy000201*1.5 )  ) - ( 1.5*gy000021 )  ) ;
    gy[(Ai + 0) * matrix_size + Bi + 5] +=  (  ( gy000201*cnst5 ) - ( cnst5*gy000021 )  ) *cc;
    double gy000120 =  ( C346*C475 ) *C441;
    double cnst140 =  (  (  ( C346*C456 ) *C448 ) *cnst2 ) - (  ( gy000300*cnst9 ) + ( gy000120*cnst9 )  ) ;
    gy[(Ai + 0) * matrix_size + Bi + 4] += cc*cnst140;
    gy[(Ai + 0) * matrix_size + Bi + 6] +=  (  ( gy000120*cnst60 ) + ( gy000300*cnst1 )  ) *cc;
    double cnst147 = C441* (  (  (  ( cnst48*C447 ) + ( C378*2 )  ) /C359 ) + (  ( C371*C475 ) /C355 )  ) ;
    double gy000030 = cnst147*C441;
    double gy000210 =  ( C378*C347 ) *C441;
    double cnst155 =  ( cnst9*gy000030 ) + (  (  ( C448* ( C378*C441 )  ) *cnst2 ) + ( gy000210*cnst9 )  ) ;
    gy[(Ai + 0) * matrix_size + Bi + 2] += - ( cc*cnst155 ) ;
    gy[(Ai + 0) * matrix_size + Bi + 0] += cc* (  ( gy000210*cnst7 ) - ( gy000030*cnst1 )  ) ;
    gy[(Ai + 0) * matrix_size + Bi + 1] += cnst4* (  ( C378*C346 ) *C383 ) ;
}
