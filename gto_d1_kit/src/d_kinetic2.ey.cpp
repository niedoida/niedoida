/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void kinetic_gradient_02(double ae,
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
    const double C562 = ae + be;
    const double C569 = Pi / C562;
    const double C570 = std::sqrt(C569);
    const double C582 = ae * zAB;
    const double C581 = ae * yAB;
    const double C580 = 2. * C562;
    const double C579 = std::pow(C562, 2);
    const double C578 = ae * xAB;
    const double C577 = Pi / C562;
    const double C584 = C570 / C580;
    const double C583 = std::sqrt(C577);
    const double C332 = -(C583 * be * xAB) / C562;
    const double C334 = (C583 * C578) / C562;
    const double C337 = -(C583 * be * yAB) / C562;
    const double C338 = (C570 * std::pow(C578, 2)) / C579 + C584;
    const double C339 = -(C570 * be * zAB) / C562;
    const double C436 = (C570 * std::pow(C581, 2)) / C579 + C584;
    const double C437 = (C570 * C581) / C562;
    const double C496 = (C570 * std::pow(C582, 2)) / C579 + C584;
    const double C497 = (C570 * C582) / C562;
    const double C351 = ae * C339;
    const double C350 = ae * C337;
    const double C349 = be * zAB;
    const double C348 = be * xAB;
    const double C347 = be * C583;
    const double C346 = be * yAB;
    const double C345 = std::pow(ae, 2);
    const double C344 = ae * C334;
    const double C343 = ae * C583;
    const double C342 = ae + be;
    const double C341 = ae * xAB;
    const double C340 = ae * C332;
    const double C366 = 2 * C351;
    const double C365 = 2 * C350;
    const double C364 = std::pow(C341, 2);
    const double C363 = std::pow(C342, 2);
    const double C362 = C348 / C342;
    const double C361 = C349 / C342;
    const double C360 = C340 * C348;
    const double C359 = 2 * C347;
    const double C358 = Pi / C342;
    const double C357 = C346 / C342;
    const double C356 = 2 * C344;
    const double C355 = 2 * C340;
    const double C354 = 2. * C342;
    const double C353 = 2. * C343;
    const double C352 = C340 * C341;
    const double C377 = std::pow(C362, 2);
    const double C376 = std::pow(C361, 2);
    const double C375 = 2 * C360;
    const double C374 = -C359;
    const double C373 = be * C355;
    const double C372 = std::sqrt(C358);
    const double C371 = 1 / C354;
    const double C370 = std::pow(C357, 2);
    const double C369 = C355 + C356;
    const double C368 = C353 / C354;
    const double C367 = 2 * C352;
    const double C388 = C372 / C354;
    const double C387 = C372 * C364;
    const double C386 = C372 * C341;
    const double C385 = C377 + C371;
    const double C384 = C376 + C371;
    const double C383 = C375 / C342;
    const double C382 = C374 / C354;
    const double C381 = 4 * C373;
    const double C380 = C370 + C371;
    const double C379 = C369 / C354;
    const double C378 = C367 / C342;
    const double C396 = C387 / C363;
    const double C395 = be * C386;
    const double C394 = C345 * C385;
    const double C393 = C345 * C384;
    const double C392 = C382 - C383;
    const double C391 = -C381;
    const double C390 = C345 * C380;
    const double C389 = C378 + C368;
    const double C404 = C396 + C388;
    const double C403 = 2 * C395;
    const double C402 = 2 * C394;
    const double C401 = 2 * C393;
    const double C400 = ae * C392;
    const double C399 = C391 / C354;
    const double C398 = 2 * C390;
    const double C397 = C389 * C341;
    const double C411 = be * C404;
    const double C410 = ae * C403;
    const double C409 = ae - C402;
    const double C408 = ae - C401;
    const double C407 = C400 * C348;
    const double C406 = ae - C398;
    const double C405 = C397 / C342;
    const double C418 = 2 * C411;
    const double C417 = C410 / C363;
    const double C416 = C409 * C372;
    const double C415 = C408 * C372;
    const double C414 = 2 * C407;
    const double C413 = C406 * C372;
    const double C412 = C405 + C379;
    const double C422 = C418 - C372;
    const double C421 = C416 / C354;
    const double C420 = C416 * C341;
    const double C419 = C414 / C342;
    const double C425 = C422 * ae;
    const double C424 = C420 / C342;
    const double C423 = C399 - C419;
    const double C428 = C425 / C342;
    const double C427 = C424 + C417;
    const double C426 = ae * C423;
    const double C429 = C427 * C341;
    const double C430 = C429 / C342;
    const double C431 = C430 + C421;
    const double C432 = C431 + C428;
    const double C444 = C350 * C346;
    const double C443 = be * C583;
    const double C442 = be * C365;
    const double C441 = ae * C437;
    const double C440 = ae * C583;
    const double C439 = C413 / C354;
    const double C438 = ae * yAB;
    const double C453 = 2 * C444;
    const double C452 = 2 * C443;
    const double C451 = 4 * C442;
    const double C450 = 2 * C441;
    const double C449 = 2. * C440;
    const double C448 = C350 * C438;
    const double C447 = std::pow(C438, 2);
    const double C446 = C372 * C438;
    const double C445 = C413 * C438;
    const double C462 = C453 / C342;
    const double C461 = -C452;
    const double C460 = -C451;
    const double C459 = C365 + C450;
    const double C458 = C449 / C354;
    const double C457 = 2 * C448;
    const double C456 = C372 * C447;
    const double C455 = be * C446;
    const double C454 = C445 / C342;
    const double C468 = C461 / C354;
    const double C467 = C460 / C354;
    const double C466 = C459 / C354;
    const double C465 = C457 / C342;
    const double C464 = C456 / C363;
    const double C463 = 2 * C455;
    const double C472 = C468 - C462;
    const double C471 = C465 + C458;
    const double C470 = C464 + C388;
    const double C469 = ae * C463;
    const double C476 = ae * C472;
    const double C475 = C471 * C438;
    const double C474 = be * C470;
    const double C473 = C469 / C363;
    const double C480 = C476 * C346;
    const double C479 = C475 / C342;
    const double C478 = 2 * C474;
    const double C477 = C454 + C473;
    const double C484 = 2 * C480;
    const double C483 = C479 + C466;
    const double C482 = C478 - C372;
    const double C481 = C477 * C438;
    const double C487 = C484 / C342;
    const double C486 = C482 * ae;
    const double C485 = C481 / C342;
    const double C490 = C467 - C487;
    const double C489 = C486 / C342;
    const double C488 = C485 + C439;
    const double C492 = ae * C490;
    const double C491 = C488 + C489;
    const double C504 = C351 * C349;
    const double C503 = be * C583;
    const double C502 = be * C366;
    const double C501 = ae * C497;
    const double C500 = ae * C583;
    const double C499 = C415 / C354;
    const double C498 = ae * zAB;
    const double C513 = 2 * C504;
    const double C512 = 2 * C503;
    const double C511 = 4 * C502;
    const double C510 = 2 * C501;
    const double C509 = 2. * C500;
    const double C508 = C351 * C498;
    const double C507 = std::pow(C498, 2);
    const double C506 = C372 * C498;
    const double C505 = C415 * C498;
    const double C522 = C513 / C342;
    const double C521 = -C512;
    const double C520 = -C511;
    const double C519 = C366 + C510;
    const double C518 = C509 / C354;
    const double C517 = 2 * C508;
    const double C516 = C372 * C507;
    const double C515 = be * C506;
    const double C514 = C505 / C342;
    const double C528 = C521 / C354;
    const double C527 = C520 / C354;
    const double C526 = C519 / C354;
    const double C525 = C517 / C342;
    const double C524 = C516 / C363;
    const double C523 = 2 * C515;
    const double C532 = C528 - C522;
    const double C531 = C525 + C518;
    const double C530 = C524 + C388;
    const double C529 = ae * C523;
    const double C536 = ae * C532;
    const double C535 = C531 * C498;
    const double C534 = be * C530;
    const double C533 = C529 / C363;
    const double C540 = C536 * C349;
    const double C539 = C535 / C342;
    const double C538 = 2 * C534;
    const double C537 = C514 + C533;
    const double C544 = 2 * C540;
    const double C543 = C539 + C526;
    const double C542 = C538 - C372;
    const double C541 = C537 * C498;
    const double C547 = C544 / C342;
    const double C546 = C542 * ae;
    const double C545 = C541 / C342;
    const double C550 = C527 - C547;
    const double C549 = C546 / C342;
    const double C548 = C545 + C499;
    const double C552 = ae * C550;
    const double C551 = C548 + C549;
    const double C597 = 2 * C536;
    const double C596 = C552 * C498;
    const double C595 = -2 * C492;
    const double C594 = 2 * C476;
    const double C593 = C492 * C438;
    const double C592 = -2 * C426;
    const double C591 = C382 - C522;
    const double C590 = 2 * C400;
    const double C589 = C426 * C341;
    const double C604 = ae * C597;
    const double C603 = 2 * C596;
    const double C602 = ae * C594;
    const double C601 = 2 * C593;
    const double C600 = ae * C591;
    const double C599 = ae * C590;
    const double C598 = 2 * C589;
    const double C611 = 6. * C604;
    const double C610 = C603 / C342;
    const double C609 = 6. * C602;
    const double C608 = C601 / C342;
    const double C607 = C600 * C349;
    const double C606 = 6. * C599;
    const double C605 = C598 / C342;
    const double C615 = C611 / C354;
    const double C614 = C609 / C354;
    const double C613 = 2 * C607;
    const double C612 = C606 / C354;
    const double C619 = C610 + C615;
    const double C618 = C608 + C614;
    const double C617 = C613 / C342;
    const double C616 = C605 + C612;
    const double C620 = C527 - C617;
    const double C621 = ae * C620;
    const double C622 = -2 * C621;
    const double gx000200 =
        C412 * C413 * C583 -
        (((C616 * C341) / C342 +
          (2 * C426 +
           6 * ae * ((2 * C400 * C341) / C342 + (4. * ae * C355) / C354)) /
              C354) *
         std::pow(C583, 2)) /
            2.0 +
        C412 * C583 * C415;
    const double gx000020 = (C583 * C436 * C592) / 2.0 +
                            2 * C340 * C491 * C583 + 2 * C340 * C436 * C415;
    const double gx000002 = (C496 * C583 * C592) / 2.0 +
                            2 * C340 * C413 * C496 + 2 * C340 * C583 * C551;
    const double gx000110 =
        C389 * C477 * C583 - (C583 * C437 * C616) / 2.0 + C389 * C437 * C415;
    const double gx000101 =
        C389 * C413 * C497 - (C497 * C583 * C616) / 2.0 + C389 * C583 * C537;
    const double gx000011 = (C497 * C437 * C592) / 2.0 +
                            2 * C340 * C477 * C497 + 2 * C340 * C437 * C537;
    gx[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * gx000110;
    gx[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * gx000011;
    gx[(Ai + 0) * matrix_size + Bi + 2] +=
        cc * (-0.5 * gx000200 - 0.5 * gx000020 + gx000002);
    gx[(Ai + 0) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * gx000101;
    gx[(Ai + 0) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(0.75) * gx000200 - std::sqrt(0.75) * gx000020);
    const double gy000200 = C432 * C365 * C583 +
                            (C583 * C338 * -2 * ae *
                             (C467 - (2 * ae * (C382 - C462) * C346) / C342)) /
                                2.0 +
                            C338 * C365 * C415;
    const double gy000020 =
        C416 * C483 * C583 -
        (((C618 * C438) / C342 +
          (2 * C492 +
           6 * ae * ((2 * C476 * C438) / C342 + (4. * ae * C365) / C354)) /
              C354) *
         std::pow(C583, 2)) /
            2.0 +
        C583 * C483 * C415;
    const double gy000002 =
        C416 * C365 * C496 + (C496 * C583 * C595) / 2.0 + C583 * C365 * C551;
    const double gy000110 =
        C427 * C471 * C583 - (C583 * C334 * C618) / 2.0 + C334 * C471 * C415;
    const double gy000101 =
        C427 * C365 * C497 + (C497 * C334 * C595) / 2.0 + C334 * C365 * C537;
    const double gy000011 =
        C416 * C471 * C497 - (C497 * C583 * C618) / 2.0 + C583 * C471 * C537;
    gy[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * gy000110;
    gy[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * gy000011;
    gy[(Ai + 0) * matrix_size + Bi + 2] +=
        cc * (-0.5 * gy000200 - 0.5 * gy000020 + gy000002);
    gy[(Ai + 0) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * gy000101;
    gy[(Ai + 0) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(0.75) * gy000200 - std::sqrt(0.75) * gy000020);
    const double gz000200 =
        C432 * C583 * C366 + C338 * C413 * C366 + (C338 * C583 * C622) / 2.0;
    const double gz000020 =
        C416 * C436 * C366 + C583 * C491 * C366 + (C583 * C436 * C622) / 2.0;
    const double gz000002 =
        C416 * C583 * C543 + C583 * C413 * C543 -
        (std::pow(C583, 2) *
         ((C619 * C498) / C342 +
          (2 * C552 +
           6 * ae * ((2 * C536 * C498) / C342 + (4. * ae * C366) / C354)) /
              C354)) /
            2.0;
    const double gz000110 = C427 * C437 * C366 + C334 * C477 * C366 +
                            (C334 * C437 * -2 * C552) / 2.0;
    const double gz000101 =
        C427 * C583 * C531 + C334 * C413 * C531 - (C334 * C583 * C619) / 2.0;
    const double gz000011 =
        C416 * C437 * C531 + C583 * C477 * C531 - (C583 * C437 * C619) / 2.0;
    gz[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * gz000110;
    gz[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * gz000011;
    gz[(Ai + 0) * matrix_size + Bi + 2] +=
        cc * (-0.5 * gz000200 - 0.5 * gz000020 + gz000002);
    gz[(Ai + 0) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * gz000101;
    gz[(Ai + 0) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(0.75) * gz000200 - std::sqrt(0.75) * gz000020);
}

// Automatically generated, do not edit
