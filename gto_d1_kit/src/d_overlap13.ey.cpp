/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void overlap_gradient_31(double ae,
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
    const double C16538 = ae + be;
    const double C16540 = Pi / C16538;
    const double C16541 = std::sqrt(C16540);
    const double C16544 = std::pow(C16538, 2);
    const double C16543 = be * xAB;
    const double C16549 = 2. * C16538;
    const double C16548 = std::pow(C16543, 2);
    const double C16551 = C16541 / C16549;
    const double C16550 = C16541 * C16548;
    const double C16552 = C16550 / C16544;
    const double C16553 = C16552 + C16551;
    const double C16559 = be * yAB;
    const double C16563 = std::pow(C16559, 2);
    const double C16564 = C16541 * C16563;
    const double C16565 = C16564 / C16544;
    const double C16566 = C16565 + C16551;
    const double C16568 = be * zAB;
    const double C16571 = std::pow(C16568, 2);
    const double C16572 = C16541 * C16571;
    const double C16573 = C16572 / C16544;
    const double C16574 = C16573 + C16551;
    const double C16592 = std::pow(C16568, 2);
    const double C16591 = C16541 * C16568;
    const double C16590 = std::pow(C16559, 2);
    const double C16589 = C16541 * C16559;
    const double C16588 = ae * zAB;
    const double C16587 = ae * yAB;
    const double C16586 = ae * xAB;
    const double C16585 = 2. * C16544;
    const double C16584 = C16541 * C16543;
    const double C16583 = 2. * C16538;
    const double C16582 = be * xAB;
    const double C16598 = C16541 * C16592;
    const double C16597 = -2. * C16591;
    const double C16596 = C16541 * C16590;
    const double C16595 = -2. * C16589;
    const double C16594 = -2. * C16584;
    const double C16593 = C16541 / C16583;
    const double C16603 = C16598 / C16544;
    const double C16602 = C16597 / C16585;
    const double C16601 = C16596 / C16544;
    const double C16600 = C16595 / C16585;
    const double C16599 = C16594 / C16585;
    const double C16605 = C16603 + C16551;
    const double C16604 = C16601 + C16551;
    const double C16392 = std::sqrt(Pi / (ae + be));
    const double C16393 = -(std::sqrt(Pi / C16538) * C16582) / C16538;
    const double C16394 =
        (C16541 * std::pow(C16582, 2)) / std::pow(C16538, 2) + C16593;
    const double C16395 =
        C16599 -
        (((C16541 * std::pow(C16543, 2)) / C16544 + C16593) * C16543) / C16538;
    const double C16398 =
        ((C16599 - (C16553 * C16543) / C16538) * C16586) / C16538 +
        (3. * C16553) / C16549;
    const double C16399 = -(C16541 * be * yAB) / C16538;
    const double C16400 = -(C16541 * be * zAB) / C16538;
    const double C16424 = (C16541 * C16587) / C16538;
    const double C16427 = (C16541 * C16588) / C16538;
    const double C16430 = C16600 - (C16604 * C16559) / C16538;
    const double C16431 = (C16541 * C16586) / C16538;
    const double C16446 =
        ((C16600 - (C16566 * C16559) / C16538) * C16587) / C16538 +
        (3. * C16566) / C16549;
    const double C16460 = C16602 - (C16605 * C16568) / C16538;
    const double C16477 =
        ((C16602 - (C16574 * C16568) / C16538) * C16588) / C16538 +
        (3. * C16574) / C16549;
    const double C16489 = (C16553 * C16586) / C16538 + C16599;
    const double C16492 = C16551 - (C16587 * C16589) / C16544;
    const double C16501 = C16551 - (C16588 * C16591) / C16544;
    const double C16506 = (C16566 * C16587) / C16538 + C16600;
    const double C16511 = C16551 - (C16586 * C16584) / C16544;
    const double C16522 = (C16574 * C16588) / C16538 + C16602;
    const double C16405 = be * C16393;
    const double C16404 = be * xAB;
    const double C16403 = ae * C16393;
    const double C16402 = ae + be;
    const double C16401 = be * C16392;
    const double C16410 = 2 * C16405;
    const double C16409 = 2 * C16403;
    const double C16408 = C16403 * C16404;
    const double C16407 = 2. * C16402;
    const double C16406 = 2 * C16401;
    const double C16413 = C16409 - C16410;
    const double C16412 = 2 * C16408;
    const double C16411 = -C16406;
    const double C16416 = C16413 / C16407;
    const double C16415 = C16412 / C16402;
    const double C16414 = C16411 / C16407;
    const double C16417 = C16414 - C16415;
    const double C16418 = C16417 * C16404;
    const double C16419 = C16418 / C16402;
    const double C16420 = C16416 - C16419;
    const double C16435 = be * yAB;
    const double C16434 = ae * C16399;
    const double C16433 = be * C16541;
    const double C16437 = C16434 * C16435;
    const double C16436 = 2 * C16433;
    const double C16439 = 2 * C16437;
    const double C16438 = -C16436;
    const double C16441 = C16439 / C16402;
    const double C16440 = C16438 / C16407;
    const double C16442 = C16440 - C16441;
    const double C16449 = C16442 * C16435;
    const double C16448 = be * C16399;
    const double C16447 = 2 * C16434;
    const double C16451 = C16449 / C16402;
    const double C16450 = 2 * C16448;
    const double C16452 = C16447 - C16450;
    const double C16453 = C16452 / C16407;
    const double C16454 = C16453 - C16451;
    const double C16464 = be * zAB;
    const double C16463 = ae * C16400;
    const double C16462 = be * C16541;
    const double C16466 = C16463 * C16464;
    const double C16465 = 2 * C16462;
    const double C16468 = 2 * C16466;
    const double C16467 = -C16465;
    const double C16470 = C16468 / C16402;
    const double C16469 = C16467 / C16407;
    const double C16471 = C16469 - C16470;
    const double C16480 = C16471 * C16464;
    const double C16479 = be * C16400;
    const double C16478 = 2 * C16463;
    const double C16482 = C16480 / C16402;
    const double C16481 = 2 * C16479;
    const double C16483 = C16478 - C16481;
    const double C16484 = C16483 / C16407;
    const double C16485 = C16484 - C16482;
    const double C16636 = ae * C16605;
    const double C16635 = C16485 * C16588;
    const double C16634 = 4. * C16403;
    const double C16633 = C16417 * C16586;
    const double C16632 = ae * C16604;
    const double C16631 = C16454 * C16587;
    const double C16630 = 4. * C16463;
    const double C16629 = C16471 * C16588;
    const double C16628 = 4. * C16434;
    const double C16627 = C16442 * C16587;
    const double C16626 = ae * C16394;
    const double C16625 = C16420 * C16586;
    const double C16624 = C16485 * C16464;
    const double C16623 = be * C16605;
    const double C16622 = 2 * C16471;
    const double C16621 = C16454 * C16435;
    const double C16620 = be * C16604;
    const double C16619 = 2 * C16442;
    const double C16618 = ae * C16392;
    const double C16617 = C16403 * C16586;
    const double C16616 = C16463 * C16588;
    const double C16615 = ae * C16541;
    const double C16614 = C16434 * C16587;
    const double C16613 = C16420 * C16404;
    const double C16612 = be * C16394;
    const double C16611 = 2 * C16417;
    const double C16659 = 2 * C16636;
    const double C16658 = C16635 / C16402;
    const double C16657 = C16634 / C16407;
    const double C16656 = C16633 / C16402;
    const double C16655 = 2 * C16632;
    const double C16654 = C16631 / C16402;
    const double C16653 = C16630 / C16407;
    const double C16652 = C16629 / C16402;
    const double C16651 = C16628 / C16407;
    const double C16650 = C16627 / C16402;
    const double C16649 = 2 * C16626;
    const double C16648 = C16625 / C16402;
    const double C16647 = C16624 / C16402;
    const double C16646 = 2 * C16623;
    const double C16645 = C16621 / C16402;
    const double C16644 = 2 * C16620;
    const double C16643 = 2. * C16618;
    const double C16642 = 2 * C16617;
    const double C16641 = 2 * C16616;
    const double C16640 = 2. * C16615;
    const double C16639 = 2 * C16614;
    const double C16638 = C16613 / C16402;
    const double C16637 = 2 * C16612;
    const double C16673 = C16622 + C16659;
    const double C16672 = C16656 + C16657;
    const double C16671 = C16619 + C16655;
    const double C16670 = C16652 + C16653;
    const double C16669 = C16650 + C16651;
    const double C16668 = C16611 + C16649;
    const double C16667 = C16622 - C16646;
    const double C16666 = C16619 - C16644;
    const double C16665 = C16643 / C16407;
    const double C16664 = C16642 / C16402;
    const double C16663 = C16641 / C16402;
    const double C16662 = C16640 / C16407;
    const double C16661 = C16639 / C16402;
    const double C16660 = C16611 - C16637;
    const double C16682 = C16673 / C16407;
    const double C16681 = C16671 / C16407;
    const double C16680 = C16668 / C16407;
    const double C16679 = C16667 / C16407;
    const double C16678 = C16666 / C16407;
    const double C16677 = C16664 + C16665;
    const double C16676 = C16663 + C16662;
    const double C16675 = C16661 + C16662;
    const double C16674 = C16660 / C16407;
    const double C16688 = C16658 + C16682;
    const double C16687 = C16654 + C16681;
    const double C16686 = C16648 + C16680;
    const double C16685 = C16679 - C16647;
    const double C16684 = C16678 - C16645;
    const double C16683 = C16674 - C16638;
    const double gx300100 =
        ((C16683 * C16586) / C16402 + (3 * C16420 + 2 * ae * C16395) / C16407) *
        std::pow(C16541, 2);
    const double gx300010 = C16683 * C16424 * C16541;
    const double gx300001 = C16683 * C16541 * C16427;
    const double gx030100 = C16677 * C16430 * C16541;
    const double gx030010 = 2 * C16403 * C16446 * C16541;
    const double gx030001 = 2 * C16403 * C16430 * C16427;
    const double gx003100 = C16677 * C16541 * C16460;
    const double gx003010 = 2 * C16403 * C16424 * C16460;
    const double gx003001 = 2 * C16403 * C16541 * C16477;
    const double gx210100 = C16686 * C16399 * C16541;
    const double gx210010 = C16420 * C16492 * C16541;
    const double gx210001 = C16420 * C16399 * C16427;
    const double gx201100 = C16686 * C16541 * C16400;
    const double gx201010 = C16420 * C16424 * C16400;
    const double gx201001 = C16420 * C16541 * C16501;
    const double gx021100 = C16677 * C16604 * C16400;
    const double gx021010 = 2 * C16403 * C16506 * C16400;
    const double gx021001 = 2 * C16403 * C16604 * C16501;
    const double gx120100 = C16672 * C16604 * C16541;
    const double gx120010 = C16417 * C16506 * C16541;
    const double gx120001 = C16417 * C16604 * C16427;
    const double gx102100 = C16672 * C16541 * C16605;
    const double gx102010 = C16417 * C16424 * C16605;
    const double gx102001 = C16417 * C16541 * C16522;
    const double gx012100 = C16677 * C16399 * C16605;
    const double gx012010 = 2 * C16403 * C16492 * C16605;
    const double gx012001 = 2 * C16403 * C16399 * C16522;
    const double gx111100 = C16672 * C16399 * C16400;
    const double gx111010 = C16417 * C16492 * C16400;
    const double gx111001 = C16417 * C16399 * C16501;
    gx[(Ai + 0) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(45. / 8.0) * gx210100 - std::sqrt(5.0 / 8.0) * gx030100);
    gx[(Ai + 0) * matrix_size + Bi + 1] +=
        cc *
        (std::sqrt(45. / 8.0) * gx210010 - std::sqrt(5.0 / 8.0) * gx030010);
    gx[(Ai + 0) * matrix_size + Bi + 2] +=
        cc *
        (std::sqrt(45. / 8.0) * gx210001 - std::sqrt(5.0 / 8.0) * gx030001);
    gx[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(15.0) * gx111100;
    gx[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(15.0) * gx111010;
    gx[(Ai + 1) * matrix_size + Bi + 2] += cc * std::sqrt(15.0) * gx111001;
    gx[(Ai + 2) * matrix_size + Bi + 0] +=
        -cc * (std::sqrt(6.0) * gx012100 + std::sqrt(3.0 / 8.0) * gx210100 +
               std::sqrt(3.0 / 8.0) * gx030100);
    gx[(Ai + 2) * matrix_size + Bi + 1] +=
        -cc * (std::sqrt(6.0) * gx012010 + std::sqrt(3.0 / 8.0) * gx210010 +
               std::sqrt(3.0 / 8.0) * gx030010);
    gx[(Ai + 2) * matrix_size + Bi + 2] +=
        -cc * (std::sqrt(6.0) * gx012001 + std::sqrt(3.0 / 8.0) * gx210001 +
               std::sqrt(3.0 / 8.0) * gx030001);
    gx[(Ai + 3) * matrix_size + Bi + 0] +=
        cc * (gx003100 - 1.5 * gx201100 - 1.5 * gx021100);
    gx[(Ai + 3) * matrix_size + Bi + 1] +=
        cc * (gx003010 - 1.5 * gx201010 - 1.5 * gx021010);
    gx[(Ai + 3) * matrix_size + Bi + 2] +=
        cc * (gx003001 - 1.5 * gx201001 - 1.5 * gx021001);
    gx[(Ai + 4) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(6.0) * gx102100 - (std::sqrt(3.0 / 8.0) * gx120100 +
                                           std::sqrt(3.0 / 8.0) * gx300100));
    gx[(Ai + 4) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(6.0) * gx102010 - (std::sqrt(3.0 / 8.0) * gx120010 +
                                           std::sqrt(3.0 / 8.0) * gx300010));
    gx[(Ai + 4) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(6.0) * gx102001 - (std::sqrt(3.0 / 8.0) * gx120001 +
                                           std::sqrt(3.0 / 8.0) * gx300001));
    gx[(Ai + 5) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(7.5) * gx201100 - std::sqrt(7.5) * gx021100);
    gx[(Ai + 5) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(7.5) * gx201010 - std::sqrt(7.5) * gx021010);
    gx[(Ai + 5) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(7.5) * gx201001 - std::sqrt(7.5) * gx021001);
    gx[(Ai + 6) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gx300100 + std::sqrt(45.0 / 8.0) * gx120100);
    gx[(Ai + 6) * matrix_size + Bi + 1] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gx300010 + std::sqrt(45.0 / 8.0) * gx120010);
    gx[(Ai + 6) * matrix_size + Bi + 2] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gx300001 + std::sqrt(45.0 / 8.0) * gx120001);
    const double gy300100 = C16398 * C16447 * C16541;
    const double gy300010 = C16395 * C16675 * C16541;
    const double gy300001 = C16395 * C16447 * C16427;
    const double gy030100 = C16431 * C16684 * C16541;
    const double gy030010 =
        C16392 *
        ((C16684 * C16587) / C16402 + (3 * C16454 + 2 * ae * C16430) / C16407) *
        C16541;
    const double gy030001 = C16392 * C16684 * C16427;
    const double gy003100 = C16431 * C16447 * C16460;
    const double gy003010 = C16392 * C16675 * C16460;
    const double gy003001 = C16392 * C16447 * C16477;
    const double gy210100 = C16489 * C16442 * C16541;
    const double gy210010 = C16394 * C16669 * C16541;
    const double gy210001 = C16394 * C16442 * C16427;
    const double gy201100 = C16489 * C16447 * C16400;
    const double gy201010 = C16394 * C16675 * C16400;
    const double gy201001 = C16394 * C16447 * C16501;
    const double gy021100 = C16431 * C16454 * C16400;
    const double gy021010 = C16392 * C16687 * C16400;
    const double gy021001 = C16392 * C16454 * C16501;
    const double gy120100 = C16511 * C16454 * C16541;
    const double gy120010 = C16393 * C16687 * C16541;
    const double gy120001 = C16393 * C16454 * C16427;
    const double gy102100 = C16511 * C16447 * C16605;
    const double gy102010 = C16393 * C16675 * C16605;
    const double gy102001 = C16393 * C16447 * C16522;
    const double gy012100 = C16431 * C16442 * C16605;
    const double gy012010 = C16392 * C16669 * C16605;
    const double gy012001 = C16392 * C16442 * C16522;
    const double gy111100 = C16511 * C16442 * C16400;
    const double gy111010 = C16393 * C16669 * C16400;
    const double gy111001 = C16393 * C16442 * C16501;
    gy[(Ai + 0) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(45. / 8.0) * gy210100 - std::sqrt(5.0 / 8.0) * gy030100);
    gy[(Ai + 0) * matrix_size + Bi + 1] +=
        cc *
        (std::sqrt(45. / 8.0) * gy210010 - std::sqrt(5.0 / 8.0) * gy030010);
    gy[(Ai + 0) * matrix_size + Bi + 2] +=
        cc *
        (std::sqrt(45. / 8.0) * gy210001 - std::sqrt(5.0 / 8.0) * gy030001);
    gy[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(15.0) * gy111100;
    gy[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(15.0) * gy111010;
    gy[(Ai + 1) * matrix_size + Bi + 2] += cc * std::sqrt(15.0) * gy111001;
    gy[(Ai + 2) * matrix_size + Bi + 0] +=
        -cc * (std::sqrt(6.0) * gy012100 + std::sqrt(3.0 / 8.0) * gy210100 +
               std::sqrt(3.0 / 8.0) * gy030100);
    gy[(Ai + 2) * matrix_size + Bi + 1] +=
        -cc * (std::sqrt(6.0) * gy012010 + std::sqrt(3.0 / 8.0) * gy210010 +
               std::sqrt(3.0 / 8.0) * gy030010);
    gy[(Ai + 2) * matrix_size + Bi + 2] +=
        -cc * (std::sqrt(6.0) * gy012001 + std::sqrt(3.0 / 8.0) * gy210001 +
               std::sqrt(3.0 / 8.0) * gy030001);
    gy[(Ai + 3) * matrix_size + Bi + 0] +=
        cc * (gy003100 - 1.5 * gy201100 - 1.5 * gy021100);
    gy[(Ai + 3) * matrix_size + Bi + 1] +=
        cc * (gy003010 - 1.5 * gy201010 - 1.5 * gy021010);
    gy[(Ai + 3) * matrix_size + Bi + 2] +=
        cc * (gy003001 - 1.5 * gy201001 - 1.5 * gy021001);
    gy[(Ai + 4) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(6.0) * gy102100 - (std::sqrt(3.0 / 8.0) * gy120100 +
                                           std::sqrt(3.0 / 8.0) * gy300100));
    gy[(Ai + 4) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(6.0) * gy102010 - (std::sqrt(3.0 / 8.0) * gy120010 +
                                           std::sqrt(3.0 / 8.0) * gy300010));
    gy[(Ai + 4) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(6.0) * gy102001 - (std::sqrt(3.0 / 8.0) * gy120001 +
                                           std::sqrt(3.0 / 8.0) * gy300001));
    gy[(Ai + 5) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(7.5) * gy201100 - std::sqrt(7.5) * gy021100);
    gy[(Ai + 5) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(7.5) * gy201010 - std::sqrt(7.5) * gy021010);
    gy[(Ai + 5) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(7.5) * gy201001 - std::sqrt(7.5) * gy021001);
    gy[(Ai + 6) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gy300100 + std::sqrt(45.0 / 8.0) * gy120100);
    gy[(Ai + 6) * matrix_size + Bi + 1] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gy300010 + std::sqrt(45.0 / 8.0) * gy120010);
    gy[(Ai + 6) * matrix_size + Bi + 2] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gy300001 + std::sqrt(45.0 / 8.0) * gy120001);
    const double gz300100 = C16398 * C16541 * C16478;
    const double gz300010 = C16395 * C16424 * C16478;
    const double gz300001 = C16395 * C16541 * C16676;
    const double gz030100 = C16431 * C16430 * C16478;
    const double gz030010 = C16392 * C16446 * C16478;
    const double gz030001 = C16392 * C16430 * C16676;
    const double gz003100 = C16431 * C16541 * C16685;
    const double gz003010 = C16392 * C16424 * C16685;
    const double gz003001 =
        C16392 * C16541 *
        ((C16685 * C16588) / C16402 + (3 * C16485 + 2 * ae * C16460) / C16407);
    const double gz210100 = C16489 * C16399 * C16478;
    const double gz210010 = C16394 * C16492 * C16478;
    const double gz210001 = C16394 * C16399 * C16676;
    const double gz201100 = C16489 * C16541 * C16471;
    const double gz201010 = C16394 * C16424 * C16471;
    const double gz201001 = C16394 * C16541 * C16670;
    const double gz021100 = C16431 * C16604 * C16471;
    const double gz021010 = C16392 * C16506 * C16471;
    const double gz021001 = C16392 * C16604 * C16670;
    const double gz120100 = C16511 * C16604 * C16478;
    const double gz120010 = C16393 * C16506 * C16478;
    const double gz120001 = C16393 * C16604 * C16676;
    const double gz102100 = C16511 * C16541 * C16485;
    const double gz102010 = C16393 * C16424 * C16485;
    const double gz102001 = C16393 * C16541 * C16688;
    const double gz012100 = C16431 * C16399 * C16485;
    const double gz012010 = C16392 * C16492 * C16485;
    const double gz012001 = C16392 * C16399 * C16688;
    const double gz111100 = C16511 * C16399 * C16471;
    const double gz111010 = C16393 * C16492 * C16471;
    const double gz111001 = C16393 * C16399 * C16670;
    gz[(Ai + 0) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(45. / 8.0) * gz210100 - std::sqrt(5.0 / 8.0) * gz030100);
    gz[(Ai + 0) * matrix_size + Bi + 1] +=
        cc *
        (std::sqrt(45. / 8.0) * gz210010 - std::sqrt(5.0 / 8.0) * gz030010);
    gz[(Ai + 0) * matrix_size + Bi + 2] +=
        cc *
        (std::sqrt(45. / 8.0) * gz210001 - std::sqrt(5.0 / 8.0) * gz030001);
    gz[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(15.0) * gz111100;
    gz[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(15.0) * gz111010;
    gz[(Ai + 1) * matrix_size + Bi + 2] += cc * std::sqrt(15.0) * gz111001;
    gz[(Ai + 2) * matrix_size + Bi + 0] +=
        -cc * (std::sqrt(6.0) * gz012100 + std::sqrt(3.0 / 8.0) * gz210100 +
               std::sqrt(3.0 / 8.0) * gz030100);
    gz[(Ai + 2) * matrix_size + Bi + 1] +=
        -cc * (std::sqrt(6.0) * gz012010 + std::sqrt(3.0 / 8.0) * gz210010 +
               std::sqrt(3.0 / 8.0) * gz030010);
    gz[(Ai + 2) * matrix_size + Bi + 2] +=
        -cc * (std::sqrt(6.0) * gz012001 + std::sqrt(3.0 / 8.0) * gz210001 +
               std::sqrt(3.0 / 8.0) * gz030001);
    gz[(Ai + 3) * matrix_size + Bi + 0] +=
        cc * (gz003100 - 1.5 * gz201100 - 1.5 * gz021100);
    gz[(Ai + 3) * matrix_size + Bi + 1] +=
        cc * (gz003010 - 1.5 * gz201010 - 1.5 * gz021010);
    gz[(Ai + 3) * matrix_size + Bi + 2] +=
        cc * (gz003001 - 1.5 * gz201001 - 1.5 * gz021001);
    gz[(Ai + 4) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(6.0) * gz102100 - (std::sqrt(3.0 / 8.0) * gz120100 +
                                           std::sqrt(3.0 / 8.0) * gz300100));
    gz[(Ai + 4) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(6.0) * gz102010 - (std::sqrt(3.0 / 8.0) * gz120010 +
                                           std::sqrt(3.0 / 8.0) * gz300010));
    gz[(Ai + 4) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(6.0) * gz102001 - (std::sqrt(3.0 / 8.0) * gz120001 +
                                           std::sqrt(3.0 / 8.0) * gz300001));
    gz[(Ai + 5) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(7.5) * gz201100 - std::sqrt(7.5) * gz021100);
    gz[(Ai + 5) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(7.5) * gz201010 - std::sqrt(7.5) * gz021010);
    gz[(Ai + 5) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(7.5) * gz201001 - std::sqrt(7.5) * gz021001);
    gz[(Ai + 6) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gz300100 + std::sqrt(45.0 / 8.0) * gz120100);
    gz[(Ai + 6) * matrix_size + Bi + 1] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gz300010 + std::sqrt(45.0 / 8.0) * gz120010);
    gz[(Ai + 6) * matrix_size + Bi + 2] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gz300001 + std::sqrt(45.0 / 8.0) * gz120001);
}

// Automatically generated, do not edit
