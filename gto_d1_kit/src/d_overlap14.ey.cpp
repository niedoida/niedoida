/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void overlap_gradient_32(
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
    double cnst0 = std::sqrt(22.5);
    double C18725 = ae*zAB;
    double C18718 = yAB*ae;
    double cnst1 = std::sqrt(3.75);
    double cnst4 = ae*2;
    double cnst6 = std::sqrt( ( 3.75/8.0 ) );
    double cnst8 = std::sqrt( ( 15./8.0 ) );
    double cnst10 = std::sqrt( ( 2.25/8.0 ) );
    double cnst12 = std::sqrt( ( 135./8.0 ) );
    double cnst14 = std::sqrt( ( 33.75/8.0 ) );
    double cnst16 = std::sqrt( ( 1.25/8.0 ) );
    double cnst17 = std::sqrt(1.875);
    double cnst18 = std::sqrt(5.625);
    double C18689 = xAB*ae;
    double cnst21 = std::sqrt( ( 0.75/8.0 ) );
    double cnst22 = std::sqrt(0.75);
    double cnst24 = std::sqrt( ( 45.0/8.0 ) );
    double cnst26 = std::sqrt( ( 5.0/8.0 ) );
    double cnst27 = std::sqrt(4.5);
    double cnst29 = std::sqrt( ( 9./8.0 ) );
    double cnst30 = std::sqrt(3.0);
    double cnst32 = std::sqrt( ( 3.0/8.0 ) );
    double cnst33 = std::sqrt(6.75);
    double cnst34 = std::sqrt(7.5);
    double cnst35 = std::sqrt(6.0);
    double cnst36 = std::sqrt(1.6875);
    double cnst37 = std::sqrt(15.0);
    double cnst39 = std::sqrt( ( 45./8.0 ) );
    double cnst41 = cc* ( std::sqrt(45.) ) ;
    double C18684 = be+ae;
    double C18673 = std::sqrt( ( Pi/C18684 ) );
    double C18723 =  ( C18673*C18725 ) /C18684;
    double C19022 =  ( C18689*C18673 ) /C18684;
    double C18716 =  ( C18718*C18673 ) /C18684;
    double C18926 = std::pow(C18684 , 2);
    double C19001 = C18926*2.;
    double C18691 = 2.*C18684;
    double C19018 = C18673/C18691;
    double C18715 =  (  (  ( std::pow(C18718 , 2) ) *C18673 ) /C18926 ) +C19018;
    double C18722 =  (  ( C18673* ( std::pow(C18725 , 2) )  ) /C18926 ) +C19018;
    double C18737 = C19018+ (  ( C18673* ( std::pow(C18689 , 2) )  ) /C18926 ) ;
    double C18788 =  ( - (  ( be*C18673 ) *2 )  ) /C18691;
    double C19121 =  (  ( C18673*ae ) *2. ) /C18691;
    double C18740 = be*yAB;
    double C19045 =  (  ( C18673* ( std::pow(C18740 , 2) )  ) /C18926 ) +C19018;
    double C18957 = C18740*C18673;
    double C19043 = C19018- (  ( C18718*C18957 ) /C18926 ) ;
    double C18962 =  ( - ( C18957*2. )  ) /C19001;
    double C19038 = C18962+ (  ( C18718*C19045 ) /C18684 ) ;
    double C18855 =  (  (  ( 2*C19043 ) +C19045 ) /C18691 ) + (  ( C18718*C19038 ) /C18684 ) ;
    double C18736 = C18962- (  ( C18740*C19045 ) /C18684 ) ;
    double C19037 =  (  ( C18718*C18736 ) /C18684 ) + (  ( C19045*3. ) /C18691 ) ;
    double C18751 =  (  ( C18736+ ( C19038*3 )  ) /C18691 ) + (  ( C18718*C19037 ) /C18684 ) ;
    double cnst85 = C18957/C18684;
    double C18827 =  (  ( C18718*C19043 ) /C18684 ) + (  ( C18716-cnst85 ) /C18691 ) ;
    double C18681 = -cnst85;
    double C18717 = C18681*ae;
    double C18747 = C18788- (  (  ( C18740*C18717 ) *2 ) /C18684 ) ;
    double C18753 = C18747*2;
    double C19133 =  (  ( 4.*C18717 ) /C18691 ) + (  ( C18718*C18747 ) /C18684 ) ;
    double C19137 = C19121+ (  (  ( C18718*C18717 ) *2 ) /C18684 ) ;
    double C19196 =  (  ( C18718*C19133 ) /C18684 ) + (  (  (  ( ae*C19043 ) *2 ) + ( C19137+C18747 )  ) /C18691 ) ;
    double C18755 = C18717*2;
    double C18765 =  (  ( C18755- (  ( C18681*be ) *2 )  ) /C18691 ) - (  ( C18740*C18747 ) /C18684 ) ;
    double C19159 =  (  (  ( 2* ( ae*C19045 )  ) +C18753 ) /C18691 ) + (  ( C18718*C18765 ) /C18684 ) ;
    double C19198 =  (  (  (  ( C19038*ae ) *2 ) + ( C18765+ ( C19133*2 )  )  ) /C18691 ) + (  ( C18718*C19159 ) /C18684 ) ;
    double C18768 =  (  ( C18753- (  ( be*C19045 ) *2 )  ) /C18691 ) - (  ( C18740*C18765 ) /C18684 ) ;
    double gy030200 = C18673* ( C18737*C18768 ) ;
    double gy030101 = C18723* ( C18768*C19022 ) ;
    double gy030002 =  ( C18768*C18673 ) *C18722;
    double C19158 =  (  (  ( C18765*3 ) + (  ( C18736*ae ) *2 )  ) /C18691 ) + (  ( C18718*C18768 ) /C18684 ) ;
    double gy030110 = C18673* ( C19158*C19022 ) ;
    double cnst124 =  (  (  ( C19037*cnst4 ) + ( C18768+ ( 3*C19159 )  )  ) /C18691 ) + (  ( C18718*C19158 ) /C18684 ) ;
    double gy030020 = C18673* ( cnst124*C18673 ) ;
    double gy030011 = C18723* ( C18673*C19158 ) ;
    double C19183 =  (  ( C18718*C19137 ) /C18684 ) + (  ( C18755+ (  ( ae*C18716 ) *2 )  ) /C18691 ) ;
    double C18686 = xAB*be;
    double C19000 = C18686*C18673;
    double C19042 = C19018- (  ( C18689*C19000 ) /C18926 ) ;
    double gy120110 = C18673* ( C19042*C19159 ) ;
    double gy120101 =  ( C19042*C18765 ) *C18723;
    double C19034 =  ( - ( C19000*2. )  ) /C19001;
    double cnst165 = C19000/C18684;
    double C18674 = -cnst165;
    double gy120020 = C18673* ( C19198*C18674 ) ;
    double C18685 = ae*C18674;
    double C18702 = C18788- (  (  ( C18686*C18685 ) *2 ) /C18684 ) ;
    double gx120011 = C18723* ( C18702*C19038 ) ;
    double C19132 =  (  ( C18702*C18689 ) /C18684 ) + (  ( C18685*4. ) /C18691 ) ;
    double gx120110 = C18673* ( C19132*C19038 ) ;
    double gx120101 = C18723* ( C19132*C19045 ) ;
    double gx120002 =  ( C18702*C19045 ) *C18722;
    double gx120020 =  ( C18702*C18855 ) *C18673;
    double C18703 = C18702*2;
    double C18694 = C18685*2;
    double gx030011 =  ( C18694*C19037 ) *C18723;
    double gx030020 =  ( C18694*C18751 ) *C18673;
    double gx030002 =  ( C18694*C18736 ) *C18722;
    double C19141 = C19121+ (  (  ( C18689*C18685 ) *2 ) /C18684 ) ;
    double gx030101 = C18723* ( C18736*C19141 ) ;
    double gx030110 = C18673* ( C19141*C19037 ) ;
    double C19185 =  (  ( C18694+ (  ( C19022*ae ) *2 )  ) /C18691 ) + (  ( C19141*C18689 ) /C18684 ) ;
    double gx030200 =  ( C19185*C18736 ) *C18673;
    double C19199 =  (  (  ( C18702+C19141 ) + (  ( C19042*ae ) *2 )  ) /C18691 ) + (  ( C19132*C18689 ) /C18684 ) ;
    double gx120200 =  ( C19199*C19045 ) *C18673;
    double gy120002 =  ( C18765*C18674 ) *C18722;
    double gy120011 = C18723* ( C18674*C19159 ) ;
    double C18708 =  (  ( C18694- ( 2* ( be*C18674 )  )  ) /C18691 ) - (  ( C18702*C18686 ) /C18684 ) ;
    double gx210011 = C18723* ( C18708*C19043 ) ;
    gx[(Ai + 0) * matrix_size + Bi + 1] += cc* (  ( cnst12*gx210011 ) - ( cnst8*gx030011 )  ) ;
    double gx210020 = C18673* ( C18827*C18708 ) ;
    double gx210002 =  ( C18681*C18708 ) *C18722;
    double C18868 =  (  ( C19042*C18689 ) /C18684 ) + (  ( C19022-cnst165 ) /C18691 ) ;
    double gy120200 =  ( C18765*C18868 ) *C18673;
    double C18675 =  (  ( C18673* ( std::pow(C18686 , 2) )  ) /C18926 ) +C19018;
    double C19035 = C19034+ (  ( C18689*C18675 ) /C18684 ) ;
    double gy210101 = C18723* ( C19035*C18747 ) ;
    gy[(Ai + 0) * matrix_size + Bi + 3] += cc* (  ( cnst12*gy210101 ) - ( cnst8*gy030101 )  ) ;
    double gy210110 = C18673* ( C19035*C19133 ) ;
    gy[(Ai + 0) * matrix_size + Bi + 0] += cc* (  ( cnst12*gy210110 ) - ( cnst8*gy030110 )  ) ;
    double C18676 = C19034- (  ( C18686*C18675 ) /C18684 ) ;
    double gy300020 = C18673* ( C18676*C19183 ) ;
    double gy300002 =  ( C18755*C18676 ) *C18722;
    double C19053 = C18676*ae;
    double gy300011 = C18723* ( C18676*C19137 ) ;
    gy[(Ai + 6) * matrix_size + Bi + 1] += cc* (  ( cnst12*gy120011 ) + ( gy300011*cnst8 )  ) ;
    double gy210020 = C18673* ( C19196*C18675 ) ;
    double C18824 =  (  ( C19035*C18689 ) /C18684 ) + (  ( C18675+ ( C19042*2 )  ) /C18691 ) ;
    double gy210200 = C18673* ( C18824*C18747 ) ;
    double cnst342 =  (  (  ( cnst6*gy030020 ) - ( gy030200*cnst6 )  ) + ( gy210200*cnst14 )  ) - ( gy210020*cnst14 ) ;
    gy[(Ai + 0) * matrix_size + Bi + 4] += cc*cnst342;
    double cnst344 =  ( gy210200*cnst21 ) + (  (  ( cnst21*gy030020 ) + ( gy030200*cnst21 )  ) - ( cnst32*gy030002 )  ) ;
    double cnst348 =  (  (  ( gy030020*cnst10 ) - ( gy030200*cnst10 )  ) - ( gy210200*cnst10 )  ) + ( gy210020*cnst10 ) ;
    double C18711 =  (  ( C18703- (  ( be*C18675 ) *2 )  ) /C18691 ) - (  ( C18686*C18708 ) /C18684 ) ;
    double gx300020 = C18673* ( C18715*C18711 ) ;
    double gx300002 = C18722* ( C18673*C18711 ) ;
    double C19153 =  (  (  ( 3*C18708 ) + ( C19053*2 )  ) /C18691 ) + (  ( C18689*C18711 ) /C18684 ) ;
    double gx300110 = C18673* ( C19153*C18716 ) ;
    gx[(Ai + 6) * matrix_size + Bi + 0] += cc* (  ( cnst8*gx300110 ) + ( gx120110*cnst12 )  ) ;
    double gx300101 = C18723* ( C18673*C19153 ) ;
    gx[(Ai + 6) * matrix_size + Bi + 3] += cc* (  ( cnst8*gx300101 ) + ( cnst12*gx120101 )  ) ;
    double gx300011 = C18723* ( C18716*C18711 ) ;
    gx[(Ai + 6) * matrix_size + Bi + 1] +=  (  ( cnst12*gx120011 ) + ( cnst8*gx300011 )  ) *cc;
    double gy210011 = C18723* ( C19133*C18675 ) ;
    gy[(Ai + 0) * matrix_size + Bi + 1] += cc* (  ( cnst12*gy210011 ) - ( cnst8*gy030011 )  ) ;
    double C18677 =  (  ( C18675*3. ) /C18691 ) + (  ( xAB*C19053 ) /C18684 ) ;
    double gy300110 =  ( C18677*C19137 ) *C18673;
    gy[(Ai + 6) * matrix_size + Bi + 0] += cc* (  ( cnst8*gy300110 ) + ( cnst12*gy120110 )  ) ;
    double C18680 =  (  ( C18676+ ( C19035*3 )  ) /C18691 ) + (  ( C18677*C18689 ) /C18684 ) ;
    double gy300200 =  ( C18755*C18680 ) *C18673;
    double cnst402 =  (  ( gy120200*cnst14 ) + (  ( gy300200*cnst6 ) - ( cnst6*gy300020 )  )  ) - ( cnst14*gy120020 ) ;
    gy[(Ai + 6) * matrix_size + Bi + 4] += cc*cnst402;
    double cnst406 =  ( gy120200*cnst21 ) + (  (  ( gy300200*cnst21 ) + ( cnst21*gy300020 )  ) - ( gy300002*cnst32 )  ) ;
    double cnst412 =  ( gy120020*cnst10 ) + (  (  ( cnst10*gy300020 ) - ( gy300200*cnst10 )  ) - ( gy120200*cnst10 )  ) ;
    double gy300101 = C18723* ( C18677*C18755 ) ;
    gy[(Ai + 6) * matrix_size + Bi + 3] += cc* (  ( cnst8*gy300101 ) + ( cnst12*gy120101 )  ) ;
    double C19154 =  (  ( C18689*C18708 ) /C18684 ) + (  ( C18703+ (  ( ae*C18675 ) *2 )  ) /C18691 ) ;
    double gx210110 = C18673* ( C19154*C19043 ) ;
    gx[(Ai + 0) * matrix_size + Bi + 0] += cc* (  ( cnst12*gx210110 ) - ( cnst8*gx030110 )  ) ;
    double gx210101 = C18723* ( C18681*C19154 ) ;
    gx[(Ai + 0) * matrix_size + Bi + 3] += cc* (  ( cnst12*gx210101 ) - ( gx030101*cnst8 )  ) ;
    double C19195 =  (  ( C18689*C19154 ) /C18684 ) + (  (  (  ( C19132*2 ) +C18708 ) + (  ( C19035*ae ) *2 )  ) /C18691 ) ;
    double gx210200 =  ( C19195*C18681 ) *C18673;
    double cnst431 =  (  (  ( gx030020*cnst21 ) + ( cnst21*gx030200 )  ) - ( cnst32*gx030002 )  ) + ( gx210200*cnst21 ) ;
    double cnst436 =  (  ( gx210200*cnst14 ) + (  ( gx030020*cnst6 ) - ( cnst6*gx030200 )  )  ) - ( gx210020*cnst14 ) ;
    gx[(Ai + 0) * matrix_size + Bi + 4] += cc*cnst436;
    double cnst439 =  ( gx210020*cnst10 ) + (  (  ( gx030020*cnst10 ) - ( cnst10*gx030200 )  ) - ( gx210200*cnst10 )  ) ;
    double cnst444 =  (  ( C18689*C19153 ) /C18684 ) + (  (  (  ( 3*C19154 ) +C18711 ) + ( C18677*cnst4 )  ) /C18691 ) ;
    double gx300200 =  ( std::pow(C18673 , 2) ) *cnst444;
    double cnst448 =  (  (  ( cnst10*gx300020 ) - ( gx300200*cnst10 )  ) - ( gx120200*cnst10 )  ) + ( gx120020*cnst10 ) ;
    double cnst455 =  (  ( gx120200*cnst14 ) + (  ( gx300200*cnst6 ) - ( cnst6*gx300020 )  )  ) - ( gx120020*cnst14 ) ;
    gx[(Ai + 6) * matrix_size + Bi + 4] += cc*cnst455;
    double cnst459 =  (  (  ( gx300200*cnst21 ) + ( cnst21*gx300020 )  ) - ( cnst32*gx300002 )  ) + ( gx120200*cnst21 ) ;
    double gy210002 =  ( C18747*C18675 ) *C18722;
    double C18783 = be*zAB;
    double C18973 = C18673*C18783;
    double C19044 = C19018- (  ( C18973*C18725 ) /C18926 ) ;
    double gx021101 =  ( C19141*C19045 ) *C19044;
    gy[(Ai + 1) * matrix_size + Bi + 1] +=  (  ( C19133*C18674 ) *C19044 ) *cnst41;
    double gx021011 =  ( C18694*C19038 ) *C19044;
    double gy201101 =  ( C19035*C18755 ) *C19044;
    double gy021101 =  ( C18765*C19022 ) *C19044;
    gy[(Ai + 5) * matrix_size + Bi + 3] += cc* (  ( gy201101*cnst0 ) - ( cnst0*gy021101 )  ) ;
    gx[(Ai + 1) * matrix_size + Bi + 3] +=  (  ( C18681*C19132 ) *C19044 ) *cnst41;
    double gx201011 =  ( C18708*C18716 ) *C19044;
    gx[(Ai + 5) * matrix_size + Bi + 1] += cc* (  ( gx201011*cnst0 ) - ( cnst0*gx021011 )  ) ;
    double gy201011 =  ( C19137*C18675 ) *C19044;
    gx[(Ai + 1) * matrix_size + Bi + 1] +=  (  ( C18702*C19043 ) *C19044 ) *cnst41;
    double gy021011 =  ( C18673*C19159 ) *C19044;
    gy[(Ai + 5) * matrix_size + Bi + 1] += cc* (  ( cnst0*gy201011 ) - ( gy021011*cnst0 )  ) ;
    double gx201101 =  ( C18673*C19154 ) *C19044;
    gx[(Ai + 5) * matrix_size + Bi + 3] += cc* (  ( cnst0*gx201101 ) - ( cnst0*gx021101 )  ) ;
    gy[(Ai + 1) * matrix_size + Bi + 3] +=  (  ( C19042*C18747 ) *C19044 ) *cnst41;
    double C18978 =  ( - ( C18973*2. )  ) /C19001;
    double cnst491 = C18973/C18684;
    double C18843 =  (  ( C18725*C19044 ) /C18684 ) + (  ( C18723-cnst491 ) /C18691 ) ;
    double gx201002 = C18843* ( C18673*C18708 ) ;
    double gy201002 = C18843* ( C18755*C18675 ) ;
    double gx021002 = C18843* ( C18694*C19045 ) ;
    double gy021002 = C18843* ( C18765*C18673 ) ;
    double C18682 = -cnst491;
    double gx111200 = C18682* ( C18681*C19199 ) ;
    double gx201020 = C18682* ( C18708*C18715 ) ;
    double gx201200 = C18682* ( C19195*C18673 ) ;
    double gz120020 = C18682* ( C18694*C18855 ) ;
    double gx201110 = C18682* ( C18716*C19154 ) ;
    double gy021020 =  ( C18673*C19198 ) *C18682;
    double gx021110 = C18682* ( C19141*C19038 ) ;
    gx[(Ai + 5) * matrix_size + Bi + 0] += cc* (  ( cnst0*gx201110 ) - ( cnst0*gx021110 )  ) ;
    double gy111020 =  ( C19196*C18674 ) *C18682;
    double gy201020 = C18682* ( C19183*C18675 ) ;
    double gz210200 =  ( C18755*C18824 ) *C18682;
    double gx021200 =  ( C19185*C19045 ) *C18682;
    double cnst544 =  (  ( gx201002*cnst34 ) - (  ( cnst17*gx201020 ) + ( cnst17*gx201200 )  )  ) + ( cnst17*gx021200 ) ;
    gx[(Ai + 5) * matrix_size + Bi + 2] += cc* (  (  ( cnst17*gz120020 ) +cnst544 ) - ( gx021002*cnst34 )  ) ;
    double cnst551 =  (  (  ( cnst18*gx201200 ) - ( cnst18*gx201020 )  ) - ( cnst18*gx021200 )  ) + ( cnst18*gz120020 ) ;
    gx[(Ai + 5) * matrix_size + Bi + 4] += cc*cnst551;
    gy[(Ai + 1) * matrix_size + Bi + 0] +=  ( C18682* ( C19042*C19133 )  ) *cnst41;
    double gy201110 =  ( C19035*C19137 ) *C18682;
    double gy021110 = C18682* ( C19022*C19159 ) ;
    gy[(Ai + 5) * matrix_size + Bi + 0] += cc* (  ( gy201110*cnst0 ) - ( cnst0*gy021110 )  ) ;
    double gy111200 = C18682* ( C18868*C18747 ) ;
    double cnst559 =  (  ( C18843* ( C18747*C18674 )  ) *cnst37 ) - (  ( cnst1*gy111200 ) + ( gy111020*cnst1 )  ) ;
    gy[(Ai + 1) * matrix_size + Bi + 2] += cc*cnst559;
    double C18724 = C18682*ae;
    double C18800 = C18724*2;
    double gz300110 =  ( C18677*C18716 ) *C18800;
    double gz030200 =  ( C18737*C18736 ) *C18800;
    double gz300200 = C18800* ( C18680*C18673 ) ;
    double gz120200 = C18800* ( C18868*C19045 ) ;
    double gz030110 = C18800* ( C19037*C19022 ) ;
    double gz030020 =  ( C18673*C18751 ) *C18800;
    double gz120110 =  ( C19042*C19038 ) *C18800;
    gz[(Ai + 6) * matrix_size + Bi + 0] += cc* (  ( cnst8*gz300110 ) + ( cnst12*gz120110 )  ) ;
    double gz210020 = C18800* ( C18827*C18675 ) ;
    double cnst591 =  (  (  ( cnst10*gz030020 ) - ( gz030200*cnst10 )  ) - ( cnst10*gz210200 )  ) + ( gz210020*cnst10 ) ;
    double cnst593 =  (  (  ( cnst6*gz030020 ) - ( gz030200*cnst6 )  ) + ( cnst14*gz210200 )  ) - ( gz210020*cnst14 ) ;
    gz[(Ai + 0) * matrix_size + Bi + 4] += cc*cnst593;
    double gz300020 =  ( C18676*C18715 ) *C18800;
    double cnst599 =  (  ( gz120200*cnst14 ) + (  ( gz300200*cnst6 ) - ( gz300020*cnst6 )  )  ) - ( gz120020*cnst14 ) ;
    gz[(Ai + 6) * matrix_size + Bi + 4] += cc*cnst599;
    double cnst603 =  (  (  ( gz300020*cnst10 ) - ( gz300200*cnst10 )  ) - ( gz120200*cnst10 )  ) + ( gz120020*cnst10 ) ;
    double gz210110 =  ( C19035*C19043 ) *C18800;
    gz[(Ai + 0) * matrix_size + Bi + 0] +=  (  ( gz210110*cnst12 ) - ( cnst8*gz030110 )  ) *cc;
    double C19139 = C19121+ (  (  ( C18724*C18725 ) *2 ) /C18684 ) ;
    double gz120011 = C19139* ( C19038*C18674 ) ;
    double gz120101 = C19139* ( C19042*C19045 ) ;
    double gz300011 = C19139* ( C18676*C18716 ) ;
    gz[(Ai + 6) * matrix_size + Bi + 1] += cc* (  ( cnst12*gz120011 ) + ( cnst8*gz300011 )  ) ;
    double gz030011 = C19139* ( C19037*C18673 ) ;
    double gz210101 = C19139* ( C19035*C18681 ) ;
    double C19184 =  (  ( C19139*C18725 ) /C18684 ) + (  (  (  ( C18723*ae ) *2 ) +C18800 ) /C18691 ) ;
    double gz300002 =  ( C18676*C18673 ) *C19184;
    double cnst623 =  ( cnst21*gz120200 ) + (  (  ( gz300020*cnst21 ) + ( gz300200*cnst21 )  ) - ( cnst32*gz300002 )  ) ;
    double gz030002 = C19184* ( C18736*C18673 ) ;
    double cnst629 =  (  (  ( gz030200*cnst21 ) + ( cnst21*gz030020 )  ) - ( cnst32*gz030002 )  ) + ( cnst21*gz210200 ) ;
    double gz210002 = C19184* ( C18681*C18675 ) ;
    double gz120002 = C19184* ( C19045*C18674 ) ;
    double gz210011 = C19139* ( C18675*C19043 ) ;
    gz[(Ai + 0) * matrix_size + Bi + 1] += cc* (  ( cnst12*gz210011 ) - ( cnst8*gz030011 )  ) ;
    double gz300101 = C19139* ( C18677*C18673 ) ;
    gz[(Ai + 6) * matrix_size + Bi + 3] += cc* (  ( cnst12*gz120101 ) + ( gz300101*cnst8 )  ) ;
    double gz030101 =  ( C18736*C19022 ) *C19139;
    gz[(Ai + 0) * matrix_size + Bi + 3] += cc* (  ( gz210101*cnst12 ) - ( gz030101*cnst8 )  ) ;
    double C18790 = C18788- (  (  ( C18724*C18783 ) *2 ) /C18684 ) ;
    double gz021110 = C18790* ( C19038*C19022 ) ;
    double gz111200 = C18790* ( C18681*C18868 ) ;
    double gz021020 =  ( C18855*C18673 ) *C18790;
    double C18810 =  (  ( C18800- (  ( C18682*be ) *2 )  ) /C18691 ) - (  ( C18783*C18790 ) /C18684 ) ;
    double gz102200 = C18810* ( C18868*C18673 ) ;
    double gz012020 =  ( C18827*C18673 ) *C18810;
    double gz012200 =  ( C18737*C18681 ) *C18810;
    gz[(Ai + 2) * matrix_size + Bi + 4] += cc* (  ( cnst591- ( cnst27*gz012200 )  ) + ( gz012020*cnst27 )  ) ;
    double gz102020 = C18810* ( C18715*C18674 ) ;
    gz[(Ai + 4) * matrix_size + Bi + 4] += cc* (  (  ( cnst27*gz102200 ) +cnst603 ) - ( gz102020*cnst27 )  ) ;
    double C19134 =  (  ( C18725*C18790 ) /C18684 ) + (  ( C18724*4. ) /C18691 ) ;
    double gz021011 =  ( C19038*C18673 ) *C19134;
    double gz201101 =  ( C19035*C18673 ) *C19134;
    double gz201011 = C19134* ( C18716*C18675 ) ;
    gz[(Ai + 5) * matrix_size + Bi + 1] += cc* (  ( gz201011*cnst0 ) - ( cnst0*gz021011 )  ) ;
    gz[(Ai + 1) * matrix_size + Bi + 3] +=  (  ( C19042*C18681 ) *C19134 ) *cnst41;
    double gz021101 =  ( C19022*C19045 ) *C19134;
    gz[(Ai + 5) * matrix_size + Bi + 3] += cc* (  ( cnst0*gz201101 ) - ( gz021101*cnst0 )  ) ;
    gz[(Ai + 1) * matrix_size + Bi + 1] +=  ( C19134* ( C18674*C19043 )  ) *cnst41;
    double C18798 = C18790*2;
    double gz021200 =  ( C18737*C19045 ) *C18790;
    double gz201110 = C18790* ( C19035*C18716 ) ;
    gz[(Ai + 5) * matrix_size + Bi + 0] += cc* (  ( cnst0*gz201110 ) - ( gz021110*cnst0 )  ) ;
    double C19197 =  (  (  (  ( ae*C19044 ) *2 ) + ( C19139+C18790 )  ) /C18691 ) + (  ( C18725*C19134 ) /C18684 ) ;
    double gz021002 =  ( C18673*C19045 ) *C19197;
    double gz201002 =  ( C18673*C18675 ) *C19197;
    gz[(Ai + 1) * matrix_size + Bi + 0] += cnst41* ( C18790* ( C19042*C19043 )  ) ;
    double gz111020 =  ( C18827*C18674 ) *C18790;
    double cnst686 =  (  (  ( C18681*C18674 ) *C19197 ) *cnst37 ) - (  ( cnst1*gz111200 ) + ( gz111020*cnst1 )  ) ;
    gz[(Ai + 1) * matrix_size + Bi + 2] += cc*cnst686;
    double gz201200 =  ( C18824*C18673 ) *C18790;
    double gz201020 = C18790* ( C18715*C18675 ) ;
    double cnst695 =  ( gz021200*cnst17 ) + (  ( gz201002*cnst34 ) - (  ( gz201020*cnst17 ) + ( cnst17*gz201200 )  )  ) ;
    gz[(Ai + 5) * matrix_size + Bi + 2] += cc* (  (  ( cnst17*gz021020 ) +cnst695 ) - ( gz021002*cnst34 )  ) ;
    double cnst702 =  ( cnst18*gz021020 ) + (  (  ( cnst18*gz201200 ) - ( cnst18*gz201020 )  ) - ( gz021200*cnst18 )  ) ;
    gz[(Ai + 5) * matrix_size + Bi + 4] += cc*cnst702;
    double gx111020 = C18682* ( C18827*C18702 ) ;
    double cnst705 =  (  ( C18843* ( C18681*C18702 )  ) *cnst37 ) - (  ( cnst1*gx111200 ) + ( gx111020*cnst1 )  ) ;
    gx[(Ai + 1) * matrix_size + Bi + 2] += cc*cnst705;
    double gy021200 = C18682* ( C18737*C18765 ) ;
    double cnst708 =  (  (  ( cnst18*gz210200 ) - ( cnst18*gy201020 )  ) - ( cnst18*gy021200 )  ) + ( cnst18*gy021020 ) ;
    gy[(Ai + 5) * matrix_size + Bi + 4] += cc*cnst708;
    double cnst711 =  ( gy021200*cnst17 ) + (  ( gy201002*cnst34 ) - (  ( cnst17*gy201020 ) + ( cnst17*gz210200 )  )  ) ;
    gy[(Ai + 5) * matrix_size + Bi + 2] += cc* (  ( cnst711+ ( cnst17*gy021020 )  ) - ( gy021002*cnst34 )  ) ;
    gx[(Ai + 1) * matrix_size + Bi + 0] +=  (  ( C19132*C19043 ) *C18682 ) *cnst41;
    double C19046 = C19018+ (  ( C18673* ( std::pow(C18783 , 2) )  ) /C18926 ) ;
    double gy012020 =  ( C18673*C19196 ) *C19046;
    double C18780 = C18978- (  ( C18783*C19046 ) /C18684 ) ;
    double gx003020 = C18780* ( C18694*C18715 ) ;
    double gy003020 = C18780* ( C19183*C18673 ) ;
    double C19040 =  (  ( C19046*3. ) /C18691 ) + (  ( C18780*C18725 ) /C18684 ) ;
    double cnst720 =  (  ( cnst30* (  ( C18673*C19137 ) *C19040 )  ) - ( cnst33*gy201011 )  ) - ( gy021011*cnst33 ) ;
    gy[(Ai + 3) * matrix_size + Bi + 1] += cnst720*cc;
    double cnst724 =  (  (  (  ( C19141*C18673 ) *C19040 ) *cnst30 ) - ( gx201101*cnst33 )  ) - ( gx021101*cnst33 ) ;
    gx[(Ai + 3) * matrix_size + Bi + 3] += cc*cnst724;
    double cnst727 =  (  ( cnst30* (  ( C18755*C19022 ) *C19040 )  ) - ( gy201101*cnst33 )  ) - ( gy021101*cnst33 ) ;
    gy[(Ai + 3) * matrix_size + Bi + 3] += cc*cnst727;
    double cnst732 =  (  ( cnst30* (  ( C18694*C18716 ) *C19040 )  ) - ( gx201011*cnst33 )  ) - ( cnst33*gx021011 ) ;
    gx[(Ai + 3) * matrix_size + Bi + 1] += cnst732*cc;
    double cnst735 =  (  ( cnst30* ( C18780* ( C19137*C19022 )  )  ) - ( gy201110*cnst33 )  ) - ( gy021110*cnst33 ) ;
    gy[(Ai + 3) * matrix_size + Bi + 0] += cnst735*cc;
    double gy003200 =  ( C18737*C18755 ) *C18780;
    double cnst739 =  ( cnst36*gy201020 ) + (  (  ( cnst22*gy003200 ) - ( cnst22*gy003020 )  ) - ( cnst36*gz210200 )  ) ;
    gy[(Ai + 3) * matrix_size + Bi + 4] += cc* (  ( cnst36*gy021020 ) + ( cnst739- ( gy021200*cnst36 )  )  ) ;
    double gx003200 =  ( C19185*C18673 ) *C18780;
    double cnst745 =  ( cnst36*gx201020 ) + (  (  ( cnst22*gx003200 ) - ( cnst22*gx003020 )  ) - ( cnst36*gx201200 )  ) ;
    gx[(Ai + 3) * matrix_size + Bi + 4] += cc* (  ( cnst745- ( cnst36*gx021200 )  ) + ( gz120020*cnst36 )  ) ;
    double cnst750 =  (  (  ( C18780* ( C19141*C18716 )  ) *cnst30 ) - ( gx201110*cnst33 )  ) - ( gx021110*cnst33 ) ;
    gx[(Ai + 3) * matrix_size + Bi + 0] += cc*cnst750;
    double gy012200 =  ( C18737*C18747 ) *C19046;
    gy[(Ai + 2) * matrix_size + Bi + 4] += cc* (  ( cnst348- ( gy012200*cnst27 )  ) + ( cnst27*gy012020 )  ) ;
    double gy102020 =  ( C19183*C18674 ) *C19046;
    double gx102200 =  ( C19199*C18673 ) *C19046;
    double gx102020 =  ( C18702*C18715 ) *C19046;
    gx[(Ai + 4) * matrix_size + Bi + 4] +=  (  ( cnst448+ ( cnst27*gx102200 )  ) - ( cnst27*gx102020 )  ) *cc;
    double gy102200 =  ( C18755*C18868 ) *C19046;
    gy[(Ai + 4) * matrix_size + Bi + 4] += cc* (  (  ( gy102200*cnst27 ) +cnst412 ) - ( cnst27*gy102020 )  ) ;
    double C18813 =  (  ( C18798- (  ( be*C19046 ) *2 )  ) /C18691 ) - (  ( C18810*C18783 ) /C18684 ) ;
    double C19160 =  (  (  ( C18810*3 ) + (  ( C18780*ae ) *2 )  ) /C18691 ) + (  ( C18813*C18725 ) /C18684 ) ;
    double cnst768 =  (  ( cnst30* (  ( C18673*C18716 ) *C19160 )  ) - ( gz201011*cnst33 )  ) - ( gz021011*cnst33 ) ;
    gz[(Ai + 3) * matrix_size + Bi + 1] += cc*cnst768;
    double cnst771 =  (  ( cnst30* (  ( C18673*C19022 ) *C19160 )  ) - ( gz201101*cnst33 )  ) - ( gz021101*cnst33 ) ;
    gz[(Ai + 3) * matrix_size + Bi + 3] += cc*cnst771;
    double gz003020 = C18813* ( C18673*C18715 ) ;
    double cnst775 =  (  (  ( C18813* ( C19022*C18716 )  ) *cnst30 ) - ( cnst33*gz201110 )  ) - ( gz021110*cnst33 ) ;
    gz[(Ai + 3) * matrix_size + Bi + 0] += cc*cnst775;
    double gz003200 = C18813* ( C18737*C18673 ) ;
    double cnst779 =  (  (  ( cnst22*gz003200 ) - ( cnst22*gz003020 )  ) - ( gz201200*cnst36 )  ) + ( gz201020*cnst36 ) ;
    gz[(Ai + 3) * matrix_size + Bi + 4] +=  (  ( cnst779- ( gz021200*cnst36 )  ) + ( cnst36*gz021020 )  ) *cc;
    double C19161 =  (  ( C18798+ (  ( C19046*ae ) *2 )  ) /C18691 ) + (  ( C18810*C18725 ) /C18684 ) ;
    double cnst786 =  (  ( C18725*C19160 ) /C18684 ) + (  (  ( cnst4*C19040 ) + (  ( 3*C19161 ) +C18813 )  ) /C18691 ) ;
    double gx012020 =  ( C18694*C18827 ) *C19046;
    double gx012200 =  ( C18681*C19185 ) *C19046;
    gx[(Ai + 2) * matrix_size + Bi + 4] += cc* (  ( gx012020*cnst27 ) + ( cnst439- ( cnst27*gx012200 )  )  ) ;
    double C19041 = C18978+ (  ( C18725*C19046 ) /C18684 ) ;
    double C18796 =  (  ( C19040*C18725 ) /C18684 ) + (  (  ( C19041*3 ) +C18780 ) /C18691 ) ;
    double C18885 =  (  ( C19041*C18725 ) /C18684 ) + (  (  ( 2*C19044 ) +C19046 ) /C18691 ) ;
    double cnst797 = cnst35* (  ( C18694*C18681 ) *C18885 ) ;
    double C19200 =  (  ( C18725*C19161 ) /C18684 ) + (  (  (  ( C19041*ae ) *2 ) + ( C18810+ ( 2*C19134 )  )  ) /C18691 ) ;
    double cnst807 =  (  ( - ( 0.5*gy003200 )  ) - ( 0.5*gy003020 )  ) + (  ( C18755*C18673 ) *C18796 ) ;
    double cnst813 =  (  ( C18694*C18673 ) *C18796 ) + (  ( - ( 0.5*gx003200 )  ) - ( 0.5*gx003020 )  ) ;
    double cnst819 =  ( cnst786* ( C18673*C18673 )  ) + (  ( - ( 0.5*gz003200 )  ) - ( 0.5*gz003020 )  ) ;
    double cnst822 = std::sqrt(18.);
    double cnst825 =  ( cnst29*gy030110 ) + (  ( gy210110*cnst29 ) + (  (  ( C19133*C19022 ) *C19046 ) *cnst822 )  ) ;
    gy[(Ai + 2) * matrix_size + Bi + 0] += - ( cc*cnst825 ) ;
    double cnst828 =  (  (  ( C19132*C18716 ) *C19046 ) *cnst822 ) - (  ( gx120110*cnst29 ) + ( cnst29*gx300110 )  ) ;
    gx[(Ai + 4) * matrix_size + Bi + 0] += cc*cnst828;
    double cnst830 =  (  ( C19041* ( C19137*C18674 )  ) *cnst822 ) - (  ( gy120011*cnst29 ) + ( gy300011*cnst29 )  ) ;
    gy[(Ai + 4) * matrix_size + Bi + 1] += cc*cnst830;
    double cnst832 =  ( cnst822* (  ( C19042*C18673 ) *C19161 )  ) - (  ( cnst29*gz120101 ) + ( gz300101*cnst29 )  ) ;
    gz[(Ai + 4) * matrix_size + Bi + 3] += cc*cnst832;
    double cnst834 =  ( cnst822* ( C19046* ( C19042*C19137 )  )  ) - (  ( gy120110*cnst29 ) + ( gy300110*cnst29 )  ) ;
    gy[(Ai + 4) * matrix_size + Bi + 0] += cc*cnst834;
    double cnst836 =  (  ( C19041* ( C18702*C18716 )  ) *cnst822 ) - (  ( gx300011*cnst29 ) + ( gx120011*cnst29 )  ) ;
    gx[(Ai + 4) * matrix_size + Bi + 1] += cc*cnst836;
    double cnst839 =  ( gy030011*cnst29 ) + (  ( gy210011*cnst29 ) + (  ( C19041* ( C18673*C19133 )  ) *cnst822 )  ) ;
    gy[(Ai + 2) * matrix_size + Bi + 1] += - ( cc*cnst839 ) ;
    double cnst842 =  ( cnst822* (  ( C19132*C18673 ) *C19041 )  ) - (  ( cnst29*gx120101 ) + ( gx300101*cnst29 )  ) ;
    gx[(Ai + 4) * matrix_size + Bi + 3] += cc*cnst842;
    double cnst844 =  ( cnst822* (  ( C18716*C18674 ) *C19161 )  ) - (  ( cnst29*gz120011 ) + ( gz300011*cnst29 )  ) ;
    gz[(Ai + 4) * matrix_size + Bi + 1] += cc*cnst844;
    double cnst846 =  ( cnst822* ( C18810* ( C19042*C18716 )  )  ) - (  ( cnst29*gz300110 ) + ( gz120110*cnst29 )  ) ;
    gz[(Ai + 4) * matrix_size + Bi + 0] += cc*cnst846;
    double cnst849 =  (  ( gz210101*cnst29 ) + (  (  ( C18681*C19022 ) *C19161 ) *cnst822 )  ) + ( gz030101*cnst29 ) ;
    gz[(Ai + 2) * matrix_size + Bi + 3] += - ( cc*cnst849 ) ;
    double cnst853 =  (  ( gy210101*cnst29 ) + (  ( C19041* ( C19022*C18747 )  ) *cnst822 )  ) + ( cnst29*gy030101 ) ;
    gy[(Ai + 2) * matrix_size + Bi + 3] += - ( cc*cnst853 ) ;
    double cnst856 =  ( cnst822* ( C19041* ( C19042*C18755 )  )  ) - (  ( cnst29*gy300101 ) + ( cnst29*gy120101 )  ) ;
    gy[(Ai + 4) * matrix_size + Bi + 3] += cnst856*cc;
    double cnst859 =  (  ( gz210110*cnst29 ) + (  (  ( C19022*C19043 ) *C18810 ) *cnst822 )  ) + ( cnst29*gz030110 ) ;
    gz[(Ai + 2) * matrix_size + Bi + 0] += - ( cc*cnst859 ) ;
    double cnst863 =  ( cnst29*gx030011 ) + (  ( cnst822* (  ( C18694*C19043 ) *C19041 )  ) + ( cnst29*gx210011 )  ) ;
    gx[(Ai + 2) * matrix_size + Bi + 1] += - ( cc*cnst863 ) ;
    double cnst867 =  ( gz030011*cnst29 ) + (  ( gz210011*cnst29 ) + (  (  ( C18673*C19043 ) *C19161 ) *cnst822 )  ) ;
    gz[(Ai + 2) * matrix_size + Bi + 1] += - ( cc*cnst867 ) ;
    double cnst871 =  ( cnst29*gx030110 ) + (  ( gx210110*cnst29 ) + ( cnst822* ( C19046* ( C19141*C19043 )  )  )  ) ;
    gx[(Ai + 2) * matrix_size + Bi + 0] += - ( cc*cnst871 ) ;
    double cnst875 =  ( gx030101*cnst29 ) + (  (  (  ( C18681*C19141 ) *C19041 ) *cnst822 ) + ( cnst29*gx210101 )  ) ;
    gx[(Ai + 2) * matrix_size + Bi + 3] += - ( cnst875*cc ) ;
    double cnst878 = std::sqrt(1.5);
    double cnst880 =  ( gy012200*cnst878 ) + (  (  ( cnst21*gy210020 ) +cnst344 ) - ( gy210002*cnst32 )  ) ;
    double cnst882 =  ( cnst878*gx012200 ) + (  ( cnst431+ ( gx210020*cnst21 )  ) - ( gx210002*cnst32 )  ) ;
    double cnst885 =  (  ( cnst623+ ( gz120020*cnst21 )  ) - ( gz120002*cnst32 )  ) - ( cnst878*gz102200 ) ;
    double cnst888 =  (  ( cnst878*gy012020 ) +cnst880 ) - (  (  ( C18673*C18747 ) *C18885 ) *cnst35 ) ;
    gy[(Ai + 2) * matrix_size + Bi + 2] += cc*cnst888;
    double cnst890 =  (  (  ( cnst21*gy120020 ) +cnst406 ) - ( gy120002*cnst32 )  ) - ( cnst878*gy102200 ) ;
    double cnst893 =  ( cnst35* ( C19200* ( C18673*C18674 )  )  ) + ( cnst885- ( gz102020*cnst878 )  ) ;
    gz[(Ai + 4) * matrix_size + Bi + 2] += cc*cnst893;
    double cnst895 =  (  ( cnst459+ ( gx120020*cnst21 )  ) - ( gx120002*cnst32 )  ) - ( cnst878*gx102200 ) ;
    double cnst897 =  ( cnst895- ( cnst878*gx102020 )  ) + ( cnst35* (  ( C18702*C18673 ) *C18885 )  ) ;
    gx[(Ai + 4) * matrix_size + Bi + 2] += cc*cnst897;
    gy[(Ai + 4) * matrix_size + Bi + 2] += cc* ( cnst797+ ( cnst890- ( cnst878*gy102020 )  )  ) ;
    gx[(Ai + 2) * matrix_size + Bi + 2] += cc* (  (  ( gx012020*cnst878 ) +cnst882 ) -cnst797 ) ;
    double cnst906 =  ( cnst878*gz012200 ) + (  (  ( gz210020*cnst21 ) +cnst629 ) - ( cnst32*gz210002 )  ) ;
    double cnst908 =  (  ( cnst878*gz012020 ) +cnst906 ) - ( cnst35* (  ( C18681*C18673 ) *C19200 )  ) ;
    gz[(Ai + 2) * matrix_size + Bi + 2] += cc*cnst908;
    double cnst913 =  ( gy021200*0.75 ) + (  (  ( gy201020*0.75 ) + ( cnst807+ ( gz210200*0.75 )  )  ) - ( gy201002*1.5 )  ) ;
    gy[(Ai + 3) * matrix_size + Bi + 2] += cc* (  ( cnst913+ ( gy021020*0.75 )  ) - ( gy021002*1.5 )  ) ;
    double cnst918 =  (  (  (  ( gz201200*0.75 ) +cnst819 ) + ( gz201020*0.75 )  ) - ( gz201002*1.5 )  ) + ( gz021200*0.75 ) ;
    gz[(Ai + 3) * matrix_size + Bi + 2] += cc* (  ( cnst918+ ( gz021020*0.75 )  ) - ( gz021002*1.5 )  ) ;
    double cnst923 =  (  (  ( gx201020*0.75 ) + (  ( gx201200*0.75 ) +cnst813 )  ) - ( gx201002*1.5 )  ) + ( gx021200*0.75 ) ;
    gx[(Ai + 3) * matrix_size + Bi + 2] += cc* (  ( cnst923+ ( gz120020*0.75 )  ) - ( gx021002*1.5 )  ) ;
    double cnst927 = std::sqrt( ( 11.25/8.0 ) );
    double cnst929 =  (  (  ( cnst16*gx030200 ) + ( gx030020*cnst16 )  ) - ( cnst26*gx030002 )  ) - ( gx210200*cnst927 ) ;
    gx[(Ai + 0) * matrix_size + Bi + 2] += cc* (  ( cnst929- ( gx210020*cnst927 )  ) + ( gx210002*cnst39 )  ) ;
    double cnst934 =  (  ( cnst26*gz300002 ) - (  ( gz300020*cnst16 ) + ( cnst16*gz300200 )  )  ) - ( cnst927*gz120200 ) ;
    double cnst936 =  (  (  ( cnst16*gy030020 ) + ( cnst16*gy030200 )  ) - ( cnst26*gy030002 )  ) - ( cnst927*gy210200 ) ;
    gz[(Ai + 6) * matrix_size + Bi + 2] += cc* (  ( cnst24*gz120002 ) + ( cnst934- ( cnst927*gz120020 )  )  ) ;
    gy[(Ai + 0) * matrix_size + Bi + 2] += cc* (  ( cnst936- ( cnst927*gy210020 )  ) + ( cnst39*gy210002 )  ) ;
    double cnst945 =  (  (  ( gz030200*cnst16 ) + ( cnst16*gz030020 )  ) - ( cnst26*gz030002 )  ) - ( cnst927*gz210200 ) ;
    gz[(Ai + 0) * matrix_size + Bi + 2] += cc* (  ( cnst39*gz210002 ) + ( cnst945- ( gz210020*cnst927 )  )  ) ;
    double cnst949 =  (  ( cnst26*gx300002 ) - (  ( cnst16*gx300020 ) + ( cnst16*gx300200 )  )  ) - ( cnst927*gx120200 ) ;
    double cnst951 =  (  ( gy300002*cnst26 ) - (  ( cnst16*gy300020 ) + ( gy300200*cnst16 )  )  ) - ( cnst927*gy120200 ) ;
    gx[(Ai + 6) * matrix_size + Bi + 2] +=  (  ( cnst24*gx120002 ) + ( cnst949- ( cnst927*gx120020 )  )  ) *cc;
    gy[(Ai + 6) * matrix_size + Bi + 2] += cc* (  ( cnst951- ( cnst927*gy120020 )  ) + ( gy120002*cnst24 )  ) ;
    double cnst958 = std::sqrt(11.25);
    gx[(Ai + 1) * matrix_size + Bi + 4] += cc* (  ( cnst958*gx111200 ) - ( cnst958*gx111020 )  ) ;
    gz[(Ai + 1) * matrix_size + Bi + 4] += cc* (  ( cnst958*gz111200 ) - ( cnst958*gz111020 )  ) ;
    gy[(Ai + 1) * matrix_size + Bi + 4] += cc* (  ( cnst958*gy111200 ) - ( gy111020*cnst958 )  ) ;
}
