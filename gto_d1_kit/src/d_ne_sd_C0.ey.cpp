/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void vne_gradient_02_3(
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
    double C77 = zA-zB;
    double C75 = xA-xB;
    double cnst1 = std::sqrt(3.0);
    double C73 = be+ae;
    double C89 = 2*C73;
    double C92 =  (  ( be*xB ) + ( ae*xA )  ) /C73;
    double C96 = C92-xB;
    double C98 = C92-xC;
    double C95 =  (  ( be*zB ) + ( zA*ae )  ) /C73;
    double C100 = C95-zC;
    double C181 = C95-zB;
    double C94 =  (  ( be*yB ) + ( ae*yA )  ) /C73;
    double C99 = C94-yC;
    double C149 = C94-yB;
    double C76 = yA-yB;
    double C101 =  ( be*ae ) * (  ( std::pow(C77 , 2) ) + (  ( std::pow(C75 , 2) ) + ( std::pow(C76 , 2) )  )  ) ;
    double C104 = std::exp( ( - ( C101/C73 )  ) );
    double C283 = C104* ( Pi*2. ) ;
    double C105 = C104*Pi;
    double C110 = 4* ( C105*C99 ) ;
    double C109 = 4* ( C105*C98 ) ;
    double C111 =  ( C105*C100 ) *4;
    double C80 = bs[3];
    double C296 = C109*C80;
    double C323 = C99*C296;
    double C330 = C100*C296;
    double C299 = C110*C80;
    double C328 = C299*C100;
    double C74 = bs[1];
    double C284 = C283*C74;
    double C68 = C284/C73;
    double cnst9 = be*C284;
    double C116 = C74*C111;
    double C301 = C116/C89;
    double C112 = C109*C74;
    double C295 = C112/C89;
    double C114 = C110*C74;
    double C298 = C114/C89;
    double C79 = bs[2];
    double C115 = C79*C110;
    double C341 =  ( C181*C115 ) -C328;
    double C311 = C115*C100;
    double C327 =  ( C149*C116 ) -C311;
    double C331 =  ( C114*C181 ) -C311;
    double C300 = C115/C89;
    double C337 =  (  ( C149*C114 ) +C68 ) - ( C99*C115 ) ;
    double C290 = C79*C283;
    double C69 =  (  ( C75*C284 ) /C73 ) + (  (  ( - (  ( C75*cnst9 ) /C73 )  ) /C73 ) - (  ( C98*C290 ) /C73 )  ) ;
    double C180 =  (  ( C77*C284 ) /C73 ) + (  (  ( - (  ( C77*cnst9 ) /C73 )  ) /C73 ) - (  ( C290*C100 ) /C73 )  ) ;
    gy[(Ai + 0) * matrix_size + Bi + 1] += cnst1* (  (  ( C149*C331 ) +C180 ) - ( C99*C341 )  ) ;
    double C70 = C290/C73;
    double C338 =  (  ( C149*C115 ) +C70 ) - ( C299*C99 ) ;
    gy[(Ai + 0) * matrix_size + Bi + 0] +=  (  ( C337*C96 ) - ( C338*C98 )  ) *cnst1;
    double C148 =  (  ( C76*C284 ) /C73 ) + (  (  ( - (  ( C76*cnst9 ) /C73 )  ) /C73 ) - (  ( C99*C290 ) /C73 )  ) ;
    double gy000020 =  (  ( C148+ ( C298+ ( C337*C149 )  )  ) - ( C338*C99 )  ) -C300;
    double C113 = C109*C79;
    double C305 = C113*C99;
    double C322 =  ( C149*C112 ) -C305;
    double cnst65 =  ( C298+ (  (  ( C114*C96 ) -C305 ) *C96 )  ) - ( C98* (  ( C96*C115 ) -C323 )  ) ;
    double gy000200 = cnst65-C300;
    gy[(Ai + 0) * matrix_size + Bi + 4] +=  ( gy000200*cnst0 ) - ( gy000020*cnst0 ) ;
    gy[(Ai + 0) * matrix_size + Bi + 2] +=  (  ( - ( gy000200*0.5 )  ) - ( 0.5*gy000020 )  ) + (  (  ( C298+ ( C331*C181 )  ) - ( C100*C341 )  ) -C300 ) ;
    double C297 = C113/C89;
    double C314 = C113*C100;
    double C329 =  ( C112*C181 ) -C314;
    double C340 =  ( C113*C181 ) -C330;
    double cnst78 = C340*C99;
    gy[(Ai + 0) * matrix_size + Bi + 3] +=  (  ( C331*C96 ) -cnst78 ) *cnst1;
    gx[(Ai + 0) * matrix_size + Bi + 1] +=  (  ( C149*C329 ) -cnst78 ) *cnst1;
    gx[(Ai + 0) * matrix_size + Bi + 3] +=  (  (  ( C329*C96 ) +C180 ) - ( C340*C98 )  ) *cnst1;
    double C336 =  ( C149*C113 ) -C323;
    double gx000020 =  (  (  ( C149*C322 ) +C295 ) - ( C336*C99 )  ) -C297;
    gx[(Ai + 0) * matrix_size + Bi + 0] +=  (  ( C148+ ( C322*C96 )  ) - ( C98*C336 )  ) *cnst1;
    double cnst96 =  (  ( C295+ (  (  (  ( C112*C96 ) +C68 ) - ( C98*C113 )  ) *C96 )  ) +C69 ) - ( C98* (  ( C70+ ( C113*C96 )  ) - ( C98*C296 )  )  ) ;
    double gx000200 = cnst96-C297;
    gx[(Ai + 0) * matrix_size + Bi + 2] +=  (  ( - ( 0.5*gx000200 )  ) - ( 0.5*gx000020 )  ) + (  (  (  ( C329*C181 ) +C295 ) - ( C340*C100 )  ) -C297 ) ;
    gx[(Ai + 0) * matrix_size + Bi + 4] +=  ( cnst0*gx000200 ) - ( gx000020*cnst0 ) ;
    double C117 = C79*C111;
    double cnst104 =  ( C301+ (  (  ( C116*C96 ) -C314 ) *C96 )  ) - (  (  ( C117*C96 ) -C330 ) *C98 ) ;
    double C339 =  ( C149*C117 ) -C328;
    gz[(Ai + 0) * matrix_size + Bi + 0] +=  (  ( C96*C327 ) - ( C339*C98 )  ) *cnst1;
    double C343 =  ( C70+ ( C117*C181 )  ) - (  ( C80*C111 ) *C100 ) ;
    double C342 =  (  ( C116*C181 ) +C68 ) - ( C117*C100 ) ;
    gz[(Ai + 0) * matrix_size + Bi + 1] +=  (  ( C342*C149 ) - ( C343*C99 )  ) *cnst1;
    gz[(Ai + 0) * matrix_size + Bi + 3] += cnst1* (  ( C342*C96 ) - ( C343*C98 )  ) ;
    double C303 = C117/C89;
    double gz000020 =  (  (  ( C149*C327 ) +C301 ) - ( C339*C99 )  ) -C303;
    double gz000200 = cnst104-C303;
    gz[(Ai + 0) * matrix_size + Bi + 4] +=  ( gz000200*cnst0 ) - ( gz000020*cnst0 ) ;
    gz[(Ai + 0) * matrix_size + Bi + 2] +=  (  ( - ( gz000200*0.5 )  ) - ( 0.5*gz000020 )  ) + (  (  (  (  ( C342*C181 ) +C301 ) +C180 ) - ( C343*C100 )  ) -C303 ) ;
}
