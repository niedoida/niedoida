/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void vne_gradient_02_2(
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
    double C87 = xA-xB;
    double C89 = yA-yB;
    double C90 = zA-zB;
    double C377 = C87*be;
    double C385 = be*C90;
    double C82 = be+ae;
    double C110 =  ( be/C82 ) -1;
    double C116 =  (  ( ae*yA ) + ( be*yB )  ) /C82;
    double C200 = C116-yB;
    double C119 =  (  ( zA*ae ) + ( be*zB )  ) /C82;
    double C242 = C119-zB;
    double C130 = C119-zC;
    double C136 = C130*be;
    double C88 = be*ae;
    double C109 = C90*C88;
    double C100 = C87*C88;
    double C107 = C89*C88;
    double C111 =  (  ( be*xB ) + ( ae*xA )  ) /C82;
    double C122 = C111-xB;
    double C123 = C111-xC;
    double C133 = be*C123;
    double C382 = C89*be;
    double C127 = C116-yC;
    double C135 = C127*be;
    double C115 =  ( std::pow(C82 , 2) ) *2;
    double C105 = C82*2;
    double C134 =  (  ( std::pow(C90 , 2) ) + (  ( std::pow(C89 , 2) ) + ( std::pow(C87 , 2) )  )  ) *C88;
    double C151 = std::exp( ( - ( C134/C82 )  ) );
    double C152 = C151* ( Pi*4 ) ;
    double C364 = C151* ( Pi*2. ) ;
    double C93 = bs[3];
    double C85 = bs[1];
    double C389 = C364*C85;
    double C79 = C389/C82;
    double C406 = C79*C110;
    double C441 =  ( C79*be ) /C82;
    double C92 = bs[2];
    double C157 =  (  ( C92*C136 ) - (  ( C85*C109 ) /C82 )  ) *C152;
    double C474 =  ( - ( C157/C82 )  ) /C105;
    double C483 =  (  ( C133*C93 ) - (  ( C92*C100 ) /C82 )  ) *C152;
    double C484 = C152* (  ( C135*C93 ) - (  ( C107*C92 ) /C82 )  ) ;
    double C155 = C152* (  ( C135*C92 ) - (  ( C107*C85 ) /C82 )  ) ;
    double C508 =  (  ( C484*C130 ) /C82 ) - (  ( C242*C155 ) /C82 ) ;
    double C472 =  ( - ( C155/C82 )  ) /C105;
    double C390 = C92*C364;
    double C199 =  (  (  ( - (  ( C389*C382 ) /C82 )  ) /C82 ) - (  ( C127*C390 ) /C82 )  ) + (  ( C389*C89 ) /C82 ) ;
    double C454 =  ( be*C199 ) /C82;
    double C442 =  ( be* ( C390/C82 )  ) /C82;
    double C505 =  (  ( C406- (  ( C200*C155 ) /C82 )  ) -C442 ) + (  ( C484*C127 ) /C82 ) ;
    double C241 =  (  ( C389*C90 ) /C82 ) + (  (  ( - (  ( C389*C385 ) /C82 )  ) /C82 ) - (  ( C130*C390 ) /C82 )  ) ;
    double C467 =  ( be*C241 ) /C82;
    double C80 =  (  ( C389*C87 ) /C82 ) + (  (  ( - (  ( C389*C377 ) /C82 )  ) /C82 ) - (  ( C390*C123 ) /C82 )  ) ;
    double C154 = C152* (  ( C133*C92 ) - (  ( C100*C85 ) /C82 )  ) ;
    double C507 =  (  ( C130*C483 ) /C82 ) - (  ( C154*C242 ) /C82 ) ;
    double C504 =  (  ( C127*C483 ) /C82 ) - (  ( C200*C154 ) /C82 ) ;
    double cnst68 =  (  (  ( C483*C123 ) /C82 ) + (  ( C406- (  ( C154*C122 ) /C82 )  ) -C442 )  ) *C123;
    double C470 =  ( - ( C154/C82 )  ) /C105;
    double C485 =  (  ( C136*C93 ) - (  ( C92*C109 ) /C82 )  ) *C152;
    double C506 =  (  ( C127*C485 ) /C82 ) - (  ( C157*C200 ) /C82 ) ;
    double C509 =  (  ( C130*C485 ) /C82 ) + (  ( C406- (  ( C157*C242 ) /C82 )  ) -C442 ) ;
    double C86 = bs[0];
    double C365 = C86*C364;
    double C403 =  ( C365/C82 ) *C110;
    double C77 =  (  ( C87*C365 ) /C82 ) + (  (  ( - (  ( C377*C365 ) /C82 )  ) /C82 ) - (  ( C389*C123 ) /C82 )  ) ;
    double C198 =  (  ( C89*C365 ) /C82 ) + (  (  ( - (  ( C382*C365 ) /C82 )  ) /C82 ) - (  ( C389*C127 ) /C82 )  ) ;
    double C422 = C198*C110;
    double C240 =  (  (  ( - (  ( C385*C365 ) /C82 )  ) /C82 ) - (  ( C389*C130 ) /C82 )  ) + (  ( C90*C365 ) /C82 ) ;
    double C436 = C240*C110;
    double C158 =  (  ( C136*C85 ) - (  ( C86*C109 ) /C82 )  ) *C152;
    double C496 =  (  ( C157*C130 ) /C82 ) + (  ( C403- (  ( C158*C242 ) /C82 )  ) -C441 ) ;
    gz[(Ai + 0) * matrix_size + Bi + 3] +=  (  ( C122*C496 ) - ( C509*C123 )  ) *cnst1;
    gz[(Ai + 0) * matrix_size + Bi + 1] +=  (  ( C200*C496 ) - ( C127*C509 )  ) *cnst1;
    double C415 = C158/C115;
    double cnst112 =  (  ( C122* (  (  ( C157*C123 ) /C82 ) - (  ( C158*C122 ) /C82 )  )  ) -C415 ) - ( C123* (  (  ( C123*C485 ) /C82 ) - (  ( C157*C122 ) /C82 )  )  ) ;
    double gz000200 = cnst112-C474;
    double C478 =  (  ( C157*C127 ) /C82 ) - (  ( C200*C158 ) /C82 ) ;
    gz[(Ai + 0) * matrix_size + Bi + 0] +=  (  ( C478*C122 ) - ( C506*C123 )  ) *cnst1;
    double gz000020 =  (  (  ( C200*C478 ) -C415 ) - ( C127*C506 )  ) -C474;
    gz[(Ai + 0) * matrix_size + Bi + 2] +=  (  ( - ( 0.5*gz000200 )  ) - ( 0.5*gz000020 )  ) + (  (  (  (  ( C436+ ( C242*C496 )  ) -C415 ) -C467 ) - ( C130*C509 )  ) -C474 ) ;
    gz[(Ai + 0) * matrix_size + Bi + 4] +=  ( cnst0*gz000200 ) - ( cnst0*gz000020 ) ;
    double C153 =  (  ( C133*C85 ) - (  ( C86*C100 ) /C82 )  ) *C152;
    double C475 =  (  ( C127*C154 ) /C82 ) - (  ( C200*C153 ) /C82 ) ;
    gx[(Ai + 0) * matrix_size + Bi + 0] +=  (  (  (  ( C475*C122 ) +C422 ) -C454 ) - ( C123*C504 )  ) *cnst1;
    double C479 =  (  ( C130*C154 ) /C82 ) - (  ( C153*C242 ) /C82 ) ;
    gx[(Ai + 0) * matrix_size + Bi + 3] +=  (  (  ( C436+ ( C479*C122 )  ) -C467 ) - ( C507*C123 )  ) *cnst1;
    gx[(Ai + 0) * matrix_size + Bi + 1] +=  (  ( C479*C200 ) - ( C127*C507 )  ) *cnst1;
    double C405 = C153/C115;
    double gx000020 =  (  (  ( C475*C200 ) -C405 ) - ( C127*C504 )  ) -C470;
    double cnst143 = C122* (  (  ( C154*C123 ) /C82 ) + (  ( C403- (  ( C153*C122 ) /C82 )  ) -C441 )  ) ;
    double gx000200 =  (  (  (  ( cnst143+ ( C77*C110 )  ) -C405 ) - (  ( be*C80 ) /C82 )  ) -cnst68 ) -C470;
    gx[(Ai + 0) * matrix_size + Bi + 2] +=  (  (  (  ( C479*C242 ) -C405 ) - ( C130*C507 )  ) -C470 ) + (  ( - ( 0.5*gx000200 )  ) - ( 0.5*gx000020 )  ) ;
    gx[(Ai + 0) * matrix_size + Bi + 4] +=  ( gx000200*cnst0 ) - ( gx000020*cnst0 ) ;
    double C156 =  (  ( C135*C85 ) - (  ( C86*C107 ) /C82 )  ) *C152;
    double C480 =  (  ( C130*C155 ) /C82 ) - (  ( C156*C242 ) /C82 ) ;
    gy[(Ai + 0) * matrix_size + Bi + 3] +=  (  ( C480*C122 ) - ( C508*C123 )  ) *cnst1;
    gy[(Ai + 0) * matrix_size + Bi + 1] +=  (  (  (  ( C200*C480 ) +C436 ) -C467 ) - ( C508*C127 )  ) *cnst1;
    double C411 = C156/C115;
    double cnst164 =  (  (  (  (  ( C123*C155 ) /C82 ) - (  ( C156*C122 ) /C82 )  ) *C122 ) -C411 ) - (  (  (  ( C484*C123 ) /C82 ) - (  ( C155*C122 ) /C82 )  ) *C123 ) ;
    double gy000200 = cnst164-C472;
    double C491 =  (  ( C127*C155 ) /C82 ) + (  ( C403- (  ( C200*C156 ) /C82 )  ) -C441 ) ;
    double gy000020 =  (  (  (  ( C422+ ( C200*C491 )  ) -C411 ) -C454 ) - ( C127*C505 )  ) -C472;
    gy[(Ai + 0) * matrix_size + Bi + 4] +=  ( gy000200*cnst0 ) - ( cnst0*gy000020 ) ;
    gy[(Ai + 0) * matrix_size + Bi + 2] +=  (  (  (  ( C480*C242 ) -C411 ) - ( C508*C130 )  ) -C472 ) + (  ( - ( 0.5*gy000200 )  ) - ( 0.5*gy000020 )  ) ;
    gy[(Ai + 0) * matrix_size + Bi + 0] +=  (  ( C491*C122 ) - ( C505*C123 )  ) *cnst1;
}
