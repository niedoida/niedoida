/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_ssdd_AB.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
void second_derivative_ee_0022_12(const double ae,
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
                                  double* const d2eexx,
                                  double* const d2eexy,
                                  double* const d2eexz,
                                  double* const d2eeyx,
                                  double* const d2eeyy,
                                  double* const d2eeyz,
                                  double* const d2eezx,
                                  double* const d2eezy,
                                  double* const d2eezz)
{
    const double p = ae + be;
    const double q = ce + de;
    const double xP = (ae * xA + be * xB) / p;
    const double yP = (ae * yA + be * yB) / p;
    const double zP = (ae * zA + be * zB) / p;
    const double xQ = (ce * xC + de * xD) / q;
    const double yQ = (ce * yC + de * yD) / q;
    const double zQ = (ce * zC + de * zD) / q;
    const double C13440 = ae + be;
    const double C13439 = ae * be;
    const double C13438 = xA - xB;
    const double C13447 = yA - yB;
    const double C13450 = zA - zB;
    const double C13453 = p + q;
    const double C13452 = p * q;
    const double C13458 = xP - xQ;
    const double C13457 = bs[2];
    const double C13463 = bs[3];
    const double C13474 = bs[4];
    const double C13495 = bs[5];
    const double C13527 = yP - yQ;
    const double C13553 = zP - zQ;
    const double C73 = bs[0];
    const double C14332 = ce + de;
    const double C14331 = ce * de;
    const double C14330 = xC - xD;
    const double C14364 = yC - yD;
    const double C14382 = zC - zD;
    const double C61 = std::exp(-(std::pow(C13438, 2) * C13439) / C13440);
    const double C63 = std::exp(-(std::pow(C13447, 2) * C13439) / C13440);
    const double C62 = std::exp(-(std::pow(C13450, 2) * C13439) / C13440);
    const double C13454 = 2 * C13452;
    const double C13466 = C13458 * ae;
    const double C13465 = C13458 * be;
    const double C13462 = std::pow(C13458, 2);
    const double C13530 = C13527 * be;
    const double C13529 = C13458 * C13527;
    const double C13581 = C13527 * ae;
    const double C13580 = C13527 * C13458;
    const double C13605 = std::pow(C13527, 2);
    const double C13556 = C13553 * be;
    const double C13555 = C13458 * C13553;
    const double C13619 = C13527 * C13553;
    const double C13632 = C13553 * ae;
    const double C13631 = C13553 * C13458;
    const double C13656 = C13553 * C13527;
    const double C13668 = std::pow(C13553, 2);
    const double C14336 = 2 * C14332;
    const double C14335 = std::pow(C14332, 2);
    const double C14337 = C14330 * de;
    const double C14334 = C14330 * ce;
    const double C14333 = std::pow(C14330, 2);
    const double C14365 = std::pow(C14364, 2);
    const double C14424 = C14364 * de;
    const double C14422 = C14364 * ce;
    const double C14383 = std::pow(C14382, 2);
    const double C14466 = C14382 * de;
    const double C14464 = C14382 * ce;
    const double C71 = -(2 * ae * be * (xA - xB) * C61) / (ae + be);
    const double C72 =
        -((C61 - (C13438 * 2 * C13439 * C13438 * C61) / C13440) * 2 * C13439) /
        C13440;
    const double C115 = -(2 * C13439 * (yA - yB) * C63) / C13440;
    const double C213 =
        -((C63 - (C13447 * 2 * C13439 * C13447 * C63) / C13440) * 2 * C13439) /
        C13440;
    const double C148 = -(2 * C13439 * (zA - zB) * C62) / C13440;
    const double C327 =
        -((C62 - (C13450 * 2 * C13439 * C13450 * C62) / C13440) * 2 * C13439) /
        C13440;
    const double C13456 = C13454 / C13453;
    const double C88 =
        ((std::pow(xP - xQ, 2) * bs[2] * std::pow(C13454 / C13453, 2) -
          (bs[1] * C13454) / C13453) *
         C13439) /
        std::pow(C13440, 2);
    const double C74 = -(C13458 * bs[1] * C13454) / C13453;
    const double C377 = -(C13527 * bs[1] * C13454) / C13453;
    const double C818 = -(C13553 * bs[1] * C13454) / C13453;
    const double C13469 = C13463 * C13466;
    const double C13480 = C13474 * C13466;
    const double C13503 = C13495 * C13466;
    const double C79 = (-(bs[1] * C13466 * C13454) / C13453) / C13440;
    const double C13468 = C13463 * C13465;
    const double C13477 = C13474 * C13465;
    const double C13499 = C13495 * C13465;
    const double C78 = (-(bs[1] * C13465 * C13454) / C13453) / C13440;
    const double C13476 = C13462 * C13474;
    const double C13498 = C13462 * C13495;
    const double C13532 = C13463 * C13530;
    const double C13537 = C13474 * C13530;
    const double C13544 = C13495 * C13530;
    const double C116 = (-(bs[1] * C13530 * C13454) / C13453) / C13440;
    const double C13531 = C13529 * ae;
    const double C13583 = C13463 * C13581;
    const double C13588 = C13474 * C13581;
    const double C13595 = C13495 * C13581;
    const double C181 = (-(bs[1] * C13581 * C13454) / C13453) / C13440;
    const double C13582 = C13580 * ae;
    const double C13607 = C13605 * C13474;
    const double C13612 = C13605 * C13495;
    const double C13558 = C13463 * C13556;
    const double C13563 = C13474 * C13556;
    const double C13570 = C13495 * C13556;
    const double C149 = (-(bs[1] * C13556 * C13454) / C13453) / C13440;
    const double C13557 = C13555 * ae;
    const double C13620 = C13619 * ae;
    const double C13634 = C13463 * C13632;
    const double C13639 = C13474 * C13632;
    const double C13646 = C13495 * C13632;
    const double C268 = (-(bs[1] * C13632 * C13454) / C13453) / C13440;
    const double C13633 = C13631 * ae;
    const double C13657 = C13656 * ae;
    const double C13670 = C13668 * C13474;
    const double C13675 = C13668 * C13495;
    const double C14349 = std::pow(C14336, -1);
    const double C14554 = std::pow(C14336, -2);
    const double C14350 = 2 * C14335;
    const double C14558 = C14335 * C14336;
    const double C14557 = 4 * C14335;
    const double C14547 = std::pow(C14334, 2);
    const double C14338 = C14333 * C14331;
    const double C14366 = C14365 * C14331;
    const double C14559 = std::pow(C14422, 2);
    const double C14384 = C14383 * C14331;
    const double C14561 = std::pow(C14464, 2);
    const double C13459 = std::pow(C13456, 2);
    const double C13464 = -C13456;
    const double C13475 = std::pow(C13456, 4);
    const double C13533 = C13531 * be;
    const double C13584 = C13582 * be;
    const double C13559 = C13557 * be;
    const double C13621 = C13620 * be;
    const double C13635 = C13633 * be;
    const double C13658 = C13657 * be;
    const double C14586 = 4 * C14558;
    const double C14585 = C14332 * C14557;
    const double C14339 = C14338 / C14332;
    const double C14367 = C14366 / C14332;
    const double C14385 = C14384 / C14332;
    const double C13461 = C13457 * C13459;
    const double C89 = (ae * C13459 * C13457 * C13458 * be +
                        be * C13459 * C13457 * C13458 * ae +
                        C13458 *
                            (C13457 * C13459 + std::pow(C13458, 2) * bs[3] *
                                                   std::pow(-C13456, 3)) *
                            C13439) /
                       std::pow(C13440, 2);
    const double C121 =
        (C13459 * C13457 * C13458 * (yP - yQ) * ae * be) / std::pow(C13440, 2);
    const double C154 =
        (C13459 * C13457 * C13458 * (zP - zQ) * ae * be) / std::pow(C13440, 2);
    const double C186 =
        (C13459 * C13457 * C13527 * C13458 * ae * be) / std::pow(C13440, 2);
    const double C214 =
        ((std::pow(C13527, 2) * C13457 * C13459 - (bs[1] * C13454) / C13453) *
         C13439) /
        std::pow(C13440, 2);
    const double C241 =
        (C13459 * C13457 * C13527 * C13553 * ae * be) / std::pow(C13440, 2);
    const double C273 =
        (C13459 * C13457 * C13553 * C13458 * ae * be) / std::pow(C13440, 2);
    const double C300 =
        (C13459 * C13457 * C13553 * C13527 * ae * be) / std::pow(C13440, 2);
    const double C328 =
        ((std::pow(C13553, 2) * C13457 * C13459 - (bs[1] * C13454) / C13453) *
         C13439) /
        std::pow(C13440, 2);
    const double C80 = (C13458 * C13459 * C13457 * C13465) / C13440 -
                       (be * bs[1] * C13454) / (C13453 * C13440);
    const double C81 = (C13458 * C13459 * C13457 * C13466) / C13440 -
                       (ae * bs[1] * C13454) / (C13453 * C13440);
    const double C117 = (C13458 * C13459 * C13457 * C13530) / C13440;
    const double C150 = (C13458 * C13459 * C13457 * C13556) / C13440;
    const double C182 = (C13458 * C13459 * C13457 * C13581) / C13440;
    const double C269 = (C13458 * C13459 * C13457 * C13632) / C13440;
    const double C383 = (C13527 * C13459 * C13457 * C13465) / C13440;
    const double C384 = (C13527 * C13459 * C13457 * C13466) / C13440;
    const double C439 = (C13527 * C13459 * C13457 * C13530) / C13440 -
                        (be * bs[1] * C13454) / (C13453 * C13440);
    const double C489 = (C13527 * C13459 * C13457 * C13556) / C13440;
    const double C539 = (C13527 * C13459 * C13457 * C13581) / C13440 -
                        (ae * bs[1] * C13454) / (C13453 * C13440);
    const double C677 = (C13527 * C13459 * C13457 * C13632) / C13440;
    const double C824 = (C13553 * C13459 * C13457 * C13465) / C13440;
    const double C825 = (C13553 * C13459 * C13457 * C13466) / C13440;
    const double C880 = (C13553 * C13459 * C13457 * C13530) / C13440;
    const double C930 = (C13553 * C13459 * C13457 * C13556) / C13440 -
                        (be * bs[1] * C13454) / (C13453 * C13440);
    const double C980 = (C13553 * C13459 * C13457 * C13581) / C13440;
    const double C1118 = (C13553 * C13459 * C13457 * C13632) / C13440 -
                         (ae * bs[1] * C13454) / (C13453 * C13440);
    const double C13467 = std::pow(C13464, 3);
    const double C13496 = std::pow(C13464, 5);
    const double C13484 = C13475 * C13480;
    const double C13483 = C13475 * C13477;
    const double C13482 = C13476 * C13475;
    const double C13494 = C13474 * C13475;
    const double C13539 = C13475 * C13537;
    const double C13565 = C13475 * C13563;
    const double C13590 = C13475 * C13588;
    const double C13608 = C13607 * C13475;
    const double C13641 = C13475 * C13639;
    const double C13671 = C13670 * C13475;
    const double C13536 = C13474 * C13533;
    const double C13543 = C13495 * C13533;
    const double C13587 = C13474 * C13584;
    const double C13594 = C13495 * C13584;
    const double C13562 = C13474 * C13559;
    const double C13569 = C13495 * C13559;
    const double C13623 = C13474 * C13621;
    const double C13626 = C13495 * C13621;
    const double C13638 = C13474 * C13635;
    const double C13645 = C13495 * C13635;
    const double C13660 = C13474 * C13658;
    const double C13663 = C13495 * C13658;
    const double C14340 = -C14339;
    const double C14368 = -C14367;
    const double C14386 = -C14385;
    const double C75 = C13461 * C13462 - (bs[1] * C13454) / C13453;
    const double C378 = C13461 * C13605 - (bs[1] * C13454) / C13453;
    const double C379 = C13527 * C13458 * C13461;
    const double C819 = C13461 * C13668 - (bs[1] * C13454) / C13453;
    const double C820 = C13553 * C13458 * C13461;
    const double C1920 = C13553 * C13527 * C13461;
    const double C13471 = C13467 * C13469;
    const double C13470 = C13467 * C13468;
    const double C13473 = C13463 * C13467;
    const double C13534 = C13467 * C13532;
    const double C13560 = C13467 * C13558;
    const double C13585 = C13467 * C13583;
    const double C13636 = C13467 * C13634;
    const double C122 = (ae * C13459 * C13457 * C13527 * be +
                         C13458 * C13467 * C13463 * C13458 * C13527 * ae * be) /
                        std::pow(C13440, 2);
    const double C155 = (ae * C13459 * C13457 * C13553 * be +
                         C13458 * C13467 * C13463 * C13458 * C13553 * ae * be) /
                        std::pow(C13440, 2);
    const double C187 = (be * C13459 * C13457 * C13527 * ae +
                         C13458 * C13467 * C13463 * C13527 * C13458 * ae * be) /
                        std::pow(C13440, 2);
    const double C215 =
        (C13458 * (C13461 + std::pow(C13527, 2) * C13463 * C13467) * C13439) /
        std::pow(C13440, 2);
    const double C242 = (C13458 * C13467 * C13463 * C13527 * C13553 * ae * be) /
                        std::pow(C13440, 2);
    const double C243 =
        (C13467 * C13463 * C13621 + C13475 * C13474 * C13621 * C13462) /
        std::pow(C13440, 2);
    const double C274 = (be * C13459 * C13457 * C13553 * ae +
                         C13458 * C13467 * C13463 * C13553 * C13458 * ae * be) /
                        std::pow(C13440, 2);
    const double C301 = (C13458 * C13467 * C13463 * C13553 * C13527 * ae * be) /
                        std::pow(C13440, 2);
    const double C302 =
        (C13467 * C13463 * C13658 + C13475 * C13474 * C13658 * C13462) /
        std::pow(C13440, 2);
    const double C329 =
        (C13458 * (C13461 + std::pow(C13553, 2) * C13463 * C13467) * C13439) /
        std::pow(C13440, 2);
    const double C395 =
        (C13527 * (C13461 + C13462 * C13463 * C13467) * C13439) /
        std::pow(C13440, 2);
    const double C445 =
        (be * C13459 * C13457 * C13466 + C13527 * C13467 * C13463 * C13533) /
        std::pow(C13440, 2);
    const double C495 =
        (C13527 * C13467 * C13463 * C13559) / std::pow(C13440, 2);
    const double C545 =
        (ae * C13459 * C13457 * C13465 + C13527 * C13467 * C13463 * C13584) /
        std::pow(C13440, 2);
    const double C589 =
        (ae * C13459 * C13457 * C13530 + be * C13459 * C13457 * C13581 +
         C13527 * (C13461 + C13605 * C13463 * C13467) * C13439) /
        std::pow(C13440, 2);
    const double C633 =
        (ae * C13459 * C13457 * C13556 + C13527 * C13467 * C13463 * C13621) /
        std::pow(C13440, 2);
    const double C683 =
        (C13527 * C13467 * C13463 * C13635) / std::pow(C13440, 2);
    const double C727 =
        (be * C13459 * C13457 * C13632 + C13527 * C13467 * C13463 * C13658) /
        std::pow(C13440, 2);
    const double C771 =
        (C13527 * (C13461 + C13668 * C13463 * C13467) * C13439) /
        std::pow(C13440, 2);
    const double C836 =
        (C13553 * (C13461 + C13462 * C13463 * C13467) * C13439) /
        std::pow(C13440, 2);
    const double C886 =
        (C13553 * C13467 * C13463 * C13533) / std::pow(C13440, 2);
    const double C936 =
        (be * C13459 * C13457 * C13466 + C13553 * C13467 * C13463 * C13559) /
        std::pow(C13440, 2);
    const double C986 =
        (C13553 * C13467 * C13463 * C13584) / std::pow(C13440, 2);
    const double C1030 =
        (C13553 * (C13461 + C13605 * C13463 * C13467) * C13439) /
        std::pow(C13440, 2);
    const double C1074 =
        (be * C13459 * C13457 * C13581 + C13553 * C13467 * C13463 * C13621) /
        std::pow(C13440, 2);
    const double C1124 =
        (ae * C13459 * C13457 * C13465 + C13553 * C13467 * C13463 * C13635) /
        std::pow(C13440, 2);
    const double C1168 =
        (ae * C13459 * C13457 * C13530 + C13553 * C13467 * C13463 * C13658) /
        std::pow(C13440, 2);
    const double C1212 =
        (ae * C13459 * C13457 * C13556 + be * C13459 * C13457 * C13632 +
         C13553 * (C13461 + C13668 * C13463 * C13467) * C13439) /
        std::pow(C13440, 2);
    const double C13509 = C13496 * C13503;
    const double C13506 = C13496 * C13499;
    const double C13505 = C13498 * C13496;
    const double C13546 = C13496 * C13544;
    const double C13572 = C13496 * C13570;
    const double C13597 = C13496 * C13595;
    const double C13613 = C13612 * C13496;
    const double C13648 = C13496 * C13646;
    const double C13676 = C13675 * C13496;
    const double C13487 = C13458 * C13484;
    const double C13493 = be * C13484;
    const double C13838 = C13527 * C13484;
    const double C13972 = C13553 * C13484;
    const double C13486 = C13458 * C13483;
    const double C13492 = ae * C13483;
    const double C13847 = C13527 * C13483;
    const double C13988 = C13553 * C13483;
    const double C13504 = C13494 * ae;
    const double C13502 = C13494 * C13462;
    const double C13501 = C13458 * C13494;
    const double C13500 = C13494 * be;
    const double C13863 = C13494 * C13605;
    const double C13862 = C13527 * C13494;
    const double C14011 = C13494 * C13668;
    const double C14010 = C13553 * C13494;
    const double C13542 = ae * C13539;
    const double C13541 = C13458 * C13539;
    const double C13853 = C13527 * C13539;
    const double C13995 = C13553 * C13539;
    const double C13568 = ae * C13565;
    const double C13567 = C13458 * C13565;
    const double C13879 = C13527 * C13565;
    const double C14001 = C13553 * C13565;
    const double C13593 = be * C13590;
    const double C13592 = C13458 * C13590;
    const double C13855 = C13527 * C13590;
    const double C13983 = C13553 * C13590;
    const double C13644 = be * C13641;
    const double C13643 = C13458 * C13641;
    const double C13888 = C13527 * C13641;
    const double C14003 = C13553 * C13641;
    const double C13538 = C13475 * C13536;
    const double C13545 = C13496 * C13543;
    const double C13589 = C13475 * C13587;
    const double C13596 = C13496 * C13594;
    const double C13564 = C13475 * C13562;
    const double C13571 = C13496 * C13569;
    const double C13624 = C13475 * C13623;
    const double C13627 = C13496 * C13626;
    const double C13640 = C13475 * C13638;
    const double C13647 = C13496 * C13645;
    const double C13661 = C13475 * C13660;
    const double C13664 = C13496 * C13663;
    const double C14341 = std::exp(C14340);
    const double C14369 = std::exp(C14368);
    const double C14387 = std::exp(C14386);
    const double C83 =
        (C13459 * C13457 * C13466 + C13458 * (C13458 * C13471 + C13461 * ae) +
         C13458 * C13461 * ae) /
        C13440;
    const double C386 = (C13459 * C13457 * C13466 + C13471 * C13605) / C13440;
    const double C388 = (C13527 * (C13458 * C13471 + C13461 * ae)) / C13440;
    const double C827 = (C13459 * C13457 * C13466 + C13471 * C13668) / C13440;
    const double C829 = (C13553 * (C13458 * C13471 + C13461 * ae)) / C13440;
    const double C1924 = (C13553 * C13527 * C13471) / C13440;
    const double C2747 =
        (2 * C13527 * C13471 + C13527 * (C13471 + C13484 * C13605)) / C13440;
    const double C2996 = (C13553 * (C13471 + C13484 * C13605)) / C13440;
    const double C5175 =
        (2 * C13553 * C13471 + C13553 * (C13471 + C13484 * C13668)) / C13440;
    const double C90 =
        ((C13461 + C13462 * C13463 * C13467) * C13439 +
         ae * (C13458 * C13470 + C13461 * be) +
         be * (C13458 * C13471 + C13461 * ae) +
         C13458 *
             (ae * C13470 + be * C13471 +
              C13458 *
                  (C13463 * C13467 + C13462 * bs[4] * std::pow(C13456, 4)) *
                  C13439)) /
        std::pow(C13440, 2);
    const double C82 =
        (C13459 * C13457 * C13465 + C13458 * (C13458 * C13470 + C13461 * be) +
         C13458 * C13461 * be) /
        C13440;
    const double C385 = (C13459 * C13457 * C13465 + C13470 * C13605) / C13440;
    const double C387 = (C13527 * (C13458 * C13470 + C13461 * be)) / C13440;
    const double C826 = (C13459 * C13457 * C13465 + C13470 * C13668) / C13440;
    const double C828 = (C13553 * (C13458 * C13470 + C13461 * be)) / C13440;
    const double C1923 = (C13553 * C13527 * C13470) / C13440;
    const double C2746 =
        (2 * C13527 * C13470 + C13527 * (C13470 + C13483 * C13605)) / C13440;
    const double C2995 = (C13553 * (C13470 + C13483 * C13605)) / C13440;
    const double C5174 =
        (2 * C13553 * C13470 + C13553 * (C13470 + C13483 * C13668)) / C13440;
    const double C13481 = C13473 * ae;
    const double C13479 = C13458 * C13473;
    const double C13478 = C13473 * be;
    const double C13485 = C13473 + C13482;
    const double C13609 = C13473 + C13608;
    const double C13672 = C13473 + C13671;
    const double C13854 = C13527 * C13473;
    const double C14002 = C13553 * C13473;
    const double C216 =
        ((C13461 + C13605 * C13463 * C13467) * C13439 +
         (C13473 + C13605 * C13474 * C13475) * C13439 * C13462) /
        std::pow(C13440, 2);
    const double C330 =
        ((C13461 + C13668 * C13463 * C13467) * C13439 +
         (C13473 + C13668 * C13474 * C13475) * C13439 * C13462) /
        std::pow(C13440, 2);
    const double C76 =
        2 * C13458 * C13461 + C13458 * (C13461 + C13473 * C13462);
    const double C381 = C13527 * (C13461 + C13473 * C13462);
    const double C822 = C13553 * (C13461 + C13473 * C13462);
    const double C2744 =
        2 * C13527 * C13461 + C13527 * (C13461 + C13473 * C13605);
    const double C2991 = C13553 * (C13461 + C13473 * C13605);
    const double C5172 =
        2 * C13553 * C13461 + C13553 * (C13461 + C13473 * C13668);
    const double C123 =
        (C13467 * C13463 * C13533 + ae * C13458 * C13534 +
         C13458 * (ae * C13534 + C13458 * C13475 * C13474 * C13533)) /
        std::pow(C13440, 2);
    const double C118 = (C13459 * C13457 * C13530 + C13534 * C13462) / C13440;
    const double C119 =
        (2 * C13458 * C13534 + C13458 * (C13534 + C13539 * C13462)) / C13440;
    const double C440 =
        (C13459 * C13457 * C13530 + C13527 * (C13527 * C13534 + C13461 * be) +
         C13527 * C13461 * be) /
        C13440;
    const double C441 =
        (C13527 * C13458 * C13534 + C13458 * C13461 * be) / C13440;
    const double C443 = (C13527 * (C13534 + C13539 * C13462) +
                         (C13461 + C13473 * C13462) * be) /
                        C13440;
    const double C881 = (C13459 * C13457 * C13530 + C13534 * C13668) / C13440;
    const double C882 = (C13553 * C13458 * C13534) / C13440;
    const double C884 = (C13553 * (C13534 + C13539 * C13462)) / C13440;
    const double C1982 = (C13553 * (C13527 * C13534 + C13461 * be)) / C13440;
    const double C5202 =
        (2 * C13553 * C13534 + C13553 * (C13534 + C13539 * C13668)) / C13440;
    const double C156 =
        (C13467 * C13463 * C13559 + ae * C13458 * C13560 +
         C13458 * (ae * C13560 + C13458 * C13475 * C13474 * C13559)) /
        std::pow(C13440, 2);
    const double C151 = (C13459 * C13457 * C13556 + C13560 * C13462) / C13440;
    const double C152 =
        (2 * C13458 * C13560 + C13458 * (C13560 + C13565 * C13462)) / C13440;
    const double C490 = (C13459 * C13457 * C13556 + C13560 * C13605) / C13440;
    const double C491 = (C13527 * C13458 * C13560) / C13440;
    const double C493 = (C13527 * (C13560 + C13565 * C13462)) / C13440;
    const double C931 =
        (C13459 * C13457 * C13556 + C13553 * (C13553 * C13560 + C13461 * be) +
         C13553 * C13461 * be) /
        C13440;
    const double C932 =
        (C13553 * C13458 * C13560 + C13458 * C13461 * be) / C13440;
    const double C934 = (C13553 * (C13560 + C13565 * C13462) +
                         (C13461 + C13473 * C13462) * be) /
                        C13440;
    const double C2038 =
        (C13553 * C13527 * C13560 + C13527 * C13461 * be) / C13440;
    const double C2800 =
        (2 * C13527 * C13560 + C13527 * (C13560 + C13565 * C13605)) / C13440;
    const double C3085 = (C13553 * (C13560 + C13565 * C13605) +
                          (C13461 + C13473 * C13605) * be) /
                         C13440;
    const double C188 =
        (C13467 * C13463 * C13584 + be * C13458 * C13585 +
         C13458 * (be * C13585 + C13458 * C13475 * C13474 * C13584)) /
        std::pow(C13440, 2);
    const double C183 = (C13459 * C13457 * C13581 + C13585 * C13462) / C13440;
    const double C184 =
        (2 * C13458 * C13585 + C13458 * (C13585 + C13590 * C13462)) / C13440;
    const double C540 =
        (C13459 * C13457 * C13581 + C13527 * (C13527 * C13585 + C13461 * ae) +
         C13527 * C13461 * ae) /
        C13440;
    const double C541 =
        (C13527 * C13458 * C13585 + C13458 * C13461 * ae) / C13440;
    const double C543 = (C13527 * (C13585 + C13590 * C13462) +
                         (C13461 + C13473 * C13462) * ae) /
                        C13440;
    const double C981 = (C13459 * C13457 * C13581 + C13585 * C13668) / C13440;
    const double C982 = (C13553 * C13458 * C13585) / C13440;
    const double C984 = (C13553 * (C13585 + C13590 * C13462)) / C13440;
    const double C2094 = (C13553 * (C13527 * C13585 + C13461 * ae)) / C13440;
    const double C5254 =
        (2 * C13553 * C13585 + C13553 * (C13585 + C13590 * C13668)) / C13440;
    const double C275 =
        (C13467 * C13463 * C13635 + be * C13458 * C13636 +
         C13458 * (be * C13636 + C13458 * C13475 * C13474 * C13635)) /
        std::pow(C13440, 2);
    const double C270 = (C13459 * C13457 * C13632 + C13636 * C13462) / C13440;
    const double C271 =
        (2 * C13458 * C13636 + C13458 * (C13636 + C13641 * C13462)) / C13440;
    const double C678 = (C13459 * C13457 * C13632 + C13636 * C13605) / C13440;
    const double C679 = (C13527 * C13458 * C13636) / C13440;
    const double C681 = (C13527 * (C13636 + C13641 * C13462)) / C13440;
    const double C1119 =
        (C13459 * C13457 * C13632 + C13553 * (C13553 * C13636 + C13461 * ae) +
         C13553 * C13461 * ae) /
        C13440;
    const double C1120 =
        (C13553 * C13458 * C13636 + C13458 * C13461 * ae) / C13440;
    const double C1122 = (C13553 * (C13636 + C13641 * C13462) +
                          (C13461 + C13473 * C13462) * ae) /
                         C13440;
    const double C2256 =
        (C13553 * C13527 * C13636 + C13527 * C13461 * ae) / C13440;
    const double C2900 =
        (2 * C13527 * C13636 + C13527 * (C13636 + C13641 * C13605)) / C13440;
    const double C3255 = (C13553 * (C13636 + C13641 * C13605) +
                          (C13461 + C13473 * C13605) * ae) /
                         C13440;
    const double C13513 = C13458 * C13509;
    const double C13840 = C13509 * C13605;
    const double C13974 = C13509 * C13668;
    const double C14056 = C13527 * C13509;
    const double C13512 = C13458 * C13506;
    const double C13849 = C13506 * C13605;
    const double C13990 = C13506 * C13668;
    const double C14062 = C13527 * C13506;
    const double C13511 = C13494 + C13505;
    const double C13548 = C13546 * C13462;
    const double C13861 = C13527 * C13546;
    const double C13928 = C13458 * C13546;
    const double C13997 = C13546 * C13668;
    const double C13574 = C13572 * C13462;
    const double C13881 = C13572 * C13605;
    const double C13937 = C13458 * C13572;
    const double C14009 = C13553 * C13572;
    const double C14066 = C13527 * C13572;
    const double C13599 = C13597 * C13462;
    const double C13864 = C13527 * C13597;
    const double C13930 = C13458 * C13597;
    const double C13984 = C13597 * C13668;
    const double C13614 = C13494 + C13613;
    const double C13650 = C13648 * C13462;
    const double C13890 = C13648 * C13605;
    const double C13941 = C13458 * C13648;
    const double C14012 = C13553 * C13648;
    const double C14068 = C13527 * C13648;
    const double C13677 = C13494 + C13676;
    const double C2994 = (C13527 * C13471 + C13838 * C13668) / C13440;
    const double C13497 = C13492 + C13493;
    const double C2993 = (C13527 * C13470 + C13847 * C13668) / C13440;
    const double C13508 = C13473 + C13502;
    const double C13510 = C13501 * ae;
    const double C13507 = C13501 * be;
    const double C13929 = C13527 * C13501;
    const double C14048 = C13553 * C13501;
    const double C13868 = C13473 + C13863;
    const double C13870 = C13862 * ae;
    const double C13867 = C13862 * be;
    const double C14067 = C13553 * C13862;
    const double C14016 = C13473 + C14011;
    const double C14018 = C14010 * ae;
    const double C14015 = C14010 * be;
    const double C883 = (C13458 * C13534 + C13541 * C13668) / C13440;
    const double C492 = (C13458 * C13560 + C13567 * C13605) / C13440;
    const double C13859 = C13542 + C13593;
    const double C983 = (C13458 * C13585 + C13592 * C13668) / C13440;
    const double C14007 = C13568 + C13644;
    const double C680 = (C13458 * C13636 + C13643 * C13605) / C13440;
    const double C124 =
        (2 * (ae * C13534 + C13458 * C13538) + ae * (C13534 + C13539 * C13462) +
         C13458 *
             (C13538 + ae * C13458 * C13539 +
              C13458 * (ae * C13539 + C13458 * C13496 * C13495 * C13533))) /
        std::pow(C13440, 2);
    const double C446 = (C13467 * C13463 * C13533 + be * C13527 * C13471 +
                         C13527 * (be * C13471 + C13527 * C13538)) /
                        std::pow(C13440, 2);
    const double C447 = (be * (C13458 * C13471 + C13461 * ae) +
                         C13527 * (ae * C13534 + C13458 * C13538)) /
                        std::pow(C13440, 2);
    const double C887 =
        (C13467 * C13463 * C13533 + C13538 * C13668) / std::pow(C13440, 2);
    const double C888 =
        (C13553 * (ae * C13534 + C13458 * C13538)) / std::pow(C13440, 2);
    const double C1985 =
        (C13553 * (be * C13471 + C13527 * C13538)) / std::pow(C13440, 2);
    const double C13547 = C13458 * C13545;
    const double C13839 = C13527 * C13545;
    const double C2776 =
        (2 * (be * C13471 + C13527 * C13538) + be * (C13471 + C13484 * C13605) +
         C13527 * (C13538 + be * C13527 * C13484 +
                   C13527 * (C13493 + C13527 * C13545))) /
        std::pow(C13440, 2);
    const double C5204 =
        (2 * C13553 * C13538 + C13553 * (C13538 + C13545 * C13668)) /
        std::pow(C13440, 2);
    const double C5205 =
        (3 * (C13538 + C13545 * C13668) +
         C13553 * (2 * C13553 * C13545 +
                   C13553 * (C13545 +
                             std::pow(C13456, 6) * bs[6] * C13533 * C13668))) /
        std::pow(C13440, 2);
    const double C189 =
        (2 * (be * C13585 + C13458 * C13589) + be * (C13585 + C13590 * C13462) +
         C13458 *
             (C13589 + be * C13458 * C13590 +
              C13458 * (be * C13590 + C13458 * C13496 * C13495 * C13584))) /
        std::pow(C13440, 2);
    const double C546 = (C13467 * C13463 * C13584 + ae * C13527 * C13470 +
                         C13527 * (ae * C13470 + C13527 * C13589)) /
                        std::pow(C13440, 2);
    const double C547 = (ae * (C13458 * C13470 + C13461 * be) +
                         C13527 * (be * C13585 + C13458 * C13589)) /
                        std::pow(C13440, 2);
    const double C987 =
        (C13467 * C13463 * C13584 + C13589 * C13668) / std::pow(C13440, 2);
    const double C988 =
        (C13553 * (be * C13585 + C13458 * C13589)) / std::pow(C13440, 2);
    const double C2097 =
        (ae * C13553 * C13470 + C13527 * C13553 * C13589) / std::pow(C13440, 2);
    const double C13598 = C13458 * C13596;
    const double C13848 = C13527 * C13596;
    const double C13957 = C13553 * C13596;
    const double C2828 =
        (2 * (ae * C13470 + C13527 * C13589) + ae * (C13470 + C13483 * C13605) +
         C13527 * (C13589 + ae * C13527 * C13483 +
                   C13527 * (C13492 + C13527 * C13596))) /
        std::pow(C13440, 2);
    const double C3131 = (ae * (C13470 + C13483 * C13668) +
                          C13527 * (C13589 + C13596 * C13668)) /
                         std::pow(C13440, 2);
    const double C3132 =
        (C13553 * C13589 + ae * C13553 * C13847 +
         C13527 * (ae * C13553 * C13483 + C13527 * C13553 * C13596)) /
        std::pow(C13440, 2);
    const double C3133 =
        (C13589 + C13596 * C13668 + ae * (C13847 + C13527 * C13506 * C13668) +
         C13527 * (ae * (C13483 + C13506 * C13668) +
                   C13527 * (C13596 +
                             std::pow(C13456, 6) * bs[6] * C13584 * C13668))) /
        std::pow(C13440, 2);
    const double C5256 =
        (2 * C13553 * C13589 + C13553 * (C13589 + C13596 * C13668)) /
        std::pow(C13440, 2);
    const double C157 =
        (2 * (ae * C13560 + C13458 * C13564) + ae * (C13560 + C13565 * C13462) +
         C13458 *
             (C13564 + ae * C13458 * C13565 +
              C13458 * (ae * C13565 + C13458 * C13496 * C13495 * C13559))) /
        std::pow(C13440, 2);
    const double C496 =
        (C13467 * C13463 * C13559 + C13564 * C13605) / std::pow(C13440, 2);
    const double C497 =
        (C13527 * (ae * C13560 + C13458 * C13564)) / std::pow(C13440, 2);
    const double C937 = (C13467 * C13463 * C13559 + be * C13553 * C13471 +
                         C13553 * (be * C13471 + C13553 * C13564)) /
                        std::pow(C13440, 2);
    const double C938 = (be * (C13458 * C13471 + C13461 * ae) +
                         C13553 * (ae * C13560 + C13458 * C13564)) /
                        std::pow(C13440, 2);
    const double C2041 =
        (be * C13527 * C13471 + C13553 * C13527 * C13564) / std::pow(C13440, 2);
    const double C13573 = C13458 * C13571;
    const double C13973 = C13553 * C13571;
    const double C14055 = C13527 * C13571;
    const double C2802 =
        (2 * C13527 * C13564 + C13527 * (C13564 + C13571 * C13605)) /
        std::pow(C13440, 2);
    const double C2803 =
        (3 * (C13564 + C13571 * C13605) +
         C13527 * (2 * C13527 * C13571 +
                   C13527 * (C13571 +
                             std::pow(C13456, 6) * bs[6] * C13559 * C13605))) /
        std::pow(C13440, 2);
    const double C3087 = (C13527 * C13564 + be * C13553 * C13838 +
                          C13553 * (be * C13838 + C13553 * C13527 * C13571)) /
                         std::pow(C13440, 2);
    const double C3088 = (be * (C13471 + C13484 * C13605) +
                          C13553 * (C13564 + C13571 * C13605)) /
                         std::pow(C13440, 2);
    const double C5230 =
        (2 * (be * C13471 + C13553 * C13564) + be * (C13471 + C13484 * C13668) +
         C13553 * (C13564 + be * C13553 * C13484 +
                   C13553 * (C13493 + C13553 * C13571))) /
        std::pow(C13440, 2);
    const double C244 =
        (2 * C13458 * C13624 +
         C13458 * (C13624 + C13496 * C13495 * C13621 * C13462)) /
        std::pow(C13440, 2);
    const double C634 = (C13467 * C13463 * C13621 + ae * C13527 * C13560 +
                         C13527 * (ae * C13560 + C13527 * C13624)) /
                        std::pow(C13440, 2);
    const double C635 =
        (ae * C13458 * C13560 + C13527 * C13458 * C13624) / std::pow(C13440, 2);
    const double C1075 = (C13467 * C13463 * C13621 + be * C13553 * C13585 +
                          C13553 * (be * C13585 + C13553 * C13624)) /
                         std::pow(C13440, 2);
    const double C1076 =
        (be * C13458 * C13585 + C13553 * C13458 * C13624) / std::pow(C13440, 2);
    const double C2203 = (ae * (C13553 * C13560 + C13461 * be) +
                          C13527 * (be * C13585 + C13553 * C13624)) /
                         std::pow(C13440, 2);
    const double C13880 = C13527 * C13627;
    const double C13936 = C13458 * C13627;
    const double C13961 = C13553 * C13627;
    const double C245 =
        (3 * (C13624 + C13627 * C13462) +
         C13458 * (2 * C13458 * C13627 +
                   C13458 * (C13627 +
                             std::pow(C13456, 6) * bs[6] * C13621 * C13462))) /
        std::pow(C13440, 2);
    const double C636 = (C13458 * C13624 + ae * C13527 * C13567 +
                         C13527 * (ae * C13567 + C13527 * C13458 * C13627)) /
                        std::pow(C13440, 2);
    const double C637 = (ae * (C13560 + C13565 * C13462) +
                         C13527 * (C13624 + C13627 * C13462)) /
                        std::pow(C13440, 2);
    const double C1077 = (C13458 * C13624 + be * C13553 * C13592 +
                          C13553 * (be * C13592 + C13553 * C13458 * C13627)) /
                         std::pow(C13440, 2);
    const double C1078 = (be * (C13585 + C13590 * C13462) +
                          C13553 * (C13624 + C13627 * C13462)) /
                         std::pow(C13440, 2);
    const double C2876 =
        (2 * (ae * C13560 + C13527 * C13624) + ae * (C13560 + C13565 * C13605) +
         C13527 * (C13624 + ae * C13527 * C13565 +
                   C13527 * (C13568 + C13527 * C13627))) /
        std::pow(C13440, 2);
    const double C276 =
        (2 * (be * C13636 + C13458 * C13640) + be * (C13636 + C13641 * C13462) +
         C13458 *
             (C13640 + be * C13458 * C13641 +
              C13458 * (be * C13641 + C13458 * C13496 * C13495 * C13635))) /
        std::pow(C13440, 2);
    const double C684 =
        (C13467 * C13463 * C13635 + C13640 * C13605) / std::pow(C13440, 2);
    const double C685 =
        (C13527 * (be * C13636 + C13458 * C13640)) / std::pow(C13440, 2);
    const double C1125 = (C13467 * C13463 * C13635 + ae * C13553 * C13470 +
                          C13553 * (ae * C13470 + C13553 * C13640)) /
                         std::pow(C13440, 2);
    const double C1126 = (ae * (C13458 * C13470 + C13461 * be) +
                          C13553 * (be * C13636 + C13458 * C13640)) /
                         std::pow(C13440, 2);
    const double C2259 =
        (ae * C13527 * C13470 + C13553 * C13527 * C13640) / std::pow(C13440, 2);
    const double C13649 = C13458 * C13647;
    const double C13989 = C13553 * C13647;
    const double C14061 = C13527 * C13647;
    const double C2902 =
        (2 * C13527 * C13640 + C13527 * (C13640 + C13647 * C13605)) /
        std::pow(C13440, 2);
    const double C2903 =
        (3 * (C13640 + C13647 * C13605) +
         C13527 * (2 * C13527 * C13647 +
                   C13527 * (C13647 +
                             std::pow(C13456, 6) * bs[6] * C13635 * C13605))) /
        std::pow(C13440, 2);
    const double C3257 = (C13527 * C13640 + ae * C13553 * C13847 +
                          C13553 * (ae * C13847 + C13553 * C13527 * C13647)) /
                         std::pow(C13440, 2);
    const double C3258 = (ae * (C13470 + C13483 * C13605) +
                          C13553 * (C13640 + C13647 * C13605)) /
                         std::pow(C13440, 2);
    const double C5330 =
        (2 * (ae * C13470 + C13553 * C13640) + ae * (C13470 + C13483 * C13668) +
         C13553 * (C13640 + ae * C13553 * C13483 +
                   C13553 * (C13492 + C13553 * C13647))) /
        std::pow(C13440, 2);
    const double C303 =
        (2 * C13458 * C13661 +
         C13458 * (C13661 + C13496 * C13495 * C13658 * C13462)) /
        std::pow(C13440, 2);
    const double C728 = (C13467 * C13463 * C13658 + be * C13527 * C13636 +
                         C13527 * (be * C13636 + C13527 * C13661)) /
                        std::pow(C13440, 2);
    const double C729 =
        (be * C13458 * C13636 + C13527 * C13458 * C13661) / std::pow(C13440, 2);
    const double C1169 = (C13467 * C13463 * C13658 + ae * C13553 * C13534 +
                          C13553 * (ae * C13534 + C13553 * C13661)) /
                         std::pow(C13440, 2);
    const double C1170 =
        (ae * C13458 * C13534 + C13553 * C13458 * C13661) / std::pow(C13440, 2);
    const double C2312 = (ae * (C13527 * C13534 + C13461 * be) +
                          C13553 * (be * C13636 + C13527 * C13661)) /
                         std::pow(C13440, 2);
    const double C13889 = C13527 * C13664;
    const double C13940 = C13458 * C13664;
    const double C13996 = C13553 * C13664;
    const double C304 =
        (3 * (C13661 + C13664 * C13462) +
         C13458 * (2 * C13458 * C13664 +
                   C13458 * (C13664 +
                             std::pow(C13456, 6) * bs[6] * C13658 * C13462))) /
        std::pow(C13440, 2);
    const double C730 = (C13458 * C13661 + be * C13527 * C13643 +
                         C13527 * (be * C13643 + C13527 * C13458 * C13664)) /
                        std::pow(C13440, 2);
    const double C731 = (be * (C13636 + C13641 * C13462) +
                         C13527 * (C13661 + C13664 * C13462)) /
                        std::pow(C13440, 2);
    const double C1171 = (C13458 * C13661 + ae * C13553 * C13541 +
                          C13553 * (ae * C13541 + C13553 * C13458 * C13664)) /
                         std::pow(C13440, 2);
    const double C1172 = (ae * (C13534 + C13539 * C13462) +
                          C13553 * (C13661 + C13664 * C13462)) /
                         std::pow(C13440, 2);
    const double C2926 =
        (2 * (be * C13636 + C13527 * C13661) + be * (C13636 + C13641 * C13605) +
         C13527 * (C13661 + be * C13527 * C13641 +
                   C13527 * (C13644 + C13527 * C13664))) /
        std::pow(C13440, 2);
    const double C5354 =
        (2 * (ae * C13534 + C13553 * C13661) + ae * (C13534 + C13539 * C13668) +
         C13553 * (C13661 + ae * C13553 * C13539 +
                   C13553 * (C13542 + C13553 * C13664))) /
        std::pow(C13440, 2);
    const double C14343 = C14341 * C14334;
    const double C14342 = C14341 / C14336;
    const double C14352 = C14349 * C14341;
    const double C14550 = C14341 * C14337;
    const double C14583 = C14554 * C14341;
    const double C14577 = C14341 * C14547;
    const double C14423 = C14369 / C14336;
    const double C14425 = C14369 * C14422;
    const double C14432 = C14349 * C14369;
    const double C14565 = C14369 * C14424;
    const double C14589 = C14554 * C14369;
    const double C14587 = C14369 * C14559;
    const double C14465 = C14387 / C14336;
    const double C14467 = C14387 * C14464;
    const double C14474 = C14349 * C14387;
    const double C14571 = C14387 * C14466;
    const double C14592 = C14554 * C14387;
    const double C14590 = C14387 * C14561;
    const double C13490 = C13487 + C13481;
    const double C13857 = C13855 + C13481;
    const double C14005 = C14003 + C13481;
    const double C2204 = (ae * (C13553 * C13567 + C13479 * be) +
                          C13527 * (be * C13592 + C13553 * C13458 * C13627)) /
                         std::pow(C13440, 2);
    const double C2313 = (ae * (C13527 * C13541 + C13479 * be) +
                          C13553 * (be * C13643 + C13527 * C13458 * C13664)) /
                         std::pow(C13440, 2);
    const double C442 =
        (C13458 * C13534 + C13527 * (C13527 * C13541 + C13479 * be) +
         C13527 * C13479 * be) /
        C13440;
    const double C542 =
        (C13458 * C13585 + C13527 * (C13527 * C13592 + C13479 * ae) +
         C13527 * C13479 * ae) /
        C13440;
    const double C933 =
        (C13458 * C13560 + C13553 * (C13553 * C13567 + C13479 * be) +
         C13553 * C13479 * be) /
        C13440;
    const double C1121 =
        (C13458 * C13636 + C13553 * (C13553 * C13643 + C13479 * ae) +
         C13553 * C13479 * ae) /
        C13440;
    const double C1983 = (C13553 * (C13527 * C13541 + C13479 * be)) / C13440;
    const double C2039 =
        (C13553 * C13527 * C13567 + C13527 * C13479 * be) / C13440;
    const double C2095 = (C13553 * (C13527 * C13592 + C13479 * ae)) / C13440;
    const double C2257 =
        (C13553 * C13527 * C13643 + C13527 * C13479 * ae) / C13440;
    const double C380 = C13458 * C13461 + C13479 * C13605;
    const double C821 = C13458 * C13461 + C13479 * C13668;
    const double C1921 = C13553 * C13527 * C13479;
    const double C3382 =
        2 * C13527 * C13479 + C13527 * (C13479 + C13501 * C13605);
    const double C3720 = C13553 * (C13479 + C13501 * C13605);
    const double C5884 =
        2 * C13553 * C13479 + C13553 * (C13479 + C13501 * C13668);
    const double C13489 = C13486 + C13478;
    const double C13856 = C13853 + C13478;
    const double C14004 = C14001 + C13478;
    const double C3213 = (ae * (C13560 + C13553 * (C13553 * C13565 + C13478) +
                                C13553 * C13473 * be) +
                          C13527 * (C13624 + be * C13553 * C13590 +
                                    C13553 * (C13593 + C13553 * C13627))) /
                         std::pow(C13440, 2);
    const double C13488 = C13485 * C13439;
    const double C13610 = C13609 * C13439;
    const double C13673 = C13672 * C13439;
    const double C3214 =
        (be * C13585 + C13553 * C13624 + ae * (C13553 * C13879 + C13854 * be) +
         C13527 * (ae * (C13553 * C13565 + C13478) +
                   C13527 * (C13593 + C13553 * C13627))) /
        std::pow(C13440, 2);
    const double C3084 =
        (C13527 * C13560 + C13553 * (C13553 * C13879 + C13854 * be) +
         C13553 * C13854 * be) /
        C13440;
    const double C3254 =
        (C13527 * C13636 + C13553 * (C13553 * C13888 + C13854 * ae) +
         C13553 * C13854 * ae) /
        C13440;
    const double C2990 = C13527 * C13461 + C13854 * C13668;
    const double C6206 =
        2 * C13553 * C13854 + C13553 * (C13854 + C13862 * C13668);
    const double C13516 = C13513 + C13504;
    const double C13842 = C13484 + C13840;
    const double C13976 = C13484 + C13974;
    const double C6208 =
        (2 * C13553 * C13838 + C13553 * (C13838 + C14056 * C13668)) / C13440;
    const double C13515 = C13512 + C13500;
    const double C13851 = C13483 + C13849;
    const double C13992 = C13483 + C13990;
    const double C6207 =
        (2 * C13553 * C13847 + C13553 * (C13847 + C14062 * C13668)) / C13440;
    const double C13514 = C13511 * C13439;
    const double C13550 = C13539 + C13548;
    const double C13866 = C13861 + C13500;
    const double C13931 = C13527 * C13928;
    const double C5922 =
        (2 * C13553 * C13541 + C13553 * (C13541 + C13928 * C13668)) / C13440;
    const double C13999 = C13539 + C13997;
    const double C13576 = C13565 + C13574;
    const double C13883 = C13565 + C13881;
    const double C14036 = C13527 * C13937;
    const double C14047 = C13553 * C13937;
    const double C3456 =
        (2 * C13527 * C13567 + C13527 * (C13567 + C13937 * C13605)) / C13440;
    const double C3826 = (C13553 * (C13567 + C13937 * C13605) +
                          (C13479 + C13501 * C13605) * be) /
                         C13440;
    const double C14014 = C14009 + C13500;
    const double C14069 = C13553 * C14066;
    const double C13601 = C13590 + C13599;
    const double C13869 = C13864 + C13504;
    const double C13932 = C13527 * C13930;
    const double C5994 =
        (2 * C13553 * C13592 + C13553 * (C13592 + C13930 * C13668)) / C13440;
    const double C13985 = C13590 + C13984;
    const double C13615 = C13614 * C13439;
    const double C13652 = C13641 + C13650;
    const double C13892 = C13641 + C13890;
    const double C14037 = C13527 * C13941;
    const double C14049 = C13553 * C13941;
    const double C3598 =
        (2 * C13527 * C13643 + C13527 * (C13643 + C13941 * C13605)) / C13440;
    const double C4032 = (C13553 * (C13643 + C13941 * C13605) +
                          (C13479 + C13501 * C13605) * ae) /
                         C13440;
    const double C14017 = C14012 + C13504;
    const double C14070 = C13553 * C14068;
    const double C13678 = C13677 * C13439;
    const double C77 = 3 * (C13461 + C13473 * C13462) +
                       C13458 * (2 * C13479 + C13458 * C13508);
    const double C382 = C13461 + C13473 * C13462 + C13508 * C13605;
    const double C823 = C13461 + C13473 * C13462 + C13508 * C13668;
    const double C1258 = C13527 * (2 * C13479 + C13458 * C13508);
    const double C1582 = C13553 * (2 * C13479 + C13458 * C13508);
    const double C1922 = C13553 * C13527 * C13508;
    const double C5430 = C13527 * C13479 + C13929 * C13668;
    const double C2745 = 3 * (C13461 + C13473 * C13605) +
                         C13527 * (2 * C13854 + C13527 * C13868);
    const double C2992 = C13461 + C13473 * C13605 + C13868 * C13668;
    const double C4170 = C13553 * (2 * C13854 + C13527 * C13868);
    const double C3215 =
        (C13624 + be * C13553 * C13590 + C13553 * (C13593 + C13553 * C13627) +
         ae * (C13879 + C13553 * (C13553 * C13527 * C13572 + C13867) +
               C13553 * C13862 * be) +
         C13527 *
             (ae * (C13565 + C13553 * (C13553 * C13572 + C13500) +
                    C13553 * C13494 * be) +
              C13527 * (C13627 + be * C13553 * C13597 +
                        C13553 * (be * C13597 + C13553 * std::pow(C13456, 6) *
                                                    bs[6] * C13621)))) /
        std::pow(C13440, 2);
    const double C5173 = 3 * (C13461 + C13473 * C13668) +
                         C13553 * (2 * C14002 + C13553 * C14016);
    const double C13549 = C13542 + C13547;
    const double C13841 = C13493 + C13839;
    const double C13600 = C13593 + C13598;
    const double C13850 = C13492 + C13848;
    const double C5257 =
        (3 * (C13589 + C13596 * C13668) +
         C13553 * (2 * C13957 + C13553 * (C13596 + std::pow(C13456, 6) * bs[6] *
                                                       C13584 * C13668))) /
        std::pow(C13440, 2);
    const double C13575 = C13568 + C13573;
    const double C13975 = C13493 + C13973;
    const double C6281 =
        (2 * (be * C13838 + C13553 * C14055) + be * (C13838 + C14056 * C13668) +
         C13553 *
             (C14055 + be * C13553 * C14056 +
              C13553 * (be * C14056 + C13553 * C13527 * std::pow(C13456, 6) *
                                          bs[6] * C13559))) /
        std::pow(C13440, 2);
    const double C13882 = C13568 + C13880;
    const double C3563 =
        (2 * (ae * C13567 + C13527 * C13936) + ae * (C13567 + C13937 * C13605) +
         C13527 *
             (C13936 + ae * C13527 * C13937 +
              C13527 * (ae * C13937 + C13527 * C13458 * std::pow(C13456, 6) *
                                          bs[6] * C13621))) /
        std::pow(C13440, 2);
    const double C3981 =
        (be * C13592 + C13553 * C13936 +
         ae * (C13553 * C13527 * C13937 + C13929 * be) +
         C13527 *
             (ae * (C13553 * C13937 + C13507) +
              C13527 * (be * C13930 + C13553 * C13458 * std::pow(C13456, 6) *
                                          bs[6] * C13621))) /
        std::pow(C13440, 2);
    const double C5691 =
        (ae * (C13567 + C13553 * (C13553 * C13937 + C13507) +
               C13553 * C13501 * be) +
         C13527 *
             (C13936 + be * C13553 * C13930 +
              C13553 * (be * C13930 + C13553 * C13458 * std::pow(C13456, 6) *
                                          bs[6] * C13621))) /
        std::pow(C13440, 2);
    const double C6065 =
        (2 * (be * C13592 + C13553 * C13936) + be * (C13592 + C13930 * C13668) +
         C13553 *
             (C13936 + be * C13553 * C13930 +
              C13553 * (be * C13930 + C13553 * C13458 * std::pow(C13456, 6) *
                                          bs[6] * C13621))) /
        std::pow(C13440, 2);
    const double C13962 = C13593 + C13961;
    const double C13651 = C13644 + C13649;
    const double C13991 = C13492 + C13989;
    const double C6423 =
        (2 * (ae * C13847 + C13553 * C14061) + ae * (C13847 + C14062 * C13668) +
         C13553 *
             (C14061 + ae * C13553 * C14062 +
              C13553 * (ae * C14062 + C13553 * C13527 * std::pow(C13456, 6) *
                                          bs[6] * C13635))) /
        std::pow(C13440, 2);
    const double C13891 = C13644 + C13889;
    const double C3634 =
        (2 * (be * C13643 + C13527 * C13940) + be * (C13643 + C13941 * C13605) +
         C13527 *
             (C13940 + be * C13527 * C13941 +
              C13527 * (be * C13941 + C13527 * C13458 * std::pow(C13456, 6) *
                                          bs[6] * C13658))) /
        std::pow(C13440, 2);
    const double C6136 =
        (2 * (ae * C13541 + C13553 * C13940) + ae * (C13541 + C13928 * C13668) +
         C13553 *
             (C13940 + ae * C13553 * C13928 +
              C13553 * (ae * C13928 + C13553 * C13458 * std::pow(C13456, 6) *
                                          bs[6] * C13658))) /
        std::pow(C13440, 2);
    const double C13998 = C13542 + C13996;
    const double C14344 = C14343 * C14337;
    const double C14351 = C14343 / C14350;
    const double C14551 = C14349 * C14343;
    const double C14549 = C14343 / C14332;
    const double C374 = (C14341 * std::pow(C14337, 2)) / C14335 + C14342;
    const double C14353 = C14352 * C14337;
    const double C14555 = C14334 * C14352;
    const double C14553 = 2 * C14352;
    const double C14593 = C14352 / C14557;
    const double C70 = C14352 / C14586;
    const double C7611 = C14352 / C14336;
    const double C14579 = C14550 / C14332;
    const double C375 = (-2 * C14349 * C14550) / C14332;
    const double C14606 = C14577 / C14335;
    const double C2406 = (C14369 * std::pow(C14424, 2)) / C14335 + C14423;
    const double C14426 = C14425 * C14424;
    const double C14431 = C14425 / C14350;
    const double C14563 = C14425 / C14332;
    const double C14560 = C14349 * C14425;
    const double C14433 = C14432 * C14424;
    const double C14569 = C14422 * C14432;
    const double C14568 = 2 * C14432;
    const double C14599 = C14432 / C14557;
    const double C2742 = C14432 / C14586;
    const double C7608 = C14432 / C14336;
    const double C14595 = C14565 / C14332;
    const double C2407 = (-2 * C14349 * C14565) / C14332;
    const double C14611 = C14587 / C14335;
    const double C4496 = (C14387 * std::pow(C14466, 2)) / C14335 + C14465;
    const double C14468 = C14467 * C14466;
    const double C14473 = C14467 / C14350;
    const double C14564 = C14467 / C14332;
    const double C14562 = C14349 * C14467;
    const double C14475 = C14474 * C14466;
    const double C14575 = C14464 * C14474;
    const double C14574 = 2 * C14474;
    const double C14605 = C14474 / C14557;
    const double C5171 = C14474 / C14586;
    const double C10374 = C14474 / C14336;
    const double C14601 = C14571 / C14332;
    const double C4497 = (-2 * C14349 * C14571) / C14332;
    const double C14613 = C14590 / C14335;
    const double C85 = (2 * (C13458 * C13471 + C13461 * ae) +
                        C13458 * (C13471 + C13458 * C13490 + C13479 * ae) +
                        (C13461 + C13473 * C13462) * ae) /
                       C13440;
    const double C390 =
        (C13458 * C13471 + C13461 * ae + C13490 * C13605) / C13440;
    const double C392 =
        (C13527 * (C13471 + C13458 * C13490 + C13479 * ae)) / C13440;
    const double C831 =
        (C13458 * C13471 + C13461 * ae + C13490 * C13668) / C13440;
    const double C833 =
        (C13553 * (C13471 + C13458 * C13490 + C13479 * ae)) / C13440;
    const double C1926 = (C13553 * C13527 * C13490) / C13440;
    const double C2826 = (2 * (C13527 * C13585 + C13461 * ae) +
                          C13527 * (C13585 + C13527 * C13857 + C13854 * ae) +
                          (C13461 + C13473 * C13605) * ae) /
                         C13440;
    const double C3128 =
        (C13527 * C13585 + C13461 * ae + C13857 * C13668) / C13440;
    const double C3129 =
        (C13553 * (C13585 + C13527 * C13857 + C13854 * ae)) / C13440;
    const double C5328 = (2 * (C13553 * C13636 + C13461 * ae) +
                          C13553 * (C13636 + C13553 * C14005 + C14002 * ae) +
                          (C13461 + C13473 * C13668) * ae) /
                         C13440;
    const double C84 = (2 * (C13458 * C13470 + C13461 * be) +
                        C13458 * (C13470 + C13458 * C13489 + C13479 * be) +
                        (C13461 + C13473 * C13462) * be) /
                       C13440;
    const double C389 =
        (C13458 * C13470 + C13461 * be + C13489 * C13605) / C13440;
    const double C391 =
        (C13527 * (C13470 + C13458 * C13489 + C13479 * be)) / C13440;
    const double C830 =
        (C13458 * C13470 + C13461 * be + C13489 * C13668) / C13440;
    const double C832 =
        (C13553 * (C13470 + C13458 * C13489 + C13479 * be)) / C13440;
    const double C1925 = (C13553 * C13527 * C13489) / C13440;
    const double C2774 = (2 * (C13527 * C13534 + C13461 * be) +
                          C13527 * (C13534 + C13527 * C13856 + C13854 * be) +
                          (C13461 + C13473 * C13605) * be) /
                         C13440;
    const double C3040 =
        (C13527 * C13534 + C13461 * be + C13856 * C13668) / C13440;
    const double C3041 =
        (C13553 * (C13534 + C13527 * C13856 + C13854 * be)) / C13440;
    const double C5228 = (2 * (C13553 * C13560 + C13461 * be) +
                          C13553 * (C13560 + C13553 * C14004 + C14002 * be) +
                          (C13461 + C13473 * C13668) * be) /
                         C13440;
    const double C91 =
        (2 * (ae * C13470 + be * C13471 + C13458 * C13488) +
         ae * (C13470 + C13458 * C13489 + C13479 * be) +
         be * (C13471 + C13458 * C13490 + C13479 * ae) +
         C13458 * (C13488 + ae * C13489 + be * C13490 +
                   C13458 * (ae * C13483 + be * C13484 +
                             C13458 *
                                 (C13474 * C13475 +
                                  C13462 * bs[5] * std::pow(C13464, 5)) *
                                 C13439))) /
        std::pow(C13440, 2);
    const double C396 =
        ((C13461 + C13462 * C13463 * C13467) * C13439 + C13488 * C13605) /
        std::pow(C13440, 2);
    const double C397 = (ae * C13527 * C13470 + be * C13527 * C13471 +
                         C13458 * C13527 * C13488) /
                        std::pow(C13440, 2);
    const double C837 =
        ((C13461 + C13462 * C13463 * C13467) * C13439 + C13488 * C13668) /
        std::pow(C13440, 2);
    const double C838 = (ae * C13553 * C13470 + be * C13553 * C13471 +
                         C13458 * C13553 * C13488) /
                        std::pow(C13440, 2);
    const double C1929 = (C13553 * C13527 * C13488) / std::pow(C13440, 2);
    const double C217 =
        (2 * C13458 * C13610 +
         C13458 *
             (C13610 + (C13494 + C13605 * C13495 * C13496) * C13439 * C13462)) /
        std::pow(C13440, 2);
    const double C590 =
        ((C13461 + C13605 * C13463 * C13467) * C13439 +
         ae * (C13527 * C13534 + C13461 * be) +
         be * (C13527 * C13585 + C13461 * ae) +
         C13527 * (ae * C13534 + be * C13585 + C13527 * C13610)) /
        std::pow(C13440, 2);
    const double C591 = (ae * C13458 * C13534 + be * C13458 * C13585 +
                         C13527 * C13458 * C13610) /
                        std::pow(C13440, 2);
    const double C1031 =
        ((C13461 + C13605 * C13463 * C13467) * C13439 + C13610 * C13668) /
        std::pow(C13440, 2);
    const double C1032 = (C13553 * C13458 * C13610) / std::pow(C13440, 2);
    const double C2150 = (ae * C13553 * C13534 + be * C13553 * C13585 +
                          C13527 * C13553 * C13610) /
                         std::pow(C13440, 2);
    const double C331 =
        (2 * C13458 * C13673 +
         C13458 *
             (C13673 + (C13494 + C13668 * C13495 * C13496) * C13439 * C13462)) /
        std::pow(C13440, 2);
    const double C772 =
        ((C13461 + C13668 * C13463 * C13467) * C13439 + C13673 * C13605) /
        std::pow(C13440, 2);
    const double C773 = (C13527 * C13458 * C13673) / std::pow(C13440, 2);
    const double C1213 =
        ((C13461 + C13668 * C13463 * C13467) * C13439 +
         ae * (C13553 * C13560 + C13461 * be) +
         be * (C13553 * C13636 + C13461 * ae) +
         C13553 * (ae * C13560 + be * C13636 + C13553 * C13673)) /
        std::pow(C13440, 2);
    const double C1214 = (ae * C13458 * C13560 + be * C13458 * C13636 +
                          C13553 * C13458 * C13673) /
                         std::pow(C13440, 2);
    const double C2365 = (ae * C13527 * C13560 + be * C13527 * C13636 +
                          C13553 * C13527 * C13673) /
                         std::pow(C13440, 2);
    const double C13519 = C13458 * C13516;
    const double C14028 = C13527 * C13516;
    const double C3384 =
        (2 * C13527 * C13490 + C13527 * (C13490 + C13516 * C13605)) / C13440;
    const double C3722 = (C13553 * (C13490 + C13516 * C13605)) / C13440;
    const double C5886 =
        (2 * C13553 * C13490 + C13553 * (C13490 + C13516 * C13668)) / C13440;
    const double C3089 =
        (C13564 + C13571 * C13605 + be * C13553 * C13842 +
         C13553 *
             (be * C13842 + C13553 * (C13571 + std::pow(C13456, 6) * bs[6] *
                                                   C13559 * C13605))) /
        std::pow(C13440, 2);
    const double C4245 =
        (be * (2 * C13838 + C13527 * C13842) +
         C13553 * (2 * C13527 * C13571 +
                   C13527 * (C13571 +
                             std::pow(C13456, 6) * bs[6] * C13559 * C13605))) /
        std::pow(C13440, 2);
    const double C2749 = (3 * (C13471 + C13484 * C13605) +
                          C13527 * (2 * C13838 + C13527 * C13842)) /
                         C13440;
    const double C2998 = (C13471 + C13484 * C13605 + C13842 * C13668) / C13440;
    const double C4172 = (C13553 * (2 * C13838 + C13527 * C13842)) / C13440;
    const double C5177 = (3 * (C13471 + C13484 * C13668) +
                          C13553 * (2 * C13972 + C13553 * C13976)) /
                         C13440;
    const double C13518 = C13458 * C13515;
    const double C14033 = C13527 * C13515;
    const double C3383 =
        (2 * C13527 * C13489 + C13527 * (C13489 + C13515 * C13605)) / C13440;
    const double C3721 = (C13553 * (C13489 + C13515 * C13605)) / C13440;
    const double C5885 =
        (2 * C13553 * C13489 + C13553 * (C13489 + C13515 * C13668)) / C13440;
    const double C3259 =
        (C13640 + C13647 * C13605 + ae * C13553 * C13851 +
         C13553 *
             (ae * C13851 + C13553 * (C13647 + std::pow(C13456, 6) * bs[6] *
                                                   C13635 * C13605))) /
        std::pow(C13440, 2);
    const double C4281 =
        (2 * (ae * C13553 * C13483 + C13527 * C13957) + ae * C13553 * C13851 +
         C13527 * (C13957 + ae * C13553 * C13527 * C13506 +
                   C13527 * (ae * C13553 * C13506 + C13527 * C13553 *
                                                        std::pow(C13456, 6) *
                                                        bs[6] * C13584))) /
        std::pow(C13440, 2);
    const double C4387 =
        (ae * (2 * C13847 + C13527 * C13851) +
         C13553 * (2 * C13527 * C13647 +
                   C13527 * (C13647 +
                             std::pow(C13456, 6) * bs[6] * C13635 * C13605))) /
        std::pow(C13440, 2);
    const double C2748 = (3 * (C13470 + C13483 * C13605) +
                          C13527 * (2 * C13847 + C13527 * C13851)) /
                         C13440;
    const double C2997 = (C13470 + C13483 * C13605 + C13851 * C13668) / C13440;
    const double C4171 = (C13553 * (2 * C13847 + C13527 * C13851)) / C13440;
    const double C6317 =
        (ae * (2 * C13988 + C13553 * C13992) +
         C13527 * (2 * C13957 + C13553 * (C13596 + std::pow(C13456, 6) * bs[6] *
                                                       C13584 * C13668))) /
        std::pow(C13440, 2);
    const double C5176 = (3 * (C13470 + C13483 * C13668) +
                          C13553 * (2 * C13988 + C13553 * C13992)) /
                         C13440;
    const double C13517 = C13458 * C13514;
    const double C13788 = C13527 * C13514;
    const double C13798 = C13553 * C13514;
    const double C398 =
        (ae * (C13470 + C13483 * C13605) + be * (C13471 + C13484 * C13605) +
         C13458 * (C13488 + C13514 * C13605)) /
        std::pow(C13440, 2);
    const double C399 =
        (C13527 * C13488 + ae * C13527 * C13489 + be * C13527 * C13490 +
         C13458 * (ae * C13527 * C13483 + be * C13527 * C13484 +
                   C13458 * C13527 * C13514)) /
        std::pow(C13440, 2);
    const double C400 =
        (C13488 + C13514 * C13605 + ae * (C13489 + C13515 * C13605) +
         be * (C13490 + C13516 * C13605) +
         C13458 * (ae * (C13483 + C13506 * C13605) +
                   be * (C13484 + C13509 * C13605) +
                   C13458 * (C13514 + (C13495 * C13496 +
                                       C13462 * bs[6] * std::pow(C13456, 6)) *
                                          C13439 * C13605))) /
        std::pow(C13440, 2);
    const double C839 =
        (ae * (C13470 + C13483 * C13668) + be * (C13471 + C13484 * C13668) +
         C13458 * (C13488 + C13514 * C13668)) /
        std::pow(C13440, 2);
    const double C840 =
        (C13553 * C13488 + ae * C13553 * C13489 + be * C13553 * C13490 +
         C13458 * (ae * C13553 * C13483 + be * C13553 * C13484 +
                   C13458 * C13553 * C13514)) /
        std::pow(C13440, 2);
    const double C841 =
        (C13488 + C13514 * C13668 + ae * (C13489 + C13515 * C13668) +
         be * (C13490 + C13516 * C13668) +
         C13458 * (ae * (C13483 + C13506 * C13668) +
                   be * (C13484 + C13509 * C13668) +
                   C13458 * (C13514 + (C13495 * C13496 +
                                       C13462 * bs[6] * std::pow(C13456, 6)) *
                                          C13439 * C13668))) /
        std::pow(C13440, 2);
    const double C2750 =
        (2 * C13527 * C13488 + C13527 * (C13488 + C13514 * C13605)) /
        std::pow(C13440, 2);
    const double C3000 =
        (C13553 * (C13488 + C13514 * C13605)) / std::pow(C13440, 2);
    const double C3001 =
        (C13488 + C13514 * C13605 +
         (C13514 + (C13495 * C13496 + C13462 * bs[6] * std::pow(C13456, 6)) *
                       C13439 * C13605) *
             C13668) /
        std::pow(C13440, 2);
    const double C3723 = (ae * C13553 * C13851 + be * C13553 * C13842 +
                          C13458 * C13553 *
                              (C13514 + (C13495 * C13496 +
                                         C13462 * bs[6] * std::pow(C13456, 6)) *
                                            C13439 * C13605)) /
                         std::pow(C13440, 2);
    const double C5178 =
        (2 * C13553 * C13488 + C13553 * (C13488 + C13514 * C13668)) /
        std::pow(C13440, 2);
    const double C1173 =
        (C13661 + C13664 * C13462 + ae * C13553 * C13550 +
         C13553 *
             (ae * C13550 + C13553 * (C13664 + std::pow(C13456, 6) * bs[6] *
                                                   C13658 * C13462))) /
        std::pow(C13440, 2);
    const double C1834 =
        (ae * (2 * C13541 + C13458 * C13550) +
         C13553 * (2 * C13458 * C13664 +
                   C13458 * (C13664 +
                             std::pow(C13456, 6) * bs[6] * C13658 * C13462))) /
        std::pow(C13440, 2);
    const double C120 = (3 * (C13534 + C13539 * C13462) +
                         C13458 * (2 * C13541 + C13458 * C13550)) /
                        C13440;
    const double C444 =
        (C13534 + C13539 * C13462 + C13527 * (C13527 * C13550 + C13508 * be) +
         C13527 * C13508 * be) /
        C13440;
    const double C885 = (C13534 + C13539 * C13462 + C13550 * C13668) / C13440;
    const double C1296 = (C13527 * (2 * C13541 + C13458 * C13550) +
                          (2 * C13479 + C13458 * C13508) * be) /
                         C13440;
    const double C1620 = (C13553 * (2 * C13541 + C13458 * C13550)) / C13440;
    const double C1984 = (C13553 * (C13527 * C13550 + C13508 * be)) / C13440;
    const double C13871 = C13527 * C13866;
    const double C6244 =
        (2 * C13553 * C13856 + C13553 * (C13856 + C13866 * C13668)) / C13440;
    const double C13933 = C13931 + C13507;
    const double C5203 = (3 * (C13534 + C13539 * C13668) +
                          C13553 * (2 * C13995 + C13553 * C13999)) /
                         C13440;
    const double C638 =
        (C13624 + C13627 * C13462 + ae * C13527 * C13576 +
         C13527 *
             (ae * C13576 + C13527 * (C13627 + std::pow(C13456, 6) * bs[6] *
                                                   C13621 * C13462))) /
        std::pow(C13440, 2);
    const double C1439 =
        (ae * (2 * C13567 + C13458 * C13576) +
         C13527 * (2 * C13458 * C13627 +
                   C13458 * (C13627 +
                             std::pow(C13456, 6) * bs[6] * C13621 * C13462))) /
        std::pow(C13440, 2);
    const double C153 = (3 * (C13560 + C13565 * C13462) +
                         C13458 * (2 * C13567 + C13458 * C13576)) /
                        C13440;
    const double C494 = (C13560 + C13565 * C13462 + C13576 * C13605) / C13440;
    const double C935 =
        (C13560 + C13565 * C13462 + C13553 * (C13553 * C13576 + C13508 * be) +
         C13553 * C13508 * be) /
        C13440;
    const double C1332 = (C13527 * (2 * C13567 + C13458 * C13576)) / C13440;
    const double C1656 = (C13553 * (2 * C13567 + C13458 * C13576) +
                          (2 * C13479 + C13458 * C13508) * be) /
                         C13440;
    const double C2040 =
        (C13553 * C13527 * C13576 + C13527 * C13508 * be) / C13440;
    const double C2801 = (3 * (C13560 + C13565 * C13605) +
                          C13527 * (2 * C13879 + C13527 * C13883)) /
                         C13440;
    const double C3086 =
        (C13560 + C13565 * C13605 + C13553 * (C13553 * C13883 + C13868 * be) +
         C13553 * C13868 * be) /
        C13440;
    const double C4244 = (C13553 * (2 * C13879 + C13527 * C13883) +
                          (2 * C13854 + C13527 * C13868) * be) /
                         C13440;
    const double C5536 =
        (C13527 * C13567 + C13553 * (C13553 * C14036 + C13929 * be) +
         C13553 * C13929 * be) /
        C13440;
    const double C14050 = C14047 + C13507;
    const double C14019 = C13553 * C14014;
    const double C14071 = C14069 + C13867;
    const double C1079 =
        (C13624 + C13627 * C13462 + be * C13553 * C13601 +
         C13553 *
             (be * C13601 + C13553 * (C13627 + std::pow(C13456, 6) * bs[6] *
                                                   C13621 * C13462))) /
        std::pow(C13440, 2);
    const double C1763 =
        (be * (2 * C13592 + C13458 * C13601) +
         C13553 * (2 * C13458 * C13627 +
                   C13458 * (C13627 +
                             std::pow(C13456, 6) * bs[6] * C13621 * C13462))) /
        std::pow(C13440, 2);
    const double C2205 =
        (ae * (C13553 * C13576 + C13508 * be) +
         C13527 *
             (be * C13601 + C13553 * (C13627 + std::pow(C13456, 6) * bs[6] *
                                                   C13621 * C13462))) /
        std::pow(C13440, 2);
    const double C185 = (3 * (C13585 + C13590 * C13462) +
                         C13458 * (2 * C13592 + C13458 * C13601)) /
                        C13440;
    const double C544 =
        (C13585 + C13590 * C13462 + C13527 * (C13527 * C13601 + C13508 * ae) +
         C13527 * C13508 * ae) /
        C13440;
    const double C985 = (C13585 + C13590 * C13462 + C13601 * C13668) / C13440;
    const double C1368 = (C13527 * (2 * C13592 + C13458 * C13601) +
                          (2 * C13479 + C13458 * C13508) * ae) /
                         C13440;
    const double C1692 = (C13553 * (2 * C13592 + C13458 * C13601)) / C13440;
    const double C2096 = (C13553 * (C13527 * C13601 + C13508 * ae)) / C13440;
    const double C13872 = C13527 * C13869;
    const double C6316 =
        (2 * C13553 * C13857 + C13553 * (C13857 + C13869 * C13668)) / C13440;
    const double C13934 = C13932 + C13510;
    const double C5255 = (3 * (C13585 + C13590 * C13668) +
                          C13553 * (2 * C13983 + C13553 * C13985)) /
                         C13440;
    const double C13860 = C13527 * C13615;
    const double C13927 = C13458 * C13615;
    const double C13959 = C13553 * C13615;
    const double C218 =
        (3 * (C13610 + C13615 * C13462) +
         C13458 * (2 * C13458 * C13615 +
                   C13458 * (C13615 + (C13495 * C13496 +
                                       C13605 * bs[6] * std::pow(C13456, 6)) *
                                          C13439 * C13462))) /
        std::pow(C13440, 2);
    const double C592 =
        (C13458 * C13610 + ae * (C13527 * C13541 + C13479 * be) +
         be * (C13527 * C13592 + C13479 * ae) +
         C13527 * (ae * C13541 + be * C13592 + C13527 * C13458 * C13615)) /
        std::pow(C13440, 2);
    const double C593 =
        (ae * (C13534 + C13539 * C13462) + be * (C13585 + C13590 * C13462) +
         C13527 * (C13610 + C13615 * C13462)) /
        std::pow(C13440, 2);
    const double C594 =
        (C13610 + C13615 * C13462 + ae * (C13527 * C13550 + C13508 * be) +
         be * (C13527 * C13601 + C13508 * ae) +
         C13527 * (ae * C13550 + be * C13601 +
                   C13527 * (C13615 + (C13495 * C13496 +
                                       C13605 * bs[6] * std::pow(C13456, 6)) *
                                          C13439 * C13462))) /
        std::pow(C13440, 2);
    const double C1033 =
        (C13458 * C13610 + C13458 * C13615 * C13668) / std::pow(C13440, 2);
    const double C1034 =
        (C13553 * (C13610 + C13615 * C13462)) / std::pow(C13440, 2);
    const double C1035 =
        (C13610 + C13615 * C13462 +
         (C13615 + (C13495 * C13496 + C13605 * bs[6] * std::pow(C13456, 6)) *
                       C13439 * C13462) *
             C13668) /
        std::pow(C13440, 2);
    const double C1404 =
        (ae * (2 * C13541 + C13458 * C13550) +
         be * (2 * C13592 + C13458 * C13601) +
         C13527 * (2 * C13458 * C13615 +
                   C13458 * (C13615 + (C13495 * C13496 +
                                       C13605 * bs[6] * std::pow(C13456, 6)) *
                                          C13439 * C13462))) /
        std::pow(C13440, 2);
    const double C1728 =
        (C13553 * (2 * C13458 * C13615 +
                   C13458 * (C13615 + (C13495 * C13496 +
                                       C13605 * bs[6] * std::pow(C13456, 6)) *
                                          C13439 * C13462))) /
        std::pow(C13440, 2);
    const double C2151 = (ae * C13553 * C13541 + be * C13553 * C13592 +
                          C13527 * C13553 * C13458 * C13615) /
                         std::pow(C13440, 2);
    const double C2152 = (ae * C13553 * C13550 + be * C13553 * C13601 +
                          C13527 * C13553 *
                              (C13615 + (C13495 * C13496 +
                                         C13605 * bs[6] * std::pow(C13456, 6)) *
                                            C13439 * C13462)) /
                         std::pow(C13440, 2);
    const double C2852 =
        (2 * (ae * C13534 + be * C13585 + C13527 * C13610) +
         ae * (C13534 + C13527 * C13856 + C13854 * be) +
         be * (C13585 + C13527 * C13857 + C13854 * ae) +
         C13527 * (C13610 + ae * C13856 + be * C13857 +
                   C13527 * (C13542 + C13593 + C13527 * C13615))) /
        std::pow(C13440, 2);
    const double C3172 =
        (ae * (C13534 + C13539 * C13668) + be * (C13585 + C13590 * C13668) +
         C13527 * (C13610 + C13615 * C13668)) /
        std::pow(C13440, 2);
    const double C3173 =
        (C13553 * C13610 + ae * C13553 * C13856 + be * C13553 * C13857 +
         C13527 * (ae * C13553 * C13539 + be * C13553 * C13590 +
                   C13527 * C13553 * C13615)) /
        std::pow(C13440, 2);
    const double C3174 =
        (C13610 + C13615 * C13668 + ae * (C13856 + C13866 * C13668) +
         be * (C13857 + C13869 * C13668) +
         C13527 * (ae * (C13539 + C13546 * C13668) +
                   be * (C13590 + C13597 * C13668) +
                   C13527 * (C13615 + (C13495 * C13496 +
                                       C13605 * bs[6] * std::pow(C13456, 6)) *
                                          C13439 * C13668))) /
        std::pow(C13440, 2);
    const double C5280 =
        (2 * C13553 * C13610 + C13553 * (C13610 + C13615 * C13668)) /
        std::pow(C13440, 2);
    const double C732 =
        (C13661 + C13664 * C13462 + be * C13527 * C13652 +
         C13527 *
             (be * C13652 + C13527 * (C13664 + std::pow(C13456, 6) * bs[6] *
                                                   C13658 * C13462))) /
        std::pow(C13440, 2);
    const double C1510 =
        (be * (2 * C13643 + C13458 * C13652) +
         C13527 * (2 * C13458 * C13664 +
                   C13458 * (C13664 +
                             std::pow(C13456, 6) * bs[6] * C13658 * C13462))) /
        std::pow(C13440, 2);
    const double C2314 =
        (ae * (C13527 * C13550 + C13508 * be) +
         C13553 *
             (be * C13652 + C13527 * (C13664 + std::pow(C13456, 6) * bs[6] *
                                                   C13658 * C13462))) /
        std::pow(C13440, 2);
    const double C272 = (3 * (C13636 + C13641 * C13462) +
                         C13458 * (2 * C13643 + C13458 * C13652)) /
                        C13440;
    const double C682 = (C13636 + C13641 * C13462 + C13652 * C13605) / C13440;
    const double C1123 =
        (C13636 + C13641 * C13462 + C13553 * (C13553 * C13652 + C13508 * ae) +
         C13553 * C13508 * ae) /
        C13440;
    const double C1474 = (C13527 * (2 * C13643 + C13458 * C13652)) / C13440;
    const double C1798 = (C13553 * (2 * C13643 + C13458 * C13652) +
                          (2 * C13479 + C13458 * C13508) * ae) /
                         C13440;
    const double C2258 =
        (C13553 * C13527 * C13652 + C13527 * C13508 * ae) / C13440;
    const double C2901 = (3 * (C13636 + C13641 * C13605) +
                          C13527 * (2 * C13888 + C13527 * C13892)) /
                         C13440;
    const double C3256 =
        (C13636 + C13641 * C13605 + C13553 * (C13553 * C13892 + C13868 * ae) +
         C13553 * C13868 * ae) /
        C13440;
    const double C4386 = (C13553 * (2 * C13888 + C13527 * C13892) +
                          (2 * C13854 + C13527 * C13868) * ae) /
                         C13440;
    const double C5742 =
        (C13527 * C13643 + C13553 * (C13553 * C14037 + C13929 * ae) +
         C13553 * C13929 * ae) /
        C13440;
    const double C14051 = C14049 + C13510;
    const double C14020 = C13553 * C14017;
    const double C14072 = C14070 + C13870;
    const double C13943 = C13458 * C13678;
    const double C14008 = C13553 * C13678;
    const double C14065 = C13527 * C13678;
    const double C332 =
        (3 * (C13673 + C13678 * C13462) +
         C13458 * (2 * C13458 * C13678 +
                   C13458 * (C13678 + (C13495 * C13496 +
                                       C13668 * bs[6] * std::pow(C13456, 6)) *
                                          C13439 * C13462))) /
        std::pow(C13440, 2);
    const double C774 =
        (C13458 * C13673 + C13458 * C13678 * C13605) / std::pow(C13440, 2);
    const double C775 =
        (C13527 * (C13673 + C13678 * C13462)) / std::pow(C13440, 2);
    const double C776 =
        (C13673 + C13678 * C13462 +
         (C13678 + (C13495 * C13496 + C13668 * bs[6] * std::pow(C13456, 6)) *
                       C13439 * C13462) *
             C13605) /
        std::pow(C13440, 2);
    const double C1215 =
        (C13458 * C13673 + ae * (C13553 * C13567 + C13479 * be) +
         be * (C13553 * C13643 + C13479 * ae) +
         C13553 * (ae * C13567 + be * C13643 + C13553 * C13458 * C13678)) /
        std::pow(C13440, 2);
    const double C1216 =
        (ae * (C13560 + C13565 * C13462) + be * (C13636 + C13641 * C13462) +
         C13553 * (C13673 + C13678 * C13462)) /
        std::pow(C13440, 2);
    const double C1217 =
        (C13673 + C13678 * C13462 + ae * (C13553 * C13576 + C13508 * be) +
         be * (C13553 * C13652 + C13508 * ae) +
         C13553 * (ae * C13576 + be * C13652 +
                   C13553 * (C13678 + (C13495 * C13496 +
                                       C13668 * bs[6] * std::pow(C13456, 6)) *
                                          C13439 * C13462))) /
        std::pow(C13440, 2);
    const double C1545 =
        (C13527 * (2 * C13458 * C13678 +
                   C13458 * (C13678 + (C13495 * C13496 +
                                       C13668 * bs[6] * std::pow(C13456, 6)) *
                                          C13439 * C13462))) /
        std::pow(C13440, 2);
    const double C1869 =
        (ae * (2 * C13567 + C13458 * C13576) +
         be * (2 * C13643 + C13458 * C13652) +
         C13553 * (2 * C13458 * C13678 +
                   C13458 * (C13678 + (C13495 * C13496 +
                                       C13668 * bs[6] * std::pow(C13456, 6)) *
                                          C13439 * C13462))) /
        std::pow(C13440, 2);
    const double C2366 = (ae * C13527 * C13567 + be * C13527 * C13643 +
                          C13553 * C13527 * C13458 * C13678) /
                         std::pow(C13440, 2);
    const double C2367 = (ae * C13527 * C13576 + be * C13527 * C13652 +
                          C13553 * C13527 *
                              (C13678 + (C13495 * C13496 +
                                         C13668 * bs[6] * std::pow(C13456, 6)) *
                                            C13439 * C13462)) /
                         std::pow(C13440, 2);
    const double C2950 =
        (2 * C13527 * C13673 + C13527 * (C13673 + C13678 * C13605)) /
        std::pow(C13440, 2);
    const double C2951 =
        (3 * (C13673 + C13678 * C13605) +
         C13527 * (2 * C13527 * C13678 +
                   C13527 * (C13678 + (C13495 * C13496 +
                                       C13668 * bs[6] * std::pow(C13456, 6)) *
                                          C13439 * C13605))) /
        std::pow(C13440, 2);
    const double C3339 =
        (C13527 * C13673 + ae * (C13553 * C13879 + C13854 * be) +
         be * (C13553 * C13888 + C13854 * ae) +
         C13553 * (ae * C13879 + be * C13888 + C13553 * C13527 * C13678)) /
        std::pow(C13440, 2);
    const double C3340 =
        (ae * (C13560 + C13565 * C13605) + be * (C13636 + C13641 * C13605) +
         C13553 * (C13673 + C13678 * C13605)) /
        std::pow(C13440, 2);
    const double C3341 =
        (C13673 + C13678 * C13605 + ae * (C13553 * C13883 + C13868 * be) +
         be * (C13553 * C13892 + C13868 * ae) +
         C13553 * (ae * C13883 + be * C13892 +
                   C13553 * (C13678 + (C13495 * C13496 +
                                       C13668 * bs[6] * std::pow(C13456, 6)) *
                                          C13439 * C13605))) /
        std::pow(C13440, 2);
    const double C4457 =
        (ae * (2 * C13879 + C13527 * C13883) +
         be * (2 * C13888 + C13527 * C13892) +
         C13553 * (2 * C13527 * C13678 +
                   C13527 * (C13678 + (C13495 * C13496 +
                                       C13668 * bs[6] * std::pow(C13456, 6)) *
                                          C13439 * C13605))) /
        std::pow(C13440, 2);
    const double C5378 =
        (2 * (ae * C13560 + be * C13636 + C13553 * C13673) +
         ae * (C13560 + C13553 * C14004 + C14002 * be) +
         be * (C13636 + C13553 * C14005 + C14002 * ae) +
         C13553 * (C13673 + ae * C14004 + be * C14005 +
                   C13553 * (C13568 + C13644 + C13553 * C13678))) /
        std::pow(C13440, 2);
    const double C125 =
        (3 * (C13538 + ae * C13541 + C13458 * C13549) +
         ae * (2 * C13541 + C13458 * C13550) +
         C13458 *
             (2 * C13549 + ae * C13550 +
              C13458 * (C13545 + ae * C13458 * C13546 +
                        C13458 * (ae * C13546 + C13458 * std::pow(C13456, 6) *
                                                    bs[6] * C13533)))) /
        std::pow(C13440, 2);
    const double C448 = (ae * C13534 + C13458 * C13538 + be * C13527 * C13490 +
                         C13527 * (be * C13490 + C13527 * C13549)) /
                        std::pow(C13440, 2);
    const double C449 = (be * (C13471 + C13458 * C13490 + C13479 * ae) +
                         C13527 * (C13538 + ae * C13541 + C13458 * C13549)) /
                        std::pow(C13440, 2);
    const double C889 =
        (ae * C13534 + C13458 * C13538 + C13549 * C13668) / std::pow(C13440, 2);
    const double C890 = (C13553 * (C13538 + ae * C13541 + C13458 * C13549)) /
                        std::pow(C13440, 2);
    const double C891 = (C13538 + ae * C13541 + C13458 * C13549 +
                         (C13545 + ae * C13458 * C13546 +
                          C13458 * (ae * C13546 + C13458 * std::pow(C13456, 6) *
                                                      bs[6] * C13533)) *
                             C13668) /
                        std::pow(C13440, 2);
    const double C1621 =
        (C13553 *
         (2 * C13549 + ae * C13550 +
          C13458 * (C13545 + ae * C13458 * C13546 +
                    C13458 * (ae * C13546 + C13458 * std::pow(C13456, 6) *
                                                bs[6] * C13533)))) /
        std::pow(C13440, 2);
    const double C1986 =
        (C13553 * (be * C13490 + C13527 * C13549)) / std::pow(C13440, 2);
    const double C3421 =
        (2 * (be * C13490 + C13527 * C13549) + be * (C13490 + C13516 * C13605) +
         C13527 *
             (C13549 + be * C13527 * C13516 +
              C13527 * (be * C13516 +
                        C13527 * (ae * C13546 + C13458 * std::pow(C13456, 6) *
                                                    bs[6] * C13533)))) /
        std::pow(C13440, 2);
    const double C3775 =
        (C13553 *
         (C13549 + be * C13527 * C13516 +
          C13527 * (be * C13516 +
                    C13527 * (ae * C13546 + C13458 * std::pow(C13456, 6) *
                                                bs[6] * C13533)))) /
        std::pow(C13440, 2);
    const double C5485 =
        (be * C13490 + C13527 * C13549 +
         (be * C13516 + C13527 * (ae * C13546 + C13458 * std::pow(C13456, 6) *
                                                    bs[6] * C13533)) *
             C13668) /
        std::pow(C13440, 2);
    const double C5923 =
        (2 * C13553 * C13549 +
         C13553 * (C13549 + (ae * C13546 +
                             C13458 * std::pow(C13456, 6) * bs[6] * C13533) *
                                C13668)) /
        std::pow(C13440, 2);
    const double C2777 =
        (3 * (C13538 + be * C13838 + C13527 * C13841) +
         be * (2 * C13838 + C13527 * C13842) +
         C13527 *
             (2 * C13841 + be * C13842 +
              C13527 * (C13545 + be * C13527 * C13509 +
                        C13527 * (be * C13509 + C13527 * std::pow(C13456, 6) *
                                                    bs[6] * C13533)))) /
        std::pow(C13440, 2);
    const double C3043 =
        (be * C13471 + C13527 * C13538 + C13841 * C13668) / std::pow(C13440, 2);
    const double C3044 = (C13553 * (C13538 + be * C13838 + C13527 * C13841)) /
                         std::pow(C13440, 2);
    const double C3045 =
        (C13538 + be * C13838 + C13527 * C13841 +
         (C13545 + be * C13527 * C13509 +
          C13527 *
              (be * C13509 + C13527 * std::pow(C13456, 6) * bs[6] * C13533)) *
             C13668) /
        std::pow(C13440, 2);
    const double C4209 =
        (C13553 *
         (2 * C13841 + be * C13842 +
          C13527 * (C13545 + be * C13527 * C13509 +
                    C13527 * (be * C13509 + C13527 * std::pow(C13456, 6) *
                                                bs[6] * C13533)))) /
        std::pow(C13440, 2);
    const double C6245 =
        (2 * C13553 * C13841 +
         C13553 * (C13841 + (be * C13509 +
                             C13527 * std::pow(C13456, 6) * bs[6] * C13533) *
                                C13668)) /
        std::pow(C13440, 2);
    const double C190 =
        (3 * (C13589 + be * C13592 + C13458 * C13600) +
         be * (2 * C13592 + C13458 * C13601) +
         C13458 *
             (2 * C13600 + be * C13601 +
              C13458 * (C13596 + be * C13458 * C13597 +
                        C13458 * (be * C13597 + C13458 * std::pow(C13456, 6) *
                                                    bs[6] * C13584)))) /
        std::pow(C13440, 2);
    const double C548 = (be * C13585 + C13458 * C13589 + ae * C13527 * C13489 +
                         C13527 * (ae * C13489 + C13527 * C13600)) /
                        std::pow(C13440, 2);
    const double C549 = (ae * (C13470 + C13458 * C13489 + C13479 * be) +
                         C13527 * (C13589 + be * C13592 + C13458 * C13600)) /
                        std::pow(C13440, 2);
    const double C989 =
        (be * C13585 + C13458 * C13589 + C13600 * C13668) / std::pow(C13440, 2);
    const double C990 = (C13553 * (C13589 + be * C13592 + C13458 * C13600)) /
                        std::pow(C13440, 2);
    const double C991 = (C13589 + be * C13592 + C13458 * C13600 +
                         (C13596 + be * C13458 * C13597 +
                          C13458 * (be * C13597 + C13458 * std::pow(C13456, 6) *
                                                      bs[6] * C13584)) *
                             C13668) /
                        std::pow(C13440, 2);
    const double C1693 =
        (C13553 *
         (2 * C13600 + be * C13601 +
          C13458 * (C13596 + be * C13458 * C13597 +
                    C13458 * (be * C13597 + C13458 * std::pow(C13456, 6) *
                                                bs[6] * C13584)))) /
        std::pow(C13440, 2);
    const double C2098 =
        (ae * C13553 * C13489 + C13527 * C13553 * C13600) / std::pow(C13440, 2);
    const double C3493 =
        (2 * (ae * C13489 + C13527 * C13600) + ae * (C13489 + C13515 * C13605) +
         C13527 *
             (C13600 + ae * C13527 * C13515 +
              C13527 * (ae * C13515 +
                        C13527 * (be * C13597 + C13458 * std::pow(C13456, 6) *
                                                    bs[6] * C13584)))) /
        std::pow(C13440, 2);
    const double C3879 =
        (C13553 * C13600 + ae * C13553 * C13527 * C13515 +
         C13527 * (ae * C13553 * C13515 +
                   C13527 * C13553 *
                       (be * C13597 +
                        C13458 * std::pow(C13456, 6) * bs[6] * C13584))) /
        std::pow(C13440, 2);
    const double C5589 =
        (ae * (C13489 + C13515 * C13668) +
         C13527 * (C13600 + (be * C13597 +
                             C13458 * std::pow(C13456, 6) * bs[6] * C13584) *
                                C13668)) /
        std::pow(C13440, 2);
    const double C5995 =
        (2 * C13553 * C13600 +
         C13553 * (C13600 + (be * C13597 +
                             C13458 * std::pow(C13456, 6) * bs[6] * C13584) *
                                C13668)) /
        std::pow(C13440, 2);
    const double C2829 =
        (3 * (C13589 + ae * C13847 + C13527 * C13850) +
         ae * (2 * C13847 + C13527 * C13851) +
         C13527 *
             (2 * C13850 + ae * C13851 +
              C13527 * (C13596 + ae * C13527 * C13506 +
                        C13527 * (ae * C13506 + C13527 * std::pow(C13456, 6) *
                                                    bs[6] * C13584)))) /
        std::pow(C13440, 2);
    const double C158 =
        (3 * (C13564 + ae * C13567 + C13458 * C13575) +
         ae * (2 * C13567 + C13458 * C13576) +
         C13458 *
             (2 * C13575 + ae * C13576 +
              C13458 * (C13571 + ae * C13458 * C13572 +
                        C13458 * (ae * C13572 + C13458 * std::pow(C13456, 6) *
                                                    bs[6] * C13559)))) /
        std::pow(C13440, 2);
    const double C498 =
        (ae * C13560 + C13458 * C13564 + C13575 * C13605) / std::pow(C13440, 2);
    const double C499 = (C13527 * (C13564 + ae * C13567 + C13458 * C13575)) /
                        std::pow(C13440, 2);
    const double C500 = (C13564 + ae * C13567 + C13458 * C13575 +
                         (C13571 + ae * C13458 * C13572 +
                          C13458 * (ae * C13572 + C13458 * std::pow(C13456, 6) *
                                                      bs[6] * C13559)) *
                             C13605) /
                        std::pow(C13440, 2);
    const double C939 = (ae * C13560 + C13458 * C13564 + be * C13553 * C13490 +
                         C13553 * (be * C13490 + C13553 * C13575)) /
                        std::pow(C13440, 2);
    const double C940 = (be * (C13471 + C13458 * C13490 + C13479 * ae) +
                         C13553 * (C13564 + ae * C13567 + C13458 * C13575)) /
                        std::pow(C13440, 2);
    const double C1333 =
        (C13527 *
         (2 * C13575 + ae * C13576 +
          C13458 * (C13571 + ae * C13458 * C13572 +
                    C13458 * (ae * C13572 + C13458 * std::pow(C13456, 6) *
                                                bs[6] * C13559)))) /
        std::pow(C13440, 2);
    const double C2042 =
        (be * C13527 * C13490 + C13553 * C13527 * C13575) / std::pow(C13440, 2);
    const double C3457 =
        (2 * C13527 * C13575 +
         C13527 * (C13575 + (ae * C13572 +
                             C13458 * std::pow(C13456, 6) * bs[6] * C13559) *
                                C13605)) /
        std::pow(C13440, 2);
    const double C3827 =
        (be * (C13490 + C13516 * C13605) +
         C13553 * (C13575 + (ae * C13572 +
                             C13458 * std::pow(C13456, 6) * bs[6] * C13559) *
                                C13605)) /
        std::pow(C13440, 2);
    const double C5959 =
        (2 * (be * C13490 + C13553 * C13575) + be * (C13490 + C13516 * C13668) +
         C13553 *
             (C13575 + be * C13553 * C13516 +
              C13553 * (be * C13516 +
                        C13553 * (ae * C13572 + C13458 * std::pow(C13456, 6) *
                                                    bs[6] * C13559)))) /
        std::pow(C13440, 2);
    const double C5231 =
        (3 * (C13564 + be * C13972 + C13553 * C13975) +
         be * (2 * C13972 + C13553 * C13976) +
         C13553 *
             (2 * C13975 + be * C13976 +
              C13553 * (C13571 + be * C13553 * C13509 +
                        C13553 * (be * C13509 + C13553 * std::pow(C13456, 6) *
                                                    bs[6] * C13559)))) /
        std::pow(C13440, 2);
    const double C2877 =
        (3 * (C13624 + ae * C13879 + C13527 * C13882) +
         ae * (2 * C13879 + C13527 * C13883) +
         C13527 *
             (2 * C13882 + ae * C13883 +
              C13527 * (C13627 + ae * C13527 * C13572 +
                        C13527 * (ae * C13572 + C13527 * std::pow(C13456, 6) *
                                                    bs[6] * C13621)))) /
        std::pow(C13440, 2);
    const double C4351 =
        (2 * (ae * (C13553 * C13565 + C13478) + C13527 * C13962) +
         ae * (C13553 * C13883 + C13868 * be) +
         C13527 *
             (C13962 + ae * (C13553 * C13527 * C13572 + C13867) +
              C13527 * (ae * (C13553 * C13572 + C13500) +
                        C13527 * (be * C13597 + C13553 * std::pow(C13456, 6) *
                                                    bs[6] * C13621)))) /
        std::pow(C13440, 2);
    const double C5304 =
        (2 * (be * C13585 + C13553 * C13624) + be * (C13585 + C13590 * C13668) +
         C13553 * (C13624 + be * C13553 * C13590 + C13553 * C13962)) /
        std::pow(C13440, 2);
    const double C5305 =
        (3 * (C13624 + be * C13983 + C13553 * C13962) +
         be * (2 * C13983 + C13553 * C13985) +
         C13553 *
             (2 * C13962 + be * C13985 +
              C13553 * (C13627 + be * C13553 * C13597 +
                        C13553 * (be * C13597 + C13553 * std::pow(C13456, 6) *
                                                    bs[6] * C13621)))) /
        std::pow(C13440, 2);
    const double C277 =
        (3 * (C13640 + be * C13643 + C13458 * C13651) +
         be * (2 * C13643 + C13458 * C13652) +
         C13458 *
             (2 * C13651 + be * C13652 +
              C13458 * (C13647 + be * C13458 * C13648 +
                        C13458 * (be * C13648 + C13458 * std::pow(C13456, 6) *
                                                    bs[6] * C13635)))) /
        std::pow(C13440, 2);
    const double C686 =
        (be * C13636 + C13458 * C13640 + C13651 * C13605) / std::pow(C13440, 2);
    const double C687 = (C13527 * (C13640 + be * C13643 + C13458 * C13651)) /
                        std::pow(C13440, 2);
    const double C688 = (C13640 + be * C13643 + C13458 * C13651 +
                         (C13647 + be * C13458 * C13648 +
                          C13458 * (be * C13648 + C13458 * std::pow(C13456, 6) *
                                                      bs[6] * C13635)) *
                             C13605) /
                        std::pow(C13440, 2);
    const double C1127 = (be * C13636 + C13458 * C13640 + ae * C13553 * C13489 +
                          C13553 * (ae * C13489 + C13553 * C13651)) /
                         std::pow(C13440, 2);
    const double C1128 = (ae * (C13470 + C13458 * C13489 + C13479 * be) +
                          C13553 * (C13640 + be * C13643 + C13458 * C13651)) /
                         std::pow(C13440, 2);
    const double C1475 =
        (C13527 *
         (2 * C13651 + be * C13652 +
          C13458 * (C13647 + be * C13458 * C13648 +
                    C13458 * (be * C13648 + C13458 * std::pow(C13456, 6) *
                                                bs[6] * C13635)))) /
        std::pow(C13440, 2);
    const double C2260 =
        (ae * C13527 * C13489 + C13553 * C13527 * C13651) / std::pow(C13440, 2);
    const double C3599 =
        (2 * C13527 * C13651 +
         C13527 * (C13651 + (be * C13648 +
                             C13458 * std::pow(C13456, 6) * bs[6] * C13635) *
                                C13605)) /
        std::pow(C13440, 2);
    const double C4033 =
        (ae * (C13489 + C13515 * C13605) +
         C13553 * (C13651 + (be * C13648 +
                             C13458 * std::pow(C13456, 6) * bs[6] * C13635) *
                                C13605)) /
        std::pow(C13440, 2);
    const double C6101 =
        (2 * (ae * C13489 + C13553 * C13651) + ae * (C13489 + C13515 * C13668) +
         C13553 *
             (C13651 + ae * C13553 * C13515 +
              C13553 * (ae * C13515 +
                        C13553 * (be * C13648 + C13458 * std::pow(C13456, 6) *
                                                    bs[6] * C13635)))) /
        std::pow(C13440, 2);
    const double C5331 =
        (3 * (C13640 + ae * C13988 + C13553 * C13991) +
         ae * (2 * C13988 + C13553 * C13992) +
         C13553 *
             (2 * C13991 + ae * C13992 +
              C13553 * (C13647 + ae * C13553 * C13506 +
                        C13553 * (ae * C13506 + C13553 * std::pow(C13456, 6) *
                                                    bs[6] * C13635)))) /
        std::pow(C13440, 2);
    const double C2927 =
        (3 * (C13661 + be * C13888 + C13527 * C13891) +
         be * (2 * C13888 + C13527 * C13892) +
         C13527 *
             (2 * C13891 + be * C13892 +
              C13527 * (C13664 + be * C13527 * C13648 +
                        C13527 * (be * C13648 + C13527 * std::pow(C13456, 6) *
                                                    bs[6] * C13658)))) /
        std::pow(C13440, 2);
    const double C3298 = (be * C13636 + C13527 * C13661 + ae * C13553 * C13856 +
                          C13553 * (ae * C13856 + C13553 * C13891)) /
                         std::pow(C13440, 2);
    const double C3299 = (ae * (C13534 + C13527 * C13856 + C13854 * be) +
                          C13553 * (C13661 + be * C13888 + C13527 * C13891)) /
                         std::pow(C13440, 2);
    const double C6458 =
        (2 * (ae * C13856 + C13553 * C13891) + ae * (C13856 + C13866 * C13668) +
         C13553 *
             (C13891 + ae * C13553 * C13866 +
              C13553 * (ae * C13866 +
                        C13553 * (be * C13648 + C13527 * std::pow(C13456, 6) *
                                                    bs[6] * C13658)))) /
        std::pow(C13440, 2);
    const double C5355 =
        (3 * (C13661 + ae * C13995 + C13553 * C13998) +
         ae * (2 * C13995 + C13553 * C13999) +
         C13553 *
             (2 * C13998 + ae * C13999 +
              C13553 * (C13664 + ae * C13553 * C13546 +
                        C13553 * (ae * C13546 + C13553 * std::pow(C13456, 6) *
                                                    bs[6] * C13658)))) /
        std::pow(C13440, 2);
    const double C14345 = C14344 / C14335;
    const double C14580 = 2 * C14551;
    const double C14354 = C14353 / C14332;
    const double C14584 = C14555 / C14350;
    const double C14607 = C14549 - C14579;
    const double C6844 = -C14579;
    const double C14621 = C14606 + C14342;
    const double C14427 = C14426 / C14335;
    const double C14588 = 2 * C14560;
    const double C14434 = C14433 / C14332;
    const double C14598 = C14569 / C14350;
    const double C14615 = C14563 - C14595;
    const double C6528 = -C14595;
    const double C14624 = C14611 + C14423;
    const double C14469 = C14468 / C14335;
    const double C14591 = 2 * C14562;
    const double C14476 = C14475 / C14332;
    const double C14604 = C14575 / C14350;
    const double C14618 = C14564 - C14601;
    const double C8850 = -C14601;
    const double C14625 = C14613 + C14465;
    const double C13522 = C13484 + C13519;
    const double C5537 =
        (C13527 * C13575 + be * C13553 * C14028 +
         C13553 *
             (be * C14028 + C13553 * C13527 *
                                (ae * C13572 + C13458 * std::pow(C13456, 6) *
                                                   bs[6] * C13559))) /
        std::pow(C13440, 2);
    const double C5432 = (C13527 * C13490 + C14028 * C13668) / C13440;
    const double C13521 = C13483 + C13518;
    const double C5743 =
        (C13527 * C13651 + ae * C13553 * C14033 +
         C13553 *
             (ae * C14033 + C13553 * C13527 *
                                (be * C13648 + C13458 * std::pow(C13456, 6) *
                                                   bs[6] * C13635))) /
        std::pow(C13440, 2);
    const double C5431 = (C13527 * C13489 + C14033 * C13668) / C13440;
    const double C13520 = C13497 + C13517;
    const double C1930 =
        (ae * C13553 * C13527 * C13483 + be * C13553 * C13527 * C13484 +
         C13458 * C13553 * C13788) /
        std::pow(C13440, 2);
    const double C1931 =
        (C13553 * C13788 + ae * C13553 * C13527 * C13515 +
         be * C13553 * C13527 * C13516 +
         C13458 *
             (ae * C13553 * C13527 * C13506 + be * C13553 * C13527 * C13509 +
              C13458 * C13553 * C13527 *
                  (C13495 * C13496 + C13462 * bs[6] * std::pow(C13456, 6)) *
                  C13439)) /
        std::pow(C13440, 2);
    const double C2751 =
        (3 * (C13488 + C13514 * C13605) +
         C13527 * (2 * C13788 +
                   C13527 * (C13514 + (C13495 * C13496 +
                                       C13462 * bs[6] * std::pow(C13456, 6)) *
                                          C13439 * C13605))) /
        std::pow(C13440, 2);
    const double C2999 =
        (C13527 * C13488 + C13788 * C13668) / std::pow(C13440, 2);
    const double C3385 =
        (ae * (2 * C13847 + C13527 * C13851) +
         be * (2 * C13838 + C13527 * C13842) +
         C13458 * (2 * C13788 +
                   C13527 * (C13514 + (C13495 * C13496 +
                                       C13462 * bs[6] * std::pow(C13456, 6)) *
                                          C13439 * C13605))) /
        std::pow(C13440, 2);
    const double C4173 =
        (C13553 * (2 * C13788 +
                   C13527 * (C13514 + (C13495 * C13496 +
                                       C13462 * bs[6] * std::pow(C13456, 6)) *
                                          C13439 * C13605))) /
        std::pow(C13440, 2);
    const double C5433 =
        (ae * (C13847 + C13527 * C13506 * C13668) +
         be * (C13838 + C13527 * C13509 * C13668) +
         C13458 * (C13788 + C13527 *
                                (C13495 * C13496 +
                                 C13462 * bs[6] * std::pow(C13456, 6)) *
                                C13439 * C13668)) /
        std::pow(C13440, 2);
    const double C6209 =
        (2 * C13553 * C13788 +
         C13553 * (C13788 + C13527 *
                                (C13495 * C13496 +
                                 C13462 * bs[6] * std::pow(C13456, 6)) *
                                C13439 * C13668)) /
        std::pow(C13440, 2);
    const double C5179 =
        (3 * (C13488 + C13514 * C13668) +
         C13553 * (2 * C13798 +
                   C13553 * (C13514 + (C13495 * C13496 +
                                       C13462 * bs[6] * std::pow(C13456, 6)) *
                                          C13439 * C13668))) /
        std::pow(C13440, 2);
    const double C5887 =
        (ae * (2 * C13988 + C13553 * C13992) +
         be * (2 * C13972 + C13553 * C13976) +
         C13458 * (2 * C13798 +
                   C13553 * (C13514 + (C13495 * C13496 +
                                       C13462 * bs[6] * std::pow(C13456, 6)) *
                                          C13439 * C13668))) /
        std::pow(C13440, 2);
    const double C13873 = C13539 + C13871;
    const double C4084 =
        (ae * (C13541 + C13527 * C13933 + C13929 * be) +
         C13553 *
             (C13940 + be * C13527 * C13941 +
              C13527 * (be * C13941 + C13527 * C13458 * std::pow(C13456, 6) *
                                          bs[6] * C13658))) /
        std::pow(C13440, 2);
    const double C5794 =
        (be * C13643 + C13527 * C13940 + ae * C13553 * C13933 +
         C13553 *
             (ae * C13933 +
              C13553 * (be * C13941 + C13527 * C13458 * std::pow(C13456, 6) *
                                          bs[6] * C13658))) /
        std::pow(C13440, 2);
    const double C3420 = (2 * (C13527 * C13541 + C13479 * be) +
                          C13527 * (C13541 + C13527 * C13933 + C13929 * be) +
                          (C13479 + C13501 * C13605) * be) /
                         C13440;
    const double C3774 =
        (C13553 * (C13541 + C13527 * C13933 + C13929 * be)) / C13440;
    const double C5484 =
        (C13527 * C13541 + C13479 * be + C13933 * C13668) / C13440;
    const double C5958 = (2 * (C13553 * C13567 + C13479 * be) +
                          C13553 * (C13567 + C13553 * C14050 + C14048 * be) +
                          (C13479 + C13501 * C13668) * be) /
                         C13440;
    const double C14021 = C13565 + C14019;
    const double C6280 = (2 * (C13553 * C13879 + C13854 * be) +
                          C13553 * (C13879 + C13553 * C14071 + C14067 * be) +
                          (C13854 + C13862 * C13668) * be) /
                         C13440;
    const double C13874 = C13590 + C13872;
    const double C3492 = (2 * (C13527 * C13592 + C13479 * ae) +
                          C13527 * (C13592 + C13527 * C13934 + C13929 * ae) +
                          (C13479 + C13501 * C13605) * ae) /
                         C13440;
    const double C3878 =
        (C13553 * (C13592 + C13527 * C13934 + C13929 * ae)) / C13440;
    const double C5588 =
        (C13527 * C13592 + C13479 * ae + C13934 * C13668) / C13440;
    const double C13865 = C13859 + C13860;
    const double C3528 =
        (2 * (ae * C13541 + be * C13592 + C13527 * C13927) +
         ae * (C13541 + C13527 * C13933 + C13929 * be) +
         be * (C13592 + C13527 * C13934 + C13929 * ae) +
         C13527 * (C13927 + ae * C13933 + be * C13934 +
                   C13527 * (ae * C13928 + be * C13930 +
                             C13527 * C13458 *
                                 (C13495 * C13496 +
                                  C13605 * bs[6] * std::pow(C13456, 6)) *
                                 C13439))) /
        std::pow(C13440, 2);
    const double C3930 =
        (C13553 * C13927 + ae * C13553 * C13933 + be * C13553 * C13934 +
         C13527 *
             (ae * C13553 * C13928 + be * C13553 * C13930 +
              C13527 * C13553 * C13458 *
                  (C13495 * C13496 + C13605 * bs[6] * std::pow(C13456, 6)) *
                  C13439)) /
        std::pow(C13440, 2);
    const double C5640 =
        (ae * (C13541 + C13928 * C13668) + be * (C13592 + C13930 * C13668) +
         C13527 * (C13927 + C13458 *
                                (C13495 * C13496 +
                                 C13605 * bs[6] * std::pow(C13456, 6)) *
                                C13439 * C13668)) /
        std::pow(C13440, 2);
    const double C6030 =
        (2 * C13553 * C13927 +
         C13553 * (C13927 + C13458 *
                                (C13495 * C13496 +
                                 C13605 * bs[6] * std::pow(C13456, 6)) *
                                C13439 * C13668)) /
        std::pow(C13440, 2);
    const double C5281 =
        (3 * (C13610 + C13615 * C13668) +
         C13553 * (2 * C13959 +
                   C13553 * (C13615 + (C13495 * C13496 +
                                       C13605 * bs[6] * std::pow(C13456, 6)) *
                                          C13439 * C13668))) /
        std::pow(C13440, 2);
    const double C6352 =
        (ae * (2 * C13995 + C13553 * C13999) +
         be * (2 * C13983 + C13553 * C13985) +
         C13527 * (2 * C13959 +
                   C13553 * (C13615 + (C13495 * C13496 +
                                       C13605 * bs[6] * std::pow(C13456, 6)) *
                                          C13439 * C13668))) /
        std::pow(C13440, 2);
    const double C6100 = (2 * (C13553 * C13643 + C13479 * ae) +
                          C13553 * (C13643 + C13553 * C14051 + C14048 * ae) +
                          (C13479 + C13501 * C13668) * ae) /
                         C13440;
    const double C14022 = C13641 + C14020;
    const double C6422 = (2 * (C13553 * C13888 + C13854 * ae) +
                          C13553 * (C13888 + C13553 * C14072 + C14067 * ae) +
                          (C13854 + C13862 * C13668) * ae) /
                         C13440;
    const double C3669 =
        (2 * C13527 * C13943 +
         C13527 * (C13943 + C13458 *
                                (C13495 * C13496 +
                                 C13668 * bs[6] * std::pow(C13456, 6)) *
                                C13439 * C13605)) /
        std::pow(C13440, 2);
    const double C4135 =
        (ae * (C13567 + C13937 * C13605) + be * (C13643 + C13941 * C13605) +
         C13553 * (C13943 + C13458 *
                                (C13495 * C13496 +
                                 C13668 * bs[6] * std::pow(C13456, 6)) *
                                C13439 * C13605)) /
        std::pow(C13440, 2);
    const double C5845 =
        (C13527 * C13943 + ae * (C13553 * C14036 + C13929 * be) +
         be * (C13553 * C14037 + C13929 * ae) +
         C13553 *
             (ae * C14036 + be * C14037 +
              C13553 * C13527 * C13458 *
                  (C13495 * C13496 + C13668 * bs[6] * std::pow(C13456, 6)) *
                  C13439)) /
        std::pow(C13440, 2);
    const double C6171 =
        (2 * (ae * C13567 + be * C13643 + C13553 * C13943) +
         ae * (C13567 + C13553 * C14050 + C14048 * be) +
         be * (C13643 + C13553 * C14051 + C14048 * ae) +
         C13553 * (C13943 + ae * C14050 + be * C14051 +
                   C13553 * (ae * C13937 + be * C13941 +
                             C13553 * C13458 *
                                 (C13495 * C13496 +
                                  C13668 * bs[6] * std::pow(C13456, 6)) *
                                 C13439))) /
        std::pow(C13440, 2);
    const double C14013 = C14007 + C14008;
    const double C6493 =
        (2 * (ae * C13879 + be * C13888 + C13553 * C14065) +
         ae * (C13879 + C13553 * C14071 + C14067 * be) +
         be * (C13888 + C13553 * C14072 + C14067 * ae) +
         C13553 * (C14065 + ae * C14071 + be * C14072 +
                   C13553 * (ae * C14066 + be * C14068 +
                             C13553 * C13527 *
                                 (C13495 * C13496 +
                                  C13668 * bs[6] * std::pow(C13456, 6)) *
                                 C13439))) /
        std::pow(C13440, 2);
    const double C14346 = C14342 - C14345;
    const double C14608 = C14580 / C14332;
    const double C14355 = C14351 - C14354;
    const double C14622 = C14607 / C14336;
    const double C14428 = C14423 - C14427;
    const double C14612 = C14588 / C14332;
    const double C14435 = C14431 - C14434;
    const double C14626 = C14615 / C14336;
    const double C14470 = C14465 - C14469;
    const double C14614 = C14591 / C14332;
    const double C14477 = C14473 - C14476;
    const double C14628 = C14618 / C14336;
    const double C13524 = C13522 + C13510;
    const double C13523 = C13521 + C13507;
    const double C13875 = C13873 + C13867;
    const double C14023 = C14021 + C14015;
    const double C13876 = C13874 + C13870;
    const double C14024 = C14022 + C14018;
    const double C14548 = C14346 * C14334;
    const double C14582 = C14553 + C14346;
    const double C14556 = C14355 / C14336;
    const double C14552 = C14355 * C14334;
    const double C1254 = C14622 - (C14346 * C14337) / C14332;
    const double C14566 = C14428 * C14422;
    const double C14597 = C14568 + C14428;
    const double C14570 = C14435 / C14336;
    const double C14567 = C14435 * C14422;
    const double C3376 = C14626 - (C14428 * C14424) / C14332;
    const double C14572 = C14470 * C14464;
    const double C14603 = C14574 + C14470;
    const double C14576 = C14477 / C14336;
    const double C14573 = C14477 * C14464;
    const double C5880 = C14628 - (C14470 * C14466) / C14332;
    const double C450 =
        (C13538 + ae * C13541 + C13458 * C13549 + be * C13527 * C13524 +
         C13527 *
             (be * C13524 +
              C13527 * (C13545 + ae * C13458 * C13546 +
                        C13458 * (ae * C13546 + C13458 * std::pow(C13456, 6) *
                                                    bs[6] * C13533)))) /
        std::pow(C13440, 2);
    const double C941 =
        (C13564 + ae * C13567 + C13458 * C13575 + be * C13553 * C13524 +
         C13553 *
             (be * C13524 +
              C13553 * (C13571 + ae * C13458 * C13572 +
                        C13458 * (ae * C13572 + C13458 * std::pow(C13456, 6) *
                                                    bs[6] * C13559)))) /
        std::pow(C13440, 2);
    const double C1297 =
        (be * (2 * C13490 + C13458 * C13524 + C13508 * ae) +
         C13527 *
             (2 * C13549 + ae * C13550 +
              C13458 * (C13545 + ae * C13458 * C13546 +
                        C13458 * (ae * C13546 + C13458 * std::pow(C13456, 6) *
                                                    bs[6] * C13533)))) /
        std::pow(C13440, 2);
    const double C1657 =
        (be * (2 * C13490 + C13458 * C13524 + C13508 * ae) +
         C13553 *
             (2 * C13575 + ae * C13576 +
              C13458 * (C13571 + ae * C13458 * C13572 +
                        C13458 * (ae * C13572 + C13458 * std::pow(C13456, 6) *
                                                    bs[6] * C13559)))) /
        std::pow(C13440, 2);
    const double C1987 =
        (C13553 *
         (be * C13524 +
          C13527 * (C13545 + ae * C13458 * C13546 +
                    C13458 * (ae * C13546 + C13458 * std::pow(C13456, 6) *
                                                bs[6] * C13533)))) /
        std::pow(C13440, 2);
    const double C2043 =
        (be * C13527 * C13524 +
         C13553 * C13527 *
             (C13571 + ae * C13458 * C13572 +
              C13458 * (ae * C13572 +
                        C13458 * std::pow(C13456, 6) * bs[6] * C13559))) /
        std::pow(C13440, 2);
    const double C87 = (3 * (C13471 + C13458 * C13490 + C13479 * ae) +
                        C13458 * (2 * C13490 + C13458 * C13524 + C13508 * ae) +
                        (2 * C13479 + C13458 * C13508) * ae) /
                       C13440;
    const double C394 =
        (C13471 + C13458 * C13490 + C13479 * ae + C13524 * C13605) / C13440;
    const double C835 =
        (C13471 + C13458 * C13490 + C13479 * ae + C13524 * C13668) / C13440;
    const double C1260 =
        (C13527 * (2 * C13490 + C13458 * C13524 + C13508 * ae)) / C13440;
    const double C1584 =
        (C13553 * (2 * C13490 + C13458 * C13524 + C13508 * ae)) / C13440;
    const double C1928 = (C13553 * C13527 * C13524) / C13440;
    const double C92 =
        (3 * (C13488 + ae * C13489 + be * C13490 + C13458 * C13520) +
         ae * (2 * C13489 + C13458 * C13523 + C13508 * be) +
         be * (2 * C13490 + C13458 * C13524 + C13508 * ae) +
         C13458 *
             (2 * C13520 + ae * C13523 + be * C13524 +
              C13458 * (C13514 + ae * C13515 + be * C13516 +
                        C13458 * (ae * C13506 + be * C13509 +
                                  C13458 *
                                      (C13495 * C13496 +
                                       C13462 * bs[6] * std::pow(C13456, 6)) *
                                      C13439)))) /
        std::pow(C13440, 2);
    const double C550 =
        (C13589 + be * C13592 + C13458 * C13600 + ae * C13527 * C13523 +
         C13527 *
             (ae * C13523 +
              C13527 * (C13596 + be * C13458 * C13597 +
                        C13458 * (be * C13597 + C13458 * std::pow(C13456, 6) *
                                                    bs[6] * C13584)))) /
        std::pow(C13440, 2);
    const double C1129 =
        (C13640 + be * C13643 + C13458 * C13651 + ae * C13553 * C13523 +
         C13553 *
             (ae * C13523 +
              C13553 * (C13647 + be * C13458 * C13648 +
                        C13458 * (be * C13648 + C13458 * std::pow(C13456, 6) *
                                                    bs[6] * C13635)))) /
        std::pow(C13440, 2);
    const double C1261 =
        (2 * (ae * C13527 * C13483 + be * C13527 * C13484 + C13458 * C13788) +
         ae * C13527 * C13523 + be * C13527 * C13524 +
         C13458 * (C13788 + ae * C13527 * C13515 + be * C13527 * C13516 +
                   C13458 * (ae * C13527 * C13506 + be * C13527 * C13509 +
                             C13458 * C13527 *
                                 (C13495 * C13496 +
                                  C13462 * bs[6] * std::pow(C13456, 6)) *
                                 C13439))) /
        std::pow(C13440, 2);
    const double C1369 =
        (ae * (2 * C13489 + C13458 * C13523 + C13508 * be) +
         C13527 *
             (2 * C13600 + be * C13601 +
              C13458 * (C13596 + be * C13458 * C13597 +
                        C13458 * (be * C13597 + C13458 * std::pow(C13456, 6) *
                                                    bs[6] * C13584)))) /
        std::pow(C13440, 2);
    const double C1585 =
        (2 * (ae * C13553 * C13483 + be * C13553 * C13484 + C13458 * C13798) +
         ae * C13553 * C13523 + be * C13553 * C13524 +
         C13458 * (C13798 + ae * C13553 * C13515 + be * C13553 * C13516 +
                   C13458 * (ae * C13553 * C13506 + be * C13553 * C13509 +
                             C13458 * C13553 *
                                 (C13495 * C13496 +
                                  C13462 * bs[6] * std::pow(C13456, 6)) *
                                 C13439))) /
        std::pow(C13440, 2);
    const double C1799 =
        (ae * (2 * C13489 + C13458 * C13523 + C13508 * be) +
         C13553 *
             (2 * C13651 + be * C13652 +
              C13458 * (C13647 + be * C13458 * C13648 +
                        C13458 * (be * C13648 + C13458 * std::pow(C13456, 6) *
                                                    bs[6] * C13635)))) /
        std::pow(C13440, 2);
    const double C2099 =
        (ae * C13553 * C13523 +
         C13527 * C13553 *
             (C13596 + be * C13458 * C13597 +
              C13458 * (be * C13597 +
                        C13458 * std::pow(C13456, 6) * bs[6] * C13584))) /
        std::pow(C13440, 2);
    const double C2261 =
        (ae * C13527 * C13523 +
         C13553 * C13527 *
             (C13647 + be * C13458 * C13648 +
              C13458 * (be * C13648 +
                        C13458 * std::pow(C13456, 6) * bs[6] * C13635))) /
        std::pow(C13440, 2);
    const double C86 = (3 * (C13470 + C13458 * C13489 + C13479 * be) +
                        C13458 * (2 * C13489 + C13458 * C13523 + C13508 * be) +
                        (2 * C13479 + C13458 * C13508) * be) /
                       C13440;
    const double C393 =
        (C13470 + C13458 * C13489 + C13479 * be + C13523 * C13605) / C13440;
    const double C834 =
        (C13470 + C13458 * C13489 + C13479 * be + C13523 * C13668) / C13440;
    const double C1259 =
        (C13527 * (2 * C13489 + C13458 * C13523 + C13508 * be)) / C13440;
    const double C1583 =
        (C13553 * (2 * C13489 + C13458 * C13523 + C13508 * be)) / C13440;
    const double C1927 = (C13553 * C13527 * C13523) / C13440;
    const double C3300 =
        (C13661 + be * C13888 + C13527 * C13891 + ae * C13553 * C13875 +
         C13553 *
             (ae * C13875 +
              C13553 * (C13664 + be * C13527 * C13648 +
                        C13527 * (be * C13648 + C13527 * std::pow(C13456, 6) *
                                                    bs[6] * C13658)))) /
        std::pow(C13440, 2);
    const double C4422 =
        (ae * (2 * C13856 + C13527 * C13875 + C13868 * be) +
         C13553 *
             (2 * C13891 + be * C13892 +
              C13527 * (C13664 + be * C13527 * C13648 +
                        C13527 * (be * C13648 + C13527 * std::pow(C13456, 6) *
                                                    bs[6] * C13658)))) /
        std::pow(C13440, 2);
    const double C2775 =
        (3 * (C13534 + C13527 * C13856 + C13854 * be) +
         C13527 * (2 * C13856 + C13527 * C13875 + C13868 * be) +
         (2 * C13854 + C13527 * C13868) * be) /
        C13440;
    const double C3042 =
        (C13534 + C13527 * C13856 + C13854 * be + C13875 * C13668) / C13440;
    const double C4208 =
        (C13553 * (2 * C13856 + C13527 * C13875 + C13868 * be)) / C13440;
    const double C6387 =
        (ae * (2 * C14004 + C13553 * C14023 + C14016 * be) +
         C13527 *
             (2 * C13962 + be * C13985 +
              C13553 * (C13627 + be * C13553 * C13597 +
                        C13553 * (be * C13597 + C13553 * std::pow(C13456, 6) *
                                                    bs[6] * C13621)))) /
        std::pow(C13440, 2);
    const double C5229 =
        (3 * (C13560 + C13553 * C14004 + C14002 * be) +
         C13553 * (2 * C14004 + C13553 * C14023 + C14016 * be) +
         (2 * C14002 + C13553 * C14016) * be) /
        C13440;
    const double C2853 =
        (3 * (C13610 + ae * C13856 + be * C13857 + C13527 * C13865) +
         ae * (2 * C13856 + C13527 * C13875 + C13868 * be) +
         be * (2 * C13857 + C13527 * C13876 + C13868 * ae) +
         C13527 *
             (2 * C13865 + ae * C13875 + be * C13876 +
              C13527 * (C13615 + ae * C13866 + be * C13869 +
                        C13527 * (ae * C13546 + be * C13597 +
                                  C13527 *
                                      (C13495 * C13496 +
                                       C13605 * bs[6] * std::pow(C13456, 6)) *
                                      C13439)))) /
        std::pow(C13440, 2);
    const double C4316 =
        (2 * (ae * C13553 * C13539 + be * C13553 * C13590 + C13527 * C13959) +
         ae * C13553 * C13875 + be * C13553 * C13876 +
         C13527 * (C13959 + ae * C13553 * C13866 + be * C13553 * C13869 +
                   C13527 * (ae * C13553 * C13546 + be * C13553 * C13597 +
                             C13527 * C13553 *
                                 (C13495 * C13496 +
                                  C13605 * bs[6] * std::pow(C13456, 6)) *
                                 C13439))) /
        std::pow(C13440, 2);
    const double C2827 =
        (3 * (C13585 + C13527 * C13857 + C13854 * ae) +
         C13527 * (2 * C13857 + C13527 * C13876 + C13868 * ae) +
         (2 * C13854 + C13527 * C13868) * ae) /
        C13440;
    const double C3130 =
        (C13585 + C13527 * C13857 + C13854 * ae + C13876 * C13668) / C13440;
    const double C4280 =
        (C13553 * (2 * C13857 + C13527 * C13876 + C13868 * ae)) / C13440;
    const double C5379 =
        (3 * (C13673 + ae * C14004 + be * C14005 + C13553 * C14013) +
         ae * (2 * C14004 + C13553 * C14023 + C14016 * be) +
         be * (2 * C14005 + C13553 * C14024 + C14016 * ae) +
         C13553 *
             (2 * C14013 + ae * C14023 + be * C14024 +
              C13553 * (C13678 + ae * C14014 + be * C14017 +
                        C13553 * (ae * C13572 + be * C13648 +
                                  C13553 *
                                      (C13495 * C13496 +
                                       C13668 * bs[6] * std::pow(C13456, 6)) *
                                      C13439)))) /
        std::pow(C13440, 2);
    const double C5329 =
        (3 * (C13636 + C13553 * C14005 + C14002 * ae) +
         C13553 * (2 * C14005 + C13553 * C14024 + C14016 * ae) +
         (2 * C14002 + C13553 * C14016) * ae) /
        C13440;
    const double C14578 = C14548 / C14332;
    const double C14609 = C14582 / C14336;
    const double C14610 = C14584 + C14556;
    const double C1256 = C14556 - C14353 / C14350;
    const double C14581 = C14552 / C14332;
    const double C14594 = C14566 / C14332;
    const double C14616 = C14597 / C14336;
    const double C14617 = C14598 + C14570;
    const double C3378 = C14570 - C14433 / C14350;
    const double C14596 = C14567 / C14332;
    const double C14600 = C14572 / C14332;
    const double C14619 = C14603 / C14336;
    const double C14620 = C14604 + C14576;
    const double C5882 = C14576 - C14475 / C14350;
    const double C14602 = C14573 / C14332;
    const double C14630 = C14578 + C14622;
    const double C1255 = C14609 - (C14355 * C14337) / C14332;
    const double C69 = C14610 / C14336 - C14353 / C14585;
    const double C14623 = C14581 + C14609;
    const double C14631 = C14594 + C14626;
    const double C3377 = C14616 - (C14435 * C14424) / C14332;
    const double C2741 = C14617 / C14336 - C14433 / C14585;
    const double C14627 = C14596 + C14616;
    const double C14632 = C14600 + C14628;
    const double C5881 = C14619 - (C14477 * C14466) / C14332;
    const double C5170 = C14620 / C14336 - C14475 / C14585;
    const double C14629 = C14602 + C14619;
    const double C66 =
        (C14621 + 2 * C14346) / C14336 - (C14630 * C14337) / C14332;
    const double C67 =
        (C14608 + 2 * C14355 + C14630) / C14336 - (C14623 * C14337) / C14332;
    const double C68 = (C14583 + C14352 / C14332 + C14623) / C14336 -
                       (C14610 * C14337) / C14332;
    const double C2738 =
        (C14624 + 2 * C14428) / C14336 - (C14631 * C14424) / C14332;
    const double C2739 =
        (C14612 + 2 * C14435 + C14631) / C14336 - (C14627 * C14424) / C14332;
    const double C2740 = (C14589 + C14432 / C14332 + C14627) / C14336 -
                         (C14617 * C14424) / C14332;
    const double C5167 =
        (C14625 + 2 * C14470) / C14336 - (C14632 * C14466) / C14332;
    const double C5168 =
        (C14614 + 2 * C14477 + C14632) / C14336 - (C14629 * C14466) / C14332;
    const double C5169 = (C14592 + C14474 / C14332 + C14629) / C14336 -
                         (C14620 * C14466) / C14332;
    d2eexx[0] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 *
                        C63 * C14387 * C14428 -
                    (C71 * C383 - C72 * C377 - C71 * C384 + C61 * C395) * C62 *
                        C63 * C14387 * C14435 +
                    (C71 * C385 - C72 * C378 - C71 * C386 + C61 * C396) * C62 *
                        C63 * C14387 * C7608) *
                       C14346 +
                   ((C71 * C387 - C72 * C379 - C71 * C388 + C61 * C397) * C62 *
                        C63 * C14387 * C14435 -
                    (C71 * C80 - C72 * C74 - C71 * C81 + C61 * C89) * C62 *
                        C63 * C14387 * C14428 -
                    (C71 * C389 - C72 * C380 - C71 * C390 + C61 * C398) * C62 *
                        C63 * C14387 * C7608) *
                       C14355 +
                   ((C71 * C82 - C72 * C75 - C71 * C83 + C61 * C90) * C62 *
                        C63 * C14387 * C14428 -
                    (C71 * C391 - C72 * C381 - C71 * C392 + C61 * C399) * C62 *
                        C63 * C14387 * C14435 +
                    (C71 * C393 - C72 * C382 - C71 * C394 + C61 * C400) * C62 *
                        C63 * C14387 * C7608) *
                       C7611)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[0] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C63 * C116 - C115 * C73) * C71 + (C63 * C121 - C115 * C79) * C61) *
               C62 * C14387 * C14428 +
           ((C115 * C377 - C63 * C439) * C71 +
            (C115 * C384 - C63 * C445) * C61) *
               C62 * C14387 * C14435 +
           ((C63 * C440 - C115 * C378) * C71 +
            (C63 * C446 - C115 * C386) * C61) *
               C62 * C14387 * C7608) *
              C14346 +
          (((C115 * C74 - C63 * C117) * C71 + (C115 * C81 - C63 * C122) * C61) *
               C62 * C14387 * C14428 +
           ((C63 * C441 - C115 * C379) * C71 +
            (C63 * C447 - C115 * C388) * C61) *
               C62 * C14387 * C14435 +
           ((C115 * C380 - C63 * C442) * C71 +
            (C115 * C390 - C63 * C448) * C61) *
               C62 * C14387 * C7608) *
              C14355 +
          (((C63 * C118 - C115 * C75) * C71 + (C63 * C123 - C115 * C83) * C61) *
               C62 * C14387 * C14428 +
           ((C115 * C381 - C63 * C443) * C71 +
            (C115 * C392 - C63 * C449) * C61) *
               C62 * C14387 * C14435 +
           ((C63 * C444 - C115 * C382) * C71 +
            (C63 * C450 - C115 * C394) * C61) *
               C62 * C14387 * C7608) *
              C7611)) /
        (p * q * std::sqrt(p + q));
    d2eexz[0] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C62 * C149 - C148 * C73) * C71 + (C62 * C154 - C148 * C79) * C61) *
               C63 * C14387 * C14428 +
           ((C148 * C377 - C62 * C489) * C71 +
            (C148 * C384 - C62 * C495) * C61) *
               C63 * C14387 * C14435 +
           ((C62 * C490 - C148 * C378) * C71 +
            (C62 * C496 - C148 * C386) * C61) *
               C63 * C14387 * C7608) *
              C14346 +
          (((C148 * C74 - C62 * C150) * C71 + (C148 * C81 - C62 * C155) * C61) *
               C63 * C14387 * C14428 +
           ((C62 * C491 - C148 * C379) * C71 +
            (C62 * C497 - C148 * C388) * C61) *
               C63 * C14387 * C14435 +
           ((C148 * C380 - C62 * C492) * C71 +
            (C148 * C390 - C62 * C498) * C61) *
               C63 * C14387 * C7608) *
              C14355 +
          (((C62 * C151 - C148 * C75) * C71 + (C62 * C156 - C148 * C83) * C61) *
               C63 * C14387 * C14428 +
           ((C148 * C381 - C62 * C493) * C71 +
            (C148 * C392 - C62 * C499) * C61) *
               C63 * C14387 * C14435 +
           ((C62 * C494 - C148 * C382) * C71 +
            (C62 * C500 - C148 * C394) * C61) *
               C63 * C14387 * C7608) *
              C7611)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[0] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
               C62 * C14387 * C14428 +
           ((C71 * C377 - C61 * C383) * C115 +
            (C71 * C539 - C61 * C545) * C63) *
               C62 * C14387 * C14435 +
           ((C61 * C385 - C71 * C378) * C115 +
            (C61 * C546 - C71 * C540) * C63) *
               C62 * C14387 * C7608) *
              C14346 +
          (((C71 * C74 - C61 * C80) * C115 + (C71 * C182 - C61 * C187) * C63) *
               C62 * C14387 * C14428 +
           ((C61 * C387 - C71 * C379) * C115 +
            (C61 * C547 - C71 * C541) * C63) *
               C62 * C14387 * C14435 +
           ((C71 * C380 - C61 * C389) * C115 +
            (C71 * C542 - C61 * C548) * C63) *
               C62 * C14387 * C7608) *
              C14355 +
          (((C61 * C82 - C71 * C75) * C115 + (C61 * C188 - C71 * C183) * C63) *
               C62 * C14387 * C14428 +
           ((C71 * C381 - C61 * C391) * C115 +
            (C71 * C543 - C61 * C549) * C63) *
               C62 * C14387 * C14435 +
           ((C61 * C393 - C71 * C382) * C115 +
            (C61 * C550 - C71 * C544) * C63) *
               C62 * C14387 * C7608) *
              C7611)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[0] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) *
                        C61 * C62 * C14387 * C14428 -
                    (C115 * C439 - C213 * C377 - C115 * C539 + C63 * C589) *
                        C61 * C62 * C14387 * C14435 +
                    (C115 * C440 - C213 * C378 - C115 * C540 + C63 * C590) *
                        C61 * C62 * C14387 * C7608) *
                       C14346 +
                   ((C115 * C441 - C213 * C379 - C115 * C541 + C63 * C591) *
                        C61 * C62 * C14387 * C14435 -
                    (C115 * C117 - C213 * C74 - C115 * C182 + C63 * C215) *
                        C61 * C62 * C14387 * C14428 -
                    (C115 * C442 - C213 * C380 - C115 * C542 + C63 * C592) *
                        C61 * C62 * C14387 * C7608) *
                       C14355 +
                   ((C115 * C118 - C213 * C75 - C115 * C183 + C63 * C216) *
                        C61 * C62 * C14387 * C14428 -
                    (C115 * C443 - C213 * C381 - C115 * C543 + C63 * C593) *
                        C61 * C62 * C14387 * C14435 +
                    (C115 * C444 - C213 * C382 - C115 * C544 + C63 * C594) *
                        C61 * C62 * C14387 * C7608) *
                       C7611)) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[0] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C62 * C149 - C148 * C73) * C115 +
                     (C62 * C241 - C148 * C181) * C63) *
                        C61 * C14387 * C14428 +
                    ((C148 * C377 - C62 * C489) * C115 +
                     (C148 * C539 - C62 * C633) * C63) *
                        C61 * C14387 * C14435 +
                    ((C62 * C490 - C148 * C378) * C115 +
                     (C62 * C634 - C148 * C540) * C63) *
                        C61 * C14387 * C7608) *
                       C14346 +
                   (((C148 * C74 - C62 * C150) * C115 +
                     (C148 * C182 - C62 * C242) * C63) *
                        C61 * C14387 * C14428 +
                    ((C62 * C491 - C148 * C379) * C115 +
                     (C62 * C635 - C148 * C541) * C63) *
                        C61 * C14387 * C14435 +
                    ((C148 * C380 - C62 * C492) * C115 +
                     (C148 * C542 - C62 * C636) * C63) *
                        C61 * C14387 * C7608) *
                       C14355 +
                   (((C62 * C151 - C148 * C75) * C115 +
                     (C62 * C243 - C148 * C183) * C63) *
                        C61 * C14387 * C14428 +
                    ((C148 * C381 - C62 * C493) * C115 +
                     (C148 * C543 - C62 * C637) * C63) *
                        C61 * C14387 * C14435 +
                    ((C62 * C494 - C148 * C382) * C115 +
                     (C62 * C638 - C148 * C544) * C63) *
                        C61 * C14387 * C7608) *
                       C7611)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[0] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
               C63 * C14387 * C14428 +
           ((C71 * C377 - C61 * C383) * C148 +
            (C71 * C677 - C61 * C683) * C62) *
               C63 * C14387 * C14435 +
           ((C61 * C385 - C71 * C378) * C148 +
            (C61 * C684 - C71 * C678) * C62) *
               C63 * C14387 * C7608) *
              C14346 +
          (((C71 * C74 - C61 * C80) * C148 + (C71 * C269 - C61 * C274) * C62) *
               C63 * C14387 * C14428 +
           ((C61 * C387 - C71 * C379) * C148 +
            (C61 * C685 - C71 * C679) * C62) *
               C63 * C14387 * C14435 +
           ((C71 * C380 - C61 * C389) * C148 +
            (C71 * C680 - C61 * C686) * C62) *
               C63 * C14387 * C7608) *
              C14355 +
          (((C61 * C82 - C71 * C75) * C148 + (C61 * C275 - C71 * C270) * C62) *
               C63 * C14387 * C14428 +
           ((C71 * C381 - C61 * C391) * C148 +
            (C71 * C681 - C61 * C687) * C62) *
               C63 * C14387 * C14435 +
           ((C61 * C393 - C71 * C382) * C148 +
            (C61 * C688 - C71 * C682) * C62) *
               C63 * C14387 * C7608) *
              C7611)) /
        (p * q * std::sqrt(p + q));
    d2eezy[0] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C63 * C116 - C115 * C73) * C148 +
                     (C63 * C300 - C115 * C268) * C62) *
                        C61 * C14387 * C14428 +
                    ((C115 * C377 - C63 * C439) * C148 +
                     (C115 * C677 - C63 * C727) * C62) *
                        C61 * C14387 * C14435 +
                    ((C63 * C440 - C115 * C378) * C148 +
                     (C63 * C728 - C115 * C678) * C62) *
                        C61 * C14387 * C7608) *
                       C14346 +
                   (((C115 * C74 - C63 * C117) * C148 +
                     (C115 * C269 - C63 * C301) * C62) *
                        C61 * C14387 * C14428 +
                    ((C63 * C441 - C115 * C379) * C148 +
                     (C63 * C729 - C115 * C679) * C62) *
                        C61 * C14387 * C14435 +
                    ((C115 * C380 - C63 * C442) * C148 +
                     (C115 * C680 - C63 * C730) * C62) *
                        C61 * C14387 * C7608) *
                       C14355 +
                   (((C63 * C118 - C115 * C75) * C148 +
                     (C63 * C302 - C115 * C270) * C62) *
                        C61 * C14387 * C14428 +
                    ((C115 * C381 - C63 * C443) * C148 +
                     (C115 * C681 - C63 * C731) * C62) *
                        C61 * C14387 * C14435 +
                    ((C63 * C444 - C115 * C382) * C148 +
                     (C63 * C732 - C115 * C682) * C62) *
                        C61 * C14387 * C7608) *
                       C7611)) /
                 (p * q * std::sqrt(p + q));
    d2eezz[0] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) *
                        C63 * C61 * C14387 * C14428 -
                    (C148 * C489 - C327 * C377 - C148 * C677 + C62 * C771) *
                        C63 * C61 * C14387 * C14435 +
                    (C148 * C490 - C327 * C378 - C148 * C678 + C62 * C772) *
                        C63 * C61 * C14387 * C7608) *
                       C14346 +
                   ((C148 * C491 - C327 * C379 - C148 * C679 + C62 * C773) *
                        C63 * C61 * C14387 * C14435 -
                    (C148 * C150 - C327 * C74 - C148 * C269 + C62 * C329) *
                        C63 * C61 * C14387 * C14428 -
                    (C148 * C492 - C327 * C380 - C148 * C680 + C62 * C774) *
                        C63 * C61 * C14387 * C7608) *
                       C14355 +
                   ((C148 * C151 - C327 * C75 - C148 * C270 + C62 * C330) *
                        C63 * C61 * C14387 * C14428 -
                    (C148 * C493 - C327 * C381 - C148 * C681 + C62 * C775) *
                        C63 * C61 * C14387 * C14435 +
                    (C148 * C494 - C327 * C382 - C148 * C682 + C62 * C776) *
                        C63 * C61 * C14387 * C7608) *
                       C7611)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[1] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 *
                         C63 * C14564 -
                     (C71 * C824 - C72 * C818 - C71 * C825 + C61 * C836) * C62 *
                         C63 * C14474) *
                        C14428 +
                    ((C71 * C1923 - C72 * C1920 - C71 * C1924 + C61 * C1929) *
                         C62 * C63 * C14474 -
                     (C71 * C383 - C72 * C377 - C71 * C384 + C61 * C395) * C62 *
                         C63 * C14564) *
                        C14435 +
                    ((C71 * C385 - C72 * C378 - C71 * C386 + C61 * C396) * C62 *
                         C63 * C14564 -
                     (C71 * C2995 - C72 * C2991 - C71 * C2996 + C61 * C3000) *
                         C62 * C63 * C14474) *
                        C7608) *
                       C6844 +
                   (((C71 * C828 - C72 * C820 - C71 * C829 + C61 * C838) * C62 *
                         C63 * C14474 -
                     (C71 * C80 - C72 * C74 - C71 * C81 + C61 * C89) * C62 *
                         C63 * C14564) *
                        C14428 +
                    ((C71 * C387 - C72 * C379 - C71 * C388 + C61 * C397) * C62 *
                         C63 * C14564 -
                     (C71 * C1925 - C72 * C1921 - C71 * C1926 + C61 * C1930) *
                         C62 * C63 * C14474) *
                        C14435 +
                    ((C71 * C3721 - C72 * C3720 - C71 * C3722 + C61 * C3723) *
                         C62 * C63 * C14474 -
                     (C71 * C389 - C72 * C380 - C71 * C390 + C61 * C398) * C62 *
                         C63 * C14564) *
                        C7608) *
                       C14352)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[1] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((((C63 * C116 - C115 * C73) * C71 +
                      (C63 * C121 - C115 * C79) * C61) *
                         C62 * C14564 +
                     ((C115 * C818 - C63 * C880) * C71 +
                      (C115 * C825 - C63 * C886) * C61) *
                         C62 * C14474) *
                        C14428 +
                    (((C115 * C377 - C63 * C439) * C71 +
                      (C115 * C384 - C63 * C445) * C61) *
                         C62 * C14564 +
                     ((C63 * C1982 - C115 * C1920) * C71 +
                      (C63 * C1985 - C115 * C1924) * C61) *
                         C62 * C14474) *
                        C14435 +
                    (((C63 * C440 - C115 * C378) * C71 +
                      (C63 * C446 - C115 * C386) * C61) *
                         C62 * C14564 +
                     ((C115 * C2991 - C63 * C3041) * C71 +
                      (C115 * C2996 - C63 * C3044) * C61) *
                         C62 * C14474) *
                        C7608) *
                       C6844 +
                   ((((C115 * C74 - C63 * C117) * C71 +
                      (C115 * C81 - C63 * C122) * C61) *
                         C62 * C14564 +
                     ((C63 * C882 - C115 * C820) * C71 +
                      (C63 * C888 - C115 * C829) * C61) *
                         C62 * C14474) *
                        C14428 +
                    (((C63 * C441 - C115 * C379) * C71 +
                      (C63 * C447 - C115 * C388) * C61) *
                         C62 * C14564 +
                     ((C115 * C1921 - C63 * C1983) * C71 +
                      (C115 * C1926 - C63 * C1986) * C61) *
                         C62 * C14474) *
                        C14435 +
                    (((C115 * C380 - C63 * C442) * C71 +
                      (C115 * C390 - C63 * C448) * C61) *
                         C62 * C14564 +
                     ((C63 * C3774 - C115 * C3720) * C71 +
                      (C63 * C3775 - C115 * C3722) * C61) *
                         C62 * C14474) *
                        C7608) *
                       C14352)) /
                 (p * q * std::sqrt(p + q));
    d2eexz[1] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((((C62 * C149 - C148 * C73) * C71 +
                      (C62 * C154 - C148 * C79) * C61) *
                         C63 * C14564 +
                     ((C148 * C818 - C62 * C930) * C71 +
                      (C148 * C825 - C62 * C936) * C61) *
                         C63 * C14474) *
                        C14428 +
                    (((C148 * C377 - C62 * C489) * C71 +
                      (C148 * C384 - C62 * C495) * C61) *
                         C63 * C14564 +
                     ((C62 * C2038 - C148 * C1920) * C71 +
                      (C62 * C2041 - C148 * C1924) * C61) *
                         C63 * C14474) *
                        C14435 +
                    (((C62 * C490 - C148 * C378) * C71 +
                      (C62 * C496 - C148 * C386) * C61) *
                         C63 * C14564 +
                     ((C148 * C2991 - C62 * C3085) * C71 +
                      (C148 * C2996 - C62 * C3088) * C61) *
                         C63 * C14474) *
                        C7608) *
                       C6844 +
                   ((((C148 * C74 - C62 * C150) * C71 +
                      (C148 * C81 - C62 * C155) * C61) *
                         C63 * C14564 +
                     ((C62 * C932 - C148 * C820) * C71 +
                      (C62 * C938 - C148 * C829) * C61) *
                         C63 * C14474) *
                        C14428 +
                    (((C62 * C491 - C148 * C379) * C71 +
                      (C62 * C497 - C148 * C388) * C61) *
                         C63 * C14564 +
                     ((C148 * C1921 - C62 * C2039) * C71 +
                      (C148 * C1926 - C62 * C2042) * C61) *
                         C63 * C14474) *
                        C14435 +
                    (((C148 * C380 - C62 * C492) * C71 +
                      (C148 * C390 - C62 * C498) * C61) *
                         C63 * C14564 +
                     ((C62 * C3826 - C148 * C3720) * C71 +
                      (C62 * C3827 - C148 * C3722) * C61) *
                         C63 * C14474) *
                        C7608) *
                       C14352)) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[1] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
                C62 * C14564 +
            ((C71 * C818 - C61 * C824) * C115 +
             (C71 * C980 - C61 * C986) * C63) *
                C62 * C14474) *
               C14428 +
           (((C71 * C377 - C61 * C383) * C115 +
             (C71 * C539 - C61 * C545) * C63) *
                C62 * C14564 +
            ((C61 * C1923 - C71 * C1920) * C115 +
             (C61 * C2097 - C71 * C2094) * C63) *
                C62 * C14474) *
               C14435 +
           (((C61 * C385 - C71 * C378) * C115 +
             (C61 * C546 - C71 * C540) * C63) *
                C62 * C14564 +
            ((C71 * C2991 - C61 * C2995) * C115 +
             (C71 * C3129 - C61 * C3132) * C63) *
                C62 * C14474) *
               C7608) *
              C6844 +
          ((((C71 * C74 - C61 * C80) * C115 + (C71 * C182 - C61 * C187) * C63) *
                C62 * C14564 +
            ((C61 * C828 - C71 * C820) * C115 +
             (C61 * C988 - C71 * C982) * C63) *
                C62 * C14474) *
               C14428 +
           (((C61 * C387 - C71 * C379) * C115 +
             (C61 * C547 - C71 * C541) * C63) *
                C62 * C14564 +
            ((C71 * C1921 - C61 * C1925) * C115 +
             (C71 * C2095 - C61 * C2098) * C63) *
                C62 * C14474) *
               C14435 +
           (((C71 * C380 - C61 * C389) * C115 +
             (C71 * C542 - C61 * C548) * C63) *
                C62 * C14564 +
            ((C61 * C3721 - C71 * C3720) * C115 +
             (C61 * C3879 - C71 * C3878) * C63) *
                C62 * C14474) *
               C7608) *
              C14352)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[1] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) * C61 * C62 *
                C14564 -
            (C115 * C880 - C213 * C818 - C115 * C980 + C63 * C1030) * C61 *
                C62 * C14474) *
               C14428 +
           ((C115 * C1982 - C213 * C1920 - C115 * C2094 + C63 * C2150) * C61 *
                C62 * C14474 -
            (C115 * C439 - C213 * C377 - C115 * C539 + C63 * C589) * C61 * C62 *
                C14564) *
               C14435 +
           ((C115 * C440 - C213 * C378 - C115 * C540 + C63 * C590) * C61 * C62 *
                C14564 -
            (C115 * C3041 - C213 * C2991 - C115 * C3129 + C63 * C3173) * C61 *
                C62 * C14474) *
               C7608) *
              C6844 +
          (((C115 * C882 - C213 * C820 - C115 * C982 + C63 * C1032) * C61 *
                C62 * C14474 -
            (C115 * C117 - C213 * C74 - C115 * C182 + C63 * C215) * C61 * C62 *
                C14564) *
               C14428 +
           ((C115 * C441 - C213 * C379 - C115 * C541 + C63 * C591) * C61 * C62 *
                C14564 -
            (C115 * C1983 - C213 * C1921 - C115 * C2095 + C63 * C2151) * C61 *
                C62 * C14474) *
               C14435 +
           ((C115 * C3774 - C213 * C3720 - C115 * C3878 + C63 * C3930) * C61 *
                C62 * C14474 -
            (C115 * C442 - C213 * C380 - C115 * C542 + C63 * C592) * C61 * C62 *
                C14564) *
               C7608) *
              C14352)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[1] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((((C62 * C149 - C148 * C73) * C115 +
                      (C62 * C241 - C148 * C181) * C63) *
                         C61 * C14564 +
                     ((C148 * C818 - C62 * C930) * C115 +
                      (C148 * C980 - C62 * C1074) * C63) *
                         C61 * C14474) *
                        C14428 +
                    (((C148 * C377 - C62 * C489) * C115 +
                      (C148 * C539 - C62 * C633) * C63) *
                         C61 * C14564 +
                     ((C62 * C2038 - C148 * C1920) * C115 +
                      (C62 * C2203 - C148 * C2094) * C63) *
                         C61 * C14474) *
                        C14435 +
                    (((C62 * C490 - C148 * C378) * C115 +
                      (C62 * C634 - C148 * C540) * C63) *
                         C61 * C14564 +
                     ((C148 * C2991 - C62 * C3085) * C115 +
                      (C148 * C3129 - C62 * C3214) * C63) *
                         C61 * C14474) *
                        C7608) *
                       C6844 +
                   ((((C148 * C74 - C62 * C150) * C115 +
                      (C148 * C182 - C62 * C242) * C63) *
                         C61 * C14564 +
                     ((C62 * C932 - C148 * C820) * C115 +
                      (C62 * C1076 - C148 * C982) * C63) *
                         C61 * C14474) *
                        C14428 +
                    (((C62 * C491 - C148 * C379) * C115 +
                      (C62 * C635 - C148 * C541) * C63) *
                         C61 * C14564 +
                     ((C148 * C1921 - C62 * C2039) * C115 +
                      (C148 * C2095 - C62 * C2204) * C63) *
                         C61 * C14474) *
                        C14435 +
                    (((C148 * C380 - C62 * C492) * C115 +
                      (C148 * C542 - C62 * C636) * C63) *
                         C61 * C14564 +
                     ((C62 * C3826 - C148 * C3720) * C115 +
                      (C62 * C3981 - C148 * C3878) * C63) *
                         C61 * C14474) *
                        C7608) *
                       C14352)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[1] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
                C63 * C14564 +
            ((C71 * C818 - C61 * C824) * C148 +
             (C71 * C1118 - C61 * C1124) * C62) *
                C63 * C14474) *
               C14428 +
           (((C71 * C377 - C61 * C383) * C148 +
             (C71 * C677 - C61 * C683) * C62) *
                C63 * C14564 +
            ((C61 * C1923 - C71 * C1920) * C148 +
             (C61 * C2259 - C71 * C2256) * C62) *
                C63 * C14474) *
               C14435 +
           (((C61 * C385 - C71 * C378) * C148 +
             (C61 * C684 - C71 * C678) * C62) *
                C63 * C14564 +
            ((C71 * C2991 - C61 * C2995) * C148 +
             (C71 * C3255 - C61 * C3258) * C62) *
                C63 * C14474) *
               C7608) *
              C6844 +
          ((((C71 * C74 - C61 * C80) * C148 + (C71 * C269 - C61 * C274) * C62) *
                C63 * C14564 +
            ((C61 * C828 - C71 * C820) * C148 +
             (C61 * C1126 - C71 * C1120) * C62) *
                C63 * C14474) *
               C14428 +
           (((C61 * C387 - C71 * C379) * C148 +
             (C61 * C685 - C71 * C679) * C62) *
                C63 * C14564 +
            ((C71 * C1921 - C61 * C1925) * C148 +
             (C71 * C2257 - C61 * C2260) * C62) *
                C63 * C14474) *
               C14435 +
           (((C71 * C380 - C61 * C389) * C148 +
             (C71 * C680 - C61 * C686) * C62) *
                C63 * C14564 +
            ((C61 * C3721 - C71 * C3720) * C148 +
             (C61 * C4033 - C71 * C4032) * C62) *
                C63 * C14474) *
               C7608) *
              C14352)) /
        (p * q * std::sqrt(p + q));
    d2eezy[1] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((((C63 * C116 - C115 * C73) * C148 +
                      (C63 * C300 - C115 * C268) * C62) *
                         C61 * C14564 +
                     ((C115 * C818 - C63 * C880) * C148 +
                      (C115 * C1118 - C63 * C1168) * C62) *
                         C61 * C14474) *
                        C14428 +
                    (((C115 * C377 - C63 * C439) * C148 +
                      (C115 * C677 - C63 * C727) * C62) *
                         C61 * C14564 +
                     ((C63 * C1982 - C115 * C1920) * C148 +
                      (C63 * C2312 - C115 * C2256) * C62) *
                         C61 * C14474) *
                        C14435 +
                    (((C63 * C440 - C115 * C378) * C148 +
                      (C63 * C728 - C115 * C678) * C62) *
                         C61 * C14564 +
                     ((C115 * C2991 - C63 * C3041) * C148 +
                      (C115 * C3255 - C63 * C3299) * C62) *
                         C61 * C14474) *
                        C7608) *
                       C6844 +
                   ((((C115 * C74 - C63 * C117) * C148 +
                      (C115 * C269 - C63 * C301) * C62) *
                         C61 * C14564 +
                     ((C63 * C882 - C115 * C820) * C148 +
                      (C63 * C1170 - C115 * C1120) * C62) *
                         C61 * C14474) *
                        C14428 +
                    (((C63 * C441 - C115 * C379) * C148 +
                      (C63 * C729 - C115 * C679) * C62) *
                         C61 * C14564 +
                     ((C115 * C1921 - C63 * C1983) * C148 +
                      (C115 * C2257 - C63 * C2313) * C62) *
                         C61 * C14474) *
                        C14435 +
                    (((C115 * C380 - C63 * C442) * C148 +
                      (C115 * C680 - C63 * C730) * C62) *
                         C61 * C14564 +
                     ((C63 * C3774 - C115 * C3720) * C148 +
                      (C63 * C4084 - C115 * C4032) * C62) *
                         C61 * C14474) *
                        C7608) *
                       C14352)) /
                 (p * q * std::sqrt(p + q));
    d2eezz[1] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) * C63 * C61 *
                C14564 -
            (C148 * C930 - C327 * C818 - C148 * C1118 + C62 * C1212) * C63 *
                C61 * C14474) *
               C14428 +
           ((C148 * C2038 - C327 * C1920 - C148 * C2256 + C62 * C2365) * C63 *
                C61 * C14474 -
            (C148 * C489 - C327 * C377 - C148 * C677 + C62 * C771) * C63 * C61 *
                C14564) *
               C14435 +
           ((C148 * C490 - C327 * C378 - C148 * C678 + C62 * C772) * C63 * C61 *
                C14564 -
            (C148 * C3085 - C327 * C2991 - C148 * C3255 + C62 * C3340) * C63 *
                C61 * C14474) *
               C7608) *
              C6844 +
          (((C148 * C932 - C327 * C820 - C148 * C1120 + C62 * C1214) * C63 *
                C61 * C14474 -
            (C148 * C150 - C327 * C74 - C148 * C269 + C62 * C329) * C63 * C61 *
                C14564) *
               C14428 +
           ((C148 * C491 - C327 * C379 - C148 * C679 + C62 * C773) * C63 * C61 *
                C14564 -
            (C148 * C2039 - C327 * C1921 - C148 * C2257 + C62 * C2366) * C63 *
                C61 * C14474) *
               C14435 +
           ((C148 * C3826 - C327 * C3720 - C148 * C4032 + C62 * C4135) * C63 *
                C61 * C14474 -
            (C148 * C492 - C327 * C380 - C148 * C680 + C62 * C774) * C63 * C61 *
                C14564) *
               C7608) *
              C14352)) /
        (p * q * std::sqrt(p + q));
    d2eexx[2] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 *
                        C63 * C14387 * C14631 -
                    (C71 * C383 - C72 * C377 - C71 * C384 + C61 * C395) * C62 *
                        C63 * C14387 * C14627 +
                    (C71 * C385 - C72 * C378 - C71 * C386 + C61 * C396) * C62 *
                        C63 * C14387 * C14617 -
                    (C71 * C2746 - C72 * C2744 - C71 * C2747 + C61 * C2750) *
                        C62 * C63 * C14387 * C14599) *
                       C6844 +
                   ((C71 * C387 - C72 * C379 - C71 * C388 + C61 * C397) * C62 *
                        C63 * C14387 * C14627 -
                    (C71 * C80 - C72 * C74 - C71 * C81 + C61 * C89) * C62 *
                        C63 * C14387 * C14631 -
                    (C71 * C389 - C72 * C380 - C71 * C390 + C61 * C398) * C62 *
                        C63 * C14387 * C14617 +
                    (C71 * C3383 - C72 * C3382 - C71 * C3384 + C61 * C3385) *
                        C62 * C63 * C14387 * C14599) *
                       C14352)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 *
                        C63 * C14387 * C6528 -
                    (C71 * C383 - C72 * C377 - C71 * C384 + C61 * C395) * C62 *
                        C63 * C14387 * C14432) *
                       C14630 +
                   ((C71 * C387 - C72 * C379 - C71 * C388 + C61 * C397) * C62 *
                        C63 * C14387 * C14432 -
                    (C71 * C80 - C72 * C74 - C71 * C81 + C61 * C89) * C62 *
                        C63 * C14387 * C6528) *
                       C14623 +
                   ((C71 * C82 - C72 * C75 - C71 * C83 + C61 * C90) * C62 *
                        C63 * C14387 * C6528 -
                    (C71 * C391 - C72 * C381 - C71 * C392 + C61 * C399) * C62 *
                        C63 * C14387 * C14432) *
                       C14610 +
                   ((C71 * C1259 - C72 * C1258 - C71 * C1260 + C61 * C1261) *
                        C62 * C63 * C14387 * C14432 -
                    (C71 * C84 - C72 * C76 - C71 * C85 + C61 * C91) * C62 *
                        C63 * C14387 * C6528) *
                       C14593)) /
                     (p * q * std::sqrt(p + q)) +
                 (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 *
                         C63 * C14625 -
                     (C71 * C824 - C72 * C818 - C71 * C825 + C61 * C836) * C62 *
                         C63 * C14614 +
                     (C71 * C826 - C72 * C819 - C71 * C827 + C61 * C837) * C62 *
                         C63 * C14592) *
                        C6528 +
                    ((C71 * C1923 - C72 * C1920 - C71 * C1924 + C61 * C1929) *
                         C62 * C63 * C14614 -
                     (C71 * C383 - C72 * C377 - C71 * C384 + C61 * C395) * C62 *
                         C63 * C14625 -
                     (C71 * C2993 - C72 * C2990 - C71 * C2994 + C61 * C2999) *
                         C62 * C63 * C14592) *
                        C14432) *
                       C6844 +
                   (((C71 * C828 - C72 * C820 - C71 * C829 + C61 * C838) * C62 *
                         C63 * C14614 -
                     (C71 * C80 - C72 * C74 - C71 * C81 + C61 * C89) * C62 *
                         C63 * C14625 -
                     (C71 * C830 - C72 * C821 - C71 * C831 + C61 * C839) * C62 *
                         C63 * C14592) *
                        C6528 +
                    ((C71 * C387 - C72 * C379 - C71 * C388 + C61 * C397) * C62 *
                         C63 * C14625 -
                     (C71 * C1925 - C72 * C1921 - C71 * C1926 + C61 * C1930) *
                         C62 * C63 * C14614 +
                     (C71 * C5431 - C72 * C5430 - C71 * C5432 + C61 * C5433) *
                         C62 * C63 * C14592) *
                        C14432) *
                       C14352)) /
                     (p * q * std::sqrt(p + q));
    d2eexy[2] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C63 * C116 - C115 * C73) * C71 + (C63 * C121 - C115 * C79) * C61) *
               C62 * C14387 * C14631 +
           ((C115 * C377 - C63 * C439) * C71 +
            (C115 * C384 - C63 * C445) * C61) *
               C62 * C14387 * C14627 +
           ((C63 * C440 - C115 * C378) * C71 +
            (C63 * C446 - C115 * C386) * C61) *
               C62 * C14387 * C14617 +
           ((C115 * C2744 - C63 * C2774) * C71 +
            (C115 * C2747 - C63 * C2776) * C61) *
               C62 * C14387 * C14599) *
              C6844 +
          (((C115 * C74 - C63 * C117) * C71 + (C115 * C81 - C63 * C122) * C61) *
               C62 * C14387 * C14631 +
           ((C63 * C441 - C115 * C379) * C71 +
            (C63 * C447 - C115 * C388) * C61) *
               C62 * C14387 * C14627 +
           ((C115 * C380 - C63 * C442) * C71 +
            (C115 * C390 - C63 * C448) * C61) *
               C62 * C14387 * C14617 +
           ((C63 * C3420 - C115 * C3382) * C71 +
            (C63 * C3421 - C115 * C3384) * C61) *
               C62 * C14387 * C14599) *
              C14352)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C63 * C116 - C115 * C73) * C71 + (C63 * C121 - C115 * C79) * C61) *
               C62 * C14387 * C6528 +
           ((C115 * C377 - C63 * C439) * C71 +
            (C115 * C384 - C63 * C445) * C61) *
               C62 * C14387 * C14432) *
              C14630 +
          (((C115 * C74 - C63 * C117) * C71 + (C115 * C81 - C63 * C122) * C61) *
               C62 * C14387 * C6528 +
           ((C63 * C441 - C115 * C379) * C71 +
            (C63 * C447 - C115 * C388) * C61) *
               C62 * C14387 * C14432) *
              C14623 +
          (((C63 * C118 - C115 * C75) * C71 + (C63 * C123 - C115 * C83) * C61) *
               C62 * C14387 * C6528 +
           ((C115 * C381 - C63 * C443) * C71 +
            (C115 * C392 - C63 * C449) * C61) *
               C62 * C14387 * C14432) *
              C14610 +
          (((C115 * C76 - C63 * C119) * C71 + (C115 * C85 - C63 * C124) * C61) *
               C62 * C14387 * C6528 +
           ((C63 * C1296 - C115 * C1258) * C71 +
            (C63 * C1297 - C115 * C1260) * C61) *
               C62 * C14387 * C14432) *
              C14593)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C63 * C116 - C115 * C73) * C71 +
             (C63 * C121 - C115 * C79) * C61) *
                C62 * C14625 +
            ((C115 * C818 - C63 * C880) * C71 +
             (C115 * C825 - C63 * C886) * C61) *
                C62 * C14614 +
            ((C63 * C881 - C115 * C819) * C71 +
             (C63 * C887 - C115 * C827) * C61) *
                C62 * C14592) *
               C6528 +
           (((C115 * C377 - C63 * C439) * C71 +
             (C115 * C384 - C63 * C445) * C61) *
                C62 * C14625 +
            ((C63 * C1982 - C115 * C1920) * C71 +
             (C63 * C1985 - C115 * C1924) * C61) *
                C62 * C14614 +
            ((C115 * C2990 - C63 * C3040) * C71 +
             (C115 * C2994 - C63 * C3043) * C61) *
                C62 * C14592) *
               C14432) *
              C6844 +
          ((((C115 * C74 - C63 * C117) * C71 +
             (C115 * C81 - C63 * C122) * C61) *
                C62 * C14625 +
            ((C63 * C882 - C115 * C820) * C71 +
             (C63 * C888 - C115 * C829) * C61) *
                C62 * C14614 +
            ((C115 * C821 - C63 * C883) * C71 +
             (C115 * C831 - C63 * C889) * C61) *
                C62 * C14592) *
               C6528 +
           (((C63 * C441 - C115 * C379) * C71 +
             (C63 * C447 - C115 * C388) * C61) *
                C62 * C14625 +
            ((C115 * C1921 - C63 * C1983) * C71 +
             (C115 * C1926 - C63 * C1986) * C61) *
                C62 * C14614 +
            ((C63 * C5484 - C115 * C5430) * C71 +
             (C63 * C5485 - C115 * C5432) * C61) *
                C62 * C14592) *
               C14432) *
              C14352)) /
            (p * q * std::sqrt(p + q));
    d2eexz[2] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C62 * C149 - C148 * C73) * C71 + (C62 * C154 - C148 * C79) * C61) *
               C63 * C14387 * C14631 +
           ((C148 * C377 - C62 * C489) * C71 +
            (C148 * C384 - C62 * C495) * C61) *
               C63 * C14387 * C14627 +
           ((C62 * C490 - C148 * C378) * C71 +
            (C62 * C496 - C148 * C386) * C61) *
               C63 * C14387 * C14617 +
           ((C148 * C2744 - C62 * C2800) * C71 +
            (C148 * C2747 - C62 * C2802) * C61) *
               C63 * C14387 * C14599) *
              C6844 +
          (((C148 * C74 - C62 * C150) * C71 + (C148 * C81 - C62 * C155) * C61) *
               C63 * C14387 * C14631 +
           ((C62 * C491 - C148 * C379) * C71 +
            (C62 * C497 - C148 * C388) * C61) *
               C63 * C14387 * C14627 +
           ((C148 * C380 - C62 * C492) * C71 +
            (C148 * C390 - C62 * C498) * C61) *
               C63 * C14387 * C14617 +
           ((C62 * C3456 - C148 * C3382) * C71 +
            (C62 * C3457 - C148 * C3384) * C61) *
               C63 * C14387 * C14599) *
              C14352)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C62 * C149 - C148 * C73) * C71 + (C62 * C154 - C148 * C79) * C61) *
               C63 * C14387 * C6528 +
           ((C148 * C377 - C62 * C489) * C71 +
            (C148 * C384 - C62 * C495) * C61) *
               C63 * C14387 * C14432) *
              C14630 +
          (((C148 * C74 - C62 * C150) * C71 + (C148 * C81 - C62 * C155) * C61) *
               C63 * C14387 * C6528 +
           ((C62 * C491 - C148 * C379) * C71 +
            (C62 * C497 - C148 * C388) * C61) *
               C63 * C14387 * C14432) *
              C14623 +
          (((C62 * C151 - C148 * C75) * C71 + (C62 * C156 - C148 * C83) * C61) *
               C63 * C14387 * C6528 +
           ((C148 * C381 - C62 * C493) * C71 +
            (C148 * C392 - C62 * C499) * C61) *
               C63 * C14387 * C14432) *
              C14610 +
          (((C148 * C76 - C62 * C152) * C71 + (C148 * C85 - C62 * C157) * C61) *
               C63 * C14387 * C6528 +
           ((C62 * C1332 - C148 * C1258) * C71 +
            (C62 * C1333 - C148 * C1260) * C61) *
               C63 * C14387 * C14432) *
              C14593)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C62 * C149 - C148 * C73) * C71 +
             (C62 * C154 - C148 * C79) * C61) *
                C63 * C14625 +
            ((C148 * C818 - C62 * C930) * C71 +
             (C148 * C825 - C62 * C936) * C61) *
                C63 * C14614 +
            ((C62 * C931 - C148 * C819) * C71 +
             (C62 * C937 - C148 * C827) * C61) *
                C63 * C14592) *
               C6528 +
           (((C148 * C377 - C62 * C489) * C71 +
             (C148 * C384 - C62 * C495) * C61) *
                C63 * C14625 +
            ((C62 * C2038 - C148 * C1920) * C71 +
             (C62 * C2041 - C148 * C1924) * C61) *
                C63 * C14614 +
            ((C148 * C2990 - C62 * C3084) * C71 +
             (C148 * C2994 - C62 * C3087) * C61) *
                C63 * C14592) *
               C14432) *
              C6844 +
          ((((C148 * C74 - C62 * C150) * C71 +
             (C148 * C81 - C62 * C155) * C61) *
                C63 * C14625 +
            ((C62 * C932 - C148 * C820) * C71 +
             (C62 * C938 - C148 * C829) * C61) *
                C63 * C14614 +
            ((C148 * C821 - C62 * C933) * C71 +
             (C148 * C831 - C62 * C939) * C61) *
                C63 * C14592) *
               C6528 +
           (((C62 * C491 - C148 * C379) * C71 +
             (C62 * C497 - C148 * C388) * C61) *
                C63 * C14625 +
            ((C148 * C1921 - C62 * C2039) * C71 +
             (C148 * C1926 - C62 * C2042) * C61) *
                C63 * C14614 +
            ((C62 * C5536 - C148 * C5430) * C71 +
             (C62 * C5537 - C148 * C5432) * C61) *
                C63 * C14592) *
               C14432) *
              C14352)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[2] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
               C62 * C14387 * C14631 +
           ((C71 * C377 - C61 * C383) * C115 +
            (C71 * C539 - C61 * C545) * C63) *
               C62 * C14387 * C14627 +
           ((C61 * C385 - C71 * C378) * C115 +
            (C61 * C546 - C71 * C540) * C63) *
               C62 * C14387 * C14617 +
           ((C71 * C2744 - C61 * C2746) * C115 +
            (C71 * C2826 - C61 * C2828) * C63) *
               C62 * C14387 * C14599) *
              C6844 +
          (((C71 * C74 - C61 * C80) * C115 + (C71 * C182 - C61 * C187) * C63) *
               C62 * C14387 * C14631 +
           ((C61 * C387 - C71 * C379) * C115 +
            (C61 * C547 - C71 * C541) * C63) *
               C62 * C14387 * C14627 +
           ((C71 * C380 - C61 * C389) * C115 +
            (C71 * C542 - C61 * C548) * C63) *
               C62 * C14387 * C14617 +
           ((C61 * C3383 - C71 * C3382) * C115 +
            (C61 * C3493 - C71 * C3492) * C63) *
               C62 * C14387 * C14599) *
              C14352)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
               C62 * C14387 * C6528 +
           ((C71 * C377 - C61 * C383) * C115 +
            (C71 * C539 - C61 * C545) * C63) *
               C62 * C14387 * C14432) *
              C14630 +
          (((C71 * C74 - C61 * C80) * C115 + (C71 * C182 - C61 * C187) * C63) *
               C62 * C14387 * C6528 +
           ((C61 * C387 - C71 * C379) * C115 +
            (C61 * C547 - C71 * C541) * C63) *
               C62 * C14387 * C14432) *
              C14623 +
          (((C61 * C82 - C71 * C75) * C115 + (C61 * C188 - C71 * C183) * C63) *
               C62 * C14387 * C6528 +
           ((C71 * C381 - C61 * C391) * C115 +
            (C71 * C543 - C61 * C549) * C63) *
               C62 * C14387 * C14432) *
              C14610 +
          (((C71 * C76 - C61 * C84) * C115 + (C71 * C184 - C61 * C189) * C63) *
               C62 * C14387 * C6528 +
           ((C61 * C1259 - C71 * C1258) * C115 +
            (C61 * C1369 - C71 * C1368) * C63) *
               C62 * C14387 * C14432) *
              C14593)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
                C62 * C14625 +
            ((C71 * C818 - C61 * C824) * C115 +
             (C71 * C980 - C61 * C986) * C63) *
                C62 * C14614 +
            ((C61 * C826 - C71 * C819) * C115 +
             (C61 * C987 - C71 * C981) * C63) *
                C62 * C14592) *
               C6528 +
           (((C71 * C377 - C61 * C383) * C115 +
             (C71 * C539 - C61 * C545) * C63) *
                C62 * C14625 +
            ((C61 * C1923 - C71 * C1920) * C115 +
             (C61 * C2097 - C71 * C2094) * C63) *
                C62 * C14614 +
            ((C71 * C2990 - C61 * C2993) * C115 +
             (C71 * C3128 - C61 * C3131) * C63) *
                C62 * C14592) *
               C14432) *
              C6844 +
          ((((C71 * C74 - C61 * C80) * C115 + (C71 * C182 - C61 * C187) * C63) *
                C62 * C14625 +
            ((C61 * C828 - C71 * C820) * C115 +
             (C61 * C988 - C71 * C982) * C63) *
                C62 * C14614 +
            ((C71 * C821 - C61 * C830) * C115 +
             (C71 * C983 - C61 * C989) * C63) *
                C62 * C14592) *
               C6528 +
           (((C61 * C387 - C71 * C379) * C115 +
             (C61 * C547 - C71 * C541) * C63) *
                C62 * C14625 +
            ((C71 * C1921 - C61 * C1925) * C115 +
             (C71 * C2095 - C61 * C2098) * C63) *
                C62 * C14614 +
            ((C61 * C5431 - C71 * C5430) * C115 +
             (C61 * C5589 - C71 * C5588) * C63) *
                C62 * C14592) *
               C14432) *
              C14352)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[2] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) * C61 * C62 *
               C14387 * C14631 -
           (C115 * C439 - C213 * C377 - C115 * C539 + C63 * C589) * C61 * C62 *
               C14387 * C14627 +
           (C115 * C440 - C213 * C378 - C115 * C540 + C63 * C590) * C61 * C62 *
               C14387 * C14617 -
           (C115 * C2774 - C213 * C2744 - C115 * C2826 + C63 * C2852) * C61 *
               C62 * C14387 * C14599) *
              C6844 +
          ((C115 * C441 - C213 * C379 - C115 * C541 + C63 * C591) * C61 * C62 *
               C14387 * C14627 -
           (C115 * C117 - C213 * C74 - C115 * C182 + C63 * C215) * C61 * C62 *
               C14387 * C14631 -
           (C115 * C442 - C213 * C380 - C115 * C542 + C63 * C592) * C61 * C62 *
               C14387 * C14617 +
           (C115 * C3420 - C213 * C3382 - C115 * C3492 + C63 * C3528) * C61 *
               C62 * C14387 * C14599) *
              C14352)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) * C61 * C62 *
               C14387 * C6528 -
           (C115 * C439 - C213 * C377 - C115 * C539 + C63 * C589) * C61 * C62 *
               C14387 * C14432) *
              C14630 +
          ((C115 * C441 - C213 * C379 - C115 * C541 + C63 * C591) * C61 * C62 *
               C14387 * C14432 -
           (C115 * C117 - C213 * C74 - C115 * C182 + C63 * C215) * C61 * C62 *
               C14387 * C6528) *
              C14623 +
          ((C115 * C118 - C213 * C75 - C115 * C183 + C63 * C216) * C61 * C62 *
               C14387 * C6528 -
           (C115 * C443 - C213 * C381 - C115 * C543 + C63 * C593) * C61 * C62 *
               C14387 * C14432) *
              C14610 +
          ((C115 * C1296 - C213 * C1258 - C115 * C1368 + C63 * C1404) * C61 *
               C62 * C14387 * C14432 -
           (C115 * C119 - C213 * C76 - C115 * C184 + C63 * C217) * C61 * C62 *
               C14387 * C6528) *
              C14593)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) * C61 * C62 *
                C14625 -
            (C115 * C880 - C213 * C818 - C115 * C980 + C63 * C1030) * C61 *
                C62 * C14614 +
            (C115 * C881 - C213 * C819 - C115 * C981 + C63 * C1031) * C61 *
                C62 * C14592) *
               C6528 +
           ((C115 * C1982 - C213 * C1920 - C115 * C2094 + C63 * C2150) * C61 *
                C62 * C14614 -
            (C115 * C439 - C213 * C377 - C115 * C539 + C63 * C589) * C61 * C62 *
                C14625 -
            (C115 * C3040 - C213 * C2990 - C115 * C3128 + C63 * C3172) * C61 *
                C62 * C14592) *
               C14432) *
              C6844 +
          (((C115 * C882 - C213 * C820 - C115 * C982 + C63 * C1032) * C61 *
                C62 * C14614 -
            (C115 * C117 - C213 * C74 - C115 * C182 + C63 * C215) * C61 * C62 *
                C14625 -
            (C115 * C883 - C213 * C821 - C115 * C983 + C63 * C1033) * C61 *
                C62 * C14592) *
               C6528 +
           ((C115 * C441 - C213 * C379 - C115 * C541 + C63 * C591) * C61 * C62 *
                C14625 -
            (C115 * C1983 - C213 * C1921 - C115 * C2095 + C63 * C2151) * C61 *
                C62 * C14614 +
            (C115 * C5484 - C213 * C5430 - C115 * C5588 + C63 * C5640) * C61 *
                C62 * C14592) *
               C14432) *
              C14352)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[2] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((((C62 * C149 - C148 * C73) * C115 +
                     (C62 * C241 - C148 * C181) * C63) *
                        C61 * C14387 * C14631 +
                    ((C148 * C377 - C62 * C489) * C115 +
                     (C148 * C539 - C62 * C633) * C63) *
                        C61 * C14387 * C14627 +
                    ((C62 * C490 - C148 * C378) * C115 +
                     (C62 * C634 - C148 * C540) * C63) *
                        C61 * C14387 * C14617 +
                    ((C148 * C2744 - C62 * C2800) * C115 +
                     (C148 * C2826 - C62 * C2876) * C63) *
                        C61 * C14387 * C14599) *
                       C6844 +
                   (((C148 * C74 - C62 * C150) * C115 +
                     (C148 * C182 - C62 * C242) * C63) *
                        C61 * C14387 * C14631 +
                    ((C62 * C491 - C148 * C379) * C115 +
                     (C62 * C635 - C148 * C541) * C63) *
                        C61 * C14387 * C14627 +
                    ((C148 * C380 - C62 * C492) * C115 +
                     (C148 * C542 - C62 * C636) * C63) *
                        C61 * C14387 * C14617 +
                    ((C62 * C3456 - C148 * C3382) * C115 +
                     (C62 * C3563 - C148 * C3492) * C63) *
                        C61 * C14387 * C14599) *
                       C14352)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((((C62 * C149 - C148 * C73) * C115 +
                     (C62 * C241 - C148 * C181) * C63) *
                        C61 * C14387 * C6528 +
                    ((C148 * C377 - C62 * C489) * C115 +
                     (C148 * C539 - C62 * C633) * C63) *
                        C61 * C14387 * C14432) *
                       C14630 +
                   (((C148 * C74 - C62 * C150) * C115 +
                     (C148 * C182 - C62 * C242) * C63) *
                        C61 * C14387 * C6528 +
                    ((C62 * C491 - C148 * C379) * C115 +
                     (C62 * C635 - C148 * C541) * C63) *
                        C61 * C14387 * C14432) *
                       C14623 +
                   (((C62 * C151 - C148 * C75) * C115 +
                     (C62 * C243 - C148 * C183) * C63) *
                        C61 * C14387 * C6528 +
                    ((C148 * C381 - C62 * C493) * C115 +
                     (C148 * C543 - C62 * C637) * C63) *
                        C61 * C14387 * C14432) *
                       C14610 +
                   (((C148 * C76 - C62 * C152) * C115 +
                     (C148 * C184 - C62 * C244) * C63) *
                        C61 * C14387 * C6528 +
                    ((C62 * C1332 - C148 * C1258) * C115 +
                     (C62 * C1439 - C148 * C1368) * C63) *
                        C61 * C14387 * C14432) *
                       C14593)) /
                     (p * q * std::sqrt(p + q)) +
                 (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C62 * C149 - C148 * C73) * C115 +
                      (C62 * C241 - C148 * C181) * C63) *
                         C61 * C14625 +
                     ((C148 * C818 - C62 * C930) * C115 +
                      (C148 * C980 - C62 * C1074) * C63) *
                         C61 * C14614 +
                     ((C62 * C931 - C148 * C819) * C115 +
                      (C62 * C1075 - C148 * C981) * C63) *
                         C61 * C14592) *
                        C6528 +
                    (((C148 * C377 - C62 * C489) * C115 +
                      (C148 * C539 - C62 * C633) * C63) *
                         C61 * C14625 +
                     ((C62 * C2038 - C148 * C1920) * C115 +
                      (C62 * C2203 - C148 * C2094) * C63) *
                         C61 * C14614 +
                     ((C148 * C2990 - C62 * C3084) * C115 +
                      (C148 * C3128 - C62 * C3213) * C63) *
                         C61 * C14592) *
                        C14432) *
                       C6844 +
                   ((((C148 * C74 - C62 * C150) * C115 +
                      (C148 * C182 - C62 * C242) * C63) *
                         C61 * C14625 +
                     ((C62 * C932 - C148 * C820) * C115 +
                      (C62 * C1076 - C148 * C982) * C63) *
                         C61 * C14614 +
                     ((C148 * C821 - C62 * C933) * C115 +
                      (C148 * C983 - C62 * C1077) * C63) *
                         C61 * C14592) *
                        C6528 +
                    (((C62 * C491 - C148 * C379) * C115 +
                      (C62 * C635 - C148 * C541) * C63) *
                         C61 * C14625 +
                     ((C148 * C1921 - C62 * C2039) * C115 +
                      (C148 * C2095 - C62 * C2204) * C63) *
                         C61 * C14614 +
                     ((C62 * C5536 - C148 * C5430) * C115 +
                      (C62 * C5691 - C148 * C5588) * C63) *
                         C61 * C14592) *
                        C14432) *
                       C14352)) /
                     (p * q * std::sqrt(p + q));
    d2eezx[2] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
               C63 * C14387 * C14631 +
           ((C71 * C377 - C61 * C383) * C148 +
            (C71 * C677 - C61 * C683) * C62) *
               C63 * C14387 * C14627 +
           ((C61 * C385 - C71 * C378) * C148 +
            (C61 * C684 - C71 * C678) * C62) *
               C63 * C14387 * C14617 +
           ((C71 * C2744 - C61 * C2746) * C148 +
            (C71 * C2900 - C61 * C2902) * C62) *
               C63 * C14387 * C14599) *
              C6844 +
          (((C71 * C74 - C61 * C80) * C148 + (C71 * C269 - C61 * C274) * C62) *
               C63 * C14387 * C14631 +
           ((C61 * C387 - C71 * C379) * C148 +
            (C61 * C685 - C71 * C679) * C62) *
               C63 * C14387 * C14627 +
           ((C71 * C380 - C61 * C389) * C148 +
            (C71 * C680 - C61 * C686) * C62) *
               C63 * C14387 * C14617 +
           ((C61 * C3383 - C71 * C3382) * C148 +
            (C61 * C3599 - C71 * C3598) * C62) *
               C63 * C14387 * C14599) *
              C14352)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
               C63 * C14387 * C6528 +
           ((C71 * C377 - C61 * C383) * C148 +
            (C71 * C677 - C61 * C683) * C62) *
               C63 * C14387 * C14432) *
              C14630 +
          (((C71 * C74 - C61 * C80) * C148 + (C71 * C269 - C61 * C274) * C62) *
               C63 * C14387 * C6528 +
           ((C61 * C387 - C71 * C379) * C148 +
            (C61 * C685 - C71 * C679) * C62) *
               C63 * C14387 * C14432) *
              C14623 +
          (((C61 * C82 - C71 * C75) * C148 + (C61 * C275 - C71 * C270) * C62) *
               C63 * C14387 * C6528 +
           ((C71 * C381 - C61 * C391) * C148 +
            (C71 * C681 - C61 * C687) * C62) *
               C63 * C14387 * C14432) *
              C14610 +
          (((C71 * C76 - C61 * C84) * C148 + (C71 * C271 - C61 * C276) * C62) *
               C63 * C14387 * C6528 +
           ((C61 * C1259 - C71 * C1258) * C148 +
            (C61 * C1475 - C71 * C1474) * C62) *
               C63 * C14387 * C14432) *
              C14593)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
                C63 * C14625 +
            ((C71 * C818 - C61 * C824) * C148 +
             (C71 * C1118 - C61 * C1124) * C62) *
                C63 * C14614 +
            ((C61 * C826 - C71 * C819) * C148 +
             (C61 * C1125 - C71 * C1119) * C62) *
                C63 * C14592) *
               C6528 +
           (((C71 * C377 - C61 * C383) * C148 +
             (C71 * C677 - C61 * C683) * C62) *
                C63 * C14625 +
            ((C61 * C1923 - C71 * C1920) * C148 +
             (C61 * C2259 - C71 * C2256) * C62) *
                C63 * C14614 +
            ((C71 * C2990 - C61 * C2993) * C148 +
             (C71 * C3254 - C61 * C3257) * C62) *
                C63 * C14592) *
               C14432) *
              C6844 +
          ((((C71 * C74 - C61 * C80) * C148 + (C71 * C269 - C61 * C274) * C62) *
                C63 * C14625 +
            ((C61 * C828 - C71 * C820) * C148 +
             (C61 * C1126 - C71 * C1120) * C62) *
                C63 * C14614 +
            ((C71 * C821 - C61 * C830) * C148 +
             (C71 * C1121 - C61 * C1127) * C62) *
                C63 * C14592) *
               C6528 +
           (((C61 * C387 - C71 * C379) * C148 +
             (C61 * C685 - C71 * C679) * C62) *
                C63 * C14625 +
            ((C71 * C1921 - C61 * C1925) * C148 +
             (C71 * C2257 - C61 * C2260) * C62) *
                C63 * C14614 +
            ((C61 * C5431 - C71 * C5430) * C148 +
             (C61 * C5743 - C71 * C5742) * C62) *
                C63 * C14592) *
               C14432) *
              C14352)) /
            (p * q * std::sqrt(p + q));
    d2eezy[2] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((((C63 * C116 - C115 * C73) * C148 +
                     (C63 * C300 - C115 * C268) * C62) *
                        C61 * C14387 * C14631 +
                    ((C115 * C377 - C63 * C439) * C148 +
                     (C115 * C677 - C63 * C727) * C62) *
                        C61 * C14387 * C14627 +
                    ((C63 * C440 - C115 * C378) * C148 +
                     (C63 * C728 - C115 * C678) * C62) *
                        C61 * C14387 * C14617 +
                    ((C115 * C2744 - C63 * C2774) * C148 +
                     (C115 * C2900 - C63 * C2926) * C62) *
                        C61 * C14387 * C14599) *
                       C6844 +
                   (((C115 * C74 - C63 * C117) * C148 +
                     (C115 * C269 - C63 * C301) * C62) *
                        C61 * C14387 * C14631 +
                    ((C63 * C441 - C115 * C379) * C148 +
                     (C63 * C729 - C115 * C679) * C62) *
                        C61 * C14387 * C14627 +
                    ((C115 * C380 - C63 * C442) * C148 +
                     (C115 * C680 - C63 * C730) * C62) *
                        C61 * C14387 * C14617 +
                    ((C63 * C3420 - C115 * C3382) * C148 +
                     (C63 * C3634 - C115 * C3598) * C62) *
                        C61 * C14387 * C14599) *
                       C14352)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((((C63 * C116 - C115 * C73) * C148 +
                     (C63 * C300 - C115 * C268) * C62) *
                        C61 * C14387 * C6528 +
                    ((C115 * C377 - C63 * C439) * C148 +
                     (C115 * C677 - C63 * C727) * C62) *
                        C61 * C14387 * C14432) *
                       C14630 +
                   (((C115 * C74 - C63 * C117) * C148 +
                     (C115 * C269 - C63 * C301) * C62) *
                        C61 * C14387 * C6528 +
                    ((C63 * C441 - C115 * C379) * C148 +
                     (C63 * C729 - C115 * C679) * C62) *
                        C61 * C14387 * C14432) *
                       C14623 +
                   (((C63 * C118 - C115 * C75) * C148 +
                     (C63 * C302 - C115 * C270) * C62) *
                        C61 * C14387 * C6528 +
                    ((C115 * C381 - C63 * C443) * C148 +
                     (C115 * C681 - C63 * C731) * C62) *
                        C61 * C14387 * C14432) *
                       C14610 +
                   (((C115 * C76 - C63 * C119) * C148 +
                     (C115 * C271 - C63 * C303) * C62) *
                        C61 * C14387 * C6528 +
                    ((C63 * C1296 - C115 * C1258) * C148 +
                     (C63 * C1510 - C115 * C1474) * C62) *
                        C61 * C14387 * C14432) *
                       C14593)) /
                     (p * q * std::sqrt(p + q)) +
                 (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C63 * C116 - C115 * C73) * C148 +
                      (C63 * C300 - C115 * C268) * C62) *
                         C61 * C14625 +
                     ((C115 * C818 - C63 * C880) * C148 +
                      (C115 * C1118 - C63 * C1168) * C62) *
                         C61 * C14614 +
                     ((C63 * C881 - C115 * C819) * C148 +
                      (C63 * C1169 - C115 * C1119) * C62) *
                         C61 * C14592) *
                        C6528 +
                    (((C115 * C377 - C63 * C439) * C148 +
                      (C115 * C677 - C63 * C727) * C62) *
                         C61 * C14625 +
                     ((C63 * C1982 - C115 * C1920) * C148 +
                      (C63 * C2312 - C115 * C2256) * C62) *
                         C61 * C14614 +
                     ((C115 * C2990 - C63 * C3040) * C148 +
                      (C115 * C3254 - C63 * C3298) * C62) *
                         C61 * C14592) *
                        C14432) *
                       C6844 +
                   ((((C115 * C74 - C63 * C117) * C148 +
                      (C115 * C269 - C63 * C301) * C62) *
                         C61 * C14625 +
                     ((C63 * C882 - C115 * C820) * C148 +
                      (C63 * C1170 - C115 * C1120) * C62) *
                         C61 * C14614 +
                     ((C115 * C821 - C63 * C883) * C148 +
                      (C115 * C1121 - C63 * C1171) * C62) *
                         C61 * C14592) *
                        C6528 +
                    (((C63 * C441 - C115 * C379) * C148 +
                      (C63 * C729 - C115 * C679) * C62) *
                         C61 * C14625 +
                     ((C115 * C1921 - C63 * C1983) * C148 +
                      (C115 * C2257 - C63 * C2313) * C62) *
                         C61 * C14614 +
                     ((C63 * C5484 - C115 * C5430) * C148 +
                      (C63 * C5794 - C115 * C5742) * C62) *
                         C61 * C14592) *
                        C14432) *
                       C14352)) /
                     (p * q * std::sqrt(p + q));
    d2eezz[2] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) * C63 * C61 *
               C14387 * C14631 -
           (C148 * C489 - C327 * C377 - C148 * C677 + C62 * C771) * C63 * C61 *
               C14387 * C14627 +
           (C148 * C490 - C327 * C378 - C148 * C678 + C62 * C772) * C63 * C61 *
               C14387 * C14617 -
           (C148 * C2800 - C327 * C2744 - C148 * C2900 + C62 * C2950) * C63 *
               C61 * C14387 * C14599) *
              C6844 +
          ((C148 * C491 - C327 * C379 - C148 * C679 + C62 * C773) * C63 * C61 *
               C14387 * C14627 -
           (C148 * C150 - C327 * C74 - C148 * C269 + C62 * C329) * C63 * C61 *
               C14387 * C14631 -
           (C148 * C492 - C327 * C380 - C148 * C680 + C62 * C774) * C63 * C61 *
               C14387 * C14617 +
           (C148 * C3456 - C327 * C3382 - C148 * C3598 + C62 * C3669) * C63 *
               C61 * C14387 * C14599) *
              C14352)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) * C63 * C61 *
               C14387 * C6528 -
           (C148 * C489 - C327 * C377 - C148 * C677 + C62 * C771) * C63 * C61 *
               C14387 * C14432) *
              C14630 +
          ((C148 * C491 - C327 * C379 - C148 * C679 + C62 * C773) * C63 * C61 *
               C14387 * C14432 -
           (C148 * C150 - C327 * C74 - C148 * C269 + C62 * C329) * C63 * C61 *
               C14387 * C6528) *
              C14623 +
          ((C148 * C151 - C327 * C75 - C148 * C270 + C62 * C330) * C63 * C61 *
               C14387 * C6528 -
           (C148 * C493 - C327 * C381 - C148 * C681 + C62 * C775) * C63 * C61 *
               C14387 * C14432) *
              C14610 +
          ((C148 * C1332 - C327 * C1258 - C148 * C1474 + C62 * C1545) * C63 *
               C61 * C14387 * C14432 -
           (C148 * C152 - C327 * C76 - C148 * C271 + C62 * C331) * C63 * C61 *
               C14387 * C6528) *
              C14593)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) * C63 * C61 *
                C14625 -
            (C148 * C930 - C327 * C818 - C148 * C1118 + C62 * C1212) * C63 *
                C61 * C14614 +
            (C148 * C931 - C327 * C819 - C148 * C1119 + C62 * C1213) * C63 *
                C61 * C14592) *
               C6528 +
           ((C148 * C2038 - C327 * C1920 - C148 * C2256 + C62 * C2365) * C63 *
                C61 * C14614 -
            (C148 * C489 - C327 * C377 - C148 * C677 + C62 * C771) * C63 * C61 *
                C14625 -
            (C148 * C3084 - C327 * C2990 - C148 * C3254 + C62 * C3339) * C63 *
                C61 * C14592) *
               C14432) *
              C6844 +
          (((C148 * C932 - C327 * C820 - C148 * C1120 + C62 * C1214) * C63 *
                C61 * C14614 -
            (C148 * C150 - C327 * C74 - C148 * C269 + C62 * C329) * C63 * C61 *
                C14625 -
            (C148 * C933 - C327 * C821 - C148 * C1121 + C62 * C1215) * C63 *
                C61 * C14592) *
               C6528 +
           ((C148 * C491 - C327 * C379 - C148 * C679 + C62 * C773) * C63 * C61 *
                C14625 -
            (C148 * C2039 - C327 * C1921 - C148 * C2257 + C62 * C2366) * C63 *
                C61 * C14614 +
            (C148 * C5536 - C327 * C5430 - C148 * C5742 + C62 * C5845) * C63 *
                C61 * C14592) *
               C14432) *
              C14352)) /
            (p * q * std::sqrt(p + q));
    d2eexx[3] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 *
                         C63 * C14564 -
                     (C71 * C824 - C72 * C818 - C71 * C825 + C61 * C836) * C62 *
                         C63 * C14474) *
                        C6528 +
                    ((C71 * C1923 - C72 * C1920 - C71 * C1924 + C61 * C1929) *
                         C62 * C63 * C14474 -
                     (C71 * C383 - C72 * C377 - C71 * C384 + C61 * C395) * C62 *
                         C63 * C14564) *
                        C14432) *
                       C14346 +
                   (((C71 * C828 - C72 * C820 - C71 * C829 + C61 * C838) * C62 *
                         C63 * C14474 -
                     (C71 * C80 - C72 * C74 - C71 * C81 + C61 * C89) * C62 *
                         C63 * C14564) *
                        C6528 +
                    ((C71 * C387 - C72 * C379 - C71 * C388 + C61 * C397) * C62 *
                         C63 * C14564 -
                     (C71 * C1925 - C72 * C1921 - C71 * C1926 + C61 * C1930) *
                         C62 * C63 * C14474) *
                        C14432) *
                       C14355 +
                   (((C71 * C82 - C72 * C75 - C71 * C83 + C61 * C90) * C62 *
                         C63 * C14564 -
                     (C71 * C832 - C72 * C822 - C71 * C833 + C61 * C840) * C62 *
                         C63 * C14474) *
                        C6528 +
                    ((C71 * C1927 - C72 * C1922 - C71 * C1928 + C61 * C1931) *
                         C62 * C63 * C14474 -
                     (C71 * C391 - C72 * C381 - C71 * C392 + C61 * C399) * C62 *
                         C63 * C14564) *
                        C14432) *
                       C7611)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[3] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((((C63 * C116 - C115 * C73) * C71 +
                      (C63 * C121 - C115 * C79) * C61) *
                         C62 * C14564 +
                     ((C115 * C818 - C63 * C880) * C71 +
                      (C115 * C825 - C63 * C886) * C61) *
                         C62 * C14474) *
                        C6528 +
                    (((C115 * C377 - C63 * C439) * C71 +
                      (C115 * C384 - C63 * C445) * C61) *
                         C62 * C14564 +
                     ((C63 * C1982 - C115 * C1920) * C71 +
                      (C63 * C1985 - C115 * C1924) * C61) *
                         C62 * C14474) *
                        C14432) *
                       C14346 +
                   ((((C115 * C74 - C63 * C117) * C71 +
                      (C115 * C81 - C63 * C122) * C61) *
                         C62 * C14564 +
                     ((C63 * C882 - C115 * C820) * C71 +
                      (C63 * C888 - C115 * C829) * C61) *
                         C62 * C14474) *
                        C6528 +
                    (((C63 * C441 - C115 * C379) * C71 +
                      (C63 * C447 - C115 * C388) * C61) *
                         C62 * C14564 +
                     ((C115 * C1921 - C63 * C1983) * C71 +
                      (C115 * C1926 - C63 * C1986) * C61) *
                         C62 * C14474) *
                        C14432) *
                       C14355 +
                   ((((C63 * C118 - C115 * C75) * C71 +
                      (C63 * C123 - C115 * C83) * C61) *
                         C62 * C14564 +
                     ((C115 * C822 - C63 * C884) * C71 +
                      (C115 * C833 - C63 * C890) * C61) *
                         C62 * C14474) *
                        C6528 +
                    (((C115 * C381 - C63 * C443) * C71 +
                      (C115 * C392 - C63 * C449) * C61) *
                         C62 * C14564 +
                     ((C63 * C1984 - C115 * C1922) * C71 +
                      (C63 * C1987 - C115 * C1928) * C61) *
                         C62 * C14474) *
                        C14432) *
                       C7611)) /
                 (p * q * std::sqrt(p + q));
    d2eexz[3] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((((C62 * C149 - C148 * C73) * C71 +
                      (C62 * C154 - C148 * C79) * C61) *
                         C63 * C14564 +
                     ((C148 * C818 - C62 * C930) * C71 +
                      (C148 * C825 - C62 * C936) * C61) *
                         C63 * C14474) *
                        C6528 +
                    (((C148 * C377 - C62 * C489) * C71 +
                      (C148 * C384 - C62 * C495) * C61) *
                         C63 * C14564 +
                     ((C62 * C2038 - C148 * C1920) * C71 +
                      (C62 * C2041 - C148 * C1924) * C61) *
                         C63 * C14474) *
                        C14432) *
                       C14346 +
                   ((((C148 * C74 - C62 * C150) * C71 +
                      (C148 * C81 - C62 * C155) * C61) *
                         C63 * C14564 +
                     ((C62 * C932 - C148 * C820) * C71 +
                      (C62 * C938 - C148 * C829) * C61) *
                         C63 * C14474) *
                        C6528 +
                    (((C62 * C491 - C148 * C379) * C71 +
                      (C62 * C497 - C148 * C388) * C61) *
                         C63 * C14564 +
                     ((C148 * C1921 - C62 * C2039) * C71 +
                      (C148 * C1926 - C62 * C2042) * C61) *
                         C63 * C14474) *
                        C14432) *
                       C14355 +
                   ((((C62 * C151 - C148 * C75) * C71 +
                      (C62 * C156 - C148 * C83) * C61) *
                         C63 * C14564 +
                     ((C148 * C822 - C62 * C934) * C71 +
                      (C148 * C833 - C62 * C940) * C61) *
                         C63 * C14474) *
                        C6528 +
                    (((C148 * C381 - C62 * C493) * C71 +
                      (C148 * C392 - C62 * C499) * C61) *
                         C63 * C14564 +
                     ((C62 * C2040 - C148 * C1922) * C71 +
                      (C62 * C2043 - C148 * C1928) * C61) *
                         C63 * C14474) *
                        C14432) *
                       C7611)) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[3] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
                C62 * C14564 +
            ((C71 * C818 - C61 * C824) * C115 +
             (C71 * C980 - C61 * C986) * C63) *
                C62 * C14474) *
               C6528 +
           (((C71 * C377 - C61 * C383) * C115 +
             (C71 * C539 - C61 * C545) * C63) *
                C62 * C14564 +
            ((C61 * C1923 - C71 * C1920) * C115 +
             (C61 * C2097 - C71 * C2094) * C63) *
                C62 * C14474) *
               C14432) *
              C14346 +
          ((((C71 * C74 - C61 * C80) * C115 + (C71 * C182 - C61 * C187) * C63) *
                C62 * C14564 +
            ((C61 * C828 - C71 * C820) * C115 +
             (C61 * C988 - C71 * C982) * C63) *
                C62 * C14474) *
               C6528 +
           (((C61 * C387 - C71 * C379) * C115 +
             (C61 * C547 - C71 * C541) * C63) *
                C62 * C14564 +
            ((C71 * C1921 - C61 * C1925) * C115 +
             (C71 * C2095 - C61 * C2098) * C63) *
                C62 * C14474) *
               C14432) *
              C14355 +
          ((((C61 * C82 - C71 * C75) * C115 + (C61 * C188 - C71 * C183) * C63) *
                C62 * C14564 +
            ((C71 * C822 - C61 * C832) * C115 +
             (C71 * C984 - C61 * C990) * C63) *
                C62 * C14474) *
               C6528 +
           (((C71 * C381 - C61 * C391) * C115 +
             (C71 * C543 - C61 * C549) * C63) *
                C62 * C14564 +
            ((C61 * C1927 - C71 * C1922) * C115 +
             (C61 * C2099 - C71 * C2096) * C63) *
                C62 * C14474) *
               C14432) *
              C7611)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[3] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) * C61 * C62 *
                C14564 -
            (C115 * C880 - C213 * C818 - C115 * C980 + C63 * C1030) * C61 *
                C62 * C14474) *
               C6528 +
           ((C115 * C1982 - C213 * C1920 - C115 * C2094 + C63 * C2150) * C61 *
                C62 * C14474 -
            (C115 * C439 - C213 * C377 - C115 * C539 + C63 * C589) * C61 * C62 *
                C14564) *
               C14432) *
              C14346 +
          (((C115 * C882 - C213 * C820 - C115 * C982 + C63 * C1032) * C61 *
                C62 * C14474 -
            (C115 * C117 - C213 * C74 - C115 * C182 + C63 * C215) * C61 * C62 *
                C14564) *
               C6528 +
           ((C115 * C441 - C213 * C379 - C115 * C541 + C63 * C591) * C61 * C62 *
                C14564 -
            (C115 * C1983 - C213 * C1921 - C115 * C2095 + C63 * C2151) * C61 *
                C62 * C14474) *
               C14432) *
              C14355 +
          (((C115 * C118 - C213 * C75 - C115 * C183 + C63 * C216) * C61 * C62 *
                C14564 -
            (C115 * C884 - C213 * C822 - C115 * C984 + C63 * C1034) * C61 *
                C62 * C14474) *
               C6528 +
           ((C115 * C1984 - C213 * C1922 - C115 * C2096 + C63 * C2152) * C61 *
                C62 * C14474 -
            (C115 * C443 - C213 * C381 - C115 * C543 + C63 * C593) * C61 * C62 *
                C14564) *
               C14432) *
              C7611)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[3] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((((C62 * C149 - C148 * C73) * C115 +
                      (C62 * C241 - C148 * C181) * C63) *
                         C61 * C14564 +
                     ((C148 * C818 - C62 * C930) * C115 +
                      (C148 * C980 - C62 * C1074) * C63) *
                         C61 * C14474) *
                        C6528 +
                    (((C148 * C377 - C62 * C489) * C115 +
                      (C148 * C539 - C62 * C633) * C63) *
                         C61 * C14564 +
                     ((C62 * C2038 - C148 * C1920) * C115 +
                      (C62 * C2203 - C148 * C2094) * C63) *
                         C61 * C14474) *
                        C14432) *
                       C14346 +
                   ((((C148 * C74 - C62 * C150) * C115 +
                      (C148 * C182 - C62 * C242) * C63) *
                         C61 * C14564 +
                     ((C62 * C932 - C148 * C820) * C115 +
                      (C62 * C1076 - C148 * C982) * C63) *
                         C61 * C14474) *
                        C6528 +
                    (((C62 * C491 - C148 * C379) * C115 +
                      (C62 * C635 - C148 * C541) * C63) *
                         C61 * C14564 +
                     ((C148 * C1921 - C62 * C2039) * C115 +
                      (C148 * C2095 - C62 * C2204) * C63) *
                         C61 * C14474) *
                        C14432) *
                       C14355 +
                   ((((C62 * C151 - C148 * C75) * C115 +
                      (C62 * C243 - C148 * C183) * C63) *
                         C61 * C14564 +
                     ((C148 * C822 - C62 * C934) * C115 +
                      (C148 * C984 - C62 * C1078) * C63) *
                         C61 * C14474) *
                        C6528 +
                    (((C148 * C381 - C62 * C493) * C115 +
                      (C148 * C543 - C62 * C637) * C63) *
                         C61 * C14564 +
                     ((C62 * C2040 - C148 * C1922) * C115 +
                      (C62 * C2205 - C148 * C2096) * C63) *
                         C61 * C14474) *
                        C14432) *
                       C7611)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[3] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
                C63 * C14564 +
            ((C71 * C818 - C61 * C824) * C148 +
             (C71 * C1118 - C61 * C1124) * C62) *
                C63 * C14474) *
               C6528 +
           (((C71 * C377 - C61 * C383) * C148 +
             (C71 * C677 - C61 * C683) * C62) *
                C63 * C14564 +
            ((C61 * C1923 - C71 * C1920) * C148 +
             (C61 * C2259 - C71 * C2256) * C62) *
                C63 * C14474) *
               C14432) *
              C14346 +
          ((((C71 * C74 - C61 * C80) * C148 + (C71 * C269 - C61 * C274) * C62) *
                C63 * C14564 +
            ((C61 * C828 - C71 * C820) * C148 +
             (C61 * C1126 - C71 * C1120) * C62) *
                C63 * C14474) *
               C6528 +
           (((C61 * C387 - C71 * C379) * C148 +
             (C61 * C685 - C71 * C679) * C62) *
                C63 * C14564 +
            ((C71 * C1921 - C61 * C1925) * C148 +
             (C71 * C2257 - C61 * C2260) * C62) *
                C63 * C14474) *
               C14432) *
              C14355 +
          ((((C61 * C82 - C71 * C75) * C148 + (C61 * C275 - C71 * C270) * C62) *
                C63 * C14564 +
            ((C71 * C822 - C61 * C832) * C148 +
             (C71 * C1122 - C61 * C1128) * C62) *
                C63 * C14474) *
               C6528 +
           (((C71 * C381 - C61 * C391) * C148 +
             (C71 * C681 - C61 * C687) * C62) *
                C63 * C14564 +
            ((C61 * C1927 - C71 * C1922) * C148 +
             (C61 * C2261 - C71 * C2258) * C62) *
                C63 * C14474) *
               C14432) *
              C7611)) /
        (p * q * std::sqrt(p + q));
    d2eezy[3] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((((C63 * C116 - C115 * C73) * C148 +
                      (C63 * C300 - C115 * C268) * C62) *
                         C61 * C14564 +
                     ((C115 * C818 - C63 * C880) * C148 +
                      (C115 * C1118 - C63 * C1168) * C62) *
                         C61 * C14474) *
                        C6528 +
                    (((C115 * C377 - C63 * C439) * C148 +
                      (C115 * C677 - C63 * C727) * C62) *
                         C61 * C14564 +
                     ((C63 * C1982 - C115 * C1920) * C148 +
                      (C63 * C2312 - C115 * C2256) * C62) *
                         C61 * C14474) *
                        C14432) *
                       C14346 +
                   ((((C115 * C74 - C63 * C117) * C148 +
                      (C115 * C269 - C63 * C301) * C62) *
                         C61 * C14564 +
                     ((C63 * C882 - C115 * C820) * C148 +
                      (C63 * C1170 - C115 * C1120) * C62) *
                         C61 * C14474) *
                        C6528 +
                    (((C63 * C441 - C115 * C379) * C148 +
                      (C63 * C729 - C115 * C679) * C62) *
                         C61 * C14564 +
                     ((C115 * C1921 - C63 * C1983) * C148 +
                      (C115 * C2257 - C63 * C2313) * C62) *
                         C61 * C14474) *
                        C14432) *
                       C14355 +
                   ((((C63 * C118 - C115 * C75) * C148 +
                      (C63 * C302 - C115 * C270) * C62) *
                         C61 * C14564 +
                     ((C115 * C822 - C63 * C884) * C148 +
                      (C115 * C1122 - C63 * C1172) * C62) *
                         C61 * C14474) *
                        C6528 +
                    (((C115 * C381 - C63 * C443) * C148 +
                      (C115 * C681 - C63 * C731) * C62) *
                         C61 * C14564 +
                     ((C63 * C1984 - C115 * C1922) * C148 +
                      (C63 * C2314 - C115 * C2258) * C62) *
                         C61 * C14474) *
                        C14432) *
                       C7611)) /
                 (p * q * std::sqrt(p + q));
    d2eezz[3] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) * C63 * C61 *
                C14564 -
            (C148 * C930 - C327 * C818 - C148 * C1118 + C62 * C1212) * C63 *
                C61 * C14474) *
               C6528 +
           ((C148 * C2038 - C327 * C1920 - C148 * C2256 + C62 * C2365) * C63 *
                C61 * C14474 -
            (C148 * C489 - C327 * C377 - C148 * C677 + C62 * C771) * C63 * C61 *
                C14564) *
               C14432) *
              C14346 +
          (((C148 * C932 - C327 * C820 - C148 * C1120 + C62 * C1214) * C63 *
                C61 * C14474 -
            (C148 * C150 - C327 * C74 - C148 * C269 + C62 * C329) * C63 * C61 *
                C14564) *
               C6528 +
           ((C148 * C491 - C327 * C379 - C148 * C679 + C62 * C773) * C63 * C61 *
                C14564 -
            (C148 * C2039 - C327 * C1921 - C148 * C2257 + C62 * C2366) * C63 *
                C61 * C14474) *
               C14432) *
              C14355 +
          (((C148 * C151 - C327 * C75 - C148 * C270 + C62 * C330) * C63 * C61 *
                C14564 -
            (C148 * C934 - C327 * C822 - C148 * C1122 + C62 * C1216) * C63 *
                C61 * C14474) *
               C6528 +
           ((C148 * C2040 - C327 * C1922 - C148 * C2258 + C62 * C2367) * C63 *
                C61 * C14474 -
            (C148 * C493 - C327 * C381 - C148 * C681 + C62 * C775) * C63 * C61 *
                C14564) *
               C14432) *
              C7611)) /
        (p * q * std::sqrt(p + q));
    d2eexx[4] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  (((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 *
                        C63 * C14387 * C6528 -
                    (C71 * C383 - C72 * C377 - C71 * C384 + C61 * C395) * C62 *
                        C63 * C14387 * C14432) *
                       C14630 +
                   ((C71 * C387 - C72 * C379 - C71 * C388 + C61 * C397) * C62 *
                        C63 * C14387 * C14432 -
                    (C71 * C80 - C72 * C74 - C71 * C81 + C61 * C89) * C62 *
                        C63 * C14387 * C6528) *
                       C14623 +
                   ((C71 * C82 - C72 * C75 - C71 * C83 + C61 * C90) * C62 *
                        C63 * C14387 * C6528 -
                    (C71 * C391 - C72 * C381 - C71 * C392 + C61 * C399) * C62 *
                        C63 * C14387 * C14432) *
                       C14610 +
                   ((C71 * C1259 - C72 * C1258 - C71 * C1260 + C61 * C1261) *
                        C62 * C63 * C14387 * C14432 -
                    (C71 * C84 - C72 * C76 - C71 * C85 + C61 * C91) * C62 *
                        C63 * C14387 * C6528) *
                       C14593)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  (((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 *
                        C63 * C14387 * C14631 -
                    (C71 * C383 - C72 * C377 - C71 * C384 + C61 * C395) * C62 *
                        C63 * C14387 * C14627 +
                    (C71 * C385 - C72 * C378 - C71 * C386 + C61 * C396) * C62 *
                        C63 * C14387 * C14617 -
                    (C71 * C2746 - C72 * C2744 - C71 * C2747 + C61 * C2750) *
                        C62 * C63 * C14387 * C14599) *
                       C6844 +
                   ((C71 * C387 - C72 * C379 - C71 * C388 + C61 * C397) * C62 *
                        C63 * C14387 * C14627 -
                    (C71 * C80 - C72 * C74 - C71 * C81 + C61 * C89) * C62 *
                        C63 * C14387 * C14631 -
                    (C71 * C389 - C72 * C380 - C71 * C390 + C61 * C398) * C62 *
                        C63 * C14387 * C14617 +
                    (C71 * C3383 - C72 * C3382 - C71 * C3384 + C61 * C3385) *
                        C62 * C63 * C14387 * C14599) *
                       C14352)) /
                     (p * q * std::sqrt(p + q));
    d2eexy[4] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C63 * C116 - C115 * C73) * C71 + (C63 * C121 - C115 * C79) * C61) *
               C62 * C14387 * C6528 +
           ((C115 * C377 - C63 * C439) * C71 +
            (C115 * C384 - C63 * C445) * C61) *
               C62 * C14387 * C14432) *
              C14630 +
          (((C115 * C74 - C63 * C117) * C71 + (C115 * C81 - C63 * C122) * C61) *
               C62 * C14387 * C6528 +
           ((C63 * C441 - C115 * C379) * C71 +
            (C63 * C447 - C115 * C388) * C61) *
               C62 * C14387 * C14432) *
              C14623 +
          (((C63 * C118 - C115 * C75) * C71 + (C63 * C123 - C115 * C83) * C61) *
               C62 * C14387 * C6528 +
           ((C115 * C381 - C63 * C443) * C71 +
            (C115 * C392 - C63 * C449) * C61) *
               C62 * C14387 * C14432) *
              C14610 +
          (((C115 * C76 - C63 * C119) * C71 + (C115 * C85 - C63 * C124) * C61) *
               C62 * C14387 * C6528 +
           ((C63 * C1296 - C115 * C1258) * C71 +
            (C63 * C1297 - C115 * C1260) * C61) *
               C62 * C14387 * C14432) *
              C14593)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C63 * C116 - C115 * C73) * C71 + (C63 * C121 - C115 * C79) * C61) *
               C62 * C14387 * C14631 +
           ((C115 * C377 - C63 * C439) * C71 +
            (C115 * C384 - C63 * C445) * C61) *
               C62 * C14387 * C14627 +
           ((C63 * C440 - C115 * C378) * C71 +
            (C63 * C446 - C115 * C386) * C61) *
               C62 * C14387 * C14617 +
           ((C115 * C2744 - C63 * C2774) * C71 +
            (C115 * C2747 - C63 * C2776) * C61) *
               C62 * C14387 * C14599) *
              C6844 +
          (((C115 * C74 - C63 * C117) * C71 + (C115 * C81 - C63 * C122) * C61) *
               C62 * C14387 * C14631 +
           ((C63 * C441 - C115 * C379) * C71 +
            (C63 * C447 - C115 * C388) * C61) *
               C62 * C14387 * C14627 +
           ((C115 * C380 - C63 * C442) * C71 +
            (C115 * C390 - C63 * C448) * C61) *
               C62 * C14387 * C14617 +
           ((C63 * C3420 - C115 * C3382) * C71 +
            (C63 * C3421 - C115 * C3384) * C61) *
               C62 * C14387 * C14599) *
              C14352)) /
            (p * q * std::sqrt(p + q));
    d2eexz[4] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C62 * C149 - C148 * C73) * C71 + (C62 * C154 - C148 * C79) * C61) *
               C63 * C14387 * C6528 +
           ((C148 * C377 - C62 * C489) * C71 +
            (C148 * C384 - C62 * C495) * C61) *
               C63 * C14387 * C14432) *
              C14630 +
          (((C148 * C74 - C62 * C150) * C71 + (C148 * C81 - C62 * C155) * C61) *
               C63 * C14387 * C6528 +
           ((C62 * C491 - C148 * C379) * C71 +
            (C62 * C497 - C148 * C388) * C61) *
               C63 * C14387 * C14432) *
              C14623 +
          (((C62 * C151 - C148 * C75) * C71 + (C62 * C156 - C148 * C83) * C61) *
               C63 * C14387 * C6528 +
           ((C148 * C381 - C62 * C493) * C71 +
            (C148 * C392 - C62 * C499) * C61) *
               C63 * C14387 * C14432) *
              C14610 +
          (((C148 * C76 - C62 * C152) * C71 + (C148 * C85 - C62 * C157) * C61) *
               C63 * C14387 * C6528 +
           ((C62 * C1332 - C148 * C1258) * C71 +
            (C62 * C1333 - C148 * C1260) * C61) *
               C63 * C14387 * C14432) *
              C14593)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C62 * C149 - C148 * C73) * C71 + (C62 * C154 - C148 * C79) * C61) *
               C63 * C14387 * C14631 +
           ((C148 * C377 - C62 * C489) * C71 +
            (C148 * C384 - C62 * C495) * C61) *
               C63 * C14387 * C14627 +
           ((C62 * C490 - C148 * C378) * C71 +
            (C62 * C496 - C148 * C386) * C61) *
               C63 * C14387 * C14617 +
           ((C148 * C2744 - C62 * C2800) * C71 +
            (C148 * C2747 - C62 * C2802) * C61) *
               C63 * C14387 * C14599) *
              C6844 +
          (((C148 * C74 - C62 * C150) * C71 + (C148 * C81 - C62 * C155) * C61) *
               C63 * C14387 * C14631 +
           ((C62 * C491 - C148 * C379) * C71 +
            (C62 * C497 - C148 * C388) * C61) *
               C63 * C14387 * C14627 +
           ((C148 * C380 - C62 * C492) * C71 +
            (C148 * C390 - C62 * C498) * C61) *
               C63 * C14387 * C14617 +
           ((C62 * C3456 - C148 * C3382) * C71 +
            (C62 * C3457 - C148 * C3384) * C61) *
               C63 * C14387 * C14599) *
              C14352)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[4] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
               C62 * C14387 * C6528 +
           ((C71 * C377 - C61 * C383) * C115 +
            (C71 * C539 - C61 * C545) * C63) *
               C62 * C14387 * C14432) *
              C14630 +
          (((C71 * C74 - C61 * C80) * C115 + (C71 * C182 - C61 * C187) * C63) *
               C62 * C14387 * C6528 +
           ((C61 * C387 - C71 * C379) * C115 +
            (C61 * C547 - C71 * C541) * C63) *
               C62 * C14387 * C14432) *
              C14623 +
          (((C61 * C82 - C71 * C75) * C115 + (C61 * C188 - C71 * C183) * C63) *
               C62 * C14387 * C6528 +
           ((C71 * C381 - C61 * C391) * C115 +
            (C71 * C543 - C61 * C549) * C63) *
               C62 * C14387 * C14432) *
              C14610 +
          (((C71 * C76 - C61 * C84) * C115 + (C71 * C184 - C61 * C189) * C63) *
               C62 * C14387 * C6528 +
           ((C61 * C1259 - C71 * C1258) * C115 +
            (C61 * C1369 - C71 * C1368) * C63) *
               C62 * C14387 * C14432) *
              C14593)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
               C62 * C14387 * C14631 +
           ((C71 * C377 - C61 * C383) * C115 +
            (C71 * C539 - C61 * C545) * C63) *
               C62 * C14387 * C14627 +
           ((C61 * C385 - C71 * C378) * C115 +
            (C61 * C546 - C71 * C540) * C63) *
               C62 * C14387 * C14617 +
           ((C71 * C2744 - C61 * C2746) * C115 +
            (C71 * C2826 - C61 * C2828) * C63) *
               C62 * C14387 * C14599) *
              C6844 +
          (((C71 * C74 - C61 * C80) * C115 + (C71 * C182 - C61 * C187) * C63) *
               C62 * C14387 * C14631 +
           ((C61 * C387 - C71 * C379) * C115 +
            (C61 * C547 - C71 * C541) * C63) *
               C62 * C14387 * C14627 +
           ((C71 * C380 - C61 * C389) * C115 +
            (C71 * C542 - C61 * C548) * C63) *
               C62 * C14387 * C14617 +
           ((C61 * C3383 - C71 * C3382) * C115 +
            (C61 * C3493 - C71 * C3492) * C63) *
               C62 * C14387 * C14599) *
              C14352)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[4] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  (((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) *
                        C61 * C62 * C14387 * C6528 -
                    (C115 * C439 - C213 * C377 - C115 * C539 + C63 * C589) *
                        C61 * C62 * C14387 * C14432) *
                       C14630 +
                   ((C115 * C441 - C213 * C379 - C115 * C541 + C63 * C591) *
                        C61 * C62 * C14387 * C14432 -
                    (C115 * C117 - C213 * C74 - C115 * C182 + C63 * C215) *
                        C61 * C62 * C14387 * C6528) *
                       C14623 +
                   ((C115 * C118 - C213 * C75 - C115 * C183 + C63 * C216) *
                        C61 * C62 * C14387 * C6528 -
                    (C115 * C443 - C213 * C381 - C115 * C543 + C63 * C593) *
                        C61 * C62 * C14387 * C14432) *
                       C14610 +
                   ((C115 * C1296 - C213 * C1258 - C115 * C1368 + C63 * C1404) *
                        C61 * C62 * C14387 * C14432 -
                    (C115 * C119 - C213 * C76 - C115 * C184 + C63 * C217) *
                        C61 * C62 * C14387 * C6528) *
                       C14593)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  (((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) *
                        C61 * C62 * C14387 * C14631 -
                    (C115 * C439 - C213 * C377 - C115 * C539 + C63 * C589) *
                        C61 * C62 * C14387 * C14627 +
                    (C115 * C440 - C213 * C378 - C115 * C540 + C63 * C590) *
                        C61 * C62 * C14387 * C14617 -
                    (C115 * C2774 - C213 * C2744 - C115 * C2826 + C63 * C2852) *
                        C61 * C62 * C14387 * C14599) *
                       C6844 +
                   ((C115 * C441 - C213 * C379 - C115 * C541 + C63 * C591) *
                        C61 * C62 * C14387 * C14627 -
                    (C115 * C117 - C213 * C74 - C115 * C182 + C63 * C215) *
                        C61 * C62 * C14387 * C14631 -
                    (C115 * C442 - C213 * C380 - C115 * C542 + C63 * C592) *
                        C61 * C62 * C14387 * C14617 +
                    (C115 * C3420 - C213 * C3382 - C115 * C3492 + C63 * C3528) *
                        C61 * C62 * C14387 * C14599) *
                       C14352)) /
                     (p * q * std::sqrt(p + q));
    d2eeyz[4] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  ((((C62 * C149 - C148 * C73) * C115 +
                     (C62 * C241 - C148 * C181) * C63) *
                        C61 * C14387 * C6528 +
                    ((C148 * C377 - C62 * C489) * C115 +
                     (C148 * C539 - C62 * C633) * C63) *
                        C61 * C14387 * C14432) *
                       C14630 +
                   (((C148 * C74 - C62 * C150) * C115 +
                     (C148 * C182 - C62 * C242) * C63) *
                        C61 * C14387 * C6528 +
                    ((C62 * C491 - C148 * C379) * C115 +
                     (C62 * C635 - C148 * C541) * C63) *
                        C61 * C14387 * C14432) *
                       C14623 +
                   (((C62 * C151 - C148 * C75) * C115 +
                     (C62 * C243 - C148 * C183) * C63) *
                        C61 * C14387 * C6528 +
                    ((C148 * C381 - C62 * C493) * C115 +
                     (C148 * C543 - C62 * C637) * C63) *
                        C61 * C14387 * C14432) *
                       C14610 +
                   (((C148 * C76 - C62 * C152) * C115 +
                     (C148 * C184 - C62 * C244) * C63) *
                        C61 * C14387 * C6528 +
                    ((C62 * C1332 - C148 * C1258) * C115 +
                     (C62 * C1439 - C148 * C1368) * C63) *
                        C61 * C14387 * C14432) *
                       C14593)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  ((((C62 * C149 - C148 * C73) * C115 +
                     (C62 * C241 - C148 * C181) * C63) *
                        C61 * C14387 * C14631 +
                    ((C148 * C377 - C62 * C489) * C115 +
                     (C148 * C539 - C62 * C633) * C63) *
                        C61 * C14387 * C14627 +
                    ((C62 * C490 - C148 * C378) * C115 +
                     (C62 * C634 - C148 * C540) * C63) *
                        C61 * C14387 * C14617 +
                    ((C148 * C2744 - C62 * C2800) * C115 +
                     (C148 * C2826 - C62 * C2876) * C63) *
                        C61 * C14387 * C14599) *
                       C6844 +
                   (((C148 * C74 - C62 * C150) * C115 +
                     (C148 * C182 - C62 * C242) * C63) *
                        C61 * C14387 * C14631 +
                    ((C62 * C491 - C148 * C379) * C115 +
                     (C62 * C635 - C148 * C541) * C63) *
                        C61 * C14387 * C14627 +
                    ((C148 * C380 - C62 * C492) * C115 +
                     (C148 * C542 - C62 * C636) * C63) *
                        C61 * C14387 * C14617 +
                    ((C62 * C3456 - C148 * C3382) * C115 +
                     (C62 * C3563 - C148 * C3492) * C63) *
                        C61 * C14387 * C14599) *
                       C14352)) /
                     (p * q * std::sqrt(p + q));
    d2eezx[4] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
               C63 * C14387 * C6528 +
           ((C71 * C377 - C61 * C383) * C148 +
            (C71 * C677 - C61 * C683) * C62) *
               C63 * C14387 * C14432) *
              C14630 +
          (((C71 * C74 - C61 * C80) * C148 + (C71 * C269 - C61 * C274) * C62) *
               C63 * C14387 * C6528 +
           ((C61 * C387 - C71 * C379) * C148 +
            (C61 * C685 - C71 * C679) * C62) *
               C63 * C14387 * C14432) *
              C14623 +
          (((C61 * C82 - C71 * C75) * C148 + (C61 * C275 - C71 * C270) * C62) *
               C63 * C14387 * C6528 +
           ((C71 * C381 - C61 * C391) * C148 +
            (C71 * C681 - C61 * C687) * C62) *
               C63 * C14387 * C14432) *
              C14610 +
          (((C71 * C76 - C61 * C84) * C148 + (C71 * C271 - C61 * C276) * C62) *
               C63 * C14387 * C6528 +
           ((C61 * C1259 - C71 * C1258) * C148 +
            (C61 * C1475 - C71 * C1474) * C62) *
               C63 * C14387 * C14432) *
              C14593)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
               C63 * C14387 * C14631 +
           ((C71 * C377 - C61 * C383) * C148 +
            (C71 * C677 - C61 * C683) * C62) *
               C63 * C14387 * C14627 +
           ((C61 * C385 - C71 * C378) * C148 +
            (C61 * C684 - C71 * C678) * C62) *
               C63 * C14387 * C14617 +
           ((C71 * C2744 - C61 * C2746) * C148 +
            (C71 * C2900 - C61 * C2902) * C62) *
               C63 * C14387 * C14599) *
              C6844 +
          (((C71 * C74 - C61 * C80) * C148 + (C71 * C269 - C61 * C274) * C62) *
               C63 * C14387 * C14631 +
           ((C61 * C387 - C71 * C379) * C148 +
            (C61 * C685 - C71 * C679) * C62) *
               C63 * C14387 * C14627 +
           ((C71 * C380 - C61 * C389) * C148 +
            (C71 * C680 - C61 * C686) * C62) *
               C63 * C14387 * C14617 +
           ((C61 * C3383 - C71 * C3382) * C148 +
            (C61 * C3599 - C71 * C3598) * C62) *
               C63 * C14387 * C14599) *
              C14352)) /
            (p * q * std::sqrt(p + q));
    d2eezy[4] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  ((((C63 * C116 - C115 * C73) * C148 +
                     (C63 * C300 - C115 * C268) * C62) *
                        C61 * C14387 * C6528 +
                    ((C115 * C377 - C63 * C439) * C148 +
                     (C115 * C677 - C63 * C727) * C62) *
                        C61 * C14387 * C14432) *
                       C14630 +
                   (((C115 * C74 - C63 * C117) * C148 +
                     (C115 * C269 - C63 * C301) * C62) *
                        C61 * C14387 * C6528 +
                    ((C63 * C441 - C115 * C379) * C148 +
                     (C63 * C729 - C115 * C679) * C62) *
                        C61 * C14387 * C14432) *
                       C14623 +
                   (((C63 * C118 - C115 * C75) * C148 +
                     (C63 * C302 - C115 * C270) * C62) *
                        C61 * C14387 * C6528 +
                    ((C115 * C381 - C63 * C443) * C148 +
                     (C115 * C681 - C63 * C731) * C62) *
                        C61 * C14387 * C14432) *
                       C14610 +
                   (((C115 * C76 - C63 * C119) * C148 +
                     (C115 * C271 - C63 * C303) * C62) *
                        C61 * C14387 * C6528 +
                    ((C63 * C1296 - C115 * C1258) * C148 +
                     (C63 * C1510 - C115 * C1474) * C62) *
                        C61 * C14387 * C14432) *
                       C14593)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  ((((C63 * C116 - C115 * C73) * C148 +
                     (C63 * C300 - C115 * C268) * C62) *
                        C61 * C14387 * C14631 +
                    ((C115 * C377 - C63 * C439) * C148 +
                     (C115 * C677 - C63 * C727) * C62) *
                        C61 * C14387 * C14627 +
                    ((C63 * C440 - C115 * C378) * C148 +
                     (C63 * C728 - C115 * C678) * C62) *
                        C61 * C14387 * C14617 +
                    ((C115 * C2744 - C63 * C2774) * C148 +
                     (C115 * C2900 - C63 * C2926) * C62) *
                        C61 * C14387 * C14599) *
                       C6844 +
                   (((C115 * C74 - C63 * C117) * C148 +
                     (C115 * C269 - C63 * C301) * C62) *
                        C61 * C14387 * C14631 +
                    ((C63 * C441 - C115 * C379) * C148 +
                     (C63 * C729 - C115 * C679) * C62) *
                        C61 * C14387 * C14627 +
                    ((C115 * C380 - C63 * C442) * C148 +
                     (C115 * C680 - C63 * C730) * C62) *
                        C61 * C14387 * C14617 +
                    ((C63 * C3420 - C115 * C3382) * C148 +
                     (C63 * C3634 - C115 * C3598) * C62) *
                        C61 * C14387 * C14599) *
                       C14352)) /
                     (p * q * std::sqrt(p + q));
    d2eezz[4] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  (((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) *
                        C63 * C61 * C14387 * C6528 -
                    (C148 * C489 - C327 * C377 - C148 * C677 + C62 * C771) *
                        C63 * C61 * C14387 * C14432) *
                       C14630 +
                   ((C148 * C491 - C327 * C379 - C148 * C679 + C62 * C773) *
                        C63 * C61 * C14387 * C14432 -
                    (C148 * C150 - C327 * C74 - C148 * C269 + C62 * C329) *
                        C63 * C61 * C14387 * C6528) *
                       C14623 +
                   ((C148 * C151 - C327 * C75 - C148 * C270 + C62 * C330) *
                        C63 * C61 * C14387 * C6528 -
                    (C148 * C493 - C327 * C381 - C148 * C681 + C62 * C775) *
                        C63 * C61 * C14387 * C14432) *
                       C14610 +
                   ((C148 * C1332 - C327 * C1258 - C148 * C1474 + C62 * C1545) *
                        C63 * C61 * C14387 * C14432 -
                    (C148 * C152 - C327 * C76 - C148 * C271 + C62 * C331) *
                        C63 * C61 * C14387 * C6528) *
                       C14593)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  (((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) *
                        C63 * C61 * C14387 * C14631 -
                    (C148 * C489 - C327 * C377 - C148 * C677 + C62 * C771) *
                        C63 * C61 * C14387 * C14627 +
                    (C148 * C490 - C327 * C378 - C148 * C678 + C62 * C772) *
                        C63 * C61 * C14387 * C14617 -
                    (C148 * C2800 - C327 * C2744 - C148 * C2900 + C62 * C2950) *
                        C63 * C61 * C14387 * C14599) *
                       C6844 +
                   ((C148 * C491 - C327 * C379 - C148 * C679 + C62 * C773) *
                        C63 * C61 * C14387 * C14627 -
                    (C148 * C150 - C327 * C74 - C148 * C269 + C62 * C329) *
                        C63 * C61 * C14387 * C14631 -
                    (C148 * C492 - C327 * C380 - C148 * C680 + C62 * C774) *
                        C63 * C61 * C14387 * C14617 +
                    (C148 * C3456 - C327 * C3382 - C148 * C3598 + C62 * C3669) *
                        C63 * C61 * C14387 * C14599) *
                       C14352)) /
                     (p * q * std::sqrt(p + q));
    d2eexx[5] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 *
                         C63 * C8850 -
                     (C71 * C824 - C72 * C818 - C71 * C825 + C61 * C836) * C62 *
                         C63 * C14474) *
                        C14428 +
                    ((C71 * C1923 - C72 * C1920 - C71 * C1924 + C61 * C1929) *
                         C62 * C63 * C14474 -
                     (C71 * C383 - C72 * C377 - C71 * C384 + C61 * C395) * C62 *
                         C63 * C8850) *
                        C14435 +
                    ((C71 * C385 - C72 * C378 - C71 * C386 + C61 * C396) * C62 *
                         C63 * C8850 -
                     (C71 * C2995 - C72 * C2991 - C71 * C2996 + C61 * C3000) *
                         C62 * C63 * C14474) *
                        C7608) *
                       C14549 +
                   (((C71 * C828 - C72 * C820 - C71 * C829 + C61 * C838) * C62 *
                         C63 * C14474 -
                     (C71 * C80 - C72 * C74 - C71 * C81 + C61 * C89) * C62 *
                         C63 * C8850) *
                        C14428 +
                    ((C71 * C387 - C72 * C379 - C71 * C388 + C61 * C397) * C62 *
                         C63 * C8850 -
                     (C71 * C1925 - C72 * C1921 - C71 * C1926 + C61 * C1930) *
                         C62 * C63 * C14474) *
                        C14435 +
                    ((C71 * C3721 - C72 * C3720 - C71 * C3722 + C61 * C3723) *
                         C62 * C63 * C14474 -
                     (C71 * C389 - C72 * C380 - C71 * C390 + C61 * C398) * C62 *
                         C63 * C8850) *
                        C7608) *
                       C14352)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[5] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((((C63 * C116 - C115 * C73) * C71 +
                      (C63 * C121 - C115 * C79) * C61) *
                         C62 * C8850 +
                     ((C115 * C818 - C63 * C880) * C71 +
                      (C115 * C825 - C63 * C886) * C61) *
                         C62 * C14474) *
                        C14428 +
                    (((C115 * C377 - C63 * C439) * C71 +
                      (C115 * C384 - C63 * C445) * C61) *
                         C62 * C8850 +
                     ((C63 * C1982 - C115 * C1920) * C71 +
                      (C63 * C1985 - C115 * C1924) * C61) *
                         C62 * C14474) *
                        C14435 +
                    (((C63 * C440 - C115 * C378) * C71 +
                      (C63 * C446 - C115 * C386) * C61) *
                         C62 * C8850 +
                     ((C115 * C2991 - C63 * C3041) * C71 +
                      (C115 * C2996 - C63 * C3044) * C61) *
                         C62 * C14474) *
                        C7608) *
                       C14549 +
                   ((((C115 * C74 - C63 * C117) * C71 +
                      (C115 * C81 - C63 * C122) * C61) *
                         C62 * C8850 +
                     ((C63 * C882 - C115 * C820) * C71 +
                      (C63 * C888 - C115 * C829) * C61) *
                         C62 * C14474) *
                        C14428 +
                    (((C63 * C441 - C115 * C379) * C71 +
                      (C63 * C447 - C115 * C388) * C61) *
                         C62 * C8850 +
                     ((C115 * C1921 - C63 * C1983) * C71 +
                      (C115 * C1926 - C63 * C1986) * C61) *
                         C62 * C14474) *
                        C14435 +
                    (((C115 * C380 - C63 * C442) * C71 +
                      (C115 * C390 - C63 * C448) * C61) *
                         C62 * C8850 +
                     ((C63 * C3774 - C115 * C3720) * C71 +
                      (C63 * C3775 - C115 * C3722) * C61) *
                         C62 * C14474) *
                        C7608) *
                       C14352)) /
                 (p * q * std::sqrt(p + q));
    d2eexz[5] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((((C62 * C149 - C148 * C73) * C71 +
                      (C62 * C154 - C148 * C79) * C61) *
                         C63 * C8850 +
                     ((C148 * C818 - C62 * C930) * C71 +
                      (C148 * C825 - C62 * C936) * C61) *
                         C63 * C14474) *
                        C14428 +
                    (((C148 * C377 - C62 * C489) * C71 +
                      (C148 * C384 - C62 * C495) * C61) *
                         C63 * C8850 +
                     ((C62 * C2038 - C148 * C1920) * C71 +
                      (C62 * C2041 - C148 * C1924) * C61) *
                         C63 * C14474) *
                        C14435 +
                    (((C62 * C490 - C148 * C378) * C71 +
                      (C62 * C496 - C148 * C386) * C61) *
                         C63 * C8850 +
                     ((C148 * C2991 - C62 * C3085) * C71 +
                      (C148 * C2996 - C62 * C3088) * C61) *
                         C63 * C14474) *
                        C7608) *
                       C14549 +
                   ((((C148 * C74 - C62 * C150) * C71 +
                      (C148 * C81 - C62 * C155) * C61) *
                         C63 * C8850 +
                     ((C62 * C932 - C148 * C820) * C71 +
                      (C62 * C938 - C148 * C829) * C61) *
                         C63 * C14474) *
                        C14428 +
                    (((C62 * C491 - C148 * C379) * C71 +
                      (C62 * C497 - C148 * C388) * C61) *
                         C63 * C8850 +
                     ((C148 * C1921 - C62 * C2039) * C71 +
                      (C148 * C1926 - C62 * C2042) * C61) *
                         C63 * C14474) *
                        C14435 +
                    (((C148 * C380 - C62 * C492) * C71 +
                      (C148 * C390 - C62 * C498) * C61) *
                         C63 * C8850 +
                     ((C62 * C3826 - C148 * C3720) * C71 +
                      (C62 * C3827 - C148 * C3722) * C61) *
                         C63 * C14474) *
                        C7608) *
                       C14352)) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[5] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
                C62 * C8850 +
            ((C71 * C818 - C61 * C824) * C115 +
             (C71 * C980 - C61 * C986) * C63) *
                C62 * C14474) *
               C14428 +
           (((C71 * C377 - C61 * C383) * C115 +
             (C71 * C539 - C61 * C545) * C63) *
                C62 * C8850 +
            ((C61 * C1923 - C71 * C1920) * C115 +
             (C61 * C2097 - C71 * C2094) * C63) *
                C62 * C14474) *
               C14435 +
           (((C61 * C385 - C71 * C378) * C115 +
             (C61 * C546 - C71 * C540) * C63) *
                C62 * C8850 +
            ((C71 * C2991 - C61 * C2995) * C115 +
             (C71 * C3129 - C61 * C3132) * C63) *
                C62 * C14474) *
               C7608) *
              C14549 +
          ((((C71 * C74 - C61 * C80) * C115 + (C71 * C182 - C61 * C187) * C63) *
                C62 * C8850 +
            ((C61 * C828 - C71 * C820) * C115 +
             (C61 * C988 - C71 * C982) * C63) *
                C62 * C14474) *
               C14428 +
           (((C61 * C387 - C71 * C379) * C115 +
             (C61 * C547 - C71 * C541) * C63) *
                C62 * C8850 +
            ((C71 * C1921 - C61 * C1925) * C115 +
             (C71 * C2095 - C61 * C2098) * C63) *
                C62 * C14474) *
               C14435 +
           (((C71 * C380 - C61 * C389) * C115 +
             (C71 * C542 - C61 * C548) * C63) *
                C62 * C8850 +
            ((C61 * C3721 - C71 * C3720) * C115 +
             (C61 * C3879 - C71 * C3878) * C63) *
                C62 * C14474) *
               C7608) *
              C14352)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[5] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) * C61 * C62 *
                C8850 -
            (C115 * C880 - C213 * C818 - C115 * C980 + C63 * C1030) * C61 *
                C62 * C14474) *
               C14428 +
           ((C115 * C1982 - C213 * C1920 - C115 * C2094 + C63 * C2150) * C61 *
                C62 * C14474 -
            (C115 * C439 - C213 * C377 - C115 * C539 + C63 * C589) * C61 * C62 *
                C8850) *
               C14435 +
           ((C115 * C440 - C213 * C378 - C115 * C540 + C63 * C590) * C61 * C62 *
                C8850 -
            (C115 * C3041 - C213 * C2991 - C115 * C3129 + C63 * C3173) * C61 *
                C62 * C14474) *
               C7608) *
              C14549 +
          (((C115 * C882 - C213 * C820 - C115 * C982 + C63 * C1032) * C61 *
                C62 * C14474 -
            (C115 * C117 - C213 * C74 - C115 * C182 + C63 * C215) * C61 * C62 *
                C8850) *
               C14428 +
           ((C115 * C441 - C213 * C379 - C115 * C541 + C63 * C591) * C61 * C62 *
                C8850 -
            (C115 * C1983 - C213 * C1921 - C115 * C2095 + C63 * C2151) * C61 *
                C62 * C14474) *
               C14435 +
           ((C115 * C3774 - C213 * C3720 - C115 * C3878 + C63 * C3930) * C61 *
                C62 * C14474 -
            (C115 * C442 - C213 * C380 - C115 * C542 + C63 * C592) * C61 * C62 *
                C8850) *
               C7608) *
              C14352)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[5] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((((C62 * C149 - C148 * C73) * C115 +
                      (C62 * C241 - C148 * C181) * C63) *
                         C61 * C8850 +
                     ((C148 * C818 - C62 * C930) * C115 +
                      (C148 * C980 - C62 * C1074) * C63) *
                         C61 * C14474) *
                        C14428 +
                    (((C148 * C377 - C62 * C489) * C115 +
                      (C148 * C539 - C62 * C633) * C63) *
                         C61 * C8850 +
                     ((C62 * C2038 - C148 * C1920) * C115 +
                      (C62 * C2203 - C148 * C2094) * C63) *
                         C61 * C14474) *
                        C14435 +
                    (((C62 * C490 - C148 * C378) * C115 +
                      (C62 * C634 - C148 * C540) * C63) *
                         C61 * C8850 +
                     ((C148 * C2991 - C62 * C3085) * C115 +
                      (C148 * C3129 - C62 * C3214) * C63) *
                         C61 * C14474) *
                        C7608) *
                       C14549 +
                   ((((C148 * C74 - C62 * C150) * C115 +
                      (C148 * C182 - C62 * C242) * C63) *
                         C61 * C8850 +
                     ((C62 * C932 - C148 * C820) * C115 +
                      (C62 * C1076 - C148 * C982) * C63) *
                         C61 * C14474) *
                        C14428 +
                    (((C62 * C491 - C148 * C379) * C115 +
                      (C62 * C635 - C148 * C541) * C63) *
                         C61 * C8850 +
                     ((C148 * C1921 - C62 * C2039) * C115 +
                      (C148 * C2095 - C62 * C2204) * C63) *
                         C61 * C14474) *
                        C14435 +
                    (((C148 * C380 - C62 * C492) * C115 +
                      (C148 * C542 - C62 * C636) * C63) *
                         C61 * C8850 +
                     ((C62 * C3826 - C148 * C3720) * C115 +
                      (C62 * C3981 - C148 * C3878) * C63) *
                         C61 * C14474) *
                        C7608) *
                       C14352)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[5] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
                C63 * C8850 +
            ((C71 * C818 - C61 * C824) * C148 +
             (C71 * C1118 - C61 * C1124) * C62) *
                C63 * C14474) *
               C14428 +
           (((C71 * C377 - C61 * C383) * C148 +
             (C71 * C677 - C61 * C683) * C62) *
                C63 * C8850 +
            ((C61 * C1923 - C71 * C1920) * C148 +
             (C61 * C2259 - C71 * C2256) * C62) *
                C63 * C14474) *
               C14435 +
           (((C61 * C385 - C71 * C378) * C148 +
             (C61 * C684 - C71 * C678) * C62) *
                C63 * C8850 +
            ((C71 * C2991 - C61 * C2995) * C148 +
             (C71 * C3255 - C61 * C3258) * C62) *
                C63 * C14474) *
               C7608) *
              C14549 +
          ((((C71 * C74 - C61 * C80) * C148 + (C71 * C269 - C61 * C274) * C62) *
                C63 * C8850 +
            ((C61 * C828 - C71 * C820) * C148 +
             (C61 * C1126 - C71 * C1120) * C62) *
                C63 * C14474) *
               C14428 +
           (((C61 * C387 - C71 * C379) * C148 +
             (C61 * C685 - C71 * C679) * C62) *
                C63 * C8850 +
            ((C71 * C1921 - C61 * C1925) * C148 +
             (C71 * C2257 - C61 * C2260) * C62) *
                C63 * C14474) *
               C14435 +
           (((C71 * C380 - C61 * C389) * C148 +
             (C71 * C680 - C61 * C686) * C62) *
                C63 * C8850 +
            ((C61 * C3721 - C71 * C3720) * C148 +
             (C61 * C4033 - C71 * C4032) * C62) *
                C63 * C14474) *
               C7608) *
              C14352)) /
        (p * q * std::sqrt(p + q));
    d2eezy[5] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((((C63 * C116 - C115 * C73) * C148 +
                      (C63 * C300 - C115 * C268) * C62) *
                         C61 * C8850 +
                     ((C115 * C818 - C63 * C880) * C148 +
                      (C115 * C1118 - C63 * C1168) * C62) *
                         C61 * C14474) *
                        C14428 +
                    (((C115 * C377 - C63 * C439) * C148 +
                      (C115 * C677 - C63 * C727) * C62) *
                         C61 * C8850 +
                     ((C63 * C1982 - C115 * C1920) * C148 +
                      (C63 * C2312 - C115 * C2256) * C62) *
                         C61 * C14474) *
                        C14435 +
                    (((C63 * C440 - C115 * C378) * C148 +
                      (C63 * C728 - C115 * C678) * C62) *
                         C61 * C8850 +
                     ((C115 * C2991 - C63 * C3041) * C148 +
                      (C115 * C3255 - C63 * C3299) * C62) *
                         C61 * C14474) *
                        C7608) *
                       C14549 +
                   ((((C115 * C74 - C63 * C117) * C148 +
                      (C115 * C269 - C63 * C301) * C62) *
                         C61 * C8850 +
                     ((C63 * C882 - C115 * C820) * C148 +
                      (C63 * C1170 - C115 * C1120) * C62) *
                         C61 * C14474) *
                        C14428 +
                    (((C63 * C441 - C115 * C379) * C148 +
                      (C63 * C729 - C115 * C679) * C62) *
                         C61 * C8850 +
                     ((C115 * C1921 - C63 * C1983) * C148 +
                      (C115 * C2257 - C63 * C2313) * C62) *
                         C61 * C14474) *
                        C14435 +
                    (((C115 * C380 - C63 * C442) * C148 +
                      (C115 * C680 - C63 * C730) * C62) *
                         C61 * C8850 +
                     ((C63 * C3774 - C115 * C3720) * C148 +
                      (C63 * C4084 - C115 * C4032) * C62) *
                         C61 * C14474) *
                        C7608) *
                       C14352)) /
                 (p * q * std::sqrt(p + q));
    d2eezz[5] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) * C63 * C61 *
                C8850 -
            (C148 * C930 - C327 * C818 - C148 * C1118 + C62 * C1212) * C63 *
                C61 * C14474) *
               C14428 +
           ((C148 * C2038 - C327 * C1920 - C148 * C2256 + C62 * C2365) * C63 *
                C61 * C14474 -
            (C148 * C489 - C327 * C377 - C148 * C677 + C62 * C771) * C63 * C61 *
                C8850) *
               C14435 +
           ((C148 * C490 - C327 * C378 - C148 * C678 + C62 * C772) * C63 * C61 *
                C8850 -
            (C148 * C3085 - C327 * C2991 - C148 * C3255 + C62 * C3340) * C63 *
                C61 * C14474) *
               C7608) *
              C14549 +
          (((C148 * C932 - C327 * C820 - C148 * C1120 + C62 * C1214) * C63 *
                C61 * C14474 -
            (C148 * C150 - C327 * C74 - C148 * C269 + C62 * C329) * C63 * C61 *
                C8850) *
               C14428 +
           ((C148 * C491 - C327 * C379 - C148 * C679 + C62 * C773) * C63 * C61 *
                C8850 -
            (C148 * C2039 - C327 * C1921 - C148 * C2257 + C62 * C2366) * C63 *
                C61 * C14474) *
               C14435 +
           ((C148 * C3826 - C327 * C3720 - C148 * C4032 + C62 * C4135) * C63 *
                C61 * C14474 -
            (C148 * C492 - C327 * C380 - C148 * C680 + C62 * C774) * C63 * C61 *
                C8850) *
               C7608) *
              C14352)) /
        (p * q * std::sqrt(p + q));
    d2eexx[6] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 *
                        C63 * C14470 -
                    (C71 * C824 - C72 * C818 - C71 * C825 + C61 * C836) * C62 *
                        C63 * C14477 +
                    (C71 * C826 - C72 * C819 - C71 * C827 + C61 * C837) * C62 *
                        C63 * C10374) *
                       C14428 +
                   ((C71 * C1923 - C72 * C1920 - C71 * C1924 + C61 * C1929) *
                        C62 * C63 * C14477 -
                    (C71 * C383 - C72 * C377 - C71 * C384 + C61 * C395) * C62 *
                        C63 * C14470 -
                    (C71 * C2993 - C72 * C2990 - C71 * C2994 + C61 * C2999) *
                        C62 * C63 * C10374) *
                       C14435 +
                   ((C71 * C385 - C72 * C378 - C71 * C386 + C61 * C396) * C62 *
                        C63 * C14470 -
                    (C71 * C2995 - C72 * C2991 - C71 * C2996 + C61 * C3000) *
                        C62 * C63 * C14477 +
                    (C71 * C2997 - C72 * C2992 - C71 * C2998 + C61 * C3001) *
                        C62 * C63 * C10374) *
                       C7608) *
                  C14341) /
                 (p * q * std::sqrt(p + q));
    d2eexy[6] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C63 * C116 - C115 * C73) * C71 + (C63 * C121 - C115 * C79) * C61) *
               C62 * C14470 +
           ((C115 * C818 - C63 * C880) * C71 +
            (C115 * C825 - C63 * C886) * C61) *
               C62 * C14477 +
           ((C63 * C881 - C115 * C819) * C71 +
            (C63 * C887 - C115 * C827) * C61) *
               C62 * C10374) *
              C14428 +
          (((C115 * C377 - C63 * C439) * C71 +
            (C115 * C384 - C63 * C445) * C61) *
               C62 * C14470 +
           ((C63 * C1982 - C115 * C1920) * C71 +
            (C63 * C1985 - C115 * C1924) * C61) *
               C62 * C14477 +
           ((C115 * C2990 - C63 * C3040) * C71 +
            (C115 * C2994 - C63 * C3043) * C61) *
               C62 * C10374) *
              C14435 +
          (((C63 * C440 - C115 * C378) * C71 +
            (C63 * C446 - C115 * C386) * C61) *
               C62 * C14470 +
           ((C115 * C2991 - C63 * C3041) * C71 +
            (C115 * C2996 - C63 * C3044) * C61) *
               C62 * C14477 +
           ((C63 * C3042 - C115 * C2992) * C71 +
            (C63 * C3045 - C115 * C2998) * C61) *
               C62 * C10374) *
              C7608) *
         C14341) /
        (p * q * std::sqrt(p + q));
    d2eexz[6] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C62 * C149 - C148 * C73) * C71 + (C62 * C154 - C148 * C79) * C61) *
               C63 * C14470 +
           ((C148 * C818 - C62 * C930) * C71 +
            (C148 * C825 - C62 * C936) * C61) *
               C63 * C14477 +
           ((C62 * C931 - C148 * C819) * C71 +
            (C62 * C937 - C148 * C827) * C61) *
               C63 * C10374) *
              C14428 +
          (((C148 * C377 - C62 * C489) * C71 +
            (C148 * C384 - C62 * C495) * C61) *
               C63 * C14470 +
           ((C62 * C2038 - C148 * C1920) * C71 +
            (C62 * C2041 - C148 * C1924) * C61) *
               C63 * C14477 +
           ((C148 * C2990 - C62 * C3084) * C71 +
            (C148 * C2994 - C62 * C3087) * C61) *
               C63 * C10374) *
              C14435 +
          (((C62 * C490 - C148 * C378) * C71 +
            (C62 * C496 - C148 * C386) * C61) *
               C63 * C14470 +
           ((C148 * C2991 - C62 * C3085) * C71 +
            (C148 * C2996 - C62 * C3088) * C61) *
               C63 * C14477 +
           ((C62 * C3086 - C148 * C2992) * C71 +
            (C62 * C3089 - C148 * C2998) * C61) *
               C63 * C10374) *
              C7608) *
         C14341) /
        (p * q * std::sqrt(p + q));
    d2eeyx[6] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
               C62 * C14470 +
           ((C71 * C818 - C61 * C824) * C115 +
            (C71 * C980 - C61 * C986) * C63) *
               C62 * C14477 +
           ((C61 * C826 - C71 * C819) * C115 +
            (C61 * C987 - C71 * C981) * C63) *
               C62 * C10374) *
              C14428 +
          (((C71 * C377 - C61 * C383) * C115 +
            (C71 * C539 - C61 * C545) * C63) *
               C62 * C14470 +
           ((C61 * C1923 - C71 * C1920) * C115 +
            (C61 * C2097 - C71 * C2094) * C63) *
               C62 * C14477 +
           ((C71 * C2990 - C61 * C2993) * C115 +
            (C71 * C3128 - C61 * C3131) * C63) *
               C62 * C10374) *
              C14435 +
          (((C61 * C385 - C71 * C378) * C115 +
            (C61 * C546 - C71 * C540) * C63) *
               C62 * C14470 +
           ((C71 * C2991 - C61 * C2995) * C115 +
            (C71 * C3129 - C61 * C3132) * C63) *
               C62 * C14477 +
           ((C61 * C2997 - C71 * C2992) * C115 +
            (C61 * C3133 - C71 * C3130) * C63) *
               C62 * C10374) *
              C7608) *
         C14341) /
        (p * q * std::sqrt(p + q));
    d2eeyy[6] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) *
                        C61 * C62 * C14470 -
                    (C115 * C880 - C213 * C818 - C115 * C980 + C63 * C1030) *
                        C61 * C62 * C14477 +
                    (C115 * C881 - C213 * C819 - C115 * C981 + C63 * C1031) *
                        C61 * C62 * C10374) *
                       C14428 +
                   ((C115 * C1982 - C213 * C1920 - C115 * C2094 + C63 * C2150) *
                        C61 * C62 * C14477 -
                    (C115 * C439 - C213 * C377 - C115 * C539 + C63 * C589) *
                        C61 * C62 * C14470 -
                    (C115 * C3040 - C213 * C2990 - C115 * C3128 + C63 * C3172) *
                        C61 * C62 * C10374) *
                       C14435 +
                   ((C115 * C440 - C213 * C378 - C115 * C540 + C63 * C590) *
                        C61 * C62 * C14470 -
                    (C115 * C3041 - C213 * C2991 - C115 * C3129 + C63 * C3173) *
                        C61 * C62 * C14477 +
                    (C115 * C3042 - C213 * C2992 - C115 * C3130 + C63 * C3174) *
                        C61 * C62 * C10374) *
                       C7608) *
                  C14341) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[6] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C62 * C149 - C148 * C73) * C115 +
                     (C62 * C241 - C148 * C181) * C63) *
                        C61 * C14470 +
                    ((C148 * C818 - C62 * C930) * C115 +
                     (C148 * C980 - C62 * C1074) * C63) *
                        C61 * C14477 +
                    ((C62 * C931 - C148 * C819) * C115 +
                     (C62 * C1075 - C148 * C981) * C63) *
                        C61 * C10374) *
                       C14428 +
                   (((C148 * C377 - C62 * C489) * C115 +
                     (C148 * C539 - C62 * C633) * C63) *
                        C61 * C14470 +
                    ((C62 * C2038 - C148 * C1920) * C115 +
                     (C62 * C2203 - C148 * C2094) * C63) *
                        C61 * C14477 +
                    ((C148 * C2990 - C62 * C3084) * C115 +
                     (C148 * C3128 - C62 * C3213) * C63) *
                        C61 * C10374) *
                       C14435 +
                   (((C62 * C490 - C148 * C378) * C115 +
                     (C62 * C634 - C148 * C540) * C63) *
                        C61 * C14470 +
                    ((C148 * C2991 - C62 * C3085) * C115 +
                     (C148 * C3129 - C62 * C3214) * C63) *
                        C61 * C14477 +
                    ((C62 * C3086 - C148 * C2992) * C115 +
                     (C62 * C3215 - C148 * C3130) * C63) *
                        C61 * C10374) *
                       C7608) *
                  C14341) /
                 (p * q * std::sqrt(p + q));
    d2eezx[6] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
               C63 * C14470 +
           ((C71 * C818 - C61 * C824) * C148 +
            (C71 * C1118 - C61 * C1124) * C62) *
               C63 * C14477 +
           ((C61 * C826 - C71 * C819) * C148 +
            (C61 * C1125 - C71 * C1119) * C62) *
               C63 * C10374) *
              C14428 +
          (((C71 * C377 - C61 * C383) * C148 +
            (C71 * C677 - C61 * C683) * C62) *
               C63 * C14470 +
           ((C61 * C1923 - C71 * C1920) * C148 +
            (C61 * C2259 - C71 * C2256) * C62) *
               C63 * C14477 +
           ((C71 * C2990 - C61 * C2993) * C148 +
            (C71 * C3254 - C61 * C3257) * C62) *
               C63 * C10374) *
              C14435 +
          (((C61 * C385 - C71 * C378) * C148 +
            (C61 * C684 - C71 * C678) * C62) *
               C63 * C14470 +
           ((C71 * C2991 - C61 * C2995) * C148 +
            (C71 * C3255 - C61 * C3258) * C62) *
               C63 * C14477 +
           ((C61 * C2997 - C71 * C2992) * C148 +
            (C61 * C3259 - C71 * C3256) * C62) *
               C63 * C10374) *
              C7608) *
         C14341) /
        (p * q * std::sqrt(p + q));
    d2eezy[6] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C63 * C116 - C115 * C73) * C148 +
                     (C63 * C300 - C115 * C268) * C62) *
                        C61 * C14470 +
                    ((C115 * C818 - C63 * C880) * C148 +
                     (C115 * C1118 - C63 * C1168) * C62) *
                        C61 * C14477 +
                    ((C63 * C881 - C115 * C819) * C148 +
                     (C63 * C1169 - C115 * C1119) * C62) *
                        C61 * C10374) *
                       C14428 +
                   (((C115 * C377 - C63 * C439) * C148 +
                     (C115 * C677 - C63 * C727) * C62) *
                        C61 * C14470 +
                    ((C63 * C1982 - C115 * C1920) * C148 +
                     (C63 * C2312 - C115 * C2256) * C62) *
                        C61 * C14477 +
                    ((C115 * C2990 - C63 * C3040) * C148 +
                     (C115 * C3254 - C63 * C3298) * C62) *
                        C61 * C10374) *
                       C14435 +
                   (((C63 * C440 - C115 * C378) * C148 +
                     (C63 * C728 - C115 * C678) * C62) *
                        C61 * C14470 +
                    ((C115 * C2991 - C63 * C3041) * C148 +
                     (C115 * C3255 - C63 * C3299) * C62) *
                        C61 * C14477 +
                    ((C63 * C3042 - C115 * C2992) * C148 +
                     (C63 * C3300 - C115 * C3256) * C62) *
                        C61 * C10374) *
                       C7608) *
                  C14341) /
                 (p * q * std::sqrt(p + q));
    d2eezz[6] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) *
                        C63 * C61 * C14470 -
                    (C148 * C930 - C327 * C818 - C148 * C1118 + C62 * C1212) *
                        C63 * C61 * C14477 +
                    (C148 * C931 - C327 * C819 - C148 * C1119 + C62 * C1213) *
                        C63 * C61 * C10374) *
                       C14428 +
                   ((C148 * C2038 - C327 * C1920 - C148 * C2256 + C62 * C2365) *
                        C63 * C61 * C14477 -
                    (C148 * C489 - C327 * C377 - C148 * C677 + C62 * C771) *
                        C63 * C61 * C14470 -
                    (C148 * C3084 - C327 * C2990 - C148 * C3254 + C62 * C3339) *
                        C63 * C61 * C10374) *
                       C14435 +
                   ((C148 * C490 - C327 * C378 - C148 * C678 + C62 * C772) *
                        C63 * C61 * C14470 -
                    (C148 * C3085 - C327 * C2991 - C148 * C3255 + C62 * C3340) *
                        C63 * C61 * C14477 +
                    (C148 * C3086 - C327 * C2992 - C148 * C3256 + C62 * C3341) *
                        C63 * C61 * C10374) *
                       C7608) *
                  C14341) /
                 (p * q * std::sqrt(p + q));
    d2eexx[7] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 * C63 * C8850 -
           (C71 * C824 - C72 * C818 - C71 * C825 + C61 * C836) * C62 * C63 *
               C14474) *
              C14631 +
          ((C71 * C1923 - C72 * C1920 - C71 * C1924 + C61 * C1929) * C62 * C63 *
               C14474 -
           (C71 * C383 - C72 * C377 - C71 * C384 + C61 * C395) * C62 * C63 *
               C8850) *
              C14627 +
          ((C71 * C385 - C72 * C378 - C71 * C386 + C61 * C396) * C62 * C63 *
               C8850 -
           (C71 * C2995 - C72 * C2991 - C71 * C2996 + C61 * C3000) * C62 * C63 *
               C14474) *
              C14617 +
          ((C71 * C4171 - C72 * C4170 - C71 * C4172 + C61 * C4173) * C62 * C63 *
               C14474 -
           (C71 * C2746 - C72 * C2744 - C71 * C2747 + C61 * C2750) * C62 * C63 *
               C8850) *
              C14599) *
         C14341) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 * C63 *
                C8850 -
            (C71 * C824 - C72 * C818 - C71 * C825 + C61 * C836) * C62 * C63 *
                C14474) *
               C6528 +
           ((C71 * C1923 - C72 * C1920 - C71 * C1924 + C61 * C1929) * C62 *
                C63 * C14474 -
            (C71 * C383 - C72 * C377 - C71 * C384 + C61 * C395) * C62 * C63 *
                C8850) *
               C14432) *
              C14621 +
          (((C71 * C828 - C72 * C820 - C71 * C829 + C61 * C838) * C62 * C63 *
                C14474 -
            (C71 * C80 - C72 * C74 - C71 * C81 + C61 * C89) * C62 * C63 *
                C8850) *
               C6528 +
           ((C71 * C387 - C72 * C379 - C71 * C388 + C61 * C397) * C62 * C63 *
                C8850 -
            (C71 * C1925 - C72 * C1921 - C71 * C1926 + C61 * C1930) * C62 *
                C63 * C14474) *
               C14432) *
              C14608 +
          (((C71 * C82 - C72 * C75 - C71 * C83 + C61 * C90) * C62 * C63 *
                C8850 -
            (C71 * C832 - C72 * C822 - C71 * C833 + C61 * C840) * C62 * C63 *
                C14474) *
               C6528 +
           ((C71 * C1927 - C72 * C1922 - C71 * C1928 + C61 * C1931) * C62 *
                C63 * C14474 -
            (C71 * C391 - C72 * C381 - C71 * C392 + C61 * C399) * C62 * C63 *
                C8850) *
               C14432) *
              C14583)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 * C63 *
               C14632 -
           (C71 * C824 - C72 * C818 - C71 * C825 + C61 * C836) * C62 * C63 *
               C14629 +
           (C71 * C826 - C72 * C819 - C71 * C827 + C61 * C837) * C62 * C63 *
               C14620 -
           (C71 * C5174 - C72 * C5172 - C71 * C5175 + C61 * C5178) * C62 * C63 *
               C14605) *
              C6528 +
          ((C71 * C1923 - C72 * C1920 - C71 * C1924 + C61 * C1929) * C62 * C63 *
               C14629 -
           (C71 * C383 - C72 * C377 - C71 * C384 + C61 * C395) * C62 * C63 *
               C14632 -
           (C71 * C2993 - C72 * C2990 - C71 * C2994 + C61 * C2999) * C62 * C63 *
               C14620 +
           (C71 * C6207 - C72 * C6206 - C71 * C6208 + C61 * C6209) * C62 * C63 *
               C14605) *
              C14432) *
         C14341) /
            (p * q * std::sqrt(p + q));
    d2eexy[7] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C63 * C116 - C115 * C73) * C71 + (C63 * C121 - C115 * C79) * C61) *
               C62 * C8850 +
           ((C115 * C818 - C63 * C880) * C71 +
            (C115 * C825 - C63 * C886) * C61) *
               C62 * C14474) *
              C14631 +
          (((C115 * C377 - C63 * C439) * C71 +
            (C115 * C384 - C63 * C445) * C61) *
               C62 * C8850 +
           ((C63 * C1982 - C115 * C1920) * C71 +
            (C63 * C1985 - C115 * C1924) * C61) *
               C62 * C14474) *
              C14627 +
          (((C63 * C440 - C115 * C378) * C71 +
            (C63 * C446 - C115 * C386) * C61) *
               C62 * C8850 +
           ((C115 * C2991 - C63 * C3041) * C71 +
            (C115 * C2996 - C63 * C3044) * C61) *
               C62 * C14474) *
              C14617 +
          (((C115 * C2744 - C63 * C2774) * C71 +
            (C115 * C2747 - C63 * C2776) * C61) *
               C62 * C8850 +
           ((C63 * C4208 - C115 * C4170) * C71 +
            (C63 * C4209 - C115 * C4172) * C61) *
               C62 * C14474) *
              C14599) *
         C14341) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C63 * C116 - C115 * C73) * C71 +
             (C63 * C121 - C115 * C79) * C61) *
                C62 * C8850 +
            ((C115 * C818 - C63 * C880) * C71 +
             (C115 * C825 - C63 * C886) * C61) *
                C62 * C14474) *
               C6528 +
           (((C115 * C377 - C63 * C439) * C71 +
             (C115 * C384 - C63 * C445) * C61) *
                C62 * C8850 +
            ((C63 * C1982 - C115 * C1920) * C71 +
             (C63 * C1985 - C115 * C1924) * C61) *
                C62 * C14474) *
               C14432) *
              C14621 +
          ((((C115 * C74 - C63 * C117) * C71 +
             (C115 * C81 - C63 * C122) * C61) *
                C62 * C8850 +
            ((C63 * C882 - C115 * C820) * C71 +
             (C63 * C888 - C115 * C829) * C61) *
                C62 * C14474) *
               C6528 +
           (((C63 * C441 - C115 * C379) * C71 +
             (C63 * C447 - C115 * C388) * C61) *
                C62 * C8850 +
            ((C115 * C1921 - C63 * C1983) * C71 +
             (C115 * C1926 - C63 * C1986) * C61) *
                C62 * C14474) *
               C14432) *
              C14608 +
          ((((C63 * C118 - C115 * C75) * C71 +
             (C63 * C123 - C115 * C83) * C61) *
                C62 * C8850 +
            ((C115 * C822 - C63 * C884) * C71 +
             (C115 * C833 - C63 * C890) * C61) *
                C62 * C14474) *
               C6528 +
           (((C115 * C381 - C63 * C443) * C71 +
             (C115 * C392 - C63 * C449) * C61) *
                C62 * C8850 +
            ((C63 * C1984 - C115 * C1922) * C71 +
             (C63 * C1987 - C115 * C1928) * C61) *
                C62 * C14474) *
               C14432) *
              C14583)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C63 * C116 - C115 * C73) * C71 + (C63 * C121 - C115 * C79) * C61) *
               C62 * C14632 +
           ((C115 * C818 - C63 * C880) * C71 +
            (C115 * C825 - C63 * C886) * C61) *
               C62 * C14629 +
           ((C63 * C881 - C115 * C819) * C71 +
            (C63 * C887 - C115 * C827) * C61) *
               C62 * C14620 +
           ((C115 * C5172 - C63 * C5202) * C71 +
            (C115 * C5175 - C63 * C5204) * C61) *
               C62 * C14605) *
              C6528 +
          (((C115 * C377 - C63 * C439) * C71 +
            (C115 * C384 - C63 * C445) * C61) *
               C62 * C14632 +
           ((C63 * C1982 - C115 * C1920) * C71 +
            (C63 * C1985 - C115 * C1924) * C61) *
               C62 * C14629 +
           ((C115 * C2990 - C63 * C3040) * C71 +
            (C115 * C2994 - C63 * C3043) * C61) *
               C62 * C14620 +
           ((C63 * C6244 - C115 * C6206) * C71 +
            (C63 * C6245 - C115 * C6208) * C61) *
               C62 * C14605) *
              C14432) *
         C14341) /
            (p * q * std::sqrt(p + q));
    d2eexz[7] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C62 * C149 - C148 * C73) * C71 + (C62 * C154 - C148 * C79) * C61) *
               C63 * C8850 +
           ((C148 * C818 - C62 * C930) * C71 +
            (C148 * C825 - C62 * C936) * C61) *
               C63 * C14474) *
              C14631 +
          (((C148 * C377 - C62 * C489) * C71 +
            (C148 * C384 - C62 * C495) * C61) *
               C63 * C8850 +
           ((C62 * C2038 - C148 * C1920) * C71 +
            (C62 * C2041 - C148 * C1924) * C61) *
               C63 * C14474) *
              C14627 +
          (((C62 * C490 - C148 * C378) * C71 +
            (C62 * C496 - C148 * C386) * C61) *
               C63 * C8850 +
           ((C148 * C2991 - C62 * C3085) * C71 +
            (C148 * C2996 - C62 * C3088) * C61) *
               C63 * C14474) *
              C14617 +
          (((C148 * C2744 - C62 * C2800) * C71 +
            (C148 * C2747 - C62 * C2802) * C61) *
               C63 * C8850 +
           ((C62 * C4244 - C148 * C4170) * C71 +
            (C62 * C4245 - C148 * C4172) * C61) *
               C63 * C14474) *
              C14599) *
         C14341) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C62 * C149 - C148 * C73) * C71 +
             (C62 * C154 - C148 * C79) * C61) *
                C63 * C8850 +
            ((C148 * C818 - C62 * C930) * C71 +
             (C148 * C825 - C62 * C936) * C61) *
                C63 * C14474) *
               C6528 +
           (((C148 * C377 - C62 * C489) * C71 +
             (C148 * C384 - C62 * C495) * C61) *
                C63 * C8850 +
            ((C62 * C2038 - C148 * C1920) * C71 +
             (C62 * C2041 - C148 * C1924) * C61) *
                C63 * C14474) *
               C14432) *
              C14621 +
          ((((C148 * C74 - C62 * C150) * C71 +
             (C148 * C81 - C62 * C155) * C61) *
                C63 * C8850 +
            ((C62 * C932 - C148 * C820) * C71 +
             (C62 * C938 - C148 * C829) * C61) *
                C63 * C14474) *
               C6528 +
           (((C62 * C491 - C148 * C379) * C71 +
             (C62 * C497 - C148 * C388) * C61) *
                C63 * C8850 +
            ((C148 * C1921 - C62 * C2039) * C71 +
             (C148 * C1926 - C62 * C2042) * C61) *
                C63 * C14474) *
               C14432) *
              C14608 +
          ((((C62 * C151 - C148 * C75) * C71 +
             (C62 * C156 - C148 * C83) * C61) *
                C63 * C8850 +
            ((C148 * C822 - C62 * C934) * C71 +
             (C148 * C833 - C62 * C940) * C61) *
                C63 * C14474) *
               C6528 +
           (((C148 * C381 - C62 * C493) * C71 +
             (C148 * C392 - C62 * C499) * C61) *
                C63 * C8850 +
            ((C62 * C2040 - C148 * C1922) * C71 +
             (C62 * C2043 - C148 * C1928) * C61) *
                C63 * C14474) *
               C14432) *
              C14583)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C62 * C149 - C148 * C73) * C71 + (C62 * C154 - C148 * C79) * C61) *
               C63 * C14632 +
           ((C148 * C818 - C62 * C930) * C71 +
            (C148 * C825 - C62 * C936) * C61) *
               C63 * C14629 +
           ((C62 * C931 - C148 * C819) * C71 +
            (C62 * C937 - C148 * C827) * C61) *
               C63 * C14620 +
           ((C148 * C5172 - C62 * C5228) * C71 +
            (C148 * C5175 - C62 * C5230) * C61) *
               C63 * C14605) *
              C6528 +
          (((C148 * C377 - C62 * C489) * C71 +
            (C148 * C384 - C62 * C495) * C61) *
               C63 * C14632 +
           ((C62 * C2038 - C148 * C1920) * C71 +
            (C62 * C2041 - C148 * C1924) * C61) *
               C63 * C14629 +
           ((C148 * C2990 - C62 * C3084) * C71 +
            (C148 * C2994 - C62 * C3087) * C61) *
               C63 * C14620 +
           ((C62 * C6280 - C148 * C6206) * C71 +
            (C62 * C6281 - C148 * C6208) * C61) *
               C63 * C14605) *
              C14432) *
         C14341) /
            (p * q * std::sqrt(p + q));
    d2eeyx[7] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
               C62 * C8850 +
           ((C71 * C818 - C61 * C824) * C115 +
            (C71 * C980 - C61 * C986) * C63) *
               C62 * C14474) *
              C14631 +
          (((C71 * C377 - C61 * C383) * C115 +
            (C71 * C539 - C61 * C545) * C63) *
               C62 * C8850 +
           ((C61 * C1923 - C71 * C1920) * C115 +
            (C61 * C2097 - C71 * C2094) * C63) *
               C62 * C14474) *
              C14627 +
          (((C61 * C385 - C71 * C378) * C115 +
            (C61 * C546 - C71 * C540) * C63) *
               C62 * C8850 +
           ((C71 * C2991 - C61 * C2995) * C115 +
            (C71 * C3129 - C61 * C3132) * C63) *
               C62 * C14474) *
              C14617 +
          (((C71 * C2744 - C61 * C2746) * C115 +
            (C71 * C2826 - C61 * C2828) * C63) *
               C62 * C8850 +
           ((C61 * C4171 - C71 * C4170) * C115 +
            (C61 * C4281 - C71 * C4280) * C63) *
               C62 * C14474) *
              C14599) *
         C14341) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
                C62 * C8850 +
            ((C71 * C818 - C61 * C824) * C115 +
             (C71 * C980 - C61 * C986) * C63) *
                C62 * C14474) *
               C6528 +
           (((C71 * C377 - C61 * C383) * C115 +
             (C71 * C539 - C61 * C545) * C63) *
                C62 * C8850 +
            ((C61 * C1923 - C71 * C1920) * C115 +
             (C61 * C2097 - C71 * C2094) * C63) *
                C62 * C14474) *
               C14432) *
              C14621 +
          ((((C71 * C74 - C61 * C80) * C115 + (C71 * C182 - C61 * C187) * C63) *
                C62 * C8850 +
            ((C61 * C828 - C71 * C820) * C115 +
             (C61 * C988 - C71 * C982) * C63) *
                C62 * C14474) *
               C6528 +
           (((C61 * C387 - C71 * C379) * C115 +
             (C61 * C547 - C71 * C541) * C63) *
                C62 * C8850 +
            ((C71 * C1921 - C61 * C1925) * C115 +
             (C71 * C2095 - C61 * C2098) * C63) *
                C62 * C14474) *
               C14432) *
              C14608 +
          ((((C61 * C82 - C71 * C75) * C115 + (C61 * C188 - C71 * C183) * C63) *
                C62 * C8850 +
            ((C71 * C822 - C61 * C832) * C115 +
             (C71 * C984 - C61 * C990) * C63) *
                C62 * C14474) *
               C6528 +
           (((C71 * C381 - C61 * C391) * C115 +
             (C71 * C543 - C61 * C549) * C63) *
                C62 * C8850 +
            ((C61 * C1927 - C71 * C1922) * C115 +
             (C61 * C2099 - C71 * C2096) * C63) *
                C62 * C14474) *
               C14432) *
              C14583)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
               C62 * C14632 +
           ((C71 * C818 - C61 * C824) * C115 +
            (C71 * C980 - C61 * C986) * C63) *
               C62 * C14629 +
           ((C61 * C826 - C71 * C819) * C115 +
            (C61 * C987 - C71 * C981) * C63) *
               C62 * C14620 +
           ((C71 * C5172 - C61 * C5174) * C115 +
            (C71 * C5254 - C61 * C5256) * C63) *
               C62 * C14605) *
              C6528 +
          (((C71 * C377 - C61 * C383) * C115 +
            (C71 * C539 - C61 * C545) * C63) *
               C62 * C14632 +
           ((C61 * C1923 - C71 * C1920) * C115 +
            (C61 * C2097 - C71 * C2094) * C63) *
               C62 * C14629 +
           ((C71 * C2990 - C61 * C2993) * C115 +
            (C71 * C3128 - C61 * C3131) * C63) *
               C62 * C14620 +
           ((C61 * C6207 - C71 * C6206) * C115 +
            (C61 * C6317 - C71 * C6316) * C63) *
               C62 * C14605) *
              C14432) *
         C14341) /
            (p * q * std::sqrt(p + q));
    d2eeyy[7] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) * C61 * C62 *
               C8850 -
           (C115 * C880 - C213 * C818 - C115 * C980 + C63 * C1030) * C61 * C62 *
               C14474) *
              C14631 +
          ((C115 * C1982 - C213 * C1920 - C115 * C2094 + C63 * C2150) * C61 *
               C62 * C14474 -
           (C115 * C439 - C213 * C377 - C115 * C539 + C63 * C589) * C61 * C62 *
               C8850) *
              C14627 +
          ((C115 * C440 - C213 * C378 - C115 * C540 + C63 * C590) * C61 * C62 *
               C8850 -
           (C115 * C3041 - C213 * C2991 - C115 * C3129 + C63 * C3173) * C61 *
               C62 * C14474) *
              C14617 +
          ((C115 * C4208 - C213 * C4170 - C115 * C4280 + C63 * C4316) * C61 *
               C62 * C14474 -
           (C115 * C2774 - C213 * C2744 - C115 * C2826 + C63 * C2852) * C61 *
               C62 * C8850) *
              C14599) *
         C14341) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) * C61 * C62 *
                C8850 -
            (C115 * C880 - C213 * C818 - C115 * C980 + C63 * C1030) * C61 *
                C62 * C14474) *
               C6528 +
           ((C115 * C1982 - C213 * C1920 - C115 * C2094 + C63 * C2150) * C61 *
                C62 * C14474 -
            (C115 * C439 - C213 * C377 - C115 * C539 + C63 * C589) * C61 * C62 *
                C8850) *
               C14432) *
              C14621 +
          (((C115 * C882 - C213 * C820 - C115 * C982 + C63 * C1032) * C61 *
                C62 * C14474 -
            (C115 * C117 - C213 * C74 - C115 * C182 + C63 * C215) * C61 * C62 *
                C8850) *
               C6528 +
           ((C115 * C441 - C213 * C379 - C115 * C541 + C63 * C591) * C61 * C62 *
                C8850 -
            (C115 * C1983 - C213 * C1921 - C115 * C2095 + C63 * C2151) * C61 *
                C62 * C14474) *
               C14432) *
              C14608 +
          (((C115 * C118 - C213 * C75 - C115 * C183 + C63 * C216) * C61 * C62 *
                C8850 -
            (C115 * C884 - C213 * C822 - C115 * C984 + C63 * C1034) * C61 *
                C62 * C14474) *
               C6528 +
           ((C115 * C1984 - C213 * C1922 - C115 * C2096 + C63 * C2152) * C61 *
                C62 * C14474 -
            (C115 * C443 - C213 * C381 - C115 * C543 + C63 * C593) * C61 * C62 *
                C8850) *
               C14432) *
              C14583)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) * C61 * C62 *
               C14632 -
           (C115 * C880 - C213 * C818 - C115 * C980 + C63 * C1030) * C61 * C62 *
               C14629 +
           (C115 * C881 - C213 * C819 - C115 * C981 + C63 * C1031) * C61 * C62 *
               C14620 -
           (C115 * C5202 - C213 * C5172 - C115 * C5254 + C63 * C5280) * C61 *
               C62 * C14605) *
              C6528 +
          ((C115 * C1982 - C213 * C1920 - C115 * C2094 + C63 * C2150) * C61 *
               C62 * C14629 -
           (C115 * C439 - C213 * C377 - C115 * C539 + C63 * C589) * C61 * C62 *
               C14632 -
           (C115 * C3040 - C213 * C2990 - C115 * C3128 + C63 * C3172) * C61 *
               C62 * C14620 +
           (C115 * C6244 - C213 * C6206 - C115 * C6316 + C63 * C6352) * C61 *
               C62 * C14605) *
              C14432) *
         C14341) /
            (p * q * std::sqrt(p + q));
    d2eeyz[7] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((((C62 * C149 - C148 * C73) * C115 +
                     (C62 * C241 - C148 * C181) * C63) *
                        C61 * C8850 +
                    ((C148 * C818 - C62 * C930) * C115 +
                     (C148 * C980 - C62 * C1074) * C63) *
                        C61 * C14474) *
                       C14631 +
                   (((C148 * C377 - C62 * C489) * C115 +
                     (C148 * C539 - C62 * C633) * C63) *
                        C61 * C8850 +
                    ((C62 * C2038 - C148 * C1920) * C115 +
                     (C62 * C2203 - C148 * C2094) * C63) *
                        C61 * C14474) *
                       C14627 +
                   (((C62 * C490 - C148 * C378) * C115 +
                     (C62 * C634 - C148 * C540) * C63) *
                        C61 * C8850 +
                    ((C148 * C2991 - C62 * C3085) * C115 +
                     (C148 * C3129 - C62 * C3214) * C63) *
                        C61 * C14474) *
                       C14617 +
                   (((C148 * C2744 - C62 * C2800) * C115 +
                     (C148 * C2826 - C62 * C2876) * C63) *
                        C61 * C8850 +
                    ((C62 * C4244 - C148 * C4170) * C115 +
                     (C62 * C4351 - C148 * C4280) * C63) *
                        C61 * C14474) *
                       C14599) *
                  C14341) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((((C62 * C149 - C148 * C73) * C115 +
                      (C62 * C241 - C148 * C181) * C63) *
                         C61 * C8850 +
                     ((C148 * C818 - C62 * C930) * C115 +
                      (C148 * C980 - C62 * C1074) * C63) *
                         C61 * C14474) *
                        C6528 +
                    (((C148 * C377 - C62 * C489) * C115 +
                      (C148 * C539 - C62 * C633) * C63) *
                         C61 * C8850 +
                     ((C62 * C2038 - C148 * C1920) * C115 +
                      (C62 * C2203 - C148 * C2094) * C63) *
                         C61 * C14474) *
                        C14432) *
                       C14621 +
                   ((((C148 * C74 - C62 * C150) * C115 +
                      (C148 * C182 - C62 * C242) * C63) *
                         C61 * C8850 +
                     ((C62 * C932 - C148 * C820) * C115 +
                      (C62 * C1076 - C148 * C982) * C63) *
                         C61 * C14474) *
                        C6528 +
                    (((C62 * C491 - C148 * C379) * C115 +
                      (C62 * C635 - C148 * C541) * C63) *
                         C61 * C8850 +
                     ((C148 * C1921 - C62 * C2039) * C115 +
                      (C148 * C2095 - C62 * C2204) * C63) *
                         C61 * C14474) *
                        C14432) *
                       C14608 +
                   ((((C62 * C151 - C148 * C75) * C115 +
                      (C62 * C243 - C148 * C183) * C63) *
                         C61 * C8850 +
                     ((C148 * C822 - C62 * C934) * C115 +
                      (C148 * C984 - C62 * C1078) * C63) *
                         C61 * C14474) *
                        C6528 +
                    (((C148 * C381 - C62 * C493) * C115 +
                      (C148 * C543 - C62 * C637) * C63) *
                         C61 * C8850 +
                     ((C62 * C2040 - C148 * C1922) * C115 +
                      (C62 * C2205 - C148 * C2096) * C63) *
                         C61 * C14474) *
                        C14432) *
                       C14583)) /
                     (p * q * std::sqrt(p + q)) +
                 (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C62 * C149 - C148 * C73) * C115 +
                     (C62 * C241 - C148 * C181) * C63) *
                        C61 * C14632 +
                    ((C148 * C818 - C62 * C930) * C115 +
                     (C148 * C980 - C62 * C1074) * C63) *
                        C61 * C14629 +
                    ((C62 * C931 - C148 * C819) * C115 +
                     (C62 * C1075 - C148 * C981) * C63) *
                        C61 * C14620 +
                    ((C148 * C5172 - C62 * C5228) * C115 +
                     (C148 * C5254 - C62 * C5304) * C63) *
                        C61 * C14605) *
                       C6528 +
                   (((C148 * C377 - C62 * C489) * C115 +
                     (C148 * C539 - C62 * C633) * C63) *
                        C61 * C14632 +
                    ((C62 * C2038 - C148 * C1920) * C115 +
                     (C62 * C2203 - C148 * C2094) * C63) *
                        C61 * C14629 +
                    ((C148 * C2990 - C62 * C3084) * C115 +
                     (C148 * C3128 - C62 * C3213) * C63) *
                        C61 * C14620 +
                    ((C62 * C6280 - C148 * C6206) * C115 +
                     (C62 * C6387 - C148 * C6316) * C63) *
                        C61 * C14605) *
                       C14432) *
                  C14341) /
                     (p * q * std::sqrt(p + q));
    d2eezx[7] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
               C63 * C8850 +
           ((C71 * C818 - C61 * C824) * C148 +
            (C71 * C1118 - C61 * C1124) * C62) *
               C63 * C14474) *
              C14631 +
          (((C71 * C377 - C61 * C383) * C148 +
            (C71 * C677 - C61 * C683) * C62) *
               C63 * C8850 +
           ((C61 * C1923 - C71 * C1920) * C148 +
            (C61 * C2259 - C71 * C2256) * C62) *
               C63 * C14474) *
              C14627 +
          (((C61 * C385 - C71 * C378) * C148 +
            (C61 * C684 - C71 * C678) * C62) *
               C63 * C8850 +
           ((C71 * C2991 - C61 * C2995) * C148 +
            (C71 * C3255 - C61 * C3258) * C62) *
               C63 * C14474) *
              C14617 +
          (((C71 * C2744 - C61 * C2746) * C148 +
            (C71 * C2900 - C61 * C2902) * C62) *
               C63 * C8850 +
           ((C61 * C4171 - C71 * C4170) * C148 +
            (C61 * C4387 - C71 * C4386) * C62) *
               C63 * C14474) *
              C14599) *
         C14341) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
                C63 * C8850 +
            ((C71 * C818 - C61 * C824) * C148 +
             (C71 * C1118 - C61 * C1124) * C62) *
                C63 * C14474) *
               C6528 +
           (((C71 * C377 - C61 * C383) * C148 +
             (C71 * C677 - C61 * C683) * C62) *
                C63 * C8850 +
            ((C61 * C1923 - C71 * C1920) * C148 +
             (C61 * C2259 - C71 * C2256) * C62) *
                C63 * C14474) *
               C14432) *
              C14621 +
          ((((C71 * C74 - C61 * C80) * C148 + (C71 * C269 - C61 * C274) * C62) *
                C63 * C8850 +
            ((C61 * C828 - C71 * C820) * C148 +
             (C61 * C1126 - C71 * C1120) * C62) *
                C63 * C14474) *
               C6528 +
           (((C61 * C387 - C71 * C379) * C148 +
             (C61 * C685 - C71 * C679) * C62) *
                C63 * C8850 +
            ((C71 * C1921 - C61 * C1925) * C148 +
             (C71 * C2257 - C61 * C2260) * C62) *
                C63 * C14474) *
               C14432) *
              C14608 +
          ((((C61 * C82 - C71 * C75) * C148 + (C61 * C275 - C71 * C270) * C62) *
                C63 * C8850 +
            ((C71 * C822 - C61 * C832) * C148 +
             (C71 * C1122 - C61 * C1128) * C62) *
                C63 * C14474) *
               C6528 +
           (((C71 * C381 - C61 * C391) * C148 +
             (C71 * C681 - C61 * C687) * C62) *
                C63 * C8850 +
            ((C61 * C1927 - C71 * C1922) * C148 +
             (C61 * C2261 - C71 * C2258) * C62) *
                C63 * C14474) *
               C14432) *
              C14583)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
               C63 * C14632 +
           ((C71 * C818 - C61 * C824) * C148 +
            (C71 * C1118 - C61 * C1124) * C62) *
               C63 * C14629 +
           ((C61 * C826 - C71 * C819) * C148 +
            (C61 * C1125 - C71 * C1119) * C62) *
               C63 * C14620 +
           ((C71 * C5172 - C61 * C5174) * C148 +
            (C71 * C5328 - C61 * C5330) * C62) *
               C63 * C14605) *
              C6528 +
          (((C71 * C377 - C61 * C383) * C148 +
            (C71 * C677 - C61 * C683) * C62) *
               C63 * C14632 +
           ((C61 * C1923 - C71 * C1920) * C148 +
            (C61 * C2259 - C71 * C2256) * C62) *
               C63 * C14629 +
           ((C71 * C2990 - C61 * C2993) * C148 +
            (C71 * C3254 - C61 * C3257) * C62) *
               C63 * C14620 +
           ((C61 * C6207 - C71 * C6206) * C148 +
            (C61 * C6423 - C71 * C6422) * C62) *
               C63 * C14605) *
              C14432) *
         C14341) /
            (p * q * std::sqrt(p + q));
    d2eezy[7] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((((C63 * C116 - C115 * C73) * C148 +
                     (C63 * C300 - C115 * C268) * C62) *
                        C61 * C8850 +
                    ((C115 * C818 - C63 * C880) * C148 +
                     (C115 * C1118 - C63 * C1168) * C62) *
                        C61 * C14474) *
                       C14631 +
                   (((C115 * C377 - C63 * C439) * C148 +
                     (C115 * C677 - C63 * C727) * C62) *
                        C61 * C8850 +
                    ((C63 * C1982 - C115 * C1920) * C148 +
                     (C63 * C2312 - C115 * C2256) * C62) *
                        C61 * C14474) *
                       C14627 +
                   (((C63 * C440 - C115 * C378) * C148 +
                     (C63 * C728 - C115 * C678) * C62) *
                        C61 * C8850 +
                    ((C115 * C2991 - C63 * C3041) * C148 +
                     (C115 * C3255 - C63 * C3299) * C62) *
                        C61 * C14474) *
                       C14617 +
                   (((C115 * C2744 - C63 * C2774) * C148 +
                     (C115 * C2900 - C63 * C2926) * C62) *
                        C61 * C8850 +
                    ((C63 * C4208 - C115 * C4170) * C148 +
                     (C63 * C4422 - C115 * C4386) * C62) *
                        C61 * C14474) *
                       C14599) *
                  C14341) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((((C63 * C116 - C115 * C73) * C148 +
                      (C63 * C300 - C115 * C268) * C62) *
                         C61 * C8850 +
                     ((C115 * C818 - C63 * C880) * C148 +
                      (C115 * C1118 - C63 * C1168) * C62) *
                         C61 * C14474) *
                        C6528 +
                    (((C115 * C377 - C63 * C439) * C148 +
                      (C115 * C677 - C63 * C727) * C62) *
                         C61 * C8850 +
                     ((C63 * C1982 - C115 * C1920) * C148 +
                      (C63 * C2312 - C115 * C2256) * C62) *
                         C61 * C14474) *
                        C14432) *
                       C14621 +
                   ((((C115 * C74 - C63 * C117) * C148 +
                      (C115 * C269 - C63 * C301) * C62) *
                         C61 * C8850 +
                     ((C63 * C882 - C115 * C820) * C148 +
                      (C63 * C1170 - C115 * C1120) * C62) *
                         C61 * C14474) *
                        C6528 +
                    (((C63 * C441 - C115 * C379) * C148 +
                      (C63 * C729 - C115 * C679) * C62) *
                         C61 * C8850 +
                     ((C115 * C1921 - C63 * C1983) * C148 +
                      (C115 * C2257 - C63 * C2313) * C62) *
                         C61 * C14474) *
                        C14432) *
                       C14608 +
                   ((((C63 * C118 - C115 * C75) * C148 +
                      (C63 * C302 - C115 * C270) * C62) *
                         C61 * C8850 +
                     ((C115 * C822 - C63 * C884) * C148 +
                      (C115 * C1122 - C63 * C1172) * C62) *
                         C61 * C14474) *
                        C6528 +
                    (((C115 * C381 - C63 * C443) * C148 +
                      (C115 * C681 - C63 * C731) * C62) *
                         C61 * C8850 +
                     ((C63 * C1984 - C115 * C1922) * C148 +
                      (C63 * C2314 - C115 * C2258) * C62) *
                         C61 * C14474) *
                        C14432) *
                       C14583)) /
                     (p * q * std::sqrt(p + q)) +
                 (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C63 * C116 - C115 * C73) * C148 +
                     (C63 * C300 - C115 * C268) * C62) *
                        C61 * C14632 +
                    ((C115 * C818 - C63 * C880) * C148 +
                     (C115 * C1118 - C63 * C1168) * C62) *
                        C61 * C14629 +
                    ((C63 * C881 - C115 * C819) * C148 +
                     (C63 * C1169 - C115 * C1119) * C62) *
                        C61 * C14620 +
                    ((C115 * C5172 - C63 * C5202) * C148 +
                     (C115 * C5328 - C63 * C5354) * C62) *
                        C61 * C14605) *
                       C6528 +
                   (((C115 * C377 - C63 * C439) * C148 +
                     (C115 * C677 - C63 * C727) * C62) *
                        C61 * C14632 +
                    ((C63 * C1982 - C115 * C1920) * C148 +
                     (C63 * C2312 - C115 * C2256) * C62) *
                        C61 * C14629 +
                    ((C115 * C2990 - C63 * C3040) * C148 +
                     (C115 * C3254 - C63 * C3298) * C62) *
                        C61 * C14620 +
                    ((C63 * C6244 - C115 * C6206) * C148 +
                     (C63 * C6458 - C115 * C6422) * C62) *
                        C61 * C14605) *
                       C14432) *
                  C14341) /
                     (p * q * std::sqrt(p + q));
    d2eezz[7] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) * C63 * C61 *
               C8850 -
           (C148 * C930 - C327 * C818 - C148 * C1118 + C62 * C1212) * C63 *
               C61 * C14474) *
              C14631 +
          ((C148 * C2038 - C327 * C1920 - C148 * C2256 + C62 * C2365) * C63 *
               C61 * C14474 -
           (C148 * C489 - C327 * C377 - C148 * C677 + C62 * C771) * C63 * C61 *
               C8850) *
              C14627 +
          ((C148 * C490 - C327 * C378 - C148 * C678 + C62 * C772) * C63 * C61 *
               C8850 -
           (C148 * C3085 - C327 * C2991 - C148 * C3255 + C62 * C3340) * C63 *
               C61 * C14474) *
              C14617 +
          ((C148 * C4244 - C327 * C4170 - C148 * C4386 + C62 * C4457) * C63 *
               C61 * C14474 -
           (C148 * C2800 - C327 * C2744 - C148 * C2900 + C62 * C2950) * C63 *
               C61 * C8850) *
              C14599) *
         C14341) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) * C63 * C61 *
                C8850 -
            (C148 * C930 - C327 * C818 - C148 * C1118 + C62 * C1212) * C63 *
                C61 * C14474) *
               C6528 +
           ((C148 * C2038 - C327 * C1920 - C148 * C2256 + C62 * C2365) * C63 *
                C61 * C14474 -
            (C148 * C489 - C327 * C377 - C148 * C677 + C62 * C771) * C63 * C61 *
                C8850) *
               C14432) *
              C14621 +
          (((C148 * C932 - C327 * C820 - C148 * C1120 + C62 * C1214) * C63 *
                C61 * C14474 -
            (C148 * C150 - C327 * C74 - C148 * C269 + C62 * C329) * C63 * C61 *
                C8850) *
               C6528 +
           ((C148 * C491 - C327 * C379 - C148 * C679 + C62 * C773) * C63 * C61 *
                C8850 -
            (C148 * C2039 - C327 * C1921 - C148 * C2257 + C62 * C2366) * C63 *
                C61 * C14474) *
               C14432) *
              C14608 +
          (((C148 * C151 - C327 * C75 - C148 * C270 + C62 * C330) * C63 * C61 *
                C8850 -
            (C148 * C934 - C327 * C822 - C148 * C1122 + C62 * C1216) * C63 *
                C61 * C14474) *
               C6528 +
           ((C148 * C2040 - C327 * C1922 - C148 * C2258 + C62 * C2367) * C63 *
                C61 * C14474 -
            (C148 * C493 - C327 * C381 - C148 * C681 + C62 * C775) * C63 * C61 *
                C8850) *
               C14432) *
              C14583)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) * C63 * C61 *
               C14632 -
           (C148 * C930 - C327 * C818 - C148 * C1118 + C62 * C1212) * C63 *
               C61 * C14629 +
           (C148 * C931 - C327 * C819 - C148 * C1119 + C62 * C1213) * C63 *
               C61 * C14620 -
           (C148 * C5228 - C327 * C5172 - C148 * C5328 + C62 * C5378) * C63 *
               C61 * C14605) *
              C6528 +
          ((C148 * C2038 - C327 * C1920 - C148 * C2256 + C62 * C2365) * C63 *
               C61 * C14629 -
           (C148 * C489 - C327 * C377 - C148 * C677 + C62 * C771) * C63 * C61 *
               C14632 -
           (C148 * C3084 - C327 * C2990 - C148 * C3254 + C62 * C3339) * C63 *
               C61 * C14620 +
           (C148 * C6280 - C327 * C6206 - C148 * C6422 + C62 * C6493) * C63 *
               C61 * C14605) *
              C14432) *
         C14341) /
            (p * q * std::sqrt(p + q));
    d2eexx[8] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 *
                         C63 * C14470 -
                     (C71 * C824 - C72 * C818 - C71 * C825 + C61 * C836) * C62 *
                         C63 * C14477 +
                     (C71 * C826 - C72 * C819 - C71 * C827 + C61 * C837) * C62 *
                         C63 * C10374) *
                        C6528 +
                    ((C71 * C1923 - C72 * C1920 - C71 * C1924 + C61 * C1929) *
                         C62 * C63 * C14477 -
                     (C71 * C383 - C72 * C377 - C71 * C384 + C61 * C395) * C62 *
                         C63 * C14470 -
                     (C71 * C2993 - C72 * C2990 - C71 * C2994 + C61 * C2999) *
                         C62 * C63 * C10374) *
                        C14432) *
                       C14549 +
                   (((C71 * C828 - C72 * C820 - C71 * C829 + C61 * C838) * C62 *
                         C63 * C14477 -
                     (C71 * C80 - C72 * C74 - C71 * C81 + C61 * C89) * C62 *
                         C63 * C14470 -
                     (C71 * C830 - C72 * C821 - C71 * C831 + C61 * C839) * C62 *
                         C63 * C10374) *
                        C6528 +
                    ((C71 * C387 - C72 * C379 - C71 * C388 + C61 * C397) * C62 *
                         C63 * C14470 -
                     (C71 * C1925 - C72 * C1921 - C71 * C1926 + C61 * C1930) *
                         C62 * C63 * C14477 +
                     (C71 * C5431 - C72 * C5430 - C71 * C5432 + C61 * C5433) *
                         C62 * C63 * C10374) *
                        C14432) *
                       C14352)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[8] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((((C63 * C116 - C115 * C73) * C71 +
                      (C63 * C121 - C115 * C79) * C61) *
                         C62 * C14470 +
                     ((C115 * C818 - C63 * C880) * C71 +
                      (C115 * C825 - C63 * C886) * C61) *
                         C62 * C14477 +
                     ((C63 * C881 - C115 * C819) * C71 +
                      (C63 * C887 - C115 * C827) * C61) *
                         C62 * C10374) *
                        C6528 +
                    (((C115 * C377 - C63 * C439) * C71 +
                      (C115 * C384 - C63 * C445) * C61) *
                         C62 * C14470 +
                     ((C63 * C1982 - C115 * C1920) * C71 +
                      (C63 * C1985 - C115 * C1924) * C61) *
                         C62 * C14477 +
                     ((C115 * C2990 - C63 * C3040) * C71 +
                      (C115 * C2994 - C63 * C3043) * C61) *
                         C62 * C10374) *
                        C14432) *
                       C14549 +
                   ((((C115 * C74 - C63 * C117) * C71 +
                      (C115 * C81 - C63 * C122) * C61) *
                         C62 * C14470 +
                     ((C63 * C882 - C115 * C820) * C71 +
                      (C63 * C888 - C115 * C829) * C61) *
                         C62 * C14477 +
                     ((C115 * C821 - C63 * C883) * C71 +
                      (C115 * C831 - C63 * C889) * C61) *
                         C62 * C10374) *
                        C6528 +
                    (((C63 * C441 - C115 * C379) * C71 +
                      (C63 * C447 - C115 * C388) * C61) *
                         C62 * C14470 +
                     ((C115 * C1921 - C63 * C1983) * C71 +
                      (C115 * C1926 - C63 * C1986) * C61) *
                         C62 * C14477 +
                     ((C63 * C5484 - C115 * C5430) * C71 +
                      (C63 * C5485 - C115 * C5432) * C61) *
                         C62 * C10374) *
                        C14432) *
                       C14352)) /
                 (p * q * std::sqrt(p + q));
    d2eexz[8] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((((C62 * C149 - C148 * C73) * C71 +
                      (C62 * C154 - C148 * C79) * C61) *
                         C63 * C14470 +
                     ((C148 * C818 - C62 * C930) * C71 +
                      (C148 * C825 - C62 * C936) * C61) *
                         C63 * C14477 +
                     ((C62 * C931 - C148 * C819) * C71 +
                      (C62 * C937 - C148 * C827) * C61) *
                         C63 * C10374) *
                        C6528 +
                    (((C148 * C377 - C62 * C489) * C71 +
                      (C148 * C384 - C62 * C495) * C61) *
                         C63 * C14470 +
                     ((C62 * C2038 - C148 * C1920) * C71 +
                      (C62 * C2041 - C148 * C1924) * C61) *
                         C63 * C14477 +
                     ((C148 * C2990 - C62 * C3084) * C71 +
                      (C148 * C2994 - C62 * C3087) * C61) *
                         C63 * C10374) *
                        C14432) *
                       C14549 +
                   ((((C148 * C74 - C62 * C150) * C71 +
                      (C148 * C81 - C62 * C155) * C61) *
                         C63 * C14470 +
                     ((C62 * C932 - C148 * C820) * C71 +
                      (C62 * C938 - C148 * C829) * C61) *
                         C63 * C14477 +
                     ((C148 * C821 - C62 * C933) * C71 +
                      (C148 * C831 - C62 * C939) * C61) *
                         C63 * C10374) *
                        C6528 +
                    (((C62 * C491 - C148 * C379) * C71 +
                      (C62 * C497 - C148 * C388) * C61) *
                         C63 * C14470 +
                     ((C148 * C1921 - C62 * C2039) * C71 +
                      (C148 * C1926 - C62 * C2042) * C61) *
                         C63 * C14477 +
                     ((C62 * C5536 - C148 * C5430) * C71 +
                      (C62 * C5537 - C148 * C5432) * C61) *
                         C63 * C10374) *
                        C14432) *
                       C14352)) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[8] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
                C62 * C14470 +
            ((C71 * C818 - C61 * C824) * C115 +
             (C71 * C980 - C61 * C986) * C63) *
                C62 * C14477 +
            ((C61 * C826 - C71 * C819) * C115 +
             (C61 * C987 - C71 * C981) * C63) *
                C62 * C10374) *
               C6528 +
           (((C71 * C377 - C61 * C383) * C115 +
             (C71 * C539 - C61 * C545) * C63) *
                C62 * C14470 +
            ((C61 * C1923 - C71 * C1920) * C115 +
             (C61 * C2097 - C71 * C2094) * C63) *
                C62 * C14477 +
            ((C71 * C2990 - C61 * C2993) * C115 +
             (C71 * C3128 - C61 * C3131) * C63) *
                C62 * C10374) *
               C14432) *
              C14549 +
          ((((C71 * C74 - C61 * C80) * C115 + (C71 * C182 - C61 * C187) * C63) *
                C62 * C14470 +
            ((C61 * C828 - C71 * C820) * C115 +
             (C61 * C988 - C71 * C982) * C63) *
                C62 * C14477 +
            ((C71 * C821 - C61 * C830) * C115 +
             (C71 * C983 - C61 * C989) * C63) *
                C62 * C10374) *
               C6528 +
           (((C61 * C387 - C71 * C379) * C115 +
             (C61 * C547 - C71 * C541) * C63) *
                C62 * C14470 +
            ((C71 * C1921 - C61 * C1925) * C115 +
             (C71 * C2095 - C61 * C2098) * C63) *
                C62 * C14477 +
            ((C61 * C5431 - C71 * C5430) * C115 +
             (C61 * C5589 - C71 * C5588) * C63) *
                C62 * C10374) *
               C14432) *
              C14352)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[8] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) * C61 * C62 *
                C14470 -
            (C115 * C880 - C213 * C818 - C115 * C980 + C63 * C1030) * C61 *
                C62 * C14477 +
            (C115 * C881 - C213 * C819 - C115 * C981 + C63 * C1031) * C61 *
                C62 * C10374) *
               C6528 +
           ((C115 * C1982 - C213 * C1920 - C115 * C2094 + C63 * C2150) * C61 *
                C62 * C14477 -
            (C115 * C439 - C213 * C377 - C115 * C539 + C63 * C589) * C61 * C62 *
                C14470 -
            (C115 * C3040 - C213 * C2990 - C115 * C3128 + C63 * C3172) * C61 *
                C62 * C10374) *
               C14432) *
              C14549 +
          (((C115 * C882 - C213 * C820 - C115 * C982 + C63 * C1032) * C61 *
                C62 * C14477 -
            (C115 * C117 - C213 * C74 - C115 * C182 + C63 * C215) * C61 * C62 *
                C14470 -
            (C115 * C883 - C213 * C821 - C115 * C983 + C63 * C1033) * C61 *
                C62 * C10374) *
               C6528 +
           ((C115 * C441 - C213 * C379 - C115 * C541 + C63 * C591) * C61 * C62 *
                C14470 -
            (C115 * C1983 - C213 * C1921 - C115 * C2095 + C63 * C2151) * C61 *
                C62 * C14477 +
            (C115 * C5484 - C213 * C5430 - C115 * C5588 + C63 * C5640) * C61 *
                C62 * C10374) *
               C14432) *
              C14352)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[8] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((((C62 * C149 - C148 * C73) * C115 +
                      (C62 * C241 - C148 * C181) * C63) *
                         C61 * C14470 +
                     ((C148 * C818 - C62 * C930) * C115 +
                      (C148 * C980 - C62 * C1074) * C63) *
                         C61 * C14477 +
                     ((C62 * C931 - C148 * C819) * C115 +
                      (C62 * C1075 - C148 * C981) * C63) *
                         C61 * C10374) *
                        C6528 +
                    (((C148 * C377 - C62 * C489) * C115 +
                      (C148 * C539 - C62 * C633) * C63) *
                         C61 * C14470 +
                     ((C62 * C2038 - C148 * C1920) * C115 +
                      (C62 * C2203 - C148 * C2094) * C63) *
                         C61 * C14477 +
                     ((C148 * C2990 - C62 * C3084) * C115 +
                      (C148 * C3128 - C62 * C3213) * C63) *
                         C61 * C10374) *
                        C14432) *
                       C14549 +
                   ((((C148 * C74 - C62 * C150) * C115 +
                      (C148 * C182 - C62 * C242) * C63) *
                         C61 * C14470 +
                     ((C62 * C932 - C148 * C820) * C115 +
                      (C62 * C1076 - C148 * C982) * C63) *
                         C61 * C14477 +
                     ((C148 * C821 - C62 * C933) * C115 +
                      (C148 * C983 - C62 * C1077) * C63) *
                         C61 * C10374) *
                        C6528 +
                    (((C62 * C491 - C148 * C379) * C115 +
                      (C62 * C635 - C148 * C541) * C63) *
                         C61 * C14470 +
                     ((C148 * C1921 - C62 * C2039) * C115 +
                      (C148 * C2095 - C62 * C2204) * C63) *
                         C61 * C14477 +
                     ((C62 * C5536 - C148 * C5430) * C115 +
                      (C62 * C5691 - C148 * C5588) * C63) *
                         C61 * C10374) *
                        C14432) *
                       C14352)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[8] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
                C63 * C14470 +
            ((C71 * C818 - C61 * C824) * C148 +
             (C71 * C1118 - C61 * C1124) * C62) *
                C63 * C14477 +
            ((C61 * C826 - C71 * C819) * C148 +
             (C61 * C1125 - C71 * C1119) * C62) *
                C63 * C10374) *
               C6528 +
           (((C71 * C377 - C61 * C383) * C148 +
             (C71 * C677 - C61 * C683) * C62) *
                C63 * C14470 +
            ((C61 * C1923 - C71 * C1920) * C148 +
             (C61 * C2259 - C71 * C2256) * C62) *
                C63 * C14477 +
            ((C71 * C2990 - C61 * C2993) * C148 +
             (C71 * C3254 - C61 * C3257) * C62) *
                C63 * C10374) *
               C14432) *
              C14549 +
          ((((C71 * C74 - C61 * C80) * C148 + (C71 * C269 - C61 * C274) * C62) *
                C63 * C14470 +
            ((C61 * C828 - C71 * C820) * C148 +
             (C61 * C1126 - C71 * C1120) * C62) *
                C63 * C14477 +
            ((C71 * C821 - C61 * C830) * C148 +
             (C71 * C1121 - C61 * C1127) * C62) *
                C63 * C10374) *
               C6528 +
           (((C61 * C387 - C71 * C379) * C148 +
             (C61 * C685 - C71 * C679) * C62) *
                C63 * C14470 +
            ((C71 * C1921 - C61 * C1925) * C148 +
             (C71 * C2257 - C61 * C2260) * C62) *
                C63 * C14477 +
            ((C61 * C5431 - C71 * C5430) * C148 +
             (C61 * C5743 - C71 * C5742) * C62) *
                C63 * C10374) *
               C14432) *
              C14352)) /
        (p * q * std::sqrt(p + q));
    d2eezy[8] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((((C63 * C116 - C115 * C73) * C148 +
                      (C63 * C300 - C115 * C268) * C62) *
                         C61 * C14470 +
                     ((C115 * C818 - C63 * C880) * C148 +
                      (C115 * C1118 - C63 * C1168) * C62) *
                         C61 * C14477 +
                     ((C63 * C881 - C115 * C819) * C148 +
                      (C63 * C1169 - C115 * C1119) * C62) *
                         C61 * C10374) *
                        C6528 +
                    (((C115 * C377 - C63 * C439) * C148 +
                      (C115 * C677 - C63 * C727) * C62) *
                         C61 * C14470 +
                     ((C63 * C1982 - C115 * C1920) * C148 +
                      (C63 * C2312 - C115 * C2256) * C62) *
                         C61 * C14477 +
                     ((C115 * C2990 - C63 * C3040) * C148 +
                      (C115 * C3254 - C63 * C3298) * C62) *
                         C61 * C10374) *
                        C14432) *
                       C14549 +
                   ((((C115 * C74 - C63 * C117) * C148 +
                      (C115 * C269 - C63 * C301) * C62) *
                         C61 * C14470 +
                     ((C63 * C882 - C115 * C820) * C148 +
                      (C63 * C1170 - C115 * C1120) * C62) *
                         C61 * C14477 +
                     ((C115 * C821 - C63 * C883) * C148 +
                      (C115 * C1121 - C63 * C1171) * C62) *
                         C61 * C10374) *
                        C6528 +
                    (((C63 * C441 - C115 * C379) * C148 +
                      (C63 * C729 - C115 * C679) * C62) *
                         C61 * C14470 +
                     ((C115 * C1921 - C63 * C1983) * C148 +
                      (C115 * C2257 - C63 * C2313) * C62) *
                         C61 * C14477 +
                     ((C63 * C5484 - C115 * C5430) * C148 +
                      (C63 * C5794 - C115 * C5742) * C62) *
                         C61 * C10374) *
                        C14432) *
                       C14352)) /
                 (p * q * std::sqrt(p + q));
    d2eezz[8] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) * C63 * C61 *
                C14470 -
            (C148 * C930 - C327 * C818 - C148 * C1118 + C62 * C1212) * C63 *
                C61 * C14477 +
            (C148 * C931 - C327 * C819 - C148 * C1119 + C62 * C1213) * C63 *
                C61 * C10374) *
               C6528 +
           ((C148 * C2038 - C327 * C1920 - C148 * C2256 + C62 * C2365) * C63 *
                C61 * C14477 -
            (C148 * C489 - C327 * C377 - C148 * C677 + C62 * C771) * C63 * C61 *
                C14470 -
            (C148 * C3084 - C327 * C2990 - C148 * C3254 + C62 * C3339) * C63 *
                C61 * C10374) *
               C14432) *
              C14549 +
          (((C148 * C932 - C327 * C820 - C148 * C1120 + C62 * C1214) * C63 *
                C61 * C14477 -
            (C148 * C150 - C327 * C74 - C148 * C269 + C62 * C329) * C63 * C61 *
                C14470 -
            (C148 * C933 - C327 * C821 - C148 * C1121 + C62 * C1215) * C63 *
                C61 * C10374) *
               C6528 +
           ((C148 * C491 - C327 * C379 - C148 * C679 + C62 * C773) * C63 * C61 *
                C14470 -
            (C148 * C2039 - C327 * C1921 - C148 * C2257 + C62 * C2366) * C63 *
                C61 * C14477 +
            (C148 * C5536 - C327 * C5430 - C148 * C5742 + C62 * C5845) * C63 *
                C61 * C10374) *
               C14432) *
              C14352)) /
        (p * q * std::sqrt(p + q));
    d2eexx[9] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 * C63 *
                C8850 -
            (C71 * C824 - C72 * C818 - C71 * C825 + C61 * C836) * C62 * C63 *
                C14474) *
               C6528 +
           ((C71 * C1923 - C72 * C1920 - C71 * C1924 + C61 * C1929) * C62 *
                C63 * C14474 -
            (C71 * C383 - C72 * C377 - C71 * C384 + C61 * C395) * C62 * C63 *
                C8850) *
               C14432) *
              C14621 +
          (((C71 * C828 - C72 * C820 - C71 * C829 + C61 * C838) * C62 * C63 *
                C14474 -
            (C71 * C80 - C72 * C74 - C71 * C81 + C61 * C89) * C62 * C63 *
                C8850) *
               C6528 +
           ((C71 * C387 - C72 * C379 - C71 * C388 + C61 * C397) * C62 * C63 *
                C8850 -
            (C71 * C1925 - C72 * C1921 - C71 * C1926 + C61 * C1930) * C62 *
                C63 * C14474) *
               C14432) *
              C14608 +
          (((C71 * C82 - C72 * C75 - C71 * C83 + C61 * C90) * C62 * C63 *
                C8850 -
            (C71 * C832 - C72 * C822 - C71 * C833 + C61 * C840) * C62 * C63 *
                C14474) *
               C6528 +
           ((C71 * C1927 - C72 * C1922 - C71 * C1928 + C61 * C1931) * C62 *
                C63 * C14474 -
            (C71 * C391 - C72 * C381 - C71 * C392 + C61 * C399) * C62 * C63 *
                C8850) *
               C14432) *
              C14583)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 * C63 * C8850 -
           (C71 * C824 - C72 * C818 - C71 * C825 + C61 * C836) * C62 * C63 *
               C14474) *
              C14631 +
          ((C71 * C1923 - C72 * C1920 - C71 * C1924 + C61 * C1929) * C62 * C63 *
               C14474 -
           (C71 * C383 - C72 * C377 - C71 * C384 + C61 * C395) * C62 * C63 *
               C8850) *
              C14627 +
          ((C71 * C385 - C72 * C378 - C71 * C386 + C61 * C396) * C62 * C63 *
               C8850 -
           (C71 * C2995 - C72 * C2991 - C71 * C2996 + C61 * C3000) * C62 * C63 *
               C14474) *
              C14617 +
          ((C71 * C4171 - C72 * C4170 - C71 * C4172 + C61 * C4173) * C62 * C63 *
               C14474 -
           (C71 * C2746 - C72 * C2744 - C71 * C2747 + C61 * C2750) * C62 * C63 *
               C8850) *
              C14599) *
         C14341) /
            (p * q * std::sqrt(p + q));
    d2eexy[9] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C63 * C116 - C115 * C73) * C71 +
             (C63 * C121 - C115 * C79) * C61) *
                C62 * C8850 +
            ((C115 * C818 - C63 * C880) * C71 +
             (C115 * C825 - C63 * C886) * C61) *
                C62 * C14474) *
               C6528 +
           (((C115 * C377 - C63 * C439) * C71 +
             (C115 * C384 - C63 * C445) * C61) *
                C62 * C8850 +
            ((C63 * C1982 - C115 * C1920) * C71 +
             (C63 * C1985 - C115 * C1924) * C61) *
                C62 * C14474) *
               C14432) *
              C14621 +
          ((((C115 * C74 - C63 * C117) * C71 +
             (C115 * C81 - C63 * C122) * C61) *
                C62 * C8850 +
            ((C63 * C882 - C115 * C820) * C71 +
             (C63 * C888 - C115 * C829) * C61) *
                C62 * C14474) *
               C6528 +
           (((C63 * C441 - C115 * C379) * C71 +
             (C63 * C447 - C115 * C388) * C61) *
                C62 * C8850 +
            ((C115 * C1921 - C63 * C1983) * C71 +
             (C115 * C1926 - C63 * C1986) * C61) *
                C62 * C14474) *
               C14432) *
              C14608 +
          ((((C63 * C118 - C115 * C75) * C71 +
             (C63 * C123 - C115 * C83) * C61) *
                C62 * C8850 +
            ((C115 * C822 - C63 * C884) * C71 +
             (C115 * C833 - C63 * C890) * C61) *
                C62 * C14474) *
               C6528 +
           (((C115 * C381 - C63 * C443) * C71 +
             (C115 * C392 - C63 * C449) * C61) *
                C62 * C8850 +
            ((C63 * C1984 - C115 * C1922) * C71 +
             (C63 * C1987 - C115 * C1928) * C61) *
                C62 * C14474) *
               C14432) *
              C14583)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C63 * C116 - C115 * C73) * C71 + (C63 * C121 - C115 * C79) * C61) *
               C62 * C8850 +
           ((C115 * C818 - C63 * C880) * C71 +
            (C115 * C825 - C63 * C886) * C61) *
               C62 * C14474) *
              C14631 +
          (((C115 * C377 - C63 * C439) * C71 +
            (C115 * C384 - C63 * C445) * C61) *
               C62 * C8850 +
           ((C63 * C1982 - C115 * C1920) * C71 +
            (C63 * C1985 - C115 * C1924) * C61) *
               C62 * C14474) *
              C14627 +
          (((C63 * C440 - C115 * C378) * C71 +
            (C63 * C446 - C115 * C386) * C61) *
               C62 * C8850 +
           ((C115 * C2991 - C63 * C3041) * C71 +
            (C115 * C2996 - C63 * C3044) * C61) *
               C62 * C14474) *
              C14617 +
          (((C115 * C2744 - C63 * C2774) * C71 +
            (C115 * C2747 - C63 * C2776) * C61) *
               C62 * C8850 +
           ((C63 * C4208 - C115 * C4170) * C71 +
            (C63 * C4209 - C115 * C4172) * C61) *
               C62 * C14474) *
              C14599) *
         C14341) /
            (p * q * std::sqrt(p + q));
    d2eexz[9] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C62 * C149 - C148 * C73) * C71 +
             (C62 * C154 - C148 * C79) * C61) *
                C63 * C8850 +
            ((C148 * C818 - C62 * C930) * C71 +
             (C148 * C825 - C62 * C936) * C61) *
                C63 * C14474) *
               C6528 +
           (((C148 * C377 - C62 * C489) * C71 +
             (C148 * C384 - C62 * C495) * C61) *
                C63 * C8850 +
            ((C62 * C2038 - C148 * C1920) * C71 +
             (C62 * C2041 - C148 * C1924) * C61) *
                C63 * C14474) *
               C14432) *
              C14621 +
          ((((C148 * C74 - C62 * C150) * C71 +
             (C148 * C81 - C62 * C155) * C61) *
                C63 * C8850 +
            ((C62 * C932 - C148 * C820) * C71 +
             (C62 * C938 - C148 * C829) * C61) *
                C63 * C14474) *
               C6528 +
           (((C62 * C491 - C148 * C379) * C71 +
             (C62 * C497 - C148 * C388) * C61) *
                C63 * C8850 +
            ((C148 * C1921 - C62 * C2039) * C71 +
             (C148 * C1926 - C62 * C2042) * C61) *
                C63 * C14474) *
               C14432) *
              C14608 +
          ((((C62 * C151 - C148 * C75) * C71 +
             (C62 * C156 - C148 * C83) * C61) *
                C63 * C8850 +
            ((C148 * C822 - C62 * C934) * C71 +
             (C148 * C833 - C62 * C940) * C61) *
                C63 * C14474) *
               C6528 +
           (((C148 * C381 - C62 * C493) * C71 +
             (C148 * C392 - C62 * C499) * C61) *
                C63 * C8850 +
            ((C62 * C2040 - C148 * C1922) * C71 +
             (C62 * C2043 - C148 * C1928) * C61) *
                C63 * C14474) *
               C14432) *
              C14583)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C62 * C149 - C148 * C73) * C71 + (C62 * C154 - C148 * C79) * C61) *
               C63 * C8850 +
           ((C148 * C818 - C62 * C930) * C71 +
            (C148 * C825 - C62 * C936) * C61) *
               C63 * C14474) *
              C14631 +
          (((C148 * C377 - C62 * C489) * C71 +
            (C148 * C384 - C62 * C495) * C61) *
               C63 * C8850 +
           ((C62 * C2038 - C148 * C1920) * C71 +
            (C62 * C2041 - C148 * C1924) * C61) *
               C63 * C14474) *
              C14627 +
          (((C62 * C490 - C148 * C378) * C71 +
            (C62 * C496 - C148 * C386) * C61) *
               C63 * C8850 +
           ((C148 * C2991 - C62 * C3085) * C71 +
            (C148 * C2996 - C62 * C3088) * C61) *
               C63 * C14474) *
              C14617 +
          (((C148 * C2744 - C62 * C2800) * C71 +
            (C148 * C2747 - C62 * C2802) * C61) *
               C63 * C8850 +
           ((C62 * C4244 - C148 * C4170) * C71 +
            (C62 * C4245 - C148 * C4172) * C61) *
               C63 * C14474) *
              C14599) *
         C14341) /
            (p * q * std::sqrt(p + q));
    d2eeyx[9] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
                C62 * C8850 +
            ((C71 * C818 - C61 * C824) * C115 +
             (C71 * C980 - C61 * C986) * C63) *
                C62 * C14474) *
               C6528 +
           (((C71 * C377 - C61 * C383) * C115 +
             (C71 * C539 - C61 * C545) * C63) *
                C62 * C8850 +
            ((C61 * C1923 - C71 * C1920) * C115 +
             (C61 * C2097 - C71 * C2094) * C63) *
                C62 * C14474) *
               C14432) *
              C14621 +
          ((((C71 * C74 - C61 * C80) * C115 + (C71 * C182 - C61 * C187) * C63) *
                C62 * C8850 +
            ((C61 * C828 - C71 * C820) * C115 +
             (C61 * C988 - C71 * C982) * C63) *
                C62 * C14474) *
               C6528 +
           (((C61 * C387 - C71 * C379) * C115 +
             (C61 * C547 - C71 * C541) * C63) *
                C62 * C8850 +
            ((C71 * C1921 - C61 * C1925) * C115 +
             (C71 * C2095 - C61 * C2098) * C63) *
                C62 * C14474) *
               C14432) *
              C14608 +
          ((((C61 * C82 - C71 * C75) * C115 + (C61 * C188 - C71 * C183) * C63) *
                C62 * C8850 +
            ((C71 * C822 - C61 * C832) * C115 +
             (C71 * C984 - C61 * C990) * C63) *
                C62 * C14474) *
               C6528 +
           (((C71 * C381 - C61 * C391) * C115 +
             (C71 * C543 - C61 * C549) * C63) *
                C62 * C8850 +
            ((C61 * C1927 - C71 * C1922) * C115 +
             (C61 * C2099 - C71 * C2096) * C63) *
                C62 * C14474) *
               C14432) *
              C14583)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
               C62 * C8850 +
           ((C71 * C818 - C61 * C824) * C115 +
            (C71 * C980 - C61 * C986) * C63) *
               C62 * C14474) *
              C14631 +
          (((C71 * C377 - C61 * C383) * C115 +
            (C71 * C539 - C61 * C545) * C63) *
               C62 * C8850 +
           ((C61 * C1923 - C71 * C1920) * C115 +
            (C61 * C2097 - C71 * C2094) * C63) *
               C62 * C14474) *
              C14627 +
          (((C61 * C385 - C71 * C378) * C115 +
            (C61 * C546 - C71 * C540) * C63) *
               C62 * C8850 +
           ((C71 * C2991 - C61 * C2995) * C115 +
            (C71 * C3129 - C61 * C3132) * C63) *
               C62 * C14474) *
              C14617 +
          (((C71 * C2744 - C61 * C2746) * C115 +
            (C71 * C2826 - C61 * C2828) * C63) *
               C62 * C8850 +
           ((C61 * C4171 - C71 * C4170) * C115 +
            (C61 * C4281 - C71 * C4280) * C63) *
               C62 * C14474) *
              C14599) *
         C14341) /
            (p * q * std::sqrt(p + q));
    d2eeyy[9] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) * C61 * C62 *
                C8850 -
            (C115 * C880 - C213 * C818 - C115 * C980 + C63 * C1030) * C61 *
                C62 * C14474) *
               C6528 +
           ((C115 * C1982 - C213 * C1920 - C115 * C2094 + C63 * C2150) * C61 *
                C62 * C14474 -
            (C115 * C439 - C213 * C377 - C115 * C539 + C63 * C589) * C61 * C62 *
                C8850) *
               C14432) *
              C14621 +
          (((C115 * C882 - C213 * C820 - C115 * C982 + C63 * C1032) * C61 *
                C62 * C14474 -
            (C115 * C117 - C213 * C74 - C115 * C182 + C63 * C215) * C61 * C62 *
                C8850) *
               C6528 +
           ((C115 * C441 - C213 * C379 - C115 * C541 + C63 * C591) * C61 * C62 *
                C8850 -
            (C115 * C1983 - C213 * C1921 - C115 * C2095 + C63 * C2151) * C61 *
                C62 * C14474) *
               C14432) *
              C14608 +
          (((C115 * C118 - C213 * C75 - C115 * C183 + C63 * C216) * C61 * C62 *
                C8850 -
            (C115 * C884 - C213 * C822 - C115 * C984 + C63 * C1034) * C61 *
                C62 * C14474) *
               C6528 +
           ((C115 * C1984 - C213 * C1922 - C115 * C2096 + C63 * C2152) * C61 *
                C62 * C14474 -
            (C115 * C443 - C213 * C381 - C115 * C543 + C63 * C593) * C61 * C62 *
                C8850) *
               C14432) *
              C14583)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) * C61 * C62 *
               C8850 -
           (C115 * C880 - C213 * C818 - C115 * C980 + C63 * C1030) * C61 * C62 *
               C14474) *
              C14631 +
          ((C115 * C1982 - C213 * C1920 - C115 * C2094 + C63 * C2150) * C61 *
               C62 * C14474 -
           (C115 * C439 - C213 * C377 - C115 * C539 + C63 * C589) * C61 * C62 *
               C8850) *
              C14627 +
          ((C115 * C440 - C213 * C378 - C115 * C540 + C63 * C590) * C61 * C62 *
               C8850 -
           (C115 * C3041 - C213 * C2991 - C115 * C3129 + C63 * C3173) * C61 *
               C62 * C14474) *
              C14617 +
          ((C115 * C4208 - C213 * C4170 - C115 * C4280 + C63 * C4316) * C61 *
               C62 * C14474 -
           (C115 * C2774 - C213 * C2744 - C115 * C2826 + C63 * C2852) * C61 *
               C62 * C8850) *
              C14599) *
         C14341) /
            (p * q * std::sqrt(p + q));
    d2eeyz[9] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  (((((C62 * C149 - C148 * C73) * C115 +
                      (C62 * C241 - C148 * C181) * C63) *
                         C61 * C8850 +
                     ((C148 * C818 - C62 * C930) * C115 +
                      (C148 * C980 - C62 * C1074) * C63) *
                         C61 * C14474) *
                        C6528 +
                    (((C148 * C377 - C62 * C489) * C115 +
                      (C148 * C539 - C62 * C633) * C63) *
                         C61 * C8850 +
                     ((C62 * C2038 - C148 * C1920) * C115 +
                      (C62 * C2203 - C148 * C2094) * C63) *
                         C61 * C14474) *
                        C14432) *
                       C14621 +
                   ((((C148 * C74 - C62 * C150) * C115 +
                      (C148 * C182 - C62 * C242) * C63) *
                         C61 * C8850 +
                     ((C62 * C932 - C148 * C820) * C115 +
                      (C62 * C1076 - C148 * C982) * C63) *
                         C61 * C14474) *
                        C6528 +
                    (((C62 * C491 - C148 * C379) * C115 +
                      (C62 * C635 - C148 * C541) * C63) *
                         C61 * C8850 +
                     ((C148 * C1921 - C62 * C2039) * C115 +
                      (C148 * C2095 - C62 * C2204) * C63) *
                         C61 * C14474) *
                        C14432) *
                       C14608 +
                   ((((C62 * C151 - C148 * C75) * C115 +
                      (C62 * C243 - C148 * C183) * C63) *
                         C61 * C8850 +
                     ((C148 * C822 - C62 * C934) * C115 +
                      (C148 * C984 - C62 * C1078) * C63) *
                         C61 * C14474) *
                        C6528 +
                    (((C148 * C381 - C62 * C493) * C115 +
                      (C148 * C543 - C62 * C637) * C63) *
                         C61 * C8850 +
                     ((C62 * C2040 - C148 * C1922) * C115 +
                      (C62 * C2205 - C148 * C2096) * C63) *
                         C61 * C14474) *
                        C14432) *
                       C14583)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  ((((C62 * C149 - C148 * C73) * C115 +
                     (C62 * C241 - C148 * C181) * C63) *
                        C61 * C8850 +
                    ((C148 * C818 - C62 * C930) * C115 +
                     (C148 * C980 - C62 * C1074) * C63) *
                        C61 * C14474) *
                       C14631 +
                   (((C148 * C377 - C62 * C489) * C115 +
                     (C148 * C539 - C62 * C633) * C63) *
                        C61 * C8850 +
                    ((C62 * C2038 - C148 * C1920) * C115 +
                     (C62 * C2203 - C148 * C2094) * C63) *
                        C61 * C14474) *
                       C14627 +
                   (((C62 * C490 - C148 * C378) * C115 +
                     (C62 * C634 - C148 * C540) * C63) *
                        C61 * C8850 +
                    ((C148 * C2991 - C62 * C3085) * C115 +
                     (C148 * C3129 - C62 * C3214) * C63) *
                        C61 * C14474) *
                       C14617 +
                   (((C148 * C2744 - C62 * C2800) * C115 +
                     (C148 * C2826 - C62 * C2876) * C63) *
                        C61 * C8850 +
                    ((C62 * C4244 - C148 * C4170) * C115 +
                     (C62 * C4351 - C148 * C4280) * C63) *
                        C61 * C14474) *
                       C14599) *
                  C14341) /
                     (p * q * std::sqrt(p + q));
    d2eezx[9] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
                C63 * C8850 +
            ((C71 * C818 - C61 * C824) * C148 +
             (C71 * C1118 - C61 * C1124) * C62) *
                C63 * C14474) *
               C6528 +
           (((C71 * C377 - C61 * C383) * C148 +
             (C71 * C677 - C61 * C683) * C62) *
                C63 * C8850 +
            ((C61 * C1923 - C71 * C1920) * C148 +
             (C61 * C2259 - C71 * C2256) * C62) *
                C63 * C14474) *
               C14432) *
              C14621 +
          ((((C71 * C74 - C61 * C80) * C148 + (C71 * C269 - C61 * C274) * C62) *
                C63 * C8850 +
            ((C61 * C828 - C71 * C820) * C148 +
             (C61 * C1126 - C71 * C1120) * C62) *
                C63 * C14474) *
               C6528 +
           (((C61 * C387 - C71 * C379) * C148 +
             (C61 * C685 - C71 * C679) * C62) *
                C63 * C8850 +
            ((C71 * C1921 - C61 * C1925) * C148 +
             (C71 * C2257 - C61 * C2260) * C62) *
                C63 * C14474) *
               C14432) *
              C14608 +
          ((((C61 * C82 - C71 * C75) * C148 + (C61 * C275 - C71 * C270) * C62) *
                C63 * C8850 +
            ((C71 * C822 - C61 * C832) * C148 +
             (C71 * C1122 - C61 * C1128) * C62) *
                C63 * C14474) *
               C6528 +
           (((C71 * C381 - C61 * C391) * C148 +
             (C71 * C681 - C61 * C687) * C62) *
                C63 * C8850 +
            ((C61 * C1927 - C71 * C1922) * C148 +
             (C61 * C2261 - C71 * C2258) * C62) *
                C63 * C14474) *
               C14432) *
              C14583)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
               C63 * C8850 +
           ((C71 * C818 - C61 * C824) * C148 +
            (C71 * C1118 - C61 * C1124) * C62) *
               C63 * C14474) *
              C14631 +
          (((C71 * C377 - C61 * C383) * C148 +
            (C71 * C677 - C61 * C683) * C62) *
               C63 * C8850 +
           ((C61 * C1923 - C71 * C1920) * C148 +
            (C61 * C2259 - C71 * C2256) * C62) *
               C63 * C14474) *
              C14627 +
          (((C61 * C385 - C71 * C378) * C148 +
            (C61 * C684 - C71 * C678) * C62) *
               C63 * C8850 +
           ((C71 * C2991 - C61 * C2995) * C148 +
            (C71 * C3255 - C61 * C3258) * C62) *
               C63 * C14474) *
              C14617 +
          (((C71 * C2744 - C61 * C2746) * C148 +
            (C71 * C2900 - C61 * C2902) * C62) *
               C63 * C8850 +
           ((C61 * C4171 - C71 * C4170) * C148 +
            (C61 * C4387 - C71 * C4386) * C62) *
               C63 * C14474) *
              C14599) *
         C14341) /
            (p * q * std::sqrt(p + q));
    d2eezy[9] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  (((((C63 * C116 - C115 * C73) * C148 +
                      (C63 * C300 - C115 * C268) * C62) *
                         C61 * C8850 +
                     ((C115 * C818 - C63 * C880) * C148 +
                      (C115 * C1118 - C63 * C1168) * C62) *
                         C61 * C14474) *
                        C6528 +
                    (((C115 * C377 - C63 * C439) * C148 +
                      (C115 * C677 - C63 * C727) * C62) *
                         C61 * C8850 +
                     ((C63 * C1982 - C115 * C1920) * C148 +
                      (C63 * C2312 - C115 * C2256) * C62) *
                         C61 * C14474) *
                        C14432) *
                       C14621 +
                   ((((C115 * C74 - C63 * C117) * C148 +
                      (C115 * C269 - C63 * C301) * C62) *
                         C61 * C8850 +
                     ((C63 * C882 - C115 * C820) * C148 +
                      (C63 * C1170 - C115 * C1120) * C62) *
                         C61 * C14474) *
                        C6528 +
                    (((C63 * C441 - C115 * C379) * C148 +
                      (C63 * C729 - C115 * C679) * C62) *
                         C61 * C8850 +
                     ((C115 * C1921 - C63 * C1983) * C148 +
                      (C115 * C2257 - C63 * C2313) * C62) *
                         C61 * C14474) *
                        C14432) *
                       C14608 +
                   ((((C63 * C118 - C115 * C75) * C148 +
                      (C63 * C302 - C115 * C270) * C62) *
                         C61 * C8850 +
                     ((C115 * C822 - C63 * C884) * C148 +
                      (C115 * C1122 - C63 * C1172) * C62) *
                         C61 * C14474) *
                        C6528 +
                    (((C115 * C381 - C63 * C443) * C148 +
                      (C115 * C681 - C63 * C731) * C62) *
                         C61 * C8850 +
                     ((C63 * C1984 - C115 * C1922) * C148 +
                      (C63 * C2314 - C115 * C2258) * C62) *
                         C61 * C14474) *
                        C14432) *
                       C14583)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  ((((C63 * C116 - C115 * C73) * C148 +
                     (C63 * C300 - C115 * C268) * C62) *
                        C61 * C8850 +
                    ((C115 * C818 - C63 * C880) * C148 +
                     (C115 * C1118 - C63 * C1168) * C62) *
                        C61 * C14474) *
                       C14631 +
                   (((C115 * C377 - C63 * C439) * C148 +
                     (C115 * C677 - C63 * C727) * C62) *
                        C61 * C8850 +
                    ((C63 * C1982 - C115 * C1920) * C148 +
                     (C63 * C2312 - C115 * C2256) * C62) *
                        C61 * C14474) *
                       C14627 +
                   (((C63 * C440 - C115 * C378) * C148 +
                     (C63 * C728 - C115 * C678) * C62) *
                        C61 * C8850 +
                    ((C115 * C2991 - C63 * C3041) * C148 +
                     (C115 * C3255 - C63 * C3299) * C62) *
                        C61 * C14474) *
                       C14617 +
                   (((C115 * C2744 - C63 * C2774) * C148 +
                     (C115 * C2900 - C63 * C2926) * C62) *
                        C61 * C8850 +
                    ((C63 * C4208 - C115 * C4170) * C148 +
                     (C63 * C4422 - C115 * C4386) * C62) *
                        C61 * C14474) *
                       C14599) *
                  C14341) /
                     (p * q * std::sqrt(p + q));
    d2eezz[9] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) * C63 * C61 *
                C8850 -
            (C148 * C930 - C327 * C818 - C148 * C1118 + C62 * C1212) * C63 *
                C61 * C14474) *
               C6528 +
           ((C148 * C2038 - C327 * C1920 - C148 * C2256 + C62 * C2365) * C63 *
                C61 * C14474 -
            (C148 * C489 - C327 * C377 - C148 * C677 + C62 * C771) * C63 * C61 *
                C8850) *
               C14432) *
              C14621 +
          (((C148 * C932 - C327 * C820 - C148 * C1120 + C62 * C1214) * C63 *
                C61 * C14474 -
            (C148 * C150 - C327 * C74 - C148 * C269 + C62 * C329) * C63 * C61 *
                C8850) *
               C6528 +
           ((C148 * C491 - C327 * C379 - C148 * C679 + C62 * C773) * C63 * C61 *
                C8850 -
            (C148 * C2039 - C327 * C1921 - C148 * C2257 + C62 * C2366) * C63 *
                C61 * C14474) *
               C14432) *
              C14608 +
          (((C148 * C151 - C327 * C75 - C148 * C270 + C62 * C330) * C63 * C61 *
                C8850 -
            (C148 * C934 - C327 * C822 - C148 * C1122 + C62 * C1216) * C63 *
                C61 * C14474) *
               C6528 +
           ((C148 * C2040 - C327 * C1922 - C148 * C2258 + C62 * C2367) * C63 *
                C61 * C14474 -
            (C148 * C493 - C327 * C381 - C148 * C681 + C62 * C775) * C63 * C61 *
                C8850) *
               C14432) *
              C14583)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) * C63 * C61 *
               C8850 -
           (C148 * C930 - C327 * C818 - C148 * C1118 + C62 * C1212) * C63 *
               C61 * C14474) *
              C14631 +
          ((C148 * C2038 - C327 * C1920 - C148 * C2256 + C62 * C2365) * C63 *
               C61 * C14474 -
           (C148 * C489 - C327 * C377 - C148 * C677 + C62 * C771) * C63 * C61 *
               C8850) *
              C14627 +
          ((C148 * C490 - C327 * C378 - C148 * C678 + C62 * C772) * C63 * C61 *
               C8850 -
           (C148 * C3085 - C327 * C2991 - C148 * C3255 + C62 * C3340) * C63 *
               C61 * C14474) *
              C14617 +
          ((C148 * C4244 - C327 * C4170 - C148 * C4386 + C62 * C4457) * C63 *
               C61 * C14474 -
           (C148 * C2800 - C327 * C2744 - C148 * C2900 + C62 * C2950) * C63 *
               C61 * C8850) *
              C14599) *
         C14341) /
            (p * q * std::sqrt(p + q));
    d2eexx[10] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 *
                         C63 * C14387 * C3376 -
                     (C71 * C383 - C72 * C377 - C71 * C384 + C61 * C395) * C62 *
                         C63 * C14387 * C3377 +
                     (C71 * C385 - C72 * C378 - C71 * C386 + C61 * C396) * C62 *
                         C63 * C14387 * C3378 -
                     (C71 * C2746 - C72 * C2744 - C71 * C2747 + C61 * C2750) *
                         C62 * C63 * C14387 * C14599) *
                        C14549 +
                    ((C71 * C387 - C72 * C379 - C71 * C388 + C61 * C397) * C62 *
                         C63 * C14387 * C3377 -
                     (C71 * C80 - C72 * C74 - C71 * C81 + C61 * C89) * C62 *
                         C63 * C14387 * C3376 -
                     (C71 * C389 - C72 * C380 - C71 * C390 + C61 * C398) * C62 *
                         C63 * C14387 * C3378 +
                     (C71 * C3383 - C72 * C3382 - C71 * C3384 + C61 * C3385) *
                         C62 * C63 * C14387 * C14599) *
                        C14352)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 *
                         C63 * C14387 * C14563 -
                     (C71 * C383 - C72 * C377 - C71 * C384 + C61 * C395) * C62 *
                         C63 * C14387 * C14432) *
                        C1254 +
                    ((C71 * C387 - C72 * C379 - C71 * C388 + C61 * C397) * C62 *
                         C63 * C14387 * C14432 -
                     (C71 * C80 - C72 * C74 - C71 * C81 + C61 * C89) * C62 *
                         C63 * C14387 * C14563) *
                        C1255 +
                    ((C71 * C82 - C72 * C75 - C71 * C83 + C61 * C90) * C62 *
                         C63 * C14387 * C14563 -
                     (C71 * C391 - C72 * C381 - C71 * C392 + C61 * C399) * C62 *
                         C63 * C14387 * C14432) *
                        C1256 +
                    ((C71 * C1259 - C72 * C1258 - C71 * C1260 + C61 * C1261) *
                         C62 * C63 * C14387 * C14432 -
                     (C71 * C84 - C72 * C76 - C71 * C85 + C61 * C91) * C62 *
                         C63 * C14387 * C14563) *
                        C14593)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 *
                          C63 * C4496 -
                      (C71 * C824 - C72 * C818 - C71 * C825 + C61 * C836) *
                          C62 * C63 * C4497 +
                      (C71 * C826 - C72 * C819 - C71 * C827 + C61 * C837) *
                          C62 * C63 * C14592) *
                         C14563 +
                     ((C71 * C1923 - C72 * C1920 - C71 * C1924 + C61 * C1929) *
                          C62 * C63 * C4497 -
                      (C71 * C383 - C72 * C377 - C71 * C384 + C61 * C395) *
                          C62 * C63 * C4496 -
                      (C71 * C2993 - C72 * C2990 - C71 * C2994 + C61 * C2999) *
                          C62 * C63 * C14592) *
                         C14432) *
                        C14549 +
                    (((C71 * C828 - C72 * C820 - C71 * C829 + C61 * C838) *
                          C62 * C63 * C4497 -
                      (C71 * C80 - C72 * C74 - C71 * C81 + C61 * C89) * C62 *
                          C63 * C4496 -
                      (C71 * C830 - C72 * C821 - C71 * C831 + C61 * C839) *
                          C62 * C63 * C14592) *
                         C14563 +
                     ((C71 * C387 - C72 * C379 - C71 * C388 + C61 * C397) *
                          C62 * C63 * C4496 -
                      (C71 * C1925 - C72 * C1921 - C71 * C1926 + C61 * C1930) *
                          C62 * C63 * C4497 +
                      (C71 * C5431 - C72 * C5430 - C71 * C5432 + C61 * C5433) *
                          C62 * C63 * C14592) *
                         C14432) *
                        C14352)) /
                      (p * q * std::sqrt(p + q));
    d2eexy[10] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C63 * C116 - C115 * C73) * C71 + (C63 * C121 - C115 * C79) * C61) *
               C62 * C14387 * C3376 +
           ((C115 * C377 - C63 * C439) * C71 +
            (C115 * C384 - C63 * C445) * C61) *
               C62 * C14387 * C3377 +
           ((C63 * C440 - C115 * C378) * C71 +
            (C63 * C446 - C115 * C386) * C61) *
               C62 * C14387 * C3378 +
           ((C115 * C2744 - C63 * C2774) * C71 +
            (C115 * C2747 - C63 * C2776) * C61) *
               C62 * C14387 * C14599) *
              C14549 +
          (((C115 * C74 - C63 * C117) * C71 + (C115 * C81 - C63 * C122) * C61) *
               C62 * C14387 * C3376 +
           ((C63 * C441 - C115 * C379) * C71 +
            (C63 * C447 - C115 * C388) * C61) *
               C62 * C14387 * C3377 +
           ((C115 * C380 - C63 * C442) * C71 +
            (C115 * C390 - C63 * C448) * C61) *
               C62 * C14387 * C3378 +
           ((C63 * C3420 - C115 * C3382) * C71 +
            (C63 * C3421 - C115 * C3384) * C61) *
               C62 * C14387 * C14599) *
              C14352)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C63 * C116 - C115 * C73) * C71 + (C63 * C121 - C115 * C79) * C61) *
               C62 * C14387 * C14563 +
           ((C115 * C377 - C63 * C439) * C71 +
            (C115 * C384 - C63 * C445) * C61) *
               C62 * C14387 * C14432) *
              C1254 +
          (((C115 * C74 - C63 * C117) * C71 + (C115 * C81 - C63 * C122) * C61) *
               C62 * C14387 * C14563 +
           ((C63 * C441 - C115 * C379) * C71 +
            (C63 * C447 - C115 * C388) * C61) *
               C62 * C14387 * C14432) *
              C1255 +
          (((C63 * C118 - C115 * C75) * C71 + (C63 * C123 - C115 * C83) * C61) *
               C62 * C14387 * C14563 +
           ((C115 * C381 - C63 * C443) * C71 +
            (C115 * C392 - C63 * C449) * C61) *
               C62 * C14387 * C14432) *
              C1256 +
          (((C115 * C76 - C63 * C119) * C71 + (C115 * C85 - C63 * C124) * C61) *
               C62 * C14387 * C14563 +
           ((C63 * C1296 - C115 * C1258) * C71 +
            (C63 * C1297 - C115 * C1260) * C61) *
               C62 * C14387 * C14432) *
              C14593)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C63 * C116 - C115 * C73) * C71 +
             (C63 * C121 - C115 * C79) * C61) *
                C62 * C4496 +
            ((C115 * C818 - C63 * C880) * C71 +
             (C115 * C825 - C63 * C886) * C61) *
                C62 * C4497 +
            ((C63 * C881 - C115 * C819) * C71 +
             (C63 * C887 - C115 * C827) * C61) *
                C62 * C14592) *
               C14563 +
           (((C115 * C377 - C63 * C439) * C71 +
             (C115 * C384 - C63 * C445) * C61) *
                C62 * C4496 +
            ((C63 * C1982 - C115 * C1920) * C71 +
             (C63 * C1985 - C115 * C1924) * C61) *
                C62 * C4497 +
            ((C115 * C2990 - C63 * C3040) * C71 +
             (C115 * C2994 - C63 * C3043) * C61) *
                C62 * C14592) *
               C14432) *
              C14549 +
          ((((C115 * C74 - C63 * C117) * C71 +
             (C115 * C81 - C63 * C122) * C61) *
                C62 * C4496 +
            ((C63 * C882 - C115 * C820) * C71 +
             (C63 * C888 - C115 * C829) * C61) *
                C62 * C4497 +
            ((C115 * C821 - C63 * C883) * C71 +
             (C115 * C831 - C63 * C889) * C61) *
                C62 * C14592) *
               C14563 +
           (((C63 * C441 - C115 * C379) * C71 +
             (C63 * C447 - C115 * C388) * C61) *
                C62 * C4496 +
            ((C115 * C1921 - C63 * C1983) * C71 +
             (C115 * C1926 - C63 * C1986) * C61) *
                C62 * C4497 +
            ((C63 * C5484 - C115 * C5430) * C71 +
             (C63 * C5485 - C115 * C5432) * C61) *
                C62 * C14592) *
               C14432) *
              C14352)) /
            (p * q * std::sqrt(p + q));
    d2eexz[10] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C62 * C149 - C148 * C73) * C71 + (C62 * C154 - C148 * C79) * C61) *
               C63 * C14387 * C3376 +
           ((C148 * C377 - C62 * C489) * C71 +
            (C148 * C384 - C62 * C495) * C61) *
               C63 * C14387 * C3377 +
           ((C62 * C490 - C148 * C378) * C71 +
            (C62 * C496 - C148 * C386) * C61) *
               C63 * C14387 * C3378 +
           ((C148 * C2744 - C62 * C2800) * C71 +
            (C148 * C2747 - C62 * C2802) * C61) *
               C63 * C14387 * C14599) *
              C14549 +
          (((C148 * C74 - C62 * C150) * C71 + (C148 * C81 - C62 * C155) * C61) *
               C63 * C14387 * C3376 +
           ((C62 * C491 - C148 * C379) * C71 +
            (C62 * C497 - C148 * C388) * C61) *
               C63 * C14387 * C3377 +
           ((C148 * C380 - C62 * C492) * C71 +
            (C148 * C390 - C62 * C498) * C61) *
               C63 * C14387 * C3378 +
           ((C62 * C3456 - C148 * C3382) * C71 +
            (C62 * C3457 - C148 * C3384) * C61) *
               C63 * C14387 * C14599) *
              C14352)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C62 * C149 - C148 * C73) * C71 + (C62 * C154 - C148 * C79) * C61) *
               C63 * C14387 * C14563 +
           ((C148 * C377 - C62 * C489) * C71 +
            (C148 * C384 - C62 * C495) * C61) *
               C63 * C14387 * C14432) *
              C1254 +
          (((C148 * C74 - C62 * C150) * C71 + (C148 * C81 - C62 * C155) * C61) *
               C63 * C14387 * C14563 +
           ((C62 * C491 - C148 * C379) * C71 +
            (C62 * C497 - C148 * C388) * C61) *
               C63 * C14387 * C14432) *
              C1255 +
          (((C62 * C151 - C148 * C75) * C71 + (C62 * C156 - C148 * C83) * C61) *
               C63 * C14387 * C14563 +
           ((C148 * C381 - C62 * C493) * C71 +
            (C148 * C392 - C62 * C499) * C61) *
               C63 * C14387 * C14432) *
              C1256 +
          (((C148 * C76 - C62 * C152) * C71 + (C148 * C85 - C62 * C157) * C61) *
               C63 * C14387 * C14563 +
           ((C62 * C1332 - C148 * C1258) * C71 +
            (C62 * C1333 - C148 * C1260) * C61) *
               C63 * C14387 * C14432) *
              C14593)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C62 * C149 - C148 * C73) * C71 +
             (C62 * C154 - C148 * C79) * C61) *
                C63 * C4496 +
            ((C148 * C818 - C62 * C930) * C71 +
             (C148 * C825 - C62 * C936) * C61) *
                C63 * C4497 +
            ((C62 * C931 - C148 * C819) * C71 +
             (C62 * C937 - C148 * C827) * C61) *
                C63 * C14592) *
               C14563 +
           (((C148 * C377 - C62 * C489) * C71 +
             (C148 * C384 - C62 * C495) * C61) *
                C63 * C4496 +
            ((C62 * C2038 - C148 * C1920) * C71 +
             (C62 * C2041 - C148 * C1924) * C61) *
                C63 * C4497 +
            ((C148 * C2990 - C62 * C3084) * C71 +
             (C148 * C2994 - C62 * C3087) * C61) *
                C63 * C14592) *
               C14432) *
              C14549 +
          ((((C148 * C74 - C62 * C150) * C71 +
             (C148 * C81 - C62 * C155) * C61) *
                C63 * C4496 +
            ((C62 * C932 - C148 * C820) * C71 +
             (C62 * C938 - C148 * C829) * C61) *
                C63 * C4497 +
            ((C148 * C821 - C62 * C933) * C71 +
             (C148 * C831 - C62 * C939) * C61) *
                C63 * C14592) *
               C14563 +
           (((C62 * C491 - C148 * C379) * C71 +
             (C62 * C497 - C148 * C388) * C61) *
                C63 * C4496 +
            ((C148 * C1921 - C62 * C2039) * C71 +
             (C148 * C1926 - C62 * C2042) * C61) *
                C63 * C4497 +
            ((C62 * C5536 - C148 * C5430) * C71 +
             (C62 * C5537 - C148 * C5432) * C61) *
                C63 * C14592) *
               C14432) *
              C14352)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[10] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
               C62 * C14387 * C3376 +
           ((C71 * C377 - C61 * C383) * C115 +
            (C71 * C539 - C61 * C545) * C63) *
               C62 * C14387 * C3377 +
           ((C61 * C385 - C71 * C378) * C115 +
            (C61 * C546 - C71 * C540) * C63) *
               C62 * C14387 * C3378 +
           ((C71 * C2744 - C61 * C2746) * C115 +
            (C71 * C2826 - C61 * C2828) * C63) *
               C62 * C14387 * C14599) *
              C14549 +
          (((C71 * C74 - C61 * C80) * C115 + (C71 * C182 - C61 * C187) * C63) *
               C62 * C14387 * C3376 +
           ((C61 * C387 - C71 * C379) * C115 +
            (C61 * C547 - C71 * C541) * C63) *
               C62 * C14387 * C3377 +
           ((C71 * C380 - C61 * C389) * C115 +
            (C71 * C542 - C61 * C548) * C63) *
               C62 * C14387 * C3378 +
           ((C61 * C3383 - C71 * C3382) * C115 +
            (C61 * C3493 - C71 * C3492) * C63) *
               C62 * C14387 * C14599) *
              C14352)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
               C62 * C14387 * C14563 +
           ((C71 * C377 - C61 * C383) * C115 +
            (C71 * C539 - C61 * C545) * C63) *
               C62 * C14387 * C14432) *
              C1254 +
          (((C71 * C74 - C61 * C80) * C115 + (C71 * C182 - C61 * C187) * C63) *
               C62 * C14387 * C14563 +
           ((C61 * C387 - C71 * C379) * C115 +
            (C61 * C547 - C71 * C541) * C63) *
               C62 * C14387 * C14432) *
              C1255 +
          (((C61 * C82 - C71 * C75) * C115 + (C61 * C188 - C71 * C183) * C63) *
               C62 * C14387 * C14563 +
           ((C71 * C381 - C61 * C391) * C115 +
            (C71 * C543 - C61 * C549) * C63) *
               C62 * C14387 * C14432) *
              C1256 +
          (((C71 * C76 - C61 * C84) * C115 + (C71 * C184 - C61 * C189) * C63) *
               C62 * C14387 * C14563 +
           ((C61 * C1259 - C71 * C1258) * C115 +
            (C61 * C1369 - C71 * C1368) * C63) *
               C62 * C14387 * C14432) *
              C14593)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
                C62 * C4496 +
            ((C71 * C818 - C61 * C824) * C115 +
             (C71 * C980 - C61 * C986) * C63) *
                C62 * C4497 +
            ((C61 * C826 - C71 * C819) * C115 +
             (C61 * C987 - C71 * C981) * C63) *
                C62 * C14592) *
               C14563 +
           (((C71 * C377 - C61 * C383) * C115 +
             (C71 * C539 - C61 * C545) * C63) *
                C62 * C4496 +
            ((C61 * C1923 - C71 * C1920) * C115 +
             (C61 * C2097 - C71 * C2094) * C63) *
                C62 * C4497 +
            ((C71 * C2990 - C61 * C2993) * C115 +
             (C71 * C3128 - C61 * C3131) * C63) *
                C62 * C14592) *
               C14432) *
              C14549 +
          ((((C71 * C74 - C61 * C80) * C115 + (C71 * C182 - C61 * C187) * C63) *
                C62 * C4496 +
            ((C61 * C828 - C71 * C820) * C115 +
             (C61 * C988 - C71 * C982) * C63) *
                C62 * C4497 +
            ((C71 * C821 - C61 * C830) * C115 +
             (C71 * C983 - C61 * C989) * C63) *
                C62 * C14592) *
               C14563 +
           (((C61 * C387 - C71 * C379) * C115 +
             (C61 * C547 - C71 * C541) * C63) *
                C62 * C4496 +
            ((C71 * C1921 - C61 * C1925) * C115 +
             (C71 * C2095 - C61 * C2098) * C63) *
                C62 * C4497 +
            ((C61 * C5431 - C71 * C5430) * C115 +
             (C61 * C5589 - C71 * C5588) * C63) *
                C62 * C14592) *
               C14432) *
              C14352)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[10] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) * C61 * C62 *
               C14387 * C3376 -
           (C115 * C439 - C213 * C377 - C115 * C539 + C63 * C589) * C61 * C62 *
               C14387 * C3377 +
           (C115 * C440 - C213 * C378 - C115 * C540 + C63 * C590) * C61 * C62 *
               C14387 * C3378 -
           (C115 * C2774 - C213 * C2744 - C115 * C2826 + C63 * C2852) * C61 *
               C62 * C14387 * C14599) *
              C14549 +
          ((C115 * C441 - C213 * C379 - C115 * C541 + C63 * C591) * C61 * C62 *
               C14387 * C3377 -
           (C115 * C117 - C213 * C74 - C115 * C182 + C63 * C215) * C61 * C62 *
               C14387 * C3376 -
           (C115 * C442 - C213 * C380 - C115 * C542 + C63 * C592) * C61 * C62 *
               C14387 * C3378 +
           (C115 * C3420 - C213 * C3382 - C115 * C3492 + C63 * C3528) * C61 *
               C62 * C14387 * C14599) *
              C14352)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) * C61 * C62 *
               C14387 * C14563 -
           (C115 * C439 - C213 * C377 - C115 * C539 + C63 * C589) * C61 * C62 *
               C14387 * C14432) *
              C1254 +
          ((C115 * C441 - C213 * C379 - C115 * C541 + C63 * C591) * C61 * C62 *
               C14387 * C14432 -
           (C115 * C117 - C213 * C74 - C115 * C182 + C63 * C215) * C61 * C62 *
               C14387 * C14563) *
              C1255 +
          ((C115 * C118 - C213 * C75 - C115 * C183 + C63 * C216) * C61 * C62 *
               C14387 * C14563 -
           (C115 * C443 - C213 * C381 - C115 * C543 + C63 * C593) * C61 * C62 *
               C14387 * C14432) *
              C1256 +
          ((C115 * C1296 - C213 * C1258 - C115 * C1368 + C63 * C1404) * C61 *
               C62 * C14387 * C14432 -
           (C115 * C119 - C213 * C76 - C115 * C184 + C63 * C217) * C61 * C62 *
               C14387 * C14563) *
              C14593)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) * C61 * C62 *
                C4496 -
            (C115 * C880 - C213 * C818 - C115 * C980 + C63 * C1030) * C61 *
                C62 * C4497 +
            (C115 * C881 - C213 * C819 - C115 * C981 + C63 * C1031) * C61 *
                C62 * C14592) *
               C14563 +
           ((C115 * C1982 - C213 * C1920 - C115 * C2094 + C63 * C2150) * C61 *
                C62 * C4497 -
            (C115 * C439 - C213 * C377 - C115 * C539 + C63 * C589) * C61 * C62 *
                C4496 -
            (C115 * C3040 - C213 * C2990 - C115 * C3128 + C63 * C3172) * C61 *
                C62 * C14592) *
               C14432) *
              C14549 +
          (((C115 * C882 - C213 * C820 - C115 * C982 + C63 * C1032) * C61 *
                C62 * C4497 -
            (C115 * C117 - C213 * C74 - C115 * C182 + C63 * C215) * C61 * C62 *
                C4496 -
            (C115 * C883 - C213 * C821 - C115 * C983 + C63 * C1033) * C61 *
                C62 * C14592) *
               C14563 +
           ((C115 * C441 - C213 * C379 - C115 * C541 + C63 * C591) * C61 * C62 *
                C4496 -
            (C115 * C1983 - C213 * C1921 - C115 * C2095 + C63 * C2151) * C61 *
                C62 * C4497 +
            (C115 * C5484 - C213 * C5430 - C115 * C5588 + C63 * C5640) * C61 *
                C62 * C14592) *
               C14432) *
              C14352)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[10] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C62 * C149 - C148 * C73) * C115 +
                      (C62 * C241 - C148 * C181) * C63) *
                         C61 * C14387 * C3376 +
                     ((C148 * C377 - C62 * C489) * C115 +
                      (C148 * C539 - C62 * C633) * C63) *
                         C61 * C14387 * C3377 +
                     ((C62 * C490 - C148 * C378) * C115 +
                      (C62 * C634 - C148 * C540) * C63) *
                         C61 * C14387 * C3378 +
                     ((C148 * C2744 - C62 * C2800) * C115 +
                      (C148 * C2826 - C62 * C2876) * C63) *
                         C61 * C14387 * C14599) *
                        C14549 +
                    (((C148 * C74 - C62 * C150) * C115 +
                      (C148 * C182 - C62 * C242) * C63) *
                         C61 * C14387 * C3376 +
                     ((C62 * C491 - C148 * C379) * C115 +
                      (C62 * C635 - C148 * C541) * C63) *
                         C61 * C14387 * C3377 +
                     ((C148 * C380 - C62 * C492) * C115 +
                      (C148 * C542 - C62 * C636) * C63) *
                         C61 * C14387 * C3378 +
                     ((C62 * C3456 - C148 * C3382) * C115 +
                      (C62 * C3563 - C148 * C3492) * C63) *
                         C61 * C14387 * C14599) *
                        C14352)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C62 * C149 - C148 * C73) * C115 +
                      (C62 * C241 - C148 * C181) * C63) *
                         C61 * C14387 * C14563 +
                     ((C148 * C377 - C62 * C489) * C115 +
                      (C148 * C539 - C62 * C633) * C63) *
                         C61 * C14387 * C14432) *
                        C1254 +
                    (((C148 * C74 - C62 * C150) * C115 +
                      (C148 * C182 - C62 * C242) * C63) *
                         C61 * C14387 * C14563 +
                     ((C62 * C491 - C148 * C379) * C115 +
                      (C62 * C635 - C148 * C541) * C63) *
                         C61 * C14387 * C14432) *
                        C1255 +
                    (((C62 * C151 - C148 * C75) * C115 +
                      (C62 * C243 - C148 * C183) * C63) *
                         C61 * C14387 * C14563 +
                     ((C148 * C381 - C62 * C493) * C115 +
                      (C148 * C543 - C62 * C637) * C63) *
                         C61 * C14387 * C14432) *
                        C1256 +
                    (((C148 * C76 - C62 * C152) * C115 +
                      (C148 * C184 - C62 * C244) * C63) *
                         C61 * C14387 * C14563 +
                     ((C62 * C1332 - C148 * C1258) * C115 +
                      (C62 * C1439 - C148 * C1368) * C63) *
                         C61 * C14387 * C14432) *
                        C14593)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C62 * C149 - C148 * C73) * C115 +
                       (C62 * C241 - C148 * C181) * C63) *
                          C61 * C4496 +
                      ((C148 * C818 - C62 * C930) * C115 +
                       (C148 * C980 - C62 * C1074) * C63) *
                          C61 * C4497 +
                      ((C62 * C931 - C148 * C819) * C115 +
                       (C62 * C1075 - C148 * C981) * C63) *
                          C61 * C14592) *
                         C14563 +
                     (((C148 * C377 - C62 * C489) * C115 +
                       (C148 * C539 - C62 * C633) * C63) *
                          C61 * C4496 +
                      ((C62 * C2038 - C148 * C1920) * C115 +
                       (C62 * C2203 - C148 * C2094) * C63) *
                          C61 * C4497 +
                      ((C148 * C2990 - C62 * C3084) * C115 +
                       (C148 * C3128 - C62 * C3213) * C63) *
                          C61 * C14592) *
                         C14432) *
                        C14549 +
                    ((((C148 * C74 - C62 * C150) * C115 +
                       (C148 * C182 - C62 * C242) * C63) *
                          C61 * C4496 +
                      ((C62 * C932 - C148 * C820) * C115 +
                       (C62 * C1076 - C148 * C982) * C63) *
                          C61 * C4497 +
                      ((C148 * C821 - C62 * C933) * C115 +
                       (C148 * C983 - C62 * C1077) * C63) *
                          C61 * C14592) *
                         C14563 +
                     (((C62 * C491 - C148 * C379) * C115 +
                       (C62 * C635 - C148 * C541) * C63) *
                          C61 * C4496 +
                      ((C148 * C1921 - C62 * C2039) * C115 +
                       (C148 * C2095 - C62 * C2204) * C63) *
                          C61 * C4497 +
                      ((C62 * C5536 - C148 * C5430) * C115 +
                       (C62 * C5691 - C148 * C5588) * C63) *
                          C61 * C14592) *
                         C14432) *
                        C14352)) /
                      (p * q * std::sqrt(p + q));
    d2eezx[10] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
               C63 * C14387 * C3376 +
           ((C71 * C377 - C61 * C383) * C148 +
            (C71 * C677 - C61 * C683) * C62) *
               C63 * C14387 * C3377 +
           ((C61 * C385 - C71 * C378) * C148 +
            (C61 * C684 - C71 * C678) * C62) *
               C63 * C14387 * C3378 +
           ((C71 * C2744 - C61 * C2746) * C148 +
            (C71 * C2900 - C61 * C2902) * C62) *
               C63 * C14387 * C14599) *
              C14549 +
          (((C71 * C74 - C61 * C80) * C148 + (C71 * C269 - C61 * C274) * C62) *
               C63 * C14387 * C3376 +
           ((C61 * C387 - C71 * C379) * C148 +
            (C61 * C685 - C71 * C679) * C62) *
               C63 * C14387 * C3377 +
           ((C71 * C380 - C61 * C389) * C148 +
            (C71 * C680 - C61 * C686) * C62) *
               C63 * C14387 * C3378 +
           ((C61 * C3383 - C71 * C3382) * C148 +
            (C61 * C3599 - C71 * C3598) * C62) *
               C63 * C14387 * C14599) *
              C14352)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
               C63 * C14387 * C14563 +
           ((C71 * C377 - C61 * C383) * C148 +
            (C71 * C677 - C61 * C683) * C62) *
               C63 * C14387 * C14432) *
              C1254 +
          (((C71 * C74 - C61 * C80) * C148 + (C71 * C269 - C61 * C274) * C62) *
               C63 * C14387 * C14563 +
           ((C61 * C387 - C71 * C379) * C148 +
            (C61 * C685 - C71 * C679) * C62) *
               C63 * C14387 * C14432) *
              C1255 +
          (((C61 * C82 - C71 * C75) * C148 + (C61 * C275 - C71 * C270) * C62) *
               C63 * C14387 * C14563 +
           ((C71 * C381 - C61 * C391) * C148 +
            (C71 * C681 - C61 * C687) * C62) *
               C63 * C14387 * C14432) *
              C1256 +
          (((C71 * C76 - C61 * C84) * C148 + (C71 * C271 - C61 * C276) * C62) *
               C63 * C14387 * C14563 +
           ((C61 * C1259 - C71 * C1258) * C148 +
            (C61 * C1475 - C71 * C1474) * C62) *
               C63 * C14387 * C14432) *
              C14593)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
                C63 * C4496 +
            ((C71 * C818 - C61 * C824) * C148 +
             (C71 * C1118 - C61 * C1124) * C62) *
                C63 * C4497 +
            ((C61 * C826 - C71 * C819) * C148 +
             (C61 * C1125 - C71 * C1119) * C62) *
                C63 * C14592) *
               C14563 +
           (((C71 * C377 - C61 * C383) * C148 +
             (C71 * C677 - C61 * C683) * C62) *
                C63 * C4496 +
            ((C61 * C1923 - C71 * C1920) * C148 +
             (C61 * C2259 - C71 * C2256) * C62) *
                C63 * C4497 +
            ((C71 * C2990 - C61 * C2993) * C148 +
             (C71 * C3254 - C61 * C3257) * C62) *
                C63 * C14592) *
               C14432) *
              C14549 +
          ((((C71 * C74 - C61 * C80) * C148 + (C71 * C269 - C61 * C274) * C62) *
                C63 * C4496 +
            ((C61 * C828 - C71 * C820) * C148 +
             (C61 * C1126 - C71 * C1120) * C62) *
                C63 * C4497 +
            ((C71 * C821 - C61 * C830) * C148 +
             (C71 * C1121 - C61 * C1127) * C62) *
                C63 * C14592) *
               C14563 +
           (((C61 * C387 - C71 * C379) * C148 +
             (C61 * C685 - C71 * C679) * C62) *
                C63 * C4496 +
            ((C71 * C1921 - C61 * C1925) * C148 +
             (C71 * C2257 - C61 * C2260) * C62) *
                C63 * C4497 +
            ((C61 * C5431 - C71 * C5430) * C148 +
             (C61 * C5743 - C71 * C5742) * C62) *
                C63 * C14592) *
               C14432) *
              C14352)) /
            (p * q * std::sqrt(p + q));
    d2eezy[10] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C63 * C116 - C115 * C73) * C148 +
                      (C63 * C300 - C115 * C268) * C62) *
                         C61 * C14387 * C3376 +
                     ((C115 * C377 - C63 * C439) * C148 +
                      (C115 * C677 - C63 * C727) * C62) *
                         C61 * C14387 * C3377 +
                     ((C63 * C440 - C115 * C378) * C148 +
                      (C63 * C728 - C115 * C678) * C62) *
                         C61 * C14387 * C3378 +
                     ((C115 * C2744 - C63 * C2774) * C148 +
                      (C115 * C2900 - C63 * C2926) * C62) *
                         C61 * C14387 * C14599) *
                        C14549 +
                    (((C115 * C74 - C63 * C117) * C148 +
                      (C115 * C269 - C63 * C301) * C62) *
                         C61 * C14387 * C3376 +
                     ((C63 * C441 - C115 * C379) * C148 +
                      (C63 * C729 - C115 * C679) * C62) *
                         C61 * C14387 * C3377 +
                     ((C115 * C380 - C63 * C442) * C148 +
                      (C115 * C680 - C63 * C730) * C62) *
                         C61 * C14387 * C3378 +
                     ((C63 * C3420 - C115 * C3382) * C148 +
                      (C63 * C3634 - C115 * C3598) * C62) *
                         C61 * C14387 * C14599) *
                        C14352)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C63 * C116 - C115 * C73) * C148 +
                      (C63 * C300 - C115 * C268) * C62) *
                         C61 * C14387 * C14563 +
                     ((C115 * C377 - C63 * C439) * C148 +
                      (C115 * C677 - C63 * C727) * C62) *
                         C61 * C14387 * C14432) *
                        C1254 +
                    (((C115 * C74 - C63 * C117) * C148 +
                      (C115 * C269 - C63 * C301) * C62) *
                         C61 * C14387 * C14563 +
                     ((C63 * C441 - C115 * C379) * C148 +
                      (C63 * C729 - C115 * C679) * C62) *
                         C61 * C14387 * C14432) *
                        C1255 +
                    (((C63 * C118 - C115 * C75) * C148 +
                      (C63 * C302 - C115 * C270) * C62) *
                         C61 * C14387 * C14563 +
                     ((C115 * C381 - C63 * C443) * C148 +
                      (C115 * C681 - C63 * C731) * C62) *
                         C61 * C14387 * C14432) *
                        C1256 +
                    (((C115 * C76 - C63 * C119) * C148 +
                      (C115 * C271 - C63 * C303) * C62) *
                         C61 * C14387 * C14563 +
                     ((C63 * C1296 - C115 * C1258) * C148 +
                      (C63 * C1510 - C115 * C1474) * C62) *
                         C61 * C14387 * C14432) *
                        C14593)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C63 * C116 - C115 * C73) * C148 +
                       (C63 * C300 - C115 * C268) * C62) *
                          C61 * C4496 +
                      ((C115 * C818 - C63 * C880) * C148 +
                       (C115 * C1118 - C63 * C1168) * C62) *
                          C61 * C4497 +
                      ((C63 * C881 - C115 * C819) * C148 +
                       (C63 * C1169 - C115 * C1119) * C62) *
                          C61 * C14592) *
                         C14563 +
                     (((C115 * C377 - C63 * C439) * C148 +
                       (C115 * C677 - C63 * C727) * C62) *
                          C61 * C4496 +
                      ((C63 * C1982 - C115 * C1920) * C148 +
                       (C63 * C2312 - C115 * C2256) * C62) *
                          C61 * C4497 +
                      ((C115 * C2990 - C63 * C3040) * C148 +
                       (C115 * C3254 - C63 * C3298) * C62) *
                          C61 * C14592) *
                         C14432) *
                        C14549 +
                    ((((C115 * C74 - C63 * C117) * C148 +
                       (C115 * C269 - C63 * C301) * C62) *
                          C61 * C4496 +
                      ((C63 * C882 - C115 * C820) * C148 +
                       (C63 * C1170 - C115 * C1120) * C62) *
                          C61 * C4497 +
                      ((C115 * C821 - C63 * C883) * C148 +
                       (C115 * C1121 - C63 * C1171) * C62) *
                          C61 * C14592) *
                         C14563 +
                     (((C63 * C441 - C115 * C379) * C148 +
                       (C63 * C729 - C115 * C679) * C62) *
                          C61 * C4496 +
                      ((C115 * C1921 - C63 * C1983) * C148 +
                       (C115 * C2257 - C63 * C2313) * C62) *
                          C61 * C4497 +
                      ((C63 * C5484 - C115 * C5430) * C148 +
                       (C63 * C5794 - C115 * C5742) * C62) *
                          C61 * C14592) *
                         C14432) *
                        C14352)) /
                      (p * q * std::sqrt(p + q));
    d2eezz[10] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) * C63 * C61 *
               C14387 * C3376 -
           (C148 * C489 - C327 * C377 - C148 * C677 + C62 * C771) * C63 * C61 *
               C14387 * C3377 +
           (C148 * C490 - C327 * C378 - C148 * C678 + C62 * C772) * C63 * C61 *
               C14387 * C3378 -
           (C148 * C2800 - C327 * C2744 - C148 * C2900 + C62 * C2950) * C63 *
               C61 * C14387 * C14599) *
              C14549 +
          ((C148 * C491 - C327 * C379 - C148 * C679 + C62 * C773) * C63 * C61 *
               C14387 * C3377 -
           (C148 * C150 - C327 * C74 - C148 * C269 + C62 * C329) * C63 * C61 *
               C14387 * C3376 -
           (C148 * C492 - C327 * C380 - C148 * C680 + C62 * C774) * C63 * C61 *
               C14387 * C3378 +
           (C148 * C3456 - C327 * C3382 - C148 * C3598 + C62 * C3669) * C63 *
               C61 * C14387 * C14599) *
              C14352)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) * C63 * C61 *
               C14387 * C14563 -
           (C148 * C489 - C327 * C377 - C148 * C677 + C62 * C771) * C63 * C61 *
               C14387 * C14432) *
              C1254 +
          ((C148 * C491 - C327 * C379 - C148 * C679 + C62 * C773) * C63 * C61 *
               C14387 * C14432 -
           (C148 * C150 - C327 * C74 - C148 * C269 + C62 * C329) * C63 * C61 *
               C14387 * C14563) *
              C1255 +
          ((C148 * C151 - C327 * C75 - C148 * C270 + C62 * C330) * C63 * C61 *
               C14387 * C14563 -
           (C148 * C493 - C327 * C381 - C148 * C681 + C62 * C775) * C63 * C61 *
               C14387 * C14432) *
              C1256 +
          ((C148 * C1332 - C327 * C1258 - C148 * C1474 + C62 * C1545) * C63 *
               C61 * C14387 * C14432 -
           (C148 * C152 - C327 * C76 - C148 * C271 + C62 * C331) * C63 * C61 *
               C14387 * C14563) *
              C14593)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) * C63 * C61 *
                C4496 -
            (C148 * C930 - C327 * C818 - C148 * C1118 + C62 * C1212) * C63 *
                C61 * C4497 +
            (C148 * C931 - C327 * C819 - C148 * C1119 + C62 * C1213) * C63 *
                C61 * C14592) *
               C14563 +
           ((C148 * C2038 - C327 * C1920 - C148 * C2256 + C62 * C2365) * C63 *
                C61 * C4497 -
            (C148 * C489 - C327 * C377 - C148 * C677 + C62 * C771) * C63 * C61 *
                C4496 -
            (C148 * C3084 - C327 * C2990 - C148 * C3254 + C62 * C3339) * C63 *
                C61 * C14592) *
               C14432) *
              C14549 +
          (((C148 * C932 - C327 * C820 - C148 * C1120 + C62 * C1214) * C63 *
                C61 * C4497 -
            (C148 * C150 - C327 * C74 - C148 * C269 + C62 * C329) * C63 * C61 *
                C4496 -
            (C148 * C933 - C327 * C821 - C148 * C1121 + C62 * C1215) * C63 *
                C61 * C14592) *
               C14563 +
           ((C148 * C491 - C327 * C379 - C148 * C679 + C62 * C773) * C63 * C61 *
                C4496 -
            (C148 * C2039 - C327 * C1921 - C148 * C2257 + C62 * C2366) * C63 *
                C61 * C4497 +
            (C148 * C5536 - C327 * C5430 - C148 * C5742 + C62 * C5845) * C63 *
                C61 * C14592) *
               C14432) *
              C14352)) /
            (p * q * std::sqrt(p + q));
    d2eexx[11] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 * C63 *
               C14564 -
           (C71 * C824 - C72 * C818 - C71 * C825 + C61 * C836) * C62 * C63 *
               C14474) *
              C3376 +
          ((C71 * C1923 - C72 * C1920 - C71 * C1924 + C61 * C1929) * C62 * C63 *
               C14474 -
           (C71 * C383 - C72 * C377 - C71 * C384 + C61 * C395) * C62 * C63 *
               C14564) *
              C3377 +
          ((C71 * C385 - C72 * C378 - C71 * C386 + C61 * C396) * C62 * C63 *
               C14564 -
           (C71 * C2995 - C72 * C2991 - C71 * C2996 + C61 * C3000) * C62 * C63 *
               C14474) *
              C3378 +
          ((C71 * C4171 - C72 * C4170 - C71 * C4172 + C61 * C4173) * C62 * C63 *
               C14474 -
           (C71 * C2746 - C72 * C2744 - C71 * C2747 + C61 * C2750) * C62 * C63 *
               C14564) *
              C14599) *
         C14341) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 * C63 *
                C14564 -
            (C71 * C824 - C72 * C818 - C71 * C825 + C61 * C836) * C62 * C63 *
                C14474) *
               C14563 +
           ((C71 * C1923 - C72 * C1920 - C71 * C1924 + C61 * C1929) * C62 *
                C63 * C14474 -
            (C71 * C383 - C72 * C377 - C71 * C384 + C61 * C395) * C62 * C63 *
                C14564) *
               C14432) *
              C374 +
          (((C71 * C828 - C72 * C820 - C71 * C829 + C61 * C838) * C62 * C63 *
                C14474 -
            (C71 * C80 - C72 * C74 - C71 * C81 + C61 * C89) * C62 * C63 *
                C14564) *
               C14563 +
           ((C71 * C387 - C72 * C379 - C71 * C388 + C61 * C397) * C62 * C63 *
                C14564 -
            (C71 * C1925 - C72 * C1921 - C71 * C1926 + C61 * C1930) * C62 *
                C63 * C14474) *
               C14432) *
              C375 +
          (((C71 * C82 - C72 * C75 - C71 * C83 + C61 * C90) * C62 * C63 *
                C14564 -
            (C71 * C832 - C72 * C822 - C71 * C833 + C61 * C840) * C62 * C63 *
                C14474) *
               C14563 +
           ((C71 * C1927 - C72 * C1922 - C71 * C1928 + C61 * C1931) * C62 *
                C63 * C14474 -
            (C71 * C391 - C72 * C381 - C71 * C392 + C61 * C399) * C62 * C63 *
                C14564) *
               C14432) *
              C14583)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 * C63 * C5880 -
           (C71 * C824 - C72 * C818 - C71 * C825 + C61 * C836) * C62 * C63 *
               C5881 +
           (C71 * C826 - C72 * C819 - C71 * C827 + C61 * C837) * C62 * C63 *
               C5882 -
           (C71 * C5174 - C72 * C5172 - C71 * C5175 + C61 * C5178) * C62 * C63 *
               C14605) *
              C14563 +
          ((C71 * C1923 - C72 * C1920 - C71 * C1924 + C61 * C1929) * C62 * C63 *
               C5881 -
           (C71 * C383 - C72 * C377 - C71 * C384 + C61 * C395) * C62 * C63 *
               C5880 -
           (C71 * C2993 - C72 * C2990 - C71 * C2994 + C61 * C2999) * C62 * C63 *
               C5882 +
           (C71 * C6207 - C72 * C6206 - C71 * C6208 + C61 * C6209) * C62 * C63 *
               C14605) *
              C14432) *
         C14341) /
            (p * q * std::sqrt(p + q));
    d2eexy[11] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C63 * C116 - C115 * C73) * C71 + (C63 * C121 - C115 * C79) * C61) *
               C62 * C14564 +
           ((C115 * C818 - C63 * C880) * C71 +
            (C115 * C825 - C63 * C886) * C61) *
               C62 * C14474) *
              C3376 +
          (((C115 * C377 - C63 * C439) * C71 +
            (C115 * C384 - C63 * C445) * C61) *
               C62 * C14564 +
           ((C63 * C1982 - C115 * C1920) * C71 +
            (C63 * C1985 - C115 * C1924) * C61) *
               C62 * C14474) *
              C3377 +
          (((C63 * C440 - C115 * C378) * C71 +
            (C63 * C446 - C115 * C386) * C61) *
               C62 * C14564 +
           ((C115 * C2991 - C63 * C3041) * C71 +
            (C115 * C2996 - C63 * C3044) * C61) *
               C62 * C14474) *
              C3378 +
          (((C115 * C2744 - C63 * C2774) * C71 +
            (C115 * C2747 - C63 * C2776) * C61) *
               C62 * C14564 +
           ((C63 * C4208 - C115 * C4170) * C71 +
            (C63 * C4209 - C115 * C4172) * C61) *
               C62 * C14474) *
              C14599) *
         C14341) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C63 * C116 - C115 * C73) * C71 +
             (C63 * C121 - C115 * C79) * C61) *
                C62 * C14564 +
            ((C115 * C818 - C63 * C880) * C71 +
             (C115 * C825 - C63 * C886) * C61) *
                C62 * C14474) *
               C14563 +
           (((C115 * C377 - C63 * C439) * C71 +
             (C115 * C384 - C63 * C445) * C61) *
                C62 * C14564 +
            ((C63 * C1982 - C115 * C1920) * C71 +
             (C63 * C1985 - C115 * C1924) * C61) *
                C62 * C14474) *
               C14432) *
              C374 +
          ((((C115 * C74 - C63 * C117) * C71 +
             (C115 * C81 - C63 * C122) * C61) *
                C62 * C14564 +
            ((C63 * C882 - C115 * C820) * C71 +
             (C63 * C888 - C115 * C829) * C61) *
                C62 * C14474) *
               C14563 +
           (((C63 * C441 - C115 * C379) * C71 +
             (C63 * C447 - C115 * C388) * C61) *
                C62 * C14564 +
            ((C115 * C1921 - C63 * C1983) * C71 +
             (C115 * C1926 - C63 * C1986) * C61) *
                C62 * C14474) *
               C14432) *
              C375 +
          ((((C63 * C118 - C115 * C75) * C71 +
             (C63 * C123 - C115 * C83) * C61) *
                C62 * C14564 +
            ((C115 * C822 - C63 * C884) * C71 +
             (C115 * C833 - C63 * C890) * C61) *
                C62 * C14474) *
               C14563 +
           (((C115 * C381 - C63 * C443) * C71 +
             (C115 * C392 - C63 * C449) * C61) *
                C62 * C14564 +
            ((C63 * C1984 - C115 * C1922) * C71 +
             (C63 * C1987 - C115 * C1928) * C61) *
                C62 * C14474) *
               C14432) *
              C14583)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C63 * C116 - C115 * C73) * C71 + (C63 * C121 - C115 * C79) * C61) *
               C62 * C5880 +
           ((C115 * C818 - C63 * C880) * C71 +
            (C115 * C825 - C63 * C886) * C61) *
               C62 * C5881 +
           ((C63 * C881 - C115 * C819) * C71 +
            (C63 * C887 - C115 * C827) * C61) *
               C62 * C5882 +
           ((C115 * C5172 - C63 * C5202) * C71 +
            (C115 * C5175 - C63 * C5204) * C61) *
               C62 * C14605) *
              C14563 +
          (((C115 * C377 - C63 * C439) * C71 +
            (C115 * C384 - C63 * C445) * C61) *
               C62 * C5880 +
           ((C63 * C1982 - C115 * C1920) * C71 +
            (C63 * C1985 - C115 * C1924) * C61) *
               C62 * C5881 +
           ((C115 * C2990 - C63 * C3040) * C71 +
            (C115 * C2994 - C63 * C3043) * C61) *
               C62 * C5882 +
           ((C63 * C6244 - C115 * C6206) * C71 +
            (C63 * C6245 - C115 * C6208) * C61) *
               C62 * C14605) *
              C14432) *
         C14341) /
            (p * q * std::sqrt(p + q));
    d2eexz[11] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C62 * C149 - C148 * C73) * C71 + (C62 * C154 - C148 * C79) * C61) *
               C63 * C14564 +
           ((C148 * C818 - C62 * C930) * C71 +
            (C148 * C825 - C62 * C936) * C61) *
               C63 * C14474) *
              C3376 +
          (((C148 * C377 - C62 * C489) * C71 +
            (C148 * C384 - C62 * C495) * C61) *
               C63 * C14564 +
           ((C62 * C2038 - C148 * C1920) * C71 +
            (C62 * C2041 - C148 * C1924) * C61) *
               C63 * C14474) *
              C3377 +
          (((C62 * C490 - C148 * C378) * C71 +
            (C62 * C496 - C148 * C386) * C61) *
               C63 * C14564 +
           ((C148 * C2991 - C62 * C3085) * C71 +
            (C148 * C2996 - C62 * C3088) * C61) *
               C63 * C14474) *
              C3378 +
          (((C148 * C2744 - C62 * C2800) * C71 +
            (C148 * C2747 - C62 * C2802) * C61) *
               C63 * C14564 +
           ((C62 * C4244 - C148 * C4170) * C71 +
            (C62 * C4245 - C148 * C4172) * C61) *
               C63 * C14474) *
              C14599) *
         C14341) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C62 * C149 - C148 * C73) * C71 +
             (C62 * C154 - C148 * C79) * C61) *
                C63 * C14564 +
            ((C148 * C818 - C62 * C930) * C71 +
             (C148 * C825 - C62 * C936) * C61) *
                C63 * C14474) *
               C14563 +
           (((C148 * C377 - C62 * C489) * C71 +
             (C148 * C384 - C62 * C495) * C61) *
                C63 * C14564 +
            ((C62 * C2038 - C148 * C1920) * C71 +
             (C62 * C2041 - C148 * C1924) * C61) *
                C63 * C14474) *
               C14432) *
              C374 +
          ((((C148 * C74 - C62 * C150) * C71 +
             (C148 * C81 - C62 * C155) * C61) *
                C63 * C14564 +
            ((C62 * C932 - C148 * C820) * C71 +
             (C62 * C938 - C148 * C829) * C61) *
                C63 * C14474) *
               C14563 +
           (((C62 * C491 - C148 * C379) * C71 +
             (C62 * C497 - C148 * C388) * C61) *
                C63 * C14564 +
            ((C148 * C1921 - C62 * C2039) * C71 +
             (C148 * C1926 - C62 * C2042) * C61) *
                C63 * C14474) *
               C14432) *
              C375 +
          ((((C62 * C151 - C148 * C75) * C71 +
             (C62 * C156 - C148 * C83) * C61) *
                C63 * C14564 +
            ((C148 * C822 - C62 * C934) * C71 +
             (C148 * C833 - C62 * C940) * C61) *
                C63 * C14474) *
               C14563 +
           (((C148 * C381 - C62 * C493) * C71 +
             (C148 * C392 - C62 * C499) * C61) *
                C63 * C14564 +
            ((C62 * C2040 - C148 * C1922) * C71 +
             (C62 * C2043 - C148 * C1928) * C61) *
                C63 * C14474) *
               C14432) *
              C14583)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C62 * C149 - C148 * C73) * C71 + (C62 * C154 - C148 * C79) * C61) *
               C63 * C5880 +
           ((C148 * C818 - C62 * C930) * C71 +
            (C148 * C825 - C62 * C936) * C61) *
               C63 * C5881 +
           ((C62 * C931 - C148 * C819) * C71 +
            (C62 * C937 - C148 * C827) * C61) *
               C63 * C5882 +
           ((C148 * C5172 - C62 * C5228) * C71 +
            (C148 * C5175 - C62 * C5230) * C61) *
               C63 * C14605) *
              C14563 +
          (((C148 * C377 - C62 * C489) * C71 +
            (C148 * C384 - C62 * C495) * C61) *
               C63 * C5880 +
           ((C62 * C2038 - C148 * C1920) * C71 +
            (C62 * C2041 - C148 * C1924) * C61) *
               C63 * C5881 +
           ((C148 * C2990 - C62 * C3084) * C71 +
            (C148 * C2994 - C62 * C3087) * C61) *
               C63 * C5882 +
           ((C62 * C6280 - C148 * C6206) * C71 +
            (C62 * C6281 - C148 * C6208) * C61) *
               C63 * C14605) *
              C14432) *
         C14341) /
            (p * q * std::sqrt(p + q));
    d2eeyx[11] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
               C62 * C14564 +
           ((C71 * C818 - C61 * C824) * C115 +
            (C71 * C980 - C61 * C986) * C63) *
               C62 * C14474) *
              C3376 +
          (((C71 * C377 - C61 * C383) * C115 +
            (C71 * C539 - C61 * C545) * C63) *
               C62 * C14564 +
           ((C61 * C1923 - C71 * C1920) * C115 +
            (C61 * C2097 - C71 * C2094) * C63) *
               C62 * C14474) *
              C3377 +
          (((C61 * C385 - C71 * C378) * C115 +
            (C61 * C546 - C71 * C540) * C63) *
               C62 * C14564 +
           ((C71 * C2991 - C61 * C2995) * C115 +
            (C71 * C3129 - C61 * C3132) * C63) *
               C62 * C14474) *
              C3378 +
          (((C71 * C2744 - C61 * C2746) * C115 +
            (C71 * C2826 - C61 * C2828) * C63) *
               C62 * C14564 +
           ((C61 * C4171 - C71 * C4170) * C115 +
            (C61 * C4281 - C71 * C4280) * C63) *
               C62 * C14474) *
              C14599) *
         C14341) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
                C62 * C14564 +
            ((C71 * C818 - C61 * C824) * C115 +
             (C71 * C980 - C61 * C986) * C63) *
                C62 * C14474) *
               C14563 +
           (((C71 * C377 - C61 * C383) * C115 +
             (C71 * C539 - C61 * C545) * C63) *
                C62 * C14564 +
            ((C61 * C1923 - C71 * C1920) * C115 +
             (C61 * C2097 - C71 * C2094) * C63) *
                C62 * C14474) *
               C14432) *
              C374 +
          ((((C71 * C74 - C61 * C80) * C115 + (C71 * C182 - C61 * C187) * C63) *
                C62 * C14564 +
            ((C61 * C828 - C71 * C820) * C115 +
             (C61 * C988 - C71 * C982) * C63) *
                C62 * C14474) *
               C14563 +
           (((C61 * C387 - C71 * C379) * C115 +
             (C61 * C547 - C71 * C541) * C63) *
                C62 * C14564 +
            ((C71 * C1921 - C61 * C1925) * C115 +
             (C71 * C2095 - C61 * C2098) * C63) *
                C62 * C14474) *
               C14432) *
              C375 +
          ((((C61 * C82 - C71 * C75) * C115 + (C61 * C188 - C71 * C183) * C63) *
                C62 * C14564 +
            ((C71 * C822 - C61 * C832) * C115 +
             (C71 * C984 - C61 * C990) * C63) *
                C62 * C14474) *
               C14563 +
           (((C71 * C381 - C61 * C391) * C115 +
             (C71 * C543 - C61 * C549) * C63) *
                C62 * C14564 +
            ((C61 * C1927 - C71 * C1922) * C115 +
             (C61 * C2099 - C71 * C2096) * C63) *
                C62 * C14474) *
               C14432) *
              C14583)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
               C62 * C5880 +
           ((C71 * C818 - C61 * C824) * C115 +
            (C71 * C980 - C61 * C986) * C63) *
               C62 * C5881 +
           ((C61 * C826 - C71 * C819) * C115 +
            (C61 * C987 - C71 * C981) * C63) *
               C62 * C5882 +
           ((C71 * C5172 - C61 * C5174) * C115 +
            (C71 * C5254 - C61 * C5256) * C63) *
               C62 * C14605) *
              C14563 +
          (((C71 * C377 - C61 * C383) * C115 +
            (C71 * C539 - C61 * C545) * C63) *
               C62 * C5880 +
           ((C61 * C1923 - C71 * C1920) * C115 +
            (C61 * C2097 - C71 * C2094) * C63) *
               C62 * C5881 +
           ((C71 * C2990 - C61 * C2993) * C115 +
            (C71 * C3128 - C61 * C3131) * C63) *
               C62 * C5882 +
           ((C61 * C6207 - C71 * C6206) * C115 +
            (C61 * C6317 - C71 * C6316) * C63) *
               C62 * C14605) *
              C14432) *
         C14341) /
            (p * q * std::sqrt(p + q));
    d2eeyy[11] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) * C61 * C62 *
               C14564 -
           (C115 * C880 - C213 * C818 - C115 * C980 + C63 * C1030) * C61 * C62 *
               C14474) *
              C3376 +
          ((C115 * C1982 - C213 * C1920 - C115 * C2094 + C63 * C2150) * C61 *
               C62 * C14474 -
           (C115 * C439 - C213 * C377 - C115 * C539 + C63 * C589) * C61 * C62 *
               C14564) *
              C3377 +
          ((C115 * C440 - C213 * C378 - C115 * C540 + C63 * C590) * C61 * C62 *
               C14564 -
           (C115 * C3041 - C213 * C2991 - C115 * C3129 + C63 * C3173) * C61 *
               C62 * C14474) *
              C3378 +
          ((C115 * C4208 - C213 * C4170 - C115 * C4280 + C63 * C4316) * C61 *
               C62 * C14474 -
           (C115 * C2774 - C213 * C2744 - C115 * C2826 + C63 * C2852) * C61 *
               C62 * C14564) *
              C14599) *
         C14341) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) * C61 * C62 *
                C14564 -
            (C115 * C880 - C213 * C818 - C115 * C980 + C63 * C1030) * C61 *
                C62 * C14474) *
               C14563 +
           ((C115 * C1982 - C213 * C1920 - C115 * C2094 + C63 * C2150) * C61 *
                C62 * C14474 -
            (C115 * C439 - C213 * C377 - C115 * C539 + C63 * C589) * C61 * C62 *
                C14564) *
               C14432) *
              C374 +
          (((C115 * C882 - C213 * C820 - C115 * C982 + C63 * C1032) * C61 *
                C62 * C14474 -
            (C115 * C117 - C213 * C74 - C115 * C182 + C63 * C215) * C61 * C62 *
                C14564) *
               C14563 +
           ((C115 * C441 - C213 * C379 - C115 * C541 + C63 * C591) * C61 * C62 *
                C14564 -
            (C115 * C1983 - C213 * C1921 - C115 * C2095 + C63 * C2151) * C61 *
                C62 * C14474) *
               C14432) *
              C375 +
          (((C115 * C118 - C213 * C75 - C115 * C183 + C63 * C216) * C61 * C62 *
                C14564 -
            (C115 * C884 - C213 * C822 - C115 * C984 + C63 * C1034) * C61 *
                C62 * C14474) *
               C14563 +
           ((C115 * C1984 - C213 * C1922 - C115 * C2096 + C63 * C2152) * C61 *
                C62 * C14474 -
            (C115 * C443 - C213 * C381 - C115 * C543 + C63 * C593) * C61 * C62 *
                C14564) *
               C14432) *
              C14583)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) * C61 * C62 *
               C5880 -
           (C115 * C880 - C213 * C818 - C115 * C980 + C63 * C1030) * C61 * C62 *
               C5881 +
           (C115 * C881 - C213 * C819 - C115 * C981 + C63 * C1031) * C61 * C62 *
               C5882 -
           (C115 * C5202 - C213 * C5172 - C115 * C5254 + C63 * C5280) * C61 *
               C62 * C14605) *
              C14563 +
          ((C115 * C1982 - C213 * C1920 - C115 * C2094 + C63 * C2150) * C61 *
               C62 * C5881 -
           (C115 * C439 - C213 * C377 - C115 * C539 + C63 * C589) * C61 * C62 *
               C5880 -
           (C115 * C3040 - C213 * C2990 - C115 * C3128 + C63 * C3172) * C61 *
               C62 * C5882 +
           (C115 * C6244 - C213 * C6206 - C115 * C6316 + C63 * C6352) * C61 *
               C62 * C14605) *
              C14432) *
         C14341) /
            (p * q * std::sqrt(p + q));
    d2eeyz[11] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C62 * C149 - C148 * C73) * C115 +
                      (C62 * C241 - C148 * C181) * C63) *
                         C61 * C14564 +
                     ((C148 * C818 - C62 * C930) * C115 +
                      (C148 * C980 - C62 * C1074) * C63) *
                         C61 * C14474) *
                        C3376 +
                    (((C148 * C377 - C62 * C489) * C115 +
                      (C148 * C539 - C62 * C633) * C63) *
                         C61 * C14564 +
                     ((C62 * C2038 - C148 * C1920) * C115 +
                      (C62 * C2203 - C148 * C2094) * C63) *
                         C61 * C14474) *
                        C3377 +
                    (((C62 * C490 - C148 * C378) * C115 +
                      (C62 * C634 - C148 * C540) * C63) *
                         C61 * C14564 +
                     ((C148 * C2991 - C62 * C3085) * C115 +
                      (C148 * C3129 - C62 * C3214) * C63) *
                         C61 * C14474) *
                        C3378 +
                    (((C148 * C2744 - C62 * C2800) * C115 +
                      (C148 * C2826 - C62 * C2876) * C63) *
                         C61 * C14564 +
                     ((C62 * C4244 - C148 * C4170) * C115 +
                      (C62 * C4351 - C148 * C4280) * C63) *
                         C61 * C14474) *
                        C14599) *
                   C14341) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C62 * C149 - C148 * C73) * C115 +
                       (C62 * C241 - C148 * C181) * C63) *
                          C61 * C14564 +
                      ((C148 * C818 - C62 * C930) * C115 +
                       (C148 * C980 - C62 * C1074) * C63) *
                          C61 * C14474) *
                         C14563 +
                     (((C148 * C377 - C62 * C489) * C115 +
                       (C148 * C539 - C62 * C633) * C63) *
                          C61 * C14564 +
                      ((C62 * C2038 - C148 * C1920) * C115 +
                       (C62 * C2203 - C148 * C2094) * C63) *
                          C61 * C14474) *
                         C14432) *
                        C374 +
                    ((((C148 * C74 - C62 * C150) * C115 +
                       (C148 * C182 - C62 * C242) * C63) *
                          C61 * C14564 +
                      ((C62 * C932 - C148 * C820) * C115 +
                       (C62 * C1076 - C148 * C982) * C63) *
                          C61 * C14474) *
                         C14563 +
                     (((C62 * C491 - C148 * C379) * C115 +
                       (C62 * C635 - C148 * C541) * C63) *
                          C61 * C14564 +
                      ((C148 * C1921 - C62 * C2039) * C115 +
                       (C148 * C2095 - C62 * C2204) * C63) *
                          C61 * C14474) *
                         C14432) *
                        C375 +
                    ((((C62 * C151 - C148 * C75) * C115 +
                       (C62 * C243 - C148 * C183) * C63) *
                          C61 * C14564 +
                      ((C148 * C822 - C62 * C934) * C115 +
                       (C148 * C984 - C62 * C1078) * C63) *
                          C61 * C14474) *
                         C14563 +
                     (((C148 * C381 - C62 * C493) * C115 +
                       (C148 * C543 - C62 * C637) * C63) *
                          C61 * C14564 +
                      ((C62 * C2040 - C148 * C1922) * C115 +
                       (C62 * C2205 - C148 * C2096) * C63) *
                          C61 * C14474) *
                         C14432) *
                        C14583)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C62 * C149 - C148 * C73) * C115 +
                      (C62 * C241 - C148 * C181) * C63) *
                         C61 * C5880 +
                     ((C148 * C818 - C62 * C930) * C115 +
                      (C148 * C980 - C62 * C1074) * C63) *
                         C61 * C5881 +
                     ((C62 * C931 - C148 * C819) * C115 +
                      (C62 * C1075 - C148 * C981) * C63) *
                         C61 * C5882 +
                     ((C148 * C5172 - C62 * C5228) * C115 +
                      (C148 * C5254 - C62 * C5304) * C63) *
                         C61 * C14605) *
                        C14563 +
                    (((C148 * C377 - C62 * C489) * C115 +
                      (C148 * C539 - C62 * C633) * C63) *
                         C61 * C5880 +
                     ((C62 * C2038 - C148 * C1920) * C115 +
                      (C62 * C2203 - C148 * C2094) * C63) *
                         C61 * C5881 +
                     ((C148 * C2990 - C62 * C3084) * C115 +
                      (C148 * C3128 - C62 * C3213) * C63) *
                         C61 * C5882 +
                     ((C62 * C6280 - C148 * C6206) * C115 +
                      (C62 * C6387 - C148 * C6316) * C63) *
                         C61 * C14605) *
                        C14432) *
                   C14341) /
                      (p * q * std::sqrt(p + q));
    d2eezx[11] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
               C63 * C14564 +
           ((C71 * C818 - C61 * C824) * C148 +
            (C71 * C1118 - C61 * C1124) * C62) *
               C63 * C14474) *
              C3376 +
          (((C71 * C377 - C61 * C383) * C148 +
            (C71 * C677 - C61 * C683) * C62) *
               C63 * C14564 +
           ((C61 * C1923 - C71 * C1920) * C148 +
            (C61 * C2259 - C71 * C2256) * C62) *
               C63 * C14474) *
              C3377 +
          (((C61 * C385 - C71 * C378) * C148 +
            (C61 * C684 - C71 * C678) * C62) *
               C63 * C14564 +
           ((C71 * C2991 - C61 * C2995) * C148 +
            (C71 * C3255 - C61 * C3258) * C62) *
               C63 * C14474) *
              C3378 +
          (((C71 * C2744 - C61 * C2746) * C148 +
            (C71 * C2900 - C61 * C2902) * C62) *
               C63 * C14564 +
           ((C61 * C4171 - C71 * C4170) * C148 +
            (C61 * C4387 - C71 * C4386) * C62) *
               C63 * C14474) *
              C14599) *
         C14341) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
                C63 * C14564 +
            ((C71 * C818 - C61 * C824) * C148 +
             (C71 * C1118 - C61 * C1124) * C62) *
                C63 * C14474) *
               C14563 +
           (((C71 * C377 - C61 * C383) * C148 +
             (C71 * C677 - C61 * C683) * C62) *
                C63 * C14564 +
            ((C61 * C1923 - C71 * C1920) * C148 +
             (C61 * C2259 - C71 * C2256) * C62) *
                C63 * C14474) *
               C14432) *
              C374 +
          ((((C71 * C74 - C61 * C80) * C148 + (C71 * C269 - C61 * C274) * C62) *
                C63 * C14564 +
            ((C61 * C828 - C71 * C820) * C148 +
             (C61 * C1126 - C71 * C1120) * C62) *
                C63 * C14474) *
               C14563 +
           (((C61 * C387 - C71 * C379) * C148 +
             (C61 * C685 - C71 * C679) * C62) *
                C63 * C14564 +
            ((C71 * C1921 - C61 * C1925) * C148 +
             (C71 * C2257 - C61 * C2260) * C62) *
                C63 * C14474) *
               C14432) *
              C375 +
          ((((C61 * C82 - C71 * C75) * C148 + (C61 * C275 - C71 * C270) * C62) *
                C63 * C14564 +
            ((C71 * C822 - C61 * C832) * C148 +
             (C71 * C1122 - C61 * C1128) * C62) *
                C63 * C14474) *
               C14563 +
           (((C71 * C381 - C61 * C391) * C148 +
             (C71 * C681 - C61 * C687) * C62) *
                C63 * C14564 +
            ((C61 * C1927 - C71 * C1922) * C148 +
             (C61 * C2261 - C71 * C2258) * C62) *
                C63 * C14474) *
               C14432) *
              C14583)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
               C63 * C5880 +
           ((C71 * C818 - C61 * C824) * C148 +
            (C71 * C1118 - C61 * C1124) * C62) *
               C63 * C5881 +
           ((C61 * C826 - C71 * C819) * C148 +
            (C61 * C1125 - C71 * C1119) * C62) *
               C63 * C5882 +
           ((C71 * C5172 - C61 * C5174) * C148 +
            (C71 * C5328 - C61 * C5330) * C62) *
               C63 * C14605) *
              C14563 +
          (((C71 * C377 - C61 * C383) * C148 +
            (C71 * C677 - C61 * C683) * C62) *
               C63 * C5880 +
           ((C61 * C1923 - C71 * C1920) * C148 +
            (C61 * C2259 - C71 * C2256) * C62) *
               C63 * C5881 +
           ((C71 * C2990 - C61 * C2993) * C148 +
            (C71 * C3254 - C61 * C3257) * C62) *
               C63 * C5882 +
           ((C61 * C6207 - C71 * C6206) * C148 +
            (C61 * C6423 - C71 * C6422) * C62) *
               C63 * C14605) *
              C14432) *
         C14341) /
            (p * q * std::sqrt(p + q));
    d2eezy[11] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C63 * C116 - C115 * C73) * C148 +
                      (C63 * C300 - C115 * C268) * C62) *
                         C61 * C14564 +
                     ((C115 * C818 - C63 * C880) * C148 +
                      (C115 * C1118 - C63 * C1168) * C62) *
                         C61 * C14474) *
                        C3376 +
                    (((C115 * C377 - C63 * C439) * C148 +
                      (C115 * C677 - C63 * C727) * C62) *
                         C61 * C14564 +
                     ((C63 * C1982 - C115 * C1920) * C148 +
                      (C63 * C2312 - C115 * C2256) * C62) *
                         C61 * C14474) *
                        C3377 +
                    (((C63 * C440 - C115 * C378) * C148 +
                      (C63 * C728 - C115 * C678) * C62) *
                         C61 * C14564 +
                     ((C115 * C2991 - C63 * C3041) * C148 +
                      (C115 * C3255 - C63 * C3299) * C62) *
                         C61 * C14474) *
                        C3378 +
                    (((C115 * C2744 - C63 * C2774) * C148 +
                      (C115 * C2900 - C63 * C2926) * C62) *
                         C61 * C14564 +
                     ((C63 * C4208 - C115 * C4170) * C148 +
                      (C63 * C4422 - C115 * C4386) * C62) *
                         C61 * C14474) *
                        C14599) *
                   C14341) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C63 * C116 - C115 * C73) * C148 +
                       (C63 * C300 - C115 * C268) * C62) *
                          C61 * C14564 +
                      ((C115 * C818 - C63 * C880) * C148 +
                       (C115 * C1118 - C63 * C1168) * C62) *
                          C61 * C14474) *
                         C14563 +
                     (((C115 * C377 - C63 * C439) * C148 +
                       (C115 * C677 - C63 * C727) * C62) *
                          C61 * C14564 +
                      ((C63 * C1982 - C115 * C1920) * C148 +
                       (C63 * C2312 - C115 * C2256) * C62) *
                          C61 * C14474) *
                         C14432) *
                        C374 +
                    ((((C115 * C74 - C63 * C117) * C148 +
                       (C115 * C269 - C63 * C301) * C62) *
                          C61 * C14564 +
                      ((C63 * C882 - C115 * C820) * C148 +
                       (C63 * C1170 - C115 * C1120) * C62) *
                          C61 * C14474) *
                         C14563 +
                     (((C63 * C441 - C115 * C379) * C148 +
                       (C63 * C729 - C115 * C679) * C62) *
                          C61 * C14564 +
                      ((C115 * C1921 - C63 * C1983) * C148 +
                       (C115 * C2257 - C63 * C2313) * C62) *
                          C61 * C14474) *
                         C14432) *
                        C375 +
                    ((((C63 * C118 - C115 * C75) * C148 +
                       (C63 * C302 - C115 * C270) * C62) *
                          C61 * C14564 +
                      ((C115 * C822 - C63 * C884) * C148 +
                       (C115 * C1122 - C63 * C1172) * C62) *
                          C61 * C14474) *
                         C14563 +
                     (((C115 * C381 - C63 * C443) * C148 +
                       (C115 * C681 - C63 * C731) * C62) *
                          C61 * C14564 +
                      ((C63 * C1984 - C115 * C1922) * C148 +
                       (C63 * C2314 - C115 * C2258) * C62) *
                          C61 * C14474) *
                         C14432) *
                        C14583)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C63 * C116 - C115 * C73) * C148 +
                      (C63 * C300 - C115 * C268) * C62) *
                         C61 * C5880 +
                     ((C115 * C818 - C63 * C880) * C148 +
                      (C115 * C1118 - C63 * C1168) * C62) *
                         C61 * C5881 +
                     ((C63 * C881 - C115 * C819) * C148 +
                      (C63 * C1169 - C115 * C1119) * C62) *
                         C61 * C5882 +
                     ((C115 * C5172 - C63 * C5202) * C148 +
                      (C115 * C5328 - C63 * C5354) * C62) *
                         C61 * C14605) *
                        C14563 +
                    (((C115 * C377 - C63 * C439) * C148 +
                      (C115 * C677 - C63 * C727) * C62) *
                         C61 * C5880 +
                     ((C63 * C1982 - C115 * C1920) * C148 +
                      (C63 * C2312 - C115 * C2256) * C62) *
                         C61 * C5881 +
                     ((C115 * C2990 - C63 * C3040) * C148 +
                      (C115 * C3254 - C63 * C3298) * C62) *
                         C61 * C5882 +
                     ((C63 * C6244 - C115 * C6206) * C148 +
                      (C63 * C6458 - C115 * C6422) * C62) *
                         C61 * C14605) *
                        C14432) *
                   C14341) /
                      (p * q * std::sqrt(p + q));
    d2eezz[11] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) * C63 * C61 *
               C14564 -
           (C148 * C930 - C327 * C818 - C148 * C1118 + C62 * C1212) * C63 *
               C61 * C14474) *
              C3376 +
          ((C148 * C2038 - C327 * C1920 - C148 * C2256 + C62 * C2365) * C63 *
               C61 * C14474 -
           (C148 * C489 - C327 * C377 - C148 * C677 + C62 * C771) * C63 * C61 *
               C14564) *
              C3377 +
          ((C148 * C490 - C327 * C378 - C148 * C678 + C62 * C772) * C63 * C61 *
               C14564 -
           (C148 * C3085 - C327 * C2991 - C148 * C3255 + C62 * C3340) * C63 *
               C61 * C14474) *
              C3378 +
          ((C148 * C4244 - C327 * C4170 - C148 * C4386 + C62 * C4457) * C63 *
               C61 * C14474 -
           (C148 * C2800 - C327 * C2744 - C148 * C2900 + C62 * C2950) * C63 *
               C61 * C14564) *
              C14599) *
         C14341) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) * C63 * C61 *
                C14564 -
            (C148 * C930 - C327 * C818 - C148 * C1118 + C62 * C1212) * C63 *
                C61 * C14474) *
               C14563 +
           ((C148 * C2038 - C327 * C1920 - C148 * C2256 + C62 * C2365) * C63 *
                C61 * C14474 -
            (C148 * C489 - C327 * C377 - C148 * C677 + C62 * C771) * C63 * C61 *
                C14564) *
               C14432) *
              C374 +
          (((C148 * C932 - C327 * C820 - C148 * C1120 + C62 * C1214) * C63 *
                C61 * C14474 -
            (C148 * C150 - C327 * C74 - C148 * C269 + C62 * C329) * C63 * C61 *
                C14564) *
               C14563 +
           ((C148 * C491 - C327 * C379 - C148 * C679 + C62 * C773) * C63 * C61 *
                C14564 -
            (C148 * C2039 - C327 * C1921 - C148 * C2257 + C62 * C2366) * C63 *
                C61 * C14474) *
               C14432) *
              C375 +
          (((C148 * C151 - C327 * C75 - C148 * C270 + C62 * C330) * C63 * C61 *
                C14564 -
            (C148 * C934 - C327 * C822 - C148 * C1122 + C62 * C1216) * C63 *
                C61 * C14474) *
               C14563 +
           ((C148 * C2040 - C327 * C1922 - C148 * C2258 + C62 * C2367) * C63 *
                C61 * C14474 -
            (C148 * C493 - C327 * C381 - C148 * C681 + C62 * C775) * C63 * C61 *
                C14564) *
               C14432) *
              C14583)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) * C63 * C61 *
               C5880 -
           (C148 * C930 - C327 * C818 - C148 * C1118 + C62 * C1212) * C63 *
               C61 * C5881 +
           (C148 * C931 - C327 * C819 - C148 * C1119 + C62 * C1213) * C63 *
               C61 * C5882 -
           (C148 * C5228 - C327 * C5172 - C148 * C5328 + C62 * C5378) * C63 *
               C61 * C14605) *
              C14563 +
          ((C148 * C2038 - C327 * C1920 - C148 * C2256 + C62 * C2365) * C63 *
               C61 * C5881 -
           (C148 * C489 - C327 * C377 - C148 * C677 + C62 * C771) * C63 * C61 *
               C5880 -
           (C148 * C3084 - C327 * C2990 - C148 * C3254 + C62 * C3339) * C63 *
               C61 * C5882 +
           (C148 * C6280 - C327 * C6206 - C148 * C6422 + C62 * C6493) * C63 *
               C61 * C14605) *
              C14432) *
         C14341) /
            (p * q * std::sqrt(p + q));
    d2eexx[12] +=
        (0.5 * std::pow(Pi, 2.5) *
             ((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 * C63 *
                  C14387 * C14369 * C66 -
              (C71 * C80 - C72 * C74 - C71 * C81 + C61 * C89) * C62 * C63 *
                  C14387 * C14369 * C67 +
              (C71 * C82 - C72 * C75 - C71 * C83 + C61 * C90) * C62 * C63 *
                  C14387 * C14369 * C68 -
              (C71 * C84 - C72 * C76 - C71 * C85 + C61 * C91) * C62 * C63 *
                  C14387 * C14369 * C69 +
              (C71 * C86 - C72 * C77 - C71 * C87 + C61 * C92) * C62 * C63 *
                  C14387 * C14369 * C70) +
         0.5 * std::pow(Pi, 2.5) *
             (((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 * C63 *
                   C14387 * C14624 -
               (C71 * C383 - C72 * C377 - C71 * C384 + C61 * C395) * C62 * C63 *
                   C14387 * C14612 +
               (C71 * C385 - C72 * C378 - C71 * C386 + C61 * C396) * C62 * C63 *
                   C14387 * C14589) *
                  C374 +
              ((C71 * C387 - C72 * C379 - C71 * C388 + C61 * C397) * C62 * C63 *
                   C14387 * C14612 -
               (C71 * C80 - C72 * C74 - C71 * C81 + C61 * C89) * C62 * C63 *
                   C14387 * C14624 -
               (C71 * C389 - C72 * C380 - C71 * C390 + C61 * C398) * C62 * C63 *
                   C14387 * C14589) *
                  C375 +
              ((C71 * C82 - C72 * C75 - C71 * C83 + C61 * C90) * C62 * C63 *
                   C14387 * C14624 -
               (C71 * C391 - C72 * C381 - C71 * C392 + C61 * C399) * C62 * C63 *
                   C14387 * C14612 +
               (C71 * C393 - C72 * C382 - C71 * C394 + C61 * C400) * C62 * C63 *
                   C14387 * C14589) *
                  C14583)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 * C63 *
               C14625 -
           (C71 * C824 - C72 * C818 - C71 * C825 + C61 * C836) * C62 * C63 *
               C14614 +
           (C71 * C826 - C72 * C819 - C71 * C827 + C61 * C837) * C62 * C63 *
               C14592) *
              C14369 * C374 +
          ((C71 * C828 - C72 * C820 - C71 * C829 + C61 * C838) * C62 * C63 *
               C14614 -
           (C71 * C80 - C72 * C74 - C71 * C81 + C61 * C89) * C62 * C63 *
               C14625 -
           (C71 * C830 - C72 * C821 - C71 * C831 + C61 * C839) * C62 * C63 *
               C14592) *
              C14369 * C375 +
          ((C71 * C82 - C72 * C75 - C71 * C83 + C61 * C90) * C62 * C63 *
               C14625 -
           (C71 * C832 - C72 * C822 - C71 * C833 + C61 * C840) * C62 * C63 *
               C14614 +
           (C71 * C834 - C72 * C823 - C71 * C835 + C61 * C841) * C62 * C63 *
               C14592) *
              C14369 * C14583)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 * C63 *
               C14387 * C2406 -
           (C71 * C383 - C72 * C377 - C71 * C384 + C61 * C395) * C62 * C63 *
               C14387 * C2407 +
           (C71 * C385 - C72 * C378 - C71 * C386 + C61 * C396) * C62 * C63 *
               C14387 * C14589) *
              C14621 +
          ((C71 * C387 - C72 * C379 - C71 * C388 + C61 * C397) * C62 * C63 *
               C14387 * C2407 -
           (C71 * C80 - C72 * C74 - C71 * C81 + C61 * C89) * C62 * C63 *
               C14387 * C2406 -
           (C71 * C389 - C72 * C380 - C71 * C390 + C61 * C398) * C62 * C63 *
               C14387 * C14589) *
              C14608 +
          ((C71 * C82 - C72 * C75 - C71 * C83 + C61 * C90) * C62 * C63 *
               C14387 * C2406 -
           (C71 * C391 - C72 * C381 - C71 * C392 + C61 * C399) * C62 * C63 *
               C14387 * C2407 +
           (C71 * C393 - C72 * C382 - C71 * C394 + C61 * C400) * C62 * C63 *
               C14387 * C14589) *
              C14583)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 * C63 * C14387 *
              C2738 -
          (C71 * C383 - C72 * C377 - C71 * C384 + C61 * C395) * C62 * C63 *
              C14387 * C2739 +
          (C71 * C385 - C72 * C378 - C71 * C386 + C61 * C396) * C62 * C63 *
              C14387 * C2740 -
          (C71 * C2746 - C72 * C2744 - C71 * C2747 + C61 * C2750) * C62 * C63 *
              C14387 * C2741 +
          (C71 * C2748 - C72 * C2745 - C71 * C2749 + C61 * C2751) * C62 * C63 *
              C14387 * C2742) *
         C14341) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 * C63 *
               C14625 -
           (C71 * C824 - C72 * C818 - C71 * C825 + C61 * C836) * C62 * C63 *
               C14614 +
           (C71 * C826 - C72 * C819 - C71 * C827 + C61 * C837) * C62 * C63 *
               C14592) *
              C2406 +
          ((C71 * C1923 - C72 * C1920 - C71 * C1924 + C61 * C1929) * C62 * C63 *
               C14614 -
           (C71 * C383 - C72 * C377 - C71 * C384 + C61 * C395) * C62 * C63 *
               C14625 -
           (C71 * C2993 - C72 * C2990 - C71 * C2994 + C61 * C2999) * C62 * C63 *
               C14592) *
              C2407 +
          ((C71 * C385 - C72 * C378 - C71 * C386 + C61 * C396) * C62 * C63 *
               C14625 -
           (C71 * C2995 - C72 * C2991 - C71 * C2996 + C61 * C3000) * C62 * C63 *
               C14614 +
           (C71 * C2997 - C72 * C2992 - C71 * C2998 + C61 * C3001) * C62 * C63 *
               C14592) *
              C14589) *
         C14341) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 * C63 * C4496 -
           (C71 * C824 - C72 * C818 - C71 * C825 + C61 * C836) * C62 * C63 *
               C4497 +
           (C71 * C826 - C72 * C819 - C71 * C827 + C61 * C837) * C62 * C63 *
               C14592) *
              C14369 * C14621 +
          ((C71 * C828 - C72 * C820 - C71 * C829 + C61 * C838) * C62 * C63 *
               C4497 -
           (C71 * C80 - C72 * C74 - C71 * C81 + C61 * C89) * C62 * C63 * C4496 -
           (C71 * C830 - C72 * C821 - C71 * C831 + C61 * C839) * C62 * C63 *
               C14592) *
              C14369 * C14608 +
          ((C71 * C82 - C72 * C75 - C71 * C83 + C61 * C90) * C62 * C63 * C4496 -
           (C71 * C832 - C72 * C822 - C71 * C833 + C61 * C840) * C62 * C63 *
               C4497 +
           (C71 * C834 - C72 * C823 - C71 * C835 + C61 * C841) * C62 * C63 *
               C14592) *
              C14369 * C14583)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 * C63 * C4496 -
           (C71 * C824 - C72 * C818 - C71 * C825 + C61 * C836) * C62 * C63 *
               C4497 +
           (C71 * C826 - C72 * C819 - C71 * C827 + C61 * C837) * C62 * C63 *
               C14592) *
              C14624 +
          ((C71 * C1923 - C72 * C1920 - C71 * C1924 + C61 * C1929) * C62 * C63 *
               C4497 -
           (C71 * C383 - C72 * C377 - C71 * C384 + C61 * C395) * C62 * C63 *
               C4496 -
           (C71 * C2993 - C72 * C2990 - C71 * C2994 + C61 * C2999) * C62 * C63 *
               C14592) *
              C14612 +
          ((C71 * C385 - C72 * C378 - C71 * C386 + C61 * C396) * C62 * C63 *
               C4496 -
           (C71 * C2995 - C72 * C2991 - C71 * C2996 + C61 * C3000) * C62 * C63 *
               C4497 +
           (C71 * C2997 - C72 * C2992 - C71 * C2998 + C61 * C3001) * C62 * C63 *
               C14592) *
              C14589) *
         C14341) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 * C63 * C5167 -
          (C71 * C824 - C72 * C818 - C71 * C825 + C61 * C836) * C62 * C63 *
              C5168 +
          (C71 * C826 - C72 * C819 - C71 * C827 + C61 * C837) * C62 * C63 *
              C5169 -
          (C71 * C5174 - C72 * C5172 - C71 * C5175 + C61 * C5178) * C62 * C63 *
              C5170 +
          (C71 * C5176 - C72 * C5173 - C71 * C5177 + C61 * C5179) * C62 * C63 *
              C5171) *
         C14369 * C14341) /
            (p * q * std::sqrt(p + q));
    d2eexy[12] +=
        (0.5 * std::pow(Pi, 2.5) *
             (((C63 * C116 - C115 * C73) * C71 +
               (C63 * C121 - C115 * C79) * C61) *
                  C62 * C14387 * C14369 * C66 +
              ((C115 * C74 - C63 * C117) * C71 +
               (C115 * C81 - C63 * C122) * C61) *
                  C62 * C14387 * C14369 * C67 +
              ((C63 * C118 - C115 * C75) * C71 +
               (C63 * C123 - C115 * C83) * C61) *
                  C62 * C14387 * C14369 * C68 +
              ((C115 * C76 - C63 * C119) * C71 +
               (C115 * C85 - C63 * C124) * C61) *
                  C62 * C14387 * C14369 * C69 +
              ((C63 * C120 - C115 * C77) * C71 +
               (C63 * C125 - C115 * C87) * C61) *
                  C62 * C14387 * C14369 * C70) +
         0.5 * std::pow(Pi, 2.5) *
             ((((C63 * C116 - C115 * C73) * C71 +
                (C63 * C121 - C115 * C79) * C61) *
                   C62 * C14387 * C14624 +
               ((C115 * C377 - C63 * C439) * C71 +
                (C115 * C384 - C63 * C445) * C61) *
                   C62 * C14387 * C14612 +
               ((C63 * C440 - C115 * C378) * C71 +
                (C63 * C446 - C115 * C386) * C61) *
                   C62 * C14387 * C14589) *
                  C374 +
              (((C115 * C74 - C63 * C117) * C71 +
                (C115 * C81 - C63 * C122) * C61) *
                   C62 * C14387 * C14624 +
               ((C63 * C441 - C115 * C379) * C71 +
                (C63 * C447 - C115 * C388) * C61) *
                   C62 * C14387 * C14612 +
               ((C115 * C380 - C63 * C442) * C71 +
                (C115 * C390 - C63 * C448) * C61) *
                   C62 * C14387 * C14589) *
                  C375 +
              (((C63 * C118 - C115 * C75) * C71 +
                (C63 * C123 - C115 * C83) * C61) *
                   C62 * C14387 * C14624 +
               ((C115 * C381 - C63 * C443) * C71 +
                (C115 * C392 - C63 * C449) * C61) *
                   C62 * C14387 * C14612 +
               ((C63 * C444 - C115 * C382) * C71 +
                (C63 * C450 - C115 * C394) * C61) *
                   C62 * C14387 * C14589) *
                  C14583)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C63 * C116 - C115 * C73) * C71 + (C63 * C121 - C115 * C79) * C61) *
               C62 * C14625 +
           ((C115 * C818 - C63 * C880) * C71 +
            (C115 * C825 - C63 * C886) * C61) *
               C62 * C14614 +
           ((C63 * C881 - C115 * C819) * C71 +
            (C63 * C887 - C115 * C827) * C61) *
               C62 * C14592) *
              C14369 * C374 +
          (((C115 * C74 - C63 * C117) * C71 + (C115 * C81 - C63 * C122) * C61) *
               C62 * C14625 +
           ((C63 * C882 - C115 * C820) * C71 +
            (C63 * C888 - C115 * C829) * C61) *
               C62 * C14614 +
           ((C115 * C821 - C63 * C883) * C71 +
            (C115 * C831 - C63 * C889) * C61) *
               C62 * C14592) *
              C14369 * C375 +
          (((C63 * C118 - C115 * C75) * C71 + (C63 * C123 - C115 * C83) * C61) *
               C62 * C14625 +
           ((C115 * C822 - C63 * C884) * C71 +
            (C115 * C833 - C63 * C890) * C61) *
               C62 * C14614 +
           ((C63 * C885 - C115 * C823) * C71 +
            (C63 * C891 - C115 * C835) * C61) *
               C62 * C14592) *
              C14369 * C14583)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((((C63 * C116 - C115 * C73) * C71 + (C63 * C121 - C115 * C79) * C61) *
               C62 * C14387 * C2406 +
           ((C115 * C377 - C63 * C439) * C71 +
            (C115 * C384 - C63 * C445) * C61) *
               C62 * C14387 * C2407 +
           ((C63 * C440 - C115 * C378) * C71 +
            (C63 * C446 - C115 * C386) * C61) *
               C62 * C14387 * C14589) *
              C14621 +
          (((C115 * C74 - C63 * C117) * C71 + (C115 * C81 - C63 * C122) * C61) *
               C62 * C14387 * C2406 +
           ((C63 * C441 - C115 * C379) * C71 +
            (C63 * C447 - C115 * C388) * C61) *
               C62 * C14387 * C2407 +
           ((C115 * C380 - C63 * C442) * C71 +
            (C115 * C390 - C63 * C448) * C61) *
               C62 * C14387 * C14589) *
              C14608 +
          (((C63 * C118 - C115 * C75) * C71 + (C63 * C123 - C115 * C83) * C61) *
               C62 * C14387 * C2406 +
           ((C115 * C381 - C63 * C443) * C71 +
            (C115 * C392 - C63 * C449) * C61) *
               C62 * C14387 * C2407 +
           ((C63 * C444 - C115 * C382) * C71 +
            (C63 * C450 - C115 * C394) * C61) *
               C62 * C14387 * C14589) *
              C14583)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C63 * C116 - C115 * C73) * C71 + (C63 * C121 - C115 * C79) * C61) *
              C62 * C14387 * C2738 +
          ((C115 * C377 - C63 * C439) * C71 +
           (C115 * C384 - C63 * C445) * C61) *
              C62 * C14387 * C2739 +
          ((C63 * C440 - C115 * C378) * C71 +
           (C63 * C446 - C115 * C386) * C61) *
              C62 * C14387 * C2740 +
          ((C115 * C2744 - C63 * C2774) * C71 +
           (C115 * C2747 - C63 * C2776) * C61) *
              C62 * C14387 * C2741 +
          ((C63 * C2775 - C115 * C2745) * C71 +
           (C63 * C2777 - C115 * C2749) * C61) *
              C62 * C14387 * C2742) *
         C14341) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C63 * C116 - C115 * C73) * C71 + (C63 * C121 - C115 * C79) * C61) *
               C62 * C14625 +
           ((C115 * C818 - C63 * C880) * C71 +
            (C115 * C825 - C63 * C886) * C61) *
               C62 * C14614 +
           ((C63 * C881 - C115 * C819) * C71 +
            (C63 * C887 - C115 * C827) * C61) *
               C62 * C14592) *
              C2406 +
          (((C115 * C377 - C63 * C439) * C71 +
            (C115 * C384 - C63 * C445) * C61) *
               C62 * C14625 +
           ((C63 * C1982 - C115 * C1920) * C71 +
            (C63 * C1985 - C115 * C1924) * C61) *
               C62 * C14614 +
           ((C115 * C2990 - C63 * C3040) * C71 +
            (C115 * C2994 - C63 * C3043) * C61) *
               C62 * C14592) *
              C2407 +
          (((C63 * C440 - C115 * C378) * C71 +
            (C63 * C446 - C115 * C386) * C61) *
               C62 * C14625 +
           ((C115 * C2991 - C63 * C3041) * C71 +
            (C115 * C2996 - C63 * C3044) * C61) *
               C62 * C14614 +
           ((C63 * C3042 - C115 * C2992) * C71 +
            (C63 * C3045 - C115 * C2998) * C61) *
               C62 * C14592) *
              C14589) *
         C14341) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C63 * C116 - C115 * C73) * C71 + (C63 * C121 - C115 * C79) * C61) *
               C62 * C4496 +
           ((C115 * C818 - C63 * C880) * C71 +
            (C115 * C825 - C63 * C886) * C61) *
               C62 * C4497 +
           ((C63 * C881 - C115 * C819) * C71 +
            (C63 * C887 - C115 * C827) * C61) *
               C62 * C14592) *
              C14369 * C14621 +
          (((C115 * C74 - C63 * C117) * C71 + (C115 * C81 - C63 * C122) * C61) *
               C62 * C4496 +
           ((C63 * C882 - C115 * C820) * C71 +
            (C63 * C888 - C115 * C829) * C61) *
               C62 * C4497 +
           ((C115 * C821 - C63 * C883) * C71 +
            (C115 * C831 - C63 * C889) * C61) *
               C62 * C14592) *
              C14369 * C14608 +
          (((C63 * C118 - C115 * C75) * C71 + (C63 * C123 - C115 * C83) * C61) *
               C62 * C4496 +
           ((C115 * C822 - C63 * C884) * C71 +
            (C115 * C833 - C63 * C890) * C61) *
               C62 * C4497 +
           ((C63 * C885 - C115 * C823) * C71 +
            (C63 * C891 - C115 * C835) * C61) *
               C62 * C14592) *
              C14369 * C14583)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C63 * C116 - C115 * C73) * C71 + (C63 * C121 - C115 * C79) * C61) *
               C62 * C4496 +
           ((C115 * C818 - C63 * C880) * C71 +
            (C115 * C825 - C63 * C886) * C61) *
               C62 * C4497 +
           ((C63 * C881 - C115 * C819) * C71 +
            (C63 * C887 - C115 * C827) * C61) *
               C62 * C14592) *
              C14624 +
          (((C115 * C377 - C63 * C439) * C71 +
            (C115 * C384 - C63 * C445) * C61) *
               C62 * C4496 +
           ((C63 * C1982 - C115 * C1920) * C71 +
            (C63 * C1985 - C115 * C1924) * C61) *
               C62 * C4497 +
           ((C115 * C2990 - C63 * C3040) * C71 +
            (C115 * C2994 - C63 * C3043) * C61) *
               C62 * C14592) *
              C14612 +
          (((C63 * C440 - C115 * C378) * C71 +
            (C63 * C446 - C115 * C386) * C61) *
               C62 * C4496 +
           ((C115 * C2991 - C63 * C3041) * C71 +
            (C115 * C2996 - C63 * C3044) * C61) *
               C62 * C4497 +
           ((C63 * C3042 - C115 * C2992) * C71 +
            (C63 * C3045 - C115 * C2998) * C61) *
               C62 * C14592) *
              C14589) *
         C14341) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C63 * C116 - C115 * C73) * C71 + (C63 * C121 - C115 * C79) * C61) *
              C62 * C5167 +
          ((C115 * C818 - C63 * C880) * C71 +
           (C115 * C825 - C63 * C886) * C61) *
              C62 * C5168 +
          ((C63 * C881 - C115 * C819) * C71 +
           (C63 * C887 - C115 * C827) * C61) *
              C62 * C5169 +
          ((C115 * C5172 - C63 * C5202) * C71 +
           (C115 * C5175 - C63 * C5204) * C61) *
              C62 * C5170 +
          ((C63 * C5203 - C115 * C5173) * C71 +
           (C63 * C5205 - C115 * C5177) * C61) *
              C62 * C5171) *
         C14369 * C14341) /
            (p * q * std::sqrt(p + q));
    d2eexz[12] +=
        (0.5 * std::pow(Pi, 2.5) *
             (((C62 * C149 - C148 * C73) * C71 +
               (C62 * C154 - C148 * C79) * C61) *
                  C63 * C14387 * C14369 * C66 +
              ((C148 * C74 - C62 * C150) * C71 +
               (C148 * C81 - C62 * C155) * C61) *
                  C63 * C14387 * C14369 * C67 +
              ((C62 * C151 - C148 * C75) * C71 +
               (C62 * C156 - C148 * C83) * C61) *
                  C63 * C14387 * C14369 * C68 +
              ((C148 * C76 - C62 * C152) * C71 +
               (C148 * C85 - C62 * C157) * C61) *
                  C63 * C14387 * C14369 * C69 +
              ((C62 * C153 - C148 * C77) * C71 +
               (C62 * C158 - C148 * C87) * C61) *
                  C63 * C14387 * C14369 * C70) +
         0.5 * std::pow(Pi, 2.5) *
             ((((C62 * C149 - C148 * C73) * C71 +
                (C62 * C154 - C148 * C79) * C61) *
                   C63 * C14387 * C14624 +
               ((C148 * C377 - C62 * C489) * C71 +
                (C148 * C384 - C62 * C495) * C61) *
                   C63 * C14387 * C14612 +
               ((C62 * C490 - C148 * C378) * C71 +
                (C62 * C496 - C148 * C386) * C61) *
                   C63 * C14387 * C14589) *
                  C374 +
              (((C148 * C74 - C62 * C150) * C71 +
                (C148 * C81 - C62 * C155) * C61) *
                   C63 * C14387 * C14624 +
               ((C62 * C491 - C148 * C379) * C71 +
                (C62 * C497 - C148 * C388) * C61) *
                   C63 * C14387 * C14612 +
               ((C148 * C380 - C62 * C492) * C71 +
                (C148 * C390 - C62 * C498) * C61) *
                   C63 * C14387 * C14589) *
                  C375 +
              (((C62 * C151 - C148 * C75) * C71 +
                (C62 * C156 - C148 * C83) * C61) *
                   C63 * C14387 * C14624 +
               ((C148 * C381 - C62 * C493) * C71 +
                (C148 * C392 - C62 * C499) * C61) *
                   C63 * C14387 * C14612 +
               ((C62 * C494 - C148 * C382) * C71 +
                (C62 * C500 - C148 * C394) * C61) *
                   C63 * C14387 * C14589) *
                  C14583)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C62 * C149 - C148 * C73) * C71 + (C62 * C154 - C148 * C79) * C61) *
               C63 * C14625 +
           ((C148 * C818 - C62 * C930) * C71 +
            (C148 * C825 - C62 * C936) * C61) *
               C63 * C14614 +
           ((C62 * C931 - C148 * C819) * C71 +
            (C62 * C937 - C148 * C827) * C61) *
               C63 * C14592) *
              C14369 * C374 +
          (((C148 * C74 - C62 * C150) * C71 + (C148 * C81 - C62 * C155) * C61) *
               C63 * C14625 +
           ((C62 * C932 - C148 * C820) * C71 +
            (C62 * C938 - C148 * C829) * C61) *
               C63 * C14614 +
           ((C148 * C821 - C62 * C933) * C71 +
            (C148 * C831 - C62 * C939) * C61) *
               C63 * C14592) *
              C14369 * C375 +
          (((C62 * C151 - C148 * C75) * C71 + (C62 * C156 - C148 * C83) * C61) *
               C63 * C14625 +
           ((C148 * C822 - C62 * C934) * C71 +
            (C148 * C833 - C62 * C940) * C61) *
               C63 * C14614 +
           ((C62 * C935 - C148 * C823) * C71 +
            (C62 * C941 - C148 * C835) * C61) *
               C63 * C14592) *
              C14369 * C14583)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((((C62 * C149 - C148 * C73) * C71 + (C62 * C154 - C148 * C79) * C61) *
               C63 * C14387 * C2406 +
           ((C148 * C377 - C62 * C489) * C71 +
            (C148 * C384 - C62 * C495) * C61) *
               C63 * C14387 * C2407 +
           ((C62 * C490 - C148 * C378) * C71 +
            (C62 * C496 - C148 * C386) * C61) *
               C63 * C14387 * C14589) *
              C14621 +
          (((C148 * C74 - C62 * C150) * C71 + (C148 * C81 - C62 * C155) * C61) *
               C63 * C14387 * C2406 +
           ((C62 * C491 - C148 * C379) * C71 +
            (C62 * C497 - C148 * C388) * C61) *
               C63 * C14387 * C2407 +
           ((C148 * C380 - C62 * C492) * C71 +
            (C148 * C390 - C62 * C498) * C61) *
               C63 * C14387 * C14589) *
              C14608 +
          (((C62 * C151 - C148 * C75) * C71 + (C62 * C156 - C148 * C83) * C61) *
               C63 * C14387 * C2406 +
           ((C148 * C381 - C62 * C493) * C71 +
            (C148 * C392 - C62 * C499) * C61) *
               C63 * C14387 * C2407 +
           ((C62 * C494 - C148 * C382) * C71 +
            (C62 * C500 - C148 * C394) * C61) *
               C63 * C14387 * C14589) *
              C14583)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C62 * C149 - C148 * C73) * C71 + (C62 * C154 - C148 * C79) * C61) *
              C63 * C14387 * C2738 +
          ((C148 * C377 - C62 * C489) * C71 +
           (C148 * C384 - C62 * C495) * C61) *
              C63 * C14387 * C2739 +
          ((C62 * C490 - C148 * C378) * C71 +
           (C62 * C496 - C148 * C386) * C61) *
              C63 * C14387 * C2740 +
          ((C148 * C2744 - C62 * C2800) * C71 +
           (C148 * C2747 - C62 * C2802) * C61) *
              C63 * C14387 * C2741 +
          ((C62 * C2801 - C148 * C2745) * C71 +
           (C62 * C2803 - C148 * C2749) * C61) *
              C63 * C14387 * C2742) *
         C14341) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C62 * C149 - C148 * C73) * C71 + (C62 * C154 - C148 * C79) * C61) *
               C63 * C14625 +
           ((C148 * C818 - C62 * C930) * C71 +
            (C148 * C825 - C62 * C936) * C61) *
               C63 * C14614 +
           ((C62 * C931 - C148 * C819) * C71 +
            (C62 * C937 - C148 * C827) * C61) *
               C63 * C14592) *
              C2406 +
          (((C148 * C377 - C62 * C489) * C71 +
            (C148 * C384 - C62 * C495) * C61) *
               C63 * C14625 +
           ((C62 * C2038 - C148 * C1920) * C71 +
            (C62 * C2041 - C148 * C1924) * C61) *
               C63 * C14614 +
           ((C148 * C2990 - C62 * C3084) * C71 +
            (C148 * C2994 - C62 * C3087) * C61) *
               C63 * C14592) *
              C2407 +
          (((C62 * C490 - C148 * C378) * C71 +
            (C62 * C496 - C148 * C386) * C61) *
               C63 * C14625 +
           ((C148 * C2991 - C62 * C3085) * C71 +
            (C148 * C2996 - C62 * C3088) * C61) *
               C63 * C14614 +
           ((C62 * C3086 - C148 * C2992) * C71 +
            (C62 * C3089 - C148 * C2998) * C61) *
               C63 * C14592) *
              C14589) *
         C14341) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C62 * C149 - C148 * C73) * C71 + (C62 * C154 - C148 * C79) * C61) *
               C63 * C4496 +
           ((C148 * C818 - C62 * C930) * C71 +
            (C148 * C825 - C62 * C936) * C61) *
               C63 * C4497 +
           ((C62 * C931 - C148 * C819) * C71 +
            (C62 * C937 - C148 * C827) * C61) *
               C63 * C14592) *
              C14369 * C14621 +
          (((C148 * C74 - C62 * C150) * C71 + (C148 * C81 - C62 * C155) * C61) *
               C63 * C4496 +
           ((C62 * C932 - C148 * C820) * C71 +
            (C62 * C938 - C148 * C829) * C61) *
               C63 * C4497 +
           ((C148 * C821 - C62 * C933) * C71 +
            (C148 * C831 - C62 * C939) * C61) *
               C63 * C14592) *
              C14369 * C14608 +
          (((C62 * C151 - C148 * C75) * C71 + (C62 * C156 - C148 * C83) * C61) *
               C63 * C4496 +
           ((C148 * C822 - C62 * C934) * C71 +
            (C148 * C833 - C62 * C940) * C61) *
               C63 * C4497 +
           ((C62 * C935 - C148 * C823) * C71 +
            (C62 * C941 - C148 * C835) * C61) *
               C63 * C14592) *
              C14369 * C14583)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C62 * C149 - C148 * C73) * C71 + (C62 * C154 - C148 * C79) * C61) *
               C63 * C4496 +
           ((C148 * C818 - C62 * C930) * C71 +
            (C148 * C825 - C62 * C936) * C61) *
               C63 * C4497 +
           ((C62 * C931 - C148 * C819) * C71 +
            (C62 * C937 - C148 * C827) * C61) *
               C63 * C14592) *
              C14624 +
          (((C148 * C377 - C62 * C489) * C71 +
            (C148 * C384 - C62 * C495) * C61) *
               C63 * C4496 +
           ((C62 * C2038 - C148 * C1920) * C71 +
            (C62 * C2041 - C148 * C1924) * C61) *
               C63 * C4497 +
           ((C148 * C2990 - C62 * C3084) * C71 +
            (C148 * C2994 - C62 * C3087) * C61) *
               C63 * C14592) *
              C14612 +
          (((C62 * C490 - C148 * C378) * C71 +
            (C62 * C496 - C148 * C386) * C61) *
               C63 * C4496 +
           ((C148 * C2991 - C62 * C3085) * C71 +
            (C148 * C2996 - C62 * C3088) * C61) *
               C63 * C4497 +
           ((C62 * C3086 - C148 * C2992) * C71 +
            (C62 * C3089 - C148 * C2998) * C61) *
               C63 * C14592) *
              C14589) *
         C14341) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C62 * C149 - C148 * C73) * C71 + (C62 * C154 - C148 * C79) * C61) *
              C63 * C5167 +
          ((C148 * C818 - C62 * C930) * C71 +
           (C148 * C825 - C62 * C936) * C61) *
              C63 * C5168 +
          ((C62 * C931 - C148 * C819) * C71 +
           (C62 * C937 - C148 * C827) * C61) *
              C63 * C5169 +
          ((C148 * C5172 - C62 * C5228) * C71 +
           (C148 * C5175 - C62 * C5230) * C61) *
              C63 * C5170 +
          ((C62 * C5229 - C148 * C5173) * C71 +
           (C62 * C5231 - C148 * C5177) * C61) *
              C63 * C5171) *
         C14369 * C14341) /
            (p * q * std::sqrt(p + q));
    d2eeyx[12] +=
        (0.5 * std::pow(Pi, 2.5) *
             (((C61 * C78 - C71 * C73) * C115 +
               (C61 * C186 - C71 * C181) * C63) *
                  C62 * C14387 * C14369 * C66 +
              ((C71 * C74 - C61 * C80) * C115 +
               (C71 * C182 - C61 * C187) * C63) *
                  C62 * C14387 * C14369 * C67 +
              ((C61 * C82 - C71 * C75) * C115 +
               (C61 * C188 - C71 * C183) * C63) *
                  C62 * C14387 * C14369 * C68 +
              ((C71 * C76 - C61 * C84) * C115 +
               (C71 * C184 - C61 * C189) * C63) *
                  C62 * C14387 * C14369 * C69 +
              ((C61 * C86 - C71 * C77) * C115 +
               (C61 * C190 - C71 * C185) * C63) *
                  C62 * C14387 * C14369 * C70) +
         0.5 * std::pow(Pi, 2.5) *
             ((((C61 * C78 - C71 * C73) * C115 +
                (C61 * C186 - C71 * C181) * C63) *
                   C62 * C14387 * C14624 +
               ((C71 * C377 - C61 * C383) * C115 +
                (C71 * C539 - C61 * C545) * C63) *
                   C62 * C14387 * C14612 +
               ((C61 * C385 - C71 * C378) * C115 +
                (C61 * C546 - C71 * C540) * C63) *
                   C62 * C14387 * C14589) *
                  C374 +
              (((C71 * C74 - C61 * C80) * C115 +
                (C71 * C182 - C61 * C187) * C63) *
                   C62 * C14387 * C14624 +
               ((C61 * C387 - C71 * C379) * C115 +
                (C61 * C547 - C71 * C541) * C63) *
                   C62 * C14387 * C14612 +
               ((C71 * C380 - C61 * C389) * C115 +
                (C71 * C542 - C61 * C548) * C63) *
                   C62 * C14387 * C14589) *
                  C375 +
              (((C61 * C82 - C71 * C75) * C115 +
                (C61 * C188 - C71 * C183) * C63) *
                   C62 * C14387 * C14624 +
               ((C71 * C381 - C61 * C391) * C115 +
                (C71 * C543 - C61 * C549) * C63) *
                   C62 * C14387 * C14612 +
               ((C61 * C393 - C71 * C382) * C115 +
                (C61 * C550 - C71 * C544) * C63) *
                   C62 * C14387 * C14589) *
                  C14583)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
               C62 * C14625 +
           ((C71 * C818 - C61 * C824) * C115 +
            (C71 * C980 - C61 * C986) * C63) *
               C62 * C14614 +
           ((C61 * C826 - C71 * C819) * C115 +
            (C61 * C987 - C71 * C981) * C63) *
               C62 * C14592) *
              C14369 * C374 +
          (((C71 * C74 - C61 * C80) * C115 + (C71 * C182 - C61 * C187) * C63) *
               C62 * C14625 +
           ((C61 * C828 - C71 * C820) * C115 +
            (C61 * C988 - C71 * C982) * C63) *
               C62 * C14614 +
           ((C71 * C821 - C61 * C830) * C115 +
            (C71 * C983 - C61 * C989) * C63) *
               C62 * C14592) *
              C14369 * C375 +
          (((C61 * C82 - C71 * C75) * C115 + (C61 * C188 - C71 * C183) * C63) *
               C62 * C14625 +
           ((C71 * C822 - C61 * C832) * C115 +
            (C71 * C984 - C61 * C990) * C63) *
               C62 * C14614 +
           ((C61 * C834 - C71 * C823) * C115 +
            (C61 * C991 - C71 * C985) * C63) *
               C62 * C14592) *
              C14369 * C14583)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
               C62 * C14387 * C2406 +
           ((C71 * C377 - C61 * C383) * C115 +
            (C71 * C539 - C61 * C545) * C63) *
               C62 * C14387 * C2407 +
           ((C61 * C385 - C71 * C378) * C115 +
            (C61 * C546 - C71 * C540) * C63) *
               C62 * C14387 * C14589) *
              C14621 +
          (((C71 * C74 - C61 * C80) * C115 + (C71 * C182 - C61 * C187) * C63) *
               C62 * C14387 * C2406 +
           ((C61 * C387 - C71 * C379) * C115 +
            (C61 * C547 - C71 * C541) * C63) *
               C62 * C14387 * C2407 +
           ((C71 * C380 - C61 * C389) * C115 +
            (C71 * C542 - C61 * C548) * C63) *
               C62 * C14387 * C14589) *
              C14608 +
          (((C61 * C82 - C71 * C75) * C115 + (C61 * C188 - C71 * C183) * C63) *
               C62 * C14387 * C2406 +
           ((C71 * C381 - C61 * C391) * C115 +
            (C71 * C543 - C61 * C549) * C63) *
               C62 * C14387 * C2407 +
           ((C61 * C393 - C71 * C382) * C115 +
            (C61 * C550 - C71 * C544) * C63) *
               C62 * C14387 * C14589) *
              C14583)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
              C62 * C14387 * C2738 +
          ((C71 * C377 - C61 * C383) * C115 + (C71 * C539 - C61 * C545) * C63) *
              C62 * C14387 * C2739 +
          ((C61 * C385 - C71 * C378) * C115 + (C61 * C546 - C71 * C540) * C63) *
              C62 * C14387 * C2740 +
          ((C71 * C2744 - C61 * C2746) * C115 +
           (C71 * C2826 - C61 * C2828) * C63) *
              C62 * C14387 * C2741 +
          ((C61 * C2748 - C71 * C2745) * C115 +
           (C61 * C2829 - C71 * C2827) * C63) *
              C62 * C14387 * C2742) *
         C14341) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
               C62 * C14625 +
           ((C71 * C818 - C61 * C824) * C115 +
            (C71 * C980 - C61 * C986) * C63) *
               C62 * C14614 +
           ((C61 * C826 - C71 * C819) * C115 +
            (C61 * C987 - C71 * C981) * C63) *
               C62 * C14592) *
              C2406 +
          (((C71 * C377 - C61 * C383) * C115 +
            (C71 * C539 - C61 * C545) * C63) *
               C62 * C14625 +
           ((C61 * C1923 - C71 * C1920) * C115 +
            (C61 * C2097 - C71 * C2094) * C63) *
               C62 * C14614 +
           ((C71 * C2990 - C61 * C2993) * C115 +
            (C71 * C3128 - C61 * C3131) * C63) *
               C62 * C14592) *
              C2407 +
          (((C61 * C385 - C71 * C378) * C115 +
            (C61 * C546 - C71 * C540) * C63) *
               C62 * C14625 +
           ((C71 * C2991 - C61 * C2995) * C115 +
            (C71 * C3129 - C61 * C3132) * C63) *
               C62 * C14614 +
           ((C61 * C2997 - C71 * C2992) * C115 +
            (C61 * C3133 - C71 * C3130) * C63) *
               C62 * C14592) *
              C14589) *
         C14341) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
               C62 * C4496 +
           ((C71 * C818 - C61 * C824) * C115 +
            (C71 * C980 - C61 * C986) * C63) *
               C62 * C4497 +
           ((C61 * C826 - C71 * C819) * C115 +
            (C61 * C987 - C71 * C981) * C63) *
               C62 * C14592) *
              C14369 * C14621 +
          (((C71 * C74 - C61 * C80) * C115 + (C71 * C182 - C61 * C187) * C63) *
               C62 * C4496 +
           ((C61 * C828 - C71 * C820) * C115 +
            (C61 * C988 - C71 * C982) * C63) *
               C62 * C4497 +
           ((C71 * C821 - C61 * C830) * C115 +
            (C71 * C983 - C61 * C989) * C63) *
               C62 * C14592) *
              C14369 * C14608 +
          (((C61 * C82 - C71 * C75) * C115 + (C61 * C188 - C71 * C183) * C63) *
               C62 * C4496 +
           ((C71 * C822 - C61 * C832) * C115 +
            (C71 * C984 - C61 * C990) * C63) *
               C62 * C4497 +
           ((C61 * C834 - C71 * C823) * C115 +
            (C61 * C991 - C71 * C985) * C63) *
               C62 * C14592) *
              C14369 * C14583)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
               C62 * C4496 +
           ((C71 * C818 - C61 * C824) * C115 +
            (C71 * C980 - C61 * C986) * C63) *
               C62 * C4497 +
           ((C61 * C826 - C71 * C819) * C115 +
            (C61 * C987 - C71 * C981) * C63) *
               C62 * C14592) *
              C14624 +
          (((C71 * C377 - C61 * C383) * C115 +
            (C71 * C539 - C61 * C545) * C63) *
               C62 * C4496 +
           ((C61 * C1923 - C71 * C1920) * C115 +
            (C61 * C2097 - C71 * C2094) * C63) *
               C62 * C4497 +
           ((C71 * C2990 - C61 * C2993) * C115 +
            (C71 * C3128 - C61 * C3131) * C63) *
               C62 * C14592) *
              C14612 +
          (((C61 * C385 - C71 * C378) * C115 +
            (C61 * C546 - C71 * C540) * C63) *
               C62 * C4496 +
           ((C71 * C2991 - C61 * C2995) * C115 +
            (C71 * C3129 - C61 * C3132) * C63) *
               C62 * C4497 +
           ((C61 * C2997 - C71 * C2992) * C115 +
            (C61 * C3133 - C71 * C3130) * C63) *
               C62 * C14592) *
              C14589) *
         C14341) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
              C62 * C5167 +
          ((C71 * C818 - C61 * C824) * C115 + (C71 * C980 - C61 * C986) * C63) *
              C62 * C5168 +
          ((C61 * C826 - C71 * C819) * C115 + (C61 * C987 - C71 * C981) * C63) *
              C62 * C5169 +
          ((C71 * C5172 - C61 * C5174) * C115 +
           (C71 * C5254 - C61 * C5256) * C63) *
              C62 * C5170 +
          ((C61 * C5176 - C71 * C5173) * C115 +
           (C61 * C5257 - C71 * C5255) * C63) *
              C62 * C5171) *
         C14369 * C14341) /
            (p * q * std::sqrt(p + q));
    d2eeyy[12] +=
        (0.5 * std::pow(Pi, 2.5) *
             ((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) * C61 *
                  C62 * C14387 * C14369 * C66 -
              (C115 * C117 - C213 * C74 - C115 * C182 + C63 * C215) * C61 *
                  C62 * C14387 * C14369 * C67 +
              (C115 * C118 - C213 * C75 - C115 * C183 + C63 * C216) * C61 *
                  C62 * C14387 * C14369 * C68 -
              (C115 * C119 - C213 * C76 - C115 * C184 + C63 * C217) * C61 *
                  C62 * C14387 * C14369 * C69 +
              (C115 * C120 - C213 * C77 - C115 * C185 + C63 * C218) * C61 *
                  C62 * C14387 * C14369 * C70) +
         0.5 * std::pow(Pi, 2.5) *
             (((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) * C61 *
                   C62 * C14387 * C14624 -
               (C115 * C439 - C213 * C377 - C115 * C539 + C63 * C589) * C61 *
                   C62 * C14387 * C14612 +
               (C115 * C440 - C213 * C378 - C115 * C540 + C63 * C590) * C61 *
                   C62 * C14387 * C14589) *
                  C374 +
              ((C115 * C441 - C213 * C379 - C115 * C541 + C63 * C591) * C61 *
                   C62 * C14387 * C14612 -
               (C115 * C117 - C213 * C74 - C115 * C182 + C63 * C215) * C61 *
                   C62 * C14387 * C14624 -
               (C115 * C442 - C213 * C380 - C115 * C542 + C63 * C592) * C61 *
                   C62 * C14387 * C14589) *
                  C375 +
              ((C115 * C118 - C213 * C75 - C115 * C183 + C63 * C216) * C61 *
                   C62 * C14387 * C14624 -
               (C115 * C443 - C213 * C381 - C115 * C543 + C63 * C593) * C61 *
                   C62 * C14387 * C14612 +
               (C115 * C444 - C213 * C382 - C115 * C544 + C63 * C594) * C61 *
                   C62 * C14387 * C14589) *
                  C14583)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) * C61 * C62 *
               C14625 -
           (C115 * C880 - C213 * C818 - C115 * C980 + C63 * C1030) * C61 * C62 *
               C14614 +
           (C115 * C881 - C213 * C819 - C115 * C981 + C63 * C1031) * C61 * C62 *
               C14592) *
              C14369 * C374 +
          ((C115 * C882 - C213 * C820 - C115 * C982 + C63 * C1032) * C61 * C62 *
               C14614 -
           (C115 * C117 - C213 * C74 - C115 * C182 + C63 * C215) * C61 * C62 *
               C14625 -
           (C115 * C883 - C213 * C821 - C115 * C983 + C63 * C1033) * C61 * C62 *
               C14592) *
              C14369 * C375 +
          ((C115 * C118 - C213 * C75 - C115 * C183 + C63 * C216) * C61 * C62 *
               C14625 -
           (C115 * C884 - C213 * C822 - C115 * C984 + C63 * C1034) * C61 * C62 *
               C14614 +
           (C115 * C885 - C213 * C823 - C115 * C985 + C63 * C1035) * C61 * C62 *
               C14592) *
              C14369 * C14583)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) * C61 * C62 *
               C14387 * C2406 -
           (C115 * C439 - C213 * C377 - C115 * C539 + C63 * C589) * C61 * C62 *
               C14387 * C2407 +
           (C115 * C440 - C213 * C378 - C115 * C540 + C63 * C590) * C61 * C62 *
               C14387 * C14589) *
              C14621 +
          ((C115 * C441 - C213 * C379 - C115 * C541 + C63 * C591) * C61 * C62 *
               C14387 * C2407 -
           (C115 * C117 - C213 * C74 - C115 * C182 + C63 * C215) * C61 * C62 *
               C14387 * C2406 -
           (C115 * C442 - C213 * C380 - C115 * C542 + C63 * C592) * C61 * C62 *
               C14387 * C14589) *
              C14608 +
          ((C115 * C118 - C213 * C75 - C115 * C183 + C63 * C216) * C61 * C62 *
               C14387 * C2406 -
           (C115 * C443 - C213 * C381 - C115 * C543 + C63 * C593) * C61 * C62 *
               C14387 * C2407 +
           (C115 * C444 - C213 * C382 - C115 * C544 + C63 * C594) * C61 * C62 *
               C14387 * C14589) *
              C14583)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) * C61 * C62 *
              C14387 * C2738 -
          (C115 * C439 - C213 * C377 - C115 * C539 + C63 * C589) * C61 * C62 *
              C14387 * C2739 +
          (C115 * C440 - C213 * C378 - C115 * C540 + C63 * C590) * C61 * C62 *
              C14387 * C2740 -
          (C115 * C2774 - C213 * C2744 - C115 * C2826 + C63 * C2852) * C61 *
              C62 * C14387 * C2741 +
          (C115 * C2775 - C213 * C2745 - C115 * C2827 + C63 * C2853) * C61 *
              C62 * C14387 * C2742) *
         C14341) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) * C61 * C62 *
               C14625 -
           (C115 * C880 - C213 * C818 - C115 * C980 + C63 * C1030) * C61 * C62 *
               C14614 +
           (C115 * C881 - C213 * C819 - C115 * C981 + C63 * C1031) * C61 * C62 *
               C14592) *
              C2406 +
          ((C115 * C1982 - C213 * C1920 - C115 * C2094 + C63 * C2150) * C61 *
               C62 * C14614 -
           (C115 * C439 - C213 * C377 - C115 * C539 + C63 * C589) * C61 * C62 *
               C14625 -
           (C115 * C3040 - C213 * C2990 - C115 * C3128 + C63 * C3172) * C61 *
               C62 * C14592) *
              C2407 +
          ((C115 * C440 - C213 * C378 - C115 * C540 + C63 * C590) * C61 * C62 *
               C14625 -
           (C115 * C3041 - C213 * C2991 - C115 * C3129 + C63 * C3173) * C61 *
               C62 * C14614 +
           (C115 * C3042 - C213 * C2992 - C115 * C3130 + C63 * C3174) * C61 *
               C62 * C14592) *
              C14589) *
         C14341) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) * C61 * C62 *
               C4496 -
           (C115 * C880 - C213 * C818 - C115 * C980 + C63 * C1030) * C61 * C62 *
               C4497 +
           (C115 * C881 - C213 * C819 - C115 * C981 + C63 * C1031) * C61 * C62 *
               C14592) *
              C14369 * C14621 +
          ((C115 * C882 - C213 * C820 - C115 * C982 + C63 * C1032) * C61 * C62 *
               C4497 -
           (C115 * C117 - C213 * C74 - C115 * C182 + C63 * C215) * C61 * C62 *
               C4496 -
           (C115 * C883 - C213 * C821 - C115 * C983 + C63 * C1033) * C61 * C62 *
               C14592) *
              C14369 * C14608 +
          ((C115 * C118 - C213 * C75 - C115 * C183 + C63 * C216) * C61 * C62 *
               C4496 -
           (C115 * C884 - C213 * C822 - C115 * C984 + C63 * C1034) * C61 * C62 *
               C4497 +
           (C115 * C885 - C213 * C823 - C115 * C985 + C63 * C1035) * C61 * C62 *
               C14592) *
              C14369 * C14583)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) * C61 * C62 *
               C4496 -
           (C115 * C880 - C213 * C818 - C115 * C980 + C63 * C1030) * C61 * C62 *
               C4497 +
           (C115 * C881 - C213 * C819 - C115 * C981 + C63 * C1031) * C61 * C62 *
               C14592) *
              C14624 +
          ((C115 * C1982 - C213 * C1920 - C115 * C2094 + C63 * C2150) * C61 *
               C62 * C4497 -
           (C115 * C439 - C213 * C377 - C115 * C539 + C63 * C589) * C61 * C62 *
               C4496 -
           (C115 * C3040 - C213 * C2990 - C115 * C3128 + C63 * C3172) * C61 *
               C62 * C14592) *
              C14612 +
          ((C115 * C440 - C213 * C378 - C115 * C540 + C63 * C590) * C61 * C62 *
               C4496 -
           (C115 * C3041 - C213 * C2991 - C115 * C3129 + C63 * C3173) * C61 *
               C62 * C4497 +
           (C115 * C3042 - C213 * C2992 - C115 * C3130 + C63 * C3174) * C61 *
               C62 * C14592) *
              C14589) *
         C14341) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) * C61 * C62 *
              C5167 -
          (C115 * C880 - C213 * C818 - C115 * C980 + C63 * C1030) * C61 * C62 *
              C5168 +
          (C115 * C881 - C213 * C819 - C115 * C981 + C63 * C1031) * C61 * C62 *
              C5169 -
          (C115 * C5202 - C213 * C5172 - C115 * C5254 + C63 * C5280) * C61 *
              C62 * C5170 +
          (C115 * C5203 - C213 * C5173 - C115 * C5255 + C63 * C5281) * C61 *
              C62 * C5171) *
         C14369 * C14341) /
            (p * q * std::sqrt(p + q));
    d2eeyz[12] += (0.5 * std::pow(Pi, 2.5) *
                       (((C62 * C149 - C148 * C73) * C115 +
                         (C62 * C241 - C148 * C181) * C63) *
                            C61 * C14387 * C14369 * C66 +
                        ((C148 * C74 - C62 * C150) * C115 +
                         (C148 * C182 - C62 * C242) * C63) *
                            C61 * C14387 * C14369 * C67 +
                        ((C62 * C151 - C148 * C75) * C115 +
                         (C62 * C243 - C148 * C183) * C63) *
                            C61 * C14387 * C14369 * C68 +
                        ((C148 * C76 - C62 * C152) * C115 +
                         (C148 * C184 - C62 * C244) * C63) *
                            C61 * C14387 * C14369 * C69 +
                        ((C62 * C153 - C148 * C77) * C115 +
                         (C62 * C245 - C148 * C185) * C63) *
                            C61 * C14387 * C14369 * C70) +
                   0.5 * std::pow(Pi, 2.5) *
                       ((((C62 * C149 - C148 * C73) * C115 +
                          (C62 * C241 - C148 * C181) * C63) *
                             C61 * C14387 * C14624 +
                         ((C148 * C377 - C62 * C489) * C115 +
                          (C148 * C539 - C62 * C633) * C63) *
                             C61 * C14387 * C14612 +
                         ((C62 * C490 - C148 * C378) * C115 +
                          (C62 * C634 - C148 * C540) * C63) *
                             C61 * C14387 * C14589) *
                            C374 +
                        (((C148 * C74 - C62 * C150) * C115 +
                          (C148 * C182 - C62 * C242) * C63) *
                             C61 * C14387 * C14624 +
                         ((C62 * C491 - C148 * C379) * C115 +
                          (C62 * C635 - C148 * C541) * C63) *
                             C61 * C14387 * C14612 +
                         ((C148 * C380 - C62 * C492) * C115 +
                          (C148 * C542 - C62 * C636) * C63) *
                             C61 * C14387 * C14589) *
                            C375 +
                        (((C62 * C151 - C148 * C75) * C115 +
                          (C62 * C243 - C148 * C183) * C63) *
                             C61 * C14387 * C14624 +
                         ((C148 * C381 - C62 * C493) * C115 +
                          (C148 * C543 - C62 * C637) * C63) *
                             C61 * C14387 * C14612 +
                         ((C62 * C494 - C148 * C382) * C115 +
                          (C62 * C638 - C148 * C544) * C63) *
                             C61 * C14387 * C14589) *
                            C14583)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) * ((((C62 * C149 - C148 * C73) * C115 +
                                          (C62 * C241 - C148 * C181) * C63) *
                                             C61 * C14625 +
                                         ((C148 * C818 - C62 * C930) * C115 +
                                          (C148 * C980 - C62 * C1074) * C63) *
                                             C61 * C14614 +
                                         ((C62 * C931 - C148 * C819) * C115 +
                                          (C62 * C1075 - C148 * C981) * C63) *
                                             C61 * C14592) *
                                            C14369 * C374 +
                                        (((C148 * C74 - C62 * C150) * C115 +
                                          (C148 * C182 - C62 * C242) * C63) *
                                             C61 * C14625 +
                                         ((C62 * C932 - C148 * C820) * C115 +
                                          (C62 * C1076 - C148 * C982) * C63) *
                                             C61 * C14614 +
                                         ((C148 * C821 - C62 * C933) * C115 +
                                          (C148 * C983 - C62 * C1077) * C63) *
                                             C61 * C14592) *
                                            C14369 * C375 +
                                        (((C62 * C151 - C148 * C75) * C115 +
                                          (C62 * C243 - C148 * C183) * C63) *
                                             C61 * C14625 +
                                         ((C148 * C822 - C62 * C934) * C115 +
                                          (C148 * C984 - C62 * C1078) * C63) *
                                             C61 * C14614 +
                                         ((C62 * C935 - C148 * C823) * C115 +
                                          (C62 * C1079 - C148 * C985) * C63) *
                                             C61 * C14592) *
                                            C14369 * C14583)) /
                      (p * q * std::sqrt(p + q)) +
                  (0.5 * std::pow(Pi, 2.5) *
                   ((((C62 * C149 - C148 * C73) * C115 +
                      (C62 * C241 - C148 * C181) * C63) *
                         C61 * C14387 * C2406 +
                     ((C148 * C377 - C62 * C489) * C115 +
                      (C148 * C539 - C62 * C633) * C63) *
                         C61 * C14387 * C2407 +
                     ((C62 * C490 - C148 * C378) * C115 +
                      (C62 * C634 - C148 * C540) * C63) *
                         C61 * C14387 * C14589) *
                        C14621 +
                    (((C148 * C74 - C62 * C150) * C115 +
                      (C148 * C182 - C62 * C242) * C63) *
                         C61 * C14387 * C2406 +
                     ((C62 * C491 - C148 * C379) * C115 +
                      (C62 * C635 - C148 * C541) * C63) *
                         C61 * C14387 * C2407 +
                     ((C148 * C380 - C62 * C492) * C115 +
                      (C148 * C542 - C62 * C636) * C63) *
                         C61 * C14387 * C14589) *
                        C14608 +
                    (((C62 * C151 - C148 * C75) * C115 +
                      (C62 * C243 - C148 * C183) * C63) *
                         C61 * C14387 * C2406 +
                     ((C148 * C381 - C62 * C493) * C115 +
                      (C148 * C543 - C62 * C637) * C63) *
                         C61 * C14387 * C2407 +
                     ((C62 * C494 - C148 * C382) * C115 +
                      (C62 * C638 - C148 * C544) * C63) *
                         C61 * C14387 * C14589) *
                        C14583)) /
                      (p * q * std::sqrt(p + q)) +
                  (0.5 * std::pow(Pi, 2.5) *
                   (((C62 * C149 - C148 * C73) * C115 +
                     (C62 * C241 - C148 * C181) * C63) *
                        C61 * C14387 * C2738 +
                    ((C148 * C377 - C62 * C489) * C115 +
                     (C148 * C539 - C62 * C633) * C63) *
                        C61 * C14387 * C2739 +
                    ((C62 * C490 - C148 * C378) * C115 +
                     (C62 * C634 - C148 * C540) * C63) *
                        C61 * C14387 * C2740 +
                    ((C148 * C2744 - C62 * C2800) * C115 +
                     (C148 * C2826 - C62 * C2876) * C63) *
                        C61 * C14387 * C2741 +
                    ((C62 * C2801 - C148 * C2745) * C115 +
                     (C62 * C2877 - C148 * C2827) * C63) *
                        C61 * C14387 * C2742) *
                   C14341) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((((C62 * C149 - C148 * C73) * C115 +
                      (C62 * C241 - C148 * C181) * C63) *
                         C61 * C14625 +
                     ((C148 * C818 - C62 * C930) * C115 +
                      (C148 * C980 - C62 * C1074) * C63) *
                         C61 * C14614 +
                     ((C62 * C931 - C148 * C819) * C115 +
                      (C62 * C1075 - C148 * C981) * C63) *
                         C61 * C14592) *
                        C2406 +
                    (((C148 * C377 - C62 * C489) * C115 +
                      (C148 * C539 - C62 * C633) * C63) *
                         C61 * C14625 +
                     ((C62 * C2038 - C148 * C1920) * C115 +
                      (C62 * C2203 - C148 * C2094) * C63) *
                         C61 * C14614 +
                     ((C148 * C2990 - C62 * C3084) * C115 +
                      (C148 * C3128 - C62 * C3213) * C63) *
                         C61 * C14592) *
                        C2407 +
                    (((C62 * C490 - C148 * C378) * C115 +
                      (C62 * C634 - C148 * C540) * C63) *
                         C61 * C14625 +
                     ((C148 * C2991 - C62 * C3085) * C115 +
                      (C148 * C3129 - C62 * C3214) * C63) *
                         C61 * C14614 +
                     ((C62 * C3086 - C148 * C2992) * C115 +
                      (C62 * C3215 - C148 * C3130) * C63) *
                         C61 * C14592) *
                        C14589) *
                   C14341) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) * ((((C62 * C149 - C148 * C73) * C115 +
                                          (C62 * C241 - C148 * C181) * C63) *
                                             C61 * C4496 +
                                         ((C148 * C818 - C62 * C930) * C115 +
                                          (C148 * C980 - C62 * C1074) * C63) *
                                             C61 * C4497 +
                                         ((C62 * C931 - C148 * C819) * C115 +
                                          (C62 * C1075 - C148 * C981) * C63) *
                                             C61 * C14592) *
                                            C14369 * C14621 +
                                        (((C148 * C74 - C62 * C150) * C115 +
                                          (C148 * C182 - C62 * C242) * C63) *
                                             C61 * C4496 +
                                         ((C62 * C932 - C148 * C820) * C115 +
                                          (C62 * C1076 - C148 * C982) * C63) *
                                             C61 * C4497 +
                                         ((C148 * C821 - C62 * C933) * C115 +
                                          (C148 * C983 - C62 * C1077) * C63) *
                                             C61 * C14592) *
                                            C14369 * C14608 +
                                        (((C62 * C151 - C148 * C75) * C115 +
                                          (C62 * C243 - C148 * C183) * C63) *
                                             C61 * C4496 +
                                         ((C148 * C822 - C62 * C934) * C115 +
                                          (C148 * C984 - C62 * C1078) * C63) *
                                             C61 * C4497 +
                                         ((C62 * C935 - C148 * C823) * C115 +
                                          (C62 * C1079 - C148 * C985) * C63) *
                                             C61 * C14592) *
                                            C14369 * C14583)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((((C62 * C149 - C148 * C73) * C115 +
                      (C62 * C241 - C148 * C181) * C63) *
                         C61 * C4496 +
                     ((C148 * C818 - C62 * C930) * C115 +
                      (C148 * C980 - C62 * C1074) * C63) *
                         C61 * C4497 +
                     ((C62 * C931 - C148 * C819) * C115 +
                      (C62 * C1075 - C148 * C981) * C63) *
                         C61 * C14592) *
                        C14624 +
                    (((C148 * C377 - C62 * C489) * C115 +
                      (C148 * C539 - C62 * C633) * C63) *
                         C61 * C4496 +
                     ((C62 * C2038 - C148 * C1920) * C115 +
                      (C62 * C2203 - C148 * C2094) * C63) *
                         C61 * C4497 +
                     ((C148 * C2990 - C62 * C3084) * C115 +
                      (C148 * C3128 - C62 * C3213) * C63) *
                         C61 * C14592) *
                        C14612 +
                    (((C62 * C490 - C148 * C378) * C115 +
                      (C62 * C634 - C148 * C540) * C63) *
                         C61 * C4496 +
                     ((C148 * C2991 - C62 * C3085) * C115 +
                      (C148 * C3129 - C62 * C3214) * C63) *
                         C61 * C4497 +
                     ((C62 * C3086 - C148 * C2992) * C115 +
                      (C62 * C3215 - C148 * C3130) * C63) *
                         C61 * C14592) *
                        C14589) *
                   C14341) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((C62 * C149 - C148 * C73) * C115 +
                     (C62 * C241 - C148 * C181) * C63) *
                        C61 * C5167 +
                    ((C148 * C818 - C62 * C930) * C115 +
                     (C148 * C980 - C62 * C1074) * C63) *
                        C61 * C5168 +
                    ((C62 * C931 - C148 * C819) * C115 +
                     (C62 * C1075 - C148 * C981) * C63) *
                        C61 * C5169 +
                    ((C148 * C5172 - C62 * C5228) * C115 +
                     (C148 * C5254 - C62 * C5304) * C63) *
                        C61 * C5170 +
                    ((C62 * C5229 - C148 * C5173) * C115 +
                     (C62 * C5305 - C148 * C5255) * C63) *
                        C61 * C5171) *
                   C14369 * C14341) /
                      (p * q * std::sqrt(p + q));
    d2eezx[12] +=
        (0.5 * std::pow(Pi, 2.5) *
             (((C61 * C78 - C71 * C73) * C148 +
               (C61 * C273 - C71 * C268) * C62) *
                  C63 * C14387 * C14369 * C66 +
              ((C71 * C74 - C61 * C80) * C148 +
               (C71 * C269 - C61 * C274) * C62) *
                  C63 * C14387 * C14369 * C67 +
              ((C61 * C82 - C71 * C75) * C148 +
               (C61 * C275 - C71 * C270) * C62) *
                  C63 * C14387 * C14369 * C68 +
              ((C71 * C76 - C61 * C84) * C148 +
               (C71 * C271 - C61 * C276) * C62) *
                  C63 * C14387 * C14369 * C69 +
              ((C61 * C86 - C71 * C77) * C148 +
               (C61 * C277 - C71 * C272) * C62) *
                  C63 * C14387 * C14369 * C70) +
         0.5 * std::pow(Pi, 2.5) *
             ((((C61 * C78 - C71 * C73) * C148 +
                (C61 * C273 - C71 * C268) * C62) *
                   C63 * C14387 * C14624 +
               ((C71 * C377 - C61 * C383) * C148 +
                (C71 * C677 - C61 * C683) * C62) *
                   C63 * C14387 * C14612 +
               ((C61 * C385 - C71 * C378) * C148 +
                (C61 * C684 - C71 * C678) * C62) *
                   C63 * C14387 * C14589) *
                  C374 +
              (((C71 * C74 - C61 * C80) * C148 +
                (C71 * C269 - C61 * C274) * C62) *
                   C63 * C14387 * C14624 +
               ((C61 * C387 - C71 * C379) * C148 +
                (C61 * C685 - C71 * C679) * C62) *
                   C63 * C14387 * C14612 +
               ((C71 * C380 - C61 * C389) * C148 +
                (C71 * C680 - C61 * C686) * C62) *
                   C63 * C14387 * C14589) *
                  C375 +
              (((C61 * C82 - C71 * C75) * C148 +
                (C61 * C275 - C71 * C270) * C62) *
                   C63 * C14387 * C14624 +
               ((C71 * C381 - C61 * C391) * C148 +
                (C71 * C681 - C61 * C687) * C62) *
                   C63 * C14387 * C14612 +
               ((C61 * C393 - C71 * C382) * C148 +
                (C61 * C688 - C71 * C682) * C62) *
                   C63 * C14387 * C14589) *
                  C14583)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
               C63 * C14625 +
           ((C71 * C818 - C61 * C824) * C148 +
            (C71 * C1118 - C61 * C1124) * C62) *
               C63 * C14614 +
           ((C61 * C826 - C71 * C819) * C148 +
            (C61 * C1125 - C71 * C1119) * C62) *
               C63 * C14592) *
              C14369 * C374 +
          (((C71 * C74 - C61 * C80) * C148 + (C71 * C269 - C61 * C274) * C62) *
               C63 * C14625 +
           ((C61 * C828 - C71 * C820) * C148 +
            (C61 * C1126 - C71 * C1120) * C62) *
               C63 * C14614 +
           ((C71 * C821 - C61 * C830) * C148 +
            (C71 * C1121 - C61 * C1127) * C62) *
               C63 * C14592) *
              C14369 * C375 +
          (((C61 * C82 - C71 * C75) * C148 + (C61 * C275 - C71 * C270) * C62) *
               C63 * C14625 +
           ((C71 * C822 - C61 * C832) * C148 +
            (C71 * C1122 - C61 * C1128) * C62) *
               C63 * C14614 +
           ((C61 * C834 - C71 * C823) * C148 +
            (C61 * C1129 - C71 * C1123) * C62) *
               C63 * C14592) *
              C14369 * C14583)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
               C63 * C14387 * C2406 +
           ((C71 * C377 - C61 * C383) * C148 +
            (C71 * C677 - C61 * C683) * C62) *
               C63 * C14387 * C2407 +
           ((C61 * C385 - C71 * C378) * C148 +
            (C61 * C684 - C71 * C678) * C62) *
               C63 * C14387 * C14589) *
              C14621 +
          (((C71 * C74 - C61 * C80) * C148 + (C71 * C269 - C61 * C274) * C62) *
               C63 * C14387 * C2406 +
           ((C61 * C387 - C71 * C379) * C148 +
            (C61 * C685 - C71 * C679) * C62) *
               C63 * C14387 * C2407 +
           ((C71 * C380 - C61 * C389) * C148 +
            (C71 * C680 - C61 * C686) * C62) *
               C63 * C14387 * C14589) *
              C14608 +
          (((C61 * C82 - C71 * C75) * C148 + (C61 * C275 - C71 * C270) * C62) *
               C63 * C14387 * C2406 +
           ((C71 * C381 - C61 * C391) * C148 +
            (C71 * C681 - C61 * C687) * C62) *
               C63 * C14387 * C2407 +
           ((C61 * C393 - C71 * C382) * C148 +
            (C61 * C688 - C71 * C682) * C62) *
               C63 * C14387 * C14589) *
              C14583)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
              C63 * C14387 * C2738 +
          ((C71 * C377 - C61 * C383) * C148 + (C71 * C677 - C61 * C683) * C62) *
              C63 * C14387 * C2739 +
          ((C61 * C385 - C71 * C378) * C148 + (C61 * C684 - C71 * C678) * C62) *
              C63 * C14387 * C2740 +
          ((C71 * C2744 - C61 * C2746) * C148 +
           (C71 * C2900 - C61 * C2902) * C62) *
              C63 * C14387 * C2741 +
          ((C61 * C2748 - C71 * C2745) * C148 +
           (C61 * C2903 - C71 * C2901) * C62) *
              C63 * C14387 * C2742) *
         C14341) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
               C63 * C14625 +
           ((C71 * C818 - C61 * C824) * C148 +
            (C71 * C1118 - C61 * C1124) * C62) *
               C63 * C14614 +
           ((C61 * C826 - C71 * C819) * C148 +
            (C61 * C1125 - C71 * C1119) * C62) *
               C63 * C14592) *
              C2406 +
          (((C71 * C377 - C61 * C383) * C148 +
            (C71 * C677 - C61 * C683) * C62) *
               C63 * C14625 +
           ((C61 * C1923 - C71 * C1920) * C148 +
            (C61 * C2259 - C71 * C2256) * C62) *
               C63 * C14614 +
           ((C71 * C2990 - C61 * C2993) * C148 +
            (C71 * C3254 - C61 * C3257) * C62) *
               C63 * C14592) *
              C2407 +
          (((C61 * C385 - C71 * C378) * C148 +
            (C61 * C684 - C71 * C678) * C62) *
               C63 * C14625 +
           ((C71 * C2991 - C61 * C2995) * C148 +
            (C71 * C3255 - C61 * C3258) * C62) *
               C63 * C14614 +
           ((C61 * C2997 - C71 * C2992) * C148 +
            (C61 * C3259 - C71 * C3256) * C62) *
               C63 * C14592) *
              C14589) *
         C14341) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
               C63 * C4496 +
           ((C71 * C818 - C61 * C824) * C148 +
            (C71 * C1118 - C61 * C1124) * C62) *
               C63 * C4497 +
           ((C61 * C826 - C71 * C819) * C148 +
            (C61 * C1125 - C71 * C1119) * C62) *
               C63 * C14592) *
              C14369 * C14621 +
          (((C71 * C74 - C61 * C80) * C148 + (C71 * C269 - C61 * C274) * C62) *
               C63 * C4496 +
           ((C61 * C828 - C71 * C820) * C148 +
            (C61 * C1126 - C71 * C1120) * C62) *
               C63 * C4497 +
           ((C71 * C821 - C61 * C830) * C148 +
            (C71 * C1121 - C61 * C1127) * C62) *
               C63 * C14592) *
              C14369 * C14608 +
          (((C61 * C82 - C71 * C75) * C148 + (C61 * C275 - C71 * C270) * C62) *
               C63 * C4496 +
           ((C71 * C822 - C61 * C832) * C148 +
            (C71 * C1122 - C61 * C1128) * C62) *
               C63 * C4497 +
           ((C61 * C834 - C71 * C823) * C148 +
            (C61 * C1129 - C71 * C1123) * C62) *
               C63 * C14592) *
              C14369 * C14583)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
               C63 * C4496 +
           ((C71 * C818 - C61 * C824) * C148 +
            (C71 * C1118 - C61 * C1124) * C62) *
               C63 * C4497 +
           ((C61 * C826 - C71 * C819) * C148 +
            (C61 * C1125 - C71 * C1119) * C62) *
               C63 * C14592) *
              C14624 +
          (((C71 * C377 - C61 * C383) * C148 +
            (C71 * C677 - C61 * C683) * C62) *
               C63 * C4496 +
           ((C61 * C1923 - C71 * C1920) * C148 +
            (C61 * C2259 - C71 * C2256) * C62) *
               C63 * C4497 +
           ((C71 * C2990 - C61 * C2993) * C148 +
            (C71 * C3254 - C61 * C3257) * C62) *
               C63 * C14592) *
              C14612 +
          (((C61 * C385 - C71 * C378) * C148 +
            (C61 * C684 - C71 * C678) * C62) *
               C63 * C4496 +
           ((C71 * C2991 - C61 * C2995) * C148 +
            (C71 * C3255 - C61 * C3258) * C62) *
               C63 * C4497 +
           ((C61 * C2997 - C71 * C2992) * C148 +
            (C61 * C3259 - C71 * C3256) * C62) *
               C63 * C14592) *
              C14589) *
         C14341) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
              C63 * C5167 +
          ((C71 * C818 - C61 * C824) * C148 +
           (C71 * C1118 - C61 * C1124) * C62) *
              C63 * C5168 +
          ((C61 * C826 - C71 * C819) * C148 +
           (C61 * C1125 - C71 * C1119) * C62) *
              C63 * C5169 +
          ((C71 * C5172 - C61 * C5174) * C148 +
           (C71 * C5328 - C61 * C5330) * C62) *
              C63 * C5170 +
          ((C61 * C5176 - C71 * C5173) * C148 +
           (C61 * C5331 - C71 * C5329) * C62) *
              C63 * C5171) *
         C14369 * C14341) /
            (p * q * std::sqrt(p + q));
    d2eezy[12] += (0.5 * std::pow(Pi, 2.5) *
                       (((C63 * C116 - C115 * C73) * C148 +
                         (C63 * C300 - C115 * C268) * C62) *
                            C61 * C14387 * C14369 * C66 +
                        ((C115 * C74 - C63 * C117) * C148 +
                         (C115 * C269 - C63 * C301) * C62) *
                            C61 * C14387 * C14369 * C67 +
                        ((C63 * C118 - C115 * C75) * C148 +
                         (C63 * C302 - C115 * C270) * C62) *
                            C61 * C14387 * C14369 * C68 +
                        ((C115 * C76 - C63 * C119) * C148 +
                         (C115 * C271 - C63 * C303) * C62) *
                            C61 * C14387 * C14369 * C69 +
                        ((C63 * C120 - C115 * C77) * C148 +
                         (C63 * C304 - C115 * C272) * C62) *
                            C61 * C14387 * C14369 * C70) +
                   0.5 * std::pow(Pi, 2.5) *
                       ((((C63 * C116 - C115 * C73) * C148 +
                          (C63 * C300 - C115 * C268) * C62) *
                             C61 * C14387 * C14624 +
                         ((C115 * C377 - C63 * C439) * C148 +
                          (C115 * C677 - C63 * C727) * C62) *
                             C61 * C14387 * C14612 +
                         ((C63 * C440 - C115 * C378) * C148 +
                          (C63 * C728 - C115 * C678) * C62) *
                             C61 * C14387 * C14589) *
                            C374 +
                        (((C115 * C74 - C63 * C117) * C148 +
                          (C115 * C269 - C63 * C301) * C62) *
                             C61 * C14387 * C14624 +
                         ((C63 * C441 - C115 * C379) * C148 +
                          (C63 * C729 - C115 * C679) * C62) *
                             C61 * C14387 * C14612 +
                         ((C115 * C380 - C63 * C442) * C148 +
                          (C115 * C680 - C63 * C730) * C62) *
                             C61 * C14387 * C14589) *
                            C375 +
                        (((C63 * C118 - C115 * C75) * C148 +
                          (C63 * C302 - C115 * C270) * C62) *
                             C61 * C14387 * C14624 +
                         ((C115 * C381 - C63 * C443) * C148 +
                          (C115 * C681 - C63 * C731) * C62) *
                             C61 * C14387 * C14612 +
                         ((C63 * C444 - C115 * C382) * C148 +
                          (C63 * C732 - C115 * C682) * C62) *
                             C61 * C14387 * C14589) *
                            C14583)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) * ((((C63 * C116 - C115 * C73) * C148 +
                                          (C63 * C300 - C115 * C268) * C62) *
                                             C61 * C14625 +
                                         ((C115 * C818 - C63 * C880) * C148 +
                                          (C115 * C1118 - C63 * C1168) * C62) *
                                             C61 * C14614 +
                                         ((C63 * C881 - C115 * C819) * C148 +
                                          (C63 * C1169 - C115 * C1119) * C62) *
                                             C61 * C14592) *
                                            C14369 * C374 +
                                        (((C115 * C74 - C63 * C117) * C148 +
                                          (C115 * C269 - C63 * C301) * C62) *
                                             C61 * C14625 +
                                         ((C63 * C882 - C115 * C820) * C148 +
                                          (C63 * C1170 - C115 * C1120) * C62) *
                                             C61 * C14614 +
                                         ((C115 * C821 - C63 * C883) * C148 +
                                          (C115 * C1121 - C63 * C1171) * C62) *
                                             C61 * C14592) *
                                            C14369 * C375 +
                                        (((C63 * C118 - C115 * C75) * C148 +
                                          (C63 * C302 - C115 * C270) * C62) *
                                             C61 * C14625 +
                                         ((C115 * C822 - C63 * C884) * C148 +
                                          (C115 * C1122 - C63 * C1172) * C62) *
                                             C61 * C14614 +
                                         ((C63 * C885 - C115 * C823) * C148 +
                                          (C63 * C1173 - C115 * C1123) * C62) *
                                             C61 * C14592) *
                                            C14369 * C14583)) /
                      (p * q * std::sqrt(p + q)) +
                  (0.5 * std::pow(Pi, 2.5) *
                   ((((C63 * C116 - C115 * C73) * C148 +
                      (C63 * C300 - C115 * C268) * C62) *
                         C61 * C14387 * C2406 +
                     ((C115 * C377 - C63 * C439) * C148 +
                      (C115 * C677 - C63 * C727) * C62) *
                         C61 * C14387 * C2407 +
                     ((C63 * C440 - C115 * C378) * C148 +
                      (C63 * C728 - C115 * C678) * C62) *
                         C61 * C14387 * C14589) *
                        C14621 +
                    (((C115 * C74 - C63 * C117) * C148 +
                      (C115 * C269 - C63 * C301) * C62) *
                         C61 * C14387 * C2406 +
                     ((C63 * C441 - C115 * C379) * C148 +
                      (C63 * C729 - C115 * C679) * C62) *
                         C61 * C14387 * C2407 +
                     ((C115 * C380 - C63 * C442) * C148 +
                      (C115 * C680 - C63 * C730) * C62) *
                         C61 * C14387 * C14589) *
                        C14608 +
                    (((C63 * C118 - C115 * C75) * C148 +
                      (C63 * C302 - C115 * C270) * C62) *
                         C61 * C14387 * C2406 +
                     ((C115 * C381 - C63 * C443) * C148 +
                      (C115 * C681 - C63 * C731) * C62) *
                         C61 * C14387 * C2407 +
                     ((C63 * C444 - C115 * C382) * C148 +
                      (C63 * C732 - C115 * C682) * C62) *
                         C61 * C14387 * C14589) *
                        C14583)) /
                      (p * q * std::sqrt(p + q)) +
                  (0.5 * std::pow(Pi, 2.5) *
                   (((C63 * C116 - C115 * C73) * C148 +
                     (C63 * C300 - C115 * C268) * C62) *
                        C61 * C14387 * C2738 +
                    ((C115 * C377 - C63 * C439) * C148 +
                     (C115 * C677 - C63 * C727) * C62) *
                        C61 * C14387 * C2739 +
                    ((C63 * C440 - C115 * C378) * C148 +
                     (C63 * C728 - C115 * C678) * C62) *
                        C61 * C14387 * C2740 +
                    ((C115 * C2744 - C63 * C2774) * C148 +
                     (C115 * C2900 - C63 * C2926) * C62) *
                        C61 * C14387 * C2741 +
                    ((C63 * C2775 - C115 * C2745) * C148 +
                     (C63 * C2927 - C115 * C2901) * C62) *
                        C61 * C14387 * C2742) *
                   C14341) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((((C63 * C116 - C115 * C73) * C148 +
                      (C63 * C300 - C115 * C268) * C62) *
                         C61 * C14625 +
                     ((C115 * C818 - C63 * C880) * C148 +
                      (C115 * C1118 - C63 * C1168) * C62) *
                         C61 * C14614 +
                     ((C63 * C881 - C115 * C819) * C148 +
                      (C63 * C1169 - C115 * C1119) * C62) *
                         C61 * C14592) *
                        C2406 +
                    (((C115 * C377 - C63 * C439) * C148 +
                      (C115 * C677 - C63 * C727) * C62) *
                         C61 * C14625 +
                     ((C63 * C1982 - C115 * C1920) * C148 +
                      (C63 * C2312 - C115 * C2256) * C62) *
                         C61 * C14614 +
                     ((C115 * C2990 - C63 * C3040) * C148 +
                      (C115 * C3254 - C63 * C3298) * C62) *
                         C61 * C14592) *
                        C2407 +
                    (((C63 * C440 - C115 * C378) * C148 +
                      (C63 * C728 - C115 * C678) * C62) *
                         C61 * C14625 +
                     ((C115 * C2991 - C63 * C3041) * C148 +
                      (C115 * C3255 - C63 * C3299) * C62) *
                         C61 * C14614 +
                     ((C63 * C3042 - C115 * C2992) * C148 +
                      (C63 * C3300 - C115 * C3256) * C62) *
                         C61 * C14592) *
                        C14589) *
                   C14341) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) * ((((C63 * C116 - C115 * C73) * C148 +
                                          (C63 * C300 - C115 * C268) * C62) *
                                             C61 * C4496 +
                                         ((C115 * C818 - C63 * C880) * C148 +
                                          (C115 * C1118 - C63 * C1168) * C62) *
                                             C61 * C4497 +
                                         ((C63 * C881 - C115 * C819) * C148 +
                                          (C63 * C1169 - C115 * C1119) * C62) *
                                             C61 * C14592) *
                                            C14369 * C14621 +
                                        (((C115 * C74 - C63 * C117) * C148 +
                                          (C115 * C269 - C63 * C301) * C62) *
                                             C61 * C4496 +
                                         ((C63 * C882 - C115 * C820) * C148 +
                                          (C63 * C1170 - C115 * C1120) * C62) *
                                             C61 * C4497 +
                                         ((C115 * C821 - C63 * C883) * C148 +
                                          (C115 * C1121 - C63 * C1171) * C62) *
                                             C61 * C14592) *
                                            C14369 * C14608 +
                                        (((C63 * C118 - C115 * C75) * C148 +
                                          (C63 * C302 - C115 * C270) * C62) *
                                             C61 * C4496 +
                                         ((C115 * C822 - C63 * C884) * C148 +
                                          (C115 * C1122 - C63 * C1172) * C62) *
                                             C61 * C4497 +
                                         ((C63 * C885 - C115 * C823) * C148 +
                                          (C63 * C1173 - C115 * C1123) * C62) *
                                             C61 * C14592) *
                                            C14369 * C14583)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((((C63 * C116 - C115 * C73) * C148 +
                      (C63 * C300 - C115 * C268) * C62) *
                         C61 * C4496 +
                     ((C115 * C818 - C63 * C880) * C148 +
                      (C115 * C1118 - C63 * C1168) * C62) *
                         C61 * C4497 +
                     ((C63 * C881 - C115 * C819) * C148 +
                      (C63 * C1169 - C115 * C1119) * C62) *
                         C61 * C14592) *
                        C14624 +
                    (((C115 * C377 - C63 * C439) * C148 +
                      (C115 * C677 - C63 * C727) * C62) *
                         C61 * C4496 +
                     ((C63 * C1982 - C115 * C1920) * C148 +
                      (C63 * C2312 - C115 * C2256) * C62) *
                         C61 * C4497 +
                     ((C115 * C2990 - C63 * C3040) * C148 +
                      (C115 * C3254 - C63 * C3298) * C62) *
                         C61 * C14592) *
                        C14612 +
                    (((C63 * C440 - C115 * C378) * C148 +
                      (C63 * C728 - C115 * C678) * C62) *
                         C61 * C4496 +
                     ((C115 * C2991 - C63 * C3041) * C148 +
                      (C115 * C3255 - C63 * C3299) * C62) *
                         C61 * C4497 +
                     ((C63 * C3042 - C115 * C2992) * C148 +
                      (C63 * C3300 - C115 * C3256) * C62) *
                         C61 * C14592) *
                        C14589) *
                   C14341) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((C63 * C116 - C115 * C73) * C148 +
                     (C63 * C300 - C115 * C268) * C62) *
                        C61 * C5167 +
                    ((C115 * C818 - C63 * C880) * C148 +
                     (C115 * C1118 - C63 * C1168) * C62) *
                        C61 * C5168 +
                    ((C63 * C881 - C115 * C819) * C148 +
                     (C63 * C1169 - C115 * C1119) * C62) *
                        C61 * C5169 +
                    ((C115 * C5172 - C63 * C5202) * C148 +
                     (C115 * C5328 - C63 * C5354) * C62) *
                        C61 * C5170 +
                    ((C63 * C5203 - C115 * C5173) * C148 +
                     (C63 * C5355 - C115 * C5329) * C62) *
                        C61 * C5171) *
                   C14369 * C14341) /
                      (p * q * std::sqrt(p + q));
    d2eezz[12] +=
        (0.5 * std::pow(Pi, 2.5) *
             ((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) * C63 *
                  C61 * C14387 * C14369 * C66 -
              (C148 * C150 - C327 * C74 - C148 * C269 + C62 * C329) * C63 *
                  C61 * C14387 * C14369 * C67 +
              (C148 * C151 - C327 * C75 - C148 * C270 + C62 * C330) * C63 *
                  C61 * C14387 * C14369 * C68 -
              (C148 * C152 - C327 * C76 - C148 * C271 + C62 * C331) * C63 *
                  C61 * C14387 * C14369 * C69 +
              (C148 * C153 - C327 * C77 - C148 * C272 + C62 * C332) * C63 *
                  C61 * C14387 * C14369 * C70) +
         0.5 * std::pow(Pi, 2.5) *
             (((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) * C63 *
                   C61 * C14387 * C14624 -
               (C148 * C489 - C327 * C377 - C148 * C677 + C62 * C771) * C63 *
                   C61 * C14387 * C14612 +
               (C148 * C490 - C327 * C378 - C148 * C678 + C62 * C772) * C63 *
                   C61 * C14387 * C14589) *
                  C374 +
              ((C148 * C491 - C327 * C379 - C148 * C679 + C62 * C773) * C63 *
                   C61 * C14387 * C14612 -
               (C148 * C150 - C327 * C74 - C148 * C269 + C62 * C329) * C63 *
                   C61 * C14387 * C14624 -
               (C148 * C492 - C327 * C380 - C148 * C680 + C62 * C774) * C63 *
                   C61 * C14387 * C14589) *
                  C375 +
              ((C148 * C151 - C327 * C75 - C148 * C270 + C62 * C330) * C63 *
                   C61 * C14387 * C14624 -
               (C148 * C493 - C327 * C381 - C148 * C681 + C62 * C775) * C63 *
                   C61 * C14387 * C14612 +
               (C148 * C494 - C327 * C382 - C148 * C682 + C62 * C776) * C63 *
                   C61 * C14387 * C14589) *
                  C14583)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) * C63 * C61 *
               C14625 -
           (C148 * C930 - C327 * C818 - C148 * C1118 + C62 * C1212) * C63 *
               C61 * C14614 +
           (C148 * C931 - C327 * C819 - C148 * C1119 + C62 * C1213) * C63 *
               C61 * C14592) *
              C14369 * C374 +
          ((C148 * C932 - C327 * C820 - C148 * C1120 + C62 * C1214) * C63 *
               C61 * C14614 -
           (C148 * C150 - C327 * C74 - C148 * C269 + C62 * C329) * C63 * C61 *
               C14625 -
           (C148 * C933 - C327 * C821 - C148 * C1121 + C62 * C1215) * C63 *
               C61 * C14592) *
              C14369 * C375 +
          ((C148 * C151 - C327 * C75 - C148 * C270 + C62 * C330) * C63 * C61 *
               C14625 -
           (C148 * C934 - C327 * C822 - C148 * C1122 + C62 * C1216) * C63 *
               C61 * C14614 +
           (C148 * C935 - C327 * C823 - C148 * C1123 + C62 * C1217) * C63 *
               C61 * C14592) *
              C14369 * C14583)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) * C63 * C61 *
               C14387 * C2406 -
           (C148 * C489 - C327 * C377 - C148 * C677 + C62 * C771) * C63 * C61 *
               C14387 * C2407 +
           (C148 * C490 - C327 * C378 - C148 * C678 + C62 * C772) * C63 * C61 *
               C14387 * C14589) *
              C14621 +
          ((C148 * C491 - C327 * C379 - C148 * C679 + C62 * C773) * C63 * C61 *
               C14387 * C2407 -
           (C148 * C150 - C327 * C74 - C148 * C269 + C62 * C329) * C63 * C61 *
               C14387 * C2406 -
           (C148 * C492 - C327 * C380 - C148 * C680 + C62 * C774) * C63 * C61 *
               C14387 * C14589) *
              C14608 +
          ((C148 * C151 - C327 * C75 - C148 * C270 + C62 * C330) * C63 * C61 *
               C14387 * C2406 -
           (C148 * C493 - C327 * C381 - C148 * C681 + C62 * C775) * C63 * C61 *
               C14387 * C2407 +
           (C148 * C494 - C327 * C382 - C148 * C682 + C62 * C776) * C63 * C61 *
               C14387 * C14589) *
              C14583)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) * C63 * C61 *
              C14387 * C2738 -
          (C148 * C489 - C327 * C377 - C148 * C677 + C62 * C771) * C63 * C61 *
              C14387 * C2739 +
          (C148 * C490 - C327 * C378 - C148 * C678 + C62 * C772) * C63 * C61 *
              C14387 * C2740 -
          (C148 * C2800 - C327 * C2744 - C148 * C2900 + C62 * C2950) * C63 *
              C61 * C14387 * C2741 +
          (C148 * C2801 - C327 * C2745 - C148 * C2901 + C62 * C2951) * C63 *
              C61 * C14387 * C2742) *
         C14341) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) * C63 * C61 *
               C14625 -
           (C148 * C930 - C327 * C818 - C148 * C1118 + C62 * C1212) * C63 *
               C61 * C14614 +
           (C148 * C931 - C327 * C819 - C148 * C1119 + C62 * C1213) * C63 *
               C61 * C14592) *
              C2406 +
          ((C148 * C2038 - C327 * C1920 - C148 * C2256 + C62 * C2365) * C63 *
               C61 * C14614 -
           (C148 * C489 - C327 * C377 - C148 * C677 + C62 * C771) * C63 * C61 *
               C14625 -
           (C148 * C3084 - C327 * C2990 - C148 * C3254 + C62 * C3339) * C63 *
               C61 * C14592) *
              C2407 +
          ((C148 * C490 - C327 * C378 - C148 * C678 + C62 * C772) * C63 * C61 *
               C14625 -
           (C148 * C3085 - C327 * C2991 - C148 * C3255 + C62 * C3340) * C63 *
               C61 * C14614 +
           (C148 * C3086 - C327 * C2992 - C148 * C3256 + C62 * C3341) * C63 *
               C61 * C14592) *
              C14589) *
         C14341) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) * C63 * C61 *
               C4496 -
           (C148 * C930 - C327 * C818 - C148 * C1118 + C62 * C1212) * C63 *
               C61 * C4497 +
           (C148 * C931 - C327 * C819 - C148 * C1119 + C62 * C1213) * C63 *
               C61 * C14592) *
              C14369 * C14621 +
          ((C148 * C932 - C327 * C820 - C148 * C1120 + C62 * C1214) * C63 *
               C61 * C4497 -
           (C148 * C150 - C327 * C74 - C148 * C269 + C62 * C329) * C63 * C61 *
               C4496 -
           (C148 * C933 - C327 * C821 - C148 * C1121 + C62 * C1215) * C63 *
               C61 * C14592) *
              C14369 * C14608 +
          ((C148 * C151 - C327 * C75 - C148 * C270 + C62 * C330) * C63 * C61 *
               C4496 -
           (C148 * C934 - C327 * C822 - C148 * C1122 + C62 * C1216) * C63 *
               C61 * C4497 +
           (C148 * C935 - C327 * C823 - C148 * C1123 + C62 * C1217) * C63 *
               C61 * C14592) *
              C14369 * C14583)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) * C63 * C61 *
               C4496 -
           (C148 * C930 - C327 * C818 - C148 * C1118 + C62 * C1212) * C63 *
               C61 * C4497 +
           (C148 * C931 - C327 * C819 - C148 * C1119 + C62 * C1213) * C63 *
               C61 * C14592) *
              C14624 +
          ((C148 * C2038 - C327 * C1920 - C148 * C2256 + C62 * C2365) * C63 *
               C61 * C4497 -
           (C148 * C489 - C327 * C377 - C148 * C677 + C62 * C771) * C63 * C61 *
               C4496 -
           (C148 * C3084 - C327 * C2990 - C148 * C3254 + C62 * C3339) * C63 *
               C61 * C14592) *
              C14612 +
          ((C148 * C490 - C327 * C378 - C148 * C678 + C62 * C772) * C63 * C61 *
               C4496 -
           (C148 * C3085 - C327 * C2991 - C148 * C3255 + C62 * C3340) * C63 *
               C61 * C4497 +
           (C148 * C3086 - C327 * C2992 - C148 * C3256 + C62 * C3341) * C63 *
               C61 * C14592) *
              C14589) *
         C14341) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) * C63 * C61 *
              C5167 -
          (C148 * C930 - C327 * C818 - C148 * C1118 + C62 * C1212) * C63 * C61 *
              C5168 +
          (C148 * C931 - C327 * C819 - C148 * C1119 + C62 * C1213) * C63 * C61 *
              C5169 -
          (C148 * C5228 - C327 * C5172 - C148 * C5328 + C62 * C5378) * C63 *
              C61 * C5170 +
          (C148 * C5229 - C327 * C5173 - C148 * C5329 + C62 * C5379) * C63 *
              C61 * C5171) *
         C14369 * C14341) /
            (p * q * std::sqrt(p + q));
    d2eexx[13] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 * C63 *
                C14564 -
            (C71 * C824 - C72 * C818 - C71 * C825 + C61 * C836) * C62 * C63 *
                C14474) *
               C2406 +
           ((C71 * C1923 - C72 * C1920 - C71 * C1924 + C61 * C1929) * C62 *
                C63 * C14474 -
            (C71 * C383 - C72 * C377 - C71 * C384 + C61 * C395) * C62 * C63 *
                C14564) *
               C2407 +
           ((C71 * C385 - C72 * C378 - C71 * C386 + C61 * C396) * C62 * C63 *
                C14564 -
            (C71 * C2995 - C72 * C2991 - C71 * C2996 + C61 * C3000) * C62 *
                C63 * C14474) *
               C14589) *
              C14549 +
          (((C71 * C828 - C72 * C820 - C71 * C829 + C61 * C838) * C62 * C63 *
                C14474 -
            (C71 * C80 - C72 * C74 - C71 * C81 + C61 * C89) * C62 * C63 *
                C14564) *
               C2406 +
           ((C71 * C387 - C72 * C379 - C71 * C388 + C61 * C397) * C62 * C63 *
                C14564 -
            (C71 * C1925 - C72 * C1921 - C71 * C1926 + C61 * C1930) * C62 *
                C63 * C14474) *
               C2407 +
           ((C71 * C3721 - C72 * C3720 - C71 * C3722 + C61 * C3723) * C62 *
                C63 * C14474 -
            (C71 * C389 - C72 * C380 - C71 * C390 + C61 * C398) * C62 * C63 *
                C14564) *
               C14589) *
              C14352)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 * C63 *
               C14564 -
           (C71 * C824 - C72 * C818 - C71 * C825 + C61 * C836) * C62 * C63 *
               C14474) *
              C14369 * C1254 +
          ((C71 * C828 - C72 * C820 - C71 * C829 + C61 * C838) * C62 * C63 *
               C14474 -
           (C71 * C80 - C72 * C74 - C71 * C81 + C61 * C89) * C62 * C63 *
               C14564) *
              C14369 * C1255 +
          ((C71 * C82 - C72 * C75 - C71 * C83 + C61 * C90) * C62 * C63 *
               C14564 -
           (C71 * C832 - C72 * C822 - C71 * C833 + C61 * C840) * C62 * C63 *
               C14474) *
              C14369 * C1256 +
          ((C71 * C1583 - C72 * C1582 - C71 * C1584 + C61 * C1585) * C62 * C63 *
               C14474 -
           (C71 * C84 - C72 * C76 - C71 * C85 + C61 * C91) * C62 * C63 *
               C14564) *
              C14369 * C14593)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 * C63 * C5880 -
           (C71 * C824 - C72 * C818 - C71 * C825 + C61 * C836) * C62 * C63 *
               C5881 +
           (C71 * C826 - C72 * C819 - C71 * C827 + C61 * C837) * C62 * C63 *
               C5882 -
           (C71 * C5174 - C72 * C5172 - C71 * C5175 + C61 * C5178) * C62 * C63 *
               C14605) *
              C14369 * C14549 +
          ((C71 * C828 - C72 * C820 - C71 * C829 + C61 * C838) * C62 * C63 *
               C5881 -
           (C71 * C80 - C72 * C74 - C71 * C81 + C61 * C89) * C62 * C63 * C5880 -
           (C71 * C830 - C72 * C821 - C71 * C831 + C61 * C839) * C62 * C63 *
               C5882 +
           (C71 * C5885 - C72 * C5884 - C71 * C5886 + C61 * C5887) * C62 * C63 *
               C14605) *
              C14369 * C14352)) /
            (p * q * std::sqrt(p + q));
    d2eexy[13] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C63 * C116 - C115 * C73) * C71 +
             (C63 * C121 - C115 * C79) * C61) *
                C62 * C14564 +
            ((C115 * C818 - C63 * C880) * C71 +
             (C115 * C825 - C63 * C886) * C61) *
                C62 * C14474) *
               C2406 +
           (((C115 * C377 - C63 * C439) * C71 +
             (C115 * C384 - C63 * C445) * C61) *
                C62 * C14564 +
            ((C63 * C1982 - C115 * C1920) * C71 +
             (C63 * C1985 - C115 * C1924) * C61) *
                C62 * C14474) *
               C2407 +
           (((C63 * C440 - C115 * C378) * C71 +
             (C63 * C446 - C115 * C386) * C61) *
                C62 * C14564 +
            ((C115 * C2991 - C63 * C3041) * C71 +
             (C115 * C2996 - C63 * C3044) * C61) *
                C62 * C14474) *
               C14589) *
              C14549 +
          ((((C115 * C74 - C63 * C117) * C71 +
             (C115 * C81 - C63 * C122) * C61) *
                C62 * C14564 +
            ((C63 * C882 - C115 * C820) * C71 +
             (C63 * C888 - C115 * C829) * C61) *
                C62 * C14474) *
               C2406 +
           (((C63 * C441 - C115 * C379) * C71 +
             (C63 * C447 - C115 * C388) * C61) *
                C62 * C14564 +
            ((C115 * C1921 - C63 * C1983) * C71 +
             (C115 * C1926 - C63 * C1986) * C61) *
                C62 * C14474) *
               C2407 +
           (((C115 * C380 - C63 * C442) * C71 +
             (C115 * C390 - C63 * C448) * C61) *
                C62 * C14564 +
            ((C63 * C3774 - C115 * C3720) * C71 +
             (C63 * C3775 - C115 * C3722) * C61) *
                C62 * C14474) *
               C14589) *
              C14352)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C63 * C116 - C115 * C73) * C71 + (C63 * C121 - C115 * C79) * C61) *
               C62 * C14564 +
           ((C115 * C818 - C63 * C880) * C71 +
            (C115 * C825 - C63 * C886) * C61) *
               C62 * C14474) *
              C14369 * C1254 +
          (((C115 * C74 - C63 * C117) * C71 + (C115 * C81 - C63 * C122) * C61) *
               C62 * C14564 +
           ((C63 * C882 - C115 * C820) * C71 +
            (C63 * C888 - C115 * C829) * C61) *
               C62 * C14474) *
              C14369 * C1255 +
          (((C63 * C118 - C115 * C75) * C71 + (C63 * C123 - C115 * C83) * C61) *
               C62 * C14564 +
           ((C115 * C822 - C63 * C884) * C71 +
            (C115 * C833 - C63 * C890) * C61) *
               C62 * C14474) *
              C14369 * C1256 +
          (((C115 * C76 - C63 * C119) * C71 + (C115 * C85 - C63 * C124) * C61) *
               C62 * C14564 +
           ((C63 * C1620 - C115 * C1582) * C71 +
            (C63 * C1621 - C115 * C1584) * C61) *
               C62 * C14474) *
              C14369 * C14593)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C63 * C116 - C115 * C73) * C71 + (C63 * C121 - C115 * C79) * C61) *
               C62 * C5880 +
           ((C115 * C818 - C63 * C880) * C71 +
            (C115 * C825 - C63 * C886) * C61) *
               C62 * C5881 +
           ((C63 * C881 - C115 * C819) * C71 +
            (C63 * C887 - C115 * C827) * C61) *
               C62 * C5882 +
           ((C115 * C5172 - C63 * C5202) * C71 +
            (C115 * C5175 - C63 * C5204) * C61) *
               C62 * C14605) *
              C14369 * C14549 +
          (((C115 * C74 - C63 * C117) * C71 + (C115 * C81 - C63 * C122) * C61) *
               C62 * C5880 +
           ((C63 * C882 - C115 * C820) * C71 +
            (C63 * C888 - C115 * C829) * C61) *
               C62 * C5881 +
           ((C115 * C821 - C63 * C883) * C71 +
            (C115 * C831 - C63 * C889) * C61) *
               C62 * C5882 +
           ((C63 * C5922 - C115 * C5884) * C71 +
            (C63 * C5923 - C115 * C5886) * C61) *
               C62 * C14605) *
              C14369 * C14352)) /
            (p * q * std::sqrt(p + q));
    d2eexz[13] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C62 * C149 - C148 * C73) * C71 +
             (C62 * C154 - C148 * C79) * C61) *
                C63 * C14564 +
            ((C148 * C818 - C62 * C930) * C71 +
             (C148 * C825 - C62 * C936) * C61) *
                C63 * C14474) *
               C2406 +
           (((C148 * C377 - C62 * C489) * C71 +
             (C148 * C384 - C62 * C495) * C61) *
                C63 * C14564 +
            ((C62 * C2038 - C148 * C1920) * C71 +
             (C62 * C2041 - C148 * C1924) * C61) *
                C63 * C14474) *
               C2407 +
           (((C62 * C490 - C148 * C378) * C71 +
             (C62 * C496 - C148 * C386) * C61) *
                C63 * C14564 +
            ((C148 * C2991 - C62 * C3085) * C71 +
             (C148 * C2996 - C62 * C3088) * C61) *
                C63 * C14474) *
               C14589) *
              C14549 +
          ((((C148 * C74 - C62 * C150) * C71 +
             (C148 * C81 - C62 * C155) * C61) *
                C63 * C14564 +
            ((C62 * C932 - C148 * C820) * C71 +
             (C62 * C938 - C148 * C829) * C61) *
                C63 * C14474) *
               C2406 +
           (((C62 * C491 - C148 * C379) * C71 +
             (C62 * C497 - C148 * C388) * C61) *
                C63 * C14564 +
            ((C148 * C1921 - C62 * C2039) * C71 +
             (C148 * C1926 - C62 * C2042) * C61) *
                C63 * C14474) *
               C2407 +
           (((C148 * C380 - C62 * C492) * C71 +
             (C148 * C390 - C62 * C498) * C61) *
                C63 * C14564 +
            ((C62 * C3826 - C148 * C3720) * C71 +
             (C62 * C3827 - C148 * C3722) * C61) *
                C63 * C14474) *
               C14589) *
              C14352)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C62 * C149 - C148 * C73) * C71 + (C62 * C154 - C148 * C79) * C61) *
               C63 * C14564 +
           ((C148 * C818 - C62 * C930) * C71 +
            (C148 * C825 - C62 * C936) * C61) *
               C63 * C14474) *
              C14369 * C1254 +
          (((C148 * C74 - C62 * C150) * C71 + (C148 * C81 - C62 * C155) * C61) *
               C63 * C14564 +
           ((C62 * C932 - C148 * C820) * C71 +
            (C62 * C938 - C148 * C829) * C61) *
               C63 * C14474) *
              C14369 * C1255 +
          (((C62 * C151 - C148 * C75) * C71 + (C62 * C156 - C148 * C83) * C61) *
               C63 * C14564 +
           ((C148 * C822 - C62 * C934) * C71 +
            (C148 * C833 - C62 * C940) * C61) *
               C63 * C14474) *
              C14369 * C1256 +
          (((C148 * C76 - C62 * C152) * C71 + (C148 * C85 - C62 * C157) * C61) *
               C63 * C14564 +
           ((C62 * C1656 - C148 * C1582) * C71 +
            (C62 * C1657 - C148 * C1584) * C61) *
               C63 * C14474) *
              C14369 * C14593)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C62 * C149 - C148 * C73) * C71 + (C62 * C154 - C148 * C79) * C61) *
               C63 * C5880 +
           ((C148 * C818 - C62 * C930) * C71 +
            (C148 * C825 - C62 * C936) * C61) *
               C63 * C5881 +
           ((C62 * C931 - C148 * C819) * C71 +
            (C62 * C937 - C148 * C827) * C61) *
               C63 * C5882 +
           ((C148 * C5172 - C62 * C5228) * C71 +
            (C148 * C5175 - C62 * C5230) * C61) *
               C63 * C14605) *
              C14369 * C14549 +
          (((C148 * C74 - C62 * C150) * C71 + (C148 * C81 - C62 * C155) * C61) *
               C63 * C5880 +
           ((C62 * C932 - C148 * C820) * C71 +
            (C62 * C938 - C148 * C829) * C61) *
               C63 * C5881 +
           ((C148 * C821 - C62 * C933) * C71 +
            (C148 * C831 - C62 * C939) * C61) *
               C63 * C5882 +
           ((C62 * C5958 - C148 * C5884) * C71 +
            (C62 * C5959 - C148 * C5886) * C61) *
               C63 * C14605) *
              C14369 * C14352)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[13] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
                C62 * C14564 +
            ((C71 * C818 - C61 * C824) * C115 +
             (C71 * C980 - C61 * C986) * C63) *
                C62 * C14474) *
               C2406 +
           (((C71 * C377 - C61 * C383) * C115 +
             (C71 * C539 - C61 * C545) * C63) *
                C62 * C14564 +
            ((C61 * C1923 - C71 * C1920) * C115 +
             (C61 * C2097 - C71 * C2094) * C63) *
                C62 * C14474) *
               C2407 +
           (((C61 * C385 - C71 * C378) * C115 +
             (C61 * C546 - C71 * C540) * C63) *
                C62 * C14564 +
            ((C71 * C2991 - C61 * C2995) * C115 +
             (C71 * C3129 - C61 * C3132) * C63) *
                C62 * C14474) *
               C14589) *
              C14549 +
          ((((C71 * C74 - C61 * C80) * C115 + (C71 * C182 - C61 * C187) * C63) *
                C62 * C14564 +
            ((C61 * C828 - C71 * C820) * C115 +
             (C61 * C988 - C71 * C982) * C63) *
                C62 * C14474) *
               C2406 +
           (((C61 * C387 - C71 * C379) * C115 +
             (C61 * C547 - C71 * C541) * C63) *
                C62 * C14564 +
            ((C71 * C1921 - C61 * C1925) * C115 +
             (C71 * C2095 - C61 * C2098) * C63) *
                C62 * C14474) *
               C2407 +
           (((C71 * C380 - C61 * C389) * C115 +
             (C71 * C542 - C61 * C548) * C63) *
                C62 * C14564 +
            ((C61 * C3721 - C71 * C3720) * C115 +
             (C61 * C3879 - C71 * C3878) * C63) *
                C62 * C14474) *
               C14589) *
              C14352)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
               C62 * C14564 +
           ((C71 * C818 - C61 * C824) * C115 +
            (C71 * C980 - C61 * C986) * C63) *
               C62 * C14474) *
              C14369 * C1254 +
          (((C71 * C74 - C61 * C80) * C115 + (C71 * C182 - C61 * C187) * C63) *
               C62 * C14564 +
           ((C61 * C828 - C71 * C820) * C115 +
            (C61 * C988 - C71 * C982) * C63) *
               C62 * C14474) *
              C14369 * C1255 +
          (((C61 * C82 - C71 * C75) * C115 + (C61 * C188 - C71 * C183) * C63) *
               C62 * C14564 +
           ((C71 * C822 - C61 * C832) * C115 +
            (C71 * C984 - C61 * C990) * C63) *
               C62 * C14474) *
              C14369 * C1256 +
          (((C71 * C76 - C61 * C84) * C115 + (C71 * C184 - C61 * C189) * C63) *
               C62 * C14564 +
           ((C61 * C1583 - C71 * C1582) * C115 +
            (C61 * C1693 - C71 * C1692) * C63) *
               C62 * C14474) *
              C14369 * C14593)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
               C62 * C5880 +
           ((C71 * C818 - C61 * C824) * C115 +
            (C71 * C980 - C61 * C986) * C63) *
               C62 * C5881 +
           ((C61 * C826 - C71 * C819) * C115 +
            (C61 * C987 - C71 * C981) * C63) *
               C62 * C5882 +
           ((C71 * C5172 - C61 * C5174) * C115 +
            (C71 * C5254 - C61 * C5256) * C63) *
               C62 * C14605) *
              C14369 * C14549 +
          (((C71 * C74 - C61 * C80) * C115 + (C71 * C182 - C61 * C187) * C63) *
               C62 * C5880 +
           ((C61 * C828 - C71 * C820) * C115 +
            (C61 * C988 - C71 * C982) * C63) *
               C62 * C5881 +
           ((C71 * C821 - C61 * C830) * C115 +
            (C71 * C983 - C61 * C989) * C63) *
               C62 * C5882 +
           ((C61 * C5885 - C71 * C5884) * C115 +
            (C61 * C5995 - C71 * C5994) * C63) *
               C62 * C14605) *
              C14369 * C14352)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[13] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) * C61 * C62 *
                C14564 -
            (C115 * C880 - C213 * C818 - C115 * C980 + C63 * C1030) * C61 *
                C62 * C14474) *
               C2406 +
           ((C115 * C1982 - C213 * C1920 - C115 * C2094 + C63 * C2150) * C61 *
                C62 * C14474 -
            (C115 * C439 - C213 * C377 - C115 * C539 + C63 * C589) * C61 * C62 *
                C14564) *
               C2407 +
           ((C115 * C440 - C213 * C378 - C115 * C540 + C63 * C590) * C61 * C62 *
                C14564 -
            (C115 * C3041 - C213 * C2991 - C115 * C3129 + C63 * C3173) * C61 *
                C62 * C14474) *
               C14589) *
              C14549 +
          (((C115 * C882 - C213 * C820 - C115 * C982 + C63 * C1032) * C61 *
                C62 * C14474 -
            (C115 * C117 - C213 * C74 - C115 * C182 + C63 * C215) * C61 * C62 *
                C14564) *
               C2406 +
           ((C115 * C441 - C213 * C379 - C115 * C541 + C63 * C591) * C61 * C62 *
                C14564 -
            (C115 * C1983 - C213 * C1921 - C115 * C2095 + C63 * C2151) * C61 *
                C62 * C14474) *
               C2407 +
           ((C115 * C3774 - C213 * C3720 - C115 * C3878 + C63 * C3930) * C61 *
                C62 * C14474 -
            (C115 * C442 - C213 * C380 - C115 * C542 + C63 * C592) * C61 * C62 *
                C14564) *
               C14589) *
              C14352)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) * C61 * C62 *
               C14564 -
           (C115 * C880 - C213 * C818 - C115 * C980 + C63 * C1030) * C61 * C62 *
               C14474) *
              C14369 * C1254 +
          ((C115 * C882 - C213 * C820 - C115 * C982 + C63 * C1032) * C61 * C62 *
               C14474 -
           (C115 * C117 - C213 * C74 - C115 * C182 + C63 * C215) * C61 * C62 *
               C14564) *
              C14369 * C1255 +
          ((C115 * C118 - C213 * C75 - C115 * C183 + C63 * C216) * C61 * C62 *
               C14564 -
           (C115 * C884 - C213 * C822 - C115 * C984 + C63 * C1034) * C61 * C62 *
               C14474) *
              C14369 * C1256 +
          ((C115 * C1620 - C213 * C1582 - C115 * C1692 + C63 * C1728) * C61 *
               C62 * C14474 -
           (C115 * C119 - C213 * C76 - C115 * C184 + C63 * C217) * C61 * C62 *
               C14564) *
              C14369 * C14593)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) * C61 * C62 *
               C5880 -
           (C115 * C880 - C213 * C818 - C115 * C980 + C63 * C1030) * C61 * C62 *
               C5881 +
           (C115 * C881 - C213 * C819 - C115 * C981 + C63 * C1031) * C61 * C62 *
               C5882 -
           (C115 * C5202 - C213 * C5172 - C115 * C5254 + C63 * C5280) * C61 *
               C62 * C14605) *
              C14369 * C14549 +
          ((C115 * C882 - C213 * C820 - C115 * C982 + C63 * C1032) * C61 * C62 *
               C5881 -
           (C115 * C117 - C213 * C74 - C115 * C182 + C63 * C215) * C61 * C62 *
               C5880 -
           (C115 * C883 - C213 * C821 - C115 * C983 + C63 * C1033) * C61 * C62 *
               C5882 +
           (C115 * C5922 - C213 * C5884 - C115 * C5994 + C63 * C6030) * C61 *
               C62 * C14605) *
              C14369 * C14352)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[13] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C62 * C149 - C148 * C73) * C115 +
                       (C62 * C241 - C148 * C181) * C63) *
                          C61 * C14564 +
                      ((C148 * C818 - C62 * C930) * C115 +
                       (C148 * C980 - C62 * C1074) * C63) *
                          C61 * C14474) *
                         C2406 +
                     (((C148 * C377 - C62 * C489) * C115 +
                       (C148 * C539 - C62 * C633) * C63) *
                          C61 * C14564 +
                      ((C62 * C2038 - C148 * C1920) * C115 +
                       (C62 * C2203 - C148 * C2094) * C63) *
                          C61 * C14474) *
                         C2407 +
                     (((C62 * C490 - C148 * C378) * C115 +
                       (C62 * C634 - C148 * C540) * C63) *
                          C61 * C14564 +
                      ((C148 * C2991 - C62 * C3085) * C115 +
                       (C148 * C3129 - C62 * C3214) * C63) *
                          C61 * C14474) *
                         C14589) *
                        C14549 +
                    ((((C148 * C74 - C62 * C150) * C115 +
                       (C148 * C182 - C62 * C242) * C63) *
                          C61 * C14564 +
                      ((C62 * C932 - C148 * C820) * C115 +
                       (C62 * C1076 - C148 * C982) * C63) *
                          C61 * C14474) *
                         C2406 +
                     (((C62 * C491 - C148 * C379) * C115 +
                       (C62 * C635 - C148 * C541) * C63) *
                          C61 * C14564 +
                      ((C148 * C1921 - C62 * C2039) * C115 +
                       (C148 * C2095 - C62 * C2204) * C63) *
                          C61 * C14474) *
                         C2407 +
                     (((C148 * C380 - C62 * C492) * C115 +
                       (C148 * C542 - C62 * C636) * C63) *
                          C61 * C14564 +
                      ((C62 * C3826 - C148 * C3720) * C115 +
                       (C62 * C3981 - C148 * C3878) * C63) *
                          C61 * C14474) *
                         C14589) *
                        C14352)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C62 * C149 - C148 * C73) * C115 +
                      (C62 * C241 - C148 * C181) * C63) *
                         C61 * C14564 +
                     ((C148 * C818 - C62 * C930) * C115 +
                      (C148 * C980 - C62 * C1074) * C63) *
                         C61 * C14474) *
                        C14369 * C1254 +
                    (((C148 * C74 - C62 * C150) * C115 +
                      (C148 * C182 - C62 * C242) * C63) *
                         C61 * C14564 +
                     ((C62 * C932 - C148 * C820) * C115 +
                      (C62 * C1076 - C148 * C982) * C63) *
                         C61 * C14474) *
                        C14369 * C1255 +
                    (((C62 * C151 - C148 * C75) * C115 +
                      (C62 * C243 - C148 * C183) * C63) *
                         C61 * C14564 +
                     ((C148 * C822 - C62 * C934) * C115 +
                      (C148 * C984 - C62 * C1078) * C63) *
                         C61 * C14474) *
                        C14369 * C1256 +
                    (((C148 * C76 - C62 * C152) * C115 +
                      (C148 * C184 - C62 * C244) * C63) *
                         C61 * C14564 +
                     ((C62 * C1656 - C148 * C1582) * C115 +
                      (C62 * C1763 - C148 * C1692) * C63) *
                         C61 * C14474) *
                        C14369 * C14593)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C62 * C149 - C148 * C73) * C115 +
                      (C62 * C241 - C148 * C181) * C63) *
                         C61 * C5880 +
                     ((C148 * C818 - C62 * C930) * C115 +
                      (C148 * C980 - C62 * C1074) * C63) *
                         C61 * C5881 +
                     ((C62 * C931 - C148 * C819) * C115 +
                      (C62 * C1075 - C148 * C981) * C63) *
                         C61 * C5882 +
                     ((C148 * C5172 - C62 * C5228) * C115 +
                      (C148 * C5254 - C62 * C5304) * C63) *
                         C61 * C14605) *
                        C14369 * C14549 +
                    (((C148 * C74 - C62 * C150) * C115 +
                      (C148 * C182 - C62 * C242) * C63) *
                         C61 * C5880 +
                     ((C62 * C932 - C148 * C820) * C115 +
                      (C62 * C1076 - C148 * C982) * C63) *
                         C61 * C5881 +
                     ((C148 * C821 - C62 * C933) * C115 +
                      (C148 * C983 - C62 * C1077) * C63) *
                         C61 * C5882 +
                     ((C62 * C5958 - C148 * C5884) * C115 +
                      (C62 * C6065 - C148 * C5994) * C63) *
                         C61 * C14605) *
                        C14369 * C14352)) /
                      (p * q * std::sqrt(p + q));
    d2eezx[13] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
                C63 * C14564 +
            ((C71 * C818 - C61 * C824) * C148 +
             (C71 * C1118 - C61 * C1124) * C62) *
                C63 * C14474) *
               C2406 +
           (((C71 * C377 - C61 * C383) * C148 +
             (C71 * C677 - C61 * C683) * C62) *
                C63 * C14564 +
            ((C61 * C1923 - C71 * C1920) * C148 +
             (C61 * C2259 - C71 * C2256) * C62) *
                C63 * C14474) *
               C2407 +
           (((C61 * C385 - C71 * C378) * C148 +
             (C61 * C684 - C71 * C678) * C62) *
                C63 * C14564 +
            ((C71 * C2991 - C61 * C2995) * C148 +
             (C71 * C3255 - C61 * C3258) * C62) *
                C63 * C14474) *
               C14589) *
              C14549 +
          ((((C71 * C74 - C61 * C80) * C148 + (C71 * C269 - C61 * C274) * C62) *
                C63 * C14564 +
            ((C61 * C828 - C71 * C820) * C148 +
             (C61 * C1126 - C71 * C1120) * C62) *
                C63 * C14474) *
               C2406 +
           (((C61 * C387 - C71 * C379) * C148 +
             (C61 * C685 - C71 * C679) * C62) *
                C63 * C14564 +
            ((C71 * C1921 - C61 * C1925) * C148 +
             (C71 * C2257 - C61 * C2260) * C62) *
                C63 * C14474) *
               C2407 +
           (((C71 * C380 - C61 * C389) * C148 +
             (C71 * C680 - C61 * C686) * C62) *
                C63 * C14564 +
            ((C61 * C3721 - C71 * C3720) * C148 +
             (C61 * C4033 - C71 * C4032) * C62) *
                C63 * C14474) *
               C14589) *
              C14352)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
               C63 * C14564 +
           ((C71 * C818 - C61 * C824) * C148 +
            (C71 * C1118 - C61 * C1124) * C62) *
               C63 * C14474) *
              C14369 * C1254 +
          (((C71 * C74 - C61 * C80) * C148 + (C71 * C269 - C61 * C274) * C62) *
               C63 * C14564 +
           ((C61 * C828 - C71 * C820) * C148 +
            (C61 * C1126 - C71 * C1120) * C62) *
               C63 * C14474) *
              C14369 * C1255 +
          (((C61 * C82 - C71 * C75) * C148 + (C61 * C275 - C71 * C270) * C62) *
               C63 * C14564 +
           ((C71 * C822 - C61 * C832) * C148 +
            (C71 * C1122 - C61 * C1128) * C62) *
               C63 * C14474) *
              C14369 * C1256 +
          (((C71 * C76 - C61 * C84) * C148 + (C71 * C271 - C61 * C276) * C62) *
               C63 * C14564 +
           ((C61 * C1583 - C71 * C1582) * C148 +
            (C61 * C1799 - C71 * C1798) * C62) *
               C63 * C14474) *
              C14369 * C14593)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
               C63 * C5880 +
           ((C71 * C818 - C61 * C824) * C148 +
            (C71 * C1118 - C61 * C1124) * C62) *
               C63 * C5881 +
           ((C61 * C826 - C71 * C819) * C148 +
            (C61 * C1125 - C71 * C1119) * C62) *
               C63 * C5882 +
           ((C71 * C5172 - C61 * C5174) * C148 +
            (C71 * C5328 - C61 * C5330) * C62) *
               C63 * C14605) *
              C14369 * C14549 +
          (((C71 * C74 - C61 * C80) * C148 + (C71 * C269 - C61 * C274) * C62) *
               C63 * C5880 +
           ((C61 * C828 - C71 * C820) * C148 +
            (C61 * C1126 - C71 * C1120) * C62) *
               C63 * C5881 +
           ((C71 * C821 - C61 * C830) * C148 +
            (C71 * C1121 - C61 * C1127) * C62) *
               C63 * C5882 +
           ((C61 * C5885 - C71 * C5884) * C148 +
            (C61 * C6101 - C71 * C6100) * C62) *
               C63 * C14605) *
              C14369 * C14352)) /
            (p * q * std::sqrt(p + q));
    d2eezy[13] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C63 * C116 - C115 * C73) * C148 +
                       (C63 * C300 - C115 * C268) * C62) *
                          C61 * C14564 +
                      ((C115 * C818 - C63 * C880) * C148 +
                       (C115 * C1118 - C63 * C1168) * C62) *
                          C61 * C14474) *
                         C2406 +
                     (((C115 * C377 - C63 * C439) * C148 +
                       (C115 * C677 - C63 * C727) * C62) *
                          C61 * C14564 +
                      ((C63 * C1982 - C115 * C1920) * C148 +
                       (C63 * C2312 - C115 * C2256) * C62) *
                          C61 * C14474) *
                         C2407 +
                     (((C63 * C440 - C115 * C378) * C148 +
                       (C63 * C728 - C115 * C678) * C62) *
                          C61 * C14564 +
                      ((C115 * C2991 - C63 * C3041) * C148 +
                       (C115 * C3255 - C63 * C3299) * C62) *
                          C61 * C14474) *
                         C14589) *
                        C14549 +
                    ((((C115 * C74 - C63 * C117) * C148 +
                       (C115 * C269 - C63 * C301) * C62) *
                          C61 * C14564 +
                      ((C63 * C882 - C115 * C820) * C148 +
                       (C63 * C1170 - C115 * C1120) * C62) *
                          C61 * C14474) *
                         C2406 +
                     (((C63 * C441 - C115 * C379) * C148 +
                       (C63 * C729 - C115 * C679) * C62) *
                          C61 * C14564 +
                      ((C115 * C1921 - C63 * C1983) * C148 +
                       (C115 * C2257 - C63 * C2313) * C62) *
                          C61 * C14474) *
                         C2407 +
                     (((C115 * C380 - C63 * C442) * C148 +
                       (C115 * C680 - C63 * C730) * C62) *
                          C61 * C14564 +
                      ((C63 * C3774 - C115 * C3720) * C148 +
                       (C63 * C4084 - C115 * C4032) * C62) *
                          C61 * C14474) *
                         C14589) *
                        C14352)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C63 * C116 - C115 * C73) * C148 +
                      (C63 * C300 - C115 * C268) * C62) *
                         C61 * C14564 +
                     ((C115 * C818 - C63 * C880) * C148 +
                      (C115 * C1118 - C63 * C1168) * C62) *
                         C61 * C14474) *
                        C14369 * C1254 +
                    (((C115 * C74 - C63 * C117) * C148 +
                      (C115 * C269 - C63 * C301) * C62) *
                         C61 * C14564 +
                     ((C63 * C882 - C115 * C820) * C148 +
                      (C63 * C1170 - C115 * C1120) * C62) *
                         C61 * C14474) *
                        C14369 * C1255 +
                    (((C63 * C118 - C115 * C75) * C148 +
                      (C63 * C302 - C115 * C270) * C62) *
                         C61 * C14564 +
                     ((C115 * C822 - C63 * C884) * C148 +
                      (C115 * C1122 - C63 * C1172) * C62) *
                         C61 * C14474) *
                        C14369 * C1256 +
                    (((C115 * C76 - C63 * C119) * C148 +
                      (C115 * C271 - C63 * C303) * C62) *
                         C61 * C14564 +
                     ((C63 * C1620 - C115 * C1582) * C148 +
                      (C63 * C1834 - C115 * C1798) * C62) *
                         C61 * C14474) *
                        C14369 * C14593)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C63 * C116 - C115 * C73) * C148 +
                      (C63 * C300 - C115 * C268) * C62) *
                         C61 * C5880 +
                     ((C115 * C818 - C63 * C880) * C148 +
                      (C115 * C1118 - C63 * C1168) * C62) *
                         C61 * C5881 +
                     ((C63 * C881 - C115 * C819) * C148 +
                      (C63 * C1169 - C115 * C1119) * C62) *
                         C61 * C5882 +
                     ((C115 * C5172 - C63 * C5202) * C148 +
                      (C115 * C5328 - C63 * C5354) * C62) *
                         C61 * C14605) *
                        C14369 * C14549 +
                    (((C115 * C74 - C63 * C117) * C148 +
                      (C115 * C269 - C63 * C301) * C62) *
                         C61 * C5880 +
                     ((C63 * C882 - C115 * C820) * C148 +
                      (C63 * C1170 - C115 * C1120) * C62) *
                         C61 * C5881 +
                     ((C115 * C821 - C63 * C883) * C148 +
                      (C115 * C1121 - C63 * C1171) * C62) *
                         C61 * C5882 +
                     ((C63 * C5922 - C115 * C5884) * C148 +
                      (C63 * C6136 - C115 * C6100) * C62) *
                         C61 * C14605) *
                        C14369 * C14352)) /
                      (p * q * std::sqrt(p + q));
    d2eezz[13] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) * C63 * C61 *
                C14564 -
            (C148 * C930 - C327 * C818 - C148 * C1118 + C62 * C1212) * C63 *
                C61 * C14474) *
               C2406 +
           ((C148 * C2038 - C327 * C1920 - C148 * C2256 + C62 * C2365) * C63 *
                C61 * C14474 -
            (C148 * C489 - C327 * C377 - C148 * C677 + C62 * C771) * C63 * C61 *
                C14564) *
               C2407 +
           ((C148 * C490 - C327 * C378 - C148 * C678 + C62 * C772) * C63 * C61 *
                C14564 -
            (C148 * C3085 - C327 * C2991 - C148 * C3255 + C62 * C3340) * C63 *
                C61 * C14474) *
               C14589) *
              C14549 +
          (((C148 * C932 - C327 * C820 - C148 * C1120 + C62 * C1214) * C63 *
                C61 * C14474 -
            (C148 * C150 - C327 * C74 - C148 * C269 + C62 * C329) * C63 * C61 *
                C14564) *
               C2406 +
           ((C148 * C491 - C327 * C379 - C148 * C679 + C62 * C773) * C63 * C61 *
                C14564 -
            (C148 * C2039 - C327 * C1921 - C148 * C2257 + C62 * C2366) * C63 *
                C61 * C14474) *
               C2407 +
           ((C148 * C3826 - C327 * C3720 - C148 * C4032 + C62 * C4135) * C63 *
                C61 * C14474 -
            (C148 * C492 - C327 * C380 - C148 * C680 + C62 * C774) * C63 * C61 *
                C14564) *
               C14589) *
              C14352)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) * C63 * C61 *
               C14564 -
           (C148 * C930 - C327 * C818 - C148 * C1118 + C62 * C1212) * C63 *
               C61 * C14474) *
              C14369 * C1254 +
          ((C148 * C932 - C327 * C820 - C148 * C1120 + C62 * C1214) * C63 *
               C61 * C14474 -
           (C148 * C150 - C327 * C74 - C148 * C269 + C62 * C329) * C63 * C61 *
               C14564) *
              C14369 * C1255 +
          ((C148 * C151 - C327 * C75 - C148 * C270 + C62 * C330) * C63 * C61 *
               C14564 -
           (C148 * C934 - C327 * C822 - C148 * C1122 + C62 * C1216) * C63 *
               C61 * C14474) *
              C14369 * C1256 +
          ((C148 * C1656 - C327 * C1582 - C148 * C1798 + C62 * C1869) * C63 *
               C61 * C14474 -
           (C148 * C152 - C327 * C76 - C148 * C271 + C62 * C331) * C63 * C61 *
               C14564) *
              C14369 * C14593)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) * C63 * C61 *
               C5880 -
           (C148 * C930 - C327 * C818 - C148 * C1118 + C62 * C1212) * C63 *
               C61 * C5881 +
           (C148 * C931 - C327 * C819 - C148 * C1119 + C62 * C1213) * C63 *
               C61 * C5882 -
           (C148 * C5228 - C327 * C5172 - C148 * C5328 + C62 * C5378) * C63 *
               C61 * C14605) *
              C14369 * C14549 +
          ((C148 * C932 - C327 * C820 - C148 * C1120 + C62 * C1214) * C63 *
               C61 * C5881 -
           (C148 * C150 - C327 * C74 - C148 * C269 + C62 * C329) * C63 * C61 *
               C5880 -
           (C148 * C933 - C327 * C821 - C148 * C1121 + C62 * C1215) * C63 *
               C61 * C5882 +
           (C148 * C5958 - C327 * C5884 - C148 * C6100 + C62 * C6171) * C63 *
               C61 * C14605) *
              C14369 * C14352)) /
            (p * q * std::sqrt(p + q));
    d2eexx[14] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 * C63 *
               C14387 * C14624 -
           (C71 * C383 - C72 * C377 - C71 * C384 + C61 * C395) * C62 * C63 *
               C14387 * C14612 +
           (C71 * C385 - C72 * C378 - C71 * C386 + C61 * C396) * C62 * C63 *
               C14387 * C14589) *
              C374 +
          ((C71 * C387 - C72 * C379 - C71 * C388 + C61 * C397) * C62 * C63 *
               C14387 * C14612 -
           (C71 * C80 - C72 * C74 - C71 * C81 + C61 * C89) * C62 * C63 *
               C14387 * C14624 -
           (C71 * C389 - C72 * C380 - C71 * C390 + C61 * C398) * C62 * C63 *
               C14387 * C14589) *
              C375 +
          ((C71 * C82 - C72 * C75 - C71 * C83 + C61 * C90) * C62 * C63 *
               C14387 * C14624 -
           (C71 * C391 - C72 * C381 - C71 * C392 + C61 * C399) * C62 * C63 *
               C14387 * C14612 +
           (C71 * C393 - C72 * C382 - C71 * C394 + C61 * C400) * C62 * C63 *
               C14387 * C14589) *
              C14583)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 * C63 * C14387 *
              C14369 * C66 -
          (C71 * C80 - C72 * C74 - C71 * C81 + C61 * C89) * C62 * C63 * C14387 *
              C14369 * C67 +
          (C71 * C82 - C72 * C75 - C71 * C83 + C61 * C90) * C62 * C63 * C14387 *
              C14369 * C68 -
          (C71 * C84 - C72 * C76 - C71 * C85 + C61 * C91) * C62 * C63 * C14387 *
              C14369 * C69 +
          (C71 * C86 - C72 * C77 - C71 * C87 + C61 * C92) * C62 * C63 * C14387 *
              C14369 * C70)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 * C63 *
               C14387 * C2406 -
           (C71 * C383 - C72 * C377 - C71 * C384 + C61 * C395) * C62 * C63 *
               C14387 * C2407 +
           (C71 * C385 - C72 * C378 - C71 * C386 + C61 * C396) * C62 * C63 *
               C14387 * C14589) *
              C14621 +
          ((C71 * C387 - C72 * C379 - C71 * C388 + C61 * C397) * C62 * C63 *
               C14387 * C2407 -
           (C71 * C80 - C72 * C74 - C71 * C81 + C61 * C89) * C62 * C63 *
               C14387 * C2406 -
           (C71 * C389 - C72 * C380 - C71 * C390 + C61 * C398) * C62 * C63 *
               C14387 * C14589) *
              C14608 +
          ((C71 * C82 - C72 * C75 - C71 * C83 + C61 * C90) * C62 * C63 *
               C14387 * C2406 -
           (C71 * C391 - C72 * C381 - C71 * C392 + C61 * C399) * C62 * C63 *
               C14387 * C2407 +
           (C71 * C393 - C72 * C382 - C71 * C394 + C61 * C400) * C62 * C63 *
               C14387 * C14589) *
              C14583)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 * C63 * C14387 *
              C2738 -
          (C71 * C383 - C72 * C377 - C71 * C384 + C61 * C395) * C62 * C63 *
              C14387 * C2739 +
          (C71 * C385 - C72 * C378 - C71 * C386 + C61 * C396) * C62 * C63 *
              C14387 * C2740 -
          (C71 * C2746 - C72 * C2744 - C71 * C2747 + C61 * C2750) * C62 * C63 *
              C14387 * C2741 +
          (C71 * C2748 - C72 * C2745 - C71 * C2749 + C61 * C2751) * C62 * C63 *
              C14387 * C2742) *
         C14341) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 * C63 * C4496 -
           (C71 * C824 - C72 * C818 - C71 * C825 + C61 * C836) * C62 * C63 *
               C4497 +
           (C71 * C826 - C72 * C819 - C71 * C827 + C61 * C837) * C62 * C63 *
               C14592) *
              C14369 * C14621 +
          ((C71 * C828 - C72 * C820 - C71 * C829 + C61 * C838) * C62 * C63 *
               C4497 -
           (C71 * C80 - C72 * C74 - C71 * C81 + C61 * C89) * C62 * C63 * C4496 -
           (C71 * C830 - C72 * C821 - C71 * C831 + C61 * C839) * C62 * C63 *
               C14592) *
              C14369 * C14608 +
          ((C71 * C82 - C72 * C75 - C71 * C83 + C61 * C90) * C62 * C63 * C4496 -
           (C71 * C832 - C72 * C822 - C71 * C833 + C61 * C840) * C62 * C63 *
               C4497 +
           (C71 * C834 - C72 * C823 - C71 * C835 + C61 * C841) * C62 * C63 *
               C14592) *
              C14369 * C14583)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 * C63 * C4496 -
           (C71 * C824 - C72 * C818 - C71 * C825 + C61 * C836) * C62 * C63 *
               C4497 +
           (C71 * C826 - C72 * C819 - C71 * C827 + C61 * C837) * C62 * C63 *
               C14592) *
              C14624 +
          ((C71 * C1923 - C72 * C1920 - C71 * C1924 + C61 * C1929) * C62 * C63 *
               C4497 -
           (C71 * C383 - C72 * C377 - C71 * C384 + C61 * C395) * C62 * C63 *
               C4496 -
           (C71 * C2993 - C72 * C2990 - C71 * C2994 + C61 * C2999) * C62 * C63 *
               C14592) *
              C14612 +
          ((C71 * C385 - C72 * C378 - C71 * C386 + C61 * C396) * C62 * C63 *
               C4496 -
           (C71 * C2995 - C72 * C2991 - C71 * C2996 + C61 * C3000) * C62 * C63 *
               C4497 +
           (C71 * C2997 - C72 * C2992 - C71 * C2998 + C61 * C3001) * C62 * C63 *
               C14592) *
              C14589) *
         C14341) /
            (p * q * std::sqrt(p + q));
    d2eexy[14] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C63 * C116 - C115 * C73) * C71 + (C63 * C121 - C115 * C79) * C61) *
               C62 * C14387 * C14624 +
           ((C115 * C377 - C63 * C439) * C71 +
            (C115 * C384 - C63 * C445) * C61) *
               C62 * C14387 * C14612 +
           ((C63 * C440 - C115 * C378) * C71 +
            (C63 * C446 - C115 * C386) * C61) *
               C62 * C14387 * C14589) *
              C374 +
          (((C115 * C74 - C63 * C117) * C71 + (C115 * C81 - C63 * C122) * C61) *
               C62 * C14387 * C14624 +
           ((C63 * C441 - C115 * C379) * C71 +
            (C63 * C447 - C115 * C388) * C61) *
               C62 * C14387 * C14612 +
           ((C115 * C380 - C63 * C442) * C71 +
            (C115 * C390 - C63 * C448) * C61) *
               C62 * C14387 * C14589) *
              C375 +
          (((C63 * C118 - C115 * C75) * C71 + (C63 * C123 - C115 * C83) * C61) *
               C62 * C14387 * C14624 +
           ((C115 * C381 - C63 * C443) * C71 +
            (C115 * C392 - C63 * C449) * C61) *
               C62 * C14387 * C14612 +
           ((C63 * C444 - C115 * C382) * C71 +
            (C63 * C450 - C115 * C394) * C61) *
               C62 * C14387 * C14589) *
              C14583)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C63 * C116 - C115 * C73) * C71 + (C63 * C121 - C115 * C79) * C61) *
              C62 * C14387 * C14369 * C66 +
          ((C115 * C74 - C63 * C117) * C71 + (C115 * C81 - C63 * C122) * C61) *
              C62 * C14387 * C14369 * C67 +
          ((C63 * C118 - C115 * C75) * C71 + (C63 * C123 - C115 * C83) * C61) *
              C62 * C14387 * C14369 * C68 +
          ((C115 * C76 - C63 * C119) * C71 + (C115 * C85 - C63 * C124) * C61) *
              C62 * C14387 * C14369 * C69 +
          ((C63 * C120 - C115 * C77) * C71 + (C63 * C125 - C115 * C87) * C61) *
              C62 * C14387 * C14369 * C70)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C63 * C116 - C115 * C73) * C71 + (C63 * C121 - C115 * C79) * C61) *
               C62 * C14387 * C2406 +
           ((C115 * C377 - C63 * C439) * C71 +
            (C115 * C384 - C63 * C445) * C61) *
               C62 * C14387 * C2407 +
           ((C63 * C440 - C115 * C378) * C71 +
            (C63 * C446 - C115 * C386) * C61) *
               C62 * C14387 * C14589) *
              C14621 +
          (((C115 * C74 - C63 * C117) * C71 + (C115 * C81 - C63 * C122) * C61) *
               C62 * C14387 * C2406 +
           ((C63 * C441 - C115 * C379) * C71 +
            (C63 * C447 - C115 * C388) * C61) *
               C62 * C14387 * C2407 +
           ((C115 * C380 - C63 * C442) * C71 +
            (C115 * C390 - C63 * C448) * C61) *
               C62 * C14387 * C14589) *
              C14608 +
          (((C63 * C118 - C115 * C75) * C71 + (C63 * C123 - C115 * C83) * C61) *
               C62 * C14387 * C2406 +
           ((C115 * C381 - C63 * C443) * C71 +
            (C115 * C392 - C63 * C449) * C61) *
               C62 * C14387 * C2407 +
           ((C63 * C444 - C115 * C382) * C71 +
            (C63 * C450 - C115 * C394) * C61) *
               C62 * C14387 * C14589) *
              C14583)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C63 * C116 - C115 * C73) * C71 + (C63 * C121 - C115 * C79) * C61) *
              C62 * C14387 * C2738 +
          ((C115 * C377 - C63 * C439) * C71 +
           (C115 * C384 - C63 * C445) * C61) *
              C62 * C14387 * C2739 +
          ((C63 * C440 - C115 * C378) * C71 +
           (C63 * C446 - C115 * C386) * C61) *
              C62 * C14387 * C2740 +
          ((C115 * C2744 - C63 * C2774) * C71 +
           (C115 * C2747 - C63 * C2776) * C61) *
              C62 * C14387 * C2741 +
          ((C63 * C2775 - C115 * C2745) * C71 +
           (C63 * C2777 - C115 * C2749) * C61) *
              C62 * C14387 * C2742) *
         C14341) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C63 * C116 - C115 * C73) * C71 + (C63 * C121 - C115 * C79) * C61) *
               C62 * C4496 +
           ((C115 * C818 - C63 * C880) * C71 +
            (C115 * C825 - C63 * C886) * C61) *
               C62 * C4497 +
           ((C63 * C881 - C115 * C819) * C71 +
            (C63 * C887 - C115 * C827) * C61) *
               C62 * C14592) *
              C14369 * C14621 +
          (((C115 * C74 - C63 * C117) * C71 + (C115 * C81 - C63 * C122) * C61) *
               C62 * C4496 +
           ((C63 * C882 - C115 * C820) * C71 +
            (C63 * C888 - C115 * C829) * C61) *
               C62 * C4497 +
           ((C115 * C821 - C63 * C883) * C71 +
            (C115 * C831 - C63 * C889) * C61) *
               C62 * C14592) *
              C14369 * C14608 +
          (((C63 * C118 - C115 * C75) * C71 + (C63 * C123 - C115 * C83) * C61) *
               C62 * C4496 +
           ((C115 * C822 - C63 * C884) * C71 +
            (C115 * C833 - C63 * C890) * C61) *
               C62 * C4497 +
           ((C63 * C885 - C115 * C823) * C71 +
            (C63 * C891 - C115 * C835) * C61) *
               C62 * C14592) *
              C14369 * C14583)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C63 * C116 - C115 * C73) * C71 + (C63 * C121 - C115 * C79) * C61) *
               C62 * C4496 +
           ((C115 * C818 - C63 * C880) * C71 +
            (C115 * C825 - C63 * C886) * C61) *
               C62 * C4497 +
           ((C63 * C881 - C115 * C819) * C71 +
            (C63 * C887 - C115 * C827) * C61) *
               C62 * C14592) *
              C14624 +
          (((C115 * C377 - C63 * C439) * C71 +
            (C115 * C384 - C63 * C445) * C61) *
               C62 * C4496 +
           ((C63 * C1982 - C115 * C1920) * C71 +
            (C63 * C1985 - C115 * C1924) * C61) *
               C62 * C4497 +
           ((C115 * C2990 - C63 * C3040) * C71 +
            (C115 * C2994 - C63 * C3043) * C61) *
               C62 * C14592) *
              C14612 +
          (((C63 * C440 - C115 * C378) * C71 +
            (C63 * C446 - C115 * C386) * C61) *
               C62 * C4496 +
           ((C115 * C2991 - C63 * C3041) * C71 +
            (C115 * C2996 - C63 * C3044) * C61) *
               C62 * C4497 +
           ((C63 * C3042 - C115 * C2992) * C71 +
            (C63 * C3045 - C115 * C2998) * C61) *
               C62 * C14592) *
              C14589) *
         C14341) /
            (p * q * std::sqrt(p + q));
    d2eexz[14] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C62 * C149 - C148 * C73) * C71 + (C62 * C154 - C148 * C79) * C61) *
               C63 * C14387 * C14624 +
           ((C148 * C377 - C62 * C489) * C71 +
            (C148 * C384 - C62 * C495) * C61) *
               C63 * C14387 * C14612 +
           ((C62 * C490 - C148 * C378) * C71 +
            (C62 * C496 - C148 * C386) * C61) *
               C63 * C14387 * C14589) *
              C374 +
          (((C148 * C74 - C62 * C150) * C71 + (C148 * C81 - C62 * C155) * C61) *
               C63 * C14387 * C14624 +
           ((C62 * C491 - C148 * C379) * C71 +
            (C62 * C497 - C148 * C388) * C61) *
               C63 * C14387 * C14612 +
           ((C148 * C380 - C62 * C492) * C71 +
            (C148 * C390 - C62 * C498) * C61) *
               C63 * C14387 * C14589) *
              C375 +
          (((C62 * C151 - C148 * C75) * C71 + (C62 * C156 - C148 * C83) * C61) *
               C63 * C14387 * C14624 +
           ((C148 * C381 - C62 * C493) * C71 +
            (C148 * C392 - C62 * C499) * C61) *
               C63 * C14387 * C14612 +
           ((C62 * C494 - C148 * C382) * C71 +
            (C62 * C500 - C148 * C394) * C61) *
               C63 * C14387 * C14589) *
              C14583)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C62 * C149 - C148 * C73) * C71 + (C62 * C154 - C148 * C79) * C61) *
              C63 * C14387 * C14369 * C66 +
          ((C148 * C74 - C62 * C150) * C71 + (C148 * C81 - C62 * C155) * C61) *
              C63 * C14387 * C14369 * C67 +
          ((C62 * C151 - C148 * C75) * C71 + (C62 * C156 - C148 * C83) * C61) *
              C63 * C14387 * C14369 * C68 +
          ((C148 * C76 - C62 * C152) * C71 + (C148 * C85 - C62 * C157) * C61) *
              C63 * C14387 * C14369 * C69 +
          ((C62 * C153 - C148 * C77) * C71 + (C62 * C158 - C148 * C87) * C61) *
              C63 * C14387 * C14369 * C70)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C62 * C149 - C148 * C73) * C71 + (C62 * C154 - C148 * C79) * C61) *
               C63 * C14387 * C2406 +
           ((C148 * C377 - C62 * C489) * C71 +
            (C148 * C384 - C62 * C495) * C61) *
               C63 * C14387 * C2407 +
           ((C62 * C490 - C148 * C378) * C71 +
            (C62 * C496 - C148 * C386) * C61) *
               C63 * C14387 * C14589) *
              C14621 +
          (((C148 * C74 - C62 * C150) * C71 + (C148 * C81 - C62 * C155) * C61) *
               C63 * C14387 * C2406 +
           ((C62 * C491 - C148 * C379) * C71 +
            (C62 * C497 - C148 * C388) * C61) *
               C63 * C14387 * C2407 +
           ((C148 * C380 - C62 * C492) * C71 +
            (C148 * C390 - C62 * C498) * C61) *
               C63 * C14387 * C14589) *
              C14608 +
          (((C62 * C151 - C148 * C75) * C71 + (C62 * C156 - C148 * C83) * C61) *
               C63 * C14387 * C2406 +
           ((C148 * C381 - C62 * C493) * C71 +
            (C148 * C392 - C62 * C499) * C61) *
               C63 * C14387 * C2407 +
           ((C62 * C494 - C148 * C382) * C71 +
            (C62 * C500 - C148 * C394) * C61) *
               C63 * C14387 * C14589) *
              C14583)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C62 * C149 - C148 * C73) * C71 + (C62 * C154 - C148 * C79) * C61) *
              C63 * C14387 * C2738 +
          ((C148 * C377 - C62 * C489) * C71 +
           (C148 * C384 - C62 * C495) * C61) *
              C63 * C14387 * C2739 +
          ((C62 * C490 - C148 * C378) * C71 +
           (C62 * C496 - C148 * C386) * C61) *
              C63 * C14387 * C2740 +
          ((C148 * C2744 - C62 * C2800) * C71 +
           (C148 * C2747 - C62 * C2802) * C61) *
              C63 * C14387 * C2741 +
          ((C62 * C2801 - C148 * C2745) * C71 +
           (C62 * C2803 - C148 * C2749) * C61) *
              C63 * C14387 * C2742) *
         C14341) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C62 * C149 - C148 * C73) * C71 + (C62 * C154 - C148 * C79) * C61) *
               C63 * C4496 +
           ((C148 * C818 - C62 * C930) * C71 +
            (C148 * C825 - C62 * C936) * C61) *
               C63 * C4497 +
           ((C62 * C931 - C148 * C819) * C71 +
            (C62 * C937 - C148 * C827) * C61) *
               C63 * C14592) *
              C14369 * C14621 +
          (((C148 * C74 - C62 * C150) * C71 + (C148 * C81 - C62 * C155) * C61) *
               C63 * C4496 +
           ((C62 * C932 - C148 * C820) * C71 +
            (C62 * C938 - C148 * C829) * C61) *
               C63 * C4497 +
           ((C148 * C821 - C62 * C933) * C71 +
            (C148 * C831 - C62 * C939) * C61) *
               C63 * C14592) *
              C14369 * C14608 +
          (((C62 * C151 - C148 * C75) * C71 + (C62 * C156 - C148 * C83) * C61) *
               C63 * C4496 +
           ((C148 * C822 - C62 * C934) * C71 +
            (C148 * C833 - C62 * C940) * C61) *
               C63 * C4497 +
           ((C62 * C935 - C148 * C823) * C71 +
            (C62 * C941 - C148 * C835) * C61) *
               C63 * C14592) *
              C14369 * C14583)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C62 * C149 - C148 * C73) * C71 + (C62 * C154 - C148 * C79) * C61) *
               C63 * C4496 +
           ((C148 * C818 - C62 * C930) * C71 +
            (C148 * C825 - C62 * C936) * C61) *
               C63 * C4497 +
           ((C62 * C931 - C148 * C819) * C71 +
            (C62 * C937 - C148 * C827) * C61) *
               C63 * C14592) *
              C14624 +
          (((C148 * C377 - C62 * C489) * C71 +
            (C148 * C384 - C62 * C495) * C61) *
               C63 * C4496 +
           ((C62 * C2038 - C148 * C1920) * C71 +
            (C62 * C2041 - C148 * C1924) * C61) *
               C63 * C4497 +
           ((C148 * C2990 - C62 * C3084) * C71 +
            (C148 * C2994 - C62 * C3087) * C61) *
               C63 * C14592) *
              C14612 +
          (((C62 * C490 - C148 * C378) * C71 +
            (C62 * C496 - C148 * C386) * C61) *
               C63 * C4496 +
           ((C148 * C2991 - C62 * C3085) * C71 +
            (C148 * C2996 - C62 * C3088) * C61) *
               C63 * C4497 +
           ((C62 * C3086 - C148 * C2992) * C71 +
            (C62 * C3089 - C148 * C2998) * C61) *
               C63 * C14592) *
              C14589) *
         C14341) /
            (p * q * std::sqrt(p + q));
    d2eeyx[14] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
               C62 * C14387 * C14624 +
           ((C71 * C377 - C61 * C383) * C115 +
            (C71 * C539 - C61 * C545) * C63) *
               C62 * C14387 * C14612 +
           ((C61 * C385 - C71 * C378) * C115 +
            (C61 * C546 - C71 * C540) * C63) *
               C62 * C14387 * C14589) *
              C374 +
          (((C71 * C74 - C61 * C80) * C115 + (C71 * C182 - C61 * C187) * C63) *
               C62 * C14387 * C14624 +
           ((C61 * C387 - C71 * C379) * C115 +
            (C61 * C547 - C71 * C541) * C63) *
               C62 * C14387 * C14612 +
           ((C71 * C380 - C61 * C389) * C115 +
            (C71 * C542 - C61 * C548) * C63) *
               C62 * C14387 * C14589) *
              C375 +
          (((C61 * C82 - C71 * C75) * C115 + (C61 * C188 - C71 * C183) * C63) *
               C62 * C14387 * C14624 +
           ((C71 * C381 - C61 * C391) * C115 +
            (C71 * C543 - C61 * C549) * C63) *
               C62 * C14387 * C14612 +
           ((C61 * C393 - C71 * C382) * C115 +
            (C61 * C550 - C71 * C544) * C63) *
               C62 * C14387 * C14589) *
              C14583)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
              C62 * C14387 * C14369 * C66 +
          ((C71 * C74 - C61 * C80) * C115 + (C71 * C182 - C61 * C187) * C63) *
              C62 * C14387 * C14369 * C67 +
          ((C61 * C82 - C71 * C75) * C115 + (C61 * C188 - C71 * C183) * C63) *
              C62 * C14387 * C14369 * C68 +
          ((C71 * C76 - C61 * C84) * C115 + (C71 * C184 - C61 * C189) * C63) *
              C62 * C14387 * C14369 * C69 +
          ((C61 * C86 - C71 * C77) * C115 + (C61 * C190 - C71 * C185) * C63) *
              C62 * C14387 * C14369 * C70)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
               C62 * C14387 * C2406 +
           ((C71 * C377 - C61 * C383) * C115 +
            (C71 * C539 - C61 * C545) * C63) *
               C62 * C14387 * C2407 +
           ((C61 * C385 - C71 * C378) * C115 +
            (C61 * C546 - C71 * C540) * C63) *
               C62 * C14387 * C14589) *
              C14621 +
          (((C71 * C74 - C61 * C80) * C115 + (C71 * C182 - C61 * C187) * C63) *
               C62 * C14387 * C2406 +
           ((C61 * C387 - C71 * C379) * C115 +
            (C61 * C547 - C71 * C541) * C63) *
               C62 * C14387 * C2407 +
           ((C71 * C380 - C61 * C389) * C115 +
            (C71 * C542 - C61 * C548) * C63) *
               C62 * C14387 * C14589) *
              C14608 +
          (((C61 * C82 - C71 * C75) * C115 + (C61 * C188 - C71 * C183) * C63) *
               C62 * C14387 * C2406 +
           ((C71 * C381 - C61 * C391) * C115 +
            (C71 * C543 - C61 * C549) * C63) *
               C62 * C14387 * C2407 +
           ((C61 * C393 - C71 * C382) * C115 +
            (C61 * C550 - C71 * C544) * C63) *
               C62 * C14387 * C14589) *
              C14583)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
              C62 * C14387 * C2738 +
          ((C71 * C377 - C61 * C383) * C115 + (C71 * C539 - C61 * C545) * C63) *
              C62 * C14387 * C2739 +
          ((C61 * C385 - C71 * C378) * C115 + (C61 * C546 - C71 * C540) * C63) *
              C62 * C14387 * C2740 +
          ((C71 * C2744 - C61 * C2746) * C115 +
           (C71 * C2826 - C61 * C2828) * C63) *
              C62 * C14387 * C2741 +
          ((C61 * C2748 - C71 * C2745) * C115 +
           (C61 * C2829 - C71 * C2827) * C63) *
              C62 * C14387 * C2742) *
         C14341) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
               C62 * C4496 +
           ((C71 * C818 - C61 * C824) * C115 +
            (C71 * C980 - C61 * C986) * C63) *
               C62 * C4497 +
           ((C61 * C826 - C71 * C819) * C115 +
            (C61 * C987 - C71 * C981) * C63) *
               C62 * C14592) *
              C14369 * C14621 +
          (((C71 * C74 - C61 * C80) * C115 + (C71 * C182 - C61 * C187) * C63) *
               C62 * C4496 +
           ((C61 * C828 - C71 * C820) * C115 +
            (C61 * C988 - C71 * C982) * C63) *
               C62 * C4497 +
           ((C71 * C821 - C61 * C830) * C115 +
            (C71 * C983 - C61 * C989) * C63) *
               C62 * C14592) *
              C14369 * C14608 +
          (((C61 * C82 - C71 * C75) * C115 + (C61 * C188 - C71 * C183) * C63) *
               C62 * C4496 +
           ((C71 * C822 - C61 * C832) * C115 +
            (C71 * C984 - C61 * C990) * C63) *
               C62 * C4497 +
           ((C61 * C834 - C71 * C823) * C115 +
            (C61 * C991 - C71 * C985) * C63) *
               C62 * C14592) *
              C14369 * C14583)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
               C62 * C4496 +
           ((C71 * C818 - C61 * C824) * C115 +
            (C71 * C980 - C61 * C986) * C63) *
               C62 * C4497 +
           ((C61 * C826 - C71 * C819) * C115 +
            (C61 * C987 - C71 * C981) * C63) *
               C62 * C14592) *
              C14624 +
          (((C71 * C377 - C61 * C383) * C115 +
            (C71 * C539 - C61 * C545) * C63) *
               C62 * C4496 +
           ((C61 * C1923 - C71 * C1920) * C115 +
            (C61 * C2097 - C71 * C2094) * C63) *
               C62 * C4497 +
           ((C71 * C2990 - C61 * C2993) * C115 +
            (C71 * C3128 - C61 * C3131) * C63) *
               C62 * C14592) *
              C14612 +
          (((C61 * C385 - C71 * C378) * C115 +
            (C61 * C546 - C71 * C540) * C63) *
               C62 * C4496 +
           ((C71 * C2991 - C61 * C2995) * C115 +
            (C71 * C3129 - C61 * C3132) * C63) *
               C62 * C4497 +
           ((C61 * C2997 - C71 * C2992) * C115 +
            (C61 * C3133 - C71 * C3130) * C63) *
               C62 * C14592) *
              C14589) *
         C14341) /
            (p * q * std::sqrt(p + q));
    d2eeyy[14] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) * C61 * C62 *
               C14387 * C14624 -
           (C115 * C439 - C213 * C377 - C115 * C539 + C63 * C589) * C61 * C62 *
               C14387 * C14612 +
           (C115 * C440 - C213 * C378 - C115 * C540 + C63 * C590) * C61 * C62 *
               C14387 * C14589) *
              C374 +
          ((C115 * C441 - C213 * C379 - C115 * C541 + C63 * C591) * C61 * C62 *
               C14387 * C14612 -
           (C115 * C117 - C213 * C74 - C115 * C182 + C63 * C215) * C61 * C62 *
               C14387 * C14624 -
           (C115 * C442 - C213 * C380 - C115 * C542 + C63 * C592) * C61 * C62 *
               C14387 * C14589) *
              C375 +
          ((C115 * C118 - C213 * C75 - C115 * C183 + C63 * C216) * C61 * C62 *
               C14387 * C14624 -
           (C115 * C443 - C213 * C381 - C115 * C543 + C63 * C593) * C61 * C62 *
               C14387 * C14612 +
           (C115 * C444 - C213 * C382 - C115 * C544 + C63 * C594) * C61 * C62 *
               C14387 * C14589) *
              C14583)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) * C61 * C62 *
              C14387 * C14369 * C66 -
          (C115 * C117 - C213 * C74 - C115 * C182 + C63 * C215) * C61 * C62 *
              C14387 * C14369 * C67 +
          (C115 * C118 - C213 * C75 - C115 * C183 + C63 * C216) * C61 * C62 *
              C14387 * C14369 * C68 -
          (C115 * C119 - C213 * C76 - C115 * C184 + C63 * C217) * C61 * C62 *
              C14387 * C14369 * C69 +
          (C115 * C120 - C213 * C77 - C115 * C185 + C63 * C218) * C61 * C62 *
              C14387 * C14369 * C70)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) * C61 * C62 *
               C14387 * C2406 -
           (C115 * C439 - C213 * C377 - C115 * C539 + C63 * C589) * C61 * C62 *
               C14387 * C2407 +
           (C115 * C440 - C213 * C378 - C115 * C540 + C63 * C590) * C61 * C62 *
               C14387 * C14589) *
              C14621 +
          ((C115 * C441 - C213 * C379 - C115 * C541 + C63 * C591) * C61 * C62 *
               C14387 * C2407 -
           (C115 * C117 - C213 * C74 - C115 * C182 + C63 * C215) * C61 * C62 *
               C14387 * C2406 -
           (C115 * C442 - C213 * C380 - C115 * C542 + C63 * C592) * C61 * C62 *
               C14387 * C14589) *
              C14608 +
          ((C115 * C118 - C213 * C75 - C115 * C183 + C63 * C216) * C61 * C62 *
               C14387 * C2406 -
           (C115 * C443 - C213 * C381 - C115 * C543 + C63 * C593) * C61 * C62 *
               C14387 * C2407 +
           (C115 * C444 - C213 * C382 - C115 * C544 + C63 * C594) * C61 * C62 *
               C14387 * C14589) *
              C14583)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) * C61 * C62 *
              C14387 * C2738 -
          (C115 * C439 - C213 * C377 - C115 * C539 + C63 * C589) * C61 * C62 *
              C14387 * C2739 +
          (C115 * C440 - C213 * C378 - C115 * C540 + C63 * C590) * C61 * C62 *
              C14387 * C2740 -
          (C115 * C2774 - C213 * C2744 - C115 * C2826 + C63 * C2852) * C61 *
              C62 * C14387 * C2741 +
          (C115 * C2775 - C213 * C2745 - C115 * C2827 + C63 * C2853) * C61 *
              C62 * C14387 * C2742) *
         C14341) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) * C61 * C62 *
               C4496 -
           (C115 * C880 - C213 * C818 - C115 * C980 + C63 * C1030) * C61 * C62 *
               C4497 +
           (C115 * C881 - C213 * C819 - C115 * C981 + C63 * C1031) * C61 * C62 *
               C14592) *
              C14369 * C14621 +
          ((C115 * C882 - C213 * C820 - C115 * C982 + C63 * C1032) * C61 * C62 *
               C4497 -
           (C115 * C117 - C213 * C74 - C115 * C182 + C63 * C215) * C61 * C62 *
               C4496 -
           (C115 * C883 - C213 * C821 - C115 * C983 + C63 * C1033) * C61 * C62 *
               C14592) *
              C14369 * C14608 +
          ((C115 * C118 - C213 * C75 - C115 * C183 + C63 * C216) * C61 * C62 *
               C4496 -
           (C115 * C884 - C213 * C822 - C115 * C984 + C63 * C1034) * C61 * C62 *
               C4497 +
           (C115 * C885 - C213 * C823 - C115 * C985 + C63 * C1035) * C61 * C62 *
               C14592) *
              C14369 * C14583)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) * C61 * C62 *
               C4496 -
           (C115 * C880 - C213 * C818 - C115 * C980 + C63 * C1030) * C61 * C62 *
               C4497 +
           (C115 * C881 - C213 * C819 - C115 * C981 + C63 * C1031) * C61 * C62 *
               C14592) *
              C14624 +
          ((C115 * C1982 - C213 * C1920 - C115 * C2094 + C63 * C2150) * C61 *
               C62 * C4497 -
           (C115 * C439 - C213 * C377 - C115 * C539 + C63 * C589) * C61 * C62 *
               C4496 -
           (C115 * C3040 - C213 * C2990 - C115 * C3128 + C63 * C3172) * C61 *
               C62 * C14592) *
              C14612 +
          ((C115 * C440 - C213 * C378 - C115 * C540 + C63 * C590) * C61 * C62 *
               C4496 -
           (C115 * C3041 - C213 * C2991 - C115 * C3129 + C63 * C3173) * C61 *
               C62 * C4497 +
           (C115 * C3042 - C213 * C2992 - C115 * C3130 + C63 * C3174) * C61 *
               C62 * C14592) *
              C14589) *
         C14341) /
            (p * q * std::sqrt(p + q));
    d2eeyz[14] += (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((((C62 * C149 - C148 * C73) * C115 +
                      (C62 * C241 - C148 * C181) * C63) *
                         C61 * C14387 * C14624 +
                     ((C148 * C377 - C62 * C489) * C115 +
                      (C148 * C539 - C62 * C633) * C63) *
                         C61 * C14387 * C14612 +
                     ((C62 * C490 - C148 * C378) * C115 +
                      (C62 * C634 - C148 * C540) * C63) *
                         C61 * C14387 * C14589) *
                        C374 +
                    (((C148 * C74 - C62 * C150) * C115 +
                      (C148 * C182 - C62 * C242) * C63) *
                         C61 * C14387 * C14624 +
                     ((C62 * C491 - C148 * C379) * C115 +
                      (C62 * C635 - C148 * C541) * C63) *
                         C61 * C14387 * C14612 +
                     ((C148 * C380 - C62 * C492) * C115 +
                      (C148 * C542 - C62 * C636) * C63) *
                         C61 * C14387 * C14589) *
                        C375 +
                    (((C62 * C151 - C148 * C75) * C115 +
                      (C62 * C243 - C148 * C183) * C63) *
                         C61 * C14387 * C14624 +
                     ((C148 * C381 - C62 * C493) * C115 +
                      (C148 * C543 - C62 * C637) * C63) *
                         C61 * C14387 * C14612 +
                     ((C62 * C494 - C148 * C382) * C115 +
                      (C62 * C638 - C148 * C544) * C63) *
                         C61 * C14387 * C14589) *
                        C14583)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C62 * C149 - C148 * C73) * C115 +
                     (C62 * C241 - C148 * C181) * C63) *
                        C61 * C14387 * C14369 * C66 +
                    ((C148 * C74 - C62 * C150) * C115 +
                     (C148 * C182 - C62 * C242) * C63) *
                        C61 * C14387 * C14369 * C67 +
                    ((C62 * C151 - C148 * C75) * C115 +
                     (C62 * C243 - C148 * C183) * C63) *
                        C61 * C14387 * C14369 * C68 +
                    ((C148 * C76 - C62 * C152) * C115 +
                     (C148 * C184 - C62 * C244) * C63) *
                        C61 * C14387 * C14369 * C69 +
                    ((C62 * C153 - C148 * C77) * C115 +
                     (C62 * C245 - C148 * C185) * C63) *
                        C61 * C14387 * C14369 * C70)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((((C62 * C149 - C148 * C73) * C115 +
                      (C62 * C241 - C148 * C181) * C63) *
                         C61 * C14387 * C2406 +
                     ((C148 * C377 - C62 * C489) * C115 +
                      (C148 * C539 - C62 * C633) * C63) *
                         C61 * C14387 * C2407 +
                     ((C62 * C490 - C148 * C378) * C115 +
                      (C62 * C634 - C148 * C540) * C63) *
                         C61 * C14387 * C14589) *
                        C14621 +
                    (((C148 * C74 - C62 * C150) * C115 +
                      (C148 * C182 - C62 * C242) * C63) *
                         C61 * C14387 * C2406 +
                     ((C62 * C491 - C148 * C379) * C115 +
                      (C62 * C635 - C148 * C541) * C63) *
                         C61 * C14387 * C2407 +
                     ((C148 * C380 - C62 * C492) * C115 +
                      (C148 * C542 - C62 * C636) * C63) *
                         C61 * C14387 * C14589) *
                        C14608 +
                    (((C62 * C151 - C148 * C75) * C115 +
                      (C62 * C243 - C148 * C183) * C63) *
                         C61 * C14387 * C2406 +
                     ((C148 * C381 - C62 * C493) * C115 +
                      (C148 * C543 - C62 * C637) * C63) *
                         C61 * C14387 * C2407 +
                     ((C62 * C494 - C148 * C382) * C115 +
                      (C62 * C638 - C148 * C544) * C63) *
                         C61 * C14387 * C14589) *
                        C14583)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C62 * C149 - C148 * C73) * C115 +
                     (C62 * C241 - C148 * C181) * C63) *
                        C61 * C14387 * C2738 +
                    ((C148 * C377 - C62 * C489) * C115 +
                     (C148 * C539 - C62 * C633) * C63) *
                        C61 * C14387 * C2739 +
                    ((C62 * C490 - C148 * C378) * C115 +
                     (C62 * C634 - C148 * C540) * C63) *
                        C61 * C14387 * C2740 +
                    ((C148 * C2744 - C62 * C2800) * C115 +
                     (C148 * C2826 - C62 * C2876) * C63) *
                        C61 * C14387 * C2741 +
                    ((C62 * C2801 - C148 * C2745) * C115 +
                     (C62 * C2877 - C148 * C2827) * C63) *
                        C61 * C14387 * C2742) *
                   C14341) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C62 * C149 - C148 * C73) * C115 +
                      (C62 * C241 - C148 * C181) * C63) *
                         C61 * C4496 +
                     ((C148 * C818 - C62 * C930) * C115 +
                      (C148 * C980 - C62 * C1074) * C63) *
                         C61 * C4497 +
                     ((C62 * C931 - C148 * C819) * C115 +
                      (C62 * C1075 - C148 * C981) * C63) *
                         C61 * C14592) *
                        C14369 * C14621 +
                    (((C148 * C74 - C62 * C150) * C115 +
                      (C148 * C182 - C62 * C242) * C63) *
                         C61 * C4496 +
                     ((C62 * C932 - C148 * C820) * C115 +
                      (C62 * C1076 - C148 * C982) * C63) *
                         C61 * C4497 +
                     ((C148 * C821 - C62 * C933) * C115 +
                      (C148 * C983 - C62 * C1077) * C63) *
                         C61 * C14592) *
                        C14369 * C14608 +
                    (((C62 * C151 - C148 * C75) * C115 +
                      (C62 * C243 - C148 * C183) * C63) *
                         C61 * C4496 +
                     ((C148 * C822 - C62 * C934) * C115 +
                      (C148 * C984 - C62 * C1078) * C63) *
                         C61 * C4497 +
                     ((C62 * C935 - C148 * C823) * C115 +
                      (C62 * C1079 - C148 * C985) * C63) *
                         C61 * C14592) *
                        C14369 * C14583)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C62 * C149 - C148 * C73) * C115 +
                      (C62 * C241 - C148 * C181) * C63) *
                         C61 * C4496 +
                     ((C148 * C818 - C62 * C930) * C115 +
                      (C148 * C980 - C62 * C1074) * C63) *
                         C61 * C4497 +
                     ((C62 * C931 - C148 * C819) * C115 +
                      (C62 * C1075 - C148 * C981) * C63) *
                         C61 * C14592) *
                        C14624 +
                    (((C148 * C377 - C62 * C489) * C115 +
                      (C148 * C539 - C62 * C633) * C63) *
                         C61 * C4496 +
                     ((C62 * C2038 - C148 * C1920) * C115 +
                      (C62 * C2203 - C148 * C2094) * C63) *
                         C61 * C4497 +
                     ((C148 * C2990 - C62 * C3084) * C115 +
                      (C148 * C3128 - C62 * C3213) * C63) *
                         C61 * C14592) *
                        C14612 +
                    (((C62 * C490 - C148 * C378) * C115 +
                      (C62 * C634 - C148 * C540) * C63) *
                         C61 * C4496 +
                     ((C148 * C2991 - C62 * C3085) * C115 +
                      (C148 * C3129 - C62 * C3214) * C63) *
                         C61 * C4497 +
                     ((C62 * C3086 - C148 * C2992) * C115 +
                      (C62 * C3215 - C148 * C3130) * C63) *
                         C61 * C14592) *
                        C14589) *
                   C14341) /
                      (p * q * std::sqrt(p + q));
    d2eezx[14] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
               C63 * C14387 * C14624 +
           ((C71 * C377 - C61 * C383) * C148 +
            (C71 * C677 - C61 * C683) * C62) *
               C63 * C14387 * C14612 +
           ((C61 * C385 - C71 * C378) * C148 +
            (C61 * C684 - C71 * C678) * C62) *
               C63 * C14387 * C14589) *
              C374 +
          (((C71 * C74 - C61 * C80) * C148 + (C71 * C269 - C61 * C274) * C62) *
               C63 * C14387 * C14624 +
           ((C61 * C387 - C71 * C379) * C148 +
            (C61 * C685 - C71 * C679) * C62) *
               C63 * C14387 * C14612 +
           ((C71 * C380 - C61 * C389) * C148 +
            (C71 * C680 - C61 * C686) * C62) *
               C63 * C14387 * C14589) *
              C375 +
          (((C61 * C82 - C71 * C75) * C148 + (C61 * C275 - C71 * C270) * C62) *
               C63 * C14387 * C14624 +
           ((C71 * C381 - C61 * C391) * C148 +
            (C71 * C681 - C61 * C687) * C62) *
               C63 * C14387 * C14612 +
           ((C61 * C393 - C71 * C382) * C148 +
            (C61 * C688 - C71 * C682) * C62) *
               C63 * C14387 * C14589) *
              C14583)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
              C63 * C14387 * C14369 * C66 +
          ((C71 * C74 - C61 * C80) * C148 + (C71 * C269 - C61 * C274) * C62) *
              C63 * C14387 * C14369 * C67 +
          ((C61 * C82 - C71 * C75) * C148 + (C61 * C275 - C71 * C270) * C62) *
              C63 * C14387 * C14369 * C68 +
          ((C71 * C76 - C61 * C84) * C148 + (C71 * C271 - C61 * C276) * C62) *
              C63 * C14387 * C14369 * C69 +
          ((C61 * C86 - C71 * C77) * C148 + (C61 * C277 - C71 * C272) * C62) *
              C63 * C14387 * C14369 * C70)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
               C63 * C14387 * C2406 +
           ((C71 * C377 - C61 * C383) * C148 +
            (C71 * C677 - C61 * C683) * C62) *
               C63 * C14387 * C2407 +
           ((C61 * C385 - C71 * C378) * C148 +
            (C61 * C684 - C71 * C678) * C62) *
               C63 * C14387 * C14589) *
              C14621 +
          (((C71 * C74 - C61 * C80) * C148 + (C71 * C269 - C61 * C274) * C62) *
               C63 * C14387 * C2406 +
           ((C61 * C387 - C71 * C379) * C148 +
            (C61 * C685 - C71 * C679) * C62) *
               C63 * C14387 * C2407 +
           ((C71 * C380 - C61 * C389) * C148 +
            (C71 * C680 - C61 * C686) * C62) *
               C63 * C14387 * C14589) *
              C14608 +
          (((C61 * C82 - C71 * C75) * C148 + (C61 * C275 - C71 * C270) * C62) *
               C63 * C14387 * C2406 +
           ((C71 * C381 - C61 * C391) * C148 +
            (C71 * C681 - C61 * C687) * C62) *
               C63 * C14387 * C2407 +
           ((C61 * C393 - C71 * C382) * C148 +
            (C61 * C688 - C71 * C682) * C62) *
               C63 * C14387 * C14589) *
              C14583)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
              C63 * C14387 * C2738 +
          ((C71 * C377 - C61 * C383) * C148 + (C71 * C677 - C61 * C683) * C62) *
              C63 * C14387 * C2739 +
          ((C61 * C385 - C71 * C378) * C148 + (C61 * C684 - C71 * C678) * C62) *
              C63 * C14387 * C2740 +
          ((C71 * C2744 - C61 * C2746) * C148 +
           (C71 * C2900 - C61 * C2902) * C62) *
              C63 * C14387 * C2741 +
          ((C61 * C2748 - C71 * C2745) * C148 +
           (C61 * C2903 - C71 * C2901) * C62) *
              C63 * C14387 * C2742) *
         C14341) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
               C63 * C4496 +
           ((C71 * C818 - C61 * C824) * C148 +
            (C71 * C1118 - C61 * C1124) * C62) *
               C63 * C4497 +
           ((C61 * C826 - C71 * C819) * C148 +
            (C61 * C1125 - C71 * C1119) * C62) *
               C63 * C14592) *
              C14369 * C14621 +
          (((C71 * C74 - C61 * C80) * C148 + (C71 * C269 - C61 * C274) * C62) *
               C63 * C4496 +
           ((C61 * C828 - C71 * C820) * C148 +
            (C61 * C1126 - C71 * C1120) * C62) *
               C63 * C4497 +
           ((C71 * C821 - C61 * C830) * C148 +
            (C71 * C1121 - C61 * C1127) * C62) *
               C63 * C14592) *
              C14369 * C14608 +
          (((C61 * C82 - C71 * C75) * C148 + (C61 * C275 - C71 * C270) * C62) *
               C63 * C4496 +
           ((C71 * C822 - C61 * C832) * C148 +
            (C71 * C1122 - C61 * C1128) * C62) *
               C63 * C4497 +
           ((C61 * C834 - C71 * C823) * C148 +
            (C61 * C1129 - C71 * C1123) * C62) *
               C63 * C14592) *
              C14369 * C14583)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
               C63 * C4496 +
           ((C71 * C818 - C61 * C824) * C148 +
            (C71 * C1118 - C61 * C1124) * C62) *
               C63 * C4497 +
           ((C61 * C826 - C71 * C819) * C148 +
            (C61 * C1125 - C71 * C1119) * C62) *
               C63 * C14592) *
              C14624 +
          (((C71 * C377 - C61 * C383) * C148 +
            (C71 * C677 - C61 * C683) * C62) *
               C63 * C4496 +
           ((C61 * C1923 - C71 * C1920) * C148 +
            (C61 * C2259 - C71 * C2256) * C62) *
               C63 * C4497 +
           ((C71 * C2990 - C61 * C2993) * C148 +
            (C71 * C3254 - C61 * C3257) * C62) *
               C63 * C14592) *
              C14612 +
          (((C61 * C385 - C71 * C378) * C148 +
            (C61 * C684 - C71 * C678) * C62) *
               C63 * C4496 +
           ((C71 * C2991 - C61 * C2995) * C148 +
            (C71 * C3255 - C61 * C3258) * C62) *
               C63 * C4497 +
           ((C61 * C2997 - C71 * C2992) * C148 +
            (C61 * C3259 - C71 * C3256) * C62) *
               C63 * C14592) *
              C14589) *
         C14341) /
            (p * q * std::sqrt(p + q));
    d2eezy[14] += (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((((C63 * C116 - C115 * C73) * C148 +
                      (C63 * C300 - C115 * C268) * C62) *
                         C61 * C14387 * C14624 +
                     ((C115 * C377 - C63 * C439) * C148 +
                      (C115 * C677 - C63 * C727) * C62) *
                         C61 * C14387 * C14612 +
                     ((C63 * C440 - C115 * C378) * C148 +
                      (C63 * C728 - C115 * C678) * C62) *
                         C61 * C14387 * C14589) *
                        C374 +
                    (((C115 * C74 - C63 * C117) * C148 +
                      (C115 * C269 - C63 * C301) * C62) *
                         C61 * C14387 * C14624 +
                     ((C63 * C441 - C115 * C379) * C148 +
                      (C63 * C729 - C115 * C679) * C62) *
                         C61 * C14387 * C14612 +
                     ((C115 * C380 - C63 * C442) * C148 +
                      (C115 * C680 - C63 * C730) * C62) *
                         C61 * C14387 * C14589) *
                        C375 +
                    (((C63 * C118 - C115 * C75) * C148 +
                      (C63 * C302 - C115 * C270) * C62) *
                         C61 * C14387 * C14624 +
                     ((C115 * C381 - C63 * C443) * C148 +
                      (C115 * C681 - C63 * C731) * C62) *
                         C61 * C14387 * C14612 +
                     ((C63 * C444 - C115 * C382) * C148 +
                      (C63 * C732 - C115 * C682) * C62) *
                         C61 * C14387 * C14589) *
                        C14583)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C63 * C116 - C115 * C73) * C148 +
                     (C63 * C300 - C115 * C268) * C62) *
                        C61 * C14387 * C14369 * C66 +
                    ((C115 * C74 - C63 * C117) * C148 +
                     (C115 * C269 - C63 * C301) * C62) *
                        C61 * C14387 * C14369 * C67 +
                    ((C63 * C118 - C115 * C75) * C148 +
                     (C63 * C302 - C115 * C270) * C62) *
                        C61 * C14387 * C14369 * C68 +
                    ((C115 * C76 - C63 * C119) * C148 +
                     (C115 * C271 - C63 * C303) * C62) *
                        C61 * C14387 * C14369 * C69 +
                    ((C63 * C120 - C115 * C77) * C148 +
                     (C63 * C304 - C115 * C272) * C62) *
                        C61 * C14387 * C14369 * C70)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((((C63 * C116 - C115 * C73) * C148 +
                      (C63 * C300 - C115 * C268) * C62) *
                         C61 * C14387 * C2406 +
                     ((C115 * C377 - C63 * C439) * C148 +
                      (C115 * C677 - C63 * C727) * C62) *
                         C61 * C14387 * C2407 +
                     ((C63 * C440 - C115 * C378) * C148 +
                      (C63 * C728 - C115 * C678) * C62) *
                         C61 * C14387 * C14589) *
                        C14621 +
                    (((C115 * C74 - C63 * C117) * C148 +
                      (C115 * C269 - C63 * C301) * C62) *
                         C61 * C14387 * C2406 +
                     ((C63 * C441 - C115 * C379) * C148 +
                      (C63 * C729 - C115 * C679) * C62) *
                         C61 * C14387 * C2407 +
                     ((C115 * C380 - C63 * C442) * C148 +
                      (C115 * C680 - C63 * C730) * C62) *
                         C61 * C14387 * C14589) *
                        C14608 +
                    (((C63 * C118 - C115 * C75) * C148 +
                      (C63 * C302 - C115 * C270) * C62) *
                         C61 * C14387 * C2406 +
                     ((C115 * C381 - C63 * C443) * C148 +
                      (C115 * C681 - C63 * C731) * C62) *
                         C61 * C14387 * C2407 +
                     ((C63 * C444 - C115 * C382) * C148 +
                      (C63 * C732 - C115 * C682) * C62) *
                         C61 * C14387 * C14589) *
                        C14583)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C63 * C116 - C115 * C73) * C148 +
                     (C63 * C300 - C115 * C268) * C62) *
                        C61 * C14387 * C2738 +
                    ((C115 * C377 - C63 * C439) * C148 +
                     (C115 * C677 - C63 * C727) * C62) *
                        C61 * C14387 * C2739 +
                    ((C63 * C440 - C115 * C378) * C148 +
                     (C63 * C728 - C115 * C678) * C62) *
                        C61 * C14387 * C2740 +
                    ((C115 * C2744 - C63 * C2774) * C148 +
                     (C115 * C2900 - C63 * C2926) * C62) *
                        C61 * C14387 * C2741 +
                    ((C63 * C2775 - C115 * C2745) * C148 +
                     (C63 * C2927 - C115 * C2901) * C62) *
                        C61 * C14387 * C2742) *
                   C14341) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C63 * C116 - C115 * C73) * C148 +
                      (C63 * C300 - C115 * C268) * C62) *
                         C61 * C4496 +
                     ((C115 * C818 - C63 * C880) * C148 +
                      (C115 * C1118 - C63 * C1168) * C62) *
                         C61 * C4497 +
                     ((C63 * C881 - C115 * C819) * C148 +
                      (C63 * C1169 - C115 * C1119) * C62) *
                         C61 * C14592) *
                        C14369 * C14621 +
                    (((C115 * C74 - C63 * C117) * C148 +
                      (C115 * C269 - C63 * C301) * C62) *
                         C61 * C4496 +
                     ((C63 * C882 - C115 * C820) * C148 +
                      (C63 * C1170 - C115 * C1120) * C62) *
                         C61 * C4497 +
                     ((C115 * C821 - C63 * C883) * C148 +
                      (C115 * C1121 - C63 * C1171) * C62) *
                         C61 * C14592) *
                        C14369 * C14608 +
                    (((C63 * C118 - C115 * C75) * C148 +
                      (C63 * C302 - C115 * C270) * C62) *
                         C61 * C4496 +
                     ((C115 * C822 - C63 * C884) * C148 +
                      (C115 * C1122 - C63 * C1172) * C62) *
                         C61 * C4497 +
                     ((C63 * C885 - C115 * C823) * C148 +
                      (C63 * C1173 - C115 * C1123) * C62) *
                         C61 * C14592) *
                        C14369 * C14583)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C63 * C116 - C115 * C73) * C148 +
                      (C63 * C300 - C115 * C268) * C62) *
                         C61 * C4496 +
                     ((C115 * C818 - C63 * C880) * C148 +
                      (C115 * C1118 - C63 * C1168) * C62) *
                         C61 * C4497 +
                     ((C63 * C881 - C115 * C819) * C148 +
                      (C63 * C1169 - C115 * C1119) * C62) *
                         C61 * C14592) *
                        C14624 +
                    (((C115 * C377 - C63 * C439) * C148 +
                      (C115 * C677 - C63 * C727) * C62) *
                         C61 * C4496 +
                     ((C63 * C1982 - C115 * C1920) * C148 +
                      (C63 * C2312 - C115 * C2256) * C62) *
                         C61 * C4497 +
                     ((C115 * C2990 - C63 * C3040) * C148 +
                      (C115 * C3254 - C63 * C3298) * C62) *
                         C61 * C14592) *
                        C14612 +
                    (((C63 * C440 - C115 * C378) * C148 +
                      (C63 * C728 - C115 * C678) * C62) *
                         C61 * C4496 +
                     ((C115 * C2991 - C63 * C3041) * C148 +
                      (C115 * C3255 - C63 * C3299) * C62) *
                         C61 * C4497 +
                     ((C63 * C3042 - C115 * C2992) * C148 +
                      (C63 * C3300 - C115 * C3256) * C62) *
                         C61 * C14592) *
                        C14589) *
                   C14341) /
                      (p * q * std::sqrt(p + q));
    d2eezz[14] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) * C63 * C61 *
               C14387 * C14624 -
           (C148 * C489 - C327 * C377 - C148 * C677 + C62 * C771) * C63 * C61 *
               C14387 * C14612 +
           (C148 * C490 - C327 * C378 - C148 * C678 + C62 * C772) * C63 * C61 *
               C14387 * C14589) *
              C374 +
          ((C148 * C491 - C327 * C379 - C148 * C679 + C62 * C773) * C63 * C61 *
               C14387 * C14612 -
           (C148 * C150 - C327 * C74 - C148 * C269 + C62 * C329) * C63 * C61 *
               C14387 * C14624 -
           (C148 * C492 - C327 * C380 - C148 * C680 + C62 * C774) * C63 * C61 *
               C14387 * C14589) *
              C375 +
          ((C148 * C151 - C327 * C75 - C148 * C270 + C62 * C330) * C63 * C61 *
               C14387 * C14624 -
           (C148 * C493 - C327 * C381 - C148 * C681 + C62 * C775) * C63 * C61 *
               C14387 * C14612 +
           (C148 * C494 - C327 * C382 - C148 * C682 + C62 * C776) * C63 * C61 *
               C14387 * C14589) *
              C14583)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) * C63 * C61 *
              C14387 * C14369 * C66 -
          (C148 * C150 - C327 * C74 - C148 * C269 + C62 * C329) * C63 * C61 *
              C14387 * C14369 * C67 +
          (C148 * C151 - C327 * C75 - C148 * C270 + C62 * C330) * C63 * C61 *
              C14387 * C14369 * C68 -
          (C148 * C152 - C327 * C76 - C148 * C271 + C62 * C331) * C63 * C61 *
              C14387 * C14369 * C69 +
          (C148 * C153 - C327 * C77 - C148 * C272 + C62 * C332) * C63 * C61 *
              C14387 * C14369 * C70)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) * C63 * C61 *
               C14387 * C2406 -
           (C148 * C489 - C327 * C377 - C148 * C677 + C62 * C771) * C63 * C61 *
               C14387 * C2407 +
           (C148 * C490 - C327 * C378 - C148 * C678 + C62 * C772) * C63 * C61 *
               C14387 * C14589) *
              C14621 +
          ((C148 * C491 - C327 * C379 - C148 * C679 + C62 * C773) * C63 * C61 *
               C14387 * C2407 -
           (C148 * C150 - C327 * C74 - C148 * C269 + C62 * C329) * C63 * C61 *
               C14387 * C2406 -
           (C148 * C492 - C327 * C380 - C148 * C680 + C62 * C774) * C63 * C61 *
               C14387 * C14589) *
              C14608 +
          ((C148 * C151 - C327 * C75 - C148 * C270 + C62 * C330) * C63 * C61 *
               C14387 * C2406 -
           (C148 * C493 - C327 * C381 - C148 * C681 + C62 * C775) * C63 * C61 *
               C14387 * C2407 +
           (C148 * C494 - C327 * C382 - C148 * C682 + C62 * C776) * C63 * C61 *
               C14387 * C14589) *
              C14583)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) * C63 * C61 *
              C14387 * C2738 -
          (C148 * C489 - C327 * C377 - C148 * C677 + C62 * C771) * C63 * C61 *
              C14387 * C2739 +
          (C148 * C490 - C327 * C378 - C148 * C678 + C62 * C772) * C63 * C61 *
              C14387 * C2740 -
          (C148 * C2800 - C327 * C2744 - C148 * C2900 + C62 * C2950) * C63 *
              C61 * C14387 * C2741 +
          (C148 * C2801 - C327 * C2745 - C148 * C2901 + C62 * C2951) * C63 *
              C61 * C14387 * C2742) *
         C14341) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) * C63 * C61 *
               C4496 -
           (C148 * C930 - C327 * C818 - C148 * C1118 + C62 * C1212) * C63 *
               C61 * C4497 +
           (C148 * C931 - C327 * C819 - C148 * C1119 + C62 * C1213) * C63 *
               C61 * C14592) *
              C14369 * C14621 +
          ((C148 * C932 - C327 * C820 - C148 * C1120 + C62 * C1214) * C63 *
               C61 * C4497 -
           (C148 * C150 - C327 * C74 - C148 * C269 + C62 * C329) * C63 * C61 *
               C4496 -
           (C148 * C933 - C327 * C821 - C148 * C1121 + C62 * C1215) * C63 *
               C61 * C14592) *
              C14369 * C14608 +
          ((C148 * C151 - C327 * C75 - C148 * C270 + C62 * C330) * C63 * C61 *
               C4496 -
           (C148 * C934 - C327 * C822 - C148 * C1122 + C62 * C1216) * C63 *
               C61 * C4497 +
           (C148 * C935 - C327 * C823 - C148 * C1123 + C62 * C1217) * C63 *
               C61 * C14592) *
              C14369 * C14583)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) * C63 * C61 *
               C4496 -
           (C148 * C930 - C327 * C818 - C148 * C1118 + C62 * C1212) * C63 *
               C61 * C4497 +
           (C148 * C931 - C327 * C819 - C148 * C1119 + C62 * C1213) * C63 *
               C61 * C14592) *
              C14624 +
          ((C148 * C2038 - C327 * C1920 - C148 * C2256 + C62 * C2365) * C63 *
               C61 * C4497 -
           (C148 * C489 - C327 * C377 - C148 * C677 + C62 * C771) * C63 * C61 *
               C4496 -
           (C148 * C3084 - C327 * C2990 - C148 * C3254 + C62 * C3339) * C63 *
               C61 * C14592) *
              C14612 +
          ((C148 * C490 - C327 * C378 - C148 * C678 + C62 * C772) * C63 * C61 *
               C4496 -
           (C148 * C3085 - C327 * C2991 - C148 * C3255 + C62 * C3340) * C63 *
               C61 * C4497 +
           (C148 * C3086 - C327 * C2992 - C148 * C3256 + C62 * C3341) * C63 *
               C61 * C14592) *
              C14589) *
         C14341) /
            (p * q * std::sqrt(p + q));
    d2eexx[15] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   ((((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 *
                          C63 * C8850 -
                      (C71 * C824 - C72 * C818 - C71 * C825 + C61 * C836) *
                          C62 * C63 * C14474) *
                         C14563 +
                     ((C71 * C1923 - C72 * C1920 - C71 * C1924 + C61 * C1929) *
                          C62 * C63 * C14474 -
                      (C71 * C383 - C72 * C377 - C71 * C384 + C61 * C395) *
                          C62 * C63 * C8850) *
                         C14432) *
                        C14346 +
                    (((C71 * C828 - C72 * C820 - C71 * C829 + C61 * C838) *
                          C62 * C63 * C14474 -
                      (C71 * C80 - C72 * C74 - C71 * C81 + C61 * C89) * C62 *
                          C63 * C8850) *
                         C14563 +
                     ((C71 * C387 - C72 * C379 - C71 * C388 + C61 * C397) *
                          C62 * C63 * C8850 -
                      (C71 * C1925 - C72 * C1921 - C71 * C1926 + C61 * C1930) *
                          C62 * C63 * C14474) *
                         C14432) *
                        C14355 +
                    (((C71 * C82 - C72 * C75 - C71 * C83 + C61 * C90) * C62 *
                          C63 * C8850 -
                      (C71 * C832 - C72 * C822 - C71 * C833 + C61 * C840) *
                          C62 * C63 * C14474) *
                         C14563 +
                     ((C71 * C1927 - C72 * C1922 - C71 * C1928 + C61 * C1931) *
                          C62 * C63 * C14474 -
                      (C71 * C391 - C72 * C381 - C71 * C392 + C61 * C399) *
                          C62 * C63 * C8850) *
                         C14432) *
                        C7611)) /
                  (p * q * std::sqrt(p + q));
    d2eexy[15] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   (((((C63 * C116 - C115 * C73) * C71 +
                       (C63 * C121 - C115 * C79) * C61) *
                          C62 * C8850 +
                      ((C115 * C818 - C63 * C880) * C71 +
                       (C115 * C825 - C63 * C886) * C61) *
                          C62 * C14474) *
                         C14563 +
                     (((C115 * C377 - C63 * C439) * C71 +
                       (C115 * C384 - C63 * C445) * C61) *
                          C62 * C8850 +
                      ((C63 * C1982 - C115 * C1920) * C71 +
                       (C63 * C1985 - C115 * C1924) * C61) *
                          C62 * C14474) *
                         C14432) *
                        C14346 +
                    ((((C115 * C74 - C63 * C117) * C71 +
                       (C115 * C81 - C63 * C122) * C61) *
                          C62 * C8850 +
                      ((C63 * C882 - C115 * C820) * C71 +
                       (C63 * C888 - C115 * C829) * C61) *
                          C62 * C14474) *
                         C14563 +
                     (((C63 * C441 - C115 * C379) * C71 +
                       (C63 * C447 - C115 * C388) * C61) *
                          C62 * C8850 +
                      ((C115 * C1921 - C63 * C1983) * C71 +
                       (C115 * C1926 - C63 * C1986) * C61) *
                          C62 * C14474) *
                         C14432) *
                        C14355 +
                    ((((C63 * C118 - C115 * C75) * C71 +
                       (C63 * C123 - C115 * C83) * C61) *
                          C62 * C8850 +
                      ((C115 * C822 - C63 * C884) * C71 +
                       (C115 * C833 - C63 * C890) * C61) *
                          C62 * C14474) *
                         C14563 +
                     (((C115 * C381 - C63 * C443) * C71 +
                       (C115 * C392 - C63 * C449) * C61) *
                          C62 * C8850 +
                      ((C63 * C1984 - C115 * C1922) * C71 +
                       (C63 * C1987 - C115 * C1928) * C61) *
                          C62 * C14474) *
                         C14432) *
                        C7611)) /
                  (p * q * std::sqrt(p + q));
    d2eexz[15] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   (((((C62 * C149 - C148 * C73) * C71 +
                       (C62 * C154 - C148 * C79) * C61) *
                          C63 * C8850 +
                      ((C148 * C818 - C62 * C930) * C71 +
                       (C148 * C825 - C62 * C936) * C61) *
                          C63 * C14474) *
                         C14563 +
                     (((C148 * C377 - C62 * C489) * C71 +
                       (C148 * C384 - C62 * C495) * C61) *
                          C63 * C8850 +
                      ((C62 * C2038 - C148 * C1920) * C71 +
                       (C62 * C2041 - C148 * C1924) * C61) *
                          C63 * C14474) *
                         C14432) *
                        C14346 +
                    ((((C148 * C74 - C62 * C150) * C71 +
                       (C148 * C81 - C62 * C155) * C61) *
                          C63 * C8850 +
                      ((C62 * C932 - C148 * C820) * C71 +
                       (C62 * C938 - C148 * C829) * C61) *
                          C63 * C14474) *
                         C14563 +
                     (((C62 * C491 - C148 * C379) * C71 +
                       (C62 * C497 - C148 * C388) * C61) *
                          C63 * C8850 +
                      ((C148 * C1921 - C62 * C2039) * C71 +
                       (C148 * C1926 - C62 * C2042) * C61) *
                          C63 * C14474) *
                         C14432) *
                        C14355 +
                    ((((C62 * C151 - C148 * C75) * C71 +
                       (C62 * C156 - C148 * C83) * C61) *
                          C63 * C8850 +
                      ((C148 * C822 - C62 * C934) * C71 +
                       (C148 * C833 - C62 * C940) * C61) *
                          C63 * C14474) *
                         C14563 +
                     (((C148 * C381 - C62 * C493) * C71 +
                       (C148 * C392 - C62 * C499) * C61) *
                          C63 * C8850 +
                      ((C62 * C2040 - C148 * C1922) * C71 +
                       (C62 * C2043 - C148 * C1928) * C61) *
                          C63 * C14474) *
                         C14432) *
                        C7611)) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[15] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
                C62 * C8850 +
            ((C71 * C818 - C61 * C824) * C115 +
             (C71 * C980 - C61 * C986) * C63) *
                C62 * C14474) *
               C14563 +
           (((C71 * C377 - C61 * C383) * C115 +
             (C71 * C539 - C61 * C545) * C63) *
                C62 * C8850 +
            ((C61 * C1923 - C71 * C1920) * C115 +
             (C61 * C2097 - C71 * C2094) * C63) *
                C62 * C14474) *
               C14432) *
              C14346 +
          ((((C71 * C74 - C61 * C80) * C115 + (C71 * C182 - C61 * C187) * C63) *
                C62 * C8850 +
            ((C61 * C828 - C71 * C820) * C115 +
             (C61 * C988 - C71 * C982) * C63) *
                C62 * C14474) *
               C14563 +
           (((C61 * C387 - C71 * C379) * C115 +
             (C61 * C547 - C71 * C541) * C63) *
                C62 * C8850 +
            ((C71 * C1921 - C61 * C1925) * C115 +
             (C71 * C2095 - C61 * C2098) * C63) *
                C62 * C14474) *
               C14432) *
              C14355 +
          ((((C61 * C82 - C71 * C75) * C115 + (C61 * C188 - C71 * C183) * C63) *
                C62 * C8850 +
            ((C71 * C822 - C61 * C832) * C115 +
             (C71 * C984 - C61 * C990) * C63) *
                C62 * C14474) *
               C14563 +
           (((C71 * C381 - C61 * C391) * C115 +
             (C71 * C543 - C61 * C549) * C63) *
                C62 * C8850 +
            ((C61 * C1927 - C71 * C1922) * C115 +
             (C61 * C2099 - C71 * C2096) * C63) *
                C62 * C14474) *
               C14432) *
              C7611)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[15] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) * C61 * C62 *
                C8850 -
            (C115 * C880 - C213 * C818 - C115 * C980 + C63 * C1030) * C61 *
                C62 * C14474) *
               C14563 +
           ((C115 * C1982 - C213 * C1920 - C115 * C2094 + C63 * C2150) * C61 *
                C62 * C14474 -
            (C115 * C439 - C213 * C377 - C115 * C539 + C63 * C589) * C61 * C62 *
                C8850) *
               C14432) *
              C14346 +
          (((C115 * C882 - C213 * C820 - C115 * C982 + C63 * C1032) * C61 *
                C62 * C14474 -
            (C115 * C117 - C213 * C74 - C115 * C182 + C63 * C215) * C61 * C62 *
                C8850) *
               C14563 +
           ((C115 * C441 - C213 * C379 - C115 * C541 + C63 * C591) * C61 * C62 *
                C8850 -
            (C115 * C1983 - C213 * C1921 - C115 * C2095 + C63 * C2151) * C61 *
                C62 * C14474) *
               C14432) *
              C14355 +
          (((C115 * C118 - C213 * C75 - C115 * C183 + C63 * C216) * C61 * C62 *
                C8850 -
            (C115 * C884 - C213 * C822 - C115 * C984 + C63 * C1034) * C61 *
                C62 * C14474) *
               C14563 +
           ((C115 * C1984 - C213 * C1922 - C115 * C2096 + C63 * C2152) * C61 *
                C62 * C14474 -
            (C115 * C443 - C213 * C381 - C115 * C543 + C63 * C593) * C61 * C62 *
                C8850) *
               C14432) *
              C7611)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[15] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   (((((C62 * C149 - C148 * C73) * C115 +
                       (C62 * C241 - C148 * C181) * C63) *
                          C61 * C8850 +
                      ((C148 * C818 - C62 * C930) * C115 +
                       (C148 * C980 - C62 * C1074) * C63) *
                          C61 * C14474) *
                         C14563 +
                     (((C148 * C377 - C62 * C489) * C115 +
                       (C148 * C539 - C62 * C633) * C63) *
                          C61 * C8850 +
                      ((C62 * C2038 - C148 * C1920) * C115 +
                       (C62 * C2203 - C148 * C2094) * C63) *
                          C61 * C14474) *
                         C14432) *
                        C14346 +
                    ((((C148 * C74 - C62 * C150) * C115 +
                       (C148 * C182 - C62 * C242) * C63) *
                          C61 * C8850 +
                      ((C62 * C932 - C148 * C820) * C115 +
                       (C62 * C1076 - C148 * C982) * C63) *
                          C61 * C14474) *
                         C14563 +
                     (((C62 * C491 - C148 * C379) * C115 +
                       (C62 * C635 - C148 * C541) * C63) *
                          C61 * C8850 +
                      ((C148 * C1921 - C62 * C2039) * C115 +
                       (C148 * C2095 - C62 * C2204) * C63) *
                          C61 * C14474) *
                         C14432) *
                        C14355 +
                    ((((C62 * C151 - C148 * C75) * C115 +
                       (C62 * C243 - C148 * C183) * C63) *
                          C61 * C8850 +
                      ((C148 * C822 - C62 * C934) * C115 +
                       (C148 * C984 - C62 * C1078) * C63) *
                          C61 * C14474) *
                         C14563 +
                     (((C148 * C381 - C62 * C493) * C115 +
                       (C148 * C543 - C62 * C637) * C63) *
                          C61 * C8850 +
                      ((C62 * C2040 - C148 * C1922) * C115 +
                       (C62 * C2205 - C148 * C2096) * C63) *
                          C61 * C14474) *
                         C14432) *
                        C7611)) /
                  (p * q * std::sqrt(p + q));
    d2eezx[15] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
                C63 * C8850 +
            ((C71 * C818 - C61 * C824) * C148 +
             (C71 * C1118 - C61 * C1124) * C62) *
                C63 * C14474) *
               C14563 +
           (((C71 * C377 - C61 * C383) * C148 +
             (C71 * C677 - C61 * C683) * C62) *
                C63 * C8850 +
            ((C61 * C1923 - C71 * C1920) * C148 +
             (C61 * C2259 - C71 * C2256) * C62) *
                C63 * C14474) *
               C14432) *
              C14346 +
          ((((C71 * C74 - C61 * C80) * C148 + (C71 * C269 - C61 * C274) * C62) *
                C63 * C8850 +
            ((C61 * C828 - C71 * C820) * C148 +
             (C61 * C1126 - C71 * C1120) * C62) *
                C63 * C14474) *
               C14563 +
           (((C61 * C387 - C71 * C379) * C148 +
             (C61 * C685 - C71 * C679) * C62) *
                C63 * C8850 +
            ((C71 * C1921 - C61 * C1925) * C148 +
             (C71 * C2257 - C61 * C2260) * C62) *
                C63 * C14474) *
               C14432) *
              C14355 +
          ((((C61 * C82 - C71 * C75) * C148 + (C61 * C275 - C71 * C270) * C62) *
                C63 * C8850 +
            ((C71 * C822 - C61 * C832) * C148 +
             (C71 * C1122 - C61 * C1128) * C62) *
                C63 * C14474) *
               C14563 +
           (((C71 * C381 - C61 * C391) * C148 +
             (C71 * C681 - C61 * C687) * C62) *
                C63 * C8850 +
            ((C61 * C1927 - C71 * C1922) * C148 +
             (C61 * C2261 - C71 * C2258) * C62) *
                C63 * C14474) *
               C14432) *
              C7611)) /
        (p * q * std::sqrt(p + q));
    d2eezy[15] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   (((((C63 * C116 - C115 * C73) * C148 +
                       (C63 * C300 - C115 * C268) * C62) *
                          C61 * C8850 +
                      ((C115 * C818 - C63 * C880) * C148 +
                       (C115 * C1118 - C63 * C1168) * C62) *
                          C61 * C14474) *
                         C14563 +
                     (((C115 * C377 - C63 * C439) * C148 +
                       (C115 * C677 - C63 * C727) * C62) *
                          C61 * C8850 +
                      ((C63 * C1982 - C115 * C1920) * C148 +
                       (C63 * C2312 - C115 * C2256) * C62) *
                          C61 * C14474) *
                         C14432) *
                        C14346 +
                    ((((C115 * C74 - C63 * C117) * C148 +
                       (C115 * C269 - C63 * C301) * C62) *
                          C61 * C8850 +
                      ((C63 * C882 - C115 * C820) * C148 +
                       (C63 * C1170 - C115 * C1120) * C62) *
                          C61 * C14474) *
                         C14563 +
                     (((C63 * C441 - C115 * C379) * C148 +
                       (C63 * C729 - C115 * C679) * C62) *
                          C61 * C8850 +
                      ((C115 * C1921 - C63 * C1983) * C148 +
                       (C115 * C2257 - C63 * C2313) * C62) *
                          C61 * C14474) *
                         C14432) *
                        C14355 +
                    ((((C63 * C118 - C115 * C75) * C148 +
                       (C63 * C302 - C115 * C270) * C62) *
                          C61 * C8850 +
                      ((C115 * C822 - C63 * C884) * C148 +
                       (C115 * C1122 - C63 * C1172) * C62) *
                          C61 * C14474) *
                         C14563 +
                     (((C115 * C381 - C63 * C443) * C148 +
                       (C115 * C681 - C63 * C731) * C62) *
                          C61 * C8850 +
                      ((C63 * C1984 - C115 * C1922) * C148 +
                       (C63 * C2314 - C115 * C2258) * C62) *
                          C61 * C14474) *
                         C14432) *
                        C7611)) /
                  (p * q * std::sqrt(p + q));
    d2eezz[15] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) * C63 * C61 *
                C8850 -
            (C148 * C930 - C327 * C818 - C148 * C1118 + C62 * C1212) * C63 *
                C61 * C14474) *
               C14563 +
           ((C148 * C2038 - C327 * C1920 - C148 * C2256 + C62 * C2365) * C63 *
                C61 * C14474 -
            (C148 * C489 - C327 * C377 - C148 * C677 + C62 * C771) * C63 * C61 *
                C8850) *
               C14432) *
              C14346 +
          (((C148 * C932 - C327 * C820 - C148 * C1120 + C62 * C1214) * C63 *
                C61 * C14474 -
            (C148 * C150 - C327 * C74 - C148 * C269 + C62 * C329) * C63 * C61 *
                C8850) *
               C14563 +
           ((C148 * C491 - C327 * C379 - C148 * C679 + C62 * C773) * C63 * C61 *
                C8850 -
            (C148 * C2039 - C327 * C1921 - C148 * C2257 + C62 * C2366) * C63 *
                C61 * C14474) *
               C14432) *
              C14355 +
          (((C148 * C151 - C327 * C75 - C148 * C270 + C62 * C330) * C63 * C61 *
                C8850 -
            (C148 * C934 - C327 * C822 - C148 * C1122 + C62 * C1216) * C63 *
                C61 * C14474) *
               C14563 +
           ((C148 * C2040 - C327 * C1922 - C148 * C2258 + C62 * C2367) * C63 *
                C61 * C14474 -
            (C148 * C493 - C327 * C381 - C148 * C681 + C62 * C775) * C63 * C61 *
                C8850) *
               C14432) *
              C7611)) /
        (p * q * std::sqrt(p + q));
    d2eexx[16] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   ((((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 *
                          C63 * C14470 -
                      (C71 * C824 - C72 * C818 - C71 * C825 + C61 * C836) *
                          C62 * C63 * C14477 +
                      (C71 * C826 - C72 * C819 - C71 * C827 + C61 * C837) *
                          C62 * C63 * C10374) *
                         C14563 +
                     ((C71 * C1923 - C72 * C1920 - C71 * C1924 + C61 * C1929) *
                          C62 * C63 * C14477 -
                      (C71 * C383 - C72 * C377 - C71 * C384 + C61 * C395) *
                          C62 * C63 * C14470 -
                      (C71 * C2993 - C72 * C2990 - C71 * C2994 + C61 * C2999) *
                          C62 * C63 * C10374) *
                         C14432) *
                        C6844 +
                    (((C71 * C828 - C72 * C820 - C71 * C829 + C61 * C838) *
                          C62 * C63 * C14477 -
                      (C71 * C80 - C72 * C74 - C71 * C81 + C61 * C89) * C62 *
                          C63 * C14470 -
                      (C71 * C830 - C72 * C821 - C71 * C831 + C61 * C839) *
                          C62 * C63 * C10374) *
                         C14563 +
                     ((C71 * C387 - C72 * C379 - C71 * C388 + C61 * C397) *
                          C62 * C63 * C14470 -
                      (C71 * C1925 - C72 * C1921 - C71 * C1926 + C61 * C1930) *
                          C62 * C63 * C14477 +
                      (C71 * C5431 - C72 * C5430 - C71 * C5432 + C61 * C5433) *
                          C62 * C63 * C10374) *
                         C14432) *
                        C14352)) /
                  (p * q * std::sqrt(p + q));
    d2eexy[16] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   (((((C63 * C116 - C115 * C73) * C71 +
                       (C63 * C121 - C115 * C79) * C61) *
                          C62 * C14470 +
                      ((C115 * C818 - C63 * C880) * C71 +
                       (C115 * C825 - C63 * C886) * C61) *
                          C62 * C14477 +
                      ((C63 * C881 - C115 * C819) * C71 +
                       (C63 * C887 - C115 * C827) * C61) *
                          C62 * C10374) *
                         C14563 +
                     (((C115 * C377 - C63 * C439) * C71 +
                       (C115 * C384 - C63 * C445) * C61) *
                          C62 * C14470 +
                      ((C63 * C1982 - C115 * C1920) * C71 +
                       (C63 * C1985 - C115 * C1924) * C61) *
                          C62 * C14477 +
                      ((C115 * C2990 - C63 * C3040) * C71 +
                       (C115 * C2994 - C63 * C3043) * C61) *
                          C62 * C10374) *
                         C14432) *
                        C6844 +
                    ((((C115 * C74 - C63 * C117) * C71 +
                       (C115 * C81 - C63 * C122) * C61) *
                          C62 * C14470 +
                      ((C63 * C882 - C115 * C820) * C71 +
                       (C63 * C888 - C115 * C829) * C61) *
                          C62 * C14477 +
                      ((C115 * C821 - C63 * C883) * C71 +
                       (C115 * C831 - C63 * C889) * C61) *
                          C62 * C10374) *
                         C14563 +
                     (((C63 * C441 - C115 * C379) * C71 +
                       (C63 * C447 - C115 * C388) * C61) *
                          C62 * C14470 +
                      ((C115 * C1921 - C63 * C1983) * C71 +
                       (C115 * C1926 - C63 * C1986) * C61) *
                          C62 * C14477 +
                      ((C63 * C5484 - C115 * C5430) * C71 +
                       (C63 * C5485 - C115 * C5432) * C61) *
                          C62 * C10374) *
                         C14432) *
                        C14352)) /
                  (p * q * std::sqrt(p + q));
    d2eexz[16] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   (((((C62 * C149 - C148 * C73) * C71 +
                       (C62 * C154 - C148 * C79) * C61) *
                          C63 * C14470 +
                      ((C148 * C818 - C62 * C930) * C71 +
                       (C148 * C825 - C62 * C936) * C61) *
                          C63 * C14477 +
                      ((C62 * C931 - C148 * C819) * C71 +
                       (C62 * C937 - C148 * C827) * C61) *
                          C63 * C10374) *
                         C14563 +
                     (((C148 * C377 - C62 * C489) * C71 +
                       (C148 * C384 - C62 * C495) * C61) *
                          C63 * C14470 +
                      ((C62 * C2038 - C148 * C1920) * C71 +
                       (C62 * C2041 - C148 * C1924) * C61) *
                          C63 * C14477 +
                      ((C148 * C2990 - C62 * C3084) * C71 +
                       (C148 * C2994 - C62 * C3087) * C61) *
                          C63 * C10374) *
                         C14432) *
                        C6844 +
                    ((((C148 * C74 - C62 * C150) * C71 +
                       (C148 * C81 - C62 * C155) * C61) *
                          C63 * C14470 +
                      ((C62 * C932 - C148 * C820) * C71 +
                       (C62 * C938 - C148 * C829) * C61) *
                          C63 * C14477 +
                      ((C148 * C821 - C62 * C933) * C71 +
                       (C148 * C831 - C62 * C939) * C61) *
                          C63 * C10374) *
                         C14563 +
                     (((C62 * C491 - C148 * C379) * C71 +
                       (C62 * C497 - C148 * C388) * C61) *
                          C63 * C14470 +
                      ((C148 * C1921 - C62 * C2039) * C71 +
                       (C148 * C1926 - C62 * C2042) * C61) *
                          C63 * C14477 +
                      ((C62 * C5536 - C148 * C5430) * C71 +
                       (C62 * C5537 - C148 * C5432) * C61) *
                          C63 * C10374) *
                         C14432) *
                        C14352)) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[16] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
                C62 * C14470 +
            ((C71 * C818 - C61 * C824) * C115 +
             (C71 * C980 - C61 * C986) * C63) *
                C62 * C14477 +
            ((C61 * C826 - C71 * C819) * C115 +
             (C61 * C987 - C71 * C981) * C63) *
                C62 * C10374) *
               C14563 +
           (((C71 * C377 - C61 * C383) * C115 +
             (C71 * C539 - C61 * C545) * C63) *
                C62 * C14470 +
            ((C61 * C1923 - C71 * C1920) * C115 +
             (C61 * C2097 - C71 * C2094) * C63) *
                C62 * C14477 +
            ((C71 * C2990 - C61 * C2993) * C115 +
             (C71 * C3128 - C61 * C3131) * C63) *
                C62 * C10374) *
               C14432) *
              C6844 +
          ((((C71 * C74 - C61 * C80) * C115 + (C71 * C182 - C61 * C187) * C63) *
                C62 * C14470 +
            ((C61 * C828 - C71 * C820) * C115 +
             (C61 * C988 - C71 * C982) * C63) *
                C62 * C14477 +
            ((C71 * C821 - C61 * C830) * C115 +
             (C71 * C983 - C61 * C989) * C63) *
                C62 * C10374) *
               C14563 +
           (((C61 * C387 - C71 * C379) * C115 +
             (C61 * C547 - C71 * C541) * C63) *
                C62 * C14470 +
            ((C71 * C1921 - C61 * C1925) * C115 +
             (C71 * C2095 - C61 * C2098) * C63) *
                C62 * C14477 +
            ((C61 * C5431 - C71 * C5430) * C115 +
             (C61 * C5589 - C71 * C5588) * C63) *
                C62 * C10374) *
               C14432) *
              C14352)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[16] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) * C61 * C62 *
                C14470 -
            (C115 * C880 - C213 * C818 - C115 * C980 + C63 * C1030) * C61 *
                C62 * C14477 +
            (C115 * C881 - C213 * C819 - C115 * C981 + C63 * C1031) * C61 *
                C62 * C10374) *
               C14563 +
           ((C115 * C1982 - C213 * C1920 - C115 * C2094 + C63 * C2150) * C61 *
                C62 * C14477 -
            (C115 * C439 - C213 * C377 - C115 * C539 + C63 * C589) * C61 * C62 *
                C14470 -
            (C115 * C3040 - C213 * C2990 - C115 * C3128 + C63 * C3172) * C61 *
                C62 * C10374) *
               C14432) *
              C6844 +
          (((C115 * C882 - C213 * C820 - C115 * C982 + C63 * C1032) * C61 *
                C62 * C14477 -
            (C115 * C117 - C213 * C74 - C115 * C182 + C63 * C215) * C61 * C62 *
                C14470 -
            (C115 * C883 - C213 * C821 - C115 * C983 + C63 * C1033) * C61 *
                C62 * C10374) *
               C14563 +
           ((C115 * C441 - C213 * C379 - C115 * C541 + C63 * C591) * C61 * C62 *
                C14470 -
            (C115 * C1983 - C213 * C1921 - C115 * C2095 + C63 * C2151) * C61 *
                C62 * C14477 +
            (C115 * C5484 - C213 * C5430 - C115 * C5588 + C63 * C5640) * C61 *
                C62 * C10374) *
               C14432) *
              C14352)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[16] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   (((((C62 * C149 - C148 * C73) * C115 +
                       (C62 * C241 - C148 * C181) * C63) *
                          C61 * C14470 +
                      ((C148 * C818 - C62 * C930) * C115 +
                       (C148 * C980 - C62 * C1074) * C63) *
                          C61 * C14477 +
                      ((C62 * C931 - C148 * C819) * C115 +
                       (C62 * C1075 - C148 * C981) * C63) *
                          C61 * C10374) *
                         C14563 +
                     (((C148 * C377 - C62 * C489) * C115 +
                       (C148 * C539 - C62 * C633) * C63) *
                          C61 * C14470 +
                      ((C62 * C2038 - C148 * C1920) * C115 +
                       (C62 * C2203 - C148 * C2094) * C63) *
                          C61 * C14477 +
                      ((C148 * C2990 - C62 * C3084) * C115 +
                       (C148 * C3128 - C62 * C3213) * C63) *
                          C61 * C10374) *
                         C14432) *
                        C6844 +
                    ((((C148 * C74 - C62 * C150) * C115 +
                       (C148 * C182 - C62 * C242) * C63) *
                          C61 * C14470 +
                      ((C62 * C932 - C148 * C820) * C115 +
                       (C62 * C1076 - C148 * C982) * C63) *
                          C61 * C14477 +
                      ((C148 * C821 - C62 * C933) * C115 +
                       (C148 * C983 - C62 * C1077) * C63) *
                          C61 * C10374) *
                         C14563 +
                     (((C62 * C491 - C148 * C379) * C115 +
                       (C62 * C635 - C148 * C541) * C63) *
                          C61 * C14470 +
                      ((C148 * C1921 - C62 * C2039) * C115 +
                       (C148 * C2095 - C62 * C2204) * C63) *
                          C61 * C14477 +
                      ((C62 * C5536 - C148 * C5430) * C115 +
                       (C62 * C5691 - C148 * C5588) * C63) *
                          C61 * C10374) *
                         C14432) *
                        C14352)) /
                  (p * q * std::sqrt(p + q));
    d2eezx[16] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
                C63 * C14470 +
            ((C71 * C818 - C61 * C824) * C148 +
             (C71 * C1118 - C61 * C1124) * C62) *
                C63 * C14477 +
            ((C61 * C826 - C71 * C819) * C148 +
             (C61 * C1125 - C71 * C1119) * C62) *
                C63 * C10374) *
               C14563 +
           (((C71 * C377 - C61 * C383) * C148 +
             (C71 * C677 - C61 * C683) * C62) *
                C63 * C14470 +
            ((C61 * C1923 - C71 * C1920) * C148 +
             (C61 * C2259 - C71 * C2256) * C62) *
                C63 * C14477 +
            ((C71 * C2990 - C61 * C2993) * C148 +
             (C71 * C3254 - C61 * C3257) * C62) *
                C63 * C10374) *
               C14432) *
              C6844 +
          ((((C71 * C74 - C61 * C80) * C148 + (C71 * C269 - C61 * C274) * C62) *
                C63 * C14470 +
            ((C61 * C828 - C71 * C820) * C148 +
             (C61 * C1126 - C71 * C1120) * C62) *
                C63 * C14477 +
            ((C71 * C821 - C61 * C830) * C148 +
             (C71 * C1121 - C61 * C1127) * C62) *
                C63 * C10374) *
               C14563 +
           (((C61 * C387 - C71 * C379) * C148 +
             (C61 * C685 - C71 * C679) * C62) *
                C63 * C14470 +
            ((C71 * C1921 - C61 * C1925) * C148 +
             (C71 * C2257 - C61 * C2260) * C62) *
                C63 * C14477 +
            ((C61 * C5431 - C71 * C5430) * C148 +
             (C61 * C5743 - C71 * C5742) * C62) *
                C63 * C10374) *
               C14432) *
              C14352)) /
        (p * q * std::sqrt(p + q));
    d2eezy[16] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   (((((C63 * C116 - C115 * C73) * C148 +
                       (C63 * C300 - C115 * C268) * C62) *
                          C61 * C14470 +
                      ((C115 * C818 - C63 * C880) * C148 +
                       (C115 * C1118 - C63 * C1168) * C62) *
                          C61 * C14477 +
                      ((C63 * C881 - C115 * C819) * C148 +
                       (C63 * C1169 - C115 * C1119) * C62) *
                          C61 * C10374) *
                         C14563 +
                     (((C115 * C377 - C63 * C439) * C148 +
                       (C115 * C677 - C63 * C727) * C62) *
                          C61 * C14470 +
                      ((C63 * C1982 - C115 * C1920) * C148 +
                       (C63 * C2312 - C115 * C2256) * C62) *
                          C61 * C14477 +
                      ((C115 * C2990 - C63 * C3040) * C148 +
                       (C115 * C3254 - C63 * C3298) * C62) *
                          C61 * C10374) *
                         C14432) *
                        C6844 +
                    ((((C115 * C74 - C63 * C117) * C148 +
                       (C115 * C269 - C63 * C301) * C62) *
                          C61 * C14470 +
                      ((C63 * C882 - C115 * C820) * C148 +
                       (C63 * C1170 - C115 * C1120) * C62) *
                          C61 * C14477 +
                      ((C115 * C821 - C63 * C883) * C148 +
                       (C115 * C1121 - C63 * C1171) * C62) *
                          C61 * C10374) *
                         C14563 +
                     (((C63 * C441 - C115 * C379) * C148 +
                       (C63 * C729 - C115 * C679) * C62) *
                          C61 * C14470 +
                      ((C115 * C1921 - C63 * C1983) * C148 +
                       (C115 * C2257 - C63 * C2313) * C62) *
                          C61 * C14477 +
                      ((C63 * C5484 - C115 * C5430) * C148 +
                       (C63 * C5794 - C115 * C5742) * C62) *
                          C61 * C10374) *
                         C14432) *
                        C14352)) /
                  (p * q * std::sqrt(p + q));
    d2eezz[16] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) * C63 * C61 *
                C14470 -
            (C148 * C930 - C327 * C818 - C148 * C1118 + C62 * C1212) * C63 *
                C61 * C14477 +
            (C148 * C931 - C327 * C819 - C148 * C1119 + C62 * C1213) * C63 *
                C61 * C10374) *
               C14563 +
           ((C148 * C2038 - C327 * C1920 - C148 * C2256 + C62 * C2365) * C63 *
                C61 * C14477 -
            (C148 * C489 - C327 * C377 - C148 * C677 + C62 * C771) * C63 * C61 *
                C14470 -
            (C148 * C3084 - C327 * C2990 - C148 * C3254 + C62 * C3339) * C63 *
                C61 * C10374) *
               C14432) *
              C6844 +
          (((C148 * C932 - C327 * C820 - C148 * C1120 + C62 * C1214) * C63 *
                C61 * C14477 -
            (C148 * C150 - C327 * C74 - C148 * C269 + C62 * C329) * C63 * C61 *
                C14470 -
            (C148 * C933 - C327 * C821 - C148 * C1121 + C62 * C1215) * C63 *
                C61 * C10374) *
               C14563 +
           ((C148 * C491 - C327 * C379 - C148 * C679 + C62 * C773) * C63 * C61 *
                C14470 -
            (C148 * C2039 - C327 * C1921 - C148 * C2257 + C62 * C2366) * C63 *
                C61 * C14477 +
            (C148 * C5536 - C327 * C5430 - C148 * C5742 + C62 * C5845) * C63 *
                C61 * C10374) *
               C14432) *
              C14352)) /
        (p * q * std::sqrt(p + q));
    d2eexx[17] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 * C63 *
                C8850 -
            (C71 * C824 - C72 * C818 - C71 * C825 + C61 * C836) * C62 * C63 *
                C14474) *
               C14624 +
           ((C71 * C1923 - C72 * C1920 - C71 * C1924 + C61 * C1929) * C62 *
                C63 * C14474 -
            (C71 * C383 - C72 * C377 - C71 * C384 + C61 * C395) * C62 * C63 *
                C8850) *
               C14612 +
           ((C71 * C385 - C72 * C378 - C71 * C386 + C61 * C396) * C62 * C63 *
                C8850 -
            (C71 * C2995 - C72 * C2991 - C71 * C2996 + C61 * C3000) * C62 *
                C63 * C14474) *
               C14589) *
              C6844 +
          (((C71 * C828 - C72 * C820 - C71 * C829 + C61 * C838) * C62 * C63 *
                C14474 -
            (C71 * C80 - C72 * C74 - C71 * C81 + C61 * C89) * C62 * C63 *
                C8850) *
               C14624 +
           ((C71 * C387 - C72 * C379 - C71 * C388 + C61 * C397) * C62 * C63 *
                C8850 -
            (C71 * C1925 - C72 * C1921 - C71 * C1926 + C61 * C1930) * C62 *
                C63 * C14474) *
               C14612 +
           ((C71 * C3721 - C72 * C3720 - C71 * C3722 + C61 * C3723) * C62 *
                C63 * C14474 -
            (C71 * C389 - C72 * C380 - C71 * C390 + C61 * C398) * C62 * C63 *
                C8850) *
               C14589) *
              C14352)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 * C63 * C8850 -
           (C71 * C824 - C72 * C818 - C71 * C825 + C61 * C836) * C62 * C63 *
               C14474) *
              C14369 * C14630 +
          ((C71 * C828 - C72 * C820 - C71 * C829 + C61 * C838) * C62 * C63 *
               C14474 -
           (C71 * C80 - C72 * C74 - C71 * C81 + C61 * C89) * C62 * C63 *
               C8850) *
              C14369 * C14623 +
          ((C71 * C82 - C72 * C75 - C71 * C83 + C61 * C90) * C62 * C63 * C8850 -
           (C71 * C832 - C72 * C822 - C71 * C833 + C61 * C840) * C62 * C63 *
               C14474) *
              C14369 * C14610 +
          ((C71 * C1583 - C72 * C1582 - C71 * C1584 + C61 * C1585) * C62 * C63 *
               C14474 -
           (C71 * C84 - C72 * C76 - C71 * C85 + C61 * C91) * C62 * C63 *
               C8850) *
              C14369 * C14593)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 * C63 *
               C14632 -
           (C71 * C824 - C72 * C818 - C71 * C825 + C61 * C836) * C62 * C63 *
               C14629 +
           (C71 * C826 - C72 * C819 - C71 * C827 + C61 * C837) * C62 * C63 *
               C14620 -
           (C71 * C5174 - C72 * C5172 - C71 * C5175 + C61 * C5178) * C62 * C63 *
               C14605) *
              C14369 * C6844 +
          ((C71 * C828 - C72 * C820 - C71 * C829 + C61 * C838) * C62 * C63 *
               C14629 -
           (C71 * C80 - C72 * C74 - C71 * C81 + C61 * C89) * C62 * C63 *
               C14632 -
           (C71 * C830 - C72 * C821 - C71 * C831 + C61 * C839) * C62 * C63 *
               C14620 +
           (C71 * C5885 - C72 * C5884 - C71 * C5886 + C61 * C5887) * C62 * C63 *
               C14605) *
              C14369 * C14352)) /
            (p * q * std::sqrt(p + q));
    d2eexy[17] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C63 * C116 - C115 * C73) * C71 +
             (C63 * C121 - C115 * C79) * C61) *
                C62 * C8850 +
            ((C115 * C818 - C63 * C880) * C71 +
             (C115 * C825 - C63 * C886) * C61) *
                C62 * C14474) *
               C14624 +
           (((C115 * C377 - C63 * C439) * C71 +
             (C115 * C384 - C63 * C445) * C61) *
                C62 * C8850 +
            ((C63 * C1982 - C115 * C1920) * C71 +
             (C63 * C1985 - C115 * C1924) * C61) *
                C62 * C14474) *
               C14612 +
           (((C63 * C440 - C115 * C378) * C71 +
             (C63 * C446 - C115 * C386) * C61) *
                C62 * C8850 +
            ((C115 * C2991 - C63 * C3041) * C71 +
             (C115 * C2996 - C63 * C3044) * C61) *
                C62 * C14474) *
               C14589) *
              C6844 +
          ((((C115 * C74 - C63 * C117) * C71 +
             (C115 * C81 - C63 * C122) * C61) *
                C62 * C8850 +
            ((C63 * C882 - C115 * C820) * C71 +
             (C63 * C888 - C115 * C829) * C61) *
                C62 * C14474) *
               C14624 +
           (((C63 * C441 - C115 * C379) * C71 +
             (C63 * C447 - C115 * C388) * C61) *
                C62 * C8850 +
            ((C115 * C1921 - C63 * C1983) * C71 +
             (C115 * C1926 - C63 * C1986) * C61) *
                C62 * C14474) *
               C14612 +
           (((C115 * C380 - C63 * C442) * C71 +
             (C115 * C390 - C63 * C448) * C61) *
                C62 * C8850 +
            ((C63 * C3774 - C115 * C3720) * C71 +
             (C63 * C3775 - C115 * C3722) * C61) *
                C62 * C14474) *
               C14589) *
              C14352)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C63 * C116 - C115 * C73) * C71 + (C63 * C121 - C115 * C79) * C61) *
               C62 * C8850 +
           ((C115 * C818 - C63 * C880) * C71 +
            (C115 * C825 - C63 * C886) * C61) *
               C62 * C14474) *
              C14369 * C14630 +
          (((C115 * C74 - C63 * C117) * C71 + (C115 * C81 - C63 * C122) * C61) *
               C62 * C8850 +
           ((C63 * C882 - C115 * C820) * C71 +
            (C63 * C888 - C115 * C829) * C61) *
               C62 * C14474) *
              C14369 * C14623 +
          (((C63 * C118 - C115 * C75) * C71 + (C63 * C123 - C115 * C83) * C61) *
               C62 * C8850 +
           ((C115 * C822 - C63 * C884) * C71 +
            (C115 * C833 - C63 * C890) * C61) *
               C62 * C14474) *
              C14369 * C14610 +
          (((C115 * C76 - C63 * C119) * C71 + (C115 * C85 - C63 * C124) * C61) *
               C62 * C8850 +
           ((C63 * C1620 - C115 * C1582) * C71 +
            (C63 * C1621 - C115 * C1584) * C61) *
               C62 * C14474) *
              C14369 * C14593)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C63 * C116 - C115 * C73) * C71 + (C63 * C121 - C115 * C79) * C61) *
               C62 * C14632 +
           ((C115 * C818 - C63 * C880) * C71 +
            (C115 * C825 - C63 * C886) * C61) *
               C62 * C14629 +
           ((C63 * C881 - C115 * C819) * C71 +
            (C63 * C887 - C115 * C827) * C61) *
               C62 * C14620 +
           ((C115 * C5172 - C63 * C5202) * C71 +
            (C115 * C5175 - C63 * C5204) * C61) *
               C62 * C14605) *
              C14369 * C6844 +
          (((C115 * C74 - C63 * C117) * C71 + (C115 * C81 - C63 * C122) * C61) *
               C62 * C14632 +
           ((C63 * C882 - C115 * C820) * C71 +
            (C63 * C888 - C115 * C829) * C61) *
               C62 * C14629 +
           ((C115 * C821 - C63 * C883) * C71 +
            (C115 * C831 - C63 * C889) * C61) *
               C62 * C14620 +
           ((C63 * C5922 - C115 * C5884) * C71 +
            (C63 * C5923 - C115 * C5886) * C61) *
               C62 * C14605) *
              C14369 * C14352)) /
            (p * q * std::sqrt(p + q));
    d2eexz[17] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C62 * C149 - C148 * C73) * C71 +
             (C62 * C154 - C148 * C79) * C61) *
                C63 * C8850 +
            ((C148 * C818 - C62 * C930) * C71 +
             (C148 * C825 - C62 * C936) * C61) *
                C63 * C14474) *
               C14624 +
           (((C148 * C377 - C62 * C489) * C71 +
             (C148 * C384 - C62 * C495) * C61) *
                C63 * C8850 +
            ((C62 * C2038 - C148 * C1920) * C71 +
             (C62 * C2041 - C148 * C1924) * C61) *
                C63 * C14474) *
               C14612 +
           (((C62 * C490 - C148 * C378) * C71 +
             (C62 * C496 - C148 * C386) * C61) *
                C63 * C8850 +
            ((C148 * C2991 - C62 * C3085) * C71 +
             (C148 * C2996 - C62 * C3088) * C61) *
                C63 * C14474) *
               C14589) *
              C6844 +
          ((((C148 * C74 - C62 * C150) * C71 +
             (C148 * C81 - C62 * C155) * C61) *
                C63 * C8850 +
            ((C62 * C932 - C148 * C820) * C71 +
             (C62 * C938 - C148 * C829) * C61) *
                C63 * C14474) *
               C14624 +
           (((C62 * C491 - C148 * C379) * C71 +
             (C62 * C497 - C148 * C388) * C61) *
                C63 * C8850 +
            ((C148 * C1921 - C62 * C2039) * C71 +
             (C148 * C1926 - C62 * C2042) * C61) *
                C63 * C14474) *
               C14612 +
           (((C148 * C380 - C62 * C492) * C71 +
             (C148 * C390 - C62 * C498) * C61) *
                C63 * C8850 +
            ((C62 * C3826 - C148 * C3720) * C71 +
             (C62 * C3827 - C148 * C3722) * C61) *
                C63 * C14474) *
               C14589) *
              C14352)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C62 * C149 - C148 * C73) * C71 + (C62 * C154 - C148 * C79) * C61) *
               C63 * C8850 +
           ((C148 * C818 - C62 * C930) * C71 +
            (C148 * C825 - C62 * C936) * C61) *
               C63 * C14474) *
              C14369 * C14630 +
          (((C148 * C74 - C62 * C150) * C71 + (C148 * C81 - C62 * C155) * C61) *
               C63 * C8850 +
           ((C62 * C932 - C148 * C820) * C71 +
            (C62 * C938 - C148 * C829) * C61) *
               C63 * C14474) *
              C14369 * C14623 +
          (((C62 * C151 - C148 * C75) * C71 + (C62 * C156 - C148 * C83) * C61) *
               C63 * C8850 +
           ((C148 * C822 - C62 * C934) * C71 +
            (C148 * C833 - C62 * C940) * C61) *
               C63 * C14474) *
              C14369 * C14610 +
          (((C148 * C76 - C62 * C152) * C71 + (C148 * C85 - C62 * C157) * C61) *
               C63 * C8850 +
           ((C62 * C1656 - C148 * C1582) * C71 +
            (C62 * C1657 - C148 * C1584) * C61) *
               C63 * C14474) *
              C14369 * C14593)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C62 * C149 - C148 * C73) * C71 + (C62 * C154 - C148 * C79) * C61) *
               C63 * C14632 +
           ((C148 * C818 - C62 * C930) * C71 +
            (C148 * C825 - C62 * C936) * C61) *
               C63 * C14629 +
           ((C62 * C931 - C148 * C819) * C71 +
            (C62 * C937 - C148 * C827) * C61) *
               C63 * C14620 +
           ((C148 * C5172 - C62 * C5228) * C71 +
            (C148 * C5175 - C62 * C5230) * C61) *
               C63 * C14605) *
              C14369 * C6844 +
          (((C148 * C74 - C62 * C150) * C71 + (C148 * C81 - C62 * C155) * C61) *
               C63 * C14632 +
           ((C62 * C932 - C148 * C820) * C71 +
            (C62 * C938 - C148 * C829) * C61) *
               C63 * C14629 +
           ((C148 * C821 - C62 * C933) * C71 +
            (C148 * C831 - C62 * C939) * C61) *
               C63 * C14620 +
           ((C62 * C5958 - C148 * C5884) * C71 +
            (C62 * C5959 - C148 * C5886) * C61) *
               C63 * C14605) *
              C14369 * C14352)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[17] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
                C62 * C8850 +
            ((C71 * C818 - C61 * C824) * C115 +
             (C71 * C980 - C61 * C986) * C63) *
                C62 * C14474) *
               C14624 +
           (((C71 * C377 - C61 * C383) * C115 +
             (C71 * C539 - C61 * C545) * C63) *
                C62 * C8850 +
            ((C61 * C1923 - C71 * C1920) * C115 +
             (C61 * C2097 - C71 * C2094) * C63) *
                C62 * C14474) *
               C14612 +
           (((C61 * C385 - C71 * C378) * C115 +
             (C61 * C546 - C71 * C540) * C63) *
                C62 * C8850 +
            ((C71 * C2991 - C61 * C2995) * C115 +
             (C71 * C3129 - C61 * C3132) * C63) *
                C62 * C14474) *
               C14589) *
              C6844 +
          ((((C71 * C74 - C61 * C80) * C115 + (C71 * C182 - C61 * C187) * C63) *
                C62 * C8850 +
            ((C61 * C828 - C71 * C820) * C115 +
             (C61 * C988 - C71 * C982) * C63) *
                C62 * C14474) *
               C14624 +
           (((C61 * C387 - C71 * C379) * C115 +
             (C61 * C547 - C71 * C541) * C63) *
                C62 * C8850 +
            ((C71 * C1921 - C61 * C1925) * C115 +
             (C71 * C2095 - C61 * C2098) * C63) *
                C62 * C14474) *
               C14612 +
           (((C71 * C380 - C61 * C389) * C115 +
             (C71 * C542 - C61 * C548) * C63) *
                C62 * C8850 +
            ((C61 * C3721 - C71 * C3720) * C115 +
             (C61 * C3879 - C71 * C3878) * C63) *
                C62 * C14474) *
               C14589) *
              C14352)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
               C62 * C8850 +
           ((C71 * C818 - C61 * C824) * C115 +
            (C71 * C980 - C61 * C986) * C63) *
               C62 * C14474) *
              C14369 * C14630 +
          (((C71 * C74 - C61 * C80) * C115 + (C71 * C182 - C61 * C187) * C63) *
               C62 * C8850 +
           ((C61 * C828 - C71 * C820) * C115 +
            (C61 * C988 - C71 * C982) * C63) *
               C62 * C14474) *
              C14369 * C14623 +
          (((C61 * C82 - C71 * C75) * C115 + (C61 * C188 - C71 * C183) * C63) *
               C62 * C8850 +
           ((C71 * C822 - C61 * C832) * C115 +
            (C71 * C984 - C61 * C990) * C63) *
               C62 * C14474) *
              C14369 * C14610 +
          (((C71 * C76 - C61 * C84) * C115 + (C71 * C184 - C61 * C189) * C63) *
               C62 * C8850 +
           ((C61 * C1583 - C71 * C1582) * C115 +
            (C61 * C1693 - C71 * C1692) * C63) *
               C62 * C14474) *
              C14369 * C14593)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
               C62 * C14632 +
           ((C71 * C818 - C61 * C824) * C115 +
            (C71 * C980 - C61 * C986) * C63) *
               C62 * C14629 +
           ((C61 * C826 - C71 * C819) * C115 +
            (C61 * C987 - C71 * C981) * C63) *
               C62 * C14620 +
           ((C71 * C5172 - C61 * C5174) * C115 +
            (C71 * C5254 - C61 * C5256) * C63) *
               C62 * C14605) *
              C14369 * C6844 +
          (((C71 * C74 - C61 * C80) * C115 + (C71 * C182 - C61 * C187) * C63) *
               C62 * C14632 +
           ((C61 * C828 - C71 * C820) * C115 +
            (C61 * C988 - C71 * C982) * C63) *
               C62 * C14629 +
           ((C71 * C821 - C61 * C830) * C115 +
            (C71 * C983 - C61 * C989) * C63) *
               C62 * C14620 +
           ((C61 * C5885 - C71 * C5884) * C115 +
            (C61 * C5995 - C71 * C5994) * C63) *
               C62 * C14605) *
              C14369 * C14352)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[17] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) * C61 * C62 *
                C8850 -
            (C115 * C880 - C213 * C818 - C115 * C980 + C63 * C1030) * C61 *
                C62 * C14474) *
               C14624 +
           ((C115 * C1982 - C213 * C1920 - C115 * C2094 + C63 * C2150) * C61 *
                C62 * C14474 -
            (C115 * C439 - C213 * C377 - C115 * C539 + C63 * C589) * C61 * C62 *
                C8850) *
               C14612 +
           ((C115 * C440 - C213 * C378 - C115 * C540 + C63 * C590) * C61 * C62 *
                C8850 -
            (C115 * C3041 - C213 * C2991 - C115 * C3129 + C63 * C3173) * C61 *
                C62 * C14474) *
               C14589) *
              C6844 +
          (((C115 * C882 - C213 * C820 - C115 * C982 + C63 * C1032) * C61 *
                C62 * C14474 -
            (C115 * C117 - C213 * C74 - C115 * C182 + C63 * C215) * C61 * C62 *
                C8850) *
               C14624 +
           ((C115 * C441 - C213 * C379 - C115 * C541 + C63 * C591) * C61 * C62 *
                C8850 -
            (C115 * C1983 - C213 * C1921 - C115 * C2095 + C63 * C2151) * C61 *
                C62 * C14474) *
               C14612 +
           ((C115 * C3774 - C213 * C3720 - C115 * C3878 + C63 * C3930) * C61 *
                C62 * C14474 -
            (C115 * C442 - C213 * C380 - C115 * C542 + C63 * C592) * C61 * C62 *
                C8850) *
               C14589) *
              C14352)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) * C61 * C62 *
               C8850 -
           (C115 * C880 - C213 * C818 - C115 * C980 + C63 * C1030) * C61 * C62 *
               C14474) *
              C14369 * C14630 +
          ((C115 * C882 - C213 * C820 - C115 * C982 + C63 * C1032) * C61 * C62 *
               C14474 -
           (C115 * C117 - C213 * C74 - C115 * C182 + C63 * C215) * C61 * C62 *
               C8850) *
              C14369 * C14623 +
          ((C115 * C118 - C213 * C75 - C115 * C183 + C63 * C216) * C61 * C62 *
               C8850 -
           (C115 * C884 - C213 * C822 - C115 * C984 + C63 * C1034) * C61 * C62 *
               C14474) *
              C14369 * C14610 +
          ((C115 * C1620 - C213 * C1582 - C115 * C1692 + C63 * C1728) * C61 *
               C62 * C14474 -
           (C115 * C119 - C213 * C76 - C115 * C184 + C63 * C217) * C61 * C62 *
               C8850) *
              C14369 * C14593)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) * C61 * C62 *
               C14632 -
           (C115 * C880 - C213 * C818 - C115 * C980 + C63 * C1030) * C61 * C62 *
               C14629 +
           (C115 * C881 - C213 * C819 - C115 * C981 + C63 * C1031) * C61 * C62 *
               C14620 -
           (C115 * C5202 - C213 * C5172 - C115 * C5254 + C63 * C5280) * C61 *
               C62 * C14605) *
              C14369 * C6844 +
          ((C115 * C882 - C213 * C820 - C115 * C982 + C63 * C1032) * C61 * C62 *
               C14629 -
           (C115 * C117 - C213 * C74 - C115 * C182 + C63 * C215) * C61 * C62 *
               C14632 -
           (C115 * C883 - C213 * C821 - C115 * C983 + C63 * C1033) * C61 * C62 *
               C14620 +
           (C115 * C5922 - C213 * C5884 - C115 * C5994 + C63 * C6030) * C61 *
               C62 * C14605) *
              C14369 * C14352)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[17] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C62 * C149 - C148 * C73) * C115 +
                       (C62 * C241 - C148 * C181) * C63) *
                          C61 * C8850 +
                      ((C148 * C818 - C62 * C930) * C115 +
                       (C148 * C980 - C62 * C1074) * C63) *
                          C61 * C14474) *
                         C14624 +
                     (((C148 * C377 - C62 * C489) * C115 +
                       (C148 * C539 - C62 * C633) * C63) *
                          C61 * C8850 +
                      ((C62 * C2038 - C148 * C1920) * C115 +
                       (C62 * C2203 - C148 * C2094) * C63) *
                          C61 * C14474) *
                         C14612 +
                     (((C62 * C490 - C148 * C378) * C115 +
                       (C62 * C634 - C148 * C540) * C63) *
                          C61 * C8850 +
                      ((C148 * C2991 - C62 * C3085) * C115 +
                       (C148 * C3129 - C62 * C3214) * C63) *
                          C61 * C14474) *
                         C14589) *
                        C6844 +
                    ((((C148 * C74 - C62 * C150) * C115 +
                       (C148 * C182 - C62 * C242) * C63) *
                          C61 * C8850 +
                      ((C62 * C932 - C148 * C820) * C115 +
                       (C62 * C1076 - C148 * C982) * C63) *
                          C61 * C14474) *
                         C14624 +
                     (((C62 * C491 - C148 * C379) * C115 +
                       (C62 * C635 - C148 * C541) * C63) *
                          C61 * C8850 +
                      ((C148 * C1921 - C62 * C2039) * C115 +
                       (C148 * C2095 - C62 * C2204) * C63) *
                          C61 * C14474) *
                         C14612 +
                     (((C148 * C380 - C62 * C492) * C115 +
                       (C148 * C542 - C62 * C636) * C63) *
                          C61 * C8850 +
                      ((C62 * C3826 - C148 * C3720) * C115 +
                       (C62 * C3981 - C148 * C3878) * C63) *
                          C61 * C14474) *
                         C14589) *
                        C14352)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C62 * C149 - C148 * C73) * C115 +
                      (C62 * C241 - C148 * C181) * C63) *
                         C61 * C8850 +
                     ((C148 * C818 - C62 * C930) * C115 +
                      (C148 * C980 - C62 * C1074) * C63) *
                         C61 * C14474) *
                        C14369 * C14630 +
                    (((C148 * C74 - C62 * C150) * C115 +
                      (C148 * C182 - C62 * C242) * C63) *
                         C61 * C8850 +
                     ((C62 * C932 - C148 * C820) * C115 +
                      (C62 * C1076 - C148 * C982) * C63) *
                         C61 * C14474) *
                        C14369 * C14623 +
                    (((C62 * C151 - C148 * C75) * C115 +
                      (C62 * C243 - C148 * C183) * C63) *
                         C61 * C8850 +
                     ((C148 * C822 - C62 * C934) * C115 +
                      (C148 * C984 - C62 * C1078) * C63) *
                         C61 * C14474) *
                        C14369 * C14610 +
                    (((C148 * C76 - C62 * C152) * C115 +
                      (C148 * C184 - C62 * C244) * C63) *
                         C61 * C8850 +
                     ((C62 * C1656 - C148 * C1582) * C115 +
                      (C62 * C1763 - C148 * C1692) * C63) *
                         C61 * C14474) *
                        C14369 * C14593)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C62 * C149 - C148 * C73) * C115 +
                      (C62 * C241 - C148 * C181) * C63) *
                         C61 * C14632 +
                     ((C148 * C818 - C62 * C930) * C115 +
                      (C148 * C980 - C62 * C1074) * C63) *
                         C61 * C14629 +
                     ((C62 * C931 - C148 * C819) * C115 +
                      (C62 * C1075 - C148 * C981) * C63) *
                         C61 * C14620 +
                     ((C148 * C5172 - C62 * C5228) * C115 +
                      (C148 * C5254 - C62 * C5304) * C63) *
                         C61 * C14605) *
                        C14369 * C6844 +
                    (((C148 * C74 - C62 * C150) * C115 +
                      (C148 * C182 - C62 * C242) * C63) *
                         C61 * C14632 +
                     ((C62 * C932 - C148 * C820) * C115 +
                      (C62 * C1076 - C148 * C982) * C63) *
                         C61 * C14629 +
                     ((C148 * C821 - C62 * C933) * C115 +
                      (C148 * C983 - C62 * C1077) * C63) *
                         C61 * C14620 +
                     ((C62 * C5958 - C148 * C5884) * C115 +
                      (C62 * C6065 - C148 * C5994) * C63) *
                         C61 * C14605) *
                        C14369 * C14352)) /
                      (p * q * std::sqrt(p + q));
    d2eezx[17] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
                C63 * C8850 +
            ((C71 * C818 - C61 * C824) * C148 +
             (C71 * C1118 - C61 * C1124) * C62) *
                C63 * C14474) *
               C14624 +
           (((C71 * C377 - C61 * C383) * C148 +
             (C71 * C677 - C61 * C683) * C62) *
                C63 * C8850 +
            ((C61 * C1923 - C71 * C1920) * C148 +
             (C61 * C2259 - C71 * C2256) * C62) *
                C63 * C14474) *
               C14612 +
           (((C61 * C385 - C71 * C378) * C148 +
             (C61 * C684 - C71 * C678) * C62) *
                C63 * C8850 +
            ((C71 * C2991 - C61 * C2995) * C148 +
             (C71 * C3255 - C61 * C3258) * C62) *
                C63 * C14474) *
               C14589) *
              C6844 +
          ((((C71 * C74 - C61 * C80) * C148 + (C71 * C269 - C61 * C274) * C62) *
                C63 * C8850 +
            ((C61 * C828 - C71 * C820) * C148 +
             (C61 * C1126 - C71 * C1120) * C62) *
                C63 * C14474) *
               C14624 +
           (((C61 * C387 - C71 * C379) * C148 +
             (C61 * C685 - C71 * C679) * C62) *
                C63 * C8850 +
            ((C71 * C1921 - C61 * C1925) * C148 +
             (C71 * C2257 - C61 * C2260) * C62) *
                C63 * C14474) *
               C14612 +
           (((C71 * C380 - C61 * C389) * C148 +
             (C71 * C680 - C61 * C686) * C62) *
                C63 * C8850 +
            ((C61 * C3721 - C71 * C3720) * C148 +
             (C61 * C4033 - C71 * C4032) * C62) *
                C63 * C14474) *
               C14589) *
              C14352)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
               C63 * C8850 +
           ((C71 * C818 - C61 * C824) * C148 +
            (C71 * C1118 - C61 * C1124) * C62) *
               C63 * C14474) *
              C14369 * C14630 +
          (((C71 * C74 - C61 * C80) * C148 + (C71 * C269 - C61 * C274) * C62) *
               C63 * C8850 +
           ((C61 * C828 - C71 * C820) * C148 +
            (C61 * C1126 - C71 * C1120) * C62) *
               C63 * C14474) *
              C14369 * C14623 +
          (((C61 * C82 - C71 * C75) * C148 + (C61 * C275 - C71 * C270) * C62) *
               C63 * C8850 +
           ((C71 * C822 - C61 * C832) * C148 +
            (C71 * C1122 - C61 * C1128) * C62) *
               C63 * C14474) *
              C14369 * C14610 +
          (((C71 * C76 - C61 * C84) * C148 + (C71 * C271 - C61 * C276) * C62) *
               C63 * C8850 +
           ((C61 * C1583 - C71 * C1582) * C148 +
            (C61 * C1799 - C71 * C1798) * C62) *
               C63 * C14474) *
              C14369 * C14593)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
               C63 * C14632 +
           ((C71 * C818 - C61 * C824) * C148 +
            (C71 * C1118 - C61 * C1124) * C62) *
               C63 * C14629 +
           ((C61 * C826 - C71 * C819) * C148 +
            (C61 * C1125 - C71 * C1119) * C62) *
               C63 * C14620 +
           ((C71 * C5172 - C61 * C5174) * C148 +
            (C71 * C5328 - C61 * C5330) * C62) *
               C63 * C14605) *
              C14369 * C6844 +
          (((C71 * C74 - C61 * C80) * C148 + (C71 * C269 - C61 * C274) * C62) *
               C63 * C14632 +
           ((C61 * C828 - C71 * C820) * C148 +
            (C61 * C1126 - C71 * C1120) * C62) *
               C63 * C14629 +
           ((C71 * C821 - C61 * C830) * C148 +
            (C71 * C1121 - C61 * C1127) * C62) *
               C63 * C14620 +
           ((C61 * C5885 - C71 * C5884) * C148 +
            (C61 * C6101 - C71 * C6100) * C62) *
               C63 * C14605) *
              C14369 * C14352)) /
            (p * q * std::sqrt(p + q));
    d2eezy[17] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C63 * C116 - C115 * C73) * C148 +
                       (C63 * C300 - C115 * C268) * C62) *
                          C61 * C8850 +
                      ((C115 * C818 - C63 * C880) * C148 +
                       (C115 * C1118 - C63 * C1168) * C62) *
                          C61 * C14474) *
                         C14624 +
                     (((C115 * C377 - C63 * C439) * C148 +
                       (C115 * C677 - C63 * C727) * C62) *
                          C61 * C8850 +
                      ((C63 * C1982 - C115 * C1920) * C148 +
                       (C63 * C2312 - C115 * C2256) * C62) *
                          C61 * C14474) *
                         C14612 +
                     (((C63 * C440 - C115 * C378) * C148 +
                       (C63 * C728 - C115 * C678) * C62) *
                          C61 * C8850 +
                      ((C115 * C2991 - C63 * C3041) * C148 +
                       (C115 * C3255 - C63 * C3299) * C62) *
                          C61 * C14474) *
                         C14589) *
                        C6844 +
                    ((((C115 * C74 - C63 * C117) * C148 +
                       (C115 * C269 - C63 * C301) * C62) *
                          C61 * C8850 +
                      ((C63 * C882 - C115 * C820) * C148 +
                       (C63 * C1170 - C115 * C1120) * C62) *
                          C61 * C14474) *
                         C14624 +
                     (((C63 * C441 - C115 * C379) * C148 +
                       (C63 * C729 - C115 * C679) * C62) *
                          C61 * C8850 +
                      ((C115 * C1921 - C63 * C1983) * C148 +
                       (C115 * C2257 - C63 * C2313) * C62) *
                          C61 * C14474) *
                         C14612 +
                     (((C115 * C380 - C63 * C442) * C148 +
                       (C115 * C680 - C63 * C730) * C62) *
                          C61 * C8850 +
                      ((C63 * C3774 - C115 * C3720) * C148 +
                       (C63 * C4084 - C115 * C4032) * C62) *
                          C61 * C14474) *
                         C14589) *
                        C14352)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C63 * C116 - C115 * C73) * C148 +
                      (C63 * C300 - C115 * C268) * C62) *
                         C61 * C8850 +
                     ((C115 * C818 - C63 * C880) * C148 +
                      (C115 * C1118 - C63 * C1168) * C62) *
                         C61 * C14474) *
                        C14369 * C14630 +
                    (((C115 * C74 - C63 * C117) * C148 +
                      (C115 * C269 - C63 * C301) * C62) *
                         C61 * C8850 +
                     ((C63 * C882 - C115 * C820) * C148 +
                      (C63 * C1170 - C115 * C1120) * C62) *
                         C61 * C14474) *
                        C14369 * C14623 +
                    (((C63 * C118 - C115 * C75) * C148 +
                      (C63 * C302 - C115 * C270) * C62) *
                         C61 * C8850 +
                     ((C115 * C822 - C63 * C884) * C148 +
                      (C115 * C1122 - C63 * C1172) * C62) *
                         C61 * C14474) *
                        C14369 * C14610 +
                    (((C115 * C76 - C63 * C119) * C148 +
                      (C115 * C271 - C63 * C303) * C62) *
                         C61 * C8850 +
                     ((C63 * C1620 - C115 * C1582) * C148 +
                      (C63 * C1834 - C115 * C1798) * C62) *
                         C61 * C14474) *
                        C14369 * C14593)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C63 * C116 - C115 * C73) * C148 +
                      (C63 * C300 - C115 * C268) * C62) *
                         C61 * C14632 +
                     ((C115 * C818 - C63 * C880) * C148 +
                      (C115 * C1118 - C63 * C1168) * C62) *
                         C61 * C14629 +
                     ((C63 * C881 - C115 * C819) * C148 +
                      (C63 * C1169 - C115 * C1119) * C62) *
                         C61 * C14620 +
                     ((C115 * C5172 - C63 * C5202) * C148 +
                      (C115 * C5328 - C63 * C5354) * C62) *
                         C61 * C14605) *
                        C14369 * C6844 +
                    (((C115 * C74 - C63 * C117) * C148 +
                      (C115 * C269 - C63 * C301) * C62) *
                         C61 * C14632 +
                     ((C63 * C882 - C115 * C820) * C148 +
                      (C63 * C1170 - C115 * C1120) * C62) *
                         C61 * C14629 +
                     ((C115 * C821 - C63 * C883) * C148 +
                      (C115 * C1121 - C63 * C1171) * C62) *
                         C61 * C14620 +
                     ((C63 * C5922 - C115 * C5884) * C148 +
                      (C63 * C6136 - C115 * C6100) * C62) *
                         C61 * C14605) *
                        C14369 * C14352)) /
                      (p * q * std::sqrt(p + q));
    d2eezz[17] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) * C63 * C61 *
                C8850 -
            (C148 * C930 - C327 * C818 - C148 * C1118 + C62 * C1212) * C63 *
                C61 * C14474) *
               C14624 +
           ((C148 * C2038 - C327 * C1920 - C148 * C2256 + C62 * C2365) * C63 *
                C61 * C14474 -
            (C148 * C489 - C327 * C377 - C148 * C677 + C62 * C771) * C63 * C61 *
                C8850) *
               C14612 +
           ((C148 * C490 - C327 * C378 - C148 * C678 + C62 * C772) * C63 * C61 *
                C8850 -
            (C148 * C3085 - C327 * C2991 - C148 * C3255 + C62 * C3340) * C63 *
                C61 * C14474) *
               C14589) *
              C6844 +
          (((C148 * C932 - C327 * C820 - C148 * C1120 + C62 * C1214) * C63 *
                C61 * C14474 -
            (C148 * C150 - C327 * C74 - C148 * C269 + C62 * C329) * C63 * C61 *
                C8850) *
               C14624 +
           ((C148 * C491 - C327 * C379 - C148 * C679 + C62 * C773) * C63 * C61 *
                C8850 -
            (C148 * C2039 - C327 * C1921 - C148 * C2257 + C62 * C2366) * C63 *
                C61 * C14474) *
               C14612 +
           ((C148 * C3826 - C327 * C3720 - C148 * C4032 + C62 * C4135) * C63 *
                C61 * C14474 -
            (C148 * C492 - C327 * C380 - C148 * C680 + C62 * C774) * C63 * C61 *
                C8850) *
               C14589) *
              C14352)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) * C63 * C61 *
               C8850 -
           (C148 * C930 - C327 * C818 - C148 * C1118 + C62 * C1212) * C63 *
               C61 * C14474) *
              C14369 * C14630 +
          ((C148 * C932 - C327 * C820 - C148 * C1120 + C62 * C1214) * C63 *
               C61 * C14474 -
           (C148 * C150 - C327 * C74 - C148 * C269 + C62 * C329) * C63 * C61 *
               C8850) *
              C14369 * C14623 +
          ((C148 * C151 - C327 * C75 - C148 * C270 + C62 * C330) * C63 * C61 *
               C8850 -
           (C148 * C934 - C327 * C822 - C148 * C1122 + C62 * C1216) * C63 *
               C61 * C14474) *
              C14369 * C14610 +
          ((C148 * C1656 - C327 * C1582 - C148 * C1798 + C62 * C1869) * C63 *
               C61 * C14474 -
           (C148 * C152 - C327 * C76 - C148 * C271 + C62 * C331) * C63 * C61 *
               C8850) *
              C14369 * C14593)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) * C63 * C61 *
               C14632 -
           (C148 * C930 - C327 * C818 - C148 * C1118 + C62 * C1212) * C63 *
               C61 * C14629 +
           (C148 * C931 - C327 * C819 - C148 * C1119 + C62 * C1213) * C63 *
               C61 * C14620 -
           (C148 * C5228 - C327 * C5172 - C148 * C5328 + C62 * C5378) * C63 *
               C61 * C14605) *
              C14369 * C6844 +
          ((C148 * C932 - C327 * C820 - C148 * C1120 + C62 * C1214) * C63 *
               C61 * C14629 -
           (C148 * C150 - C327 * C74 - C148 * C269 + C62 * C329) * C63 * C61 *
               C14632 -
           (C148 * C933 - C327 * C821 - C148 * C1121 + C62 * C1215) * C63 *
               C61 * C14620 +
           (C148 * C5958 - C327 * C5884 - C148 * C6100 + C62 * C6171) * C63 *
               C61 * C14605) *
              C14369 * C14352)) /
            (p * q * std::sqrt(p + q));
    d2eexx[18] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   (((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 *
                         C63 * C14470 -
                     (C71 * C824 - C72 * C818 - C71 * C825 + C61 * C836) * C62 *
                         C63 * C14477 +
                     (C71 * C826 - C72 * C819 - C71 * C827 + C61 * C837) * C62 *
                         C63 * C10374) *
                        C14369 * C14346 +
                    ((C71 * C828 - C72 * C820 - C71 * C829 + C61 * C838) * C62 *
                         C63 * C14477 -
                     (C71 * C80 - C72 * C74 - C71 * C81 + C61 * C89) * C62 *
                         C63 * C14470 -
                     (C71 * C830 - C72 * C821 - C71 * C831 + C61 * C839) * C62 *
                         C63 * C10374) *
                        C14369 * C14355 +
                    ((C71 * C82 - C72 * C75 - C71 * C83 + C61 * C90) * C62 *
                         C63 * C14470 -
                     (C71 * C832 - C72 * C822 - C71 * C833 + C61 * C840) * C62 *
                         C63 * C14477 +
                     (C71 * C834 - C72 * C823 - C71 * C835 + C61 * C841) * C62 *
                         C63 * C10374) *
                        C14369 * C7611)) /
                  (p * q * std::sqrt(p + q));
    d2eexy[18] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C63 * C116 - C115 * C73) * C71 + (C63 * C121 - C115 * C79) * C61) *
               C62 * C14470 +
           ((C115 * C818 - C63 * C880) * C71 +
            (C115 * C825 - C63 * C886) * C61) *
               C62 * C14477 +
           ((C63 * C881 - C115 * C819) * C71 +
            (C63 * C887 - C115 * C827) * C61) *
               C62 * C10374) *
              C14369 * C14346 +
          (((C115 * C74 - C63 * C117) * C71 + (C115 * C81 - C63 * C122) * C61) *
               C62 * C14470 +
           ((C63 * C882 - C115 * C820) * C71 +
            (C63 * C888 - C115 * C829) * C61) *
               C62 * C14477 +
           ((C115 * C821 - C63 * C883) * C71 +
            (C115 * C831 - C63 * C889) * C61) *
               C62 * C10374) *
              C14369 * C14355 +
          (((C63 * C118 - C115 * C75) * C71 + (C63 * C123 - C115 * C83) * C61) *
               C62 * C14470 +
           ((C115 * C822 - C63 * C884) * C71 +
            (C115 * C833 - C63 * C890) * C61) *
               C62 * C14477 +
           ((C63 * C885 - C115 * C823) * C71 +
            (C63 * C891 - C115 * C835) * C61) *
               C62 * C10374) *
              C14369 * C7611)) /
        (p * q * std::sqrt(p + q));
    d2eexz[18] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C62 * C149 - C148 * C73) * C71 + (C62 * C154 - C148 * C79) * C61) *
               C63 * C14470 +
           ((C148 * C818 - C62 * C930) * C71 +
            (C148 * C825 - C62 * C936) * C61) *
               C63 * C14477 +
           ((C62 * C931 - C148 * C819) * C71 +
            (C62 * C937 - C148 * C827) * C61) *
               C63 * C10374) *
              C14369 * C14346 +
          (((C148 * C74 - C62 * C150) * C71 + (C148 * C81 - C62 * C155) * C61) *
               C63 * C14470 +
           ((C62 * C932 - C148 * C820) * C71 +
            (C62 * C938 - C148 * C829) * C61) *
               C63 * C14477 +
           ((C148 * C821 - C62 * C933) * C71 +
            (C148 * C831 - C62 * C939) * C61) *
               C63 * C10374) *
              C14369 * C14355 +
          (((C62 * C151 - C148 * C75) * C71 + (C62 * C156 - C148 * C83) * C61) *
               C63 * C14470 +
           ((C148 * C822 - C62 * C934) * C71 +
            (C148 * C833 - C62 * C940) * C61) *
               C63 * C14477 +
           ((C62 * C935 - C148 * C823) * C71 +
            (C62 * C941 - C148 * C835) * C61) *
               C63 * C10374) *
              C14369 * C7611)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[18] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
               C62 * C14470 +
           ((C71 * C818 - C61 * C824) * C115 +
            (C71 * C980 - C61 * C986) * C63) *
               C62 * C14477 +
           ((C61 * C826 - C71 * C819) * C115 +
            (C61 * C987 - C71 * C981) * C63) *
               C62 * C10374) *
              C14369 * C14346 +
          (((C71 * C74 - C61 * C80) * C115 + (C71 * C182 - C61 * C187) * C63) *
               C62 * C14470 +
           ((C61 * C828 - C71 * C820) * C115 +
            (C61 * C988 - C71 * C982) * C63) *
               C62 * C14477 +
           ((C71 * C821 - C61 * C830) * C115 +
            (C71 * C983 - C61 * C989) * C63) *
               C62 * C10374) *
              C14369 * C14355 +
          (((C61 * C82 - C71 * C75) * C115 + (C61 * C188 - C71 * C183) * C63) *
               C62 * C14470 +
           ((C71 * C822 - C61 * C832) * C115 +
            (C71 * C984 - C61 * C990) * C63) *
               C62 * C14477 +
           ((C61 * C834 - C71 * C823) * C115 +
            (C61 * C991 - C71 * C985) * C63) *
               C62 * C10374) *
              C14369 * C7611)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[18] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   (((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) *
                         C61 * C62 * C14470 -
                     (C115 * C880 - C213 * C818 - C115 * C980 + C63 * C1030) *
                         C61 * C62 * C14477 +
                     (C115 * C881 - C213 * C819 - C115 * C981 + C63 * C1031) *
                         C61 * C62 * C10374) *
                        C14369 * C14346 +
                    ((C115 * C882 - C213 * C820 - C115 * C982 + C63 * C1032) *
                         C61 * C62 * C14477 -
                     (C115 * C117 - C213 * C74 - C115 * C182 + C63 * C215) *
                         C61 * C62 * C14470 -
                     (C115 * C883 - C213 * C821 - C115 * C983 + C63 * C1033) *
                         C61 * C62 * C10374) *
                        C14369 * C14355 +
                    ((C115 * C118 - C213 * C75 - C115 * C183 + C63 * C216) *
                         C61 * C62 * C14470 -
                     (C115 * C884 - C213 * C822 - C115 * C984 + C63 * C1034) *
                         C61 * C62 * C14477 +
                     (C115 * C885 - C213 * C823 - C115 * C985 + C63 * C1035) *
                         C61 * C62 * C10374) *
                        C14369 * C7611)) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[18] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   ((((C62 * C149 - C148 * C73) * C115 +
                      (C62 * C241 - C148 * C181) * C63) *
                         C61 * C14470 +
                     ((C148 * C818 - C62 * C930) * C115 +
                      (C148 * C980 - C62 * C1074) * C63) *
                         C61 * C14477 +
                     ((C62 * C931 - C148 * C819) * C115 +
                      (C62 * C1075 - C148 * C981) * C63) *
                         C61 * C10374) *
                        C14369 * C14346 +
                    (((C148 * C74 - C62 * C150) * C115 +
                      (C148 * C182 - C62 * C242) * C63) *
                         C61 * C14470 +
                     ((C62 * C932 - C148 * C820) * C115 +
                      (C62 * C1076 - C148 * C982) * C63) *
                         C61 * C14477 +
                     ((C148 * C821 - C62 * C933) * C115 +
                      (C148 * C983 - C62 * C1077) * C63) *
                         C61 * C10374) *
                        C14369 * C14355 +
                    (((C62 * C151 - C148 * C75) * C115 +
                      (C62 * C243 - C148 * C183) * C63) *
                         C61 * C14470 +
                     ((C148 * C822 - C62 * C934) * C115 +
                      (C148 * C984 - C62 * C1078) * C63) *
                         C61 * C14477 +
                     ((C62 * C935 - C148 * C823) * C115 +
                      (C62 * C1079 - C148 * C985) * C63) *
                         C61 * C10374) *
                        C14369 * C7611)) /
                  (p * q * std::sqrt(p + q));
    d2eezx[18] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
               C63 * C14470 +
           ((C71 * C818 - C61 * C824) * C148 +
            (C71 * C1118 - C61 * C1124) * C62) *
               C63 * C14477 +
           ((C61 * C826 - C71 * C819) * C148 +
            (C61 * C1125 - C71 * C1119) * C62) *
               C63 * C10374) *
              C14369 * C14346 +
          (((C71 * C74 - C61 * C80) * C148 + (C71 * C269 - C61 * C274) * C62) *
               C63 * C14470 +
           ((C61 * C828 - C71 * C820) * C148 +
            (C61 * C1126 - C71 * C1120) * C62) *
               C63 * C14477 +
           ((C71 * C821 - C61 * C830) * C148 +
            (C71 * C1121 - C61 * C1127) * C62) *
               C63 * C10374) *
              C14369 * C14355 +
          (((C61 * C82 - C71 * C75) * C148 + (C61 * C275 - C71 * C270) * C62) *
               C63 * C14470 +
           ((C71 * C822 - C61 * C832) * C148 +
            (C71 * C1122 - C61 * C1128) * C62) *
               C63 * C14477 +
           ((C61 * C834 - C71 * C823) * C148 +
            (C61 * C1129 - C71 * C1123) * C62) *
               C63 * C10374) *
              C14369 * C7611)) /
        (p * q * std::sqrt(p + q));
    d2eezy[18] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   ((((C63 * C116 - C115 * C73) * C148 +
                      (C63 * C300 - C115 * C268) * C62) *
                         C61 * C14470 +
                     ((C115 * C818 - C63 * C880) * C148 +
                      (C115 * C1118 - C63 * C1168) * C62) *
                         C61 * C14477 +
                     ((C63 * C881 - C115 * C819) * C148 +
                      (C63 * C1169 - C115 * C1119) * C62) *
                         C61 * C10374) *
                        C14369 * C14346 +
                    (((C115 * C74 - C63 * C117) * C148 +
                      (C115 * C269 - C63 * C301) * C62) *
                         C61 * C14470 +
                     ((C63 * C882 - C115 * C820) * C148 +
                      (C63 * C1170 - C115 * C1120) * C62) *
                         C61 * C14477 +
                     ((C115 * C821 - C63 * C883) * C148 +
                      (C115 * C1121 - C63 * C1171) * C62) *
                         C61 * C10374) *
                        C14369 * C14355 +
                    (((C63 * C118 - C115 * C75) * C148 +
                      (C63 * C302 - C115 * C270) * C62) *
                         C61 * C14470 +
                     ((C115 * C822 - C63 * C884) * C148 +
                      (C115 * C1122 - C63 * C1172) * C62) *
                         C61 * C14477 +
                     ((C63 * C885 - C115 * C823) * C148 +
                      (C63 * C1173 - C115 * C1123) * C62) *
                         C61 * C10374) *
                        C14369 * C7611)) /
                  (p * q * std::sqrt(p + q));
    d2eezz[18] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   (((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) *
                         C63 * C61 * C14470 -
                     (C148 * C930 - C327 * C818 - C148 * C1118 + C62 * C1212) *
                         C63 * C61 * C14477 +
                     (C148 * C931 - C327 * C819 - C148 * C1119 + C62 * C1213) *
                         C63 * C61 * C10374) *
                        C14369 * C14346 +
                    ((C148 * C932 - C327 * C820 - C148 * C1120 + C62 * C1214) *
                         C63 * C61 * C14477 -
                     (C148 * C150 - C327 * C74 - C148 * C269 + C62 * C329) *
                         C63 * C61 * C14470 -
                     (C148 * C933 - C327 * C821 - C148 * C1121 + C62 * C1215) *
                         C63 * C61 * C10374) *
                        C14369 * C14355 +
                    ((C148 * C151 - C327 * C75 - C148 * C270 + C62 * C330) *
                         C63 * C61 * C14470 -
                     (C148 * C934 - C327 * C822 - C148 * C1122 + C62 * C1216) *
                         C63 * C61 * C14477 +
                     (C148 * C935 - C327 * C823 - C148 * C1123 + C62 * C1217) *
                         C63 * C61 * C10374) *
                        C14369 * C7611)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[19] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 * C63 * C8850 -
           (C71 * C824 - C72 * C818 - C71 * C825 + C61 * C836) * C62 * C63 *
               C14474) *
              C14369 * C14630 +
          ((C71 * C828 - C72 * C820 - C71 * C829 + C61 * C838) * C62 * C63 *
               C14474 -
           (C71 * C80 - C72 * C74 - C71 * C81 + C61 * C89) * C62 * C63 *
               C8850) *
              C14369 * C14623 +
          ((C71 * C82 - C72 * C75 - C71 * C83 + C61 * C90) * C62 * C63 * C8850 -
           (C71 * C832 - C72 * C822 - C71 * C833 + C61 * C840) * C62 * C63 *
               C14474) *
              C14369 * C14610 +
          ((C71 * C1583 - C72 * C1582 - C71 * C1584 + C61 * C1585) * C62 * C63 *
               C14474 -
           (C71 * C84 - C72 * C76 - C71 * C85 + C61 * C91) * C62 * C63 *
               C8850) *
              C14369 * C14593)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 * C63 *
                C8850 -
            (C71 * C824 - C72 * C818 - C71 * C825 + C61 * C836) * C62 * C63 *
                C14474) *
               C14624 +
           ((C71 * C1923 - C72 * C1920 - C71 * C1924 + C61 * C1929) * C62 *
                C63 * C14474 -
            (C71 * C383 - C72 * C377 - C71 * C384 + C61 * C395) * C62 * C63 *
                C8850) *
               C14612 +
           ((C71 * C385 - C72 * C378 - C71 * C386 + C61 * C396) * C62 * C63 *
                C8850 -
            (C71 * C2995 - C72 * C2991 - C71 * C2996 + C61 * C3000) * C62 *
                C63 * C14474) *
               C14589) *
              C6844 +
          (((C71 * C828 - C72 * C820 - C71 * C829 + C61 * C838) * C62 * C63 *
                C14474 -
            (C71 * C80 - C72 * C74 - C71 * C81 + C61 * C89) * C62 * C63 *
                C8850) *
               C14624 +
           ((C71 * C387 - C72 * C379 - C71 * C388 + C61 * C397) * C62 * C63 *
                C8850 -
            (C71 * C1925 - C72 * C1921 - C71 * C1926 + C61 * C1930) * C62 *
                C63 * C14474) *
               C14612 +
           ((C71 * C3721 - C72 * C3720 - C71 * C3722 + C61 * C3723) * C62 *
                C63 * C14474 -
            (C71 * C389 - C72 * C380 - C71 * C390 + C61 * C398) * C62 * C63 *
                C8850) *
               C14589) *
              C14352)) /
            (p * q * std::sqrt(p + q));
    d2eexy[19] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C63 * C116 - C115 * C73) * C71 + (C63 * C121 - C115 * C79) * C61) *
               C62 * C8850 +
           ((C115 * C818 - C63 * C880) * C71 +
            (C115 * C825 - C63 * C886) * C61) *
               C62 * C14474) *
              C14369 * C14630 +
          (((C115 * C74 - C63 * C117) * C71 + (C115 * C81 - C63 * C122) * C61) *
               C62 * C8850 +
           ((C63 * C882 - C115 * C820) * C71 +
            (C63 * C888 - C115 * C829) * C61) *
               C62 * C14474) *
              C14369 * C14623 +
          (((C63 * C118 - C115 * C75) * C71 + (C63 * C123 - C115 * C83) * C61) *
               C62 * C8850 +
           ((C115 * C822 - C63 * C884) * C71 +
            (C115 * C833 - C63 * C890) * C61) *
               C62 * C14474) *
              C14369 * C14610 +
          (((C115 * C76 - C63 * C119) * C71 + (C115 * C85 - C63 * C124) * C61) *
               C62 * C8850 +
           ((C63 * C1620 - C115 * C1582) * C71 +
            (C63 * C1621 - C115 * C1584) * C61) *
               C62 * C14474) *
              C14369 * C14593)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C63 * C116 - C115 * C73) * C71 +
             (C63 * C121 - C115 * C79) * C61) *
                C62 * C8850 +
            ((C115 * C818 - C63 * C880) * C71 +
             (C115 * C825 - C63 * C886) * C61) *
                C62 * C14474) *
               C14624 +
           (((C115 * C377 - C63 * C439) * C71 +
             (C115 * C384 - C63 * C445) * C61) *
                C62 * C8850 +
            ((C63 * C1982 - C115 * C1920) * C71 +
             (C63 * C1985 - C115 * C1924) * C61) *
                C62 * C14474) *
               C14612 +
           (((C63 * C440 - C115 * C378) * C71 +
             (C63 * C446 - C115 * C386) * C61) *
                C62 * C8850 +
            ((C115 * C2991 - C63 * C3041) * C71 +
             (C115 * C2996 - C63 * C3044) * C61) *
                C62 * C14474) *
               C14589) *
              C6844 +
          ((((C115 * C74 - C63 * C117) * C71 +
             (C115 * C81 - C63 * C122) * C61) *
                C62 * C8850 +
            ((C63 * C882 - C115 * C820) * C71 +
             (C63 * C888 - C115 * C829) * C61) *
                C62 * C14474) *
               C14624 +
           (((C63 * C441 - C115 * C379) * C71 +
             (C63 * C447 - C115 * C388) * C61) *
                C62 * C8850 +
            ((C115 * C1921 - C63 * C1983) * C71 +
             (C115 * C1926 - C63 * C1986) * C61) *
                C62 * C14474) *
               C14612 +
           (((C115 * C380 - C63 * C442) * C71 +
             (C115 * C390 - C63 * C448) * C61) *
                C62 * C8850 +
            ((C63 * C3774 - C115 * C3720) * C71 +
             (C63 * C3775 - C115 * C3722) * C61) *
                C62 * C14474) *
               C14589) *
              C14352)) /
            (p * q * std::sqrt(p + q));
    d2eexz[19] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C62 * C149 - C148 * C73) * C71 + (C62 * C154 - C148 * C79) * C61) *
               C63 * C8850 +
           ((C148 * C818 - C62 * C930) * C71 +
            (C148 * C825 - C62 * C936) * C61) *
               C63 * C14474) *
              C14369 * C14630 +
          (((C148 * C74 - C62 * C150) * C71 + (C148 * C81 - C62 * C155) * C61) *
               C63 * C8850 +
           ((C62 * C932 - C148 * C820) * C71 +
            (C62 * C938 - C148 * C829) * C61) *
               C63 * C14474) *
              C14369 * C14623 +
          (((C62 * C151 - C148 * C75) * C71 + (C62 * C156 - C148 * C83) * C61) *
               C63 * C8850 +
           ((C148 * C822 - C62 * C934) * C71 +
            (C148 * C833 - C62 * C940) * C61) *
               C63 * C14474) *
              C14369 * C14610 +
          (((C148 * C76 - C62 * C152) * C71 + (C148 * C85 - C62 * C157) * C61) *
               C63 * C8850 +
           ((C62 * C1656 - C148 * C1582) * C71 +
            (C62 * C1657 - C148 * C1584) * C61) *
               C63 * C14474) *
              C14369 * C14593)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C62 * C149 - C148 * C73) * C71 +
             (C62 * C154 - C148 * C79) * C61) *
                C63 * C8850 +
            ((C148 * C818 - C62 * C930) * C71 +
             (C148 * C825 - C62 * C936) * C61) *
                C63 * C14474) *
               C14624 +
           (((C148 * C377 - C62 * C489) * C71 +
             (C148 * C384 - C62 * C495) * C61) *
                C63 * C8850 +
            ((C62 * C2038 - C148 * C1920) * C71 +
             (C62 * C2041 - C148 * C1924) * C61) *
                C63 * C14474) *
               C14612 +
           (((C62 * C490 - C148 * C378) * C71 +
             (C62 * C496 - C148 * C386) * C61) *
                C63 * C8850 +
            ((C148 * C2991 - C62 * C3085) * C71 +
             (C148 * C2996 - C62 * C3088) * C61) *
                C63 * C14474) *
               C14589) *
              C6844 +
          ((((C148 * C74 - C62 * C150) * C71 +
             (C148 * C81 - C62 * C155) * C61) *
                C63 * C8850 +
            ((C62 * C932 - C148 * C820) * C71 +
             (C62 * C938 - C148 * C829) * C61) *
                C63 * C14474) *
               C14624 +
           (((C62 * C491 - C148 * C379) * C71 +
             (C62 * C497 - C148 * C388) * C61) *
                C63 * C8850 +
            ((C148 * C1921 - C62 * C2039) * C71 +
             (C148 * C1926 - C62 * C2042) * C61) *
                C63 * C14474) *
               C14612 +
           (((C148 * C380 - C62 * C492) * C71 +
             (C148 * C390 - C62 * C498) * C61) *
                C63 * C8850 +
            ((C62 * C3826 - C148 * C3720) * C71 +
             (C62 * C3827 - C148 * C3722) * C61) *
                C63 * C14474) *
               C14589) *
              C14352)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[19] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
               C62 * C8850 +
           ((C71 * C818 - C61 * C824) * C115 +
            (C71 * C980 - C61 * C986) * C63) *
               C62 * C14474) *
              C14369 * C14630 +
          (((C71 * C74 - C61 * C80) * C115 + (C71 * C182 - C61 * C187) * C63) *
               C62 * C8850 +
           ((C61 * C828 - C71 * C820) * C115 +
            (C61 * C988 - C71 * C982) * C63) *
               C62 * C14474) *
              C14369 * C14623 +
          (((C61 * C82 - C71 * C75) * C115 + (C61 * C188 - C71 * C183) * C63) *
               C62 * C8850 +
           ((C71 * C822 - C61 * C832) * C115 +
            (C71 * C984 - C61 * C990) * C63) *
               C62 * C14474) *
              C14369 * C14610 +
          (((C71 * C76 - C61 * C84) * C115 + (C71 * C184 - C61 * C189) * C63) *
               C62 * C8850 +
           ((C61 * C1583 - C71 * C1582) * C115 +
            (C61 * C1693 - C71 * C1692) * C63) *
               C62 * C14474) *
              C14369 * C14593)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
                C62 * C8850 +
            ((C71 * C818 - C61 * C824) * C115 +
             (C71 * C980 - C61 * C986) * C63) *
                C62 * C14474) *
               C14624 +
           (((C71 * C377 - C61 * C383) * C115 +
             (C71 * C539 - C61 * C545) * C63) *
                C62 * C8850 +
            ((C61 * C1923 - C71 * C1920) * C115 +
             (C61 * C2097 - C71 * C2094) * C63) *
                C62 * C14474) *
               C14612 +
           (((C61 * C385 - C71 * C378) * C115 +
             (C61 * C546 - C71 * C540) * C63) *
                C62 * C8850 +
            ((C71 * C2991 - C61 * C2995) * C115 +
             (C71 * C3129 - C61 * C3132) * C63) *
                C62 * C14474) *
               C14589) *
              C6844 +
          ((((C71 * C74 - C61 * C80) * C115 + (C71 * C182 - C61 * C187) * C63) *
                C62 * C8850 +
            ((C61 * C828 - C71 * C820) * C115 +
             (C61 * C988 - C71 * C982) * C63) *
                C62 * C14474) *
               C14624 +
           (((C61 * C387 - C71 * C379) * C115 +
             (C61 * C547 - C71 * C541) * C63) *
                C62 * C8850 +
            ((C71 * C1921 - C61 * C1925) * C115 +
             (C71 * C2095 - C61 * C2098) * C63) *
                C62 * C14474) *
               C14612 +
           (((C71 * C380 - C61 * C389) * C115 +
             (C71 * C542 - C61 * C548) * C63) *
                C62 * C8850 +
            ((C61 * C3721 - C71 * C3720) * C115 +
             (C61 * C3879 - C71 * C3878) * C63) *
                C62 * C14474) *
               C14589) *
              C14352)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[19] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) * C61 * C62 *
               C8850 -
           (C115 * C880 - C213 * C818 - C115 * C980 + C63 * C1030) * C61 * C62 *
               C14474) *
              C14369 * C14630 +
          ((C115 * C882 - C213 * C820 - C115 * C982 + C63 * C1032) * C61 * C62 *
               C14474 -
           (C115 * C117 - C213 * C74 - C115 * C182 + C63 * C215) * C61 * C62 *
               C8850) *
              C14369 * C14623 +
          ((C115 * C118 - C213 * C75 - C115 * C183 + C63 * C216) * C61 * C62 *
               C8850 -
           (C115 * C884 - C213 * C822 - C115 * C984 + C63 * C1034) * C61 * C62 *
               C14474) *
              C14369 * C14610 +
          ((C115 * C1620 - C213 * C1582 - C115 * C1692 + C63 * C1728) * C61 *
               C62 * C14474 -
           (C115 * C119 - C213 * C76 - C115 * C184 + C63 * C217) * C61 * C62 *
               C8850) *
              C14369 * C14593)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) * C61 * C62 *
                C8850 -
            (C115 * C880 - C213 * C818 - C115 * C980 + C63 * C1030) * C61 *
                C62 * C14474) *
               C14624 +
           ((C115 * C1982 - C213 * C1920 - C115 * C2094 + C63 * C2150) * C61 *
                C62 * C14474 -
            (C115 * C439 - C213 * C377 - C115 * C539 + C63 * C589) * C61 * C62 *
                C8850) *
               C14612 +
           ((C115 * C440 - C213 * C378 - C115 * C540 + C63 * C590) * C61 * C62 *
                C8850 -
            (C115 * C3041 - C213 * C2991 - C115 * C3129 + C63 * C3173) * C61 *
                C62 * C14474) *
               C14589) *
              C6844 +
          (((C115 * C882 - C213 * C820 - C115 * C982 + C63 * C1032) * C61 *
                C62 * C14474 -
            (C115 * C117 - C213 * C74 - C115 * C182 + C63 * C215) * C61 * C62 *
                C8850) *
               C14624 +
           ((C115 * C441 - C213 * C379 - C115 * C541 + C63 * C591) * C61 * C62 *
                C8850 -
            (C115 * C1983 - C213 * C1921 - C115 * C2095 + C63 * C2151) * C61 *
                C62 * C14474) *
               C14612 +
           ((C115 * C3774 - C213 * C3720 - C115 * C3878 + C63 * C3930) * C61 *
                C62 * C14474 -
            (C115 * C442 - C213 * C380 - C115 * C542 + C63 * C592) * C61 * C62 *
                C8850) *
               C14589) *
              C14352)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[19] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C62 * C149 - C148 * C73) * C115 +
                      (C62 * C241 - C148 * C181) * C63) *
                         C61 * C8850 +
                     ((C148 * C818 - C62 * C930) * C115 +
                      (C148 * C980 - C62 * C1074) * C63) *
                         C61 * C14474) *
                        C14369 * C14630 +
                    (((C148 * C74 - C62 * C150) * C115 +
                      (C148 * C182 - C62 * C242) * C63) *
                         C61 * C8850 +
                     ((C62 * C932 - C148 * C820) * C115 +
                      (C62 * C1076 - C148 * C982) * C63) *
                         C61 * C14474) *
                        C14369 * C14623 +
                    (((C62 * C151 - C148 * C75) * C115 +
                      (C62 * C243 - C148 * C183) * C63) *
                         C61 * C8850 +
                     ((C148 * C822 - C62 * C934) * C115 +
                      (C148 * C984 - C62 * C1078) * C63) *
                         C61 * C14474) *
                        C14369 * C14610 +
                    (((C148 * C76 - C62 * C152) * C115 +
                      (C148 * C184 - C62 * C244) * C63) *
                         C61 * C8850 +
                     ((C62 * C1656 - C148 * C1582) * C115 +
                      (C62 * C1763 - C148 * C1692) * C63) *
                         C61 * C14474) *
                        C14369 * C14593)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((((C62 * C149 - C148 * C73) * C115 +
                       (C62 * C241 - C148 * C181) * C63) *
                          C61 * C8850 +
                      ((C148 * C818 - C62 * C930) * C115 +
                       (C148 * C980 - C62 * C1074) * C63) *
                          C61 * C14474) *
                         C14624 +
                     (((C148 * C377 - C62 * C489) * C115 +
                       (C148 * C539 - C62 * C633) * C63) *
                          C61 * C8850 +
                      ((C62 * C2038 - C148 * C1920) * C115 +
                       (C62 * C2203 - C148 * C2094) * C63) *
                          C61 * C14474) *
                         C14612 +
                     (((C62 * C490 - C148 * C378) * C115 +
                       (C62 * C634 - C148 * C540) * C63) *
                          C61 * C8850 +
                      ((C148 * C2991 - C62 * C3085) * C115 +
                       (C148 * C3129 - C62 * C3214) * C63) *
                          C61 * C14474) *
                         C14589) *
                        C6844 +
                    ((((C148 * C74 - C62 * C150) * C115 +
                       (C148 * C182 - C62 * C242) * C63) *
                          C61 * C8850 +
                      ((C62 * C932 - C148 * C820) * C115 +
                       (C62 * C1076 - C148 * C982) * C63) *
                          C61 * C14474) *
                         C14624 +
                     (((C62 * C491 - C148 * C379) * C115 +
                       (C62 * C635 - C148 * C541) * C63) *
                          C61 * C8850 +
                      ((C148 * C1921 - C62 * C2039) * C115 +
                       (C148 * C2095 - C62 * C2204) * C63) *
                          C61 * C14474) *
                         C14612 +
                     (((C148 * C380 - C62 * C492) * C115 +
                       (C148 * C542 - C62 * C636) * C63) *
                          C61 * C8850 +
                      ((C62 * C3826 - C148 * C3720) * C115 +
                       (C62 * C3981 - C148 * C3878) * C63) *
                          C61 * C14474) *
                         C14589) *
                        C14352)) /
                      (p * q * std::sqrt(p + q));
    d2eezx[19] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
               C63 * C8850 +
           ((C71 * C818 - C61 * C824) * C148 +
            (C71 * C1118 - C61 * C1124) * C62) *
               C63 * C14474) *
              C14369 * C14630 +
          (((C71 * C74 - C61 * C80) * C148 + (C71 * C269 - C61 * C274) * C62) *
               C63 * C8850 +
           ((C61 * C828 - C71 * C820) * C148 +
            (C61 * C1126 - C71 * C1120) * C62) *
               C63 * C14474) *
              C14369 * C14623 +
          (((C61 * C82 - C71 * C75) * C148 + (C61 * C275 - C71 * C270) * C62) *
               C63 * C8850 +
           ((C71 * C822 - C61 * C832) * C148 +
            (C71 * C1122 - C61 * C1128) * C62) *
               C63 * C14474) *
              C14369 * C14610 +
          (((C71 * C76 - C61 * C84) * C148 + (C71 * C271 - C61 * C276) * C62) *
               C63 * C8850 +
           ((C61 * C1583 - C71 * C1582) * C148 +
            (C61 * C1799 - C71 * C1798) * C62) *
               C63 * C14474) *
              C14369 * C14593)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
                C63 * C8850 +
            ((C71 * C818 - C61 * C824) * C148 +
             (C71 * C1118 - C61 * C1124) * C62) *
                C63 * C14474) *
               C14624 +
           (((C71 * C377 - C61 * C383) * C148 +
             (C71 * C677 - C61 * C683) * C62) *
                C63 * C8850 +
            ((C61 * C1923 - C71 * C1920) * C148 +
             (C61 * C2259 - C71 * C2256) * C62) *
                C63 * C14474) *
               C14612 +
           (((C61 * C385 - C71 * C378) * C148 +
             (C61 * C684 - C71 * C678) * C62) *
                C63 * C8850 +
            ((C71 * C2991 - C61 * C2995) * C148 +
             (C71 * C3255 - C61 * C3258) * C62) *
                C63 * C14474) *
               C14589) *
              C6844 +
          ((((C71 * C74 - C61 * C80) * C148 + (C71 * C269 - C61 * C274) * C62) *
                C63 * C8850 +
            ((C61 * C828 - C71 * C820) * C148 +
             (C61 * C1126 - C71 * C1120) * C62) *
                C63 * C14474) *
               C14624 +
           (((C61 * C387 - C71 * C379) * C148 +
             (C61 * C685 - C71 * C679) * C62) *
                C63 * C8850 +
            ((C71 * C1921 - C61 * C1925) * C148 +
             (C71 * C2257 - C61 * C2260) * C62) *
                C63 * C14474) *
               C14612 +
           (((C71 * C380 - C61 * C389) * C148 +
             (C71 * C680 - C61 * C686) * C62) *
                C63 * C8850 +
            ((C61 * C3721 - C71 * C3720) * C148 +
             (C61 * C4033 - C71 * C4032) * C62) *
                C63 * C14474) *
               C14589) *
              C14352)) /
            (p * q * std::sqrt(p + q));
    d2eezy[19] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C63 * C116 - C115 * C73) * C148 +
                      (C63 * C300 - C115 * C268) * C62) *
                         C61 * C8850 +
                     ((C115 * C818 - C63 * C880) * C148 +
                      (C115 * C1118 - C63 * C1168) * C62) *
                         C61 * C14474) *
                        C14369 * C14630 +
                    (((C115 * C74 - C63 * C117) * C148 +
                      (C115 * C269 - C63 * C301) * C62) *
                         C61 * C8850 +
                     ((C63 * C882 - C115 * C820) * C148 +
                      (C63 * C1170 - C115 * C1120) * C62) *
                         C61 * C14474) *
                        C14369 * C14623 +
                    (((C63 * C118 - C115 * C75) * C148 +
                      (C63 * C302 - C115 * C270) * C62) *
                         C61 * C8850 +
                     ((C115 * C822 - C63 * C884) * C148 +
                      (C115 * C1122 - C63 * C1172) * C62) *
                         C61 * C14474) *
                        C14369 * C14610 +
                    (((C115 * C76 - C63 * C119) * C148 +
                      (C115 * C271 - C63 * C303) * C62) *
                         C61 * C8850 +
                     ((C63 * C1620 - C115 * C1582) * C148 +
                      (C63 * C1834 - C115 * C1798) * C62) *
                         C61 * C14474) *
                        C14369 * C14593)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((((C63 * C116 - C115 * C73) * C148 +
                       (C63 * C300 - C115 * C268) * C62) *
                          C61 * C8850 +
                      ((C115 * C818 - C63 * C880) * C148 +
                       (C115 * C1118 - C63 * C1168) * C62) *
                          C61 * C14474) *
                         C14624 +
                     (((C115 * C377 - C63 * C439) * C148 +
                       (C115 * C677 - C63 * C727) * C62) *
                          C61 * C8850 +
                      ((C63 * C1982 - C115 * C1920) * C148 +
                       (C63 * C2312 - C115 * C2256) * C62) *
                          C61 * C14474) *
                         C14612 +
                     (((C63 * C440 - C115 * C378) * C148 +
                       (C63 * C728 - C115 * C678) * C62) *
                          C61 * C8850 +
                      ((C115 * C2991 - C63 * C3041) * C148 +
                       (C115 * C3255 - C63 * C3299) * C62) *
                          C61 * C14474) *
                         C14589) *
                        C6844 +
                    ((((C115 * C74 - C63 * C117) * C148 +
                       (C115 * C269 - C63 * C301) * C62) *
                          C61 * C8850 +
                      ((C63 * C882 - C115 * C820) * C148 +
                       (C63 * C1170 - C115 * C1120) * C62) *
                          C61 * C14474) *
                         C14624 +
                     (((C63 * C441 - C115 * C379) * C148 +
                       (C63 * C729 - C115 * C679) * C62) *
                          C61 * C8850 +
                      ((C115 * C1921 - C63 * C1983) * C148 +
                       (C115 * C2257 - C63 * C2313) * C62) *
                          C61 * C14474) *
                         C14612 +
                     (((C115 * C380 - C63 * C442) * C148 +
                       (C115 * C680 - C63 * C730) * C62) *
                          C61 * C8850 +
                      ((C63 * C3774 - C115 * C3720) * C148 +
                       (C63 * C4084 - C115 * C4032) * C62) *
                          C61 * C14474) *
                         C14589) *
                        C14352)) /
                      (p * q * std::sqrt(p + q));
    d2eezz[19] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) * C63 * C61 *
               C8850 -
           (C148 * C930 - C327 * C818 - C148 * C1118 + C62 * C1212) * C63 *
               C61 * C14474) *
              C14369 * C14630 +
          ((C148 * C932 - C327 * C820 - C148 * C1120 + C62 * C1214) * C63 *
               C61 * C14474 -
           (C148 * C150 - C327 * C74 - C148 * C269 + C62 * C329) * C63 * C61 *
               C8850) *
              C14369 * C14623 +
          ((C148 * C151 - C327 * C75 - C148 * C270 + C62 * C330) * C63 * C61 *
               C8850 -
           (C148 * C934 - C327 * C822 - C148 * C1122 + C62 * C1216) * C63 *
               C61 * C14474) *
              C14369 * C14610 +
          ((C148 * C1656 - C327 * C1582 - C148 * C1798 + C62 * C1869) * C63 *
               C61 * C14474 -
           (C148 * C152 - C327 * C76 - C148 * C271 + C62 * C331) * C63 * C61 *
               C8850) *
              C14369 * C14593)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) * C63 * C61 *
                C8850 -
            (C148 * C930 - C327 * C818 - C148 * C1118 + C62 * C1212) * C63 *
                C61 * C14474) *
               C14624 +
           ((C148 * C2038 - C327 * C1920 - C148 * C2256 + C62 * C2365) * C63 *
                C61 * C14474 -
            (C148 * C489 - C327 * C377 - C148 * C677 + C62 * C771) * C63 * C61 *
                C8850) *
               C14612 +
           ((C148 * C490 - C327 * C378 - C148 * C678 + C62 * C772) * C63 * C61 *
                C8850 -
            (C148 * C3085 - C327 * C2991 - C148 * C3255 + C62 * C3340) * C63 *
                C61 * C14474) *
               C14589) *
              C6844 +
          (((C148 * C932 - C327 * C820 - C148 * C1120 + C62 * C1214) * C63 *
                C61 * C14474 -
            (C148 * C150 - C327 * C74 - C148 * C269 + C62 * C329) * C63 * C61 *
                C8850) *
               C14624 +
           ((C148 * C491 - C327 * C379 - C148 * C679 + C62 * C773) * C63 * C61 *
                C8850 -
            (C148 * C2039 - C327 * C1921 - C148 * C2257 + C62 * C2366) * C63 *
                C61 * C14474) *
               C14612 +
           ((C148 * C3826 - C327 * C3720 - C148 * C4032 + C62 * C4135) * C63 *
                C61 * C14474 -
            (C148 * C492 - C327 * C380 - C148 * C680 + C62 * C774) * C63 * C61 *
                C8850) *
               C14589) *
              C14352)) /
            (p * q * std::sqrt(p + q));
    d2eexx[20] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 *
                         C63 * C14387 * C14563 -
                     (C71 * C383 - C72 * C377 - C71 * C384 + C61 * C395) * C62 *
                         C63 * C14387 * C14432) *
                        C1254 +
                    ((C71 * C387 - C72 * C379 - C71 * C388 + C61 * C397) * C62 *
                         C63 * C14387 * C14432 -
                     (C71 * C80 - C72 * C74 - C71 * C81 + C61 * C89) * C62 *
                         C63 * C14387 * C14563) *
                        C1255 +
                    ((C71 * C82 - C72 * C75 - C71 * C83 + C61 * C90) * C62 *
                         C63 * C14387 * C14563 -
                     (C71 * C391 - C72 * C381 - C71 * C392 + C61 * C399) * C62 *
                         C63 * C14387 * C14432) *
                        C1256 +
                    ((C71 * C1259 - C72 * C1258 - C71 * C1260 + C61 * C1261) *
                         C62 * C63 * C14387 * C14432 -
                     (C71 * C84 - C72 * C76 - C71 * C85 + C61 * C91) * C62 *
                         C63 * C14387 * C14563) *
                        C14593)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 *
                         C63 * C14387 * C3376 -
                     (C71 * C383 - C72 * C377 - C71 * C384 + C61 * C395) * C62 *
                         C63 * C14387 * C3377 +
                     (C71 * C385 - C72 * C378 - C71 * C386 + C61 * C396) * C62 *
                         C63 * C14387 * C3378 -
                     (C71 * C2746 - C72 * C2744 - C71 * C2747 + C61 * C2750) *
                         C62 * C63 * C14387 * C14599) *
                        C14549 +
                    ((C71 * C387 - C72 * C379 - C71 * C388 + C61 * C397) * C62 *
                         C63 * C14387 * C3377 -
                     (C71 * C80 - C72 * C74 - C71 * C81 + C61 * C89) * C62 *
                         C63 * C14387 * C3376 -
                     (C71 * C389 - C72 * C380 - C71 * C390 + C61 * C398) * C62 *
                         C63 * C14387 * C3378 +
                     (C71 * C3383 - C72 * C3382 - C71 * C3384 + C61 * C3385) *
                         C62 * C63 * C14387 * C14599) *
                        C14352)) /
                      (p * q * std::sqrt(p + q));
    d2eexy[20] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C63 * C116 - C115 * C73) * C71 + (C63 * C121 - C115 * C79) * C61) *
               C62 * C14387 * C14563 +
           ((C115 * C377 - C63 * C439) * C71 +
            (C115 * C384 - C63 * C445) * C61) *
               C62 * C14387 * C14432) *
              C1254 +
          (((C115 * C74 - C63 * C117) * C71 + (C115 * C81 - C63 * C122) * C61) *
               C62 * C14387 * C14563 +
           ((C63 * C441 - C115 * C379) * C71 +
            (C63 * C447 - C115 * C388) * C61) *
               C62 * C14387 * C14432) *
              C1255 +
          (((C63 * C118 - C115 * C75) * C71 + (C63 * C123 - C115 * C83) * C61) *
               C62 * C14387 * C14563 +
           ((C115 * C381 - C63 * C443) * C71 +
            (C115 * C392 - C63 * C449) * C61) *
               C62 * C14387 * C14432) *
              C1256 +
          (((C115 * C76 - C63 * C119) * C71 + (C115 * C85 - C63 * C124) * C61) *
               C62 * C14387 * C14563 +
           ((C63 * C1296 - C115 * C1258) * C71 +
            (C63 * C1297 - C115 * C1260) * C61) *
               C62 * C14387 * C14432) *
              C14593)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C63 * C116 - C115 * C73) * C71 + (C63 * C121 - C115 * C79) * C61) *
               C62 * C14387 * C3376 +
           ((C115 * C377 - C63 * C439) * C71 +
            (C115 * C384 - C63 * C445) * C61) *
               C62 * C14387 * C3377 +
           ((C63 * C440 - C115 * C378) * C71 +
            (C63 * C446 - C115 * C386) * C61) *
               C62 * C14387 * C3378 +
           ((C115 * C2744 - C63 * C2774) * C71 +
            (C115 * C2747 - C63 * C2776) * C61) *
               C62 * C14387 * C14599) *
              C14549 +
          (((C115 * C74 - C63 * C117) * C71 + (C115 * C81 - C63 * C122) * C61) *
               C62 * C14387 * C3376 +
           ((C63 * C441 - C115 * C379) * C71 +
            (C63 * C447 - C115 * C388) * C61) *
               C62 * C14387 * C3377 +
           ((C115 * C380 - C63 * C442) * C71 +
            (C115 * C390 - C63 * C448) * C61) *
               C62 * C14387 * C3378 +
           ((C63 * C3420 - C115 * C3382) * C71 +
            (C63 * C3421 - C115 * C3384) * C61) *
               C62 * C14387 * C14599) *
              C14352)) /
            (p * q * std::sqrt(p + q));
    d2eexz[20] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C62 * C149 - C148 * C73) * C71 + (C62 * C154 - C148 * C79) * C61) *
               C63 * C14387 * C14563 +
           ((C148 * C377 - C62 * C489) * C71 +
            (C148 * C384 - C62 * C495) * C61) *
               C63 * C14387 * C14432) *
              C1254 +
          (((C148 * C74 - C62 * C150) * C71 + (C148 * C81 - C62 * C155) * C61) *
               C63 * C14387 * C14563 +
           ((C62 * C491 - C148 * C379) * C71 +
            (C62 * C497 - C148 * C388) * C61) *
               C63 * C14387 * C14432) *
              C1255 +
          (((C62 * C151 - C148 * C75) * C71 + (C62 * C156 - C148 * C83) * C61) *
               C63 * C14387 * C14563 +
           ((C148 * C381 - C62 * C493) * C71 +
            (C148 * C392 - C62 * C499) * C61) *
               C63 * C14387 * C14432) *
              C1256 +
          (((C148 * C76 - C62 * C152) * C71 + (C148 * C85 - C62 * C157) * C61) *
               C63 * C14387 * C14563 +
           ((C62 * C1332 - C148 * C1258) * C71 +
            (C62 * C1333 - C148 * C1260) * C61) *
               C63 * C14387 * C14432) *
              C14593)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C62 * C149 - C148 * C73) * C71 + (C62 * C154 - C148 * C79) * C61) *
               C63 * C14387 * C3376 +
           ((C148 * C377 - C62 * C489) * C71 +
            (C148 * C384 - C62 * C495) * C61) *
               C63 * C14387 * C3377 +
           ((C62 * C490 - C148 * C378) * C71 +
            (C62 * C496 - C148 * C386) * C61) *
               C63 * C14387 * C3378 +
           ((C148 * C2744 - C62 * C2800) * C71 +
            (C148 * C2747 - C62 * C2802) * C61) *
               C63 * C14387 * C14599) *
              C14549 +
          (((C148 * C74 - C62 * C150) * C71 + (C148 * C81 - C62 * C155) * C61) *
               C63 * C14387 * C3376 +
           ((C62 * C491 - C148 * C379) * C71 +
            (C62 * C497 - C148 * C388) * C61) *
               C63 * C14387 * C3377 +
           ((C148 * C380 - C62 * C492) * C71 +
            (C148 * C390 - C62 * C498) * C61) *
               C63 * C14387 * C3378 +
           ((C62 * C3456 - C148 * C3382) * C71 +
            (C62 * C3457 - C148 * C3384) * C61) *
               C63 * C14387 * C14599) *
              C14352)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[20] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
               C62 * C14387 * C14563 +
           ((C71 * C377 - C61 * C383) * C115 +
            (C71 * C539 - C61 * C545) * C63) *
               C62 * C14387 * C14432) *
              C1254 +
          (((C71 * C74 - C61 * C80) * C115 + (C71 * C182 - C61 * C187) * C63) *
               C62 * C14387 * C14563 +
           ((C61 * C387 - C71 * C379) * C115 +
            (C61 * C547 - C71 * C541) * C63) *
               C62 * C14387 * C14432) *
              C1255 +
          (((C61 * C82 - C71 * C75) * C115 + (C61 * C188 - C71 * C183) * C63) *
               C62 * C14387 * C14563 +
           ((C71 * C381 - C61 * C391) * C115 +
            (C71 * C543 - C61 * C549) * C63) *
               C62 * C14387 * C14432) *
              C1256 +
          (((C71 * C76 - C61 * C84) * C115 + (C71 * C184 - C61 * C189) * C63) *
               C62 * C14387 * C14563 +
           ((C61 * C1259 - C71 * C1258) * C115 +
            (C61 * C1369 - C71 * C1368) * C63) *
               C62 * C14387 * C14432) *
              C14593)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
               C62 * C14387 * C3376 +
           ((C71 * C377 - C61 * C383) * C115 +
            (C71 * C539 - C61 * C545) * C63) *
               C62 * C14387 * C3377 +
           ((C61 * C385 - C71 * C378) * C115 +
            (C61 * C546 - C71 * C540) * C63) *
               C62 * C14387 * C3378 +
           ((C71 * C2744 - C61 * C2746) * C115 +
            (C71 * C2826 - C61 * C2828) * C63) *
               C62 * C14387 * C14599) *
              C14549 +
          (((C71 * C74 - C61 * C80) * C115 + (C71 * C182 - C61 * C187) * C63) *
               C62 * C14387 * C3376 +
           ((C61 * C387 - C71 * C379) * C115 +
            (C61 * C547 - C71 * C541) * C63) *
               C62 * C14387 * C3377 +
           ((C71 * C380 - C61 * C389) * C115 +
            (C71 * C542 - C61 * C548) * C63) *
               C62 * C14387 * C3378 +
           ((C61 * C3383 - C71 * C3382) * C115 +
            (C61 * C3493 - C71 * C3492) * C63) *
               C62 * C14387 * C14599) *
              C14352)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[20] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) * C61 * C62 *
               C14387 * C14563 -
           (C115 * C439 - C213 * C377 - C115 * C539 + C63 * C589) * C61 * C62 *
               C14387 * C14432) *
              C1254 +
          ((C115 * C441 - C213 * C379 - C115 * C541 + C63 * C591) * C61 * C62 *
               C14387 * C14432 -
           (C115 * C117 - C213 * C74 - C115 * C182 + C63 * C215) * C61 * C62 *
               C14387 * C14563) *
              C1255 +
          ((C115 * C118 - C213 * C75 - C115 * C183 + C63 * C216) * C61 * C62 *
               C14387 * C14563 -
           (C115 * C443 - C213 * C381 - C115 * C543 + C63 * C593) * C61 * C62 *
               C14387 * C14432) *
              C1256 +
          ((C115 * C1296 - C213 * C1258 - C115 * C1368 + C63 * C1404) * C61 *
               C62 * C14387 * C14432 -
           (C115 * C119 - C213 * C76 - C115 * C184 + C63 * C217) * C61 * C62 *
               C14387 * C14563) *
              C14593)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) * C61 * C62 *
               C14387 * C3376 -
           (C115 * C439 - C213 * C377 - C115 * C539 + C63 * C589) * C61 * C62 *
               C14387 * C3377 +
           (C115 * C440 - C213 * C378 - C115 * C540 + C63 * C590) * C61 * C62 *
               C14387 * C3378 -
           (C115 * C2774 - C213 * C2744 - C115 * C2826 + C63 * C2852) * C61 *
               C62 * C14387 * C14599) *
              C14549 +
          ((C115 * C441 - C213 * C379 - C115 * C541 + C63 * C591) * C61 * C62 *
               C14387 * C3377 -
           (C115 * C117 - C213 * C74 - C115 * C182 + C63 * C215) * C61 * C62 *
               C14387 * C3376 -
           (C115 * C442 - C213 * C380 - C115 * C542 + C63 * C592) * C61 * C62 *
               C14387 * C3378 +
           (C115 * C3420 - C213 * C3382 - C115 * C3492 + C63 * C3528) * C61 *
               C62 * C14387 * C14599) *
              C14352)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[20] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C62 * C149 - C148 * C73) * C115 +
                      (C62 * C241 - C148 * C181) * C63) *
                         C61 * C14387 * C14563 +
                     ((C148 * C377 - C62 * C489) * C115 +
                      (C148 * C539 - C62 * C633) * C63) *
                         C61 * C14387 * C14432) *
                        C1254 +
                    (((C148 * C74 - C62 * C150) * C115 +
                      (C148 * C182 - C62 * C242) * C63) *
                         C61 * C14387 * C14563 +
                     ((C62 * C491 - C148 * C379) * C115 +
                      (C62 * C635 - C148 * C541) * C63) *
                         C61 * C14387 * C14432) *
                        C1255 +
                    (((C62 * C151 - C148 * C75) * C115 +
                      (C62 * C243 - C148 * C183) * C63) *
                         C61 * C14387 * C14563 +
                     ((C148 * C381 - C62 * C493) * C115 +
                      (C148 * C543 - C62 * C637) * C63) *
                         C61 * C14387 * C14432) *
                        C1256 +
                    (((C148 * C76 - C62 * C152) * C115 +
                      (C148 * C184 - C62 * C244) * C63) *
                         C61 * C14387 * C14563 +
                     ((C62 * C1332 - C148 * C1258) * C115 +
                      (C62 * C1439 - C148 * C1368) * C63) *
                         C61 * C14387 * C14432) *
                        C14593)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C62 * C149 - C148 * C73) * C115 +
                      (C62 * C241 - C148 * C181) * C63) *
                         C61 * C14387 * C3376 +
                     ((C148 * C377 - C62 * C489) * C115 +
                      (C148 * C539 - C62 * C633) * C63) *
                         C61 * C14387 * C3377 +
                     ((C62 * C490 - C148 * C378) * C115 +
                      (C62 * C634 - C148 * C540) * C63) *
                         C61 * C14387 * C3378 +
                     ((C148 * C2744 - C62 * C2800) * C115 +
                      (C148 * C2826 - C62 * C2876) * C63) *
                         C61 * C14387 * C14599) *
                        C14549 +
                    (((C148 * C74 - C62 * C150) * C115 +
                      (C148 * C182 - C62 * C242) * C63) *
                         C61 * C14387 * C3376 +
                     ((C62 * C491 - C148 * C379) * C115 +
                      (C62 * C635 - C148 * C541) * C63) *
                         C61 * C14387 * C3377 +
                     ((C148 * C380 - C62 * C492) * C115 +
                      (C148 * C542 - C62 * C636) * C63) *
                         C61 * C14387 * C3378 +
                     ((C62 * C3456 - C148 * C3382) * C115 +
                      (C62 * C3563 - C148 * C3492) * C63) *
                         C61 * C14387 * C14599) *
                        C14352)) /
                      (p * q * std::sqrt(p + q));
    d2eezx[20] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
               C63 * C14387 * C14563 +
           ((C71 * C377 - C61 * C383) * C148 +
            (C71 * C677 - C61 * C683) * C62) *
               C63 * C14387 * C14432) *
              C1254 +
          (((C71 * C74 - C61 * C80) * C148 + (C71 * C269 - C61 * C274) * C62) *
               C63 * C14387 * C14563 +
           ((C61 * C387 - C71 * C379) * C148 +
            (C61 * C685 - C71 * C679) * C62) *
               C63 * C14387 * C14432) *
              C1255 +
          (((C61 * C82 - C71 * C75) * C148 + (C61 * C275 - C71 * C270) * C62) *
               C63 * C14387 * C14563 +
           ((C71 * C381 - C61 * C391) * C148 +
            (C71 * C681 - C61 * C687) * C62) *
               C63 * C14387 * C14432) *
              C1256 +
          (((C71 * C76 - C61 * C84) * C148 + (C71 * C271 - C61 * C276) * C62) *
               C63 * C14387 * C14563 +
           ((C61 * C1259 - C71 * C1258) * C148 +
            (C61 * C1475 - C71 * C1474) * C62) *
               C63 * C14387 * C14432) *
              C14593)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
               C63 * C14387 * C3376 +
           ((C71 * C377 - C61 * C383) * C148 +
            (C71 * C677 - C61 * C683) * C62) *
               C63 * C14387 * C3377 +
           ((C61 * C385 - C71 * C378) * C148 +
            (C61 * C684 - C71 * C678) * C62) *
               C63 * C14387 * C3378 +
           ((C71 * C2744 - C61 * C2746) * C148 +
            (C71 * C2900 - C61 * C2902) * C62) *
               C63 * C14387 * C14599) *
              C14549 +
          (((C71 * C74 - C61 * C80) * C148 + (C71 * C269 - C61 * C274) * C62) *
               C63 * C14387 * C3376 +
           ((C61 * C387 - C71 * C379) * C148 +
            (C61 * C685 - C71 * C679) * C62) *
               C63 * C14387 * C3377 +
           ((C71 * C380 - C61 * C389) * C148 +
            (C71 * C680 - C61 * C686) * C62) *
               C63 * C14387 * C3378 +
           ((C61 * C3383 - C71 * C3382) * C148 +
            (C61 * C3599 - C71 * C3598) * C62) *
               C63 * C14387 * C14599) *
              C14352)) /
            (p * q * std::sqrt(p + q));
    d2eezy[20] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C63 * C116 - C115 * C73) * C148 +
                      (C63 * C300 - C115 * C268) * C62) *
                         C61 * C14387 * C14563 +
                     ((C115 * C377 - C63 * C439) * C148 +
                      (C115 * C677 - C63 * C727) * C62) *
                         C61 * C14387 * C14432) *
                        C1254 +
                    (((C115 * C74 - C63 * C117) * C148 +
                      (C115 * C269 - C63 * C301) * C62) *
                         C61 * C14387 * C14563 +
                     ((C63 * C441 - C115 * C379) * C148 +
                      (C63 * C729 - C115 * C679) * C62) *
                         C61 * C14387 * C14432) *
                        C1255 +
                    (((C63 * C118 - C115 * C75) * C148 +
                      (C63 * C302 - C115 * C270) * C62) *
                         C61 * C14387 * C14563 +
                     ((C115 * C381 - C63 * C443) * C148 +
                      (C115 * C681 - C63 * C731) * C62) *
                         C61 * C14387 * C14432) *
                        C1256 +
                    (((C115 * C76 - C63 * C119) * C148 +
                      (C115 * C271 - C63 * C303) * C62) *
                         C61 * C14387 * C14563 +
                     ((C63 * C1296 - C115 * C1258) * C148 +
                      (C63 * C1510 - C115 * C1474) * C62) *
                         C61 * C14387 * C14432) *
                        C14593)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C63 * C116 - C115 * C73) * C148 +
                      (C63 * C300 - C115 * C268) * C62) *
                         C61 * C14387 * C3376 +
                     ((C115 * C377 - C63 * C439) * C148 +
                      (C115 * C677 - C63 * C727) * C62) *
                         C61 * C14387 * C3377 +
                     ((C63 * C440 - C115 * C378) * C148 +
                      (C63 * C728 - C115 * C678) * C62) *
                         C61 * C14387 * C3378 +
                     ((C115 * C2744 - C63 * C2774) * C148 +
                      (C115 * C2900 - C63 * C2926) * C62) *
                         C61 * C14387 * C14599) *
                        C14549 +
                    (((C115 * C74 - C63 * C117) * C148 +
                      (C115 * C269 - C63 * C301) * C62) *
                         C61 * C14387 * C3376 +
                     ((C63 * C441 - C115 * C379) * C148 +
                      (C63 * C729 - C115 * C679) * C62) *
                         C61 * C14387 * C3377 +
                     ((C115 * C380 - C63 * C442) * C148 +
                      (C115 * C680 - C63 * C730) * C62) *
                         C61 * C14387 * C3378 +
                     ((C63 * C3420 - C115 * C3382) * C148 +
                      (C63 * C3634 - C115 * C3598) * C62) *
                         C61 * C14387 * C14599) *
                        C14352)) /
                      (p * q * std::sqrt(p + q));
    d2eezz[20] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) * C63 * C61 *
               C14387 * C14563 -
           (C148 * C489 - C327 * C377 - C148 * C677 + C62 * C771) * C63 * C61 *
               C14387 * C14432) *
              C1254 +
          ((C148 * C491 - C327 * C379 - C148 * C679 + C62 * C773) * C63 * C61 *
               C14387 * C14432 -
           (C148 * C150 - C327 * C74 - C148 * C269 + C62 * C329) * C63 * C61 *
               C14387 * C14563) *
              C1255 +
          ((C148 * C151 - C327 * C75 - C148 * C270 + C62 * C330) * C63 * C61 *
               C14387 * C14563 -
           (C148 * C493 - C327 * C381 - C148 * C681 + C62 * C775) * C63 * C61 *
               C14387 * C14432) *
              C1256 +
          ((C148 * C1332 - C327 * C1258 - C148 * C1474 + C62 * C1545) * C63 *
               C61 * C14387 * C14432 -
           (C148 * C152 - C327 * C76 - C148 * C271 + C62 * C331) * C63 * C61 *
               C14387 * C14563) *
              C14593)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) * C63 * C61 *
               C14387 * C3376 -
           (C148 * C489 - C327 * C377 - C148 * C677 + C62 * C771) * C63 * C61 *
               C14387 * C3377 +
           (C148 * C490 - C327 * C378 - C148 * C678 + C62 * C772) * C63 * C61 *
               C14387 * C3378 -
           (C148 * C2800 - C327 * C2744 - C148 * C2900 + C62 * C2950) * C63 *
               C61 * C14387 * C14599) *
              C14549 +
          ((C148 * C491 - C327 * C379 - C148 * C679 + C62 * C773) * C63 * C61 *
               C14387 * C3377 -
           (C148 * C150 - C327 * C74 - C148 * C269 + C62 * C329) * C63 * C61 *
               C14387 * C3376 -
           (C148 * C492 - C327 * C380 - C148 * C680 + C62 * C774) * C63 * C61 *
               C14387 * C3378 +
           (C148 * C3456 - C327 * C3382 - C148 * C3598 + C62 * C3669) * C63 *
               C61 * C14387 * C14599) *
              C14352)) /
            (p * q * std::sqrt(p + q));
    d2eexx[21] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 *
                          C63 * C14564 -
                      (C71 * C824 - C72 * C818 - C71 * C825 + C61 * C836) *
                          C62 * C63 * C14474) *
                         C14563 +
                     ((C71 * C1923 - C72 * C1920 - C71 * C1924 + C61 * C1929) *
                          C62 * C63 * C14474 -
                      (C71 * C383 - C72 * C377 - C71 * C384 + C61 * C395) *
                          C62 * C63 * C14564) *
                         C14432) *
                        C374 +
                    (((C71 * C828 - C72 * C820 - C71 * C829 + C61 * C838) *
                          C62 * C63 * C14474 -
                      (C71 * C80 - C72 * C74 - C71 * C81 + C61 * C89) * C62 *
                          C63 * C14564) *
                         C14563 +
                     ((C71 * C387 - C72 * C379 - C71 * C388 + C61 * C397) *
                          C62 * C63 * C14564 -
                      (C71 * C1925 - C72 * C1921 - C71 * C1926 + C61 * C1930) *
                          C62 * C63 * C14474) *
                         C14432) *
                        C375 +
                    (((C71 * C82 - C72 * C75 - C71 * C83 + C61 * C90) * C62 *
                          C63 * C14564 -
                      (C71 * C832 - C72 * C822 - C71 * C833 + C61 * C840) *
                          C62 * C63 * C14474) *
                         C14563 +
                     ((C71 * C1927 - C72 * C1922 - C71 * C1928 + C61 * C1931) *
                          C62 * C63 * C14474 -
                      (C71 * C391 - C72 * C381 - C71 * C392 + C61 * C399) *
                          C62 * C63 * C14564) *
                         C14432) *
                        C14583)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 *
                         C63 * C14564 -
                     (C71 * C824 - C72 * C818 - C71 * C825 + C61 * C836) * C62 *
                         C63 * C14474) *
                        C3376 +
                    ((C71 * C1923 - C72 * C1920 - C71 * C1924 + C61 * C1929) *
                         C62 * C63 * C14474 -
                     (C71 * C383 - C72 * C377 - C71 * C384 + C61 * C395) * C62 *
                         C63 * C14564) *
                        C3377 +
                    ((C71 * C385 - C72 * C378 - C71 * C386 + C61 * C396) * C62 *
                         C63 * C14564 -
                     (C71 * C2995 - C72 * C2991 - C71 * C2996 + C61 * C3000) *
                         C62 * C63 * C14474) *
                        C3378 +
                    ((C71 * C4171 - C72 * C4170 - C71 * C4172 + C61 * C4173) *
                         C62 * C63 * C14474 -
                     (C71 * C2746 - C72 * C2744 - C71 * C2747 + C61 * C2750) *
                         C62 * C63 * C14564) *
                        C14599) *
                   C14341) /
                      (p * q * std::sqrt(p + q));
    d2eexy[21] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C63 * C116 - C115 * C73) * C71 +
             (C63 * C121 - C115 * C79) * C61) *
                C62 * C14564 +
            ((C115 * C818 - C63 * C880) * C71 +
             (C115 * C825 - C63 * C886) * C61) *
                C62 * C14474) *
               C14563 +
           (((C115 * C377 - C63 * C439) * C71 +
             (C115 * C384 - C63 * C445) * C61) *
                C62 * C14564 +
            ((C63 * C1982 - C115 * C1920) * C71 +
             (C63 * C1985 - C115 * C1924) * C61) *
                C62 * C14474) *
               C14432) *
              C374 +
          ((((C115 * C74 - C63 * C117) * C71 +
             (C115 * C81 - C63 * C122) * C61) *
                C62 * C14564 +
            ((C63 * C882 - C115 * C820) * C71 +
             (C63 * C888 - C115 * C829) * C61) *
                C62 * C14474) *
               C14563 +
           (((C63 * C441 - C115 * C379) * C71 +
             (C63 * C447 - C115 * C388) * C61) *
                C62 * C14564 +
            ((C115 * C1921 - C63 * C1983) * C71 +
             (C115 * C1926 - C63 * C1986) * C61) *
                C62 * C14474) *
               C14432) *
              C375 +
          ((((C63 * C118 - C115 * C75) * C71 +
             (C63 * C123 - C115 * C83) * C61) *
                C62 * C14564 +
            ((C115 * C822 - C63 * C884) * C71 +
             (C115 * C833 - C63 * C890) * C61) *
                C62 * C14474) *
               C14563 +
           (((C115 * C381 - C63 * C443) * C71 +
             (C115 * C392 - C63 * C449) * C61) *
                C62 * C14564 +
            ((C63 * C1984 - C115 * C1922) * C71 +
             (C63 * C1987 - C115 * C1928) * C61) *
                C62 * C14474) *
               C14432) *
              C14583)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C63 * C116 - C115 * C73) * C71 + (C63 * C121 - C115 * C79) * C61) *
               C62 * C14564 +
           ((C115 * C818 - C63 * C880) * C71 +
            (C115 * C825 - C63 * C886) * C61) *
               C62 * C14474) *
              C3376 +
          (((C115 * C377 - C63 * C439) * C71 +
            (C115 * C384 - C63 * C445) * C61) *
               C62 * C14564 +
           ((C63 * C1982 - C115 * C1920) * C71 +
            (C63 * C1985 - C115 * C1924) * C61) *
               C62 * C14474) *
              C3377 +
          (((C63 * C440 - C115 * C378) * C71 +
            (C63 * C446 - C115 * C386) * C61) *
               C62 * C14564 +
           ((C115 * C2991 - C63 * C3041) * C71 +
            (C115 * C2996 - C63 * C3044) * C61) *
               C62 * C14474) *
              C3378 +
          (((C115 * C2744 - C63 * C2774) * C71 +
            (C115 * C2747 - C63 * C2776) * C61) *
               C62 * C14564 +
           ((C63 * C4208 - C115 * C4170) * C71 +
            (C63 * C4209 - C115 * C4172) * C61) *
               C62 * C14474) *
              C14599) *
         C14341) /
            (p * q * std::sqrt(p + q));
    d2eexz[21] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C62 * C149 - C148 * C73) * C71 +
             (C62 * C154 - C148 * C79) * C61) *
                C63 * C14564 +
            ((C148 * C818 - C62 * C930) * C71 +
             (C148 * C825 - C62 * C936) * C61) *
                C63 * C14474) *
               C14563 +
           (((C148 * C377 - C62 * C489) * C71 +
             (C148 * C384 - C62 * C495) * C61) *
                C63 * C14564 +
            ((C62 * C2038 - C148 * C1920) * C71 +
             (C62 * C2041 - C148 * C1924) * C61) *
                C63 * C14474) *
               C14432) *
              C374 +
          ((((C148 * C74 - C62 * C150) * C71 +
             (C148 * C81 - C62 * C155) * C61) *
                C63 * C14564 +
            ((C62 * C932 - C148 * C820) * C71 +
             (C62 * C938 - C148 * C829) * C61) *
                C63 * C14474) *
               C14563 +
           (((C62 * C491 - C148 * C379) * C71 +
             (C62 * C497 - C148 * C388) * C61) *
                C63 * C14564 +
            ((C148 * C1921 - C62 * C2039) * C71 +
             (C148 * C1926 - C62 * C2042) * C61) *
                C63 * C14474) *
               C14432) *
              C375 +
          ((((C62 * C151 - C148 * C75) * C71 +
             (C62 * C156 - C148 * C83) * C61) *
                C63 * C14564 +
            ((C148 * C822 - C62 * C934) * C71 +
             (C148 * C833 - C62 * C940) * C61) *
                C63 * C14474) *
               C14563 +
           (((C148 * C381 - C62 * C493) * C71 +
             (C148 * C392 - C62 * C499) * C61) *
                C63 * C14564 +
            ((C62 * C2040 - C148 * C1922) * C71 +
             (C62 * C2043 - C148 * C1928) * C61) *
                C63 * C14474) *
               C14432) *
              C14583)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C62 * C149 - C148 * C73) * C71 + (C62 * C154 - C148 * C79) * C61) *
               C63 * C14564 +
           ((C148 * C818 - C62 * C930) * C71 +
            (C148 * C825 - C62 * C936) * C61) *
               C63 * C14474) *
              C3376 +
          (((C148 * C377 - C62 * C489) * C71 +
            (C148 * C384 - C62 * C495) * C61) *
               C63 * C14564 +
           ((C62 * C2038 - C148 * C1920) * C71 +
            (C62 * C2041 - C148 * C1924) * C61) *
               C63 * C14474) *
              C3377 +
          (((C62 * C490 - C148 * C378) * C71 +
            (C62 * C496 - C148 * C386) * C61) *
               C63 * C14564 +
           ((C148 * C2991 - C62 * C3085) * C71 +
            (C148 * C2996 - C62 * C3088) * C61) *
               C63 * C14474) *
              C3378 +
          (((C148 * C2744 - C62 * C2800) * C71 +
            (C148 * C2747 - C62 * C2802) * C61) *
               C63 * C14564 +
           ((C62 * C4244 - C148 * C4170) * C71 +
            (C62 * C4245 - C148 * C4172) * C61) *
               C63 * C14474) *
              C14599) *
         C14341) /
            (p * q * std::sqrt(p + q));
    d2eeyx[21] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
                C62 * C14564 +
            ((C71 * C818 - C61 * C824) * C115 +
             (C71 * C980 - C61 * C986) * C63) *
                C62 * C14474) *
               C14563 +
           (((C71 * C377 - C61 * C383) * C115 +
             (C71 * C539 - C61 * C545) * C63) *
                C62 * C14564 +
            ((C61 * C1923 - C71 * C1920) * C115 +
             (C61 * C2097 - C71 * C2094) * C63) *
                C62 * C14474) *
               C14432) *
              C374 +
          ((((C71 * C74 - C61 * C80) * C115 + (C71 * C182 - C61 * C187) * C63) *
                C62 * C14564 +
            ((C61 * C828 - C71 * C820) * C115 +
             (C61 * C988 - C71 * C982) * C63) *
                C62 * C14474) *
               C14563 +
           (((C61 * C387 - C71 * C379) * C115 +
             (C61 * C547 - C71 * C541) * C63) *
                C62 * C14564 +
            ((C71 * C1921 - C61 * C1925) * C115 +
             (C71 * C2095 - C61 * C2098) * C63) *
                C62 * C14474) *
               C14432) *
              C375 +
          ((((C61 * C82 - C71 * C75) * C115 + (C61 * C188 - C71 * C183) * C63) *
                C62 * C14564 +
            ((C71 * C822 - C61 * C832) * C115 +
             (C71 * C984 - C61 * C990) * C63) *
                C62 * C14474) *
               C14563 +
           (((C71 * C381 - C61 * C391) * C115 +
             (C71 * C543 - C61 * C549) * C63) *
                C62 * C14564 +
            ((C61 * C1927 - C71 * C1922) * C115 +
             (C61 * C2099 - C71 * C2096) * C63) *
                C62 * C14474) *
               C14432) *
              C14583)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
               C62 * C14564 +
           ((C71 * C818 - C61 * C824) * C115 +
            (C71 * C980 - C61 * C986) * C63) *
               C62 * C14474) *
              C3376 +
          (((C71 * C377 - C61 * C383) * C115 +
            (C71 * C539 - C61 * C545) * C63) *
               C62 * C14564 +
           ((C61 * C1923 - C71 * C1920) * C115 +
            (C61 * C2097 - C71 * C2094) * C63) *
               C62 * C14474) *
              C3377 +
          (((C61 * C385 - C71 * C378) * C115 +
            (C61 * C546 - C71 * C540) * C63) *
               C62 * C14564 +
           ((C71 * C2991 - C61 * C2995) * C115 +
            (C71 * C3129 - C61 * C3132) * C63) *
               C62 * C14474) *
              C3378 +
          (((C71 * C2744 - C61 * C2746) * C115 +
            (C71 * C2826 - C61 * C2828) * C63) *
               C62 * C14564 +
           ((C61 * C4171 - C71 * C4170) * C115 +
            (C61 * C4281 - C71 * C4280) * C63) *
               C62 * C14474) *
              C14599) *
         C14341) /
            (p * q * std::sqrt(p + q));
    d2eeyy[21] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) * C61 * C62 *
                C14564 -
            (C115 * C880 - C213 * C818 - C115 * C980 + C63 * C1030) * C61 *
                C62 * C14474) *
               C14563 +
           ((C115 * C1982 - C213 * C1920 - C115 * C2094 + C63 * C2150) * C61 *
                C62 * C14474 -
            (C115 * C439 - C213 * C377 - C115 * C539 + C63 * C589) * C61 * C62 *
                C14564) *
               C14432) *
              C374 +
          (((C115 * C882 - C213 * C820 - C115 * C982 + C63 * C1032) * C61 *
                C62 * C14474 -
            (C115 * C117 - C213 * C74 - C115 * C182 + C63 * C215) * C61 * C62 *
                C14564) *
               C14563 +
           ((C115 * C441 - C213 * C379 - C115 * C541 + C63 * C591) * C61 * C62 *
                C14564 -
            (C115 * C1983 - C213 * C1921 - C115 * C2095 + C63 * C2151) * C61 *
                C62 * C14474) *
               C14432) *
              C375 +
          (((C115 * C118 - C213 * C75 - C115 * C183 + C63 * C216) * C61 * C62 *
                C14564 -
            (C115 * C884 - C213 * C822 - C115 * C984 + C63 * C1034) * C61 *
                C62 * C14474) *
               C14563 +
           ((C115 * C1984 - C213 * C1922 - C115 * C2096 + C63 * C2152) * C61 *
                C62 * C14474 -
            (C115 * C443 - C213 * C381 - C115 * C543 + C63 * C593) * C61 * C62 *
                C14564) *
               C14432) *
              C14583)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) * C61 * C62 *
               C14564 -
           (C115 * C880 - C213 * C818 - C115 * C980 + C63 * C1030) * C61 * C62 *
               C14474) *
              C3376 +
          ((C115 * C1982 - C213 * C1920 - C115 * C2094 + C63 * C2150) * C61 *
               C62 * C14474 -
           (C115 * C439 - C213 * C377 - C115 * C539 + C63 * C589) * C61 * C62 *
               C14564) *
              C3377 +
          ((C115 * C440 - C213 * C378 - C115 * C540 + C63 * C590) * C61 * C62 *
               C14564 -
           (C115 * C3041 - C213 * C2991 - C115 * C3129 + C63 * C3173) * C61 *
               C62 * C14474) *
              C3378 +
          ((C115 * C4208 - C213 * C4170 - C115 * C4280 + C63 * C4316) * C61 *
               C62 * C14474 -
           (C115 * C2774 - C213 * C2744 - C115 * C2826 + C63 * C2852) * C61 *
               C62 * C14564) *
              C14599) *
         C14341) /
            (p * q * std::sqrt(p + q));
    d2eeyz[21] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((((C62 * C149 - C148 * C73) * C115 +
                       (C62 * C241 - C148 * C181) * C63) *
                          C61 * C14564 +
                      ((C148 * C818 - C62 * C930) * C115 +
                       (C148 * C980 - C62 * C1074) * C63) *
                          C61 * C14474) *
                         C14563 +
                     (((C148 * C377 - C62 * C489) * C115 +
                       (C148 * C539 - C62 * C633) * C63) *
                          C61 * C14564 +
                      ((C62 * C2038 - C148 * C1920) * C115 +
                       (C62 * C2203 - C148 * C2094) * C63) *
                          C61 * C14474) *
                         C14432) *
                        C374 +
                    ((((C148 * C74 - C62 * C150) * C115 +
                       (C148 * C182 - C62 * C242) * C63) *
                          C61 * C14564 +
                      ((C62 * C932 - C148 * C820) * C115 +
                       (C62 * C1076 - C148 * C982) * C63) *
                          C61 * C14474) *
                         C14563 +
                     (((C62 * C491 - C148 * C379) * C115 +
                       (C62 * C635 - C148 * C541) * C63) *
                          C61 * C14564 +
                      ((C148 * C1921 - C62 * C2039) * C115 +
                       (C148 * C2095 - C62 * C2204) * C63) *
                          C61 * C14474) *
                         C14432) *
                        C375 +
                    ((((C62 * C151 - C148 * C75) * C115 +
                       (C62 * C243 - C148 * C183) * C63) *
                          C61 * C14564 +
                      ((C148 * C822 - C62 * C934) * C115 +
                       (C148 * C984 - C62 * C1078) * C63) *
                          C61 * C14474) *
                         C14563 +
                     (((C148 * C381 - C62 * C493) * C115 +
                       (C148 * C543 - C62 * C637) * C63) *
                          C61 * C14564 +
                      ((C62 * C2040 - C148 * C1922) * C115 +
                       (C62 * C2205 - C148 * C2096) * C63) *
                          C61 * C14474) *
                         C14432) *
                        C14583)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C62 * C149 - C148 * C73) * C115 +
                      (C62 * C241 - C148 * C181) * C63) *
                         C61 * C14564 +
                     ((C148 * C818 - C62 * C930) * C115 +
                      (C148 * C980 - C62 * C1074) * C63) *
                         C61 * C14474) *
                        C3376 +
                    (((C148 * C377 - C62 * C489) * C115 +
                      (C148 * C539 - C62 * C633) * C63) *
                         C61 * C14564 +
                     ((C62 * C2038 - C148 * C1920) * C115 +
                      (C62 * C2203 - C148 * C2094) * C63) *
                         C61 * C14474) *
                        C3377 +
                    (((C62 * C490 - C148 * C378) * C115 +
                      (C62 * C634 - C148 * C540) * C63) *
                         C61 * C14564 +
                     ((C148 * C2991 - C62 * C3085) * C115 +
                      (C148 * C3129 - C62 * C3214) * C63) *
                         C61 * C14474) *
                        C3378 +
                    (((C148 * C2744 - C62 * C2800) * C115 +
                      (C148 * C2826 - C62 * C2876) * C63) *
                         C61 * C14564 +
                     ((C62 * C4244 - C148 * C4170) * C115 +
                      (C62 * C4351 - C148 * C4280) * C63) *
                         C61 * C14474) *
                        C14599) *
                   C14341) /
                      (p * q * std::sqrt(p + q));
    d2eezx[21] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
                C63 * C14564 +
            ((C71 * C818 - C61 * C824) * C148 +
             (C71 * C1118 - C61 * C1124) * C62) *
                C63 * C14474) *
               C14563 +
           (((C71 * C377 - C61 * C383) * C148 +
             (C71 * C677 - C61 * C683) * C62) *
                C63 * C14564 +
            ((C61 * C1923 - C71 * C1920) * C148 +
             (C61 * C2259 - C71 * C2256) * C62) *
                C63 * C14474) *
               C14432) *
              C374 +
          ((((C71 * C74 - C61 * C80) * C148 + (C71 * C269 - C61 * C274) * C62) *
                C63 * C14564 +
            ((C61 * C828 - C71 * C820) * C148 +
             (C61 * C1126 - C71 * C1120) * C62) *
                C63 * C14474) *
               C14563 +
           (((C61 * C387 - C71 * C379) * C148 +
             (C61 * C685 - C71 * C679) * C62) *
                C63 * C14564 +
            ((C71 * C1921 - C61 * C1925) * C148 +
             (C71 * C2257 - C61 * C2260) * C62) *
                C63 * C14474) *
               C14432) *
              C375 +
          ((((C61 * C82 - C71 * C75) * C148 + (C61 * C275 - C71 * C270) * C62) *
                C63 * C14564 +
            ((C71 * C822 - C61 * C832) * C148 +
             (C71 * C1122 - C61 * C1128) * C62) *
                C63 * C14474) *
               C14563 +
           (((C71 * C381 - C61 * C391) * C148 +
             (C71 * C681 - C61 * C687) * C62) *
                C63 * C14564 +
            ((C61 * C1927 - C71 * C1922) * C148 +
             (C61 * C2261 - C71 * C2258) * C62) *
                C63 * C14474) *
               C14432) *
              C14583)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
               C63 * C14564 +
           ((C71 * C818 - C61 * C824) * C148 +
            (C71 * C1118 - C61 * C1124) * C62) *
               C63 * C14474) *
              C3376 +
          (((C71 * C377 - C61 * C383) * C148 +
            (C71 * C677 - C61 * C683) * C62) *
               C63 * C14564 +
           ((C61 * C1923 - C71 * C1920) * C148 +
            (C61 * C2259 - C71 * C2256) * C62) *
               C63 * C14474) *
              C3377 +
          (((C61 * C385 - C71 * C378) * C148 +
            (C61 * C684 - C71 * C678) * C62) *
               C63 * C14564 +
           ((C71 * C2991 - C61 * C2995) * C148 +
            (C71 * C3255 - C61 * C3258) * C62) *
               C63 * C14474) *
              C3378 +
          (((C71 * C2744 - C61 * C2746) * C148 +
            (C71 * C2900 - C61 * C2902) * C62) *
               C63 * C14564 +
           ((C61 * C4171 - C71 * C4170) * C148 +
            (C61 * C4387 - C71 * C4386) * C62) *
               C63 * C14474) *
              C14599) *
         C14341) /
            (p * q * std::sqrt(p + q));
    d2eezy[21] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((((C63 * C116 - C115 * C73) * C148 +
                       (C63 * C300 - C115 * C268) * C62) *
                          C61 * C14564 +
                      ((C115 * C818 - C63 * C880) * C148 +
                       (C115 * C1118 - C63 * C1168) * C62) *
                          C61 * C14474) *
                         C14563 +
                     (((C115 * C377 - C63 * C439) * C148 +
                       (C115 * C677 - C63 * C727) * C62) *
                          C61 * C14564 +
                      ((C63 * C1982 - C115 * C1920) * C148 +
                       (C63 * C2312 - C115 * C2256) * C62) *
                          C61 * C14474) *
                         C14432) *
                        C374 +
                    ((((C115 * C74 - C63 * C117) * C148 +
                       (C115 * C269 - C63 * C301) * C62) *
                          C61 * C14564 +
                      ((C63 * C882 - C115 * C820) * C148 +
                       (C63 * C1170 - C115 * C1120) * C62) *
                          C61 * C14474) *
                         C14563 +
                     (((C63 * C441 - C115 * C379) * C148 +
                       (C63 * C729 - C115 * C679) * C62) *
                          C61 * C14564 +
                      ((C115 * C1921 - C63 * C1983) * C148 +
                       (C115 * C2257 - C63 * C2313) * C62) *
                          C61 * C14474) *
                         C14432) *
                        C375 +
                    ((((C63 * C118 - C115 * C75) * C148 +
                       (C63 * C302 - C115 * C270) * C62) *
                          C61 * C14564 +
                      ((C115 * C822 - C63 * C884) * C148 +
                       (C115 * C1122 - C63 * C1172) * C62) *
                          C61 * C14474) *
                         C14563 +
                     (((C115 * C381 - C63 * C443) * C148 +
                       (C115 * C681 - C63 * C731) * C62) *
                          C61 * C14564 +
                      ((C63 * C1984 - C115 * C1922) * C148 +
                       (C63 * C2314 - C115 * C2258) * C62) *
                          C61 * C14474) *
                         C14432) *
                        C14583)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C63 * C116 - C115 * C73) * C148 +
                      (C63 * C300 - C115 * C268) * C62) *
                         C61 * C14564 +
                     ((C115 * C818 - C63 * C880) * C148 +
                      (C115 * C1118 - C63 * C1168) * C62) *
                         C61 * C14474) *
                        C3376 +
                    (((C115 * C377 - C63 * C439) * C148 +
                      (C115 * C677 - C63 * C727) * C62) *
                         C61 * C14564 +
                     ((C63 * C1982 - C115 * C1920) * C148 +
                      (C63 * C2312 - C115 * C2256) * C62) *
                         C61 * C14474) *
                        C3377 +
                    (((C63 * C440 - C115 * C378) * C148 +
                      (C63 * C728 - C115 * C678) * C62) *
                         C61 * C14564 +
                     ((C115 * C2991 - C63 * C3041) * C148 +
                      (C115 * C3255 - C63 * C3299) * C62) *
                         C61 * C14474) *
                        C3378 +
                    (((C115 * C2744 - C63 * C2774) * C148 +
                      (C115 * C2900 - C63 * C2926) * C62) *
                         C61 * C14564 +
                     ((C63 * C4208 - C115 * C4170) * C148 +
                      (C63 * C4422 - C115 * C4386) * C62) *
                         C61 * C14474) *
                        C14599) *
                   C14341) /
                      (p * q * std::sqrt(p + q));
    d2eezz[21] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) * C63 * C61 *
                C14564 -
            (C148 * C930 - C327 * C818 - C148 * C1118 + C62 * C1212) * C63 *
                C61 * C14474) *
               C14563 +
           ((C148 * C2038 - C327 * C1920 - C148 * C2256 + C62 * C2365) * C63 *
                C61 * C14474 -
            (C148 * C489 - C327 * C377 - C148 * C677 + C62 * C771) * C63 * C61 *
                C14564) *
               C14432) *
              C374 +
          (((C148 * C932 - C327 * C820 - C148 * C1120 + C62 * C1214) * C63 *
                C61 * C14474 -
            (C148 * C150 - C327 * C74 - C148 * C269 + C62 * C329) * C63 * C61 *
                C14564) *
               C14563 +
           ((C148 * C491 - C327 * C379 - C148 * C679 + C62 * C773) * C63 * C61 *
                C14564 -
            (C148 * C2039 - C327 * C1921 - C148 * C2257 + C62 * C2366) * C63 *
                C61 * C14474) *
               C14432) *
              C375 +
          (((C148 * C151 - C327 * C75 - C148 * C270 + C62 * C330) * C63 * C61 *
                C14564 -
            (C148 * C934 - C327 * C822 - C148 * C1122 + C62 * C1216) * C63 *
                C61 * C14474) *
               C14563 +
           ((C148 * C2040 - C327 * C1922 - C148 * C2258 + C62 * C2367) * C63 *
                C61 * C14474 -
            (C148 * C493 - C327 * C381 - C148 * C681 + C62 * C775) * C63 * C61 *
                C14564) *
               C14432) *
              C14583)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) * C63 * C61 *
               C14564 -
           (C148 * C930 - C327 * C818 - C148 * C1118 + C62 * C1212) * C63 *
               C61 * C14474) *
              C3376 +
          ((C148 * C2038 - C327 * C1920 - C148 * C2256 + C62 * C2365) * C63 *
               C61 * C14474 -
           (C148 * C489 - C327 * C377 - C148 * C677 + C62 * C771) * C63 * C61 *
               C14564) *
              C3377 +
          ((C148 * C490 - C327 * C378 - C148 * C678 + C62 * C772) * C63 * C61 *
               C14564 -
           (C148 * C3085 - C327 * C2991 - C148 * C3255 + C62 * C3340) * C63 *
               C61 * C14474) *
              C3378 +
          ((C148 * C4244 - C327 * C4170 - C148 * C4386 + C62 * C4457) * C63 *
               C61 * C14474 -
           (C148 * C2800 - C327 * C2744 - C148 * C2900 + C62 * C2950) * C63 *
               C61 * C14564) *
              C14599) *
         C14341) /
            (p * q * std::sqrt(p + q));
    d2eexx[22] += (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 *
                         C63 * C14387 * C14624 -
                     (C71 * C383 - C72 * C377 - C71 * C384 + C61 * C395) * C62 *
                         C63 * C14387 * C14612 +
                     (C71 * C385 - C72 * C378 - C71 * C386 + C61 * C396) * C62 *
                         C63 * C14387 * C14589) *
                        C374 +
                    ((C71 * C387 - C72 * C379 - C71 * C388 + C61 * C397) * C62 *
                         C63 * C14387 * C14612 -
                     (C71 * C80 - C72 * C74 - C71 * C81 + C61 * C89) * C62 *
                         C63 * C14387 * C14624 -
                     (C71 * C389 - C72 * C380 - C71 * C390 + C61 * C398) * C62 *
                         C63 * C14387 * C14589) *
                        C375 +
                    ((C71 * C82 - C72 * C75 - C71 * C83 + C61 * C90) * C62 *
                         C63 * C14387 * C14624 -
                     (C71 * C391 - C72 * C381 - C71 * C392 + C61 * C399) * C62 *
                         C63 * C14387 * C14612 +
                     (C71 * C393 - C72 * C382 - C71 * C394 + C61 * C400) * C62 *
                         C63 * C14387 * C14589) *
                        C14583)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 *
                        C63 * C14387 * C14369 * C66 -
                    (C71 * C80 - C72 * C74 - C71 * C81 + C61 * C89) * C62 *
                        C63 * C14387 * C14369 * C67 +
                    (C71 * C82 - C72 * C75 - C71 * C83 + C61 * C90) * C62 *
                        C63 * C14387 * C14369 * C68 -
                    (C71 * C84 - C72 * C76 - C71 * C85 + C61 * C91) * C62 *
                        C63 * C14387 * C14369 * C69 +
                    (C71 * C86 - C72 * C77 - C71 * C87 + C61 * C92) * C62 *
                        C63 * C14387 * C14369 * C70)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 *
                         C63 * C14625 -
                     (C71 * C824 - C72 * C818 - C71 * C825 + C61 * C836) * C62 *
                         C63 * C14614 +
                     (C71 * C826 - C72 * C819 - C71 * C827 + C61 * C837) * C62 *
                         C63 * C14592) *
                        C14369 * C374 +
                    ((C71 * C828 - C72 * C820 - C71 * C829 + C61 * C838) * C62 *
                         C63 * C14614 -
                     (C71 * C80 - C72 * C74 - C71 * C81 + C61 * C89) * C62 *
                         C63 * C14625 -
                     (C71 * C830 - C72 * C821 - C71 * C831 + C61 * C839) * C62 *
                         C63 * C14592) *
                        C14369 * C375 +
                    ((C71 * C82 - C72 * C75 - C71 * C83 + C61 * C90) * C62 *
                         C63 * C14625 -
                     (C71 * C832 - C72 * C822 - C71 * C833 + C61 * C840) * C62 *
                         C63 * C14614 +
                     (C71 * C834 - C72 * C823 - C71 * C835 + C61 * C841) * C62 *
                         C63 * C14592) *
                        C14369 * C14583)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 *
                         C63 * C14387 * C2406 -
                     (C71 * C383 - C72 * C377 - C71 * C384 + C61 * C395) * C62 *
                         C63 * C14387 * C2407 +
                     (C71 * C385 - C72 * C378 - C71 * C386 + C61 * C396) * C62 *
                         C63 * C14387 * C14589) *
                        C14621 +
                    ((C71 * C387 - C72 * C379 - C71 * C388 + C61 * C397) * C62 *
                         C63 * C14387 * C2407 -
                     (C71 * C80 - C72 * C74 - C71 * C81 + C61 * C89) * C62 *
                         C63 * C14387 * C2406 -
                     (C71 * C389 - C72 * C380 - C71 * C390 + C61 * C398) * C62 *
                         C63 * C14387 * C14589) *
                        C14608 +
                    ((C71 * C82 - C72 * C75 - C71 * C83 + C61 * C90) * C62 *
                         C63 * C14387 * C2406 -
                     (C71 * C391 - C72 * C381 - C71 * C392 + C61 * C399) * C62 *
                         C63 * C14387 * C2407 +
                     (C71 * C393 - C72 * C382 - C71 * C394 + C61 * C400) * C62 *
                         C63 * C14387 * C14589) *
                        C14583)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 *
                        C63 * C14387 * C2738 -
                    (C71 * C383 - C72 * C377 - C71 * C384 + C61 * C395) * C62 *
                        C63 * C14387 * C2739 +
                    (C71 * C385 - C72 * C378 - C71 * C386 + C61 * C396) * C62 *
                        C63 * C14387 * C2740 -
                    (C71 * C2746 - C72 * C2744 - C71 * C2747 + C61 * C2750) *
                        C62 * C63 * C14387 * C2741 +
                    (C71 * C2748 - C72 * C2745 - C71 * C2749 + C61 * C2751) *
                        C62 * C63 * C14387 * C2742) *
                   C14341) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 *
                         C63 * C14625 -
                     (C71 * C824 - C72 * C818 - C71 * C825 + C61 * C836) * C62 *
                         C63 * C14614 +
                     (C71 * C826 - C72 * C819 - C71 * C827 + C61 * C837) * C62 *
                         C63 * C14592) *
                        C2406 +
                    ((C71 * C1923 - C72 * C1920 - C71 * C1924 + C61 * C1929) *
                         C62 * C63 * C14614 -
                     (C71 * C383 - C72 * C377 - C71 * C384 + C61 * C395) * C62 *
                         C63 * C14625 -
                     (C71 * C2993 - C72 * C2990 - C71 * C2994 + C61 * C2999) *
                         C62 * C63 * C14592) *
                        C2407 +
                    ((C71 * C385 - C72 * C378 - C71 * C386 + C61 * C396) * C62 *
                         C63 * C14625 -
                     (C71 * C2995 - C72 * C2991 - C71 * C2996 + C61 * C3000) *
                         C62 * C63 * C14614 +
                     (C71 * C2997 - C72 * C2992 - C71 * C2998 + C61 * C3001) *
                         C62 * C63 * C14592) *
                        C14589) *
                   C14341) /
                      (p * q * std::sqrt(p + q));
    d2eexy[22] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C63 * C116 - C115 * C73) * C71 + (C63 * C121 - C115 * C79) * C61) *
               C62 * C14387 * C14624 +
           ((C115 * C377 - C63 * C439) * C71 +
            (C115 * C384 - C63 * C445) * C61) *
               C62 * C14387 * C14612 +
           ((C63 * C440 - C115 * C378) * C71 +
            (C63 * C446 - C115 * C386) * C61) *
               C62 * C14387 * C14589) *
              C374 +
          (((C115 * C74 - C63 * C117) * C71 + (C115 * C81 - C63 * C122) * C61) *
               C62 * C14387 * C14624 +
           ((C63 * C441 - C115 * C379) * C71 +
            (C63 * C447 - C115 * C388) * C61) *
               C62 * C14387 * C14612 +
           ((C115 * C380 - C63 * C442) * C71 +
            (C115 * C390 - C63 * C448) * C61) *
               C62 * C14387 * C14589) *
              C375 +
          (((C63 * C118 - C115 * C75) * C71 + (C63 * C123 - C115 * C83) * C61) *
               C62 * C14387 * C14624 +
           ((C115 * C381 - C63 * C443) * C71 +
            (C115 * C392 - C63 * C449) * C61) *
               C62 * C14387 * C14612 +
           ((C63 * C444 - C115 * C382) * C71 +
            (C63 * C450 - C115 * C394) * C61) *
               C62 * C14387 * C14589) *
              C14583)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C63 * C116 - C115 * C73) * C71 + (C63 * C121 - C115 * C79) * C61) *
              C62 * C14387 * C14369 * C66 +
          ((C115 * C74 - C63 * C117) * C71 + (C115 * C81 - C63 * C122) * C61) *
              C62 * C14387 * C14369 * C67 +
          ((C63 * C118 - C115 * C75) * C71 + (C63 * C123 - C115 * C83) * C61) *
              C62 * C14387 * C14369 * C68 +
          ((C115 * C76 - C63 * C119) * C71 + (C115 * C85 - C63 * C124) * C61) *
              C62 * C14387 * C14369 * C69 +
          ((C63 * C120 - C115 * C77) * C71 + (C63 * C125 - C115 * C87) * C61) *
              C62 * C14387 * C14369 * C70)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C63 * C116 - C115 * C73) * C71 + (C63 * C121 - C115 * C79) * C61) *
               C62 * C14625 +
           ((C115 * C818 - C63 * C880) * C71 +
            (C115 * C825 - C63 * C886) * C61) *
               C62 * C14614 +
           ((C63 * C881 - C115 * C819) * C71 +
            (C63 * C887 - C115 * C827) * C61) *
               C62 * C14592) *
              C14369 * C374 +
          (((C115 * C74 - C63 * C117) * C71 + (C115 * C81 - C63 * C122) * C61) *
               C62 * C14625 +
           ((C63 * C882 - C115 * C820) * C71 +
            (C63 * C888 - C115 * C829) * C61) *
               C62 * C14614 +
           ((C115 * C821 - C63 * C883) * C71 +
            (C115 * C831 - C63 * C889) * C61) *
               C62 * C14592) *
              C14369 * C375 +
          (((C63 * C118 - C115 * C75) * C71 + (C63 * C123 - C115 * C83) * C61) *
               C62 * C14625 +
           ((C115 * C822 - C63 * C884) * C71 +
            (C115 * C833 - C63 * C890) * C61) *
               C62 * C14614 +
           ((C63 * C885 - C115 * C823) * C71 +
            (C63 * C891 - C115 * C835) * C61) *
               C62 * C14592) *
              C14369 * C14583)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C63 * C116 - C115 * C73) * C71 + (C63 * C121 - C115 * C79) * C61) *
               C62 * C14387 * C2406 +
           ((C115 * C377 - C63 * C439) * C71 +
            (C115 * C384 - C63 * C445) * C61) *
               C62 * C14387 * C2407 +
           ((C63 * C440 - C115 * C378) * C71 +
            (C63 * C446 - C115 * C386) * C61) *
               C62 * C14387 * C14589) *
              C14621 +
          (((C115 * C74 - C63 * C117) * C71 + (C115 * C81 - C63 * C122) * C61) *
               C62 * C14387 * C2406 +
           ((C63 * C441 - C115 * C379) * C71 +
            (C63 * C447 - C115 * C388) * C61) *
               C62 * C14387 * C2407 +
           ((C115 * C380 - C63 * C442) * C71 +
            (C115 * C390 - C63 * C448) * C61) *
               C62 * C14387 * C14589) *
              C14608 +
          (((C63 * C118 - C115 * C75) * C71 + (C63 * C123 - C115 * C83) * C61) *
               C62 * C14387 * C2406 +
           ((C115 * C381 - C63 * C443) * C71 +
            (C115 * C392 - C63 * C449) * C61) *
               C62 * C14387 * C2407 +
           ((C63 * C444 - C115 * C382) * C71 +
            (C63 * C450 - C115 * C394) * C61) *
               C62 * C14387 * C14589) *
              C14583)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C63 * C116 - C115 * C73) * C71 + (C63 * C121 - C115 * C79) * C61) *
              C62 * C14387 * C2738 +
          ((C115 * C377 - C63 * C439) * C71 +
           (C115 * C384 - C63 * C445) * C61) *
              C62 * C14387 * C2739 +
          ((C63 * C440 - C115 * C378) * C71 +
           (C63 * C446 - C115 * C386) * C61) *
              C62 * C14387 * C2740 +
          ((C115 * C2744 - C63 * C2774) * C71 +
           (C115 * C2747 - C63 * C2776) * C61) *
              C62 * C14387 * C2741 +
          ((C63 * C2775 - C115 * C2745) * C71 +
           (C63 * C2777 - C115 * C2749) * C61) *
              C62 * C14387 * C2742) *
         C14341) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C63 * C116 - C115 * C73) * C71 + (C63 * C121 - C115 * C79) * C61) *
               C62 * C14625 +
           ((C115 * C818 - C63 * C880) * C71 +
            (C115 * C825 - C63 * C886) * C61) *
               C62 * C14614 +
           ((C63 * C881 - C115 * C819) * C71 +
            (C63 * C887 - C115 * C827) * C61) *
               C62 * C14592) *
              C2406 +
          (((C115 * C377 - C63 * C439) * C71 +
            (C115 * C384 - C63 * C445) * C61) *
               C62 * C14625 +
           ((C63 * C1982 - C115 * C1920) * C71 +
            (C63 * C1985 - C115 * C1924) * C61) *
               C62 * C14614 +
           ((C115 * C2990 - C63 * C3040) * C71 +
            (C115 * C2994 - C63 * C3043) * C61) *
               C62 * C14592) *
              C2407 +
          (((C63 * C440 - C115 * C378) * C71 +
            (C63 * C446 - C115 * C386) * C61) *
               C62 * C14625 +
           ((C115 * C2991 - C63 * C3041) * C71 +
            (C115 * C2996 - C63 * C3044) * C61) *
               C62 * C14614 +
           ((C63 * C3042 - C115 * C2992) * C71 +
            (C63 * C3045 - C115 * C2998) * C61) *
               C62 * C14592) *
              C14589) *
         C14341) /
            (p * q * std::sqrt(p + q));
    d2eexz[22] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C62 * C149 - C148 * C73) * C71 + (C62 * C154 - C148 * C79) * C61) *
               C63 * C14387 * C14624 +
           ((C148 * C377 - C62 * C489) * C71 +
            (C148 * C384 - C62 * C495) * C61) *
               C63 * C14387 * C14612 +
           ((C62 * C490 - C148 * C378) * C71 +
            (C62 * C496 - C148 * C386) * C61) *
               C63 * C14387 * C14589) *
              C374 +
          (((C148 * C74 - C62 * C150) * C71 + (C148 * C81 - C62 * C155) * C61) *
               C63 * C14387 * C14624 +
           ((C62 * C491 - C148 * C379) * C71 +
            (C62 * C497 - C148 * C388) * C61) *
               C63 * C14387 * C14612 +
           ((C148 * C380 - C62 * C492) * C71 +
            (C148 * C390 - C62 * C498) * C61) *
               C63 * C14387 * C14589) *
              C375 +
          (((C62 * C151 - C148 * C75) * C71 + (C62 * C156 - C148 * C83) * C61) *
               C63 * C14387 * C14624 +
           ((C148 * C381 - C62 * C493) * C71 +
            (C148 * C392 - C62 * C499) * C61) *
               C63 * C14387 * C14612 +
           ((C62 * C494 - C148 * C382) * C71 +
            (C62 * C500 - C148 * C394) * C61) *
               C63 * C14387 * C14589) *
              C14583)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C62 * C149 - C148 * C73) * C71 + (C62 * C154 - C148 * C79) * C61) *
              C63 * C14387 * C14369 * C66 +
          ((C148 * C74 - C62 * C150) * C71 + (C148 * C81 - C62 * C155) * C61) *
              C63 * C14387 * C14369 * C67 +
          ((C62 * C151 - C148 * C75) * C71 + (C62 * C156 - C148 * C83) * C61) *
              C63 * C14387 * C14369 * C68 +
          ((C148 * C76 - C62 * C152) * C71 + (C148 * C85 - C62 * C157) * C61) *
              C63 * C14387 * C14369 * C69 +
          ((C62 * C153 - C148 * C77) * C71 + (C62 * C158 - C148 * C87) * C61) *
              C63 * C14387 * C14369 * C70)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C62 * C149 - C148 * C73) * C71 + (C62 * C154 - C148 * C79) * C61) *
               C63 * C14625 +
           ((C148 * C818 - C62 * C930) * C71 +
            (C148 * C825 - C62 * C936) * C61) *
               C63 * C14614 +
           ((C62 * C931 - C148 * C819) * C71 +
            (C62 * C937 - C148 * C827) * C61) *
               C63 * C14592) *
              C14369 * C374 +
          (((C148 * C74 - C62 * C150) * C71 + (C148 * C81 - C62 * C155) * C61) *
               C63 * C14625 +
           ((C62 * C932 - C148 * C820) * C71 +
            (C62 * C938 - C148 * C829) * C61) *
               C63 * C14614 +
           ((C148 * C821 - C62 * C933) * C71 +
            (C148 * C831 - C62 * C939) * C61) *
               C63 * C14592) *
              C14369 * C375 +
          (((C62 * C151 - C148 * C75) * C71 + (C62 * C156 - C148 * C83) * C61) *
               C63 * C14625 +
           ((C148 * C822 - C62 * C934) * C71 +
            (C148 * C833 - C62 * C940) * C61) *
               C63 * C14614 +
           ((C62 * C935 - C148 * C823) * C71 +
            (C62 * C941 - C148 * C835) * C61) *
               C63 * C14592) *
              C14369 * C14583)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C62 * C149 - C148 * C73) * C71 + (C62 * C154 - C148 * C79) * C61) *
               C63 * C14387 * C2406 +
           ((C148 * C377 - C62 * C489) * C71 +
            (C148 * C384 - C62 * C495) * C61) *
               C63 * C14387 * C2407 +
           ((C62 * C490 - C148 * C378) * C71 +
            (C62 * C496 - C148 * C386) * C61) *
               C63 * C14387 * C14589) *
              C14621 +
          (((C148 * C74 - C62 * C150) * C71 + (C148 * C81 - C62 * C155) * C61) *
               C63 * C14387 * C2406 +
           ((C62 * C491 - C148 * C379) * C71 +
            (C62 * C497 - C148 * C388) * C61) *
               C63 * C14387 * C2407 +
           ((C148 * C380 - C62 * C492) * C71 +
            (C148 * C390 - C62 * C498) * C61) *
               C63 * C14387 * C14589) *
              C14608 +
          (((C62 * C151 - C148 * C75) * C71 + (C62 * C156 - C148 * C83) * C61) *
               C63 * C14387 * C2406 +
           ((C148 * C381 - C62 * C493) * C71 +
            (C148 * C392 - C62 * C499) * C61) *
               C63 * C14387 * C2407 +
           ((C62 * C494 - C148 * C382) * C71 +
            (C62 * C500 - C148 * C394) * C61) *
               C63 * C14387 * C14589) *
              C14583)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C62 * C149 - C148 * C73) * C71 + (C62 * C154 - C148 * C79) * C61) *
              C63 * C14387 * C2738 +
          ((C148 * C377 - C62 * C489) * C71 +
           (C148 * C384 - C62 * C495) * C61) *
              C63 * C14387 * C2739 +
          ((C62 * C490 - C148 * C378) * C71 +
           (C62 * C496 - C148 * C386) * C61) *
              C63 * C14387 * C2740 +
          ((C148 * C2744 - C62 * C2800) * C71 +
           (C148 * C2747 - C62 * C2802) * C61) *
              C63 * C14387 * C2741 +
          ((C62 * C2801 - C148 * C2745) * C71 +
           (C62 * C2803 - C148 * C2749) * C61) *
              C63 * C14387 * C2742) *
         C14341) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C62 * C149 - C148 * C73) * C71 + (C62 * C154 - C148 * C79) * C61) *
               C63 * C14625 +
           ((C148 * C818 - C62 * C930) * C71 +
            (C148 * C825 - C62 * C936) * C61) *
               C63 * C14614 +
           ((C62 * C931 - C148 * C819) * C71 +
            (C62 * C937 - C148 * C827) * C61) *
               C63 * C14592) *
              C2406 +
          (((C148 * C377 - C62 * C489) * C71 +
            (C148 * C384 - C62 * C495) * C61) *
               C63 * C14625 +
           ((C62 * C2038 - C148 * C1920) * C71 +
            (C62 * C2041 - C148 * C1924) * C61) *
               C63 * C14614 +
           ((C148 * C2990 - C62 * C3084) * C71 +
            (C148 * C2994 - C62 * C3087) * C61) *
               C63 * C14592) *
              C2407 +
          (((C62 * C490 - C148 * C378) * C71 +
            (C62 * C496 - C148 * C386) * C61) *
               C63 * C14625 +
           ((C148 * C2991 - C62 * C3085) * C71 +
            (C148 * C2996 - C62 * C3088) * C61) *
               C63 * C14614 +
           ((C62 * C3086 - C148 * C2992) * C71 +
            (C62 * C3089 - C148 * C2998) * C61) *
               C63 * C14592) *
              C14589) *
         C14341) /
            (p * q * std::sqrt(p + q));
    d2eeyx[22] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
               C62 * C14387 * C14624 +
           ((C71 * C377 - C61 * C383) * C115 +
            (C71 * C539 - C61 * C545) * C63) *
               C62 * C14387 * C14612 +
           ((C61 * C385 - C71 * C378) * C115 +
            (C61 * C546 - C71 * C540) * C63) *
               C62 * C14387 * C14589) *
              C374 +
          (((C71 * C74 - C61 * C80) * C115 + (C71 * C182 - C61 * C187) * C63) *
               C62 * C14387 * C14624 +
           ((C61 * C387 - C71 * C379) * C115 +
            (C61 * C547 - C71 * C541) * C63) *
               C62 * C14387 * C14612 +
           ((C71 * C380 - C61 * C389) * C115 +
            (C71 * C542 - C61 * C548) * C63) *
               C62 * C14387 * C14589) *
              C375 +
          (((C61 * C82 - C71 * C75) * C115 + (C61 * C188 - C71 * C183) * C63) *
               C62 * C14387 * C14624 +
           ((C71 * C381 - C61 * C391) * C115 +
            (C71 * C543 - C61 * C549) * C63) *
               C62 * C14387 * C14612 +
           ((C61 * C393 - C71 * C382) * C115 +
            (C61 * C550 - C71 * C544) * C63) *
               C62 * C14387 * C14589) *
              C14583)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
              C62 * C14387 * C14369 * C66 +
          ((C71 * C74 - C61 * C80) * C115 + (C71 * C182 - C61 * C187) * C63) *
              C62 * C14387 * C14369 * C67 +
          ((C61 * C82 - C71 * C75) * C115 + (C61 * C188 - C71 * C183) * C63) *
              C62 * C14387 * C14369 * C68 +
          ((C71 * C76 - C61 * C84) * C115 + (C71 * C184 - C61 * C189) * C63) *
              C62 * C14387 * C14369 * C69 +
          ((C61 * C86 - C71 * C77) * C115 + (C61 * C190 - C71 * C185) * C63) *
              C62 * C14387 * C14369 * C70)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
               C62 * C14625 +
           ((C71 * C818 - C61 * C824) * C115 +
            (C71 * C980 - C61 * C986) * C63) *
               C62 * C14614 +
           ((C61 * C826 - C71 * C819) * C115 +
            (C61 * C987 - C71 * C981) * C63) *
               C62 * C14592) *
              C14369 * C374 +
          (((C71 * C74 - C61 * C80) * C115 + (C71 * C182 - C61 * C187) * C63) *
               C62 * C14625 +
           ((C61 * C828 - C71 * C820) * C115 +
            (C61 * C988 - C71 * C982) * C63) *
               C62 * C14614 +
           ((C71 * C821 - C61 * C830) * C115 +
            (C71 * C983 - C61 * C989) * C63) *
               C62 * C14592) *
              C14369 * C375 +
          (((C61 * C82 - C71 * C75) * C115 + (C61 * C188 - C71 * C183) * C63) *
               C62 * C14625 +
           ((C71 * C822 - C61 * C832) * C115 +
            (C71 * C984 - C61 * C990) * C63) *
               C62 * C14614 +
           ((C61 * C834 - C71 * C823) * C115 +
            (C61 * C991 - C71 * C985) * C63) *
               C62 * C14592) *
              C14369 * C14583)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
               C62 * C14387 * C2406 +
           ((C71 * C377 - C61 * C383) * C115 +
            (C71 * C539 - C61 * C545) * C63) *
               C62 * C14387 * C2407 +
           ((C61 * C385 - C71 * C378) * C115 +
            (C61 * C546 - C71 * C540) * C63) *
               C62 * C14387 * C14589) *
              C14621 +
          (((C71 * C74 - C61 * C80) * C115 + (C71 * C182 - C61 * C187) * C63) *
               C62 * C14387 * C2406 +
           ((C61 * C387 - C71 * C379) * C115 +
            (C61 * C547 - C71 * C541) * C63) *
               C62 * C14387 * C2407 +
           ((C71 * C380 - C61 * C389) * C115 +
            (C71 * C542 - C61 * C548) * C63) *
               C62 * C14387 * C14589) *
              C14608 +
          (((C61 * C82 - C71 * C75) * C115 + (C61 * C188 - C71 * C183) * C63) *
               C62 * C14387 * C2406 +
           ((C71 * C381 - C61 * C391) * C115 +
            (C71 * C543 - C61 * C549) * C63) *
               C62 * C14387 * C2407 +
           ((C61 * C393 - C71 * C382) * C115 +
            (C61 * C550 - C71 * C544) * C63) *
               C62 * C14387 * C14589) *
              C14583)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
              C62 * C14387 * C2738 +
          ((C71 * C377 - C61 * C383) * C115 + (C71 * C539 - C61 * C545) * C63) *
              C62 * C14387 * C2739 +
          ((C61 * C385 - C71 * C378) * C115 + (C61 * C546 - C71 * C540) * C63) *
              C62 * C14387 * C2740 +
          ((C71 * C2744 - C61 * C2746) * C115 +
           (C71 * C2826 - C61 * C2828) * C63) *
              C62 * C14387 * C2741 +
          ((C61 * C2748 - C71 * C2745) * C115 +
           (C61 * C2829 - C71 * C2827) * C63) *
              C62 * C14387 * C2742) *
         C14341) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
               C62 * C14625 +
           ((C71 * C818 - C61 * C824) * C115 +
            (C71 * C980 - C61 * C986) * C63) *
               C62 * C14614 +
           ((C61 * C826 - C71 * C819) * C115 +
            (C61 * C987 - C71 * C981) * C63) *
               C62 * C14592) *
              C2406 +
          (((C71 * C377 - C61 * C383) * C115 +
            (C71 * C539 - C61 * C545) * C63) *
               C62 * C14625 +
           ((C61 * C1923 - C71 * C1920) * C115 +
            (C61 * C2097 - C71 * C2094) * C63) *
               C62 * C14614 +
           ((C71 * C2990 - C61 * C2993) * C115 +
            (C71 * C3128 - C61 * C3131) * C63) *
               C62 * C14592) *
              C2407 +
          (((C61 * C385 - C71 * C378) * C115 +
            (C61 * C546 - C71 * C540) * C63) *
               C62 * C14625 +
           ((C71 * C2991 - C61 * C2995) * C115 +
            (C71 * C3129 - C61 * C3132) * C63) *
               C62 * C14614 +
           ((C61 * C2997 - C71 * C2992) * C115 +
            (C61 * C3133 - C71 * C3130) * C63) *
               C62 * C14592) *
              C14589) *
         C14341) /
            (p * q * std::sqrt(p + q));
    d2eeyy[22] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) * C61 * C62 *
               C14387 * C14624 -
           (C115 * C439 - C213 * C377 - C115 * C539 + C63 * C589) * C61 * C62 *
               C14387 * C14612 +
           (C115 * C440 - C213 * C378 - C115 * C540 + C63 * C590) * C61 * C62 *
               C14387 * C14589) *
              C374 +
          ((C115 * C441 - C213 * C379 - C115 * C541 + C63 * C591) * C61 * C62 *
               C14387 * C14612 -
           (C115 * C117 - C213 * C74 - C115 * C182 + C63 * C215) * C61 * C62 *
               C14387 * C14624 -
           (C115 * C442 - C213 * C380 - C115 * C542 + C63 * C592) * C61 * C62 *
               C14387 * C14589) *
              C375 +
          ((C115 * C118 - C213 * C75 - C115 * C183 + C63 * C216) * C61 * C62 *
               C14387 * C14624 -
           (C115 * C443 - C213 * C381 - C115 * C543 + C63 * C593) * C61 * C62 *
               C14387 * C14612 +
           (C115 * C444 - C213 * C382 - C115 * C544 + C63 * C594) * C61 * C62 *
               C14387 * C14589) *
              C14583)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) * C61 * C62 *
              C14387 * C14369 * C66 -
          (C115 * C117 - C213 * C74 - C115 * C182 + C63 * C215) * C61 * C62 *
              C14387 * C14369 * C67 +
          (C115 * C118 - C213 * C75 - C115 * C183 + C63 * C216) * C61 * C62 *
              C14387 * C14369 * C68 -
          (C115 * C119 - C213 * C76 - C115 * C184 + C63 * C217) * C61 * C62 *
              C14387 * C14369 * C69 +
          (C115 * C120 - C213 * C77 - C115 * C185 + C63 * C218) * C61 * C62 *
              C14387 * C14369 * C70)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) * C61 * C62 *
               C14625 -
           (C115 * C880 - C213 * C818 - C115 * C980 + C63 * C1030) * C61 * C62 *
               C14614 +
           (C115 * C881 - C213 * C819 - C115 * C981 + C63 * C1031) * C61 * C62 *
               C14592) *
              C14369 * C374 +
          ((C115 * C882 - C213 * C820 - C115 * C982 + C63 * C1032) * C61 * C62 *
               C14614 -
           (C115 * C117 - C213 * C74 - C115 * C182 + C63 * C215) * C61 * C62 *
               C14625 -
           (C115 * C883 - C213 * C821 - C115 * C983 + C63 * C1033) * C61 * C62 *
               C14592) *
              C14369 * C375 +
          ((C115 * C118 - C213 * C75 - C115 * C183 + C63 * C216) * C61 * C62 *
               C14625 -
           (C115 * C884 - C213 * C822 - C115 * C984 + C63 * C1034) * C61 * C62 *
               C14614 +
           (C115 * C885 - C213 * C823 - C115 * C985 + C63 * C1035) * C61 * C62 *
               C14592) *
              C14369 * C14583)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) * C61 * C62 *
               C14387 * C2406 -
           (C115 * C439 - C213 * C377 - C115 * C539 + C63 * C589) * C61 * C62 *
               C14387 * C2407 +
           (C115 * C440 - C213 * C378 - C115 * C540 + C63 * C590) * C61 * C62 *
               C14387 * C14589) *
              C14621 +
          ((C115 * C441 - C213 * C379 - C115 * C541 + C63 * C591) * C61 * C62 *
               C14387 * C2407 -
           (C115 * C117 - C213 * C74 - C115 * C182 + C63 * C215) * C61 * C62 *
               C14387 * C2406 -
           (C115 * C442 - C213 * C380 - C115 * C542 + C63 * C592) * C61 * C62 *
               C14387 * C14589) *
              C14608 +
          ((C115 * C118 - C213 * C75 - C115 * C183 + C63 * C216) * C61 * C62 *
               C14387 * C2406 -
           (C115 * C443 - C213 * C381 - C115 * C543 + C63 * C593) * C61 * C62 *
               C14387 * C2407 +
           (C115 * C444 - C213 * C382 - C115 * C544 + C63 * C594) * C61 * C62 *
               C14387 * C14589) *
              C14583)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) * C61 * C62 *
              C14387 * C2738 -
          (C115 * C439 - C213 * C377 - C115 * C539 + C63 * C589) * C61 * C62 *
              C14387 * C2739 +
          (C115 * C440 - C213 * C378 - C115 * C540 + C63 * C590) * C61 * C62 *
              C14387 * C2740 -
          (C115 * C2774 - C213 * C2744 - C115 * C2826 + C63 * C2852) * C61 *
              C62 * C14387 * C2741 +
          (C115 * C2775 - C213 * C2745 - C115 * C2827 + C63 * C2853) * C61 *
              C62 * C14387 * C2742) *
         C14341) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) * C61 * C62 *
               C14625 -
           (C115 * C880 - C213 * C818 - C115 * C980 + C63 * C1030) * C61 * C62 *
               C14614 +
           (C115 * C881 - C213 * C819 - C115 * C981 + C63 * C1031) * C61 * C62 *
               C14592) *
              C2406 +
          ((C115 * C1982 - C213 * C1920 - C115 * C2094 + C63 * C2150) * C61 *
               C62 * C14614 -
           (C115 * C439 - C213 * C377 - C115 * C539 + C63 * C589) * C61 * C62 *
               C14625 -
           (C115 * C3040 - C213 * C2990 - C115 * C3128 + C63 * C3172) * C61 *
               C62 * C14592) *
              C2407 +
          ((C115 * C440 - C213 * C378 - C115 * C540 + C63 * C590) * C61 * C62 *
               C14625 -
           (C115 * C3041 - C213 * C2991 - C115 * C3129 + C63 * C3173) * C61 *
               C62 * C14614 +
           (C115 * C3042 - C213 * C2992 - C115 * C3130 + C63 * C3174) * C61 *
               C62 * C14592) *
              C14589) *
         C14341) /
            (p * q * std::sqrt(p + q));
    d2eeyz[22] += (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((((C62 * C149 - C148 * C73) * C115 +
                      (C62 * C241 - C148 * C181) * C63) *
                         C61 * C14387 * C14624 +
                     ((C148 * C377 - C62 * C489) * C115 +
                      (C148 * C539 - C62 * C633) * C63) *
                         C61 * C14387 * C14612 +
                     ((C62 * C490 - C148 * C378) * C115 +
                      (C62 * C634 - C148 * C540) * C63) *
                         C61 * C14387 * C14589) *
                        C374 +
                    (((C148 * C74 - C62 * C150) * C115 +
                      (C148 * C182 - C62 * C242) * C63) *
                         C61 * C14387 * C14624 +
                     ((C62 * C491 - C148 * C379) * C115 +
                      (C62 * C635 - C148 * C541) * C63) *
                         C61 * C14387 * C14612 +
                     ((C148 * C380 - C62 * C492) * C115 +
                      (C148 * C542 - C62 * C636) * C63) *
                         C61 * C14387 * C14589) *
                        C375 +
                    (((C62 * C151 - C148 * C75) * C115 +
                      (C62 * C243 - C148 * C183) * C63) *
                         C61 * C14387 * C14624 +
                     ((C148 * C381 - C62 * C493) * C115 +
                      (C148 * C543 - C62 * C637) * C63) *
                         C61 * C14387 * C14612 +
                     ((C62 * C494 - C148 * C382) * C115 +
                      (C62 * C638 - C148 * C544) * C63) *
                         C61 * C14387 * C14589) *
                        C14583)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C62 * C149 - C148 * C73) * C115 +
                     (C62 * C241 - C148 * C181) * C63) *
                        C61 * C14387 * C14369 * C66 +
                    ((C148 * C74 - C62 * C150) * C115 +
                     (C148 * C182 - C62 * C242) * C63) *
                        C61 * C14387 * C14369 * C67 +
                    ((C62 * C151 - C148 * C75) * C115 +
                     (C62 * C243 - C148 * C183) * C63) *
                        C61 * C14387 * C14369 * C68 +
                    ((C148 * C76 - C62 * C152) * C115 +
                     (C148 * C184 - C62 * C244) * C63) *
                        C61 * C14387 * C14369 * C69 +
                    ((C62 * C153 - C148 * C77) * C115 +
                     (C62 * C245 - C148 * C185) * C63) *
                        C61 * C14387 * C14369 * C70)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C62 * C149 - C148 * C73) * C115 +
                      (C62 * C241 - C148 * C181) * C63) *
                         C61 * C14625 +
                     ((C148 * C818 - C62 * C930) * C115 +
                      (C148 * C980 - C62 * C1074) * C63) *
                         C61 * C14614 +
                     ((C62 * C931 - C148 * C819) * C115 +
                      (C62 * C1075 - C148 * C981) * C63) *
                         C61 * C14592) *
                        C14369 * C374 +
                    (((C148 * C74 - C62 * C150) * C115 +
                      (C148 * C182 - C62 * C242) * C63) *
                         C61 * C14625 +
                     ((C62 * C932 - C148 * C820) * C115 +
                      (C62 * C1076 - C148 * C982) * C63) *
                         C61 * C14614 +
                     ((C148 * C821 - C62 * C933) * C115 +
                      (C148 * C983 - C62 * C1077) * C63) *
                         C61 * C14592) *
                        C14369 * C375 +
                    (((C62 * C151 - C148 * C75) * C115 +
                      (C62 * C243 - C148 * C183) * C63) *
                         C61 * C14625 +
                     ((C148 * C822 - C62 * C934) * C115 +
                      (C148 * C984 - C62 * C1078) * C63) *
                         C61 * C14614 +
                     ((C62 * C935 - C148 * C823) * C115 +
                      (C62 * C1079 - C148 * C985) * C63) *
                         C61 * C14592) *
                        C14369 * C14583)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((((C62 * C149 - C148 * C73) * C115 +
                      (C62 * C241 - C148 * C181) * C63) *
                         C61 * C14387 * C2406 +
                     ((C148 * C377 - C62 * C489) * C115 +
                      (C148 * C539 - C62 * C633) * C63) *
                         C61 * C14387 * C2407 +
                     ((C62 * C490 - C148 * C378) * C115 +
                      (C62 * C634 - C148 * C540) * C63) *
                         C61 * C14387 * C14589) *
                        C14621 +
                    (((C148 * C74 - C62 * C150) * C115 +
                      (C148 * C182 - C62 * C242) * C63) *
                         C61 * C14387 * C2406 +
                     ((C62 * C491 - C148 * C379) * C115 +
                      (C62 * C635 - C148 * C541) * C63) *
                         C61 * C14387 * C2407 +
                     ((C148 * C380 - C62 * C492) * C115 +
                      (C148 * C542 - C62 * C636) * C63) *
                         C61 * C14387 * C14589) *
                        C14608 +
                    (((C62 * C151 - C148 * C75) * C115 +
                      (C62 * C243 - C148 * C183) * C63) *
                         C61 * C14387 * C2406 +
                     ((C148 * C381 - C62 * C493) * C115 +
                      (C148 * C543 - C62 * C637) * C63) *
                         C61 * C14387 * C2407 +
                     ((C62 * C494 - C148 * C382) * C115 +
                      (C62 * C638 - C148 * C544) * C63) *
                         C61 * C14387 * C14589) *
                        C14583)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C62 * C149 - C148 * C73) * C115 +
                     (C62 * C241 - C148 * C181) * C63) *
                        C61 * C14387 * C2738 +
                    ((C148 * C377 - C62 * C489) * C115 +
                     (C148 * C539 - C62 * C633) * C63) *
                        C61 * C14387 * C2739 +
                    ((C62 * C490 - C148 * C378) * C115 +
                     (C62 * C634 - C148 * C540) * C63) *
                        C61 * C14387 * C2740 +
                    ((C148 * C2744 - C62 * C2800) * C115 +
                     (C148 * C2826 - C62 * C2876) * C63) *
                        C61 * C14387 * C2741 +
                    ((C62 * C2801 - C148 * C2745) * C115 +
                     (C62 * C2877 - C148 * C2827) * C63) *
                        C61 * C14387 * C2742) *
                   C14341) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C62 * C149 - C148 * C73) * C115 +
                      (C62 * C241 - C148 * C181) * C63) *
                         C61 * C14625 +
                     ((C148 * C818 - C62 * C930) * C115 +
                      (C148 * C980 - C62 * C1074) * C63) *
                         C61 * C14614 +
                     ((C62 * C931 - C148 * C819) * C115 +
                      (C62 * C1075 - C148 * C981) * C63) *
                         C61 * C14592) *
                        C2406 +
                    (((C148 * C377 - C62 * C489) * C115 +
                      (C148 * C539 - C62 * C633) * C63) *
                         C61 * C14625 +
                     ((C62 * C2038 - C148 * C1920) * C115 +
                      (C62 * C2203 - C148 * C2094) * C63) *
                         C61 * C14614 +
                     ((C148 * C2990 - C62 * C3084) * C115 +
                      (C148 * C3128 - C62 * C3213) * C63) *
                         C61 * C14592) *
                        C2407 +
                    (((C62 * C490 - C148 * C378) * C115 +
                      (C62 * C634 - C148 * C540) * C63) *
                         C61 * C14625 +
                     ((C148 * C2991 - C62 * C3085) * C115 +
                      (C148 * C3129 - C62 * C3214) * C63) *
                         C61 * C14614 +
                     ((C62 * C3086 - C148 * C2992) * C115 +
                      (C62 * C3215 - C148 * C3130) * C63) *
                         C61 * C14592) *
                        C14589) *
                   C14341) /
                      (p * q * std::sqrt(p + q));
    d2eezx[22] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
               C63 * C14387 * C14624 +
           ((C71 * C377 - C61 * C383) * C148 +
            (C71 * C677 - C61 * C683) * C62) *
               C63 * C14387 * C14612 +
           ((C61 * C385 - C71 * C378) * C148 +
            (C61 * C684 - C71 * C678) * C62) *
               C63 * C14387 * C14589) *
              C374 +
          (((C71 * C74 - C61 * C80) * C148 + (C71 * C269 - C61 * C274) * C62) *
               C63 * C14387 * C14624 +
           ((C61 * C387 - C71 * C379) * C148 +
            (C61 * C685 - C71 * C679) * C62) *
               C63 * C14387 * C14612 +
           ((C71 * C380 - C61 * C389) * C148 +
            (C71 * C680 - C61 * C686) * C62) *
               C63 * C14387 * C14589) *
              C375 +
          (((C61 * C82 - C71 * C75) * C148 + (C61 * C275 - C71 * C270) * C62) *
               C63 * C14387 * C14624 +
           ((C71 * C381 - C61 * C391) * C148 +
            (C71 * C681 - C61 * C687) * C62) *
               C63 * C14387 * C14612 +
           ((C61 * C393 - C71 * C382) * C148 +
            (C61 * C688 - C71 * C682) * C62) *
               C63 * C14387 * C14589) *
              C14583)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
              C63 * C14387 * C14369 * C66 +
          ((C71 * C74 - C61 * C80) * C148 + (C71 * C269 - C61 * C274) * C62) *
              C63 * C14387 * C14369 * C67 +
          ((C61 * C82 - C71 * C75) * C148 + (C61 * C275 - C71 * C270) * C62) *
              C63 * C14387 * C14369 * C68 +
          ((C71 * C76 - C61 * C84) * C148 + (C71 * C271 - C61 * C276) * C62) *
              C63 * C14387 * C14369 * C69 +
          ((C61 * C86 - C71 * C77) * C148 + (C61 * C277 - C71 * C272) * C62) *
              C63 * C14387 * C14369 * C70)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
               C63 * C14625 +
           ((C71 * C818 - C61 * C824) * C148 +
            (C71 * C1118 - C61 * C1124) * C62) *
               C63 * C14614 +
           ((C61 * C826 - C71 * C819) * C148 +
            (C61 * C1125 - C71 * C1119) * C62) *
               C63 * C14592) *
              C14369 * C374 +
          (((C71 * C74 - C61 * C80) * C148 + (C71 * C269 - C61 * C274) * C62) *
               C63 * C14625 +
           ((C61 * C828 - C71 * C820) * C148 +
            (C61 * C1126 - C71 * C1120) * C62) *
               C63 * C14614 +
           ((C71 * C821 - C61 * C830) * C148 +
            (C71 * C1121 - C61 * C1127) * C62) *
               C63 * C14592) *
              C14369 * C375 +
          (((C61 * C82 - C71 * C75) * C148 + (C61 * C275 - C71 * C270) * C62) *
               C63 * C14625 +
           ((C71 * C822 - C61 * C832) * C148 +
            (C71 * C1122 - C61 * C1128) * C62) *
               C63 * C14614 +
           ((C61 * C834 - C71 * C823) * C148 +
            (C61 * C1129 - C71 * C1123) * C62) *
               C63 * C14592) *
              C14369 * C14583)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
               C63 * C14387 * C2406 +
           ((C71 * C377 - C61 * C383) * C148 +
            (C71 * C677 - C61 * C683) * C62) *
               C63 * C14387 * C2407 +
           ((C61 * C385 - C71 * C378) * C148 +
            (C61 * C684 - C71 * C678) * C62) *
               C63 * C14387 * C14589) *
              C14621 +
          (((C71 * C74 - C61 * C80) * C148 + (C71 * C269 - C61 * C274) * C62) *
               C63 * C14387 * C2406 +
           ((C61 * C387 - C71 * C379) * C148 +
            (C61 * C685 - C71 * C679) * C62) *
               C63 * C14387 * C2407 +
           ((C71 * C380 - C61 * C389) * C148 +
            (C71 * C680 - C61 * C686) * C62) *
               C63 * C14387 * C14589) *
              C14608 +
          (((C61 * C82 - C71 * C75) * C148 + (C61 * C275 - C71 * C270) * C62) *
               C63 * C14387 * C2406 +
           ((C71 * C381 - C61 * C391) * C148 +
            (C71 * C681 - C61 * C687) * C62) *
               C63 * C14387 * C2407 +
           ((C61 * C393 - C71 * C382) * C148 +
            (C61 * C688 - C71 * C682) * C62) *
               C63 * C14387 * C14589) *
              C14583)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
              C63 * C14387 * C2738 +
          ((C71 * C377 - C61 * C383) * C148 + (C71 * C677 - C61 * C683) * C62) *
              C63 * C14387 * C2739 +
          ((C61 * C385 - C71 * C378) * C148 + (C61 * C684 - C71 * C678) * C62) *
              C63 * C14387 * C2740 +
          ((C71 * C2744 - C61 * C2746) * C148 +
           (C71 * C2900 - C61 * C2902) * C62) *
              C63 * C14387 * C2741 +
          ((C61 * C2748 - C71 * C2745) * C148 +
           (C61 * C2903 - C71 * C2901) * C62) *
              C63 * C14387 * C2742) *
         C14341) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
               C63 * C14625 +
           ((C71 * C818 - C61 * C824) * C148 +
            (C71 * C1118 - C61 * C1124) * C62) *
               C63 * C14614 +
           ((C61 * C826 - C71 * C819) * C148 +
            (C61 * C1125 - C71 * C1119) * C62) *
               C63 * C14592) *
              C2406 +
          (((C71 * C377 - C61 * C383) * C148 +
            (C71 * C677 - C61 * C683) * C62) *
               C63 * C14625 +
           ((C61 * C1923 - C71 * C1920) * C148 +
            (C61 * C2259 - C71 * C2256) * C62) *
               C63 * C14614 +
           ((C71 * C2990 - C61 * C2993) * C148 +
            (C71 * C3254 - C61 * C3257) * C62) *
               C63 * C14592) *
              C2407 +
          (((C61 * C385 - C71 * C378) * C148 +
            (C61 * C684 - C71 * C678) * C62) *
               C63 * C14625 +
           ((C71 * C2991 - C61 * C2995) * C148 +
            (C71 * C3255 - C61 * C3258) * C62) *
               C63 * C14614 +
           ((C61 * C2997 - C71 * C2992) * C148 +
            (C61 * C3259 - C71 * C3256) * C62) *
               C63 * C14592) *
              C14589) *
         C14341) /
            (p * q * std::sqrt(p + q));
    d2eezy[22] += (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((((C63 * C116 - C115 * C73) * C148 +
                      (C63 * C300 - C115 * C268) * C62) *
                         C61 * C14387 * C14624 +
                     ((C115 * C377 - C63 * C439) * C148 +
                      (C115 * C677 - C63 * C727) * C62) *
                         C61 * C14387 * C14612 +
                     ((C63 * C440 - C115 * C378) * C148 +
                      (C63 * C728 - C115 * C678) * C62) *
                         C61 * C14387 * C14589) *
                        C374 +
                    (((C115 * C74 - C63 * C117) * C148 +
                      (C115 * C269 - C63 * C301) * C62) *
                         C61 * C14387 * C14624 +
                     ((C63 * C441 - C115 * C379) * C148 +
                      (C63 * C729 - C115 * C679) * C62) *
                         C61 * C14387 * C14612 +
                     ((C115 * C380 - C63 * C442) * C148 +
                      (C115 * C680 - C63 * C730) * C62) *
                         C61 * C14387 * C14589) *
                        C375 +
                    (((C63 * C118 - C115 * C75) * C148 +
                      (C63 * C302 - C115 * C270) * C62) *
                         C61 * C14387 * C14624 +
                     ((C115 * C381 - C63 * C443) * C148 +
                      (C115 * C681 - C63 * C731) * C62) *
                         C61 * C14387 * C14612 +
                     ((C63 * C444 - C115 * C382) * C148 +
                      (C63 * C732 - C115 * C682) * C62) *
                         C61 * C14387 * C14589) *
                        C14583)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C63 * C116 - C115 * C73) * C148 +
                     (C63 * C300 - C115 * C268) * C62) *
                        C61 * C14387 * C14369 * C66 +
                    ((C115 * C74 - C63 * C117) * C148 +
                     (C115 * C269 - C63 * C301) * C62) *
                        C61 * C14387 * C14369 * C67 +
                    ((C63 * C118 - C115 * C75) * C148 +
                     (C63 * C302 - C115 * C270) * C62) *
                        C61 * C14387 * C14369 * C68 +
                    ((C115 * C76 - C63 * C119) * C148 +
                     (C115 * C271 - C63 * C303) * C62) *
                        C61 * C14387 * C14369 * C69 +
                    ((C63 * C120 - C115 * C77) * C148 +
                     (C63 * C304 - C115 * C272) * C62) *
                        C61 * C14387 * C14369 * C70)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C63 * C116 - C115 * C73) * C148 +
                      (C63 * C300 - C115 * C268) * C62) *
                         C61 * C14625 +
                     ((C115 * C818 - C63 * C880) * C148 +
                      (C115 * C1118 - C63 * C1168) * C62) *
                         C61 * C14614 +
                     ((C63 * C881 - C115 * C819) * C148 +
                      (C63 * C1169 - C115 * C1119) * C62) *
                         C61 * C14592) *
                        C14369 * C374 +
                    (((C115 * C74 - C63 * C117) * C148 +
                      (C115 * C269 - C63 * C301) * C62) *
                         C61 * C14625 +
                     ((C63 * C882 - C115 * C820) * C148 +
                      (C63 * C1170 - C115 * C1120) * C62) *
                         C61 * C14614 +
                     ((C115 * C821 - C63 * C883) * C148 +
                      (C115 * C1121 - C63 * C1171) * C62) *
                         C61 * C14592) *
                        C14369 * C375 +
                    (((C63 * C118 - C115 * C75) * C148 +
                      (C63 * C302 - C115 * C270) * C62) *
                         C61 * C14625 +
                     ((C115 * C822 - C63 * C884) * C148 +
                      (C115 * C1122 - C63 * C1172) * C62) *
                         C61 * C14614 +
                     ((C63 * C885 - C115 * C823) * C148 +
                      (C63 * C1173 - C115 * C1123) * C62) *
                         C61 * C14592) *
                        C14369 * C14583)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((((C63 * C116 - C115 * C73) * C148 +
                      (C63 * C300 - C115 * C268) * C62) *
                         C61 * C14387 * C2406 +
                     ((C115 * C377 - C63 * C439) * C148 +
                      (C115 * C677 - C63 * C727) * C62) *
                         C61 * C14387 * C2407 +
                     ((C63 * C440 - C115 * C378) * C148 +
                      (C63 * C728 - C115 * C678) * C62) *
                         C61 * C14387 * C14589) *
                        C14621 +
                    (((C115 * C74 - C63 * C117) * C148 +
                      (C115 * C269 - C63 * C301) * C62) *
                         C61 * C14387 * C2406 +
                     ((C63 * C441 - C115 * C379) * C148 +
                      (C63 * C729 - C115 * C679) * C62) *
                         C61 * C14387 * C2407 +
                     ((C115 * C380 - C63 * C442) * C148 +
                      (C115 * C680 - C63 * C730) * C62) *
                         C61 * C14387 * C14589) *
                        C14608 +
                    (((C63 * C118 - C115 * C75) * C148 +
                      (C63 * C302 - C115 * C270) * C62) *
                         C61 * C14387 * C2406 +
                     ((C115 * C381 - C63 * C443) * C148 +
                      (C115 * C681 - C63 * C731) * C62) *
                         C61 * C14387 * C2407 +
                     ((C63 * C444 - C115 * C382) * C148 +
                      (C63 * C732 - C115 * C682) * C62) *
                         C61 * C14387 * C14589) *
                        C14583)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C63 * C116 - C115 * C73) * C148 +
                     (C63 * C300 - C115 * C268) * C62) *
                        C61 * C14387 * C2738 +
                    ((C115 * C377 - C63 * C439) * C148 +
                     (C115 * C677 - C63 * C727) * C62) *
                        C61 * C14387 * C2739 +
                    ((C63 * C440 - C115 * C378) * C148 +
                     (C63 * C728 - C115 * C678) * C62) *
                        C61 * C14387 * C2740 +
                    ((C115 * C2744 - C63 * C2774) * C148 +
                     (C115 * C2900 - C63 * C2926) * C62) *
                        C61 * C14387 * C2741 +
                    ((C63 * C2775 - C115 * C2745) * C148 +
                     (C63 * C2927 - C115 * C2901) * C62) *
                        C61 * C14387 * C2742) *
                   C14341) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C63 * C116 - C115 * C73) * C148 +
                      (C63 * C300 - C115 * C268) * C62) *
                         C61 * C14625 +
                     ((C115 * C818 - C63 * C880) * C148 +
                      (C115 * C1118 - C63 * C1168) * C62) *
                         C61 * C14614 +
                     ((C63 * C881 - C115 * C819) * C148 +
                      (C63 * C1169 - C115 * C1119) * C62) *
                         C61 * C14592) *
                        C2406 +
                    (((C115 * C377 - C63 * C439) * C148 +
                      (C115 * C677 - C63 * C727) * C62) *
                         C61 * C14625 +
                     ((C63 * C1982 - C115 * C1920) * C148 +
                      (C63 * C2312 - C115 * C2256) * C62) *
                         C61 * C14614 +
                     ((C115 * C2990 - C63 * C3040) * C148 +
                      (C115 * C3254 - C63 * C3298) * C62) *
                         C61 * C14592) *
                        C2407 +
                    (((C63 * C440 - C115 * C378) * C148 +
                      (C63 * C728 - C115 * C678) * C62) *
                         C61 * C14625 +
                     ((C115 * C2991 - C63 * C3041) * C148 +
                      (C115 * C3255 - C63 * C3299) * C62) *
                         C61 * C14614 +
                     ((C63 * C3042 - C115 * C2992) * C148 +
                      (C63 * C3300 - C115 * C3256) * C62) *
                         C61 * C14592) *
                        C14589) *
                   C14341) /
                      (p * q * std::sqrt(p + q));
    d2eezz[22] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) * C63 * C61 *
               C14387 * C14624 -
           (C148 * C489 - C327 * C377 - C148 * C677 + C62 * C771) * C63 * C61 *
               C14387 * C14612 +
           (C148 * C490 - C327 * C378 - C148 * C678 + C62 * C772) * C63 * C61 *
               C14387 * C14589) *
              C374 +
          ((C148 * C491 - C327 * C379 - C148 * C679 + C62 * C773) * C63 * C61 *
               C14387 * C14612 -
           (C148 * C150 - C327 * C74 - C148 * C269 + C62 * C329) * C63 * C61 *
               C14387 * C14624 -
           (C148 * C492 - C327 * C380 - C148 * C680 + C62 * C774) * C63 * C61 *
               C14387 * C14589) *
              C375 +
          ((C148 * C151 - C327 * C75 - C148 * C270 + C62 * C330) * C63 * C61 *
               C14387 * C14624 -
           (C148 * C493 - C327 * C381 - C148 * C681 + C62 * C775) * C63 * C61 *
               C14387 * C14612 +
           (C148 * C494 - C327 * C382 - C148 * C682 + C62 * C776) * C63 * C61 *
               C14387 * C14589) *
              C14583)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) * C63 * C61 *
              C14387 * C14369 * C66 -
          (C148 * C150 - C327 * C74 - C148 * C269 + C62 * C329) * C63 * C61 *
              C14387 * C14369 * C67 +
          (C148 * C151 - C327 * C75 - C148 * C270 + C62 * C330) * C63 * C61 *
              C14387 * C14369 * C68 -
          (C148 * C152 - C327 * C76 - C148 * C271 + C62 * C331) * C63 * C61 *
              C14387 * C14369 * C69 +
          (C148 * C153 - C327 * C77 - C148 * C272 + C62 * C332) * C63 * C61 *
              C14387 * C14369 * C70)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) * C63 * C61 *
               C14625 -
           (C148 * C930 - C327 * C818 - C148 * C1118 + C62 * C1212) * C63 *
               C61 * C14614 +
           (C148 * C931 - C327 * C819 - C148 * C1119 + C62 * C1213) * C63 *
               C61 * C14592) *
              C14369 * C374 +
          ((C148 * C932 - C327 * C820 - C148 * C1120 + C62 * C1214) * C63 *
               C61 * C14614 -
           (C148 * C150 - C327 * C74 - C148 * C269 + C62 * C329) * C63 * C61 *
               C14625 -
           (C148 * C933 - C327 * C821 - C148 * C1121 + C62 * C1215) * C63 *
               C61 * C14592) *
              C14369 * C375 +
          ((C148 * C151 - C327 * C75 - C148 * C270 + C62 * C330) * C63 * C61 *
               C14625 -
           (C148 * C934 - C327 * C822 - C148 * C1122 + C62 * C1216) * C63 *
               C61 * C14614 +
           (C148 * C935 - C327 * C823 - C148 * C1123 + C62 * C1217) * C63 *
               C61 * C14592) *
              C14369 * C14583)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) * C63 * C61 *
               C14387 * C2406 -
           (C148 * C489 - C327 * C377 - C148 * C677 + C62 * C771) * C63 * C61 *
               C14387 * C2407 +
           (C148 * C490 - C327 * C378 - C148 * C678 + C62 * C772) * C63 * C61 *
               C14387 * C14589) *
              C14621 +
          ((C148 * C491 - C327 * C379 - C148 * C679 + C62 * C773) * C63 * C61 *
               C14387 * C2407 -
           (C148 * C150 - C327 * C74 - C148 * C269 + C62 * C329) * C63 * C61 *
               C14387 * C2406 -
           (C148 * C492 - C327 * C380 - C148 * C680 + C62 * C774) * C63 * C61 *
               C14387 * C14589) *
              C14608 +
          ((C148 * C151 - C327 * C75 - C148 * C270 + C62 * C330) * C63 * C61 *
               C14387 * C2406 -
           (C148 * C493 - C327 * C381 - C148 * C681 + C62 * C775) * C63 * C61 *
               C14387 * C2407 +
           (C148 * C494 - C327 * C382 - C148 * C682 + C62 * C776) * C63 * C61 *
               C14387 * C14589) *
              C14583)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) * C63 * C61 *
              C14387 * C2738 -
          (C148 * C489 - C327 * C377 - C148 * C677 + C62 * C771) * C63 * C61 *
              C14387 * C2739 +
          (C148 * C490 - C327 * C378 - C148 * C678 + C62 * C772) * C63 * C61 *
              C14387 * C2740 -
          (C148 * C2800 - C327 * C2744 - C148 * C2900 + C62 * C2950) * C63 *
              C61 * C14387 * C2741 +
          (C148 * C2801 - C327 * C2745 - C148 * C2901 + C62 * C2951) * C63 *
              C61 * C14387 * C2742) *
         C14341) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) * C63 * C61 *
               C14625 -
           (C148 * C930 - C327 * C818 - C148 * C1118 + C62 * C1212) * C63 *
               C61 * C14614 +
           (C148 * C931 - C327 * C819 - C148 * C1119 + C62 * C1213) * C63 *
               C61 * C14592) *
              C2406 +
          ((C148 * C2038 - C327 * C1920 - C148 * C2256 + C62 * C2365) * C63 *
               C61 * C14614 -
           (C148 * C489 - C327 * C377 - C148 * C677 + C62 * C771) * C63 * C61 *
               C14625 -
           (C148 * C3084 - C327 * C2990 - C148 * C3254 + C62 * C3339) * C63 *
               C61 * C14592) *
              C2407 +
          ((C148 * C490 - C327 * C378 - C148 * C678 + C62 * C772) * C63 * C61 *
               C14625 -
           (C148 * C3085 - C327 * C2991 - C148 * C3255 + C62 * C3340) * C63 *
               C61 * C14614 +
           (C148 * C3086 - C327 * C2992 - C148 * C3256 + C62 * C3341) * C63 *
               C61 * C14592) *
              C14589) *
         C14341) /
            (p * q * std::sqrt(p + q));
    d2eexx[23] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 *
                         C63 * C14564 -
                     (C71 * C824 - C72 * C818 - C71 * C825 + C61 * C836) * C62 *
                         C63 * C14474) *
                        C14369 * C1254 +
                    ((C71 * C828 - C72 * C820 - C71 * C829 + C61 * C838) * C62 *
                         C63 * C14474 -
                     (C71 * C80 - C72 * C74 - C71 * C81 + C61 * C89) * C62 *
                         C63 * C14564) *
                        C14369 * C1255 +
                    ((C71 * C82 - C72 * C75 - C71 * C83 + C61 * C90) * C62 *
                         C63 * C14564 -
                     (C71 * C832 - C72 * C822 - C71 * C833 + C61 * C840) * C62 *
                         C63 * C14474) *
                        C14369 * C1256 +
                    ((C71 * C1583 - C72 * C1582 - C71 * C1584 + C61 * C1585) *
                         C62 * C63 * C14474 -
                     (C71 * C84 - C72 * C76 - C71 * C85 + C61 * C91) * C62 *
                         C63 * C14564) *
                        C14369 * C14593)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 *
                          C63 * C14564 -
                      (C71 * C824 - C72 * C818 - C71 * C825 + C61 * C836) *
                          C62 * C63 * C14474) *
                         C2406 +
                     ((C71 * C1923 - C72 * C1920 - C71 * C1924 + C61 * C1929) *
                          C62 * C63 * C14474 -
                      (C71 * C383 - C72 * C377 - C71 * C384 + C61 * C395) *
                          C62 * C63 * C14564) *
                         C2407 +
                     ((C71 * C385 - C72 * C378 - C71 * C386 + C61 * C396) *
                          C62 * C63 * C14564 -
                      (C71 * C2995 - C72 * C2991 - C71 * C2996 + C61 * C3000) *
                          C62 * C63 * C14474) *
                         C14589) *
                        C14549 +
                    (((C71 * C828 - C72 * C820 - C71 * C829 + C61 * C838) *
                          C62 * C63 * C14474 -
                      (C71 * C80 - C72 * C74 - C71 * C81 + C61 * C89) * C62 *
                          C63 * C14564) *
                         C2406 +
                     ((C71 * C387 - C72 * C379 - C71 * C388 + C61 * C397) *
                          C62 * C63 * C14564 -
                      (C71 * C1925 - C72 * C1921 - C71 * C1926 + C61 * C1930) *
                          C62 * C63 * C14474) *
                         C2407 +
                     ((C71 * C3721 - C72 * C3720 - C71 * C3722 + C61 * C3723) *
                          C62 * C63 * C14474 -
                      (C71 * C389 - C72 * C380 - C71 * C390 + C61 * C398) *
                          C62 * C63 * C14564) *
                         C14589) *
                        C14352)) /
                      (p * q * std::sqrt(p + q));
    d2eexy[23] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C63 * C116 - C115 * C73) * C71 + (C63 * C121 - C115 * C79) * C61) *
               C62 * C14564 +
           ((C115 * C818 - C63 * C880) * C71 +
            (C115 * C825 - C63 * C886) * C61) *
               C62 * C14474) *
              C14369 * C1254 +
          (((C115 * C74 - C63 * C117) * C71 + (C115 * C81 - C63 * C122) * C61) *
               C62 * C14564 +
           ((C63 * C882 - C115 * C820) * C71 +
            (C63 * C888 - C115 * C829) * C61) *
               C62 * C14474) *
              C14369 * C1255 +
          (((C63 * C118 - C115 * C75) * C71 + (C63 * C123 - C115 * C83) * C61) *
               C62 * C14564 +
           ((C115 * C822 - C63 * C884) * C71 +
            (C115 * C833 - C63 * C890) * C61) *
               C62 * C14474) *
              C14369 * C1256 +
          (((C115 * C76 - C63 * C119) * C71 + (C115 * C85 - C63 * C124) * C61) *
               C62 * C14564 +
           ((C63 * C1620 - C115 * C1582) * C71 +
            (C63 * C1621 - C115 * C1584) * C61) *
               C62 * C14474) *
              C14369 * C14593)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C63 * C116 - C115 * C73) * C71 +
             (C63 * C121 - C115 * C79) * C61) *
                C62 * C14564 +
            ((C115 * C818 - C63 * C880) * C71 +
             (C115 * C825 - C63 * C886) * C61) *
                C62 * C14474) *
               C2406 +
           (((C115 * C377 - C63 * C439) * C71 +
             (C115 * C384 - C63 * C445) * C61) *
                C62 * C14564 +
            ((C63 * C1982 - C115 * C1920) * C71 +
             (C63 * C1985 - C115 * C1924) * C61) *
                C62 * C14474) *
               C2407 +
           (((C63 * C440 - C115 * C378) * C71 +
             (C63 * C446 - C115 * C386) * C61) *
                C62 * C14564 +
            ((C115 * C2991 - C63 * C3041) * C71 +
             (C115 * C2996 - C63 * C3044) * C61) *
                C62 * C14474) *
               C14589) *
              C14549 +
          ((((C115 * C74 - C63 * C117) * C71 +
             (C115 * C81 - C63 * C122) * C61) *
                C62 * C14564 +
            ((C63 * C882 - C115 * C820) * C71 +
             (C63 * C888 - C115 * C829) * C61) *
                C62 * C14474) *
               C2406 +
           (((C63 * C441 - C115 * C379) * C71 +
             (C63 * C447 - C115 * C388) * C61) *
                C62 * C14564 +
            ((C115 * C1921 - C63 * C1983) * C71 +
             (C115 * C1926 - C63 * C1986) * C61) *
                C62 * C14474) *
               C2407 +
           (((C115 * C380 - C63 * C442) * C71 +
             (C115 * C390 - C63 * C448) * C61) *
                C62 * C14564 +
            ((C63 * C3774 - C115 * C3720) * C71 +
             (C63 * C3775 - C115 * C3722) * C61) *
                C62 * C14474) *
               C14589) *
              C14352)) /
            (p * q * std::sqrt(p + q));
    d2eexz[23] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C62 * C149 - C148 * C73) * C71 + (C62 * C154 - C148 * C79) * C61) *
               C63 * C14564 +
           ((C148 * C818 - C62 * C930) * C71 +
            (C148 * C825 - C62 * C936) * C61) *
               C63 * C14474) *
              C14369 * C1254 +
          (((C148 * C74 - C62 * C150) * C71 + (C148 * C81 - C62 * C155) * C61) *
               C63 * C14564 +
           ((C62 * C932 - C148 * C820) * C71 +
            (C62 * C938 - C148 * C829) * C61) *
               C63 * C14474) *
              C14369 * C1255 +
          (((C62 * C151 - C148 * C75) * C71 + (C62 * C156 - C148 * C83) * C61) *
               C63 * C14564 +
           ((C148 * C822 - C62 * C934) * C71 +
            (C148 * C833 - C62 * C940) * C61) *
               C63 * C14474) *
              C14369 * C1256 +
          (((C148 * C76 - C62 * C152) * C71 + (C148 * C85 - C62 * C157) * C61) *
               C63 * C14564 +
           ((C62 * C1656 - C148 * C1582) * C71 +
            (C62 * C1657 - C148 * C1584) * C61) *
               C63 * C14474) *
              C14369 * C14593)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C62 * C149 - C148 * C73) * C71 +
             (C62 * C154 - C148 * C79) * C61) *
                C63 * C14564 +
            ((C148 * C818 - C62 * C930) * C71 +
             (C148 * C825 - C62 * C936) * C61) *
                C63 * C14474) *
               C2406 +
           (((C148 * C377 - C62 * C489) * C71 +
             (C148 * C384 - C62 * C495) * C61) *
                C63 * C14564 +
            ((C62 * C2038 - C148 * C1920) * C71 +
             (C62 * C2041 - C148 * C1924) * C61) *
                C63 * C14474) *
               C2407 +
           (((C62 * C490 - C148 * C378) * C71 +
             (C62 * C496 - C148 * C386) * C61) *
                C63 * C14564 +
            ((C148 * C2991 - C62 * C3085) * C71 +
             (C148 * C2996 - C62 * C3088) * C61) *
                C63 * C14474) *
               C14589) *
              C14549 +
          ((((C148 * C74 - C62 * C150) * C71 +
             (C148 * C81 - C62 * C155) * C61) *
                C63 * C14564 +
            ((C62 * C932 - C148 * C820) * C71 +
             (C62 * C938 - C148 * C829) * C61) *
                C63 * C14474) *
               C2406 +
           (((C62 * C491 - C148 * C379) * C71 +
             (C62 * C497 - C148 * C388) * C61) *
                C63 * C14564 +
            ((C148 * C1921 - C62 * C2039) * C71 +
             (C148 * C1926 - C62 * C2042) * C61) *
                C63 * C14474) *
               C2407 +
           (((C148 * C380 - C62 * C492) * C71 +
             (C148 * C390 - C62 * C498) * C61) *
                C63 * C14564 +
            ((C62 * C3826 - C148 * C3720) * C71 +
             (C62 * C3827 - C148 * C3722) * C61) *
                C63 * C14474) *
               C14589) *
              C14352)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[23] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
               C62 * C14564 +
           ((C71 * C818 - C61 * C824) * C115 +
            (C71 * C980 - C61 * C986) * C63) *
               C62 * C14474) *
              C14369 * C1254 +
          (((C71 * C74 - C61 * C80) * C115 + (C71 * C182 - C61 * C187) * C63) *
               C62 * C14564 +
           ((C61 * C828 - C71 * C820) * C115 +
            (C61 * C988 - C71 * C982) * C63) *
               C62 * C14474) *
              C14369 * C1255 +
          (((C61 * C82 - C71 * C75) * C115 + (C61 * C188 - C71 * C183) * C63) *
               C62 * C14564 +
           ((C71 * C822 - C61 * C832) * C115 +
            (C71 * C984 - C61 * C990) * C63) *
               C62 * C14474) *
              C14369 * C1256 +
          (((C71 * C76 - C61 * C84) * C115 + (C71 * C184 - C61 * C189) * C63) *
               C62 * C14564 +
           ((C61 * C1583 - C71 * C1582) * C115 +
            (C61 * C1693 - C71 * C1692) * C63) *
               C62 * C14474) *
              C14369 * C14593)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
                C62 * C14564 +
            ((C71 * C818 - C61 * C824) * C115 +
             (C71 * C980 - C61 * C986) * C63) *
                C62 * C14474) *
               C2406 +
           (((C71 * C377 - C61 * C383) * C115 +
             (C71 * C539 - C61 * C545) * C63) *
                C62 * C14564 +
            ((C61 * C1923 - C71 * C1920) * C115 +
             (C61 * C2097 - C71 * C2094) * C63) *
                C62 * C14474) *
               C2407 +
           (((C61 * C385 - C71 * C378) * C115 +
             (C61 * C546 - C71 * C540) * C63) *
                C62 * C14564 +
            ((C71 * C2991 - C61 * C2995) * C115 +
             (C71 * C3129 - C61 * C3132) * C63) *
                C62 * C14474) *
               C14589) *
              C14549 +
          ((((C71 * C74 - C61 * C80) * C115 + (C71 * C182 - C61 * C187) * C63) *
                C62 * C14564 +
            ((C61 * C828 - C71 * C820) * C115 +
             (C61 * C988 - C71 * C982) * C63) *
                C62 * C14474) *
               C2406 +
           (((C61 * C387 - C71 * C379) * C115 +
             (C61 * C547 - C71 * C541) * C63) *
                C62 * C14564 +
            ((C71 * C1921 - C61 * C1925) * C115 +
             (C71 * C2095 - C61 * C2098) * C63) *
                C62 * C14474) *
               C2407 +
           (((C71 * C380 - C61 * C389) * C115 +
             (C71 * C542 - C61 * C548) * C63) *
                C62 * C14564 +
            ((C61 * C3721 - C71 * C3720) * C115 +
             (C61 * C3879 - C71 * C3878) * C63) *
                C62 * C14474) *
               C14589) *
              C14352)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[23] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) * C61 * C62 *
               C14564 -
           (C115 * C880 - C213 * C818 - C115 * C980 + C63 * C1030) * C61 * C62 *
               C14474) *
              C14369 * C1254 +
          ((C115 * C882 - C213 * C820 - C115 * C982 + C63 * C1032) * C61 * C62 *
               C14474 -
           (C115 * C117 - C213 * C74 - C115 * C182 + C63 * C215) * C61 * C62 *
               C14564) *
              C14369 * C1255 +
          ((C115 * C118 - C213 * C75 - C115 * C183 + C63 * C216) * C61 * C62 *
               C14564 -
           (C115 * C884 - C213 * C822 - C115 * C984 + C63 * C1034) * C61 * C62 *
               C14474) *
              C14369 * C1256 +
          ((C115 * C1620 - C213 * C1582 - C115 * C1692 + C63 * C1728) * C61 *
               C62 * C14474 -
           (C115 * C119 - C213 * C76 - C115 * C184 + C63 * C217) * C61 * C62 *
               C14564) *
              C14369 * C14593)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) * C61 * C62 *
                C14564 -
            (C115 * C880 - C213 * C818 - C115 * C980 + C63 * C1030) * C61 *
                C62 * C14474) *
               C2406 +
           ((C115 * C1982 - C213 * C1920 - C115 * C2094 + C63 * C2150) * C61 *
                C62 * C14474 -
            (C115 * C439 - C213 * C377 - C115 * C539 + C63 * C589) * C61 * C62 *
                C14564) *
               C2407 +
           ((C115 * C440 - C213 * C378 - C115 * C540 + C63 * C590) * C61 * C62 *
                C14564 -
            (C115 * C3041 - C213 * C2991 - C115 * C3129 + C63 * C3173) * C61 *
                C62 * C14474) *
               C14589) *
              C14549 +
          (((C115 * C882 - C213 * C820 - C115 * C982 + C63 * C1032) * C61 *
                C62 * C14474 -
            (C115 * C117 - C213 * C74 - C115 * C182 + C63 * C215) * C61 * C62 *
                C14564) *
               C2406 +
           ((C115 * C441 - C213 * C379 - C115 * C541 + C63 * C591) * C61 * C62 *
                C14564 -
            (C115 * C1983 - C213 * C1921 - C115 * C2095 + C63 * C2151) * C61 *
                C62 * C14474) *
               C2407 +
           ((C115 * C3774 - C213 * C3720 - C115 * C3878 + C63 * C3930) * C61 *
                C62 * C14474 -
            (C115 * C442 - C213 * C380 - C115 * C542 + C63 * C592) * C61 * C62 *
                C14564) *
               C14589) *
              C14352)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[23] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C62 * C149 - C148 * C73) * C115 +
                      (C62 * C241 - C148 * C181) * C63) *
                         C61 * C14564 +
                     ((C148 * C818 - C62 * C930) * C115 +
                      (C148 * C980 - C62 * C1074) * C63) *
                         C61 * C14474) *
                        C14369 * C1254 +
                    (((C148 * C74 - C62 * C150) * C115 +
                      (C148 * C182 - C62 * C242) * C63) *
                         C61 * C14564 +
                     ((C62 * C932 - C148 * C820) * C115 +
                      (C62 * C1076 - C148 * C982) * C63) *
                         C61 * C14474) *
                        C14369 * C1255 +
                    (((C62 * C151 - C148 * C75) * C115 +
                      (C62 * C243 - C148 * C183) * C63) *
                         C61 * C14564 +
                     ((C148 * C822 - C62 * C934) * C115 +
                      (C148 * C984 - C62 * C1078) * C63) *
                         C61 * C14474) *
                        C14369 * C1256 +
                    (((C148 * C76 - C62 * C152) * C115 +
                      (C148 * C184 - C62 * C244) * C63) *
                         C61 * C14564 +
                     ((C62 * C1656 - C148 * C1582) * C115 +
                      (C62 * C1763 - C148 * C1692) * C63) *
                         C61 * C14474) *
                        C14369 * C14593)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((((C62 * C149 - C148 * C73) * C115 +
                       (C62 * C241 - C148 * C181) * C63) *
                          C61 * C14564 +
                      ((C148 * C818 - C62 * C930) * C115 +
                       (C148 * C980 - C62 * C1074) * C63) *
                          C61 * C14474) *
                         C2406 +
                     (((C148 * C377 - C62 * C489) * C115 +
                       (C148 * C539 - C62 * C633) * C63) *
                          C61 * C14564 +
                      ((C62 * C2038 - C148 * C1920) * C115 +
                       (C62 * C2203 - C148 * C2094) * C63) *
                          C61 * C14474) *
                         C2407 +
                     (((C62 * C490 - C148 * C378) * C115 +
                       (C62 * C634 - C148 * C540) * C63) *
                          C61 * C14564 +
                      ((C148 * C2991 - C62 * C3085) * C115 +
                       (C148 * C3129 - C62 * C3214) * C63) *
                          C61 * C14474) *
                         C14589) *
                        C14549 +
                    ((((C148 * C74 - C62 * C150) * C115 +
                       (C148 * C182 - C62 * C242) * C63) *
                          C61 * C14564 +
                      ((C62 * C932 - C148 * C820) * C115 +
                       (C62 * C1076 - C148 * C982) * C63) *
                          C61 * C14474) *
                         C2406 +
                     (((C62 * C491 - C148 * C379) * C115 +
                       (C62 * C635 - C148 * C541) * C63) *
                          C61 * C14564 +
                      ((C148 * C1921 - C62 * C2039) * C115 +
                       (C148 * C2095 - C62 * C2204) * C63) *
                          C61 * C14474) *
                         C2407 +
                     (((C148 * C380 - C62 * C492) * C115 +
                       (C148 * C542 - C62 * C636) * C63) *
                          C61 * C14564 +
                      ((C62 * C3826 - C148 * C3720) * C115 +
                       (C62 * C3981 - C148 * C3878) * C63) *
                          C61 * C14474) *
                         C14589) *
                        C14352)) /
                      (p * q * std::sqrt(p + q));
    d2eezx[23] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
               C63 * C14564 +
           ((C71 * C818 - C61 * C824) * C148 +
            (C71 * C1118 - C61 * C1124) * C62) *
               C63 * C14474) *
              C14369 * C1254 +
          (((C71 * C74 - C61 * C80) * C148 + (C71 * C269 - C61 * C274) * C62) *
               C63 * C14564 +
           ((C61 * C828 - C71 * C820) * C148 +
            (C61 * C1126 - C71 * C1120) * C62) *
               C63 * C14474) *
              C14369 * C1255 +
          (((C61 * C82 - C71 * C75) * C148 + (C61 * C275 - C71 * C270) * C62) *
               C63 * C14564 +
           ((C71 * C822 - C61 * C832) * C148 +
            (C71 * C1122 - C61 * C1128) * C62) *
               C63 * C14474) *
              C14369 * C1256 +
          (((C71 * C76 - C61 * C84) * C148 + (C71 * C271 - C61 * C276) * C62) *
               C63 * C14564 +
           ((C61 * C1583 - C71 * C1582) * C148 +
            (C61 * C1799 - C71 * C1798) * C62) *
               C63 * C14474) *
              C14369 * C14593)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
                C63 * C14564 +
            ((C71 * C818 - C61 * C824) * C148 +
             (C71 * C1118 - C61 * C1124) * C62) *
                C63 * C14474) *
               C2406 +
           (((C71 * C377 - C61 * C383) * C148 +
             (C71 * C677 - C61 * C683) * C62) *
                C63 * C14564 +
            ((C61 * C1923 - C71 * C1920) * C148 +
             (C61 * C2259 - C71 * C2256) * C62) *
                C63 * C14474) *
               C2407 +
           (((C61 * C385 - C71 * C378) * C148 +
             (C61 * C684 - C71 * C678) * C62) *
                C63 * C14564 +
            ((C71 * C2991 - C61 * C2995) * C148 +
             (C71 * C3255 - C61 * C3258) * C62) *
                C63 * C14474) *
               C14589) *
              C14549 +
          ((((C71 * C74 - C61 * C80) * C148 + (C71 * C269 - C61 * C274) * C62) *
                C63 * C14564 +
            ((C61 * C828 - C71 * C820) * C148 +
             (C61 * C1126 - C71 * C1120) * C62) *
                C63 * C14474) *
               C2406 +
           (((C61 * C387 - C71 * C379) * C148 +
             (C61 * C685 - C71 * C679) * C62) *
                C63 * C14564 +
            ((C71 * C1921 - C61 * C1925) * C148 +
             (C71 * C2257 - C61 * C2260) * C62) *
                C63 * C14474) *
               C2407 +
           (((C71 * C380 - C61 * C389) * C148 +
             (C71 * C680 - C61 * C686) * C62) *
                C63 * C14564 +
            ((C61 * C3721 - C71 * C3720) * C148 +
             (C61 * C4033 - C71 * C4032) * C62) *
                C63 * C14474) *
               C14589) *
              C14352)) /
            (p * q * std::sqrt(p + q));
    d2eezy[23] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C63 * C116 - C115 * C73) * C148 +
                      (C63 * C300 - C115 * C268) * C62) *
                         C61 * C14564 +
                     ((C115 * C818 - C63 * C880) * C148 +
                      (C115 * C1118 - C63 * C1168) * C62) *
                         C61 * C14474) *
                        C14369 * C1254 +
                    (((C115 * C74 - C63 * C117) * C148 +
                      (C115 * C269 - C63 * C301) * C62) *
                         C61 * C14564 +
                     ((C63 * C882 - C115 * C820) * C148 +
                      (C63 * C1170 - C115 * C1120) * C62) *
                         C61 * C14474) *
                        C14369 * C1255 +
                    (((C63 * C118 - C115 * C75) * C148 +
                      (C63 * C302 - C115 * C270) * C62) *
                         C61 * C14564 +
                     ((C115 * C822 - C63 * C884) * C148 +
                      (C115 * C1122 - C63 * C1172) * C62) *
                         C61 * C14474) *
                        C14369 * C1256 +
                    (((C115 * C76 - C63 * C119) * C148 +
                      (C115 * C271 - C63 * C303) * C62) *
                         C61 * C14564 +
                     ((C63 * C1620 - C115 * C1582) * C148 +
                      (C63 * C1834 - C115 * C1798) * C62) *
                         C61 * C14474) *
                        C14369 * C14593)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((((C63 * C116 - C115 * C73) * C148 +
                       (C63 * C300 - C115 * C268) * C62) *
                          C61 * C14564 +
                      ((C115 * C818 - C63 * C880) * C148 +
                       (C115 * C1118 - C63 * C1168) * C62) *
                          C61 * C14474) *
                         C2406 +
                     (((C115 * C377 - C63 * C439) * C148 +
                       (C115 * C677 - C63 * C727) * C62) *
                          C61 * C14564 +
                      ((C63 * C1982 - C115 * C1920) * C148 +
                       (C63 * C2312 - C115 * C2256) * C62) *
                          C61 * C14474) *
                         C2407 +
                     (((C63 * C440 - C115 * C378) * C148 +
                       (C63 * C728 - C115 * C678) * C62) *
                          C61 * C14564 +
                      ((C115 * C2991 - C63 * C3041) * C148 +
                       (C115 * C3255 - C63 * C3299) * C62) *
                          C61 * C14474) *
                         C14589) *
                        C14549 +
                    ((((C115 * C74 - C63 * C117) * C148 +
                       (C115 * C269 - C63 * C301) * C62) *
                          C61 * C14564 +
                      ((C63 * C882 - C115 * C820) * C148 +
                       (C63 * C1170 - C115 * C1120) * C62) *
                          C61 * C14474) *
                         C2406 +
                     (((C63 * C441 - C115 * C379) * C148 +
                       (C63 * C729 - C115 * C679) * C62) *
                          C61 * C14564 +
                      ((C115 * C1921 - C63 * C1983) * C148 +
                       (C115 * C2257 - C63 * C2313) * C62) *
                          C61 * C14474) *
                         C2407 +
                     (((C115 * C380 - C63 * C442) * C148 +
                       (C115 * C680 - C63 * C730) * C62) *
                          C61 * C14564 +
                      ((C63 * C3774 - C115 * C3720) * C148 +
                       (C63 * C4084 - C115 * C4032) * C62) *
                          C61 * C14474) *
                         C14589) *
                        C14352)) /
                      (p * q * std::sqrt(p + q));
    d2eezz[23] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) * C63 * C61 *
               C14564 -
           (C148 * C930 - C327 * C818 - C148 * C1118 + C62 * C1212) * C63 *
               C61 * C14474) *
              C14369 * C1254 +
          ((C148 * C932 - C327 * C820 - C148 * C1120 + C62 * C1214) * C63 *
               C61 * C14474 -
           (C148 * C150 - C327 * C74 - C148 * C269 + C62 * C329) * C63 * C61 *
               C14564) *
              C14369 * C1255 +
          ((C148 * C151 - C327 * C75 - C148 * C270 + C62 * C330) * C63 * C61 *
               C14564 -
           (C148 * C934 - C327 * C822 - C148 * C1122 + C62 * C1216) * C63 *
               C61 * C14474) *
              C14369 * C1256 +
          ((C148 * C1656 - C327 * C1582 - C148 * C1798 + C62 * C1869) * C63 *
               C61 * C14474 -
           (C148 * C152 - C327 * C76 - C148 * C271 + C62 * C331) * C63 * C61 *
               C14564) *
              C14369 * C14593)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) * C63 * C61 *
                C14564 -
            (C148 * C930 - C327 * C818 - C148 * C1118 + C62 * C1212) * C63 *
                C61 * C14474) *
               C2406 +
           ((C148 * C2038 - C327 * C1920 - C148 * C2256 + C62 * C2365) * C63 *
                C61 * C14474 -
            (C148 * C489 - C327 * C377 - C148 * C677 + C62 * C771) * C63 * C61 *
                C14564) *
               C2407 +
           ((C148 * C490 - C327 * C378 - C148 * C678 + C62 * C772) * C63 * C61 *
                C14564 -
            (C148 * C3085 - C327 * C2991 - C148 * C3255 + C62 * C3340) * C63 *
                C61 * C14474) *
               C14589) *
              C14549 +
          (((C148 * C932 - C327 * C820 - C148 * C1120 + C62 * C1214) * C63 *
                C61 * C14474 -
            (C148 * C150 - C327 * C74 - C148 * C269 + C62 * C329) * C63 * C61 *
                C14564) *
               C2406 +
           ((C148 * C491 - C327 * C379 - C148 * C679 + C62 * C773) * C63 * C61 *
                C14564 -
            (C148 * C2039 - C327 * C1921 - C148 * C2257 + C62 * C2366) * C63 *
                C61 * C14474) *
               C2407 +
           ((C148 * C3826 - C327 * C3720 - C148 * C4032 + C62 * C4135) * C63 *
                C61 * C14474 -
            (C148 * C492 - C327 * C380 - C148 * C680 + C62 * C774) * C63 * C61 *
                C14564) *
               C14589) *
              C14352)) /
            (p * q * std::sqrt(p + q));
    d2eexx[24] += (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   ((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 *
                        C63 * C14387 * C14369 * C66 -
                    (C71 * C80 - C72 * C74 - C71 * C81 + C61 * C89) * C62 *
                        C63 * C14387 * C14369 * C67 +
                    (C71 * C82 - C72 * C75 - C71 * C83 + C61 * C90) * C62 *
                        C63 * C14387 * C14369 * C68 -
                    (C71 * C84 - C72 * C76 - C71 * C85 + C61 * C91) * C62 *
                        C63 * C14387 * C14369 * C69 +
                    (C71 * C86 - C72 * C77 - C71 * C87 + C61 * C92) * C62 *
                        C63 * C14387 * C14369 * C70)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 *
                         C63 * C14387 * C14624 -
                     (C71 * C383 - C72 * C377 - C71 * C384 + C61 * C395) * C62 *
                         C63 * C14387 * C14612 +
                     (C71 * C385 - C72 * C378 - C71 * C386 + C61 * C396) * C62 *
                         C63 * C14387 * C14589) *
                        C374 +
                    ((C71 * C387 - C72 * C379 - C71 * C388 + C61 * C397) * C62 *
                         C63 * C14387 * C14612 -
                     (C71 * C80 - C72 * C74 - C71 * C81 + C61 * C89) * C62 *
                         C63 * C14387 * C14624 -
                     (C71 * C389 - C72 * C380 - C71 * C390 + C61 * C398) * C62 *
                         C63 * C14387 * C14589) *
                        C375 +
                    ((C71 * C82 - C72 * C75 - C71 * C83 + C61 * C90) * C62 *
                         C63 * C14387 * C14624 -
                     (C71 * C391 - C72 * C381 - C71 * C392 + C61 * C399) * C62 *
                         C63 * C14387 * C14612 +
                     (C71 * C393 - C72 * C382 - C71 * C394 + C61 * C400) * C62 *
                         C63 * C14387 * C14589) *
                        C14583)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 *
                         C63 * C14387 * C2406 -
                     (C71 * C383 - C72 * C377 - C71 * C384 + C61 * C395) * C62 *
                         C63 * C14387 * C2407 +
                     (C71 * C385 - C72 * C378 - C71 * C386 + C61 * C396) * C62 *
                         C63 * C14387 * C14589) *
                        C14621 +
                    ((C71 * C387 - C72 * C379 - C71 * C388 + C61 * C397) * C62 *
                         C63 * C14387 * C2407 -
                     (C71 * C80 - C72 * C74 - C71 * C81 + C61 * C89) * C62 *
                         C63 * C14387 * C2406 -
                     (C71 * C389 - C72 * C380 - C71 * C390 + C61 * C398) * C62 *
                         C63 * C14387 * C14589) *
                        C14608 +
                    ((C71 * C82 - C72 * C75 - C71 * C83 + C61 * C90) * C62 *
                         C63 * C14387 * C2406 -
                     (C71 * C391 - C72 * C381 - C71 * C392 + C61 * C399) * C62 *
                         C63 * C14387 * C2407 +
                     (C71 * C393 - C72 * C382 - C71 * C394 + C61 * C400) * C62 *
                         C63 * C14387 * C14589) *
                        C14583)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   ((C71 * C78 - C72 * C73 - C71 * C79 + C61 * C88) * C62 *
                        C63 * C14387 * C2738 -
                    (C71 * C383 - C72 * C377 - C71 * C384 + C61 * C395) * C62 *
                        C63 * C14387 * C2739 +
                    (C71 * C385 - C72 * C378 - C71 * C386 + C61 * C396) * C62 *
                        C63 * C14387 * C2740 -
                    (C71 * C2746 - C72 * C2744 - C71 * C2747 + C61 * C2750) *
                        C62 * C63 * C14387 * C2741 +
                    (C71 * C2748 - C72 * C2745 - C71 * C2749 + C61 * C2751) *
                        C62 * C63 * C14387 * C2742) *
                   C14341) /
                      (p * q * std::sqrt(p + q));
    d2eexy[24] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C63 * C116 - C115 * C73) * C71 + (C63 * C121 - C115 * C79) * C61) *
              C62 * C14387 * C14369 * C66 +
          ((C115 * C74 - C63 * C117) * C71 + (C115 * C81 - C63 * C122) * C61) *
              C62 * C14387 * C14369 * C67 +
          ((C63 * C118 - C115 * C75) * C71 + (C63 * C123 - C115 * C83) * C61) *
              C62 * C14387 * C14369 * C68 +
          ((C115 * C76 - C63 * C119) * C71 + (C115 * C85 - C63 * C124) * C61) *
              C62 * C14387 * C14369 * C69 +
          ((C63 * C120 - C115 * C77) * C71 + (C63 * C125 - C115 * C87) * C61) *
              C62 * C14387 * C14369 * C70)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C63 * C116 - C115 * C73) * C71 + (C63 * C121 - C115 * C79) * C61) *
               C62 * C14387 * C14624 +
           ((C115 * C377 - C63 * C439) * C71 +
            (C115 * C384 - C63 * C445) * C61) *
               C62 * C14387 * C14612 +
           ((C63 * C440 - C115 * C378) * C71 +
            (C63 * C446 - C115 * C386) * C61) *
               C62 * C14387 * C14589) *
              C374 +
          (((C115 * C74 - C63 * C117) * C71 + (C115 * C81 - C63 * C122) * C61) *
               C62 * C14387 * C14624 +
           ((C63 * C441 - C115 * C379) * C71 +
            (C63 * C447 - C115 * C388) * C61) *
               C62 * C14387 * C14612 +
           ((C115 * C380 - C63 * C442) * C71 +
            (C115 * C390 - C63 * C448) * C61) *
               C62 * C14387 * C14589) *
              C375 +
          (((C63 * C118 - C115 * C75) * C71 + (C63 * C123 - C115 * C83) * C61) *
               C62 * C14387 * C14624 +
           ((C115 * C381 - C63 * C443) * C71 +
            (C115 * C392 - C63 * C449) * C61) *
               C62 * C14387 * C14612 +
           ((C63 * C444 - C115 * C382) * C71 +
            (C63 * C450 - C115 * C394) * C61) *
               C62 * C14387 * C14589) *
              C14583)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C63 * C116 - C115 * C73) * C71 + (C63 * C121 - C115 * C79) * C61) *
               C62 * C14387 * C2406 +
           ((C115 * C377 - C63 * C439) * C71 +
            (C115 * C384 - C63 * C445) * C61) *
               C62 * C14387 * C2407 +
           ((C63 * C440 - C115 * C378) * C71 +
            (C63 * C446 - C115 * C386) * C61) *
               C62 * C14387 * C14589) *
              C14621 +
          (((C115 * C74 - C63 * C117) * C71 + (C115 * C81 - C63 * C122) * C61) *
               C62 * C14387 * C2406 +
           ((C63 * C441 - C115 * C379) * C71 +
            (C63 * C447 - C115 * C388) * C61) *
               C62 * C14387 * C2407 +
           ((C115 * C380 - C63 * C442) * C71 +
            (C115 * C390 - C63 * C448) * C61) *
               C62 * C14387 * C14589) *
              C14608 +
          (((C63 * C118 - C115 * C75) * C71 + (C63 * C123 - C115 * C83) * C61) *
               C62 * C14387 * C2406 +
           ((C115 * C381 - C63 * C443) * C71 +
            (C115 * C392 - C63 * C449) * C61) *
               C62 * C14387 * C2407 +
           ((C63 * C444 - C115 * C382) * C71 +
            (C63 * C450 - C115 * C394) * C61) *
               C62 * C14387 * C14589) *
              C14583)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C63 * C116 - C115 * C73) * C71 + (C63 * C121 - C115 * C79) * C61) *
              C62 * C14387 * C2738 +
          ((C115 * C377 - C63 * C439) * C71 +
           (C115 * C384 - C63 * C445) * C61) *
              C62 * C14387 * C2739 +
          ((C63 * C440 - C115 * C378) * C71 +
           (C63 * C446 - C115 * C386) * C61) *
              C62 * C14387 * C2740 +
          ((C115 * C2744 - C63 * C2774) * C71 +
           (C115 * C2747 - C63 * C2776) * C61) *
              C62 * C14387 * C2741 +
          ((C63 * C2775 - C115 * C2745) * C71 +
           (C63 * C2777 - C115 * C2749) * C61) *
              C62 * C14387 * C2742) *
         C14341) /
            (p * q * std::sqrt(p + q));
    d2eexz[24] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C62 * C149 - C148 * C73) * C71 + (C62 * C154 - C148 * C79) * C61) *
              C63 * C14387 * C14369 * C66 +
          ((C148 * C74 - C62 * C150) * C71 + (C148 * C81 - C62 * C155) * C61) *
              C63 * C14387 * C14369 * C67 +
          ((C62 * C151 - C148 * C75) * C71 + (C62 * C156 - C148 * C83) * C61) *
              C63 * C14387 * C14369 * C68 +
          ((C148 * C76 - C62 * C152) * C71 + (C148 * C85 - C62 * C157) * C61) *
              C63 * C14387 * C14369 * C69 +
          ((C62 * C153 - C148 * C77) * C71 + (C62 * C158 - C148 * C87) * C61) *
              C63 * C14387 * C14369 * C70)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C62 * C149 - C148 * C73) * C71 + (C62 * C154 - C148 * C79) * C61) *
               C63 * C14387 * C14624 +
           ((C148 * C377 - C62 * C489) * C71 +
            (C148 * C384 - C62 * C495) * C61) *
               C63 * C14387 * C14612 +
           ((C62 * C490 - C148 * C378) * C71 +
            (C62 * C496 - C148 * C386) * C61) *
               C63 * C14387 * C14589) *
              C374 +
          (((C148 * C74 - C62 * C150) * C71 + (C148 * C81 - C62 * C155) * C61) *
               C63 * C14387 * C14624 +
           ((C62 * C491 - C148 * C379) * C71 +
            (C62 * C497 - C148 * C388) * C61) *
               C63 * C14387 * C14612 +
           ((C148 * C380 - C62 * C492) * C71 +
            (C148 * C390 - C62 * C498) * C61) *
               C63 * C14387 * C14589) *
              C375 +
          (((C62 * C151 - C148 * C75) * C71 + (C62 * C156 - C148 * C83) * C61) *
               C63 * C14387 * C14624 +
           ((C148 * C381 - C62 * C493) * C71 +
            (C148 * C392 - C62 * C499) * C61) *
               C63 * C14387 * C14612 +
           ((C62 * C494 - C148 * C382) * C71 +
            (C62 * C500 - C148 * C394) * C61) *
               C63 * C14387 * C14589) *
              C14583)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C62 * C149 - C148 * C73) * C71 + (C62 * C154 - C148 * C79) * C61) *
               C63 * C14387 * C2406 +
           ((C148 * C377 - C62 * C489) * C71 +
            (C148 * C384 - C62 * C495) * C61) *
               C63 * C14387 * C2407 +
           ((C62 * C490 - C148 * C378) * C71 +
            (C62 * C496 - C148 * C386) * C61) *
               C63 * C14387 * C14589) *
              C14621 +
          (((C148 * C74 - C62 * C150) * C71 + (C148 * C81 - C62 * C155) * C61) *
               C63 * C14387 * C2406 +
           ((C62 * C491 - C148 * C379) * C71 +
            (C62 * C497 - C148 * C388) * C61) *
               C63 * C14387 * C2407 +
           ((C148 * C380 - C62 * C492) * C71 +
            (C148 * C390 - C62 * C498) * C61) *
               C63 * C14387 * C14589) *
              C14608 +
          (((C62 * C151 - C148 * C75) * C71 + (C62 * C156 - C148 * C83) * C61) *
               C63 * C14387 * C2406 +
           ((C148 * C381 - C62 * C493) * C71 +
            (C148 * C392 - C62 * C499) * C61) *
               C63 * C14387 * C2407 +
           ((C62 * C494 - C148 * C382) * C71 +
            (C62 * C500 - C148 * C394) * C61) *
               C63 * C14387 * C14589) *
              C14583)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C62 * C149 - C148 * C73) * C71 + (C62 * C154 - C148 * C79) * C61) *
              C63 * C14387 * C2738 +
          ((C148 * C377 - C62 * C489) * C71 +
           (C148 * C384 - C62 * C495) * C61) *
              C63 * C14387 * C2739 +
          ((C62 * C490 - C148 * C378) * C71 +
           (C62 * C496 - C148 * C386) * C61) *
              C63 * C14387 * C2740 +
          ((C148 * C2744 - C62 * C2800) * C71 +
           (C148 * C2747 - C62 * C2802) * C61) *
              C63 * C14387 * C2741 +
          ((C62 * C2801 - C148 * C2745) * C71 +
           (C62 * C2803 - C148 * C2749) * C61) *
              C63 * C14387 * C2742) *
         C14341) /
            (p * q * std::sqrt(p + q));
    d2eeyx[24] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
              C62 * C14387 * C14369 * C66 +
          ((C71 * C74 - C61 * C80) * C115 + (C71 * C182 - C61 * C187) * C63) *
              C62 * C14387 * C14369 * C67 +
          ((C61 * C82 - C71 * C75) * C115 + (C61 * C188 - C71 * C183) * C63) *
              C62 * C14387 * C14369 * C68 +
          ((C71 * C76 - C61 * C84) * C115 + (C71 * C184 - C61 * C189) * C63) *
              C62 * C14387 * C14369 * C69 +
          ((C61 * C86 - C71 * C77) * C115 + (C61 * C190 - C71 * C185) * C63) *
              C62 * C14387 * C14369 * C70)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
               C62 * C14387 * C14624 +
           ((C71 * C377 - C61 * C383) * C115 +
            (C71 * C539 - C61 * C545) * C63) *
               C62 * C14387 * C14612 +
           ((C61 * C385 - C71 * C378) * C115 +
            (C61 * C546 - C71 * C540) * C63) *
               C62 * C14387 * C14589) *
              C374 +
          (((C71 * C74 - C61 * C80) * C115 + (C71 * C182 - C61 * C187) * C63) *
               C62 * C14387 * C14624 +
           ((C61 * C387 - C71 * C379) * C115 +
            (C61 * C547 - C71 * C541) * C63) *
               C62 * C14387 * C14612 +
           ((C71 * C380 - C61 * C389) * C115 +
            (C71 * C542 - C61 * C548) * C63) *
               C62 * C14387 * C14589) *
              C375 +
          (((C61 * C82 - C71 * C75) * C115 + (C61 * C188 - C71 * C183) * C63) *
               C62 * C14387 * C14624 +
           ((C71 * C381 - C61 * C391) * C115 +
            (C71 * C543 - C61 * C549) * C63) *
               C62 * C14387 * C14612 +
           ((C61 * C393 - C71 * C382) * C115 +
            (C61 * C550 - C71 * C544) * C63) *
               C62 * C14387 * C14589) *
              C14583)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
               C62 * C14387 * C2406 +
           ((C71 * C377 - C61 * C383) * C115 +
            (C71 * C539 - C61 * C545) * C63) *
               C62 * C14387 * C2407 +
           ((C61 * C385 - C71 * C378) * C115 +
            (C61 * C546 - C71 * C540) * C63) *
               C62 * C14387 * C14589) *
              C14621 +
          (((C71 * C74 - C61 * C80) * C115 + (C71 * C182 - C61 * C187) * C63) *
               C62 * C14387 * C2406 +
           ((C61 * C387 - C71 * C379) * C115 +
            (C61 * C547 - C71 * C541) * C63) *
               C62 * C14387 * C2407 +
           ((C71 * C380 - C61 * C389) * C115 +
            (C71 * C542 - C61 * C548) * C63) *
               C62 * C14387 * C14589) *
              C14608 +
          (((C61 * C82 - C71 * C75) * C115 + (C61 * C188 - C71 * C183) * C63) *
               C62 * C14387 * C2406 +
           ((C71 * C381 - C61 * C391) * C115 +
            (C71 * C543 - C61 * C549) * C63) *
               C62 * C14387 * C2407 +
           ((C61 * C393 - C71 * C382) * C115 +
            (C61 * C550 - C71 * C544) * C63) *
               C62 * C14387 * C14589) *
              C14583)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C61 * C78 - C71 * C73) * C115 + (C61 * C186 - C71 * C181) * C63) *
              C62 * C14387 * C2738 +
          ((C71 * C377 - C61 * C383) * C115 + (C71 * C539 - C61 * C545) * C63) *
              C62 * C14387 * C2739 +
          ((C61 * C385 - C71 * C378) * C115 + (C61 * C546 - C71 * C540) * C63) *
              C62 * C14387 * C2740 +
          ((C71 * C2744 - C61 * C2746) * C115 +
           (C71 * C2826 - C61 * C2828) * C63) *
              C62 * C14387 * C2741 +
          ((C61 * C2748 - C71 * C2745) * C115 +
           (C61 * C2829 - C71 * C2827) * C63) *
              C62 * C14387 * C2742) *
         C14341) /
            (p * q * std::sqrt(p + q));
    d2eeyy[24] += (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   ((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) *
                        C61 * C62 * C14387 * C14369 * C66 -
                    (C115 * C117 - C213 * C74 - C115 * C182 + C63 * C215) *
                        C61 * C62 * C14387 * C14369 * C67 +
                    (C115 * C118 - C213 * C75 - C115 * C183 + C63 * C216) *
                        C61 * C62 * C14387 * C14369 * C68 -
                    (C115 * C119 - C213 * C76 - C115 * C184 + C63 * C217) *
                        C61 * C62 * C14387 * C14369 * C69 +
                    (C115 * C120 - C213 * C77 - C115 * C185 + C63 * C218) *
                        C61 * C62 * C14387 * C14369 * C70)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) *
                         C61 * C62 * C14387 * C14624 -
                     (C115 * C439 - C213 * C377 - C115 * C539 + C63 * C589) *
                         C61 * C62 * C14387 * C14612 +
                     (C115 * C440 - C213 * C378 - C115 * C540 + C63 * C590) *
                         C61 * C62 * C14387 * C14589) *
                        C374 +
                    ((C115 * C441 - C213 * C379 - C115 * C541 + C63 * C591) *
                         C61 * C62 * C14387 * C14612 -
                     (C115 * C117 - C213 * C74 - C115 * C182 + C63 * C215) *
                         C61 * C62 * C14387 * C14624 -
                     (C115 * C442 - C213 * C380 - C115 * C542 + C63 * C592) *
                         C61 * C62 * C14387 * C14589) *
                        C375 +
                    ((C115 * C118 - C213 * C75 - C115 * C183 + C63 * C216) *
                         C61 * C62 * C14387 * C14624 -
                     (C115 * C443 - C213 * C381 - C115 * C543 + C63 * C593) *
                         C61 * C62 * C14387 * C14612 +
                     (C115 * C444 - C213 * C382 - C115 * C544 + C63 * C594) *
                         C61 * C62 * C14387 * C14589) *
                        C14583)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) *
                         C61 * C62 * C14387 * C2406 -
                     (C115 * C439 - C213 * C377 - C115 * C539 + C63 * C589) *
                         C61 * C62 * C14387 * C2407 +
                     (C115 * C440 - C213 * C378 - C115 * C540 + C63 * C590) *
                         C61 * C62 * C14387 * C14589) *
                        C14621 +
                    ((C115 * C441 - C213 * C379 - C115 * C541 + C63 * C591) *
                         C61 * C62 * C14387 * C2407 -
                     (C115 * C117 - C213 * C74 - C115 * C182 + C63 * C215) *
                         C61 * C62 * C14387 * C2406 -
                     (C115 * C442 - C213 * C380 - C115 * C542 + C63 * C592) *
                         C61 * C62 * C14387 * C14589) *
                        C14608 +
                    ((C115 * C118 - C213 * C75 - C115 * C183 + C63 * C216) *
                         C61 * C62 * C14387 * C2406 -
                     (C115 * C443 - C213 * C381 - C115 * C543 + C63 * C593) *
                         C61 * C62 * C14387 * C2407 +
                     (C115 * C444 - C213 * C382 - C115 * C544 + C63 * C594) *
                         C61 * C62 * C14387 * C14589) *
                        C14583)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   ((C115 * C116 - C213 * C73 - C115 * C181 + C63 * C214) *
                        C61 * C62 * C14387 * C2738 -
                    (C115 * C439 - C213 * C377 - C115 * C539 + C63 * C589) *
                        C61 * C62 * C14387 * C2739 +
                    (C115 * C440 - C213 * C378 - C115 * C540 + C63 * C590) *
                        C61 * C62 * C14387 * C2740 -
                    (C115 * C2774 - C213 * C2744 - C115 * C2826 + C63 * C2852) *
                        C61 * C62 * C14387 * C2741 +
                    (C115 * C2775 - C213 * C2745 - C115 * C2827 + C63 * C2853) *
                        C61 * C62 * C14387 * C2742) *
                   C14341) /
                      (p * q * std::sqrt(p + q));
    d2eeyz[24] += (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C62 * C149 - C148 * C73) * C115 +
                     (C62 * C241 - C148 * C181) * C63) *
                        C61 * C14387 * C14369 * C66 +
                    ((C148 * C74 - C62 * C150) * C115 +
                     (C148 * C182 - C62 * C242) * C63) *
                        C61 * C14387 * C14369 * C67 +
                    ((C62 * C151 - C148 * C75) * C115 +
                     (C62 * C243 - C148 * C183) * C63) *
                        C61 * C14387 * C14369 * C68 +
                    ((C148 * C76 - C62 * C152) * C115 +
                     (C148 * C184 - C62 * C244) * C63) *
                        C61 * C14387 * C14369 * C69 +
                    ((C62 * C153 - C148 * C77) * C115 +
                     (C62 * C245 - C148 * C185) * C63) *
                        C61 * C14387 * C14369 * C70)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   ((((C62 * C149 - C148 * C73) * C115 +
                      (C62 * C241 - C148 * C181) * C63) *
                         C61 * C14387 * C14624 +
                     ((C148 * C377 - C62 * C489) * C115 +
                      (C148 * C539 - C62 * C633) * C63) *
                         C61 * C14387 * C14612 +
                     ((C62 * C490 - C148 * C378) * C115 +
                      (C62 * C634 - C148 * C540) * C63) *
                         C61 * C14387 * C14589) *
                        C374 +
                    (((C148 * C74 - C62 * C150) * C115 +
                      (C148 * C182 - C62 * C242) * C63) *
                         C61 * C14387 * C14624 +
                     ((C62 * C491 - C148 * C379) * C115 +
                      (C62 * C635 - C148 * C541) * C63) *
                         C61 * C14387 * C14612 +
                     ((C148 * C380 - C62 * C492) * C115 +
                      (C148 * C542 - C62 * C636) * C63) *
                         C61 * C14387 * C14589) *
                        C375 +
                    (((C62 * C151 - C148 * C75) * C115 +
                      (C62 * C243 - C148 * C183) * C63) *
                         C61 * C14387 * C14624 +
                     ((C148 * C381 - C62 * C493) * C115 +
                      (C148 * C543 - C62 * C637) * C63) *
                         C61 * C14387 * C14612 +
                     ((C62 * C494 - C148 * C382) * C115 +
                      (C62 * C638 - C148 * C544) * C63) *
                         C61 * C14387 * C14589) *
                        C14583)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   ((((C62 * C149 - C148 * C73) * C115 +
                      (C62 * C241 - C148 * C181) * C63) *
                         C61 * C14387 * C2406 +
                     ((C148 * C377 - C62 * C489) * C115 +
                      (C148 * C539 - C62 * C633) * C63) *
                         C61 * C14387 * C2407 +
                     ((C62 * C490 - C148 * C378) * C115 +
                      (C62 * C634 - C148 * C540) * C63) *
                         C61 * C14387 * C14589) *
                        C14621 +
                    (((C148 * C74 - C62 * C150) * C115 +
                      (C148 * C182 - C62 * C242) * C63) *
                         C61 * C14387 * C2406 +
                     ((C62 * C491 - C148 * C379) * C115 +
                      (C62 * C635 - C148 * C541) * C63) *
                         C61 * C14387 * C2407 +
                     ((C148 * C380 - C62 * C492) * C115 +
                      (C148 * C542 - C62 * C636) * C63) *
                         C61 * C14387 * C14589) *
                        C14608 +
                    (((C62 * C151 - C148 * C75) * C115 +
                      (C62 * C243 - C148 * C183) * C63) *
                         C61 * C14387 * C2406 +
                     ((C148 * C381 - C62 * C493) * C115 +
                      (C148 * C543 - C62 * C637) * C63) *
                         C61 * C14387 * C2407 +
                     ((C62 * C494 - C148 * C382) * C115 +
                      (C62 * C638 - C148 * C544) * C63) *
                         C61 * C14387 * C14589) *
                        C14583)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C62 * C149 - C148 * C73) * C115 +
                     (C62 * C241 - C148 * C181) * C63) *
                        C61 * C14387 * C2738 +
                    ((C148 * C377 - C62 * C489) * C115 +
                     (C148 * C539 - C62 * C633) * C63) *
                        C61 * C14387 * C2739 +
                    ((C62 * C490 - C148 * C378) * C115 +
                     (C62 * C634 - C148 * C540) * C63) *
                        C61 * C14387 * C2740 +
                    ((C148 * C2744 - C62 * C2800) * C115 +
                     (C148 * C2826 - C62 * C2876) * C63) *
                        C61 * C14387 * C2741 +
                    ((C62 * C2801 - C148 * C2745) * C115 +
                     (C62 * C2877 - C148 * C2827) * C63) *
                        C61 * C14387 * C2742) *
                   C14341) /
                      (p * q * std::sqrt(p + q));
    d2eezx[24] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
              C63 * C14387 * C14369 * C66 +
          ((C71 * C74 - C61 * C80) * C148 + (C71 * C269 - C61 * C274) * C62) *
              C63 * C14387 * C14369 * C67 +
          ((C61 * C82 - C71 * C75) * C148 + (C61 * C275 - C71 * C270) * C62) *
              C63 * C14387 * C14369 * C68 +
          ((C71 * C76 - C61 * C84) * C148 + (C71 * C271 - C61 * C276) * C62) *
              C63 * C14387 * C14369 * C69 +
          ((C61 * C86 - C71 * C77) * C148 + (C61 * C277 - C71 * C272) * C62) *
              C63 * C14387 * C14369 * C70)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
               C63 * C14387 * C14624 +
           ((C71 * C377 - C61 * C383) * C148 +
            (C71 * C677 - C61 * C683) * C62) *
               C63 * C14387 * C14612 +
           ((C61 * C385 - C71 * C378) * C148 +
            (C61 * C684 - C71 * C678) * C62) *
               C63 * C14387 * C14589) *
              C374 +
          (((C71 * C74 - C61 * C80) * C148 + (C71 * C269 - C61 * C274) * C62) *
               C63 * C14387 * C14624 +
           ((C61 * C387 - C71 * C379) * C148 +
            (C61 * C685 - C71 * C679) * C62) *
               C63 * C14387 * C14612 +
           ((C71 * C380 - C61 * C389) * C148 +
            (C71 * C680 - C61 * C686) * C62) *
               C63 * C14387 * C14589) *
              C375 +
          (((C61 * C82 - C71 * C75) * C148 + (C61 * C275 - C71 * C270) * C62) *
               C63 * C14387 * C14624 +
           ((C71 * C381 - C61 * C391) * C148 +
            (C71 * C681 - C61 * C687) * C62) *
               C63 * C14387 * C14612 +
           ((C61 * C393 - C71 * C382) * C148 +
            (C61 * C688 - C71 * C682) * C62) *
               C63 * C14387 * C14589) *
              C14583)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
               C63 * C14387 * C2406 +
           ((C71 * C377 - C61 * C383) * C148 +
            (C71 * C677 - C61 * C683) * C62) *
               C63 * C14387 * C2407 +
           ((C61 * C385 - C71 * C378) * C148 +
            (C61 * C684 - C71 * C678) * C62) *
               C63 * C14387 * C14589) *
              C14621 +
          (((C71 * C74 - C61 * C80) * C148 + (C71 * C269 - C61 * C274) * C62) *
               C63 * C14387 * C2406 +
           ((C61 * C387 - C71 * C379) * C148 +
            (C61 * C685 - C71 * C679) * C62) *
               C63 * C14387 * C2407 +
           ((C71 * C380 - C61 * C389) * C148 +
            (C71 * C680 - C61 * C686) * C62) *
               C63 * C14387 * C14589) *
              C14608 +
          (((C61 * C82 - C71 * C75) * C148 + (C61 * C275 - C71 * C270) * C62) *
               C63 * C14387 * C2406 +
           ((C71 * C381 - C61 * C391) * C148 +
            (C71 * C681 - C61 * C687) * C62) *
               C63 * C14387 * C2407 +
           ((C61 * C393 - C71 * C382) * C148 +
            (C61 * C688 - C71 * C682) * C62) *
               C63 * C14387 * C14589) *
              C14583)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C61 * C78 - C71 * C73) * C148 + (C61 * C273 - C71 * C268) * C62) *
              C63 * C14387 * C2738 +
          ((C71 * C377 - C61 * C383) * C148 + (C71 * C677 - C61 * C683) * C62) *
              C63 * C14387 * C2739 +
          ((C61 * C385 - C71 * C378) * C148 + (C61 * C684 - C71 * C678) * C62) *
              C63 * C14387 * C2740 +
          ((C71 * C2744 - C61 * C2746) * C148 +
           (C71 * C2900 - C61 * C2902) * C62) *
              C63 * C14387 * C2741 +
          ((C61 * C2748 - C71 * C2745) * C148 +
           (C61 * C2903 - C71 * C2901) * C62) *
              C63 * C14387 * C2742) *
         C14341) /
            (p * q * std::sqrt(p + q));
    d2eezy[24] += (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C63 * C116 - C115 * C73) * C148 +
                     (C63 * C300 - C115 * C268) * C62) *
                        C61 * C14387 * C14369 * C66 +
                    ((C115 * C74 - C63 * C117) * C148 +
                     (C115 * C269 - C63 * C301) * C62) *
                        C61 * C14387 * C14369 * C67 +
                    ((C63 * C118 - C115 * C75) * C148 +
                     (C63 * C302 - C115 * C270) * C62) *
                        C61 * C14387 * C14369 * C68 +
                    ((C115 * C76 - C63 * C119) * C148 +
                     (C115 * C271 - C63 * C303) * C62) *
                        C61 * C14387 * C14369 * C69 +
                    ((C63 * C120 - C115 * C77) * C148 +
                     (C63 * C304 - C115 * C272) * C62) *
                        C61 * C14387 * C14369 * C70)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   ((((C63 * C116 - C115 * C73) * C148 +
                      (C63 * C300 - C115 * C268) * C62) *
                         C61 * C14387 * C14624 +
                     ((C115 * C377 - C63 * C439) * C148 +
                      (C115 * C677 - C63 * C727) * C62) *
                         C61 * C14387 * C14612 +
                     ((C63 * C440 - C115 * C378) * C148 +
                      (C63 * C728 - C115 * C678) * C62) *
                         C61 * C14387 * C14589) *
                        C374 +
                    (((C115 * C74 - C63 * C117) * C148 +
                      (C115 * C269 - C63 * C301) * C62) *
                         C61 * C14387 * C14624 +
                     ((C63 * C441 - C115 * C379) * C148 +
                      (C63 * C729 - C115 * C679) * C62) *
                         C61 * C14387 * C14612 +
                     ((C115 * C380 - C63 * C442) * C148 +
                      (C115 * C680 - C63 * C730) * C62) *
                         C61 * C14387 * C14589) *
                        C375 +
                    (((C63 * C118 - C115 * C75) * C148 +
                      (C63 * C302 - C115 * C270) * C62) *
                         C61 * C14387 * C14624 +
                     ((C115 * C381 - C63 * C443) * C148 +
                      (C115 * C681 - C63 * C731) * C62) *
                         C61 * C14387 * C14612 +
                     ((C63 * C444 - C115 * C382) * C148 +
                      (C63 * C732 - C115 * C682) * C62) *
                         C61 * C14387 * C14589) *
                        C14583)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   ((((C63 * C116 - C115 * C73) * C148 +
                      (C63 * C300 - C115 * C268) * C62) *
                         C61 * C14387 * C2406 +
                     ((C115 * C377 - C63 * C439) * C148 +
                      (C115 * C677 - C63 * C727) * C62) *
                         C61 * C14387 * C2407 +
                     ((C63 * C440 - C115 * C378) * C148 +
                      (C63 * C728 - C115 * C678) * C62) *
                         C61 * C14387 * C14589) *
                        C14621 +
                    (((C115 * C74 - C63 * C117) * C148 +
                      (C115 * C269 - C63 * C301) * C62) *
                         C61 * C14387 * C2406 +
                     ((C63 * C441 - C115 * C379) * C148 +
                      (C63 * C729 - C115 * C679) * C62) *
                         C61 * C14387 * C2407 +
                     ((C115 * C380 - C63 * C442) * C148 +
                      (C115 * C680 - C63 * C730) * C62) *
                         C61 * C14387 * C14589) *
                        C14608 +
                    (((C63 * C118 - C115 * C75) * C148 +
                      (C63 * C302 - C115 * C270) * C62) *
                         C61 * C14387 * C2406 +
                     ((C115 * C381 - C63 * C443) * C148 +
                      (C115 * C681 - C63 * C731) * C62) *
                         C61 * C14387 * C2407 +
                     ((C63 * C444 - C115 * C382) * C148 +
                      (C63 * C732 - C115 * C682) * C62) *
                         C61 * C14387 * C14589) *
                        C14583)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C63 * C116 - C115 * C73) * C148 +
                     (C63 * C300 - C115 * C268) * C62) *
                        C61 * C14387 * C2738 +
                    ((C115 * C377 - C63 * C439) * C148 +
                     (C115 * C677 - C63 * C727) * C62) *
                        C61 * C14387 * C2739 +
                    ((C63 * C440 - C115 * C378) * C148 +
                     (C63 * C728 - C115 * C678) * C62) *
                        C61 * C14387 * C2740 +
                    ((C115 * C2744 - C63 * C2774) * C148 +
                     (C115 * C2900 - C63 * C2926) * C62) *
                        C61 * C14387 * C2741 +
                    ((C63 * C2775 - C115 * C2745) * C148 +
                     (C63 * C2927 - C115 * C2901) * C62) *
                        C61 * C14387 * C2742) *
                   C14341) /
                      (p * q * std::sqrt(p + q));
    d2eezz[24] += (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   ((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) *
                        C63 * C61 * C14387 * C14369 * C66 -
                    (C148 * C150 - C327 * C74 - C148 * C269 + C62 * C329) *
                        C63 * C61 * C14387 * C14369 * C67 +
                    (C148 * C151 - C327 * C75 - C148 * C270 + C62 * C330) *
                        C63 * C61 * C14387 * C14369 * C68 -
                    (C148 * C152 - C327 * C76 - C148 * C271 + C62 * C331) *
                        C63 * C61 * C14387 * C14369 * C69 +
                    (C148 * C153 - C327 * C77 - C148 * C272 + C62 * C332) *
                        C63 * C61 * C14387 * C14369 * C70)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) *
                         C63 * C61 * C14387 * C14624 -
                     (C148 * C489 - C327 * C377 - C148 * C677 + C62 * C771) *
                         C63 * C61 * C14387 * C14612 +
                     (C148 * C490 - C327 * C378 - C148 * C678 + C62 * C772) *
                         C63 * C61 * C14387 * C14589) *
                        C374 +
                    ((C148 * C491 - C327 * C379 - C148 * C679 + C62 * C773) *
                         C63 * C61 * C14387 * C14612 -
                     (C148 * C150 - C327 * C74 - C148 * C269 + C62 * C329) *
                         C63 * C61 * C14387 * C14624 -
                     (C148 * C492 - C327 * C380 - C148 * C680 + C62 * C774) *
                         C63 * C61 * C14387 * C14589) *
                        C375 +
                    ((C148 * C151 - C327 * C75 - C148 * C270 + C62 * C330) *
                         C63 * C61 * C14387 * C14624 -
                     (C148 * C493 - C327 * C381 - C148 * C681 + C62 * C775) *
                         C63 * C61 * C14387 * C14612 +
                     (C148 * C494 - C327 * C382 - C148 * C682 + C62 * C776) *
                         C63 * C61 * C14387 * C14589) *
                        C14583)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) *
                         C63 * C61 * C14387 * C2406 -
                     (C148 * C489 - C327 * C377 - C148 * C677 + C62 * C771) *
                         C63 * C61 * C14387 * C2407 +
                     (C148 * C490 - C327 * C378 - C148 * C678 + C62 * C772) *
                         C63 * C61 * C14387 * C14589) *
                        C14621 +
                    ((C148 * C491 - C327 * C379 - C148 * C679 + C62 * C773) *
                         C63 * C61 * C14387 * C2407 -
                     (C148 * C150 - C327 * C74 - C148 * C269 + C62 * C329) *
                         C63 * C61 * C14387 * C2406 -
                     (C148 * C492 - C327 * C380 - C148 * C680 + C62 * C774) *
                         C63 * C61 * C14387 * C14589) *
                        C14608 +
                    ((C148 * C151 - C327 * C75 - C148 * C270 + C62 * C330) *
                         C63 * C61 * C14387 * C2406 -
                     (C148 * C493 - C327 * C381 - C148 * C681 + C62 * C775) *
                         C63 * C61 * C14387 * C2407 +
                     (C148 * C494 - C327 * C382 - C148 * C682 + C62 * C776) *
                         C63 * C61 * C14387 * C14589) *
                        C14583)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   ((C148 * C149 - C327 * C73 - C148 * C268 + C62 * C328) *
                        C63 * C61 * C14387 * C2738 -
                    (C148 * C489 - C327 * C377 - C148 * C677 + C62 * C771) *
                        C63 * C61 * C14387 * C2739 +
                    (C148 * C490 - C327 * C378 - C148 * C678 + C62 * C772) *
                        C63 * C61 * C14387 * C2740 -
                    (C148 * C2800 - C327 * C2744 - C148 * C2900 + C62 * C2950) *
                        C63 * C61 * C14387 * C2741 +
                    (C148 * C2801 - C327 * C2745 - C148 * C2901 + C62 * C2951) *
                        C63 * C61 * C14387 * C2742) *
                   C14341) /
                      (p * q * std::sqrt(p + q));
}
