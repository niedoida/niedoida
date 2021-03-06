/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void overlap_gradient_20(
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
    double cnst3 = be*2;
    double C4571 = xAB*be;
    double C4570 = be+ae;
    double C4612 = std::sqrt( ( Pi/C4570 ) );
    double C4562 = - (  ( C4571*C4612 ) /C4570 ) ;
    double C4569 = C4562*ae;
    double cnst7 = C4569*2;
    double cnst13 = std::pow(C4612 , 2);
    double C4608 = std::pow(C4570 , 2);
    double C4572 = 2.*C4570;
    double C4632 =  ( - (  ( be*C4612 ) *2 )  ) /C4572;
    double C4633 = C4632- (  (  ( C4571*C4569 ) *2 ) /C4570 ) ;
    double gx200000 =  (  (  ( cnst7- ( cnst3*C4562 )  ) /C4572 ) - (  ( C4571*C4633 ) /C4570 )  ) *cnst13;
    double C4613 = C4612/C4572;
    double C4566 = C4613+ (  ( C4612* ( std::pow(C4571 , 2) )  ) /C4608 ) ;
    double C4584 = be*zAB;
    double C4582 = C4613+ (  ( C4612* ( std::pow(C4584 , 2) )  ) /C4608 ) ;
    double C4568 = - (  ( C4584*C4612 ) /C4570 ) ;
    gx[(Ai + 3) * matrix_size + Bi + 0] += cnst2* (  ( C4612*C4633 ) *C4568 ) ;
    double C4583 = C4568*ae;
    double C4621 = C4583*2;
    double gz200000 = C4621* ( C4612*C4566 ) ;
    double C4635 = C4632- (  (  ( C4584*C4583 ) *2 ) /C4570 ) ;
    double gz002000 =  (  (  ( C4621- ( C4568*cnst3 )  ) /C4572 ) - (  ( C4584*C4635 ) /C4570 )  ) *cnst13;
    gz[(Ai + 3) * matrix_size + Bi + 0] += cnst2* (  ( C4612*C4562 ) *C4635 ) ;
    double C4578 = be*yAB;
    double C4576 = C4613+ (  (  ( std::pow(C4578 , 2) ) *C4612 ) /C4608 ) ;
    double gx020000 = C4612* ( C4576*cnst7 ) ;
    gx[(Ai + 4) * matrix_size + Bi + 0] += cc* (  ( gx200000*cnst1 ) - ( gx020000*cnst1 )  ) ;
    gx[(Ai + 2) * matrix_size + Bi + 0] += cc* (  (  ( - ( 0.5*gx200000 )  ) - ( 0.5*gx020000 )  ) + (  ( C4612*cnst7 ) *C4582 )  ) ;
    double gz020000 = C4621* ( C4576*C4612 ) ;
    gz[(Ai + 2) * matrix_size + Bi + 0] += cc* ( gz002000+ (  ( - ( 0.5*gz200000 )  ) - ( 0.5*gz020000 )  )  ) ;
    gz[(Ai + 4) * matrix_size + Bi + 0] += cc* (  ( gz200000*cnst1 ) - ( gz020000*cnst1 )  ) ;
    double C4567 = - (  ( C4578*C4612 ) /C4570 ) ;
    double C4577 = C4567*ae;
    double C4634 = C4632- (  (  ( C4577*C4578 ) *2 ) /C4570 ) ;
    gy[(Ai + 0) * matrix_size + Bi + 0] +=  (  ( C4634*C4562 ) *C4612 ) *cnst2;
    gy[(Ai + 1) * matrix_size + Bi + 0] +=  ( C4568* ( C4634*C4612 )  ) *cnst2;
    double C4620 = C4577*2;
    double gy200000 = C4612* ( C4620*C4566 ) ;
    gx[(Ai + 0) * matrix_size + Bi + 0] +=  ( C4612* ( C4567*C4633 )  ) *cnst2;
    const double res0 =  ( C4568* ( C4567*cnst7 )  ) *cnst2;
    gx[(Ai + 1) * matrix_size + Bi + 0] += res0;
    gy[(Ai + 3) * matrix_size + Bi + 0] += res0;
    gz[(Ai + 0) * matrix_size + Bi + 0] += res0;
    gz[(Ai + 1) * matrix_size + Bi + 0] += cnst2* (  ( C4567*C4612 ) *C4635 ) ;
    double gy020000 = cnst13* (  (  ( C4620- ( C4567*cnst3 )  ) /C4572 ) - (  ( C4634*C4578 ) /C4570 )  ) ;
    gy[(Ai + 4) * matrix_size + Bi + 0] +=  (  ( gy200000*cnst1 ) - ( gy020000*cnst1 )  ) *cc;
    gy[(Ai + 2) * matrix_size + Bi + 0] += cc* (  (  ( C4620*C4612 ) *C4582 ) + (  ( - ( gy200000*0.5 )  ) - ( 0.5*gy020000 )  )  ) ;
}
