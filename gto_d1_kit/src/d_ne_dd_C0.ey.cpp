/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void vne_gradient_22_3(double ae,
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
    const double C12372 = ae + be;
    const double C12379 = 2. * Pi;
    const double C12378 = ae * be;
    const double C12377 = zA - zB;
    const double C12376 = yA - yB;
    const double C12375 = xA - xB;
    const double C12374 = bs[1];
    const double C12382 = std::pow(C12377, 2);
    const double C12381 = std::pow(C12376, 2);
    const double C12380 = std::pow(C12375, 2);
    const double C12383 = C12380 + C12381;
    const double C12384 = C12383 + C12382;
    const double C12385 = C12384 * C12378;
    const double C12386 = C12385 / C12372;
    const double C12387 = -C12386;
    const double C12388 = std::exp(C12387);
    const double C12389 = C12388 * C12379;
    const double C12390 = C12374 * C12389;
    const double C12396 = be * xB;
    const double C12395 = ae * xA;
    const double C12394 = be * C12375;
    const double C12393 = bs[2];
    const double C12399 = C12395 + C12396;
    const double C12398 = C12390 * C12394;
    const double C12397 = C12393 * C12389;
    const double C12401 = C12399 / C12372;
    const double C12400 = C12398 / C12372;
    const double C12403 = C12401 - xC;
    const double C12402 = -C12400;
    const double C12405 = C12403 * C12397;
    const double C12404 = C12402 / C12372;
    const double C12406 = C12405 / C12372;
    const double C12407 = C12404 - C12406;
    const double C12417 = C12375 * C12407;
    const double C12416 = C12407 * C12394;
    const double C12415 = C12397 / C12372;
    const double C12414 = C12390 / C12372;
    const double C12413 = 2. * C12372;
    const double C12412 = bs[3];
    const double C12411 = C12397 * C12394;
    const double C12421 = C12416 / C12372;
    const double C12420 = C12414 - C12415;
    const double C12419 = C12412 * C12389;
    const double C12418 = C12411 / C12372;
    const double C12424 = C12420 / C12413;
    const double C12423 = C12403 * C12419;
    const double C12422 = -C12418;
    const double C12426 = C12423 / C12372;
    const double C12425 = C12422 / C12372;
    const double C12427 = C12425 - C12426;
    const double C12428 = C12403 * C12427;
    const double C12429 = C12421 + C12428;
    const double C12430 = C12424 - C12429;
    const double C12431 = C12430 + C12417;
    const double C12438 = be * yB;
    const double C12437 = ae * yA;
    const double C12436 = be * C12376;
    const double C12440 = C12437 + C12438;
    const double C12439 = C12390 * C12436;
    const double C12442 = C12440 / C12372;
    const double C12441 = C12439 / C12372;
    const double C12444 = C12442 - yC;
    const double C12443 = -C12441;
    const double C12446 = C12444 * C12397;
    const double C12445 = C12443 / C12372;
    const double C12447 = C12446 / C12372;
    const double C12448 = C12445 - C12447;
    const double C12451 = C12375 * C12397;
    const double C12450 = C12375 * C12390;
    const double C12453 = C12451 / C12372;
    const double C12452 = C12450 / C12372;
    const double C12455 = C12427 + C12453;
    const double C12454 = C12407 + C12452;
    const double C12457 = C12444 * C12455;
    const double C12456 = C12454 * C12436;
    const double C12458 = C12456 / C12372;
    const double C12459 = C12458 + C12457;
    const double C12462 = C12444 * C12419;
    const double C12461 = C12397 * C12436;
    const double C12464 = C12462 / C12372;
    const double C12463 = C12461 / C12372;
    const double C12465 = -C12463;
    const double C12466 = C12465 / C12372;
    const double C12467 = C12466 - C12464;
    const double C12474 = be * zB;
    const double C12473 = ae * zA;
    const double C12472 = be * C12377;
    const double C12476 = C12473 + C12474;
    const double C12475 = C12390 * C12472;
    const double C12478 = C12476 / C12372;
    const double C12477 = C12475 / C12372;
    const double C12480 = C12478 - zC;
    const double C12479 = -C12477;
    const double C12482 = C12480 * C12397;
    const double C12481 = C12479 / C12372;
    const double C12483 = C12482 / C12372;
    const double C12484 = C12481 - C12483;
    const double C12487 = C12480 * C12455;
    const double C12486 = C12454 * C12472;
    const double C12488 = C12486 / C12372;
    const double C12489 = C12488 + C12487;
    const double C12492 = C12480 * C12419;
    const double C12491 = C12397 * C12472;
    const double C12494 = C12492 / C12372;
    const double C12493 = C12491 / C12372;
    const double C12495 = -C12493;
    const double C12496 = C12495 / C12372;
    const double C12497 = C12496 - C12494;
    const double C12503 = C12375 * C12454;
    const double C12504 = C12431 + C12503;
    const double C12510 = C12376 * C12390;
    const double C12511 = C12510 / C12372;
    const double C12512 = C12448 + C12511;
    const double C12514 = C12376 * C12454;
    const double C12515 = C12514 - C12459;
    const double C12517 = C12376 * C12397;
    const double C12518 = C12517 / C12372;
    const double C12519 = C12467 + C12518;
    const double C12523 = C12376 * C12448;
    const double C12522 = C12444 * C12467;
    const double C12521 = C12448 * C12436;
    const double C12524 = C12521 / C12372;
    const double C12525 = C12524 + C12522;
    const double C12526 = C12424 - C12525;
    const double C12527 = C12526 + C12523;
    const double C12530 = C12480 * C12519;
    const double C12529 = C12512 * C12472;
    const double C12531 = C12529 / C12372;
    const double C12532 = C12531 + C12530;
    const double C12534 = C12376 * C12512;
    const double C12535 = C12527 + C12534;
    const double C12539 = C12377 * C12484;
    const double C12538 = C12480 * C12497;
    const double C12537 = C12484 * C12472;
    const double C12540 = C12537 / C12372;
    const double C12541 = C12540 + C12538;
    const double C12542 = C12424 - C12541;
    const double C12543 = C12542 + C12539;
    const double C12574 = C12519 * C12472;
    const double C12573 = C12377 * C12512;
    const double C12572 = C12376 * C12455;
    const double C12571 = C12375 * C12455;
    const double C12570 = C12377 * C12397;
    const double C12569 = C12419 * C12472;
    const double C12568 = C12497 * C12472;
    const double C12567 = C12377 * C12454;
    const double C12566 = C12455 * C12472;
    const double C12565 = C12377 * C12390;
    const double C12564 = C12376 * C12419;
    const double C12563 = C12376 * C12397;
    const double C12562 = C12376 * C12467;
    const double C12561 = C12419 * C12436;
    const double C12560 = C12467 * C12436;
    const double C12559 = C12376 * C12454;
    const double C12558 = C12454 - C12455;
    const double C12557 = C12455 * C12436;
    const double C12556 = C12376 * C12390;
    const double C12555 = C12375 * C12419;
    const double C12554 = C12375 * C12427;
    const double C12553 = bs[4];
    const double C12552 = C12419 * C12394;
    const double C12551 = C12427 * C12394;
    const double C12550 = C12419 / C12372;
    const double C12549 = C12375 * C12397;
    const double C12548 = bs[3];
    const double C12547 = C12397 * C12394;
    const double C12546 = C12375 * C12390;
    const double C12545 = bs[2];
    const double C12599 = C12574 / C12372;
    const double C12598 = C12570 / C12372;
    const double C12597 = C12569 / C12372;
    const double C12596 = C12568 / C12372;
    const double C12595 = C12567 - C12489;
    const double C12594 = C12566 / C12372;
    const double C12593 = C12565 / C12372;
    const double C12592 = C12564 / C12372;
    const double C12591 = C12563 / C12372;
    const double C12590 = C12561 / C12372;
    const double C12589 = C12560 / C12372;
    const double C12588 = C12559 - C12459;
    const double C12587 = C12558 / C12413;
    const double C12586 = C12557 / C12372;
    const double C12585 = C12556 / C12372;
    const double C12584 = C12555 / C12372;
    const double C12583 = C12553 * C12389;
    const double C12582 = C12552 / C12372;
    const double C12581 = C12551 / C12372;
    const double C12580 = C12415 - C12550;
    const double C12579 = C12549 / C12372;
    const double C12578 = C12548 * C12389;
    const double C12577 = C12547 / C12372;
    const double C12576 = C12546 / C12372;
    const double C12575 = C12545 * C12389;
    const double C12613 = C12497 + C12598;
    const double C12612 = C12480 * C12583;
    const double C12611 = -C12597;
    const double C12610 = C12484 + C12593;
    const double C12609 = C12467 + C12591;
    const double C12608 = C12444 * C12583;
    const double C12607 = -C12590;
    const double C12606 = C12448 + C12585;
    const double C12605 = C12403 * C12583;
    const double C12604 = -C12582;
    const double C12603 = C12580 / C12413;
    const double C12602 = C12407 + C12576;
    const double C12601 = C12403 * C12578;
    const double C12600 = -C12577;
    const double C12623 = C12612 / C12372;
    const double C12622 = C12611 / C12372;
    const double C12621 = C12377 * C12610;
    const double C12620 = C12608 / C12372;
    const double C12619 = C12607 / C12372;
    const double C12618 = C12605 / C12372;
    const double C12617 = C12604 / C12372;
    const double C12616 = C12375 * C12602;
    const double C12615 = C12601 / C12372;
    const double C12614 = C12600 / C12372;
    const double C12627 = C12622 - C12623;
    const double C12626 = C12619 - C12620;
    const double C12625 = C12617 - C12618;
    const double C12624 = C12614 - C12615;
    const double C12632 = C12480 * C12627;
    const double C12631 = C12626 + C12592;
    const double C12630 = C12444 * C12626;
    const double C12629 = C12625 + C12584;
    const double C12628 = C12403 * C12625;
    const double C12638 = C12480 * C12631;
    const double C12637 = C12596 + C12632;
    const double C12636 = C12480 * C12629;
    const double C12635 = C12589 + C12630;
    const double C12634 = C12444 * C12629;
    const double C12633 = C12581 + C12628;
    const double C12644 = C12599 + C12638;
    const double C12643 = C12603 - C12637;
    const double C12642 = C12594 + C12636;
    const double C12641 = C12603 - C12635;
    const double C12640 = C12586 + C12634;
    const double C12639 = C12603 - C12633;
    const double C12647 = C12572 - C12640;
    const double C12646 = C12641 + C12562;
    const double C12645 = C12639 + C12554;
    const double C12648 = C12645 + C12571;
    const double C426 =
        (bs[1] *
         std::exp(-((std::pow(xA - xB, 2) + std::pow(yA - yB, 2) +
                     std::pow(zA - zB, 2)) *
                    ae * be) /
                  C12372) *
         2. * Pi) /
        C12372;
    const double C427 =
        (-(C12390 * be * C12375) / C12372) / C12372 -
        (((ae * xA + be * xB) / C12372 - xC) * C12575) / C12372 + C12576;
    const double C428 = C12575 / C12372;
    const double C429 = (C12390 / C12372 - C12397 / C12372) / (2. * C12372) -
                        ((C12407 * C12394) / C12372 + C12403 * C12624) +
                        C12375 * C12407 + C12616;
    const double C430 = C12624 + C12579;
    const double C431 = C12578 / C12372;
    const double C432 = (2 * (C12407 - C12427)) / C12413 -
                        ((C12430 * C12394) / C12372 + C12403 * C12639) +
                        C12375 * C12430 + C12375 * C12431 +
                        C12375 * (C12431 + C12616);
    const double C433 = C12645 + C12375 * (C12427 + C12579);
    const double C435 = C12583 / C12372;
    const double C908 = C12424 -
                        ((C12448 * C12436) / C12372 +
                         C12444 * ((-(C12397 * C12436) / C12372) / C12372 -
                                   (C12444 * C12419) / C12372)) +
                        C12376 * C12448 + C12376 * C12606;
    const double C909 = (C12459 * C12436) / C12372 + C12444 * C12640 + C12587 -
                        C12376 * C12459 + C12376 * C12588;
    const double C910 = C12646 + C12376 * C12609;
    const double C1311 = C12424 -
                         ((C12484 * C12472) / C12372 +
                          C12480 * ((-(C12397 * C12472) / C12372) / C12372 -
                                    (C12480 * C12419) / C12372)) +
                         C12377 * C12484 + C12621;
    const double C1312 = (C12489 * C12472) / C12372 + C12480 * C12642 + C12587 -
                         C12377 * C12489 + C12377 * C12595;
    const double C1313 = C12643 + C12377 * C12497 + C12377 * C12613;
    const double C1316 = C12627 + (C12377 * C12419) / C12372;
    const double C1757 =
        C12376 * C12504 - ((C12504 * C12436) / C12372 + C12444 * C12648);
    const double C2168 =
        C12377 * C12504 - ((C12504 * C12472) / C12372 + C12480 * C12648);
    const double C2169 = C12377 * C12455 - C12642;
    const double C2514 =
        C12573 - ((C12512 * C12472) / C12372 + C12480 * C12609);
    const double C2515 =
        C12377 * C12515 - ((C12515 * C12472) / C12372 + C12480 * C12647);
    const double C2516 = C12377 * C12519 - C12644;
    const double C3282 = (2 * (C12448 - C12467)) / C12413 -
                         ((C12526 * C12436) / C12372 + C12444 * C12641) +
                         C12376 * C12526 + C12376 * C12527 +
                         C12376 * (C12527 + C12376 * C12512);
    const double C3629 = (C12532 * C12472) / C12372 + C12480 * C12644 +
                         (C12512 - C12519) / C12413 - C12377 * C12532 +
                         C12377 * (C12573 - C12532);
    const double C4235 =
        C12377 * C12535 -
        ((C12535 * C12472) / C12372 + C12480 * (C12646 + C12376 * C12519));
    const double C5699 = (2 * (C12484 - C12497)) / C12413 -
                         ((C12542 * C12472) / C12372 + C12480 * C12643) +
                         C12377 * C12542 + C12377 * C12543 +
                         C12377 * (C12543 + C12621);
    const double C451 = be * zB;
    const double C450 = ae * zA;
    const double C449 = be * yB;
    const double C448 = ae * yA;
    const double C447 = bs[5];
    const double C446 = bs[4];
    const double C445 = bs[3];
    const double C444 = bs[2];
    const double C443 = ae * be;
    const double C442 = zA - zB;
    const double C441 = yA - yB;
    const double C440 = xA - xB;
    const double C439 = bs[1];
    const double C438 = ae + be;
    const double C437 = be * xB;
    const double C436 = ae * xA;
    const double C458 = C450 + C451;
    const double C457 = C448 + C449;
    const double C456 = 2 * C438;
    const double C455 = std::pow(C442, 2);
    const double C454 = std::pow(C441, 2);
    const double C453 = std::pow(C440, 2);
    const double C452 = C436 + C437;
    const double C462 = C458 / C438;
    const double C461 = C457 / C438;
    const double C460 = C453 + C454;
    const double C459 = C452 / C438;
    const double C467 = C462 - zC;
    const double C466 = C461 - yC;
    const double C465 = C459 - xC;
    const double C464 = C460 + C455;
    const double C463 = C459 - xB;
    const double C468 = C464 * C443;
    const double C469 = C468 / C438;
    const double C470 = -C469;
    const double C471 = std::exp(C470);
    const double C472 = Pi * C471;
    const double C475 = C472 * C467;
    const double C474 = C472 * C466;
    const double C473 = C472 * C465;
    const double C478 = 4 * C475;
    const double C477 = 4 * C474;
    const double C476 = 4 * C473;
    const double C490 = C446 * C478;
    const double C489 = C445 * C478;
    const double C488 = C444 * C478;
    const double C487 = C439 * C478;
    const double C486 = C446 * C477;
    const double C485 = C445 * C477;
    const double C484 = C444 * C477;
    const double C483 = C439 * C477;
    const double C482 = C446 * C476;
    const double C481 = C445 * C476;
    const double C480 = C444 * C476;
    const double C479 = C439 * C476;
    const double C517 = C489 / C456;
    const double C516 = C465 * C490;
    const double C515 = C463 * C489;
    const double C514 = C488 / C456;
    const double C513 = C465 * C489;
    const double C512 = C463 * C488;
    const double C511 = C487 / C456;
    const double C510 = C465 * C488;
    const double C509 = C463 * C487;
    const double C508 = C485 / C456;
    const double C507 = C465 * C486;
    const double C506 = C463 * C485;
    const double C505 = C484 / C456;
    const double C504 = C465 * C485;
    const double C503 = C463 * C484;
    const double C502 = C483 / C456;
    const double C501 = C465 * C484;
    const double C500 = C463 * C483;
    const double C499 = C481 / C456;
    const double C498 = C465 * C482;
    const double C497 = C463 * C481;
    const double C496 = C480 / C456;
    const double C495 = C465 * C481;
    const double C494 = C463 * C480;
    const double C493 = C479 / C456;
    const double C492 = C465 * C480;
    const double C491 = C463 * C479;
    const double C526 = C515 - C516;
    const double C525 = C512 - C513;
    const double C524 = C509 - C510;
    const double C523 = C506 - C507;
    const double C522 = C503 - C504;
    const double C521 = C500 - C501;
    const double C520 = C497 + C431;
    const double C519 = C494 + C428;
    const double C518 = C491 + C426;
    const double C541 = C525 / C438;
    const double C540 = C465 * C526;
    const double C539 = C463 * C525;
    const double C538 = C524 / C438;
    const double C537 = C465 * C525;
    const double C536 = C463 * C524;
    const double C535 = C522 / C438;
    const double C534 = C465 * C523;
    const double C533 = C463 * C522;
    const double C532 = C521 / C438;
    const double C531 = C465 * C522;
    const double C530 = C463 * C521;
    const double C529 = C520 - C498;
    const double C528 = C519 - C495;
    const double C527 = C518 - C492;
    const double C551 = C539 + C514;
    const double C550 = C536 + C511;
    const double C549 = C533 + C505;
    const double C548 = C530 + C502;
    const double C547 = C528 / C438;
    const double C546 = C465 * C529;
    const double C545 = C463 * C528;
    const double C544 = C527 / C438;
    const double C543 = C465 * C528;
    const double C542 = C463 * C527;
    const double C557 = C551 - C540;
    const double C556 = C550 - C537;
    const double C555 = C549 - C534;
    const double C554 = C548 - C531;
    const double C553 = C545 + C496;
    const double C552 = C542 + C493;
    const double C563 = C557 - C517;
    const double C562 = C556 - C514;
    const double C561 = C555 - C508;
    const double C560 = C554 - C505;
    const double C559 = C553 + C430;
    const double C558 = C552 + C427;
    const double C569 = C465 * C563;
    const double C568 = C463 * C562;
    const double C567 = C465 * C561;
    const double C566 = C463 * C560;
    const double C565 = C559 - C546;
    const double C564 = C558 - C543;
    const double C573 = C568 + C538;
    const double C572 = C566 + C532;
    const double C571 = C565 - C499;
    const double C570 = C564 - C496;
    const double C577 = C573 - C569;
    const double C576 = C572 - C567;
    const double C575 = C465 * C571;
    const double C574 = C463 * C570;
    const double C580 = C577 - C541;
    const double C579 = C576 - C535;
    const double C578 = C574 + C544;
    const double C581 = C578 + C429;
    const double C582 = C581 - C575;
    const double C583 = C582 - C547;
    const double C923 = C466 * C490;
    const double C922 = C466 * C489;
    const double C921 = C466 * C488;
    const double C920 = C466 * C486;
    const double C919 = C466 * C485;
    const double C918 = C466 * C484;
    const double C917 = C466 * C482;
    const double C916 = C466 * C481;
    const double C915 = C466 * C480;
    const double C914 = C461 - yB;
    const double C932 = C914 * C489;
    const double C931 = C914 * C488;
    const double C930 = C914 * C487;
    const double C929 = C914 * C485;
    const double C928 = C914 * C484;
    const double C927 = C914 * C483;
    const double C926 = C914 * C481;
    const double C925 = C914 * C480;
    const double C924 = C914 * C479;
    const double C941 = C932 - C923;
    const double C940 = C931 - C922;
    const double C939 = C930 - C921;
    const double C938 = C929 + C431;
    const double C937 = C928 + C428;
    const double C936 = C927 + C426;
    const double C935 = C926 - C917;
    const double C934 = C925 - C916;
    const double C933 = C924 - C915;
    const double C952 = C466 * C941;
    const double C951 = C914 * C940;
    const double C950 = C466 * C940;
    const double C949 = C914 * C939;
    const double C948 = C938 - C920;
    const double C947 = C937 - C919;
    const double C946 = C936 - C918;
    const double C945 = C466 * C935;
    const double C944 = C914 * C934;
    const double C943 = C466 * C934;
    const double C942 = C914 * C933;
    const double C960 = C951 + C514;
    const double C959 = C949 + C511;
    const double C958 = C466 * C948;
    const double C957 = C914 * C947;
    const double C956 = C466 * C947;
    const double C955 = C914 * C946;
    const double C954 = C944 + C496;
    const double C953 = C942 + C493;
    const double C966 = C960 - C952;
    const double C965 = C959 - C950;
    const double C964 = C957 + C505;
    const double C963 = C955 + C502;
    const double C962 = C954 - C945;
    const double C961 = C953 - C943;
    const double C972 = C966 - C517;
    const double C971 = C965 - C514;
    const double C970 = C964 + C12609;
    const double C969 = C963 + C12606;
    const double C968 = C962 - C499;
    const double C967 = C961 - C496;
    const double C978 = C465 * C972;
    const double C977 = C463 * C971;
    const double C976 = C970 - C958;
    const double C975 = C969 - C956;
    const double C974 = C465 * C968;
    const double C973 = C463 * C967;
    const double C982 = C977 - C978;
    const double C981 = C976 - C508;
    const double C980 = C975 - C505;
    const double C979 = C973 + C908;
    const double C985 = C465 * C981;
    const double C984 = C463 * C980;
    const double C983 = C979 - C974;
    const double C986 = C984 - C985;
    const double C1326 = C467 * C490;
    const double C1325 = C467 * C489;
    const double C1324 = C467 * C488;
    const double C1323 = C467 * C486;
    const double C1322 = C467 * C485;
    const double C1321 = C467 * C484;
    const double C1320 = C467 * C482;
    const double C1319 = C467 * C481;
    const double C1318 = C467 * C480;
    const double C1317 = C462 - zB;
    const double C1335 = C1317 * C489;
    const double C1334 = C1317 * C488;
    const double C1333 = C1317 * C487;
    const double C1332 = C1317 * C485;
    const double C1331 = C1317 * C484;
    const double C1330 = C1317 * C483;
    const double C1329 = C1317 * C481;
    const double C1328 = C1317 * C480;
    const double C1327 = C1317 * C479;
    const double C1344 = C1335 + C431;
    const double C1343 = C1334 + C428;
    const double C1342 = C1333 + C426;
    const double C1341 = C1332 - C1323;
    const double C1340 = C1331 - C1322;
    const double C1339 = C1330 - C1321;
    const double C1338 = C1329 - C1320;
    const double C1337 = C1328 - C1319;
    const double C1336 = C1327 - C1318;
    const double C1355 = C1344 - C1326;
    const double C1354 = C1343 - C1325;
    const double C1353 = C1342 - C1324;
    const double C1352 = C467 * C1341;
    const double C1351 = C1317 * C1340;
    const double C1350 = C467 * C1340;
    const double C1349 = C1317 * C1339;
    const double C1348 = C467 * C1338;
    const double C1347 = C1317 * C1337;
    const double C1346 = C467 * C1337;
    const double C1345 = C1317 * C1336;
    const double C1363 = C467 * C1355;
    const double C1362 = C1317 * C1354;
    const double C1361 = C467 * C1354;
    const double C1360 = C1317 * C1353;
    const double C1359 = C1351 + C505;
    const double C1358 = C1349 + C502;
    const double C1357 = C1347 + C496;
    const double C1356 = C1345 + C493;
    const double C1369 = C1362 + C514;
    const double C1368 = C1360 + C511;
    const double C1367 = C1359 - C1352;
    const double C1366 = C1358 - C1350;
    const double C1365 = C1357 - C1348;
    const double C1364 = C1356 - C1346;
    const double C1375 = C1369 + C12613;
    const double C1374 = C1368 + C12610;
    const double C1373 = C1367 - C508;
    const double C1372 = C1366 - C505;
    const double C1371 = C1365 - C499;
    const double C1370 = C1364 - C496;
    const double C1381 = C1375 - C1363;
    const double C1380 = C1374 - C1361;
    const double C1379 = C465 * C1373;
    const double C1378 = C463 * C1372;
    const double C1377 = C465 * C1371;
    const double C1376 = C463 * C1370;
    const double C1385 = C1381 - C517;
    const double C1384 = C1380 - C514;
    const double C1383 = C1378 - C1379;
    const double C1382 = C1376 + C1311;
    const double C1388 = C465 * C1385;
    const double C1387 = C463 * C1384;
    const double C1386 = C1382 - C1377;
    const double C1389 = C1387 - C1388;
    const double C1776 = C940 / C456;
    const double C1775 = C465 * C941;
    const double C1774 = C463 * C940;
    const double C1773 = C939 / C456;
    const double C1772 = C465 * C940;
    const double C1771 = C463 * C939;
    const double C1770 = C947 / C456;
    const double C1769 = C465 * C948;
    const double C1768 = C463 * C947;
    const double C1767 = C946 / C456;
    const double C1766 = C465 * C947;
    const double C1765 = C463 * C946;
    const double C1764 = C934 / C456;
    const double C1763 = C465 * C935;
    const double C1762 = C463 * C934;
    const double C1761 = C933 / C456;
    const double C1760 = C465 * C934;
    const double C1759 = C463 * C933;
    const double C1782 = C1774 - C1775;
    const double C1781 = C1771 - C1772;
    const double C1780 = C1768 - C1769;
    const double C1779 = C1765 - C1766;
    const double C1778 = C1762 + C12609;
    const double C1777 = C1759 + C12606;
    const double C1788 = C465 * C1782;
    const double C1787 = C463 * C1781;
    const double C1786 = C465 * C1780;
    const double C1785 = C463 * C1779;
    const double C1784 = C1778 - C1763;
    const double C1783 = C1777 - C1760;
    const double C1792 = C1787 + C1773;
    const double C1791 = C1785 + C1767;
    const double C1790 = C465 * C1784;
    const double C1789 = C463 * C1783;
    const double C1795 = C1792 - C1788;
    const double C1794 = C1791 - C1786;
    const double C1793 = C1789 + C1761;
    const double C1798 = C1795 - C1776;
    const double C1797 = C1794 - C1770;
    const double C1796 = C1793 + C12588;
    const double C1799 = C1796 - C1790;
    const double C1800 = C1799 - C1764;
    const double C2187 = C1354 / C456;
    const double C2186 = C465 * C1355;
    const double C2185 = C463 * C1354;
    const double C2184 = C1353 / C456;
    const double C2183 = C465 * C1354;
    const double C2182 = C463 * C1353;
    const double C2181 = C1340 / C456;
    const double C2180 = C465 * C1341;
    const double C2179 = C463 * C1340;
    const double C2178 = C1339 / C456;
    const double C2177 = C465 * C1340;
    const double C2176 = C463 * C1339;
    const double C2175 = C1337 / C456;
    const double C2174 = C465 * C1338;
    const double C2173 = C463 * C1337;
    const double C2172 = C1336 / C456;
    const double C2171 = C465 * C1337;
    const double C2170 = C463 * C1336;
    const double C2193 = C2185 - C2186;
    const double C2192 = C2182 - C2183;
    const double C2191 = C2179 - C2180;
    const double C2190 = C2176 - C2177;
    const double C2189 = C2173 + C12613;
    const double C2188 = C2170 + C12610;
    const double C2199 = C465 * C2193;
    const double C2198 = C463 * C2192;
    const double C2197 = C465 * C2191;
    const double C2196 = C463 * C2190;
    const double C2195 = C2189 - C2174;
    const double C2194 = C2188 - C2171;
    const double C2203 = C2198 + C2184;
    const double C2202 = C2196 + C2178;
    const double C2201 = C465 * C2195;
    const double C2200 = C463 * C2194;
    const double C2206 = C2203 - C2199;
    const double C2205 = C2202 - C2197;
    const double C2204 = C2200 + C2172;
    const double C2209 = C2206 - C2187;
    const double C2208 = C2205 - C2181;
    const double C2207 = C2204 + C12595;
    const double C2210 = C2207 - C2201;
    const double C2211 = C2210 - C2175;
    const double C2528 = C466 * C1355;
    const double C2527 = C914 * C1354;
    const double C2526 = C466 * C1354;
    const double C2525 = C914 * C1353;
    const double C2524 = C466 * C1341;
    const double C2523 = C914 * C1340;
    const double C2522 = C466 * C1340;
    const double C2521 = C914 * C1339;
    const double C2520 = C466 * C1338;
    const double C2519 = C914 * C1337;
    const double C2518 = C466 * C1337;
    const double C2517 = C914 * C1336;
    const double C2534 = C2527 - C2528;
    const double C2533 = C2525 - C2526;
    const double C2532 = C2523 + C12613;
    const double C2531 = C2521 + C12610;
    const double C2530 = C2519 - C2520;
    const double C2529 = C2517 - C2518;
    const double C2540 = C465 * C2534;
    const double C2539 = C463 * C2533;
    const double C2538 = C2532 - C2524;
    const double C2537 = C2531 - C2522;
    const double C2536 = C465 * C2530;
    const double C2535 = C463 * C2529;
    const double C2544 = C2539 - C2540;
    const double C2543 = C465 * C2538;
    const double C2542 = C463 * C2537;
    const double C2541 = C2535 + C2514;
    const double C2546 = C2542 - C2543;
    const double C2545 = C2541 - C2536;
    const double C3294 = C940 / C438;
    const double C3293 = C466 * C972;
    const double C3292 = C939 / C438;
    const double C3291 = C914 * C971;
    const double C3290 = C947 / C438;
    const double C3289 = C466 * C981;
    const double C3288 = C946 / C438;
    const double C3287 = C914 * C980;
    const double C3286 = C934 / C438;
    const double C3285 = C466 * C968;
    const double C3284 = C933 / C438;
    const double C3283 = C914 * C967;
    const double C3297 = C3291 + C3292;
    const double C3296 = C3287 + C3288;
    const double C3295 = C3283 + C3284;
    const double C3300 = C3297 - C3293;
    const double C3299 = C3296 + C908;
    const double C3298 = C3295 - C3285;
    const double C3303 = C3300 - C3294;
    const double C3302 = C3299 - C3289;
    const double C3301 = C3298 - C3286;
    const double C3304 = C3302 - C3290;
    const double C3635 = C466 * C1385;
    const double C3634 = C914 * C1384;
    const double C3633 = C466 * C1373;
    const double C3632 = C914 * C1372;
    const double C3631 = C466 * C1371;
    const double C3630 = C914 * C1370;
    const double C3638 = C3634 - C3635;
    const double C3637 = C3632 + C1311;
    const double C3636 = C3630 - C3631;
    const double C3639 = C3637 - C3633;
    const double C4606 = C466 * C2534;
    const double C4605 = C914 * C2533;
    const double C4604 = C466 * C2538;
    const double C4603 = C914 * C2537;
    const double C4602 = C466 * C2530;
    const double C4601 = C914 * C2529;
    const double C4609 = C4605 + C2184;
    const double C4608 = C4603 + C2178;
    const double C4607 = C4601 + C2172;
    const double C4612 = C4609 - C4606;
    const double C4611 = C4608 + C2514;
    const double C4610 = C4607 - C4602;
    const double C4615 = C4612 - C2187;
    const double C4614 = C4611 - C4604;
    const double C4613 = C4610 - C2175;
    const double C4616 = C4614 - C2181;
    const double C5711 = C1354 / C438;
    const double C5710 = C467 * C1385;
    const double C5709 = C1353 / C438;
    const double C5708 = C1317 * C1384;
    const double C5707 = C1340 / C438;
    const double C5706 = C467 * C1373;
    const double C5705 = C1339 / C438;
    const double C5704 = C1317 * C1372;
    const double C5703 = C1337 / C438;
    const double C5702 = C467 * C1371;
    const double C5701 = C1336 / C438;
    const double C5700 = C1317 * C1370;
    const double C5714 = C5708 + C5709;
    const double C5713 = C5704 + C5705;
    const double C5712 = C5700 + C5701;
    const double C5717 = C5714 + C1311;
    const double C5716 = C5713 - C5706;
    const double C5715 = C5712 - C5702;
    const double C5720 = C5717 - C5710;
    const double C5719 = C5716 - C5707;
    const double C5718 = C5715 - C5703;
    const double C5721 = C5720 - C5711;
    const double C12856 = C442 * C1798;
    const double C12855 = C442 * C1797;
    const double C12854 = C442 * C1800;
    const double C12853 = C442 * C982;
    const double C12852 = C442 * C986;
    const double C12851 = C442 * C983;
    const double C12850 = C442 * C2533;
    const double C12849 = C442 * C3638;
    const double C12848 = C914 * C5721;
    const double C12847 = C442 * C2537;
    const double C12846 = C442 * C3639;
    const double C12845 = C914 * C5719;
    const double C12844 = C442 * C2529;
    const double C12843 = C442 * C3636;
    const double C12842 = C914 * C5718;
    const double C12841 = C442 * C2192;
    const double C12840 = C442 * C1389;
    const double C12839 = C463 * C5721;
    const double C12838 = C442 * C2190;
    const double C12837 = C442 * C1383;
    const double C12836 = C463 * C5719;
    const double C12835 = C442 * C2194;
    const double C12834 = C442 * C1386;
    const double C12833 = C463 * C5718;
    const double C12832 = C442 * C1781;
    const double C12831 = C442 * C2544;
    const double C12830 = C463 * C3638;
    const double C12829 = C442 * C1779;
    const double C12828 = C442 * C2546;
    const double C12827 = C463 * C3639;
    const double C12826 = C442 * C1783;
    const double C12825 = C442 * C2545;
    const double C12824 = C463 * C3636;
    const double C12823 = C442 * C1384;
    const double C12822 = C1355 / C438;
    const double C12821 = C1317 * C1385;
    const double C12820 = C442 * C1372;
    const double C12819 = C1341 / C438;
    const double C12818 = C1317 * C1373;
    const double C12817 = C442 * C1370;
    const double C12816 = C1338 / C438;
    const double C12815 = C1317 * C1371;
    const double C12814 = C442 * C971;
    const double C12813 = C442 * C4615;
    const double C12812 = C442 * C980;
    const double C12811 = C442 * C4616;
    const double C12810 = C442 * C967;
    const double C12809 = C442 * C4613;
    const double C12808 = C442 * C562;
    const double C12807 = C442 * C2209;
    const double C12806 = C442 * C560;
    const double C12805 = C442 * C2208;
    const double C12804 = C442 * C570;
    const double C12803 = C442 * C2211;
    const double C12802 = C441 * C2533;
    const double C12801 = C2534 / C438;
    const double C12800 = C2533 / C438;
    const double C12799 = C914 * C4615;
    const double C12798 = C441 * C2537;
    const double C12797 = C2538 / C438;
    const double C12796 = C2537 / C438;
    const double C12795 = C914 * C4616;
    const double C12794 = C441 * C2529;
    const double C12793 = C2530 / C438;
    const double C12792 = C2529 / C438;
    const double C12791 = C914 * C4613;
    const double C12790 = C441 * C2192;
    const double C12789 = C441 * C2544;
    const double C12788 = C914 * C2534;
    const double C12787 = C463 * C4615;
    const double C12786 = C441 * C2190;
    const double C12785 = C441 * C2546;
    const double C12784 = C914 * C2538;
    const double C12783 = C463 * C4616;
    const double C12782 = C441 * C2194;
    const double C12781 = C441 * C2545;
    const double C12780 = C914 * C2530;
    const double C12779 = C463 * C4613;
    const double C12778 = C441 * C1781;
    const double C12777 = C441 * C982;
    const double C12776 = C463 * C3303;
    const double C12775 = C441 * C1779;
    const double C12774 = C441 * C986;
    const double C12773 = C463 * C3304;
    const double C12772 = C441 * C1783;
    const double C12771 = C441 * C983;
    const double C12770 = C463 * C3301;
    const double C12769 = C441 * C1384;
    const double C12768 = C914 * C1385;
    const double C12767 = C914 * C3638;
    const double C12766 = C441 * C1372;
    const double C12765 = C914 * C1373;
    const double C12764 = C914 * C3639;
    const double C12763 = C441 * C1370;
    const double C12762 = C914 * C1371;
    const double C12761 = C914 * C3636;
    const double C12760 = C441 * C971;
    const double C12759 = C941 / C438;
    const double C12758 = C914 * C972;
    const double C12757 = C441 * C980;
    const double C12756 = C948 / C438;
    const double C12755 = C914 * C981;
    const double C12754 = C441 * C967;
    const double C12753 = C935 / C438;
    const double C12752 = C914 * C968;
    const double C12751 = C441 * C562;
    const double C12750 = C441 * C1798;
    const double C12749 = C441 * C560;
    const double C12748 = C441 * C1797;
    const double C12747 = C441 * C570;
    const double C12746 = C441 * C1800;
    const double C12745 = C2534 / C456;
    const double C12744 = C914 * C1355;
    const double C12743 = C463 * C2534;
    const double C12742 = C2533 / C456;
    const double C12741 = C463 * C2544;
    const double C12740 = C2538 / C456;
    const double C12739 = C914 * C1341;
    const double C12738 = C463 * C2538;
    const double C12737 = C2537 / C456;
    const double C12736 = C463 * C2546;
    const double C12735 = C2530 / C456;
    const double C12734 = C914 * C1338;
    const double C12733 = C463 * C2530;
    const double C12732 = C2529 / C456;
    const double C12731 = C463 * C2545;
    const double C12730 = C2193 / C438;
    const double C12729 = C1355 / C456;
    const double C12728 = C463 * C1355;
    const double C12727 = C463 * C2193;
    const double C12726 = C2192 / C438;
    const double C12725 = C463 * C2209;
    const double C12724 = C2191 / C438;
    const double C12723 = C1341 / C456;
    const double C12722 = C463 * C1341;
    const double C12721 = C463 * C2191;
    const double C12720 = C2190 / C438;
    const double C12719 = C463 * C2208;
    const double C12718 = C2195 / C438;
    const double C12717 = C1338 / C456;
    const double C12716 = C463 * C1338;
    const double C12715 = C463 * C2195;
    const double C12714 = C2194 / C438;
    const double C12713 = C463 * C2211;
    const double C12712 = C1782 / C438;
    const double C12711 = C941 / C456;
    const double C12710 = C463 * C941;
    const double C12709 = C463 * C1782;
    const double C12708 = C1781 / C438;
    const double C12707 = C463 * C1798;
    const double C12706 = C1780 / C438;
    const double C12705 = C948 / C456;
    const double C12704 = C463 * C948;
    const double C12703 = C463 * C1780;
    const double C12702 = C1779 / C438;
    const double C12701 = C463 * C1797;
    const double C12700 = C1784 / C438;
    const double C12699 = C935 / C456;
    const double C12698 = C463 * C935;
    const double C12697 = C463 * C1784;
    const double C12696 = C1783 / C438;
    const double C12695 = C463 * C1800;
    const double C12694 = C1385 / C456;
    const double C12693 = C1317 * C490;
    const double C12692 = C1317 * C1355;
    const double C12691 = C463 * C1385;
    const double C12690 = C1384 / C456;
    const double C12689 = C463 * C1389;
    const double C12688 = C1373 / C456;
    const double C12687 = C1317 * C486;
    const double C12686 = C1317 * C1341;
    const double C12685 = C463 * C1373;
    const double C12684 = C1372 / C456;
    const double C12683 = C463 * C1383;
    const double C12682 = C1371 / C456;
    const double C12681 = C1317 * C482;
    const double C12680 = C1317 * C1338;
    const double C12679 = C463 * C1371;
    const double C12678 = C1370 / C456;
    const double C12677 = C463 * C1386;
    const double C12676 = C972 / C456;
    const double C12675 = C914 * C490;
    const double C12674 = C914 * C941;
    const double C12673 = C463 * C972;
    const double C12672 = C971 / C456;
    const double C12671 = C463 * C982;
    const double C12670 = C981 / C456;
    const double C12669 = C914 * C486;
    const double C12668 = C914 * C948;
    const double C12667 = C463 * C981;
    const double C12666 = C980 / C456;
    const double C12665 = C463 * C986;
    const double C12664 = C968 / C456;
    const double C12663 = C914 * C482;
    const double C12662 = C914 * C935;
    const double C12661 = C463 * C968;
    const double C12660 = C967 / C456;
    const double C12659 = C463 * C983;
    const double C12658 = C490 / C456;
    const double C12657 = C447 * C478;
    const double C12656 = C486 / C456;
    const double C12655 = C447 * C477;
    const double C12654 = C482 / C456;
    const double C12653 = C447 * C476;
    const double C12954 = C3638 - C12850;
    const double C12953 = C3639 - C12847;
    const double C12952 = C12845 + C5699;
    const double C12951 = C3636 - C12844;
    const double C12950 = C1389 - C12841;
    const double C12949 = C1383 - C12838;
    const double C12948 = C1386 - C12835;
    const double C12947 = C12833 + C5699;
    const double C12946 = C2544 - C12832;
    const double C12945 = C2546 - C12829;
    const double C12944 = C2545 - C12826;
    const double C12943 = C12824 + C3629;
    const double C12942 = C5721 - C12823;
    const double C12941 = C12821 + C5711;
    const double C12940 = C5719 - C12820;
    const double C12939 = C12818 + C5707;
    const double C12938 = C5718 - C12817;
    const double C12937 = C12815 + C5703;
    const double C12936 = C4615 - C12814;
    const double C12935 = C4616 - C12812;
    const double C12934 = C4613 - C12810;
    const double C12933 = C2209 - C12808;
    const double C12932 = C2208 - C12806;
    const double C12931 = C2211 - C12804;
    const double C12930 = C4615 - C12802;
    const double C12929 = C12799 + C12800;
    const double C12928 = C4616 - C12798;
    const double C12927 = C12795 + C12796;
    const double C12926 = C4613 - C12794;
    const double C12925 = C12791 + C12792;
    const double C12924 = C2544 - C12790;
    const double C12923 = C12788 + C2187;
    const double C12922 = C2546 - C12786;
    const double C12921 = C12784 + C2181;
    const double C12920 = C2545 - C12782;
    const double C12919 = C12780 + C2175;
    const double C12918 = C12779 + C4235;
    const double C12917 = C982 - C12778;
    const double C12916 = C986 - C12775;
    const double C12915 = C983 - C12772;
    const double C12914 = C12770 + C3282;
    const double C12913 = C3638 - C12769;
    const double C12912 = C12767 + C12690;
    const double C12911 = C3639 - C12766;
    const double C12910 = C12765 + C1313;
    const double C12909 = C12764 + C12684;
    const double C12908 = C3636 - C12763;
    const double C12907 = C12761 + C12678;
    const double C12906 = C3303 - C12760;
    const double C12905 = C12758 + C3294;
    const double C12904 = C3304 - C12757;
    const double C12903 = C12755 + C3290;
    const double C12902 = C3301 - C12754;
    const double C12901 = C12752 + C3286;
    const double C12900 = C1798 - C12751;
    const double C12899 = C1797 - C12749;
    const double C12898 = C1800 - C12747;
    const double C12897 = C12741 + C12742;
    const double C12896 = C12739 + C1316;
    const double C12895 = C12736 + C12737;
    const double C12894 = C12733 + C2516;
    const double C12893 = C12731 + C12732;
    const double C12892 = C12727 + C2187;
    const double C12891 = C12725 + C12726;
    const double C12890 = C12721 + C2181;
    const double C12889 = C12719 + C12720;
    const double C12888 = C12716 + C1316;
    const double C12887 = C12715 + C2175;
    const double C12886 = C12713 + C12714;
    const double C12885 = C12709 + C1776;
    const double C12884 = C12707 + C12708;
    const double C12883 = C12703 + C1770;
    const double C12882 = C12701 + C12702;
    const double C12881 = C12698 + C12631;
    const double C12880 = C12697 + C1764;
    const double C12879 = C12695 + C12696;
    const double C12878 = C467 * C12657;
    const double C12877 = C12693 + C435;
    const double C12876 = C12692 + C517;
    const double C12875 = C12689 + C12690;
    const double C12874 = C467 * C12655;
    const double C12873 = C12686 + C508;
    const double C12872 = C12683 + C12684;
    const double C12871 = C467 * C12653;
    const double C12870 = C12680 + C499;
    const double C12869 = C12679 + C1313;
    const double C12868 = C12677 + C12678;
    const double C12867 = C466 * C12657;
    const double C12866 = C12674 + C517;
    const double C12865 = C12671 + C12672;
    const double C12864 = C466 * C12655;
    const double C12863 = C12669 + C435;
    const double C12862 = C12668 + C508;
    const double C12861 = C12665 + C12666;
    const double C12860 = C466 * C12653;
    const double C12859 = C12662 + C499;
    const double C12858 = C12661 + C910;
    const double C12857 = C12659 + C12660;
    const double C12974 = C12941 + C1313;
    const double C12973 = C12927 + C4235;
    const double C12972 = C12921 + C2516;
    const double C12971 = C12909 + C3629;
    const double C12970 = C12903 + C910;
    const double C12969 = C12893 + C2515;
    const double C12968 = C12887 + C2169;
    const double C12967 = C12886 + C2168;
    const double C12966 = C12880 + C12647;
    const double C12965 = C12879 + C1757;
    const double C12964 = C12877 - C12878;
    const double C12963 = C12876 + C1316;
    const double C12962 = C12687 - C12874;
    const double C12961 = C12681 - C12871;
    const double C12960 = C12868 + C1312;
    const double C12959 = C12675 - C12867;
    const double C12958 = C12863 - C12864;
    const double C12957 = C12862 + C12631;
    const double C12956 = C12663 - C12860;
    const double C12955 = C12857 + C909;
    const double C12989 = C466 * C12964;
    const double C12988 = C466 * C12962;
    const double C12987 = C466 * C12961;
    const double C12986 = C465 * C12964;
    const double C12985 = C465 * C12962;
    const double C12984 = C465 * C12961;
    const double C12983 = C465 * C12959;
    const double C12982 = C465 * C12958;
    const double C12981 = C465 * C12956;
    const double C12980 = C467 * C12964;
    const double C12979 = C467 * C12962;
    const double C12978 = C467 * C12961;
    const double C12977 = C466 * C12959;
    const double C12976 = C466 * C12958;
    const double C12975 = C466 * C12956;
    const double C13004 = C12744 - C12989;
    const double C13003 = C12896 - C12988;
    const double C13002 = C12734 - C12987;
    const double C13001 = C12728 - C12986;
    const double C13000 = C12722 - C12985;
    const double C12999 = C12888 - C12984;
    const double C12998 = C12710 - C12983;
    const double C12997 = C12704 - C12982;
    const double C12996 = C12881 - C12981;
    const double C12995 = C12963 - C12980;
    const double C12994 = C12873 - C12979;
    const double C12993 = C12870 - C12978;
    const double C12992 = C12866 - C12977;
    const double C12991 = C12957 - C12976;
    const double C12990 = C12859 - C12975;
    const double C13022 = C466 * C13004;
    const double C13021 = C466 * C13003;
    const double C13020 = C466 * C13002;
    const double C13019 = C465 * C13004;
    const double C13018 = C465 * C13003;
    const double C13017 = C465 * C13002;
    const double C13016 = C465 * C13001;
    const double C13015 = C465 * C13000;
    const double C13014 = C465 * C12999;
    const double C13013 = C465 * C12998;
    const double C13012 = C465 * C12997;
    const double C13011 = C465 * C12996;
    const double C13010 = C12995 - C12658;
    const double C13009 = C12994 - C12656;
    const double C13008 = C12993 - C12654;
    const double C13007 = C12992 - C12658;
    const double C13006 = C12991 - C12656;
    const double C13005 = C12990 - C12654;
    const double C13049 = C467 * C13010;
    const double C13048 = C467 * C13009;
    const double C13047 = C467 * C13008;
    const double C13046 = C12923 - C13022;
    const double C13045 = C12972 - C13021;
    const double C13044 = C12919 - C13020;
    const double C13043 = C466 * C13010;
    const double C13042 = C466 * C13009;
    const double C13041 = C466 * C13008;
    const double C13040 = C466 * C13007;
    const double C13039 = C466 * C13006;
    const double C13038 = C466 * C13005;
    const double C13037 = C12743 - C13019;
    const double C13036 = C12738 - C13018;
    const double C13035 = C12894 - C13017;
    const double C13034 = C12892 - C13016;
    const double C13033 = C12890 - C13015;
    const double C13032 = C12968 - C13014;
    const double C13031 = C12885 - C13013;
    const double C13030 = C12883 - C13012;
    const double C13029 = C12966 - C13011;
    const double C13028 = C465 * C13010;
    const double C13027 = C465 * C13009;
    const double C13026 = C465 * C13008;
    const double C13025 = C465 * C13007;
    const double C13024 = C465 * C13006;
    const double C13023 = C465 * C13005;
    const double C13076 = C12974 - C13049;
    const double C13075 = C12939 - C13048;
    const double C13074 = C12937 - C13047;
    const double C13073 = C13046 - C12729;
    const double C13072 = C13045 - C12723;
    const double C13071 = C13044 - C12717;
    const double C13070 = C12768 - C13043;
    const double C13069 = C12910 - C13042;
    const double C13068 = C12762 - C13041;
    const double C13067 = C12905 - C13040;
    const double C13066 = C12970 - C13039;
    const double C13065 = C12901 - C13038;
    const double C13064 = C465 * C13037;
    const double C13063 = C465 * C13036;
    const double C13062 = C465 * C13035;
    const double C13061 = C13034 - C12729;
    const double C13060 = C13033 - C12723;
    const double C13059 = C13032 - C12717;
    const double C13058 = C13031 - C12711;
    const double C13057 = C13030 - C12705;
    const double C13056 = C13029 - C12699;
    const double C13055 = C12691 - C13028;
    const double C13054 = C12685 - C13027;
    const double C13053 = C12869 - C13026;
    const double C13052 = C12673 - C13025;
    const double C13051 = C12667 - C13024;
    const double C13050 = C12858 - C13023;
    const double C13109 = C465 * C13070;
    const double C13108 = C465 * C13069;
    const double C13107 = C465 * C13068;
    const double C13106 = C13076 - C12822;
    const double C13105 = C13075 - C12819;
    const double C13104 = C13074 - C12816;
    const double C13103 = C466 * C13073;
    const double C13102 = C466 * C13072;
    const double C13101 = C466 * C13071;
    const double C13100 = C465 * C13073;
    const double C13099 = C465 * C13072;
    const double C13098 = C465 * C13071;
    const double C13097 = C466 * C13070;
    const double C13096 = C466 * C13069;
    const double C13095 = C466 * C13068;
    const double C13094 = C13067 - C12759;
    const double C13093 = C13066 - C12756;
    const double C13092 = C13065 - C12753;
    const double C13091 = C12897 - C13064;
    const double C13090 = C12895 - C13063;
    const double C13089 = C12969 - C13062;
    const double C13088 = C465 * C13061;
    const double C13087 = C465 * C13060;
    const double C13086 = C465 * C13059;
    const double C13085 = C465 * C13058;
    const double C13084 = C465 * C13057;
    const double C13083 = C465 * C13056;
    const double C13082 = C465 * C13055;
    const double C13081 = C465 * C13054;
    const double C13080 = C465 * C13053;
    const double C13079 = C465 * C13052;
    const double C13078 = C465 * C13051;
    const double C13077 = C465 * C13050;
    const double C13145 = C466 * C13106;
    const double C13144 = C466 * C13105;
    const double C13143 = C466 * C13104;
    const double C13142 = C465 * C13106;
    const double C13141 = C465 * C13105;
    const double C13140 = C465 * C13104;
    const double C13139 = C12830 - C13109;
    const double C13138 = C12827 - C13108;
    const double C13137 = C12943 - C13107;
    const double C13136 = C12929 - C13103;
    const double C13135 = C12973 - C13102;
    const double C13134 = C12925 - C13101;
    const double C13133 = C12787 - C13100;
    const double C13132 = C12783 - C13099;
    const double C13131 = C12918 - C13098;
    const double C13130 = C465 * C13094;
    const double C13129 = C465 * C13093;
    const double C13128 = C465 * C13092;
    const double C13127 = C12912 - C13097;
    const double C13126 = C12971 - C13096;
    const double C13125 = C12907 - C13095;
    const double C13124 = C13091 - C12745;
    const double C13123 = C13090 - C12740;
    const double C13122 = C13089 - C12735;
    const double C13121 = C12891 - C13088;
    const double C13120 = C12889 - C13087;
    const double C13119 = C12967 - C13086;
    const double C13118 = C12884 - C13085;
    const double C13117 = C12882 - C13084;
    const double C13116 = C12965 - C13083;
    const double C13115 = C12875 - C13082;
    const double C13114 = C12872 - C13081;
    const double C13113 = C12960 - C13080;
    const double C13112 = C12865 - C13079;
    const double C13111 = C12861 - C13078;
    const double C13110 = C12955 - C13077;
    const double C13184 = C13124 - C12856;
    const double C13183 = C13123 - C12855;
    const double C13182 = C13122 - C12854;
    const double C13181 = C13133 - C12853;
    const double C13180 = C13132 - C12852;
    const double C13179 = C13131 - C12851;
    const double C13178 = C12848 - C13145;
    const double C13177 = C12952 - C13144;
    const double C13176 = C12842 - C13143;
    const double C13175 = C12839 - C13142;
    const double C13174 = C12836 - C13141;
    const double C13173 = C12947 - C13140;
    const double C13172 = C13139 - C12831;
    const double C13171 = C13138 - C12828;
    const double C13170 = C13137 - C12825;
    const double C13169 = C13136 - C12801;
    const double C13168 = C13135 - C12797;
    const double C13167 = C13134 - C12793;
    const double C13166 = C13133 - C12789;
    const double C13165 = C13132 - C12785;
    const double C13164 = C13131 - C12781;
    const double C13163 = C12776 - C13130;
    const double C13162 = C12773 - C13129;
    const double C13161 = C12914 - C13128;
    const double C13160 = C13127 - C12694;
    const double C13159 = C13126 - C12688;
    const double C13158 = C13125 - C12682;
    const double C13157 = C13121 - C12730;
    const double C13156 = C13120 - C12724;
    const double C13155 = C13119 - C12718;
    const double C13154 = C13118 - C12712;
    const double C13153 = C13117 - C12706;
    const double C13152 = C13116 - C12700;
    const double C13151 = C13115 - C12694;
    const double C13150 = C13114 - C12688;
    const double C13149 = C13113 - C12682;
    const double C13148 = C13112 - C12676;
    const double C13147 = C13111 - C12670;
    const double C13146 = C13110 - C12664;
    const double C13202 = C13178 - C12849;
    const double C13201 = C13177 - C12846;
    const double C13200 = C13176 - C12843;
    const double C13199 = C13175 - C12840;
    const double C13198 = C13174 - C12837;
    const double C13197 = C13173 - C12834;
    const double C13196 = C13160 - C12813;
    const double C13195 = C13159 - C12811;
    const double C13194 = C13158 - C12809;
    const double C13193 = C13151 - C12807;
    const double C13192 = C13150 - C12805;
    const double C13191 = C13149 - C12803;
    const double C13190 = C13163 - C12777;
    const double C13189 = C13162 - C12774;
    const double C13188 = C13161 - C12771;
    const double C13187 = C13148 - C12750;
    const double C13186 = C13147 - C12748;
    const double C13185 = C13146 - C12746;
    const double gx200200 =
        C463 * C583 + (3 * C570) / C456 + C432 -
        C465 * (C463 * C571 + C547 + C433 -
                C465 * (C463 * C529 + C499 + C12629 -
                        C465 * (C463 * C482 + C435 - C465 * C12653) - C12654) -
                C529 / C438) -
        (3 * C571) / C456 - C440 * C583 - C440 * (C583 - C440 * C570);
    const double gx200020 = C13146 - C440 * C983 - C440 * (C983 - C440 * C967);
    const double gx200002 =
        C13149 - C440 * C1386 - C440 * (C1386 - C440 * C1370);
    const double gx200110 =
        C13152 - C440 * C1800 - C440 * (C1800 - C440 * C1783);
    const double gx200101 =
        C13155 - C440 * C2211 - C440 * (C2211 - C440 * C2194);
    const double gx200011 =
        C13122 - C440 * C2545 - C440 * (C2545 - C440 * C2529);
    const double gx020200 = C13185 - C441 * C12898;
    const double gx020020 = C914 * C3301 + (3 * C967) / C456 - C466 * C13092 -
                            (3 * C968) / C456 - C441 * C3301 - C441 * C12902;
    const double gx020002 = C13158 - C441 * C3636 - C441 * C12908;
    const double gx020110 = C13188 - C441 * C12915;
    const double gx020101 = C13164 - C441 * C12920;
    const double gx020011 = C13167 - C441 * C4613 - C441 * C12926;
    const double gx002200 = C13191 - C442 * C12931;
    const double gx002020 = C13194 - C442 * C12934;
    const double gx002002 = C1317 * C5718 + (3 * C1370) / C456 - C467 * C13104 -
                            (3 * C1371) / C456 - C442 * C5718 - C442 * C12938;
    const double gx002110 = C13170 - C442 * C12944;
    const double gx002101 = C13197 - C442 * C12948;
    const double gx002011 = C13200 - C442 * C12951;
    const double gx110200 = C13152 - C441 * C583 - C440 * C12898;
    const double gx110020 = C13188 - C440 * C12902;
    const double gx110002 = C13137 - C441 * C1386 - C440 * C12908;
    const double gx110110 = C13185 - C440 * C12915;
    const double gx110101 = C13122 - C441 * C2211 - C440 * C12920;
    const double gx110011 = C13164 - C440 * C12926;
    const double gx101200 = C13155 - C442 * C583 - C440 * C12931;
    const double gx101020 = C13179 - C440 * C12934;
    const double gx101002 = C13197 - C440 * C12938;
    const double gx101110 = C13182 - C440 * C12944;
    const double gx101101 = C13191 - C440 * C12948;
    const double gx101011 = C13170 - C440 * C12951;
    const double gx011200 = C13182 - C441 * C12931;
    const double gx011020 = C13167 - C442 * C3301 - C441 * C12934;
    const double gx011002 = C13200 - C441 * C12938;
    const double gx011110 = C13179 - C441 * C12944;
    const double gx011101 = C13170 - C441 * C12948;
    const double gx011011 = C13194 - C441 * C12951;
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
        C463 * C579 + (3 * C560) / C456 -
        C465 * (C463 * C561 + C535 -
                C465 * (C463 * C523 + C508 -
                        C465 * (C463 * C486 - C465 * C12655) - C12656) -
                C523 / C438) -
        (3 * C561) / C456 - C440 * C579 - C440 * (C579 - C440 * C560);
    const double gy200020 = C13147 - C440 * C986 - C440 * (C986 - C440 * C980);
    const double gy200002 =
        C13150 - C440 * C1383 - C440 * (C1383 - C440 * C1372);
    const double gy200110 =
        C13153 - C440 * C1797 - C440 * (C1797 - C440 * C1779);
    const double gy200101 =
        C13156 - C440 * C2208 - C440 * (C2208 - C440 * C2190);
    const double gy200011 =
        C13123 - C440 * C2546 - C440 * (C2546 - C440 * C2537);
    const double gy020200 = C13186 - C441 * C12899;
    const double gy020020 = C914 * C3304 + (3 * C980) / C456 + C3282 -
                            C466 * C13093 - (3 * C981) / C456 - C441 * C3304 -
                            C441 * C12904;
    const double gy020002 = C13159 - C441 * C3639 - C441 * C12911;
    const double gy020110 = C13189 - C441 * C12916;
    const double gy020101 = C13165 - C441 * C12922;
    const double gy020011 = C13168 - C441 * C4616 - C441 * C12928;
    const double gy002200 = C13192 - C442 * C12932;
    const double gy002020 = C13195 - C442 * C12935;
    const double gy002002 = C1317 * C5719 + (3 * C1372) / C456 - C467 * C13105 -
                            (3 * C1373) / C456 - C442 * C5719 - C442 * C12940;
    const double gy002110 = C13171 - C442 * C12945;
    const double gy002101 = C13198 - C442 * C12949;
    const double gy002011 = C13201 - C442 * C12953;
    const double gy110200 = C13153 - C441 * C579 - C440 * C12899;
    const double gy110020 = C13189 - C440 * C12904;
    const double gy110002 = C13138 - C441 * C1383 - C440 * C12911;
    const double gy110110 = C13186 - C440 * C12916;
    const double gy110101 = C13123 - C441 * C2208 - C440 * C12922;
    const double gy110011 = C13165 - C440 * C12928;
    const double gy101200 = C13156 - C442 * C579 - C440 * C12932;
    const double gy101020 = C13180 - C440 * C12935;
    const double gy101002 = C13198 - C440 * C12940;
    const double gy101110 = C13183 - C440 * C12945;
    const double gy101101 = C13192 - C440 * C12949;
    const double gy101011 = C13171 - C440 * C12953;
    const double gy011200 = C13183 - C441 * C12932;
    const double gy011020 = C13168 - C442 * C3304 - C441 * C12935;
    const double gy011002 = C13201 - C441 * C12940;
    const double gy011110 = C13180 - C441 * C12945;
    const double gy011101 = C13171 - C441 * C12949;
    const double gy011011 = C13195 - C441 * C12953;
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
        C463 * C580 + (3 * C562) / C456 -
        C465 * (C463 * C563 + C541 -
                C465 * (C463 * C526 + C517 -
                        C465 * (C463 * C490 - C465 * C12657) - C12658) -
                C526 / C438) -
        (3 * C563) / C456 - C440 * C580 - C440 * (C580 - C440 * C562);
    const double gz200020 = C13148 - C440 * C982 - C440 * (C982 - C440 * C971);
    const double gz200002 =
        C13151 - C440 * C1389 - C440 * (C1389 - C440 * C1384);
    const double gz200110 =
        C13154 - C440 * C1798 - C440 * (C1798 - C440 * C1781);
    const double gz200101 =
        C13157 - C440 * C2209 - C440 * (C2209 - C440 * C2192);
    const double gz200011 =
        C13124 - C440 * C2544 - C440 * (C2544 - C440 * C2533);
    const double gz020200 = C13187 - C441 * C12900;
    const double gz020020 = C914 * C3303 + (3 * C971) / C456 - C466 * C13094 -
                            (3 * C972) / C456 - C441 * C3303 - C441 * C12906;
    const double gz020002 = C13160 - C441 * C3638 - C441 * C12913;
    const double gz020110 = C13190 - C441 * C12917;
    const double gz020101 = C13166 - C441 * C12924;
    const double gz020011 = C13169 - C441 * C4615 - C441 * C12930;
    const double gz002200 = C13193 - C442 * C12933;
    const double gz002020 = C13196 - C442 * C12936;
    const double gz002002 = C1317 * C5721 + (3 * C1384) / C456 + C5699 -
                            C467 * C13106 - (3 * C1385) / C456 - C442 * C5721 -
                            C442 * C12942;
    const double gz002110 = C13172 - C442 * C12946;
    const double gz002101 = C13199 - C442 * C12950;
    const double gz002011 = C13202 - C442 * C12954;
    const double gz110200 = C13154 - C441 * C580 - C440 * C12900;
    const double gz110020 = C13190 - C440 * C12906;
    const double gz110002 = C13139 - C441 * C1389 - C440 * C12913;
    const double gz110110 = C13187 - C440 * C12917;
    const double gz110101 = C13124 - C441 * C2209 - C440 * C12924;
    const double gz110011 = C13166 - C440 * C12930;
    const double gz101200 = C13157 - C442 * C580 - C440 * C12933;
    const double gz101020 = C13181 - C440 * C12936;
    const double gz101002 = C13199 - C440 * C12942;
    const double gz101110 = C13184 - C440 * C12946;
    const double gz101101 = C13193 - C440 * C12950;
    const double gz101011 = C13172 - C440 * C12954;
    const double gz011200 = C13184 - C441 * C12933;
    const double gz011020 = C13169 - C442 * C3303 - C441 * C12936;
    const double gz011002 = C13202 - C441 * C12942;
    const double gz011110 = C13181 - C441 * C12946;
    const double gz011101 = C13172 - C441 * C12950;
    const double gz011011 = C13196 - C441 * C12954;
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
