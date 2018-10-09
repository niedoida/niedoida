/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2110_4_vr(const double ae,
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
    const double C3985 = g[16];
    const double C4004 = g[17];
    const double C4020 = g[18];
    const double C4035 = g[19];
    const double C4101 = g[20];
    const double C4116 = g[21];
    const double C4146 = g[22];
    const double C4161 = g[23];
    const double C4177 = g[24];
    const double C4204 = g[25];
    const double C4245 = g[26];
    const double C4326 = g[27];
    const double C4353 = g[28];
    const double C4380 = g[29];
    const double C4447 = g[30];
    const double C4462 = g[31];
    const double C4478 = g[32];
    const double C4506 = g[33];
    const double C4534 = g[34];
    const double C4589 = g[35];
    const double C4683 = g[36];
    const double C4705 = g[37];
    const double C4781 = g[38];
    const double C4967 = g[39];
    const double C5358 = g[40];
    const double C5493 = g[41];
    const double C5555 = g[42];
    const double C6401 = g[43];
    const double C3988 = p + q;
    const double C3987 = p * q;
    const double C6488 = bs[5];
    const double C6487 = bs[4];
    const double C6485 = bs[3];
    const double C6484 = bs[2];
    const double C6482 = std::pow(Pi, 2.5);
    const double C6479 = bs[1];
    const double C6478 = ce * de;
    const double C6477 = bs[0];
    const double C6473 = zP - zQ;
    const double C6472 = be * zAB;
    const double C6471 = yP - yQ;
    const double C6470 = be * yAB;
    const double C6469 = 2 * p;
    const double C6467 = xP - xQ;
    const double C6466 = be * xAB;
    const double C3989 = C3988 * p;
    const double C6483 = std::sqrt(C3988);
    const double C6481 = q * C3988;
    const double C6480 = C3987 * de;
    const double C6465 = C3988 * C3987;
    const double C6464 = de * C3987;
    const double C6519 = 4 * C6482;
    const double C6517 = kab * C6478;
    const double C6505 = C6473 * C3987;
    const double C6504 = C6471 * C3987;
    const double C6500 = C6467 * C3987;
    const double C6520 = C3987 * C6483;
    const double C6518 = kab * C6480;
    const double C6531 = C5493 * C6464;
    const double C6526 = C4781 * C6464;
    const double C6524 = C4683 * C6464;
    const double C6523 = C4589 * C6464;
    const double C6522 = C4534 * C6464;
    const double C6521 = C4506 * C6464;
    const double C6516 = C4478 * C6464;
    const double C6514 = C4380 * C6464;
    const double C6513 = C4353 * C6464;
    const double C6512 = C4326 * C6464;
    const double C6511 = C4204 * C6464;
    const double C6510 = C4177 * C6464;
    const double C6508 = C4146 * C6464;
    const double C6506 = C4101 * C6464;
    const double C6503 = C4035 * C6464;
    const double C6502 = C4020 * C6464;
    const double C6499 = C3985 * C6464;
    const double C6553 = kcd * C6517;
    const double C6554 = kcd * C6518;
    const double C6565 = C6531 / C6465;
    const double C6560 = C6526 / C6465;
    const double C6558 = C6524 / C6465;
    const double C6557 = C6523 / C6465;
    const double C6556 = C6522 / C6465;
    const double C6555 = C6521 / C6465;
    const double C6552 = C6516 / C6465;
    const double C6550 = C6514 / C6465;
    const double C6549 = C6513 / C6465;
    const double C6548 = C6512 / C6465;
    const double C6547 = C6511 / C6465;
    const double C6546 = C6510 / C6465;
    const double C6544 = C6508 / C6465;
    const double C6542 = C6506 / C6465;
    const double C6541 = C6503 / C6465;
    const double C6540 = C6502 / C6465;
    const double C6538 = C6499 / C6465;
    const double C6584 = C6487 * C6553;
    const double C6582 = C6485 * C6553;
    const double C6579 = C6484 * C6553;
    const double C6577 = C6479 * C6553;
    const double C6575 = C6477 * C6553;
    const double C6585 = C6488 * C6554;
    const double C6583 = C6487 * C6554;
    const double C6580 = C6485 * C6554;
    const double C6578 = C6484 * C6554;
    const double C6576 = C6479 * C6554;
    const double C4785 =
        (((xCD * C6584) / q + (C6467 * C6585) / C6481) * C6519) / C6520;
    const double C5608 =
        (((yCD * C6584) / q + (C6471 * C6585) / C6481) * C6519) / C6520;
    const double C6428 =
        (((zCD * C6584) / q + (C6473 * C6585) / C6481) * C6519) / C6520;
    const double C4687 =
        (((xCD * C6582) / q + (C6467 * C6583) / C6481) * C6519) / C6520;
    const double C5518 =
        (((yCD * C6582) / q + (C6471 * C6583) / C6481) * C6519) / C6520;
    const double C6338 =
        (((zCD * C6582) / q + (C6473 * C6583) / C6481) * C6519) / C6520;
    const double C4467 =
        (((xCD * C6579) / q + (C6467 * C6580) / C6481) * C6519) / C6520;
    const double C5307 =
        (((yCD * C6579) / q + (C6471 * C6580) / C6481) * C6519) / C6520;
    const double C6129 =
        (((zCD * C6579) / q + (C6473 * C6580) / C6481) * C6519) / C6520;
    const double C4009 =
        (((xCD * C6577) / q + (C6467 * C6578) / C6481) * C6519) / C6520;
    const double C4834 =
        (((yCD * C6577) / q + (C6471 * C6578) / C6481) * C6519) / C6520;
    const double C5657 =
        (((zCD * C6577) / q + (C6473 * C6578) / C6481) * C6519) / C6520;
    const double C4008 =
        (((xCD * C6575) / q + (C6467 * C6576) / C6481) * C6519) / C6520;
    const double C4833 =
        (((yCD * C6575) / q + (C6471 * C6576) / C6481) * C6519) / C6520;
    const double C5656 =
        (((zCD * C6575) / q + (C6473 * C6576) / C6481) * C6519) / C6520;
    const double C6486 = C4687 * C3987;
    const double C4709 = C6560 - (C4687 * C6466) / p - (C4785 * C6500) / C3989;
    const double C4723 = -((C4687 * C6470) / p + (C4785 * C6504) / C3989);
    const double C4750 = -((C4687 * C6472) / p + (C4785 * C6505) / C3989);
    const double C6493 = C5518 * C3987;
    const double C5532 = -((C5518 * C6466) / p + (C5608 * C6500) / C3989);
    const double C5560 = C6560 - (C5518 * C6470) / p - (C5608 * C6504) / C3989;
    const double C5587 = -((C5518 * C6472) / p + (C5608 * C6505) / C3989);
    const double C6498 = C6338 * C3987;
    const double C6352 = -((C6338 * C6466) / p + (C6428 * C6500) / C3989);
    const double C6379 = -((C6338 * C6470) / p + (C6428 * C6504) / C3989);
    const double C6407 = C6560 - (C6338 * C6472) / p - (C6428 * C6505) / C3989;
    const double C6476 = C4467 * C3987;
    const double C4466 = C6558 - (C4467 * C6466) / p - (C4687 * C6500) / C3989;
    const double C4552 = -((C4467 * C6470) / p + (C4687 * C6504) / C3989);
    const double C4607 = -((C4467 * C6472) / p + (C4687 * C6505) / C3989);
    const double C6492 = C5307 * C3987;
    const double C5321 = -((C5307 * C6466) / p + (C5518 * C6500) / C3989);
    const double C5363 = C6558 - (C5307 * C6470) / p - (C5518 * C6504) / C3989;
    const double C5417 = -((C5307 * C6472) / p + (C5518 * C6505) / C3989);
    const double C6497 = C6129 * C3987;
    const double C6143 = -((C6129 * C6466) / p + (C6338 * C6500) / C3989);
    const double C6184 = -((C6129 * C6470) / p + (C6338 * C6504) / C3989);
    const double C6238 = C6558 - (C6129 * C6472) / p - (C6338 * C6505) / C3989;
    const double C6468 = C4009 * C3987;
    const double C3993 = C6552 - (C4009 * C6466) / p - (C4467 * C6500) / C3989;
    const double C4105 = -((C4009 * C6470) / p + (C4467 * C6504) / C3989);
    const double C4150 = -((C4009 * C6472) / p + (C4467 * C6505) / C3989);
    const double C6489 = C4834 * C3987;
    const double C4835 = -((C4834 * C6466) / p + (C5307 * C6500) / C3989);
    const double C4942 = C6552 - (C4834 * C6470) / p - (C5307 * C6504) / C3989;
    const double C4986 = -((C4834 * C6472) / p + (C5307 * C6505) / C3989);
    const double C6494 = C5657 * C3987;
    const double C5658 = -((C5657 * C6466) / p + (C6129 * C6500) / C3989);
    const double C5765 = -((C5657 * C6470) / p + (C6129 * C6504) / C3989);
    const double C5808 = C6552 - (C5657 * C6472) / p - (C6129 * C6505) / C3989;
    const double C1739 = C6541 - (C4008 * C6466) / p - (C4009 * C6500) / C3989;
    const double C1952 = -((C4008 * C6470) / p + (C4009 * C6504) / C3989);
    const double C2165 = -((C4008 * C6472) / p + (C4009 * C6505) / C3989);
    const double C2460 = -((C4833 * C6466) / p + (C4834 * C6500) / C3989);
    const double C2669 = C6541 - (C4833 * C6470) / p - (C4834 * C6504) / C3989;
    const double C2878 = -((C4833 * C6472) / p + (C4834 * C6505) / C3989);
    const double C3167 = -((C5656 * C6466) / p + (C5657 * C6500) / C3989);
    const double C3376 = -((C5656 * C6470) / p + (C5657 * C6504) / C3989);
    const double C3585 = C6541 - (C5656 * C6472) / p - (C5657 * C6505) / C3989;
    const double C6525 = C6486 / C3989;
    const double C6532 = C6493 / C3989;
    const double C6537 = C6498 / C3989;
    const double C6515 = C6476 / C3989;
    const double C6530 = C6492 / C3989;
    const double C6536 = C6497 / C3989;
    const double C6501 = C6468 / C3989;
    const double C4451 = -((C4150 * C6470) / p + (C4607 * C6504) / C3989);
    const double C6527 = C6489 / C3989;
    const double C5279 = C6565 - (C4986 * C6470) / p - (C5417 * C6504) / C3989;
    const double C6533 = C6494 / C3989;
    const double C6101 = -((C5808 * C6470) / p + (C6238 * C6504) / C3989);
    const double C1815 = C6542 - (C1952 * C6466) / p - (C4105 * C6500) / C3989;
    const double C1861 = C6544 - (C2165 * C6466) / p - (C4150 * C6500) / C3989;
    const double C2058 = -((C2165 * C6470) / p + (C4150 * C6504) / C3989);
    const double C2535 = -((C2669 * C6466) / p + (C4942 * C6500) / C3989);
    const double C2580 = -((C2878 * C6466) / p + (C4986 * C6500) / C3989);
    const double C2773 = C6544 - (C2878 * C6470) / p - (C4986 * C6504) / C3989;
    const double C3242 = -((C3376 * C6466) / p + (C5765 * C6500) / C3989);
    const double C3287 = -((C3585 * C6466) / p + (C5808 * C6500) / C3989);
    const double C3480 = -((C3585 * C6470) / p + (C5808 * C6504) / C3989);
    const double C6559 = C4467 - C6525;
    const double C6566 = C5307 - C6532;
    const double C6571 = C6129 - C6537;
    const double C6551 = C4009 - C6515;
    const double C6564 = C4834 - C6530;
    const double C6570 = C5657 - C6536;
    const double C6539 = C4008 - C6501;
    const double C6561 = C4833 - C6527;
    const double C6567 = C5656 - C6533;
    const double C2298 =
        (C4447 * C6464) / C6465 - (C2058 * C6466) / p - (C4451 * C6500) / C3989;
    const double C3008 = -((C2773 * C6466) / p + (C5279 * C6500) / C3989);
    const double C3715 = -((C3480 * C6466) / p + (C6101 * C6500) / C3989);
    const double C6581 = C6559 / C6469;
    const double C6589 = C6566 / C6469;
    const double C6593 = C6571 / C6469;
    const double C6574 = C6551 / C6469;
    const double C6588 = C6564 / C6469;
    const double C6592 = C6570 / C6469;
    const double C6572 = C6539 / C6469;
    const double C6586 = C6561 / C6469;
    const double C6590 = C6567 / C6469;
    const double C4510 = (C4705 * C6464) / C6465 - (C4466 * C6466) / p -
                         (C4709 * C6500) / C3989 + C6581;
    const double C4538 =
        C6581 - ((C4552 * C6470) / p + (C4723 * C6504) / C3989);
    const double C4593 =
        C6581 - ((C4607 * C6472) / p + (C4750 * C6505) / C3989);
    const double C5335 =
        C6589 - ((C5321 * C6466) / p + (C5532 * C6500) / C3989);
    const double C5377 = (C5555 * C6464) / C6465 - (C5363 * C6470) / p -
                         (C5560 * C6504) / C3989 + C6589;
    const double C5431 =
        C6589 - ((C5417 * C6472) / p + (C5587 * C6505) / C3989);
    const double C6157 =
        C6593 - ((C6143 * C6466) / p + (C6352 * C6500) / C3989);
    const double C6198 =
        C6593 - ((C6184 * C6470) / p + (C6379 * C6504) / C3989);
    const double C6252 = (C6401 * C6464) / C6465 - (C6238 * C6472) / p -
                         (C6407 * C6505) / C3989 + C6593;
    const double C3992 = (C4462 * C6464) / C6465 - (C3993 * C6466) / p -
                         (C4466 * C6500) / C3989 + C6574;
    const double C4121 =
        C6574 - ((C4105 * C6470) / p + (C4552 * C6504) / C3989);
    const double C4166 =
        C6574 - ((C4150 * C6472) / p + (C4607 * C6505) / C3989);
    const double C4849 =
        C6588 - ((C4835 * C6466) / p + (C5321 * C6500) / C3989);
    const double C4956 = (C5358 * C6464) / C6465 - (C4942 * C6470) / p -
                         (C5363 * C6504) / C3989 + C6588;
    const double C5000 =
        C6588 - ((C4986 * C6472) / p + (C5417 * C6505) / C3989);
    const double C5672 =
        C6592 - ((C5658 * C6466) / p + (C6143 * C6500) / C3989);
    const double C5779 =
        C6592 - ((C5765 * C6470) / p + (C6184 * C6504) / C3989);
    const double C5822 =
        C6565 - (C5808 * C6472) / p - (C6238 * C6505) / C3989 + C6592;
    const double C1722 = (C4004 * C6464) / C6465 - (C1739 * C6466) / p -
                         (C3993 * C6500) / C3989 + C6572;
    const double C1907 =
        C6572 - ((C1952 * C6470) / p + (C4105 * C6504) / C3989);
    const double C2090 =
        C6572 - ((C2165 * C6472) / p + (C4150 * C6505) / C3989);
    const double C2443 =
        C6586 - ((C2460 * C6466) / p + (C4835 * C6500) / C3989);
    const double C2624 =
        C6542 - (C2669 * C6470) / p - (C4942 * C6504) / C3989 + C6586;
    const double C2803 =
        C6586 - ((C2878 * C6472) / p + (C4986 * C6505) / C3989);
    const double C3150 =
        C6590 - ((C3167 * C6466) / p + (C5658 * C6500) / C3989);
    const double C3331 =
        C6590 - ((C3376 * C6470) / p + (C5765 * C6504) / C3989);
    const double C3510 =
        C6544 - (C3585 * C6472) / p - (C5808 * C6505) / C3989 + C6590;
    const double C4024 = C6555 - (C3992 * C6466) / p - (C4510 * C6500) / C3989 +
                         (C3993 - (C4466 * C3987) / C3989) / p;
    const double C4135 = -((C3992 * C6472) / p + (C4510 * C6505) / C3989);
    const double C6474 = C4121 * C3987;
    const double C4120 = C6556 - (C4121 * C6466) / p - (C4538 * C6500) / C3989;
    const double C4208 = (C4105 - (C4552 * C3987) / C3989) / p -
                         ((C4121 * C6470) / p + (C4538 * C6504) / C3989);
    const double C4249 = -((C4121 * C6472) / p + (C4538 * C6505) / C3989);
    const double C6475 = C4166 * C3987;
    const double C4165 = C6557 - (C4166 * C6466) / p - (C4593 * C6500) / C3989;
    const double C4315 = -((C4166 * C6470) / p + (C4593 * C6504) / C3989);
    const double C4384 = (C4150 - (C4607 * C3987) / C3989) / p -
                         ((C4166 * C6472) / p + (C4593 * C6505) / C3989);
    const double C4863 = (C4835 - (C5321 * C3987) / C3989) / p -
                         ((C4849 * C6466) / p + (C5335 * C6500) / C3989);
    const double C4972 = -((C4849 * C6472) / p + (C5335 * C6505) / C3989);
    const double C6490 = C4956 * C3987;
    const double C4957 = -((C4956 * C6466) / p + (C5377 * C6500) / C3989);
    const double C5041 = C6556 - (C4956 * C6470) / p - (C5377 * C6504) / C3989 +
                         (C4942 - (C5363 * C3987) / C3989) / p;
    const double C5081 = -((C4956 * C6472) / p + (C5377 * C6505) / C3989);
    const double C6491 = C5000 * C3987;
    const double C5001 = -((C5000 * C6466) / p + (C5431 * C6500) / C3989);
    const double C5147 = C6557 - (C5000 * C6470) / p - (C5431 * C6504) / C3989;
    const double C5213 = (C4986 - (C5417 * C3987) / C3989) / p -
                         ((C5000 * C6472) / p + (C5431 * C6505) / C3989);
    const double C5686 = (C5658 - (C6143 * C3987) / C3989) / p -
                         ((C5672 * C6466) / p + (C6157 * C6500) / C3989);
    const double C5794 = C6555 - (C5672 * C6472) / p - (C6157 * C6505) / C3989;
    const double C6495 = C5779 * C3987;
    const double C5780 = -((C5779 * C6466) / p + (C6198 * C6500) / C3989);
    const double C5863 = (C5765 - (C6184 * C3987) / C3989) / p -
                         ((C5779 * C6470) / p + (C6198 * C6504) / C3989);
    const double C5903 = C6556 - (C5779 * C6472) / p - (C6198 * C6505) / C3989;
    const double C6496 = C5822 * C3987;
    const double C5823 = -((C5822 * C6466) / p + (C6252 * C6500) / C3989);
    const double C5969 = -((C5822 * C6470) / p + (C6252 * C6504) / C3989);
    const double C6035 = C6557 - (C5822 * C6472) / p - (C6252 * C6505) / C3989 +
                         (C5808 - (C6238 * C3987) / C3989) / p;
    const double C1721 = C6538 - (C1722 * C6466) / p - (C3992 * C6500) / C3989 +
                         (C1739 - (C3993 * C3987) / C3989) / p;
    const double C1769 = -((C1722 * C6470) / p + (C3992 * C6504) / C3989);
    const double C1799 = -((C1722 * C6472) / p + (C3992 * C6505) / C3989);
    const double C1906 = C6546 - (C1907 * C6466) / p - (C4121 * C6500) / C3989;
    const double C1953 = (C1952 - (C4105 * C3987) / C3989) / p -
                         ((C1907 * C6470) / p + (C4121 * C6504) / C3989);
    const double C1983 = -((C1907 * C6472) / p + (C4121 * C6505) / C3989);
    const double C2089 = C6548 - (C2090 * C6466) / p - (C4166 * C6500) / C3989;
    const double C2135 = -((C2090 * C6470) / p + (C4166 * C6504) / C3989);
    const double C2166 = (C2165 - (C4150 * C3987) / C3989) / p -
                         ((C2090 * C6472) / p + (C4166 * C6505) / C3989);
    const double C2444 = (C2460 - (C4835 * C3987) / C3989) / p -
                         ((C2443 * C6466) / p + (C4849 * C6500) / C3989);
    const double C2490 = C6538 - (C2443 * C6470) / p - (C4849 * C6504) / C3989;
    const double C2520 = -((C2443 * C6472) / p + (C4849 * C6505) / C3989);
    const double C2625 = -((C2624 * C6466) / p + (C4956 * C6500) / C3989);
    const double C2670 = C6546 - (C2624 * C6470) / p - (C4956 * C6504) / C3989 +
                         (C2669 - (C4942 * C3987) / C3989) / p;
    const double C2700 = -((C2624 * C6472) / p + (C4956 * C6505) / C3989);
    const double C2804 = -((C2803 * C6466) / p + (C5000 * C6500) / C3989);
    const double C2848 = C6548 - (C2803 * C6470) / p - (C5000 * C6504) / C3989;
    const double C2879 = (C2878 - (C4986 * C3987) / C3989) / p -
                         ((C2803 * C6472) / p + (C5000 * C6505) / C3989);
    const double C3151 = (C3167 - (C5658 * C3987) / C3989) / p -
                         ((C3150 * C6466) / p + (C5672 * C6500) / C3989);
    const double C3197 = -((C3150 * C6470) / p + (C5672 * C6504) / C3989);
    const double C3227 = C6538 - (C3150 * C6472) / p - (C5672 * C6505) / C3989;
    const double C3332 = -((C3331 * C6466) / p + (C5779 * C6500) / C3989);
    const double C3377 = (C3376 - (C5765 * C3987) / C3989) / p -
                         ((C3331 * C6470) / p + (C5779 * C6504) / C3989);
    const double C3407 = C6546 - (C3331 * C6472) / p - (C5779 * C6505) / C3989;
    const double C3511 = -((C3510 * C6466) / p + (C5822 * C6500) / C3989);
    const double C3555 = -((C3510 * C6470) / p + (C5822 * C6504) / C3989);
    const double C3586 = C6548 - (C3510 * C6472) / p - (C5822 * C6505) / C3989 +
                         (C3585 - (C5808 * C3987) / C3989) / p;
    const double C6507 = C6474 / C3989;
    const double C6509 = C6475 / C3989;
    const double C6528 = C6490 / C3989;
    const double C6529 = C6491 / C3989;
    const double C6534 = C6495 / C3989;
    const double C6535 = C6496 / C3989;
    const double C1723 = C6540 - (C1721 * C6466) / p - (C4024 * C6500) / C3989 +
                         (3 * (C1722 - (C3992 * C3987) / C3989)) / C6469;
    const double C1754 = -((C1721 * C6470) / p + (C4024 * C6504) / C3989);
    const double C1784 = -((C1721 * C6472) / p + (C4024 * C6505) / C3989);
    const double C1845 = -((C1799 * C6470) / p + (C4135 * C6504) / C3989);
    const double C1937 = C6547 - (C1953 * C6466) / p - (C4208 * C6500) / C3989;
    const double C2028 = -((C1953 * C6472) / p + (C4208 * C6505) / C3989);
    const double C1968 =
        (C4245 * C6464) / C6465 - (C1983 * C6466) / p - (C4249 * C6500) / C3989;
    const double C2120 = C6549 - (C2135 * C6466) / p - (C4315 * C6500) / C3989;
    const double C2150 = C6550 - (C2166 * C6466) / p - (C4384 * C6500) / C3989;
    const double C2210 = -((C2166 * C6470) / p + (C4384 * C6504) / C3989);
    const double C2445 = (3 * (C2443 - (C4849 * C3987) / C3989)) / C6469 -
                         ((C2444 * C6466) / p + (C4863 * C6500) / C3989);
    const double C2475 = C6540 - (C2444 * C6470) / p - (C4863 * C6504) / C3989;
    const double C2505 = -((C2444 * C6472) / p + (C4863 * C6505) / C3989);
    const double C2565 =
        (C4967 * C6464) / C6465 - (C2520 * C6470) / p - (C4972 * C6504) / C3989;
    const double C2654 = -((C2670 * C6466) / p + (C5041 * C6500) / C3989);
    const double C2744 = -((C2670 * C6472) / p + (C5041 * C6505) / C3989);
    const double C2685 = -((C2700 * C6466) / p + (C5081 * C6500) / C3989);
    const double C2833 = -((C2848 * C6466) / p + (C5147 * C6500) / C3989);
    const double C2863 = -((C2879 * C6466) / p + (C5213 * C6500) / C3989);
    const double C2922 = C6550 - (C2879 * C6470) / p - (C5213 * C6504) / C3989;
    const double C3152 = (3 * (C3150 - (C5672 * C3987) / C3989)) / C6469 -
                         ((C3151 * C6466) / p + (C5686 * C6500) / C3989);
    const double C3182 = -((C3151 * C6470) / p + (C5686 * C6504) / C3989);
    const double C3212 = C6540 - (C3151 * C6472) / p - (C5686 * C6505) / C3989;
    const double C3272 = -((C3227 * C6470) / p + (C5794 * C6504) / C3989);
    const double C3361 = -((C3377 * C6466) / p + (C5863 * C6500) / C3989);
    const double C3451 = C6547 - (C3377 * C6472) / p - (C5863 * C6505) / C3989;
    const double C3392 = -((C3407 * C6466) / p + (C5903 * C6500) / C3989);
    const double C3540 = -((C3555 * C6466) / p + (C5969 * C6500) / C3989);
    const double C3570 = -((C3586 * C6466) / p + (C6035 * C6500) / C3989);
    const double C3629 = -((C3586 * C6470) / p + (C6035 * C6504) / C3989);
    const double C6543 = C1907 - C6507;
    const double C6545 = C2090 - C6509;
    const double C6562 = C2624 - C6528;
    const double C6563 = C2803 - C6529;
    const double C6568 = C3331 - C6534;
    const double C6569 = C3510 - C6535;
    const double C1830 = (C4116 * C6464) / C6465 - (C1906 * C6466) / p -
                         (C4120 * C6500) / C3989 + C6543 / C6469;
    const double C2013 =
        (3 * C6543) / C6469 - ((C1953 * C6470) / p + (C4208 * C6504) / C3989);
    const double C6573 = C6545 / C6469;
    const double C2254 =
        (3 * C6545) / C6469 - ((C2166 * C6472) / p + (C4384 * C6505) / C3989);
    const double C2550 =
        C6562 / C6469 - ((C2625 * C6466) / p + (C4957 * C6500) / C3989);
    const double C2729 = C6547 - (C2670 * C6470) / p - (C5041 * C6504) / C3989 +
                         (3 * C6562) / C6469;
    const double C6587 = C6563 / C6469;
    const double C2965 =
        (3 * C6563) / C6469 - ((C2879 * C6472) / p + (C5213 * C6505) / C3989);
    const double C3257 =
        C6568 / C6469 - ((C3332 * C6466) / p + (C5780 * C6500) / C3989);
    const double C3436 =
        (3 * C6568) / C6469 - ((C3377 * C6470) / p + (C5863 * C6504) / C3989);
    const double C6591 = C6569 / C6469;
    const double C3672 = C6550 - (C3586 * C6472) / p - (C6035 * C6505) / C3989 +
                         (3 * C6569) / C6469;
    const double C1890 = (C4161 * C6464) / C6465 - (C2089 * C6466) / p -
                         (C4165 * C6500) / C3989 + C6573;
    const double C2073 =
        C6573 - ((C2135 * C6470) / p + (C4315 * C6504) / C3989);
    const double C2609 =
        C6587 - ((C2804 * C6466) / p + (C5001 * C6500) / C3989);
    const double C2788 =
        C6549 - (C2848 * C6470) / p - (C5147 * C6504) / C3989 + C6587;
    const double C3316 =
        C6591 - ((C3511 * C6466) / p + (C5823 * C6500) / C3989);
    const double C3495 =
        C6591 - ((C3555 * C6470) / p + (C5969 * C6504) / C3989);
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
