/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void overlap_gradient_12(
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
    double cnst0 = std::sqrt(0.75);
    double C1216 = ae*zAB;
    double C1194 = xAB*ae;
    double C1209 = yAB*ae;
    double C1191 = be+ae;
    double C1182 = std::sqrt( ( Pi/C1191 ) );
    double C1214 =  ( C1216*C1182 ) /C1191;
    double C1207 =  ( C1209*C1182 ) /C1191;
    double C1310 = C1194*C1182;
    double C1315 = C1310/C1191;
    double C1196 = 2.*C1191;
    double C1309 = C1182/C1196;
    double C1359 =  (  ( C1182*ae ) *2. ) /C1196;
    double C1193 = xAB*be;
    double cnst8 =  ( C1182*C1193 ) /C1191;
    double C1183 = -cnst8;
    double C1192 = ae*C1183;
    double C1233 = be*yAB;
    double C1299 = C1233*C1182;
    double cnst14 = C1299/C1191;
    double C1188 = -cnst14;
    double C1208 = C1188*ae;
    double C1259 = be*zAB;
    double C1304 = C1259*C1182;
    double cnst19 = C1304/C1191;
    double C1189 = -cnst19;
    double C1215 = C1189*ae;
    double cnst22 = cc* ( std::sqrt(3.0) ) ;
    double cnst23 = ae*2;
    double C1308 = std::pow(C1191 , 2);
    double C1318 = C1309- (  ( C1299*C1209 ) /C1308 ) ;
    double C1230 =  (  ( C1209*C1318 ) /C1191 ) + (  ( C1207-cnst14 ) /C1196 ) ;
    double C1319 = C1309- (  ( C1304*C1216 ) /C1308 ) ;
    double C1256 =  (  ( C1214-cnst19 ) /C1196 ) + (  ( C1319*C1216 ) /C1191 ) ;
    double C1184 = C1309- (  ( C1310*C1193 ) /C1308 ) ;
    double C1187 =  (  ( C1315-cnst8 ) /C1196 ) + (  ( C1194*C1184 ) /C1191 ) ;
    double C1227 =  (  (  ( std::pow(C1194 , 2) ) *C1182 ) /C1308 ) +C1309;
    double C1206 = C1309+ (  ( C1182* ( std::pow(C1209 , 2) )  ) /C1308 ) ;
    double C1213 = C1309+ (  (  ( std::pow(C1216 , 2) ) *C1182 ) /C1308 ) ;
    double C1372 =  (  ( 2* ( C1215*C1216 )  ) /C1191 ) +C1359;
    gz[(Ai + 1) * matrix_size + Bi + 1] += cnst22* ( C1372* ( C1182*C1318 )  ) ;
    gz[(Ai + 0) * matrix_size + Bi + 3] +=  (  ( C1184*C1182 ) *C1372 ) *cnst22;
    gz[(Ai + 1) * matrix_size + Bi + 3] +=  ( C1372* ( C1188*C1315 )  ) *cnst22;
    gz[(Ai + 0) * matrix_size + Bi + 1] +=  (  ( C1207*C1183 ) *C1372 ) *cnst22;
    double C1335 = C1192*2;
    double gy100002 =  ( C1188*C1335 ) *C1213;
    double gz100020 = C1189* ( C1335*C1206 ) ;
    double cnst55 = 0.5*gz100020;
    double cnst56 = gz100020*cnst0;
    gx[(Ai + 2) * matrix_size + Bi + 1] +=  ( C1319* ( C1335*C1207 )  ) *cnst22;
    gx[(Ai + 1) * matrix_size + Bi + 1] +=  (  ( C1335*C1318 ) *C1214 ) *cnst22;
    double gx010020 =  ( C1335*C1230 ) *C1182;
    double C1264 =  ( - (  ( be*C1182 ) *2 )  ) /C1196;
    double C1240 = C1264- (  (  ( C1233*C1208 ) *2 ) /C1191 ) ;
    double gy010200 = C1182* ( C1227*C1240 ) ;
    gy[(Ai + 1) * matrix_size + Bi + 3] +=  ( C1214* ( C1315*C1240 )  ) *cnst22;
    double C1202 = C1264- (  (  ( C1192*C1193 ) *2 ) /C1191 ) ;
    double gx100020 = C1182* ( C1202*C1206 ) ;
    gx[(Ai + 0) * matrix_size + Bi + 1] += cnst22* (  ( C1202*C1207 ) *C1214 ) ;
    double C1375 = C1264- (  (  ( C1259*C1215 ) *2 ) /C1191 ) ;
    double gz001020 =  ( C1182*C1206 ) *C1375;
    double gz001200 = C1375* ( C1227*C1182 ) ;
    gz[(Ai + 2) * matrix_size + Bi + 4] += cc* (  ( gz001200*cnst0 ) - ( cnst0*gz001020 )  ) ;
    gz[(Ai + 2) * matrix_size + Bi + 0] +=  ( C1375* ( C1315*C1207 )  ) *cnst22;
    double C1329 = C1215*2;
    gz[(Ai + 1) * matrix_size + Bi + 0] += cnst22* ( C1329* ( C1315*C1318 )  ) ;
    double gz100200 =  ( C1187*C1182 ) *C1329;
    gz[(Ai + 0) * matrix_size + Bi + 4] += cc* (  ( cnst0*gz100200 ) -cnst56 ) ;
    double C1383 =  (  ( C1216*C1372 ) /C1191 ) + (  ( C1329+ (  ( ae*C1214 ) *2 )  ) /C1196 ) ;
    gz[(Ai + 0) * matrix_size + Bi + 2] += cc* (  (  ( - ( 0.5*gz100200 )  ) -cnst55 ) + (  ( C1182*C1183 ) *C1383 )  ) ;
    gz[(Ai + 0) * matrix_size + Bi + 0] +=  ( C1329* ( C1184*C1207 )  ) *cnst22;
    double gz010020 = C1329* ( C1182*C1230 ) ;
    double C1328 = C1208*2;
    double gz010200 =  ( C1227*C1328 ) *C1189;
    double cnst92 = gz010200*cnst0;
    gz[(Ai + 1) * matrix_size + Bi + 4] +=  ( cnst92- ( gz010020*cnst0 )  ) *cc;
    double cnst95 = - ( 0.5*gz010200 ) ;
    gz[(Ai + 1) * matrix_size + Bi + 2] += cc* (  ( C1383* ( C1188*C1182 )  ) + ( cnst95- ( gz010020*0.5 )  )  ) ;
    double gy100200 =  ( C1187*C1328 ) *C1182;
    gy[(Ai + 0) * matrix_size + Bi + 3] += cnst22* (  ( C1328*C1184 ) *C1214 ) ;
    gy[(Ai + 2) * matrix_size + Bi + 3] += cnst22* (  ( C1328*C1315 ) *C1319 ) ;
    double C1369 =  (  (  ( C1194*C1192 ) *2 ) /C1191 ) +C1359;
    gx[(Ai + 2) * matrix_size + Bi + 3] +=  ( C1319* ( C1182*C1369 )  ) *cnst22;
    gx[(Ai + 2) * matrix_size + Bi + 0] +=  (  ( C1207*C1369 ) *C1189 ) *cnst22;
    gx[(Ai + 1) * matrix_size + Bi + 3] += cnst22* (  ( C1188*C1369 ) *C1214 ) ;
    gx[(Ai + 1) * matrix_size + Bi + 0] += cnst22* ( C1182* ( C1369*C1318 )  ) ;
    double C1370 =  (  (  ( C1208*C1209 ) *2 ) /C1191 ) +C1359;
    gy[(Ai + 0) * matrix_size + Bi + 0] += cnst22* ( C1182* ( C1184*C1370 )  ) ;
    gy[(Ai + 2) * matrix_size + Bi + 0] += cnst22* (  ( C1315*C1370 ) *C1189 ) ;
    gy[(Ai + 2) * matrix_size + Bi + 1] +=  (  ( C1182*C1370 ) *C1319 ) *cnst22;
    double C1382 =  (  ( C1209*C1370 ) /C1191 ) + (  ( C1328+ (  ( C1207*ae ) *2 )  ) /C1196 ) ;
    double gy100020 =  ( C1382*C1183 ) *C1182;
    gy[(Ai + 0) * matrix_size + Bi + 2] += cc* ( gy100002+ (  ( - ( 0.5*gy100200 )  ) - ( gy100020*0.5 )  )  ) ;
    gy[(Ai + 0) * matrix_size + Bi + 4] += cc* (  ( gy100200*cnst0 ) - ( gy100020*cnst0 )  ) ;
    double gy001020 =  ( C1382*C1182 ) *C1189;
    gy[(Ai + 2) * matrix_size + Bi + 2] += cc* (  ( cnst95- ( 0.5*gy001020 )  ) + (  ( C1328*C1182 ) *C1256 )  ) ;
    gy[(Ai + 2) * matrix_size + Bi + 4] += cc* ( cnst92- ( gy001020*cnst0 )  ) ;
    gy[(Ai + 0) * matrix_size + Bi + 1] += cnst22* (  ( C1183*C1370 ) *C1214 ) ;
    double C1384 =  (  ( C1194*C1369 ) /C1191 ) + (  (  (  ( C1315*ae ) *2 ) +C1335 ) /C1196 ) ;
    double gx001200 =  ( C1182*C1384 ) *C1189;
    gx[(Ai + 2) * matrix_size + Bi + 2] += cc* (  (  ( - ( 0.5*gx001200 )  ) -cnst55 ) + ( C1256* ( C1335*C1182 )  )  ) ;
    gx[(Ai + 2) * matrix_size + Bi + 4] += cc* (  ( gx001200*cnst0 ) -cnst56 ) ;
    double gx010200 =  ( C1188*C1384 ) *C1182;
    gx[(Ai + 1) * matrix_size + Bi + 2] += cc* ( gy100002+ (  ( - ( 0.5*gx010200 )  ) - ( 0.5*gx010020 )  )  ) ;
    gx[(Ai + 1) * matrix_size + Bi + 4] += cc* (  ( cnst0*gx010200 ) - ( gx010020*cnst0 )  ) ;
    double C1357 =  (  ( C1192*4. ) /C1196 ) + (  ( C1194*C1202 ) /C1191 ) ;
    gx[(Ai + 0) * matrix_size + Bi + 0] += cnst22* (  ( C1207*C1357 ) *C1182 ) ;
    double cnst148 =  (  ( C1194*C1357 ) /C1191 ) + (  (  ( C1184*cnst23 ) + ( C1202+C1369 )  ) /C1196 ) ;
    double gx100200 = cnst148* ( std::pow(C1182 , 2) ) ;
    gx[(Ai + 0) * matrix_size + Bi + 4] += cc* (  ( gx100200*cnst0 ) - ( cnst0*gx100020 )  ) ;
    gx[(Ai + 0) * matrix_size + Bi + 2] += cc* (  ( C1213* ( C1202*C1182 )  ) + (  ( - ( gx100200*0.5 )  ) - ( 0.5*gx100020 )  )  ) ;
    gx[(Ai + 0) * matrix_size + Bi + 3] +=  (  ( C1182*C1357 ) *C1214 ) *cnst22;
    double C1366 =  (  ( C1209*C1240 ) /C1191 ) + (  ( C1208*4. ) /C1196 ) ;
    gy[(Ai + 1) * matrix_size + Bi + 1] += cnst22* ( C1214* ( C1182*C1366 )  ) ;
    gy[(Ai + 1) * matrix_size + Bi + 0] += cnst22* ( C1182* ( C1315*C1366 )  ) ;
    double cnst160 =  (  ( C1209*C1366 ) /C1191 ) + (  (  ( C1370+C1240 ) + ( C1318*cnst23 )  ) /C1196 ) ;
    double gy010020 =  ( cnst160*C1182 ) *C1182;
    gy[(Ai + 1) * matrix_size + Bi + 2] += cc* (  (  ( - ( 0.5*gy010200 )  ) - ( gy010020*0.5 )  ) + (  ( C1182*C1240 ) *C1213 )  ) ;
    gy[(Ai + 1) * matrix_size + Bi + 4] += cc* (  ( cnst0*gy010200 ) - ( gy010020*cnst0 )  ) ;
    double C1368 =  (  ( C1215*4. ) /C1196 ) + (  ( C1375*C1216 ) /C1191 ) ;
    gz[(Ai + 2) * matrix_size + Bi + 3] += cnst22* (  ( C1315*C1182 ) *C1368 ) ;
    gz[(Ai + 2) * matrix_size + Bi + 1] += cnst22* ( C1368* ( C1207*C1182 )  ) ;
    double cnst169 =  (  ( C1368*C1216 ) /C1191 ) + (  (  ( C1319*cnst23 ) + ( C1375+C1372 )  ) /C1196 ) ;
    double cnst170 =  (  ( C1182*C1182 ) *cnst169 ) + (  ( - ( gz001200*0.5 )  ) - ( 0.5*gz001020 )  ) ;
    gz[(Ai + 2) * matrix_size + Bi + 2] += cnst170*cc;
}
