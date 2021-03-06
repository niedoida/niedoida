/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void vne_gradient_12_1(
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
    double C203 = bs[3];
    double C195 = bs[1];
    double C200 = bs[2];
    double C192 = bs[0];
    double C204 = bs[4];
    double cnst0 = std::sqrt(0.75);
    double C196 = yA-yB;
    double C193 = xA-xB;
    double cnst1 = std::sqrt(3.0);
    double C197 = zA-zB;
    double C187 = be+ae;
    double C220 = C187*2;
    double C2698 = C187*2.;
    double C229 =  ( std::pow(C187 , 2) ) *2;
    double C194 = be*ae;
    double C223 = C194*C197;
    double C254 = C194* (  ( std::pow(C197 , 2) ) + (  ( std::pow(C193 , 2) ) + ( std::pow(C196 , 2) )  )  ) ;
    double C277 = std::exp( ( - ( C254/C187 )  ) );
    double C278 = C277* ( Pi*4 ) ;
    double C2600 = C277* ( Pi*2. ) ;
    double C2601 = C192*C2600;
    double C2696 = C2601/C187;
    double C211 =  ( ae*C2696 ) /C187;
    double C2716 = C200*C2600;
    double C183 = C2716/C187;
    double C219 =  ( ae*C183 ) /C187;
    double C2721 = C2600*C203;
    double C2843 =  ( ae* ( C2721/C187 )  ) /C187;
    double C2602 = C2600*C195;
    double C2697 = C2602/C187;
    double C2730 =  ( C2696-C2697 ) /C2698;
    double C2734 =  ( C2697-C183 ) /C2698;
    double C216 =  ( C2697*ae ) /C187;
    double C212 = C194*C193;
    double C221 = C196*C194;
    double C2590 = C193*be;
    double C2628 = C196*be;
    double C232 =  (  ( be*yB ) + ( ae*yA )  ) /C187;
    double C474 = C232-yB;
    double C246 = C232-yC;
    double C2756 =  (  ( - (  ( C2628*C2716 ) /C187 )  ) /C187 ) - (  ( C246*C2721 ) /C187 ) ;
    double C2759 =  (  ( C196*C2716 ) /C187 ) +C2756;
    double C2855 =  ( C2759*ae ) /C187;
    double C2648 =  (  ( - (  ( C2628*C2602 ) /C187 )  ) /C187 ) - (  ( C246*C2716 ) /C187 ) ;
    double C2741 = C2648+ (  ( C196*C2602 ) /C187 ) ;
    double C470 =  (  ( C2734- (  (  ( C2648*C2628 ) /C187 ) + ( C246*C2756 )  )  ) + ( C196*C2648 )  ) + ( C196*C2741 ) ;
    double C2851 =  ( C470*ae ) /C187;
    double C490 =  ( C2741*ae ) /C187;
    double C255 = C246*ae;
    double C2904 =  (  (  ( C221*C203 ) /C187 ) + ( C204*C255 )  ) *C278;
    double C284 =  (  (  ( C221*C200 ) /C187 ) + ( C255*C203 )  ) *C278;
    double C2933 =  (  ( C219- (  ( C284*C474 ) /C187 )  ) -C2843 ) + (  ( C246*C2904 ) /C187 ) ;
    double C2886 =  ( - ( C284/C187 )  ) /C220;
    double C283 =  (  (  ( C192*C221 ) /C187 ) + ( C255*C195 )  ) *C278;
    double C296 = C283/C229;
    double C282 =  (  ( C255*C200 ) + (  ( C221*C195 ) /C187 )  ) *C278;
    double C326 =  ( - ( C282/C187 )  ) /C220;
    double C517 =  (  ( C246*C284 ) /C187 ) + (  ( C216- (  ( C282*C474 ) /C187 )  ) -C219 ) ;
    double C2769 = C282/C229;
    double C2969 =  (  (  (  ( C490+ ( C474*C517 )  ) -C2769 ) -C2855 ) - ( C246*C2933 )  ) -C2886;
    double C516 =  (  ( C211- (  ( C283*C474 ) /C187 )  ) -C216 ) + (  ( C246*C282 ) /C187 ) ;
    double C2640 =  (  ( - (  ( C2628*C2601 ) /C187 )  ) /C187 ) - (  ( C246*C2602 ) /C187 ) ;
    double C2738 =  (  ( C196*C2601 ) /C187 ) +C2640;
    double C487 =  ( C2738*ae ) /C187;
    double C529 =  (  (  (  (  ( C516*C474 ) +C487 ) -C296 ) -C490 ) - ( C246*C517 )  ) -C326;
    double C469 =  ( C196*C2738 ) + (  ( C196*C2640 ) + ( C2730- (  (  ( C2628*C2640 ) /C187 ) + ( C246*C2648 )  )  )  ) ;
    double C2850 =  ( C469*ae ) /C187;
    double cnst33 =  (  (  (  ( C2850+ ( C474*C529 )  ) + ( C516/C187 )  ) -C2851 ) - ( C246*C2969 )  ) - ( C517/C187 ) ;
    double gy010020 =  ( cnst33-C469 ) - ( C196*C529 ) ;
    double C2653 = be*C197;
    double C225 =  (  ( ae*xA ) + ( be*xB )  ) /C187;
    double C241 = C225-xC;
    double C253 = ae*C241;
    double C280 = C278* (  (  ( C212*C195 ) /C187 ) + ( C253*C200 )  ) ;
    double C323 =  ( - ( C280/C187 )  ) /C220;
    double C2764 = C280/C229;
    double C2903 =  (  (  ( C212*C203 ) /C187 ) + ( C204*C253 )  ) *C278;
    double C279 =  (  ( C253*C195 ) + (  ( C192*C212 ) /C187 )  ) *C278;
    double C290 = C279/C229;
    double C503 =  (  ( C246*C280 ) /C187 ) - (  ( C474*C279 ) /C187 ) ;
    double C281 =  (  (  ( C212*C200 ) /C187 ) + ( C253*C203 )  ) *C278;
    double C504 =  (  ( C246*C281 ) /C187 ) - (  ( C474*C280 ) /C187 ) ;
    double C523 =  (  (  ( C474*C503 ) -C290 ) - ( C246*C504 )  ) -C323;
    double C2884 =  ( - ( C281/C187 )  ) /C220;
    double C2932 =  (  ( C246*C2903 ) /C187 ) - (  ( C281*C474 ) /C187 ) ;
    double C2968 =  (  (  ( C504*C474 ) -C2764 ) - ( C246*C2932 )  ) -C2884;
    double gx010020 =  (  (  (  ( C503/C187 ) + ( C523*C474 )  ) - ( C246*C2968 )  ) - ( C504/C187 )  ) - ( C196*C523 ) ;
    double C2755 =  (  ( - (  ( C2590*C2716 ) /C187 )  ) /C187 ) - (  ( C2721*C241 ) /C187 ) ;
    double C2758 = C2755+ (  ( C193*C2716 ) /C187 ) ;
    double C2609 =  (  ( - (  ( C2590*C2601 ) /C187 )  ) /C187 ) - (  ( C2602*C241 ) /C187 ) ;
    double C2733 = C2609+ (  ( C193*C2601 ) /C187 ) ;
    double C2754 =  (  ( - (  ( C2590*C2602 ) /C187 )  ) /C187 ) - (  ( C2716*C241 ) /C187 ) ;
    double C178 =  ( C193*C2733 ) + (  ( C193*C2609 ) + ( C2730- (  ( C241*C2754 ) + (  ( C2590*C2609 ) /C187 )  )  )  ) ;
    double C182 =  (  ( C193*C2602 ) /C187 ) +C2754;
    double C2869 =  (  (  ( C196*C182 ) - (  ( C246*C2758 ) + (  ( C2628*C182 ) /C187 )  )  ) *ae ) /C187;
    double C837 =  ( C196*C2733 ) - (  (  ( C2628*C2733 ) /C187 ) + ( C246*C182 )  ) ;
    double C184 =  ( C193*C182 ) + (  ( C2734- (  (  ( C2590*C2754 ) /C187 ) + ( C2755*C241 )  )  ) + ( C193*C2754 )  ) ;
    double C218 =  ( C182*ae ) /C187;
    double C239 = C225-xB;
    double cnst98 =  (  (  ( C2903*C241 ) /C187 ) + (  ( C219- (  ( C239*C281 ) /C187 )  ) -C2843 )  ) *C241;
    double C336 =  (  ( C211- (  ( C239*C279 ) /C187 )  ) -C216 ) + (  ( C280*C241 ) /C187 ) ;
    double C337 =  (  ( C281*C241 ) /C187 ) + (  ( C216- (  ( C239*C280 ) /C187 )  ) -C219 ) ;
    double cnst106 =  (  (  (  (  ( C337*C239 ) +C218 ) -C2764 ) - (  ( C2758*ae ) /C187 )  ) -cnst98 ) -C2884;
    double C349 =  (  (  (  (  ( ae*C2733 ) /C187 ) + ( C336*C239 )  ) -C290 ) -C218 ) - ( C337*C241 ) ;
    double C350 = C349-C323;
    double cnst112 =  (  ( C336/C187 ) + (  (  ( C178*ae ) /C187 ) + ( C350*C239 )  )  ) - (  ( C184*ae ) /C187 ) ;
    double gx100200 =  (  (  ( cnst112- ( cnst106*C241 )  ) - ( C337/C187 )  ) -C178 ) - ( C350*C193 ) ;
    double C325 =  (  ( C284*C241 ) /C187 ) - (  ( C282*C239 ) /C187 ) ;
    double C846 =  ( C516*C239 ) - ( C241*C517 ) ;
    double C2993 =  (  ( C846*C239 ) + ( C516/C220 )  ) - (  (  ( C239*C517 ) - ( C2933*C241 )  ) *C241 ) ;
    double C3014 = C2993- ( C517/C220 ) ;
    gy[(Ai + 0) * matrix_size + Bi + 0] += cnst1* ( C3014- ( C193*C846 )  ) ;
    double C849 =  (  (  ( C239*C503 ) +C487 ) -C490 ) - ( C504*C241 ) ;
    double C2992 =  (  (  ( C503/C220 ) + (  ( C849*C239 ) + (  ( C837*ae ) /C187 )  )  ) -C2869 ) - (  (  (  ( C490+ ( C504*C239 )  ) -C2855 ) - ( C2932*C241 )  ) *C241 ) ;
    double C3013 = C2992- ( C504/C220 ) ;
    gx[(Ai + 0) * matrix_size + Bi + 0] +=  (  ( C3013-C837 ) - ( C849*C193 )  ) *cnst1;
    double gx010200 = C3013- ( C196*C350 ) ;
    gx[(Ai + 1) * matrix_size + Bi + 4] +=  ( gx010200*cnst0 ) - ( gx010020*cnst0 ) ;
    double C3008 =  ( C239*C529 ) - ( C2969*C241 ) ;
    double gy100020 = C3008- ( C193*C529 ) ;
    gy[(Ai + 1) * matrix_size + Bi + 0] +=  (  ( C3008-C837 ) - ( C196*C846 )  ) *cnst1;
    double C3007 =  (  (  ( C523*C239 ) +C2850 ) -C2851 ) - ( C241*C2968 ) ;
    double gx100020 =  ( C3007-C469 ) - ( C193*C523 ) ;
    gx[(Ai + 0) * matrix_size + Bi + 4] +=  ( gx100200*cnst0 ) - ( cnst0*gx100020 ) ;
    gx[(Ai + 1) * matrix_size + Bi + 0] +=  ( C3007- ( C196*C849 )  ) *cnst1;
    double C324 =  (  ( C282*C241 ) /C187 ) - (  ( C283*C239 ) /C187 ) ;
    double C345 =  (  (  ( C324*C239 ) -C296 ) - ( C325*C241 )  ) -C326;
    double gy010200 =  ( C3014-C178 ) - ( C196*C345 ) ;
    gy[(Ai + 1) * matrix_size + Bi + 4] +=  ( gy010200*cnst0 ) - ( cnst0*gy010020 ) ;
    double cnst146 =  (  ( C325*C239 ) -C2769 ) - (  (  (  ( C2904*C241 ) /C187 ) - (  ( C284*C239 ) /C187 )  ) *C241 ) ;
    double cnst150 =  (  (  ( C345*C239 ) + ( C324/C187 )  ) - (  ( cnst146-C2886 ) *C241 )  ) - ( C325/C187 ) ;
    double gy100200 = cnst150- ( C345*C193 ) ;
    gy[(Ai + 0) * matrix_size + Bi + 4] +=  ( cnst0*gy100200 ) - ( gy100020*cnst0 ) ;
    double C236 =  (  ( be*zB ) + ( zA*ae )  ) /C187;
    double C653 = C236-zB;
    double C250 = C236-zC;
    double C978 =  ( C197*C2733 ) - (  ( C182*C250 ) + (  ( C2653*C2733 ) /C187 )  ) ;
    double C685 =  (  ( C250*C284 ) /C187 ) - (  ( C282*C653 ) /C187 ) ;
    double C2824 = C685/C220;
    double C2936 =  (  ( C250*C2904 ) /C187 ) - (  ( C284*C653 ) /C187 ) ;
    double C2972 =  (  (  ( C685*C653 ) -C2769 ) - ( C250*C2936 )  ) -C2886;
    double C683 =  (  ( C250*C281 ) /C187 ) - (  ( C280*C653 ) /C187 ) ;
    double C2820 = C683/C220;
    double C2673 =  (  ( - (  ( C2602*C2653 ) /C187 )  ) /C187 ) - (  ( C250*C2716 ) /C187 ) ;
    double C2745 =  (  ( C2602*C197 ) /C187 ) +C2673;
    double C673 =  ( C2745*ae ) /C187;
    double C2757 =  (  ( - (  ( C2653*C2716 ) /C187 )  ) /C187 ) - (  ( C250*C2721 ) /C187 ) ;
    double C2866 =  ( ae* (  (  ( C197*C2716 ) /C187 ) +C2757 )  ) /C187;
    double C2966 =  (  ( C673+ ( C685*C474 )  ) -C2866 ) - ( C246*C2936 ) ;
    double C649 =  ( C2745*C197 ) + (  ( C2734- (  ( C250*C2757 ) + (  ( C2673*C2653 ) /C187 )  )  ) + ( C2673*C197 )  ) ;
    double C2860 =  ( C649*ae ) /C187;
    double C2665 =  (  ( - (  ( C2653*C2601 ) /C187 )  ) /C187 ) - (  ( C250*C2602 ) /C187 ) ;
    double C2742 =  (  ( C197*C2601 ) /C187 ) +C2665;
    double C670 =  ( C2742*ae ) /C187;
    double C648 =  ( C2742*C197 ) + (  ( C2730- (  ( C250*C2673 ) + (  ( C2665*C2653 ) /C187 )  )  ) + ( C2665*C197 )  ) ;
    double C2859 =  ( ae*C648 ) /C187;
    double C684 =  (  ( C250*C282 ) /C187 ) - (  ( C283*C653 ) /C187 ) ;
    double C1109 =  (  (  ( C684*C474 ) +C670 ) -C673 ) - ( C246*C685 ) ;
    double C2999 =  ( C1109*C239 ) - ( C2966*C241 ) ;
    gy[(Ai + 2) * matrix_size + Bi + 0] += cnst1* ( C2999- ( C846*C197 )  ) ;
    gy[(Ai + 0) * matrix_size + Bi + 1] +=  ( C2999- ( C193*C1109 )  ) *cnst1;
    double C703 =  (  (  ( C684*C653 ) -C296 ) - ( C685*C250 )  ) -C326;
    double C3020 =  (  ( C2859+ ( C474*C703 )  ) -C2860 ) - ( C246*C2972 ) ;
    gy[(Ai + 2) * matrix_size + Bi + 1] +=  ( C3020- ( C1109*C197 )  ) *cnst1;
    double C3011 =  ( C239*C703 ) - ( C2972*C241 ) ;
    double C2822 = C684/C220;
    double gy001002 =  (  (  (  ( C684/C187 ) + ( C653*C703 )  ) - ( C2972*C250 )  ) - ( C685/C187 )  ) - ( C197*C703 ) ;
    double C987 =  ( C684*C239 ) - ( C685*C241 ) ;
    double C3017 =  (  ( C2822+ ( C987*C239 )  ) - ( C241* (  ( C685*C239 ) - ( C2936*C241 )  )  )  ) -C2824;
    gy[(Ai + 0) * matrix_size + Bi + 3] += cnst1* ( C3017- ( C193*C987 )  ) ;
    double gy001200 = C3017- ( C345*C197 ) ;
    gy[(Ai + 2) * matrix_size + Bi + 3] += cnst1* ( C3011- ( C987*C197 )  ) ;
    gy[(Ai + 1) * matrix_size + Bi + 3] +=  (  ( C2999-C978 ) - ( C196*C987 )  ) *cnst1;
    double C682 =  (  ( C250*C280 ) /C187 ) - (  ( C653*C279 ) /C187 ) ;
    double C702 =  (  (  ( C653*C682 ) -C290 ) - ( C250*C683 )  ) -C323;
    double C2817 = C682/C220;
    double C1105 =  ( C474*C682 ) - ( C246*C683 ) ;
    double C990 =  (  (  ( C239*C682 ) +C670 ) -C673 ) - ( C683*C241 ) ;
    double C256 = C250*ae;
    double C287 =  (  (  ( C223*C200 ) /C187 ) + ( C256*C203 )  ) *C278;
    double C2888 =  ( - ( C287/C187 )  ) /C220;
    double C2905 =  (  (  ( C223*C203 ) /C187 ) + ( C204*C256 )  ) *C278;
    double C2934 =  (  ( C246*C2905 ) /C187 ) - (  ( C287*C474 ) /C187 ) ;
    double C2937 =  (  ( C219- (  ( C287*C653 ) /C187 )  ) -C2843 ) + (  ( C250*C2905 ) /C187 ) ;
    double C285 =  (  (  ( C223*C195 ) /C187 ) + ( C200*C256 )  ) *C278;
    double C328 =  (  ( C287*C241 ) /C187 ) - (  ( C239*C285 ) /C187 ) ;
    double C329 =  ( - ( C285/C187 )  ) /C220;
    double C697 =  (  ( C216- (  ( C653*C285 ) /C187 )  ) -C219 ) + (  ( C287*C250 ) /C187 ) ;
    double C2967 =  ( C697*C474 ) - ( C246*C2937 ) ;
    double C2828 = C697/C220;
    double C2773 = C285/C229;
    double cnst212 =  (  ( C328*C239 ) -C2773 ) - (  (  (  ( C2905*C241 ) /C187 ) - (  ( C287*C239 ) /C187 )  ) *C241 ) ;
    double C2973 =  (  (  (  (  ( C697*C653 ) +C673 ) -C2773 ) -C2866 ) - ( C250*C2937 )  ) -C2888;
    double C508 =  (  ( C246*C287 ) /C187 ) - (  ( C474*C285 ) /C187 ) ;
    double C2970 =  (  (  ( C474*C508 ) -C2773 ) - ( C246*C2934 )  ) -C2888;
    double C286 =  (  ( C256*C195 ) + (  ( C192*C223 ) /C187 )  ) *C278;
    double C327 =  (  ( C285*C241 ) /C187 ) - (  ( C239*C286 ) /C187 ) ;
    double C696 =  (  ( C211- (  ( C286*C653 ) /C187 )  ) -C216 ) + (  ( C250*C285 ) /C187 ) ;
    double C1107 =  ( C696*C474 ) - ( C246*C697 ) ;
    double C3000 =  ( C1107*C239 ) - ( C2967*C241 ) ;
    gz[(Ai + 0) * matrix_size + Bi + 1] += cnst1* ( C3000- ( C193*C1107 )  ) ;
    double C2826 = C696/C220;
    double C3024 =  (  ( C2826+ ( C1107*C474 )  ) - ( C246*C2967 )  ) -C2828;
    gz[(Ai + 1) * matrix_size + Bi + 1] +=  ( C3024- ( C196*C1107 )  ) *cnst1;
    double C988 =  ( C239*C696 ) - ( C697*C241 ) ;
    gz[(Ai + 1) * matrix_size + Bi + 3] +=  ( C3000- ( C196*C988 )  ) *cnst1;
    double C3018 =  (  (  ( C988*C239 ) +C2826 ) - (  (  ( C697*C239 ) - ( C2937*C241 )  ) *C241 )  ) -C2828;
    gz[(Ai + 0) * matrix_size + Bi + 3] +=  ( C3018- ( C193*C988 )  ) *cnst1;
    double C302 = C286/C229;
    double C346 =  (  (  ( C327*C239 ) -C302 ) - ( C328*C241 )  ) -C329;
    double cnst233 =  (  (  ( C346*C239 ) + ( C327/C187 )  ) - (  ( cnst212-C2888 ) *C241 )  ) - ( C328/C187 ) ;
    double gz100200 = cnst233- ( C346*C193 ) ;
    double gz001200 =  ( C3018-C178 ) - ( C346*C197 ) ;
    double C708 =  (  (  (  (  ( C696*C653 ) +C670 ) -C302 ) -C673 ) - ( C250*C697 )  ) -C329;
    double C3012 =  ( C708*C239 ) - ( C241*C2973 ) ;
    gz[(Ai + 2) * matrix_size + Bi + 3] += cnst1* (  ( C3012-C978 ) - ( C988*C197 )  ) ;
    double C3021 =  ( C708*C474 ) - ( C246*C2973 ) ;
    double cnst247 =  (  (  (  ( C2859+ ( C708*C653 )  ) + ( C696/C187 )  ) -C2860 ) - ( C250*C2973 )  ) - ( C697/C187 ) ;
    double C507 =  (  ( C246*C285 ) /C187 ) - (  ( C286*C474 ) /C187 ) ;
    double C847 =  ( C507*C239 ) - ( C508*C241 ) ;
    gz[(Ai + 2) * matrix_size + Bi + 0] += cnst1* (  ( C3000-C837 ) - ( C847*C197 )  ) ;
    double C525 =  (  (  ( C507*C474 ) -C302 ) - ( C246*C508 )  ) -C329;
    double gz001020 =  ( C3024-C469 ) - ( C525*C197 ) ;
    gz[(Ai + 2) * matrix_size + Bi + 4] +=  ( cnst0*gz001200 ) - ( cnst0*gz001020 ) ;
    double C3009 =  ( C525*C239 ) - ( C2970*C241 ) ;
    gz[(Ai + 1) * matrix_size + Bi + 0] +=  ( C3009- ( C196*C847 )  ) *cnst1;
    double gz100020 = C3009- ( C525*C193 ) ;
    gz[(Ai + 0) * matrix_size + Bi + 4] +=  ( gz100200*cnst0 ) - ( gz100020*cnst0 ) ;
    double gz010020 =  (  (  (  ( C525*C474 ) + ( C507/C187 )  ) - ( C246*C2970 )  ) - ( C508/C187 )  ) - ( C196*C525 ) ;
    double C2994 =  (  ( C507/C220 ) + ( C847*C239 )  ) - (  (  ( C239*C508 ) - ( C2934*C241 )  ) *C241 ) ;
    double C3015 = C2994- ( C508/C220 ) ;
    gz[(Ai + 0) * matrix_size + Bi + 0] += cnst1* ( C3015- ( C847*C193 )  ) ;
    double gz010200 = C3015- ( C196*C346 ) ;
    gz[(Ai + 1) * matrix_size + Bi + 4] +=  ( gz010200*cnst0 ) - ( gz010020*cnst0 ) ;
    double C2874 =  (  (  ( C182*C197 ) - (  ( C250*C2758 ) + (  ( C182*C2653 ) /C187 )  )  ) *ae ) /C187;
    double C1097 =  ( C2738*C197 ) - (  (  ( C2738*C2653 ) /C187 ) + ( C2741*C250 )  ) ;
    double C2878 =  ( ae*C1097 ) /C187;
    gz[(Ai + 2) * matrix_size + Bi + 1] += cnst1* (  ( C3021-C1097 ) - ( C1107*C197 )  ) ;
    double C2935 =  (  ( C250*C2903 ) /C187 ) - (  ( C281*C653 ) /C187 ) ;
    double C2971 =  (  (  ( C683*C653 ) -C2764 ) - ( C250*C2935 )  ) -C2884;
    double C3010 =  (  (  ( C702*C239 ) +C2859 ) -C2860 ) - ( C2971*C241 ) ;
    gx[(Ai + 2) * matrix_size + Bi + 3] +=  ( C3010- ( C990*C197 )  ) *cnst1;
    double gx001002 =  (  (  (  ( C702*C653 ) + ( C682/C187 )  ) - ( C250*C2971 )  ) - ( C683/C187 )  ) - ( C702*C197 ) ;
    double C3019 =  ( C702*C474 ) - ( C246*C2971 ) ;
    gx[(Ai + 2) * matrix_size + Bi + 1] +=  ( C3019- ( C1105*C197 )  ) *cnst1;
    double C2995 =  (  (  (  ( C990*C239 ) + (  ( C978*ae ) /C187 )  ) +C2817 ) -C2874 ) - (  (  (  ( C673+ ( C683*C239 )  ) -C2866 ) - ( C2935*C241 )  ) *C241 ) ;
    double C3016 = C2995-C2820;
    gx[(Ai + 0) * matrix_size + Bi + 3] += cnst1* (  ( C3016-C978 ) - ( C193*C990 )  ) ;
    double gx001200 = C3016- ( C350*C197 ) ;
    double C2965 =  ( C683*C474 ) - ( C246*C2935 ) ;
    double C3022 =  (  (  ( C1105*C474 ) +C2817 ) - ( C246*C2965 )  ) -C2820;
    double gx001020 = C3022- ( C523*C197 ) ;
    gx[(Ai + 2) * matrix_size + Bi + 4] +=  ( gx001200*cnst0 ) - ( gx001020*cnst0 ) ;
    gx[(Ai + 1) * matrix_size + Bi + 1] +=  ( C3022- ( C196*C1105 )  ) *cnst1;
    double C2879 =  (  (  ( C2741*C197 ) - (  (  ( C2741*C2653 ) /C187 ) + ( C2759*C250 )  )  ) *ae ) /C187;
    double C2998 =  (  (  ( C1105*C239 ) +C2878 ) -C2879 ) - ( C2965*C241 ) ;
    gx[(Ai + 0) * matrix_size + Bi + 1] +=  (  ( C2998-C1097 ) - ( C1105*C193 )  ) *cnst1;
    gx[(Ai + 2) * matrix_size + Bi + 0] +=  ( C2998- ( C849*C197 )  ) *cnst1;
    gx[(Ai + 1) * matrix_size + Bi + 3] +=  ( C2998- ( C196*C990 )  ) *cnst1;
    double C3023 =  (  (  (  (  ( C1109*C474 ) +C2878 ) +C2822 ) -C2879 ) - ( C246*C2966 )  ) -C2824;
    double gy001020 = C3023- ( C197*C529 ) ;
    gy[(Ai + 2) * matrix_size + Bi + 4] +=  ( cnst0*gy001200 ) - ( cnst0*gy001020 ) ;
    gy[(Ai + 1) * matrix_size + Bi + 1] += cnst1* (  ( C3023-C1097 ) - ( C196*C1109 )  ) ;
    gy[(Ai + 0) * matrix_size + Bi + 2] +=  (  ( - ( 0.5*gy100200 )  ) - ( 0.5*gy100020 )  ) + ( C3011- ( C193*C703 )  ) ;
    gy[(Ai + 2) * matrix_size + Bi + 2] += gy001002+ (  ( - ( 0.5*gy001200 )  ) - ( 0.5*gy001020 )  ) ;
    gx[(Ai + 1) * matrix_size + Bi + 2] +=  (  ( - ( 0.5*gx010200 )  ) - ( 0.5*gx010020 )  ) + ( C3019- ( C196*C702 )  ) ;
    gx[(Ai + 0) * matrix_size + Bi + 2] +=  (  ( C3010-C648 ) - ( C193*C702 )  ) + (  ( - ( 0.5*gx100200 )  ) - ( 0.5*gx100020 )  ) ;
    gy[(Ai + 1) * matrix_size + Bi + 2] +=  (  ( - ( 0.5*gy010200 )  ) - ( 0.5*gy010020 )  ) + (  ( C3020-C648 ) - ( C196*C703 )  ) ;
    gz[(Ai + 1) * matrix_size + Bi + 2] +=  ( C3021- ( C196*C708 )  ) + (  ( - ( 0.5*gz010200 )  ) - ( gz010020*0.5 )  ) ;
    gz[(Ai + 2) * matrix_size + Bi + 2] +=  (  ( cnst247-C648 ) - ( C708*C197 )  ) + (  ( - ( 0.5*gz001200 )  ) - ( 0.5*gz001020 )  ) ;
    gz[(Ai + 0) * matrix_size + Bi + 2] +=  ( C3012- ( C193*C708 )  ) + (  ( - ( 0.5*gz100200 )  ) - ( 0.5*gz100020 )  ) ;
    gx[(Ai + 2) * matrix_size + Bi + 2] += gx001002+ (  ( - ( 0.5*gx001200 )  ) - ( 0.5*gx001020 )  ) ;
}
