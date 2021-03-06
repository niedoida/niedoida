/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void overlap_gradient_22(
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
    double cnst0 = std::sqrt(0.5625);
    double cnst1 = std::sqrt(0.1875);
    double cnst2 = std::sqrt(2.25);
    double C5822 = xAB*ae;
    double C5851 = ae*zAB;
    double C5844 = yAB*ae;
    double cnst6 = ae*2;
    double cnst7 = std::sqrt(0.75);
    double cnst9 = std::sqrt(3.0);
    double cnst10 = cc* ( std::sqrt(9.) ) ;
    double C5898 = be*zAB;
    double C5821 = xAB*be;
    double C5819 = be+ae;
    double C6043 = std::sqrt( ( Pi/C5819 ) );
    double C5842 =  ( C5844*C6043 ) /C5819;
    double C5849 =  ( C5851*C6043 ) /C5819;
    double C5987 = C5821*C6043;
    double cnst18 = C5987/C5819;
    double C5808 = -cnst18;
    double C5817 = ae*C5808;
    double C5823 = C5817*2;
    double C6015 = C5898*C6043;
    double cnst24 = C6015/C5819;
    double C5816 = -cnst24;
    double C5850 = ae*C5816;
    double C5906 = C5850*2;
    double C6046 =  ( C5822*C6043 ) /C5819;
    double C5825 = 2.*C5819;
    double C6044 = C6043/C5825;
    double C5917 =  ( - (  ( be*C6043 ) *2 )  ) /C5825;
    double C5834 = C5917- (  (  ( C5821*C5817 ) *2 ) /C5819 ) ;
    double C5837 =  (  ( C5823- (  ( be*C5808 ) *2 )  ) /C5825 ) - (  ( C5821*C5834 ) /C5819 ) ;
    double gx200011 =  ( C5837*C5842 ) *C5849;
    double C6114 =  (  ( C5817*4. ) /C5825 ) + (  ( C5822*C5834 ) /C5819 ) ;
    gx[(Ai + 3) * matrix_size + Bi + 0] +=  (  ( C5842*C6114 ) *C5816 ) *cnst10;
    double C6080 = C5917- (  (  ( C5850*C5898 ) *2 ) /C5819 ) ;
    double C6136 =  (  ( C5906- (  ( be*C5816 ) *2 )  ) /C5825 ) - (  ( C5898*C6080 ) /C5819 ) ;
    double C6127 =  (  ( C5850*4. ) /C5825 ) + (  ( C5851*C6080 ) /C5819 ) ;
    gz[(Ai + 3) * matrix_size + Bi + 1] +=  (  ( C5842*C5808 ) *C6127 ) *cnst10;
    double C6116 =  (  ( C6043*ae ) *2. ) /C5825;
    double C6133 =  (  (  ( C5817*C5822 ) *2 ) /C5819 ) +C6116;
    double C6161 =  (  ( C5822*C6133 ) /C5819 ) + (  (  (  ( C6046*ae ) *2 ) +C5823 ) /C5825 ) ;
    double C6131 =  (  (  ( C5851*C5850 ) *2 ) /C5819 ) +C6116;
    double C6160 =  (  ( C5851*C6131 ) /C5819 ) + (  (  (  ( ae*C5849 ) *2 ) +C5906 ) /C5825 ) ;
    double C5980 = std::pow(C5819 , 2);
    double C5897 = C6044+ (  (  ( std::pow(C5898 , 2) ) *C6043 ) /C5980 ) ;
    double gx002200 = C5897* ( C6161*C6043 ) ;
    double C6146 =  (  ( C5851*C6136 ) /C5819 ) + (  (  (  ( C5897*ae ) *2 ) + ( C6080*2 )  ) /C5825 ) ;
    double C6030 = C5980*2.;
    double C6056 =  (  ( C5897*C5851 ) /C5819 ) + (  ( - ( C6015*2. )  ) /C6030 ) ;
    double cnst64 =  (  ( C5851*C6146 ) /C5819 ) + (  (  ( C6056*cnst6 ) + (  ( C6127*2 ) +C6136 )  ) /C5825 ) ;
    double C5841 = C6044+ (  (  ( std::pow(C5844 , 2) ) *C6043 ) /C5980 ) ;
    double gz101020 =  ( C5808*C5841 ) *C6080;
    double gx200020 =  ( C5837*C5841 ) *C6043;
    double cnst73 = gx200020*cnst1;
    double gx101020 =  ( C5834*C5841 ) *C5816;
    double gz002020 =  ( C6043*C5841 ) *C6136;
    double gx002020 = C5897* ( C5823*C5841 ) ;
    double C5810 = C6044+ (  (  ( std::pow(C5821 , 2) ) *C6043 ) /C5980 ) ;
    double gz200020 = C5906* ( C5810*C5841 ) ;
    double cnst84 = gz200020*cnst1;
    double gz200002 =  ( C5810*C6043 ) *C6160;
    double gz200011 =  ( C5842*C5810 ) *C6131;
    double C6064 = C5810*ae;
    double C6141 =  (  ( C5837*C5822 ) /C5819 ) + (  (  ( C6064*2 ) + ( C5834*2 )  ) /C5825 ) ;
    double gx200101 =  ( C6141*C6043 ) *C5849;
    double gx200110 =  ( C6141*C5842 ) *C6043;
    double C5811 =  (  ( - ( C5821* ( C6043*2. )  )  ) /C6030 ) + (  ( C6064*xAB ) /C5819 ) ;
    double gz200101 = C6131* ( C6043*C5811 ) ;
    double gz200110 = C5906* ( C5842*C5811 ) ;
    double cnst111 =  (  (  ( cnst6*C5811 ) + ( C5837+ ( C6114*2 )  )  ) /C5825 ) + (  ( C6141*C5822 ) /C5819 ) ;
    double gx200200 = cnst111* ( std::pow(C6043 , 2) ) ;
    double cnst112 = gx200200*cnst1;
    double C6057 = C6044- (  ( C5851*C6015 ) /C5980 ) ;
    double C6167 =  (  ( C5851*C6127 ) /C5819 ) + (  (  ( C6080+C6131 ) + (  ( C6057*ae ) *2 )  ) /C5825 ) ;
    double C5951 =  (  ( C5851*C6057 ) /C5819 ) + (  ( C5849-cnst24 ) /C5825 ) ;
    double C5904 =  (  ( C5897+ ( C6057*2 )  ) /C5825 ) + (  ( C5851*C6056 ) /C5819 ) ;
    gx[(Ai + 3) * matrix_size + Bi + 1] +=  ( C6057* ( C5842*C5834 )  ) *cnst10;
    gx[(Ai + 3) * matrix_size + Bi + 3] +=  (  ( C6114*C6043 ) *C6057 ) *cnst10;
    double C5863 = C6044+ (  (  ( std::pow(C5822 , 2) ) *C6043 ) /C5980 ) ;
    double gz002200 =  ( C5863*C6043 ) *C6136;
    double C5848 = C6044+ (  ( C6043* ( std::pow(C5851 , 2) )  ) /C5980 ) ;
    double gx200002 =  ( C5837*C6043 ) *C5848;
    double C6053 = C6044- (  ( C5822*C5987 ) /C5980 ) ;
    double C5814 =  (  ( C5822*C5811 ) /C5819 ) + (  ( C5810+ ( C6053*2 )  ) /C5825 ) ;
    double gz200200 = C5906* ( C5814*C6043 ) ;
    double cnst140 = gz200200*cnst1;
    gz[(Ai + 3) * matrix_size + Bi + 3] +=  (  ( C6053*C6043 ) *C6127 ) *cnst10;
    double C5932 =  (  ( C6046-cnst18 ) /C5825 ) + (  ( C6053*C5822 ) /C5819 ) ;
    double gz101200 = C6080* ( C5932*C6043 ) ;
    gz[(Ai + 3) * matrix_size + Bi + 4] +=  (  ( cnst2*gz101200 ) - ( gz101020*cnst2 )  ) *cc;
    double cnst152 =  ( cnst9* (  ( C6043*C5808 ) *C6167 )  ) - (  ( cnst7*gz101200 ) + ( cnst7*gz101020 )  ) ;
    gz[(Ai + 3) * matrix_size + Bi + 2] += cnst152*cc;
    double C6165 =  (  (  ( C5834+C6133 ) + (  ( C6053*ae ) *2 )  ) /C5825 ) + (  ( C5822*C6114 ) /C5819 ) ;
    double gx101200 =  ( C6165*C6043 ) *C5816;
    gx[(Ai + 3) * matrix_size + Bi + 4] += cc* (  ( cnst2*gx101200 ) - ( cnst2*gx101020 )  ) ;
    double cnst158 =  ( cnst9* ( C5951* ( C6043*C5834 )  )  ) - (  ( cnst7*gx101020 ) + ( cnst7*gx101200 )  ) ;
    gx[(Ai + 3) * matrix_size + Bi + 2] += cc*cnst158;
    gz[(Ai + 3) * matrix_size + Bi + 0] +=  (  ( C6053*C5842 ) *C6080 ) *cnst10;
    double C5864 = be*yAB;
    double C5862 = C6044+ (  (  ( std::pow(C5864 , 2) ) *C6043 ) /C5980 ) ;
    double gz020200 = C5906* ( C5862*C5863 ) ;
    double cnst163 = gz020200*cnst1;
    double gz020002 = C6160* ( C5862*C6043 ) ;
    double gz020101 =  ( C6046*C5862 ) *C6131;
    gz[(Ai + 4) * matrix_size + Bi + 3] += cc* (  ( gz200101*cnst2 ) - ( cnst2*gz020101 )  ) ;
    double cnst174 =  ( cnst9* ( C6146* ( C6046*C6043 )  )  ) - (  ( cnst7*gz020101 ) + ( cnst7*gz200101 )  ) ;
    gz[(Ai + 2) * matrix_size + Bi + 3] += cc*cnst174;
    double gx020200 =  ( C6161*C5862 ) *C6043;
    double cnst179 = gx020200*cnst1;
    double gx020002 =  ( C5862*C5823 ) *C5848;
    double gx020101 =  ( C5862*C6133 ) *C5849;
    double cnst187 =  ( cnst9* ( C6056* ( C6043*C6133 )  )  ) - (  ( cnst7*gx020101 ) + ( cnst7*gx200101 )  ) ;
    gx[(Ai + 2) * matrix_size + Bi + 3] += cc*cnst187;
    gx[(Ai + 4) * matrix_size + Bi + 3] += cc* (  ( cnst2*gx200101 ) - ( cnst2*gx020101 )  ) ;
    double C6005 = C5864*C6043;
    double cnst190 = C6005/C5819;
    double C5815 = -cnst190;
    double C5843 = C5815*ae;
    double C5882 = C5917- (  ( 2* ( C5864*C5843 )  ) /C5819 ) ;
    double gy011200 = C5816* ( C5882*C5863 ) ;
    gy[(Ai + 0) * matrix_size + Bi + 3] +=  (  ( C6053*C5882 ) *C5849 ) *cnst10;
    double gy110200 =  ( C5882*C5932 ) *C6043;
    gy[(Ai + 1) * matrix_size + Bi + 3] +=  ( C6057* ( C6046*C5882 )  ) *cnst10;
    double C6129 = C6116+ (  (  ( C5844*C5843 ) *2 ) /C5819 ) ;
    double gy200011 = C5849* ( C5810*C6129 ) ;
    gy[(Ai + 3) * matrix_size + Bi + 0] +=  (  ( C6053*C6129 ) *C5816 ) *cnst10;
    double gy200110 =  ( C6129*C5811 ) *C6043;
    gy[(Ai + 3) * matrix_size + Bi + 1] +=  (  ( C6129*C5808 ) *C6057 ) *cnst10;
    double C6124 =  (  ( C5843*4. ) /C5825 ) + (  ( C5844*C5882 ) /C5819 ) ;
    gy[(Ai + 1) * matrix_size + Bi + 0] +=  (  ( C6046*C6124 ) *C5816 ) *cnst10;
    gy[(Ai + 1) * matrix_size + Bi + 1] +=  ( C6057* ( C6124*C6043 )  ) *cnst10;
    gy[(Ai + 0) * matrix_size + Bi + 1] +=  (  ( C6124*C5808 ) *C5849 ) *cnst10;
    gy[(Ai + 0) * matrix_size + Bi + 0] +=  (  ( C6053*C6124 ) *C6043 ) *cnst10;
    double C5870 = C5843*2;
    double C6159 =  (  (  (  ( C5842*ae ) *2 ) +C5870 ) /C5825 ) + (  ( C5844*C6129 ) /C5819 ) ;
    double gy002020 = C5897* ( C6159*C6043 ) ;
    double gy200020 =  ( C6159*C5810 ) *C6043;
    double cnst227 = gy200020*cnst1;
    double gy101020 =  ( C6159*C5808 ) *C5816;
    double gy002200 = C5897* ( C5863*C5870 ) ;
    double gy200200 =  ( C5814*C5870 ) *C6043;
    double cnst237 = gy200200*cnst1;
    double gy200002 =  ( C5810*C5870 ) *C5848;
    double gy200101 =  ( C5870*C5811 ) *C5849;
    gy[(Ai + 3) * matrix_size + Bi + 3] += cnst10* (  ( C6053*C5870 ) *C6057 ) ;
    double gz110200 =  ( C5870*C5932 ) *C5816;
    double cnst254 = gz110200*cnst2;
    gy[(Ai + 3) * matrix_size + Bi + 4] += cc* ( cnst254- ( cnst2*gy101020 )  ) ;
    double cnst256 = cnst7*gz110200;
    gz[(Ai + 1) * matrix_size + Bi + 3] +=  (  ( C5815*C6046 ) *C6127 ) *cnst10;
    double C5885 =  (  ( C5870- (  ( C5815*be ) *2 )  ) /C5825 ) - (  ( C5864*C5882 ) /C5819 ) ;
    double gy020002 = C5848* ( C5885*C6043 ) ;
    double C6145 =  (  ( C5885*C5844 ) /C5819 ) + (  (  ( C5882*2 ) + (  ( C5862*ae ) *2 )  ) /C5825 ) ;
    double gy020011 =  ( C6043*C6145 ) *C5849;
    double cnst266 =  ( cnst9* ( C6056* ( C6043*C6129 )  )  ) - (  ( gy200011*cnst7 ) + ( gy020011*cnst7 )  ) ;
    gy[(Ai + 2) * matrix_size + Bi + 1] += cc*cnst266;
    gy[(Ai + 4) * matrix_size + Bi + 1] += cc* (  ( gy200011*cnst2 ) - ( gy020011*cnst2 )  ) ;
    double gy020110 =  ( C6046*C6145 ) *C6043;
    double cnst272 =  ( cnst9* ( C5897* ( C6046*C6129 )  )  ) - (  ( cnst7*gy200110 ) + ( cnst7*gy020110 )  ) ;
    gy[(Ai + 2) * matrix_size + Bi + 0] += cnst272*cc;
    gy[(Ai + 4) * matrix_size + Bi + 0] += cc* (  ( cnst2*gy200110 ) - ( gy020110*cnst2 )  ) ;
    double gy020200 =  ( C5885*C5863 ) *C6043;
    double cnst279 = cnst1*gy020200;
    double gy020101 =  ( C5885*C6046 ) *C5849;
    gy[(Ai + 4) * matrix_size + Bi + 3] +=  (  ( cnst2*gy200101 ) - ( gy020101*cnst2 )  ) *cc;
    double cnst287 =  ( cnst9* ( C6056* ( C6046*C5870 )  )  ) - (  ( cnst7*gy020101 ) + ( cnst7*gy200101 )  ) ;
    gy[(Ai + 2) * matrix_size + Bi + 3] += cc*cnst287;
    gz[(Ai + 0) * matrix_size + Bi + 3] +=  (  ( C5815*C6053 ) *C6131 ) *cnst10;
    double gx110200 =  ( C5815*C6165 ) *C6043;
    double gx011200 =  ( C5815*C6161 ) *C5816;
    double cnst301 = cnst9* ( C5951* ( C5815*C5823 )  ) ;
    gy[(Ai + 3) * matrix_size + Bi + 2] += cc* ( cnst301- ( cnst256+ ( cnst7*gy101020 )  )  ) ;
    gx[(Ai + 0) * matrix_size + Bi + 3] += cnst10* ( C5849* ( C5815*C6114 )  ) ;
    gx[(Ai + 1) * matrix_size + Bi + 3] +=  ( C6057* ( C5815*C6133 )  ) *cnst10;
    double gz011200 = C6080* ( C5815*C5863 ) ;
    double C6054 =  (  ( - ( C6005*2. )  ) /C6030 ) + (  ( C5862*C5844 ) /C5819 ) ;
    double gx020110 =  ( C6054*C6133 ) *C6043;
    gx[(Ai + 4) * matrix_size + Bi + 0] += cc* (  ( gx200110*cnst2 ) - ( cnst2*gx020110 )  ) ;
    double cnst316 =  ( cnst9* ( C5897* ( C5842*C6133 )  )  ) - (  ( cnst7*gx020110 ) + ( cnst7*gx200110 )  ) ;
    gx[(Ai + 2) * matrix_size + Bi + 0] += cc*cnst316;
    double gz020011 =  ( C6054*C6043 ) *C6131;
    double cnst320 =  ( cnst9* ( C6146* ( C5842*C6043 )  )  ) - (  ( cnst7*gz020011 ) + ( gz200011*cnst7 )  ) ;
    gz[(Ai + 2) * matrix_size + Bi + 1] += cc*cnst320;
    gz[(Ai + 4) * matrix_size + Bi + 1] += cc* (  ( gz200011*cnst2 ) - ( gz020011*cnst2 )  ) ;
    double cnst326 =  (  ( C5844*C6145 ) /C5819 ) + (  (  (  ( C6124*2 ) +C5885 ) + ( C6054*cnst6 )  ) /C5825 ) ;
    double gy020020 = C6043* ( cnst326*C6043 ) ;
    double cnst328 = cnst1*gy020020;
    double cnst330 =  (  ( cnst279+ (  ( cnst7*gy200002 ) - ( cnst237+cnst227 )  )  ) +cnst328 ) - ( cnst7*gy020002 ) ;
    gy[(Ai + 4) * matrix_size + Bi + 2] += cc*cnst330;
    double cnst333 =  (  (  (  ( cnst227-cnst237 ) -cnst279 ) +cnst328 ) + ( cnst7*gy002200 )  ) - ( cnst7*gy002020 ) ;
    gy[(Ai + 2) * matrix_size + Bi + 4] += cc*cnst333;
    double cnst336 =  (  (  ( cnst0*gy200200 ) - ( gy200020*cnst0 )  ) - ( cnst0*gy020200 )  ) + ( cnst0*gy020020 ) ;
    gy[(Ai + 4) * matrix_size + Bi + 4] += cnst336*cc;
    double gz020110 = C5906* ( C6054*C6046 ) ;
    gz[(Ai + 4) * matrix_size + Bi + 0] += cc* (  ( gz200110*cnst2 ) - ( gz020110*cnst2 )  ) ;
    double cnst342 =  ( cnst9* ( C6136* ( C6046*C5842 )  )  ) - (  ( cnst7*gz200110 ) + ( cnst7*gz020110 )  ) ;
    gz[(Ai + 2) * matrix_size + Bi + 0] += cc*cnst342;
    double gx020011 =  ( C6054*C5823 ) *C5849;
    double cnst346 =  ( cnst9* ( C6056* ( C5842*C5823 )  )  ) - (  ( cnst7*gx020011 ) + ( cnst7*gx200011 )  ) ;
    gx[(Ai + 2) * matrix_size + Bi + 1] += cc*cnst346;
    gx[(Ai + 4) * matrix_size + Bi + 1] +=  (  ( gx200011*cnst2 ) - ( cnst2*gx020011 )  ) *cc;
    double C6055 = C6044- (  ( C5844*C6005 ) /C5980 ) ;
    gx[(Ai + 1) * matrix_size + Bi + 0] +=  (  ( C6133*C6055 ) *C5816 ) *cnst10;
    gx[(Ai + 0) * matrix_size + Bi + 1] += cnst10* ( C5849* ( C5834*C6055 )  ) ;
    gz[(Ai + 0) * matrix_size + Bi + 0] += cnst10* ( C5906* ( C6053*C6055 )  ) ;
    double C6166 =  (  (  ( C5882+C6129 ) + (  ( ae*C6055 ) *2 )  ) /C5825 ) + (  ( C5844*C6124 ) /C5819 ) ;
    double gy110020 =  ( C6166*C5808 ) *C6043;
    double cnst355 =  ( cnst9* (  ( C5882*C5808 ) *C5848 )  ) - (  ( gy110200*cnst7 ) + ( cnst7*gy110020 )  ) ;
    gy[(Ai + 0) * matrix_size + Bi + 2] += cc*cnst355;
    gy[(Ai + 0) * matrix_size + Bi + 4] += cc* (  ( gy110200*cnst2 ) - ( cnst2*gy110020 )  ) ;
    double gy011020 =  ( C6166*C6043 ) *C5816;
    double cnst361 =  ( cnst9* ( C5951* ( C5882*C6043 )  )  ) - (  ( cnst7*gy011200 ) + ( cnst7*gy011020 )  ) ;
    gy[(Ai + 1) * matrix_size + Bi + 2] += cc*cnst361;
    gy[(Ai + 1) * matrix_size + Bi + 4] += cc* (  ( cnst2*gy011200 ) - ( cnst2*gy011020 )  ) ;
    gz[(Ai + 1) * matrix_size + Bi + 0] +=  ( C6080* ( C6046*C6055 )  ) *cnst10;
    gz[(Ai + 1) * matrix_size + Bi + 1] +=  ( C6127* ( C6043*C6055 )  ) *cnst10;
    double C5868 =  (  ( C6054*C5844 ) /C5819 ) + (  (  ( 2*C6055 ) +C5862 ) /C5825 ) ;
    double gx020020 =  ( C5823*C5868 ) *C6043;
    double cnst372 =  ( gx020020*cnst0 ) + (  (  ( gx200200*cnst0 ) - ( gx200020*cnst0 )  ) - ( gx020200*cnst0 )  ) ;
    gx[(Ai + 4) * matrix_size + Bi + 4] += cc*cnst372;
    double cnst373 = gx020020*cnst1;
    double cnst376 =  (  ( cnst373+ (  ( cnst73-cnst112 ) -cnst179 )  ) + ( cnst7*gx002200 )  ) - ( cnst7*gx002020 ) ;
    gx[(Ai + 2) * matrix_size + Bi + 4] += cc*cnst376;
    double cnst378 =  (  ( cnst179+ (  ( cnst7*gx200002 ) - ( cnst73+cnst112 )  )  ) +cnst373 ) - ( cnst7*gx020002 ) ;
    gx[(Ai + 4) * matrix_size + Bi + 2] += cnst378*cc;
    double gz020020 = C5906* ( C6043*C5868 ) ;
    double cnst380 = cnst1*gz020020;
    double cnst383 =  (  ( cnst7*gz002200 ) + ( cnst380+ (  ( cnst84-cnst140 ) -cnst163 )  )  ) - ( cnst7*gz002020 ) ;
    gz[(Ai + 2) * matrix_size + Bi + 4] += cc*cnst383;
    double cnst385 =  (  ( cnst163+ (  ( cnst7*gz200002 ) - ( cnst84+cnst140 )  )  ) +cnst380 ) - ( cnst7*gz020002 ) ;
    gz[(Ai + 4) * matrix_size + Bi + 2] += cc*cnst385;
    double cnst387 =  (  (  ( cnst0*gz200200 ) - ( gz200020*cnst0 )  ) - ( gz020200*cnst0 )  ) + ( cnst0*gz020020 ) ;
    gz[(Ai + 4) * matrix_size + Bi + 4] += cnst387*cc;
    double C5935 =  (  ( C5842-cnst190 ) /C5825 ) + (  ( C5844*C6055 ) /C5819 ) ;
    double gz011020 = C6080* ( C6043*C5935 ) ;
    double cnst394 =  ( cnst9* (  ( C5815*C6043 ) *C6167 )  ) - (  ( cnst7*gz011200 ) + ( cnst7*gz011020 )  ) ;
    gz[(Ai + 1) * matrix_size + Bi + 2] += cc*cnst394;
    gz[(Ai + 1) * matrix_size + Bi + 4] += cc* (  ( gz011200*cnst2 ) - ( cnst2*gz011020 )  ) ;
    double gx110020 =  ( C5834*C5935 ) *C6043;
    double cnst400 =  ( cnst9* (  ( C5815*C5834 ) *C5848 )  ) - (  ( gx110200*cnst7 ) + ( cnst7*gx110020 )  ) ;
    gx[(Ai + 0) * matrix_size + Bi + 2] += cc*cnst400;
    gx[(Ai + 0) * matrix_size + Bi + 4] += cc* (  ( gx110200*cnst2 ) - ( gx110020*cnst2 )  ) ;
    double gz110020 =  ( C5823*C5935 ) *C5816;
    double cnst404 = gz110020*cnst2;
    gz[(Ai + 0) * matrix_size + Bi + 4] += cc* ( cnst254-cnst404 ) ;
    gx[(Ai + 1) * matrix_size + Bi + 4] += cc* (  ( gx011200*cnst2 ) -cnst404 ) ;
    double cnst407 = cnst7*gz110020;
    gx[(Ai + 1) * matrix_size + Bi + 2] += cc* ( cnst301- ( cnst407+ ( cnst7*gx011200 )  )  ) ;
    gz[(Ai + 0) * matrix_size + Bi + 2] += cc* (  ( cnst9* ( C6160* ( C5815*C5808 )  )  ) - ( cnst407+cnst256 )  ) ;
    gx[(Ai + 0) * matrix_size + Bi + 0] +=  (  ( C6114*C6055 ) *C6043 ) *cnst10;
    gx[(Ai + 1) * matrix_size + Bi + 1] +=  (  ( C5823*C6055 ) *C6057 ) *cnst10;
    gz[(Ai + 0) * matrix_size + Bi + 1] +=  (  ( C5808*C6055 ) *C6131 ) *cnst10;
    double cnst419 =  (  (  ( 0.25*gy200200 ) + ( gy200020*0.25 )  ) - ( 0.5*gy200002 )  ) + ( 0.25*gy020200 ) ;
    double cnst427 =  (  (  ( cnst419+ ( 0.25*gy020020 )  ) - ( 0.5*gy020002 )  ) - ( 0.5*gy002200 )  ) - ( 0.5*gy002020 ) ;
    gy[(Ai + 2) * matrix_size + Bi + 2] += cc* (  ( C5904* ( C5870*C6043 )  ) +cnst427 ) ;
    double cnst432 =  ( gx020200*0.25 ) + (  (  ( 0.25*gx200200 ) + ( gx200020*0.25 )  ) - ( 0.5*gx200002 )  ) ;
    double cnst436 =  ( gz020200*0.25 ) + (  (  ( 0.25*gz200020 ) + ( 0.25*gz200200 )  ) - ( 0.5*gz200002 )  ) ;
    double cnst440 =  (  (  (  ( 0.25*gz020020 ) +cnst436 ) - ( 0.5*gz020002 )  ) - ( 0.5*gz002200 )  ) - ( 0.5*gz002020 ) ;
    gz[(Ai + 2) * matrix_size + Bi + 2] +=  (  ( cnst64* ( C6043*C6043 )  ) +cnst440 ) *cc;
    double cnst446 =  (  (  ( cnst432+ ( gx020020*0.25 )  ) - ( 0.5*gx020002 )  ) - ( 0.5*gx002200 )  ) - ( 0.5*gx002020 ) ;
    gx[(Ai + 2) * matrix_size + Bi + 2] += cc* (  (  ( C6043*C5823 ) *C5904 ) +cnst446 ) ;
}
