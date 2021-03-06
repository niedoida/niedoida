/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void overlap_gradient_13(
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
    double C2310 = ae*zAB;
    double C2267 = xAB*ae;
    double C2295 = yAB*ae;
    double cnst1 = ae*2;
    double cnst3 = std::sqrt( ( 45.0/8.0 ) );
    double cnst5 = std::sqrt( ( 5.0/8.0 ) );
    double cnst7 = std::sqrt( ( 3.0/8.0 ) );
    double cnst8 = std::sqrt(7.5);
    double cnst9 = std::sqrt(6.0);
    double cnst10 = cc* ( std::sqrt(15.0) ) ;
    double cnst12 = std::sqrt( ( 45./8.0 ) );
    double C2264 = be+ae;
    double C2253 = std::sqrt( ( Pi/C2264 ) );
    double C2464 = C2267*C2253;
    double C2256 = C2464/C2264;
    double C2468 = C2253*C2295;
    double C2479 = C2468/C2264;
    double C2471 = C2253*C2310;
    double C2481 = C2471/C2264;
    double C2270 = 2.*C2264;
    double C2390 =  ( - (  ( be*C2253 ) *2 )  ) /C2270;
    double C2315 =  (  ( C2253*ae ) *2. ) /C2270;
    double C2427 = C2253/C2270;
    double C2463 = std::pow(C2264 , 2);
    double C2469 = C2463*2.;
    double C2493 =  (  ( C2253* ( std::pow(C2310 , 2) )  ) /C2463 ) +C2427;
    double C2306 =  (  ( C2310*C2493 ) /C2264 ) + (  ( C2471*2. ) /C2469 ) ;
    double C2492 =  (  (  ( std::pow(C2295 , 2) ) *C2253 ) /C2463 ) +C2427;
    double C2291 =  (  ( C2295*C2492 ) /C2264 ) + (  ( C2468*2. ) /C2469 ) ;
    double C2491 =  (  ( C2253* ( std::pow(C2267 , 2) )  ) /C2463 ) +C2427;
    double C2336 =  (  ( C2267*C2491 ) /C2264 ) + (  ( C2464*2. ) /C2469 ) ;
    double C2266 = xAB*be;
    double C2423 = C2253*C2266;
    double C2465 = C2423/C2264;
    double C2254 = -C2465;
    double C2265 = ae*C2254;
    double C2284 = C2315+ (  (  ( C2267*C2265 ) *2 ) /C2264 ) ;
    double C2283 = C2390- (  (  ( C2265*C2266 ) *2 ) /C2264 ) ;
    double gx100021 =  ( C2283*C2492 ) *C2481;
    double gx100030 = C2253* ( C2283*C2291 ) ;
    double C2287 =  (  ( C2265*4. ) /C2270 ) + (  ( C2267*C2283 ) /C2264 ) ;
    double gx100120 = C2253* ( C2287*C2492 ) ;
    gx[(Ai + 0) * matrix_size + Bi + 1] +=  (  ( C2287*C2479 ) *C2481 ) *cnst10;
    double C2506 = C2265*2;
    double C2564 =  (  (  (  ( C2256*ae ) *2 ) +C2506 ) /C2270 ) + (  ( C2267*C2284 ) /C2264 ) ;
    double C2577 =  (  (  (  ( C2491*ae ) *2 ) + ( C2284*2 )  ) /C2270 ) + (  ( C2267*C2564 ) /C2264 ) ;
    double C2255 = C2427- (  ( C2267*C2423 ) /C2463 ) ;
    double C2257 =  (  ( C2267*C2255 ) /C2264 ) + (  ( C2256-C2465 ) /C2270 ) ;
    double C2563 =  (  ( C2267*C2287 ) /C2264 ) + (  (  (  ( C2255*ae ) *2 ) + ( C2284+C2283 )  ) /C2270 ) ;
    double cnst78 =  (  ( C2267*C2563 ) /C2264 ) + (  (  ( C2564+ ( C2287*2 )  ) + ( cnst1*C2257 )  ) /C2270 ) ;
    double gx100300 = cnst78* ( std::pow(C2253 , 2) ) ;
    double cnst81 =  ( cnst9* ( C2493* ( C2253*C2287 )  )  ) - (  ( cnst7*gx100120 ) + ( cnst7*gx100300 )  ) ;
    gx[(Ai + 0) * matrix_size + Bi + 4] += cc*cnst81;
    gx[(Ai + 0) * matrix_size + Bi + 6] += cc* (  ( cnst5*gx100300 ) + ( gx100120*cnst3 )  ) ;
    double gx100210 = C2253* ( C2563*C2479 ) ;
    double cnst87 =  (  ( cnst9* (  ( C2283*C2479 ) *C2493 )  ) + ( cnst7*gx100210 )  ) + ( cnst7*gx100030 ) ;
    gx[(Ai + 0) * matrix_size + Bi + 2] += - ( cc*cnst87 ) ;
    gx[(Ai + 0) * matrix_size + Bi + 0] += cc* (  ( gx100210*cnst12 ) - ( gx100030*cnst5 )  ) ;
    double gx100201 = C2481* ( C2563*C2253 ) ;
    gx[(Ai + 0) * matrix_size + Bi + 5] += cc* (  ( gx100201*cnst8 ) - ( gx100021*cnst8 )  ) ;
    double C2260 =  (  (  ( C2255*2 ) +C2491 ) /C2270 ) + (  ( C2267*C2257 ) /C2264 ) ;
    double C2343 = be*yAB;
    double C2446 = C2343*C2253;
    double C2473 = C2446/C2264;
    double C2261 = -C2473;
    double C2294 = ae*C2261;
    double C2508 = C2294*2;
    double gy100300 = C2253* ( C2260*C2508 ) ;
    double gy100201 = C2481* ( C2257*C2508 ) ;
    double C2302 = C2315+ (  (  ( C2295*C2294 ) *2 ) /C2264 ) ;
    double gy100210 = C2253* ( C2257*C2302 ) ;
    double C2565 =  (  (  (  ( C2479*ae ) *2 ) +C2508 ) /C2270 ) + (  ( C2295*C2302 ) /C2264 ) ;
    double gy100021 =  ( C2565*C2254 ) *C2481;
    gy[(Ai + 0) * matrix_size + Bi + 5] += cc* (  ( gy100201*cnst8 ) - ( cnst8*gy100021 )  ) ;
    double gy100120 =  ( C2565*C2255 ) *C2253;
    double cnst127 =  ( cnst9* (  ( C2255*C2508 ) *C2493 )  ) - (  ( cnst7*gy100120 ) + ( cnst7*gy100300 )  ) ;
    gy[(Ai + 0) * matrix_size + Bi + 4] += cc*cnst127;
    gy[(Ai + 0) * matrix_size + Bi + 6] += cc* (  ( gy100300*cnst5 ) + ( cnst3*gy100120 )  ) ;
    double C2575 =  (  ( C2565*C2295 ) /C2264 ) + (  (  (  ( ae*C2492 ) *2 ) + ( C2302*2 )  ) /C2270 ) ;
    double gy100030 =  ( C2254*C2575 ) *C2253;
    gy[(Ai + 0) * matrix_size + Bi + 0] += cc* (  ( cnst12*gy100210 ) - ( gy100030*cnst5 )  ) ;
    double cnst134 =  ( cnst7*gy100030 ) + (  ( cnst7*gy100210 ) + ( cnst9* ( C2493* ( C2302*C2254 )  )  )  ) ;
    gy[(Ai + 0) * matrix_size + Bi + 2] += - ( cc*cnst134 ) ;
    gy[(Ai + 0) * matrix_size + Bi + 1] +=  (  ( C2255*C2302 ) *C2481 ) *cnst10;
    double C2352 = C2390- (  (  ( C2343*C2294 ) *2 ) /C2264 ) ;
    double gy010201 = C2481* ( C2491*C2352 ) ;
    double C2355 =  (  ( C2294*4. ) /C2270 ) + (  ( C2295*C2352 ) /C2264 ) ;
    double gy010210 = C2253* ( C2355*C2491 ) ;
    gy[(Ai + 1) * matrix_size + Bi + 1] +=  ( C2481* ( C2355*C2256 )  ) *cnst10;
    double gy010300 =  ( C2336*C2352 ) *C2253;
    double gy100003 =  ( C2506*C2261 ) *C2306;
    double gx010300 =  ( C2577*C2261 ) *C2253;
    double gx010201 = C2481* ( C2564*C2261 ) ;
    double C2449 = C2427- (  ( C2446*C2295 ) /C2463 ) ;
    double C2567 =  (  (  ( C2302+C2352 ) + (  ( C2449*ae ) *2 )  ) /C2270 ) + (  ( C2355*C2295 ) /C2264 ) ;
    double gy010021 = C2481* ( C2253*C2567 ) ;
    gy[(Ai + 1) * matrix_size + Bi + 5] += cc* (  ( cnst8*gy010201 ) - ( cnst8*gy010021 )  ) ;
    double gy010120 =  ( C2256*C2567 ) *C2253;
    gy[(Ai + 1) * matrix_size + Bi + 6] +=  (  ( gy010300*cnst5 ) + ( gy010120*cnst3 )  ) *cc;
    double cnst178 =  (  (  ( C2256*C2352 ) *C2493 ) *cnst9 ) - (  ( cnst7*gy010300 ) + ( cnst7*gy010120 )  ) ;
    gy[(Ai + 1) * matrix_size + Bi + 4] += cc*cnst178;
    double C2496 =  (  ( C2295*C2449 ) /C2264 ) + (  ( C2479-C2473 ) /C2270 ) ;
    double cnst182 =  (  ( C2295*C2567 ) /C2264 ) + (  (  ( C2565+ ( C2355*2 )  ) + ( cnst1*C2496 )  ) /C2270 ) ;
    double gy010030 =  ( C2253*cnst182 ) *C2253;
    double cnst185 =  (  ( cnst7*gy010210 ) + ( cnst9* (  ( C2355*C2253 ) *C2493 )  )  ) + ( cnst7*gy010030 ) ;
    gy[(Ai + 1) * matrix_size + Bi + 2] += - ( cc*cnst185 ) ;
    gy[(Ai + 1) * matrix_size + Bi + 0] +=  (  ( gy010210*cnst12 ) - ( cnst5*gy010030 )  ) *cc;
    double gx010120 = C2253* ( C2284*C2496 ) ;
    gx[(Ai + 1) * matrix_size + Bi + 6] += cc* (  ( gx010300*cnst5 ) + ( gx010120*cnst3 )  ) ;
    double cnst196 =  ( cnst9* (  ( C2284*C2261 ) *C2493 )  ) - (  ( cnst7*gx010300 ) + ( cnst7*gx010120 )  ) ;
    gx[(Ai + 1) * matrix_size + Bi + 4] += cc*cnst196;
    double gx010021 =  ( C2506*C2496 ) *C2481;
    gx[(Ai + 1) * matrix_size + Bi + 5] += cc* (  ( gx010201*cnst8 ) - ( cnst8*gx010021 )  ) ;
    double C2339 =  (  (  ( C2449*2 ) +C2492 ) /C2270 ) + (  ( C2295*C2496 ) /C2264 ) ;
    double gx010030 = C2253* ( C2506*C2339 ) ;
    double gx010210 = C2253* ( C2449*C2564 ) ;
    gx[(Ai + 1) * matrix_size + Bi + 0] += cc* (  ( cnst12*gx010210 ) - ( gx010030*cnst5 )  ) ;
    double cnst216 =  (  ( cnst7*gx010210 ) + ( cnst9* (  ( C2449*C2506 ) *C2493 )  )  ) + ( cnst7*gx010030 ) ;
    gx[(Ai + 1) * matrix_size + Bi + 2] += - ( cnst216*cc ) ;
    gx[(Ai + 1) * matrix_size + Bi + 1] +=  (  ( C2284*C2449 ) *C2481 ) *cnst10;
    double C2383 = be*zAB;
    double C2454 = C2383*C2253;
    double C2457 = C2427- (  ( C2310*C2454 ) /C2463 ) ;
    double gx001021 = C2457* ( C2506*C2492 ) ;
    double gx001201 = C2457* ( C2253*C2564 ) ;
    gx[(Ai + 2) * matrix_size + Bi + 5] += cc* (  ( cnst8*gx001201 ) - ( gx001021*cnst8 )  ) ;
    double gy001021 = C2457* ( C2565*C2253 ) ;
    double gy001201 = C2457* ( C2491*C2508 ) ;
    gy[(Ai + 2) * matrix_size + Bi + 5] += cc* (  ( gy001201*cnst8 ) - ( gy001021*cnst8 )  ) ;
    gx[(Ai + 2) * matrix_size + Bi + 1] +=  ( C2457* ( C2284*C2479 )  ) *cnst10;
    gy[(Ai + 2) * matrix_size + Bi + 1] +=  (  ( C2256*C2302 ) *C2457 ) *cnst10;
    double C2475 = C2454/C2264;
    double C2262 = -C2475;
    double gz010300 =  ( C2336*C2508 ) *C2262;
    double cnst229 = gz010300*cnst5;
    double cnst230 = cnst7*gz010300;
    double gy001120 =  ( C2565*C2256 ) *C2262;
    gy[(Ai + 2) * matrix_size + Bi + 6] +=  (  ( gy001120*cnst3 ) +cnst229 ) *cc;
    double gx001120 =  ( C2284*C2492 ) *C2262;
    double gy001030 =  ( C2253*C2575 ) *C2262;
    double C2309 = C2262*ae;
    double C2561 = C2390- (  (  ( C2383*C2309 ) *2 ) /C2264 ) ;
    double gz001210 = C2561* ( C2491*C2479 ) ;
    double gz001030 = C2561* ( C2253*C2291 ) ;
    gz[(Ai + 2) * matrix_size + Bi + 0] += cc* (  ( gz001210*cnst12 ) - ( gz001030*cnst5 )  ) ;
    double gz001300 = C2561* ( C2336*C2253 ) ;
    double gz001120 =  ( C2256*C2492 ) *C2561;
    gz[(Ai + 2) * matrix_size + Bi + 6] += cc* (  ( gz001300*cnst5 ) + ( gz001120*cnst3 )  ) ;
    double C2395 =  (  ( C2561*C2310 ) /C2264 ) + (  ( 4.*C2309 ) /C2270 ) ;
    double gz001021 =  ( C2253*C2492 ) *C2395;
    gz[(Ai + 2) * matrix_size + Bi + 1] +=  (  ( C2256*C2479 ) *C2395 ) *cnst10;
    double gz001201 =  ( C2491*C2253 ) *C2395;
    gz[(Ai + 2) * matrix_size + Bi + 5] += cc* (  ( gz001201*cnst8 ) - ( gz001021*cnst8 )  ) ;
    double C2509 = C2309*2;
    double gz010030 = C2509* ( C2253*C2339 ) ;
    double gz100210 = C2509* ( C2257*C2479 ) ;
    double gz010120 = C2509* ( C2256*C2496 ) ;
    gz[(Ai + 1) * matrix_size + Bi + 6] += cc* (  ( gz010120*cnst3 ) +cnst229 ) ;
    double gz010210 = C2509* ( C2491*C2449 ) ;
    gz[(Ai + 1) * matrix_size + Bi + 0] += cc* (  ( gz010210*cnst12 ) - ( gz010030*cnst5 )  ) ;
    double gz100300 =  ( C2253*C2260 ) *C2509;
    double gz100120 =  ( C2255*C2492 ) *C2509;
    gz[(Ai + 0) * matrix_size + Bi + 6] += cc* (  ( gz100300*cnst5 ) + ( gz100120*cnst3 )  ) ;
    double C2317 = C2315+ (  (  ( C2310*C2309 ) *2 ) /C2264 ) ;
    double gz100021 = C2317* ( C2492*C2254 ) ;
    double gz010201 = C2317* ( C2491*C2261 ) ;
    double C2566 =  (  ( C2317*C2310 ) /C2264 ) + (  ( C2509+ (  ( C2481*ae ) *2 )  ) /C2270 ) ;
    gz[(Ai + 1) * matrix_size + Bi + 4] += cc* (  ( cnst9* ( C2566* ( C2256*C2261 )  )  ) - ( cnst230+ ( cnst7*gz010120 )  )  ) ;
    double cnst279 =  ( cnst7*gz010030 ) + (  ( cnst7*gz010210 ) + ( cnst9* ( C2566* ( C2253*C2449 )  )  )  ) ;
    gz[(Ai + 1) * matrix_size + Bi + 2] += - ( cc*cnst279 ) ;
    double cnst282 =  ( cnst9* ( C2566* ( C2255*C2253 )  )  ) - (  ( gz100120*cnst7 ) + ( cnst7*gz100300 )  ) ;
    gz[(Ai + 0) * matrix_size + Bi + 4] += cnst282*cc;
    double gz010021 =  ( C2253*C2496 ) *C2317;
    gz[(Ai + 1) * matrix_size + Bi + 5] +=  (  ( gz010201*cnst8 ) - ( gz010021*cnst8 )  ) *cc;
    gz[(Ai + 0) * matrix_size + Bi + 1] +=  (  ( C2255*C2479 ) *C2317 ) *cnst10;
    double C2568 =  (  ( C2310*C2395 ) /C2264 ) + (  (  ( C2561+C2317 ) + (  ( C2457*ae ) *2 )  ) /C2270 ) ;
    double cnst288 =  (  ( cnst7*gz001210 ) + ( cnst9* ( C2568* ( C2253*C2479 )  )  )  ) + ( cnst7*gz001030 ) ;
    gz[(Ai + 2) * matrix_size + Bi + 2] += - ( cc*cnst288 ) ;
    double cnst293 =  ( cnst9* ( C2568* ( C2256*C2253 )  )  ) - (  ( cnst7*gz001120 ) + ( cnst7*gz001300 )  ) ;
    gz[(Ai + 2) * matrix_size + Bi + 4] += cc*cnst293;
    double C2576 =  (  (  ( C2317*2 ) + (  ( ae*C2493 ) *2 )  ) /C2270 ) + (  ( C2566*C2310 ) /C2264 ) ;
    double gz100201 =  ( C2253*C2257 ) *C2317;
    gz[(Ai + 0) * matrix_size + Bi + 5] += cc* (  ( gz100201*cnst8 ) - ( cnst8*gz100021 )  ) ;
    gz[(Ai + 1) * matrix_size + Bi + 1] +=  (  ( C2256*C2449 ) *C2317 ) *cnst10;
    double gy001210 =  ( C2491*C2302 ) *C2262;
    gy[(Ai + 2) * matrix_size + Bi + 0] += cc* (  ( cnst12*gy001210 ) - ( cnst5*gy001030 )  ) ;
    double gx001210 = C2262* ( C2564*C2479 ) ;
    double gx001300 =  ( C2577*C2253 ) *C2262;
    gx[(Ai + 2) * matrix_size + Bi + 6] += cc* (  ( gx001120*cnst3 ) + ( gx001300*cnst5 )  ) ;
    double gz100030 =  ( C2506*C2291 ) *C2262;
    double cnst305 = cnst7*gz100030;
    double cnst307 = cc* (  (  ( cnst9* ( C2566* ( C2479*C2254 )  )  ) + ( cnst7*gz100210 )  ) +cnst305 ) ;
    gz[(Ai + 0) * matrix_size + Bi + 2] += -cnst307;
    double cnst308 = gz100030*cnst5;
    gx[(Ai + 2) * matrix_size + Bi + 0] += cc* (  ( gx001210*cnst12 ) -cnst308 ) ;
    gz[(Ai + 0) * matrix_size + Bi + 0] += cc* (  ( gz100210*cnst12 ) -cnst308 ) ;
    double C2497 =  (  ( C2481-C2475 ) /C2270 ) + (  ( C2457*C2310 ) /C2264 ) ;
    gy[(Ai + 2) * matrix_size + Bi + 4] += cc* (  ( cnst9* (  ( C2256*C2508 ) *C2497 )  ) - ( cnst230+ ( cnst7*gy001120 )  )  ) ;
    double cnst316 =  (  ( C2568*C2310 ) /C2264 ) + (  (  ( C2566+ ( 2*C2395 )  ) + ( cnst1*C2497 )  ) /C2270 ) ;
    double cnst318 =  (  (  ( C2284*C2253 ) *C2497 ) *cnst9 ) - (  ( cnst7*gx001300 ) + ( gx001120*cnst7 )  ) ;
    gx[(Ai + 2) * matrix_size + Bi + 4] += cc*cnst318;
    double C2379 =  (  ( C2310*C2497 ) /C2264 ) + (  (  ( C2457*2 ) +C2493 ) /C2270 ) ;
    double cnst324 =  (  (  ( cnst9* (  ( C2506*C2479 ) *C2497 )  ) + ( cnst7*gx001210 )  ) +cnst305 ) *cc;
    gx[(Ai + 2) * matrix_size + Bi + 2] += -cnst324;
    double cnst327 =  (  ( cnst9* (  ( C2253*C2302 ) *C2497 )  ) + ( cnst7*gy001210 )  ) + ( cnst7*gy001030 ) ;
    gy[(Ai + 2) * matrix_size + Bi + 2] += - ( cnst327*cc ) ;
    gz[(Ai + 2) * matrix_size + Bi + 3] +=  (  (  (  ( C2253*C2253 ) *cnst316 ) - ( gz001201*1.5 )  ) - ( 1.5*gz001021 )  ) *cc;
    gy[(Ai + 1) * matrix_size + Bi + 3] += cc* (  (  (  ( C2253*C2352 ) *C2306 ) - ( 1.5*gy010201 )  ) - ( 1.5*gy010021 )  ) ;
    gx[(Ai + 0) * matrix_size + Bi + 3] += cc* (  (  (  ( C2253*C2283 ) *C2306 ) - ( gx100201*1.5 )  ) - ( gx100021*1.5 )  ) ;
    gy[(Ai + 2) * matrix_size + Bi + 3] += cc* (  (  (  ( C2253*C2508 ) *C2379 ) - ( gy001201*1.5 )  ) - ( gy001021*1.5 )  ) ;
    gx[(Ai + 2) * matrix_size + Bi + 3] += cc* (  (  (  ( C2253*C2506 ) *C2379 ) - ( 1.5*gx001201 )  ) - ( 1.5*gx001021 )  ) ;
    gz[(Ai + 1) * matrix_size + Bi + 3] += cc* (  (  ( C2576* ( C2253*C2261 )  ) - ( gz010201*1.5 )  ) - ( 1.5*gz010021 )  ) ;
    gx[(Ai + 1) * matrix_size + Bi + 3] += cc* (  ( gy100003- ( gx010201*1.5 )  ) - ( 1.5*gx010021 )  ) ;
    gz[(Ai + 0) * matrix_size + Bi + 3] +=  (  (  (  ( C2253*C2254 ) *C2576 ) - ( gz100201*1.5 )  ) - ( 1.5*gz100021 )  ) *cc;
    gy[(Ai + 0) * matrix_size + Bi + 3] += cc* (  ( gy100003- ( 1.5*gy100201 )  ) - ( 1.5*gy100021 )  ) ;
}
