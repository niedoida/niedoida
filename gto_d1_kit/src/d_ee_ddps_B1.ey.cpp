/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2120_2_vr(const double ae,
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
    const double C5238 = g[84];
    const double C5254 = g[85];
    const double C5270 = g[86];
    const double C5285 = g[87];
    const double C5538 = g[90];
    const double C5626 = g[91];
    const double C5657 = g[93];
    const double C5757 = g[94];
    const double C5772 = g[95];
    const double C5787 = g[96];
    const double C5977 = g[97];
    const double C5992 = g[98];
    const double C6052 = g[99];
    const double C6167 = g[101];
    const double C6182 = g[102];
    const double C6197 = g[103];
    const double C6385 = g[104];
    const double C6444 = g[106];
    const double C6459 = g[107];
    const double C6531 = g[108];
    const double C6575 = g[110];
    const double C6619 = g[112];
    const double C8858 = g[113];
    const double C8960 = g[114];
    const double C9261 = g[115];
    const double C9333 = g[116];
    const double C12185 = g[117];
    const double C12770 = g[118];
    const double C12790 = g[119];
    const double C12834 = g[120];
    const double C12893 = g[121];
    const double C12952 = g[122];
    const double C12967 = g[123];
    const double C12983 = g[124];
    const double C13012 = g[125];
    const double C13028 = g[126];
    const double C13029 = g[127];
    const double C13044 = g[128];
    const double C13096 = g[129];
    const double C13141 = g[130];
    const double C13228 = g[131];
    const double C13289 = g[132];
    const double C13306 = g[133];
    const double C13321 = g[134];
    const double C13351 = g[135];
    const double C13367 = g[136];
    const double C13398 = g[137];
    const double C13485 = g[138];
    const double C13500 = g[139];
    const double C13515 = g[140];
    const double C13545 = g[141];
    const double C13602 = g[142];
    const double C13619 = g[143];
    const double C13713 = g[144];
    const double C13729 = g[145];
    const double C13759 = g[146];
    const double C13789 = g[147];
    const double C13819 = g[148];
    const double C13849 = g[149];
    const double C13865 = g[150];
    const double C13881 = g[151];
    const double C14010 = g[152];
    const double C14061 = g[153];
    const double C14077 = g[154];
    const double C14138 = g[155];
    const double C14154 = g[156];
    const double C14204 = g[157];
    const double C14220 = g[158];
    const double C14301 = g[159];
    const double C14649 = g[160];
    const double C14752 = g[161];
    const double C14767 = g[162];
    const double C14813 = g[163];
    const double C15198 = g[164];
    const double C15257 = g[165];
    const double C15490 = g[166];
    const double C15642 = g[167];
    const double C15810 = g[168];
    const double C16371 = g[169];
    const double C17197 = g[170];
    const double C17365 = g[171];
    const double C12773 = p + q;
    const double C12772 = p * q;
    const double C17498 = C12983 * be;
    const double C17494 = C5657 * be;
    const double C17489 = bs[6];
    const double C17488 = C14204 * be;
    const double C17487 = bs[5];
    const double C17485 = C14010 * be;
    const double C17484 = bs[4];
    const double C17483 = C13759 * be;
    const double C17482 = C13789 * be;
    const double C17480 = bs[3];
    const double C17479 = C13619 * be;
    const double C17478 = C13500 * be;
    const double C17475 = C13306 * be;
    const double C17474 = C12893 * be;
    const double C17473 = C12834 * be;
    const double C17472 = C13012 * be;
    const double C17471 = C12770 * be;
    const double C17470 = bs[2];
    const double C17469 = C13029 * be;
    const double C17467 = C9333 * be;
    const double C17466 = C12185 * be;
    const double C17465 = C6444 * be;
    const double C17464 = C6385 * be;
    const double C17463 = C8960 * be;
    const double C17462 = C8858 * be;
    const double C17461 = C5977 * be;
    const double C17455 = std::pow(Pi, 2.5);
    const double C17454 = ae * be;
    const double C17453 = bs[0];
    const double C17450 = bs[1];
    const double C17448 = C5270 * be;
    const double C17447 = C13028 * be;
    const double C17446 = C5238 * be;
    const double C17445 = C6619 * be;
    const double C17444 = C6531 * be;
    const double C17443 = C6182 * be;
    const double C17442 = C5772 * be;
    const double C17441 = zP - zQ;
    const double C17440 = be * zAB;
    const double C17439 = yP - yQ;
    const double C17438 = be * yAB;
    const double C17437 = 2 * p;
    const double C17435 = xP - xQ;
    const double C17434 = std::pow(p, 2);
    const double C17432 = be * xAB;
    const double C17431 = C5254 * be;
    const double C12774 = C12773 * p;
    const double C17456 = std::sqrt(C12773);
    const double C17452 = p * C12773;
    const double C17451 = C12772 * be;
    const double C17433 = be * C12772;
    const double C17596 = C17498 / p;
    const double C17591 = C17494 / p;
    const double C17585 = C17488 / p;
    const double C17582 = C17485 / p;
    const double C17580 = C17483 / p;
    const double C17578 = C17482 / p;
    const double C17575 = C17479 / p;
    const double C17573 = C17478 / p;
    const double C17569 = C17475 / p;
    const double C17567 = C17474 / p;
    const double C17565 = C17473 / p;
    const double C17563 = C17472 / p;
    const double C17561 = C17471 / p;
    const double C17559 = C17469 / p;
    const double C17556 = C17467 / p;
    const double C17554 = C17466 / p;
    const double C17552 = C17465 / p;
    const double C17550 = C17464 / p;
    const double C17548 = C17463 / p;
    const double C17546 = C17462 / p;
    const double C17544 = C17461 / p;
    const double C17538 = 4 * C17455;
    const double C17537 = kab * C17454;
    const double C17533 = C17448 / p;
    const double C17531 = C17447 / p;
    const double C17529 = C17446 / p;
    const double C17527 = C17445 / p;
    const double C17525 = C17444 / p;
    const double C17523 = C17443 / p;
    const double C17521 = C17442 / p;
    const double C17520 = C17441 * C12772;
    const double C17519 = C17439 * C12772;
    const double C17517 = C17435 * C12772;
    const double C17516 = C12773 * C17434;
    const double C17514 = C17431 / p;
    const double C17539 = C12772 * C17456;
    const double C17536 = kab * C17451;
    const double C17597 = C15257 * C17433;
    const double C17592 = C14752 * C17433;
    const double C17586 = C14301 * C17433;
    const double C17583 = C14204 * C17433;
    const double C17581 = C14154 * C17433;
    const double C17579 = C14138 * C17433;
    const double C17576 = C14010 * C17433;
    const double C17574 = C13881 * C17433;
    const double C17570 = C13819 * C17433;
    const double C17568 = C13789 * C17433;
    const double C17566 = C13759 * C17433;
    const double C17564 = C13729 * C17433;
    const double C17562 = C13713 * C17433;
    const double C17560 = C13619 * C17433;
    const double C17557 = C13545 * C17433;
    const double C17555 = C13515 * C17433;
    const double C17553 = C13500 * C17433;
    const double C17551 = C13485 * C17433;
    const double C17549 = C13398 * C17433;
    const double C17547 = C13321 * C17433;
    const double C17545 = C13306 * C17433;
    const double C17534 = C13044 * C17433;
    const double C17532 = C13029 * C17433;
    const double C17530 = C13012 * C17433;
    const double C17528 = C12983 * C17433;
    const double C17526 = C12952 * C17433;
    const double C17524 = C12893 * C17433;
    const double C17522 = C12834 * C17433;
    const double C17515 = C12770 * C17433;
    const double C17624 = kcd * C17537;
    const double C17623 = kcd * C17536;
    const double C17661 = C17597 / C17516;
    const double C17657 = C17592 / C17516;
    const double C17652 = C17586 / C17516;
    const double C17650 = C17583 / C17516;
    const double C17649 = C17581 / C17516;
    const double C17648 = C17579 / C17516;
    const double C17646 = C17576 / C17516;
    const double C17645 = C17574 / C17516;
    const double C17642 = C17570 / C17516;
    const double C17641 = C17568 / C17516;
    const double C17640 = C17566 / C17516;
    const double C17639 = C17564 / C17516;
    const double C17638 = C17562 / C17516;
    const double C17637 = C17560 / C17516;
    const double C17635 = C17557 / C17516;
    const double C17634 = C17555 / C17516;
    const double C17633 = C17553 / C17516;
    const double C17632 = C17551 / C17516;
    const double C17631 = C17549 / C17516;
    const double C17630 = C17547 / C17516;
    const double C17629 = C17545 / C17516;
    const double C17621 = C17534 / C17516;
    const double C17620 = C17532 / C17516;
    const double C17619 = C17530 / C17516;
    const double C17618 = C17528 / C17516;
    const double C17617 = C17526 / C17516;
    const double C17616 = C17524 / C17516;
    const double C17615 = C17522 / C17516;
    const double C17613 = C17515 / C17516;
    const double C17697 = C17487 * C17624;
    const double C17695 = C17484 * C17624;
    const double C17692 = C17480 * C17624;
    const double C17689 = C17470 * C17624;
    const double C17686 = C17450 * C17624;
    const double C17679 = C17453 * C17624;
    const double C17696 = C17489 * C17623;
    const double C17694 = C17487 * C17623;
    const double C17691 = C17484 * C17623;
    const double C17688 = C17480 * C17623;
    const double C17685 = C17470 * C17623;
    const double C17678 = C17450 * C17623;
    const double C14305 =
        -(((C17435 * C17696) / C17452 - (xAB * C17697) / p) * C17538) / C17539;
    const double C15852 =
        -(((C17439 * C17696) / C17452 - (yAB * C17697) / p) * C17538) / C17539;
    const double C17393 =
        -(((C17441 * C17696) / C17452 - (zAB * C17697) / p) * C17538) / C17539;
    const double C14208 =
        -(((C17435 * C17694) / C17452 - (xAB * C17695) / p) * C17538) / C17539;
    const double C15756 =
        -(((C17439 * C17694) / C17452 - (yAB * C17695) / p) * C17538) / C17539;
    const double C17297 =
        -(((C17441 * C17694) / C17452 - (zAB * C17695) / p) * C17538) / C17539;
    const double C14014 =
        -(((C17435 * C17691) / C17452 - (xAB * C17692) / p) * C17538) / C17539;
    const double C15573 =
        -(((C17439 * C17691) / C17452 - (yAB * C17692) / p) * C17538) / C17539;
    const double C17114 =
        -(((C17441 * C17691) / C17452 - (zAB * C17692) / p) * C17538) / C17539;
    const double C13607 =
        -(((C17435 * C17688) / C17452 - (xAB * C17689) / p) * C17538) / C17539;
    const double C15165 =
        -(((C17439 * C17688) / C17452 - (yAB * C17689) / p) * C17538) / C17539;
    const double C16709 =
        -(((C17441 * C17688) / C17452 - (zAB * C17689) / p) * C17538) / C17539;
    const double C12794 =
        -(((C17435 * C17685) / C17452 - (xAB * C17686) / p) * C17538) / C17539;
    const double C14372 =
        -(((C17439 * C17685) / C17452 - (yAB * C17686) / p) * C17538) / C17539;
    const double C15919 =
        -(((C17441 * C17685) / C17452 - (zAB * C17686) / p) * C17538) / C17539;
    const double C5289 =
        -(((C17435 * C17678) / C17452 - (xAB * C17679) / p) * C17538) / C17539;
    const double C8152 =
        -(((C17439 * C17678) / C17452 - (yAB * C17679) / p) * C17538) / C17539;
    const double C10994 =
        -(((C17441 * C17678) / C17452 - (zAB * C17679) / p) * C17538) / C17539;
    const double C17486 = C14208 * C12772;
    const double C14224 =
        C17585 - (C14208 * C17432) / p - C17652 - (C14305 * C17517) / C12774;
    const double C14267 = -((C14208 * C17438) / p + (C14305 * C17519) / C12774);
    const double C14282 = -((C14208 * C17440) / p + (C14305 * C17520) / C12774);
    const double C17502 = C15756 * C12772;
    const double C15771 = -((C15756 * C17432) / p + (C15852 * C17517) / C12774);
    const double C15815 =
        C17585 - (C15756 * C17438) / p - C17652 - (C15852 * C17519) / C12774;
    const double C15830 = -((C15756 * C17440) / p + (C15852 * C17520) / C12774);
    const double C17513 = C17297 * C12772;
    const double C17312 = -((C17297 * C17432) / p + (C17393 * C17517) / C12774);
    const double C17355 = -((C17297 * C17438) / p + (C17393 * C17519) / C12774);
    const double C17371 =
        C17585 - (C17297 * C17440) / p - C17652 - (C17393 * C17520) / C12774;
    const double C17481 = C14014 * C12772;
    const double C14065 =
        C17582 - (C14014 * C17432) / p - C17650 - (C14208 * C17517) / C12774;
    const double C14096 = -((C14014 * C17438) / p + (C14208 * C17519) / C12774);
    const double C14111 = -((C14014 * C17440) / p + (C14208 * C17520) / C12774);
    const double C17501 = C15573 * C12772;
    const double C15616 = -((C15573 * C17432) / p + (C15756 * C17517) / C12774);
    const double C15647 =
        C17582 - (C15573 * C17438) / p - C17650 - (C15756 * C17519) / C12774;
    const double C15662 = -((C15573 * C17440) / p + (C15756 * C17520) / C12774);
    const double C17512 = C17114 * C12772;
    const double C17157 = -((C17114 * C17432) / p + (C17297 * C17517) / C12774);
    const double C17187 = -((C17114 * C17438) / p + (C17297 * C17519) / C12774);
    const double C17203 =
        C17582 - (C17114 * C17440) / p - C17650 - (C17297 * C17520) / C12774;
    const double C17468 = C13607 * C12772;
    const double C13606 =
        C17575 - (C13607 * C17432) / p - C17646 - (C14014 * C17517) / C12774;
    const double C13644 = -((C13607 * C17438) / p + (C14014 * C17519) / C12774);
    const double C13673 = -((C13607 * C17440) / p + (C14014 * C17520) / C12774);
    const double C17497 = C15165 * C12772;
    const double C15180 = -((C15165 * C17432) / p + (C15573 * C17517) / C12774);
    const double C15203 =
        C17575 - (C15165 * C17438) / p - C17646 - (C15573 * C17519) / C12774;
    const double C15232 = -((C15165 * C17440) / p + (C15573 * C17520) / C12774);
    const double C17509 = C16709 * C12772;
    const double C16724 = -((C16709 * C17432) / p + (C17114 * C17517) / C12774);
    const double C16746 = -((C16709 * C17438) / p + (C17114 * C17519) / C12774);
    const double C16775 =
        C17575 - (C16709 * C17440) / p - C17646 - (C17114 * C17520) / C12774;
    const double C17436 = C12794 * C12772;
    const double C12778 =
        C17559 - (C12794 * C17432) / p - C17637 - (C13607 * C17517) / C12774;
    const double C12853 = -((C12794 * C17438) / p + (C13607 * C17519) / C12774);
    const double C12912 = -((C12794 * C17440) / p + (C13607 * C17520) / C12774);
    const double C17490 = C14372 * C12772;
    const double C14356 = -((C14372 * C17432) / p + (C15165 * C17517) / C12774);
    const double C14430 =
        C17559 - (C14372 * C17438) / p - C17637 - (C15165 * C17519) / C12774;
    const double C14488 = -((C14372 * C17440) / p + (C15165 * C17520) / C12774);
    const double C17503 = C15919 * C12772;
    const double C15903 = -((C15919 * C17432) / p + (C16709 * C17517) / C12774);
    const double C15977 = -((C15919 * C17438) / p + (C16709 * C17519) / C12774);
    const double C16035 =
        C17559 - (C15919 * C17440) / p - C17637 - (C16709 * C17520) / C12774;
    const double C5258 =
        C17531 - (C5289 * C17432) / p - C17620 - (C12794 * C17517) / C12774;
    const double C5526 = -((C5289 * C17438) / p + (C12794 * C17519) / C12774);
    const double C5645 = -((C5289 * C17440) / p + (C12794 * C17520) / C12774);
    const double C8108 = -((C8152 * C17432) / p + (C14372 * C17517) / C12774);
    const double C8373 =
        C17531 - (C8152 * C17438) / p - C17620 - (C14372 * C17519) / C12774;
    const double C8489 = -((C8152 * C17440) / p + (C14372 * C17520) / C12774);
    const double C10950 = -((C10994 * C17432) / p + (C15919 * C17517) / C12774);
    const double C11215 = -((C10994 * C17438) / p + (C15919 * C17519) / C12774);
    const double C11331 =
        C17531 - (C10994 * C17440) / p - C17620 - (C15919 * C17520) / C12774;
    const double C17584 = C17486 / C12774;
    const double C17601 = C17502 / C12774;
    const double C17612 = C17513 / C12774;
    const double C17577 = C17481 / C12774;
    const double C17600 = C17501 / C12774;
    const double C17611 = C17512 / C12774;
    const double C17558 = C17468 / C12774;
    const double C17595 = C17497 / C12774;
    const double C17608 = C17509 / C12774;
    const double C17518 = C17436 / C12774;
    const double C12971 = -((C12912 * C17438) / p + (C13673 * C17519) / C12774);
    const double C17587 = C17490 / C12774;
    const double C14545 =
        C17596 - (C14488 * C17438) / p - C17661 - (C15232 * C17519) / C12774;
    const double C17602 = C17503 / C12774;
    const double C16092 = -((C16035 * C17438) / p + (C16775 * C17519) / C12774);
    const double C4883 =
        C17525 - (C5526 * C17432) / p - C17617 - (C12853 * C17517) / C12774;
    const double C5065 =
        C17527 - (C5645 * C17432) / p - C17618 - (C12912 * C17517) / C12774;
    const double C5154 = -((C5645 * C17438) / p + (C12912 * C17519) / C12774);
    const double C7761 = -((C8373 * C17432) / p + (C14430 * C17517) / C12774);
    const double C7937 = -((C8489 * C17432) / p + (C14488 * C17517) / C12774);
    const double C8023 =
        C17527 - (C8489 * C17438) / p - C17618 - (C14488 * C17519) / C12774;
    const double C10603 = -((C11215 * C17432) / p + (C15977 * C17517) / C12774);
    const double C10779 = -((C11331 * C17432) / p + (C16035 * C17517) / C12774);
    const double C10865 = -((C11331 * C17438) / p + (C16035 * C17519) / C12774);
    const double C17651 = C14014 - C17584;
    const double C17665 = C15573 - C17601;
    const double C17676 = C17114 - C17612;
    const double C17647 = C13607 - C17577;
    const double C17664 = C15165 - C17600;
    const double C17675 = C16709 - C17611;
    const double C17636 = C12794 - C17558;
    const double C17660 = C14372 - C17595;
    const double C17672 = C15919 - C17608;
    const double C17614 = C5289 - C17518;
    const double C17653 = C8152 - C17587;
    const double C17666 = C10994 - C17602;
    const double C4974 = (C6575 * be) / p - (C5154 * C17432) / p -
                         (C12967 * C17433) / C17516 -
                         (C12971 * C17517) / C12774;
    const double C7849 = -((C8023 * C17432) / p + (C14545 * C17517) / C12774);
    const double C10691 = -((C10865 * C17432) / p + (C16092 * C17517) / C12774);
    const double C17693 = C17651 / C17437;
    const double C17706 = C17665 / C17437;
    const double C17715 = C17676 / C17437;
    const double C17690 = C17647 / C17437;
    const double C17705 = C17664 / C17437;
    const double C17714 = C17675 / C17437;
    const double C17684 = C17636 / C17437;
    const double C17703 = C17660 / C17437;
    const double C17712 = C17672 / C17437;
    const double C17677 = C17614 / C17437;
    const double C17698 = C17653 / C17437;
    const double C17707 = C17666 / C17437;
    const double C14081 = (C14061 * be) / p - (C14065 * C17432) / p -
                          (C14220 * C17433) / C17516 -
                          (C14224 * C17517) / C12774 + C17693;
    const double C14126 =
        C17693 - ((C14096 * C17438) / p + (C14267 * C17519) / C12774);
    const double C14142 =
        C17693 - ((C14111 * C17440) / p + (C14282 * C17520) / C12774);
    const double C15631 =
        C17706 - ((C15616 * C17432) / p + (C15771 * C17517) / C12774);
    const double C15677 = (C15642 * be) / p - (C15647 * C17438) / p -
                          (C15810 * C17433) / C17516 -
                          (C15815 * C17519) / C12774 + C17706;
    const double C15692 =
        C17706 - ((C15662 * C17440) / p + (C15830 * C17520) / C12774);
    const double C17172 =
        C17715 - ((C17157 * C17432) / p + (C17312 * C17517) / C12774);
    const double C17218 =
        C17715 - ((C17187 * C17438) / p + (C17355 * C17519) / C12774);
    const double C17233 = (C17197 * be) / p - (C17203 * C17440) / p -
                          (C17365 * C17433) / C17516 -
                          (C17371 * C17520) / C12774 + C17715;
    const double C13717 = (C13602 * be) / p - (C13606 * C17432) / p -
                          (C14061 * C17433) / C17516 -
                          (C14065 * C17517) / C12774 + C17690;
    const double C13763 =
        C17690 - ((C13644 * C17438) / p + (C14096 * C17519) / C12774);
    const double C13793 =
        C17690 - ((C13673 * C17440) / p + (C14111 * C17520) / C12774);
    const double C15276 =
        C17705 - ((C15180 * C17432) / p + (C15616 * C17517) / C12774);
    const double C15320 = (C15198 * be) / p - (C15203 * C17438) / p -
                          (C15642 * C17433) / C17516 -
                          (C15647 * C17519) / C12774 + C17705;
    const double C15349 =
        C17705 - ((C15232 * C17440) / p + (C15662 * C17520) / C12774);
    const double C16818 =
        C17714 - ((C16724 * C17432) / p + (C17157 * C17517) / C12774);
    const double C16862 =
        C17714 - ((C16746 * C17438) / p + (C17187 * C17519) / C12774);
    const double C16891 = (C15257 * be) / p - (C16775 * C17440) / p -
                          (C17197 * C17433) / C17516 -
                          (C17203 * C17520) / C12774 + C17714;
    const double C12777 = (C12790 * be) / p - (C12778 * C17432) / p -
                          (C13602 * C17433) / C17516 -
                          (C13606 * C17517) / C12774 + C17684;
    const double C12838 =
        C17684 - ((C12853 * C17438) / p + (C13644 * C17519) / C12774);
    const double C12897 =
        C17684 - ((C12912 * C17440) / p + (C13673 * C17520) / C12774);
    const double C14357 =
        C17703 - ((C14356 * C17432) / p + (C15180 * C17517) / C12774);
    const double C14415 = (C12952 * be) / p - (C14430 * C17438) / p -
                          (C15198 * C17433) / C17516 -
                          (C15203 * C17519) / C12774 + C17703;
    const double C14473 =
        C17703 - ((C14488 * C17440) / p + (C15232 * C17520) / C12774);
    const double C15904 =
        C17712 - ((C15903 * C17432) / p + (C16724 * C17517) / C12774);
    const double C15962 =
        C17712 - ((C15977 * C17438) / p + (C16746 * C17519) / C12774);
    const double C16020 = C17596 - (C16035 * C17440) / p - C17661 -
                          (C16775 * C17520) / C12774 + C17712;
    const double C3758 = (C5285 * be) / p - (C5258 * C17432) / p -
                         (C12790 * C17433) / C17516 -
                         (C12778 * C17517) / C12774 + C17677;
    const double C4144 =
        C17677 - ((C5526 * C17438) / p + (C12853 * C17519) / C12774);
    const double C4524 =
        C17677 - ((C5645 * C17440) / p + (C12912 * C17520) / C12774);
    const double C6671 =
        C17698 - ((C8108 * C17432) / p + (C14356 * C17517) / C12774);
    const double C7045 = C17525 - (C8373 * C17438) / p - C17617 -
                         (C14430 * C17519) / C12774 + C17698;
    const double C7413 =
        C17698 - ((C8489 * C17440) / p + (C14488 * C17520) / C12774);
    const double C9513 =
        C17707 - ((C10950 * C17432) / p + (C15903 * C17517) / C12774);
    const double C9887 =
        C17707 - ((C11215 * C17438) / p + (C15977 * C17519) / C12774);
    const double C10255 = C17527 - (C11331 * C17440) / p - C17618 -
                          (C16035 * C17520) / C12774 + C17707;
    const double C13733 =
        (C13713 * be) / p - (C13717 * C17432) / p - (C14077 * C17433) / C17516 -
        (C14081 * C17517) / C12774 + (C13606 - (C14065 * C12772) / C12774) / p;
    const double C17477 = C13763 * C12772;
    const double C13823 = (C13644 - (C14096 * C12772) / C12774) / p -
                          ((C13763 * C17438) / p + (C14126 * C17519) / C12774);
    const double C13869 =
        C17580 - (C13763 * C17432) / p - C17649 - (C14126 * C17517) / C12774;
    const double C17476 = C13793 * C12772;
    const double C13853 =
        C17578 - (C13793 * C17432) / p - C17648 - (C14142 * C17517) / C12774;
    const double C13885 = (C13673 - (C14111 * C12772) / C12774) / p -
                          ((C13793 * C17440) / p + (C14142 * C17520) / C12774);
    const double C13942 = -((C13793 * C17438) / p + (C14142 * C17519) / C12774);
    const double C15291 = (C15180 - (C15616 * C12772) / C12774) / p -
                          ((C15276 * C17432) / p + (C15631 * C17517) / C12774);
    const double C17500 = C15320 * C12772;
    const double C15392 = C17580 - (C15320 * C17438) / p - C17649 -
                          (C15677 * C17519) / C12774 +
                          (C15203 - (C15647 * C12772) / C12774) / p;
    const double C15422 = -((C15320 * C17432) / p + (C15677 * C17517) / C12774);
    const double C17499 = C15349 * C12772;
    const double C15407 = -((C15349 * C17432) / p + (C15692 * C17517) / C12774);
    const double C15451 = (C15232 - (C15662 * C12772) / C12774) / p -
                          ((C15349 * C17440) / p + (C15692 * C17520) / C12774);
    const double C15495 =
        C17578 - (C15349 * C17438) / p - C17648 - (C15692 * C17519) / C12774;
    const double C16833 = (C16724 - (C17157 * C12772) / C12774) / p -
                          ((C16818 * C17432) / p + (C17172 * C17517) / C12774);
    const double C17511 = C16862 * C12772;
    const double C16934 = (C16746 - (C17187 * C12772) / C12774) / p -
                          ((C16862 * C17438) / p + (C17218 * C17519) / C12774);
    const double C16964 = -((C16862 * C17432) / p + (C17218 * C17517) / C12774);
    const double C17510 = C16891 * C12772;
    const double C16949 = -((C16891 * C17432) / p + (C17233 * C17517) / C12774);
    const double C16993 = C17578 - (C16891 * C17440) / p - C17648 -
                          (C17233 * C17520) / C12774 +
                          (C16775 - (C17203 * C12772) / C12774) / p;
    const double C17036 = -((C16891 * C17438) / p + (C17233 * C17519) / C12774);
    const double C13016 = C17561 - (C12777 * C17432) / p - C17638 -
                          (C13717 * C17517) / C12774 +
                          (C12778 - (C13606 * C12772) / C12774) / p;
    const double C13202 = -((C12777 * C17440) / p + (C13717 * C17520) / C12774);
    const double C17457 = C12838 * C12772;
    const double C13100 =
        C17565 - (C12838 * C17432) / p - C17640 - (C13763 * C17517) / C12774;
    const double C13233 = (C12853 - (C13644 * C12772) / C12774) / p -
                          ((C12838 * C17438) / p + (C13763 * C17519) / C12774);
    const double C13355 = -((C12838 * C17440) / p + (C13763 * C17520) / C12774);
    const double C17458 = C12897 * C12772;
    const double C13145 =
        C17567 - (C12897 * C17432) / p - C17641 - (C13793 * C17517) / C12774;
    const double C13294 = (C12912 - (C13673 * C12772) / C12774) / p -
                          ((C12897 * C17440) / p + (C13793 * C17520) / C12774);
    const double C13386 = -((C12897 * C17438) / p + (C13793 * C17519) / C12774);
    const double C14602 = (C14356 - (C15180 * C12772) / C12774) / p -
                          ((C14357 * C17432) / p + (C15276 * C17517) / C12774);
    const double C14772 = -((C14357 * C17440) / p + (C15276 * C17520) / C12774);
    const double C17492 = C14415 * C12772;
    const double C14669 = -((C14415 * C17432) / p + (C15320 * C17517) / C12774);
    const double C14801 = C17565 - (C14415 * C17438) / p - C17640 -
                          (C15320 * C17519) / C12774 +
                          (C14430 - (C15203 * C12772) / C12774) / p;
    const double C14921 = -((C14415 * C17440) / p + (C15320 * C17520) / C12774);
    const double C17493 = C14473 * C12772;
    const double C14713 = -((C14473 * C17432) / p + (C15349 * C17517) / C12774);
    const double C14862 = (C14488 - (C15232 * C12772) / C12774) / p -
                          ((C14473 * C17440) / p + (C15349 * C17520) / C12774);
    const double C14951 =
        C17567 - (C14473 * C17438) / p - C17641 - (C15349 * C17519) / C12774;
    const double C16149 = (C15903 - (C16724 * C12772) / C12774) / p -
                          ((C15904 * C17432) / p + (C16818 * C17517) / C12774);
    const double C16316 =
        C17561 - (C15904 * C17440) / p - C17638 - (C16818 * C17520) / C12774;
    const double C17505 = C15962 * C12772;
    const double C16215 = -((C15962 * C17432) / p + (C16862 * C17517) / C12774);
    const double C16345 = (C15977 - (C16746 * C12772) / C12774) / p -
                          ((C15962 * C17438) / p + (C16862 * C17519) / C12774);
    const double C16465 =
        C17565 - (C15962 * C17440) / p - C17640 - (C16862 * C17520) / C12774;
    const double C17506 = C16020 * C12772;
    const double C16259 = -((C16020 * C17432) / p + (C16891 * C17517) / C12774);
    const double C16406 = C17567 - (C16020 * C17440) / p - C17641 -
                          (C16891 * C17520) / C12774 +
                          (C16035 - (C16775 * C12772) / C12774) / p;
    const double C16495 = -((C16020 * C17438) / p + (C16891 * C17519) / C12774);
    const double C3740 = C17514 - (C3758 * C17432) / p - C17613 -
                         (C12777 * C17517) / C12774 +
                         (C5258 - (C12778 * C12772) / C12774) / p;
    const double C3934 = -((C3758 * C17438) / p + (C12777 * C17519) / C12774);
    const double C4030 = -((C3758 * C17440) / p + (C12777 * C17520) / C12774);
    const double C4127 =
        C17521 - (C4144 * C17432) / p - C17615 - (C12838 * C17517) / C12774;
    const double C4317 = (C5526 - (C12853 * C12772) / C12774) / p -
                         ((C4144 * C17438) / p + (C12838 * C17519) / C12774);
    const double C4410 = -((C4144 * C17440) / p + (C12838 * C17520) / C12774);
    const double C4507 =
        C17523 - (C4524 * C17432) / p - C17616 - (C12897 * C17517) / C12774;
    const double C4697 = -((C4524 * C17438) / p + (C12897 * C17519) / C12774);
    const double C4789 = (C5645 - (C12912 * C12772) / C12774) / p -
                         ((C4524 * C17440) / p + (C12897 * C17520) / C12774);
    const double C6654 = (C8108 - (C14356 * C12772) / C12774) / p -
                         ((C6671 * C17432) / p + (C14357 * C17517) / C12774);
    const double C6842 =
        C17514 - (C6671 * C17438) / p - C17613 - (C14357 * C17519) / C12774;
    const double C6935 = -((C6671 * C17440) / p + (C14357 * C17520) / C12774);
    const double C7029 = -((C7045 * C17432) / p + (C14415 * C17517) / C12774);
    const double C7212 = C17521 - (C7045 * C17438) / p - C17615 -
                         (C14415 * C17519) / C12774 +
                         (C8373 - (C14430 * C12772) / C12774) / p;
    const double C7302 = -((C7045 * C17440) / p + (C14415 * C17520) / C12774);
    const double C7397 = -((C7413 * C17432) / p + (C14473 * C17517) / C12774);
    const double C7580 =
        C17523 - (C7413 * C17438) / p - C17616 - (C14473 * C17519) / C12774;
    const double C7669 = (C8489 - (C14488 * C12772) / C12774) / p -
                         ((C7413 * C17440) / p + (C14473 * C17520) / C12774);
    const double C9496 = (C10950 - (C15903 * C12772) / C12774) / p -
                         ((C9513 * C17432) / p + (C15904 * C17517) / C12774);
    const double C9684 = -((C9513 * C17438) / p + (C15904 * C17519) / C12774);
    const double C9777 =
        C17514 - (C9513 * C17440) / p - C17613 - (C15904 * C17520) / C12774;
    const double C9871 = -((C9887 * C17432) / p + (C15962 * C17517) / C12774);
    const double C10054 = (C11215 - (C15977 * C12772) / C12774) / p -
                          ((C9887 * C17438) / p + (C15962 * C17519) / C12774);
    const double C10144 =
        C17521 - (C9887 * C17440) / p - C17615 - (C15962 * C17520) / C12774;
    const double C10239 = -((C10255 * C17432) / p + (C16020 * C17517) / C12774);
    const double C10422 = -((C10255 * C17438) / p + (C16020 * C17519) / C12774);
    const double C10511 = C17523 - (C10255 * C17440) / p - C17616 -
                          (C16020 * C17520) / C12774 +
                          (C11331 - (C16035 * C12772) / C12774) / p;
    const double C17572 = C17477 / C12774;
    const double C17571 = C17476 / C12774;
    const double C17599 = C17500 / C12774;
    const double C17598 = C17499 / C12774;
    const double C17610 = C17511 / C12774;
    const double C17609 = C17510 / C12774;
    const double C17449 = C13016 * C12772;
    const double C13048 = C17563 - (C13016 * C17432) / p - C17639 -
                          (C13733 * C17517) / C12774 +
                          (3 * (C12777 - (C13717 * C12772) / C12774)) / C17437;
    const double C13084 = -((C13016 * C17438) / p + (C13733 * C17519) / C12774);
    const double C13129 = -((C13016 * C17440) / p + (C13733 * C17520) / C12774);
    const double C17540 = C17457 / C12774;
    const double C17459 = C13233 * C12772;
    const double C13232 =
        C17569 - (C13233 * C17432) / p - C17642 - (C13823 * C17517) / C12774;
    const double C13402 = -((C13233 * C17440) / p + (C13823 * C17520) / C12774);
    const double C17541 = C17458 / C12774;
    const double C17460 = C13294 * C12772;
    const double C13293 =
        C17573 - (C13294 * C17432) / p - C17645 - (C13885 * C17517) / C12774;
    const double C13473 = -((C13294 * C17438) / p + (C13885 * C17519) / C12774);
    const double C17491 = C14602 * C12772;
    const double C14617 = (3 * (C14357 - (C15276 * C12772) / C12774)) / C17437 -
                          ((C14602 * C17432) / p + (C15291 * C17517) / C12774);
    const double C14654 =
        C17563 - (C14602 * C17438) / p - C17639 - (C15291 * C17519) / C12774;
    const double C14698 = -((C14602 * C17440) / p + (C15291 * C17520) / C12774);
    const double C17589 = C17492 / C12774;
    const double C17495 = C14801 * C12772;
    const double C14802 = -((C14801 * C17432) / p + (C15392 * C17517) / C12774);
    const double C14966 = -((C14801 * C17440) / p + (C15392 * C17520) / C12774);
    const double C17590 = C17493 / C12774;
    const double C17496 = C14862 * C12772;
    const double C14863 = -((C14862 * C17432) / p + (C15451 * C17517) / C12774);
    const double C15037 =
        C17573 - (C14862 * C17438) / p - C17645 - (C15451 * C17519) / C12774;
    const double C17504 = C16149 * C12772;
    const double C16164 = (3 * (C15904 - (C16818 * C12772) / C12774)) / C17437 -
                          ((C16149 * C17432) / p + (C16833 * C17517) / C12774);
    const double C16200 = -((C16149 * C17438) / p + (C16833 * C17519) / C12774);
    const double C16244 =
        C17563 - (C16149 * C17440) / p - C17639 - (C16833 * C17520) / C12774;
    const double C17604 = C17505 / C12774;
    const double C17507 = C16345 * C12772;
    const double C16346 = -((C16345 * C17432) / p + (C16934 * C17517) / C12774);
    const double C16510 =
        C17569 - (C16345 * C17440) / p - C17642 - (C16934 * C17520) / C12774;
    const double C17605 = C17506 / C12774;
    const double C17508 = C16406 * C12772;
    const double C16407 = -((C16406 * C17432) / p + (C16993 * C17517) / C12774);
    const double C16581 = -((C16406 * C17438) / p + (C16993 * C17519) / C12774);
    const double C5242 = C17529 - (C3740 * C17432) / p - C17619 -
                         (C13016 * C17517) / C12774 +
                         (3 * (C3758 - (C12777 * C12772) / C12774)) / C17437;
    const double C5304 = -((C3740 * C17438) / p + (C13016 * C17519) / C12774);
    const double C5363 = -((C3740 * C17440) / p + (C13016 * C17520) / C12774);
    const double C5495 = -((C4030 * C17438) / p + (C13202 * C17519) / C12774);
    const double C5805 =
        C17544 - (C4317 * C17432) / p - C17629 - (C13233 * C17517) / C12774;
    const double C5965 = -((C4317 * C17440) / p + (C13233 * C17520) / C12774);
    const double C5877 = (C6052 * be) / p - (C4410 * C17432) / p -
                         (C13351 * C17433) / C17516 -
                         (C13355 * C17517) / C12774;
    const double C6215 =
        C17550 - (C4697 * C17432) / p - C17632 - (C13386 * C17517) / C12774;
    const double C6272 =
        C17552 - (C4789 * C17432) / p - C17633 - (C13294 * C17517) / C12774;
    const double C6373 = -((C4789 * C17438) / p + (C13294 * C17519) / C12774);
    const double C8123 = (3 * (C6671 - (C14357 * C12772) / C12774)) / C17437 -
                         ((C6654 * C17432) / p + (C14602 * C17517) / C12774);
    const double C8167 =
        C17529 - (C6654 * C17438) / p - C17619 - (C14602 * C17519) / C12774;
    const double C8226 = -((C6654 * C17440) / p + (C14602 * C17520) / C12774);
    const double C8358 = (C5626 * be) / p - (C6935 * C17438) / p -
                         (C14767 * C17433) / C17516 -
                         (C14772 * C17519) / C12774;
    const double C8659 = -((C7212 * C17432) / p + (C14801 * C17517) / C12774);
    const double C8819 = -((C7212 * C17440) / p + (C14801 * C17520) / C12774);
    const double C8731 = -((C7302 * C17432) / p + (C14921 * C17517) / C12774);
    const double C9064 = -((C7580 * C17432) / p + (C14951 * C17517) / C12774);
    const double C9121 = -((C7669 * C17432) / p + (C14862 * C17517) / C12774);
    const double C9222 =
        C17552 - (C7669 * C17438) / p - C17633 - (C14862 * C17519) / C12774;
    const double C10965 = (3 * (C9513 - (C15904 * C12772) / C12774)) / C17437 -
                          ((C9496 * C17432) / p + (C16149 * C17517) / C12774);
    const double C11009 = -((C9496 * C17438) / p + (C16149 * C17519) / C12774);
    const double C11068 =
        C17529 - (C9496 * C17440) / p - C17619 - (C16149 * C17520) / C12774;
    const double C11200 = -((C9777 * C17438) / p + (C16316 * C17519) / C12774);
    const double C11501 = -((C10054 * C17432) / p + (C16345 * C17517) / C12774);
    const double C11661 =
        C17544 - (C10054 * C17440) / p - C17629 - (C16345 * C17520) / C12774;
    const double C11573 = -((C10144 * C17432) / p + (C16465 * C17517) / C12774);
    const double C11904 = -((C10422 * C17432) / p + (C16495 * C17517) / C12774);
    const double C11961 = -((C10511 * C17432) / p + (C16406 * C17517) / C12774);
    const double C12062 = -((C10511 * C17438) / p + (C16406 * C17519) / C12774);
    const double C17644 = C12838 - C17572;
    const double C17643 = C12897 - C17571;
    const double C17663 = C14415 - C17599;
    const double C17662 = C14473 - C17598;
    const double C17674 = C15962 - C17610;
    const double C17673 = C16020 - C17609;
    const double C17535 = C17449 / C12774;
    const double C17625 = C4144 - C17540;
    const double C17542 = C17459 / C12774;
    const double C17626 = C4524 - C17541;
    const double C17543 = C17460 / C12774;
    const double C17588 = C17491 / C12774;
    const double C17655 = C7045 - C17589;
    const double C17593 = C17495 / C12774;
    const double C17656 = C7413 - C17590;
    const double C17594 = C17496 / C12774;
    const double C17603 = C17504 / C12774;
    const double C17668 = C9887 - C17604;
    const double C17606 = C17507 / C12774;
    const double C17669 = C10255 - C17605;
    const double C17607 = C17508 / C12774;
    const double C5422 = -((C5242 * C17438) / p + (C13048 * C17519) / C12774);
    const double C5451 = -((C5242 * C17440) / p + (C13048 * C17520) / C12774);
    const double C5480 = -((C5363 * C17438) / p + (C13129 * C17519) / C12774);
    const double C5936 =
        C17548 - (C5965 * C17432) / p - C17631 - (C13402 * C17517) / C12774;
    const double C6358 =
        C17556 - (C6373 * C17432) / p - C17635 - (C13473 * C17517) / C12774;
    const double C8285 =
        C17533 - (C8123 * C17438) / p - C17621 - (C14617 * C17519) / C12774;
    const double C8314 = -((C8123 * C17440) / p + (C14617 * C17520) / C12774);
    const double C8343 =
        C17591 - (C8226 * C17438) / p - C17657 - (C14698 * C17519) / C12774;
    const double C8790 = -((C8819 * C17432) / p + (C14966 * C17517) / C12774);
    const double C9207 = -((C9222 * C17432) / p + (C15037 * C17517) / C12774);
    const double C11127 = -((C10965 * C17438) / p + (C16164 * C17519) / C12774);
    const double C11156 =
        C17533 - (C10965 * C17440) / p - C17621 - (C16164 * C17520) / C12774;
    const double C11185 = -((C11068 * C17438) / p + (C16244 * C17519) / C12774);
    const double C11632 = -((C11661 * C17432) / p + (C16510 * C17517) / C12774);
    const double C12047 = -((C12062 * C17432) / p + (C16581 * C17517) / C12774);
    const double C13263 = (C13096 * be) / p - (C13100 * C17432) / p -
                          (C13865 * C17433) / C17516 -
                          (C13869 * C17517) / C12774 + C17644 / C17437;
    const double C13325 = (3 * C17644) / C17437 -
                          ((C13233 * C17438) / p + (C13823 * C17519) / C12774);
    const double C17687 = C17643 / C17437;
    const double C13519 = (3 * C17643) / C17437 -
                          ((C13294 * C17440) / p + (C13885 * C17520) / C12774);
    const double C14833 =
        C17663 / C17437 - ((C14669 * C17432) / p + (C15422 * C17517) / C12774);
    const double C14892 = C17569 - (C14801 * C17438) / p - C17642 -
                          (C15392 * C17519) / C12774 + (3 * C17663) / C17437;
    const double C17704 = C17662 / C17437;
    const double C15080 = (3 * C17662) / C17437 -
                          ((C14862 * C17440) / p + (C15451 * C17520) / C12774);
    const double C16377 =
        C17674 / C17437 - ((C16215 * C17432) / p + (C16964 * C17517) / C12774);
    const double C16436 = (3 * C17674) / C17437 -
                          ((C16345 * C17438) / p + (C16934 * C17519) / C12774);
    const double C17713 = C17673 / C17437;
    const double C16624 = C17573 - (C16406 * C17440) / p - C17645 -
                          (C16993 * C17520) / C12774 + (3 * C17673) / C17437;
    const double C17622 = C3740 - C17535;
    const double C5348 = (C5757 * be) / p - (C4127 * C17432) / p -
                         (C13096 * C17433) / C17516 -
                         (C13100 * C17517) / C12774 + C17625 / C17437;
    const double C5862 = (3 * C17625) / C17437 -
                         ((C4317 * C17438) / p + (C13233 * C17519) / C12774);
    const double C17627 = C4317 - C17542;
    const double C17681 = C17626 / C17437;
    const double C6329 = (3 * C17626) / C17437 -
                         ((C4789 * C17440) / p + (C13294 * C17520) / C12774);
    const double C17628 = C4789 - C17543;
    const double C17654 = C6654 - C17588;
    const double C8211 =
        C17655 / C17437 - ((C7029 * C17432) / p + (C14669 * C17517) / C12774);
    const double C8716 = C17544 - (C7212 * C17438) / p - C17629 -
                         (C14801 * C17519) / C12774 + (3 * C17655) / C17437;
    const double C17658 = C7212 - C17593;
    const double C17700 = C17656 / C17437;
    const double C9178 = (3 * C17656) / C17437 -
                         ((C7669 * C17440) / p + (C14862 * C17520) / C12774);
    const double C17659 = C7669 - C17594;
    const double C17667 = C9496 - C17603;
    const double C11053 =
        C17668 / C17437 - ((C9871 * C17432) / p + (C16215 * C17517) / C12774);
    const double C11558 = (3 * C17668) / C17437 -
                          ((C10054 * C17438) / p + (C16345 * C17519) / C12774);
    const double C17670 = C10054 - C17606;
    const double C17709 = C17669 / C17437;
    const double C12018 = C17552 - (C10511 * C17440) / p - C17633 -
                          (C16406 * C17520) / C12774 + (3 * C17669) / C17437;
    const double C17671 = C10511 - C17607;
    const double C13248 = (C13141 * be) / p - (C13145 * C17432) / p -
                          (C13849 * C17433) / C17516 -
                          (C13853 * C17517) / C12774 + C17687;
    const double C13371 =
        C17687 - ((C13386 * C17438) / p + (C13942 * C17519) / C12774);
    const double C14818 =
        C17704 - ((C14713 * C17432) / p + (C15407 * C17517) / C12774);
    const double C14936 = (C13485 * be) / p - (C14951 * C17438) / p -
                          (C15490 * C17433) / C17516 -
                          (C15495 * C17519) / C12774 + C17704;
    const double C16361 =
        C17713 - ((C16259 * C17432) / p + (C16949 * C17517) / C12774);
    const double C16480 =
        C17713 - ((C16495 * C17438) / p + (C17036 * C17519) / C12774);
    const double C17680 = C17622 / C17437;
    const double C5274 = C17533 - (C5242 * C17432) / p - C17621 -
                         (C13048 * C17517) / C12774 + (2 * C17622) / p;
    const double C5614 = -((C5348 * C17440) / p + (C13263 * C17520) / C12774);
    const double C5820 =
        C17546 - (C5862 * C17432) / p - C17630 - (C13325 * C17517) / C12774;
    const double C6040 = -((C5862 * C17440) / p + (C13325 * C17520) / C12774);
    const double C17682 = C17627 / C17437;
    const double C6010 =
        (2 * C17627) / p - ((C5862 * C17438) / p + (C13325 * C17519) / C12774);
    const double C5407 = (C6167 * be) / p - (C4507 * C17432) / p -
                         (C13141 * C17433) / C17516 -
                         (C13145 * C17517) / C12774 + C17681;
    const double C5921 =
        C17681 - ((C4697 * C17438) / p + (C13386 * C17519) / C12774);
    const double C6287 =
        C17554 - (C6329 * C17432) / p - C17634 - (C13519 * C17517) / C12774;
    const double C6432 = -((C6329 * C17438) / p + (C13519 * C17519) / C12774);
    const double C17683 = C17628 / C17437;
    const double C6505 =
        (2 * C17628) / p - ((C6329 * C17440) / p + (C13519 * C17520) / C12774);
    const double C17699 = C17654 / C17437;
    const double C8138 =
        (2 * C17654) / p - ((C8123 * C17432) / p + (C14617 * C17517) / C12774);
    const double C8474 = -((C8211 * C17440) / p + (C14833 * C17520) / C12774);
    const double C8674 = -((C8716 * C17432) / p + (C14892 * C17517) / C12774);
    const double C8893 = -((C8716 * C17440) / p + (C14892 * C17520) / C12774);
    const double C17701 = C17658 / C17437;
    const double C8863 = C17546 - (C8716 * C17438) / p - C17630 -
                         (C14892 * C17519) / C12774 + (2 * C17658) / p;
    const double C8270 =
        C17700 - ((C7397 * C17432) / p + (C14713 * C17517) / C12774);
    const double C8775 = C17550 - (C7580 * C17438) / p - C17632 -
                         (C14951 * C17519) / C12774 + C17700;
    const double C9136 = -((C9178 * C17432) / p + (C15080 * C17517) / C12774);
    const double C9280 =
        C17554 - (C9178 * C17438) / p - C17634 - (C15080 * C17519) / C12774;
    const double C17702 = C17659 / C17437;
    const double C9352 =
        (2 * C17659) / p - ((C9178 * C17440) / p + (C15080 * C17520) / C12774);
    const double C17708 = C17667 / C17437;
    const double C10980 =
        (2 * C17667) / p - ((C10965 * C17432) / p + (C16164 * C17517) / C12774);
    const double C11316 = (C5787 * be) / p - (C11053 * C17440) / p -
                          (C16371 * C17433) / C17516 -
                          (C16377 * C17520) / C12774;
    const double C11516 = -((C11558 * C17432) / p + (C16436 * C17517) / C12774);
    const double C11734 =
        C17546 - (C11558 * C17440) / p - C17630 - (C16436 * C17520) / C12774;
    const double C17710 = C17670 / C17437;
    const double C11704 =
        (2 * C17670) / p - ((C11558 * C17438) / p + (C16436 * C17519) / C12774);
    const double C11112 =
        C17709 - ((C10239 * C17432) / p + (C16259 * C17517) / C12774);
    const double C11617 =
        C17709 - ((C10422 * C17438) / p + (C16495 * C17519) / C12774);
    const double C11976 = -((C12018 * C17432) / p + (C16624 * C17517) / C12774);
    const double C12119 = -((C12018 * C17438) / p + (C16624 * C17519) / C12774);
    const double C17711 = C17671 / C17437;
    const double C12191 = C17554 - (C12018 * C17440) / p - C17634 -
                          (C16624 * C17520) / C12774 + (2 * C17671) / p;
    const double C5319 =
        C17680 - ((C5304 * C17438) / p + (C13084 * C17519) / C12774);
    const double C5378 =
        C17680 - ((C5363 * C17440) / p + (C13129 * C17520) / C12774);
    const double C5556 = (C5992 * be) / p - (C5805 * C17432) / p -
                         (C13228 * C17433) / C17516 -
                         (C13232 * C17517) / C12774 + C17682;
    const double C6025 =
        C17682 - ((C5965 * C17440) / p + (C13402 * C17520) / C12774);
    const double C5571 = -((C5407 * C17438) / p + (C13248 * C17519) / C12774);
    const double C5892 = (C9261 * be) / p - (C5921 * C17432) / p -
                         (C13367 * C17433) / C17516 -
                         (C13371 * C17517) / C12774;
    const double C5703 = (C6459 * be) / p - (C6272 * C17432) / p -
                         (C13289 * C17433) / C17516 -
                         (C13293 * C17517) / C12774 + C17683;
    const double C6127 =
        C17683 - ((C6373 * C17438) / p + (C13473 * C17519) / C12774);
    const double C8182 = (C5538 * be) / p - (C8167 * C17438) / p -
                         (C14649 * C17433) / C17516 -
                         (C14654 * C17519) / C12774 + C17699;
    const double C8241 =
        C17699 - ((C8226 * C17440) / p + (C14698 * C17520) / C12774);
    const double C8416 =
        C17701 - ((C8659 * C17432) / p + (C14802 * C17517) / C12774);
    const double C8878 =
        C17701 - ((C8819 * C17440) / p + (C14966 * C17520) / C12774);
    const double C8431 = (C6197 * be) / p - (C8270 * C17438) / p -
                         (C14813 * C17433) / C17516 -
                         (C14818 * C17519) / C12774;
    const double C8746 = -((C8775 * C17432) / p + (C14936 * C17517) / C12774);
    const double C8560 =
        C17702 - ((C9121 * C17432) / p + (C14863 * C17517) / C12774);
    const double C8979 = C17556 - (C9222 * C17438) / p - C17635 -
                         (C15037 * C17519) / C12774 + C17702;
    const double C11024 =
        C17708 - ((C11009 * C17438) / p + (C16200 * C17519) / C12774);
    const double C11083 = C17591 - (C11068 * C17440) / p - C17657 -
                          (C16244 * C17520) / C12774 + C17708;
    const double C11258 =
        C17710 - ((C11501 * C17432) / p + (C16346 * C17517) / C12774);
    const double C11719 = C17548 - (C11661 * C17440) / p - C17631 -
                          (C16510 * C17520) / C12774 + C17710;
    const double C11273 = -((C11112 * C17438) / p + (C16361 * C17519) / C12774);
    const double C11588 = -((C11617 * C17432) / p + (C16480 * C17517) / C12774);
    const double C11402 =
        C17711 - ((C11961 * C17432) / p + (C16407 * C17517) / C12774);
    const double C11819 =
        C17711 - ((C12062 * C17438) / p + (C16581 * C17519) / C12774);
    vrx[0] = C3740;
    vrx[1] = C3758;
    vrx[2] = C3934;
    vrx[3] = C4030;
    vrx[4] = C4127;
    vrx[5] = C4144;
    vrx[6] = C4317;
    vrx[7] = C4410;
    vrx[8] = C4507;
    vrx[9] = C4524;
    vrx[10] = C4697;
    vrx[11] = C4789;
    vrx[12] = C4883;
    vrx[13] = C4974;
    vrx[14] = C5065;
    vrx[15] = C5154;
    vrx[16] = C5242;
    vrx[17] = C5258;
    vrx[18] = C5274;
    vrx[19] = C5289;
    vrx[20] = C5304;
    vrx[21] = C5319;
    vrx[22] = C5348;
    vrx[23] = C5363;
    vrx[24] = C5378;
    vrx[25] = C5407;
    vrx[26] = C5422;
    vrx[27] = C5451;
    vrx[28] = C5480;
    vrx[29] = C5495;
    vrx[30] = C5526;
    vrx[31] = C5556;
    vrx[32] = C5571;
    vrx[33] = C5614;
    vrx[34] = C5645;
    vrx[35] = C5703;
    vrx[36] = C5805;
    vrx[37] = C5820;
    vrx[38] = C5862;
    vrx[39] = C5877;
    vrx[40] = C5892;
    vrx[41] = C5921;
    vrx[42] = C5936;
    vrx[43] = C5965;
    vrx[44] = C6010;
    vrx[45] = C6025;
    vrx[46] = C6040;
    vrx[47] = C6127;
    vrx[48] = C6215;
    vrx[49] = C6272;
    vrx[50] = C6287;
    vrx[51] = C6329;
    vrx[52] = C6358;
    vrx[53] = C6373;
    vrx[54] = C6432;
    vrx[55] = C6505;
    vry[0] = C6654;
    vry[1] = C6671;
    vry[2] = C6842;
    vry[3] = C6935;
    vry[4] = C7029;
    vry[5] = C7045;
    vry[6] = C7212;
    vry[7] = C7302;
    vry[8] = C7397;
    vry[9] = C7413;
    vry[10] = C7580;
    vry[11] = C7669;
    vry[12] = C7761;
    vry[13] = C7849;
    vry[14] = C7937;
    vry[15] = C8023;
    vry[16] = C8108;
    vry[17] = C8123;
    vry[18] = C8138;
    vry[19] = C8152;
    vry[20] = C8167;
    vry[21] = C8182;
    vry[22] = C8211;
    vry[23] = C8226;
    vry[24] = C8241;
    vry[25] = C8270;
    vry[26] = C8285;
    vry[27] = C8314;
    vry[28] = C8343;
    vry[29] = C8358;
    vry[30] = C8373;
    vry[31] = C8416;
    vry[32] = C8431;
    vry[33] = C8474;
    vry[34] = C8489;
    vry[35] = C8560;
    vry[36] = C8659;
    vry[37] = C8674;
    vry[38] = C8716;
    vry[39] = C8731;
    vry[40] = C8746;
    vry[41] = C8775;
    vry[42] = C8790;
    vry[43] = C8819;
    vry[44] = C8863;
    vry[45] = C8878;
    vry[46] = C8893;
    vry[47] = C8979;
    vry[48] = C9064;
    vry[49] = C9121;
    vry[50] = C9136;
    vry[51] = C9178;
    vry[52] = C9207;
    vry[53] = C9222;
    vry[54] = C9280;
    vry[55] = C9352;
    vrz[0] = C9496;
    vrz[1] = C9513;
    vrz[2] = C9684;
    vrz[3] = C9777;
    vrz[4] = C9871;
    vrz[5] = C9887;
    vrz[6] = C10054;
    vrz[7] = C10144;
    vrz[8] = C10239;
    vrz[9] = C10255;
    vrz[10] = C10422;
    vrz[11] = C10511;
    vrz[12] = C10603;
    vrz[13] = C10691;
    vrz[14] = C10779;
    vrz[15] = C10865;
    vrz[16] = C10950;
    vrz[17] = C10965;
    vrz[18] = C10980;
    vrz[19] = C10994;
    vrz[20] = C11009;
    vrz[21] = C11024;
    vrz[22] = C11053;
    vrz[23] = C11068;
    vrz[24] = C11083;
    vrz[25] = C11112;
    vrz[26] = C11127;
    vrz[27] = C11156;
    vrz[28] = C11185;
    vrz[29] = C11200;
    vrz[30] = C11215;
    vrz[31] = C11258;
    vrz[32] = C11273;
    vrz[33] = C11316;
    vrz[34] = C11331;
    vrz[35] = C11402;
    vrz[36] = C11501;
    vrz[37] = C11516;
    vrz[38] = C11558;
    vrz[39] = C11573;
    vrz[40] = C11588;
    vrz[41] = C11617;
    vrz[42] = C11632;
    vrz[43] = C11661;
    vrz[44] = C11704;
    vrz[45] = C11719;
    vrz[46] = C11734;
    vrz[47] = C11819;
    vrz[48] = C11904;
    vrz[49] = C11961;
    vrz[50] = C11976;
    vrz[51] = C12018;
    vrz[52] = C12047;
    vrz[53] = C12062;
    vrz[54] = C12119;
    vrz[55] = C12191;
}
