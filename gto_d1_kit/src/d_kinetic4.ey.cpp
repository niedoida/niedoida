/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void kinetic_gradient_10(
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
    double C1415 = xAB*be;
    double C1418 = be*zAB;
    double cnst1 =  ( 6*be ) *2;
    double C1413 = be+ae;
    double C1435 = std::sqrt( ( Pi/C1413 ) );
    double C1490 = be*C1435;
    double C1442 = xAB*C1490;
    double C1408 = - ( C1442/C1413 ) ;
    double C1412 = C1408*ae;
    double C1524 = C1412*2;
    double cnst4 = C1435*C1408;
    double C1488 = zAB*C1490;
    double C1411 = - ( C1488/C1413 ) ;
    double cnst7 = C1411*C1435;
    double C1420 = C1411*ae;
    double C1430 = C1420*2;
    double cnst9 = C1435*C1435;
    double C1427 = std::pow(C1413 , 2);
    double C1421 = 2.*C1413;
    double C1500 =  ( - ( C1490*2 )  ) /C1421;
    double C1529 = C1500- (  (  ( C1420*C1418 ) *2 ) /C1413 ) ;
    double C1535 = ae*C1529;
    double C1444 = C1500- (  (  ( C1415*C1412 ) *2 ) /C1413 ) ;
    double C1449 = C1444*ae;
    double C1552 =  (  (  ( - (  ( C1524*be ) *4 )  ) /C1421 ) - (  (  ( C1415*C1449 ) *2 ) /C1413 )  ) *ae;
    double cnst18 = C1552*2;
    double C1556 = -cnst18;
    double cnst24 =  (  (  ( cnst18*C1415 ) /C1413 ) - (  ( - ( cnst1*C1449 )  ) /C1421 )  ) * ( std::pow(C1435 , 2) ) ;
    double C1434 = 1/C1421;
    double C1554 =  (  (  ( - ( 4* ( be*C1430 )  )  ) /C1421 ) - (  (  ( C1418*C1535 ) *2 ) /C1413 )  ) *ae;
    double cnst26 = C1554*2;
    double cnst31 =  ( cnst9* (  (  ( cnst26*C1418 ) /C1413 ) - (  ( - ( cnst1*C1535 )  ) /C1421 )  )  ) /2.0;
    double C1555 = -cnst26;
    double C1416 = std::pow(ae , 2);
    double C1461 =  ( ae- (  ( C1416* (  ( std::pow( ( C1415/C1413 )  , 2) ) +C1434 )  ) *2 )  ) *C1435;
    double C1464 =  (  (  ( - (  ( C1442*ae ) *2 )  ) *be ) /C1427 ) - (  ( C1415*C1461 ) /C1413 ) ;
    double C1459 =  ( ae- (  ( C1416* (  ( std::pow( ( C1418/C1413 )  , 2) ) +C1434 )  ) *2 )  ) *C1435;
    double C1503 =  (  ( be* ( - (  ( C1488*ae ) *2 )  )  ) /C1427 ) - (  ( C1418*C1459 ) /C1413 ) ;
    double C1417 = be*yAB;
    double C1458 = C1435* ( ae- (  (  (  ( std::pow( ( C1417/C1413 )  , 2) ) +C1434 ) *C1416 ) *2 )  ) ;
    double gx100000 =  (  ( C1435*C1444 ) *C1459 ) + (  ( cnst24/2.0 ) + ( C1435* ( C1444*C1458 )  )  ) ;
    gx[(Ai + 0) * matrix_size + Bi + 0] += cc*gx100000;
    double cnst44 = C1411* ( C1524*C1458 ) ;
    gx[(Ai + 2) * matrix_size + Bi + 0] += cc* (  (  ( C1524*C1435 ) *C1503 ) + ( cnst44+ (  ( cnst7*C1556 ) /2.0 )  )  ) ;
    gz[(Ai + 0) * matrix_size + Bi + 0] += cc* (  (  ( cnst4*C1555 ) /2.0 ) + (  ( C1430* ( C1435*C1464 )  ) +cnst44 )  ) ;
    gz[(Ai + 2) * matrix_size + Bi + 0] += cc* ( cnst31+ (  (  ( C1435*C1461 ) *C1529 ) + (  ( C1435*C1458 ) *C1529 )  )  ) ;
    double C1468 = yAB*C1490;
    double C1410 = - ( C1468/C1413 ) ;
    double cnst52 =  ( C1524*C1410 ) *C1459;
    double C1419 = ae*C1410;
    double C1482 = C1500- (  (  ( C1417*C1419 ) *2 ) /C1413 ) ;
    double C1484 = C1482*ae;
    double C1429 = C1419*2;
    double C1550 =  (  (  ( - ( 4* ( C1429*be )  )  ) /C1421 ) - (  (  ( C1417*C1484 ) *2 ) /C1413 )  ) *ae;
    double cnst60 = C1550*2;
    double C1553 = -cnst60;
    double cnst69 =  ( cnst9* (  (  ( C1417*cnst60 ) /C1413 ) - (  ( - ( cnst1*C1484 )  ) /C1421 )  )  ) /2.0;
    gy[(Ai + 1) * matrix_size + Bi + 0] += cc* (  (  ( C1435* ( C1482*C1461 )  ) +cnst69 ) + (  ( C1482*C1435 ) *C1459 )  ) ;
    gy[(Ai + 0) * matrix_size + Bi + 0] += cc* (  (  (  ( C1429*C1464 ) *C1435 ) + (  ( C1553*cnst4 ) /2.0 )  ) +cnst52 ) ;
    double cnst77 =  ( C1429*C1461 ) *C1411;
    gy[(Ai + 2) * matrix_size + Bi + 0] += cc* (  ( cnst77+ (  ( C1553*cnst7 ) /2.0 )  ) + (  ( C1429*C1435 ) *C1503 )  ) ;
    double cnst79 = C1435*C1410;
    double C1483 =  (  ( be* ( - (  ( C1468*ae ) *2 )  )  ) /C1427 ) - (  ( C1417*C1458 ) /C1413 ) ;
    gx[(Ai + 1) * matrix_size + Bi + 0] += cc* (  (  ( C1435* ( C1524*C1483 )  ) + (  ( cnst79*C1556 ) /2.0 )  ) +cnst52 ) ;
    gz[(Ai + 1) * matrix_size + Bi + 0] += cc* (  ( cnst77+ ( C1430* ( C1435*C1483 )  )  ) + (  ( cnst79*C1555 ) /2.0 )  ) ;
}
