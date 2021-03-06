/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void overlap_gradient_31(
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
    double cnst1 = cc* ( std::sqrt(15.0) ) ;
    double C16586 = xAB*ae;
    double C16588 = ae*zAB;
    double C16587 = yAB*ae;
    double cnst2 = ae*2;
    double cnst4 = std::sqrt( ( 5.0/8.0 ) );
    double cnst6 = std::sqrt( ( 45.0/8.0 ) );
    double cnst8 = std::sqrt( ( 3.0/8.0 ) );
    double cnst9 = std::sqrt(7.5);
    double cnst10 = std::sqrt(6.0);
    double cnst12 = std::sqrt( ( 45./8.0 ) );
    double C16404 = xAB*be;
    double C16464 = be*zAB;
    double C16402 = be+ae;
    double C16392 = std::sqrt( ( Pi/C16402 ) );
    double C16584 = C16392*C16404;
    double C16393 = - ( C16584/C16402 ) ;
    double C16403 = C16393*ae;
    double C16409 = C16403*2;
    double C16591 = C16464*C16392;
    double C16400 = - ( C16591/C16402 ) ;
    double C16463 = C16400*ae;
    double C16478 = C16463*2;
    double C16424 =  ( C16392*C16587 ) /C16402;
    double C16431 =  ( C16392*C16586 ) /C16402;
    double C16427 =  ( C16588*C16392 ) /C16402;
    double C16407 = 2.*C16402;
    double C16662 =  (  ( C16392*ae ) *2. ) /C16407;
    double C16677 =  (  (  ( C16586*C16403 ) *2 ) /C16402 ) +C16662;
    double C16676 =  (  (  ( C16588*C16463 ) *2 ) /C16402 ) +C16662;
    double C16593 = C16392/C16407;
    double C16469 =  ( - (  ( be*C16392 ) *2 )  ) /C16407;
    double C16471 = C16469- (  (  ( C16463*C16464 ) *2 ) /C16402 ) ;
    double C16670 =  (  ( C16588*C16471 ) /C16402 ) + (  ( C16463*4. ) /C16407 ) ;
    double C16622 = C16471*2;
    double C16485 =  (  ( C16478- (  ( be*C16400 ) *2 )  ) /C16407 ) - (  ( C16471*C16464 ) /C16402 ) ;
    double C16417 = C16469- (  (  ( C16404*C16403 ) *2 ) /C16402 ) ;
    double C16611 = C16417*2;
    double C16672 =  (  ( 4.*C16403 ) /C16407 ) + (  ( C16417*C16586 ) /C16402 ) ;
    double C16420 =  (  ( C16409- (  ( C16393*be ) *2 )  ) /C16407 ) - (  ( C16417*C16404 ) /C16402 ) ;
    double gx201010 =  ( C16424*C16420 ) *C16400;
    double C16544 = std::pow(C16402 , 2);
    double C16394 = C16593+ (  ( C16392* ( std::pow(C16404 , 2) )  ) /C16544 ) ;
    double C16686 =  (  (  (  ( C16394*ae ) *2 ) +C16611 ) /C16407 ) + (  ( C16420*C16586 ) /C16402 ) ;
    double gx201100 =  ( C16392*C16686 ) *C16400;
    double gz201010 =  ( C16394*C16424 ) *C16471;
    double C16683 =  (  ( C16611- (  ( C16394*be ) *2 )  ) /C16407 ) - (  ( C16420*C16404 ) /C16402 ) ;
    double gx300001 = C16427* ( C16683*C16392 ) ;
    double gx300010 =  ( C16683*C16424 ) *C16392;
    double gz201001 =  ( C16394*C16392 ) *C16670;
    double C16501 = C16593- (  ( C16591*C16588 ) /C16544 ) ;
    double gx201001 =  ( C16420*C16392 ) *C16501;
    double C16605 = C16593+ (  (  ( std::pow(C16464 , 2) ) *C16392 ) /C16544 ) ;
    double C16688 =  (  ( C16588*C16485 ) /C16402 ) + (  ( C16622+ (  ( C16605*ae ) *2 )  ) /C16407 ) ;
    double C16685 =  (  ( C16622- (  ( be*C16605 ) *2 )  ) /C16407 ) - (  ( C16464*C16485 ) /C16402 ) ;
    double C16585 = C16544*2.;
    double C16599 =  ( - ( C16584*2. )  ) /C16585;
    double C16489 =  (  ( C16394*C16586 ) /C16402 ) +C16599;
    double gz201100 = C16471* ( C16392*C16489 ) ;
    double C16395 = C16599- (  ( C16394*C16404 ) /C16402 ) ;
    double gz300010 =  ( C16424*C16395 ) *C16478;
    double C16398 =  (  ( C16394*3. ) /C16407 ) + (  ( C16586*C16395 ) /C16402 ) ;
    double gz300100 = C16478* ( C16392*C16398 ) ;
    double gz300001 =  ( C16392*C16395 ) *C16676;
    double C16602 =  ( - ( C16591*2. )  ) /C16585;
    double C16522 = C16602+ (  ( C16588*C16605 ) /C16402 ) ;
    double C16460 = C16602- (  ( C16464*C16605 ) /C16402 ) ;
    double C16477 =  (  ( C16605*3. ) /C16407 ) + (  ( C16588*C16460 ) /C16402 ) ;
    double C16511 = C16593- (  ( C16584*C16586 ) /C16544 ) ;
    double C16435 = be*yAB;
    double C16589 = C16435*C16392;
    double C16399 = - ( C16589/C16402 ) ;
    double gx210001 = C16427* ( C16420*C16399 ) ;
    double cnst97 =  (  ( C16409*C16399 ) *C16522 ) *cnst10;
    double C16434 = C16399*ae;
    double C16447 = C16434*2;
    double gy300001 =  ( C16447*C16395 ) *C16427;
    double gy201001 =  ( C16394*C16447 ) *C16501;
    double gz210100 = C16400* ( C16447*C16489 ) ;
    double gy300100 =  ( C16447*C16398 ) *C16392;
    double C16675 =  (  (  ( C16587*C16434 ) *2 ) /C16402 ) +C16662;
    double gy300010 = C16392* ( C16675*C16395 ) ;
    double gy201010 =  ( C16394*C16675 ) *C16400;
    double C16442 = C16469- (  (  ( C16435*C16434 ) *2 ) /C16402 ) ;
    gy[(Ai + 1) * matrix_size + Bi + 0] += cnst1* (  ( C16442*C16511 ) *C16400 ) ;
    double C16669 =  (  ( C16434*4. ) /C16407 ) + (  ( C16442*C16587 ) /C16402 ) ;
    gy[(Ai + 1) * matrix_size + Bi + 1] +=  (  ( C16393*C16669 ) *C16400 ) *cnst1;
    double gy210010 = C16392* ( C16394*C16669 ) ;
    double gy210100 =  ( C16442*C16489 ) *C16392;
    double gy210001 = C16427* ( C16442*C16394 ) ;
    gy[(Ai + 1) * matrix_size + Bi + 2] += cnst1* (  ( C16442*C16393 ) *C16501 ) ;
    double C16619 = C16442*2;
    double gx210100 =  ( C16399*C16686 ) *C16392;
    gx[(Ai + 1) * matrix_size + Bi + 2] += cnst1* (  ( C16417*C16399 ) *C16501 ) ;
    double gz210001 = C16676* ( C16394*C16399 ) ;
    gz[(Ai + 1) * matrix_size + Bi + 0] +=  ( C16471* ( C16511*C16399 )  ) *cnst1;
    gx[(Ai + 1) * matrix_size + Bi + 0] += cnst1* ( C16400* ( C16399*C16672 )  ) ;
    gz[(Ai + 1) * matrix_size + Bi + 2] += cnst1* (  ( C16393*C16399 ) *C16670 ) ;
    double C16454 =  (  ( C16447- (  ( be*C16399 ) *2 )  ) /C16407 ) - (  ( C16442*C16435 ) /C16402 ) ;
    double gy120001 = C16427* ( C16393*C16454 ) ;
    gy[(Ai + 6) * matrix_size + Bi + 2] += cc* (  ( cnst4*gy300001 ) + ( gy120001*cnst6 )  ) ;
    gy[(Ai + 4) * matrix_size + Bi + 2] += cc* ( cnst97- (  ( cnst8*gy120001 ) + ( cnst8*gy300001 )  )  ) ;
    double gy120100 = C16392* ( C16511*C16454 ) ;
    double cnst166 =  ( cnst10* (  ( C16511*C16447 ) *C16605 )  ) - (  ( gy300100*cnst8 ) + ( cnst8*gy120100 )  ) ;
    gy[(Ai + 4) * matrix_size + Bi + 0] += cnst166*cc;
    gy[(Ai + 6) * matrix_size + Bi + 0] +=  (  ( gy120100*cnst6 ) + ( gy300100*cnst4 )  ) *cc;
    double gy021100 = C16400* ( C16454*C16431 ) ;
    gy[(Ai + 5) * matrix_size + Bi + 0] += cc* (  ( gz210100*cnst9 ) - ( cnst9*gy021100 )  ) ;
    double gy021001 =  ( C16392*C16454 ) *C16501;
    gy[(Ai + 5) * matrix_size + Bi + 2] += cc* (  ( cnst9*gy201001 ) - ( cnst9*gy021001 )  ) ;
    double C16600 =  ( - ( C16589*2. )  ) /C16585;
    double C16492 = C16593- (  ( C16587*C16589 ) /C16544 ) ;
    gz[(Ai + 1) * matrix_size + Bi + 1] += cnst1* ( C16471* ( C16492*C16393 )  ) ;
    gx[(Ai + 1) * matrix_size + Bi + 1] += cnst1* (  ( C16492*C16417 ) *C16400 ) ;
    double gz210010 = C16478* ( C16492*C16394 ) ;
    double gx210010 =  ( C16492*C16420 ) *C16392;
    double C16604 = C16593+ (  ( C16392* ( std::pow(C16435 , 2) )  ) /C16544 ) ;
    double C16687 =  (  (  ( 2* ( C16604*ae )  ) +C16619 ) /C16407 ) + (  ( C16587*C16454 ) /C16402 ) ;
    double gy120010 = C16392* ( C16687*C16393 ) ;
    double cnst201 =  (  (  ( C16393*C16675 ) *C16605 ) *cnst10 ) - (  ( cnst8*gy300010 ) + ( gy120010*cnst8 )  ) ;
    gy[(Ai + 4) * matrix_size + Bi + 1] += cc*cnst201;
    gy[(Ai + 6) * matrix_size + Bi + 1] += cc* (  ( gy120010*cnst6 ) + ( cnst4*gy300010 )  ) ;
    double gy021010 =  ( C16687*C16392 ) *C16400;
    gy[(Ai + 5) * matrix_size + Bi + 1] += cc* (  ( gy201010*cnst9 ) - ( gy021010*cnst9 )  ) ;
    double gx120100 = C16392* ( C16604*C16672 ) ;
    double C16506 =  (  ( C16604*C16587 ) /C16402 ) +C16600;
    double gz021010 = C16471* ( C16392*C16506 ) ;
    gz[(Ai + 5) * matrix_size + Bi + 1] += cc* (  ( gz201010*cnst9 ) - ( cnst9*gz021010 )  ) ;
    double gz120010 =  ( C16409*C16506 ) *C16400;
    double cnst218 =  ( cnst10* (  ( C16393*C16424 ) *C16485 )  ) - (  ( cnst8*gz120010 ) + ( cnst8*gz300010 )  ) ;
    gz[(Ai + 4) * matrix_size + Bi + 1] += cc*cnst218;
    gx[(Ai + 5) * matrix_size + Bi + 1] += cc* (  ( cnst9*gx201010 ) - ( cnst9*gz120010 )  ) ;
    gz[(Ai + 6) * matrix_size + Bi + 1] += cc* (  ( gz300010*cnst4 ) + ( cnst6*gz120010 )  ) ;
    double gx120010 =  ( C16417*C16506 ) *C16392;
    double cnst226 =  ( cnst10* ( C16605* ( C16417*C16424 )  )  ) - (  ( cnst8*gx300010 ) + ( cnst8*gx120010 )  ) ;
    gx[(Ai + 4) * matrix_size + Bi + 1] += cc*cnst226;
    gx[(Ai + 6) * matrix_size + Bi + 1] += cc* (  ( cnst4*gx300010 ) + ( gx120010*cnst6 )  ) ;
    double gx120001 = C16427* ( C16604*C16417 ) ;
    double cnst234 =  ( cnst10* (  ( C16417*C16392 ) *C16522 )  ) - (  ( cnst8*gx300001 ) + ( cnst8*gx120001 )  ) ;
    gx[(Ai + 4) * matrix_size + Bi + 2] += cc*cnst234;
    gx[(Ai + 6) * matrix_size + Bi + 2] += cc* (  ( cnst4*gx300001 ) + ( cnst6*gx120001 )  ) ;
    double gz120001 = C16676* ( C16393*C16604 ) ;
    gz[(Ai + 6) * matrix_size + Bi + 2] += cc* (  ( gz120001*cnst6 ) + ( gz300001*cnst4 )  ) ;
    double cnst242 =  ( cnst10* ( C16688* ( C16393*C16392 )  )  ) - (  ( cnst8*gz300001 ) + ( cnst8*gz120001 )  ) ;
    gz[(Ai + 4) * matrix_size + Bi + 2] += cc*cnst242;
    double gz021001 =  ( C16604*C16392 ) *C16670;
    gz[(Ai + 5) * matrix_size + Bi + 2] += cc* (  ( gz201001*cnst9 ) - ( gz021001*cnst9 )  ) ;
    double C16430 = C16600- (  ( C16435*C16604 ) /C16402 ) ;
    double gz030001 = C16676* ( C16392*C16430 ) ;
    double cnst250 =  ( cnst8*gz030001 ) + (  ( cnst8*gz210001 ) + ( cnst10* ( C16688* ( C16392*C16399 )  )  )  ) ;
    gz[(Ai + 2) * matrix_size + Bi + 2] += - ( cc*cnst250 ) ;
    gz[(Ai + 0) * matrix_size + Bi + 2] += cc* (  ( cnst12*gz210001 ) - ( gz030001*cnst4 )  ) ;
    double gx030100 = C16392* ( C16430*C16677 ) ;
    double cnst256 =  (  ( cnst10* (  ( C16399*C16677 ) *C16605 )  ) + ( gx210100*cnst8 )  ) + ( cnst8*gx030100 ) ;
    gx[(Ai + 2) * matrix_size + Bi + 0] += - ( cc*cnst256 ) ;
    gx[(Ai + 0) * matrix_size + Bi + 0] += cc* (  ( gx210100*cnst12 ) - ( gx030100*cnst4 )  ) ;
    double gz030100 = C16478* ( C16430*C16431 ) ;
    gz[(Ai + 0) * matrix_size + Bi + 0] += cc* (  ( gz210100*cnst12 ) - ( cnst4*gz030100 )  ) ;
    double cnst264 =  ( cnst8*gz030100 ) + (  ( cnst8*gz210100 ) + ( cnst10* (  ( C16399*C16431 ) *C16485 )  )  ) ;
    gz[(Ai + 2) * matrix_size + Bi + 0] += - ( cc*cnst264 ) ;
    double gx030001 = C16427* ( C16409*C16430 ) ;
    gx[(Ai + 2) * matrix_size + Bi + 2] += - ( cc* (  (  ( gx210001*cnst8 ) +cnst97 ) + ( cnst8*gx030001 )  )  ) ;
    gx[(Ai + 0) * matrix_size + Bi + 2] += cc* (  ( gx210001*cnst12 ) - ( cnst4*gx030001 )  ) ;
    double C16446 =  (  ( C16604*3. ) /C16407 ) + (  ( C16587*C16430 ) /C16402 ) ;
    double gx030010 = C16392* ( C16409*C16446 ) ;
    gx[(Ai + 0) * matrix_size + Bi + 1] +=  (  ( gx210010*cnst12 ) - ( gx030010*cnst4 )  ) *cc;
    double cnst278 =  ( cnst8*gx030010 ) + (  ( cnst10* (  ( C16492*C16409 ) *C16605 )  ) + ( cnst8*gx210010 )  ) ;
    gx[(Ai + 2) * matrix_size + Bi + 1] += - ( cc*cnst278 ) ;
    double gz030010 =  ( C16392*C16446 ) *C16478;
    gz[(Ai + 0) * matrix_size + Bi + 1] += cc* (  ( gz210010*cnst12 ) - ( cnst4*gz030010 )  ) ;
    double cnst284 =  (  ( cnst10* ( C16485* ( C16492*C16392 )  )  ) + ( cnst8*gz210010 )  ) + ( cnst8*gz030010 ) ;
    gz[(Ai + 2) * matrix_size + Bi + 1] += - ( cc*cnst284 ) ;
    double gx021001 = C16501* ( C16409*C16604 ) ;
    gx[(Ai + 5) * matrix_size + Bi + 2] += cc* (  ( gx201001*cnst9 ) - ( gx021001*cnst9 )  ) ;
    double gx021100 =  ( C16604*C16677 ) *C16400;
    gx[(Ai + 5) * matrix_size + Bi + 0] +=  (  ( gx201100*cnst9 ) - ( gx021100*cnst9 )  ) *cc;
    double gz021100 = C16471* ( C16604*C16431 ) ;
    gz[(Ai + 5) * matrix_size + Bi + 0] += cc* (  ( gz201100*cnst9 ) - ( cnst9*gz021100 )  ) ;
    double gz120100 =  ( C16511*C16604 ) *C16478;
    gz[(Ai + 6) * matrix_size + Bi + 0] += cc* (  ( gz300100*cnst4 ) + ( cnst6*gz120100 )  ) ;
    double cnst301 =  ( cnst10* ( C16485* ( C16511*C16392 )  )  ) - (  ( cnst8*gz120100 ) + ( gz300100*cnst8 )  ) ;
    gz[(Ai + 4) * matrix_size + Bi + 0] += cc*cnst301;
    double C16684 =  (  ( C16619- (  ( C16604*be ) *2 )  ) /C16407 ) - (  ( C16435*C16454 ) /C16402 ) ;
    double gy030100 = C16392* ( C16684*C16431 ) ;
    double cnst304 =  ( cnst8*gy030100 ) + (  ( cnst10* (  ( C16442*C16431 ) *C16605 )  ) + ( cnst8*gy210100 )  ) ;
    gy[(Ai + 2) * matrix_size + Bi + 0] += - ( cc*cnst304 ) ;
    gy[(Ai + 0) * matrix_size + Bi + 0] += cc* (  ( gy210100*cnst12 ) - ( gy030100*cnst4 )  ) ;
    double gy030001 =  ( C16684*C16392 ) *C16427;
    double cnst312 =  ( cnst8*gy030001 ) + (  ( cnst8*gy210001 ) + ( cnst10* (  ( C16442*C16392 ) *C16522 )  )  ) ;
    gy[(Ai + 2) * matrix_size + Bi + 2] += - ( cc*cnst312 ) ;
    gy[(Ai + 0) * matrix_size + Bi + 2] += cc* (  ( gy210001*cnst12 ) - ( cnst4*gy030001 )  ) ;
    double cnst319 =  (  ( C16588*C16685 ) /C16402 ) + (  (  ( C16460*cnst2 ) + ( C16485*3 )  ) /C16407 ) ;
    double cnst323 =  (  (  ( cnst2*C16395 ) + ( C16420*3 )  ) /C16407 ) + (  ( C16683*C16586 ) /C16402 ) ;
    double gx300100 = cnst323* ( std::pow(C16392 , 2) ) ;
    double cnst326 =  ( cnst10* (  ( C16392*C16672 ) *C16605 )  ) - (  ( cnst8*gx120100 ) + ( cnst8*gx300100 )  ) ;
    gx[(Ai + 4) * matrix_size + Bi + 0] += cc*cnst326;
    gx[(Ai + 6) * matrix_size + Bi + 0] += cc* (  ( gx120100*cnst6 ) + ( gx300100*cnst4 )  ) ;
    double cnst332 =  (  (  ( C16454*3 ) + ( cnst2*C16430 )  ) /C16407 ) + (  ( C16684*C16587 ) /C16402 ) ;
    double gy030010 = C16392* ( cnst332*C16392 ) ;
    gy[(Ai + 0) * matrix_size + Bi + 1] += cc* (  ( gy210010*cnst12 ) - ( gy030010*cnst4 )  ) ;
    double cnst337 =  ( cnst8*gy030010 ) + (  ( cnst8*gy210010 ) + ( cnst10* ( C16605* ( C16669*C16392 )  )  )  ) ;
    gy[(Ai + 2) * matrix_size + Bi + 1] += - ( cc*cnst337 ) ;
    gy[(Ai + 3) * matrix_size + Bi + 0] += cc* (  (  ( C16460* ( C16447*C16431 )  ) - ( gz210100*1.5 )  ) - ( 1.5*gy021100 )  ) ;
    gy[(Ai + 3) * matrix_size + Bi + 2] += cc* (  (  (  ( C16392*C16447 ) *C16477 ) - ( 1.5*gy201001 )  ) - ( 1.5*gy021001 )  ) ;
    gy[(Ai + 3) * matrix_size + Bi + 1] += cc* (  (  ( C16460* ( C16392*C16675 )  ) - ( gy201010*1.5 )  ) - ( 1.5*gy021010 )  ) ;
    gx[(Ai + 3) * matrix_size + Bi + 1] +=  (  (  ( C16460* ( C16409*C16424 )  ) - ( 1.5*gx201010 )  ) - ( 1.5*gz120010 )  ) *cc;
    gz[(Ai + 3) * matrix_size + Bi + 1] += cc* (  (  ( C16685* ( C16424*C16392 )  ) - ( gz201010*1.5 )  ) - ( 1.5*gz021010 )  ) ;
    gx[(Ai + 3) * matrix_size + Bi + 2] += cc* (  (  (  ( C16409*C16392 ) *C16477 ) - ( gx201001*1.5 )  ) - ( 1.5*gx021001 )  ) ;
    gz[(Ai + 3) * matrix_size + Bi + 0] += cc* (  (  (  ( C16392*C16431 ) *C16685 ) - ( gz201100*1.5 )  ) - ( 1.5*gz021100 )  ) ;
    gz[(Ai + 3) * matrix_size + Bi + 2] += cc* (  (  (  ( C16392*C16392 ) *cnst319 ) - ( gz201001*1.5 )  ) - ( gz021001*1.5 )  ) ;
    gx[(Ai + 3) * matrix_size + Bi + 0] += cc* (  (  ( C16460* ( C16392*C16677 )  ) - ( 1.5*gx201100 )  ) - ( 1.5*gx021100 )  ) ;
}
