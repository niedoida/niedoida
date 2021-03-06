/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void vne_gradient_02_1(
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
    double C86 = xA-xB;
    double C89 = yA-yB;
    double C90 = zA-zB;
    double C377 = C86*be;
    double C385 = be*C90;
    double C87 = be*ae;
    double C100 = C86*C87;
    double C107 = C89*C87;
    double C109 = C90*C87;
    double C82 = be+ae;
    double C117 =  (  ( ae*yA ) + ( be*yB )  ) /C82;
    double C200 = C117-yB;
    double C120 =  (  ( zA*ae ) + ( be*zB )  ) /C82;
    double C242 = C120-zB;
    double C131 = C120-zC;
    double C136 = C131*ae;
    double C111 =  (  ( be*xB ) + ( ae*xA )  ) /C82;
    double C122 = C111-xB;
    double C124 = C111-xC;
    double C133 = C124*ae;
    double C382 = C89*be;
    double C128 = C117-yC;
    double C135 = C128*ae;
    double C115 =  ( std::pow(C82 , 2) ) *2;
    double C134 =  (  ( std::pow(C90 , 2) ) + (  ( std::pow(C89 , 2) ) + ( std::pow(C86 , 2) )  )  ) *C87;
    double C151 = std::exp( ( - ( C134/C82 )  ) );
    double C152 = C151* ( Pi*4 ) ;
    double C364 = C151* ( Pi*2. ) ;
    double C106 = C82*2;
    double C94 = bs[3];
    double C88 = bs[1];
    double C389 = C364*C88;
    double C104 =  (  ( C389/C82 ) *ae ) /C82;
    double C93 = bs[2];
    double C485 =  (  ( C136*C94 ) + (  ( C109*C93 ) /C82 )  ) *C152;
    double C390 = C364*C93;
    double C440 =  (  ( C390/C82 ) *ae ) /C82;
    double C80 =  (  ( C86*C389 ) /C82 ) + (  (  ( - (  ( C389*C377 ) /C82 )  ) /C82 ) - (  ( C124*C390 ) /C82 )  ) ;
    double C241 =  (  (  ( - (  ( C385*C389 ) /C82 )  ) /C82 ) - (  ( C131*C390 ) /C82 )  ) + (  ( C389*C90 ) /C82 ) ;
    double C467 =  ( C241*ae ) /C82;
    double C199 =  (  ( C89*C389 ) /C82 ) + (  (  ( - (  ( C382*C389 ) /C82 )  ) /C82 ) - (  ( C128*C390 ) /C82 )  ) ;
    double C453 =  ( C199*ae ) /C82;
    double C483 = C152* (  (  ( C93*C100 ) /C82 ) + ( C133*C94 )  ) ;
    double C157 = C152* (  ( C93*C136 ) + (  ( C109*C88 ) /C82 )  ) ;
    double C474 =  ( - ( C157/C82 )  ) /C106;
    double C506 =  (  ( C128*C485 ) /C82 ) - (  ( C157*C200 ) /C82 ) ;
    double C509 =  (  ( C131*C485 ) /C82 ) + (  ( C104- (  ( C157*C242 ) /C82 )  ) -C440 ) ;
    double C154 =  (  (  ( C88*C100 ) /C82 ) + ( C133*C93 )  ) *C152;
    double C504 =  (  ( C128*C483 ) /C82 ) - (  ( C154*C200 ) /C82 ) ;
    double cnst61 = C124* (  (  ( C104- (  ( C154*C122 ) /C82 )  ) -C440 ) + (  ( C124*C483 ) /C82 )  ) ;
    double C470 =  ( - ( C154/C82 )  ) /C106;
    double C507 =  (  ( C131*C483 ) /C82 ) - (  ( C154*C242 ) /C82 ) ;
    double C155 =  (  (  ( C107*C88 ) /C82 ) + ( C135*C93 )  ) *C152;
    double C472 =  ( - ( C155/C82 )  ) /C106;
    double C484 =  (  (  ( C93*C107 ) /C82 ) + ( C135*C94 )  ) *C152;
    double C505 =  (  ( C128*C484 ) /C82 ) + (  ( C104- (  ( C155*C200 ) /C82 )  ) -C440 ) ;
    double C508 =  (  ( C131*C484 ) /C82 ) - (  ( C155*C242 ) /C82 ) ;
    double C85 = bs[0];
    double C365 = C85*C364;
    double C240 =  (  ( C90*C365 ) /C82 ) + (  (  ( - (  ( C385*C365 ) /C82 )  ) /C82 ) - (  ( C131*C389 ) /C82 )  ) ;
    double C464 =  ( C240*ae ) /C82;
    double C439 =  ( ae* ( C365/C82 )  ) /C82;
    double C77 =  (  ( C86*C365 ) /C82 ) + (  (  ( - (  ( C377*C365 ) /C82 )  ) /C82 ) - (  ( C389*C124 ) /C82 )  ) ;
    double C198 =  (  ( C89*C365 ) /C82 ) + (  (  ( - (  ( C382*C365 ) /C82 )  ) /C82 ) - (  ( C128*C389 ) /C82 )  ) ;
    double C450 =  ( C198*ae ) /C82;
    double C156 =  (  (  ( C85*C107 ) /C82 ) + ( C135*C88 )  ) *C152;
    double C480 =  (  ( C131*C155 ) /C82 ) - (  ( C156*C242 ) /C82 ) ;
    gy[(Ai + 0) * matrix_size + Bi + 3] +=  (  ( C480*C122 ) - ( C508*C124 )  ) *cnst1;
    gy[(Ai + 0) * matrix_size + Bi + 1] +=  (  (  (  ( C200*C480 ) +C464 ) -C467 ) - ( C128*C508 )  ) *cnst1;
    double C409 = C156/C115;
    double cnst111 =  (  (  (  (  ( C155*C124 ) /C82 ) - (  ( C156*C122 ) /C82 )  ) *C122 ) -C409 ) - ( C124* (  (  ( C484*C124 ) /C82 ) - (  ( C155*C122 ) /C82 )  )  ) ;
    double gy000200 = cnst111-C472;
    double C491 =  (  ( C128*C155 ) /C82 ) + (  ( C439- (  ( C156*C200 ) /C82 )  ) -C104 ) ;
    double gy000020 =  (  (  (  ( C450+ ( C491*C200 )  ) -C409 ) -C453 ) - ( C128*C505 )  ) -C472;
    gy[(Ai + 0) * matrix_size + Bi + 2] +=  (  ( - ( 0.5*gy000200 )  ) - ( 0.5*gy000020 )  ) + (  (  (  ( C242*C480 ) -C409 ) - ( C131*C508 )  ) -C472 ) ;
    gy[(Ai + 0) * matrix_size + Bi + 4] +=  ( gy000200*cnst0 ) - ( cnst0*gy000020 ) ;
    gy[(Ai + 0) * matrix_size + Bi + 0] +=  (  ( C491*C122 ) - ( C124*C505 )  ) *cnst1;
    double C153 =  (  (  ( C85*C100 ) /C82 ) + ( C133*C88 )  ) *C152;
    double C404 = C153/C115;
    double C475 =  (  ( C154*C128 ) /C82 ) - (  ( C153*C200 ) /C82 ) ;
    gx[(Ai + 0) * matrix_size + Bi + 0] += cnst1* (  (  (  ( C475*C122 ) +C450 ) -C453 ) - ( C504*C124 )  ) ;
    double gx000020 =  (  (  ( C475*C200 ) -C404 ) - ( C128*C504 )  ) -C470;
    double cnst139 = C122* (  (  ( C154*C124 ) /C82 ) + (  ( C439- (  ( C153*C122 ) /C82 )  ) -C104 )  ) ;
    double cnst143 =  (  (  ( cnst139+ (  ( ae*C77 ) /C82 )  ) -C404 ) - (  ( C80*ae ) /C82 )  ) -cnst61;
    double gx000200 = cnst143-C470;
    gx[(Ai + 0) * matrix_size + Bi + 4] +=  ( cnst0*gx000200 ) - ( gx000020*cnst0 ) ;
    double C479 =  (  ( C154*C131 ) /C82 ) - (  ( C153*C242 ) /C82 ) ;
    gx[(Ai + 0) * matrix_size + Bi + 3] +=  (  (  (  ( C479*C122 ) +C464 ) -C467 ) - ( C507*C124 )  ) *cnst1;
    gx[(Ai + 0) * matrix_size + Bi + 1] +=  (  ( C479*C200 ) - ( C507*C128 )  ) *cnst1;
    gx[(Ai + 0) * matrix_size + Bi + 2] +=  (  (  (  ( C479*C242 ) -C404 ) - ( C507*C131 )  ) -C470 ) + (  ( - ( 0.5*gx000200 )  ) - ( 0.5*gx000020 )  ) ;
    double C158 =  (  ( C136*C88 ) + (  ( C85*C109 ) /C82 )  ) *C152;
    double C413 = C158/C115;
    double cnst160 =  (  (  (  (  ( C157*C124 ) /C82 ) - (  ( C158*C122 ) /C82 )  ) *C122 ) -C413 ) - ( C124* (  (  ( C124*C485 ) /C82 ) - (  ( C157*C122 ) /C82 )  )  ) ;
    double gz000200 = cnst160-C474;
    double C496 =  (  ( C439- (  ( C158*C242 ) /C82 )  ) -C104 ) + (  ( C131*C157 ) /C82 ) ;
    gz[(Ai + 0) * matrix_size + Bi + 1] +=  (  ( C496*C200 ) - ( C128*C509 )  ) *cnst1;
    gz[(Ai + 0) * matrix_size + Bi + 3] +=  (  ( C496*C122 ) - ( C509*C124 )  ) *cnst1;
    double C478 =  (  ( C128*C157 ) /C82 ) - (  ( C158*C200 ) /C82 ) ;
    double gz000020 =  (  (  ( C478*C200 ) -C413 ) - ( C128*C506 )  ) -C474;
    gz[(Ai + 0) * matrix_size + Bi + 2] +=  (  ( - ( 0.5*gz000200 )  ) - ( 0.5*gz000020 )  ) + (  (  (  (  (  ( C496*C242 ) +C464 ) -C413 ) -C467 ) - ( C131*C509 )  ) -C474 ) ;
    gz[(Ai + 0) * matrix_size + Bi + 4] +=  ( gz000200*cnst0 ) - ( gz000020*cnst0 ) ;
    gz[(Ai + 0) * matrix_size + Bi + 0] +=  (  ( C478*C122 ) - ( C124*C506 )  ) *cnst1;
}
