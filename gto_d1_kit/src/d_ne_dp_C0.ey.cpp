/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void vne_gradient_21_3(
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
    double C207 = bs[3];
    double C201 = bs[1];
    double C206 = bs[2];
    double C208 = bs[4];
    double cnst0 = std::sqrt(0.75);
    double C203 = yA-yB;
    double C202 = xA-xB;
    double cnst1 = std::sqrt(3.0);
    double C204 = zA-zB;
    double C229 =  ( be*ae ) * (  ( std::pow(C204 , 2) ) + (  ( std::pow(C202 , 2) ) + ( std::pow(C203 , 2) )  )  ) ;
    double C200 = be+ae;
    double C222 =  (  ( ae*yA ) + ( be*yB )  ) /C200;
    double C227 = C222-yC;
    double C442 = C222-yB;
    double C217 = C200*2;
    double C232 = std::exp( ( - ( C229/C200 )  ) );
    double C2826 = C232* ( Pi*2. ) ;
    double C2911 = C2826*C207;
    double C197 = C2911/C200;
    double C2827 = C201*C2826;
    double C192 = C2827/C200;
    double C2907 = C206*C2826;
    double C194 = C2907/C200;
    double C233 = C232*Pi;
    double C238 = 4* ( C233*C227 ) ;
    double C244 = C238*C206;
    double C260 = C244/C217;
    double C245 = C238*C207;
    double C2942 = C245/C217;
    double C464 =  ( C194+ ( C442*C244 )  ) - ( C245*C227 ) ;
    double C2941 = C208*C238;
    double C3079 =  (  ( C245*C442 ) +C197 ) - ( C2941*C227 ) ;
    double C243 = C238*C201;
    double C463 =  ( C192+ ( C243*C442 )  ) - ( C227*C244 ) ;
    double C257 = C243/C217;
    double C220 =  (  ( ae*xA ) + ( be*xB )  ) /C200;
    double C226 = C220-xC;
    double C443 = C226*C244;
    double C444 = C245*C226;
    double C237 =  ( C233*C226 ) *4;
    double C2939 = C208*C237;
    double C3031 = C227*C2939;
    double C242 = C237*C207;
    double C2940 = C242/C217;
    double C3078 =  ( C442*C242 ) -C3031;
    double C241 = C237*C206;
    double C456 =  ( C241*C442 ) -C444;
    double C254 = C241/C217;
    double C3124 =  (  ( C254+ ( C456*C442 )  ) - ( C3078*C227 )  ) -C2940;
    double C240 = C237*C201;
    double C251 = C240/C217;
    double C455 =  ( C240*C442 ) -C443;
    double C957 =  (  ( C251+ ( C455*C442 )  ) - ( C456*C227 )  ) -C254;
    double C3052 = C957- ( C203*C455 ) ;
    double cnst20 =  (  (  (  ( C455/C200 ) + ( C957*C442 )  ) - ( C3124*C227 )  ) - ( C456/C200 )  ) - ( C203*C957 ) ;
    double gx020010 = cnst20- ( C203*C3052 ) ;
    double C224 = C220-xB;
    double C269 =  ( C243*C224 ) -C443;
    double C274 =  ( C194+ ( C241*C224 )  ) - ( C242*C226 ) ;
    double C273 =  ( C192+ ( C240*C224 )  ) - ( C241*C226 ) ;
    double C270 =  ( C224*C244 ) -C444;
    double cnst40 =  (  (  (  ( C270*C224 ) +C260 ) - (  (  ( C245*C224 ) -C3031 ) *C226 )  ) -C2942 ) *C226;
    double C287 =  (  (  ( C269*C224 ) +C257 ) - ( C270*C226 )  ) -C260;
    double cnst47 =  (  (  (  ( C269/C200 ) + ( C287*C224 )  ) -cnst40 ) - ( C270/C200 )  ) - ( C202*C287 ) ;
    double gy200100 = cnst47- ( C202* ( C287- ( C202*C269 )  )  ) ;
    double C472 =  ( C224*C463 ) - ( C464*C226 ) ;
    double C3137 =  (  ( C463/C217 ) + ( C472*C224 )  ) - (  (  ( C224*C464 ) - ( C3079*C226 )  ) *C226 ) ;
    double C3158 = C3137- ( C464/C217 ) ;
    double gy200010 =  ( C3158- ( C202*C472 )  ) - ( C202* ( C472- ( C202*C463 )  )  ) ;
    double C3049 = C472- ( C203*C269 ) ;
    gy[(Ai + 0) * matrix_size + Bi + 0] +=  (  ( C3158- ( C203*C287 )  ) - ( C202*C3049 )  ) *cnst1;
    double C2919 =  ( C192-C194 ) / ( C200*2. ) ;
    double C223 =  (  ( zA*ae ) + ( be*zB )  ) /C200;
    double C624 = C223-zB;
    double C228 = C223-zC;
    double C3039 = C228*C2939;
    double C3082 =  ( C624*C242 ) -C3039;
    double C3092 = C3082*C227;
    double C239 =  ( C228*C233 ) *4;
    double C248 = C239*C207;
    double C626 = C248*C226;
    double C638 =  ( C241*C624 ) -C626;
    double C3130 =  (  ( C254+ ( C638*C624 )  ) - ( C228*C3082 )  ) -C2940;
    double C3112 =  ( C638*C442 ) -C3092;
    double C2964 = C638/C217;
    double C628 = C248*C227;
    double C640 =  ( C624*C244 ) -C628;
    double C2969 = C640/C217;
    double C1111 = C640*C226;
    double C2944 = C248/C217;
    double C3084 =  (  ( C248*C624 ) +C197 ) - ( C228* ( C208*C239 )  ) ;
    double C247 = C239*C206;
    double C627 = C247*C227;
    double C639 =  ( C243*C624 ) -C627;
    double C650 =  ( C224*C639 ) -C1111;
    double C3066 = C650- ( C269*C204 ) ;
    double C2966 = C639/C217;
    double C3161 =  (  ( C2966+ ( C224*C650 )  ) - (  (  ( C224*C640 ) -C3092 ) *C226 )  ) -C2969;
    double gy200001 =  ( C3161- ( C202*C650 )  ) - (  ( C650- ( C202*C639 )  ) *C202 ) ;
    gy[(Ai + 3) * matrix_size + Bi + 0] +=  (  ( C3161- ( C287*C204 )  ) - ( C202*C3066 )  ) *cnst1;
    double C1558 =  (  (  ( C624*C639 ) +C257 ) - ( C228*C640 )  ) -C260;
    double C3074 = C1558- ( C204*C639 ) ;
    double C625 = C247*C226;
    double C637 =  ( C240*C624 ) -C625;
    double C1116 =  ( C637*C442 ) -C1111;
    double C3069 = C1116- ( C455*C204 ) ;
    double C2961 = C637/C217;
    double C3166 =  (  (  ( C1116*C442 ) +C2961 ) - ( C3112*C227 )  ) -C2964;
    gx[(Ai + 1) * matrix_size + Bi + 1] +=  (  ( C3166- ( C957*C204 )  ) - ( C203*C3069 )  ) *cnst1;
    double C1557 =  (  ( C251+ ( C637*C624 )  ) - ( C228*C638 )  ) -C254;
    double C3184 =  (  ( C1557*C442 ) - ( C3130*C227 )  ) - ( C1116*C204 ) ;
    double cnst97 =  (  (  (  ( C1557*C624 ) + ( C637/C200 )  ) - ( C228*C3130 )  ) - ( C638/C200 )  ) - ( C1557*C204 ) ;
    double C3073 = C1557- ( C637*C204 ) ;
    gx[(Ai + 1) * matrix_size + Bi + 2] +=  ( C3184- ( C203*C3073 )  ) *cnst1;
    double C3056 = C1116- ( C203*C637 ) ;
    double gx020001 =  ( C3166- ( C203*C1116 )  ) - ( C203*C3056 ) ;
    double C266 = C247/C217;
    double C648 =  (  ( C247*C624 ) +C194 ) - ( C228*C248 ) ;
    double C3114 =  ( C442*C648 ) - ( C3084*C227 ) ;
    double C2974 = C648/C217;
    double C460 =  ( C247*C442 ) -C628;
    double C272 =  ( C247*C224 ) -C626;
    double cnst112 =  (  (  (  ( C224*C272 ) +C266 ) - (  (  ( C224*C248 ) -C3039 ) *C226 )  ) -C2944 ) *C226;
    double C246 = C239*C201;
    double C459 =  ( C246*C442 ) -C627;
    double C470 =  ( C459*C224 ) - ( C460*C226 ) ;
    double C647 =  ( C192+ ( C246*C624 )  ) - ( C228*C247 ) ;
    double C654 =  ( C647*C224 ) - ( C226*C648 ) ;
    double C1118 =  ( C647*C442 ) - ( C227*C648 ) ;
    double C3061 = C1118- ( C203*C647 ) ;
    double C3072 = C1118- ( C459*C204 ) ;
    double C3156 =  ( C1118*C224 ) - ( C226*C3114 ) ;
    double C3177 = C3156- ( C470*C204 ) ;
    gz[(Ai + 3) * matrix_size + Bi + 1] +=  ( C3177- ( C202*C3072 )  ) *cnst1;
    gz[(Ai + 0) * matrix_size + Bi + 2] +=  (  ( C3156- ( C203*C654 )  ) - ( C202*C3061 )  ) *cnst1;
    double C2971 = C647/C217;
    double C3168 =  (  (  ( C1118*C442 ) +C2971 ) - ( C227*C3114 )  ) -C2974;
    double gz020001 =  ( C3168- ( C203*C1118 )  ) - ( C203*C3061 ) ;
    double C3162 =  (  (  ( C224*C654 ) +C2971 ) - (  (  ( C224*C648 ) - ( C3084*C226 )  ) *C226 )  ) -C2974;
    double gz200001 =  ( C3162- ( C202*C654 )  ) - ( C202* ( C654- ( C202*C647 )  )  ) ;
    gz[(Ai + 4) * matrix_size + Bi + 2] +=  ( cnst0*gz200001 ) - ( cnst0*gz020001 ) ;
    double C271 =  ( C246*C224 ) -C625;
    double C3068 = C654- ( C271*C204 ) ;
    gz[(Ai + 1) * matrix_size + Bi + 0] +=  ( C3177- ( C203*C3068 )  ) *cnst1;
    double C3051 = C470- ( C203*C271 ) ;
    double C263 = C246/C217;
    double C959 =  (  ( C263+ ( C459*C442 )  ) - ( C460*C227 )  ) -C266;
    double C3054 = C959- ( C203*C459 ) ;
    gz[(Ai + 1) * matrix_size + Bi + 1] +=  (  ( C3168- ( C959*C204 )  ) - ( C203*C3072 )  ) *cnst1;
    double C288 =  (  ( C263+ ( C271*C224 )  ) - ( C226*C272 )  ) -C266;
    gz[(Ai + 3) * matrix_size + Bi + 0] += cnst1* (  ( C3162- ( C288*C204 )  ) - ( C202*C3068 )  ) ;
    double cnst159 =  (  (  (  ( C271/C200 ) + ( C288*C224 )  ) -cnst112 ) - ( C272/C200 )  ) - ( C288*C202 ) ;
    double gz200100 = cnst159- (  ( C288- ( C202*C271 )  ) *C202 ) ;
    double C3036 = C228*C2941;
    double C3080 =  ( C442*C248 ) -C3036;
    double C3126 =  (  (  ( C460*C442 ) +C266 ) - ( C3080*C227 )  ) -C2944;
    double C3180 =  (  ( C959*C224 ) - ( C226*C3126 )  ) - ( C203*C470 ) ;
    gz[(Ai + 0) * matrix_size + Bi + 1] +=  ( C3180- ( C202*C3054 )  ) *cnst1;
    double gz020100 = C3180- ( C203*C3051 ) ;
    gz[(Ai + 4) * matrix_size + Bi + 0] +=  ( cnst0*gz200100 ) - ( gz020100*cnst0 ) ;
    double cnst165 =  (  (  (  ( C459/C200 ) + ( C959*C442 )  ) - ( C227*C3126 )  ) - ( C460/C200 )  ) - ( C203*C959 ) ;
    double gz020010 = cnst165- ( C203*C3054 ) ;
    double C3138 =  (  ( C470*C224 ) + ( C459/C217 )  ) - (  (  ( C460*C224 ) - ( C3080*C226 )  ) *C226 ) ;
    double C3159 = C3138- ( C460/C217 ) ;
    double gz200010 =  ( C3159- ( C470*C202 )  ) - ( C202* ( C470- ( C202*C459 )  )  ) ;
    gz[(Ai + 4) * matrix_size + Bi + 1] +=  ( cnst0*gz200010 ) - ( gz020010*cnst0 ) ;
    gz[(Ai + 0) * matrix_size + Bi + 0] +=  (  ( C3159- ( C203*C288 )  ) - ( C202*C3051 )  ) *cnst1;
    double C3083 =  ( C245*C624 ) -C3036;
    double C3131 =  (  ( C260+ ( C640*C624 )  ) - ( C228*C3083 )  ) -C2942;
    double cnst173 =  (  (  (  ( C639/C200 ) + ( C624*C1558 )  ) - ( C228*C3131 )  ) - ( C640/C200 )  ) - ( C204*C1558 ) ;
    double C3182 =  (  ( C224*C1558 ) - ( C226*C3131 )  ) - ( C204*C650 ) ;
    gy[(Ai + 3) * matrix_size + Bi + 2] +=  ( C3182- ( C202*C3074 )  ) *cnst1;
    double C2902 = be*C204;
    double C2887 =  (  ( - (  ( C2827*C2902 ) /C200 )  ) /C200 ) - (  ( C2907*C228 ) /C200 ) ;
    double C621 = C2887+ (  ( C2827*C204 ) /C200 ) ;
    double C1119 =  ( C621+ ( C442*C639 )  ) - ( C640*C227 ) ;
    double C3059 = C1119- ( C203*C639 ) ;
    double C3071 = C1119- ( C204*C463 ) ;
    double C1560 =  (  ( C621+ ( C263+ ( C647*C624 )  )  ) - ( C228*C648 )  ) -C266;
    double C3075 = C1560- ( C647*C204 ) ;
    double C653 =  (  ( C637*C224 ) +C621 ) - ( C638*C226 ) ;
    double C3064 = C653- ( C273*C204 ) ;
    double cnst203 =  (  ( - (  ( C2907*C2902 ) /C200 )  ) /C200 ) - (  ( C228*C2911 ) /C200 ) ;
    double C623 =  (  ( C2907*C204 ) /C200 ) +cnst203;
    double C3132 =  (  (  (  ( C624*C648 ) +C266 ) +C623 ) - ( C228*C3084 )  ) -C2944;
    double C3186 =  (  ( C1560*C442 ) - ( C3132*C227 )  ) - ( C1118*C204 ) ;
    gz[(Ai + 1) * matrix_size + Bi + 2] +=  ( C3186- ( C203*C3075 )  ) *cnst1;
    double C3183 =  (  ( C1560*C224 ) - ( C3132*C226 )  ) - ( C204*C654 ) ;
    gz[(Ai + 3) * matrix_size + Bi + 2] +=  ( C3183- ( C202*C3075 )  ) *cnst1;
    double C3113 =  (  ( C442*C640 ) +C623 ) - ( C3083*C227 ) ;
    double C3155 =  ( C224*C1119 ) - ( C226*C3113 ) ;
    double C3176 = C3155- ( C472*C204 ) ;
    gy[(Ai + 3) * matrix_size + Bi + 1] +=  ( C3176- ( C202*C3071 )  ) *cnst1;
    gy[(Ai + 1) * matrix_size + Bi + 0] +=  ( C3176- ( C203*C3066 )  ) *cnst1;
    gy[(Ai + 0) * matrix_size + Bi + 2] +=  (  ( C3155- ( C203*C650 )  ) - ( C202*C3059 )  ) *cnst1;
    double cnst209 =  ( C2919- (  ( C228*cnst203 ) + (  ( C2887*C2902 ) /C200 )  )  ) + ( C2887*C204 ) ;
    double C1256 =  ( C204*C621 ) +cnst209;
    double cnst212 =  (  (  (  ( C647/C200 ) + ( C1560*C624 )  ) +C1256 ) - ( C228*C3132 )  ) - ( C648/C200 ) ;
    double C3181 =  (  ( C1256+ ( C1557*C224 )  ) - ( C3130*C226 )  ) - ( C653*C204 ) ;
    gx[(Ai + 3) * matrix_size + Bi + 2] +=  ( C3181- ( C202*C3073 )  ) *cnst1;
    double C3185 =  (  ( C1256+ ( C442*C1558 )  ) - ( C227*C3131 )  ) - ( C204*C1119 ) ;
    gy[(Ai + 1) * matrix_size + Bi + 2] += cnst1* ( C3185- ( C203*C3074 )  ) ;
    double C2831 = C202*be;
    double C2844 =  (  ( - (  ( C2831*C2827 ) /C200 )  ) /C200 ) - (  ( C2907*C226 ) /C200 ) ;
    double C193 = C2844+ (  ( C202*C2827 ) /C200 ) ;
    double C290 =  (  (  ( C251+ ( C273*C224 )  ) +C193 ) - ( C226*C274 )  ) -C254;
    double C2932 =  (  ( - (  ( C2907*C2831 ) /C200 )  ) /C200 ) - (  ( C226*C2911 ) /C200 ) ;
    double C2934 =  (  ( C2907*C202 ) /C200 ) +C2932;
    double C3081 =  (  ( C653*C224 ) +C2961 ) + (  ( C204*C193 ) - (  ( C228*C2934 ) + (  ( C2902*C193 ) /C200 )  )  ) ;
    double C3160 =  ( C3081- (  (  (  ( C638*C224 ) +C623 ) - ( C3082*C226 )  ) *C226 )  ) -C2964;
    double gx200001 =  ( C3160- ( C202*C653 )  ) - (  ( C653- ( C637*C202 )  ) *C202 ) ;
    gx[(Ai + 4) * matrix_size + Bi + 2] +=  ( cnst0*gx200001 ) - ( gx020001*cnst0 ) ;
    gx[(Ai + 3) * matrix_size + Bi + 0] +=  (  ( C3160- ( C204*C290 )  ) - ( C202*C3064 )  ) *cnst1;
    double cnst236 =  ( C2934+ ( C254+ ( C224*C274 )  )  ) - (  (  (  ( C224*C242 ) +C197 ) - ( C226*C2939 )  ) *C226 ) ;
    double C195 =  (  ( C202*C2844 ) + ( C2919- (  (  ( C2831*C2844 ) /C200 ) + ( C226*C2932 )  )  )  ) + ( C202*C193 ) ;
    double cnst245 =  (  ( C195+ (  ( C273/C200 ) + ( C224*C290 )  )  ) - (  ( cnst236-C2940 ) *C226 )  ) - ( C274/C200 ) ;
    double gx200100 =  ( cnst245- ( C202*C290 )  ) - ( C202* ( C290- ( C202*C273 )  )  ) ;
    double C2897 = C203*be;
    double C2933 =  (  ( - (  ( C2907*C2897 ) /C200 )  ) /C200 ) - (  ( C227*C2911 ) /C200 ) ;
    double C441 = C2933+ (  ( C203*C2907 ) /C200 ) ;
    double C3125 =  (  (  (  ( C442*C464 ) +C260 ) +C441 ) - ( C3079*C227 )  ) -C2942;
    double C2869 =  (  ( - (  ( C2897*C2827 ) /C200 )  ) /C200 ) - (  ( C2907*C227 ) /C200 ) ;
    double C439 =  (  ( C203*C2827 ) /C200 ) +C2869;
    double C960 =  (  ( C439+ (  ( C442*C463 ) +C257 )  ) - ( C464*C227 )  ) -C260;
    double C3053 = C960- ( C203*C463 ) ;
    double C3179 =  (  ( C960*C224 ) - ( C3125*C226 )  ) - ( C203*C472 ) ;
    double gy020100 = C3179- ( C203*C3049 ) ;
    gy[(Ai + 4) * matrix_size + Bi + 0] +=  ( cnst0*gy200100 ) - ( cnst0*gy020100 ) ;
    gy[(Ai + 0) * matrix_size + Bi + 1] +=  ( C3179- ( C202*C3053 )  ) *cnst1;
    double C791 =  ( C203*C439 ) + (  ( C2919- (  ( C2933*C227 ) + (  ( C2897*C2869 ) /C200 )  )  ) + ( C203*C2869 )  ) ;
    double cnst270 =  (  ( C791+ (  ( C463/C200 ) + ( C960*C442 )  )  ) - ( C3125*C227 )  ) - ( C464/C200 ) ;
    double gy020010 =  ( cnst270- ( C203*C960 )  ) - ( C203*C3053 ) ;
    gy[(Ai + 4) * matrix_size + Bi + 1] +=  ( cnst0*gy200010 ) - ( gy020010*cnst0 ) ;
    double C471 =  ( C439+ ( C224*C455 )  ) - ( C456*C226 ) ;
    double C3047 = C471- ( C203*C273 ) ;
    double C3077 =  (  ( C455/C217 ) + ( C471*C224 )  ) + (  ( C203*C193 ) - (  ( C2934*C227 ) + (  ( C2897*C193 ) /C200 )  )  ) ;
    double C3157 =  ( C3077- (  (  (  ( C456*C224 ) +C441 ) - ( C3078*C226 )  ) *C226 )  ) - ( C456/C217 ) ;
    double gx200010 =  ( C3157- ( C202*C471 )  ) - ( C202* ( C471- ( C202*C455 )  )  ) ;
    gx[(Ai + 4) * matrix_size + Bi + 1] +=  ( cnst0*gx200010 ) - ( cnst0*gx020010 ) ;
    gx[(Ai + 0) * matrix_size + Bi + 0] +=  (  ( C3157- ( C203*C290 )  ) - ( C202*C3047 )  ) *cnst1;
    double C3178 =  (  (  ( C957*C224 ) +C791 ) - ( C3124*C226 )  ) - ( C203*C471 ) ;
    double gx020100 = C3178- ( C203*C3047 ) ;
    gx[(Ai + 4) * matrix_size + Bi + 0] +=  ( cnst0*gx200100 ) - ( cnst0*gx020100 ) ;
    gx[(Ai + 0) * matrix_size + Bi + 1] +=  ( C3178- ( C202*C3052 )  ) *cnst1;
    double C1109 =  ( C439*C204 ) - (  (  ( C439*C2902 ) /C200 ) + ( C228*C441 )  ) ;
    double C3154 =  ( C1109+ ( C1116*C224 )  ) - ( C3112*C226 ) ;
    gx[(Ai + 0) * matrix_size + Bi + 2] +=  (  ( C3154- ( C203*C653 )  ) - ( C202*C3056 )  ) *cnst1;
    double C3175 = C3154- ( C471*C204 ) ;
    gx[(Ai + 1) * matrix_size + Bi + 0] +=  ( C3175- ( C203*C3064 )  ) *cnst1;
    gx[(Ai + 3) * matrix_size + Bi + 1] +=  ( C3175- ( C3069*C202 )  ) *cnst1;
    double C3167 =  (  (  ( C2966+ ( C442*C1119 )  ) +C1109 ) - ( C227*C3113 )  ) -C2969;
    double gy020001 =  ( C3167- ( C203*C1119 )  ) - ( C203*C3059 ) ;
    gy[(Ai + 4) * matrix_size + Bi + 2] +=  ( gy200001*cnst0 ) - ( cnst0*gy020001 ) ;
    gy[(Ai + 1) * matrix_size + Bi + 1] += cnst1* (  ( C3167- ( C960*C204 )  ) - ( C203*C3071 )  ) ;
    gy[(Ai + 2) * matrix_size + Bi + 0] +=  (  ( - ( 0.5*gy200100 )  ) - ( 0.5*gy020100 )  ) + ( C3182- ( C3066*C204 )  ) ;
    gz[(Ai + 2) * matrix_size + Bi + 1] +=  ( C3186- ( C3072*C204 )  ) + (  ( - ( 0.5*gz200010 )  ) - ( gz020010*0.5 )  ) ;
    gz[(Ai + 2) * matrix_size + Bi + 2] +=  (  ( - ( 0.5*gz200001 )  ) - ( 0.5*gz020001 )  ) + (  ( cnst212- ( C1560*C204 )  ) - ( C3075*C204 )  ) ;
    gx[(Ai + 2) * matrix_size + Bi + 1] +=  ( C3184- ( C3069*C204 )  ) + (  ( - ( 0.5*gx200010 )  ) - ( 0.5*gx020010 )  ) ;
    gy[(Ai + 2) * matrix_size + Bi + 2] +=  ( cnst173- ( C204*C3074 )  ) + (  ( - ( 0.5*gy200001 )  ) - ( 0.5*gy020001 )  ) ;
    gx[(Ai + 2) * matrix_size + Bi + 0] +=  ( C3181- ( C204*C3064 )  ) + (  ( - ( 0.5*gx200100 )  ) - ( 0.5*gx020100 )  ) ;
    gy[(Ai + 2) * matrix_size + Bi + 1] +=  ( C3185- ( C3071*C204 )  ) + (  ( - ( 0.5*gy200010 )  ) - ( gy020010*0.5 )  ) ;
    gx[(Ai + 2) * matrix_size + Bi + 2] +=  (  ( - ( 0.5*gx200001 )  ) - ( gx020001*0.5 )  ) + ( cnst97- ( C204*C3073 )  ) ;
    gz[(Ai + 2) * matrix_size + Bi + 0] +=  ( C3183- ( C204*C3068 )  ) + (  ( - ( 0.5*gz200100 )  ) - ( 0.5*gz020100 )  ) ;
}
