/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void vne_gradient_12_2(
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
    double C201 = bs[3];
    double C190 = bs[1];
    double C198 = bs[2];
    double C191 = bs[0];
    double C202 = bs[4];
    double cnst0 = std::sqrt(0.75);
    double C194 = yA-yB;
    double C192 = xA-xB;
    double cnst1 = std::sqrt(3.0);
    double C195 = zA-zB;
    double C2652 = be*C195;
    double C193 = be*ae;
    double C255 =  (  ( std::pow(C195 , 2) ) + (  ( std::pow(C192 , 2) ) + ( std::pow(C194 , 2) )  )  ) *C193;
    double C219 = C194*C193;
    double C209 = C192*C193;
    double C221 = C195*C193;
    double C2589 = C192*be;
    double C2627 = C194*be;
    double C187 = be+ae;
    double C229 =  (  ( be*yB ) + ( ae*yA )  ) /C187;
    double C475 = C229-yB;
    double C246 = C229-yC;
    double C256 = C246*be;
    double C2697 = C187*2.;
    double C217 = C187*2;
    double C222 =  ( be/C187 ) -1;
    double C278 = std::exp( ( - ( C255/C187 )  ) );
    double C279 = C278* ( Pi*4 ) ;
    double C283 = C279* (  ( C256*C198 ) - (  ( C190*C219 ) /C187 )  ) ;
    double C327 =  ( - ( C283/C187 )  ) /C217;
    double C285 = C279* (  ( C256*C201 ) - (  ( C198*C219 ) /C187 )  ) ;
    double C2890 =  ( - ( C285/C187 )  ) /C217;
    double C2599 = C278* ( Pi*2. ) ;
    double C2601 = C2599*C190;
    double C2696 = C2601/C187;
    double C244 = C222*C2696;
    double C213 =  ( be*C2696 ) /C187;
    double C2720 = C2599*C201;
    double C2845 =  (  ( C2720/C187 ) *be ) /C187;
    double C2715 = C2599*C198;
    double C2755 =  (  ( - (  ( C2627*C2715 ) /C187 )  ) /C187 ) - (  ( C246*C2720 ) /C187 ) ;
    double C2758 =  (  ( C194*C2715 ) /C187 ) +C2755;
    double C2857 =  ( C2758*be ) /C187;
    double C2647 =  (  ( - (  ( C2627*C2601 ) /C187 )  ) /C187 ) - (  ( C246*C2715 ) /C187 ) ;
    double C2740 = C2647+ (  ( C194*C2601 ) /C187 ) ;
    double C2783 = C2740*C222;
    double C490 =  ( C2740*be ) /C187;
    double C183 = C2715/C187;
    double C2764 = C222*C183;
    double C2733 =  ( C2696-C183 ) /C2697;
    double C471 =  (  ( C194*C2647 ) + ( C2733- (  ( C246*C2755 ) + (  ( C2627*C2647 ) /C187 )  )  )  ) + ( C194*C2740 ) ;
    double C2853 =  ( be*C471 ) /C187;
    double C216 =  ( be*C183 ) /C187;
    double C517 =  (  ( C246*C285 ) /C187 ) + (  ( C244- (  ( C283*C475 ) /C187 )  ) -C216 ) ;
    double C2600 = C191*C2599;
    double C2695 = C2600/C187;
    double C2729 =  ( C2695-C2696 ) /C2697;
    double C239 = C222*C2695;
    double C2639 =  (  ( - (  ( C2627*C2600 ) /C187 )  ) /C187 ) - (  ( C2601*C246 ) /C187 ) ;
    double C2737 = C2639+ (  ( C194*C2600 ) /C187 ) ;
    double C478 = C2737*C222;
    double C470 =  (  ( C194*C2639 ) + ( C2729- (  ( C246*C2647 ) + (  ( C2639*C2627 ) /C187 )  )  )  ) + ( C194*C2737 ) ;
    double C2777 = C222*C470;
    double C227 =  ( std::pow(C187 , 2) ) *2;
    double C2769 = C283/C227;
    double C284 = C279* (  ( C256*C190 ) - (  ( C191*C219 ) /C187 )  ) ;
    double C297 = C284/C227;
    double C516 =  (  ( C246*C283 ) /C187 ) + (  ( C239- (  ( C475*C284 ) /C187 )  ) -C213 ) ;
    double C529 =  (  (  (  ( C478+ ( C516*C475 )  ) -C297 ) -C490 ) - ( C246*C517 )  ) -C327;
    double C2908 = C279* (  ( C202*C256 ) - (  ( C219*C201 ) /C187 )  ) ;
    double C2930 =  (  ( C246*C2908 ) /C187 ) + (  ( C2764- (  ( C285*C475 ) /C187 )  ) -C2845 ) ;
    double C2966 =  (  (  (  ( C2783+ ( C517*C475 )  ) -C2769 ) -C2857 ) - ( C2930*C246 )  ) -C2890;
    double cnst37 =  (  (  (  ( C516/C187 ) + ( C2777+ ( C529*C475 )  )  ) -C2853 ) - ( C246*C2966 )  ) - ( C517/C187 ) ;
    double gy010020 =  ( cnst37+C470 ) - ( C194*C529 ) ;
    double C233 =  (  ( be*zB ) + ( zA*ae )  ) /C187;
    double C250 = C233-zC;
    double C2881 =  ( be* (  ( C2740*C195 ) - (  (  ( C2740*C2652 ) /C187 ) + ( C2758*C250 )  )  )  ) /C187;
    double C257 = be*C250;
    double C288 = C279* (  ( C257*C201 ) - (  ( C221*C198 ) /C187 )  ) ;
    double C2892 =  ( - ( C288/C187 )  ) /C217;
    double C287 = C279* (  ( C190*C257 ) - (  ( C191*C221 ) /C187 )  ) ;
    double C303 = C287/C227;
    double C286 = C279* (  ( C198*C257 ) - (  ( C221*C190 ) /C187 )  ) ;
    double C508 =  (  ( C246*C288 ) /C187 ) - (  ( C286*C475 ) /C187 ) ;
    double C330 =  ( - ( C286/C187 )  ) /C217;
    double C507 =  (  ( C246*C286 ) /C187 ) - (  ( C287*C475 ) /C187 ) ;
    double C525 =  (  (  ( C507*C475 ) -C303 ) - ( C246*C508 )  ) -C330;
    double C2773 = C286/C227;
    double C2909 =  (  ( C202*C257 ) - (  ( C221*C201 ) /C187 )  ) *C279;
    double C2931 =  (  ( C246*C2909 ) /C187 ) - (  ( C475*C288 ) /C187 ) ;
    double C2967 =  (  (  ( C508*C475 ) -C2773 ) - ( C246*C2931 )  ) -C2892;
    double gz010020 =  (  (  (  ( C525*C475 ) + ( C507/C187 )  ) - ( C246*C2967 )  ) - ( C508/C187 )  ) - ( C194*C525 ) ;
    double C2672 =  (  ( - (  ( C2601*C2652 ) /C187 )  ) /C187 ) - (  ( C2715*C250 ) /C187 ) ;
    double C2744 = C2672+ (  ( C2601*C195 ) /C187 ) ;
    double C2799 = C222*C2744;
    double C672 =  ( be*C2744 ) /C187;
    double C1096 =  ( C2737*C195 ) - (  ( C2740*C250 ) + (  ( C2737*C2652 ) /C187 )  ) ;
    double C2831 = C222*C1096;
    double C2664 =  (  ( - (  ( C2600*C2652 ) /C187 )  ) /C187 ) - (  ( C2601*C250 ) /C187 ) ;
    double C2741 = C2664+ (  ( C2600*C195 ) /C187 ) ;
    double C658 = C222*C2741;
    double C648 =  ( C195*C2741 ) + (  ( C2729- (  ( C2672*C250 ) + (  ( C2664*C2652 ) /C187 )  )  ) + ( C2664*C195 )  ) ;
    double C2790 = C222*C648;
    double C2756 =  (  ( - (  ( C2715*C2652 ) /C187 )  ) /C187 ) - (  ( C250*C2720 ) /C187 ) ;
    double C2868 =  ( be* (  (  ( C2715*C195 ) /C187 ) +C2756 )  ) /C187;
    double C649 =  ( C195*C2744 ) + (  ( C2672*C195 ) + ( C2733- (  ( C2756*C250 ) + (  ( C2672*C2652 ) /C187 )  )  )  ) ;
    double C2862 =  ( be*C649 ) /C187;
    double C653 = C233-zB;
    double C2934 =  (  ( C2764- (  ( C653*C288 ) /C187 )  ) -C2845 ) + (  ( C2909*C250 ) /C187 ) ;
    double C684 =  (  ( C285*C250 ) /C187 ) - (  ( C283*C653 ) /C187 ) ;
    double C2826 = C684/C217;
    double C695 =  (  ( C286*C250 ) /C187 ) + (  ( C239- (  ( C653*C287 ) /C187 )  ) -C213 ) ;
    double C2828 = C695/C217;
    double C2933 =  (  ( C2908*C250 ) /C187 ) - (  ( C285*C653 ) /C187 ) ;
    double C2969 =  (  (  ( C653*C684 ) -C2769 ) - ( C2933*C250 )  ) -C2890;
    double C2963 =  (  (  ( C475*C684 ) +C2799 ) -C2868 ) - ( C246*C2933 ) ;
    double C696 =  (  ( C288*C250 ) /C187 ) + (  ( C244- (  ( C286*C653 ) /C187 )  ) -C216 ) ;
    double C2970 =  (  (  (  (  ( C653*C696 ) +C2799 ) -C2773 ) -C2868 ) - ( C2934*C250 )  ) -C2892;
    double C2964 =  ( C475*C696 ) - ( C246*C2934 ) ;
    double C707 =  (  (  (  (  ( C653*C695 ) +C658 ) -C303 ) -C672 ) - ( C250*C696 )  ) -C330;
    double cnst81 =  (  (  (  ( C2790+ ( C707*C653 )  ) + ( C695/C187 )  ) -C2862 ) - ( C2970*C250 )  ) - ( C696/C187 ) ;
    double C3018 =  ( C707*C475 ) - ( C246*C2970 ) ;
    double C2830 = C696/C217;
    double C1106 =  ( C475*C695 ) - ( C246*C696 ) ;
    double C3021 =  (  (  ( C1106*C475 ) +C2828 ) - ( C246*C2964 )  ) -C2830;
    double gz001020 =  ( C470+C3021 ) - ( C525*C195 ) ;
    gz[(Ai + 2) * matrix_size + Bi + 1] +=  (  ( C3018+C1096 ) - ( C1106*C195 )  ) *cnst1;
    gz[(Ai + 1) * matrix_size + Bi + 1] +=  ( C3021- ( C194*C1106 )  ) *cnst1;
    double C683 =  (  ( C283*C250 ) /C187 ) - (  ( C653*C284 ) /C187 ) ;
    double C2824 = C683/C217;
    double C1108 =  (  ( C658+ ( C475*C683 )  ) -C672 ) - ( C246*C684 ) ;
    double C3020 =  (  (  ( C2824+ ( C2831+ ( C475*C1108 )  )  ) -C2881 ) - ( C246*C2963 )  ) -C2826;
    double gy001020 = C3020- ( C529*C195 ) ;
    gy[(Ai + 1) * matrix_size + Bi + 1] += cnst1* (  ( C3020+C1096 ) - ( C194*C1108 )  ) ;
    double C702 =  (  (  ( C653*C683 ) -C297 ) - ( C684*C250 )  ) -C327;
    double gy001002 =  (  (  (  ( C702*C653 ) + ( C683/C187 )  ) - ( C2969*C250 )  ) - ( C684/C187 )  ) - ( C702*C195 ) ;
    double C3017 =  (  (  ( C702*C475 ) +C2790 ) -C2862 ) - ( C246*C2969 ) ;
    gy[(Ai + 2) * matrix_size + Bi + 1] += cnst1* ( C3017- ( C195*C1108 )  ) ;
    double C223 =  (  ( ae*xA ) + ( be*xB )  ) /C187;
    double C240 = C223-xC;
    double C2754 =  (  ( - (  ( C2589*C2715 ) /C187 )  ) /C187 ) - (  ( C240*C2720 ) /C187 ) ;
    double C2757 =  (  ( C192*C2715 ) /C187 ) +C2754;
    double C2608 =  (  ( - (  ( C2600*C2589 ) /C187 )  ) /C187 ) - (  ( C2601*C240 ) /C187 ) ;
    double C2732 = C2608+ (  ( C192*C2600 ) /C187 ) ;
    double C2753 =  (  ( - (  ( C2601*C2589 ) /C187 )  ) /C187 ) - (  ( C2715*C240 ) /C187 ) ;
    double C182 = C2753+ (  ( C2601*C192 ) /C187 ) ;
    double C2876 =  ( be* (  ( C195*C182 ) - (  (  ( C182*C2652 ) /C187 ) + ( C2757*C250 )  )  )  ) /C187;
    double C977 =  ( C2732*C195 ) - (  ( C250*C182 ) + (  ( C2732*C2652 ) /C187 )  ) ;
    double C2871 =  (  (  ( C194*C182 ) - (  ( C246*C2757 ) + (  ( C2627*C182 ) /C187 )  )  ) *be ) /C187;
    double C836 =  ( C194*C2732 ) - (  ( C246*C182 ) + (  ( C2627*C2732 ) /C187 )  ) ;
    double C184 =  ( C192*C182 ) + (  ( C2733- (  (  ( C2589*C2753 ) /C187 ) + ( C240*C2754 )  )  ) + ( C192*C2753 )  ) ;
    double C178 =  (  ( C2729- (  ( C240*C2753 ) + (  ( C2608*C2589 ) /C187 )  )  ) + ( C2608*C192 )  ) + ( C192*C2732 ) ;
    double C254 = be*C240;
    double C280 = C279* (  ( C254*C190 ) - (  ( C191*C209 ) /C187 )  ) ;
    double C291 = C280/C227;
    double C282 =  (  ( C254*C201 ) - (  ( C198*C209 ) /C187 )  ) *C279;
    double C2888 =  ( - ( C282/C187 )  ) /C217;
    double C2907 =  (  ( C202*C254 ) - (  ( C209*C201 ) /C187 )  ) *C279;
    double C2929 =  (  ( C246*C2907 ) /C187 ) - (  ( C475*C282 ) /C187 ) ;
    double C2932 =  (  ( C2907*C250 ) /C187 ) - (  ( C653*C282 ) /C187 ) ;
    double C281 =  (  ( C198*C254 ) - (  ( C209*C190 ) /C187 )  ) *C279;
    double C2763 = C281/C227;
    double C324 =  ( - ( C281/C187 )  ) /C217;
    double C682 =  (  ( C282*C250 ) /C187 ) - (  ( C281*C653 ) /C187 ) ;
    double C2968 =  (  (  ( C682*C653 ) -C2763 ) - ( C2932*C250 )  ) -C2888;
    double C2822 = C682/C217;
    double C2962 =  ( C682*C475 ) - ( C246*C2932 ) ;
    double C681 =  (  ( C281*C250 ) /C187 ) - (  ( C280*C653 ) /C187 ) ;
    double C1104 =  ( C681*C475 ) - ( C246*C682 ) ;
    double C701 =  (  (  ( C681*C653 ) -C291 ) - ( C682*C250 )  ) -C324;
    double gx001002 =  (  (  (  ( C653*C701 ) + ( C681/C187 )  ) - ( C2968*C250 )  ) - ( C682/C187 )  ) - ( C195*C701 ) ;
    double C3016 =  ( C475*C701 ) - ( C246*C2968 ) ;
    gx[(Ai + 2) * matrix_size + Bi + 1] +=  ( C3016- ( C1104*C195 )  ) *cnst1;
    double C2819 = C681/C217;
    double C3019 =  (  (  ( C1104*C475 ) +C2819 ) - ( C246*C2962 )  ) -C2822;
    gx[(Ai + 1) * matrix_size + Bi + 1] += cnst1* ( C3019- ( C194*C1104 )  ) ;
    double C504 =  (  ( C246*C282 ) /C187 ) - (  ( C281*C475 ) /C187 ) ;
    double C2965 =  (  (  ( C475*C504 ) -C2763 ) - ( C246*C2929 )  ) -C2888;
    double C503 =  (  ( C246*C281 ) /C187 ) - (  ( C280*C475 ) /C187 ) ;
    double C523 =  (  (  ( C503*C475 ) -C291 ) - ( C246*C504 )  ) -C324;
    double gx001020 = C3019- ( C195*C523 ) ;
    double gx010020 =  (  (  (  ( C503/C187 ) + ( C475*C523 )  ) - ( C2965*C246 )  ) - ( C504/C187 )  ) - ( C194*C523 ) ;
    double C237 = C223-xB;
    double C3008 =  ( C237*C702 ) - ( C2969*C240 ) ;
    double C3009 =  ( C707*C237 ) - ( C2970*C240 ) ;
    double C326 =  (  ( C285*C240 ) /C187 ) - (  ( C237*C283 ) /C187 ) ;
    double C987 =  ( C237*C695 ) - ( C240*C696 ) ;
    gz[(Ai + 2) * matrix_size + Bi + 3] +=  (  ( C3009+C977 ) - ( C987*C195 )  ) *cnst1;
    double C3005 =  ( C237*C529 ) - ( C2966*C240 ) ;
    double gy100020 = C3005- ( C192*C529 ) ;
    double C848 =  (  (  ( C503*C237 ) +C478 ) -C490 ) - ( C240*C504 ) ;
    double C846 =  ( C237*C507 ) - ( C240*C508 ) ;
    double C3004 =  (  ( C2777+ ( C237*C523 )  ) -C2853 ) - ( C2965*C240 ) ;
    gx[(Ai + 1) * matrix_size + Bi + 0] +=  ( C3004- ( C194*C848 )  ) *cnst1;
    double gx100020 =  ( C470+C3004 ) - ( C192*C523 ) ;
    double C2991 =  (  ( C237*C846 ) + ( C507/C217 )  ) - ( C240* (  ( C237*C508 ) - ( C240*C2931 )  )  ) ;
    double C3012 = C2991- ( C508/C217 ) ;
    gz[(Ai + 0) * matrix_size + Bi + 0] += cnst1* ( C3012- ( C192*C846 )  ) ;
    double cnst201 =  (  (  ( C2764- (  ( C237*C282 ) /C187 )  ) -C2845 ) + (  ( C2907*C240 ) /C187 )  ) *C240;
    double C2996 =  ( C237*C1108 ) - ( C240*C2963 ) ;
    gy[(Ai + 0) * matrix_size + Bi + 1] +=  ( C2996- ( C192*C1108 )  ) *cnst1;
    double C986 =  ( C237*C683 ) - ( C240*C684 ) ;
    gy[(Ai + 2) * matrix_size + Bi + 3] +=  ( C3008- ( C986*C195 )  ) *cnst1;
    double C3014 =  (  ( C2824+ ( C986*C237 )  ) - ( C240* (  ( C237*C684 ) - ( C2933*C240 )  )  )  ) -C2826;
    gy[(Ai + 0) * matrix_size + Bi + 3] +=  ( C3014- ( C986*C192 )  ) *cnst1;
    gy[(Ai + 1) * matrix_size + Bi + 3] +=  (  ( C2996+C977 ) - ( C194*C986 )  ) *cnst1;
    double C2997 =  ( C237*C1106 ) - ( C240*C2964 ) ;
    gz[(Ai + 0) * matrix_size + Bi + 1] += cnst1* ( C2997- ( C192*C1106 )  ) ;
    gz[(Ai + 2) * matrix_size + Bi + 0] += cnst1* (  ( C2997+C836 ) - ( C195*C846 )  ) ;
    gz[(Ai + 1) * matrix_size + Bi + 3] +=  ( C2997- ( C194*C987 )  ) *cnst1;
    double C328 =  (  ( C286*C240 ) /C187 ) - (  ( C237*C287 ) /C187 ) ;
    double C989 =  (  (  ( C237*C681 ) +C658 ) -C672 ) - ( C682*C240 ) ;
    double C2992 =  (  (  (  ( C222*C977 ) + ( C237*C989 )  ) +C2819 ) -C2876 ) - (  (  (  (  ( C237*C682 ) +C2799 ) -C2868 ) - ( C2932*C240 )  ) *C240 ) ;
    double C3013 = C2992-C2822;
    gx[(Ai + 0) * matrix_size + Bi + 3] +=  (  ( C977+C3013 ) - ( C192*C989 )  ) *cnst1;
    double C3006 =  ( C237*C525 ) - ( C240*C2967 ) ;
    gz[(Ai + 1) * matrix_size + Bi + 0] +=  ( C3006- ( C194*C846 )  ) *cnst1;
    double gz100020 = C3006- ( C192*C525 ) ;
    double C3007 =  (  ( C2790+ ( C237*C701 )  ) -C2862 ) - ( C240*C2968 ) ;
    gx[(Ai + 2) * matrix_size + Bi + 3] +=  ( C3007- ( C989*C195 )  ) *cnst1;
    double C337 =  (  ( C281*C240 ) /C187 ) + (  ( C239- (  ( C280*C237 ) /C187 )  ) -C213 ) ;
    double C3015 =  (  (  ( C237*C987 ) +C2828 ) - ( C240* (  ( C237*C696 ) - ( C2934*C240 )  )  )  ) -C2830;
    gz[(Ai + 0) * matrix_size + Bi + 3] +=  ( C3015- ( C192*C987 )  ) *cnst1;
    double C325 =  (  ( C283*C240 ) /C187 ) - (  ( C237*C284 ) /C187 ) ;
    double C346 =  (  (  ( C325*C237 ) -C297 ) - ( C326*C240 )  ) -C327;
    double gy001200 = C3014- ( C195*C346 ) ;
    gy[(Ai + 2) * matrix_size + Bi + 4] +=  ( gy001200*cnst0 ) - ( gy001020*cnst0 ) ;
    double C2989 =  (  (  (  ( C222*C836 ) + ( C237*C848 )  ) + ( C503/C217 )  ) -C2871 ) - ( C240* (  (  ( C2783+ ( C237*C504 )  ) -C2857 ) - ( C240*C2929 )  )  ) ;
    double C3010 = C2989- ( C504/C217 ) ;
    gx[(Ai + 0) * matrix_size + Bi + 0] +=  (  ( C3010+C836 ) - ( C192*C848 )  ) *cnst1;
    double C845 =  ( C237*C516 ) - ( C517*C240 ) ;
    double C2990 =  (  ( C516/C217 ) + ( C237*C845 )  ) - ( C240* (  ( C237*C517 ) - ( C2930*C240 )  )  ) ;
    double C3011 = C2990- ( C517/C217 ) ;
    double gy010200 =  ( C3011+C178 ) - ( C194*C346 ) ;
    gy[(Ai + 1) * matrix_size + Bi + 4] +=  ( gy010200*cnst0 ) - ( gy010020*cnst0 ) ;
    gy[(Ai + 2) * matrix_size + Bi + 0] += cnst1* ( C2996- ( C195*C845 )  ) ;
    gy[(Ai + 1) * matrix_size + Bi + 0] +=  (  ( C3005+C836 ) - ( C194*C845 )  ) *cnst1;
    gy[(Ai + 0) * matrix_size + Bi + 0] +=  ( C3011- ( C192*C845 )  ) *cnst1;
    double C338 =  (  ( C240*C282 ) /C187 ) + (  ( C244- (  ( C237*C281 ) /C187 )  ) -C216 ) ;
    double C350 =  (  (  (  ( C237*C337 ) + ( C222*C2732 )  ) -C291 ) - (  ( be*C182 ) /C187 )  ) - ( C338*C240 ) ;
    double C351 = C350-C324;
    double gx001200 = C3013- ( C351*C195 ) ;
    gx[(Ai + 2) * matrix_size + Bi + 4] +=  ( gx001200*cnst0 ) - ( gx001020*cnst0 ) ;
    double gx010200 = C3010- ( C194*C351 ) ;
    gx[(Ai + 1) * matrix_size + Bi + 4] +=  ( cnst0*gx010200 ) - ( cnst0*gx010020 ) ;
    double cnst240 =  (  (  ( C222*C178 ) + ( C237*C351 )  ) + ( C337/C187 )  ) - (  ( C184*be ) /C187 ) ;
    double cnst247 =  (  (  (  ( C338*C237 ) + ( C222*C182 )  ) -C2763 ) - (  ( be*C2757 ) /C187 )  ) -cnst201;
    double gx100200 =  (  (  ( cnst240- ( C240* ( cnst247-C2888 )  )  ) - ( C338/C187 )  ) +C178 ) - ( C192*C351 ) ;
    gx[(Ai + 0) * matrix_size + Bi + 4] +=  ( gx100200*cnst0 ) - ( gx100020*cnst0 ) ;
    double C329 =  (  ( C240*C288 ) /C187 ) - (  ( C237*C286 ) /C187 ) ;
    double C347 =  (  (  ( C237*C328 ) -C303 ) - ( C329*C240 )  ) -C330;
    double gz010200 = C3012- ( C194*C347 ) ;
    gz[(Ai + 1) * matrix_size + Bi + 4] +=  ( cnst0*gz010200 ) - ( gz010020*cnst0 ) ;
    double gz001200 =  ( C3015+C178 ) - ( C347*C195 ) ;
    gz[(Ai + 2) * matrix_size + Bi + 4] +=  ( cnst0*gz001200 ) - ( cnst0*gz001020 ) ;
    double cnst264 =  (  ( C329*C237 ) -C2773 ) - (  (  (  ( C240*C2909 ) /C187 ) - (  ( C237*C288 ) /C187 )  ) *C240 ) ;
    double cnst268 =  (  (  ( C328/C187 ) + ( C237*C347 )  ) - ( C240* ( cnst264-C2892 )  )  ) - ( C329/C187 ) ;
    double gz100200 = cnst268- ( C192*C347 ) ;
    gz[(Ai + 0) * matrix_size + Bi + 4] +=  ( gz100200*cnst0 ) - ( gz100020*cnst0 ) ;
    double C2995 =  (  (  ( C237*C1104 ) +C2831 ) -C2881 ) - ( C2962*C240 ) ;
    gx[(Ai + 1) * matrix_size + Bi + 3] +=  ( C2995- ( C194*C989 )  ) *cnst1;
    gx[(Ai + 0) * matrix_size + Bi + 1] +=  (  ( C2995+C1096 ) - ( C192*C1104 )  ) *cnst1;
    gx[(Ai + 2) * matrix_size + Bi + 0] +=  ( C2995- ( C848*C195 )  ) *cnst1;
    double cnst275 =  (  ( C237*C326 ) -C2769 ) - ( C240* (  (  ( C240*C2908 ) /C187 ) - (  ( C237*C285 ) /C187 )  )  ) ;
    double cnst279 =  (  (  ( C237*C346 ) + ( C325/C187 )  ) - ( C240* ( cnst275-C2890 )  )  ) - ( C326/C187 ) ;
    double gy100200 = cnst279- ( C192*C346 ) ;
    gy[(Ai + 0) * matrix_size + Bi + 4] +=  ( cnst0*gy100200 ) - ( gy100020*cnst0 ) ;
    gy[(Ai + 0) * matrix_size + Bi + 2] +=  (  ( - ( 0.5*gy100200 )  ) - ( 0.5*gy100020 )  ) + ( C3008- ( C192*C702 )  ) ;
    gy[(Ai + 1) * matrix_size + Bi + 2] +=  (  ( - ( 0.5*gy010200 )  ) - ( 0.5*gy010020 )  ) + (  ( C3017+C648 ) - ( C194*C702 )  ) ;
    gz[(Ai + 2) * matrix_size + Bi + 2] +=  (  ( - ( 0.5*gz001200 )  ) - ( 0.5*gz001020 )  ) + (  ( C648+cnst81 ) - ( C707*C195 )  ) ;
    gy[(Ai + 2) * matrix_size + Bi + 2] +=  (  ( - ( gy001200*0.5 )  ) - ( 0.5*gy001020 )  ) +gy001002;
    gx[(Ai + 2) * matrix_size + Bi + 2] += gx001002+ (  ( - ( 0.5*gx001200 )  ) - ( 0.5*gx001020 )  ) ;
    gx[(Ai + 0) * matrix_size + Bi + 2] +=  (  ( - ( 0.5*gx100200 )  ) - ( 0.5*gx100020 )  ) + (  ( C3007+C648 ) - ( C192*C701 )  ) ;
    gz[(Ai + 1) * matrix_size + Bi + 2] +=  (  ( - ( 0.5*gz010200 )  ) - ( 0.5*gz010020 )  ) + ( C3018- ( C194*C707 )  ) ;
    gz[(Ai + 0) * matrix_size + Bi + 2] +=  ( C3009- ( C707*C192 )  ) + (  ( - ( 0.5*gz100200 )  ) - ( 0.5*gz100020 )  ) ;
    gx[(Ai + 1) * matrix_size + Bi + 2] +=  (  ( - ( 0.5*gx010200 )  ) - ( 0.5*gx010020 )  ) + ( C3016- ( C194*C701 )  ) ;
}
