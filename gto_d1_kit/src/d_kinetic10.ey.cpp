/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void kinetic_gradient_22(double ae,
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
    const double C9067 = ae + be;
    const double C9070 = Pi / C9067;
    const double C9071 = std::sqrt(C9070);
    const double C9074 = std::pow(C9067, 2);
    const double C9073 = be * xAB;
    const double C9082 = C9071 * C9073;
    const double C9081 = ae * xAB;
    const double C9080 = 2. * C9067;
    const double C9079 = std::pow(C9073, 2);
    const double C9084 = C9071 / C9080;
    const double C9083 = C9071 * C9079;
    const double C9085 = C9083 / C9074;
    const double C9086 = C9085 + C9084;
    const double C9097 = ae * yAB;
    const double C9096 = be * yAB;
    const double C9099 = C9071 * C9096;
    const double C9098 = std::pow(C9096, 2);
    const double C9100 = C9071 * C9098;
    const double C9101 = C9100 / C9074;
    const double C9102 = C9101 + C9084;
    const double C9107 = ae * zAB;
    const double C9106 = be * zAB;
    const double C9109 = C9071 * C9106;
    const double C9108 = std::pow(C9106, 2);
    const double C9110 = C9071 * C9108;
    const double C9111 = C9110 / C9074;
    const double C9112 = C9111 + C9084;
    const double C9136 = C9107 * C9109;
    const double C9135 = -2. * C9109;
    const double C9134 = C9112 * C9107;
    const double C9133 = C9097 * C9099;
    const double C9132 = -2. * C9099;
    const double C9131 = C9102 * C9097;
    const double C9130 = C9071 * C9081;
    const double C9129 = ae * zAB;
    const double C9128 = ae * yAB;
    const double C9127 = be * zAB;
    const double C9126 = C9081 * C9082;
    const double C9125 = be * yAB;
    const double C9124 = 2. * C9074;
    const double C9123 = 2. * C9067;
    const double C9122 = be * xAB;
    const double C9121 = Pi / C9067;
    const double C9146 = C9136 / C9074;
    const double C9145 = C9135 / C9124;
    const double C9144 = C9134 / C9067;
    const double C9143 = C9133 / C9074;
    const double C9142 = C9132 / C9124;
    const double C9141 = C9131 / C9067;
    const double C9140 = C9130 / C9067;
    const double C9139 = C9126 / C9074;
    const double C9138 = C9071 / C9123;
    const double C9137 = std::sqrt(C9121);
    const double C9151 = C9084 - C9146;
    const double C9150 = C9144 + C9145;
    const double C9149 = C9084 - C9143;
    const double C9148 = C9141 + C9142;
    const double C9147 = C9084 - C9139;
    const double C8334 = -(C9137 * C9122) / C9067;
    const double C8336 =
        (C9071 * std::pow(C9122, 2)) / std::pow(C9067, 2) + C9138;
    const double C8337 =
        (((C9071 * std::pow(C9073, 2)) / C9074 + C9138) * ae * xAB) / C9067 +
        (-2. * C9071 * C9073) / C9124;
    const double C8340 = -(C9071 * C9125) / C9067;
    const double C8341 =
        (((C9086 * C9081) / C9067 + (-2. * C9082) / C9124) * C9081) / C9067 +
        (2 * C9147 + C9086) / C9080;
    const double C8342 = -(C9071 * C9127) / C9067;
    const double C8519 = (C9071 * std::pow(C9128, 2)) / C9074 + C9084;
    const double C8520 = (C9071 * C9128) / C9067;
    const double C8579 = (C9071 * std::pow(C9129, 2)) / C9074 + C9084;
    const double C8580 = (C9071 * C9129) / C9067;
    const double C8646 = (C9071 * std::pow(C9125, 2)) / C9074 + C9084;
    const double C8647 = (C9071 * std::pow(C9081, 2)) / C9074 + C9084;
    const double C8714 = (C9148 * C9097) / C9067 + (2 * C9149 + C9102) / C9080;
    const double C8813 = (C9071 * std::pow(C9127, 2)) / C9074 + C9084;
    const double C8847 = (C9150 * C9107) / C9067 + (2 * C9151 + C9112) / C9080;
    const double C8945 =
        (C9147 * C9081) / C9067 + (C9140 - C9082 / C9067) / C9080;
    const double C8975 = (C9149 * C9097) / C9067 +
                         ((C9071 * C9097) / C9067 - C9099 / C9067) / C9080;
    const double C9018 = (C9151 * C9107) / C9067 +
                         ((C9071 * C9107) / C9067 - C9109 / C9067) / C9080;
    const double C8355 = ae * C8342;
    const double C8354 = ae * C8340;
    const double C8353 = be * zAB;
    const double C8352 = be * yAB;
    const double C8351 = std::pow(ae, 2);
    const double C8350 = ae * C8337;
    const double C8349 = ae * C8336;
    const double C8348 = ae * xAB;
    const double C8347 = be * xAB;
    const double C8346 = be * C9137;
    const double C8345 = ae + be;
    const double C8344 = be * C8334;
    const double C8343 = ae * C8334;
    const double C8371 = 2 * C8355;
    const double C8370 = 2 * C8354;
    const double C8369 = std::pow(C8347, 2);
    const double C8368 = std::pow(C8345, 2);
    const double C8367 = C8347 / C8345;
    const double C8366 = C8353 / C8345;
    const double C8365 = Pi / C8345;
    const double C8364 = C8352 / C8345;
    const double C8363 = 2 * C8350;
    const double C8362 = 4. * C8343;
    const double C8361 = 2 * C8349;
    const double C8360 = C8343 * C8347;
    const double C8359 = 2 * C8346;
    const double C8358 = 2. * C8345;
    const double C8357 = 2 * C8344;
    const double C8356 = 2 * C8343;
    const double C8382 = 2. * C8368;
    const double C8381 = std::pow(C8367, 2);
    const double C8380 = std::pow(C8366, 2);
    const double C8379 = be * C8356;
    const double C8378 = std::sqrt(C8365);
    const double C8377 = 1 / C8358;
    const double C8376 = std::pow(C8364, 2);
    const double C8375 = C8362 / C8358;
    const double C8374 = 2 * C8360;
    const double C8373 = -C8359;
    const double C8372 = C8356 - C8357;
    const double C8392 = C8378 / C8358;
    const double C8391 = C8378 * C8369;
    const double C8390 = C8378 * C8347;
    const double C8389 = C8381 + C8377;
    const double C8388 = C8380 + C8377;
    const double C8387 = 4 * C8379;
    const double C8386 = C8376 + C8377;
    const double C8385 = C8374 / C8345;
    const double C8384 = C8373 / C8358;
    const double C8383 = C8372 / C8358;
    const double C8401 = C8348 * C8390;
    const double C8400 = -2. * C8390;
    const double C8399 = C8391 / C8368;
    const double C8398 = ae * C8390;
    const double C8397 = C8351 * C8389;
    const double C8396 = C8351 * C8388;
    const double C8395 = -C8387;
    const double C8394 = C8351 * C8386;
    const double C8393 = C8384 - C8385;
    const double C8414 = C8401 / C8368;
    const double C8413 = C8400 / C8382;
    const double C8412 = C8399 + C8392;
    const double C8411 = -2 * C8398;
    const double C8410 = 2 * C8397;
    const double C8409 = 2 * C8396;
    const double C8408 = be * C8393;
    const double C8407 = ae * C8393;
    const double C8406 = C8395 / C8358;
    const double C8405 = 2 * C8394;
    const double C8404 = C8393 * C8348;
    const double C8403 = 2 * C8393;
    const double C8402 = C8393 * C8347;
    const double C8427 = C8392 - C8414;
    const double C8426 = C8412 * C8348;
    const double C8425 = ae * C8412;
    const double C8424 = be * C8411;
    const double C8423 = ae - C8410;
    const double C8422 = ae - C8409;
    const double C8421 = 4 * C8408;
    const double C8420 = 2 * C8407;
    const double C8419 = C8407 * C8347;
    const double C8418 = ae - C8405;
    const double C8417 = C8404 / C8345;
    const double C8416 = C8403 + C8361;
    const double C8415 = C8402 / C8345;
    const double C8441 = 2 * C8427;
    const double C8440 = be * C8427;
    const double C8439 = C8426 / C8345;
    const double C8438 = 2 * C8425;
    const double C8437 = C8424 / C8368;
    const double C8436 = C8423 * C8378;
    const double C8435 = C8422 * C8378;
    const double C8434 = C8420 - C8421;
    const double C8433 = be * C8420;
    const double C8432 = 2 * C8419;
    const double C8431 = C8418 * C8378;
    const double C8430 = C8417 + C8375;
    const double C8429 = C8416 / C8358;
    const double C8428 = C8383 - C8415;
    const double C8452 = C8441 + C8412;
    const double C8451 = C8440 * ae;
    const double C8450 = C8439 + C8413;
    const double C8449 = C8438 - C8378;
    const double C8448 = C8436 * C8347;
    const double C8447 = C8436 / C8358;
    const double C8446 = C8434 / C8358;
    const double C8445 = 6 * C8433;
    const double C8444 = C8432 / C8345;
    const double C8443 = 2 * C8430;
    const double C8442 = C8428 * C8348;
    const double C8462 = C8452 / C8358;
    const double C8461 = C8450 * C8348;
    const double C8460 = 2 * C8451;
    const double C8459 = be * C8450;
    const double C8458 = C8449 * be;
    const double C8457 = C8448 / C8345;
    const double C8456 = -C8445;
    const double C8455 = C8406 - C8444;
    const double C8454 = C8443 + C8428;
    const double C8453 = C8442 / C8345;
    const double C8473 = C8461 / C8345;
    const double C8472 = C8460 / C8345;
    const double C8471 = C8459 * ae;
    const double C8470 = C8458 / C8345;
    const double C8469 = C8437 - C8457;
    const double C8468 = C8455 * C8347;
    const double C8467 = C8456 / C8358;
    const double C8466 = be * C8455;
    const double C8465 = ae * C8455;
    const double C8464 = C8454 + C8363;
    const double C8463 = C8453 + C8429;
    const double C8483 = C8473 + C8462;
    const double C8482 = C8469 * C8348;
    const double C8481 = 2 * C8471;
    const double C8480 = C8469 * C8347;
    const double C8479 = C8468 / C8345;
    const double C8478 = C8465 * C8347;
    const double C8477 = 6 * C8466;
    const double C8476 = 2 * C8465;
    const double C8475 = C8464 / C8358;
    const double C8474 = C8463 * C8348;
    const double C8490 = be * C8483;
    const double C8489 = C8482 / C8345;
    const double C8488 = C8480 / C8345;
    const double C8487 = C8446 - C8479;
    const double C8486 = 2 * C8478;
    const double C8485 = C8476 - C8477;
    const double C8484 = C8474 / C8345;
    const double C8496 = 2 * C8490;
    const double C8495 = C8489 + C8447;
    const double C8494 = C8447 - C8488;
    const double C8493 = C8486 / C8345;
    const double C8492 = C8485 / C8358;
    const double C8491 = C8484 + C8475;
    const double C8500 = C8496 - C8412;
    const double C8499 = C8495 + C8472;
    const double C8498 = C8494 + C8470;
    const double C8497 = C8467 - C8493;
    const double C8504 = C8500 * ae;
    const double C8503 = 2 * C8499;
    const double C8502 = C8498 * C8348;
    const double C8501 = C8497 * C8347;
    const double C8508 = C8504 / C8345;
    const double C8507 = C8503 + C8498;
    const double C8506 = C8502 + C8469;
    const double C8505 = C8501 / C8345;
    const double C8511 = C8507 / C8358;
    const double C8510 = C8506 + C8481;
    const double C8509 = C8492 - C8505;
    const double C8512 = C8348 * C8510;
    const double C8513 = C8512 / C8368;
    const double C8514 = C8513 + C8511;
    const double C8515 = C8514 + C8508;
    const double C8527 = C8354 * C8352;
    const double C8526 = be * C9071;
    const double C8525 = be * C8370;
    const double C8524 = ae * C8520;
    const double C8523 = ae * C9071;
    const double C8522 = C8431 / C8358;
    const double C8521 = ae * yAB;
    const double C8536 = 2 * C8527;
    const double C8535 = 2 * C8526;
    const double C8534 = 4 * C8525;
    const double C8533 = 2 * C8524;
    const double C8532 = 2. * C8523;
    const double C8531 = C8354 * C8521;
    const double C8530 = std::pow(C8521, 2);
    const double C8529 = C8378 * C8521;
    const double C8528 = C8431 * C8521;
    const double C8545 = C8536 / C8345;
    const double C8544 = -C8535;
    const double C8543 = -C8534;
    const double C8542 = C8370 + C8533;
    const double C8541 = C8532 / C8358;
    const double C8540 = 2 * C8531;
    const double C8539 = C8378 * C8530;
    const double C8538 = be * C8529;
    const double C8537 = C8528 / C8345;
    const double C8551 = C8544 / C8358;
    const double C8550 = C8543 / C8358;
    const double C8549 = C8542 / C8358;
    const double C8548 = C8540 / C8345;
    const double C8547 = C8539 / C8368;
    const double C8546 = 2 * C8538;
    const double C8555 = C8551 - C8545;
    const double C8554 = C8548 + C8541;
    const double C8553 = C8547 + C8392;
    const double C8552 = ae * C8546;
    const double C8559 = ae * C8555;
    const double C8558 = C8554 * C8521;
    const double C8557 = be * C8553;
    const double C8556 = C8552 / C8368;
    const double C8563 = C8559 * C8352;
    const double C8562 = C8558 / C8345;
    const double C8561 = 2 * C8557;
    const double C8560 = C8537 + C8556;
    const double C8567 = 2 * C8563;
    const double C8566 = C8562 + C8549;
    const double C8565 = C8561 - C8378;
    const double C8564 = C8560 * C8521;
    const double C8570 = C8567 / C8345;
    const double C8569 = C8565 * ae;
    const double C8568 = C8564 / C8345;
    const double C8573 = C8550 - C8570;
    const double C8572 = C8569 / C8345;
    const double C8571 = C8568 + C8522;
    const double C8575 = ae * C8573;
    const double C8574 = C8571 + C8572;
    const double C8587 = C8355 * C8353;
    const double C8586 = be * C9071;
    const double C8585 = be * C8371;
    const double C8584 = ae * C8580;
    const double C8583 = ae * C9071;
    const double C8582 = C8435 / C8358;
    const double C8581 = ae * zAB;
    const double C8596 = 2 * C8587;
    const double C8595 = 2 * C8586;
    const double C8594 = 4 * C8585;
    const double C8593 = 2 * C8584;
    const double C8592 = 2. * C8583;
    const double C8591 = C8355 * C8581;
    const double C8590 = std::pow(C8581, 2);
    const double C8589 = C8378 * C8581;
    const double C8588 = C8435 * C8581;
    const double C8605 = C8596 / C8345;
    const double C8604 = -C8595;
    const double C8603 = -C8594;
    const double C8602 = C8371 + C8593;
    const double C8601 = C8592 / C8358;
    const double C8600 = 2 * C8591;
    const double C8599 = C8378 * C8590;
    const double C8598 = be * C8589;
    const double C8597 = C8588 / C8345;
    const double C8611 = C8604 / C8358;
    const double C8610 = C8603 / C8358;
    const double C8609 = C8602 / C8358;
    const double C8608 = C8600 / C8345;
    const double C8607 = C8599 / C8368;
    const double C8606 = 2 * C8598;
    const double C8615 = C8611 - C8605;
    const double C8614 = C8608 + C8601;
    const double C8613 = C8607 + C8392;
    const double C8612 = ae * C8606;
    const double C8619 = ae * C8615;
    const double C8618 = C8614 * C8581;
    const double C8617 = be * C8613;
    const double C8616 = C8612 / C8368;
    const double C8623 = C8619 * C8353;
    const double C8622 = C8618 / C8345;
    const double C8621 = 2 * C8617;
    const double C8620 = C8597 + C8616;
    const double C8627 = 2 * C8623;
    const double C8626 = C8622 + C8609;
    const double C8625 = C8621 - C8378;
    const double C8624 = C8620 * C8581;
    const double C8630 = C8627 / C8345;
    const double C8629 = C8625 * ae;
    const double C8628 = C8624 / C8345;
    const double C8633 = C8610 - C8630;
    const double C8632 = C8629 / C8345;
    const double C8631 = C8628 + C8582;
    const double C8635 = ae * C8633;
    const double C8634 = C8631 + C8632;
    const double C8658 = C8555 * C8352;
    const double C8657 = be * C8340;
    const double C8656 = std::pow(C8348, 2);
    const double C8655 = C8378 * C8348;
    const double C8654 = C8436 * C8348;
    const double C8653 = std::pow(C8352, 2);
    const double C8652 = C8431 * C8352;
    const double C8651 = C8378 * C8352;
    const double C8650 = ae * C9140;
    const double C8649 = ae * C9137;
    const double C8648 = C8343 * C8348;
    const double C8669 = C8658 / C8345;
    const double C8668 = 2 * C8657;
    const double C8667 = C8378 * C8656;
    const double C8666 = be * C8655;
    const double C8665 = C8654 / C8345;
    const double C8664 = C8378 * C8653;
    const double C8663 = C8652 / C8345;
    const double C8662 = ae * C8651;
    const double C8661 = 2 * C8650;
    const double C8660 = 2. * C8649;
    const double C8659 = 2 * C8648;
    const double C8677 = C8370 - C8668;
    const double C8676 = C8667 / C8368;
    const double C8675 = 2 * C8666;
    const double C8674 = C8664 / C8368;
    const double C8673 = -2 * C8662;
    const double C8672 = C8356 + C8661;
    const double C8671 = C8660 / C8358;
    const double C8670 = C8659 / C8345;
    const double C8684 = C8677 / C8358;
    const double C8683 = C8676 + C8392;
    const double C8682 = ae * C8675;
    const double C8681 = C8674 + C8392;
    const double C8680 = be * C8673;
    const double C8679 = C8672 / C8358;
    const double C8678 = C8670 + C8671;
    const double C8690 = C8684 - C8669;
    const double C8689 = be * C8683;
    const double C8688 = C8682 / C8368;
    const double C8687 = ae * C8681;
    const double C8686 = C8680 / C8368;
    const double C8685 = C8678 * C8348;
    const double C8695 = 2 * C8689;
    const double C8694 = C8665 + C8688;
    const double C8693 = 2 * C8687;
    const double C8692 = C8686 - C8663;
    const double C8691 = C8685 / C8345;
    const double C8700 = C8695 - C8378;
    const double C8699 = C8694 * C8348;
    const double C8698 = C8693 - C8378;
    const double C8697 = C8692 * C8352;
    const double C8696 = C8691 + C8679;
    const double C8704 = C8700 * ae;
    const double C8703 = C8699 / C8345;
    const double C8702 = C8698 * be;
    const double C8701 = C8697 / C8345;
    const double C8708 = C8704 / C8345;
    const double C8707 = C8703 + C8447;
    const double C8706 = C8702 / C8345;
    const double C8705 = C8522 - C8701;
    const double C8710 = C8707 + C8708;
    const double C8709 = C8705 + C8706;
    const double C8732 = C8573 * C8352;
    const double C8731 = be * C8555;
    const double C8730 = C8575 * C8352;
    const double C8729 = 2 * C8559;
    const double C8728 = be * C8573;
    const double C8727 = 2 * C8575;
    const double C8726 = ae * C9148;
    const double C8725 = 4. * C8354;
    const double C8724 = C8555 * C8521;
    const double C8723 = ae * C8646;
    const double C8722 = 2 * C8555;
    const double C8721 = C8690 * C8521;
    const double C8720 = C8521 * C8651;
    const double C8719 = C8692 * C8521;
    const double C8718 = -2. * C8651;
    const double C8717 = C8681 * C8521;
    const double C8716 = C8709 * C8521;
    const double C8747 = C8732 / C8345;
    const double C8746 = 4 * C8731;
    const double C8745 = 2 * C8730;
    const double C8744 = be * C8729;
    const double C8743 = 6 * C8728;
    const double C8742 = 2 * C8726;
    const double C8741 = C8725 / C8358;
    const double C8740 = C8724 / C8345;
    const double C8739 = 2 * C8723;
    const double C8738 = C8721 / C8345;
    const double C8737 = C8720 / C8368;
    const double C8736 = C8719 / C8345;
    const double C8735 = C8718 / C8382;
    const double C8734 = C8717 / C8345;
    const double C8733 = C8716 + C8692;
    const double C8756 = C8729 - C8746;
    const double C8755 = C8745 / C8345;
    const double C8754 = 6 * C8744;
    const double C8753 = C8727 - C8743;
    const double C8752 = C8740 + C8741;
    const double C8751 = C8722 + C8739;
    const double C8750 = C8392 - C8737;
    const double C8749 = C8736 + C8522;
    const double C8748 = C8734 + C8735;
    const double C8765 = C8756 / C8358;
    const double C8764 = -C8754;
    const double C8763 = C8753 / C8358;
    const double C8762 = 2 * C8752;
    const double C8761 = C8751 / C8358;
    const double C8760 = 2 * C8750;
    const double C8759 = C8748 * C8521;
    const double C8758 = be * C8750;
    const double C8757 = be * C8748;
    const double C8773 = C8765 - C8747;
    const double C8772 = C8764 / C8358;
    const double C8771 = C8762 + C8690;
    const double C8770 = C8738 + C8761;
    const double C8769 = C8760 + C8681;
    const double C8768 = C8759 / C8345;
    const double C8767 = C8758 * ae;
    const double C8766 = C8757 * ae;
    const double C8779 = C8772 - C8755;
    const double C8778 = C8771 + C8742;
    const double C8777 = C8770 * C8521;
    const double C8776 = C8769 / C8358;
    const double C8775 = 2 * C8767;
    const double C8774 = 2 * C8766;
    const double C8785 = C8779 * C8352;
    const double C8784 = C8778 / C8358;
    const double C8783 = C8777 / C8345;
    const double C8782 = C8768 + C8776;
    const double C8781 = C8775 / C8345;
    const double C8780 = C8733 + C8774;
    const double C8790 = C8785 / C8345;
    const double C8789 = C8783 + C8784;
    const double C8788 = be * C8782;
    const double C8787 = C8749 + C8781;
    const double C8786 = C8521 * C8780;
    const double C8794 = C8763 - C8790;
    const double C8793 = 2 * C8788;
    const double C8792 = 2 * C8787;
    const double C8791 = C8786 / C8368;
    const double C8796 = C8793 - C8681;
    const double C8795 = C8792 + C8709;
    const double C8798 = C8796 * ae;
    const double C8797 = C8795 / C8358;
    const double C8800 = C8798 / C8345;
    const double C8799 = C8791 + C8797;
    const double C8801 = C8799 + C8800;
    const double C8818 = C8615 * C8353;
    const double C8817 = be * C8342;
    const double C8816 = std::pow(C8353, 2);
    const double C8815 = C8435 * C8353;
    const double C8814 = C8378 * C8353;
    const double C8823 = C8818 / C8345;
    const double C8822 = 2 * C8817;
    const double C8821 = C8378 * C8816;
    const double C8820 = C8815 / C8345;
    const double C8819 = ae * C8814;
    const double C8826 = C8371 - C8822;
    const double C8825 = C8821 / C8368;
    const double C8824 = -2 * C8819;
    const double C8829 = C8826 / C8358;
    const double C8828 = C8825 + C8392;
    const double C8827 = be * C8824;
    const double C8832 = C8829 - C8823;
    const double C8831 = ae * C8828;
    const double C8830 = C8827 / C8368;
    const double C8834 = 2 * C8831;
    const double C8833 = C8830 - C8820;
    const double C8836 = C8834 - C8378;
    const double C8835 = C8833 * C8353;
    const double C8838 = C8836 * be;
    const double C8837 = C8835 / C8345;
    const double C8840 = C8838 / C8345;
    const double C8839 = C8582 - C8837;
    const double C8841 = C8839 + C8840;
    const double C8865 = C8633 * C8353;
    const double C8864 = be * C8615;
    const double C8863 = C8635 * C8353;
    const double C8862 = 2 * C8619;
    const double C8861 = be * C8633;
    const double C8860 = 2 * C8635;
    const double C8859 = ae * C9150;
    const double C8858 = 4. * C8355;
    const double C8857 = C8615 * C8581;
    const double C8856 = ae * C8813;
    const double C8855 = 2 * C8615;
    const double C8854 = C8832 * C8581;
    const double C8853 = C8581 * C8814;
    const double C8852 = C8833 * C8581;
    const double C8851 = -2. * C8814;
    const double C8850 = C8828 * C8581;
    const double C8849 = C8841 * C8581;
    const double C8880 = C8865 / C8345;
    const double C8879 = 4 * C8864;
    const double C8878 = 2 * C8863;
    const double C8877 = be * C8862;
    const double C8876 = 6 * C8861;
    const double C8875 = 2 * C8859;
    const double C8874 = C8858 / C8358;
    const double C8873 = C8857 / C8345;
    const double C8872 = 2 * C8856;
    const double C8871 = C8854 / C8345;
    const double C8870 = C8853 / C8368;
    const double C8869 = C8852 / C8345;
    const double C8868 = C8851 / C8382;
    const double C8867 = C8850 / C8345;
    const double C8866 = C8849 + C8833;
    const double C8889 = C8862 - C8879;
    const double C8888 = C8878 / C8345;
    const double C8887 = 6 * C8877;
    const double C8886 = C8860 - C8876;
    const double C8885 = C8873 + C8874;
    const double C8884 = C8855 + C8872;
    const double C8883 = C8392 - C8870;
    const double C8882 = C8869 + C8582;
    const double C8881 = C8867 + C8868;
    const double C8898 = C8889 / C8358;
    const double C8897 = -C8887;
    const double C8896 = C8886 / C8358;
    const double C8895 = 2 * C8885;
    const double C8894 = C8884 / C8358;
    const double C8893 = 2 * C8883;
    const double C8892 = C8881 * C8581;
    const double C8891 = be * C8883;
    const double C8890 = be * C8881;
    const double C8906 = C8898 - C8880;
    const double C8905 = C8897 / C8358;
    const double C8904 = C8895 + C8832;
    const double C8903 = C8871 + C8894;
    const double C8902 = C8893 + C8828;
    const double C8901 = C8892 / C8345;
    const double C8900 = C8891 * ae;
    const double C8899 = C8890 * ae;
    const double C8912 = C8905 - C8888;
    const double C8911 = C8904 + C8875;
    const double C8910 = C8903 * C8581;
    const double C8909 = C8902 / C8358;
    const double C8908 = 2 * C8900;
    const double C8907 = 2 * C8899;
    const double C8918 = C8912 * C8353;
    const double C8917 = C8911 / C8358;
    const double C8916 = C8910 / C8345;
    const double C8915 = C8901 + C8909;
    const double C8914 = C8908 / C8345;
    const double C8913 = C8866 + C8907;
    const double C8923 = C8918 / C8345;
    const double C8922 = C8916 + C8917;
    const double C8921 = be * C8915;
    const double C8920 = C8882 + C8914;
    const double C8919 = C8581 * C8913;
    const double C8927 = C8896 - C8923;
    const double C8926 = 2 * C8921;
    const double C8925 = 2 * C8920;
    const double C8924 = C8919 / C8368;
    const double C8929 = C8926 - C8828;
    const double C8928 = C8925 + C8841;
    const double C8931 = C8929 * ae;
    const double C8930 = C8928 / C8358;
    const double C8933 = C8931 / C8345;
    const double C8932 = C8924 + C8930;
    const double C8934 = C8932 + C8933;
    const double C8953 = C8390 / C8345;
    const double C8952 = C8655 / C8345;
    const double C8951 = C8427 * C8348;
    const double C8950 = C8694 + C8469;
    const double C8949 = C8499 * C8348;
    const double C8948 = ae * C9147;
    const double C8947 = C8678 + C8393;
    const double C8946 = C8430 * C8348;
    const double C8959 = C8952 - C8953;
    const double C8958 = C8951 / C8345;
    const double C8957 = C8950 / C8358;
    const double C8956 = C8949 / C8345;
    const double C8955 = 2 * C8948;
    const double C8954 = C8946 / C8345;
    const double C8962 = C8959 / C8358;
    const double C8961 = C8956 + C8957;
    const double C8960 = C8947 + C8955;
    const double C8964 = C8958 + C8962;
    const double C8963 = C8960 / C8358;
    const double C8966 = be * C8964;
    const double C8965 = C8954 + C8963;
    const double C8967 = 2 * C8966;
    const double C8968 = C8967 + C8953;
    const double C8969 = C8968 * ae;
    const double C8970 = C8969 / C8345;
    const double C8971 = C8961 + C8970;
    const double C8984 = ae * C9149;
    const double C8983 = C8554 + C8555;
    const double C8982 = C8752 * C8521;
    const double C8981 = C8651 / C8345;
    const double C8980 = C8529 / C8345;
    const double C8979 = C8750 * C8521;
    const double C8978 = C8560 + C8692;
    const double C8977 = C8787 * C8521;
    const double C8990 = 2 * C8984;
    const double C8989 = C8982 / C8345;
    const double C8988 = C8980 - C8981;
    const double C8987 = C8979 / C8345;
    const double C8986 = C8978 / C8358;
    const double C8985 = C8977 / C8345;
    const double C8993 = C8983 + C8990;
    const double C8992 = C8988 / C8358;
    const double C8991 = C8985 + C8986;
    const double C8995 = C8993 / C8358;
    const double C8994 = C8987 + C8992;
    const double C8997 = C8989 + C8995;
    const double C8996 = be * C8994;
    const double C8998 = 2 * C8996;
    const double C8999 = C8998 + C8981;
    const double C9000 = C8999 * ae;
    const double C9001 = C9000 / C8345;
    const double C9002 = C8991 + C9001;
    const double C9027 = ae * C9151;
    const double C9026 = C8614 + C8615;
    const double C9025 = C8885 * C8581;
    const double C9024 = C8814 / C8345;
    const double C9023 = C8589 / C8345;
    const double C9022 = C8883 * C8581;
    const double C9021 = C8620 + C8833;
    const double C9020 = C8920 * C8581;
    const double C9033 = 2 * C9027;
    const double C9032 = C9025 / C8345;
    const double C9031 = C9023 - C9024;
    const double C9030 = C9022 / C8345;
    const double C9029 = C9021 / C8358;
    const double C9028 = C9020 / C8345;
    const double C9036 = C9026 + C9033;
    const double C9035 = C9031 / C8358;
    const double C9034 = C9028 + C9029;
    const double C9038 = C9036 / C8358;
    const double C9037 = C9030 + C9035;
    const double C9040 = C9032 + C9038;
    const double C9039 = be * C9037;
    const double C9041 = 2 * C9039;
    const double C9042 = C9041 + C9024;
    const double C9043 = C9042 * ae;
    const double C9044 = C9043 / C8345;
    const double C9045 = C9034 + C9044;
    const double C9198 = 4 * C8619;
    const double C9197 = C8633 * C8581;
    const double C9196 = C8888 - C8905;
    const double C9195 = 4 * C8559;
    const double C9194 = C8573 * C8521;
    const double C9193 = C8493 - C8467;
    const double C9192 = C8755 - C8772;
    const double C9191 = 4 * C8407;
    const double C9190 = C8455 * C8348;
    const double C9189 = 6 * C8635;
    const double C9188 = C8912 * C8581;
    const double C9187 = ae * C8906;
    const double C9186 = 2 * C8912;
    const double C9185 = C8927 * C8581;
    const double C9184 = C8923 - C8896;
    const double C9183 = 6 * C8575;
    const double C9182 = C8779 * C8521;
    const double C9181 = ae * C8773;
    const double C9180 = 2 * C8779;
    const double C9179 = C8794 * C8521;
    const double C9178 = -2 * C8465;
    const double C9177 = C8790 - C8763;
    const double C9176 = ae * C8356;
    const double C9175 = C8407 * C8348;
    const double C9174 = ae * C8420;
    const double C9173 = C8465 * C8348;
    const double C9172 = -2 * C8635;
    const double C9171 = ae * C8371;
    const double C9170 = C8619 * C8581;
    const double C9169 = ae * C8862;
    const double C9168 = C8635 * C8581;
    const double C9167 = ae * C8370;
    const double C9166 = C8559 * C8521;
    const double C9165 = ae * C8729;
    const double C9164 = C8575 * C8521;
    const double C9163 = C8505 - C8492;
    const double C9162 = C8551 - C8605;
    const double C9161 = -2 * C8575;
    const double C9160 = 6 * C8465;
    const double C9159 = C8497 * C8348;
    const double C9158 = ae * C8487;
    const double C9157 = 2 * C8497;
    const double C9156 = C8509 * C8348;
    const double C9229 = C8862 + C9198;
    const double C9228 = C9197 / C8345;
    const double C9227 = C8729 + C9195;
    const double C9226 = C9194 / C8345;
    const double C9225 = C8420 + C9191;
    const double C9224 = C9190 / C8345;
    const double C9223 = C8860 + C9189;
    const double C9222 = C9188 / C8345;
    const double C9221 = 6 * C9187;
    const double C9220 = C9185 / C8345;
    const double C9219 = C8727 + C9183;
    const double C9218 = C9182 / C8345;
    const double C9217 = 6 * C9181;
    const double C9216 = C9179 / C8345;
    const double C9215 = 4. * C9176;
    const double C9214 = 2 * C9175;
    const double C9213 = 6. * C9174;
    const double C9212 = 2 * C9173;
    const double C9211 = 4. * C9171;
    const double C9210 = 2 * C9170;
    const double C9209 = 6. * C9169;
    const double C9208 = 2 * C9168;
    const double C9207 = 4. * C9167;
    const double C9206 = 2 * C9166;
    const double C9205 = 6. * C9165;
    const double C9204 = 2 * C9164;
    const double C9203 = ae * C9162;
    const double C9202 = C8476 + C9160;
    const double C9201 = C9159 / C8345;
    const double C9200 = 6 * C9158;
    const double C9199 = C9156 / C8345;
    const double C9251 = C9229 / C8358;
    const double C9250 = C9227 / C8358;
    const double C9249 = C9225 / C8358;
    const double C9248 = C9223 / C8358;
    const double C9247 = C9186 + C9221;
    const double C9246 = C9219 / C8358;
    const double C9245 = C9180 + C9217;
    const double C9244 = C9215 / C8358;
    const double C9243 = C9214 / C8345;
    const double C9242 = C9213 / C8358;
    const double C9241 = C9212 / C8345;
    const double C9240 = C9211 / C8358;
    const double C9239 = C9210 / C8345;
    const double C9238 = C9209 / C8358;
    const double C9237 = C9208 / C8345;
    const double C9236 = C9207 / C8358;
    const double C9235 = C9206 / C8345;
    const double C9234 = C9205 / C8358;
    const double C9233 = C9204 / C8345;
    const double C9232 = C9203 * C8353;
    const double C9231 = C9202 / C8358;
    const double C9230 = C9157 + C9200;
    const double C9267 = C9228 + C9251;
    const double C9266 = C9226 + C9250;
    const double C9265 = C9224 + C9249;
    const double C9264 = C9222 + C9248;
    const double C9263 = C9247 / C8358;
    const double C9262 = C9218 + C9246;
    const double C9261 = C9245 / C8358;
    const double C9260 = C9243 + C9244;
    const double C9259 = C9241 + C9242;
    const double C9258 = C9239 + C9240;
    const double C9257 = C9237 + C9238;
    const double C9256 = C9235 + C9236;
    const double C9255 = C9233 + C9234;
    const double C9254 = 2 * C9232;
    const double C9253 = C9201 + C9231;
    const double C9252 = C9230 / C8358;
    const double C9286 = ae * C9267;
    const double C9285 = C9257 + C8912;
    const double C9284 = C9264 * C8581;
    const double C9283 = ae * C9266;
    const double C9282 = C9255 + C8779;
    const double C9281 = C9262 * C8521;
    const double C9280 = ae * C9265;
    const double C9279 = C9259 + C8497;
    const double C9278 = C9253 * C8348;
    const double C9277 = C9220 + C9263;
    const double C9276 = C9216 + C9261;
    const double C9275 = ae * C9260;
    const double C9274 = C9259 * C8348;
    const double C9273 = ae * C9258;
    const double C9272 = C9257 * C8581;
    const double C9271 = ae * C9256;
    const double C9270 = C9255 * C8521;
    const double C9269 = C9254 / C8345;
    const double C9268 = C9199 + C9252;
    const double C9299 = 6 * C9286;
    const double C9298 = C9284 / C8345;
    const double C9297 = 6 * C9283;
    const double C9296 = C9281 / C8345;
    const double C9295 = 6 * C9280;
    const double C9294 = C9278 / C8345;
    const double C9293 = 6 * C9275;
    const double C9292 = C9274 / C8345;
    const double C9291 = 6 * C9273;
    const double C9290 = C9272 / C8345;
    const double C9289 = 6 * C9271;
    const double C9288 = C9270 / C8345;
    const double C9287 = C8610 - C9269;
    const double C9306 = C9285 + C9299;
    const double C9305 = C9282 + C9297;
    const double C9304 = C9279 + C9295;
    const double C9303 = C8476 + C9293;
    const double C9302 = C8860 + C9291;
    const double C9301 = C8727 + C9289;
    const double C9300 = ae * C9287;
    const double C9313 = C9306 / C8358;
    const double C9312 = C9305 / C8358;
    const double C9311 = C9304 / C8358;
    const double C9310 = C9303 / C8358;
    const double C9309 = C9302 / C8358;
    const double C9308 = C9301 / C8358;
    const double C9307 = -2 * C9300;
    const double C9319 = C9298 + C9313;
    const double C9318 = C9296 + C9312;
    const double C9317 = C9294 + C9311;
    const double C9316 = C9292 + C9310;
    const double C9315 = C9290 + C9309;
    const double C9314 = C9288 + C9308;
    const double gx200200 = C8491 * C8431 * C9071 -
                            (((C9268 * C8348) / C8345 +
                              (2 * C9253 + C8509 +
                               6 * ae *
                                   ((C8487 * C8348) / C8345 +
                                    (2 * C8455 + 4 * ae * C8428) / C8358)) /
                                  C8358) *
                             std::pow(C9071, 2)) /
                                2.0 +
                            C8491 * C9071 * C8435;
    const double gx200020 = (C9071 * C8519 * C9163) / 2.0 +
                            C8428 * C8574 * C9071 + C8428 * C8519 * C8435;
    const double gx200002 = (C8579 * C9071 * C9163) / 2.0 +
                            C8428 * C8431 * C8579 + C8428 * C9071 * C8634;
    const double gx200110 = C8463 * C8560 * C9071 -
                            (C9071 * C8520 * C9268) / 2.0 +
                            C8463 * C8520 * C8435;
    const double gx200101 = C8463 * C8431 * C8580 -
                            (C8580 * C9071 * C9268) / 2.0 +
                            C8463 * C9071 * C8620;
    const double gx200011 = (C8580 * C8520 * C9163) / 2.0 +
                            C8428 * C8560 * C8580 + C8428 * C8520 * C8620;
    const double gx020200 = C8696 * C8709 * C9071 -
                            (C9071 * C8646 * C9316) / 2.0 +
                            C8696 * C8646 * C8435;
    const double gx020020 = (C9071 * C8714 * C9178) / 2.0 +
                            2 * C8343 * C8801 * C9071 +
                            2 * C8343 * C8714 * C8435;
    const double gx020002 = (C8579 * C8646 * C9178) / 2.0 +
                            2 * C8343 * C8709 * C8579 +
                            2 * C8343 * C8646 * C8634;
    const double gx020110 = (C9071 * C8678 * C8780) / C8345 -
                            (C9071 * C9148 * C9259) / 2.0 +
                            C8678 * C9148 * C8435;
    const double gx020101 = C8678 * C8709 * C8580 -
                            (C8580 * C8646 * C9259) / 2.0 +
                            C8678 * C8646 * C8620;
    const double gx020011 = (C8580 * C9148 * C9178) / 2.0 +
                            (C8580 * 2 * C8343 * C8780) / C8345 +
                            2 * C8343 * C9148 * C8620;
    const double gx002200 = C8696 * C8431 * C8813 -
                            (C8813 * C9071 * C9316) / 2.0 +
                            C8696 * C9071 * C8841;
    const double gx002020 = (C8813 * C8519 * C9178) / 2.0 +
                            2 * C8343 * C8574 * C8813 +
                            2 * C8343 * C8519 * C8841;
    const double gx002002 = (C8847 * C9071 * C9178) / 2.0 +
                            2 * C8343 * C8431 * C8847 +
                            2 * C8343 * C9071 * C8934;
    const double gx002110 = C8678 * C8560 * C8813 -
                            (C8813 * C8520 * C9259) / 2.0 +
                            C8678 * C8520 * C8841;
    const double gx002101 = C8678 * C8431 * C9150 -
                            (C9150 * C9071 * C9259) / 2.0 +
                            (C8678 * C9071 * C8913) / C8345;
    const double gx002011 = (C9150 * C8520 * C9178) / 2.0 +
                            2 * C8343 * C8560 * C9150 +
                            (2 * C8343 * C8520 * C8913) / C8345;
    const double gx110200 = C8965 * C8692 * C9071 -
                            (C9071 * C8340 * C9317) / 2.0 +
                            C8965 * C8340 * C8435;
    const double gx110020 = (C9071 * C8975 * C9193) / 2.0 +
                            C8393 * C9002 * C9071 + C8393 * C8975 * C8435;
    const double gx110002 = (C8579 * C8340 * C9193) / 2.0 +
                            C8393 * C8692 * C8579 + C8393 * C8340 * C8634;
    const double gx110110 = C8430 * C8787 * C9071 -
                            (C9071 * C9149 * C9253) / 2.0 +
                            C8430 * C9149 * C8435;
    const double gx110101 = C8430 * C8692 * C8580 -
                            (C8580 * C8340 * C9253) / 2.0 +
                            C8430 * C8340 * C8620;
    const double gx110011 = (C8580 * C9149 * C9193) / 2.0 +
                            C8393 * C8787 * C8580 + C8393 * C9149 * C8620;
    const double gx101200 = C8965 * C8431 * C8342 -
                            (C8342 * C9071 * C9317) / 2.0 +
                            C8965 * C9071 * C8833;
    const double gx101020 = (C8342 * C8519 * C9193) / 2.0 +
                            C8393 * C8574 * C8342 + C8393 * C8519 * C8833;
    const double gx101002 = (C9018 * C9071 * C9193) / 2.0 +
                            C8393 * C8431 * C9018 + C8393 * C9071 * C9045;
    const double gx101110 = C8430 * C8560 * C8342 -
                            (C8342 * C8520 * C9253) / 2.0 +
                            C8430 * C8520 * C8833;
    const double gx101101 = C8430 * C8431 * C9151 -
                            (C9151 * C9071 * C9253) / 2.0 +
                            C8430 * C9071 * C8920;
    const double gx101011 = (C9151 * C8520 * C9193) / 2.0 +
                            C8393 * C8560 * C9151 + C8393 * C8520 * C8920;
    const double gx011200 = C8696 * C8692 * C8342 -
                            (C8342 * C8340 * C9316) / 2.0 +
                            C8696 * C8340 * C8833;
    const double gx011020 = (C8342 * C8975 * C9178) / 2.0 +
                            2 * C8343 * C9002 * C8342 +
                            2 * C8343 * C8975 * C8833;
    const double gx011002 = (C9018 * C8340 * C9178) / 2.0 +
                            2 * C8343 * C8692 * C9018 +
                            2 * C8343 * C8340 * C9045;
    const double gx011110 = C8678 * C8787 * C8342 -
                            (C8342 * C9149 * C9259) / 2.0 +
                            C8678 * C9149 * C8833;
    const double gx011101 = C8678 * C8692 * C9151 -
                            (C9151 * C8340 * C9259) / 2.0 +
                            C8678 * C8340 * C8920;
    const double gx011011 = (C9151 * C9149 * C9178) / 2.0 +
                            2 * C8343 * C8787 * C9151 +
                            2 * C8343 * C9149 * C8920;
    gx[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(9.) * gx110110;
    gx[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(9.) * gx110011;
    gx[(Ai + 0) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(3.0) * gx110002 -
              (std::sqrt(0.75) * gx110020 + std::sqrt(0.75) * gx110200));
    gx[(Ai + 0) * matrix_size + Bi + 3] += cc * std::sqrt(9.) * gx110101;
    gx[(Ai + 0) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(2.25) * gx110200 - std::sqrt(2.25) * gx110020);
    gx[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(9.) * gx011110;
    gx[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(9.) * gx011011;
    gx[(Ai + 1) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(3.0) * gx011002 -
              (std::sqrt(0.75) * gx011020 + std::sqrt(0.75) * gx011200));
    gx[(Ai + 1) * matrix_size + Bi + 3] += cc * std::sqrt(9.) * gx011101;
    gx[(Ai + 1) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(2.25) * gx011200 - std::sqrt(2.25) * gx011020);
    gx[(Ai + 2) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(3.0) * gx002110 -
              (std::sqrt(0.75) * gx020110 + std::sqrt(0.75) * gx200110));
    gx[(Ai + 2) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(3.0) * gx002011 -
              (std::sqrt(0.75) * gx020011 + std::sqrt(0.75) * gx200011));
    gx[(Ai + 2) * matrix_size + Bi + 2] +=
        cc * (0.25 * gx200200 + 0.25 * gx200020 - 0.5 * gx200002 +
              0.25 * gx020200 + 0.25 * gx020020 - 0.5 * gx020002 -
              0.5 * gx002200 - 0.5 * gx002020 + gx002002);
    gx[(Ai + 2) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(3.0) * gx002101 -
              (std::sqrt(0.75) * gx020101 + std::sqrt(0.75) * gx200101));
    gx[(Ai + 2) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(0.1875) * gx200020 - std::sqrt(0.1875) * gx200200 -
              std::sqrt(0.1875) * gx020200 + std::sqrt(0.1875) * gx020020 +
              std::sqrt(0.75) * gx002200 - std::sqrt(0.75) * gx002020);
    gx[(Ai + 3) * matrix_size + Bi + 0] += cc * std::sqrt(9.) * gx101110;
    gx[(Ai + 3) * matrix_size + Bi + 1] += cc * std::sqrt(9.) * gx101011;
    gx[(Ai + 3) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(3.0) * gx101002 -
              (std::sqrt(0.75) * gx101020 + std::sqrt(0.75) * gx101200));
    gx[(Ai + 3) * matrix_size + Bi + 3] += cc * std::sqrt(9.) * gx101101;
    gx[(Ai + 3) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(2.25) * gx101200 - std::sqrt(2.25) * gx101020);
    gx[(Ai + 4) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(2.25) * gx200110 - std::sqrt(2.25) * gx020110);
    gx[(Ai + 4) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(2.25) * gx200011 - std::sqrt(2.25) * gx020011);
    gx[(Ai + 4) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(0.75) * gx200002 -
              (std::sqrt(0.1875) * gx200020 + std::sqrt(0.1875) * gx200200) +
              std::sqrt(0.1875) * gx020200 + std::sqrt(0.1875) * gx020020 -
              std::sqrt(0.75) * gx020002);
    gx[(Ai + 4) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(2.25) * gx200101 - std::sqrt(2.25) * gx020101);
    gx[(Ai + 4) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(0.5625) * gx200200 - std::sqrt(0.5625) * gx200020 -
              std::sqrt(0.5625) * gx020200 + std::sqrt(0.5625) * gx020020);
    const double gy200200 = C8515 * C8370 * C9071 +
                            (C9071 * C8341 * C9161) / 2.0 +
                            C8341 * C8370 * C8435;
    const double gy200020 = C8498 * C8566 * C9071 -
                            (C9071 * C8336 * C9314) / 2.0 +
                            C8336 * C8566 * C8435;
    const double gy200002 = C8498 * C8370 * C8579 +
                            (C8579 * C8336 * C9161) / 2.0 +
                            C8336 * C8370 * C8634;
    const double gy200110 = (C9071 * C8554 * C8510) / C8345 -
                            (C9071 * C8337 * C9255) / 2.0 +
                            C8337 * C8554 * C8435;
    const double gy200101 = (C8580 * 2 * C8354 * C8510) / C8345 +
                            (C8580 * C8337 * C9161) / 2.0 +
                            C8337 * C8370 * C8620;
    const double gy200011 = C8498 * C8554 * C8580 -
                            (C8580 * C8336 * C9255) / 2.0 +
                            C8336 * C8554 * C8620;
    const double gy020200 = C8710 * C8690 * C9071 +
                            (C9071 * C8647 * C9177) / 2.0 +
                            C8647 * C8690 * C8435;
    const double gy020020 = C8436 * C8789 * C9071 -
                            (C9071 * C9137 *
                             ((C9276 * C8521) / C8345 +
                              (2 * C9262 + C8794 +
                               6 * ae *
                                   ((C8773 * C8521) / C8345 +
                                    (2 * C8573 + 4 * ae * C8690) / C8358)) /
                                  C8358)) /
                                2.0 +
                            C9137 * C8789 * C8435;
    const double gy020002 = C8436 * C8690 * C8579 +
                            (C8579 * C9137 * C9177) / 2.0 +
                            C9137 * C8690 * C8634;
    const double gy020110 = C8694 * C8770 * C9071 -
                            (C9071 * C9140 * C9276) / 2.0 +
                            C9140 * C8770 * C8435;
    const double gy020101 = C8694 * C8690 * C8580 +
                            (C8580 * C9140 * C9177) / 2.0 +
                            C9140 * C8690 * C8620;
    const double gy020011 = C8436 * C8770 * C8580 -
                            (C8580 * C9137 * C9276) / 2.0 +
                            C9137 * C8770 * C8620;
    const double gy002200 = C8710 * C8370 * C8813 +
                            (C8813 * C8647 * C9161) / 2.0 +
                            C8647 * C8370 * C8841;
    const double gy002020 = C8436 * C8566 * C8813 -
                            (C8813 * C9137 * C9314) / 2.0 +
                            C9137 * C8566 * C8841;
    const double gy002002 = C8436 * C8370 * C8847 +
                            (C8847 * C9137 * C9161) / 2.0 +
                            C9137 * C8370 * C8934;
    const double gy002110 = C8694 * C8554 * C8813 -
                            (C8813 * C9140 * C9255) / 2.0 +
                            C9140 * C8554 * C8841;
    const double gy002101 = C8694 * C8370 * C9150 +
                            (C9150 * C9140 * C9161) / 2.0 +
                            (C9140 * C8370 * C8913) / C8345;
    const double gy002011 = C8436 * C8554 * C9150 -
                            (C9150 * C9137 * C9255) / 2.0 +
                            (C9137 * C8554 * C8913) / C8345;
    const double gy110200 = C8971 * C8555 * C9071 +
                            (C9071 * C8945 * C9192) / 2.0 +
                            C8945 * C8555 * C8435;
    const double gy110020 = C8469 * C8997 * C9071 -
                            (C9071 * C8334 * C9318) / 2.0 +
                            C8334 * C8997 * C8435;
    const double gy110002 = C8469 * C8555 * C8579 +
                            (C8579 * C8334 * C9192) / 2.0 +
                            C8334 * C8555 * C8634;
    const double gy110110 = C8499 * C8752 * C9071 -
                            (C9071 * C9147 * C9262) / 2.0 +
                            C9147 * C8752 * C8435;
    const double gy110101 = C8499 * C8555 * C8580 +
                            (C8580 * C9147 * C9192) / 2.0 +
                            C9147 * C8555 * C8620;
    const double gy110011 = C8469 * C8752 * C8580 -
                            (C8580 * C8334 * C9262) / 2.0 +
                            C8334 * C8752 * C8620;
    const double gy101200 = C8971 * C8370 * C8342 +
                            (C8342 * C8945 * C9161) / 2.0 +
                            C8945 * C8370 * C8833;
    const double gy101020 = C8469 * C8566 * C8342 -
                            (C8342 * C8334 * C9314) / 2.0 +
                            C8334 * C8566 * C8833;
    const double gy101002 = C8469 * C8370 * C9018 +
                            (C9018 * C8334 * C9161) / 2.0 +
                            C8334 * C8370 * C9045;
    const double gy101110 = C8499 * C8554 * C8342 -
                            (C8342 * C9147 * C9255) / 2.0 +
                            C9147 * C8554 * C8833;
    const double gy101101 = C8499 * C8370 * C9151 +
                            (C9151 * C9147 * C9161) / 2.0 +
                            C9147 * C8370 * C8920;
    const double gy101011 = C8469 * C8554 * C9151 -
                            (C9151 * C8334 * C9255) / 2.0 +
                            C8334 * C8554 * C8920;
    const double gy011200 = C8710 * C8555 * C8342 +
                            (C8342 * C8647 * C9192) / 2.0 +
                            C8647 * C8555 * C8833;
    const double gy011020 = C8436 * C8997 * C8342 -
                            (C8342 * C9137 * C9318) / 2.0 +
                            C9137 * C8997 * C8833;
    const double gy011002 = C8436 * C8555 * C9018 +
                            (C9018 * C9137 * C9192) / 2.0 +
                            C9137 * C8555 * C9045;
    const double gy011110 = C8694 * C8752 * C8342 -
                            (C8342 * C9140 * C9262) / 2.0 +
                            C9140 * C8752 * C8833;
    const double gy011101 = C8694 * C8555 * C9151 +
                            (C9151 * C9140 * C9192) / 2.0 +
                            C9140 * C8555 * C8920;
    const double gy011011 = C8436 * C8752 * C9151 -
                            (C9151 * C9137 * C9262) / 2.0 +
                            C9137 * C8752 * C8920;
    gy[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(9.) * gy110110;
    gy[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(9.) * gy110011;
    gy[(Ai + 0) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(3.0) * gy110002 -
              (std::sqrt(0.75) * gy110020 + std::sqrt(0.75) * gy110200));
    gy[(Ai + 0) * matrix_size + Bi + 3] += cc * std::sqrt(9.) * gy110101;
    gy[(Ai + 0) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(2.25) * gy110200 - std::sqrt(2.25) * gy110020);
    gy[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(9.) * gy011110;
    gy[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(9.) * gy011011;
    gy[(Ai + 1) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(3.0) * gy011002 -
              (std::sqrt(0.75) * gy011020 + std::sqrt(0.75) * gy011200));
    gy[(Ai + 1) * matrix_size + Bi + 3] += cc * std::sqrt(9.) * gy011101;
    gy[(Ai + 1) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(2.25) * gy011200 - std::sqrt(2.25) * gy011020);
    gy[(Ai + 2) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(3.0) * gy002110 -
              (std::sqrt(0.75) * gy020110 + std::sqrt(0.75) * gy200110));
    gy[(Ai + 2) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(3.0) * gy002011 -
              (std::sqrt(0.75) * gy020011 + std::sqrt(0.75) * gy200011));
    gy[(Ai + 2) * matrix_size + Bi + 2] +=
        cc * (0.25 * gy200200 + 0.25 * gy200020 - 0.5 * gy200002 +
              0.25 * gy020200 + 0.25 * gy020020 - 0.5 * gy020002 -
              0.5 * gy002200 - 0.5 * gy002020 + gy002002);
    gy[(Ai + 2) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(3.0) * gy002101 -
              (std::sqrt(0.75) * gy020101 + std::sqrt(0.75) * gy200101));
    gy[(Ai + 2) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(0.1875) * gy200020 - std::sqrt(0.1875) * gy200200 -
              std::sqrt(0.1875) * gy020200 + std::sqrt(0.1875) * gy020020 +
              std::sqrt(0.75) * gy002200 - std::sqrt(0.75) * gy002020);
    gy[(Ai + 3) * matrix_size + Bi + 0] += cc * std::sqrt(9.) * gy101110;
    gy[(Ai + 3) * matrix_size + Bi + 1] += cc * std::sqrt(9.) * gy101011;
    gy[(Ai + 3) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(3.0) * gy101002 -
              (std::sqrt(0.75) * gy101020 + std::sqrt(0.75) * gy101200));
    gy[(Ai + 3) * matrix_size + Bi + 3] += cc * std::sqrt(9.) * gy101101;
    gy[(Ai + 3) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(2.25) * gy101200 - std::sqrt(2.25) * gy101020);
    gy[(Ai + 4) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(2.25) * gy200110 - std::sqrt(2.25) * gy020110);
    gy[(Ai + 4) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(2.25) * gy200011 - std::sqrt(2.25) * gy020011);
    gy[(Ai + 4) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(0.75) * gy200002 -
              (std::sqrt(0.1875) * gy200020 + std::sqrt(0.1875) * gy200200) +
              std::sqrt(0.1875) * gy020200 + std::sqrt(0.1875) * gy020020 -
              std::sqrt(0.75) * gy020002);
    gy[(Ai + 4) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(2.25) * gy200101 - std::sqrt(2.25) * gy020101);
    gy[(Ai + 4) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(0.5625) * gy200200 - std::sqrt(0.5625) * gy200020 -
              std::sqrt(0.5625) * gy020200 + std::sqrt(0.5625) * gy020020);
    const double gz200200 = C8515 * C9071 * C8371 + C8341 * C8431 * C8371 +
                            (C8341 * C9071 * C9307) / 2.0;
    const double gz200020 = C8498 * C8519 * C8371 + C8336 * C8574 * C8371 +
                            (C8336 * C8519 * C9307) / 2.0;
    const double gz200002 = C8498 * C9071 * C8626 + C8336 * C8431 * C8626 -
                            (C8336 * C9071 * C9315) / 2.0;
    const double gz200110 = (2 * C8355 * C8520 * C8510) / C8345 +
                            C8337 * C8560 * C8371 +
                            (C8337 * C8520 * C9172) / 2.0;
    const double gz200101 = (C8614 * C9071 * C8510) / C8345 +
                            C8337 * C8431 * C8614 -
                            (C8337 * C9071 * C9257) / 2.0;
    const double gz200011 = C8498 * C8520 * C8614 + C8336 * C8560 * C8614 -
                            (C8336 * C8520 * C9257) / 2.0;
    const double gz020200 = C8710 * C8646 * C8371 + C8647 * C8709 * C8371 +
                            (C8647 * C8646 * C9172) / 2.0;
    const double gz020020 = C8436 * C8714 * C8371 + C9137 * C8801 * C8371 +
                            (C9137 * C8714 * C9172) / 2.0;
    const double gz020002 = C8436 * C8646 * C8626 + C9137 * C8709 * C8626 -
                            (C9137 * C8646 * C9315) / 2.0;
    const double gz020110 = C8694 * C9148 * C8371 +
                            (2 * C8355 * C9140 * C8780) / C8345 +
                            (C9140 * C9148 * C9172) / 2.0;
    const double gz020101 = C8694 * C8646 * C8614 + C9140 * C8709 * C8614 -
                            (C9140 * C8646 * C9257) / 2.0;
    const double gz020011 = C8436 * C9148 * C8614 +
                            (C8614 * C9137 * C8780) / C8345 -
                            (C9137 * C9148 * C9257) / 2.0;
    const double gz002200 = C8710 * C9071 * C8832 + C8647 * C8431 * C8832 +
                            (C8647 * C9071 * C9184) / 2.0;
    const double gz002020 = C8436 * C8519 * C8832 + C9137 * C8574 * C8832 +
                            (C9137 * C8519 * C9184) / 2.0;
    const double gz002002 = C8436 * C9071 * C8922 + C9137 * C8431 * C8922 -
                            (C9137 * C9071 *
                             ((C9277 * C8581) / C8345 +
                              (2 * C9264 + C8927 +
                               6 * ae *
                                   ((C8906 * C8581) / C8345 +
                                    (2 * C8633 + 4 * ae * C8832) / C8358)) /
                                  C8358)) /
                                2.0;
    const double gz002110 = C8694 * C8520 * C8832 + C9140 * C8560 * C8832 +
                            (C9140 * C8520 * C9184) / 2.0;
    const double gz002101 = C8694 * C9071 * C8903 + C9140 * C8431 * C8903 -
                            (C9140 * C9071 * C9277) / 2.0;
    const double gz002011 = C8436 * C8520 * C8903 + C9137 * C8560 * C8903 -
                            (C9137 * C8520 * C9277) / 2.0;
    const double gz110200 = C8971 * C8340 * C8371 + C8945 * C8692 * C8371 +
                            (C8945 * C8340 * C9172) / 2.0;
    const double gz110020 = C8469 * C8975 * C8371 + C8334 * C9002 * C8371 +
                            (C8334 * C8975 * C9172) / 2.0;
    const double gz110002 = C8469 * C8340 * C8626 + C8334 * C8692 * C8626 -
                            (C8334 * C8340 * C9315) / 2.0;
    const double gz110110 = C8499 * C9149 * C8371 + C9147 * C8787 * C8371 +
                            (C9147 * C9149 * C9172) / 2.0;
    const double gz110101 = C8499 * C8340 * C8614 + C9147 * C8692 * C8614 -
                            (C9147 * C8340 * C9257) / 2.0;
    const double gz110011 = C8469 * C9149 * C8614 + C8334 * C8787 * C8614 -
                            (C8334 * C9149 * C9257) / 2.0;
    const double gz101200 = C8971 * C9071 * C8615 + C8945 * C8431 * C8615 +
                            (C8945 * C9071 * C9196) / 2.0;
    const double gz101020 = C8469 * C8519 * C8615 + C8334 * C8574 * C8615 +
                            (C8334 * C8519 * C9196) / 2.0;
    const double gz101002 = C8469 * C9071 * C9040 + C8334 * C8431 * C9040 -
                            (C8334 * C9071 * C9319) / 2.0;
    const double gz101110 = C8499 * C8520 * C8615 + C9147 * C8560 * C8615 +
                            (C9147 * C8520 * C9196) / 2.0;
    const double gz101101 = C8499 * C9071 * C8885 + C9147 * C8431 * C8885 -
                            (C9147 * C9071 * C9264) / 2.0;
    const double gz101011 = C8469 * C8520 * C8885 + C8334 * C8560 * C8885 -
                            (C8334 * C8520 * C9264) / 2.0;
    const double gz011200 = C8710 * C8340 * C8615 + C8647 * C8692 * C8615 +
                            (C8647 * C8340 * C9196) / 2.0;
    const double gz011020 = C8436 * C8975 * C8615 + C9137 * C9002 * C8615 +
                            (C9137 * C8975 * C9196) / 2.0;
    const double gz011002 = C8436 * C8340 * C9040 + C9137 * C8692 * C9040 -
                            (C9137 * C8340 * C9319) / 2.0;
    const double gz011110 = C8694 * C9149 * C8615 + C9140 * C8787 * C8615 +
                            (C9140 * C9149 * C9196) / 2.0;
    const double gz011101 = C8694 * C8340 * C8885 + C9140 * C8692 * C8885 -
                            (C9140 * C8340 * C9264) / 2.0;
    const double gz011011 = C8436 * C9149 * C8885 + C9137 * C8787 * C8885 -
                            (C9137 * C9149 * C9264) / 2.0;
    gz[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(9.) * gz110110;
    gz[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(9.) * gz110011;
    gz[(Ai + 0) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(3.0) * gz110002 -
              (std::sqrt(0.75) * gz110020 + std::sqrt(0.75) * gz110200));
    gz[(Ai + 0) * matrix_size + Bi + 3] += cc * std::sqrt(9.) * gz110101;
    gz[(Ai + 0) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(2.25) * gz110200 - std::sqrt(2.25) * gz110020);
    gz[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(9.) * gz011110;
    gz[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(9.) * gz011011;
    gz[(Ai + 1) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(3.0) * gz011002 -
              (std::sqrt(0.75) * gz011020 + std::sqrt(0.75) * gz011200));
    gz[(Ai + 1) * matrix_size + Bi + 3] += cc * std::sqrt(9.) * gz011101;
    gz[(Ai + 1) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(2.25) * gz011200 - std::sqrt(2.25) * gz011020);
    gz[(Ai + 2) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(3.0) * gz002110 -
              (std::sqrt(0.75) * gz020110 + std::sqrt(0.75) * gz200110));
    gz[(Ai + 2) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(3.0) * gz002011 -
              (std::sqrt(0.75) * gz020011 + std::sqrt(0.75) * gz200011));
    gz[(Ai + 2) * matrix_size + Bi + 2] +=
        cc * (0.25 * gz200200 + 0.25 * gz200020 - 0.5 * gz200002 +
              0.25 * gz020200 + 0.25 * gz020020 - 0.5 * gz020002 -
              0.5 * gz002200 - 0.5 * gz002020 + gz002002);
    gz[(Ai + 2) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(3.0) * gz002101 -
              (std::sqrt(0.75) * gz020101 + std::sqrt(0.75) * gz200101));
    gz[(Ai + 2) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(0.1875) * gz200020 - std::sqrt(0.1875) * gz200200 -
              std::sqrt(0.1875) * gz020200 + std::sqrt(0.1875) * gz020020 +
              std::sqrt(0.75) * gz002200 - std::sqrt(0.75) * gz002020);
    gz[(Ai + 3) * matrix_size + Bi + 0] += cc * std::sqrt(9.) * gz101110;
    gz[(Ai + 3) * matrix_size + Bi + 1] += cc * std::sqrt(9.) * gz101011;
    gz[(Ai + 3) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(3.0) * gz101002 -
              (std::sqrt(0.75) * gz101020 + std::sqrt(0.75) * gz101200));
    gz[(Ai + 3) * matrix_size + Bi + 3] += cc * std::sqrt(9.) * gz101101;
    gz[(Ai + 3) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(2.25) * gz101200 - std::sqrt(2.25) * gz101020);
    gz[(Ai + 4) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(2.25) * gz200110 - std::sqrt(2.25) * gz020110);
    gz[(Ai + 4) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(2.25) * gz200011 - std::sqrt(2.25) * gz020011);
    gz[(Ai + 4) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(0.75) * gz200002 -
              (std::sqrt(0.1875) * gz200020 + std::sqrt(0.1875) * gz200200) +
              std::sqrt(0.1875) * gz020200 + std::sqrt(0.1875) * gz020020 -
              std::sqrt(0.75) * gz020002);
    gz[(Ai + 4) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(2.25) * gz200101 - std::sqrt(2.25) * gz020101);
    gz[(Ai + 4) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(0.5625) * gz200200 - std::sqrt(0.5625) * gz200020 -
              std::sqrt(0.5625) * gz020200 + std::sqrt(0.5625) * gz020020);
}

// Automatically generated, do not edit
