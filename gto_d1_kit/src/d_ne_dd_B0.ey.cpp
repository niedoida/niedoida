/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void vne_gradient_22_2(double ae,
                       double be,
                       double xA,
                       double yA,
                       double zA,
                       double xB,
                       double yB,
                       double zB,
                       double xC,
                       double yC,
                       double zC,
                       const double* bs,
                       double* const gx,
                       double* const gy,
                       double* const gz,
                       std::size_t matrix_size,
                       std::size_t Ai,
                       std::size_t Bi)
{
    const double C16007 = bs[2];
    const double C16006 = bs[1];
    const double C16005 = be * xB;
    const double C16004 = ae * xA;
    const double C16003 = 2. * Pi;
    const double C16002 = ae + be;
    const double C16001 = ae * be;
    const double C16000 = zA - zB;
    const double C15999 = yA - yB;
    const double C15998 = xA - xB;
    const double C15997 = bs[0];
    const double C16013 = 2. * C16002;
    const double C16012 = C16004 + C16005;
    const double C16011 = be * C15998;
    const double C16010 = std::pow(C16000, 2);
    const double C16009 = std::pow(C15999, 2);
    const double C16008 = std::pow(C15998, 2);
    const double C16015 = C16012 / C16002;
    const double C16014 = C16008 + C16009;
    const double C16017 = C16015 - xC;
    const double C16016 = C16014 + C16010;
    const double C16018 = C16016 * C16001;
    const double C16019 = C16018 / C16002;
    const double C16020 = -C16019;
    const double C16021 = std::exp(C16020);
    const double C16022 = C16021 * C16003;
    const double C16025 = C16007 * C16022;
    const double C16024 = C16006 * C16022;
    const double C16023 = C15997 * C16022;
    const double C16031 = C16024 / C16002;
    const double C16030 = C16023 / C16002;
    const double C16029 = C16017 * C16025;
    const double C16028 = C16024 * C16011;
    const double C16027 = C16017 * C16024;
    const double C16026 = C16023 * C16011;
    const double C16036 = C16030 - C16031;
    const double C16035 = C16029 / C16002;
    const double C16034 = C16028 / C16002;
    const double C16033 = C16027 / C16002;
    const double C16032 = C16026 / C16002;
    const double C16039 = C16036 / C16013;
    const double C16038 = -C16034;
    const double C16037 = -C16032;
    const double C16041 = C16038 / C16002;
    const double C16040 = C16037 / C16002;
    const double C16043 = C16041 - C16035;
    const double C16042 = C16040 - C16033;
    const double C16046 = C15998 * C16042;
    const double C16045 = C16017 * C16043;
    const double C16044 = C16042 * C16011;
    const double C16047 = C16044 / C16002;
    const double C16048 = C16047 + C16045;
    const double C16049 = C16039 - C16048;
    const double C16050 = C16049 + C16046;
    const double C16065 = C15998 * C16043;
    const double C16064 = C16043 * C16011;
    const double C16063 = C16025 / C16002;
    const double C16062 = bs[3];
    const double C16061 = C16025 * C16011;
    const double C16069 = C16064 / C16002;
    const double C16068 = C16031 - C16063;
    const double C16067 = C16062 * C16022;
    const double C16066 = C16061 / C16002;
    const double C16072 = C16068 / C16013;
    const double C16071 = C16017 * C16067;
    const double C16070 = -C16066;
    const double C16074 = C16071 / C16002;
    const double C16073 = C16070 / C16002;
    const double C16075 = C16073 - C16074;
    const double C16076 = C16017 * C16075;
    const double C16077 = C16069 + C16076;
    const double C16078 = C16072 - C16077;
    const double C16079 = C16078 + C16065;
    const double C16089 = C15998 * C16024;
    const double C16088 = be * yB;
    const double C16087 = ae * yA;
    const double C16086 = be * C15999;
    const double C16085 = C15998 * C16023;
    const double C16092 = C16089 / C16002;
    const double C16091 = C16087 + C16088;
    const double C16090 = C16085 / C16002;
    const double C16095 = C16043 + C16092;
    const double C16094 = C16091 / C16002;
    const double C16093 = C16042 + C16090;
    const double C16097 = C16094 - yC;
    const double C16096 = C16093 * C16086;
    const double C16099 = C16097 * C16095;
    const double C16098 = C16096 / C16002;
    const double C16100 = C16098 + C16099;
    const double C16103 = C16097 * C16024;
    const double C16102 = C16023 * C16086;
    const double C16105 = C16103 / C16002;
    const double C16104 = C16102 / C16002;
    const double C16106 = -C16104;
    const double C16107 = C16106 / C16002;
    const double C16108 = C16107 - C16105;
    const double C16111 = C16097 * C16025;
    const double C16110 = C16024 * C16086;
    const double C16113 = C16111 / C16002;
    const double C16112 = C16110 / C16002;
    const double C16114 = -C16112;
    const double C16115 = C16114 / C16002;
    const double C16116 = C16115 - C16113;
    const double C16119 = C15998 * C16025;
    const double C16118 = C16095 * C16086;
    const double C16121 = C16119 / C16002;
    const double C16120 = C16118 / C16002;
    const double C16122 = C16075 + C16121;
    const double C16123 = C16097 * C16122;
    const double C16124 = C16120 + C16123;
    const double C16127 = C16097 * C16067;
    const double C16126 = C16025 * C16086;
    const double C16129 = C16127 / C16002;
    const double C16128 = C16126 / C16002;
    const double C16130 = -C16128;
    const double C16131 = C16130 / C16002;
    const double C16132 = C16131 - C16129;
    const double C16135 = C16097 * C16043;
    const double C16134 = C16042 * C16086;
    const double C16136 = C16134 / C16002;
    const double C16137 = C16136 + C16135;
    const double C16145 = be * zB;
    const double C16144 = ae * zA;
    const double C16143 = be * C16000;
    const double C16147 = C16144 + C16145;
    const double C16146 = C16093 * C16143;
    const double C16149 = C16147 / C16002;
    const double C16148 = C16146 / C16002;
    const double C16150 = C16149 - zC;
    const double C16151 = C16150 * C16095;
    const double C16152 = C16148 + C16151;
    const double C16155 = C16150 * C16024;
    const double C16154 = C16023 * C16143;
    const double C16157 = C16155 / C16002;
    const double C16156 = C16154 / C16002;
    const double C16158 = -C16156;
    const double C16159 = C16158 / C16002;
    const double C16160 = C16159 - C16157;
    const double C16163 = C16150 * C16025;
    const double C16162 = C16024 * C16143;
    const double C16165 = C16163 / C16002;
    const double C16164 = C16162 / C16002;
    const double C16166 = -C16164;
    const double C16167 = C16166 / C16002;
    const double C16168 = C16167 - C16165;
    const double C16171 = C16150 * C16122;
    const double C16170 = C16095 * C16143;
    const double C16172 = C16170 / C16002;
    const double C16173 = C16172 + C16171;
    const double C16176 = C16150 * C16067;
    const double C16175 = C16025 * C16143;
    const double C16178 = C16176 / C16002;
    const double C16177 = C16175 / C16002;
    const double C16179 = -C16177;
    const double C16180 = C16179 / C16002;
    const double C16181 = C16180 - C16178;
    const double C16184 = C16150 * C16043;
    const double C16183 = C16042 * C16143;
    const double C16185 = C16183 / C16002;
    const double C16186 = C16185 + C16184;
    const double C16192 = C15998 * C16093;
    const double C16193 = C16050 + C16192;
    const double C16197 = C15998 * C16095;
    const double C16198 = C16079 + C16197;
    const double C16208 = C15999 * C16093;
    const double C16209 = C16208 - C16100;
    const double C16211 = C15999 * C16023;
    const double C16212 = C16211 / C16002;
    const double C16213 = C16108 + C16212;
    const double C16215 = C15999 * C16024;
    const double C16216 = C16215 / C16002;
    const double C16217 = C16116 + C16216;
    const double C16219 = C15999 * C16095;
    const double C16220 = C16219 - C16124;
    const double C16222 = C15999 * C16025;
    const double C16223 = C16222 / C16002;
    const double C16224 = C16132 + C16223;
    const double C16226 = C15999 * C16042;
    const double C16227 = C16226 - C16137;
    const double C16232 = C15999 * C16108;
    const double C16231 = C16097 * C16116;
    const double C16230 = C16108 * C16086;
    const double C16233 = C16230 / C16002;
    const double C16234 = C16233 + C16231;
    const double C16235 = C16039 - C16234;
    const double C16236 = C16235 + C16232;
    const double C16240 = C15999 * C16116;
    const double C16239 = C16097 * C16132;
    const double C16238 = C16116 * C16086;
    const double C16241 = C16238 / C16002;
    const double C16242 = C16241 + C16239;
    const double C16243 = C16072 - C16242;
    const double C16244 = C16243 + C16240;
    const double C16248 = C16150 * C16217;
    const double C16247 = C16213 * C16143;
    const double C16249 = C16247 / C16002;
    const double C16250 = C16249 + C16248;
    const double C16253 = C16150 * C16224;
    const double C16252 = C16217 * C16143;
    const double C16254 = C16252 / C16002;
    const double C16255 = C16254 + C16253;
    const double C16258 = C16150 * C16116;
    const double C16257 = C16108 * C16143;
    const double C16259 = C16257 / C16002;
    const double C16260 = C16259 + C16258;
    const double C16263 = C15999 * C16213;
    const double C16264 = C16236 + C16263;
    const double C16266 = C15999 * C16217;
    const double C16267 = C16244 + C16266;
    const double C16275 = C16000 * C16160;
    const double C16274 = C16150 * C16168;
    const double C16273 = C16160 * C16143;
    const double C16276 = C16273 / C16002;
    const double C16277 = C16276 + C16274;
    const double C16278 = C16039 - C16277;
    const double C16279 = C16278 + C16275;
    const double C16283 = C16000 * C16168;
    const double C16282 = C16150 * C16181;
    const double C16281 = C16168 * C16143;
    const double C16284 = C16281 / C16002;
    const double C16285 = C16284 + C16282;
    const double C16286 = C16072 - C16285;
    const double C16287 = C16286 + C16283;
    const double C16360 = C16000 * C16279;
    const double C16359 = C16000 * C16278;
    const double C16358 = C16278 * C16143;
    const double C16357 = C16160 - C16168;
    const double C16356 = C16264 * C16143;
    const double C16355 = C16000 * C16250;
    const double C16354 = C16213 - C16217;
    const double C16353 = C16250 * C16143;
    const double C16352 = C15999 * C16217;
    const double C16351 = C15999 * C16236;
    const double C16350 = C15999 * C16235;
    const double C16349 = C16235 * C16086;
    const double C16348 = C16108 - C16116;
    const double C16347 = C16224 * C16143;
    const double C16346 = C16217 * C16143;
    const double C16345 = C16000 * C16217;
    const double C16344 = C16000 * C16213;
    const double C16343 = C16209 * C16143;
    const double C16342 = C16150 * C16198;
    const double C16341 = C16193 * C16143;
    const double C16340 = C15999 * C16122;
    const double C16339 = C15998 * C16122;
    const double C16338 = C16193 * C16086;
    const double C16337 = C16000 * C16025;
    const double C16336 = C16067 * C16143;
    const double C16335 = C16181 * C16143;
    const double C16334 = C16000 * C16095;
    const double C16333 = C16122 * C16143;
    const double C16332 = C16000 * C16024;
    const double C16331 = C16168 * C16143;
    const double C16330 = C16000 * C16023;
    const double C16329 = C16000 * C16093;
    const double C16328 = C16000 * C16152;
    const double C16327 = C16152 * C16143;
    const double C16326 = C15999 * C16067;
    const double C16325 = C16097 * C16075;
    const double C16324 = C16043 * C16086;
    const double C16323 = C15999 * C16025;
    const double C16322 = C15999 * C16132;
    const double C16321 = C16067 * C16086;
    const double C16320 = C16132 * C16086;
    const double C16319 = C15999 * C16095;
    const double C16318 = C16095 - C16122;
    const double C16317 = C16122 * C16086;
    const double C16316 = C15999 * C16024;
    const double C16315 = C16116 * C16086;
    const double C16314 = C15999 * C16023;
    const double C16313 = C15999 * C16093;
    const double C16312 = C15999 * C16100;
    const double C16311 = C16093 - C16095;
    const double C16310 = C16100 * C16086;
    const double C16309 = C15998 * C16067;
    const double C16308 = C15998 * C16075;
    const double C16307 = bs[4];
    const double C16306 = C16067 * C16011;
    const double C16305 = C16075 * C16011;
    const double C16304 = C16067 / C16002;
    const double C16303 = C15998 * C16025;
    const double C16302 = C15998 * C16024;
    const double C16301 = C15998 * C16023;
    const double C16300 = C15998 * C16050;
    const double C16299 = C15998 * C16049;
    const double C16298 = bs[3];
    const double C16297 = C16025 * C16011;
    const double C16296 = C16043 * C16011;
    const double C16295 = C16025 / C16002;
    const double C16294 = C16049 * C16011;
    const double C16293 = C16042 - C16043;
    const double C16412 = C16358 / C16002;
    const double C16411 = 2 * C16357;
    const double C16410 = C16356 / C16002;
    const double C16409 = C16354 / C16013;
    const double C16408 = C16353 / C16002;
    const double C16407 = C16244 + C16352;
    const double C16406 = C16349 / C16002;
    const double C16405 = 2 * C16348;
    const double C16404 = C16347 / C16002;
    const double C16403 = C16346 / C16002;
    const double C16402 = C16343 / C16002;
    const double C16401 = C16341 / C16002;
    const double C16400 = C16338 / C16002;
    const double C16399 = C16337 / C16002;
    const double C16398 = C16336 / C16002;
    const double C16397 = C16335 / C16002;
    const double C16396 = C16334 - C16173;
    const double C16395 = C16333 / C16002;
    const double C16394 = C16332 / C16002;
    const double C16393 = C16331 / C16002;
    const double C16392 = C16330 / C16002;
    const double C16391 = C16329 - C16152;
    const double C16390 = C16327 / C16002;
    const double C16389 = C16326 / C16002;
    const double C16388 = C16293 / C16013;
    const double C16387 = C16324 / C16002;
    const double C16386 = C16323 / C16002;
    const double C16385 = C16321 / C16002;
    const double C16384 = C16320 / C16002;
    const double C16383 = C16319 - C16124;
    const double C16382 = C16318 / C16013;
    const double C16381 = C16317 / C16002;
    const double C16380 = C16316 / C16002;
    const double C16379 = C16315 / C16002;
    const double C16378 = C16314 / C16002;
    const double C16377 = C16313 - C16100;
    const double C16376 = C16311 / C16013;
    const double C16375 = C16310 / C16002;
    const double C16374 = C16309 / C16002;
    const double C16373 = C16307 * C16022;
    const double C16372 = C16306 / C16002;
    const double C16371 = C16305 / C16002;
    const double C16370 = C16063 - C16304;
    const double C16369 = C16303 / C16002;
    const double C16368 = C16302 / C16002;
    const double C16367 = C16301 / C16002;
    const double C16366 = C16298 * C16022;
    const double C16365 = C16297 / C16002;
    const double C16364 = C16296 / C16002;
    const double C16363 = C16031 - C16295;
    const double C16362 = C16294 / C16002;
    const double C16361 = 2 * C16293;
    const double C16436 = C16411 / C16013;
    const double C16435 = C16405 / C16013;
    const double C16434 = C16401 + C16342;
    const double C16433 = C16181 + C16399;
    const double C16432 = C16150 * C16373;
    const double C16431 = -C16398;
    const double C16430 = C16168 + C16394;
    const double C16429 = C16160 + C16392;
    const double C16428 = C16387 + C16325;
    const double C16427 = C16132 + C16386;
    const double C16426 = C16097 * C16373;
    const double C16425 = -C16385;
    const double C16424 = C16116 + C16380;
    const double C16423 = C16108 + C16378;
    const double C16422 = C16075 + C16369;
    const double C16421 = C16017 * C16373;
    const double C16420 = -C16372;
    const double C16419 = C16370 / C16013;
    const double C16418 = C16043 + C16368;
    const double C16417 = C16042 + C16367;
    const double C16416 = C16017 * C16366;
    const double C16415 = -C16365;
    const double C16414 = C16363 / C16013;
    const double C16413 = C16361 / C16013;
    const double C16448 = C16432 / C16002;
    const double C16447 = C16431 / C16002;
    const double C16446 = C16000 * C16430;
    const double C16445 = C16000 * C16429;
    const double C16444 = C16426 / C16002;
    const double C16443 = C16425 / C16002;
    const double C16442 = C16421 / C16002;
    const double C16441 = C16420 / C16002;
    const double C16440 = C15998 * C16418;
    const double C16439 = C15998 * C16417;
    const double C16438 = C16416 / C16002;
    const double C16437 = C16415 / C16002;
    const double C16453 = C16447 - C16448;
    const double C16452 = C16443 - C16444;
    const double C16451 = C16441 - C16442;
    const double C16450 = C16050 + C16439;
    const double C16449 = C16437 - C16438;
    const double C16459 = C16150 * C16453;
    const double C16458 = C16452 + C16389;
    const double C16457 = C16097 * C16452;
    const double C16456 = C16451 + C16374;
    const double C16455 = C16017 * C16451;
    const double C16454 = C16017 * C16449;
    const double C16466 = C16150 * C16458;
    const double C16465 = C16397 + C16459;
    const double C16464 = C16150 * C16456;
    const double C16463 = C16384 + C16457;
    const double C16462 = C16097 * C16456;
    const double C16461 = C16371 + C16455;
    const double C16460 = C16364 + C16454;
    const double C16473 = C16404 + C16466;
    const double C16472 = C16419 - C16465;
    const double C16471 = C16395 + C16464;
    const double C16470 = C16419 - C16463;
    const double C16469 = C16381 + C16462;
    const double C16468 = C16419 - C16461;
    const double C16467 = C16414 - C16460;
    const double C16476 = C16340 - C16469;
    const double C16475 = C16470 + C16322;
    const double C16474 = C16468 + C16308;
    const double C16477 = C16474 + C16339;
    const double C548 =
        C16413 - (C16362 + C16017 * C16467) + C16299 + C16300 + C15998 * C16450;
    const double C555 = C16467 + C15998 * C16043 + C16440;
    const double C556 = C16449 + C16369;
    const double C557 = C16366 / C16002;
    const double C558 = (2 * (C16043 - C16075)) / C16013 -
                        ((C16078 * C16011) / C16002 + C16017 * C16468) +
                        C15998 * C16078 + C15998 * C16079 +
                        C15998 * (C16079 + C16440);
    const double C559 = C16474 + C15998 * C16422;
    const double C561 = C16373 / C16002;
    const double C562 = C16413 - (C16362 + C16017 * C16078) + C16299 + C16300;
    const double C1244 =
        C16375 + C16097 * ((C16095 * C16086) / C16002 + C16097 * C16422) +
        C16376 - C16312 + C15999 * C16377;
    const double C1245 = C16039 -
                         ((C16108 * C16086) / C16002 +
                          C16097 * ((-(C16024 * C16086) / C16002) / C16002 -
                                    (C16097 * C16025) / C16002)) +
                         C15999 * C16108 + C15999 * C16423;
    const double C1246 =
        C16072 -
        (C16379 + C16097 * ((-(C16025 * C16086) / C16002) / C16002 -
                            (C16097 * C16067) / C16002)) +
        C15999 * C16116 + C15999 * C16424;
    const double C1247 = (C16124 * C16086) / C16002 + C16097 * C16469 + C16382 -
                         C15999 * C16124 + C15999 * C16383;
    const double C1248 = C16475 + C15999 * C16427;
    const double C1249 = (C16137 * C16086) / C16002 + C16097 * C16428 + C16388 -
                         C15999 * C16137 + C15999 * (C15999 * C16042 - C16137);
    const double C1782 =
        C16390 + C16150 * ((C16095 * C16143) / C16002 + C16150 * C16122) +
        C16376 - C16328 + C16000 * C16391;
    const double C1783 = C16039 -
                         ((C16160 * C16143) / C16002 +
                          C16150 * ((-(C16024 * C16143) / C16002) / C16002 -
                                    (C16150 * C16025) / C16002)) +
                         C16000 * C16160 + C16445;
    const double C1784 =
        C16072 -
        (C16393 + C16150 * ((-(C16025 * C16143) / C16002) / C16002 -
                            (C16150 * C16067) / C16002)) +
        C16000 * C16168 + C16446;
    const double C1785 = (C16173 * C16143) / C16002 + C16150 * C16471 + C16382 -
                         C16000 * C16173 + C16000 * C16396;
    const double C1786 = C16472 + C16000 * C16181 + C16000 * C16433;
    const double C1787 =
        (C16186 * C16143) / C16002 +
        C16150 * ((C16043 * C16143) / C16002 + C16150 * C16075) + C16388 -
        C16000 * C16186 + C16000 * (C16000 * C16042 - C16186);
    const double C1791 = C16453 + (C16000 * C16067) / C16002;
    const double C2364 =
        C15999 * C16193 - (C16400 + C16097 * (C16079 + C15998 * C16095));
    const double C2367 =
        C15999 * C16198 - ((C16198 * C16086) / C16002 + C16097 * C16477);
    const double C2369 =
        C15999 * C16050 - ((C16050 * C16086) / C16002 + C16097 * C16079);
    const double C2884 = C16000 * C16193 - C16434;
    const double C2887 =
        C16000 * C16198 - ((C16198 * C16143) / C16002 + C16150 * C16477);
    const double C2888 = C16000 * C16122 - C16471;
    const double C2889 =
        C16000 * C16050 - ((C16050 * C16143) / C16002 + C16150 * C16079);
    const double C3316 = C16000 * C16209 - (C16402 + C16150 * C16383);
    const double C3317 =
        C16344 - ((C16213 * C16143) / C16002 + C16150 * C16424);
    const double C3318 = C16345 - (C16403 + C16150 * C16427);
    const double C3319 =
        C16000 * C16220 - ((C16220 * C16143) / C16002 + C16150 * C16476);
    const double C3320 = C16000 * C16224 - C16473;
    const double C3321 =
        C16000 * C16227 -
        ((C16227 * C16143) / C16002 + C16150 * (C15999 * C16043 - C16428));
    const double C3808 = -(C16400 + C16097 * C16198);
    const double C4318 =
        C16435 - (C16406 + C16097 * (C16072 - (C16379 + C16097 * C16132))) +
        C16350 + C16351 + C15999 * (C16236 + C15999 * C16213);
    const double C4319 = (2 * (C16116 - C16132)) / C16013 -
                         ((C16243 * C16086) / C16002 + C16097 * C16470) +
                         C15999 * C16243 + C15999 * C16244 + C15999 * C16407;
    const double C4320 = C16435 - (C16406 + C16097 * C16243) + C16350 + C16351;
    const double C4766 = C16408 + C16150 * (C16403 + C16150 * C16224) + C16409 -
                         C16355 + C16000 * (C16344 - C16250);
    const double C4767 = (C16255 * C16143) / C16002 + C16150 * C16473 +
                         (C16217 - C16224) / C16013 - C16000 * C16255 +
                         C16000 * (C16345 - C16255);
    const double C4768 =
        (C16260 * C16143) / C16002 +
        C16150 * ((C16116 * C16143) / C16002 + C16150 * C16132) +
        C16348 / C16013 - C16000 * C16260 + C16000 * (C16000 * C16108 - C16260);
    const double C5176 = C16375 + C16097 * C16124 + C16376 - C16312;
    const double C5540 = C16000 * C16264 - (C16410 + C16150 * C16407);
    const double C5541 =
        C16000 * C16267 -
        ((C16267 * C16143) / C16002 + C16150 * (C16475 + C15999 * C16224));
    const double C5542 =
        (C16100 * C16143) / C16002 + C16150 * C16124 - C16000 * C16100;
    const double C6008 =
        C16000 * C16236 - ((C16236 * C16143) / C16002 + C16150 * C16244);
    const double C6476 = -C16434;
    const double C6926 = -(C16410 + C16150 * C16267);
    const double C7436 =
        C16436 - (C16412 + C16150 * (C16072 - (C16393 + C16150 * C16181))) +
        C16359 + C16360 + C16000 * (C16279 + C16445);
    const double C7437 = (2 * (C16168 - C16181)) / C16013 -
                         ((C16286 * C16143) / C16002 + C16150 * C16472) +
                         C16000 * C16286 + C16000 * C16287 +
                         C16000 * (C16287 + C16446);
    const double C7438 = C16436 - (C16412 + C16150 * C16286) + C16359 + C16360;
    const double C7798 = -(C16402 + C16150 * C16220);
    const double C8194 = C16390 + C16150 * C16173 + C16376 - C16328;
    const double C8590 = C16408 + C16150 * C16255 + C16409 - C16355;
    const double C586 = be * zB;
    const double C585 = ae * zA;
    const double C584 = be * yB;
    const double C583 = ae * yA;
    const double C582 = bs[5];
    const double C581 = bs[4];
    const double C580 = C557 * be;
    const double C579 = C556 * be;
    const double C578 = C555 * be;
    const double C577 = bs[3];
    const double C576 = C16295 * be;
    const double C575 = C16418 * be;
    const double C574 = bs[2];
    const double C573 = C16031 * be;
    const double C572 = 4 * Pi;
    const double C571 = zA - zB;
    const double C570 = yA - yB;
    const double C569 = ae * be;
    const double C568 = xA - xB;
    const double C567 = bs[0];
    const double C566 = bs[1];
    const double C565 = be * xB;
    const double C564 = ae * xA;
    const double C563 = ae + be;
    const double C604 = C571 * C569;
    const double C603 = C585 + C586;
    const double C602 = C570 * C569;
    const double C601 = C583 + C584;
    const double C600 = C580 / C563;
    const double C599 = C579 / C563;
    const double C598 = C578 / C563;
    const double C597 = 2 * C563;
    const double C596 = C576 / C563;
    const double C595 = C575 / C563;
    const double C594 = std::pow(C563, 2);
    const double C593 = C573 / C563;
    const double C592 = std::pow(C571, 2);
    const double C591 = std::pow(C570, 2);
    const double C590 = std::pow(C568, 2);
    const double C589 = C568 * C569;
    const double C588 = C564 + C565;
    const double C587 = be / C563;
    const double C622 = C577 * C604;
    const double C621 = C574 * C604;
    const double C620 = C567 * C604;
    const double C619 = C566 * C604;
    const double C618 = C603 / C563;
    const double C617 = C577 * C602;
    const double C616 = C574 * C602;
    const double C615 = C567 * C602;
    const double C614 = C566 * C602;
    const double C613 = C601 / C563;
    const double C612 = C577 * C589;
    const double C611 = C574 * C589;
    const double C610 = 2 * C594;
    const double C609 = C566 * C589;
    const double C608 = C590 + C591;
    const double C607 = C567 * C589;
    const double C606 = C588 / C563;
    const double C605 = C587 - 1;
    const double C645 = C622 / C563;
    const double C644 = C621 / C563;
    const double C643 = C620 / C563;
    const double C642 = C619 / C563;
    const double C641 = C618 - zC;
    const double C640 = C617 / C563;
    const double C639 = C616 / C563;
    const double C638 = C615 / C563;
    const double C637 = C614 / C563;
    const double C636 = C613 - yC;
    const double C635 = C612 / C563;
    const double C634 = C605 * C16295;
    const double C633 = C605 * C16418;
    const double C632 = C611 / C563;
    const double C631 = C605 * C16031;
    const double C630 = C609 / C563;
    const double C629 = C608 + C592;
    const double C628 = C607 / C563;
    const double C627 = C606 - xC;
    const double C626 = C605 * C16030;
    const double C625 = C605 * C16417;
    const double C624 = C605 * C16450;
    const double C623 = C606 - xB;
    const double C649 = be * C641;
    const double C648 = be * C636;
    const double C647 = C629 * C569;
    const double C646 = be * C627;
    const double C662 = C581 * C649;
    const double C661 = C577 * C649;
    const double C660 = C566 * C649;
    const double C659 = C574 * C649;
    const double C658 = C581 * C648;
    const double C657 = C577 * C648;
    const double C656 = C566 * C648;
    const double C655 = C574 * C648;
    const double C654 = C581 * C646;
    const double C653 = C577 * C646;
    const double C652 = C574 * C646;
    const double C651 = C647 / C563;
    const double C650 = C566 * C646;
    const double C675 = C662 - C645;
    const double C674 = C661 - C644;
    const double C673 = C660 - C643;
    const double C672 = C659 - C642;
    const double C671 = C658 - C640;
    const double C670 = C657 - C639;
    const double C669 = C656 - C638;
    const double C668 = C655 - C637;
    const double C667 = C654 - C635;
    const double C666 = C653 - C632;
    const double C665 = C652 - C630;
    const double C664 = -C651;
    const double C663 = C650 - C628;
    const double C676 = std::exp(C664);
    const double C677 = C676 * C572;
    const double C689 = C675 * C677;
    const double C688 = C674 * C677;
    const double C687 = C673 * C677;
    const double C686 = C672 * C677;
    const double C685 = C671 * C677;
    const double C684 = C670 * C677;
    const double C683 = C669 * C677;
    const double C682 = C668 * C677;
    const double C681 = C667 * C677;
    const double C680 = C666 * C677;
    const double C679 = C665 * C677;
    const double C678 = C663 * C677;
    const double C719 = C688 / C563;
    const double C718 = C623 * C688;
    const double C717 = C627 * C689;
    const double C716 = C686 / C610;
    const double C715 = C686 / C563;
    const double C714 = C623 * C686;
    const double C713 = C627 * C688;
    const double C712 = C687 / C610;
    const double C711 = C623 * C687;
    const double C710 = C627 * C686;
    const double C709 = C684 / C563;
    const double C708 = C623 * C684;
    const double C707 = C627 * C685;
    const double C706 = C682 / C610;
    const double C705 = C682 / C563;
    const double C704 = C623 * C682;
    const double C703 = C627 * C684;
    const double C702 = C683 / C610;
    const double C701 = C623 * C683;
    const double C700 = C627 * C682;
    const double C699 = C680 / C563;
    const double C698 = C627 * C681;
    const double C697 = C623 * C680;
    const double C696 = C679 / C610;
    const double C695 = C679 / C563;
    const double C694 = C627 * C680;
    const double C693 = C623 * C679;
    const double C692 = C678 / C610;
    const double C691 = C627 * C679;
    const double C690 = C623 * C678;
    const double C743 = -C719;
    const double C742 = C718 / C563;
    const double C741 = C717 / C563;
    const double C740 = -C715;
    const double C739 = C714 / C563;
    const double C738 = C713 / C563;
    const double C737 = C711 / C563;
    const double C736 = C710 / C563;
    const double C735 = -C709;
    const double C734 = C708 / C563;
    const double C733 = C707 / C563;
    const double C732 = -C705;
    const double C731 = C704 / C563;
    const double C730 = C703 / C563;
    const double C729 = C701 / C563;
    const double C728 = C700 / C563;
    const double C727 = -C699;
    const double C726 = C698 / C563;
    const double C725 = C697 / C563;
    const double C724 = -C695;
    const double C723 = C694 / C563;
    const double C722 = C693 / C563;
    const double C721 = C691 / C563;
    const double C720 = C690 / C563;
    const double C758 = C743 / C597;
    const double C757 = C741 - C742;
    const double C756 = C740 / C597;
    const double C755 = C738 - C739;
    const double C754 = C736 - C737;
    const double C753 = C735 / C597;
    const double C752 = C733 - C734;
    const double C751 = C732 / C597;
    const double C750 = C730 - C731;
    const double C749 = C728 - C729;
    const double C748 = C727 / C597;
    const double C747 = C634 - C725;
    const double C746 = C724 / C597;
    const double C745 = C631 - C722;
    const double C744 = C626 - C720;
    const double C773 = C755 / C563;
    const double C772 = C627 * C757;
    const double C771 = C623 * C755;
    const double C770 = C754 / C563;
    const double C769 = C627 * C755;
    const double C768 = C623 * C754;
    const double C767 = C750 / C563;
    const double C766 = C627 * C752;
    const double C765 = C623 * C750;
    const double C764 = C749 / C563;
    const double C763 = C627 * C750;
    const double C762 = C623 * C749;
    const double C761 = C747 - C600;
    const double C760 = C745 - C596;
    const double C759 = C744 - C593;
    const double C780 = C771 - C716;
    const double C779 = C768 - C712;
    const double C778 = C765 - C706;
    const double C777 = C762 - C702;
    const double C776 = C761 + C726;
    const double C775 = C760 + C723;
    const double C774 = C759 + C721;
    const double C790 = C780 - C772;
    const double C789 = C779 - C769;
    const double C788 = C778 - C766;
    const double C787 = C777 - C763;
    const double C786 = C775 / C563;
    const double C785 = C627 * C776;
    const double C784 = C623 * C775;
    const double C783 = C774 / C563;
    const double C782 = C627 * C775;
    const double C781 = C623 * C774;
    const double C796 = C790 - C758;
    const double C795 = C789 - C756;
    const double C794 = C788 - C753;
    const double C793 = C787 - C751;
    const double C792 = C633 + C784;
    const double C791 = C625 + C781;
    const double C802 = C627 * C796;
    const double C801 = C623 * C795;
    const double C800 = C627 * C794;
    const double C799 = C623 * C793;
    const double C798 = C792 - C696;
    const double C797 = C791 - C692;
    const double C806 = C801 + C770;
    const double C805 = C799 + C764;
    const double C804 = C798 - C599;
    const double C803 = C797 - C595;
    const double C810 = C806 - C802;
    const double C809 = C805 - C800;
    const double C808 = C804 - C785;
    const double C807 = C803 - C782;
    const double C814 = C810 - C773;
    const double C813 = C809 - C767;
    const double C812 = C808 - C748;
    const double C811 = C807 - C746;
    const double C816 = C627 * C812;
    const double C815 = C623 * C811;
    const double C817 = C624 + C815;
    const double C818 = C817 + C783;
    const double C819 = C818 - C598;
    const double C820 = C819 - C816;
    const double C821 = C820 - C786;
    const double C1269 = C636 * C689;
    const double C1268 = C636 * C688;
    const double C1267 = C636 * C686;
    const double C1266 = C636 * C685;
    const double C1265 = C16427 * be;
    const double C1264 = C605 * C16424;
    const double C1263 = C636 * C684;
    const double C1262 = C16424 * be;
    const double C1261 = C636 * C682;
    const double C1260 = C605 * C16423;
    const double C1259 = C636 * C681;
    const double C1258 = C1246 * be;
    const double C1257 = C636 * C680;
    const double C1256 = C636 * C679;
    const double C1255 = C613 - yB;
    const double C1254 = C605 * C1245;
    const double C1290 = C1255 * C688;
    const double C1289 = C1269 / C563;
    const double C1288 = C1255 * C686;
    const double C1287 = C1268 / C563;
    const double C1286 = C1255 * C687;
    const double C1285 = C1267 / C563;
    const double C1284 = C1266 / C563;
    const double C1283 = C1255 * C684;
    const double C1282 = C1265 / C563;
    const double C1281 = C1263 / C563;
    const double C1280 = C1255 * C682;
    const double C1279 = C1262 / C563;
    const double C1278 = C1261 / C563;
    const double C1277 = C1255 * C683;
    const double C1276 = C1255 * C680;
    const double C1275 = C1259 / C563;
    const double C1274 = C1258 / C563;
    const double C1273 = C1255 * C679;
    const double C1272 = C1257 / C563;
    const double C1271 = C1255 * C678;
    const double C1270 = C1256 / C563;
    const double C1299 = C1290 / C563;
    const double C1298 = C1288 / C563;
    const double C1297 = C1286 / C563;
    const double C1296 = C1283 / C563;
    const double C1295 = C1280 / C563;
    const double C1294 = C1277 / C563;
    const double C1293 = C1276 / C563;
    const double C1292 = C1273 / C563;
    const double C1291 = C1271 / C563;
    const double C1308 = C1289 - C1299;
    const double C1307 = C1287 - C1298;
    const double C1306 = C1285 - C1297;
    const double C1305 = C634 - C1296;
    const double C1304 = C631 - C1295;
    const double C1303 = C626 - C1294;
    const double C1302 = C1275 - C1293;
    const double C1301 = C1272 - C1292;
    const double C1300 = C1270 - C1291;
    const double C1319 = C636 * C1308;
    const double C1318 = C1255 * C1307;
    const double C1317 = C636 * C1307;
    const double C1316 = C1255 * C1306;
    const double C1315 = C1305 - C600;
    const double C1314 = C1304 - C596;
    const double C1313 = C1303 - C593;
    const double C1312 = C636 * C1302;
    const double C1311 = C1255 * C1301;
    const double C1310 = C636 * C1301;
    const double C1309 = C1255 * C1300;
    const double C1326 = C1318 - C716;
    const double C1325 = C1316 - C712;
    const double C1324 = C1315 + C1284;
    const double C1323 = C1314 + C1281;
    const double C1322 = C1313 + C1278;
    const double C1321 = C1311 - C696;
    const double C1320 = C1309 - C692;
    const double C1334 = C1326 - C1319;
    const double C1333 = C1325 - C1317;
    const double C1332 = C636 * C1324;
    const double C1331 = C1255 * C1323;
    const double C1330 = C636 * C1323;
    const double C1329 = C1255 * C1322;
    const double C1328 = C1321 - C1312;
    const double C1327 = C1320 - C1310;
    const double C1340 = C1334 - C758;
    const double C1339 = C1333 - C756;
    const double C1338 = C1264 + C1331;
    const double C1337 = C1260 + C1329;
    const double C1336 = C1328 - C748;
    const double C1335 = C1327 - C746;
    const double C1346 = C627 * C1340;
    const double C1345 = C623 * C1339;
    const double C1344 = C1338 - C706;
    const double C1343 = C1337 - C702;
    const double C1342 = C627 * C1336;
    const double C1341 = C623 * C1335;
    const double C1350 = C1345 - C1346;
    const double C1349 = C1344 - C1282;
    const double C1348 = C1343 - C1279;
    const double C1347 = C1254 + C1341;
    const double C1353 = C1349 - C1332;
    const double C1352 = C1348 - C1330;
    const double C1351 = C1347 - C1274;
    const double C1356 = C1353 - C753;
    const double C1355 = C1352 - C751;
    const double C1354 = C1351 - C1342;
    const double C1358 = C627 * C1356;
    const double C1357 = C623 * C1355;
    const double C1359 = C1357 - C1358;
    const double C1807 = C641 * C689;
    const double C1806 = C16433 * be;
    const double C1805 = C605 * C16430;
    const double C1804 = C641 * C688;
    const double C1803 = C16430 * be;
    const double C1802 = C641 * C686;
    const double C1801 = C605 * C16429;
    const double C1800 = C641 * C685;
    const double C1799 = C641 * C684;
    const double C1798 = C641 * C682;
    const double C1797 = C641 * C681;
    const double C1796 = C1784 * be;
    const double C1795 = C641 * C680;
    const double C1794 = C641 * C679;
    const double C1793 = C618 - zB;
    const double C1792 = C605 * C1783;
    const double C1828 = C1807 / C563;
    const double C1827 = C1793 * C688;
    const double C1826 = C1806 / C563;
    const double C1825 = C1804 / C563;
    const double C1824 = C1793 * C686;
    const double C1823 = C1803 / C563;
    const double C1822 = C1802 / C563;
    const double C1821 = C1793 * C687;
    const double C1820 = C1793 * C684;
    const double C1819 = C1800 / C563;
    const double C1818 = C1793 * C682;
    const double C1817 = C1799 / C563;
    const double C1816 = C1793 * C683;
    const double C1815 = C1798 / C563;
    const double C1814 = C1793 * C680;
    const double C1813 = C1797 / C563;
    const double C1812 = C1796 / C563;
    const double C1811 = C1793 * C679;
    const double C1810 = C1795 / C563;
    const double C1809 = C1793 * C678;
    const double C1808 = C1794 / C563;
    const double C1837 = C1827 / C563;
    const double C1836 = C1824 / C563;
    const double C1835 = C1821 / C563;
    const double C1834 = C1820 / C563;
    const double C1833 = C1818 / C563;
    const double C1832 = C1816 / C563;
    const double C1831 = C1814 / C563;
    const double C1830 = C1811 / C563;
    const double C1829 = C1809 / C563;
    const double C1846 = C634 - C1837;
    const double C1845 = C631 - C1836;
    const double C1844 = C626 - C1835;
    const double C1843 = C1819 - C1834;
    const double C1842 = C1817 - C1833;
    const double C1841 = C1815 - C1832;
    const double C1840 = C1813 - C1831;
    const double C1839 = C1810 - C1830;
    const double C1838 = C1808 - C1829;
    const double C1857 = C1846 - C600;
    const double C1856 = C1845 - C596;
    const double C1855 = C1844 - C593;
    const double C1854 = C641 * C1843;
    const double C1853 = C1793 * C1842;
    const double C1852 = C641 * C1842;
    const double C1851 = C1793 * C1841;
    const double C1850 = C641 * C1840;
    const double C1849 = C1793 * C1839;
    const double C1848 = C641 * C1839;
    const double C1847 = C1793 * C1838;
    const double C1864 = C1857 + C1828;
    const double C1863 = C1856 + C1825;
    const double C1862 = C1855 + C1822;
    const double C1861 = C1853 - C706;
    const double C1860 = C1851 - C702;
    const double C1859 = C1849 - C696;
    const double C1858 = C1847 - C692;
    const double C1872 = C641 * C1864;
    const double C1871 = C1793 * C1863;
    const double C1870 = C641 * C1863;
    const double C1869 = C1793 * C1862;
    const double C1868 = C1861 - C1854;
    const double C1867 = C1860 - C1852;
    const double C1866 = C1859 - C1850;
    const double C1865 = C1858 - C1848;
    const double C1878 = C1805 + C1871;
    const double C1877 = C1801 + C1869;
    const double C1876 = C1868 - C753;
    const double C1875 = C1867 - C751;
    const double C1874 = C1866 - C748;
    const double C1873 = C1865 - C746;
    const double C1884 = C1878 - C716;
    const double C1883 = C1877 - C712;
    const double C1882 = C627 * C1876;
    const double C1881 = C623 * C1875;
    const double C1880 = C627 * C1874;
    const double C1879 = C623 * C1873;
    const double C1888 = C1884 - C1826;
    const double C1887 = C1883 - C1823;
    const double C1886 = C1881 - C1882;
    const double C1885 = C1792 + C1879;
    const double C1891 = C1888 - C1872;
    const double C1890 = C1887 - C1870;
    const double C1889 = C1885 - C1812;
    const double C1894 = C1891 - C758;
    const double C1893 = C1890 - C756;
    const double C1892 = C1889 - C1880;
    const double C1896 = C627 * C1894;
    const double C1895 = C623 * C1893;
    const double C1897 = C1895 - C1896;
    const double C2389 = C1307 / C597;
    const double C2388 = C627 * C1308;
    const double C2387 = C623 * C1307;
    const double C2386 = C1306 / C597;
    const double C2385 = C627 * C1307;
    const double C2384 = C623 * C1306;
    const double C2383 = C1323 / C597;
    const double C2382 = C627 * C1324;
    const double C2381 = C623 * C1323;
    const double C2380 = C1322 / C597;
    const double C2379 = C627 * C1323;
    const double C2378 = C623 * C1322;
    const double C2377 = C1301 / C597;
    const double C2376 = C627 * C1302;
    const double C2375 = C623 * C1301;
    const double C2374 = C16383 * be;
    const double C2373 = C1300 / C597;
    const double C2372 = C627 * C1301;
    const double C2371 = C623 * C1300;
    const double C2370 = C605 * C16377;
    const double C2396 = C2387 - C2388;
    const double C2395 = C2384 - C2385;
    const double C2394 = C2381 - C2382;
    const double C2393 = C2378 - C2379;
    const double C2392 = C1264 + C2375;
    const double C2391 = C2374 / C563;
    const double C2390 = C1260 + C2371;
    const double C2402 = C627 * C2396;
    const double C2401 = C623 * C2395;
    const double C2400 = C627 * C2394;
    const double C2399 = C623 * C2393;
    const double C2398 = C2392 - C1282;
    const double C2397 = C2390 - C1279;
    const double C2406 = C2401 + C2386;
    const double C2405 = C2399 + C2380;
    const double C2404 = C2398 - C2376;
    const double C2403 = C2397 - C2372;
    const double C2410 = C2406 - C2402;
    const double C2409 = C2405 - C2400;
    const double C2408 = C627 * C2404;
    const double C2407 = C623 * C2403;
    const double C2413 = C2410 - C2389;
    const double C2412 = C2409 - C2383;
    const double C2411 = C2370 + C2407;
    const double C2414 = C2411 + C2373;
    const double C2415 = C2414 - C2391;
    const double C2416 = C2415 - C2408;
    const double C2417 = C2416 - C2377;
    const double C2909 = C1863 / C597;
    const double C2908 = C627 * C1864;
    const double C2907 = C623 * C1863;
    const double C2906 = C1862 / C597;
    const double C2905 = C627 * C1863;
    const double C2904 = C623 * C1862;
    const double C2903 = C1842 / C597;
    const double C2902 = C627 * C1843;
    const double C2901 = C623 * C1842;
    const double C2900 = C1841 / C597;
    const double C2899 = C627 * C1842;
    const double C2898 = C623 * C1841;
    const double C2897 = C1839 / C597;
    const double C2896 = C627 * C1840;
    const double C2895 = C623 * C1839;
    const double C2894 = C16396 * be;
    const double C2893 = C1838 / C597;
    const double C2892 = C627 * C1839;
    const double C2891 = C623 * C1838;
    const double C2890 = C605 * C16391;
    const double C2916 = C2907 - C2908;
    const double C2915 = C2904 - C2905;
    const double C2914 = C2901 - C2902;
    const double C2913 = C2898 - C2899;
    const double C2912 = C1805 + C2895;
    const double C2911 = C2894 / C563;
    const double C2910 = C1801 + C2891;
    const double C2922 = C627 * C2916;
    const double C2921 = C623 * C2915;
    const double C2920 = C627 * C2914;
    const double C2919 = C623 * C2913;
    const double C2918 = C2912 - C1826;
    const double C2917 = C2910 - C1823;
    const double C2926 = C2921 + C2906;
    const double C2925 = C2919 + C2900;
    const double C2924 = C2918 - C2896;
    const double C2923 = C2917 - C2892;
    const double C2930 = C2926 - C2922;
    const double C2929 = C2925 - C2920;
    const double C2928 = C627 * C2924;
    const double C2927 = C623 * C2923;
    const double C2933 = C2930 - C2909;
    const double C2932 = C2929 - C2903;
    const double C2931 = C2890 + C2927;
    const double C2934 = C2931 + C2893;
    const double C2935 = C2934 - C2911;
    const double C2936 = C2935 - C2928;
    const double C2937 = C2936 - C2897;
    const double C3335 = C636 * C1864;
    const double C3334 = C1255 * C1863;
    const double C3333 = C636 * C1863;
    const double C3332 = C1255 * C1862;
    const double C3331 = C636 * C1843;
    const double C3330 = C1255 * C1842;
    const double C3329 = C636 * C1842;
    const double C3328 = C1255 * C1841;
    const double C3327 = C636 * C1840;
    const double C3326 = C1255 * C1839;
    const double C3325 = C3318 * be;
    const double C3324 = C636 * C1839;
    const double C3323 = C1255 * C1838;
    const double C3322 = C605 * C3317;
    const double C3342 = C3334 - C3335;
    const double C3341 = C3332 - C3333;
    const double C3340 = C1805 + C3330;
    const double C3339 = C1801 + C3328;
    const double C3338 = C3326 - C3327;
    const double C3337 = C3325 / C563;
    const double C3336 = C3323 - C3324;
    const double C3348 = C627 * C3342;
    const double C3347 = C623 * C3341;
    const double C3346 = C3340 - C1826;
    const double C3345 = C3339 - C1823;
    const double C3344 = C627 * C3338;
    const double C3343 = C623 * C3336;
    const double C3352 = C3347 - C3348;
    const double C3351 = C3346 - C3331;
    const double C3350 = C3345 - C3329;
    const double C3349 = C3322 + C3343;
    const double C3355 = C627 * C3351;
    const double C3354 = C623 * C3350;
    const double C3353 = C3349 - C3337;
    const double C3357 = C3354 - C3355;
    const double C3356 = C3353 - C3344;
    const double C4332 = C1307 / C563;
    const double C4331 = C636 * C1340;
    const double C4330 = C1306 / C563;
    const double C4329 = C1255 * C1339;
    const double C4328 = C1323 / C563;
    const double C4327 = C636 * C1356;
    const double C4326 = C1322 / C563;
    const double C4325 = C1255 * C1355;
    const double C4324 = C1301 / C563;
    const double C4323 = C636 * C1336;
    const double C4322 = C1300 / C563;
    const double C4321 = C1255 * C1335;
    const double C4335 = C4329 + C4330;
    const double C4334 = C1254 + C4325;
    const double C4333 = C4321 + C4322;
    const double C4338 = C4335 - C4331;
    const double C4337 = C4334 + C4326;
    const double C4336 = C4333 - C4323;
    const double C4341 = C4338 - C4332;
    const double C4340 = C4337 - C1274;
    const double C4339 = C4336 - C4324;
    const double C4342 = C4340 - C4327;
    const double C4343 = C4342 - C4328;
    const double C4774 = C636 * C1894;
    const double C4773 = C1255 * C1893;
    const double C4772 = C636 * C1876;
    const double C4771 = C1255 * C1875;
    const double C4770 = C636 * C1874;
    const double C4769 = C1255 * C1873;
    const double C4777 = C4773 - C4774;
    const double C4776 = C1792 + C4771;
    const double C4775 = C4769 - C4770;
    const double C4778 = C4776 - C1812;
    const double C4779 = C4778 - C4772;
    const double C6014 = C636 * C3342;
    const double C6013 = C1255 * C3341;
    const double C6012 = C636 * C3351;
    const double C6011 = C1255 * C3350;
    const double C6010 = C636 * C3338;
    const double C6009 = C1255 * C3336;
    const double C6017 = C6013 + C2906;
    const double C6016 = C3322 + C6011;
    const double C6015 = C6009 + C2893;
    const double C6020 = C6017 - C6014;
    const double C6019 = C6016 + C2900;
    const double C6018 = C6015 - C6010;
    const double C6023 = C6020 - C2909;
    const double C6022 = C6019 - C3337;
    const double C6021 = C6018 - C2897;
    const double C6024 = C6022 - C6012;
    const double C6025 = C6024 - C2903;
    const double C7450 = C1863 / C563;
    const double C7449 = C641 * C1894;
    const double C7448 = C1862 / C563;
    const double C7447 = C1793 * C1893;
    const double C7446 = C1842 / C563;
    const double C7445 = C641 * C1876;
    const double C7444 = C1841 / C563;
    const double C7443 = C1793 * C1875;
    const double C7442 = C1839 / C563;
    const double C7441 = C641 * C1874;
    const double C7440 = C1838 / C563;
    const double C7439 = C1793 * C1873;
    const double C7453 = C1792 + C7447;
    const double C7452 = C7443 + C7444;
    const double C7451 = C7439 + C7440;
    const double C7456 = C7453 + C7448;
    const double C7455 = C7452 - C7445;
    const double C7454 = C7451 - C7441;
    const double C7459 = C7456 - C1812;
    const double C7458 = C7455 - C7446;
    const double C7457 = C7454 - C7442;
    const double C7460 = C7459 - C7449;
    const double C7461 = C7460 - C7450;
    const double C16737 = C571 * C2413;
    const double C16736 = C571 * C2412;
    const double C16735 = C571 * C2417;
    const double C16734 = C571 * C1350;
    const double C16733 = C571 * C1359;
    const double C16732 = C571 * C1354;
    const double C16731 = C571 * C3341;
    const double C16730 = C4777 + C3317;
    const double C16729 = C571 * C4777;
    const double C16728 = C1255 * C7461;
    const double C16727 = C571 * C3350;
    const double C16726 = C571 * C4779;
    const double C16725 = C1255 * C7458;
    const double C16724 = C571 * C3336;
    const double C16723 = C571 * C4775;
    const double C16722 = C1255 * C7457;
    const double C16721 = C571 * C2915;
    const double C16720 = C1897 + C16391;
    const double C16719 = C571 * C1897;
    const double C16718 = C623 * C7461;
    const double C16717 = C571 * C2913;
    const double C16716 = C571 * C1886;
    const double C16715 = C623 * C7458;
    const double C16714 = C571 * C2923;
    const double C16713 = C571 * C1892;
    const double C16712 = C623 * C7457;
    const double C16711 = C571 * C2395;
    const double C16710 = C3352 + C16377;
    const double C16709 = C571 * C3352;
    const double C16708 = C623 * C4777;
    const double C16707 = C571 * C2393;
    const double C16706 = C571 * C3357;
    const double C16705 = C623 * C4779;
    const double C16704 = C571 * C2403;
    const double C16703 = C571 * C3356;
    const double C16702 = C623 * C4775;
    const double C16701 = C571 * C1893;
    const double C16700 = C7461 + C1783;
    const double C16699 = C1864 / C563;
    const double C16698 = C1793 * C1894;
    const double C16697 = C7437 * be;
    const double C16696 = C605 * C7436;
    const double C16695 = C571 * C1875;
    const double C16694 = C1843 / C563;
    const double C16693 = C1793 * C1876;
    const double C16692 = C571 * C1873;
    const double C16691 = C1840 / C563;
    const double C16690 = C1793 * C1874;
    const double C16689 = C571 * C1339;
    const double C16688 = C6023 + C1245;
    const double C16687 = C571 * C6023;
    const double C16686 = C571 * C1355;
    const double C16685 = C571 * C6025;
    const double C16684 = C571 * C1335;
    const double C16683 = C571 * C6021;
    const double C16682 = C571 * C795;
    const double C16681 = C2933 + C16450;
    const double C16680 = C571 * C2933;
    const double C16679 = C571 * C793;
    const double C16678 = C571 * C2932;
    const double C16677 = C571 * C811;
    const double C16676 = C571 * C2937;
    const double C16675 = C570 * C3341;
    const double C16674 = C3342 / C563;
    const double C16673 = C3341 / C563;
    const double C16672 = C1255 * C6023;
    const double C16671 = C570 * C3350;
    const double C16670 = C6025 + C3317;
    const double C16669 = C3351 / C563;
    const double C16668 = C3350 / C563;
    const double C16667 = C1255 * C6025;
    const double C16666 = C570 * C3336;
    const double C16665 = C3338 / C563;
    const double C16664 = C3336 / C563;
    const double C16663 = C1255 * C6021;
    const double C16662 = C570 * C2915;
    const double C16661 = C570 * C3352;
    const double C16660 = C1255 * C3342;
    const double C16659 = C623 * C6023;
    const double C16658 = C570 * C2913;
    const double C16657 = C3357 + C16391;
    const double C16656 = C570 * C3357;
    const double C16655 = C1255 * C3351;
    const double C16654 = C623 * C6025;
    const double C16653 = C570 * C2923;
    const double C16652 = C570 * C3356;
    const double C16651 = C1255 * C3338;
    const double C16650 = C5541 * be;
    const double C16649 = C623 * C6021;
    const double C16648 = C605 * C5540;
    const double C16647 = C570 * C2395;
    const double C16646 = C570 * C1350;
    const double C16645 = C623 * C4341;
    const double C16644 = C570 * C2393;
    const double C16643 = C1359 + C16377;
    const double C16642 = C570 * C1359;
    const double C16641 = C623 * C4343;
    const double C16640 = C570 * C2403;
    const double C16639 = C570 * C1354;
    const double C16638 = C623 * C4339;
    const double C16637 = C570 * C1893;
    const double C16636 = C1255 * C1894;
    const double C16635 = C1255 * C4777;
    const double C16634 = C570 * C1875;
    const double C16633 = C4779 + C1783;
    const double C16632 = C1255 * C1876;
    const double C16631 = C4767 * be;
    const double C16630 = C1255 * C4779;
    const double C16629 = C605 * C4766;
    const double C16628 = C570 * C1873;
    const double C16627 = C1255 * C1874;
    const double C16626 = C1255 * C4775;
    const double C16625 = C570 * C1339;
    const double C16624 = C1308 / C563;
    const double C16623 = C1255 * C1340;
    const double C16622 = C570 * C1355;
    const double C16621 = C4343 + C1245;
    const double C16620 = C1324 / C563;
    const double C16619 = C1255 * C1356;
    const double C16618 = C4319 * be;
    const double C16617 = C605 * C4318;
    const double C16616 = C570 * C1335;
    const double C16615 = C1302 / C563;
    const double C16614 = C1255 * C1336;
    const double C16613 = C570 * C795;
    const double C16612 = C570 * C2413;
    const double C16611 = C570 * C793;
    const double C16610 = C2412 + C16450;
    const double C16609 = C570 * C2412;
    const double C16608 = C570 * C811;
    const double C16607 = C570 * C2417;
    const double C16606 = C3342 / C597;
    const double C16605 = C1255 * C1864;
    const double C16604 = C623 * C3342;
    const double C16603 = C3341 / C597;
    const double C16602 = C623 * C3352;
    const double C16601 = C3351 / C597;
    const double C16600 = C1255 * C1843;
    const double C16599 = C623 * C3351;
    const double C16598 = C3350 / C597;
    const double C16597 = C623 * C3357;
    const double C16596 = C3338 / C597;
    const double C16595 = C1255 * C1840;
    const double C16594 = C3320 * be;
    const double C16593 = C623 * C3338;
    const double C16592 = C605 * C3318;
    const double C16591 = C3319 * be;
    const double C16590 = C3336 / C597;
    const double C16589 = C623 * C3356;
    const double C16588 = C605 * C3316;
    const double C16587 = C2916 / C563;
    const double C16586 = C1864 / C597;
    const double C16585 = C623 * C1864;
    const double C16584 = C623 * C2916;
    const double C16583 = C2915 / C563;
    const double C16582 = C623 * C2933;
    const double C16581 = C2914 / C563;
    const double C16580 = C1843 / C597;
    const double C16579 = C623 * C1843;
    const double C16578 = C623 * C2914;
    const double C16577 = C2913 / C563;
    const double C16576 = C623 * C2932;
    const double C16575 = C2924 / C563;
    const double C16574 = C1840 / C597;
    const double C16573 = C623 * C1840;
    const double C16572 = C2888 * be;
    const double C16571 = C623 * C2924;
    const double C16570 = C605 * C16396;
    const double C16569 = C2887 * be;
    const double C16568 = C2923 / C563;
    const double C16567 = C623 * C2937;
    const double C16566 = C605 * C2884;
    const double C16565 = C2396 / C563;
    const double C16564 = C1308 / C597;
    const double C16563 = C623 * C1308;
    const double C16562 = C623 * C2396;
    const double C16561 = C2395 / C563;
    const double C16560 = C623 * C2413;
    const double C16559 = C2394 / C563;
    const double C16558 = C1324 / C597;
    const double C16557 = C623 * C1324;
    const double C16556 = C623 * C2394;
    const double C16555 = C2393 / C563;
    const double C16554 = C623 * C2412;
    const double C16553 = C2404 / C563;
    const double C16552 = C1302 / C597;
    const double C16551 = C623 * C1302;
    const double C16550 = C16476 * be;
    const double C16549 = C623 * C2404;
    const double C16548 = C605 * C16383;
    const double C16547 = C2367 * be;
    const double C16546 = C2403 / C563;
    const double C16545 = C623 * C2417;
    const double C16544 = C605 * C2364;
    const double C16543 = C1894 / C597;
    const double C16542 = C1793 * C689;
    const double C16541 = C1791 * be;
    const double C16540 = C1793 * C1864;
    const double C16539 = C605 * C16433;
    const double C16538 = C623 * C1894;
    const double C16537 = C1893 / C597;
    const double C16536 = C623 * C1897;
    const double C16535 = C1876 / C597;
    const double C16534 = C1793 * C685;
    const double C16533 = C1793 * C1843;
    const double C16532 = C623 * C1876;
    const double C16531 = C1875 / C597;
    const double C16530 = C623 * C1886;
    const double C16529 = C1874 / C597;
    const double C16528 = C1793 * C681;
    const double C16527 = C1793 * C1840;
    const double C16526 = C1786 * be;
    const double C16525 = C623 * C1874;
    const double C16524 = C605 * C1784;
    const double C16523 = C1785 * be;
    const double C16522 = C1873 / C597;
    const double C16521 = C623 * C1892;
    const double C16520 = C605 * C1782;
    const double C16519 = C1340 / C597;
    const double C16518 = C1255 * C689;
    const double C16517 = C1255 * C1308;
    const double C16516 = C623 * C1340;
    const double C16515 = C1339 / C597;
    const double C16514 = C623 * C1350;
    const double C16513 = C1356 / C597;
    const double C16512 = C1255 * C685;
    const double C16511 = C16458 * be;
    const double C16510 = C1255 * C1324;
    const double C16509 = C605 * C16427;
    const double C16508 = C623 * C1356;
    const double C16507 = C1355 / C597;
    const double C16506 = C623 * C1359;
    const double C16505 = C1336 / C597;
    const double C16504 = C1255 * C681;
    const double C16503 = C1255 * C1302;
    const double C16502 = C1248 * be;
    const double C16501 = C623 * C1336;
    const double C16500 = C605 * C1246;
    const double C16499 = C1247 * be;
    const double C16498 = C1335 / C597;
    const double C16497 = C623 * C1354;
    const double C16496 = C605 * C1244;
    const double C16495 = C689 / C563;
    const double C16494 = C581 * C604;
    const double C16493 = C582 * C649;
    const double C16492 = C688 / C610;
    const double C16491 = C685 / C563;
    const double C16490 = C581 * C602;
    const double C16489 = C582 * C648;
    const double C16488 = C684 / C610;
    const double C16487 = C681 / C563;
    const double C16486 = C581 * C589;
    const double C16485 = C582 * C646;
    const double C16484 = C561 * be;
    const double C16483 = C605 * C557;
    const double C16482 = C680 / C610;
    const double C16856 = C16730 - C16731;
    const double C16855 = C4779 - C16727;
    const double C16854 = C16696 + C16725;
    const double C16853 = C4775 - C16724;
    const double C16852 = C16720 - C16721;
    const double C16851 = C1886 - C16717;
    const double C16850 = C1892 - C16714;
    const double C16849 = C16696 + C16712;
    const double C16848 = C16710 - C16711;
    const double C16847 = C3357 - C16707;
    const double C16846 = C3356 - C16704;
    const double C16845 = C16629 + C16702;
    const double C16844 = C16700 - C16701;
    const double C16843 = C16524 + C16698;
    const double C16842 = C16697 / C563;
    const double C16841 = C7458 - C16695;
    const double C16840 = C16693 + C7446;
    const double C16839 = C7457 - C16692;
    const double C16838 = C16690 + C7442;
    const double C16837 = C16688 - C16689;
    const double C16836 = C6025 - C16686;
    const double C16835 = C6021 - C16684;
    const double C16834 = C16681 - C16682;
    const double C16833 = C2932 - C16679;
    const double C16832 = C2937 - C16677;
    const double C16831 = C6023 - C16675;
    const double C16830 = C16672 + C16673;
    const double C16829 = C16670 - C16671;
    const double C16828 = C16648 + C16667;
    const double C16827 = C6021 - C16666;
    const double C16826 = C16663 + C16664;
    const double C16825 = C3352 - C16662;
    const double C16824 = C16660 + C2909;
    const double C16823 = C16657 - C16658;
    const double C16822 = C16592 + C16655;
    const double C16821 = C3356 - C16653;
    const double C16820 = C16651 + C2897;
    const double C16819 = C16650 / C563;
    const double C16818 = C16648 + C16649;
    const double C16817 = C1350 - C16647;
    const double C16816 = C16643 - C16644;
    const double C16815 = C1354 - C16640;
    const double C16814 = C16617 + C16638;
    const double C16813 = C4777 - C16637;
    const double C16812 = C16635 + C16537;
    const double C16811 = C16633 - C16634;
    const double C16810 = C16524 + C16632;
    const double C16809 = C16631 / C563;
    const double C16808 = C16629 + C16630;
    const double C16807 = C4775 - C16628;
    const double C16806 = C16626 + C16522;
    const double C16805 = C4341 - C16625;
    const double C16804 = C16623 + C4332;
    const double C16803 = C16621 - C16622;
    const double C16802 = C16500 + C16619;
    const double C16801 = C16618 / C563;
    const double C16800 = C4339 - C16616;
    const double C16799 = C16614 + C4324;
    const double C16798 = C2413 - C16613;
    const double C16797 = C16610 - C16611;
    const double C16796 = C2417 - C16608;
    const double C16795 = C16602 + C16603;
    const double C16794 = C16539 + C16600;
    const double C16793 = C16597 + C16598;
    const double C16792 = C16594 / C563;
    const double C16791 = C16592 + C16593;
    const double C16790 = C16591 / C563;
    const double C16789 = C16588 + C16589;
    const double C16788 = C16584 + C2909;
    const double C16787 = C16582 + C16583;
    const double C16786 = C16578 + C2903;
    const double C16785 = C16576 + C16577;
    const double C16784 = C16539 + C16573;
    const double C16783 = C16572 / C563;
    const double C16782 = C16570 + C16571;
    const double C16781 = C16569 / C563;
    const double C16780 = C16566 + C16567;
    const double C16779 = C16562 + C2389;
    const double C16778 = C16560 + C16561;
    const double C16777 = C16556 + C2383;
    const double C16776 = C16554 + C16555;
    const double C16775 = C16509 + C16551;
    const double C16774 = C16550 / C563;
    const double C16773 = C16548 + C16549;
    const double C16772 = C16547 / C563;
    const double C16771 = C16544 + C16545;
    const double C16770 = C16542 / C563;
    const double C16769 = C16541 / C563;
    const double C16768 = C16539 + C16540;
    const double C16767 = C16536 + C16537;
    const double C16766 = C16534 / C563;
    const double C16765 = C16533 - C16488;
    const double C16764 = C16530 + C16531;
    const double C16763 = C16528 / C563;
    const double C16762 = C16527 - C16482;
    const double C16761 = C16526 / C563;
    const double C16760 = C16524 + C16525;
    const double C16759 = C16523 / C563;
    const double C16758 = C16520 + C16521;
    const double C16757 = C16518 / C563;
    const double C16756 = C16517 - C16492;
    const double C16755 = C16514 + C16515;
    const double C16754 = C16512 / C563;
    const double C16753 = C16511 / C563;
    const double C16752 = C16509 + C16510;
    const double C16751 = C16506 + C16507;
    const double C16750 = C16504 / C563;
    const double C16749 = C16503 - C16482;
    const double C16748 = C16502 / C563;
    const double C16747 = C16500 + C16501;
    const double C16746 = C16499 / C563;
    const double C16745 = C16496 + C16497;
    const double C16744 = -C16495;
    const double C16743 = C16494 / C563;
    const double C16742 = -C16491;
    const double C16741 = C16490 / C563;
    const double C16740 = -C16487;
    const double C16739 = C16486 / C563;
    const double C16738 = C16484 / C563;
    const double C16890 = C16854 - C16842;
    const double C16889 = C16849 - C16842;
    const double C16888 = C16845 - C16809;
    const double C16887 = C16843 + C7450;
    const double C16886 = C16828 + C16668;
    const double C16885 = C16822 + C2903;
    const double C16884 = C16818 - C16819;
    const double C16883 = C16814 - C16801;
    const double C16882 = C16810 - C16761;
    const double C16881 = C16808 + C16531;
    const double C16880 = C16802 + C4328;
    const double C16879 = C16794 - C16769;
    const double C16878 = C16791 - C16792;
    const double C16877 = C16789 + C16590;
    const double C16876 = C16784 - C16769;
    const double C16875 = C16782 + C2897;
    const double C16874 = C16780 + C16568;
    const double C16873 = C16775 - C16753;
    const double C16872 = C16773 + C2377;
    const double C16871 = C16771 + C16546;
    const double C16870 = C16483 - C16770;
    const double C16869 = C16768 - C16492;
    const double C16868 = C16760 - C16761;
    const double C16867 = C16758 + C16522;
    const double C16866 = C16483 - C16754;
    const double C16865 = C16752 - C16488;
    const double C16864 = C16747 - C16748;
    const double C16863 = C16745 + C16498;
    const double C16862 = C16744 / C597;
    const double C16861 = C16493 - C16743;
    const double C16860 = C16742 / C597;
    const double C16859 = C16489 - C16741;
    const double C16858 = C16740 / C597;
    const double C16857 = C16485 - C16739;
    const double C16909 = C16887 - C16761;
    const double C16908 = C16886 - C16819;
    const double C16907 = C16885 - C16792;
    const double C16906 = C16881 - C16809;
    const double C16905 = C16880 - C16748;
    const double C16904 = C16877 - C16790;
    const double C16903 = C16875 - C16783;
    const double C16902 = C16874 - C16781;
    const double C16901 = C16872 - C16774;
    const double C16900 = C16871 - C16772;
    const double C16899 = C16870 - C16738;
    const double C16898 = C16869 - C16769;
    const double C16897 = C16867 - C16759;
    const double C16896 = C16866 - C16738;
    const double C16895 = C16865 - C16753;
    const double C16894 = C16863 - C16746;
    const double C16893 = C16861 * C677;
    const double C16892 = C16859 * C677;
    const double C16891 = C16857 * C677;
    const double C16915 = C641 * C16893;
    const double C16914 = C641 * C16892;
    const double C16913 = C641 * C16891;
    const double C16912 = C636 * C16893;
    const double C16911 = C636 * C16892;
    const double C16910 = C636 * C16891;
    const double C16921 = C16915 / C563;
    const double C16920 = C16914 / C563;
    const double C16919 = C16913 / C563;
    const double C16918 = C16912 / C563;
    const double C16917 = C16911 / C563;
    const double C16916 = C16910 / C563;
    const double C16927 = C16899 + C16921;
    const double C16926 = C16920 - C16766;
    const double C16925 = C16919 - C16763;
    const double C16924 = C16918 - C16757;
    const double C16923 = C16896 + C16917;
    const double C16922 = C16916 - C16750;
    const double C16942 = C636 * C16927;
    const double C16941 = C636 * C16926;
    const double C16940 = C636 * C16925;
    const double C16939 = C627 * C16927;
    const double C16938 = C627 * C16926;
    const double C16937 = C627 * C16925;
    const double C16936 = C627 * C16924;
    const double C16935 = C627 * C16923;
    const double C16934 = C627 * C16922;
    const double C16933 = C641 * C16927;
    const double C16932 = C641 * C16926;
    const double C16931 = C641 * C16925;
    const double C16930 = C636 * C16924;
    const double C16929 = C636 * C16923;
    const double C16928 = C636 * C16922;
    const double C16957 = C16605 - C16942;
    const double C16956 = C16879 - C16941;
    const double C16955 = C16595 - C16940;
    const double C16954 = C16585 - C16939;
    const double C16953 = C16579 - C16938;
    const double C16952 = C16876 - C16937;
    const double C16951 = C16563 - C16936;
    const double C16950 = C16557 - C16935;
    const double C16949 = C16873 - C16934;
    const double C16948 = C16898 - C16933;
    const double C16947 = C16765 - C16932;
    const double C16946 = C16762 - C16931;
    const double C16945 = C16756 - C16930;
    const double C16944 = C16895 - C16929;
    const double C16943 = C16749 - C16928;
    const double C16975 = C636 * C16957;
    const double C16974 = C636 * C16956;
    const double C16973 = C636 * C16955;
    const double C16972 = C627 * C16957;
    const double C16971 = C627 * C16956;
    const double C16970 = C627 * C16955;
    const double C16969 = C627 * C16954;
    const double C16968 = C627 * C16953;
    const double C16967 = C627 * C16952;
    const double C16966 = C627 * C16951;
    const double C16965 = C627 * C16950;
    const double C16964 = C627 * C16949;
    const double C16963 = C16948 - C16862;
    const double C16962 = C16947 - C16860;
    const double C16961 = C16946 - C16858;
    const double C16960 = C16945 - C16862;
    const double C16959 = C16944 - C16860;
    const double C16958 = C16943 - C16858;
    const double C17002 = C641 * C16963;
    const double C17001 = C641 * C16962;
    const double C17000 = C641 * C16961;
    const double C16999 = C16824 - C16975;
    const double C16998 = C16907 - C16974;
    const double C16997 = C16820 - C16973;
    const double C16996 = C636 * C16963;
    const double C16995 = C636 * C16962;
    const double C16994 = C636 * C16961;
    const double C16993 = C636 * C16960;
    const double C16992 = C636 * C16959;
    const double C16991 = C636 * C16958;
    const double C16990 = C16604 - C16972;
    const double C16989 = C16599 - C16971;
    const double C16988 = C16878 - C16970;
    const double C16987 = C16788 - C16969;
    const double C16986 = C16786 - C16968;
    const double C16985 = C16903 - C16967;
    const double C16984 = C16779 - C16966;
    const double C16983 = C16777 - C16965;
    const double C16982 = C16901 - C16964;
    const double C16981 = C627 * C16963;
    const double C16980 = C627 * C16962;
    const double C16979 = C627 * C16961;
    const double C16978 = C627 * C16960;
    const double C16977 = C627 * C16959;
    const double C16976 = C627 * C16958;
    const double C17029 = C16909 - C17002;
    const double C17028 = C16840 - C17001;
    const double C17027 = C16838 - C17000;
    const double C17026 = C16999 - C16586;
    const double C17025 = C16998 - C16580;
    const double C17024 = C16997 - C16574;
    const double C17023 = C16636 - C16996;
    const double C17022 = C16882 - C16995;
    const double C17021 = C16627 - C16994;
    const double C17020 = C16804 - C16993;
    const double C17019 = C16905 - C16992;
    const double C17018 = C16799 - C16991;
    const double C17017 = C627 * C16990;
    const double C17016 = C627 * C16989;
    const double C17015 = C627 * C16988;
    const double C17014 = C16987 - C16586;
    const double C17013 = C16986 - C16580;
    const double C17012 = C16985 - C16574;
    const double C17011 = C16984 - C16564;
    const double C17010 = C16983 - C16558;
    const double C17009 = C16982 - C16552;
    const double C17008 = C16538 - C16981;
    const double C17007 = C16532 - C16980;
    const double C17006 = C16868 - C16979;
    const double C17005 = C16516 - C16978;
    const double C17004 = C16508 - C16977;
    const double C17003 = C16864 - C16976;
    const double C17062 = C627 * C17023;
    const double C17061 = C627 * C17022;
    const double C17060 = C627 * C17021;
    const double C17059 = C17029 - C16699;
    const double C17058 = C17028 - C16694;
    const double C17057 = C17027 - C16691;
    const double C17056 = C636 * C17026;
    const double C17055 = C636 * C17025;
    const double C17054 = C636 * C17024;
    const double C17053 = C627 * C17026;
    const double C17052 = C627 * C17025;
    const double C17051 = C627 * C17024;
    const double C17050 = C636 * C17023;
    const double C17049 = C636 * C17022;
    const double C17048 = C636 * C17021;
    const double C17047 = C17020 - C16624;
    const double C17046 = C17019 - C16620;
    const double C17045 = C17018 - C16615;
    const double C17044 = C16795 - C17017;
    const double C17043 = C16793 - C17016;
    const double C17042 = C16904 - C17015;
    const double C17041 = C627 * C17014;
    const double C17040 = C627 * C17013;
    const double C17039 = C627 * C17012;
    const double C17038 = C627 * C17011;
    const double C17037 = C627 * C17010;
    const double C17036 = C627 * C17009;
    const double C17035 = C627 * C17008;
    const double C17034 = C627 * C17007;
    const double C17033 = C627 * C17006;
    const double C17032 = C627 * C17005;
    const double C17031 = C627 * C17004;
    const double C17030 = C627 * C17003;
    const double C17098 = C636 * C17059;
    const double C17097 = C636 * C17058;
    const double C17096 = C636 * C17057;
    const double C17095 = C627 * C17059;
    const double C17094 = C627 * C17058;
    const double C17093 = C627 * C17057;
    const double C17092 = C16708 - C17062;
    const double C17091 = C16705 - C17061;
    const double C17090 = C16888 - C17060;
    const double C17089 = C16830 - C17056;
    const double C17088 = C16908 - C17055;
    const double C17087 = C16826 - C17054;
    const double C17086 = C16659 - C17053;
    const double C17085 = C16654 - C17052;
    const double C17084 = C16884 - C17051;
    const double C17083 = C627 * C17047;
    const double C17082 = C627 * C17046;
    const double C17081 = C627 * C17045;
    const double C17080 = C16812 - C17050;
    const double C17079 = C16906 - C17049;
    const double C17078 = C16806 - C17048;
    const double C17077 = C17044 - C16606;
    const double C17076 = C17043 - C16601;
    const double C17075 = C17042 - C16596;
    const double C17074 = C16787 - C17041;
    const double C17073 = C16785 - C17040;
    const double C17072 = C16902 - C17039;
    const double C17071 = C16778 - C17038;
    const double C17070 = C16776 - C17037;
    const double C17069 = C16900 - C17036;
    const double C17068 = C16767 - C17035;
    const double C17067 = C16764 - C17034;
    const double C17066 = C16897 - C17033;
    const double C17065 = C16755 - C17032;
    const double C17064 = C16751 - C17031;
    const double C17063 = C16894 - C17030;
    const double C17137 = C17077 + C2364;
    const double C17136 = C17076 - C16736;
    const double C17135 = C17075 - C16735;
    const double C17134 = C17086 + C1244;
    const double C17133 = C17085 - C16733;
    const double C17132 = C17084 - C16732;
    const double C17131 = C16728 - C17098;
    const double C17130 = C16890 - C17097;
    const double C17129 = C16722 - C17096;
    const double C17128 = C16718 - C17095;
    const double C17127 = C16715 - C17094;
    const double C17126 = C16889 - C17093;
    const double C17125 = C17092 + C3316;
    const double C17124 = C17091 - C16706;
    const double C17123 = C17090 - C16703;
    const double C17122 = C17089 - C16674;
    const double C17121 = C17088 - C16669;
    const double C17120 = C17087 - C16665;
    const double C17119 = C17086 - C16661;
    const double C17118 = C17085 + C3316;
    const double C17117 = C17084 - C16652;
    const double C17116 = C16645 - C17083;
    const double C17115 = C16641 - C17082;
    const double C17114 = C16883 - C17081;
    const double C17113 = C17080 - C16543;
    const double C17112 = C17079 - C16535;
    const double C17111 = C17078 - C16529;
    const double C17110 = C17074 - C16587;
    const double C17109 = C17073 - C16581;
    const double C17108 = C17072 - C16575;
    const double C17107 = C17071 - C16565;
    const double C17106 = C17070 - C16559;
    const double C17105 = C17069 - C16553;
    const double C17104 = C17068 - C16543;
    const double C17103 = C17067 - C16535;
    const double C17102 = C17066 - C16529;
    const double C17101 = C17065 - C16519;
    const double C17100 = C17064 - C16513;
    const double C17099 = C17063 - C16505;
    const double C17159 = C17137 - C16737;
    const double C17158 = C17134 - C16734;
    const double C17157 = C17131 + C4766;
    const double C17156 = C17130 - C16726;
    const double C17155 = C17129 - C16723;
    const double C17154 = C17128 + C1782;
    const double C17153 = C17127 - C16716;
    const double C17152 = C17126 - C16713;
    const double C17151 = C17125 - C16709;
    const double C17150 = C17113 + C5540;
    const double C17149 = C17112 - C16685;
    const double C17148 = C17111 - C16683;
    const double C17147 = C17104 + C2884;
    const double C17146 = C17103 - C16678;
    const double C17145 = C17102 - C16676;
    const double C17144 = C17118 - C16656;
    const double C17143 = C17116 - C16646;
    const double C17142 = C17115 + C1244;
    const double C17141 = C17114 - C16639;
    const double C17140 = C17101 - C16612;
    const double C17139 = C17100 + C2364;
    const double C17138 = C17099 - C16607;
    const double C17165 = C17157 - C16729;
    const double C17164 = C17154 - C16719;
    const double C17163 = C17150 - C16687;
    const double C17162 = C17147 - C16680;
    const double C17161 = C17142 - C16642;
    const double C17160 = C17139 - C16609;
    const double gx200200 =
        C605 * C548 + C623 * C821 + (3 * C811) / C597 - (C558 * be) / C563 -
        C627 *
            (C605 * C555 + C623 * C812 + C786 - (C559 * be) / C563 -
             C627 * (C605 * C556 + C623 * C776 - C16482 - (C16456 * be) / C563 -
                     C627 * (C16483 - (C623 * C681) / C563 - C16738 +
                             (C627 * C16891) / C563) -
                     C16858) -
             C776 / C563) -
        (3 * C812) / C597 + C548 - C568 * C821 + C562 -
        C568 * (C821 + C16450 - C568 * C811);
    const double gx200020 = C17099 + C1244 - C568 * C1354 + C1249 -
                            C568 * (C1354 + C1245 - C568 * C1335);
    const double gx200002 = C17102 + C1782 - C568 * C1892 + C1787 -
                            C568 * (C1892 + C1783 - C568 * C1873);
    const double gx200110 = C17105 + C2364 - C568 * C2417 + C2369 -
                            C568 * (C2417 + C16377 - C568 * C2403);
    const double gx200101 = C17108 + C2884 - C568 * C2937 + C2889 -
                            C568 * (C2937 + C16391 - C568 * C2923);
    const double gx200011 = C17075 + C3316 - C568 * C3356 + C3321 -
                            C568 * (C3356 + C3317 - C568 * C3336);
    const double gx020200 = C17138 - C570 * C16796;
    const double gx020020 = C1255 * C4339 + (3 * C1335) / C597 - C636 * C17045 -
                            (3 * C1336) / C597 - C570 * C4339 - C570 * C16800;
    const double gx020002 = C17111 - C570 * C4775 - C570 * C16807;
    const double gx020110 = C17141 - C570 * C16815;
    const double gx020101 = C17117 - C570 * C16821;
    const double gx020011 = C17120 - C570 * C6021 - C570 * C16827;
    const double gx002200 = C17145 - C571 * C16832;
    const double gx002020 = C17148 - C571 * C16835;
    const double gx002002 = C1793 * C7457 + (3 * C1873) / C597 - C641 * C17057 -
                            (3 * C1874) / C597 - C571 * C7457 - C571 * C16839;
    const double gx002110 = C17123 - C571 * C16846;
    const double gx002101 = C17152 - C571 * C16850;
    const double gx002011 = C17155 - C571 * C16853;
    const double gx110200 = C17105 - C570 * C821 + C3808 - C568 * C16796;
    const double gx110020 = C17141 + C4320 - C568 * C16800;
    const double gx110002 = C17090 - C570 * C1892 + C4768 - C568 * C16807;
    const double gx110110 = C17138 + C5176 - C568 * C16815;
    const double gx110101 = C17075 - C570 * C2937 + C5542 - C568 * C16821;
    const double gx110011 = C17117 + C6008 - C568 * C16827;
    const double gx101200 = C17108 - C571 * C821 + C6476 - C568 * C16832;
    const double gx101020 = C17132 + C6926 - C568 * C16835;
    const double gx101002 = C17152 + C7438 - C568 * C16839;
    const double gx101110 = C17135 + C7798 - C568 * C16846;
    const double gx101101 = C17145 + C8194 - C568 * C16850;
    const double gx101011 = C17123 + C8590 - C568 * C16853;
    const double gx011200 = C17135 - C570 * C16832;
    const double gx011020 = C17120 - C571 * C4339 - C570 * C16835;
    const double gx011002 = C17155 - C570 * C16839;
    const double gx011110 = C17132 - C570 * C16846;
    const double gx011101 = C17123 - C570 * C16850;
    const double gx011011 = C17148 - C570 * C16853;
    gx[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(9.) * gx110110;
    gx[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(9.) * gx110011;
    gx[(Ai + 0) * matrix_size + Bi + 2] +=
        std::sqrt(3.0) * gx110002 -
        (std::sqrt(0.75) * gx110020 + std::sqrt(0.75) * gx110200);
    gx[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(9.) * gx110101;
    gx[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(2.25) * gx110200 - std::sqrt(2.25) * gx110020;
    gx[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(9.) * gx011110;
    gx[(Ai + 1) * matrix_size + Bi + 1] += std::sqrt(9.) * gx011011;
    gx[(Ai + 1) * matrix_size + Bi + 2] +=
        std::sqrt(3.0) * gx011002 -
        (std::sqrt(0.75) * gx011020 + std::sqrt(0.75) * gx011200);
    gx[(Ai + 1) * matrix_size + Bi + 3] += std::sqrt(9.) * gx011101;
    gx[(Ai + 1) * matrix_size + Bi + 4] +=
        std::sqrt(2.25) * gx011200 - std::sqrt(2.25) * gx011020;
    gx[(Ai + 2) * matrix_size + Bi + 0] +=
        std::sqrt(3.0) * gx002110 -
        (std::sqrt(0.75) * gx020110 + std::sqrt(0.75) * gx200110);
    gx[(Ai + 2) * matrix_size + Bi + 1] +=
        std::sqrt(3.0) * gx002011 -
        (std::sqrt(0.75) * gx020011 + std::sqrt(0.75) * gx200011);
    gx[(Ai + 2) * matrix_size + Bi + 2] +=
        0.25 * gx200200 + 0.25 * gx200020 - 0.5 * gx200002 + 0.25 * gx020200 +
        0.25 * gx020020 - 0.5 * gx020002 - 0.5 * gx002200 - 0.5 * gx002020 +
        gx002002;
    gx[(Ai + 2) * matrix_size + Bi + 3] +=
        std::sqrt(3.0) * gx002101 -
        (std::sqrt(0.75) * gx020101 + std::sqrt(0.75) * gx200101);
    gx[(Ai + 2) * matrix_size + Bi + 4] +=
        std::sqrt(0.1875) * gx200020 - std::sqrt(0.1875) * gx200200 -
        std::sqrt(0.1875) * gx020200 + std::sqrt(0.1875) * gx020020 +
        std::sqrt(0.75) * gx002200 - std::sqrt(0.75) * gx002020;
    gx[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(9.) * gx101110;
    gx[(Ai + 3) * matrix_size + Bi + 1] += std::sqrt(9.) * gx101011;
    gx[(Ai + 3) * matrix_size + Bi + 2] +=
        std::sqrt(3.0) * gx101002 -
        (std::sqrt(0.75) * gx101020 + std::sqrt(0.75) * gx101200);
    gx[(Ai + 3) * matrix_size + Bi + 3] += std::sqrt(9.) * gx101101;
    gx[(Ai + 3) * matrix_size + Bi + 4] +=
        std::sqrt(2.25) * gx101200 - std::sqrt(2.25) * gx101020;
    gx[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(2.25) * gx200110 - std::sqrt(2.25) * gx020110;
    gx[(Ai + 4) * matrix_size + Bi + 1] +=
        std::sqrt(2.25) * gx200011 - std::sqrt(2.25) * gx020011;
    gx[(Ai + 4) * matrix_size + Bi + 2] +=
        std::sqrt(0.75) * gx200002 -
        (std::sqrt(0.1875) * gx200020 + std::sqrt(0.1875) * gx200200) +
        std::sqrt(0.1875) * gx020200 + std::sqrt(0.1875) * gx020020 -
        std::sqrt(0.75) * gx020002;
    gx[(Ai + 4) * matrix_size + Bi + 3] +=
        std::sqrt(2.25) * gx200101 - std::sqrt(2.25) * gx020101;
    gx[(Ai + 4) * matrix_size + Bi + 4] +=
        std::sqrt(0.5625) * gx200200 - std::sqrt(0.5625) * gx200020 -
        std::sqrt(0.5625) * gx020200 + std::sqrt(0.5625) * gx020020;
    const double gy200200 =
        C623 * C813 + (3 * C793) / C597 -
        C627 * (C623 * C794 + C767 -
                C627 * (C623 * C752 - C16488 -
                        C627 * ((C627 * C16892) / C563 - (C623 * C685) / C563) -
                        C16860) -
                C752 / C563) -
        (3 * C794) / C597 - C568 * C813 - C568 * (C813 - C568 * C793);
    const double gy200020 =
        C17100 - C568 * C1359 - C568 * (C1359 - C568 * C1355);
    const double gy200002 =
        C17103 - C568 * C1886 - C568 * (C1886 - C568 * C1875);
    const double gy200110 =
        C17106 - C568 * C2412 - C568 * (C2412 - C568 * C2393);
    const double gy200101 =
        C17109 - C568 * C2932 - C568 * (C2932 - C568 * C2913);
    const double gy200011 =
        C17076 - C568 * C3357 - C568 * (C3357 - C568 * C3350);
    const double gy020200 = C17160 + C3808 - C570 * C16797;
    const double gy020020 = C16617 + C1255 * C4343 + (3 * C1355) / C597 -
                            C16801 - C636 * C17046 - (3 * C1356) / C597 +
                            C4318 - C570 * C4343 + C4320 - C570 * C16803;
    const double gy020002 =
        C17112 + C4766 - C570 * C4779 + C4768 - C570 * C16811;
    const double gy020110 = C17161 + C5176 - C570 * C16816;
    const double gy020101 = C17144 + C5542 - C570 * C16823;
    const double gy020011 =
        C17121 + C5540 - C570 * C6025 + C6008 - C570 * C16829;
    const double gy002200 = C17146 - C571 * C16833;
    const double gy002020 = C17149 - C571 * C16836;
    const double gy002002 = C1793 * C7458 + (3 * C1875) / C597 - C641 * C17058 -
                            (3 * C1876) / C597 - C571 * C7458 - C571 * C16841;
    const double gy002110 = C17124 - C571 * C16847;
    const double gy002101 = C17153 - C571 * C16851;
    const double gy002011 = C17156 - C571 * C16855;
    const double gy110200 = C17106 + C548 - C570 * C813 - C568 * C16797;
    const double gy110020 = C17161 - C568 * C16803;
    const double gy110002 = C17091 + C1782 - C570 * C1886 - C568 * C16811;
    const double gy110110 = C17160 - C568 * C16816;
    const double gy110101 = C17076 + C2884 - C570 * C2932 - C568 * C16823;
    const double gy110011 = C17144 - C568 * C16829;
    const double gy101200 = C17109 - C571 * C813 - C568 * C16833;
    const double gy101020 = C17133 - C568 * C16836;
    const double gy101002 = C17153 - C568 * C16841;
    const double gy101110 = C17136 - C568 * C16847;
    const double gy101101 = C17146 - C568 * C16851;
    const double gy101011 = C17124 - C568 * C16855;
    const double gy011200 = C17136 + C6476 - C570 * C16833;
    const double gy011020 = C17121 - C571 * C4343 + C6926 - C570 * C16836;
    const double gy011002 = C17156 + C7438 - C570 * C16841;
    const double gy011110 = C17133 + C7798 - C570 * C16847;
    const double gy011101 = C17124 + C8194 - C570 * C16851;
    const double gy011011 = C17149 + C8590 - C570 * C16855;
    gy[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(9.) * gy110110;
    gy[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(9.) * gy110011;
    gy[(Ai + 0) * matrix_size + Bi + 2] +=
        std::sqrt(3.0) * gy110002 -
        (std::sqrt(0.75) * gy110020 + std::sqrt(0.75) * gy110200);
    gy[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(9.) * gy110101;
    gy[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(2.25) * gy110200 - std::sqrt(2.25) * gy110020;
    gy[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(9.) * gy011110;
    gy[(Ai + 1) * matrix_size + Bi + 1] += std::sqrt(9.) * gy011011;
    gy[(Ai + 1) * matrix_size + Bi + 2] +=
        std::sqrt(3.0) * gy011002 -
        (std::sqrt(0.75) * gy011020 + std::sqrt(0.75) * gy011200);
    gy[(Ai + 1) * matrix_size + Bi + 3] += std::sqrt(9.) * gy011101;
    gy[(Ai + 1) * matrix_size + Bi + 4] +=
        std::sqrt(2.25) * gy011200 - std::sqrt(2.25) * gy011020;
    gy[(Ai + 2) * matrix_size + Bi + 0] +=
        std::sqrt(3.0) * gy002110 -
        (std::sqrt(0.75) * gy020110 + std::sqrt(0.75) * gy200110);
    gy[(Ai + 2) * matrix_size + Bi + 1] +=
        std::sqrt(3.0) * gy002011 -
        (std::sqrt(0.75) * gy020011 + std::sqrt(0.75) * gy200011);
    gy[(Ai + 2) * matrix_size + Bi + 2] +=
        0.25 * gy200200 + 0.25 * gy200020 - 0.5 * gy200002 + 0.25 * gy020200 +
        0.25 * gy020020 - 0.5 * gy020002 - 0.5 * gy002200 - 0.5 * gy002020 +
        gy002002;
    gy[(Ai + 2) * matrix_size + Bi + 3] +=
        std::sqrt(3.0) * gy002101 -
        (std::sqrt(0.75) * gy020101 + std::sqrt(0.75) * gy200101);
    gy[(Ai + 2) * matrix_size + Bi + 4] +=
        std::sqrt(0.1875) * gy200020 - std::sqrt(0.1875) * gy200200 -
        std::sqrt(0.1875) * gy020200 + std::sqrt(0.1875) * gy020020 +
        std::sqrt(0.75) * gy002200 - std::sqrt(0.75) * gy002020;
    gy[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(9.) * gy101110;
    gy[(Ai + 3) * matrix_size + Bi + 1] += std::sqrt(9.) * gy101011;
    gy[(Ai + 3) * matrix_size + Bi + 2] +=
        std::sqrt(3.0) * gy101002 -
        (std::sqrt(0.75) * gy101020 + std::sqrt(0.75) * gy101200);
    gy[(Ai + 3) * matrix_size + Bi + 3] += std::sqrt(9.) * gy101101;
    gy[(Ai + 3) * matrix_size + Bi + 4] +=
        std::sqrt(2.25) * gy101200 - std::sqrt(2.25) * gy101020;
    gy[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(2.25) * gy200110 - std::sqrt(2.25) * gy020110;
    gy[(Ai + 4) * matrix_size + Bi + 1] +=
        std::sqrt(2.25) * gy200011 - std::sqrt(2.25) * gy020011;
    gy[(Ai + 4) * matrix_size + Bi + 2] +=
        std::sqrt(0.75) * gy200002 -
        (std::sqrt(0.1875) * gy200020 + std::sqrt(0.1875) * gy200200) +
        std::sqrt(0.1875) * gy020200 + std::sqrt(0.1875) * gy020020 -
        std::sqrt(0.75) * gy020002;
    gy[(Ai + 4) * matrix_size + Bi + 3] +=
        std::sqrt(2.25) * gy200101 - std::sqrt(2.25) * gy020101;
    gy[(Ai + 4) * matrix_size + Bi + 4] +=
        std::sqrt(0.5625) * gy200200 - std::sqrt(0.5625) * gy200020 -
        std::sqrt(0.5625) * gy020200 + std::sqrt(0.5625) * gy020020;
    const double gz200200 =
        C623 * C814 + (3 * C795) / C597 -
        C627 * (C623 * C796 + C773 -
                C627 * (C623 * C757 - C16492 -
                        C627 * ((C627 * C16893) / C563 - (C623 * C689) / C563) -
                        C16862) -
                C757 / C563) -
        (3 * C796) / C597 - C568 * C814 - C568 * (C814 - C568 * C795);
    const double gz200020 =
        C17101 - C568 * C1350 - C568 * (C1350 - C568 * C1339);
    const double gz200002 =
        C17104 - C568 * C1897 - C568 * (C1897 - C568 * C1893);
    const double gz200110 =
        C17107 - C568 * C2413 - C568 * (C2413 - C568 * C2395);
    const double gz200101 =
        C17110 - C568 * C2933 - C568 * (C2933 - C568 * C2915);
    const double gz200011 =
        C17077 - C568 * C3352 - C568 * (C3352 - C568 * C3341);
    const double gz020200 = C17140 - C570 * C16798;
    const double gz020020 = C1255 * C4341 + (3 * C1339) / C597 - C636 * C17047 -
                            (3 * C1340) / C597 - C570 * C4341 - C570 * C16805;
    const double gz020002 = C17113 - C570 * C4777 - C570 * C16813;
    const double gz020110 = C17143 - C570 * C16817;
    const double gz020101 = C17119 - C570 * C16825;
    const double gz020011 = C17122 - C570 * C6023 - C570 * C16831;
    const double gz002200 = C17162 + C6476 - C571 * C16834;
    const double gz002020 = C17163 + C6926 - C571 * C16837;
    const double gz002002 = C16696 + C1793 * C7461 + (3 * C1893) / C597 -
                            C16842 - C641 * C17059 - (3 * C1894) / C597 +
                            C7436 - C571 * C7461 + C7438 - C571 * C16844;
    const double gz002110 = C17151 + C7798 - C571 * C16848;
    const double gz002101 = C17164 + C8194 - C571 * C16852;
    const double gz002011 = C17165 + C8590 - C571 * C16856;
    const double gz110200 = C17107 - C570 * C814 - C568 * C16798;
    const double gz110020 = C17143 - C568 * C16805;
    const double gz110002 = C17092 - C570 * C1897 - C568 * C16813;
    const double gz110110 = C17140 - C568 * C16817;
    const double gz110101 = C17077 - C570 * C2933 - C568 * C16825;
    const double gz110011 = C17119 - C568 * C16831;
    const double gz101200 = C17110 + C548 - C571 * C814 - C568 * C16834;
    const double gz101020 = C17158 - C568 * C16837;
    const double gz101002 = C17164 - C568 * C16844;
    const double gz101110 = C17159 - C568 * C16848;
    const double gz101101 = C17162 - C568 * C16852;
    const double gz101011 = C17151 - C568 * C16856;
    const double gz011200 = C17159 - C570 * C16834;
    const double gz011020 = C17122 + C4318 - C571 * C4341 - C570 * C16837;
    const double gz011002 = C17165 - C570 * C16844;
    const double gz011110 = C17158 - C570 * C16848;
    const double gz011101 = C17151 - C570 * C16852;
    const double gz011011 = C17163 - C570 * C16856;
    gz[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(9.) * gz110110;
    gz[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(9.) * gz110011;
    gz[(Ai + 0) * matrix_size + Bi + 2] +=
        std::sqrt(3.0) * gz110002 -
        (std::sqrt(0.75) * gz110020 + std::sqrt(0.75) * gz110200);
    gz[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(9.) * gz110101;
    gz[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(2.25) * gz110200 - std::sqrt(2.25) * gz110020;
    gz[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(9.) * gz011110;
    gz[(Ai + 1) * matrix_size + Bi + 1] += std::sqrt(9.) * gz011011;
    gz[(Ai + 1) * matrix_size + Bi + 2] +=
        std::sqrt(3.0) * gz011002 -
        (std::sqrt(0.75) * gz011020 + std::sqrt(0.75) * gz011200);
    gz[(Ai + 1) * matrix_size + Bi + 3] += std::sqrt(9.) * gz011101;
    gz[(Ai + 1) * matrix_size + Bi + 4] +=
        std::sqrt(2.25) * gz011200 - std::sqrt(2.25) * gz011020;
    gz[(Ai + 2) * matrix_size + Bi + 0] +=
        std::sqrt(3.0) * gz002110 -
        (std::sqrt(0.75) * gz020110 + std::sqrt(0.75) * gz200110);
    gz[(Ai + 2) * matrix_size + Bi + 1] +=
        std::sqrt(3.0) * gz002011 -
        (std::sqrt(0.75) * gz020011 + std::sqrt(0.75) * gz200011);
    gz[(Ai + 2) * matrix_size + Bi + 2] +=
        0.25 * gz200200 + 0.25 * gz200020 - 0.5 * gz200002 + 0.25 * gz020200 +
        0.25 * gz020020 - 0.5 * gz020002 - 0.5 * gz002200 - 0.5 * gz002020 +
        gz002002;
    gz[(Ai + 2) * matrix_size + Bi + 3] +=
        std::sqrt(3.0) * gz002101 -
        (std::sqrt(0.75) * gz020101 + std::sqrt(0.75) * gz200101);
    gz[(Ai + 2) * matrix_size + Bi + 4] +=
        std::sqrt(0.1875) * gz200020 - std::sqrt(0.1875) * gz200200 -
        std::sqrt(0.1875) * gz020200 + std::sqrt(0.1875) * gz020020 +
        std::sqrt(0.75) * gz002200 - std::sqrt(0.75) * gz002020;
    gz[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(9.) * gz101110;
    gz[(Ai + 3) * matrix_size + Bi + 1] += std::sqrt(9.) * gz101011;
    gz[(Ai + 3) * matrix_size + Bi + 2] +=
        std::sqrt(3.0) * gz101002 -
        (std::sqrt(0.75) * gz101020 + std::sqrt(0.75) * gz101200);
    gz[(Ai + 3) * matrix_size + Bi + 3] += std::sqrt(9.) * gz101101;
    gz[(Ai + 3) * matrix_size + Bi + 4] +=
        std::sqrt(2.25) * gz101200 - std::sqrt(2.25) * gz101020;
    gz[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(2.25) * gz200110 - std::sqrt(2.25) * gz020110;
    gz[(Ai + 4) * matrix_size + Bi + 1] +=
        std::sqrt(2.25) * gz200011 - std::sqrt(2.25) * gz020011;
    gz[(Ai + 4) * matrix_size + Bi + 2] +=
        std::sqrt(0.75) * gz200002 -
        (std::sqrt(0.1875) * gz200020 + std::sqrt(0.1875) * gz200200) +
        std::sqrt(0.1875) * gz020200 + std::sqrt(0.1875) * gz020020 -
        std::sqrt(0.75) * gz020002;
    gz[(Ai + 4) * matrix_size + Bi + 3] +=
        std::sqrt(2.25) * gz200101 - std::sqrt(2.25) * gz020101;
    gz[(Ai + 4) * matrix_size + Bi + 4] +=
        std::sqrt(0.5625) * gz200200 - std::sqrt(0.5625) * gz200020 -
        std::sqrt(0.5625) * gz020200 + std::sqrt(0.5625) * gz020020;
}
