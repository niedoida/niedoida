/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void kinetic_gradient_30(
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
    double C20107 = std::pow(ae , 2);
    double cnst2 = std::sqrt( ( 45.0/8.0 ) );
    double cnst4 = std::sqrt( ( 5.0/8.0 ) );
    double cnst6 = std::sqrt( ( 3.0/8.0 ) );
    double cnst7 = std::sqrt(7.5);
    double cnst8 = std::sqrt(6.0);
    double cnst9 =  ( std::sqrt(15.0) ) *cc;
    double cnst11 = std::sqrt( ( 45./8.0 ) );
    double C20109 = be*zAB;
    double cnst12 = be*4;
    double C20102 = be+ae;
    double C20113 = 2.*C20102;
    double C20131 = 1/C20113;
    double C20121 = std::pow(C20102 , 2);
    double C20135 = C20121*2.;
    double C20132 = std::sqrt( ( Pi/C20102 ) );
    double C20145 = C20132/C20113;
    double C20314 = be*C20132;
    double C20310 = C20314*zAB;
    double C20100 = - ( C20310/C20102 ) ;
    double C20111 = C20100*ae;
    double C20125 = C20111*2;
    double cnst14 = C20100*C20132;
    double C20338 =  ( - ( C20314*2 )  ) /C20113;
    double C20451 = C20338- (  ( 2* ( C20109*C20111 )  ) /C20102 ) ;
    double C20363 =  (  ( C20125- (  ( C20100*be ) *2 )  ) /C20113 ) - (  ( C20109*C20451 ) /C20102 ) ;
    double C20465 = ae*C20451;
    double C20482 =  (  ( - ( 4* ( C20125*be )  )  ) /C20113 ) - (  ( 2* ( C20109*C20465 )  ) /C20102 ) ;
    double C20483 = C20482*ae;
    double C20456 = C20483*2;
    double C20477 =  ( C20456- ( 6* ( be*C20482 )  )  ) /C20113;
    double C20484 = -C20456;
    double C20388 =  (  ( C20109*C20483 ) *2 ) /C20102;
    double C20358 = C20465*2;
    double C20381 =  ( - (  ( C20358*be ) *6 )  ) /C20113;
    double C20389 = C20381-C20388;
    double C20469 =  ( C20109*C20389 ) /C20102;
    double C20481 = C20469-C20477;
    double C20461 = C20388-C20381;
    double C20225 = C20314*yAB;
    double C20098 = - ( C20225/C20102 ) ;
    double cnst27 = C20132*C20098;
    double C20110 = C20098*ae;
    double C20124 = C20110*2;
    double C20180 =  ( ae- ( 2* ( C20107* ( C20131+ ( std::pow( ( C20109/C20102 )  , 2) )  )  )  )  ) *C20132;
    double C20345 =  (  (  ( - (  ( ae*C20310 ) *2 )  ) *be ) /C20121 ) - (  ( C20109*C20180 ) /C20102 ) ;
    double cnst34 = C20132*C20132;
    double cnst35 = C20132*2.;
    double C20322 = - ( C20109*cnst35 ) ;
    double C20337 =  (  (  ( std::pow(C20109 , 2) ) *C20132 ) /C20121 ) +C20145;
    double C20379 =  (  (  ( 2*C20451 ) - (  ( be*C20337 ) *2 )  ) /C20113 ) - (  ( C20109*C20363 ) /C20102 ) ;
    double C20354 =  ( C20322/C20135 ) - (  ( C20109*C20337 ) /C20102 ) ;
    double cnst37 = C20132*C20354;
    double C20372 =  (  ( be* (  (  ( ae*C20337 ) *2 ) -C20132 )  ) /C20102 ) + (  ( C20180/C20113 ) - (  ( C20109*C20345 ) /C20102 )  ) ;
    double C20387 =  (  ( be* (  (  ( C20354*ae ) *2 ) - ( C20322/C20102 )  )  ) /C20102 ) + (  ( C20345/C20102 ) - (  ( C20109*C20372 ) /C20102 )  ) ;
    double cnst40 = C20132*C20337;
    double C20108 = be*yAB;
    double C20252 = C20145+ (  ( C20132* ( std::pow(C20108 , 2) )  ) /C20121 ) ;
    double cnst42 = C20252*C20132;
    double C20179 = C20132* ( ae- (  (  ( C20131+ ( std::pow( ( C20108/C20102 )  , 2) )  ) *C20107 ) *2 )  ) ;
    double C20260 =  (  ( be* ( - ( 2* ( C20225*ae )  )  )  ) /C20121 ) - (  ( C20108*C20179 ) /C20102 ) ;
    double C20287 =  (  ( be* (  (  ( C20252*ae ) *2 ) -C20132 )  ) /C20102 ) + (  ( C20179/C20113 ) - (  ( C20108*C20260 ) /C20102 )  ) ;
    double C20259 = C20338- (  (  ( C20110*C20108 ) *2 ) /C20102 ) ;
    double C20278 =  (  ( C20124- (  ( be*C20098 ) *2 )  ) /C20113 ) - (  ( C20259*C20108 ) /C20102 ) ;
    double C20265 = C20259*ae;
    double C20273 = C20265*2;
    double C20296 =  ( - ( 6* ( be*C20273 )  )  ) /C20113;
    double C20290 =  (  ( - (  ( C20124*be ) *4 )  ) /C20113 ) - (  (  ( C20108*C20265 ) *2 ) /C20102 ) ;
    double C20295 = C20290*ae;
    double C20453 = C20295*2;
    double C20450 = -C20453;
    double C20476 =  ( C20453- ( 6* ( C20290*be )  )  ) /C20113;
    double C20303 =  (  ( C20108*C20295 ) *2 ) /C20102;
    double C20304 = C20296-C20303;
    double C20467 =  ( C20108*C20304 ) /C20102;
    double C20480 = C20467-C20476;
    double C20459 = C20303-C20296;
    double C20294 =  (  (  ( C20259*2 ) - ( 2* ( C20252*be )  )  ) /C20113 ) - (  ( C20278*C20108 ) /C20102 ) ;
    double C20237 = - ( C20108*cnst35 ) ;
    double C20269 =  ( C20237/C20135 ) - (  ( C20252*C20108 ) /C20102 ) ;
    double cnst74 = C20132*C20269;
    double C20302 =  (  ( C20260/C20102 ) - (  ( C20108*C20287 ) /C20102 )  ) + (  (  (  (  ( ae*C20269 ) *2 ) - ( C20237/C20102 )  ) *be ) /C20102 ) ;
    double cnst79 = 6*be;
    double cnst80 =  (  (  ( C20273- ( C20259*cnst12 )  ) /C20113 ) - (  ( C20290*C20108 ) /C20102 )  ) *cnst79;
    double cnst83 =  (  ( C20108* ( C20476-C20467 )  ) /C20102 ) - (  (  ( 2*C20304 ) -cnst80 ) /C20113 ) ;
    double cnst86 =  (  (  ( C20358- ( cnst12*C20451 )  ) /C20113 ) - (  ( C20109*C20482 ) /C20102 )  ) *cnst79;
    double cnst89 =  (  ( C20109* ( C20477-C20469 )  ) /C20102 ) - (  (  ( C20389*2 ) -cnst86 ) /C20113 ) ;
    double C20104 = xAB*be;
    double C20182 = C20132* ( ae- (  (  ( C20131+ ( std::pow( ( C20104/C20102 )  , 2) )  ) *C20107 ) *2 )  ) ;
    double gy003000 =  ( C20387* ( C20124*C20132 )  ) + (  (  ( C20450*cnst37 ) /2.0 ) + ( C20354* ( C20124*C20182 )  )  ) ;
    double gz030000 =  (  ( C20125* ( C20132*C20302 )  ) + ( C20125* ( C20182*C20269 )  )  ) + (  ( C20484*cnst74 ) /2.0 ) ;
    double gz012000 =  (  ( cnst27*C20481 ) /2.0 ) + (  ( C20363* ( C20182*C20098 )  ) + ( C20363* ( C20132*C20260 )  )  ) ;
    double gy012000 =  (  (  ( C20259*C20182 ) *C20337 ) + (  ( cnst40*C20459 ) /2.0 )  ) + (  ( C20259*C20132 ) *C20372 ) ;
    double gy030000 =  (  ( C20132*C20294 ) *C20180 ) + (  (  ( C20294*C20182 ) *C20132 ) + (  ( cnst34*cnst83 ) /2.0 )  ) ;
    double gy021000 =  (  (  ( C20480*cnst14 ) /2.0 ) + (  ( C20278*C20182 ) *C20100 )  ) + (  ( C20278*C20132 ) *C20345 ) ;
    double gz003000 =  (  ( cnst34*cnst89 ) /2.0 ) + (  ( C20379* ( C20132*C20182 )  ) + ( C20379* ( C20132*C20179 )  )  ) ;
    double gz021000 =  (  (  ( C20252*C20182 ) *C20451 ) + (  ( C20132*C20287 ) *C20451 )  ) + (  ( C20461*cnst42 ) /2.0 ) ;
    double C20162 = C20145+ (  ( C20132* ( std::pow(C20104 , 2) )  ) /C20121 ) ;
    double cnst133 = C20132*C20162;
    double C20142 = C20132*C20104;
    double C20201 =  (  ( be* ( - (  ( C20142*ae ) *2 )  )  ) /C20121 ) - (  ( C20182*C20104 ) /C20102 ) ;
    double C20215 =  (  (  (  (  ( C20162*ae ) *2 ) -C20132 ) *be ) /C20102 ) + (  ( C20182/C20113 ) - (  ( C20104*C20201 ) /C20102 )  ) ;
    double cnst145 = C20100* ( C20124*C20215 ) ;
    double gy201000 =  (  (  (  ( C20100*C20162 ) *C20450 ) /2.0 ) +cnst145 ) + ( C20345* ( C20124*C20162 )  ) ;
    gy[(Ai + 5) * matrix_size + Bi + 0] +=  (  ( gy201000*cnst7 ) - ( gy021000*cnst7 )  ) *cc;
    double gz210000 =  (  ( C20125* ( C20260*C20162 )  ) +cnst145 ) + (  ( C20484* ( C20098*C20162 )  ) /2.0 ) ;
    gz[(Ai + 0) * matrix_size + Bi + 0] += cc* (  ( gz210000*cnst11 ) - ( gz030000*cnst4 )  ) ;
    gz[(Ai + 2) * matrix_size + Bi + 0] += - ( cc* (  ( gz030000*cnst6 ) + (  ( gz012000*cnst8 ) + ( gz210000*cnst6 )  )  )  ) ;
    double gz201000 =  (  (  ( C20179*C20162 ) *C20451 ) + (  ( C20132*C20215 ) *C20451 )  ) + (  ( C20461*cnst133 ) /2.0 ) ;
    gz[(Ai + 5) * matrix_size + Bi + 0] += cc* (  ( cnst7*gz201000 ) - ( cnst7*gz021000 )  ) ;
    double gy210000 =  (  ( C20259*C20162 ) *C20180 ) + (  (  ( C20259*C20215 ) *C20132 ) + (  ( C20459*cnst133 ) /2.0 )  ) ;
    gy[(Ai + 0) * matrix_size + Bi + 0] += cc* (  ( gy210000*cnst11 ) - ( gy030000*cnst4 )  ) ;
    gy[(Ai + 2) * matrix_size + Bi + 0] += - ( cc* (  (  ( gy210000*cnst6 ) + ( gy012000*cnst8 )  ) + ( gy030000*cnst6 )  )  ) ;
    double C20095 = - ( C20142/C20102 ) ;
    double C20101 = C20095*ae;
    double C20112 = C20101*2;
    double cnst195 = C20100* ( C20112*C20287 ) ;
    double gz120000 =  (  (  ( C20252*C20201 ) *C20125 ) +cnst195 ) + (  ( C20484* ( C20095*C20252 )  ) /2.0 ) ;
    double cnst202 =  ( C20112*C20098 ) *C20372;
    double C20147 = C20338- (  (  ( C20104*C20101 ) *2 ) /C20102 ) ;
    double C20155 = C20147*ae;
    double C20192 =  (  ( - ( 4* ( C20112*be )  )  ) /C20113 ) - (  (  ( C20155*C20104 ) *2 ) /C20102 ) ;
    double C20198 = C20192*ae;
    double C20211 =  (  ( C20198*C20104 ) *2 ) /C20102;
    double C20447 = C20198*2;
    double C20452 = -C20447;
    double gx030000 =  (  (  ( C20452*cnst74 ) /2.0 ) + ( C20132* ( C20112*C20302 )  )  ) + ( C20180* ( C20112*C20269 )  ) ;
    double gx012000 = cnst202+ (  (  ( C20112*C20260 ) *C20337 ) + (  (  ( C20098*C20337 ) *C20452 ) /2.0 )  ) ;
    double gx021000 =  (  (  ( C20452* ( C20100*C20252 )  ) /2.0 ) +cnst195 ) + (  ( C20252*C20112 ) *C20345 ) ;
    double gx003000 =  (  (  ( C20112*C20179 ) *C20354 ) + (  ( C20452*cnst37 ) /2.0 )  ) + (  ( C20112*C20132 ) *C20387 ) ;
    double C20474 =  ( C20447- (  ( C20192*be ) *6 )  ) /C20113;
    double C20166 = C20155*2;
    double C20199 =  ( - ( 6* ( C20166*be )  )  ) /C20113;
    double C20214 = C20199-C20211;
    double C20464 =  ( C20104*C20214 ) /C20102;
    double C20479 = C20464-C20474;
    double C20462 = C20211-C20199;
    double gx102000 =  (  ( C20132*C20147 ) *C20372 ) + (  (  ( cnst40*C20462 ) /2.0 ) + (  ( C20179*C20147 ) *C20337 )  ) ;
    double cnst247 = cnst79* (  (  ( C20166- ( C20147*cnst12 )  ) /C20113 ) - (  ( C20192*C20104 ) /C20102 )  ) ;
    double cnst250 =  (  (  ( C20474-C20464 ) *C20104 ) /C20102 ) - (  (  ( C20214*2 ) -cnst247 ) /C20113 ) ;
    double gx120000 =  (  ( C20132* ( C20287*C20147 )  ) + (  ( cnst42*C20462 ) /2.0 )  ) + (  ( C20252*C20147 ) *C20180 ) ;
    double gx111000 =  (  ( C20147*C20098 ) *C20345 ) + (  ( C20100* ( C20147*C20260 )  ) + (  (  ( C20100*C20098 ) *C20462 ) /2.0 )  ) ;
    gx[(Ai + 1) * matrix_size + Bi + 0] += gx111000*cnst9;
    double cnst270 = C20095*C20132;
    double gy111000 =  (  ( C20095*C20259 ) *C20345 ) + (  (  ( C20459* ( C20095*C20100 )  ) /2.0 ) + ( C20100* ( C20259*C20201 )  )  ) ;
    gy[(Ai + 1) * matrix_size + Bi + 0] += cnst9*gy111000;
    double gy102000 = cnst202+ (  (  ( C20450* ( C20095*C20337 )  ) /2.0 ) + (  ( C20124*C20201 ) *C20337 )  ) ;
    double gz111000 =  (  (  ( C20095*C20260 ) *C20451 ) + (  ( C20098*C20201 ) *C20451 )  ) + (  ( C20461* ( C20095*C20098 )  ) /2.0 ) ;
    gz[(Ai + 1) * matrix_size + Bi + 0] += cnst9*gz111000;
    double C20178 =  (  ( C20112- (  ( C20095*be ) *2 )  ) /C20113 ) - (  ( C20147*C20104 ) /C20102 ) ;
    double gx210000 =  (  (  ( cnst27*C20479 ) /2.0 ) + ( C20132* ( C20178*C20260 )  )  ) + (  ( C20178*C20098 ) *C20180 ) ;
    gx[(Ai + 0) * matrix_size + Bi + 0] += cc* (  ( gx210000*cnst11 ) - ( gx030000*cnst4 )  ) ;
    gx[(Ai + 2) * matrix_size + Bi + 0] += - ( cc* (  (  ( gx210000*cnst6 ) + ( cnst8*gx012000 )  ) + ( gx030000*cnst6 )  )  ) ;
    double gx201000 =  (  ( C20178*C20132 ) *C20345 ) + (  ( C20100* ( C20178*C20179 )  ) + (  ( C20479*cnst14 ) /2.0 )  ) ;
    gx[(Ai + 5) * matrix_size + Bi + 0] += cc* (  ( cnst7*gx201000 ) - ( cnst7*gx021000 )  ) ;
    double C20200 =  (  (  ( C20147*2 ) - (  ( be*C20162 ) *2 )  ) /C20113 ) - (  ( C20178*C20104 ) /C20102 ) ;
    double cnst310 =  (  ( C20200*C20179 ) *C20132 ) + (  (  ( std::pow(C20132 , 2) ) *cnst250 ) /2.0 ) ;
    double gx300000 =  ( C20180* ( C20132*C20200 )  ) +cnst310;
    gx[(Ai + 6) * matrix_size + Bi + 0] += cc* (  ( gx120000*cnst2 ) + ( gx300000*cnst4 )  ) ;
    gx[(Ai + 4) * matrix_size + Bi + 0] += cc* (  ( cnst8*gx102000 ) - (  ( gx300000*cnst6 ) + ( cnst6*gx120000 )  )  ) ;
    double gy120000 =  (  ( C20132* ( C20278*C20201 )  ) + (  ( cnst270*C20480 ) /2.0 )  ) + ( C20180* ( C20095*C20278 )  ) ;
    double gz102000 =  (  ( cnst270*C20481 ) /2.0 ) + (  ( C20363* ( C20132*C20201 )  ) + ( C20363* ( C20095*C20179 )  )  ) ;
    double C20153 = - ( cnst35*C20104 ) ;
    double C20191 =  ( C20153/C20135 ) - (  ( C20104*C20162 ) /C20102 ) ;
    double cnst327 = C20191*C20132;
    double C20219 =  (  ( be* (  (  ( C20191*ae ) *2 ) - ( C20153/C20102 )  )  ) /C20102 ) + (  ( C20201/C20102 ) - (  ( C20104*C20215 ) /C20102 )  ) ;
    double gz300000 =  (  (  ( C20191*C20179 ) *C20125 ) + ( C20125* ( C20219*C20132 )  )  ) + (  ( cnst327*C20484 ) /2.0 ) ;
    gz[(Ai + 6) * matrix_size + Bi + 0] +=  (  ( gz120000*cnst2 ) + ( gz300000*cnst4 )  ) *cc;
    gz[(Ai + 4) * matrix_size + Bi + 0] += cc* (  ( gz102000*cnst8 ) - (  ( gz300000*cnst6 ) + ( cnst6*gz120000 )  )  ) ;
    double gy300000 =  (  ( C20191*C20124 ) *C20180 ) + (  (  ( cnst327*C20450 ) /2.0 ) + (  ( C20219*C20124 ) *C20132 )  ) ;
    gy[(Ai + 4) * matrix_size + Bi + 0] +=  (  ( gy102000*cnst8 ) - (  ( gy120000*cnst6 ) + ( gy300000*cnst6 )  )  ) *cc;
    gy[(Ai + 6) * matrix_size + Bi + 0] += cc* (  ( gy300000*cnst4 ) + ( gy120000*cnst2 )  ) ;
    gy[(Ai + 3) * matrix_size + Bi + 0] += cc* (  ( gy003000- ( gy201000*1.5 )  ) - ( gy021000*1.5 )  ) ;
    gx[(Ai + 3) * matrix_size + Bi + 0] += cc* (  ( gx003000- ( gx201000*1.5 )  ) - ( 1.5*gx021000 )  ) ;
    gz[(Ai + 3) * matrix_size + Bi + 0] += cc* (  ( gz003000- ( 1.5*gz201000 )  ) - ( 1.5*gz021000 )  ) ;
}
