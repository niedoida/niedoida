/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void kinetic_gradient_03(
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
    double C977 = ae*zAB;
    double C745 = xAB*ae;
    double cnst1 = 4*ae;
    double C880 = yAB*ae;
    double C750 = std::pow(ae , 2);
    double cnst3 = std::sqrt( ( 5.0/8.0 ) );
    double cnst5 = std::sqrt( ( 45.0/8.0 ) );
    double cnst7 = std::sqrt( ( 3.0/8.0 ) );
    double cnst8 = std::sqrt(7.5);
    double cnst9 = std::sqrt(6.0);
    double cnst10 = 6*ae;
    double cnst11 =  ( std::sqrt(15.0) ) *cc;
    double cnst13 = std::sqrt( ( 45./8.0 ) );
    double C751 = be*yAB;
    double C746 = be+ae;
    double C769 = std::pow(C746 , 2);
    double C785 = C769*2.;
    double C759 = 2.*C746;
    double C777 = 1/C759;
    double C778 = std::sqrt( ( Pi/C746 ) );
    double C832 = C778* ( ae- (  (  (  ( std::pow( ( C751/C746 )  , 2) ) +C777 ) *C750 ) *2 )  ) ;
    double cnst15 = C778*2;
    double C983 = be*C778;
    double C755 =  ( - (  ( C983*yAB ) /C746 )  ) *ae;
    double cnst19 = cnst15*C755;
    double C771 = C755*2;
    double C756 = ae* ( - (  ( C983*zAB ) /C746 )  ) ;
    double C772 = C756*2;
    double cnst22 = C778*C772;
    double C744 = ae* ( - (  ( C983*xAB ) /C746 )  ) ;
    double cnst25 = C744*cnst15;
    double C760 = C744*2;
    double C1015 =  ( - ( C983*2 )  ) /C759;
    double C928 = ae* ( C1015- (  (  ( C751*C755 ) *2 ) /C746 )  ) ;
    double C958 =  (  (  ( C771*ae ) *4. ) /C759 ) + (  (  ( C928*C880 ) *2 ) /C746 ) ;
    double C935 = C928*2;
    double C962 =  (  (  ( - (  ( C771*be ) *4 )  ) /C759 ) - (  (  ( C928*C751 ) *2 ) /C746 )  ) *ae;
    double C1134 = C962*2;
    double C1130 = -C1134;
    double C970 =  (  ( 6.* ( C935*ae )  ) /C759 ) + (  (  ( C880*C962 ) *2 ) /C746 ) ;
    double C1157 =  (  ( C880*C970 ) /C746 ) + (  (  ( 6* ( C958*ae )  ) +C1134 ) /C759 ) ;
    double C890 = C880*C778;
    double C878 = C890/C746;
    double cnst32 = C878*C778;
    double C929 =  (  ( C880*C832 ) /C746 ) + (  (  (  ( be*C890 ) *2 ) *ae ) /C769 ) ;
    double C903 = C890*2.;
    double C807 = C745* ( C778*2. ) ;
    double C795 = C778*C745;
    double C737 = C795/C746;
    double cnst40 = C778*C737;
    double C1002 =  ( 2.* ( C778*ae )  ) /C759;
    double C798 = C1002+ (  (  ( C744*C745 ) *2 ) /C746 ) ;
    double C830 =  (  (  (  ( ae*C737 ) *2 ) +C760 ) /C759 ) + (  ( C745*C798 ) /C746 ) ;
    double C1018 =  (  (  ( C977*C756 ) *2 ) /C746 ) +C1002;
    double C921 =  (  (  ( C880*C755 ) *2 ) /C746 ) +C1002;
    double cnst63 =  ( cnst10* (  (  ( C935+ ( cnst1*C921 )  ) /C759 ) + (  ( C880*C958 ) /C746 )  )  ) + ( C970*2 ) ;
    double C940 =  (  ( C771+ (  ( C878*ae ) *2 )  ) /C759 ) + (  ( C880*C921 ) /C746 ) ;
    double C987 = C977*C778;
    double C975 = C987/C746;
    double C1037 =  (  (  (  ( ae*C975 ) *2 ) +C772 ) /C759 ) + (  ( C977*C1018 ) /C746 ) ;
    double cnst73 = C778*C975;
    double C1000 = C987*2.;
    double C797 = C778/C759;
    double C920 =  (  ( C778* ( std::pow(C880 , 2) )  ) /C769 ) +C797;
    double cnst79 = C778*C920;
    double C961 =  (  ( C880*C940 ) /C746 ) + (  (  ( C921*2 ) + (  ( C920*ae ) *2 )  ) /C759 ) ;
    double C939 =  (  ( C880*C920 ) /C746 ) + ( C903/C785 ) ;
    double cnst82 = C939*C778;
    double C959 =  (  ( ae* (  (  ( be*C920 ) *2 ) -C778 )  ) /C746 ) + (  (  ( C880*C929 ) /C746 ) + ( C832/C759 )  ) ;
    double C968 =  (  (  (  ( C939*be ) *2 ) - ( C903/C746 )  ) *ae ) + (  ( C880*C959 ) +C929 ) ;
    double C1017 =  (  (  ( std::pow(C977 , 2) ) *C778 ) /C769 ) +C797;
    double cnst100 = C778*C1017;
    double C1036 =  ( C1000/C785 ) + (  ( C977*C1017 ) /C746 ) ;
    double cnst106 = C778*C1036;
    double C1058 =  (  ( C1037*C977 ) /C746 ) + (  (  (  ( C1017*ae ) *2 ) + ( C1018*2 )  ) /C759 ) ;
    double C816 = C797+ (  ( C778* ( std::pow(C745 , 2) )  ) /C769 ) ;
    double C848 =  ( C807/C785 ) + (  ( C816*C745 ) /C746 ) ;
    double cnst117 = C778*C848;
    double cnst126 = C778*C816;
    double C856 =  (  (  (  ( C816*ae ) *2 ) + ( C798*2 )  ) /C759 ) + (  ( C745*C830 ) /C746 ) ;
    double cnst135 = C778*C778;
    double C754 = be*zAB;
    double C836 = C778* ( ae- (  (  (  ( std::pow( ( C754/C746 )  , 2) ) +C777 ) *C750 ) *2 )  ) ;
    double C1026 =  (  (  (  ( be*C987 ) *2 ) *ae ) /C769 ) + (  ( C977*C836 ) /C746 ) ;
    double C1056 =  (  ( C836/C759 ) + (  ( C977*C1026 ) /C746 )  ) + (  (  (  ( 2* ( be*C1017 )  ) -C778 ) *ae ) /C746 ) ;
    double C1065 =  (  (  (  ( be*C1036 ) *2 ) - ( C1000/C746 )  ) *ae ) + (  ( C977*C1056 ) +C1026 ) ;
    double C1142 =  ( C1015- (  (  ( C754*C756 ) *2 ) /C746 )  ) *ae;
    double C1055 =  (  (  ( C772*ae ) *4. ) /C759 ) + (  (  ( C1142*C977 ) *2 ) /C746 ) ;
    double C1160 =  (  (  ( - ( 4* ( be*C772 )  )  ) /C759 ) - (  (  ( C754*C1142 ) *2 ) /C746 )  ) *ae;
    double C1137 = C1160*2;
    double C1161 = -C1137;
    double C1032 = C1142*2;
    double cnst173 =  (  (  ( C977*C1055 ) /C746 ) + (  (  ( cnst1*C1018 ) +C1032 ) /C759 )  ) *cnst10;
    double C1067 =  (  (  ( C1160*C977 ) *2 ) /C746 ) + (  (  ( C1032*ae ) *6. ) /C759 ) ;
    double C1158 =  (  ( C977*C1067 ) /C746 ) + (  (  ( 6* ( C1055*ae )  ) +C1137 ) /C759 ) ;
    double cnst189 =  ( cnst135* (  (  ( C977*C1158 ) /C746 ) + (  (  ( C1067*2 ) +cnst173 ) /C759 )  )  ) /2.0;
    double C753 = xAB*be;
    double C812 =  ( C1015- (  ( 2* ( C744*C753 )  ) /C746 )  ) *ae;
    double C857 =  (  (  ( - (  ( be*C760 ) *4 )  ) /C759 ) - (  ( 2* ( C753*C812 )  ) /C746 )  ) *ae;
    double C1128 = C857*2;
    double C1132 = -C1128;
    double gx000012 =  (  ( C878*C760 ) *C1056 ) + (  (  ( C1132* ( C878*C1017 )  ) /2.0 ) + (  ( C760*C929 ) *C1017 )  ) ;
    double gx000003 =  (  (  ( C1132*cnst106 ) /2.0 ) + ( C1036* ( C760*C832 )  )  ) + (  ( C1065*cnst25 ) /C746 ) ;
    double gx000021 =  (  ( C920*C760 ) *C1026 ) + (  ( C975* ( C959*C760 )  ) + (  (  ( C920*C975 ) *C1132 ) /2.0 )  ) ;
    double gx000030 =  (  ( C939*C760 ) *C836 ) + (  (  ( C968*cnst25 ) /C746 ) + (  ( C1132*cnst82 ) /2.0 )  ) ;
    double C823 = C812*2;
    double C869 =  (  (  ( C745*C857 ) *2 ) /C746 ) + (  (  ( C823*ae ) *6. ) /C759 ) ;
    double gx000102 =  (  ( C1017* ( C798*C832 )  ) - (  ( C869*cnst100 ) /2.0 )  ) + (  ( C778*C798 ) *C1056 ) ;
    double gx000111 =  (  (  ( C798*C929 ) *C975 ) - (  (  ( C878*C975 ) *C869 ) /2.0 )  ) + (  ( C878*C798 ) *C1026 ) ;
    gx[(Ai + 0) * matrix_size + Bi + 1] += cnst11*gx000111;
    double gx000120 =  (  ( C920*C798 ) *C836 ) + (  ( C778* ( C959*C798 )  ) - (  ( C869*cnst79 ) /2.0 )  ) ;
    double C852 =  (  (  ( C745*C812 ) *2 ) /C746 ) + (  (  ( C760*ae ) *4. ) /C759 ) ;
    double cnst227 =  (  (  (  ( C823+ ( cnst1*C798 )  ) /C759 ) + (  ( C745*C852 ) /C746 )  ) *cnst10 ) + ( C869*2 ) ;
    double C1155 =  (  ( C1128+ (  ( C852*ae ) *6 )  ) /C759 ) + (  ( C745*C869 ) /C746 ) ;
    double cnst233 =  (  (  (  ( C1155*C745 ) /C746 ) + ( cnst227/C759 )  ) * ( std::pow(C778 , 2) )  ) /2.0;
    double gx000300 =  (  ( C778* ( C856*C832 )  ) -cnst233 ) + (  ( C856*C778 ) *C836 ) ;
    gx[(Ai + 0) * matrix_size + Bi + 4] += cc* (  ( gx000102*cnst9 ) - (  ( cnst7*gx000120 ) + ( cnst7*gx000300 )  )  ) ;
    gx[(Ai + 0) * matrix_size + Bi + 6] += cc* (  ( cnst5*gx000120 ) + ( gx000300*cnst3 )  ) ;
    double gx000210 =  (  ( C778* ( C929*C830 )  ) - (  ( C1155*cnst32 ) /2.0 )  ) + (  ( C878*C830 ) *C836 ) ;
    gx[(Ai + 0) * matrix_size + Bi + 0] += cc* (  ( gx000210*cnst13 ) - ( gx000030*cnst3 )  ) ;
    gx[(Ai + 0) * matrix_size + Bi + 2] += - ( cc* (  ( cnst7*gx000030 ) + (  ( gx000012*cnst9 ) + ( gx000210*cnst7 )  )  )  ) ;
    double gx000201 =  (  ( C778*C830 ) *C1026 ) + (  ( C975* ( C830*C832 )  ) - (  ( C1155*cnst73 ) /2.0 )  ) ;
    gx[(Ai + 0) * matrix_size + Bi + 5] += cc* (  ( cnst8*gx000201 ) - ( cnst8*gx000021 )  ) ;
    double C837 = C778* ( ae- (  (  (  ( std::pow( ( C753/C746 )  , 2) ) +C777 ) *C750 ) *2 )  ) ;
    double gz000012 =  (  ( C1037* ( C837*C878 )  ) + ( C1037* ( C778*C929 )  )  ) - (  ( cnst32*C1158 ) /2.0 ) ;
    double gy000003 =  (  (  ( C1130*cnst106 ) /2.0 ) + ( C1036* ( C837*C771 )  )  ) + (  ( C1065*cnst19 ) /C746 ) ;
    double gy000012 =  ( C1056* ( C778*C921 )  ) + (  ( C1017* ( C837*C921 )  ) - (  ( cnst100*C970 ) /2.0 )  ) ;
    double gy000021 =  (  (  ( C837*C940 ) *C975 ) - (  ( C1157*cnst73 ) /2.0 )  ) + (  ( C778*C940 ) *C1026 ) ;
    double C858 =  (  (  (  ( C795*be ) *2 ) *ae ) /C769 ) + (  ( C837*C745 ) /C746 ) ;
    double gz000111 =  (  (  ( C878*C858 ) *C1018 ) + (  ( C737*C929 ) *C1018 )  ) - (  (  ( C878*C737 ) *C1067 ) /2.0 ) ;
    gz[(Ai + 0) * matrix_size + Bi + 1] += gz000111*cnst11;
    double gy000111 =  (  ( C921*C737 ) *C1026 ) + (  ( C975* ( C921*C858 )  ) - (  (  ( C975*C737 ) *C970 ) /2.0 )  ) ;
    gy[(Ai + 0) * matrix_size + Bi + 1] += cnst11*gy000111;
    double gz000102 =  (  ( C1037* ( C778*C858 )  ) + ( C1037* ( C737*C832 )  )  ) - (  ( C1158*cnst40 ) /2.0 ) ;
    double gy000120 =  ( C836* ( C940*C737 )  ) + (  ( C778* ( C940*C858 )  ) - (  ( C1157*cnst40 ) /2.0 )  ) ;
    double gy000102 =  (  (  ( C1130* ( C1017*C737 )  ) /2.0 ) + ( C1017* ( C771*C858 )  )  ) + (  ( C771*C737 ) *C1056 ) ;
    double C870 =  (  ( ae* (  (  ( be*C816 ) *2 ) -C778 )  ) /C746 ) + (  (  ( C745*C858 ) /C746 ) + ( C837/C759 )  ) ;
    double gz000210 =  (  ( C772* ( C816*C929 )  ) + ( C772* ( C870*C878 )  )  ) + (  (  ( C878*C816 ) *C1161 ) /2.0 ) ;
    double gy000201 =  ( C1026* ( C771*C816 )  ) + (  ( C975* ( C870*C771 )  ) + (  (  ( C816*C975 ) *C1130 ) /2.0 )  ) ;
    gy[(Ai + 0) * matrix_size + Bi + 5] += cc* (  ( cnst8*gy000201 ) - ( gy000021*cnst8 )  ) ;
    double C873 =  (  ( C870*C745 ) +C858 ) + (  (  (  ( be*C848 ) *2 ) - ( C807/C746 )  ) *ae ) ;
    double gz000300 =  (  ( cnst117*C1161 ) /2.0 ) + (  (  ( cnst22*C873 ) /C746 ) + (  ( C848*C832 ) *C772 )  ) ;
    double gy000300 =  (  (  ( C873*cnst19 ) /C746 ) + (  ( cnst117*C1130 ) /2.0 )  ) + (  ( C771*C848 ) *C836 ) ;
    gy[(Ai + 0) * matrix_size + Bi + 6] += cc* (  ( gy000120*cnst5 ) + ( gy000300*cnst3 )  ) ;
    gy[(Ai + 0) * matrix_size + Bi + 4] += cc* (  ( cnst9*gy000102 ) - (  ( gy000300*cnst7 ) + ( gy000120*cnst7 )  )  ) ;
    double gy000210 =  (  ( C816*C921 ) *C836 ) + (  (  ( C870*C921 ) *C778 ) - (  ( cnst126*C970 ) /2.0 )  ) ;
    double gz000201 =  (  (  ( C816*C832 ) *C1018 ) + (  ( C870*C778 ) *C1018 )  ) - (  ( cnst126*C1067 ) /2.0 ) ;
    double gz000120 =  (  (  ( C920*C858 ) *C772 ) + (  ( C959*C737 ) *C772 )  ) + (  (  ( C920*C737 ) *C1161 ) /2.0 ) ;
    gz[(Ai + 0) * matrix_size + Bi + 6] += cc* (  ( gz000300*cnst3 ) + ( gz000120*cnst5 )  ) ;
    gz[(Ai + 0) * matrix_size + Bi + 4] += cc* (  ( gz000102*cnst9 ) - (  ( cnst7*gz000300 ) + ( gz000120*cnst7 )  )  ) ;
    double cnst335 =  ( C778* ( C837*C961 )  ) - (  (  (  ( cnst63/C759 ) + (  ( C880*C1157 ) /C746 )  ) *cnst135 ) /2.0 ) ;
    double gy000030 = cnst335+ (  ( C778*C961 ) *C836 ) ;
    gy[(Ai + 0) * matrix_size + Bi + 2] += - ( cc* (  (  ( gy000012*cnst9 ) + ( cnst7*gy000210 )  ) + ( gy000030*cnst7 )  )  ) ;
    gy[(Ai + 0) * matrix_size + Bi + 0] +=  (  ( gy000210*cnst13 ) - ( gy000030*cnst3 )  ) *cc;
    double gz000030 =  (  ( C1161*cnst82 ) /2.0 ) + (  (  ( C968*cnst22 ) /C746 ) + (  ( C939*C837 ) *C772 )  ) ;
    gz[(Ai + 0) * matrix_size + Bi + 0] += cc* (  ( gz000210*cnst13 ) - ( cnst3*gz000030 )  ) ;
    gz[(Ai + 0) * matrix_size + Bi + 2] += - ( cc* (  (  ( gz000210*cnst7 ) + ( gz000012*cnst9 )  ) + ( cnst7*gz000030 )  )  ) ;
    double gz000021 =  (  (  ( C778*C959 ) *C1018 ) + (  ( C837*C920 ) *C1018 )  ) - (  ( C1067*cnst79 ) /2.0 ) ;
    gz[(Ai + 0) * matrix_size + Bi + 5] += cc* (  ( cnst8*gz000201 ) - ( gz000021*cnst8 )  ) ;
    double cnst356 =  (  (  ( C1058* ( C778*C832 )  ) + (  ( C837*C778 ) *C1058 )  ) -cnst189 ) - ( 1.5*gz000201 ) ;
    gz[(Ai + 0) * matrix_size + Bi + 3] +=  ( cnst356- ( gz000021*1.5 )  ) *cc;
    gy[(Ai + 0) * matrix_size + Bi + 3] += cc* (  ( gy000003- ( gy000201*1.5 )  ) - ( gy000021*1.5 )  ) ;
    gx[(Ai + 0) * matrix_size + Bi + 3] +=  (  ( gx000003- ( gx000201*1.5 )  ) - ( 1.5*gx000021 )  ) *cc;
}
