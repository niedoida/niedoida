/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2120_1_vr(const double ae,
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
    const double C5642 = g[92];
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
    const double C6560 = g[109];
    const double C6619 = g[112];
    const double C8858 = g[113];
    const double C8960 = g[114];
    const double C9261 = g[115];
    const double C9333 = g[116];
    const double C12185 = g[117];
    const double C12728 = g[118];
    const double C12748 = g[119];
    const double C12792 = g[120];
    const double C12851 = g[121];
    const double C12910 = g[122];
    const double C12925 = g[123];
    const double C12941 = g[124];
    const double C12970 = g[125];
    const double C12971 = g[126];
    const double C12986 = g[127];
    const double C13002 = g[128];
    const double C13054 = g[129];
    const double C13099 = g[130];
    const double C13186 = g[131];
    const double C13247 = g[132];
    const double C13264 = g[133];
    const double C13279 = g[134];
    const double C13309 = g[135];
    const double C13325 = g[136];
    const double C13356 = g[137];
    const double C13443 = g[138];
    const double C13458 = g[139];
    const double C13473 = g[140];
    const double C13503 = g[141];
    const double C13560 = g[142];
    const double C13577 = g[143];
    const double C13671 = g[144];
    const double C13687 = g[145];
    const double C13717 = g[146];
    const double C13747 = g[147];
    const double C13777 = g[148];
    const double C13807 = g[149];
    const double C13823 = g[150];
    const double C13839 = g[151];
    const double C13968 = g[152];
    const double C14019 = g[153];
    const double C14035 = g[154];
    const double C14096 = g[155];
    const double C14112 = g[156];
    const double C14162 = g[157];
    const double C14178 = g[158];
    const double C14259 = g[159];
    const double C14607 = g[160];
    const double C14710 = g[161];
    const double C14725 = g[162];
    const double C14771 = g[163];
    const double C15156 = g[164];
    const double C15215 = g[165];
    const double C15448 = g[166];
    const double C15600 = g[167];
    const double C15768 = g[168];
    const double C16329 = g[169];
    const double C17155 = g[170];
    const double C17323 = g[171];
    const double C12731 = p + q;
    const double C12730 = p * q;
    const double C17421 = bs[6];
    const double C17420 = bs[5];
    const double C17418 = bs[4];
    const double C17416 = bs[3];
    const double C17413 = bs[2];
    const double C17406 = std::pow(Pi, 2.5);
    const double C17403 = bs[1];
    const double C17402 = ae * be;
    const double C17401 = bs[0];
    const double C17399 = zP - zQ;
    const double C17398 = be * zAB;
    const double C17397 = yP - yQ;
    const double C17396 = be * yAB;
    const double C17395 = 2 * p;
    const double C17393 = xP - xQ;
    const double C17392 = std::pow(p, 2);
    const double C17390 = be * xAB;
    const double C17389 = ae / p;
    const double C12732 = C12731 * p;
    const double C17407 = std::sqrt(C12731);
    const double C17405 = p * C12731;
    const double C17404 = kab * C12730;
    const double C17391 = ae * C12730;
    const double C17461 = 4 * C17406;
    const double C17459 = kab * C17402;
    const double C17450 = C17399 * C12730;
    const double C17449 = C17397 * C12730;
    const double C17447 = C17393 * C12730;
    const double C17446 = C12731 * C17392;
    const double C17444 = C17389 - 1;
    const double C17462 = C12730 * C17407;
    const double C17460 = kcd * C17404;
    const double C17499 = C15215 * C17391;
    const double C17495 = C14710 * C17391;
    const double C17490 = C14259 * C17391;
    const double C17488 = C14162 * C17391;
    const double C17487 = C14112 * C17391;
    const double C17486 = C14096 * C17391;
    const double C17484 = C13968 * C17391;
    const double C17483 = C13839 * C17391;
    const double C17480 = C13777 * C17391;
    const double C17479 = C13747 * C17391;
    const double C17478 = C13717 * C17391;
    const double C17477 = C13687 * C17391;
    const double C17476 = C13671 * C17391;
    const double C17475 = C13577 * C17391;
    const double C17473 = C13503 * C17391;
    const double C17472 = C13473 * C17391;
    const double C17471 = C13458 * C17391;
    const double C17470 = C13443 * C17391;
    const double C17469 = C13356 * C17391;
    const double C17468 = C13279 * C17391;
    const double C17467 = C13264 * C17391;
    const double C17457 = C13002 * C17391;
    const double C17456 = C12986 * C17391;
    const double C17455 = C12971 * C17391;
    const double C17454 = C12941 * C17391;
    const double C17453 = C12910 * C17391;
    const double C17452 = C12851 * C17391;
    const double C17451 = C12792 * C17391;
    const double C17445 = C12728 * C17391;
    const double C17533 = kcd * C17459;
    const double C17596 = C17444 * C12941;
    const double C17591 = C17444 * C5657;
    const double C17584 = C17444 * C14162;
    const double C17580 = C17444 * C13968;
    const double C17577 = C17444 * C13717;
    const double C17575 = C17444 * C13747;
    const double C17571 = C17444 * C13577;
    const double C17569 = C17444 * C13458;
    const double C17565 = C17444 * C13264;
    const double C17563 = C17444 * C12851;
    const double C17561 = C17444 * C12792;
    const double C17559 = C17444 * C12986;
    const double C17557 = C17444 * C12728;
    const double C17554 = C17444 * C12971;
    const double C17551 = C17444 * C9333;
    const double C17549 = C17444 * C12185;
    const double C17547 = C17444 * C6444;
    const double C17545 = C17444 * C6385;
    const double C17543 = C17444 * C8960;
    const double C17541 = C17444 * C8858;
    const double C17539 = C17444 * C5977;
    const double C17530 = C17444 * C5270;
    const double C17528 = C17444 * C5254;
    const double C17526 = C17444 * C12970;
    const double C17524 = C17444 * C6619;
    const double C17522 = C17444 * C6531;
    const double C17520 = C17444 * C6167;
    const double C17518 = C17444 * C5757;
    const double C17515 = C17444 * C5238;
    const double C17586 = C17421 * C17460;
    const double C17583 = C17420 * C17460;
    const double C17579 = C17418 * C17460;
    const double C17573 = C17416 * C17460;
    const double C17556 = C17413 * C17460;
    const double C17534 = C17403 * C17460;
    const double C17597 = C17499 / C17446;
    const double C17592 = C17495 / C17446;
    const double C17585 = C17490 / C17446;
    const double C17581 = C17488 / C17446;
    const double C17578 = C17487 / C17446;
    const double C17576 = C17486 / C17446;
    const double C17572 = C17484 / C17446;
    const double C17570 = C17483 / C17446;
    const double C17566 = C17480 / C17446;
    const double C17564 = C17479 / C17446;
    const double C17562 = C17478 / C17446;
    const double C17560 = C17477 / C17446;
    const double C17558 = C17476 / C17446;
    const double C17555 = C17475 / C17446;
    const double C17552 = C17473 / C17446;
    const double C17550 = C17472 / C17446;
    const double C17548 = C17471 / C17446;
    const double C17546 = C17470 / C17446;
    const double C17544 = C17469 / C17446;
    const double C17542 = C17468 / C17446;
    const double C17540 = C17467 / C17446;
    const double C17531 = C17457 / C17446;
    const double C17529 = C17456 / C17446;
    const double C17527 = C17455 / C17446;
    const double C17525 = C17454 / C17446;
    const double C17523 = C17453 / C17446;
    const double C17521 = C17452 / C17446;
    const double C17519 = C17451 / C17446;
    const double C17516 = C17445 / C17446;
    const double C17632 = C17420 * C17533;
    const double C17630 = C17418 * C17533;
    const double C17627 = C17416 * C17533;
    const double C17624 = C17413 * C17533;
    const double C17621 = C17403 * C17533;
    const double C17614 = C17401 * C17533;
    const double C17633 = C17586 * ae;
    const double C17631 = C17583 * ae;
    const double C17628 = C17579 * ae;
    const double C17625 = C17573 * ae;
    const double C17622 = C17556 * ae;
    const double C17615 = C17534 * ae;
    const double C14263 =
        -(((xAB * C17632) / p + (C17393 * C17633) / C17405) * C17461) / C17462;
    const double C15810 =
        -(((yAB * C17632) / p + (C17397 * C17633) / C17405) * C17461) / C17462;
    const double C17351 =
        -(((zAB * C17632) / p + (C17399 * C17633) / C17405) * C17461) / C17462;
    const double C14166 =
        -(((xAB * C17630) / p + (C17393 * C17631) / C17405) * C17461) / C17462;
    const double C15714 =
        -(((yAB * C17630) / p + (C17397 * C17631) / C17405) * C17461) / C17462;
    const double C17255 =
        -(((zAB * C17630) / p + (C17399 * C17631) / C17405) * C17461) / C17462;
    const double C13972 =
        -(((xAB * C17627) / p + (C17393 * C17628) / C17405) * C17461) / C17462;
    const double C15531 =
        -(((yAB * C17627) / p + (C17397 * C17628) / C17405) * C17461) / C17462;
    const double C17072 =
        -(((zAB * C17627) / p + (C17399 * C17628) / C17405) * C17461) / C17462;
    const double C13565 =
        -(((xAB * C17624) / p + (C17393 * C17625) / C17405) * C17461) / C17462;
    const double C15123 =
        -(((yAB * C17624) / p + (C17397 * C17625) / C17405) * C17461) / C17462;
    const double C16667 =
        -(((zAB * C17624) / p + (C17399 * C17625) / C17405) * C17461) / C17462;
    const double C12752 =
        -(((xAB * C17621) / p + (C17393 * C17622) / C17405) * C17461) / C17462;
    const double C14330 =
        -(((yAB * C17621) / p + (C17397 * C17622) / C17405) * C17461) / C17462;
    const double C15877 =
        -(((zAB * C17621) / p + (C17399 * C17622) / C17405) * C17461) / C17462;
    const double C5289 =
        -(((xAB * C17614) / p + (C17393 * C17615) / C17405) * C17461) / C17462;
    const double C8152 =
        -(((yAB * C17614) / p + (C17397 * C17615) / C17405) * C17461) / C17462;
    const double C10994 =
        -(((zAB * C17614) / p + (C17399 * C17615) / C17405) * C17461) / C17462;
    const double C17419 = C14166 * C12730;
    const double C14182 =
        C17584 - (C14166 * C17390) / p - C17585 - (C14263 * C17447) / C12732;
    const double C14225 = -((C14166 * C17396) / p + (C14263 * C17449) / C12732);
    const double C14240 = -((C14166 * C17398) / p + (C14263 * C17450) / C12732);
    const double C17432 = C15714 * C12730;
    const double C15729 = -((C15714 * C17390) / p + (C15810 * C17447) / C12732);
    const double C15773 =
        C17584 - (C15714 * C17396) / p - C17585 - (C15810 * C17449) / C12732;
    const double C15788 = -((C15714 * C17398) / p + (C15810 * C17450) / C12732);
    const double C17443 = C17255 * C12730;
    const double C17270 = -((C17255 * C17390) / p + (C17351 * C17447) / C12732);
    const double C17313 = -((C17255 * C17396) / p + (C17351 * C17449) / C12732);
    const double C17329 =
        C17584 - (C17255 * C17398) / p - C17585 - (C17351 * C17450) / C12732;
    const double C17417 = C13972 * C12730;
    const double C14023 =
        C17580 - (C13972 * C17390) / p - C17581 - (C14166 * C17447) / C12732;
    const double C14054 = -((C13972 * C17396) / p + (C14166 * C17449) / C12732);
    const double C14069 = -((C13972 * C17398) / p + (C14166 * C17450) / C12732);
    const double C17431 = C15531 * C12730;
    const double C15574 = -((C15531 * C17390) / p + (C15714 * C17447) / C12732);
    const double C15605 =
        C17580 - (C15531 * C17396) / p - C17581 - (C15714 * C17449) / C12732;
    const double C15620 = -((C15531 * C17398) / p + (C15714 * C17450) / C12732);
    const double C17442 = C17072 * C12730;
    const double C17115 = -((C17072 * C17390) / p + (C17255 * C17447) / C12732);
    const double C17145 = -((C17072 * C17396) / p + (C17255 * C17449) / C12732);
    const double C17161 =
        C17580 - (C17072 * C17398) / p - C17581 - (C17255 * C17450) / C12732;
    const double C17412 = C13565 * C12730;
    const double C13564 =
        C17571 - (C13565 * C17390) / p - C17572 - (C13972 * C17447) / C12732;
    const double C13602 = -((C13565 * C17396) / p + (C13972 * C17449) / C12732);
    const double C13631 = -((C13565 * C17398) / p + (C13972 * C17450) / C12732);
    const double C17428 = C15123 * C12730;
    const double C15138 = -((C15123 * C17390) / p + (C15531 * C17447) / C12732);
    const double C15161 =
        C17571 - (C15123 * C17396) / p - C17572 - (C15531 * C17449) / C12732;
    const double C15190 = -((C15123 * C17398) / p + (C15531 * C17450) / C12732);
    const double C17439 = C16667 * C12730;
    const double C16682 = -((C16667 * C17390) / p + (C17072 * C17447) / C12732);
    const double C16704 = -((C16667 * C17396) / p + (C17072 * C17449) / C12732);
    const double C16733 =
        C17571 - (C16667 * C17398) / p - C17572 - (C17072 * C17450) / C12732;
    const double C17394 = C12752 * C12730;
    const double C12736 =
        C17554 - (C12752 * C17390) / p - C17555 - (C13565 * C17447) / C12732;
    const double C12811 = -((C12752 * C17396) / p + (C13565 * C17449) / C12732);
    const double C12870 = -((C12752 * C17398) / p + (C13565 * C17450) / C12732);
    const double C17422 = C14330 * C12730;
    const double C14314 = -((C14330 * C17390) / p + (C15123 * C17447) / C12732);
    const double C14388 =
        C17554 - (C14330 * C17396) / p - C17555 - (C15123 * C17449) / C12732;
    const double C14446 = -((C14330 * C17398) / p + (C15123 * C17450) / C12732);
    const double C17433 = C15877 * C12730;
    const double C15861 = -((C15877 * C17390) / p + (C16667 * C17447) / C12732);
    const double C15935 = -((C15877 * C17396) / p + (C16667 * C17449) / C12732);
    const double C15993 =
        C17554 - (C15877 * C17398) / p - C17555 - (C16667 * C17450) / C12732;
    const double C5242 =
        C17526 - (C5289 * C17390) / p - C17527 - (C12752 * C17447) / C12732;
    const double C5511 = -((C5289 * C17396) / p + (C12752 * C17449) / C12732);
    const double C5630 = -((C5289 * C17398) / p + (C12752 * C17450) / C12732);
    const double C8108 = -((C8152 * C17390) / p + (C14330 * C17447) / C12732);
    const double C8373 =
        C17526 - (C8152 * C17396) / p - C17527 - (C14330 * C17449) / C12732;
    const double C8489 = -((C8152 * C17398) / p + (C14330 * C17450) / C12732);
    const double C10950 = -((C10994 * C17390) / p + (C15877 * C17447) / C12732);
    const double C11215 = -((C10994 * C17396) / p + (C15877 * C17449) / C12732);
    const double C11331 =
        C17526 - (C10994 * C17398) / p - C17527 - (C15877 * C17450) / C12732;
    const double C17489 = C17419 / C12732;
    const double C17503 = C17432 / C12732;
    const double C17514 = C17443 / C12732;
    const double C17485 = C17417 / C12732;
    const double C17502 = C17431 / C12732;
    const double C17513 = C17442 / C12732;
    const double C17474 = C17412 / C12732;
    const double C17498 = C17428 / C12732;
    const double C17510 = C17439 / C12732;
    const double C17448 = C17394 / C12732;
    const double C12929 = -((C12870 * C17396) / p + (C13631 * C17449) / C12732);
    const double C17491 = C17422 / C12732;
    const double C14503 =
        C17596 - (C14446 * C17396) / p - C17597 - (C15190 * C17449) / C12732;
    const double C17504 = C17433 / C12732;
    const double C16050 = -((C15993 * C17396) / p + (C16733 * C17449) / C12732);
    const double C4883 =
        C17522 - (C5511 * C17390) / p - C17523 - (C12811 * C17447) / C12732;
    const double C5065 =
        C17524 - (C5630 * C17390) / p - C17525 - (C12870 * C17447) / C12732;
    const double C5154 = -((C5630 * C17396) / p + (C12870 * C17449) / C12732);
    const double C7761 = -((C8373 * C17390) / p + (C14388 * C17447) / C12732);
    const double C7937 = -((C8489 * C17390) / p + (C14446 * C17447) / C12732);
    const double C8023 =
        C17524 - (C8489 * C17396) / p - C17525 - (C14446 * C17449) / C12732;
    const double C10603 = -((C11215 * C17390) / p + (C15935 * C17447) / C12732);
    const double C10779 = -((C11331 * C17390) / p + (C15993 * C17447) / C12732);
    const double C10865 = -((C11331 * C17396) / p + (C15993 * C17449) / C12732);
    const double C17582 = C13972 - C17489;
    const double C17601 = C15531 - C17503;
    const double C17612 = C17072 - C17514;
    const double C17574 = C13565 - C17485;
    const double C17600 = C15123 - C17502;
    const double C17611 = C16667 - C17513;
    const double C17553 = C12752 - C17474;
    const double C17595 = C14330 - C17498;
    const double C17608 = C15877 - C17510;
    const double C17517 = C5289 - C17448;
    const double C17587 = C8152 - C17491;
    const double C17602 = C10994 - C17504;
    const double C4974 = C17444 * C6560 - (C5154 * C17390) / p -
                         (C12925 * C17391) / C17446 -
                         (C12929 * C17447) / C12732;
    const double C7849 = -((C8023 * C17390) / p + (C14503 * C17447) / C12732);
    const double C10691 = -((C10865 * C17390) / p + (C16050 * C17447) / C12732);
    const double C17629 = C17582 / C17395;
    const double C17642 = C17601 / C17395;
    const double C17651 = C17612 / C17395;
    const double C17626 = C17574 / C17395;
    const double C17641 = C17600 / C17395;
    const double C17650 = C17611 / C17395;
    const double C17620 = C17553 / C17395;
    const double C17639 = C17595 / C17395;
    const double C17648 = C17608 / C17395;
    const double C17613 = C17517 / C17395;
    const double C17634 = C17587 / C17395;
    const double C17643 = C17602 / C17395;
    const double C14039 = C17444 * C14019 - (C14023 * C17390) / p -
                          (C14178 * C17391) / C17446 -
                          (C14182 * C17447) / C12732 + C17629;
    const double C14084 =
        C17629 - ((C14054 * C17396) / p + (C14225 * C17449) / C12732);
    const double C14100 =
        C17629 - ((C14069 * C17398) / p + (C14240 * C17450) / C12732);
    const double C15589 =
        C17642 - ((C15574 * C17390) / p + (C15729 * C17447) / C12732);
    const double C15635 = C17444 * C15600 - (C15605 * C17396) / p -
                          (C15768 * C17391) / C17446 -
                          (C15773 * C17449) / C12732 + C17642;
    const double C15650 =
        C17642 - ((C15620 * C17398) / p + (C15788 * C17450) / C12732);
    const double C17130 =
        C17651 - ((C17115 * C17390) / p + (C17270 * C17447) / C12732);
    const double C17176 =
        C17651 - ((C17145 * C17396) / p + (C17313 * C17449) / C12732);
    const double C17191 = C17444 * C17155 - (C17161 * C17398) / p -
                          (C17323 * C17391) / C17446 -
                          (C17329 * C17450) / C12732 + C17651;
    const double C13675 = C17444 * C13560 - (C13564 * C17390) / p -
                          (C14019 * C17391) / C17446 -
                          (C14023 * C17447) / C12732 + C17626;
    const double C13721 =
        C17626 - ((C13602 * C17396) / p + (C14054 * C17449) / C12732);
    const double C13751 =
        C17626 - ((C13631 * C17398) / p + (C14069 * C17450) / C12732);
    const double C15234 =
        C17641 - ((C15138 * C17390) / p + (C15574 * C17447) / C12732);
    const double C15278 = C17444 * C15156 - (C15161 * C17396) / p -
                          (C15600 * C17391) / C17446 -
                          (C15605 * C17449) / C12732 + C17641;
    const double C15307 =
        C17641 - ((C15190 * C17398) / p + (C15620 * C17450) / C12732);
    const double C16776 =
        C17650 - ((C16682 * C17390) / p + (C17115 * C17447) / C12732);
    const double C16820 =
        C17650 - ((C16704 * C17396) / p + (C17145 * C17449) / C12732);
    const double C16849 = C17444 * C15215 - (C16733 * C17398) / p -
                          (C17155 * C17391) / C17446 -
                          (C17161 * C17450) / C12732 + C17650;
    const double C12735 = C17444 * C12748 - (C12736 * C17390) / p -
                          (C13560 * C17391) / C17446 -
                          (C13564 * C17447) / C12732 + C17620;
    const double C12796 =
        C17620 - ((C12811 * C17396) / p + (C13602 * C17449) / C12732);
    const double C12855 =
        C17620 - ((C12870 * C17398) / p + (C13631 * C17450) / C12732);
    const double C14315 =
        C17639 - ((C14314 * C17390) / p + (C15138 * C17447) / C12732);
    const double C14373 = C17444 * C12910 - (C14388 * C17396) / p -
                          (C15156 * C17391) / C17446 -
                          (C15161 * C17449) / C12732 + C17639;
    const double C14431 =
        C17639 - ((C14446 * C17398) / p + (C15190 * C17450) / C12732);
    const double C15862 =
        C17648 - ((C15861 * C17390) / p + (C16682 * C17447) / C12732);
    const double C15920 =
        C17648 - ((C15935 * C17396) / p + (C16704 * C17449) / C12732);
    const double C15978 = C17596 - (C15993 * C17398) / p - C17597 -
                          (C16733 * C17450) / C12732 + C17648;
    const double C3758 = C17444 * C5285 - (C5242 * C17390) / p -
                         (C12748 * C17391) / C17446 -
                         (C12736 * C17447) / C12732 + C17613;
    const double C4144 =
        C17613 - ((C5511 * C17396) / p + (C12811 * C17449) / C12732);
    const double C4524 =
        C17613 - ((C5630 * C17398) / p + (C12870 * C17450) / C12732);
    const double C6671 =
        C17634 - ((C8108 * C17390) / p + (C14314 * C17447) / C12732);
    const double C7045 = C17522 - (C8373 * C17396) / p - C17523 -
                         (C14388 * C17449) / C12732 + C17634;
    const double C7413 =
        C17634 - ((C8489 * C17398) / p + (C14446 * C17450) / C12732);
    const double C9513 =
        C17643 - ((C10950 * C17390) / p + (C15861 * C17447) / C12732);
    const double C9887 =
        C17643 - ((C11215 * C17396) / p + (C15935 * C17449) / C12732);
    const double C10255 = C17524 - (C11331 * C17398) / p - C17525 -
                          (C15993 * C17450) / C12732 + C17643;
    const double C13691 =
        C17444 * C13671 - (C13675 * C17390) / p - (C14035 * C17391) / C17446 -
        (C14039 * C17447) / C12732 + (C13564 - (C14023 * C12730) / C12732) / p;
    const double C17415 = C13721 * C12730;
    const double C13781 = (C13602 - (C14054 * C12730) / C12732) / p -
                          ((C13721 * C17396) / p + (C14084 * C17449) / C12732);
    const double C13827 =
        C17577 - (C13721 * C17390) / p - C17578 - (C14084 * C17447) / C12732;
    const double C17414 = C13751 * C12730;
    const double C13811 =
        C17575 - (C13751 * C17390) / p - C17576 - (C14100 * C17447) / C12732;
    const double C13843 = (C13631 - (C14069 * C12730) / C12732) / p -
                          ((C13751 * C17398) / p + (C14100 * C17450) / C12732);
    const double C13900 = -((C13751 * C17396) / p + (C14100 * C17449) / C12732);
    const double C15249 = (C15138 - (C15574 * C12730) / C12732) / p -
                          ((C15234 * C17390) / p + (C15589 * C17447) / C12732);
    const double C17430 = C15278 * C12730;
    const double C15350 = C17577 - (C15278 * C17396) / p - C17578 -
                          (C15635 * C17449) / C12732 +
                          (C15161 - (C15605 * C12730) / C12732) / p;
    const double C15380 = -((C15278 * C17390) / p + (C15635 * C17447) / C12732);
    const double C17429 = C15307 * C12730;
    const double C15365 = -((C15307 * C17390) / p + (C15650 * C17447) / C12732);
    const double C15409 = (C15190 - (C15620 * C12730) / C12732) / p -
                          ((C15307 * C17398) / p + (C15650 * C17450) / C12732);
    const double C15453 =
        C17575 - (C15307 * C17396) / p - C17576 - (C15650 * C17449) / C12732;
    const double C16791 = (C16682 - (C17115 * C12730) / C12732) / p -
                          ((C16776 * C17390) / p + (C17130 * C17447) / C12732);
    const double C17441 = C16820 * C12730;
    const double C16892 = (C16704 - (C17145 * C12730) / C12732) / p -
                          ((C16820 * C17396) / p + (C17176 * C17449) / C12732);
    const double C16922 = -((C16820 * C17390) / p + (C17176 * C17447) / C12732);
    const double C17440 = C16849 * C12730;
    const double C16907 = -((C16849 * C17390) / p + (C17191 * C17447) / C12732);
    const double C16951 = C17575 - (C16849 * C17398) / p - C17576 -
                          (C17191 * C17450) / C12732 +
                          (C16733 - (C17161 * C12730) / C12732) / p;
    const double C16994 = -((C16849 * C17396) / p + (C17191 * C17449) / C12732);
    const double C12990 = C17557 - (C12735 * C17390) / p - C17558 -
                          (C13675 * C17447) / C12732 +
                          (C12736 - (C13564 * C12730) / C12732) / p;
    const double C13160 = -((C12735 * C17398) / p + (C13675 * C17450) / C12732);
    const double C17408 = C12796 * C12730;
    const double C13058 =
        C17561 - (C12796 * C17390) / p - C17562 - (C13721 * C17447) / C12732;
    const double C13191 = (C12811 - (C13602 * C12730) / C12732) / p -
                          ((C12796 * C17396) / p + (C13721 * C17449) / C12732);
    const double C13313 = -((C12796 * C17398) / p + (C13721 * C17450) / C12732);
    const double C17409 = C12855 * C12730;
    const double C13103 =
        C17563 - (C12855 * C17390) / p - C17564 - (C13751 * C17447) / C12732;
    const double C13252 = (C12870 - (C13631 * C12730) / C12732) / p -
                          ((C12855 * C17398) / p + (C13751 * C17450) / C12732);
    const double C13344 = -((C12855 * C17396) / p + (C13751 * C17449) / C12732);
    const double C14560 = (C14314 - (C15138 * C12730) / C12732) / p -
                          ((C14315 * C17390) / p + (C15234 * C17447) / C12732);
    const double C14730 = -((C14315 * C17398) / p + (C15234 * C17450) / C12732);
    const double C17424 = C14373 * C12730;
    const double C14627 = -((C14373 * C17390) / p + (C15278 * C17447) / C12732);
    const double C14759 = C17561 - (C14373 * C17396) / p - C17562 -
                          (C15278 * C17449) / C12732 +
                          (C14388 - (C15161 * C12730) / C12732) / p;
    const double C14879 = -((C14373 * C17398) / p + (C15278 * C17450) / C12732);
    const double C17425 = C14431 * C12730;
    const double C14671 = -((C14431 * C17390) / p + (C15307 * C17447) / C12732);
    const double C14820 = (C14446 - (C15190 * C12730) / C12732) / p -
                          ((C14431 * C17398) / p + (C15307 * C17450) / C12732);
    const double C14909 =
        C17563 - (C14431 * C17396) / p - C17564 - (C15307 * C17449) / C12732;
    const double C16107 = (C15861 - (C16682 * C12730) / C12732) / p -
                          ((C15862 * C17390) / p + (C16776 * C17447) / C12732);
    const double C16274 =
        C17557 - (C15862 * C17398) / p - C17558 - (C16776 * C17450) / C12732;
    const double C17435 = C15920 * C12730;
    const double C16173 = -((C15920 * C17390) / p + (C16820 * C17447) / C12732);
    const double C16303 = (C15935 - (C16704 * C12730) / C12732) / p -
                          ((C15920 * C17396) / p + (C16820 * C17449) / C12732);
    const double C16423 =
        C17561 - (C15920 * C17398) / p - C17562 - (C16820 * C17450) / C12732;
    const double C17436 = C15978 * C12730;
    const double C16217 = -((C15978 * C17390) / p + (C16849 * C17447) / C12732);
    const double C16364 = C17563 - (C15978 * C17398) / p - C17564 -
                          (C16849 * C17450) / C12732 +
                          (C15993 - (C16733 * C12730) / C12732) / p;
    const double C16453 = -((C15978 * C17396) / p + (C16849 * C17449) / C12732);
    const double C3740 = C17515 - (C3758 * C17390) / p - C17516 -
                         (C12735 * C17447) / C12732 +
                         (C5242 - (C12736 * C12730) / C12732) / p;
    const double C3934 = -((C3758 * C17396) / p + (C12735 * C17449) / C12732);
    const double C4030 = -((C3758 * C17398) / p + (C12735 * C17450) / C12732);
    const double C4127 =
        C17518 - (C4144 * C17390) / p - C17519 - (C12796 * C17447) / C12732;
    const double C4316 = (C5511 - (C12811 * C12730) / C12732) / p -
                         ((C4144 * C17396) / p + (C12796 * C17449) / C12732);
    const double C4409 = -((C4144 * C17398) / p + (C12796 * C17450) / C12732);
    const double C4507 =
        C17520 - (C4524 * C17390) / p - C17521 - (C12855 * C17447) / C12732;
    const double C4696 = -((C4524 * C17396) / p + (C12855 * C17449) / C12732);
    const double C4788 = (C5630 - (C12870 * C12730) / C12732) / p -
                         ((C4524 * C17398) / p + (C12855 * C17450) / C12732);
    const double C6654 = (C8108 - (C14314 * C12730) / C12732) / p -
                         ((C6671 * C17390) / p + (C14315 * C17447) / C12732);
    const double C6842 =
        C17515 - (C6671 * C17396) / p - C17516 - (C14315 * C17449) / C12732;
    const double C6935 = -((C6671 * C17398) / p + (C14315 * C17450) / C12732);
    const double C7029 = -((C7045 * C17390) / p + (C14373 * C17447) / C12732);
    const double C7212 = C17518 - (C7045 * C17396) / p - C17519 -
                         (C14373 * C17449) / C12732 +
                         (C8373 - (C14388 * C12730) / C12732) / p;
    const double C7302 = -((C7045 * C17398) / p + (C14373 * C17450) / C12732);
    const double C7397 = -((C7413 * C17390) / p + (C14431 * C17447) / C12732);
    const double C7580 =
        C17520 - (C7413 * C17396) / p - C17521 - (C14431 * C17449) / C12732;
    const double C7669 = (C8489 - (C14446 * C12730) / C12732) / p -
                         ((C7413 * C17398) / p + (C14431 * C17450) / C12732);
    const double C9496 = (C10950 - (C15861 * C12730) / C12732) / p -
                         ((C9513 * C17390) / p + (C15862 * C17447) / C12732);
    const double C9684 = -((C9513 * C17396) / p + (C15862 * C17449) / C12732);
    const double C9777 =
        C17515 - (C9513 * C17398) / p - C17516 - (C15862 * C17450) / C12732;
    const double C9871 = -((C9887 * C17390) / p + (C15920 * C17447) / C12732);
    const double C10054 = (C11215 - (C15935 * C12730) / C12732) / p -
                          ((C9887 * C17396) / p + (C15920 * C17449) / C12732);
    const double C10144 =
        C17518 - (C9887 * C17398) / p - C17519 - (C15920 * C17450) / C12732;
    const double C10239 = -((C10255 * C17390) / p + (C15978 * C17447) / C12732);
    const double C10422 = -((C10255 * C17396) / p + (C15978 * C17449) / C12732);
    const double C10511 = C17520 - (C10255 * C17398) / p - C17521 -
                          (C15978 * C17450) / C12732 +
                          (C11331 - (C15993 * C12730) / C12732) / p;
    const double C17482 = C17415 / C12732;
    const double C17481 = C17414 / C12732;
    const double C17501 = C17430 / C12732;
    const double C17500 = C17429 / C12732;
    const double C17512 = C17441 / C12732;
    const double C17511 = C17440 / C12732;
    const double C17400 = C12990 * C12730;
    const double C13006 = C17559 - (C12990 * C17390) / p - C17560 -
                          (C13691 * C17447) / C12732 +
                          (3 * (C12735 - (C13675 * C12730) / C12732)) / C17395;
    const double C13042 = -((C12990 * C17396) / p + (C13691 * C17449) / C12732);
    const double C13087 = -((C12990 * C17398) / p + (C13691 * C17450) / C12732);
    const double C17463 = C17408 / C12732;
    const double C17410 = C13191 * C12730;
    const double C13190 =
        C17565 - (C13191 * C17390) / p - C17566 - (C13781 * C17447) / C12732;
    const double C13360 = -((C13191 * C17398) / p + (C13781 * C17450) / C12732);
    const double C17464 = C17409 / C12732;
    const double C17411 = C13252 * C12730;
    const double C13251 =
        C17569 - (C13252 * C17390) / p - C17570 - (C13843 * C17447) / C12732;
    const double C13431 = -((C13252 * C17396) / p + (C13843 * C17449) / C12732);
    const double C17423 = C14560 * C12730;
    const double C14575 = (3 * (C14315 - (C15234 * C12730) / C12732)) / C17395 -
                          ((C14560 * C17390) / p + (C15249 * C17447) / C12732);
    const double C14612 =
        C17559 - (C14560 * C17396) / p - C17560 - (C15249 * C17449) / C12732;
    const double C14656 = -((C14560 * C17398) / p + (C15249 * C17450) / C12732);
    const double C17493 = C17424 / C12732;
    const double C17426 = C14759 * C12730;
    const double C14760 = -((C14759 * C17390) / p + (C15350 * C17447) / C12732);
    const double C14924 = -((C14759 * C17398) / p + (C15350 * C17450) / C12732);
    const double C17494 = C17425 / C12732;
    const double C17427 = C14820 * C12730;
    const double C14821 = -((C14820 * C17390) / p + (C15409 * C17447) / C12732);
    const double C14995 =
        C17569 - (C14820 * C17396) / p - C17570 - (C15409 * C17449) / C12732;
    const double C17434 = C16107 * C12730;
    const double C16122 = (3 * (C15862 - (C16776 * C12730) / C12732)) / C17395 -
                          ((C16107 * C17390) / p + (C16791 * C17447) / C12732);
    const double C16158 = -((C16107 * C17396) / p + (C16791 * C17449) / C12732);
    const double C16202 =
        C17559 - (C16107 * C17398) / p - C17560 - (C16791 * C17450) / C12732;
    const double C17506 = C17435 / C12732;
    const double C17437 = C16303 * C12730;
    const double C16304 = -((C16303 * C17390) / p + (C16892 * C17447) / C12732);
    const double C16468 =
        C17565 - (C16303 * C17398) / p - C17566 - (C16892 * C17450) / C12732;
    const double C17507 = C17436 / C12732;
    const double C17438 = C16364 * C12730;
    const double C16365 = -((C16364 * C17390) / p + (C16951 * C17447) / C12732);
    const double C16539 = -((C16364 * C17396) / p + (C16951 * C17449) / C12732);
    const double C5258 = C17528 - (C3740 * C17390) / p - C17529 -
                         (C12990 * C17447) / C12732 +
                         (3 * (C3758 - (C12735 * C12730) / C12732)) / C17395;
    const double C5304 = -((C3740 * C17396) / p + (C12990 * C17449) / C12732);
    const double C5363 = -((C3740 * C17398) / p + (C12990 * C17450) / C12732);
    const double C5495 = -((C4030 * C17396) / p + (C13160 * C17449) / C12732);
    const double C5805 =
        C17539 - (C4316 * C17390) / p - C17540 - (C13191 * C17447) / C12732;
    const double C5965 = -((C4316 * C17398) / p + (C13191 * C17450) / C12732);
    const double C5877 = C17444 * C6052 - (C4409 * C17390) / p -
                         (C13309 * C17391) / C17446 -
                         (C13313 * C17447) / C12732;
    const double C6215 =
        C17545 - (C4696 * C17390) / p - C17546 - (C13344 * C17447) / C12732;
    const double C6272 =
        C17547 - (C4788 * C17390) / p - C17548 - (C13252 * C17447) / C12732;
    const double C6373 = -((C4788 * C17396) / p + (C13252 * C17449) / C12732);
    const double C8123 = (3 * (C6671 - (C14315 * C12730) / C12732)) / C17395 -
                         ((C6654 * C17390) / p + (C14560 * C17447) / C12732);
    const double C8167 =
        C17528 - (C6654 * C17396) / p - C17529 - (C14560 * C17449) / C12732;
    const double C8226 = -((C6654 * C17398) / p + (C14560 * C17450) / C12732);
    const double C8358 = C17444 * C5642 - (C6935 * C17396) / p -
                         (C14725 * C17391) / C17446 -
                         (C14730 * C17449) / C12732;
    const double C8659 = -((C7212 * C17390) / p + (C14759 * C17447) / C12732);
    const double C8819 = -((C7212 * C17398) / p + (C14759 * C17450) / C12732);
    const double C8731 = -((C7302 * C17390) / p + (C14879 * C17447) / C12732);
    const double C9064 = -((C7580 * C17390) / p + (C14909 * C17447) / C12732);
    const double C9121 = -((C7669 * C17390) / p + (C14820 * C17447) / C12732);
    const double C9222 =
        C17547 - (C7669 * C17396) / p - C17548 - (C14820 * C17449) / C12732;
    const double C10965 = (3 * (C9513 - (C15862 * C12730) / C12732)) / C17395 -
                          ((C9496 * C17390) / p + (C16107 * C17447) / C12732);
    const double C11009 = -((C9496 * C17396) / p + (C16107 * C17449) / C12732);
    const double C11068 =
        C17528 - (C9496 * C17398) / p - C17529 - (C16107 * C17450) / C12732;
    const double C11200 = -((C9777 * C17396) / p + (C16274 * C17449) / C12732);
    const double C11501 = -((C10054 * C17390) / p + (C16303 * C17447) / C12732);
    const double C11661 =
        C17539 - (C10054 * C17398) / p - C17540 - (C16303 * C17450) / C12732;
    const double C11573 = -((C10144 * C17390) / p + (C16423 * C17447) / C12732);
    const double C11904 = -((C10422 * C17390) / p + (C16453 * C17447) / C12732);
    const double C11961 = -((C10511 * C17390) / p + (C16364 * C17447) / C12732);
    const double C12062 = -((C10511 * C17396) / p + (C16364 * C17449) / C12732);
    const double C17568 = C12796 - C17482;
    const double C17567 = C12855 - C17481;
    const double C17599 = C14373 - C17501;
    const double C17598 = C14431 - C17500;
    const double C17610 = C15920 - C17512;
    const double C17609 = C15978 - C17511;
    const double C17458 = C17400 / C12732;
    const double C17535 = C4144 - C17463;
    const double C17465 = C17410 / C12732;
    const double C17536 = C4524 - C17464;
    const double C17466 = C17411 / C12732;
    const double C17492 = C17423 / C12732;
    const double C17589 = C7045 - C17493;
    const double C17496 = C17426 / C12732;
    const double C17590 = C7413 - C17494;
    const double C17497 = C17427 / C12732;
    const double C17505 = C17434 / C12732;
    const double C17604 = C9887 - C17506;
    const double C17508 = C17437 / C12732;
    const double C17605 = C10255 - C17507;
    const double C17509 = C17438 / C12732;
    const double C5422 = -((C5258 * C17396) / p + (C13006 * C17449) / C12732);
    const double C5451 = -((C5258 * C17398) / p + (C13006 * C17450) / C12732);
    const double C5480 = -((C5363 * C17396) / p + (C13087 * C17449) / C12732);
    const double C5936 =
        C17543 - (C5965 * C17390) / p - C17544 - (C13360 * C17447) / C12732;
    const double C6358 =
        C17551 - (C6373 * C17390) / p - C17552 - (C13431 * C17447) / C12732;
    const double C8285 =
        C17530 - (C8123 * C17396) / p - C17531 - (C14575 * C17449) / C12732;
    const double C8314 = -((C8123 * C17398) / p + (C14575 * C17450) / C12732);
    const double C8343 =
        C17591 - (C8226 * C17396) / p - C17592 - (C14656 * C17449) / C12732;
    const double C8790 = -((C8819 * C17390) / p + (C14924 * C17447) / C12732);
    const double C9207 = -((C9222 * C17390) / p + (C14995 * C17447) / C12732);
    const double C11127 = -((C10965 * C17396) / p + (C16122 * C17449) / C12732);
    const double C11156 =
        C17530 - (C10965 * C17398) / p - C17531 - (C16122 * C17450) / C12732;
    const double C11185 = -((C11068 * C17396) / p + (C16202 * C17449) / C12732);
    const double C11632 = -((C11661 * C17390) / p + (C16468 * C17447) / C12732);
    const double C12047 = -((C12062 * C17390) / p + (C16539 * C17447) / C12732);
    const double C13221 = C17444 * C13054 - (C13058 * C17390) / p -
                          (C13823 * C17391) / C17446 -
                          (C13827 * C17447) / C12732 + C17568 / C17395;
    const double C13283 = (3 * C17568) / C17395 -
                          ((C13191 * C17396) / p + (C13781 * C17449) / C12732);
    const double C17623 = C17567 / C17395;
    const double C13477 = (3 * C17567) / C17395 -
                          ((C13252 * C17398) / p + (C13843 * C17450) / C12732);
    const double C14791 =
        C17599 / C17395 - ((C14627 * C17390) / p + (C15380 * C17447) / C12732);
    const double C14850 = C17565 - (C14759 * C17396) / p - C17566 -
                          (C15350 * C17449) / C12732 + (3 * C17599) / C17395;
    const double C17640 = C17598 / C17395;
    const double C15038 = (3 * C17598) / C17395 -
                          ((C14820 * C17398) / p + (C15409 * C17450) / C12732);
    const double C16335 =
        C17610 / C17395 - ((C16173 * C17390) / p + (C16922 * C17447) / C12732);
    const double C16394 = (3 * C17610) / C17395 -
                          ((C16303 * C17396) / p + (C16892 * C17449) / C12732);
    const double C17649 = C17609 / C17395;
    const double C16582 = C17569 - (C16364 * C17398) / p - C17570 -
                          (C16951 * C17450) / C12732 + (3 * C17609) / C17395;
    const double C17532 = C3740 - C17458;
    const double C5348 = C17444 * C5772 - (C4127 * C17390) / p -
                         (C13054 * C17391) / C17446 -
                         (C13058 * C17447) / C12732 + C17535 / C17395;
    const double C5862 = (3 * C17535) / C17395 -
                         ((C4316 * C17396) / p + (C13191 * C17449) / C12732);
    const double C17537 = C4316 - C17465;
    const double C17617 = C17536 / C17395;
    const double C6329 = (3 * C17536) / C17395 -
                         ((C4788 * C17398) / p + (C13252 * C17450) / C12732);
    const double C17538 = C4788 - C17466;
    const double C17588 = C6654 - C17492;
    const double C8211 =
        C17589 / C17395 - ((C7029 * C17390) / p + (C14627 * C17447) / C12732);
    const double C8716 = C17539 - (C7212 * C17396) / p - C17540 -
                         (C14759 * C17449) / C12732 + (3 * C17589) / C17395;
    const double C17593 = C7212 - C17496;
    const double C17636 = C17590 / C17395;
    const double C9178 = (3 * C17590) / C17395 -
                         ((C7669 * C17398) / p + (C14820 * C17450) / C12732);
    const double C17594 = C7669 - C17497;
    const double C17603 = C9496 - C17505;
    const double C11053 =
        C17604 / C17395 - ((C9871 * C17390) / p + (C16173 * C17447) / C12732);
    const double C11558 = (3 * C17604) / C17395 -
                          ((C10054 * C17396) / p + (C16303 * C17449) / C12732);
    const double C17606 = C10054 - C17508;
    const double C17645 = C17605 / C17395;
    const double C12018 = C17547 - (C10511 * C17398) / p - C17548 -
                          (C16364 * C17450) / C12732 + (3 * C17605) / C17395;
    const double C17607 = C10511 - C17509;
    const double C13206 = C17444 * C13099 - (C13103 * C17390) / p -
                          (C13807 * C17391) / C17446 -
                          (C13811 * C17447) / C12732 + C17623;
    const double C13329 =
        C17623 - ((C13344 * C17396) / p + (C13900 * C17449) / C12732);
    const double C14776 =
        C17640 - ((C14671 * C17390) / p + (C15365 * C17447) / C12732);
    const double C14894 = C17444 * C13443 - (C14909 * C17396) / p -
                          (C15448 * C17391) / C17446 -
                          (C15453 * C17449) / C12732 + C17640;
    const double C16319 =
        C17649 - ((C16217 * C17390) / p + (C16907 * C17447) / C12732);
    const double C16438 =
        C17649 - ((C16453 * C17396) / p + (C16994 * C17449) / C12732);
    const double C17616 = C17532 / C17395;
    const double C5274 = C17530 - (C5258 * C17390) / p - C17531 -
                         (C13006 * C17447) / C12732 + (2 * C17532) / p;
    const double C5614 = -((C5348 * C17398) / p + (C13221 * C17450) / C12732);
    const double C5820 =
        C17541 - (C5862 * C17390) / p - C17542 - (C13283 * C17447) / C12732;
    const double C6040 = -((C5862 * C17398) / p + (C13283 * C17450) / C12732);
    const double C17618 = C17537 / C17395;
    const double C6010 =
        (2 * C17537) / p - ((C5862 * C17396) / p + (C13283 * C17449) / C12732);
    const double C5407 = C17444 * C6182 - (C4507 * C17390) / p -
                         (C13099 * C17391) / C17446 -
                         (C13103 * C17447) / C12732 + C17617;
    const double C5921 =
        C17617 - ((C4696 * C17396) / p + (C13344 * C17449) / C12732);
    const double C6287 =
        C17549 - (C6329 * C17390) / p - C17550 - (C13477 * C17447) / C12732;
    const double C6432 = -((C6329 * C17396) / p + (C13477 * C17449) / C12732);
    const double C17619 = C17538 / C17395;
    const double C6505 =
        (2 * C17538) / p - ((C6329 * C17398) / p + (C13477 * C17450) / C12732);
    const double C17635 = C17588 / C17395;
    const double C8138 =
        (2 * C17588) / p - ((C8123 * C17390) / p + (C14575 * C17447) / C12732);
    const double C8474 = -((C8211 * C17398) / p + (C14791 * C17450) / C12732);
    const double C8674 = -((C8716 * C17390) / p + (C14850 * C17447) / C12732);
    const double C8893 = -((C8716 * C17398) / p + (C14850 * C17450) / C12732);
    const double C17637 = C17593 / C17395;
    const double C8863 = C17541 - (C8716 * C17396) / p - C17542 -
                         (C14850 * C17449) / C12732 + (2 * C17593) / p;
    const double C8270 =
        C17636 - ((C7397 * C17390) / p + (C14671 * C17447) / C12732);
    const double C8775 = C17545 - (C7580 * C17396) / p - C17546 -
                         (C14909 * C17449) / C12732 + C17636;
    const double C9136 = -((C9178 * C17390) / p + (C15038 * C17447) / C12732);
    const double C9280 =
        C17549 - (C9178 * C17396) / p - C17550 - (C15038 * C17449) / C12732;
    const double C17638 = C17594 / C17395;
    const double C9352 =
        (2 * C17594) / p - ((C9178 * C17398) / p + (C15038 * C17450) / C12732);
    const double C17644 = C17603 / C17395;
    const double C10980 =
        (2 * C17603) / p - ((C10965 * C17390) / p + (C16122 * C17447) / C12732);
    const double C11316 = C17444 * C5787 - (C11053 * C17398) / p -
                          (C16329 * C17391) / C17446 -
                          (C16335 * C17450) / C12732;
    const double C11516 = -((C11558 * C17390) / p + (C16394 * C17447) / C12732);
    const double C11734 =
        C17541 - (C11558 * C17398) / p - C17542 - (C16394 * C17450) / C12732;
    const double C17646 = C17606 / C17395;
    const double C11704 =
        (2 * C17606) / p - ((C11558 * C17396) / p + (C16394 * C17449) / C12732);
    const double C11112 =
        C17645 - ((C10239 * C17390) / p + (C16217 * C17447) / C12732);
    const double C11617 =
        C17645 - ((C10422 * C17396) / p + (C16453 * C17449) / C12732);
    const double C11976 = -((C12018 * C17390) / p + (C16582 * C17447) / C12732);
    const double C12119 = -((C12018 * C17396) / p + (C16582 * C17449) / C12732);
    const double C17647 = C17607 / C17395;
    const double C12191 = C17549 - (C12018 * C17398) / p - C17550 -
                          (C16582 * C17450) / C12732 + (2 * C17607) / p;
    const double C5319 =
        C17616 - ((C5304 * C17396) / p + (C13042 * C17449) / C12732);
    const double C5378 =
        C17616 - ((C5363 * C17398) / p + (C13087 * C17450) / C12732);
    const double C5556 = C17444 * C5992 - (C5805 * C17390) / p -
                         (C13186 * C17391) / C17446 -
                         (C13190 * C17447) / C12732 + C17618;
    const double C6025 =
        C17618 - ((C5965 * C17398) / p + (C13360 * C17450) / C12732);
    const double C5571 = -((C5407 * C17396) / p + (C13206 * C17449) / C12732);
    const double C5892 = C17444 * C9261 - (C5921 * C17390) / p -
                         (C13325 * C17391) / C17446 -
                         (C13329 * C17447) / C12732;
    const double C5703 = C17444 * C6459 - (C6272 * C17390) / p -
                         (C13247 * C17391) / C17446 -
                         (C13251 * C17447) / C12732 + C17619;
    const double C6127 =
        C17619 - ((C6373 * C17396) / p + (C13431 * C17449) / C12732);
    const double C8182 = C17444 * C5538 - (C8167 * C17396) / p -
                         (C14607 * C17391) / C17446 -
                         (C14612 * C17449) / C12732 + C17635;
    const double C8241 =
        C17635 - ((C8226 * C17398) / p + (C14656 * C17450) / C12732);
    const double C8416 =
        C17637 - ((C8659 * C17390) / p + (C14760 * C17447) / C12732);
    const double C8878 =
        C17637 - ((C8819 * C17398) / p + (C14924 * C17450) / C12732);
    const double C8431 = C17444 * C6197 - (C8270 * C17396) / p -
                         (C14771 * C17391) / C17446 -
                         (C14776 * C17449) / C12732;
    const double C8746 = -((C8775 * C17390) / p + (C14894 * C17447) / C12732);
    const double C8560 =
        C17638 - ((C9121 * C17390) / p + (C14821 * C17447) / C12732);
    const double C8979 = C17551 - (C9222 * C17396) / p - C17552 -
                         (C14995 * C17449) / C12732 + C17638;
    const double C11024 =
        C17644 - ((C11009 * C17396) / p + (C16158 * C17449) / C12732);
    const double C11083 = C17591 - (C11068 * C17398) / p - C17592 -
                          (C16202 * C17450) / C12732 + C17644;
    const double C11258 =
        C17646 - ((C11501 * C17390) / p + (C16304 * C17447) / C12732);
    const double C11719 = C17543 - (C11661 * C17398) / p - C17544 -
                          (C16468 * C17450) / C12732 + C17646;
    const double C11273 = -((C11112 * C17396) / p + (C16319 * C17449) / C12732);
    const double C11588 = -((C11617 * C17390) / p + (C16438 * C17447) / C12732);
    const double C11402 =
        C17647 - ((C11961 * C17390) / p + (C16365 * C17447) / C12732);
    const double C11819 =
        C17647 - ((C12062 * C17396) / p + (C16539 * C17449) / C12732);
    vrx[0] = C3740;
    vrx[1] = C3758;
    vrx[2] = C3934;
    vrx[3] = C4030;
    vrx[4] = C4127;
    vrx[5] = C4144;
    vrx[6] = C4316;
    vrx[7] = C4409;
    vrx[8] = C4507;
    vrx[9] = C4524;
    vrx[10] = C4696;
    vrx[11] = C4788;
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
    vrx[30] = C5511;
    vrx[31] = C5556;
    vrx[32] = C5571;
    vrx[33] = C5614;
    vrx[34] = C5630;
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
