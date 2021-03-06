/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void vne_gradient_12_3(
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
    double C161 = bs[3];
    double C155 = bs[1];
    double C160 = bs[2];
    double C162 = bs[4];
    double cnst0 = std::sqrt(0.75);
    double C157 = yA-yB;
    double C156 = xA-xB;
    double cnst1 = std::sqrt(3.0);
    double C158 = zA-zB;
    double C2026 = C157*be;
    double C183 =  ( be*ae ) * (  ( std::pow(C158 , 2) ) + (  ( std::pow(C156 , 2) ) + ( std::pow(C157 , 2) )  )  ) ;
    double C2009 = C156*be;
    double C154 = be+ae;
    double C186 = std::exp( ( - ( C183/C154 )  ) );
    double C2004 = C186* ( Pi*2. ) ;
    double C2084 = C2004*C161;
    double C151 = C2084/C154;
    double C2005 = C155*C2004;
    double C146 = C2005/C154;
    double C2080 = C160*C2004;
    double C148 = C2080/C154;
    double C187 = C186*Pi;
    double C174 =  (  ( ae*xA ) + ( be*xB )  ) /C154;
    double C180 = C174-xC;
    double C2106 =  (  ( - (  ( C2009*C2080 ) /C154 )  ) /C154 ) - (  ( C180*C2084 ) /C154 ) ;
    double C2109 =  (  ( C2080*C156 ) /C154 ) +C2106;
    double C191 =  ( C187*C180 ) *4;
    double C194 = C191*C155;
    double C2115 = C162*C191;
    double C196 = C191*C161;
    double C195 = C160*C191;
    double C2022 =  (  ( - (  ( C2009*C2005 ) /C154 )  ) /C154 ) - (  ( C2080*C180 ) /C154 ) ;
    double C147 = C2022+ (  ( C156*C2005 ) /C154 ) ;
    double C178 = C174-xB;
    double C227 =  ( C146+ ( C178*C194 )  ) - ( C195*C180 ) ;
    double C228 =  ( C148+ ( C195*C178 )  ) - ( C196*C180 ) ;
    double C171 = C154*2;
    double C205 = C194/C171;
    double C2116 = C196/C171;
    double C208 = C195/C171;
    double cnst24 =  ( C2109+ ( C208+ ( C228*C178 )  )  ) - ( C180* (  (  ( C196*C178 ) +C151 ) - ( C2115*C180 )  )  ) ;
    double C244 =  (  (  ( C205+ ( C227*C178 )  ) +C147 ) - ( C228*C180 )  ) -C208;
    double C2091 =  ( C146-C148 ) / ( C154*2. ) ;
    double C149 =  ( C156*C147 ) + (  ( C2022*C156 ) + ( C2091- (  ( C2106*C180 ) + (  ( C2022*C2009 ) /C154 )  )  )  ) ;
    double cnst36 =  (  ( C149+ (  ( C178*C244 ) + ( C227/C154 )  )  ) - (  ( cnst24-C2116 ) *C180 )  ) - ( C228/C154 ) ;
    double gx100200 = cnst36- ( C156*C244 ) ;
    double C177 =  (  ( zA*ae ) + ( be*zB )  ) /C154;
    double C182 = C177-zC;
    double C2185 = C2115*C182;
    double C193 =  ( C187*C182 ) *4;
    double C202 = C193*C161;
    double C474 = C202*C180;
    double C2120 = C202/C171;
    double C201 = C193*C160;
    double C473 = C201*C180;
    double C220 = C201/C171;
    double C226 =  ( C201*C178 ) -C474;
    double cnst47 =  (  (  (  ( C178*C226 ) +C220 ) - (  (  ( C178*C202 ) -C2185 ) *C180 )  ) -C2120 ) *C180;
    double C200 = C193*C155;
    double C225 =  ( C200*C178 ) -C473;
    double C217 = C200/C171;
    double C242 =  (  (  ( C178*C225 ) +C217 ) - ( C180*C226 )  ) -C220;
    double gz100200 =  (  (  (  ( C225/C154 ) + ( C242*C178 )  ) -cnst47 ) - ( C226/C154 )  ) - ( C156*C242 ) ;
    double C472 = C177-zB;
    double C496 =  ( C148+ ( C472*C201 )  ) - ( C202*C182 ) ;
    double C2162 = C496/C171;
    double C485 =  ( C472*C194 ) -C473;
    double C2152 = C485/C171;
    double C2212 =  (  ( C472*C202 ) +C151 ) - (  ( C162*C193 ) *C182 ) ;
    double C495 =  ( C146+ ( C200*C472 )  ) - ( C201*C182 ) ;
    double C2160 = C495/C171;
    double C733 =  ( C495*C178 ) - ( C180*C496 ) ;
    double C2296 =  (  (  ( C178*C733 ) +C2160 ) - (  (  ( C178*C496 ) - ( C2212*C180 )  ) *C180 )  ) -C2162;
    double gz001200 = C2296- ( C242*C158 ) ;
    gz[(Ai + 0) * matrix_size + Bi + 3] +=  ( C2296- ( C156*C733 )  ) *cnst1;
    double C2209 =  ( C196*C472 ) -C2185;
    double C486 =  ( C195*C472 ) -C474;
    double C504 =  (  ( C205+ ( C472*C485 )  ) - ( C486*C182 )  ) -C208;
    double C2249 =  (  ( C208+ ( C472*C486 )  ) - ( C2209*C182 )  ) -C2116;
    double gx001002 =  (  (  (  ( C472*C504 ) + ( C485/C154 )  ) - ( C2249*C182 )  ) - ( C486/C154 )  ) - ( C504*C158 ) ;
    double C2154 = C486/C171;
    double C2042 = be*C158;
    double C2108 =  (  ( - (  ( C2080*C2042 ) /C154 )  ) /C154 ) - (  ( C182*C2084 ) /C154 ) ;
    double C471 =  (  ( C2080*C158 ) /C154 ) +C2108;
    double C2251 =  (  (  (  ( C472*C496 ) +C220 ) +C471 ) - ( C2212*C182 )  ) -C2120;
    double C2054 =  (  ( - (  ( C2005*C2042 ) /C154 )  ) /C154 ) - (  ( C2080*C182 ) /C154 ) ;
    double C2099 =  (  ( C2005*C158 ) /C154 ) +C2054;
    double C508 =  (  ( C2099+ ( C217+ ( C495*C472 )  )  ) - ( C182*C496 )  ) -C220;
    double C2290 =  ( C508*C178 ) - ( C2251*C180 ) ;
    gz[(Ai + 2) * matrix_size + Bi + 3] +=  ( C2290- ( C158*C733 )  ) *cnst1;
    double C734 =  (  ( C178*C485 ) +C2099 ) - ( C486*C180 ) ;
    double C2214 =  ( C2152+ ( C178*C734 )  ) + (  ( C158*C147 ) - (  ( C2109*C182 ) + (  ( C2042*C147 ) /C154 )  )  ) ;
    double C2294 =  ( C2214- (  (  ( C471+ ( C486*C178 )  ) - ( C2209*C180 )  ) *C180 )  ) -C2154;
    double gx001200 = C2294- ( C158*C244 ) ;
    gx[(Ai + 0) * matrix_size + Bi + 3] +=  ( C2294- ( C156*C734 )  ) *cnst1;
    double C469 =  ( C158*C2099 ) + (  ( C2091- (  (  ( C2054*C2042 ) /C154 ) + ( C182*C2108 )  )  ) + ( C2054*C158 )  ) ;
    double cnst96 =  (  (  (  ( C495/C154 ) + ( C472*C508 )  ) +C469 ) - ( C2251*C182 )  ) - ( C496/C154 ) ;
    double C2288 =  (  ( C504*C178 ) +C469 ) - ( C2249*C180 ) ;
    gx[(Ai + 2) * matrix_size + Bi + 3] += cnst1* ( C2288- ( C158*C734 )  ) ;
    double C176 =  (  ( be*yB ) + ( ae*yA )  ) /C154;
    double C340 = C176-yB;
    double C181 = C176-yC;
    double C476 = C181*C202;
    double C358 =  ( C201*C340 ) -C476;
    double C2226 = C2209*C181;
    double C2243 =  ( C486*C340 ) -C2226;
    double C2177 = C181*C2115;
    double C2205 =  ( C196*C340 ) -C2177;
    double C2107 =  (  ( - (  ( C2080*C2026 ) /C154 )  ) /C154 ) - (  ( C181*C2084 ) /C154 ) ;
    double C2110 =  (  ( C157*C2080 ) /C154 ) +C2107;
    double C2297 =  ( C504*C340 ) - ( C181*C2249 ) ;
    double C830 =  ( C495*C340 ) - ( C181*C496 ) ;
    double C2245 =  ( C340*C496 ) - ( C181*C2212 ) ;
    double C2278 =  ( C830*C178 ) - ( C2245*C180 ) ;
    gz[(Ai + 0) * matrix_size + Bi + 1] +=  ( C2278- ( C156*C830 )  ) *cnst1;
    gz[(Ai + 1) * matrix_size + Bi + 3] +=  ( C2278- ( C157*C733 )  ) *cnst1;
    double C2302 =  (  (  ( C830*C340 ) +C2160 ) - ( C2245*C181 )  ) -C2162;
    gz[(Ai + 1) * matrix_size + Bi + 1] +=  ( C2302- ( C157*C830 )  ) *cnst1;
    double C2038 =  (  ( - (  ( C2005*C2026 ) /C154 )  ) /C154 ) - (  ( C2080*C181 ) /C154 ) ;
    double C2096 = C2038+ (  ( C157*C2005 ) /C154 ) ;
    double C337 =  (  ( C157*C2038 ) + ( C2091- (  (  ( C2038*C2026 ) /C154 ) + ( C181*C2107 )  )  )  ) + ( C157*C2096 ) ;
    double C821 =  ( C2096*C158 ) - (  ( C2110*C182 ) + (  ( C2096*C2042 ) /C154 )  ) ;
    double C475 = C201*C181;
    double C357 =  ( C200*C340 ) -C475;
    double C374 =  (  ( C217+ ( C357*C340 )  ) - ( C181*C358 )  ) -C220;
    double gz001020 = C2302- ( C374*C158 ) ;
    gz[(Ai + 2) * matrix_size + Bi + 4] +=  ( gz001200*cnst0 ) - ( gz001020*cnst0 ) ;
    gz[(Ai + 2) * matrix_size + Bi + 2] +=  ( cnst96- ( C508*C158 )  ) + (  ( - ( 0.5*gz001200 )  ) - ( 0.5*gz001020 )  ) ;
    double C620 =  ( C357*C178 ) - ( C358*C180 ) ;
    gz[(Ai + 2) * matrix_size + Bi + 0] +=  ( C2278- ( C620*C158 )  ) *cnst1;
    double C2299 =  ( C508*C340 ) - ( C2251*C181 ) ;
    gz[(Ai + 2) * matrix_size + Bi + 1] += cnst1* ( C2299- ( C830*C158 )  ) ;
    double C192 =  ( C181*C187 ) *4;
    double C198 = C192*C160;
    double C341 = C180*C198;
    double C353 =  ( C340*C194 ) -C341;
    double C488 =  ( C472*C198 ) -C476;
    double C2158 = C488/C171;
    double C823 = C488*C180;
    double C828 =  ( C340*C485 ) -C823;
    double C2276 =  ( C821+ ( C178*C828 )  ) - ( C2243*C180 ) ;
    gx[(Ai + 1) * matrix_size + Bi + 3] +=  ( C2276- ( C157*C734 )  ) *cnst1;
    gx[(Ai + 2) * matrix_size + Bi + 1] +=  ( C2297- ( C158*C828 )  ) *cnst1;
    gx[(Ai + 0) * matrix_size + Bi + 1] +=  ( C2276- ( C156*C828 )  ) *cnst1;
    double C2300 =  (  (  ( C340*C828 ) +C2152 ) - ( C2243*C181 )  ) -C2154;
    gx[(Ai + 1) * matrix_size + Bi + 1] +=  ( C2300- ( C157*C828 )  ) *cnst1;
    double C214 = C198/C171;
    double C199 = C192*C161;
    double C342 = C199*C180;
    double C354 =  ( C195*C340 ) -C342;
    double C372 =  (  (  ( C340*C353 ) +C205 ) - ( C181*C354 )  ) -C208;
    double gx001020 = C2300- ( C372*C158 ) ;
    gx[(Ai + 2) * matrix_size + Bi + 2] +=  (  ( - ( 0.5*gx001200 )  ) - ( gx001020*0.5 )  ) +gx001002;
    gx[(Ai + 2) * matrix_size + Bi + 4] +=  ( gx001200*cnst0 ) - ( gx001020*cnst0 ) ;
    double C2246 =  (  ( C208+ ( C354*C340 )  ) - ( C181*C2205 )  ) -C2116;
    double gx010020 =  (  (  (  ( C353/C154 ) + ( C372*C340 )  ) - ( C181*C2246 )  ) - ( C354/C154 )  ) - ( C157*C372 ) ;
    double C2285 =  ( C337+ ( C372*C178 )  ) - ( C180*C2246 ) ;
    double gx100020 = C2285- ( C156*C372 ) ;
    gx[(Ai + 0) * matrix_size + Bi + 4] +=  ( gx100200*cnst0 ) - ( cnst0*gx100020 ) ;
    gx[(Ai + 0) * matrix_size + Bi + 2] +=  ( C2288- ( C156*C504 )  ) + (  ( - ( 0.5*gx100200 )  ) - ( 0.5*gx100020 )  ) ;
    double C621 =  ( C2096+ ( C178*C353 )  ) - ( C354*C180 ) ;
    gx[(Ai + 1) * matrix_size + Bi + 0] +=  ( C2285- ( C157*C621 )  ) *cnst1;
    double C2213 =  (  ( C157*C147 ) - (  ( C2109*C181 ) + (  ( C2026*C147 ) /C154 )  )  ) + (  ( C621*C178 ) + ( C353/C171 )  ) ;
    double C2291 =  ( C2213- (  (  ( C2110+ ( C354*C178 )  ) - ( C2205*C180 )  ) *C180 )  ) - ( C354/C171 ) ;
    double gx010200 = C2291- ( C157*C244 ) ;
    gx[(Ai + 1) * matrix_size + Bi + 2] +=  ( C2297- ( C157*C504 )  ) + (  ( - ( 0.5*gx010200 )  ) - ( 0.5*gx010020 )  ) ;
    gx[(Ai + 1) * matrix_size + Bi + 4] +=  ( gx010200*cnst0 ) - ( cnst0*gx010020 ) ;
    gx[(Ai + 2) * matrix_size + Bi + 0] +=  ( C2276- ( C621*C158 )  ) *cnst1;
    gx[(Ai + 0) * matrix_size + Bi + 0] +=  ( C2291- ( C621*C156 )  ) *cnst1;
    double C224 =  ( C178*C198 ) -C342;
    double C2118 = C199/C171;
    double cnst173 =  (  (  (  ( C224*C178 ) +C214 ) - (  (  ( C199*C178 ) -C2177 ) *C180 )  ) -C2118 ) *C180;
    double C362 =  (  ( C340*C198 ) +C148 ) - ( C199*C181 ) ;
    double C2117 = C162*C192;
    double C2182 = C2117*C182;
    double C2210 =  ( C199*C472 ) -C2182;
    double C2250 =  (  (  ( C488*C472 ) +C214 ) - ( C182*C2210 )  ) -C2118;
    double C2244 =  (  ( C488*C340 ) +C471 ) - ( C181*C2210 ) ;
    double C2208 =  ( C340*C202 ) -C2182;
    double C2248 =  (  (  ( C358*C340 ) +C220 ) - ( C181*C2208 )  ) -C2120;
    double C2287 =  ( C374*C178 ) - ( C180*C2248 ) ;
    gz[(Ai + 1) * matrix_size + Bi + 0] +=  ( C2287- ( C157*C620 )  ) *cnst1;
    double gz100020 = C2287- ( C374*C156 ) ;
    gz[(Ai + 0) * matrix_size + Bi + 4] +=  ( gz100200*cnst0 ) - ( gz100020*cnst0 ) ;
    gz[(Ai + 0) * matrix_size + Bi + 2] +=  (  ( - ( gz100200*0.5 )  ) - ( gz100020*0.5 )  ) + ( C2290- ( C156*C508 )  ) ;
    double gz010020 =  (  (  (  ( C357/C154 ) + ( C374*C340 )  ) - ( C181*C2248 )  ) - ( C358/C154 )  ) - ( C157*C374 ) ;
    double C2272 =  (  ( C357/C171 ) + ( C620*C178 )  ) - (  (  ( C358*C178 ) - ( C2208*C180 )  ) *C180 ) ;
    double C2293 = C2272- ( C358/C171 ) ;
    double gz010200 = C2293- ( C157*C242 ) ;
    gz[(Ai + 1) * matrix_size + Bi + 4] +=  ( cnst0*gz010200 ) - ( cnst0*gz010020 ) ;
    gz[(Ai + 1) * matrix_size + Bi + 2] +=  ( C2299- ( C157*C508 )  ) + (  ( - ( 0.5*gz010200 )  ) - ( 0.5*gz010020 )  ) ;
    gz[(Ai + 0) * matrix_size + Bi + 0] += cnst1* ( C2293- ( C156*C620 )  ) ;
    double C2207 =  ( C151+ ( C199*C340 )  ) - ( C181*C2117 ) ;
    double C2247 =  (  ( C2110+ ( C214+ ( C362*C340 )  )  ) - ( C181*C2207 )  ) -C2118;
    double C197 = C192*C155;
    double C487 =  ( C472*C197 ) -C475;
    double C2156 = C487/C171;
    double C831 =  (  ( C487*C340 ) +C2099 ) - ( C488*C181 ) ;
    double C2301 =  (  ( C821+ (  ( C340*C831 ) +C2156 )  ) - ( C2244*C181 )  ) -C2158;
    double C2277 =  ( C178*C831 ) - ( C2244*C180 ) ;
    gy[(Ai + 0) * matrix_size + Bi + 1] +=  ( C2277- ( C156*C831 )  ) *cnst1;
    gy[(Ai + 1) * matrix_size + Bi + 1] +=  ( C2301- ( C157*C831 )  ) *cnst1;
    double C732 =  ( C487*C178 ) -C823;
    gy[(Ai + 1) * matrix_size + Bi + 3] += cnst1* ( C2277- ( C157*C732 )  ) ;
    double C2295 =  (  (  ( C732*C178 ) +C2156 ) - ( C180* (  ( C488*C178 ) -C2226 )  )  ) -C2158;
    gy[(Ai + 0) * matrix_size + Bi + 3] +=  ( C2295- ( C732*C156 )  ) *cnst1;
    double C361 =  ( C146+ ( C340*C197 )  ) - ( C181*C198 ) ;
    double C619 =  ( C361*C178 ) - ( C362*C180 ) ;
    gy[(Ai + 2) * matrix_size + Bi + 0] +=  ( C2277- ( C619*C158 )  ) *cnst1;
    double C2271 =  (  ( C361/C171 ) + ( C619*C178 )  ) - (  (  ( C362*C178 ) - ( C2207*C180 )  ) *C180 ) ;
    double C2292 = C2271- ( C362/C171 ) ;
    gy[(Ai + 0) * matrix_size + Bi + 0] +=  ( C2292- ( C156*C619 )  ) *cnst1;
    double C223 =  ( C178*C197 ) -C341;
    double C211 = C197/C171;
    double C241 =  (  ( C211+ ( C223*C178 )  ) - ( C224*C180 )  ) -C214;
    double gy001200 = C2295- ( C241*C158 ) ;
    double gy010200 = C2292- ( C157*C241 ) ;
    double gy100200 =  (  (  (  ( C223/C154 ) + ( C241*C178 )  ) -cnst173 ) - ( C224/C154 )  ) - ( C156*C241 ) ;
    double C376 =  (  ( C2096+ ( C211+ ( C361*C340 )  )  ) - ( C181*C362 )  ) -C214;
    double cnst222 =  (  (  (  ( C361/C154 ) + ( C376*C340 )  ) +C337 ) - ( C181*C2247 )  ) - ( C362/C154 ) ;
    double C2286 =  ( C376*C178 ) - ( C2247*C180 ) ;
    gy[(Ai + 1) * matrix_size + Bi + 0] +=  ( C2286- ( C157*C619 )  ) *cnst1;
    double gy100020 = C2286- ( C156*C376 ) ;
    gy[(Ai + 0) * matrix_size + Bi + 4] +=  ( gy100200*cnst0 ) - ( gy100020*cnst0 ) ;
    double gy001020 = C2301- ( C376*C158 ) ;
    gy[(Ai + 2) * matrix_size + Bi + 4] +=  ( cnst0*gy001200 ) - ( gy001020*cnst0 ) ;
    double gy010020 = cnst222- ( C157*C376 ) ;
    gy[(Ai + 1) * matrix_size + Bi + 4] +=  ( cnst0*gy010200 ) - ( cnst0*gy010020 ) ;
    double C505 =  (  (  ( C472*C487 ) +C211 ) - ( C488*C182 )  ) -C214;
    double C2289 =  ( C505*C178 ) - ( C2250*C180 ) ;
    gy[(Ai + 2) * matrix_size + Bi + 3] +=  ( C2289- ( C732*C158 )  ) *cnst1;
    double C2298 =  ( C469+ ( C505*C340 )  ) - ( C2250*C181 ) ;
    gy[(Ai + 2) * matrix_size + Bi + 1] +=  ( C2298- ( C158*C831 )  ) *cnst1;
    gy[(Ai + 1) * matrix_size + Bi + 2] +=  ( C2298- ( C157*C505 )  ) + (  ( - ( 0.5*gy010200 )  ) - ( 0.5*gy010020 )  ) ;
    double gy001002 =  (  (  (  ( C487/C154 ) + ( C472*C505 )  ) - ( C2250*C182 )  ) - ( C488/C154 )  ) - ( C505*C158 ) ;
    gy[(Ai + 2) * matrix_size + Bi + 2] += gy001002+ (  ( - ( 0.5*gy001200 )  ) - ( 0.5*gy001020 )  ) ;
    gy[(Ai + 0) * matrix_size + Bi + 2] +=  (  ( - ( gy100200*0.5 )  ) - ( 0.5*gy100020 )  ) + ( C2289- ( C156*C505 )  ) ;
}
