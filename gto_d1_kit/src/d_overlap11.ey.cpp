/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void overlap_gradient_23(double ae,
                         double be,
                         double cc,
                         double xAB,
                         double yAB,
                         double zAB,
                         double* const gx,
                         double* const gy,
                         double* const gz,
                         std::size_t matrix_size,
                         std::size_t Ai,
                         std::size_t Bi)
{
    const double C9262 = ae + be;
    const double C9265 = Pi / C9262;
    const double C9266 = std::sqrt(C9265);
    const double C9269 = std::pow(C9262, 2);
    const double C9268 = be * xAB;
    const double C9275 = C9266 * C9268;
    const double C9274 = ae * xAB;
    const double C9273 = 2. * C9262;
    const double C9272 = std::pow(C9268, 2);
    const double C9277 = C9266 / C9273;
    const double C9276 = C9266 * C9272;
    const double C9278 = C9276 / C9269;
    const double C9279 = C9278 + C9277;
    const double C9286 = C9274 * C9275;
    const double C9285 = 2. * C9269;
    const double C9284 = -2. * C9275;
    const double C9283 = C9279 * C9274;
    const double C9289 = C9286 / C9269;
    const double C9288 = C9284 / C9285;
    const double C9287 = C9283 / C9262;
    const double C9291 = C9277 - C9289;
    const double C9290 = C9287 + C9288;
    const double C9295 = ae * yAB;
    const double C9299 = ae * zAB;
    const double C9307 = be * yAB;
    const double C9309 = C9266 * C9307;
    const double C9308 = std::pow(C9307, 2);
    const double C9312 = C9295 * C9309;
    const double C9311 = -2. * C9309;
    const double C9310 = C9266 * C9308;
    const double C9315 = C9312 / C9269;
    const double C9314 = C9311 / C9285;
    const double C9313 = C9310 / C9269;
    const double C9317 = C9277 - C9315;
    const double C9316 = C9313 + C9277;
    const double C9318 = C9316 * C9295;
    const double C9319 = C9318 / C9262;
    const double C9320 = C9319 + C9314;
    const double C9326 = be * zAB;
    const double C9328 = C9266 * C9326;
    const double C9327 = std::pow(C9326, 2);
    const double C9331 = C9299 * C9328;
    const double C9330 = -2. * C9328;
    const double C9329 = C9266 * C9327;
    const double C9334 = C9331 / C9269;
    const double C9333 = C9330 / C9285;
    const double C9332 = C9329 / C9269;
    const double C9336 = C9277 - C9334;
    const double C9335 = C9332 + C9277;
    const double C9337 = C9335 * C9299;
    const double C9338 = C9337 / C9262;
    const double C9339 = C9338 + C9333;
    const double C9374 = C9328 / C9262;
    const double C9373 = C9336 * C9299;
    const double C9372 = 2 * C9336;
    const double C9371 = C9339 * C9299;
    const double C9370 = C9309 / C9262;
    const double C9369 = C9317 * C9295;
    const double C9368 = 2 * C9317;
    const double C9367 = C9320 * C9295;
    const double C9366 = std::pow(C9274, 2);
    const double C9365 = C9266 * C9299;
    const double C9364 = std::pow(C9299, 2);
    const double C9363 = C9266 * C9295;
    const double C9362 = std::pow(C9295, 2);
    const double C9361 = be * zAB;
    const double C9360 = be * yAB;
    const double C9359 = C9275 / C9262;
    const double C9358 = C9266 * C9274;
    const double C9357 = C9291 * C9274;
    const double C9356 = 2 * C9291;
    const double C9355 = 2. * C9269;
    const double C9354 = C9266 * C9268;
    const double C9353 = ae * xAB;
    const double C9352 = 2. * C9262;
    const double C9351 = be * xAB;
    const double C9350 = Pi / C9262;
    const double C9389 = C9373 / C9262;
    const double C9388 = C9372 + C9335;
    const double C9387 = C9371 / C9262;
    const double C9386 = C9369 / C9262;
    const double C9385 = C9368 + C9316;
    const double C9384 = C9367 / C9262;
    const double C9383 = C9266 * C9366;
    const double C9382 = C9365 / C9262;
    const double C9381 = C9266 * C9364;
    const double C9380 = C9363 / C9262;
    const double C9379 = C9266 * C9362;
    const double C9378 = C9358 / C9262;
    const double C9377 = C9357 / C9262;
    const double C9376 = C9266 / C9352;
    const double C9375 = std::sqrt(C9350);
    const double C9397 = C9382 - C9374;
    const double C9396 = C9388 / C9273;
    const double C9395 = C9380 - C9370;
    const double C9394 = C9385 / C9273;
    const double C9393 = C9383 / C9269;
    const double C9392 = C9381 / C9269;
    const double C9391 = C9379 / C9269;
    const double C9390 = C9378 - C9359;
    const double C9405 = C9397 / C9273;
    const double C9404 = C9387 + C9396;
    const double C9403 = C9395 / C9273;
    const double C9402 = C9384 + C9394;
    const double C9401 = C9393 + C9277;
    const double C9400 = C9392 + C9277;
    const double C9399 = C9391 + C9277;
    const double C9398 = C9390 / C9273;
    const double C9408 = C9389 + C9405;
    const double C9407 = C9386 + C9403;
    const double C9406 = C9377 + C9398;
    const double C8980 = -(C9375 * C9351) / C9262;
    const double C8982 =
        (C9266 * std::pow(C9351, 2)) / std::pow(C9262, 2) + C9376;
    const double C8983 =
        (((C9266 * std::pow(C9268, 2)) / C9269 + C9376) * C9353) / C9262 +
        (-2. * C9354) / C9355;
    const double C8984 = C9376 - (C9353 * C9354) / C9269;
    const double C8985 =
        (((C9279 * C9274) / C9262 + (-2. * C9275) / C9355) * C9274) / C9262 +
        (2 * (C9277 - (C9274 * C9275) / C9269) + C9279) / C9273;
    const double C8988 =
        (((C9290 * C9274) / C9262 + (C9356 + C9279) / C9273) * C9274) / C9262 +
        (2 * C9406 + 2 * C9290) / C9273;
    const double C8989 = -(C9266 * C9360) / C9262;
    const double C8990 = -(C9266 * C9361) / C9262;
    const double C9028 = (C9399 * C9295) / C9262 + (2. * C9363) / C9285;
    const double C9043 = (C9400 * C9299) / C9262 + (2. * C9365) / C9285;
    const double C9074 = (C9266 * std::pow(C9360, 2)) / C9269 + C9277;
    const double C9075 = (C9401 * C9274) / C9262 + (2. * C9358) / C9285;
    const double C9087 =
        (C9402 * C9295) / C9262 + (2 * C9407 + 2 * C9320) / C9273;
    const double C9139 = (C9266 * std::pow(C9361, 2)) / C9269 + C9277;
    const double C9146 =
        (C9404 * C9299) / C9262 + (2 * C9408 + 2 * C9339) / C9273;
    const double C9197 = (C9406 * C9274) / C9262 + (C9401 + C9356) / C9273;
    const double C9200 = (C9407 * C9295) / C9262 + (C9399 + C9368) / C9273;
    const double C9224 = (C9408 * C9299) / C9262 + (C9400 + C9372) / C9273;
    const double C8997 = ae * C8982;
    const double C8996 = ae * xAB;
    const double C8995 = be * xAB;
    const double C8994 = be * C9375;
    const double C8993 = ae + be;
    const double C8992 = be * C8980;
    const double C8991 = ae * C8980;
    const double C9004 = 4. * C8991;
    const double C9003 = 2 * C8997;
    const double C9002 = C8991 * C8995;
    const double C9001 = 2 * C8994;
    const double C9000 = 2. * C8993;
    const double C8999 = 2 * C8992;
    const double C8998 = 2 * C8991;
    const double C9008 = C9004 / C9000;
    const double C9007 = 2 * C9002;
    const double C9006 = -C9001;
    const double C9005 = C8998 - C8999;
    const double C9011 = C9007 / C8993;
    const double C9010 = C9006 / C9000;
    const double C9009 = C9005 / C9000;
    const double C9012 = C9010 - C9011;
    const double C9015 = C9012 * C8996;
    const double C9014 = 2 * C9012;
    const double C9013 = C9012 * C8995;
    const double C9018 = C9015 / C8993;
    const double C9017 = C9014 + C9003;
    const double C9016 = C9013 / C8993;
    const double C9021 = C9018 + C9008;
    const double C9020 = C9017 / C9000;
    const double C9019 = C9009 - C9016;
    const double C9022 = C9019 * C8996;
    const double C9023 = C9022 / C8993;
    const double C9024 = C9023 + C9020;
    const double C9033 = ae * C9266;
    const double C9032 = ae * yAB;
    const double C9031 = ae * C8989;
    const double C9035 = 2. * C9033;
    const double C9034 = C9031 * C9032;
    const double C9037 = C9035 / C9000;
    const double C9036 = 2 * C9034;
    const double C9038 = C9036 / C8993;
    const double C9039 = C9038 + C9037;
    const double C9048 = ae * C9266;
    const double C9047 = ae * zAB;
    const double C9046 = ae * C8990;
    const double C9050 = 2. * C9048;
    const double C9049 = C9046 * C9047;
    const double C9052 = C9050 / C9000;
    const double C9051 = 2 * C9049;
    const double C9053 = C9051 / C8993;
    const double C9054 = C9053 + C9052;
    const double C9078 = be * yAB;
    const double C9077 = ae * C9375;
    const double C9076 = C8991 * C8996;
    const double C9080 = 2. * C9077;
    const double C9079 = 2 * C9076;
    const double C9082 = C9080 / C9000;
    const double C9081 = C9079 / C8993;
    const double C9083 = C9081 + C9082;
    const double C9096 = 4. * C9031;
    const double C9095 = ae * C9074;
    const double C9094 = C9031 * C9078;
    const double C9093 = be * C9266;
    const double C9092 = be * C8989;
    const double C9091 = 2 * C9031;
    const double C9101 = C9096 / C9000;
    const double C9100 = 2 * C9095;
    const double C9099 = 2 * C9094;
    const double C9098 = 2 * C9093;
    const double C9097 = 2 * C9092;
    const double C9104 = C9099 / C8993;
    const double C9103 = -C9098;
    const double C9102 = C9091 - C9097;
    const double C9106 = C9103 / C9000;
    const double C9105 = C9102 / C9000;
    const double C9107 = C9106 - C9104;
    const double C9110 = C9107 * C9032;
    const double C9109 = 2 * C9107;
    const double C9108 = C9107 * C9078;
    const double C9113 = C9110 / C8993;
    const double C9112 = C9109 + C9100;
    const double C9111 = C9108 / C8993;
    const double C9116 = C9113 + C9101;
    const double C9115 = C9112 / C9000;
    const double C9114 = C9105 - C9111;
    const double C9117 = C9114 * C9032;
    const double C9118 = C9117 / C8993;
    const double C9119 = C9118 + C9115;
    const double C9140 = be * zAB;
    const double C9155 = 4. * C9046;
    const double C9154 = ae * C9139;
    const double C9153 = C9046 * C9140;
    const double C9152 = be * C9266;
    const double C9151 = be * C8990;
    const double C9150 = 2 * C9046;
    const double C9160 = C9155 / C9000;
    const double C9159 = 2 * C9154;
    const double C9158 = 2 * C9153;
    const double C9157 = 2 * C9152;
    const double C9156 = 2 * C9151;
    const double C9163 = C9158 / C8993;
    const double C9162 = -C9157;
    const double C9161 = C9150 - C9156;
    const double C9165 = C9162 / C9000;
    const double C9164 = C9161 / C9000;
    const double C9166 = C9165 - C9163;
    const double C9169 = C9166 * C9047;
    const double C9168 = 2 * C9166;
    const double C9167 = C9166 * C9140;
    const double C9172 = C9169 / C8993;
    const double C9171 = C9168 + C9159;
    const double C9170 = C9167 / C8993;
    const double C9175 = C9172 + C9160;
    const double C9174 = C9171 / C9000;
    const double C9173 = C9164 - C9170;
    const double C9176 = C9173 * C9047;
    const double C9177 = C9176 / C8993;
    const double C9178 = C9177 + C9174;
    const double C9446 = ae * C9408;
    const double C9445 = ae * C9407;
    const double C9444 = ae * C9406;
    const double C9443 = ae * C9336;
    const double C9442 = C9054 + C9166;
    const double C9441 = C9175 * C9047;
    const double C9440 = ae * C9339;
    const double C9439 = 2 * C9175;
    const double C9438 = C9178 * C9047;
    const double C9437 = C9106 - C9163;
    const double C9436 = ae * C9317;
    const double C9435 = C9039 + C9107;
    const double C9434 = C9116 * C9032;
    const double C9433 = ae * C9320;
    const double C9432 = 2 * C9116;
    const double C9431 = C9119 * C9032;
    const double C9430 = ae * C9401;
    const double C9429 = 2 * C9083;
    const double C9428 = ae * C9378;
    const double C9427 = C9083 * C8996;
    const double C9426 = ae * C9400;
    const double C9425 = 2 * C9054;
    const double C9424 = ae * C9382;
    const double C9423 = C9054 * C9047;
    const double C9422 = ae * C9399;
    const double C9421 = 2 * C9039;
    const double C9420 = ae * C9380;
    const double C9419 = C9039 * C9032;
    const double C9418 = ae * C8984;
    const double C9417 = C9083 + C9012;
    const double C9416 = C9021 * C8996;
    const double C9415 = ae * C8983;
    const double C9414 = 2 * C9021;
    const double C9413 = C9024 * C8996;
    const double C9474 = 2 * C9446;
    const double C9473 = 2 * C9445;
    const double C9472 = 2 * C9444;
    const double C9471 = 2 * C9443;
    const double C9470 = C9441 / C8993;
    const double C9469 = 2 * C9440;
    const double C9468 = C9439 + C9173;
    const double C9467 = C9438 / C8993;
    const double C9466 = C9437 * C9140;
    const double C9465 = 2 * C9436;
    const double C9464 = C9434 / C8993;
    const double C9463 = 2 * C9433;
    const double C9462 = C9432 + C9114;
    const double C9461 = C9431 / C8993;
    const double C9460 = 2 * C9430;
    const double C9459 = 2 * C9428;
    const double C9458 = C9427 / C8993;
    const double C9457 = 2 * C9426;
    const double C9456 = 2 * C9424;
    const double C9455 = C9423 / C8993;
    const double C9454 = 2 * C9422;
    const double C9453 = 2 * C9420;
    const double C9452 = C9419 / C8993;
    const double C9451 = 2 * C9418;
    const double C9450 = C9416 / C8993;
    const double C9449 = 2 * C9415;
    const double C9448 = C9414 + C9019;
    const double C9447 = C9413 / C8993;
    const double C9487 = C9442 + C9471;
    const double C9486 = C9468 + C9469;
    const double C9485 = C9466 / C8993;
    const double C9484 = C9435 + C9465;
    const double C9483 = C9462 + C9463;
    const double C9482 = C9429 + C9460;
    const double C9481 = C8998 + C9459;
    const double C9480 = C9425 + C9457;
    const double C9479 = C9150 + C9456;
    const double C9478 = C9421 + C9454;
    const double C9477 = C9091 + C9453;
    const double C9476 = C9417 + C9451;
    const double C9475 = C9448 + C9449;
    const double C9500 = C9487 / C9000;
    const double C9499 = C9486 / C9000;
    const double C9498 = C9164 - C9485;
    const double C9497 = C9484 / C9000;
    const double C9496 = C9483 / C9000;
    const double C9495 = C9482 / C9000;
    const double C9494 = C9481 / C9000;
    const double C9493 = C9480 / C9000;
    const double C9492 = C9479 / C9000;
    const double C9491 = C9478 / C9000;
    const double C9490 = C9477 / C9000;
    const double C9489 = C9476 / C9000;
    const double C9488 = C9475 / C9000;
    const double C9509 = C9470 + C9500;
    const double C9508 = C9467 + C9499;
    const double C9507 = C9464 + C9497;
    const double C9506 = C9461 + C9496;
    const double C9505 = C9458 + C9494;
    const double C9504 = C9455 + C9492;
    const double C9503 = C9452 + C9490;
    const double C9502 = C9450 + C9489;
    const double C9501 = C9447 + C9488;
    const double C9518 = C9504 + C9439;
    const double C9517 = C9509 * C9047;
    const double C9516 = C9503 + C9432;
    const double C9515 = C9507 * C9032;
    const double C9514 = C9505 + C9414;
    const double C9513 = C9502 * C8996;
    const double C9512 = C9505 * C8996;
    const double C9511 = C9504 * C9047;
    const double C9510 = C9503 * C9032;
    const double C9527 = C9518 + C9474;
    const double C9526 = C9517 / C8993;
    const double C9525 = C9516 + C9473;
    const double C9524 = C9515 / C8993;
    const double C9523 = C9514 + C9472;
    const double C9522 = C9513 / C8993;
    const double C9521 = C9512 / C8993;
    const double C9520 = C9511 / C8993;
    const double C9519 = C9510 / C8993;
    const double C9533 = C9527 / C9000;
    const double C9532 = C9525 / C9000;
    const double C9531 = C9523 / C9000;
    const double C9530 = C9521 + C9495;
    const double C9529 = C9520 + C9493;
    const double C9528 = C9519 + C9491;
    const double C9536 = C9526 + C9533;
    const double C9535 = C9524 + C9532;
    const double C9534 = C9522 + C9531;
    const double gx200300 = ((C9501 * C8996) / C8993 +
                             (2 * C9502 + 2 * C9024 + 2 * ae * C8985) / C9000) *
                            std::pow(C9266, 2);
    const double gx200030 = C9019 * C9028 * C9266;
    const double gx200003 = C9019 * C9266 * C9043;
    const double gx200210 = C9501 * C9380 * C9266;
    const double gx200201 = C9501 * C9266 * C9382;
    const double gx200021 = C9019 * C9399 * C9382;
    const double gx200120 = C9024 * C9399 * C9266;
    const double gx200102 = C9024 * C9266 * C9400;
    const double gx200012 = C9019 * C9380 * C9400;
    const double gx200111 = C9024 * C9380 * C9382;
    const double gx020300 = C9530 * C9074 * C9266;
    const double gx020030 = 2 * C8991 * C9087 * C9266;
    const double gx020003 = 2 * C8991 * C9074 * C9043;
    const double gx020210 = C9505 * C9320 * C9266;
    const double gx020201 = C9505 * C9074 * C9382;
    const double gx020021 = 2 * C8991 * C9402 * C9382;
    const double gx020120 = C9083 * C9402 * C9266;
    const double gx020102 = C9083 * C9074 * C9400;
    const double gx020012 = 2 * C8991 * C9320 * C9400;
    const double gx020111 = C9083 * C9320 * C9382;
    const double gx002300 = C9530 * C9266 * C9139;
    const double gx002030 = 2 * C8991 * C9028 * C9139;
    const double gx002003 = 2 * C8991 * C9266 * C9146;
    const double gx002210 = C9505 * C9380 * C9139;
    const double gx002201 = C9505 * C9266 * C9339;
    const double gx002021 = 2 * C8991 * C9399 * C9339;
    const double gx002120 = C9083 * C9399 * C9139;
    const double gx002102 = C9083 * C9266 * C9404;
    const double gx002012 = 2 * C8991 * C9380 * C9404;
    const double gx002111 = C9083 * C9380 * C9339;
    const double gx110300 = C9534 * C8989 * C9266;
    const double gx110030 = C9012 * C9200 * C9266;
    const double gx110003 = C9012 * C8989 * C9043;
    const double gx110210 = C9502 * C9317 * C9266;
    const double gx110201 = C9502 * C8989 * C9382;
    const double gx110021 = C9012 * C9407 * C9382;
    const double gx110120 = C9021 * C9407 * C9266;
    const double gx110102 = C9021 * C8989 * C9400;
    const double gx110012 = C9012 * C9317 * C9400;
    const double gx110111 = C9021 * C9317 * C9382;
    const double gx101300 = C9534 * C9266 * C8990;
    const double gx101030 = C9012 * C9028 * C8990;
    const double gx101003 = C9012 * C9266 * C9224;
    const double gx101210 = C9502 * C9380 * C8990;
    const double gx101201 = C9502 * C9266 * C9336;
    const double gx101021 = C9012 * C9399 * C9336;
    const double gx101120 = C9021 * C9399 * C8990;
    const double gx101102 = C9021 * C9266 * C9408;
    const double gx101012 = C9012 * C9380 * C9408;
    const double gx101111 = C9021 * C9380 * C9336;
    const double gx011300 = C9530 * C8989 * C8990;
    const double gx011030 = 2 * C8991 * C9200 * C8990;
    const double gx011003 = 2 * C8991 * C8989 * C9224;
    const double gx011210 = C9505 * C9317 * C8990;
    const double gx011201 = C9505 * C8989 * C9336;
    const double gx011021 = 2 * C8991 * C9407 * C9336;
    const double gx011120 = C9083 * C9407 * C8990;
    const double gx011102 = C9083 * C8989 * C9408;
    const double gx011012 = 2 * C8991 * C9317 * C9408;
    const double gx011111 = C9083 * C9317 * C9336;
    gx[(Ai + 0) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(135. / 8.0) * gx110210 - std::sqrt(15. / 8.0) * gx110030);
    gx[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(45.) * gx110111;
    gx[(Ai + 0) * matrix_size + Bi + 2] +=
        -cc * (std::sqrt(18.) * gx110012 + std::sqrt(9. / 8.0) * gx110210 +
               std::sqrt(9. / 8.0) * gx110030);
    gx[(Ai + 0) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(3.0) * gx110003 - std::sqrt(6.75) * gx110201 -
              std::sqrt(6.75) * gx110021);
    gx[(Ai + 0) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(18.) * gx110102 - (std::sqrt(9. / 8.0) * gx110120 +
                                           std::sqrt(9. / 8.0) * gx110300));
    gx[(Ai + 0) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(22.5) * gx110201 - std::sqrt(22.5) * gx110021);
    gx[(Ai + 0) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(15. / 8.0) * gx110300 + std::sqrt(135. / 8.0) * gx110120);
    gx[(Ai + 1) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(135. / 8.0) * gx011210 - std::sqrt(15. / 8.0) * gx011030);
    gx[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(45.) * gx011111;
    gx[(Ai + 1) * matrix_size + Bi + 2] +=
        -cc * (std::sqrt(18.) * gx011012 + std::sqrt(9. / 8.0) * gx011210 +
               std::sqrt(9. / 8.0) * gx011030);
    gx[(Ai + 1) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(3.0) * gx011003 - std::sqrt(6.75) * gx011201 -
              std::sqrt(6.75) * gx011021);
    gx[(Ai + 1) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(18.) * gx011102 - (std::sqrt(9. / 8.0) * gx011120 +
                                           std::sqrt(9. / 8.0) * gx011300));
    gx[(Ai + 1) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(22.5) * gx011201 - std::sqrt(22.5) * gx011021);
    gx[(Ai + 1) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(15. / 8.0) * gx011300 + std::sqrt(135. / 8.0) * gx011120);
    gx[(Ai + 2) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(1.25 / 8.0) * gx200030 - std::sqrt(11.25 / 8.0) * gx200210 +
         std::sqrt(1.25 / 8.0) * gx020030 - std::sqrt(11.25 / 8.0) * gx020210 -
         std::sqrt(5.0 / 8.0) * gx002030 + std::sqrt(45. / 8.0) * gx002210);
    gx[(Ai + 2) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(15.0) * gx002111 -
              (std::sqrt(3.75) * gx020111 + std::sqrt(3.75) * gx200111));
    gx[(Ai + 2) * matrix_size + Bi + 2] +=
        cc *
        (std::sqrt(0.75 / 8.0) * gx200030 + std::sqrt(0.75 / 8.0) * gx200210 +
         std::sqrt(1.5) * gx200012 + std::sqrt(0.75 / 8.0) * gx020030 +
         std::sqrt(0.75 / 8.0) * gx020210 + std::sqrt(1.5) * gx020012 -
         std::sqrt(3.0 / 8.0) * gx002030 - std::sqrt(3.0 / 8.0) * gx002210 -
         std::sqrt(6.0) * gx002012);
    gx[(Ai + 2) * matrix_size + Bi + 3] +=
        cc * (-0.5 * gx200003 + 0.75 * gx200201 + 0.75 * gx200021 -
              0.5 * gx020003 + 0.75 * gx020201 + 0.75 * gx020021 + gx002003 -
              1.5 * gx002201 - 1.5 * gx002021);
    gx[(Ai + 2) * matrix_size + Bi + 4] +=
        cc *
        (std::sqrt(0.75 / 8.0) * gx200300 + std::sqrt(0.75 / 8.0) * gx200120 -
         std::sqrt(1.5) * gx200102 + std::sqrt(0.75 / 8.0) * gx020300 +
         std::sqrt(0.75 / 8.0) * gx020120 - std::sqrt(1.5) * gx020102 -
         std::sqrt(3.0 / 8.0) * gx002300 - std::sqrt(3.0 / 8.0) * gx002120 +
         std::sqrt(6.0) * gx002102);
    gx[(Ai + 2) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(1.875) * gx200021 - std::sqrt(1.875) * gx200201 -
              std::sqrt(1.875) * gx020201 + std::sqrt(1.875) * gx020021 +
              std::sqrt(7.5) * gx002201 - std::sqrt(7.5) * gx002021);
    gx[(Ai + 2) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gx002300 -
         (std::sqrt(11.25 / 8.0) * gx020120 + std::sqrt(1.25 / 8.0) * gx020300 +
          std::sqrt(11.25 / 8.0) * gx200120 +
          std::sqrt(1.25 / 8.0) * gx200300) +
         std::sqrt(45.0 / 8.0) * gx002120);
    gx[(Ai + 3) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(135. / 8.0) * gx101210 - std::sqrt(15. / 8.0) * gx101030);
    gx[(Ai + 3) * matrix_size + Bi + 1] += cc * std::sqrt(45.) * gx101111;
    gx[(Ai + 3) * matrix_size + Bi + 2] +=
        -cc * (std::sqrt(18.) * gx101012 + std::sqrt(9. / 8.0) * gx101210 +
               std::sqrt(9. / 8.0) * gx101030);
    gx[(Ai + 3) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(3.0) * gx101003 - std::sqrt(6.75) * gx101201 -
              std::sqrt(6.75) * gx101021);
    gx[(Ai + 3) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(18.) * gx101102 - (std::sqrt(9. / 8.0) * gx101120 +
                                           std::sqrt(9. / 8.0) * gx101300));
    gx[(Ai + 3) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(22.5) * gx101201 - std::sqrt(22.5) * gx101021);
    gx[(Ai + 3) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(15. / 8.0) * gx101300 + std::sqrt(135. / 8.0) * gx101120);
    gx[(Ai + 4) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(33.75 / 8.0) * gx200210 - std::sqrt(3.75 / 8.0) * gx200030 +
         std::sqrt(3.75 / 8.0) * gx020030 - std::sqrt(33.75 / 8.0) * gx020210);
    gx[(Ai + 4) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(11.25) * gx200111 - std::sqrt(11.25) * gx020111);
    gx[(Ai + 4) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(2.25 / 8.0) * gx020030 -
              (std::sqrt(4.5) * gx200012 + std::sqrt(2.25 / 8.0) * gx200210 +
               std::sqrt(2.25 / 8.0) * gx200030) +
              std::sqrt(2.25 / 8.0) * gx020210 + std::sqrt(4.5) * gx020012);
    gx[(Ai + 4) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(0.75) * gx200003 - std::sqrt(1.6875) * gx200201 -
              std::sqrt(1.6875) * gx200021 - std::sqrt(0.75) * gx020003 +
              std::sqrt(1.6875) * gx020201 + std::sqrt(1.6875) * gx020021);
    gx[(Ai + 4) * matrix_size + Bi + 4] +=
        cc *
        (std::sqrt(4.5) * gx200102 -
         (std::sqrt(2.25 / 8.0) * gx200120 + std::sqrt(2.25 / 8.0) * gx200300) +
         std::sqrt(2.25 / 8.0) * gx020300 + std::sqrt(2.25 / 8.0) * gx020120 -
         std::sqrt(4.5) * gx020102);
    gx[(Ai + 4) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(5.625) * gx200201 - std::sqrt(5.625) * gx200021 -
              std::sqrt(5.625) * gx020201 + std::sqrt(5.625) * gx020021);
    gx[(Ai + 4) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(3.75 / 8.0) * gx200300 + std::sqrt(33.75 / 8.0) * gx200120 -
         std::sqrt(3.75 / 8.0) * gx020300 - std::sqrt(33.75 / 8.0) * gx020120);
    const double gy200300 = C8988 * C9091 * C9266;
    const double gy200030 = C8982 * C9528 * C9266;
    const double gy200003 = C8982 * C9091 * C9043;
    const double gy200210 = C8985 * C9039 * C9266;
    const double gy200201 = C8985 * C9091 * C9382;
    const double gy200021 = C8982 * C9503 * C9382;
    const double gy200120 = C8983 * C9503 * C9266;
    const double gy200102 = C8983 * C9091 * C9400;
    const double gy200012 = C8982 * C9039 * C9400;
    const double gy200111 = C8983 * C9039 * C9382;
    const double gy020300 = C9075 * C9114 * C9266;
    const double gy020030 = C9375 *
                            ((C9506 * C9032) / C8993 +
                             (2 * C9507 + 2 * C9119 + 2 * ae * C9402) / C9000) *
                            C9266;
    const double gy020003 = C9375 * C9114 * C9043;
    const double gy020210 = C9401 * C9119 * C9266;
    const double gy020201 = C9401 * C9114 * C9382;
    const double gy020021 = C9375 * C9506 * C9382;
    const double gy020120 = C9378 * C9506 * C9266;
    const double gy020102 = C9378 * C9114 * C9400;
    const double gy020012 = C9375 * C9119 * C9400;
    const double gy020111 = C9378 * C9119 * C9382;
    const double gy002300 = C9075 * C9091 * C9139;
    const double gy002030 = C9375 * C9528 * C9139;
    const double gy002003 = C9375 * C9091 * C9146;
    const double gy002210 = C9401 * C9039 * C9139;
    const double gy002201 = C9401 * C9091 * C9339;
    const double gy002021 = C9375 * C9503 * C9339;
    const double gy002120 = C9378 * C9503 * C9139;
    const double gy002102 = C9378 * C9091 * C9404;
    const double gy002012 = C9375 * C9039 * C9404;
    const double gy002111 = C9378 * C9039 * C9339;
    const double gy110300 = C9197 * C9107 * C9266;
    const double gy110030 = C8980 * C9535 * C9266;
    const double gy110003 = C8980 * C9107 * C9043;
    const double gy110210 = C9406 * C9116 * C9266;
    const double gy110201 = C9406 * C9107 * C9382;
    const double gy110021 = C8980 * C9507 * C9382;
    const double gy110120 = C8984 * C9507 * C9266;
    const double gy110102 = C8984 * C9107 * C9400;
    const double gy110012 = C8980 * C9116 * C9400;
    const double gy110111 = C8984 * C9116 * C9382;
    const double gy101300 = C9197 * C9091 * C8990;
    const double gy101030 = C8980 * C9528 * C8990;
    const double gy101003 = C8980 * C9091 * C9224;
    const double gy101210 = C9406 * C9039 * C8990;
    const double gy101201 = C9406 * C9091 * C9336;
    const double gy101021 = C8980 * C9503 * C9336;
    const double gy101120 = C8984 * C9503 * C8990;
    const double gy101102 = C8984 * C9091 * C9408;
    const double gy101012 = C8980 * C9039 * C9408;
    const double gy101111 = C8984 * C9039 * C9336;
    const double gy011300 = C9075 * C9107 * C8990;
    const double gy011030 = C9375 * C9535 * C8990;
    const double gy011003 = C9375 * C9107 * C9224;
    const double gy011210 = C9401 * C9116 * C8990;
    const double gy011201 = C9401 * C9107 * C9336;
    const double gy011021 = C9375 * C9507 * C9336;
    const double gy011120 = C9378 * C9507 * C8990;
    const double gy011102 = C9378 * C9107 * C9408;
    const double gy011012 = C9375 * C9116 * C9408;
    const double gy011111 = C9378 * C9116 * C9336;
    gy[(Ai + 0) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(135. / 8.0) * gy110210 - std::sqrt(15. / 8.0) * gy110030);
    gy[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(45.) * gy110111;
    gy[(Ai + 0) * matrix_size + Bi + 2] +=
        -cc * (std::sqrt(18.) * gy110012 + std::sqrt(9. / 8.0) * gy110210 +
               std::sqrt(9. / 8.0) * gy110030);
    gy[(Ai + 0) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(3.0) * gy110003 - std::sqrt(6.75) * gy110201 -
              std::sqrt(6.75) * gy110021);
    gy[(Ai + 0) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(18.) * gy110102 - (std::sqrt(9. / 8.0) * gy110120 +
                                           std::sqrt(9. / 8.0) * gy110300));
    gy[(Ai + 0) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(22.5) * gy110201 - std::sqrt(22.5) * gy110021);
    gy[(Ai + 0) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(15. / 8.0) * gy110300 + std::sqrt(135. / 8.0) * gy110120);
    gy[(Ai + 1) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(135. / 8.0) * gy011210 - std::sqrt(15. / 8.0) * gy011030);
    gy[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(45.) * gy011111;
    gy[(Ai + 1) * matrix_size + Bi + 2] +=
        -cc * (std::sqrt(18.) * gy011012 + std::sqrt(9. / 8.0) * gy011210 +
               std::sqrt(9. / 8.0) * gy011030);
    gy[(Ai + 1) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(3.0) * gy011003 - std::sqrt(6.75) * gy011201 -
              std::sqrt(6.75) * gy011021);
    gy[(Ai + 1) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(18.) * gy011102 - (std::sqrt(9. / 8.0) * gy011120 +
                                           std::sqrt(9. / 8.0) * gy011300));
    gy[(Ai + 1) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(22.5) * gy011201 - std::sqrt(22.5) * gy011021);
    gy[(Ai + 1) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(15. / 8.0) * gy011300 + std::sqrt(135. / 8.0) * gy011120);
    gy[(Ai + 2) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(1.25 / 8.0) * gy200030 - std::sqrt(11.25 / 8.0) * gy200210 +
         std::sqrt(1.25 / 8.0) * gy020030 - std::sqrt(11.25 / 8.0) * gy020210 -
         std::sqrt(5.0 / 8.0) * gy002030 + std::sqrt(45. / 8.0) * gy002210);
    gy[(Ai + 2) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(15.0) * gy002111 -
              (std::sqrt(3.75) * gy020111 + std::sqrt(3.75) * gy200111));
    gy[(Ai + 2) * matrix_size + Bi + 2] +=
        cc *
        (std::sqrt(0.75 / 8.0) * gy200030 + std::sqrt(0.75 / 8.0) * gy200210 +
         std::sqrt(1.5) * gy200012 + std::sqrt(0.75 / 8.0) * gy020030 +
         std::sqrt(0.75 / 8.0) * gy020210 + std::sqrt(1.5) * gy020012 -
         std::sqrt(3.0 / 8.0) * gy002030 - std::sqrt(3.0 / 8.0) * gy002210 -
         std::sqrt(6.0) * gy002012);
    gy[(Ai + 2) * matrix_size + Bi + 3] +=
        cc * (-0.5 * gy200003 + 0.75 * gy200201 + 0.75 * gy200021 -
              0.5 * gy020003 + 0.75 * gy020201 + 0.75 * gy020021 + gy002003 -
              1.5 * gy002201 - 1.5 * gy002021);
    gy[(Ai + 2) * matrix_size + Bi + 4] +=
        cc *
        (std::sqrt(0.75 / 8.0) * gy200300 + std::sqrt(0.75 / 8.0) * gy200120 -
         std::sqrt(1.5) * gy200102 + std::sqrt(0.75 / 8.0) * gy020300 +
         std::sqrt(0.75 / 8.0) * gy020120 - std::sqrt(1.5) * gy020102 -
         std::sqrt(3.0 / 8.0) * gy002300 - std::sqrt(3.0 / 8.0) * gy002120 +
         std::sqrt(6.0) * gy002102);
    gy[(Ai + 2) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(1.875) * gy200021 - std::sqrt(1.875) * gy200201 -
              std::sqrt(1.875) * gy020201 + std::sqrt(1.875) * gy020021 +
              std::sqrt(7.5) * gy002201 - std::sqrt(7.5) * gy002021);
    gy[(Ai + 2) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gy002300 -
         (std::sqrt(11.25 / 8.0) * gy020120 + std::sqrt(1.25 / 8.0) * gy020300 +
          std::sqrt(11.25 / 8.0) * gy200120 +
          std::sqrt(1.25 / 8.0) * gy200300) +
         std::sqrt(45.0 / 8.0) * gy002120);
    gy[(Ai + 3) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(135. / 8.0) * gy101210 - std::sqrt(15. / 8.0) * gy101030);
    gy[(Ai + 3) * matrix_size + Bi + 1] += cc * std::sqrt(45.) * gy101111;
    gy[(Ai + 3) * matrix_size + Bi + 2] +=
        -cc * (std::sqrt(18.) * gy101012 + std::sqrt(9. / 8.0) * gy101210 +
               std::sqrt(9. / 8.0) * gy101030);
    gy[(Ai + 3) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(3.0) * gy101003 - std::sqrt(6.75) * gy101201 -
              std::sqrt(6.75) * gy101021);
    gy[(Ai + 3) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(18.) * gy101102 - (std::sqrt(9. / 8.0) * gy101120 +
                                           std::sqrt(9. / 8.0) * gy101300));
    gy[(Ai + 3) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(22.5) * gy101201 - std::sqrt(22.5) * gy101021);
    gy[(Ai + 3) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(15. / 8.0) * gy101300 + std::sqrt(135. / 8.0) * gy101120);
    gy[(Ai + 4) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(33.75 / 8.0) * gy200210 - std::sqrt(3.75 / 8.0) * gy200030 +
         std::sqrt(3.75 / 8.0) * gy020030 - std::sqrt(33.75 / 8.0) * gy020210);
    gy[(Ai + 4) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(11.25) * gy200111 - std::sqrt(11.25) * gy020111);
    gy[(Ai + 4) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(2.25 / 8.0) * gy020030 -
              (std::sqrt(4.5) * gy200012 + std::sqrt(2.25 / 8.0) * gy200210 +
               std::sqrt(2.25 / 8.0) * gy200030) +
              std::sqrt(2.25 / 8.0) * gy020210 + std::sqrt(4.5) * gy020012);
    gy[(Ai + 4) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(0.75) * gy200003 - std::sqrt(1.6875) * gy200201 -
              std::sqrt(1.6875) * gy200021 - std::sqrt(0.75) * gy020003 +
              std::sqrt(1.6875) * gy020201 + std::sqrt(1.6875) * gy020021);
    gy[(Ai + 4) * matrix_size + Bi + 4] +=
        cc *
        (std::sqrt(4.5) * gy200102 -
         (std::sqrt(2.25 / 8.0) * gy200120 + std::sqrt(2.25 / 8.0) * gy200300) +
         std::sqrt(2.25 / 8.0) * gy020300 + std::sqrt(2.25 / 8.0) * gy020120 -
         std::sqrt(4.5) * gy020102);
    gy[(Ai + 4) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(5.625) * gy200201 - std::sqrt(5.625) * gy200021 -
              std::sqrt(5.625) * gy020201 + std::sqrt(5.625) * gy020021);
    gy[(Ai + 4) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(3.75 / 8.0) * gy200300 + std::sqrt(33.75 / 8.0) * gy200120 -
         std::sqrt(3.75 / 8.0) * gy020300 - std::sqrt(33.75 / 8.0) * gy020120);
    const double gz200300 = C8988 * C9266 * C9150;
    const double gz200030 = C8982 * C9028 * C9150;
    const double gz200003 = C8982 * C9266 * C9529;
    const double gz200210 = C8985 * C9380 * C9150;
    const double gz200201 = C8985 * C9266 * C9054;
    const double gz200021 = C8982 * C9399 * C9054;
    const double gz200120 = C8983 * C9399 * C9150;
    const double gz200102 = C8983 * C9266 * C9504;
    const double gz200012 = C8982 * C9380 * C9504;
    const double gz200111 = C8983 * C9380 * C9054;
    const double gz020300 = C9075 * C9074 * C9150;
    const double gz020030 = C9375 * C9087 * C9150;
    const double gz020003 = C9375 * C9074 * C9529;
    const double gz020210 = C9401 * C9320 * C9150;
    const double gz020201 = C9401 * C9074 * C9054;
    const double gz020021 = C9375 * C9402 * C9054;
    const double gz020120 = C9378 * C9402 * C9150;
    const double gz020102 = C9378 * C9074 * C9504;
    const double gz020012 = C9375 * C9320 * C9504;
    const double gz020111 = C9378 * C9320 * C9054;
    const double gz002300 = C9075 * C9266 * C9498;
    const double gz002030 = C9375 * C9028 * C9498;
    const double gz002003 = C9375 * C9266 *
                            ((C9508 * C9047) / C8993 +
                             (2 * C9509 + 2 * C9178 + 2 * ae * C9404) / C9000);
    const double gz002210 = C9401 * C9380 * C9173;
    const double gz002201 = C9401 * C9266 * C9178;
    const double gz002021 = C9375 * C9399 * C9178;
    const double gz002120 = C9378 * C9399 * C9173;
    const double gz002102 = C9378 * C9266 * C9508;
    const double gz002012 = C9375 * C9380 * C9508;
    const double gz002111 = C9378 * C9380 * C9178;
    const double gz110300 = C9197 * C8989 * C9150;
    const double gz110030 = C8980 * C9200 * C9150;
    const double gz110003 = C8980 * C8989 * C9529;
    const double gz110210 = C9406 * C9317 * C9150;
    const double gz110201 = C9406 * C8989 * C9054;
    const double gz110021 = C8980 * C9407 * C9054;
    const double gz110120 = C8984 * C9407 * C9150;
    const double gz110102 = C8984 * C8989 * C9504;
    const double gz110012 = C8980 * C9317 * C9504;
    const double gz110111 = C8984 * C9317 * C9054;
    const double gz101300 = C9197 * C9266 * C9166;
    const double gz101030 = C8980 * C9028 * C9166;
    const double gz101003 = C8980 * C9266 * C9536;
    const double gz101210 = C9406 * C9380 * C9166;
    const double gz101201 = C9406 * C9266 * C9175;
    const double gz101021 = C8980 * C9399 * C9175;
    const double gz101120 = C8984 * C9399 * C9166;
    const double gz101102 = C8984 * C9266 * C9509;
    const double gz101012 = C8980 * C9380 * C9509;
    const double gz101111 = C8984 * C9380 * C9175;
    const double gz011300 = C9075 * C8989 * C9166;
    const double gz011030 = C9375 * C9200 * C9166;
    const double gz011003 = C9375 * C8989 * C9536;
    const double gz011210 = C9401 * C9317 * C9166;
    const double gz011201 = C9401 * C8989 * C9175;
    const double gz011021 = C9375 * C9407 * C9175;
    const double gz011120 = C9378 * C9407 * C9166;
    const double gz011102 = C9378 * C8989 * C9509;
    const double gz011012 = C9375 * C9317 * C9509;
    const double gz011111 = C9378 * C9317 * C9175;
    gz[(Ai + 0) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(135. / 8.0) * gz110210 - std::sqrt(15. / 8.0) * gz110030);
    gz[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(45.) * gz110111;
    gz[(Ai + 0) * matrix_size + Bi + 2] +=
        -cc * (std::sqrt(18.) * gz110012 + std::sqrt(9. / 8.0) * gz110210 +
               std::sqrt(9. / 8.0) * gz110030);
    gz[(Ai + 0) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(3.0) * gz110003 - std::sqrt(6.75) * gz110201 -
              std::sqrt(6.75) * gz110021);
    gz[(Ai + 0) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(18.) * gz110102 - (std::sqrt(9. / 8.0) * gz110120 +
                                           std::sqrt(9. / 8.0) * gz110300));
    gz[(Ai + 0) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(22.5) * gz110201 - std::sqrt(22.5) * gz110021);
    gz[(Ai + 0) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(15. / 8.0) * gz110300 + std::sqrt(135. / 8.0) * gz110120);
    gz[(Ai + 1) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(135. / 8.0) * gz011210 - std::sqrt(15. / 8.0) * gz011030);
    gz[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(45.) * gz011111;
    gz[(Ai + 1) * matrix_size + Bi + 2] +=
        -cc * (std::sqrt(18.) * gz011012 + std::sqrt(9. / 8.0) * gz011210 +
               std::sqrt(9. / 8.0) * gz011030);
    gz[(Ai + 1) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(3.0) * gz011003 - std::sqrt(6.75) * gz011201 -
              std::sqrt(6.75) * gz011021);
    gz[(Ai + 1) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(18.) * gz011102 - (std::sqrt(9. / 8.0) * gz011120 +
                                           std::sqrt(9. / 8.0) * gz011300));
    gz[(Ai + 1) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(22.5) * gz011201 - std::sqrt(22.5) * gz011021);
    gz[(Ai + 1) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(15. / 8.0) * gz011300 + std::sqrt(135. / 8.0) * gz011120);
    gz[(Ai + 2) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(1.25 / 8.0) * gz200030 - std::sqrt(11.25 / 8.0) * gz200210 +
         std::sqrt(1.25 / 8.0) * gz020030 - std::sqrt(11.25 / 8.0) * gz020210 -
         std::sqrt(5.0 / 8.0) * gz002030 + std::sqrt(45. / 8.0) * gz002210);
    gz[(Ai + 2) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(15.0) * gz002111 -
              (std::sqrt(3.75) * gz020111 + std::sqrt(3.75) * gz200111));
    gz[(Ai + 2) * matrix_size + Bi + 2] +=
        cc *
        (std::sqrt(0.75 / 8.0) * gz200030 + std::sqrt(0.75 / 8.0) * gz200210 +
         std::sqrt(1.5) * gz200012 + std::sqrt(0.75 / 8.0) * gz020030 +
         std::sqrt(0.75 / 8.0) * gz020210 + std::sqrt(1.5) * gz020012 -
         std::sqrt(3.0 / 8.0) * gz002030 - std::sqrt(3.0 / 8.0) * gz002210 -
         std::sqrt(6.0) * gz002012);
    gz[(Ai + 2) * matrix_size + Bi + 3] +=
        cc * (-0.5 * gz200003 + 0.75 * gz200201 + 0.75 * gz200021 -
              0.5 * gz020003 + 0.75 * gz020201 + 0.75 * gz020021 + gz002003 -
              1.5 * gz002201 - 1.5 * gz002021);
    gz[(Ai + 2) * matrix_size + Bi + 4] +=
        cc *
        (std::sqrt(0.75 / 8.0) * gz200300 + std::sqrt(0.75 / 8.0) * gz200120 -
         std::sqrt(1.5) * gz200102 + std::sqrt(0.75 / 8.0) * gz020300 +
         std::sqrt(0.75 / 8.0) * gz020120 - std::sqrt(1.5) * gz020102 -
         std::sqrt(3.0 / 8.0) * gz002300 - std::sqrt(3.0 / 8.0) * gz002120 +
         std::sqrt(6.0) * gz002102);
    gz[(Ai + 2) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(1.875) * gz200021 - std::sqrt(1.875) * gz200201 -
              std::sqrt(1.875) * gz020201 + std::sqrt(1.875) * gz020021 +
              std::sqrt(7.5) * gz002201 - std::sqrt(7.5) * gz002021);
    gz[(Ai + 2) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gz002300 -
         (std::sqrt(11.25 / 8.0) * gz020120 + std::sqrt(1.25 / 8.0) * gz020300 +
          std::sqrt(11.25 / 8.0) * gz200120 +
          std::sqrt(1.25 / 8.0) * gz200300) +
         std::sqrt(45.0 / 8.0) * gz002120);
    gz[(Ai + 3) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(135. / 8.0) * gz101210 - std::sqrt(15. / 8.0) * gz101030);
    gz[(Ai + 3) * matrix_size + Bi + 1] += cc * std::sqrt(45.) * gz101111;
    gz[(Ai + 3) * matrix_size + Bi + 2] +=
        -cc * (std::sqrt(18.) * gz101012 + std::sqrt(9. / 8.0) * gz101210 +
               std::sqrt(9. / 8.0) * gz101030);
    gz[(Ai + 3) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(3.0) * gz101003 - std::sqrt(6.75) * gz101201 -
              std::sqrt(6.75) * gz101021);
    gz[(Ai + 3) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(18.) * gz101102 - (std::sqrt(9. / 8.0) * gz101120 +
                                           std::sqrt(9. / 8.0) * gz101300));
    gz[(Ai + 3) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(22.5) * gz101201 - std::sqrt(22.5) * gz101021);
    gz[(Ai + 3) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(15. / 8.0) * gz101300 + std::sqrt(135. / 8.0) * gz101120);
    gz[(Ai + 4) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(33.75 / 8.0) * gz200210 - std::sqrt(3.75 / 8.0) * gz200030 +
         std::sqrt(3.75 / 8.0) * gz020030 - std::sqrt(33.75 / 8.0) * gz020210);
    gz[(Ai + 4) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(11.25) * gz200111 - std::sqrt(11.25) * gz020111);
    gz[(Ai + 4) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(2.25 / 8.0) * gz020030 -
              (std::sqrt(4.5) * gz200012 + std::sqrt(2.25 / 8.0) * gz200210 +
               std::sqrt(2.25 / 8.0) * gz200030) +
              std::sqrt(2.25 / 8.0) * gz020210 + std::sqrt(4.5) * gz020012);
    gz[(Ai + 4) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(0.75) * gz200003 - std::sqrt(1.6875) * gz200201 -
              std::sqrt(1.6875) * gz200021 - std::sqrt(0.75) * gz020003 +
              std::sqrt(1.6875) * gz020201 + std::sqrt(1.6875) * gz020021);
    gz[(Ai + 4) * matrix_size + Bi + 4] +=
        cc *
        (std::sqrt(4.5) * gz200102 -
         (std::sqrt(2.25 / 8.0) * gz200120 + std::sqrt(2.25 / 8.0) * gz200300) +
         std::sqrt(2.25 / 8.0) * gz020300 + std::sqrt(2.25 / 8.0) * gz020120 -
         std::sqrt(4.5) * gz020102);
    gz[(Ai + 4) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(5.625) * gz200201 - std::sqrt(5.625) * gz200021 -
              std::sqrt(5.625) * gz020201 + std::sqrt(5.625) * gz020021);
    gz[(Ai + 4) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(3.75 / 8.0) * gz200300 + std::sqrt(33.75 / 8.0) * gz200120 -
         std::sqrt(3.75 / 8.0) * gz020300 - std::sqrt(33.75 / 8.0) * gz020120);
}

// Automatically generated, do not edit
