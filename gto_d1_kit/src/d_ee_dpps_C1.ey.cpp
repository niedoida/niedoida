/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2110_3_vr(const double ae,
                            const double xA,
                            const double yA,
                            const double zA,
                            const double be,
                            const double xB,
                            const double yB,
                            const double zB,
                            const double ce,
                            const double xC,
                            const double yC,
                            const double zC,
                            const double de,
                            const double xD,
                            const double yD,
                            const double zD,
                            const double* const bs,
                            const double* const g,
                            double* const vrx,
                            double* const vry,
                            double* const vrz)
{
    const double xAB = xA - xB;
    const double yAB = yA - yB;
    const double zAB = zA - zB;
    const double xCD = xC - xD;
    const double yCD = yC - yD;
    const double zCD = zC - zD;
    const double p = ae + be;
    const double q = ce + de;
    const double muab = ae * be / p;
    const double mucd = ce * de / q;
    const double rAB2 = xAB * xAB + yAB * yAB + zAB * zAB;
    const double rCD2 = xCD * xCD + yCD * yCD + zCD * zCD;
    const double xP = (ae * xA + be * xB) / p;
    const double yP = (ae * yA + be * yB) / p;
    const double zP = (ae * zA + be * zB) / p;
    const double xQ = (ce * xC + de * xD) / q;
    const double yQ = (ce * yC + de * yD) / q;
    const double zQ = (ce * zC + de * zD) / q;
    const double kab = std::exp(-muab * rAB2);
    const double kcd = std::exp(-mucd * rCD2);
    const double C3967 = g[16];
    const double C3987 = g[17];
    const double C4002 = g[18];
    const double C4017 = g[19];
    const double C4083 = g[20];
    const double C4098 = g[21];
    const double C4128 = g[22];
    const double C4143 = g[23];
    const double C4172 = g[24];
    const double C4186 = g[25];
    const double C4227 = g[26];
    const double C4321 = g[27];
    const double C4335 = g[28];
    const double C4362 = g[29];
    const double C4429 = g[30];
    const double C4444 = g[31];
    const double C4473 = g[32];
    const double C4488 = g[33];
    const double C4516 = g[34];
    const double C4571 = g[35];
    const double C4672 = g[36];
    const double C4687 = g[37];
    const double C4763 = g[38];
    const double C4949 = g[39];
    const double C5340 = g[40];
    const double C5475 = g[41];
    const double C5537 = g[42];
    const double C6383 = g[43];
    const double C3970 = p + q;
    const double C3969 = p * q;
    const double C6470 = bs[5];
    const double C6469 = bs[4];
    const double C6467 = bs[3];
    const double C6465 = bs[2];
    const double C6463 = std::pow(Pi, 2.5);
    const double C6462 = ce * de;
    const double C6461 = bs[0];
    const double C6458 = bs[1];
    const double C6455 = zP - zQ;
    const double C6454 = be * zAB;
    const double C6453 = yP - yQ;
    const double C6452 = be * yAB;
    const double C6451 = 2 * p;
    const double C6449 = xP - xQ;
    const double C6448 = be * xAB;
    const double C3971 = C3970 * p;
    const double C6464 = std::sqrt(C3970);
    const double C6460 = q * C3970;
    const double C6459 = C3969 * ce;
    const double C6447 = C3970 * C3969;
    const double C6446 = ce * C3969;
    const double C6500 = 4 * C6463;
    const double C6499 = kab * C6462;
    const double C6487 = C6455 * C3969;
    const double C6486 = C6453 * C3969;
    const double C6481 = C6449 * C3969;
    const double C6501 = C3969 * C6464;
    const double C6498 = kab * C6459;
    const double C6513 = C5475 * C6446;
    const double C6508 = C4763 * C6446;
    const double C6506 = C4672 * C6446;
    const double C6505 = C4571 * C6446;
    const double C6504 = C4516 * C6446;
    const double C6503 = C4488 * C6446;
    const double C6497 = C4444 * C6446;
    const double C6496 = C4362 * C6446;
    const double C6495 = C4335 * C6446;
    const double C6494 = C4321 * C6446;
    const double C6493 = C4186 * C6446;
    const double C6492 = C4172 * C6446;
    const double C6490 = C4128 * C6446;
    const double C6488 = C4083 * C6446;
    const double C6485 = C4017 * C6446;
    const double C6484 = C4002 * C6446;
    const double C6483 = C3987 * C6446;
    const double C6535 = kcd * C6499;
    const double C6534 = kcd * C6498;
    const double C6547 = C6513 / C6447;
    const double C6542 = C6508 / C6447;
    const double C6540 = C6506 / C6447;
    const double C6539 = C6505 / C6447;
    const double C6538 = C6504 / C6447;
    const double C6537 = C6503 / C6447;
    const double C6533 = C6497 / C6447;
    const double C6532 = C6496 / C6447;
    const double C6531 = C6495 / C6447;
    const double C6530 = C6494 / C6447;
    const double C6529 = C6493 / C6447;
    const double C6528 = C6492 / C6447;
    const double C6526 = C6490 / C6447;
    const double C6524 = C6488 / C6447;
    const double C6523 = C6485 / C6447;
    const double C6522 = C6484 / C6447;
    const double C6521 = C6483 / C6447;
    const double C6567 = C6469 * C6535;
    const double C6565 = C6467 * C6535;
    const double C6562 = C6465 * C6535;
    const double C6559 = C6458 * C6535;
    const double C6557 = C6461 * C6535;
    const double C6566 = C6470 * C6534;
    const double C6564 = C6469 * C6534;
    const double C6561 = C6467 * C6534;
    const double C6558 = C6465 * C6534;
    const double C6556 = C6458 * C6534;
    const double C4767 =
        (((C6449 * C6566) / C6460 - (xCD * C6567) / q) * C6500) / C6501;
    const double C5590 =
        (((C6453 * C6566) / C6460 - (yCD * C6567) / q) * C6500) / C6501;
    const double C6410 =
        (((C6455 * C6566) / C6460 - (zCD * C6567) / q) * C6500) / C6501;
    const double C4676 =
        (((C6449 * C6564) / C6460 - (xCD * C6565) / q) * C6500) / C6501;
    const double C5500 =
        (((C6453 * C6564) / C6460 - (yCD * C6565) / q) * C6500) / C6501;
    const double C6320 =
        (((C6455 * C6564) / C6460 - (zCD * C6565) / q) * C6500) / C6501;
    const double C4448 =
        (((C6449 * C6561) / C6460 - (xCD * C6562) / q) * C6500) / C6501;
    const double C5289 =
        (((C6453 * C6561) / C6460 - (yCD * C6562) / q) * C6500) / C6501;
    const double C6111 =
        (((C6455 * C6561) / C6460 - (zCD * C6562) / q) * C6500) / C6501;
    const double C3976 =
        (((C6449 * C6558) / C6460 - (xCD * C6559) / q) * C6500) / C6501;
    const double C4816 =
        (((C6453 * C6558) / C6460 - (yCD * C6559) / q) * C6500) / C6501;
    const double C5639 =
        (((C6455 * C6558) / C6460 - (zCD * C6559) / q) * C6500) / C6501;
    const double C3975 =
        (((C6449 * C6556) / C6460 - (xCD * C6557) / q) * C6500) / C6501;
    const double C4815 =
        (((C6453 * C6556) / C6460 - (yCD * C6557) / q) * C6500) / C6501;
    const double C5638 =
        (((C6455 * C6556) / C6460 - (zCD * C6557) / q) * C6500) / C6501;
    const double C6468 = C4676 * C3969;
    const double C4691 = C6542 - (C4676 * C6448) / p - (C4767 * C6481) / C3971;
    const double C4705 = -((C4676 * C6452) / p + (C4767 * C6486) / C3971);
    const double C4732 = -((C4676 * C6454) / p + (C4767 * C6487) / C3971);
    const double C6475 = C5500 * C3969;
    const double C5514 = -((C5500 * C6448) / p + (C5590 * C6481) / C3971);
    const double C5542 = C6542 - (C5500 * C6452) / p - (C5590 * C6486) / C3971;
    const double C5569 = -((C5500 * C6454) / p + (C5590 * C6487) / C3971);
    const double C6480 = C6320 * C3969;
    const double C6334 = -((C6320 * C6448) / p + (C6410 * C6481) / C3971);
    const double C6361 = -((C6320 * C6452) / p + (C6410 * C6486) / C3971);
    const double C6389 = C6542 - (C6320 * C6454) / p - (C6410 * C6487) / C3971;
    const double C6466 = C4448 * C3969;
    const double C4477 = C6540 - (C4448 * C6448) / p - (C4676 * C6481) / C3971;
    const double C4534 = -((C4448 * C6452) / p + (C4676 * C6486) / C3971);
    const double C4589 = -((C4448 * C6454) / p + (C4676 * C6487) / C3971);
    const double C6474 = C5289 * C3969;
    const double C5303 = -((C5289 * C6448) / p + (C5500 * C6481) / C3971);
    const double C5345 = C6540 - (C5289 * C6452) / p - (C5500 * C6486) / C3971;
    const double C5399 = -((C5289 * C6454) / p + (C5500 * C6487) / C3971);
    const double C6479 = C6111 * C3969;
    const double C6125 = -((C6111 * C6448) / p + (C6320 * C6481) / C3971);
    const double C6166 = -((C6111 * C6452) / p + (C6320 * C6486) / C3971);
    const double C6220 = C6540 - (C6111 * C6454) / p - (C6320 * C6487) / C3971;
    const double C6450 = C3976 * C3969;
    const double C3974 = C6533 - (C3976 * C6448) / p - (C4448 * C6481) / C3971;
    const double C4087 = -((C3976 * C6452) / p + (C4448 * C6486) / C3971);
    const double C4132 = -((C3976 * C6454) / p + (C4448 * C6487) / C3971);
    const double C6471 = C4816 * C3969;
    const double C4817 = -((C4816 * C6448) / p + (C5289 * C6481) / C3971);
    const double C4924 = C6533 - (C4816 * C6452) / p - (C5289 * C6486) / C3971;
    const double C4968 = -((C4816 * C6454) / p + (C5289 * C6487) / C3971);
    const double C6476 = C5639 * C3969;
    const double C5640 = -((C5639 * C6448) / p + (C6111 * C6481) / C3971);
    const double C5747 = -((C5639 * C6452) / p + (C6111 * C6486) / C3971);
    const double C5790 = C6533 - (C5639 * C6454) / p - (C6111 * C6487) / C3971;
    const double C1739 = C6523 - (C3975 * C6448) / p - (C3976 * C6481) / C3971;
    const double C1952 = -((C3975 * C6452) / p + (C3976 * C6486) / C3971);
    const double C2165 = -((C3975 * C6454) / p + (C3976 * C6487) / C3971);
    const double C2460 = -((C4815 * C6448) / p + (C4816 * C6481) / C3971);
    const double C2669 = C6523 - (C4815 * C6452) / p - (C4816 * C6486) / C3971;
    const double C2878 = -((C4815 * C6454) / p + (C4816 * C6487) / C3971);
    const double C3167 = -((C5638 * C6448) / p + (C5639 * C6481) / C3971);
    const double C3376 = -((C5638 * C6452) / p + (C5639 * C6486) / C3971);
    const double C3585 = C6523 - (C5638 * C6454) / p - (C5639 * C6487) / C3971;
    const double C6507 = C6468 / C3971;
    const double C6514 = C6475 / C3971;
    const double C6519 = C6480 / C3971;
    const double C6502 = C6466 / C3971;
    const double C6512 = C6474 / C3971;
    const double C6518 = C6479 / C3971;
    const double C6482 = C6450 / C3971;
    const double C4433 = -((C4132 * C6452) / p + (C4589 * C6486) / C3971);
    const double C6509 = C6471 / C3971;
    const double C5261 = C6547 - (C4968 * C6452) / p - (C5399 * C6486) / C3971;
    const double C6515 = C6476 / C3971;
    const double C6083 = -((C5790 * C6452) / p + (C6220 * C6486) / C3971);
    const double C1815 = C6524 - (C1952 * C6448) / p - (C4087 * C6481) / C3971;
    const double C1861 = C6526 - (C2165 * C6448) / p - (C4132 * C6481) / C3971;
    const double C2058 = -((C2165 * C6452) / p + (C4132 * C6486) / C3971);
    const double C2535 = -((C2669 * C6448) / p + (C4924 * C6481) / C3971);
    const double C2580 = -((C2878 * C6448) / p + (C4968 * C6481) / C3971);
    const double C2773 = C6526 - (C2878 * C6452) / p - (C4968 * C6486) / C3971;
    const double C3242 = -((C3376 * C6448) / p + (C5747 * C6481) / C3971);
    const double C3287 = -((C3585 * C6448) / p + (C5790 * C6481) / C3971);
    const double C3480 = -((C3585 * C6452) / p + (C5790 * C6486) / C3971);
    const double C6541 = C4448 - C6507;
    const double C6548 = C5289 - C6514;
    const double C6553 = C6111 - C6519;
    const double C6536 = C3976 - C6502;
    const double C6546 = C4816 - C6512;
    const double C6552 = C5639 - C6518;
    const double C6520 = C3975 - C6482;
    const double C6543 = C4815 - C6509;
    const double C6549 = C5638 - C6515;
    const double C2298 =
        (C4429 * C6446) / C6447 - (C2058 * C6448) / p - (C4433 * C6481) / C3971;
    const double C3008 = -((C2773 * C6448) / p + (C5261 * C6481) / C3971);
    const double C3715 = -((C3480 * C6448) / p + (C6083 * C6481) / C3971);
    const double C6563 = C6541 / C6451;
    const double C6571 = C6548 / C6451;
    const double C6575 = C6553 / C6451;
    const double C6560 = C6536 / C6451;
    const double C6570 = C6546 / C6451;
    const double C6574 = C6552 / C6451;
    const double C6554 = C6520 / C6451;
    const double C6568 = C6543 / C6451;
    const double C6572 = C6549 / C6451;
    const double C4492 = (C4687 * C6446) / C6447 - (C4477 * C6448) / p -
                         (C4691 * C6481) / C3971 + C6563;
    const double C4520 =
        C6563 - ((C4534 * C6452) / p + (C4705 * C6486) / C3971);
    const double C4575 =
        C6563 - ((C4589 * C6454) / p + (C4732 * C6487) / C3971);
    const double C5317 =
        C6571 - ((C5303 * C6448) / p + (C5514 * C6481) / C3971);
    const double C5359 = (C5537 * C6446) / C6447 - (C5345 * C6452) / p -
                         (C5542 * C6486) / C3971 + C6571;
    const double C5413 =
        C6571 - ((C5399 * C6454) / p + (C5569 * C6487) / C3971);
    const double C6139 =
        C6575 - ((C6125 * C6448) / p + (C6334 * C6481) / C3971);
    const double C6180 =
        C6575 - ((C6166 * C6452) / p + (C6361 * C6486) / C3971);
    const double C6234 = (C6383 * C6446) / C6447 - (C6220 * C6454) / p -
                         (C6389 * C6487) / C3971 + C6575;
    const double C3991 = (C4473 * C6446) / C6447 - (C3974 * C6448) / p -
                         (C4477 * C6481) / C3971 + C6560;
    const double C4103 =
        C6560 - ((C4087 * C6452) / p + (C4534 * C6486) / C3971);
    const double C4148 =
        C6560 - ((C4132 * C6454) / p + (C4589 * C6487) / C3971);
    const double C4831 =
        C6570 - ((C4817 * C6448) / p + (C5303 * C6481) / C3971);
    const double C4938 = (C5340 * C6446) / C6447 - (C4924 * C6452) / p -
                         (C5345 * C6486) / C3971 + C6570;
    const double C4982 =
        C6570 - ((C4968 * C6454) / p + (C5399 * C6487) / C3971);
    const double C5654 =
        C6574 - ((C5640 * C6448) / p + (C6125 * C6481) / C3971);
    const double C5761 =
        C6574 - ((C5747 * C6452) / p + (C6166 * C6486) / C3971);
    const double C5804 =
        C6547 - (C5790 * C6454) / p - (C6220 * C6487) / C3971 + C6574;
    const double C1721 = (C3967 * C6446) / C6447 - (C1739 * C6448) / p -
                         (C3974 * C6481) / C3971 + C6554;
    const double C1906 =
        C6554 - ((C1952 * C6452) / p + (C4087 * C6486) / C3971);
    const double C2089 =
        C6554 - ((C2165 * C6454) / p + (C4132 * C6487) / C3971);
    const double C2443 =
        C6568 - ((C2460 * C6448) / p + (C4817 * C6481) / C3971);
    const double C2624 =
        C6524 - (C2669 * C6452) / p - (C4924 * C6486) / C3971 + C6568;
    const double C2803 =
        C6568 - ((C2878 * C6454) / p + (C4968 * C6487) / C3971);
    const double C3150 =
        C6572 - ((C3167 * C6448) / p + (C5640 * C6481) / C3971);
    const double C3331 =
        C6572 - ((C3376 * C6452) / p + (C5747 * C6486) / C3971);
    const double C3510 =
        C6526 - (C3585 * C6454) / p - (C5790 * C6487) / C3971 + C6572;
    const double C4006 = C6537 - (C3991 * C6448) / p - (C4492 * C6481) / C3971 +
                         (C3974 - (C4477 * C3969) / C3971) / p;
    const double C4117 = -((C3991 * C6454) / p + (C4492 * C6487) / C3971);
    const double C6456 = C4103 * C3969;
    const double C4102 = C6538 - (C4103 * C6448) / p - (C4520 * C6481) / C3971;
    const double C4190 = (C4087 - (C4534 * C3969) / C3971) / p -
                         ((C4103 * C6452) / p + (C4520 * C6486) / C3971);
    const double C4231 = -((C4103 * C6454) / p + (C4520 * C6487) / C3971);
    const double C6457 = C4148 * C3969;
    const double C4147 = C6539 - (C4148 * C6448) / p - (C4575 * C6481) / C3971;
    const double C4297 = -((C4148 * C6452) / p + (C4575 * C6486) / C3971);
    const double C4366 = (C4132 - (C4589 * C3969) / C3971) / p -
                         ((C4148 * C6454) / p + (C4575 * C6487) / C3971);
    const double C4845 = (C4817 - (C5303 * C3969) / C3971) / p -
                         ((C4831 * C6448) / p + (C5317 * C6481) / C3971);
    const double C4954 = -((C4831 * C6454) / p + (C5317 * C6487) / C3971);
    const double C6472 = C4938 * C3969;
    const double C4939 = -((C4938 * C6448) / p + (C5359 * C6481) / C3971);
    const double C5023 = C6538 - (C4938 * C6452) / p - (C5359 * C6486) / C3971 +
                         (C4924 - (C5345 * C3969) / C3971) / p;
    const double C5063 = -((C4938 * C6454) / p + (C5359 * C6487) / C3971);
    const double C6473 = C4982 * C3969;
    const double C4983 = -((C4982 * C6448) / p + (C5413 * C6481) / C3971);
    const double C5129 = C6539 - (C4982 * C6452) / p - (C5413 * C6486) / C3971;
    const double C5195 = (C4968 - (C5399 * C3969) / C3971) / p -
                         ((C4982 * C6454) / p + (C5413 * C6487) / C3971);
    const double C5668 = (C5640 - (C6125 * C3969) / C3971) / p -
                         ((C5654 * C6448) / p + (C6139 * C6481) / C3971);
    const double C5776 = C6537 - (C5654 * C6454) / p - (C6139 * C6487) / C3971;
    const double C6477 = C5761 * C3969;
    const double C5762 = -((C5761 * C6448) / p + (C6180 * C6481) / C3971);
    const double C5845 = (C5747 - (C6166 * C3969) / C3971) / p -
                         ((C5761 * C6452) / p + (C6180 * C6486) / C3971);
    const double C5885 = C6538 - (C5761 * C6454) / p - (C6180 * C6487) / C3971;
    const double C6478 = C5804 * C3969;
    const double C5805 = -((C5804 * C6448) / p + (C6234 * C6481) / C3971);
    const double C5951 = -((C5804 * C6452) / p + (C6234 * C6486) / C3971);
    const double C6017 = C6539 - (C5804 * C6454) / p - (C6234 * C6487) / C3971 +
                         (C5790 - (C6220 * C3969) / C3971) / p;
    const double C1722 = C6521 - (C1721 * C6448) / p - (C3991 * C6481) / C3971 +
                         (C1739 - (C3974 * C3969) / C3971) / p;
    const double C1769 = -((C1721 * C6452) / p + (C3991 * C6486) / C3971);
    const double C1799 = -((C1721 * C6454) / p + (C3991 * C6487) / C3971);
    const double C1907 = C6528 - (C1906 * C6448) / p - (C4103 * C6481) / C3971;
    const double C1953 = (C1952 - (C4087 * C3969) / C3971) / p -
                         ((C1906 * C6452) / p + (C4103 * C6486) / C3971);
    const double C1983 = -((C1906 * C6454) / p + (C4103 * C6487) / C3971);
    const double C2090 = C6530 - (C2089 * C6448) / p - (C4148 * C6481) / C3971;
    const double C2135 = -((C2089 * C6452) / p + (C4148 * C6486) / C3971);
    const double C2166 = (C2165 - (C4132 * C3969) / C3971) / p -
                         ((C2089 * C6454) / p + (C4148 * C6487) / C3971);
    const double C2444 = (C2460 - (C4817 * C3969) / C3971) / p -
                         ((C2443 * C6448) / p + (C4831 * C6481) / C3971);
    const double C2490 = C6521 - (C2443 * C6452) / p - (C4831 * C6486) / C3971;
    const double C2520 = -((C2443 * C6454) / p + (C4831 * C6487) / C3971);
    const double C2625 = -((C2624 * C6448) / p + (C4938 * C6481) / C3971);
    const double C2670 = C6528 - (C2624 * C6452) / p - (C4938 * C6486) / C3971 +
                         (C2669 - (C4924 * C3969) / C3971) / p;
    const double C2700 = -((C2624 * C6454) / p + (C4938 * C6487) / C3971);
    const double C2804 = -((C2803 * C6448) / p + (C4982 * C6481) / C3971);
    const double C2848 = C6530 - (C2803 * C6452) / p - (C4982 * C6486) / C3971;
    const double C2879 = (C2878 - (C4968 * C3969) / C3971) / p -
                         ((C2803 * C6454) / p + (C4982 * C6487) / C3971);
    const double C3151 = (C3167 - (C5640 * C3969) / C3971) / p -
                         ((C3150 * C6448) / p + (C5654 * C6481) / C3971);
    const double C3197 = -((C3150 * C6452) / p + (C5654 * C6486) / C3971);
    const double C3227 = C6521 - (C3150 * C6454) / p - (C5654 * C6487) / C3971;
    const double C3332 = -((C3331 * C6448) / p + (C5761 * C6481) / C3971);
    const double C3377 = (C3376 - (C5747 * C3969) / C3971) / p -
                         ((C3331 * C6452) / p + (C5761 * C6486) / C3971);
    const double C3407 = C6528 - (C3331 * C6454) / p - (C5761 * C6487) / C3971;
    const double C3511 = -((C3510 * C6448) / p + (C5804 * C6481) / C3971);
    const double C3555 = -((C3510 * C6452) / p + (C5804 * C6486) / C3971);
    const double C3586 = C6530 - (C3510 * C6454) / p - (C5804 * C6487) / C3971 +
                         (C3585 - (C5790 * C3969) / C3971) / p;
    const double C6489 = C6456 / C3971;
    const double C6491 = C6457 / C3971;
    const double C6510 = C6472 / C3971;
    const double C6511 = C6473 / C3971;
    const double C6516 = C6477 / C3971;
    const double C6517 = C6478 / C3971;
    const double C1723 = C6522 - (C1722 * C6448) / p - (C4006 * C6481) / C3971 +
                         (3 * (C1721 - (C3991 * C3969) / C3971)) / C6451;
    const double C1754 = -((C1722 * C6452) / p + (C4006 * C6486) / C3971);
    const double C1784 = -((C1722 * C6454) / p + (C4006 * C6487) / C3971);
    const double C1845 = -((C1799 * C6452) / p + (C4117 * C6486) / C3971);
    const double C1937 = C6529 - (C1953 * C6448) / p - (C4190 * C6481) / C3971;
    const double C2028 = -((C1953 * C6454) / p + (C4190 * C6487) / C3971);
    const double C1968 =
        (C4227 * C6446) / C6447 - (C1983 * C6448) / p - (C4231 * C6481) / C3971;
    const double C2120 = C6531 - (C2135 * C6448) / p - (C4297 * C6481) / C3971;
    const double C2150 = C6532 - (C2166 * C6448) / p - (C4366 * C6481) / C3971;
    const double C2210 = -((C2166 * C6452) / p + (C4366 * C6486) / C3971);
    const double C2445 = (3 * (C2443 - (C4831 * C3969) / C3971)) / C6451 -
                         ((C2444 * C6448) / p + (C4845 * C6481) / C3971);
    const double C2475 = C6522 - (C2444 * C6452) / p - (C4845 * C6486) / C3971;
    const double C2505 = -((C2444 * C6454) / p + (C4845 * C6487) / C3971);
    const double C2565 =
        (C4949 * C6446) / C6447 - (C2520 * C6452) / p - (C4954 * C6486) / C3971;
    const double C2654 = -((C2670 * C6448) / p + (C5023 * C6481) / C3971);
    const double C2744 = -((C2670 * C6454) / p + (C5023 * C6487) / C3971);
    const double C2685 = -((C2700 * C6448) / p + (C5063 * C6481) / C3971);
    const double C2833 = -((C2848 * C6448) / p + (C5129 * C6481) / C3971);
    const double C2863 = -((C2879 * C6448) / p + (C5195 * C6481) / C3971);
    const double C2922 = C6532 - (C2879 * C6452) / p - (C5195 * C6486) / C3971;
    const double C3152 = (3 * (C3150 - (C5654 * C3969) / C3971)) / C6451 -
                         ((C3151 * C6448) / p + (C5668 * C6481) / C3971);
    const double C3182 = -((C3151 * C6452) / p + (C5668 * C6486) / C3971);
    const double C3212 = C6522 - (C3151 * C6454) / p - (C5668 * C6487) / C3971;
    const double C3272 = -((C3227 * C6452) / p + (C5776 * C6486) / C3971);
    const double C3361 = -((C3377 * C6448) / p + (C5845 * C6481) / C3971);
    const double C3451 = C6529 - (C3377 * C6454) / p - (C5845 * C6487) / C3971;
    const double C3392 = -((C3407 * C6448) / p + (C5885 * C6481) / C3971);
    const double C3540 = -((C3555 * C6448) / p + (C5951 * C6481) / C3971);
    const double C3570 = -((C3586 * C6448) / p + (C6017 * C6481) / C3971);
    const double C3629 = -((C3586 * C6452) / p + (C6017 * C6486) / C3971);
    const double C6525 = C1906 - C6489;
    const double C6527 = C2089 - C6491;
    const double C6544 = C2624 - C6510;
    const double C6545 = C2803 - C6511;
    const double C6550 = C3331 - C6516;
    const double C6551 = C3510 - C6517;
    const double C1830 = (C4098 * C6446) / C6447 - (C1907 * C6448) / p -
                         (C4102 * C6481) / C3971 + C6525 / C6451;
    const double C2013 =
        (3 * C6525) / C6451 - ((C1953 * C6452) / p + (C4190 * C6486) / C3971);
    const double C6555 = C6527 / C6451;
    const double C2254 =
        (3 * C6527) / C6451 - ((C2166 * C6454) / p + (C4366 * C6487) / C3971);
    const double C2550 =
        C6544 / C6451 - ((C2625 * C6448) / p + (C4939 * C6481) / C3971);
    const double C2729 = C6529 - (C2670 * C6452) / p - (C5023 * C6486) / C3971 +
                         (3 * C6544) / C6451;
    const double C6569 = C6545 / C6451;
    const double C2965 =
        (3 * C6545) / C6451 - ((C2879 * C6454) / p + (C5195 * C6487) / C3971);
    const double C3257 =
        C6550 / C6451 - ((C3332 * C6448) / p + (C5762 * C6481) / C3971);
    const double C3436 =
        (3 * C6550) / C6451 - ((C3377 * C6452) / p + (C5845 * C6486) / C3971);
    const double C6573 = C6551 / C6451;
    const double C3672 = C6532 - (C3586 * C6454) / p - (C6017 * C6487) / C3971 +
                         (3 * C6551) / C6451;
    const double C1890 = (C4143 * C6446) / C6447 - (C2090 * C6448) / p -
                         (C4147 * C6481) / C3971 + C6555;
    const double C2073 =
        C6555 - ((C2135 * C6452) / p + (C4297 * C6486) / C3971);
    const double C2609 =
        C6569 - ((C2804 * C6448) / p + (C4983 * C6481) / C3971);
    const double C2788 =
        C6531 - (C2848 * C6452) / p - (C5129 * C6486) / C3971 + C6569;
    const double C3316 =
        C6573 - ((C3511 * C6448) / p + (C5805 * C6481) / C3971);
    const double C3495 =
        C6573 - ((C3555 * C6452) / p + (C5951 * C6486) / C3971);
    vrx[0] = C1721;
    vrx[1] = C1722;
    vrx[2] = C1723;
    vrx[3] = C1739;
    vrx[4] = C1754;
    vrx[5] = C1769;
    vrx[6] = C1784;
    vrx[7] = C1799;
    vrx[8] = C1815;
    vrx[9] = C1830;
    vrx[10] = C1845;
    vrx[11] = C1861;
    vrx[12] = C1890;
    vrx[13] = C1906;
    vrx[14] = C1907;
    vrx[15] = C1937;
    vrx[16] = C1952;
    vrx[17] = C1953;
    vrx[18] = C1968;
    vrx[19] = C1983;
    vrx[20] = C2013;
    vrx[21] = C2028;
    vrx[22] = C2058;
    vrx[23] = C2073;
    vrx[24] = C2089;
    vrx[25] = C2090;
    vrx[26] = C2120;
    vrx[27] = C2135;
    vrx[28] = C2150;
    vrx[29] = C2165;
    vrx[30] = C2166;
    vrx[31] = C2210;
    vrx[32] = C2254;
    vrx[33] = C2298;
    vry[0] = C2443;
    vry[1] = C2444;
    vry[2] = C2445;
    vry[3] = C2460;
    vry[4] = C2475;
    vry[5] = C2490;
    vry[6] = C2505;
    vry[7] = C2520;
    vry[8] = C2535;
    vry[9] = C2550;
    vry[10] = C2565;
    vry[11] = C2580;
    vry[12] = C2609;
    vry[13] = C2624;
    vry[14] = C2625;
    vry[15] = C2654;
    vry[16] = C2669;
    vry[17] = C2670;
    vry[18] = C2685;
    vry[19] = C2700;
    vry[20] = C2729;
    vry[21] = C2744;
    vry[22] = C2773;
    vry[23] = C2788;
    vry[24] = C2803;
    vry[25] = C2804;
    vry[26] = C2833;
    vry[27] = C2848;
    vry[28] = C2863;
    vry[29] = C2878;
    vry[30] = C2879;
    vry[31] = C2922;
    vry[32] = C2965;
    vry[33] = C3008;
    vrz[0] = C3150;
    vrz[1] = C3151;
    vrz[2] = C3152;
    vrz[3] = C3167;
    vrz[4] = C3182;
    vrz[5] = C3197;
    vrz[6] = C3212;
    vrz[7] = C3227;
    vrz[8] = C3242;
    vrz[9] = C3257;
    vrz[10] = C3272;
    vrz[11] = C3287;
    vrz[12] = C3316;
    vrz[13] = C3331;
    vrz[14] = C3332;
    vrz[15] = C3361;
    vrz[16] = C3376;
    vrz[17] = C3377;
    vrz[18] = C3392;
    vrz[19] = C3407;
    vrz[20] = C3436;
    vrz[21] = C3451;
    vrz[22] = C3480;
    vrz[23] = C3495;
    vrz[24] = C3510;
    vrz[25] = C3511;
    vrz[26] = C3540;
    vrz[27] = C3555;
    vrz[28] = C3570;
    vrz[29] = C3585;
    vrz[30] = C3586;
    vrz[31] = C3629;
    vrz[32] = C3672;
    vrz[33] = C3715;
}
